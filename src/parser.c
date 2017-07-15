#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define LANGUAGE_VERSION 3
#define STATE_COUNT 429
#define SYMBOL_COUNT 81
#define TOKEN_COUNT 52
#define EXTERNAL_TOKEN_COUNT 5
#define MAX_RENAME_SEQUENCE_LENGTH 7

enum {
  sym__simple_heredoc = 1,
  sym__heredoc_beginning = 2,
  sym__heredoc_middle = 3,
  sym__heredoc_end = 4,
  sym_file_descriptor = 5,
  anon_sym_while = 6,
  anon_sym_do = 7,
  anon_sym_done = 8,
  anon_sym_if = 9,
  anon_sym_then = 10,
  anon_sym_fi = 11,
  anon_sym_elif = 12,
  anon_sym_else = 13,
  anon_sym_case = 14,
  anon_sym_in = 15,
  anon_sym_esac = 16,
  anon_sym_RPAREN = 17,
  anon_sym_SEMI_SEMI = 18,
  anon_sym_LBRACK = 19,
  anon_sym_RBRACK = 20,
  anon_sym_LBRACK_LBRACK = 21,
  anon_sym_RBRACK_RBRACK = 22,
  aux_sym_SLASH_BSLASHs_PLUS_SLASH = 23,
  anon_sym_PIPE = 24,
  anon_sym_PIPE_AMP = 25,
  anon_sym_AMP_AMP = 26,
  anon_sym_PIPE_PIPE = 27,
  anon_sym_EQ = 28,
  anon_sym_DQUOTE = 29,
  sym__quoted_chars = 30,
  sym_single_quoted_argument = 31,
  anon_sym_DOLLAR = 32,
  anon_sym_DOLLAR_LBRACE = 33,
  anon_sym_COLON = 34,
  anon_sym_COLON_QMARK = 35,
  anon_sym_RBRACE = 36,
  anon_sym_DOLLAR_LPAREN = 37,
  anon_sym_LT = 38,
  anon_sym_GT = 39,
  anon_sym_GT_GT = 40,
  anon_sym_AMP_GT = 41,
  anon_sym_AMP_GT_GT = 42,
  anon_sym_LT_AMP = 43,
  anon_sym_GT_AMP = 44,
  anon_sym_LT_LT = 45,
  anon_sym_LT_LT_DASH = 46,
  sym_leading_word = 47,
  sym_word = 48,
  sym_comment = 49,
  anon_sym_SEMI = 50,
  anon_sym_LF = 51,
  sym_program = 52,
  sym__terminated_statement = 53,
  sym_while_statement = 54,
  sym_do_group = 55,
  sym_if_statement = 56,
  sym_elif_clause = 57,
  sym_else_clause = 58,
  sym_case_statement = 59,
  sym_case_item = 60,
  sym_bracket_command = 61,
  sym_command = 62,
  sym_pipeline = 63,
  sym_list = 64,
  sym_environment_variable_assignment = 65,
  sym_quoted_argument = 66,
  sym_expansion = 67,
  sym_operator_expansion = 68,
  sym_command_substitution = 69,
  sym_file_redirect = 70,
  sym_heredoc_redirect = 71,
  sym_heredoc = 72,
  aux_sym_program_repeat1 = 73,
  aux_sym_if_statement_repeat1 = 74,
  aux_sym_case_statement_repeat1 = 75,
  aux_sym_bracket_command_repeat1 = 76,
  aux_sym_command_repeat1 = 77,
  aux_sym_command_repeat2 = 78,
  aux_sym_quoted_argument_repeat1 = 79,
  aux_sym_heredoc_repeat1 = 80,
  rename_sym_1 = 81,
  rename_sym_argument = 82,
  rename_sym_command_name = 83,
  rename_sym_variable_name = 84,
};

static const char *ts_symbol_names[] = {
  [sym__simple_heredoc] = "_simple_heredoc",
  [sym__heredoc_beginning] = "_heredoc_beginning",
  [sym__heredoc_middle] = "_heredoc_middle",
  [sym__heredoc_end] = "_heredoc_end",
  [sym_file_descriptor] = "file_descriptor",
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
  [anon_sym_GT_GT] = ">>",
  [anon_sym_AMP_GT] = "&>",
  [anon_sym_AMP_GT_GT] = "&>>",
  [anon_sym_LT_AMP] = "<&",
  [anon_sym_GT_AMP] = ">&",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_LT_LT_DASH] = "<<-",
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
  [sym_file_descriptor] = {
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
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_AMP_GT] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_AMP_GT_GT] = {
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

static TSSymbol ts_rename_sequences[24][MAX_RENAME_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = rename_sym_command_name,
  },
  [2] = {
    [0] = rename_sym_argument,
  },
  [3] = {
    [1] = rename_sym_argument,
  },
  [4] = {
    [0] = rename_sym_command_name,
  },
  [5] = {
    [1] = rename_sym_command_name,
  },
  [6] = {
    [2] = rename_sym_argument,
  },
  [7] = {
    [1] = rename_sym_variable_name,
  },
  [8] = {
    [0] = rename_sym_command_name,
  },
  [9] = {
    [0] = rename_sym_variable_name,
  },
  [10] = {
    [0] = rename_sym_variable_name,
    [2] = rename_sym_argument,
  },
  [11] = {
    [1] = rename_sym_command_name,
  },
  [12] = {
    [1] = rename_sym_variable_name,
  },
  [13] = {
    [0] = rename_sym_command_name,
  },
  [14] = {
    [1] = rename_sym_command_name,
  },
  [15] = {
    [1] = rename_sym_argument,
  },
  [16] = {
    [1] = rename_sym_command_name,
  },
  [17] = {
    [0] = rename_sym_argument,
  },
  [18] = {
    [1] = rename_sym_variable_name,
  },
  [19] = {
    [1] = rename_sym_variable_name,
    [3] = rename_sym_argument,
  },
  [20] = {
    [1] = rename_sym_argument,
  },
  [21] = {
    [0] = rename_sym_argument,
  },
  [22] = {
    [1] = rename_sym_argument,
  },
  [23] = {
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
        ADVANCE(11);
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == ';')
        ADVANCE(14);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(19);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '[')
        ADVANCE(23);
      if (lookahead == '\\')
        SKIP(24);
      if (lookahead == ']')
        ADVANCE(25);
      if (lookahead == 'c')
        ADVANCE(27);
      if (lookahead == 'd')
        ADVANCE(31);
      if (lookahead == 'e')
        ADVANCE(35);
      if (lookahead == 'f')
        ADVANCE(44);
      if (lookahead == 'i')
        ADVANCE(46);
      if (lookahead == 't')
        ADVANCE(49);
      if (lookahead == 'w')
        ADVANCE(53);
      if (lookahead == '|')
        ADVANCE(58);
      if (lookahead == '}')
        ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
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
      if (lookahead == '>')
        ADVANCE(9);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_AMP_GT);
      if (lookahead == '>')
        ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_AMP_GT_GT);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '?')
        ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_COLON_QMARK);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&')
        ADVANCE(16);
      if (lookahead == '<')
        ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LT_AMP);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '-')
        ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '&')
        ADVANCE(21);
      if (lookahead == '>')
        ADVANCE(22);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_GT_AMP);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 24:
      if (lookahead == '\n')
        SKIP(0);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']')
        ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 27:
      if (lookahead == 'a')
        ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 's')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'e')
        ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 31:
      if (lookahead == 'o')
        ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == 'n')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'e')
        ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_done);
      END_STATE();
    case 35:
      if (lookahead == 'l')
        ADVANCE(36);
      if (lookahead == 's')
        ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == 'i')
        ADVANCE(37);
      if (lookahead == 's')
        ADVANCE(39);
      END_STATE();
    case 37:
      if (lookahead == 'f')
        ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 39:
      if (lookahead == 'e')
        ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 41:
      if (lookahead == 'a')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'c')
        ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_esac);
      END_STATE();
    case 44:
      if (lookahead == 'i')
        ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_fi);
      END_STATE();
    case 46:
      if (lookahead == 'f')
        ADVANCE(47);
      if (lookahead == 'n')
        ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 49:
      if (lookahead == 'h')
        ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'e')
        ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'n')
        ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 53:
      if (lookahead == 'h')
        ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'i')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'l')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'e')
        ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|')
        ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 61:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(62);
      if (lookahead == '<')
        ADVANCE(66);
      if (lookahead == '>')
        ADVANCE(68);
      if (lookahead == '[')
        ADVANCE(71);
      if (lookahead == '\\')
        SKIP(73);
      if (lookahead == 'c')
        ADVANCE(74);
      if (lookahead == 'i')
        ADVANCE(78);
      if (lookahead == 'w')
        ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(61);
      if (lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(65);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == '>')
        ADVANCE(63);
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
          lookahead != '>' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(65);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_AMP_GT);
      if (lookahead == '>')
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
          lookahead != '>' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(65);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_AMP_GT_GT);
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
        ADVANCE(65);
      END_STATE();
    case 65:
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
        ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&')
        ADVANCE(67);
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
        ADVANCE(65);
      END_STATE();
    case 67:
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
        ADVANCE(65);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '&')
        ADVANCE(69);
      if (lookahead == '>')
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
          lookahead != '>' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(65);
      END_STATE();
    case 69:
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
        ADVANCE(65);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_GT_GT);
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
        ADVANCE(65);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[')
        ADVANCE(72);
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
        ADVANCE(65);
      END_STATE();
    case 72:
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
        ADVANCE(65);
      END_STATE();
    case 73:
      if (lookahead == '\n')
        SKIP(61);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'a')
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
        ADVANCE(65);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 's')
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
        ADVANCE(65);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
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
        ADVANCE(65);
      END_STATE();
    case 77:
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
        ADVANCE(65);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'f')
        ADVANCE(79);
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
        ADVANCE(65);
      END_STATE();
    case 79:
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
        ADVANCE(65);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'h')
        ADVANCE(81);
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
        ADVANCE(65);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(82);
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
        ADVANCE(65);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'l')
        ADVANCE(83);
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
        ADVANCE(65);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(84);
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
        ADVANCE(65);
      END_STATE();
    case 84:
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
        ADVANCE(65);
      END_STATE();
    case 85:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(86);
      if (lookahead == '<')
        ADVANCE(87);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '\\')
        SKIP(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(85);
      END_STATE();
    case 86:
      if (lookahead == '>')
        ADVANCE(9);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&')
        ADVANCE(16);
      END_STATE();
    case 88:
      if (lookahead == '\n')
        SKIP(85);
      END_STATE();
    case 89:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(62);
      if (lookahead == '<')
        ADVANCE(66);
      if (lookahead == '>')
        ADVANCE(68);
      if (lookahead == '[')
        ADVANCE(71);
      if (lookahead == '\\')
        SKIP(90);
      if (lookahead == 'c')
        ADVANCE(74);
      if (lookahead == 'i')
        ADVANCE(78);
      if (lookahead == 'w')
        ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(89);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(65);
      END_STATE();
    case 90:
      if (lookahead == '\n')
        SKIP(89);
      END_STATE();
    case 91:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(92);
      if (lookahead == '\\')
        SKIP(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(91);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(94);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\'')
        ADVANCE(93);
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
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(92);
      END_STATE();
    case 93:
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
        ADVANCE(94);
      END_STATE();
    case 94:
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
        ADVANCE(94);
      END_STATE();
    case 95:
      if (lookahead == '\'')
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_single_quoted_argument);
      END_STATE();
    case 97:
      if (lookahead == '\n')
        SKIP(91);
      END_STATE();
    case 98:
      if (lookahead == '\n')
        ADVANCE(99);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(101);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(19);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '\\')
        SKIP(103);
      if (lookahead == '|')
        ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(100);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == ';')
        ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_SEMI_SEMI);
      END_STATE();
    case 103:
      if (lookahead == '\n')
        SKIP(98);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '&')
        ADVANCE(105);
      if (lookahead == '|')
        ADVANCE(59);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_PIPE_AMP);
      END_STATE();
    case 106:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(106);
      END_STATE();
    case 107:
      if (lookahead == '\n')
        SKIP(106);
      END_STATE();
    case 108:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(62);
      if (lookahead == '<')
        ADVANCE(66);
      if (lookahead == '>')
        ADVANCE(68);
      if (lookahead == '[')
        ADVANCE(71);
      if (lookahead == '\\')
        SKIP(109);
      if (lookahead == 'c')
        ADVANCE(74);
      if (lookahead == 'd')
        ADVANCE(110);
      if (lookahead == 'e')
        ADVANCE(114);
      if (lookahead == 'f')
        ADVANCE(120);
      if (lookahead == 'i')
        ADVANCE(78);
      if (lookahead == 'w')
        ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(108);
      if (lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(65);
      END_STATE();
    case 109:
      if (lookahead == '\n')
        SKIP(108);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'o')
        ADVANCE(111);
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
        ADVANCE(65);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'n')
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
        ADVANCE(65);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(113);
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
        ADVANCE(65);
      END_STATE();
    case 113:
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
        ADVANCE(65);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'l')
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
        ADVANCE(65);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(116);
      if (lookahead == 's')
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
        ADVANCE(65);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'f')
        ADVANCE(117);
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
        ADVANCE(65);
      END_STATE();
    case 117:
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
        ADVANCE(65);
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
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(65);
      END_STATE();
    case 119:
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
        ADVANCE(65);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(121);
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
        ADVANCE(65);
      END_STATE();
    case 121:
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
        ADVANCE(65);
      END_STATE();
    case 122:
      if (lookahead == '\n')
        ADVANCE(123);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(124);
      if (lookahead == ';')
        ADVANCE(101);
      if (lookahead == '\\')
        SKIP(125);
      if (lookahead == '|')
        ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 124:
      if (lookahead == '&')
        ADVANCE(8);
      END_STATE();
    case 125:
      if (lookahead == '\n')
        SKIP(122);
      END_STATE();
    case 126:
      if (lookahead == '\n')
        ADVANCE(123);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(127);
      if (lookahead == ';')
        ADVANCE(101);
      if (lookahead == '<')
        ADVANCE(66);
      if (lookahead == '>')
        ADVANCE(68);
      if (lookahead == '\\')
        SKIP(129);
      if (lookahead == '|')
        ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(126);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(65);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == '&')
        ADVANCE(128);
      if (lookahead == '>')
        ADVANCE(63);
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
          lookahead != '>' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(65);
      END_STATE();
    case 128:
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
        ADVANCE(65);
      END_STATE();
    case 129:
      if (lookahead == '\n')
        SKIP(126);
      END_STATE();
    case 130:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(62);
      if (lookahead == '<')
        ADVANCE(66);
      if (lookahead == '>')
        ADVANCE(68);
      if (lookahead == '\\')
        SKIP(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(130);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(65);
      END_STATE();
    case 131:
      if (lookahead == '\n')
        SKIP(130);
      END_STATE();
    case 132:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(133);
      if (lookahead == 'd')
        ADVANCE(134);
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
      if (lookahead == 'o')
        ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 136:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(137);
      if (lookahead == 't')
        ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(136);
      END_STATE();
    case 137:
      if (lookahead == '\n')
        SKIP(136);
      END_STATE();
    case 138:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(139);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(142);
      if (lookahead != 0)
        ADVANCE(140);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(140);
      if (lookahead == '\"' ||
          lookahead == '$')
        ADVANCE(3);
      if (lookahead != 0)
        ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(140);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '#')
        ADVANCE(139);
      if (lookahead == '\\')
        ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(142);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(140);
      END_STATE();
    case 143:
      if (lookahead == '\n')
        ADVANCE(123);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ';')
        ADVANCE(101);
      if (lookahead == '\\')
        SKIP(144);
      if (lookahead == 'i')
        ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(143);
      END_STATE();
    case 144:
      if (lookahead == '\n')
        SKIP(143);
      END_STATE();
    case 145:
      if (lookahead == 'n')
        ADVANCE(48);
      END_STATE();
    case 146:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(146);
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
        ADVANCE(94);
      END_STATE();
    case 147:
      if (lookahead == '\n')
        SKIP(146);
      END_STATE();
    case 148:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(148);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(65);
      END_STATE();
    case 149:
      if (lookahead == '\n')
        SKIP(148);
      END_STATE();
    case 150:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(92);
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
        ADVANCE(94);
      END_STATE();
    case 151:
      if (lookahead == '\n')
        SKIP(150);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']')
        ADVANCE(153);
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
        ADVANCE(94);
      END_STATE();
    case 153:
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
        ADVANCE(94);
      END_STATE();
    case 154:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(92);
      if (lookahead == '\\')
        SKIP(155);
      if (lookahead == ']')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(154);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(94);
      END_STATE();
    case 155:
      if (lookahead == '\n')
        SKIP(154);
      END_STATE();
    case 156:
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
        ADVANCE(94);
      END_STATE();
    case 157:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(92);
      if (lookahead == '\\')
        SKIP(158);
      if (lookahead == ']')
        ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(157);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(94);
      END_STATE();
    case 158:
      if (lookahead == '\n')
        SKIP(157);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ']')
        ADVANCE(153);
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
        ADVANCE(94);
      END_STATE();
    case 160:
      if (lookahead == '\n')
        ADVANCE(123);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == '\'')
        ADVANCE(92);
      if (lookahead == ';')
        ADVANCE(101);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '\\')
        SKIP(161);
      if (lookahead == '|')
        ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(160);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(94);
      END_STATE();
    case 161:
      if (lookahead == '\n')
        SKIP(160);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '&')
        ADVANCE(105);
      if (lookahead == '|')
        ADVANCE(163);
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
        ADVANCE(94);
      END_STATE();
    case 163:
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
        ADVANCE(94);
      END_STATE();
    case 164:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(164);
      END_STATE();
    case 165:
      if (lookahead == '\n')
        SKIP(164);
      END_STATE();
    case 166:
      if (lookahead == '\n')
        ADVANCE(123);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == ';')
        ADVANCE(101);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '\\')
        SKIP(167);
      if (lookahead == '|')
        ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(166);
      END_STATE();
    case 167:
      if (lookahead == '\n')
        SKIP(166);
      END_STATE();
    case 168:
      if (lookahead == '\n')
        ADVANCE(123);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(101);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '\\')
        SKIP(169);
      if (lookahead == '|')
        ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(168);
      END_STATE();
    case 169:
      if (lookahead == '\n')
        SKIP(168);
      END_STATE();
    case 170:
      if (lookahead == '\n')
        ADVANCE(171);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == ';')
        ADVANCE(101);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(19);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '\\')
        SKIP(173);
      if (lookahead == '|')
        ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(172);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(172);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(172);
      END_STATE();
    case 173:
      if (lookahead == '\n')
        SKIP(170);
      END_STATE();
    case 174:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(62);
      if (lookahead == '<')
        ADVANCE(66);
      if (lookahead == '>')
        ADVANCE(68);
      if (lookahead == '[')
        ADVANCE(71);
      if (lookahead == '\\')
        SKIP(175);
      if (lookahead == 'c')
        ADVANCE(74);
      if (lookahead == 'd')
        ADVANCE(110);
      if (lookahead == 'i')
        ADVANCE(78);
      if (lookahead == 'w')
        ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(174);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(65);
      END_STATE();
    case 175:
      if (lookahead == '\n')
        SKIP(174);
      END_STATE();
    case 176:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(177);
      if (lookahead == 'd')
        ADVANCE(134);
      if (lookahead == 't')
        ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
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
      if (lookahead == '&')
        ADVANCE(62);
      if (lookahead == '<')
        ADVANCE(66);
      if (lookahead == '>')
        ADVANCE(68);
      if (lookahead == '[')
        ADVANCE(71);
      if (lookahead == '\\')
        SKIP(179);
      if (lookahead == 'c')
        ADVANCE(74);
      if (lookahead == 'e')
        ADVANCE(114);
      if (lookahead == 'f')
        ADVANCE(120);
      if (lookahead == 'i')
        ADVANCE(78);
      if (lookahead == 'w')
        ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(178);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(65);
      END_STATE();
    case 179:
      if (lookahead == '\n')
        SKIP(178);
      END_STATE();
    case 180:
      if (lookahead == '\n')
        ADVANCE(123);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ';')
        ADVANCE(101);
      if (lookahead == '\\')
        SKIP(181);
      if (lookahead == '\t' ||
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
      if (lookahead == '\\')
        SKIP(183);
      if (lookahead == 'i')
        ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(182);
      END_STATE();
    case 183:
      if (lookahead == '\n')
        SKIP(182);
      END_STATE();
    case 184:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == '=')
        ADVANCE(19);
      if (lookahead == '\\')
        SKIP(185);
      if (lookahead == '}')
        ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(184);
      END_STATE();
    case 185:
      if (lookahead == '\n')
        SKIP(184);
      END_STATE();
    case 186:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(86);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(19);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '\\')
        SKIP(187);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(188);
      END_STATE();
    case 187:
      if (lookahead == '\n')
        SKIP(186);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(188);
      END_STATE();
    case 189:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == '\\')
        SKIP(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(189);
      END_STATE();
    case 190:
      if (lookahead == '\n')
        SKIP(189);
      END_STATE();
    case 191:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(92);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == '\\')
        SKIP(192);
      if (lookahead == ']')
        ADVANCE(152);
      if (lookahead == '}')
        ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(191);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{')
        ADVANCE(94);
      END_STATE();
    case 192:
      if (lookahead == '\n')
        SKIP(191);
      END_STATE();
    case 193:
      if (lookahead == '\n')
        ADVANCE(123);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == '\'')
        ADVANCE(92);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == ';')
        ADVANCE(101);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '\\')
        SKIP(194);
      if (lookahead == '|')
        ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(193);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(94);
      END_STATE();
    case 194:
      if (lookahead == '\n')
        SKIP(193);
      END_STATE();
    case 195:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(196);
      if (lookahead == '\\')
        SKIP(197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{')
        ADVANCE(6);
      END_STATE();
    case 197:
      if (lookahead == '\n')
        SKIP(195);
      END_STATE();
    case 198:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(62);
      if (lookahead == '<')
        ADVANCE(66);
      if (lookahead == '>')
        ADVANCE(68);
      if (lookahead == '[')
        ADVANCE(71);
      if (lookahead == '\\')
        SKIP(199);
      if (lookahead == 'c')
        ADVANCE(74);
      if (lookahead == 'f')
        ADVANCE(120);
      if (lookahead == 'i')
        ADVANCE(78);
      if (lookahead == 'w')
        ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(198);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(65);
      END_STATE();
    case 199:
      if (lookahead == '\n')
        SKIP(198);
      END_STATE();
    case 200:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(201);
      if (lookahead == 'e')
        ADVANCE(202);
      if (lookahead == 'f')
        ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(200);
      END_STATE();
    case 201:
      if (lookahead == '\n')
        SKIP(200);
      END_STATE();
    case 202:
      if (lookahead == 'l')
        ADVANCE(36);
      END_STATE();
    case 203:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(204);
      if (lookahead == 'f')
        ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(203);
      END_STATE();
    case 204:
      if (lookahead == '\n')
        SKIP(203);
      END_STATE();
    case 205:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(92);
      if (lookahead == '\\')
        SKIP(206);
      if (lookahead == 'e')
        ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(205);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(94);
      END_STATE();
    case 206:
      if (lookahead == '\n')
        SKIP(205);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's')
        ADVANCE(208);
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
        ADVANCE(94);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a')
        ADVANCE(209);
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
        ADVANCE(94);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c')
        ADVANCE(210);
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
        ADVANCE(94);
      END_STATE();
    case 210:
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
        ADVANCE(94);
      END_STATE();
    case 211:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(86);
      if (lookahead == '\'')
        ADVANCE(92);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '\\')
        SKIP(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(211);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(94);
      END_STATE();
    case 212:
      if (lookahead == '\n')
        SKIP(211);
      END_STATE();
    case 213:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(86);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '\\')
        SKIP(214);
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
      if (lookahead == '\n')
        ADVANCE(123);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(127);
      if (lookahead == ';')
        ADVANCE(101);
      if (lookahead == '<')
        ADVANCE(66);
      if (lookahead == '>')
        ADVANCE(68);
      if (lookahead == '\\')
        SKIP(216);
      if (lookahead == '|')
        ADVANCE(104);
      if (lookahead == '}')
        ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(215);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(65);
      END_STATE();
    case 216:
      if (lookahead == '\n')
        SKIP(215);
      END_STATE();
    case 217:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(218);
      if (lookahead == '}')
        ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(217);
      END_STATE();
    case 218:
      if (lookahead == '\n')
        SKIP(217);
      END_STATE();
    case 219:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(220);
      if (lookahead == '&')
        ADVANCE(62);
      if (lookahead == '\'')
        ADVANCE(221);
      if (lookahead == ';')
        ADVANCE(226);
      if (lookahead == '<')
        ADVANCE(66);
      if (lookahead == '>')
        ADVANCE(68);
      if (lookahead == '[')
        ADVANCE(227);
      if (lookahead == '\\')
        SKIP(229);
      if (lookahead == 'c')
        ADVANCE(230);
      if (lookahead == 'e')
        ADVANCE(234);
      if (lookahead == 'i')
        ADVANCE(238);
      if (lookahead == 'w')
        ADVANCE(240);
      if ((':' <= lookahead && lookahead <= '=') ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(219);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(223);
      END_STATE();
    case 220:
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
        ADVANCE(65);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == '\'')
        ADVANCE(222);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(92);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(224);
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
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_single_quoted_argument);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(65);
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
        ADVANCE(223);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(65);
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
        ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == '\'')
        ADVANCE(225);
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
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(224);
      END_STATE();
    case 225:
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
        ADVANCE(65);
      END_STATE();
    case 226:
      if (lookahead == ';')
        ADVANCE(102);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[')
        ADVANCE(228);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(65);
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
        ADVANCE(223);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(65);
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
        ADVANCE(223);
      END_STATE();
    case 229:
      if (lookahead == '\n')
        SKIP(219);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'a')
        ADVANCE(231);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(65);
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
        ADVANCE(223);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 's')
        ADVANCE(232);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(65);
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
        ADVANCE(223);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(233);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(65);
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
        ADVANCE(223);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(65);
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
        ADVANCE(223);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 's')
        ADVANCE(235);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(65);
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
        ADVANCE(223);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'a')
        ADVANCE(236);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(65);
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
        ADVANCE(223);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'c')
        ADVANCE(237);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(65);
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
        ADVANCE(223);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_esac);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(65);
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
        ADVANCE(223);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'f')
        ADVANCE(239);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(65);
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
        ADVANCE(223);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(65);
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
        ADVANCE(223);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'h')
        ADVANCE(241);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(65);
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
        ADVANCE(223);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(242);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(65);
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
        ADVANCE(223);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'l')
        ADVANCE(243);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(65);
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
        ADVANCE(223);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(244);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(65);
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
        ADVANCE(223);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(65);
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
        ADVANCE(223);
      END_STATE();
    case 245:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(220);
      if (lookahead == '&')
        ADVANCE(62);
      if (lookahead == '\'')
        ADVANCE(221);
      if (lookahead == ';')
        ADVANCE(226);
      if (lookahead == '<')
        ADVANCE(66);
      if (lookahead == '>')
        ADVANCE(68);
      if (lookahead == '[')
        ADVANCE(227);
      if (lookahead == '\\')
        SKIP(246);
      if (lookahead == 'c')
        ADVANCE(230);
      if (lookahead == 'd')
        ADVANCE(247);
      if (lookahead == 'e')
        ADVANCE(251);
      if (lookahead == 'f')
        ADVANCE(257);
      if (lookahead == 'i')
        ADVANCE(238);
      if (lookahead == 't')
        ADVANCE(259);
      if (lookahead == 'w')
        ADVANCE(240);
      if ((':' <= lookahead && lookahead <= '=') ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(245);
      if ((lookahead < '&' || lookahead > ')') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(223);
      END_STATE();
    case 246:
      if (lookahead == '\n')
        SKIP(245);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'o')
        ADVANCE(248);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(65);
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
        ADVANCE(223);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == 'n')
        ADVANCE(249);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(65);
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
        ADVANCE(223);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(250);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(65);
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
        ADVANCE(223);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_done);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(65);
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
        ADVANCE(223);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'l')
        ADVANCE(252);
      if (lookahead == 's')
        ADVANCE(235);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(65);
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
        ADVANCE(223);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(253);
      if (lookahead == 's')
        ADVANCE(255);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(65);
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
        ADVANCE(223);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'f')
        ADVANCE(254);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(65);
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
        ADVANCE(223);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_elif);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(65);
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
        ADVANCE(223);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(256);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(65);
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
        ADVANCE(223);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(65);
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
        ADVANCE(223);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(258);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(65);
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
        ADVANCE(223);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_fi);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(65);
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
        ADVANCE(223);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'h')
        ADVANCE(260);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(65);
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
        ADVANCE(223);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(261);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(65);
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
        ADVANCE(223);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'n')
        ADVANCE(262);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(65);
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
        ADVANCE(223);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_then);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(65);
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
        ADVANCE(223);
      END_STATE();
    case 263:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(220);
      if (lookahead == '&')
        ADVANCE(62);
      if (lookahead == '\'')
        ADVANCE(221);
      if (lookahead == ';')
        ADVANCE(226);
      if (lookahead == '<')
        ADVANCE(66);
      if (lookahead == '>')
        ADVANCE(68);
      if (lookahead == '[')
        ADVANCE(227);
      if (lookahead == '\\')
        SKIP(264);
      if (lookahead == 'c')
        ADVANCE(230);
      if (lookahead == 'd')
        ADVANCE(265);
      if (lookahead == 'e')
        ADVANCE(251);
      if (lookahead == 'f')
        ADVANCE(257);
      if (lookahead == 'i')
        ADVANCE(238);
      if (lookahead == 'w')
        ADVANCE(240);
      if ((':' <= lookahead && lookahead <= '=') ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(263);
      if ((lookahead < '&' || lookahead > ')') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(223);
      END_STATE();
    case 264:
      if (lookahead == '\n')
        SKIP(263);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'o')
        ADVANCE(266);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(65);
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
        ADVANCE(223);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'n')
        ADVANCE(249);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(65);
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
        ADVANCE(223);
      END_STATE();
    case 267:
      if (lookahead == '\n')
        ADVANCE(268);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(139);
      if (lookahead == '$')
        ADVANCE(220);
      if (lookahead == '&')
        ADVANCE(269);
      if (lookahead == '\'')
        ADVANCE(274);
      if (lookahead == ')')
        ADVANCE(280);
      if (lookahead == ';')
        ADVANCE(281);
      if (lookahead == '<')
        ADVANCE(283);
      if (lookahead == '>')
        ADVANCE(287);
      if (lookahead == '[')
        ADVANCE(290);
      if (lookahead == '\\')
        ADVANCE(292);
      if (lookahead == ']')
        ADVANCE(294);
      if (lookahead == 'c')
        ADVANCE(296);
      if (lookahead == 'e')
        ADVANCE(300);
      if (lookahead == 'i')
        ADVANCE(304);
      if (lookahead == 'w')
        ADVANCE(307);
      if (lookahead == '|')
        ADVANCE(312);
      if (lookahead == '}')
        ADVANCE(315);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(140);
      if ((':' <= lookahead && lookahead <= '='))
        ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(293);
      if (lookahead != 0)
        ADVANCE(275);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(268);
      if (lookahead == '#')
        ADVANCE(139);
      if (lookahead == '&')
        ADVANCE(269);
      if (lookahead == '\'')
        ADVANCE(274);
      if (lookahead == ')')
        ADVANCE(280);
      if (lookahead == ';')
        ADVANCE(281);
      if (lookahead == '<')
        ADVANCE(283);
      if (lookahead == '>')
        ADVANCE(287);
      if (lookahead == '[')
        ADVANCE(290);
      if (lookahead == '\\')
        ADVANCE(292);
      if (lookahead == ']')
        ADVANCE(294);
      if (lookahead == 'c')
        ADVANCE(296);
      if (lookahead == 'e')
        ADVANCE(300);
      if (lookahead == 'i')
        ADVANCE(304);
      if (lookahead == 'w')
        ADVANCE(307);
      if (lookahead == '|')
        ADVANCE(312);
      if (lookahead == '}')
        ADVANCE(315);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(140);
      if ((':' <= lookahead && lookahead <= '='))
        ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(293);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(275);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(65);
      if (lookahead == '&')
        ADVANCE(270);
      if (lookahead == '>')
        ADVANCE(272);
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
        ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      if (lookahead == '$')
        ADVANCE(65);
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
        ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(65);
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
        ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_AMP_GT);
      if (lookahead == '$')
        ADVANCE(65);
      if (lookahead == '>')
        ADVANCE(273);
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
        ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_AMP_GT_GT);
      if (lookahead == '$')
        ADVANCE(65);
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
        ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\"')
        ADVANCE(95);
      if (lookahead == '$')
        ADVANCE(224);
      if (lookahead == '\'')
        ADVANCE(275);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(277);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(279);
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
        ADVANCE(278);
      if (lookahead != 0)
        ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(65);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(271);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(276);
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
        ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(275);
      END_STATE();
    case 276:
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
        ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\"')
        ADVANCE(95);
      if (lookahead == '$')
        ADVANCE(224);
      if (lookahead == '\'')
        ADVANCE(271);
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
        ADVANCE(278);
      if (lookahead != 0)
        ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\'')
        ADVANCE(140);
      if (lookahead == '\"' ||
          lookahead == '$')
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\'')
        ADVANCE(276);
      if (lookahead == '\"' ||
          lookahead == '$')
        ADVANCE(95);
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
        ADVANCE(278);
      if (lookahead != 0)
        ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(140);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == ';')
        ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(140);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_SEMI_SEMI);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(140);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '$')
        ADVANCE(65);
      if (lookahead == '&')
        ADVANCE(284);
      if (lookahead == '<')
        ADVANCE(285);
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
        ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_LT_AMP);
      if (lookahead == '$')
        ADVANCE(65);
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
        ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '$')
        ADVANCE(65);
      if (lookahead == '-')
        ADVANCE(286);
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
        ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH);
      if (lookahead == '$')
        ADVANCE(65);
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
        ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '$')
        ADVANCE(65);
      if (lookahead == '&')
        ADVANCE(288);
      if (lookahead == '>')
        ADVANCE(289);
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
        ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_GT_AMP);
      if (lookahead == '$')
        ADVANCE(65);
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
        ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '$')
        ADVANCE(65);
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
        ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '$')
        ADVANCE(65);
      if (lookahead == '[')
        ADVANCE(291);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(271);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(276);
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
        ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(275);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      if (lookahead == '$')
        ADVANCE(65);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(271);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(276);
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
        ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(275);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(140);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(268);
      if (lookahead == '#')
        ADVANCE(139);
      if (lookahead == '&')
        ADVANCE(269);
      if (lookahead == '\'')
        ADVANCE(274);
      if (lookahead == ')')
        ADVANCE(280);
      if (lookahead == ';')
        ADVANCE(281);
      if (lookahead == '<')
        ADVANCE(283);
      if (lookahead == '>')
        ADVANCE(287);
      if (lookahead == '[')
        ADVANCE(290);
      if (lookahead == '\\')
        ADVANCE(292);
      if (lookahead == ']')
        ADVANCE(294);
      if (lookahead == 'c')
        ADVANCE(296);
      if (lookahead == 'e')
        ADVANCE(300);
      if (lookahead == 'i')
        ADVANCE(304);
      if (lookahead == 'w')
        ADVANCE(307);
      if (lookahead == '|')
        ADVANCE(312);
      if (lookahead == '}')
        ADVANCE(315);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(140);
      if ((':' <= lookahead && lookahead <= '='))
        ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(293);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(275);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '$')
        ADVANCE(65);
      if (lookahead == ']')
        ADVANCE(295);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(271);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(276);
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
        ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(275);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      if (lookahead == '$')
        ADVANCE(65);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(271);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(276);
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
        ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(275);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(65);
      if (lookahead == 'a')
        ADVANCE(297);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(271);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(276);
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
        ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(275);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(65);
      if (lookahead == 's')
        ADVANCE(298);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(271);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(276);
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
        ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(275);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(65);
      if (lookahead == 'e')
        ADVANCE(299);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(271);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(276);
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
        ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(275);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '$')
        ADVANCE(65);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(271);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(276);
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
        ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(275);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(65);
      if (lookahead == 's')
        ADVANCE(301);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(271);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(276);
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
        ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(275);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(65);
      if (lookahead == 'a')
        ADVANCE(302);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(271);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(276);
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
        ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(275);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(65);
      if (lookahead == 'c')
        ADVANCE(303);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(271);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(276);
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
        ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(275);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_esac);
      if (lookahead == '$')
        ADVANCE(65);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(271);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(276);
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
        ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(275);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(65);
      if (lookahead == 'f')
        ADVANCE(305);
      if (lookahead == 'n')
        ADVANCE(306);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(271);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(276);
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
        ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(275);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '$')
        ADVANCE(65);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(271);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(276);
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
        ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(275);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '$')
        ADVANCE(65);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(271);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(276);
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
        ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(275);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(65);
      if (lookahead == 'h')
        ADVANCE(308);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(271);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(276);
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
        ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(275);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(65);
      if (lookahead == 'i')
        ADVANCE(309);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(271);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(276);
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
        ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(275);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(65);
      if (lookahead == 'l')
        ADVANCE(310);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(271);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(276);
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
        ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(275);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(65);
      if (lookahead == 'e')
        ADVANCE(311);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(271);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(276);
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
        ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(275);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '$')
        ADVANCE(65);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(271);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(276);
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
        ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(275);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '&')
        ADVANCE(313);
      if (lookahead == '|')
        ADVANCE(314);
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
        ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(276);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_PIPE_AMP);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(140);
      END_STATE();
    case 314:
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
        ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(276);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(140);
      END_STATE();
    case 316:
      if (lookahead == '\n')
        ADVANCE(317);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(139);
      if (lookahead == '$')
        ADVANCE(220);
      if (lookahead == '&')
        ADVANCE(269);
      if (lookahead == '\'')
        ADVANCE(274);
      if (lookahead == ')')
        ADVANCE(280);
      if (lookahead == ';')
        ADVANCE(281);
      if (lookahead == '<')
        ADVANCE(283);
      if (lookahead == '>')
        ADVANCE(287);
      if (lookahead == '\\')
        ADVANCE(318);
      if (lookahead == ']')
        ADVANCE(294);
      if (lookahead == 'i')
        ADVANCE(320);
      if (lookahead == '|')
        ADVANCE(312);
      if (lookahead == '}')
        ADVANCE(315);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(140);
      if ((':' <= lookahead && lookahead <= '='))
        ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(319);
      if (lookahead != 0)
        ADVANCE(275);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(317);
      if (lookahead == '#')
        ADVANCE(139);
      if (lookahead == '&')
        ADVANCE(269);
      if (lookahead == '\'')
        ADVANCE(274);
      if (lookahead == ')')
        ADVANCE(280);
      if (lookahead == ';')
        ADVANCE(281);
      if (lookahead == '<')
        ADVANCE(283);
      if (lookahead == '>')
        ADVANCE(287);
      if (lookahead == '\\')
        ADVANCE(318);
      if (lookahead == ']')
        ADVANCE(294);
      if (lookahead == 'i')
        ADVANCE(320);
      if (lookahead == '|')
        ADVANCE(312);
      if (lookahead == '}')
        ADVANCE(315);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(140);
      if ((':' <= lookahead && lookahead <= '='))
        ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(319);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(275);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(140);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(317);
      if (lookahead == '#')
        ADVANCE(139);
      if (lookahead == '&')
        ADVANCE(269);
      if (lookahead == '\'')
        ADVANCE(274);
      if (lookahead == ')')
        ADVANCE(280);
      if (lookahead == ';')
        ADVANCE(281);
      if (lookahead == '<')
        ADVANCE(283);
      if (lookahead == '>')
        ADVANCE(287);
      if (lookahead == '\\')
        ADVANCE(318);
      if (lookahead == ']')
        ADVANCE(294);
      if (lookahead == 'i')
        ADVANCE(320);
      if (lookahead == '|')
        ADVANCE(312);
      if (lookahead == '}')
        ADVANCE(315);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(140);
      if ((':' <= lookahead && lookahead <= '='))
        ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(319);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(275);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(65);
      if (lookahead == 'n')
        ADVANCE(306);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(271);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(276);
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
        ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(275);
      END_STATE();
    case 321:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(220);
      if (lookahead == '&')
        ADVANCE(62);
      if (lookahead == '\'')
        ADVANCE(221);
      if (lookahead == ';')
        ADVANCE(226);
      if (lookahead == '<')
        ADVANCE(66);
      if (lookahead == '>')
        ADVANCE(68);
      if (lookahead == '[')
        ADVANCE(227);
      if (lookahead == '\\')
        SKIP(322);
      if (lookahead == 'c')
        ADVANCE(230);
      if (lookahead == 'd')
        ADVANCE(247);
      if (lookahead == 'e')
        ADVANCE(251);
      if (lookahead == 'f')
        ADVANCE(257);
      if (lookahead == 'i')
        ADVANCE(323);
      if (lookahead == 't')
        ADVANCE(259);
      if (lookahead == 'w')
        ADVANCE(240);
      if ((':' <= lookahead && lookahead <= '=') ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(321);
      if ((lookahead < '&' || lookahead > ')') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(223);
      END_STATE();
    case 322:
      if (lookahead == '\n')
        SKIP(321);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'f')
        ADVANCE(239);
      if (lookahead == 'n')
        ADVANCE(324);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(65);
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
        ADVANCE(223);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(65);
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
        ADVANCE(223);
      END_STATE();
    case 325:
      if (lookahead == '\n')
        ADVANCE(123);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(124);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == ';')
        ADVANCE(101);
      if (lookahead == '\\')
        SKIP(326);
      if (lookahead == '|')
        ADVANCE(104);
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
        ADVANCE(123);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(220);
      if (lookahead == '&')
        ADVANCE(127);
      if (lookahead == '\'')
        ADVANCE(221);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == ';')
        ADVANCE(101);
      if (lookahead == '<')
        ADVANCE(328);
      if (lookahead == '>')
        ADVANCE(68);
      if (lookahead == '\\')
        SKIP(331);
      if (lookahead == ']')
        ADVANCE(332);
      if (lookahead == 'i')
        ADVANCE(334);
      if (lookahead == '|')
        ADVANCE(162);
      if (lookahead == '}')
        ADVANCE(60);
      if ((':' <= lookahead && lookahead <= '='))
        ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(327);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(223);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&')
        ADVANCE(67);
      if (lookahead == '<')
        ADVANCE(329);
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
        ADVANCE(65);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '-')
        ADVANCE(330);
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
        ADVANCE(65);
      END_STATE();
    case 330:
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
        ADVANCE(65);
      END_STATE();
    case 331:
      if (lookahead == '\n')
        SKIP(327);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']')
        ADVANCE(333);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(65);
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
        ADVANCE(223);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(65);
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
        ADVANCE(223);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'n')
        ADVANCE(324);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(94);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(65);
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
        ADVANCE(223);
      END_STATE();
    case 335:
      if (lookahead == '\n')
        ADVANCE(123);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(127);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == ';')
        ADVANCE(101);
      if (lookahead == '<')
        ADVANCE(328);
      if (lookahead == '>')
        ADVANCE(68);
      if (lookahead == '\\')
        SKIP(336);
      if (lookahead == '|')
        ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(335);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(65);
      END_STATE();
    case 336:
      if (lookahead == '\n')
        SKIP(335);
      END_STATE();
    case 337:
      if (lookahead == '\n')
        ADVANCE(123);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == '\'')
        ADVANCE(92);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == ';')
        ADVANCE(101);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '\\')
        SKIP(338);
      if (lookahead == ']')
        ADVANCE(152);
      if (lookahead == '|')
        ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(337);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(94);
      END_STATE();
    case 338:
      if (lookahead == '\n')
        SKIP(337);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 61, .external_lex_state = 2},
  [2] = {.lex_state = 85},
  [3] = {.lex_state = 89, .external_lex_state = 2},
  [4] = {.lex_state = 89, .external_lex_state = 2},
  [5] = {.lex_state = 91},
  [6] = {.lex_state = 91},
  [7] = {.lex_state = 91},
  [8] = {.lex_state = 91},
  [9] = {.lex_state = 98, .external_lex_state = 2},
  [10] = {.lex_state = 106},
  [11] = {.lex_state = 108, .external_lex_state = 2},
  [12] = {.lex_state = 122},
  [13] = {.lex_state = 126, .external_lex_state = 2},
  [14] = {.lex_state = 130, .external_lex_state = 2},
  [15] = {.lex_state = 61, .external_lex_state = 2},
  [16] = {.lex_state = 130, .external_lex_state = 2},
  [17] = {.lex_state = 91},
  [18] = {.lex_state = 132},
  [19] = {.lex_state = 122},
  [20] = {.lex_state = 126, .external_lex_state = 2},
  [21] = {.lex_state = 136},
  [22] = {.lex_state = 138},
  [23] = {.lex_state = 143},
  [24] = {.lex_state = 146},
  [25] = {.lex_state = 148},
  [26] = {.lex_state = 130, .external_lex_state = 2},
  [27] = {.lex_state = 143},
  [28] = {.lex_state = 138},
  [29] = {.lex_state = 150},
  [30] = {.lex_state = 146},
  [31] = {.lex_state = 148},
  [32] = {.lex_state = 130, .external_lex_state = 2},
  [33] = {.lex_state = 150},
  [34] = {.lex_state = 154},
  [35] = {.lex_state = 157},
  [36] = {.lex_state = 138},
  [37] = {.lex_state = 130, .external_lex_state = 2},
  [38] = {.lex_state = 146},
  [39] = {.lex_state = 148},
  [40] = {.lex_state = 130, .external_lex_state = 2},
  [41] = {.lex_state = 130, .external_lex_state = 2},
  [42] = {.lex_state = 85},
  [43] = {.lex_state = 160, .external_lex_state = 2},
  [44] = {.lex_state = 91},
  [45] = {.lex_state = 91},
  [46] = {.lex_state = 164, .external_lex_state = 3},
  [47] = {.lex_state = 166, .external_lex_state = 2},
  [48] = {.lex_state = 168, .external_lex_state = 2},
  [49] = {.lex_state = 108, .external_lex_state = 2},
  [50] = {.lex_state = 89, .external_lex_state = 2},
  [51] = {.lex_state = 89, .external_lex_state = 2},
  [52] = {.lex_state = 108, .external_lex_state = 2},
  [53] = {.lex_state = 170, .external_lex_state = 2},
  [54] = {.lex_state = 130, .external_lex_state = 2},
  [55] = {.lex_state = 130, .external_lex_state = 2},
  [56] = {.lex_state = 130, .external_lex_state = 2},
  [57] = {.lex_state = 174, .external_lex_state = 2},
  [58] = {.lex_state = 122},
  [59] = {.lex_state = 176},
  [60] = {.lex_state = 178, .external_lex_state = 2},
  [61] = {.lex_state = 143},
  [62] = {.lex_state = 138},
  [63] = {.lex_state = 146},
  [64] = {.lex_state = 148},
  [65] = {.lex_state = 130, .external_lex_state = 2},
  [66] = {.lex_state = 138},
  [67] = {.lex_state = 180},
  [68] = {.lex_state = 182},
  [69] = {.lex_state = 143},
  [70] = {.lex_state = 184},
  [71] = {.lex_state = 186, .external_lex_state = 2},
  [72] = {.lex_state = 189},
  [73] = {.lex_state = 130, .external_lex_state = 2},
  [74] = {.lex_state = 180},
  [75] = {.lex_state = 182},
  [76] = {.lex_state = 191},
  [77] = {.lex_state = 138},
  [78] = {.lex_state = 191},
  [79] = {.lex_state = 184},
  [80] = {.lex_state = 189},
  [81] = {.lex_state = 122},
  [82] = {.lex_state = 150},
  [83] = {.lex_state = 150},
  [84] = {.lex_state = 130, .external_lex_state = 2},
  [85] = {.lex_state = 138},
  [86] = {.lex_state = 130, .external_lex_state = 2},
  [87] = {.lex_state = 184},
  [88] = {.lex_state = 189},
  [89] = {.lex_state = 91},
  [90] = {.lex_state = 138},
  [91] = {.lex_state = 193, .external_lex_state = 2},
  [92] = {.lex_state = 146},
  [93] = {.lex_state = 148},
  [94] = {.lex_state = 130, .external_lex_state = 2},
  [95] = {.lex_state = 193, .external_lex_state = 2},
  [96] = {.lex_state = 160, .external_lex_state = 2},
  [97] = {.lex_state = 168, .external_lex_state = 2},
  [98] = {.lex_state = 138},
  [99] = {.lex_state = 126, .external_lex_state = 2},
  [100] = {.lex_state = 146},
  [101] = {.lex_state = 148},
  [102] = {.lex_state = 130, .external_lex_state = 2},
  [103] = {.lex_state = 126, .external_lex_state = 2},
  [104] = {.lex_state = 138},
  [105] = {.lex_state = 166, .external_lex_state = 2},
  [106] = {.lex_state = 146},
  [107] = {.lex_state = 148},
  [108] = {.lex_state = 130, .external_lex_state = 2},
  [109] = {.lex_state = 166, .external_lex_state = 2},
  [110] = {.lex_state = 166, .external_lex_state = 2},
  [111] = {.lex_state = 195, .external_lex_state = 4},
  [112] = {.lex_state = 166, .external_lex_state = 2},
  [113] = {.lex_state = 166, .external_lex_state = 2},
  [114] = {.lex_state = 122},
  [115] = {.lex_state = 126, .external_lex_state = 2},
  [116] = {.lex_state = 122},
  [117] = {.lex_state = 126, .external_lex_state = 2},
  [118] = {.lex_state = 193, .external_lex_state = 2},
  [119] = {.lex_state = 91},
  [120] = {.lex_state = 166, .external_lex_state = 2},
  [121] = {.lex_state = 122},
  [122] = {.lex_state = 174, .external_lex_state = 2},
  [123] = {.lex_state = 122},
  [124] = {.lex_state = 89, .external_lex_state = 2},
  [125] = {.lex_state = 198, .external_lex_state = 2},
  [126] = {.lex_state = 200},
  [127] = {.lex_state = 203},
  [128] = {.lex_state = 178, .external_lex_state = 2},
  [129] = {.lex_state = 200},
  [130] = {.lex_state = 138},
  [131] = {.lex_state = 184},
  [132] = {.lex_state = 189},
  [133] = {.lex_state = 143},
  [134] = {.lex_state = 138},
  [135] = {.lex_state = 205},
  [136] = {.lex_state = 180},
  [137] = {.lex_state = 91},
  [138] = {.lex_state = 143},
  [139] = {.lex_state = 85},
  [140] = {.lex_state = 211, .external_lex_state = 2},
  [141] = {.lex_state = 91},
  [142] = {.lex_state = 164, .external_lex_state = 3},
  [143] = {.lex_state = 213, .external_lex_state = 2},
  [144] = {.lex_state = 213, .external_lex_state = 2},
  [145] = {.lex_state = 143},
  [146] = {.lex_state = 186, .external_lex_state = 2},
  [147] = {.lex_state = 205},
  [148] = {.lex_state = 180},
  [149] = {.lex_state = 191},
  [150] = {.lex_state = 91},
  [151] = {.lex_state = 191},
  [152] = {.lex_state = 191},
  [153] = {.lex_state = 130, .external_lex_state = 2},
  [154] = {.lex_state = 91},
  [155] = {.lex_state = 130, .external_lex_state = 2},
  [156] = {.lex_state = 130, .external_lex_state = 2},
  [157] = {.lex_state = 166, .external_lex_state = 2},
  [158] = {.lex_state = 166, .external_lex_state = 2},
  [159] = {.lex_state = 193, .external_lex_state = 2},
  [160] = {.lex_state = 138},
  [161] = {.lex_state = 193, .external_lex_state = 2},
  [162] = {.lex_state = 184},
  [163] = {.lex_state = 189},
  [164] = {.lex_state = 193, .external_lex_state = 2},
  [165] = {.lex_state = 193, .external_lex_state = 2},
  [166] = {.lex_state = 168, .external_lex_state = 2},
  [167] = {.lex_state = 215, .external_lex_state = 2},
  [168] = {.lex_state = 138},
  [169] = {.lex_state = 215, .external_lex_state = 2},
  [170] = {.lex_state = 184},
  [171] = {.lex_state = 189},
  [172] = {.lex_state = 166, .external_lex_state = 2},
  [173] = {.lex_state = 138},
  [174] = {.lex_state = 166, .external_lex_state = 2},
  [175] = {.lex_state = 184},
  [176] = {.lex_state = 189},
  [177] = {.lex_state = 195, .external_lex_state = 4},
  [178] = {.lex_state = 166, .external_lex_state = 2},
  [179] = {.lex_state = 146},
  [180] = {.lex_state = 148},
  [181] = {.lex_state = 195, .external_lex_state = 4},
  [182] = {.lex_state = 193, .external_lex_state = 2},
  [183] = {.lex_state = 166, .external_lex_state = 2},
  [184] = {.lex_state = 130, .external_lex_state = 2},
  [185] = {.lex_state = 130, .external_lex_state = 2},
  [186] = {.lex_state = 122},
  [187] = {.lex_state = 136},
  [188] = {.lex_state = 198, .external_lex_state = 2},
  [189] = {.lex_state = 122},
  [190] = {.lex_state = 203},
  [191] = {.lex_state = 200},
  [192] = {.lex_state = 200},
  [193] = {.lex_state = 91},
  [194] = {.lex_state = 138},
  [195] = {.lex_state = 138},
  [196] = {.lex_state = 122},
  [197] = {.lex_state = 189},
  [198] = {.lex_state = 189},
  [199] = {.lex_state = 205},
  [200] = {.lex_state = 205},
  [201] = {.lex_state = 205},
  [202] = {.lex_state = 217},
  [203] = {.lex_state = 217},
  [204] = {.lex_state = 91},
  [205] = {.lex_state = 138},
  [206] = {.lex_state = 211, .external_lex_state = 2},
  [207] = {.lex_state = 146},
  [208] = {.lex_state = 148},
  [209] = {.lex_state = 130, .external_lex_state = 2},
  [210] = {.lex_state = 211, .external_lex_state = 2},
  [211] = {.lex_state = 211, .external_lex_state = 2},
  [212] = {.lex_state = 213, .external_lex_state = 2},
  [213] = {.lex_state = 213, .external_lex_state = 2},
  [214] = {.lex_state = 213, .external_lex_state = 2},
  [215] = {.lex_state = 213, .external_lex_state = 2},
  [216] = {.lex_state = 195, .external_lex_state = 4},
  [217] = {.lex_state = 213, .external_lex_state = 2},
  [218] = {.lex_state = 213, .external_lex_state = 2},
  [219] = {.lex_state = 211, .external_lex_state = 2},
  [220] = {.lex_state = 213, .external_lex_state = 2},
  [221] = {.lex_state = 122},
  [222] = {.lex_state = 205},
  [223] = {.lex_state = 205},
  [224] = {.lex_state = 217},
  [225] = {.lex_state = 217},
  [226] = {.lex_state = 217},
  [227] = {.lex_state = 217},
  [228] = {.lex_state = 193, .external_lex_state = 2},
  [229] = {.lex_state = 91},
  [230] = {.lex_state = 193, .external_lex_state = 2},
  [231] = {.lex_state = 193, .external_lex_state = 2},
  [232] = {.lex_state = 215, .external_lex_state = 2},
  [233] = {.lex_state = 91},
  [234] = {.lex_state = 215, .external_lex_state = 2},
  [235] = {.lex_state = 215, .external_lex_state = 2},
  [236] = {.lex_state = 166, .external_lex_state = 2},
  [237] = {.lex_state = 91},
  [238] = {.lex_state = 166, .external_lex_state = 2},
  [239] = {.lex_state = 166, .external_lex_state = 2},
  [240] = {.lex_state = 195, .external_lex_state = 4},
  [241] = {.lex_state = 184},
  [242] = {.lex_state = 195, .external_lex_state = 4},
  [243] = {.lex_state = 166, .external_lex_state = 2},
  [244] = {.lex_state = 166, .external_lex_state = 2},
  [245] = {.lex_state = 178, .external_lex_state = 2},
  [246] = {.lex_state = 122},
  [247] = {.lex_state = 203},
  [248] = {.lex_state = 217},
  [249] = {.lex_state = 217},
  [250] = {.lex_state = 219, .external_lex_state = 2},
  [251] = {.lex_state = 219, .external_lex_state = 2},
  [252] = {.lex_state = 122},
  [253] = {.lex_state = 205},
  [254] = {.lex_state = 205},
  [255] = {.lex_state = 143},
  [256] = {.lex_state = 143},
  [257] = {.lex_state = 213, .external_lex_state = 2},
  [258] = {.lex_state = 213, .external_lex_state = 2},
  [259] = {.lex_state = 211, .external_lex_state = 2},
  [260] = {.lex_state = 138},
  [261] = {.lex_state = 211, .external_lex_state = 2},
  [262] = {.lex_state = 184},
  [263] = {.lex_state = 189},
  [264] = {.lex_state = 211, .external_lex_state = 2},
  [265] = {.lex_state = 211, .external_lex_state = 2},
  [266] = {.lex_state = 213, .external_lex_state = 2},
  [267] = {.lex_state = 213, .external_lex_state = 2},
  [268] = {.lex_state = 195, .external_lex_state = 4},
  [269] = {.lex_state = 211, .external_lex_state = 2},
  [270] = {.lex_state = 213, .external_lex_state = 2},
  [271] = {.lex_state = 122},
  [272] = {.lex_state = 205},
  [273] = {.lex_state = 191},
  [274] = {.lex_state = 191},
  [275] = {.lex_state = 130, .external_lex_state = 2},
  [276] = {.lex_state = 130, .external_lex_state = 2},
  [277] = {.lex_state = 217},
  [278] = {.lex_state = 217},
  [279] = {.lex_state = 217},
  [280] = {.lex_state = 217},
  [281] = {.lex_state = 217},
  [282] = {.lex_state = 217},
  [283] = {.lex_state = 91},
  [284] = {.lex_state = 195, .external_lex_state = 4},
  [285] = {.lex_state = 178, .external_lex_state = 2},
  [286] = {.lex_state = 122},
  [287] = {.lex_state = 138},
  [288] = {.lex_state = 138},
  [289] = {.lex_state = 205},
  [290] = {.lex_state = 219, .external_lex_state = 2},
  [291] = {.lex_state = 122},
  [292] = {.lex_state = 126, .external_lex_state = 2},
  [293] = {.lex_state = 219, .external_lex_state = 2},
  [294] = {.lex_state = 205},
  [295] = {.lex_state = 219, .external_lex_state = 2},
  [296] = {.lex_state = 122},
  [297] = {.lex_state = 211, .external_lex_state = 2},
  [298] = {.lex_state = 91},
  [299] = {.lex_state = 211, .external_lex_state = 2},
  [300] = {.lex_state = 211, .external_lex_state = 2},
  [301] = {.lex_state = 213, .external_lex_state = 2},
  [302] = {.lex_state = 213, .external_lex_state = 2},
  [303] = {.lex_state = 122},
  [304] = {.lex_state = 193, .external_lex_state = 2},
  [305] = {.lex_state = 193, .external_lex_state = 2},
  [306] = {.lex_state = 215, .external_lex_state = 2},
  [307] = {.lex_state = 215, .external_lex_state = 2},
  [308] = {.lex_state = 166, .external_lex_state = 2},
  [309] = {.lex_state = 166, .external_lex_state = 2},
  [310] = {.lex_state = 217},
  [311] = {.lex_state = 217},
  [312] = {.lex_state = 245, .external_lex_state = 2},
  [313] = {.lex_state = 205},
  [314] = {.lex_state = 263, .external_lex_state = 2},
  [315] = {.lex_state = 205},
  [316] = {.lex_state = 217},
  [317] = {.lex_state = 217},
  [318] = {.lex_state = 195, .external_lex_state = 4},
  [319] = {.lex_state = 195, .external_lex_state = 4},
  [320] = {.lex_state = 211, .external_lex_state = 2},
  [321] = {.lex_state = 211, .external_lex_state = 2},
  [322] = {.lex_state = 122},
  [323] = {.lex_state = 178, .external_lex_state = 2},
  [324] = {.lex_state = 122},
  [325] = {.lex_state = 180},
  [326] = {.lex_state = 122},
  [327] = {.lex_state = 267, .external_lex_state = 2},
  [328] = {.lex_state = 91},
  [329] = {.lex_state = 316, .external_lex_state = 2},
  [330] = {.lex_state = 146},
  [331] = {.lex_state = 148},
  [332] = {.lex_state = 91},
  [333] = {.lex_state = 316, .external_lex_state = 5},
  [334] = {.lex_state = 130, .external_lex_state = 2},
  [335] = {.lex_state = 91},
  [336] = {.lex_state = 321, .external_lex_state = 2},
  [337] = {.lex_state = 195, .external_lex_state = 4},
  [338] = {.lex_state = 166, .external_lex_state = 2},
  [339] = {.lex_state = 85},
  [340] = {.lex_state = 245, .external_lex_state = 2},
  [341] = {.lex_state = 122},
  [342] = {.lex_state = 200},
  [343] = {.lex_state = 203},
  [344] = {.lex_state = 205},
  [345] = {.lex_state = 325},
  [346] = {.lex_state = 126, .external_lex_state = 2},
  [347] = {.lex_state = 327, .external_lex_state = 2},
  [348] = {.lex_state = 316, .external_lex_state = 5},
  [349] = {.lex_state = 316, .external_lex_state = 2},
  [350] = {.lex_state = 335, .external_lex_state = 2},
  [351] = {.lex_state = 166, .external_lex_state = 2},
  [352] = {.lex_state = 263, .external_lex_state = 2},
  [353] = {.lex_state = 200},
  [354] = {.lex_state = 205},
  [355] = {.lex_state = 337, .external_lex_state = 2},
  [356] = {.lex_state = 166, .external_lex_state = 2},
  [357] = {.lex_state = 138},
  [358] = {.lex_state = 178, .external_lex_state = 2},
  [359] = {.lex_state = 205},
  [360] = {.lex_state = 205},
  [361] = {.lex_state = 219, .external_lex_state = 2},
  [362] = {.lex_state = 215, .external_lex_state = 2},
  [363] = {.lex_state = 215, .external_lex_state = 2},
  [364] = {.lex_state = 327, .external_lex_state = 2},
  [365] = {.lex_state = 316, .external_lex_state = 5},
  [366] = {.lex_state = 184},
  [367] = {.lex_state = 217},
  [368] = {.lex_state = 217},
  [369] = {.lex_state = 189},
  [370] = {.lex_state = 138},
  [371] = {.lex_state = 335, .external_lex_state = 2},
  [372] = {.lex_state = 146},
  [373] = {.lex_state = 148},
  [374] = {.lex_state = 130, .external_lex_state = 2},
  [375] = {.lex_state = 335, .external_lex_state = 2},
  [376] = {.lex_state = 180},
  [377] = {.lex_state = 122},
  [378] = {.lex_state = 91},
  [379] = {.lex_state = 122},
  [380] = {.lex_state = 316, .external_lex_state = 2},
  [381] = {.lex_state = 316, .external_lex_state = 5},
  [382] = {.lex_state = 205},
  [383] = {.lex_state = 122},
  [384] = {.lex_state = 203},
  [385] = {.lex_state = 122},
  [386] = {.lex_state = 138},
  [387] = {.lex_state = 337, .external_lex_state = 2},
  [388] = {.lex_state = 146},
  [389] = {.lex_state = 148},
  [390] = {.lex_state = 130, .external_lex_state = 2},
  [391] = {.lex_state = 337, .external_lex_state = 2},
  [392] = {.lex_state = 166, .external_lex_state = 2},
  [393] = {.lex_state = 327, .external_lex_state = 2},
  [394] = {.lex_state = 316, .external_lex_state = 5},
  [395] = {.lex_state = 316, .external_lex_state = 5},
  [396] = {.lex_state = 335, .external_lex_state = 2},
  [397] = {.lex_state = 138},
  [398] = {.lex_state = 335, .external_lex_state = 2},
  [399] = {.lex_state = 184},
  [400] = {.lex_state = 189},
  [401] = {.lex_state = 205},
  [402] = {.lex_state = 335, .external_lex_state = 2},
  [403] = {.lex_state = 335, .external_lex_state = 2},
  [404] = {.lex_state = 122},
  [405] = {.lex_state = 337, .external_lex_state = 2},
  [406] = {.lex_state = 138},
  [407] = {.lex_state = 337, .external_lex_state = 2},
  [408] = {.lex_state = 184},
  [409] = {.lex_state = 189},
  [410] = {.lex_state = 335, .external_lex_state = 2},
  [411] = {.lex_state = 91},
  [412] = {.lex_state = 335, .external_lex_state = 2},
  [413] = {.lex_state = 335, .external_lex_state = 2},
  [414] = {.lex_state = 122},
  [415] = {.lex_state = 205},
  [416] = {.lex_state = 337, .external_lex_state = 2},
  [417] = {.lex_state = 91},
  [418] = {.lex_state = 337, .external_lex_state = 2},
  [419] = {.lex_state = 337, .external_lex_state = 2},
  [420] = {.lex_state = 217},
  [421] = {.lex_state = 217},
  [422] = {.lex_state = 122},
  [423] = {.lex_state = 217},
  [424] = {.lex_state = 217},
  [425] = {.lex_state = 335, .external_lex_state = 2},
  [426] = {.lex_state = 335, .external_lex_state = 2},
  [427] = {.lex_state = 337, .external_lex_state = 2},
  [428] = {.lex_state = 337, .external_lex_state = 2},
};

enum {
  ts_external_token__simple_heredoc,
  ts_external_token__heredoc_beginning,
  ts_external_token__heredoc_middle,
  ts_external_token__heredoc_end,
  ts_external_token_file_descriptor,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__simple_heredoc] = sym__simple_heredoc,
  [ts_external_token__heredoc_beginning] = sym__heredoc_beginning,
  [ts_external_token__heredoc_middle] = sym__heredoc_middle,
  [ts_external_token__heredoc_end] = sym__heredoc_end,
  [ts_external_token_file_descriptor] = sym_file_descriptor,
};

static bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__simple_heredoc] = true,
    [ts_external_token__heredoc_beginning] = true,
    [ts_external_token__heredoc_middle] = true,
    [ts_external_token__heredoc_end] = true,
    [ts_external_token_file_descriptor] = true,
  },
  [2] = {
    [ts_external_token_file_descriptor] = true,
  },
  [3] = {
    [ts_external_token__simple_heredoc] = true,
    [ts_external_token__heredoc_beginning] = true,
  },
  [4] = {
    [ts_external_token__heredoc_middle] = true,
    [ts_external_token__heredoc_end] = true,
  },
  [5] = {
    [ts_external_token__heredoc_middle] = true,
    [ts_external_token__heredoc_end] = true,
    [ts_external_token_file_descriptor] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_program] = STATE(10),
    [sym__terminated_statement] = STATE(340),
    [sym_while_statement] = STATE(341),
    [sym_do_group] = STATE(58),
    [sym_if_statement] = STATE(341),
    [sym_elif_clause] = STATE(342),
    [sym_else_clause] = STATE(343),
    [sym_case_statement] = STATE(341),
    [sym_case_item] = STATE(344),
    [sym_bracket_command] = STATE(341),
    [sym_command] = STATE(345),
    [sym_pipeline] = STATE(341),
    [sym_list] = STATE(341),
    [sym_environment_variable_assignment] = STATE(346),
    [sym_quoted_argument] = STATE(347),
    [sym_expansion] = STATE(348),
    [sym_operator_expansion] = STATE(348),
    [sym_command_substitution] = STATE(349),
    [sym_file_redirect] = STATE(350),
    [sym_heredoc_redirect] = STATE(351),
    [sym_heredoc] = STATE(112),
    [aux_sym_program_repeat1] = STATE(352),
    [aux_sym_if_statement_repeat1] = STATE(353),
    [aux_sym_case_statement_repeat1] = STATE(354),
    [aux_sym_bracket_command_repeat1] = STATE(355),
    [aux_sym_command_repeat1] = STATE(16),
    [aux_sym_command_repeat2] = STATE(356),
    [aux_sym_quoted_argument_repeat1] = STATE(357),
    [aux_sym_heredoc_repeat1] = STATE(181),
    [sym__simple_heredoc] = ACTIONS(1),
    [sym__heredoc_beginning] = ACTIONS(3),
    [sym__heredoc_middle] = ACTIONS(5),
    [sym__heredoc_end] = ACTIONS(7),
    [sym_file_descriptor] = ACTIONS(9),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(13),
    [anon_sym_do] = ACTIONS(15),
    [anon_sym_done] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_then] = ACTIONS(21),
    [anon_sym_fi] = ACTIONS(23),
    [anon_sym_elif] = ACTIONS(25),
    [anon_sym_else] = ACTIONS(27),
    [anon_sym_case] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(31),
    [anon_sym_esac] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_RBRACK] = ACTIONS(39),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(41),
    [anon_sym_PIPE] = ACTIONS(43),
    [anon_sym_AMP_AMP] = ACTIONS(45),
    [anon_sym_PIPE_PIPE] = ACTIONS(45),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_DOLLAR] = ACTIONS(51),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(55),
    [anon_sym_COLON_QMARK] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(59),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(61),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_GT_GT] = ACTIONS(65),
    [anon_sym_AMP_GT] = ACTIONS(63),
    [anon_sym_AMP_GT_GT] = ACTIONS(65),
    [anon_sym_LT_AMP] = ACTIONS(65),
    [anon_sym_GT_AMP] = ACTIONS(65),
    [anon_sym_LT_LT] = ACTIONS(67),
    [anon_sym_LT_LT_DASH] = ACTIONS(69),
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
    [sym_file_descriptor] = ACTIONS(75),
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(87),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_GT_GT] = ACTIONS(89),
    [anon_sym_AMP_GT] = ACTIONS(89),
    [anon_sym_AMP_GT_GT] = ACTIONS(89),
    [anon_sym_LT_AMP] = ACTIONS(89),
    [anon_sym_GT_AMP] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_comment] = ACTIONS(71),
  },
  [2] = {
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(95),
    [anon_sym_AMP_GT] = ACTIONS(93),
    [anon_sym_AMP_GT_GT] = ACTIONS(95),
    [anon_sym_LT_AMP] = ACTIONS(95),
    [anon_sym_GT_AMP] = ACTIONS(95),
    [sym_comment] = ACTIONS(71),
  },
  [3] = {
    [sym__terminated_statement] = STATE(18),
    [sym_while_statement] = STATE(19),
    [sym_if_statement] = STATE(19),
    [sym_case_statement] = STATE(19),
    [sym_bracket_command] = STATE(19),
    [sym_command] = STATE(19),
    [sym_pipeline] = STATE(19),
    [sym_list] = STATE(19),
    [sym_environment_variable_assignment] = STATE(20),
    [sym_file_redirect] = STATE(14),
    [aux_sym_command_repeat1] = STATE(16),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(87),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_GT_GT] = ACTIONS(89),
    [anon_sym_AMP_GT] = ACTIONS(89),
    [anon_sym_AMP_GT_GT] = ACTIONS(89),
    [anon_sym_LT_AMP] = ACTIONS(89),
    [anon_sym_GT_AMP] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_comment] = ACTIONS(71),
  },
  [4] = {
    [sym__terminated_statement] = STATE(21),
    [sym_while_statement] = STATE(19),
    [sym_if_statement] = STATE(19),
    [sym_case_statement] = STATE(19),
    [sym_bracket_command] = STATE(19),
    [sym_command] = STATE(19),
    [sym_pipeline] = STATE(19),
    [sym_list] = STATE(19),
    [sym_environment_variable_assignment] = STATE(20),
    [sym_file_redirect] = STATE(14),
    [aux_sym_command_repeat1] = STATE(16),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(87),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_GT_GT] = ACTIONS(89),
    [anon_sym_AMP_GT] = ACTIONS(89),
    [anon_sym_AMP_GT_GT] = ACTIONS(89),
    [anon_sym_LT_AMP] = ACTIONS(89),
    [anon_sym_GT_AMP] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_comment] = ACTIONS(71),
  },
  [5] = {
    [sym_quoted_argument] = STATE(23),
    [sym_expansion] = STATE(23),
    [sym_operator_expansion] = STATE(23),
    [sym_command_substitution] = STATE(23),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_single_quoted_argument] = ACTIONS(99),
    [anon_sym_DOLLAR] = ACTIONS(101),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(103),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [sym_word] = ACTIONS(107),
    [sym_comment] = ACTIONS(71),
  },
  [6] = {
    [sym_quoted_argument] = STATE(29),
    [sym_expansion] = STATE(29),
    [sym_operator_expansion] = STATE(29),
    [sym_command_substitution] = STATE(29),
    [aux_sym_bracket_command_repeat1] = STATE(34),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [sym_single_quoted_argument] = ACTIONS(111),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [sym_word] = ACTIONS(119),
    [sym_comment] = ACTIONS(71),
  },
  [7] = {
    [sym_quoted_argument] = STATE(29),
    [sym_expansion] = STATE(29),
    [sym_operator_expansion] = STATE(29),
    [sym_command_substitution] = STATE(29),
    [aux_sym_bracket_command_repeat1] = STATE(35),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [sym_single_quoted_argument] = ACTIONS(111),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [sym_word] = ACTIONS(119),
    [sym_comment] = ACTIONS(71),
  },
  [8] = {
    [sym_quoted_argument] = STATE(37),
    [sym_expansion] = STATE(37),
    [sym_operator_expansion] = STATE(37),
    [sym_command_substitution] = STATE(37),
    [anon_sym_DQUOTE] = ACTIONS(121),
    [sym_single_quoted_argument] = ACTIONS(123),
    [anon_sym_DOLLAR] = ACTIONS(125),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(127),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(129),
    [sym_word] = ACTIONS(131),
    [sym_comment] = ACTIONS(71),
  },
  [9] = {
    [sym_file_redirect] = STATE(47),
    [sym_heredoc_redirect] = STATE(47),
    [aux_sym_command_repeat2] = STATE(48),
    [sym_file_descriptor] = ACTIONS(133),
    [anon_sym_SEMI_SEMI] = ACTIONS(135),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(137),
    [anon_sym_PIPE] = ACTIONS(135),
    [anon_sym_PIPE_AMP] = ACTIONS(135),
    [anon_sym_AMP_AMP] = ACTIONS(135),
    [anon_sym_PIPE_PIPE] = ACTIONS(135),
    [anon_sym_EQ] = ACTIONS(139),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_GT_GT] = ACTIONS(141),
    [anon_sym_AMP_GT] = ACTIONS(141),
    [anon_sym_AMP_GT_GT] = ACTIONS(141),
    [anon_sym_LT_AMP] = ACTIONS(141),
    [anon_sym_GT_AMP] = ACTIONS(141),
    [anon_sym_LT_LT] = ACTIONS(143),
    [anon_sym_LT_LT_DASH] = ACTIONS(143),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(135),
    [anon_sym_LF] = ACTIONS(135),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [sym_comment] = ACTIONS(71),
  },
  [11] = {
    [sym_file_descriptor] = ACTIONS(149),
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_while] = ACTIONS(151),
    [anon_sym_done] = ACTIONS(151),
    [anon_sym_if] = ACTIONS(151),
    [anon_sym_fi] = ACTIONS(151),
    [anon_sym_elif] = ACTIONS(151),
    [anon_sym_else] = ACTIONS(151),
    [anon_sym_case] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(151),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(151),
    [anon_sym_GT_GT] = ACTIONS(151),
    [anon_sym_AMP_GT] = ACTIONS(151),
    [anon_sym_AMP_GT_GT] = ACTIONS(151),
    [anon_sym_LT_AMP] = ACTIONS(151),
    [anon_sym_GT_AMP] = ACTIONS(151),
    [sym_leading_word] = ACTIONS(153),
    [sym_comment] = ACTIONS(71),
  },
  [12] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(155),
    [anon_sym_PIPE] = ACTIONS(157),
    [anon_sym_PIPE_AMP] = ACTIONS(157),
    [anon_sym_AMP_AMP] = ACTIONS(159),
    [anon_sym_PIPE_PIPE] = ACTIONS(159),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(155),
    [anon_sym_LF] = ACTIONS(155),
  },
  [13] = {
    [sym_file_descriptor] = ACTIONS(161),
    [anon_sym_SEMI_SEMI] = ACTIONS(155),
    [anon_sym_PIPE] = ACTIONS(157),
    [anon_sym_PIPE_AMP] = ACTIONS(157),
    [anon_sym_AMP_AMP] = ACTIONS(159),
    [anon_sym_PIPE_PIPE] = ACTIONS(159),
    [anon_sym_LT] = ACTIONS(163),
    [anon_sym_GT] = ACTIONS(163),
    [anon_sym_GT_GT] = ACTIONS(163),
    [anon_sym_AMP_GT] = ACTIONS(163),
    [anon_sym_AMP_GT_GT] = ACTIONS(163),
    [anon_sym_LT_AMP] = ACTIONS(163),
    [anon_sym_GT_AMP] = ACTIONS(163),
    [sym_leading_word] = ACTIONS(163),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(155),
    [anon_sym_LF] = ACTIONS(155),
  },
  [14] = {
    [sym_file_descriptor] = ACTIONS(161),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_GT_GT] = ACTIONS(165),
    [anon_sym_AMP_GT] = ACTIONS(165),
    [anon_sym_AMP_GT_GT] = ACTIONS(165),
    [anon_sym_LT_AMP] = ACTIONS(165),
    [anon_sym_GT_AMP] = ACTIONS(165),
    [sym_leading_word] = ACTIONS(163),
    [sym_comment] = ACTIONS(71),
  },
  [15] = {
    [sym__terminated_statement] = STATE(52),
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
    [sym_file_descriptor] = ACTIONS(75),
    [ts_builtin_sym_end] = ACTIONS(167),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(87),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_GT_GT] = ACTIONS(89),
    [anon_sym_AMP_GT] = ACTIONS(89),
    [anon_sym_AMP_GT_GT] = ACTIONS(89),
    [anon_sym_LT_AMP] = ACTIONS(89),
    [anon_sym_GT_AMP] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_comment] = ACTIONS(71),
  },
  [16] = {
    [sym_environment_variable_assignment] = STATE(54),
    [sym_file_redirect] = STATE(54),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_GT_GT] = ACTIONS(89),
    [anon_sym_AMP_GT] = ACTIONS(89),
    [anon_sym_AMP_GT_GT] = ACTIONS(89),
    [anon_sym_LT_AMP] = ACTIONS(89),
    [anon_sym_GT_AMP] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(169),
    [sym_comment] = ACTIONS(71),
  },
  [17] = {
    [sym_quoted_argument] = STATE(55),
    [sym_expansion] = STATE(55),
    [sym_operator_expansion] = STATE(55),
    [sym_command_substitution] = STATE(55),
    [anon_sym_DQUOTE] = ACTIONS(121),
    [sym_single_quoted_argument] = ACTIONS(171),
    [anon_sym_DOLLAR] = ACTIONS(125),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(127),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(129),
    [sym_word] = ACTIONS(173),
    [sym_comment] = ACTIONS(71),
  },
  [18] = {
    [sym_do_group] = STATE(58),
    [anon_sym_do] = ACTIONS(175),
    [sym_comment] = ACTIONS(71),
  },
  [19] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(177),
    [anon_sym_PIPE] = ACTIONS(157),
    [anon_sym_PIPE_AMP] = ACTIONS(157),
    [anon_sym_AMP_AMP] = ACTIONS(159),
    [anon_sym_PIPE_PIPE] = ACTIONS(159),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(177),
    [anon_sym_LF] = ACTIONS(177),
  },
  [20] = {
    [sym_file_descriptor] = ACTIONS(161),
    [anon_sym_SEMI_SEMI] = ACTIONS(177),
    [anon_sym_PIPE] = ACTIONS(157),
    [anon_sym_PIPE_AMP] = ACTIONS(157),
    [anon_sym_AMP_AMP] = ACTIONS(159),
    [anon_sym_PIPE_PIPE] = ACTIONS(159),
    [anon_sym_LT] = ACTIONS(163),
    [anon_sym_GT] = ACTIONS(163),
    [anon_sym_GT_GT] = ACTIONS(163),
    [anon_sym_AMP_GT] = ACTIONS(163),
    [anon_sym_AMP_GT_GT] = ACTIONS(163),
    [anon_sym_LT_AMP] = ACTIONS(163),
    [anon_sym_GT_AMP] = ACTIONS(163),
    [sym_leading_word] = ACTIONS(163),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(177),
    [anon_sym_LF] = ACTIONS(177),
  },
  [21] = {
    [anon_sym_then] = ACTIONS(179),
    [sym_comment] = ACTIONS(71),
  },
  [22] = {
    [sym_expansion] = STATE(62),
    [sym_operator_expansion] = STATE(62),
    [sym_command_substitution] = STATE(62),
    [aux_sym_quoted_argument_repeat1] = STATE(66),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [sym__quoted_chars] = ACTIONS(183),
    [anon_sym_DOLLAR] = ACTIONS(185),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(187),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(189),
    [sym_comment] = ACTIONS(145),
  },
  [23] = {
    [anon_sym_in] = ACTIONS(191),
    [anon_sym_SEMI_SEMI] = ACTIONS(193),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(193),
    [anon_sym_LF] = ACTIONS(193),
  },
  [24] = {
    [sym_word] = ACTIONS(195),
    [sym_comment] = ACTIONS(71),
  },
  [25] = {
    [sym_leading_word] = ACTIONS(197),
    [sym_comment] = ACTIONS(71),
  },
  [26] = {
    [sym_command] = STATE(72),
    [sym_environment_variable_assignment] = STATE(14),
    [sym_file_redirect] = STATE(14),
    [aux_sym_command_repeat1] = STATE(73),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_GT_GT] = ACTIONS(89),
    [anon_sym_AMP_GT] = ACTIONS(89),
    [anon_sym_AMP_GT_GT] = ACTIONS(89),
    [anon_sym_LT_AMP] = ACTIONS(89),
    [anon_sym_GT_AMP] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(199),
    [sym_comment] = ACTIONS(71),
  },
  [27] = {
    [anon_sym_in] = ACTIONS(201),
    [anon_sym_SEMI_SEMI] = ACTIONS(203),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(203),
    [anon_sym_LF] = ACTIONS(203),
  },
  [28] = {
    [sym_expansion] = STATE(62),
    [sym_operator_expansion] = STATE(62),
    [sym_command_substitution] = STATE(62),
    [aux_sym_quoted_argument_repeat1] = STATE(77),
    [anon_sym_DQUOTE] = ACTIONS(205),
    [sym__quoted_chars] = ACTIONS(183),
    [anon_sym_DOLLAR] = ACTIONS(185),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(187),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(189),
    [sym_comment] = ACTIONS(145),
  },
  [29] = {
    [anon_sym_RBRACK] = ACTIONS(207),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(207),
    [anon_sym_DQUOTE] = ACTIONS(209),
    [sym_single_quoted_argument] = ACTIONS(207),
    [anon_sym_DOLLAR] = ACTIONS(207),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(209),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(209),
    [sym_word] = ACTIONS(211),
    [sym_comment] = ACTIONS(71),
  },
  [30] = {
    [sym_word] = ACTIONS(213),
    [sym_comment] = ACTIONS(71),
  },
  [31] = {
    [sym_leading_word] = ACTIONS(215),
    [sym_comment] = ACTIONS(71),
  },
  [32] = {
    [sym_command] = STATE(80),
    [sym_environment_variable_assignment] = STATE(14),
    [sym_file_redirect] = STATE(14),
    [aux_sym_command_repeat1] = STATE(73),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_GT_GT] = ACTIONS(89),
    [anon_sym_AMP_GT] = ACTIONS(89),
    [anon_sym_AMP_GT_GT] = ACTIONS(89),
    [anon_sym_LT_AMP] = ACTIONS(89),
    [anon_sym_GT_AMP] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(199),
    [sym_comment] = ACTIONS(71),
  },
  [33] = {
    [anon_sym_RBRACK] = ACTIONS(217),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(217),
    [anon_sym_DQUOTE] = ACTIONS(219),
    [sym_single_quoted_argument] = ACTIONS(217),
    [anon_sym_DOLLAR] = ACTIONS(217),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(219),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(219),
    [sym_word] = ACTIONS(221),
    [sym_comment] = ACTIONS(71),
  },
  [34] = {
    [sym_quoted_argument] = STATE(82),
    [sym_expansion] = STATE(82),
    [sym_operator_expansion] = STATE(82),
    [sym_command_substitution] = STATE(82),
    [anon_sym_RBRACK] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [sym_single_quoted_argument] = ACTIONS(225),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [sym_word] = ACTIONS(227),
    [sym_comment] = ACTIONS(71),
  },
  [35] = {
    [sym_quoted_argument] = STATE(82),
    [sym_expansion] = STATE(82),
    [sym_operator_expansion] = STATE(82),
    [sym_command_substitution] = STATE(82),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [sym_single_quoted_argument] = ACTIONS(225),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [sym_word] = ACTIONS(227),
    [sym_comment] = ACTIONS(71),
  },
  [36] = {
    [sym_expansion] = STATE(62),
    [sym_operator_expansion] = STATE(62),
    [sym_command_substitution] = STATE(62),
    [aux_sym_quoted_argument_repeat1] = STATE(85),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [sym__quoted_chars] = ACTIONS(183),
    [anon_sym_DOLLAR] = ACTIONS(185),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(187),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(189),
    [sym_comment] = ACTIONS(145),
  },
  [37] = {
    [sym_file_descriptor] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(233),
    [anon_sym_GT] = ACTIONS(233),
    [anon_sym_GT_GT] = ACTIONS(233),
    [anon_sym_AMP_GT] = ACTIONS(233),
    [anon_sym_AMP_GT_GT] = ACTIONS(233),
    [anon_sym_LT_AMP] = ACTIONS(233),
    [anon_sym_GT_AMP] = ACTIONS(233),
    [sym_leading_word] = ACTIONS(235),
    [sym_comment] = ACTIONS(71),
  },
  [38] = {
    [sym_word] = ACTIONS(237),
    [sym_comment] = ACTIONS(71),
  },
  [39] = {
    [sym_leading_word] = ACTIONS(239),
    [sym_comment] = ACTIONS(71),
  },
  [40] = {
    [sym_command] = STATE(88),
    [sym_environment_variable_assignment] = STATE(14),
    [sym_file_redirect] = STATE(14),
    [aux_sym_command_repeat1] = STATE(73),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_GT_GT] = ACTIONS(89),
    [anon_sym_AMP_GT] = ACTIONS(89),
    [anon_sym_AMP_GT_GT] = ACTIONS(89),
    [anon_sym_LT_AMP] = ACTIONS(89),
    [anon_sym_GT_AMP] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(199),
    [sym_comment] = ACTIONS(71),
  },
  [41] = {
    [sym_file_descriptor] = ACTIONS(241),
    [anon_sym_LT] = ACTIONS(243),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_GT_GT] = ACTIONS(243),
    [anon_sym_AMP_GT] = ACTIONS(243),
    [anon_sym_AMP_GT_GT] = ACTIONS(243),
    [anon_sym_LT_AMP] = ACTIONS(243),
    [anon_sym_GT_AMP] = ACTIONS(243),
    [sym_leading_word] = ACTIONS(245),
    [sym_comment] = ACTIONS(71),
  },
  [42] = {
    [anon_sym_LT] = ACTIONS(247),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_GT_GT] = ACTIONS(249),
    [anon_sym_AMP_GT] = ACTIONS(247),
    [anon_sym_AMP_GT_GT] = ACTIONS(249),
    [anon_sym_LT_AMP] = ACTIONS(249),
    [anon_sym_GT_AMP] = ACTIONS(249),
    [sym_comment] = ACTIONS(71),
  },
  [43] = {
    [sym_quoted_argument] = STATE(91),
    [sym_expansion] = STATE(91),
    [sym_operator_expansion] = STATE(91),
    [sym_command_substitution] = STATE(91),
    [sym_file_redirect] = STATE(47),
    [sym_heredoc_redirect] = STATE(47),
    [aux_sym_bracket_command_repeat1] = STATE(96),
    [aux_sym_command_repeat2] = STATE(97),
    [sym_file_descriptor] = ACTIONS(133),
    [anon_sym_SEMI_SEMI] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(251),
    [anon_sym_PIPE_AMP] = ACTIONS(251),
    [anon_sym_AMP_AMP] = ACTIONS(251),
    [anon_sym_PIPE_PIPE] = ACTIONS(251),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [sym_single_quoted_argument] = ACTIONS(255),
    [anon_sym_DOLLAR] = ACTIONS(257),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(259),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(261),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_GT_GT] = ACTIONS(141),
    [anon_sym_AMP_GT] = ACTIONS(141),
    [anon_sym_AMP_GT_GT] = ACTIONS(141),
    [anon_sym_LT_AMP] = ACTIONS(141),
    [anon_sym_GT_AMP] = ACTIONS(141),
    [anon_sym_LT_LT] = ACTIONS(143),
    [anon_sym_LT_LT_DASH] = ACTIONS(143),
    [sym_word] = ACTIONS(263),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(251),
    [anon_sym_LF] = ACTIONS(251),
  },
  [44] = {
    [sym_quoted_argument] = STATE(99),
    [sym_expansion] = STATE(99),
    [sym_operator_expansion] = STATE(99),
    [sym_command_substitution] = STATE(99),
    [anon_sym_DQUOTE] = ACTIONS(265),
    [sym_single_quoted_argument] = ACTIONS(267),
    [anon_sym_DOLLAR] = ACTIONS(269),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(271),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(273),
    [sym_word] = ACTIONS(275),
    [sym_comment] = ACTIONS(71),
  },
  [45] = {
    [sym_quoted_argument] = STATE(105),
    [sym_expansion] = STATE(105),
    [sym_operator_expansion] = STATE(105),
    [sym_command_substitution] = STATE(105),
    [anon_sym_DQUOTE] = ACTIONS(277),
    [sym_single_quoted_argument] = ACTIONS(279),
    [anon_sym_DOLLAR] = ACTIONS(281),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(283),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(285),
    [sym_word] = ACTIONS(287),
    [sym_comment] = ACTIONS(71),
  },
  [46] = {
    [sym_heredoc] = STATE(112),
    [sym__simple_heredoc] = ACTIONS(289),
    [sym__heredoc_beginning] = ACTIONS(291),
    [sym_comment] = ACTIONS(71),
  },
  [47] = {
    [sym_file_descriptor] = ACTIONS(293),
    [anon_sym_RPAREN] = ACTIONS(295),
    [anon_sym_SEMI_SEMI] = ACTIONS(295),
    [anon_sym_PIPE] = ACTIONS(295),
    [anon_sym_PIPE_AMP] = ACTIONS(295),
    [anon_sym_AMP_AMP] = ACTIONS(295),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LT] = ACTIONS(295),
    [anon_sym_GT] = ACTIONS(295),
    [anon_sym_GT_GT] = ACTIONS(295),
    [anon_sym_AMP_GT] = ACTIONS(295),
    [anon_sym_AMP_GT_GT] = ACTIONS(295),
    [anon_sym_LT_AMP] = ACTIONS(295),
    [anon_sym_GT_AMP] = ACTIONS(295),
    [anon_sym_LT_LT] = ACTIONS(295),
    [anon_sym_LT_LT_DASH] = ACTIONS(295),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(295),
    [anon_sym_LF] = ACTIONS(295),
  },
  [48] = {
    [sym_file_redirect] = STATE(113),
    [sym_heredoc_redirect] = STATE(113),
    [sym_file_descriptor] = ACTIONS(133),
    [anon_sym_SEMI_SEMI] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(251),
    [anon_sym_PIPE_AMP] = ACTIONS(251),
    [anon_sym_AMP_AMP] = ACTIONS(251),
    [anon_sym_PIPE_PIPE] = ACTIONS(251),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_GT_GT] = ACTIONS(141),
    [anon_sym_AMP_GT] = ACTIONS(141),
    [anon_sym_AMP_GT_GT] = ACTIONS(141),
    [anon_sym_LT_AMP] = ACTIONS(141),
    [anon_sym_GT_AMP] = ACTIONS(141),
    [anon_sym_LT_LT] = ACTIONS(143),
    [anon_sym_LT_LT_DASH] = ACTIONS(143),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(251),
    [anon_sym_LF] = ACTIONS(251),
  },
  [49] = {
    [sym_file_descriptor] = ACTIONS(297),
    [ts_builtin_sym_end] = ACTIONS(297),
    [anon_sym_while] = ACTIONS(299),
    [anon_sym_done] = ACTIONS(299),
    [anon_sym_if] = ACTIONS(299),
    [anon_sym_fi] = ACTIONS(299),
    [anon_sym_elif] = ACTIONS(299),
    [anon_sym_else] = ACTIONS(299),
    [anon_sym_case] = ACTIONS(299),
    [anon_sym_LBRACK] = ACTIONS(299),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(299),
    [anon_sym_LT] = ACTIONS(299),
    [anon_sym_GT] = ACTIONS(299),
    [anon_sym_GT_GT] = ACTIONS(299),
    [anon_sym_AMP_GT] = ACTIONS(299),
    [anon_sym_AMP_GT_GT] = ACTIONS(299),
    [anon_sym_LT_AMP] = ACTIONS(299),
    [anon_sym_GT_AMP] = ACTIONS(299),
    [sym_leading_word] = ACTIONS(301),
    [sym_comment] = ACTIONS(71),
  },
  [50] = {
    [sym_while_statement] = STATE(114),
    [sym_if_statement] = STATE(114),
    [sym_case_statement] = STATE(114),
    [sym_bracket_command] = STATE(114),
    [sym_command] = STATE(114),
    [sym_pipeline] = STATE(114),
    [sym_list] = STATE(114),
    [sym_environment_variable_assignment] = STATE(115),
    [sym_file_redirect] = STATE(14),
    [aux_sym_command_repeat1] = STATE(16),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(87),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_GT_GT] = ACTIONS(89),
    [anon_sym_AMP_GT] = ACTIONS(89),
    [anon_sym_AMP_GT_GT] = ACTIONS(89),
    [anon_sym_LT_AMP] = ACTIONS(89),
    [anon_sym_GT_AMP] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_comment] = ACTIONS(71),
  },
  [51] = {
    [sym_while_statement] = STATE(116),
    [sym_if_statement] = STATE(116),
    [sym_case_statement] = STATE(116),
    [sym_bracket_command] = STATE(116),
    [sym_command] = STATE(116),
    [sym_pipeline] = STATE(116),
    [sym_list] = STATE(116),
    [sym_environment_variable_assignment] = STATE(117),
    [sym_file_redirect] = STATE(14),
    [aux_sym_command_repeat1] = STATE(16),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(87),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_GT_GT] = ACTIONS(89),
    [anon_sym_AMP_GT] = ACTIONS(89),
    [anon_sym_AMP_GT_GT] = ACTIONS(89),
    [anon_sym_LT_AMP] = ACTIONS(89),
    [anon_sym_GT_AMP] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_comment] = ACTIONS(71),
  },
  [52] = {
    [sym_file_descriptor] = ACTIONS(303),
    [ts_builtin_sym_end] = ACTIONS(303),
    [anon_sym_while] = ACTIONS(305),
    [anon_sym_done] = ACTIONS(305),
    [anon_sym_if] = ACTIONS(305),
    [anon_sym_fi] = ACTIONS(305),
    [anon_sym_elif] = ACTIONS(305),
    [anon_sym_else] = ACTIONS(305),
    [anon_sym_case] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(305),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(305),
    [anon_sym_LT] = ACTIONS(305),
    [anon_sym_GT] = ACTIONS(305),
    [anon_sym_GT_GT] = ACTIONS(305),
    [anon_sym_AMP_GT] = ACTIONS(305),
    [anon_sym_AMP_GT_GT] = ACTIONS(305),
    [anon_sym_LT_AMP] = ACTIONS(305),
    [anon_sym_GT_AMP] = ACTIONS(305),
    [sym_leading_word] = ACTIONS(307),
    [sym_comment] = ACTIONS(71),
  },
  [53] = {
    [sym_file_redirect] = STATE(47),
    [sym_heredoc_redirect] = STATE(47),
    [aux_sym_command_repeat2] = STATE(120),
    [sym_file_descriptor] = ACTIONS(133),
    [anon_sym_RPAREN] = ACTIONS(309),
    [anon_sym_SEMI_SEMI] = ACTIONS(309),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(311),
    [anon_sym_PIPE] = ACTIONS(309),
    [anon_sym_PIPE_AMP] = ACTIONS(309),
    [anon_sym_AMP_AMP] = ACTIONS(309),
    [anon_sym_PIPE_PIPE] = ACTIONS(309),
    [anon_sym_EQ] = ACTIONS(313),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_GT_GT] = ACTIONS(141),
    [anon_sym_AMP_GT] = ACTIONS(141),
    [anon_sym_AMP_GT_GT] = ACTIONS(141),
    [anon_sym_LT_AMP] = ACTIONS(141),
    [anon_sym_GT_AMP] = ACTIONS(141),
    [anon_sym_LT_LT] = ACTIONS(143),
    [anon_sym_LT_LT_DASH] = ACTIONS(143),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(309),
    [anon_sym_LF] = ACTIONS(309),
  },
  [54] = {
    [sym_file_descriptor] = ACTIONS(315),
    [anon_sym_LT] = ACTIONS(317),
    [anon_sym_GT] = ACTIONS(317),
    [anon_sym_GT_GT] = ACTIONS(317),
    [anon_sym_AMP_GT] = ACTIONS(317),
    [anon_sym_AMP_GT_GT] = ACTIONS(317),
    [anon_sym_LT_AMP] = ACTIONS(317),
    [anon_sym_GT_AMP] = ACTIONS(317),
    [sym_leading_word] = ACTIONS(319),
    [sym_comment] = ACTIONS(71),
  },
  [55] = {
    [sym_file_descriptor] = ACTIONS(321),
    [anon_sym_LT] = ACTIONS(323),
    [anon_sym_GT] = ACTIONS(323),
    [anon_sym_GT_GT] = ACTIONS(323),
    [anon_sym_AMP_GT] = ACTIONS(323),
    [anon_sym_AMP_GT_GT] = ACTIONS(323),
    [anon_sym_LT_AMP] = ACTIONS(323),
    [anon_sym_GT_AMP] = ACTIONS(323),
    [sym_leading_word] = ACTIONS(325),
    [sym_comment] = ACTIONS(71),
  },
  [56] = {
    [sym_file_descriptor] = ACTIONS(327),
    [anon_sym_LT] = ACTIONS(329),
    [anon_sym_GT] = ACTIONS(329),
    [anon_sym_GT_GT] = ACTIONS(329),
    [anon_sym_AMP_GT] = ACTIONS(329),
    [anon_sym_AMP_GT_GT] = ACTIONS(329),
    [anon_sym_LT_AMP] = ACTIONS(329),
    [anon_sym_GT_AMP] = ACTIONS(329),
    [sym_leading_word] = ACTIONS(331),
    [sym_comment] = ACTIONS(71),
  },
  [57] = {
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
    [aux_sym_program_repeat1] = STATE(122),
    [aux_sym_command_repeat1] = STATE(16),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_done] = ACTIONS(333),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(87),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_GT_GT] = ACTIONS(89),
    [anon_sym_AMP_GT] = ACTIONS(89),
    [anon_sym_AMP_GT_GT] = ACTIONS(89),
    [anon_sym_LT_AMP] = ACTIONS(89),
    [anon_sym_GT_AMP] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_comment] = ACTIONS(71),
  },
  [58] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(335),
    [anon_sym_PIPE] = ACTIONS(335),
    [anon_sym_PIPE_AMP] = ACTIONS(335),
    [anon_sym_AMP_AMP] = ACTIONS(335),
    [anon_sym_PIPE_PIPE] = ACTIONS(335),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(335),
    [anon_sym_LF] = ACTIONS(335),
  },
  [59] = {
    [anon_sym_do] = ACTIONS(297),
    [anon_sym_then] = ACTIONS(297),
    [sym_comment] = ACTIONS(71),
  },
  [60] = {
    [sym__terminated_statement] = STATE(11),
    [sym_while_statement] = STATE(12),
    [sym_if_statement] = STATE(12),
    [sym_elif_clause] = STATE(126),
    [sym_else_clause] = STATE(127),
    [sym_case_statement] = STATE(12),
    [sym_bracket_command] = STATE(12),
    [sym_command] = STATE(12),
    [sym_pipeline] = STATE(12),
    [sym_list] = STATE(12),
    [sym_environment_variable_assignment] = STATE(13),
    [sym_file_redirect] = STATE(14),
    [aux_sym_program_repeat1] = STATE(128),
    [aux_sym_if_statement_repeat1] = STATE(129),
    [aux_sym_command_repeat1] = STATE(16),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_fi] = ACTIONS(337),
    [anon_sym_elif] = ACTIONS(339),
    [anon_sym_else] = ACTIONS(341),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(87),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_GT_GT] = ACTIONS(89),
    [anon_sym_AMP_GT] = ACTIONS(89),
    [anon_sym_AMP_GT_GT] = ACTIONS(89),
    [anon_sym_LT_AMP] = ACTIONS(89),
    [anon_sym_GT_AMP] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_comment] = ACTIONS(71),
  },
  [61] = {
    [anon_sym_in] = ACTIONS(343),
    [anon_sym_SEMI_SEMI] = ACTIONS(343),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(343),
    [anon_sym_LF] = ACTIONS(343),
  },
  [62] = {
    [anon_sym_DQUOTE] = ACTIONS(345),
    [sym__quoted_chars] = ACTIONS(347),
    [anon_sym_DOLLAR] = ACTIONS(345),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(345),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(345),
    [sym_comment] = ACTIONS(145),
  },
  [63] = {
    [sym_word] = ACTIONS(349),
    [sym_comment] = ACTIONS(71),
  },
  [64] = {
    [sym_leading_word] = ACTIONS(351),
    [sym_comment] = ACTIONS(71),
  },
  [65] = {
    [sym_command] = STATE(132),
    [sym_environment_variable_assignment] = STATE(14),
    [sym_file_redirect] = STATE(14),
    [aux_sym_command_repeat1] = STATE(73),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_GT_GT] = ACTIONS(89),
    [anon_sym_AMP_GT] = ACTIONS(89),
    [anon_sym_AMP_GT_GT] = ACTIONS(89),
    [anon_sym_LT_AMP] = ACTIONS(89),
    [anon_sym_GT_AMP] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(199),
    [sym_comment] = ACTIONS(71),
  },
  [66] = {
    [sym_expansion] = STATE(134),
    [sym_operator_expansion] = STATE(134),
    [sym_command_substitution] = STATE(134),
    [anon_sym_DQUOTE] = ACTIONS(353),
    [sym__quoted_chars] = ACTIONS(355),
    [anon_sym_DOLLAR] = ACTIONS(185),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(187),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(189),
    [sym_comment] = ACTIONS(145),
  },
  [67] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(357),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(357),
    [anon_sym_LF] = ACTIONS(357),
  },
  [68] = {
    [anon_sym_in] = ACTIONS(359),
    [sym_comment] = ACTIONS(71),
  },
  [69] = {
    [anon_sym_in] = ACTIONS(361),
    [anon_sym_SEMI_SEMI] = ACTIONS(361),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(361),
    [anon_sym_LF] = ACTIONS(361),
  },
  [70] = {
    [anon_sym_EQ] = ACTIONS(363),
    [anon_sym_COLON] = ACTIONS(365),
    [anon_sym_COLON_QMARK] = ACTIONS(363),
    [anon_sym_RBRACE] = ACTIONS(367),
    [sym_comment] = ACTIONS(71),
  },
  [71] = {
    [sym_file_redirect] = STATE(143),
    [sym_heredoc_redirect] = STATE(143),
    [aux_sym_command_repeat2] = STATE(144),
    [sym_file_descriptor] = ACTIONS(369),
    [anon_sym_RPAREN] = ACTIONS(135),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(371),
    [anon_sym_EQ] = ACTIONS(313),
    [anon_sym_LT] = ACTIONS(373),
    [anon_sym_GT] = ACTIONS(373),
    [anon_sym_GT_GT] = ACTIONS(373),
    [anon_sym_AMP_GT] = ACTIONS(373),
    [anon_sym_AMP_GT_GT] = ACTIONS(373),
    [anon_sym_LT_AMP] = ACTIONS(373),
    [anon_sym_GT_AMP] = ACTIONS(373),
    [anon_sym_LT_LT] = ACTIONS(375),
    [anon_sym_LT_LT_DASH] = ACTIONS(375),
    [sym_comment] = ACTIONS(145),
  },
  [72] = {
    [anon_sym_RPAREN] = ACTIONS(377),
    [sym_comment] = ACTIONS(71),
  },
  [73] = {
    [sym_environment_variable_assignment] = STATE(54),
    [sym_file_redirect] = STATE(54),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_GT_GT] = ACTIONS(89),
    [anon_sym_AMP_GT] = ACTIONS(89),
    [anon_sym_AMP_GT_GT] = ACTIONS(89),
    [anon_sym_LT_AMP] = ACTIONS(89),
    [anon_sym_GT_AMP] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(379),
    [sym_comment] = ACTIONS(71),
  },
  [74] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(381),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(381),
    [anon_sym_LF] = ACTIONS(381),
  },
  [75] = {
    [anon_sym_in] = ACTIONS(383),
    [sym_comment] = ACTIONS(71),
  },
  [76] = {
    [anon_sym_RPAREN] = ACTIONS(385),
    [anon_sym_RBRACK] = ACTIONS(387),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(387),
    [anon_sym_DQUOTE] = ACTIONS(385),
    [sym_single_quoted_argument] = ACTIONS(387),
    [anon_sym_DOLLAR] = ACTIONS(387),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(385),
    [anon_sym_RBRACE] = ACTIONS(385),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(385),
    [sym_word] = ACTIONS(343),
    [sym_comment] = ACTIONS(71),
  },
  [77] = {
    [sym_expansion] = STATE(134),
    [sym_operator_expansion] = STATE(134),
    [sym_command_substitution] = STATE(134),
    [anon_sym_DQUOTE] = ACTIONS(389),
    [sym__quoted_chars] = ACTIONS(355),
    [anon_sym_DOLLAR] = ACTIONS(185),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(187),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(189),
    [sym_comment] = ACTIONS(145),
  },
  [78] = {
    [anon_sym_RPAREN] = ACTIONS(391),
    [anon_sym_RBRACK] = ACTIONS(393),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(393),
    [anon_sym_DQUOTE] = ACTIONS(391),
    [sym_single_quoted_argument] = ACTIONS(393),
    [anon_sym_DOLLAR] = ACTIONS(393),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(391),
    [anon_sym_RBRACE] = ACTIONS(391),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(391),
    [sym_word] = ACTIONS(361),
    [sym_comment] = ACTIONS(71),
  },
  [79] = {
    [anon_sym_EQ] = ACTIONS(395),
    [anon_sym_COLON] = ACTIONS(397),
    [anon_sym_COLON_QMARK] = ACTIONS(395),
    [anon_sym_RBRACE] = ACTIONS(399),
    [sym_comment] = ACTIONS(71),
  },
  [80] = {
    [anon_sym_RPAREN] = ACTIONS(401),
    [sym_comment] = ACTIONS(71),
  },
  [81] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(403),
    [anon_sym_PIPE] = ACTIONS(403),
    [anon_sym_PIPE_AMP] = ACTIONS(403),
    [anon_sym_AMP_AMP] = ACTIONS(403),
    [anon_sym_PIPE_PIPE] = ACTIONS(403),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(403),
    [anon_sym_LF] = ACTIONS(403),
  },
  [82] = {
    [anon_sym_RBRACK] = ACTIONS(405),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(405),
    [anon_sym_DQUOTE] = ACTIONS(407),
    [sym_single_quoted_argument] = ACTIONS(405),
    [anon_sym_DOLLAR] = ACTIONS(405),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(407),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(407),
    [sym_word] = ACTIONS(409),
    [sym_comment] = ACTIONS(71),
  },
  [83] = {
    [anon_sym_RBRACK] = ACTIONS(411),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(411),
    [anon_sym_DQUOTE] = ACTIONS(413),
    [sym_single_quoted_argument] = ACTIONS(411),
    [anon_sym_DOLLAR] = ACTIONS(411),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(413),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(413),
    [sym_word] = ACTIONS(415),
    [sym_comment] = ACTIONS(71),
  },
  [84] = {
    [sym_file_descriptor] = ACTIONS(385),
    [anon_sym_LT] = ACTIONS(387),
    [anon_sym_GT] = ACTIONS(387),
    [anon_sym_GT_GT] = ACTIONS(387),
    [anon_sym_AMP_GT] = ACTIONS(387),
    [anon_sym_AMP_GT_GT] = ACTIONS(387),
    [anon_sym_LT_AMP] = ACTIONS(387),
    [anon_sym_GT_AMP] = ACTIONS(387),
    [sym_leading_word] = ACTIONS(343),
    [sym_comment] = ACTIONS(71),
  },
  [85] = {
    [sym_expansion] = STATE(134),
    [sym_operator_expansion] = STATE(134),
    [sym_command_substitution] = STATE(134),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [sym__quoted_chars] = ACTIONS(355),
    [anon_sym_DOLLAR] = ACTIONS(185),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(187),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(189),
    [sym_comment] = ACTIONS(145),
  },
  [86] = {
    [sym_file_descriptor] = ACTIONS(391),
    [anon_sym_LT] = ACTIONS(393),
    [anon_sym_GT] = ACTIONS(393),
    [anon_sym_GT_GT] = ACTIONS(393),
    [anon_sym_AMP_GT] = ACTIONS(393),
    [anon_sym_AMP_GT_GT] = ACTIONS(393),
    [anon_sym_LT_AMP] = ACTIONS(393),
    [anon_sym_GT_AMP] = ACTIONS(393),
    [sym_leading_word] = ACTIONS(361),
    [sym_comment] = ACTIONS(71),
  },
  [87] = {
    [anon_sym_EQ] = ACTIONS(419),
    [anon_sym_COLON] = ACTIONS(421),
    [anon_sym_COLON_QMARK] = ACTIONS(419),
    [anon_sym_RBRACE] = ACTIONS(423),
    [sym_comment] = ACTIONS(71),
  },
  [88] = {
    [anon_sym_RPAREN] = ACTIONS(425),
    [sym_comment] = ACTIONS(71),
  },
  [89] = {
    [sym_quoted_argument] = STATE(157),
    [sym_expansion] = STATE(157),
    [sym_operator_expansion] = STATE(157),
    [sym_command_substitution] = STATE(157),
    [anon_sym_DQUOTE] = ACTIONS(277),
    [sym_single_quoted_argument] = ACTIONS(427),
    [anon_sym_DOLLAR] = ACTIONS(281),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(283),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(285),
    [sym_word] = ACTIONS(429),
    [sym_comment] = ACTIONS(71),
  },
  [90] = {
    [sym_expansion] = STATE(62),
    [sym_operator_expansion] = STATE(62),
    [sym_command_substitution] = STATE(62),
    [aux_sym_quoted_argument_repeat1] = STATE(160),
    [anon_sym_DQUOTE] = ACTIONS(431),
    [sym__quoted_chars] = ACTIONS(183),
    [anon_sym_DOLLAR] = ACTIONS(185),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(187),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(189),
    [sym_comment] = ACTIONS(145),
  },
  [91] = {
    [sym_file_descriptor] = ACTIONS(209),
    [anon_sym_RPAREN] = ACTIONS(211),
    [anon_sym_SEMI_SEMI] = ACTIONS(211),
    [anon_sym_PIPE] = ACTIONS(211),
    [anon_sym_PIPE_AMP] = ACTIONS(211),
    [anon_sym_AMP_AMP] = ACTIONS(211),
    [anon_sym_PIPE_PIPE] = ACTIONS(211),
    [anon_sym_DQUOTE] = ACTIONS(211),
    [sym_single_quoted_argument] = ACTIONS(211),
    [anon_sym_DOLLAR] = ACTIONS(211),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(211),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(211),
    [anon_sym_LT] = ACTIONS(211),
    [anon_sym_GT] = ACTIONS(211),
    [anon_sym_GT_GT] = ACTIONS(211),
    [anon_sym_AMP_GT] = ACTIONS(211),
    [anon_sym_AMP_GT_GT] = ACTIONS(211),
    [anon_sym_LT_AMP] = ACTIONS(211),
    [anon_sym_GT_AMP] = ACTIONS(211),
    [anon_sym_LT_LT] = ACTIONS(211),
    [anon_sym_LT_LT_DASH] = ACTIONS(211),
    [sym_word] = ACTIONS(211),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(211),
    [anon_sym_LF] = ACTIONS(211),
  },
  [92] = {
    [sym_word] = ACTIONS(433),
    [sym_comment] = ACTIONS(71),
  },
  [93] = {
    [sym_leading_word] = ACTIONS(435),
    [sym_comment] = ACTIONS(71),
  },
  [94] = {
    [sym_command] = STATE(163),
    [sym_environment_variable_assignment] = STATE(14),
    [sym_file_redirect] = STATE(14),
    [aux_sym_command_repeat1] = STATE(73),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_GT_GT] = ACTIONS(89),
    [anon_sym_AMP_GT] = ACTIONS(89),
    [anon_sym_AMP_GT_GT] = ACTIONS(89),
    [anon_sym_LT_AMP] = ACTIONS(89),
    [anon_sym_GT_AMP] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(199),
    [sym_comment] = ACTIONS(71),
  },
  [95] = {
    [sym_file_descriptor] = ACTIONS(219),
    [anon_sym_RPAREN] = ACTIONS(221),
    [anon_sym_SEMI_SEMI] = ACTIONS(221),
    [anon_sym_PIPE] = ACTIONS(221),
    [anon_sym_PIPE_AMP] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [anon_sym_DQUOTE] = ACTIONS(221),
    [sym_single_quoted_argument] = ACTIONS(221),
    [anon_sym_DOLLAR] = ACTIONS(221),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(221),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(221),
    [anon_sym_LT] = ACTIONS(221),
    [anon_sym_GT] = ACTIONS(221),
    [anon_sym_GT_GT] = ACTIONS(221),
    [anon_sym_AMP_GT] = ACTIONS(221),
    [anon_sym_AMP_GT_GT] = ACTIONS(221),
    [anon_sym_LT_AMP] = ACTIONS(221),
    [anon_sym_GT_AMP] = ACTIONS(221),
    [anon_sym_LT_LT] = ACTIONS(221),
    [anon_sym_LT_LT_DASH] = ACTIONS(221),
    [sym_word] = ACTIONS(221),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(221),
    [anon_sym_LF] = ACTIONS(221),
  },
  [96] = {
    [sym_quoted_argument] = STATE(164),
    [sym_expansion] = STATE(164),
    [sym_operator_expansion] = STATE(164),
    [sym_command_substitution] = STATE(164),
    [sym_file_redirect] = STATE(47),
    [sym_heredoc_redirect] = STATE(47),
    [aux_sym_command_repeat2] = STATE(166),
    [sym_file_descriptor] = ACTIONS(133),
    [anon_sym_SEMI_SEMI] = ACTIONS(437),
    [anon_sym_PIPE] = ACTIONS(437),
    [anon_sym_PIPE_AMP] = ACTIONS(437),
    [anon_sym_AMP_AMP] = ACTIONS(437),
    [anon_sym_PIPE_PIPE] = ACTIONS(437),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [sym_single_quoted_argument] = ACTIONS(439),
    [anon_sym_DOLLAR] = ACTIONS(257),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(259),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(261),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_GT_GT] = ACTIONS(141),
    [anon_sym_AMP_GT] = ACTIONS(141),
    [anon_sym_AMP_GT_GT] = ACTIONS(141),
    [anon_sym_LT_AMP] = ACTIONS(141),
    [anon_sym_GT_AMP] = ACTIONS(141),
    [anon_sym_LT_LT] = ACTIONS(143),
    [anon_sym_LT_LT_DASH] = ACTIONS(143),
    [sym_word] = ACTIONS(441),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(437),
    [anon_sym_LF] = ACTIONS(437),
  },
  [97] = {
    [sym_file_redirect] = STATE(113),
    [sym_heredoc_redirect] = STATE(113),
    [sym_file_descriptor] = ACTIONS(133),
    [anon_sym_SEMI_SEMI] = ACTIONS(437),
    [anon_sym_PIPE] = ACTIONS(437),
    [anon_sym_PIPE_AMP] = ACTIONS(437),
    [anon_sym_AMP_AMP] = ACTIONS(437),
    [anon_sym_PIPE_PIPE] = ACTIONS(437),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_GT_GT] = ACTIONS(141),
    [anon_sym_AMP_GT] = ACTIONS(141),
    [anon_sym_AMP_GT_GT] = ACTIONS(141),
    [anon_sym_LT_AMP] = ACTIONS(141),
    [anon_sym_GT_AMP] = ACTIONS(141),
    [anon_sym_LT_LT] = ACTIONS(143),
    [anon_sym_LT_LT_DASH] = ACTIONS(143),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(437),
    [anon_sym_LF] = ACTIONS(437),
  },
  [98] = {
    [sym_expansion] = STATE(62),
    [sym_operator_expansion] = STATE(62),
    [sym_command_substitution] = STATE(62),
    [aux_sym_quoted_argument_repeat1] = STATE(168),
    [anon_sym_DQUOTE] = ACTIONS(443),
    [sym__quoted_chars] = ACTIONS(183),
    [anon_sym_DOLLAR] = ACTIONS(185),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(187),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(189),
    [sym_comment] = ACTIONS(145),
  },
  [99] = {
    [sym_file_descriptor] = ACTIONS(445),
    [anon_sym_SEMI_SEMI] = ACTIONS(447),
    [anon_sym_PIPE] = ACTIONS(447),
    [anon_sym_PIPE_AMP] = ACTIONS(447),
    [anon_sym_AMP_AMP] = ACTIONS(447),
    [anon_sym_PIPE_PIPE] = ACTIONS(447),
    [anon_sym_LT] = ACTIONS(447),
    [anon_sym_GT] = ACTIONS(447),
    [anon_sym_GT_GT] = ACTIONS(447),
    [anon_sym_AMP_GT] = ACTIONS(447),
    [anon_sym_AMP_GT_GT] = ACTIONS(447),
    [anon_sym_LT_AMP] = ACTIONS(447),
    [anon_sym_GT_AMP] = ACTIONS(447),
    [sym_leading_word] = ACTIONS(447),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(447),
    [anon_sym_LF] = ACTIONS(447),
  },
  [100] = {
    [sym_word] = ACTIONS(449),
    [sym_comment] = ACTIONS(71),
  },
  [101] = {
    [sym_leading_word] = ACTIONS(451),
    [sym_comment] = ACTIONS(71),
  },
  [102] = {
    [sym_command] = STATE(171),
    [sym_environment_variable_assignment] = STATE(14),
    [sym_file_redirect] = STATE(14),
    [aux_sym_command_repeat1] = STATE(73),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_GT_GT] = ACTIONS(89),
    [anon_sym_AMP_GT] = ACTIONS(89),
    [anon_sym_AMP_GT_GT] = ACTIONS(89),
    [anon_sym_LT_AMP] = ACTIONS(89),
    [anon_sym_GT_AMP] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(199),
    [sym_comment] = ACTIONS(71),
  },
  [103] = {
    [sym_file_descriptor] = ACTIONS(453),
    [anon_sym_SEMI_SEMI] = ACTIONS(455),
    [anon_sym_PIPE] = ACTIONS(455),
    [anon_sym_PIPE_AMP] = ACTIONS(455),
    [anon_sym_AMP_AMP] = ACTIONS(455),
    [anon_sym_PIPE_PIPE] = ACTIONS(455),
    [anon_sym_LT] = ACTIONS(455),
    [anon_sym_GT] = ACTIONS(455),
    [anon_sym_GT_GT] = ACTIONS(455),
    [anon_sym_AMP_GT] = ACTIONS(455),
    [anon_sym_AMP_GT_GT] = ACTIONS(455),
    [anon_sym_LT_AMP] = ACTIONS(455),
    [anon_sym_GT_AMP] = ACTIONS(455),
    [sym_leading_word] = ACTIONS(455),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(455),
    [anon_sym_LF] = ACTIONS(455),
  },
  [104] = {
    [sym_expansion] = STATE(62),
    [sym_operator_expansion] = STATE(62),
    [sym_command_substitution] = STATE(62),
    [aux_sym_quoted_argument_repeat1] = STATE(173),
    [anon_sym_DQUOTE] = ACTIONS(457),
    [sym__quoted_chars] = ACTIONS(183),
    [anon_sym_DOLLAR] = ACTIONS(185),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(187),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(189),
    [sym_comment] = ACTIONS(145),
  },
  [105] = {
    [sym_file_descriptor] = ACTIONS(231),
    [anon_sym_RPAREN] = ACTIONS(235),
    [anon_sym_SEMI_SEMI] = ACTIONS(235),
    [anon_sym_PIPE] = ACTIONS(235),
    [anon_sym_PIPE_AMP] = ACTIONS(235),
    [anon_sym_AMP_AMP] = ACTIONS(235),
    [anon_sym_PIPE_PIPE] = ACTIONS(235),
    [anon_sym_LT] = ACTIONS(235),
    [anon_sym_GT] = ACTIONS(235),
    [anon_sym_GT_GT] = ACTIONS(235),
    [anon_sym_AMP_GT] = ACTIONS(235),
    [anon_sym_AMP_GT_GT] = ACTIONS(235),
    [anon_sym_LT_AMP] = ACTIONS(235),
    [anon_sym_GT_AMP] = ACTIONS(235),
    [anon_sym_LT_LT] = ACTIONS(235),
    [anon_sym_LT_LT_DASH] = ACTIONS(235),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(235),
    [anon_sym_LF] = ACTIONS(235),
  },
  [106] = {
    [sym_word] = ACTIONS(459),
    [sym_comment] = ACTIONS(71),
  },
  [107] = {
    [sym_leading_word] = ACTIONS(461),
    [sym_comment] = ACTIONS(71),
  },
  [108] = {
    [sym_command] = STATE(176),
    [sym_environment_variable_assignment] = STATE(14),
    [sym_file_redirect] = STATE(14),
    [aux_sym_command_repeat1] = STATE(73),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_GT_GT] = ACTIONS(89),
    [anon_sym_AMP_GT] = ACTIONS(89),
    [anon_sym_AMP_GT_GT] = ACTIONS(89),
    [anon_sym_LT_AMP] = ACTIONS(89),
    [anon_sym_GT_AMP] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(199),
    [sym_comment] = ACTIONS(71),
  },
  [109] = {
    [sym_file_descriptor] = ACTIONS(241),
    [anon_sym_RPAREN] = ACTIONS(245),
    [anon_sym_SEMI_SEMI] = ACTIONS(245),
    [anon_sym_PIPE] = ACTIONS(245),
    [anon_sym_PIPE_AMP] = ACTIONS(245),
    [anon_sym_AMP_AMP] = ACTIONS(245),
    [anon_sym_PIPE_PIPE] = ACTIONS(245),
    [anon_sym_LT] = ACTIONS(245),
    [anon_sym_GT] = ACTIONS(245),
    [anon_sym_GT_GT] = ACTIONS(245),
    [anon_sym_AMP_GT] = ACTIONS(245),
    [anon_sym_AMP_GT_GT] = ACTIONS(245),
    [anon_sym_LT_AMP] = ACTIONS(245),
    [anon_sym_GT_AMP] = ACTIONS(245),
    [anon_sym_LT_LT] = ACTIONS(245),
    [anon_sym_LT_LT_DASH] = ACTIONS(245),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(245),
    [anon_sym_LF] = ACTIONS(245),
  },
  [110] = {
    [sym_file_descriptor] = ACTIONS(463),
    [anon_sym_RPAREN] = ACTIONS(465),
    [anon_sym_SEMI_SEMI] = ACTIONS(465),
    [anon_sym_PIPE] = ACTIONS(465),
    [anon_sym_PIPE_AMP] = ACTIONS(465),
    [anon_sym_AMP_AMP] = ACTIONS(465),
    [anon_sym_PIPE_PIPE] = ACTIONS(465),
    [anon_sym_LT] = ACTIONS(465),
    [anon_sym_GT] = ACTIONS(465),
    [anon_sym_GT_GT] = ACTIONS(465),
    [anon_sym_AMP_GT] = ACTIONS(465),
    [anon_sym_AMP_GT_GT] = ACTIONS(465),
    [anon_sym_LT_AMP] = ACTIONS(465),
    [anon_sym_GT_AMP] = ACTIONS(465),
    [anon_sym_LT_LT] = ACTIONS(465),
    [anon_sym_LT_LT_DASH] = ACTIONS(465),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(465),
    [anon_sym_LF] = ACTIONS(465),
  },
  [111] = {
    [sym_expansion] = STATE(177),
    [sym_operator_expansion] = STATE(177),
    [aux_sym_heredoc_repeat1] = STATE(181),
    [sym__heredoc_middle] = ACTIONS(467),
    [sym__heredoc_end] = ACTIONS(469),
    [anon_sym_DOLLAR] = ACTIONS(471),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(473),
    [sym_comment] = ACTIONS(71),
  },
  [112] = {
    [sym_file_descriptor] = ACTIONS(475),
    [anon_sym_RPAREN] = ACTIONS(477),
    [anon_sym_SEMI_SEMI] = ACTIONS(477),
    [anon_sym_PIPE] = ACTIONS(477),
    [anon_sym_PIPE_AMP] = ACTIONS(477),
    [anon_sym_AMP_AMP] = ACTIONS(477),
    [anon_sym_PIPE_PIPE] = ACTIONS(477),
    [anon_sym_LT] = ACTIONS(477),
    [anon_sym_GT] = ACTIONS(477),
    [anon_sym_GT_GT] = ACTIONS(477),
    [anon_sym_AMP_GT] = ACTIONS(477),
    [anon_sym_AMP_GT_GT] = ACTIONS(477),
    [anon_sym_LT_AMP] = ACTIONS(477),
    [anon_sym_GT_AMP] = ACTIONS(477),
    [anon_sym_LT_LT] = ACTIONS(477),
    [anon_sym_LT_LT_DASH] = ACTIONS(477),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(477),
    [anon_sym_LF] = ACTIONS(477),
  },
  [113] = {
    [sym_file_descriptor] = ACTIONS(479),
    [anon_sym_RPAREN] = ACTIONS(481),
    [anon_sym_SEMI_SEMI] = ACTIONS(481),
    [anon_sym_PIPE] = ACTIONS(481),
    [anon_sym_PIPE_AMP] = ACTIONS(481),
    [anon_sym_AMP_AMP] = ACTIONS(481),
    [anon_sym_PIPE_PIPE] = ACTIONS(481),
    [anon_sym_LT] = ACTIONS(481),
    [anon_sym_GT] = ACTIONS(481),
    [anon_sym_GT_GT] = ACTIONS(481),
    [anon_sym_AMP_GT] = ACTIONS(481),
    [anon_sym_AMP_GT_GT] = ACTIONS(481),
    [anon_sym_LT_AMP] = ACTIONS(481),
    [anon_sym_GT_AMP] = ACTIONS(481),
    [anon_sym_LT_LT] = ACTIONS(481),
    [anon_sym_LT_LT_DASH] = ACTIONS(481),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(481),
    [anon_sym_LF] = ACTIONS(481),
  },
  [114] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(483),
    [anon_sym_PIPE] = ACTIONS(483),
    [anon_sym_PIPE_AMP] = ACTIONS(483),
    [anon_sym_AMP_AMP] = ACTIONS(483),
    [anon_sym_PIPE_PIPE] = ACTIONS(483),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(483),
    [anon_sym_LF] = ACTIONS(483),
  },
  [115] = {
    [sym_file_descriptor] = ACTIONS(161),
    [anon_sym_SEMI_SEMI] = ACTIONS(483),
    [anon_sym_PIPE] = ACTIONS(483),
    [anon_sym_PIPE_AMP] = ACTIONS(483),
    [anon_sym_AMP_AMP] = ACTIONS(483),
    [anon_sym_PIPE_PIPE] = ACTIONS(483),
    [anon_sym_LT] = ACTIONS(163),
    [anon_sym_GT] = ACTIONS(163),
    [anon_sym_GT_GT] = ACTIONS(163),
    [anon_sym_AMP_GT] = ACTIONS(163),
    [anon_sym_AMP_GT_GT] = ACTIONS(163),
    [anon_sym_LT_AMP] = ACTIONS(163),
    [anon_sym_GT_AMP] = ACTIONS(163),
    [sym_leading_word] = ACTIONS(163),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(483),
    [anon_sym_LF] = ACTIONS(483),
  },
  [116] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(485),
    [anon_sym_PIPE] = ACTIONS(157),
    [anon_sym_PIPE_AMP] = ACTIONS(157),
    [anon_sym_AMP_AMP] = ACTIONS(485),
    [anon_sym_PIPE_PIPE] = ACTIONS(485),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(485),
    [anon_sym_LF] = ACTIONS(485),
  },
  [117] = {
    [sym_file_descriptor] = ACTIONS(161),
    [anon_sym_SEMI_SEMI] = ACTIONS(485),
    [anon_sym_PIPE] = ACTIONS(157),
    [anon_sym_PIPE_AMP] = ACTIONS(157),
    [anon_sym_AMP_AMP] = ACTIONS(485),
    [anon_sym_PIPE_PIPE] = ACTIONS(485),
    [anon_sym_LT] = ACTIONS(163),
    [anon_sym_GT] = ACTIONS(163),
    [anon_sym_GT_GT] = ACTIONS(163),
    [anon_sym_AMP_GT] = ACTIONS(163),
    [anon_sym_AMP_GT_GT] = ACTIONS(163),
    [anon_sym_LT_AMP] = ACTIONS(163),
    [anon_sym_GT_AMP] = ACTIONS(163),
    [sym_leading_word] = ACTIONS(163),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(485),
    [anon_sym_LF] = ACTIONS(485),
  },
  [118] = {
    [sym_quoted_argument] = STATE(91),
    [sym_expansion] = STATE(91),
    [sym_operator_expansion] = STATE(91),
    [sym_command_substitution] = STATE(91),
    [sym_file_redirect] = STATE(47),
    [sym_heredoc_redirect] = STATE(47),
    [aux_sym_bracket_command_repeat1] = STATE(182),
    [aux_sym_command_repeat2] = STATE(183),
    [sym_file_descriptor] = ACTIONS(133),
    [anon_sym_RPAREN] = ACTIONS(487),
    [anon_sym_SEMI_SEMI] = ACTIONS(487),
    [anon_sym_PIPE] = ACTIONS(487),
    [anon_sym_PIPE_AMP] = ACTIONS(487),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [anon_sym_PIPE_PIPE] = ACTIONS(487),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [sym_single_quoted_argument] = ACTIONS(255),
    [anon_sym_DOLLAR] = ACTIONS(257),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(259),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(261),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_GT_GT] = ACTIONS(141),
    [anon_sym_AMP_GT] = ACTIONS(141),
    [anon_sym_AMP_GT_GT] = ACTIONS(141),
    [anon_sym_LT_AMP] = ACTIONS(141),
    [anon_sym_GT_AMP] = ACTIONS(141),
    [anon_sym_LT_LT] = ACTIONS(143),
    [anon_sym_LT_LT_DASH] = ACTIONS(143),
    [sym_word] = ACTIONS(263),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_LF] = ACTIONS(487),
  },
  [119] = {
    [sym_quoted_argument] = STATE(184),
    [sym_expansion] = STATE(184),
    [sym_operator_expansion] = STATE(184),
    [sym_command_substitution] = STATE(184),
    [anon_sym_DQUOTE] = ACTIONS(121),
    [sym_single_quoted_argument] = ACTIONS(489),
    [anon_sym_DOLLAR] = ACTIONS(125),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(127),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(129),
    [sym_word] = ACTIONS(491),
    [sym_comment] = ACTIONS(71),
  },
  [120] = {
    [sym_file_redirect] = STATE(113),
    [sym_heredoc_redirect] = STATE(113),
    [sym_file_descriptor] = ACTIONS(133),
    [anon_sym_RPAREN] = ACTIONS(487),
    [anon_sym_SEMI_SEMI] = ACTIONS(487),
    [anon_sym_PIPE] = ACTIONS(487),
    [anon_sym_PIPE_AMP] = ACTIONS(487),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [anon_sym_PIPE_PIPE] = ACTIONS(487),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_GT_GT] = ACTIONS(141),
    [anon_sym_AMP_GT] = ACTIONS(141),
    [anon_sym_AMP_GT_GT] = ACTIONS(141),
    [anon_sym_LT_AMP] = ACTIONS(141),
    [anon_sym_GT_AMP] = ACTIONS(141),
    [anon_sym_LT_LT] = ACTIONS(143),
    [anon_sym_LT_LT_DASH] = ACTIONS(143),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_LF] = ACTIONS(487),
  },
  [121] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(493),
    [anon_sym_PIPE] = ACTIONS(493),
    [anon_sym_PIPE_AMP] = ACTIONS(493),
    [anon_sym_AMP_AMP] = ACTIONS(493),
    [anon_sym_PIPE_PIPE] = ACTIONS(493),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(493),
    [anon_sym_LF] = ACTIONS(493),
  },
  [122] = {
    [sym__terminated_statement] = STATE(52),
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
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_done] = ACTIONS(495),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(87),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_GT_GT] = ACTIONS(89),
    [anon_sym_AMP_GT] = ACTIONS(89),
    [anon_sym_AMP_GT_GT] = ACTIONS(89),
    [anon_sym_LT_AMP] = ACTIONS(89),
    [anon_sym_GT_AMP] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_comment] = ACTIONS(71),
  },
  [123] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(497),
    [anon_sym_PIPE] = ACTIONS(497),
    [anon_sym_PIPE_AMP] = ACTIONS(497),
    [anon_sym_AMP_AMP] = ACTIONS(497),
    [anon_sym_PIPE_PIPE] = ACTIONS(497),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(497),
    [anon_sym_LF] = ACTIONS(497),
  },
  [124] = {
    [sym__terminated_statement] = STATE(187),
    [sym_while_statement] = STATE(19),
    [sym_if_statement] = STATE(19),
    [sym_case_statement] = STATE(19),
    [sym_bracket_command] = STATE(19),
    [sym_command] = STATE(19),
    [sym_pipeline] = STATE(19),
    [sym_list] = STATE(19),
    [sym_environment_variable_assignment] = STATE(20),
    [sym_file_redirect] = STATE(14),
    [aux_sym_command_repeat1] = STATE(16),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(87),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_GT_GT] = ACTIONS(89),
    [anon_sym_AMP_GT] = ACTIONS(89),
    [anon_sym_AMP_GT_GT] = ACTIONS(89),
    [anon_sym_LT_AMP] = ACTIONS(89),
    [anon_sym_GT_AMP] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_comment] = ACTIONS(71),
  },
  [125] = {
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
    [aux_sym_program_repeat1] = STATE(188),
    [aux_sym_command_repeat1] = STATE(16),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_fi] = ACTIONS(499),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(87),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_GT_GT] = ACTIONS(89),
    [anon_sym_AMP_GT] = ACTIONS(89),
    [anon_sym_AMP_GT_GT] = ACTIONS(89),
    [anon_sym_LT_AMP] = ACTIONS(89),
    [anon_sym_GT_AMP] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_comment] = ACTIONS(71),
  },
  [126] = {
    [anon_sym_fi] = ACTIONS(501),
    [anon_sym_elif] = ACTIONS(501),
    [anon_sym_else] = ACTIONS(501),
    [sym_comment] = ACTIONS(71),
  },
  [127] = {
    [anon_sym_fi] = ACTIONS(503),
    [sym_comment] = ACTIONS(71),
  },
  [128] = {
    [sym__terminated_statement] = STATE(52),
    [sym_while_statement] = STATE(12),
    [sym_if_statement] = STATE(12),
    [sym_elif_clause] = STATE(126),
    [sym_else_clause] = STATE(190),
    [sym_case_statement] = STATE(12),
    [sym_bracket_command] = STATE(12),
    [sym_command] = STATE(12),
    [sym_pipeline] = STATE(12),
    [sym_list] = STATE(12),
    [sym_environment_variable_assignment] = STATE(13),
    [sym_file_redirect] = STATE(14),
    [aux_sym_if_statement_repeat1] = STATE(191),
    [aux_sym_command_repeat1] = STATE(16),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_fi] = ACTIONS(505),
    [anon_sym_elif] = ACTIONS(339),
    [anon_sym_else] = ACTIONS(341),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(87),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_GT_GT] = ACTIONS(89),
    [anon_sym_AMP_GT] = ACTIONS(89),
    [anon_sym_AMP_GT_GT] = ACTIONS(89),
    [anon_sym_LT_AMP] = ACTIONS(89),
    [anon_sym_GT_AMP] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_comment] = ACTIONS(71),
  },
  [129] = {
    [sym_elif_clause] = STATE(192),
    [sym_else_clause] = STATE(190),
    [anon_sym_fi] = ACTIONS(503),
    [anon_sym_elif] = ACTIONS(507),
    [anon_sym_else] = ACTIONS(509),
    [sym_comment] = ACTIONS(71),
  },
  [130] = {
    [anon_sym_DQUOTE] = ACTIONS(361),
    [sym__quoted_chars] = ACTIONS(393),
    [anon_sym_DOLLAR] = ACTIONS(361),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(361),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(361),
    [sym_comment] = ACTIONS(145),
  },
  [131] = {
    [anon_sym_EQ] = ACTIONS(511),
    [anon_sym_COLON] = ACTIONS(513),
    [anon_sym_COLON_QMARK] = ACTIONS(511),
    [anon_sym_RBRACE] = ACTIONS(515),
    [sym_comment] = ACTIONS(71),
  },
  [132] = {
    [anon_sym_RPAREN] = ACTIONS(517),
    [sym_comment] = ACTIONS(71),
  },
  [133] = {
    [anon_sym_in] = ACTIONS(519),
    [anon_sym_SEMI_SEMI] = ACTIONS(519),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(519),
    [anon_sym_LF] = ACTIONS(519),
  },
  [134] = {
    [anon_sym_DQUOTE] = ACTIONS(521),
    [sym__quoted_chars] = ACTIONS(523),
    [anon_sym_DOLLAR] = ACTIONS(521),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(521),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(521),
    [sym_comment] = ACTIONS(145),
  },
  [135] = {
    [sym_case_item] = STATE(199),
    [sym_quoted_argument] = STATE(197),
    [sym_expansion] = STATE(197),
    [sym_operator_expansion] = STATE(197),
    [sym_command_substitution] = STATE(197),
    [aux_sym_case_statement_repeat1] = STATE(200),
    [anon_sym_esac] = ACTIONS(525),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [sym_single_quoted_argument] = ACTIONS(527),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [sym_word] = ACTIONS(529),
    [sym_comment] = ACTIONS(71),
  },
  [136] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(531),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(531),
    [anon_sym_LF] = ACTIONS(531),
  },
  [137] = {
    [sym_quoted_argument] = STATE(202),
    [sym_expansion] = STATE(202),
    [sym_operator_expansion] = STATE(202),
    [sym_command_substitution] = STATE(202),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [sym_single_quoted_argument] = ACTIONS(533),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [sym_word] = ACTIONS(535),
    [sym_comment] = ACTIONS(71),
  },
  [138] = {
    [anon_sym_in] = ACTIONS(537),
    [anon_sym_SEMI_SEMI] = ACTIONS(537),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(537),
    [anon_sym_LF] = ACTIONS(537),
  },
  [139] = {
    [anon_sym_LT] = ACTIONS(539),
    [anon_sym_GT] = ACTIONS(539),
    [anon_sym_GT_GT] = ACTIONS(541),
    [anon_sym_AMP_GT] = ACTIONS(539),
    [anon_sym_AMP_GT_GT] = ACTIONS(541),
    [anon_sym_LT_AMP] = ACTIONS(541),
    [anon_sym_GT_AMP] = ACTIONS(541),
    [sym_comment] = ACTIONS(71),
  },
  [140] = {
    [sym_quoted_argument] = STATE(206),
    [sym_expansion] = STATE(206),
    [sym_operator_expansion] = STATE(206),
    [sym_command_substitution] = STATE(206),
    [sym_file_redirect] = STATE(143),
    [sym_heredoc_redirect] = STATE(143),
    [aux_sym_bracket_command_repeat1] = STATE(211),
    [aux_sym_command_repeat2] = STATE(212),
    [sym_file_descriptor] = ACTIONS(369),
    [anon_sym_RPAREN] = ACTIONS(543),
    [anon_sym_DQUOTE] = ACTIONS(545),
    [sym_single_quoted_argument] = ACTIONS(547),
    [anon_sym_DOLLAR] = ACTIONS(549),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(551),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(553),
    [anon_sym_LT] = ACTIONS(555),
    [anon_sym_GT] = ACTIONS(555),
    [anon_sym_GT_GT] = ACTIONS(557),
    [anon_sym_AMP_GT] = ACTIONS(555),
    [anon_sym_AMP_GT_GT] = ACTIONS(557),
    [anon_sym_LT_AMP] = ACTIONS(557),
    [anon_sym_GT_AMP] = ACTIONS(557),
    [anon_sym_LT_LT] = ACTIONS(559),
    [anon_sym_LT_LT_DASH] = ACTIONS(561),
    [sym_word] = ACTIONS(563),
    [sym_comment] = ACTIONS(71),
  },
  [141] = {
    [sym_quoted_argument] = STATE(213),
    [sym_expansion] = STATE(213),
    [sym_operator_expansion] = STATE(213),
    [sym_command_substitution] = STATE(213),
    [anon_sym_DQUOTE] = ACTIONS(545),
    [sym_single_quoted_argument] = ACTIONS(565),
    [anon_sym_DOLLAR] = ACTIONS(549),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(551),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(553),
    [sym_word] = ACTIONS(567),
    [sym_comment] = ACTIONS(71),
  },
  [142] = {
    [sym_heredoc] = STATE(217),
    [sym__simple_heredoc] = ACTIONS(569),
    [sym__heredoc_beginning] = ACTIONS(571),
    [sym_comment] = ACTIONS(71),
  },
  [143] = {
    [sym_file_descriptor] = ACTIONS(293),
    [anon_sym_RPAREN] = ACTIONS(293),
    [anon_sym_LT] = ACTIONS(573),
    [anon_sym_GT] = ACTIONS(573),
    [anon_sym_GT_GT] = ACTIONS(293),
    [anon_sym_AMP_GT] = ACTIONS(573),
    [anon_sym_AMP_GT_GT] = ACTIONS(293),
    [anon_sym_LT_AMP] = ACTIONS(293),
    [anon_sym_GT_AMP] = ACTIONS(293),
    [anon_sym_LT_LT] = ACTIONS(573),
    [anon_sym_LT_LT_DASH] = ACTIONS(293),
    [sym_comment] = ACTIONS(71),
  },
  [144] = {
    [sym_file_redirect] = STATE(218),
    [sym_heredoc_redirect] = STATE(218),
    [sym_file_descriptor] = ACTIONS(369),
    [anon_sym_RPAREN] = ACTIONS(543),
    [anon_sym_LT] = ACTIONS(555),
    [anon_sym_GT] = ACTIONS(555),
    [anon_sym_GT_GT] = ACTIONS(557),
    [anon_sym_AMP_GT] = ACTIONS(555),
    [anon_sym_AMP_GT_GT] = ACTIONS(557),
    [anon_sym_LT_AMP] = ACTIONS(557),
    [anon_sym_GT_AMP] = ACTIONS(557),
    [anon_sym_LT_LT] = ACTIONS(559),
    [anon_sym_LT_LT_DASH] = ACTIONS(561),
    [sym_comment] = ACTIONS(71),
  },
  [145] = {
    [anon_sym_in] = ACTIONS(575),
    [anon_sym_SEMI_SEMI] = ACTIONS(575),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(575),
    [anon_sym_LF] = ACTIONS(575),
  },
  [146] = {
    [sym_file_redirect] = STATE(143),
    [sym_heredoc_redirect] = STATE(143),
    [aux_sym_command_repeat2] = STATE(220),
    [sym_file_descriptor] = ACTIONS(369),
    [anon_sym_RPAREN] = ACTIONS(309),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(577),
    [anon_sym_EQ] = ACTIONS(313),
    [anon_sym_LT] = ACTIONS(373),
    [anon_sym_GT] = ACTIONS(373),
    [anon_sym_GT_GT] = ACTIONS(373),
    [anon_sym_AMP_GT] = ACTIONS(373),
    [anon_sym_AMP_GT_GT] = ACTIONS(373),
    [anon_sym_LT_AMP] = ACTIONS(373),
    [anon_sym_GT_AMP] = ACTIONS(373),
    [anon_sym_LT_LT] = ACTIONS(375),
    [anon_sym_LT_LT_DASH] = ACTIONS(375),
    [sym_comment] = ACTIONS(145),
  },
  [147] = {
    [sym_case_item] = STATE(199),
    [sym_quoted_argument] = STATE(197),
    [sym_expansion] = STATE(197),
    [sym_operator_expansion] = STATE(197),
    [sym_command_substitution] = STATE(197),
    [aux_sym_case_statement_repeat1] = STATE(222),
    [anon_sym_esac] = ACTIONS(579),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [sym_single_quoted_argument] = ACTIONS(527),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [sym_word] = ACTIONS(529),
    [sym_comment] = ACTIONS(71),
  },
  [148] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(581),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(581),
    [anon_sym_LF] = ACTIONS(581),
  },
  [149] = {
    [anon_sym_RPAREN] = ACTIONS(583),
    [anon_sym_RBRACK] = ACTIONS(585),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(585),
    [anon_sym_DQUOTE] = ACTIONS(583),
    [sym_single_quoted_argument] = ACTIONS(585),
    [anon_sym_DOLLAR] = ACTIONS(585),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(583),
    [anon_sym_RBRACE] = ACTIONS(583),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(583),
    [sym_word] = ACTIONS(519),
    [sym_comment] = ACTIONS(71),
  },
  [150] = {
    [sym_quoted_argument] = STATE(224),
    [sym_expansion] = STATE(224),
    [sym_operator_expansion] = STATE(224),
    [sym_command_substitution] = STATE(224),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [sym_single_quoted_argument] = ACTIONS(587),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [sym_word] = ACTIONS(589),
    [sym_comment] = ACTIONS(71),
  },
  [151] = {
    [anon_sym_RPAREN] = ACTIONS(591),
    [anon_sym_RBRACK] = ACTIONS(593),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(593),
    [anon_sym_DQUOTE] = ACTIONS(591),
    [sym_single_quoted_argument] = ACTIONS(593),
    [anon_sym_DOLLAR] = ACTIONS(593),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(591),
    [anon_sym_RBRACE] = ACTIONS(591),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(591),
    [sym_word] = ACTIONS(537),
    [sym_comment] = ACTIONS(71),
  },
  [152] = {
    [anon_sym_RPAREN] = ACTIONS(595),
    [anon_sym_RBRACK] = ACTIONS(597),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(597),
    [anon_sym_DQUOTE] = ACTIONS(595),
    [sym_single_quoted_argument] = ACTIONS(597),
    [anon_sym_DOLLAR] = ACTIONS(597),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(595),
    [anon_sym_RBRACE] = ACTIONS(595),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(595),
    [sym_word] = ACTIONS(575),
    [sym_comment] = ACTIONS(71),
  },
  [153] = {
    [sym_file_descriptor] = ACTIONS(583),
    [anon_sym_LT] = ACTIONS(585),
    [anon_sym_GT] = ACTIONS(585),
    [anon_sym_GT_GT] = ACTIONS(585),
    [anon_sym_AMP_GT] = ACTIONS(585),
    [anon_sym_AMP_GT_GT] = ACTIONS(585),
    [anon_sym_LT_AMP] = ACTIONS(585),
    [anon_sym_GT_AMP] = ACTIONS(585),
    [sym_leading_word] = ACTIONS(519),
    [sym_comment] = ACTIONS(71),
  },
  [154] = {
    [sym_quoted_argument] = STATE(226),
    [sym_expansion] = STATE(226),
    [sym_operator_expansion] = STATE(226),
    [sym_command_substitution] = STATE(226),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [sym_single_quoted_argument] = ACTIONS(599),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [sym_word] = ACTIONS(601),
    [sym_comment] = ACTIONS(71),
  },
  [155] = {
    [sym_file_descriptor] = ACTIONS(591),
    [anon_sym_LT] = ACTIONS(593),
    [anon_sym_GT] = ACTIONS(593),
    [anon_sym_GT_GT] = ACTIONS(593),
    [anon_sym_AMP_GT] = ACTIONS(593),
    [anon_sym_AMP_GT_GT] = ACTIONS(593),
    [anon_sym_LT_AMP] = ACTIONS(593),
    [anon_sym_GT_AMP] = ACTIONS(593),
    [sym_leading_word] = ACTIONS(537),
    [sym_comment] = ACTIONS(71),
  },
  [156] = {
    [sym_file_descriptor] = ACTIONS(595),
    [anon_sym_LT] = ACTIONS(597),
    [anon_sym_GT] = ACTIONS(597),
    [anon_sym_GT_GT] = ACTIONS(597),
    [anon_sym_AMP_GT] = ACTIONS(597),
    [anon_sym_AMP_GT_GT] = ACTIONS(597),
    [anon_sym_LT_AMP] = ACTIONS(597),
    [anon_sym_GT_AMP] = ACTIONS(597),
    [sym_leading_word] = ACTIONS(575),
    [sym_comment] = ACTIONS(71),
  },
  [157] = {
    [sym_file_descriptor] = ACTIONS(321),
    [anon_sym_RPAREN] = ACTIONS(325),
    [anon_sym_SEMI_SEMI] = ACTIONS(325),
    [anon_sym_PIPE] = ACTIONS(325),
    [anon_sym_PIPE_AMP] = ACTIONS(325),
    [anon_sym_AMP_AMP] = ACTIONS(325),
    [anon_sym_PIPE_PIPE] = ACTIONS(325),
    [anon_sym_LT] = ACTIONS(325),
    [anon_sym_GT] = ACTIONS(325),
    [anon_sym_GT_GT] = ACTIONS(325),
    [anon_sym_AMP_GT] = ACTIONS(325),
    [anon_sym_AMP_GT_GT] = ACTIONS(325),
    [anon_sym_LT_AMP] = ACTIONS(325),
    [anon_sym_GT_AMP] = ACTIONS(325),
    [anon_sym_LT_LT] = ACTIONS(325),
    [anon_sym_LT_LT_DASH] = ACTIONS(325),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(325),
    [anon_sym_LF] = ACTIONS(325),
  },
  [158] = {
    [sym_file_descriptor] = ACTIONS(327),
    [anon_sym_RPAREN] = ACTIONS(331),
    [anon_sym_SEMI_SEMI] = ACTIONS(331),
    [anon_sym_PIPE] = ACTIONS(331),
    [anon_sym_PIPE_AMP] = ACTIONS(331),
    [anon_sym_AMP_AMP] = ACTIONS(331),
    [anon_sym_PIPE_PIPE] = ACTIONS(331),
    [anon_sym_LT] = ACTIONS(331),
    [anon_sym_GT] = ACTIONS(331),
    [anon_sym_GT_GT] = ACTIONS(331),
    [anon_sym_AMP_GT] = ACTIONS(331),
    [anon_sym_AMP_GT_GT] = ACTIONS(331),
    [anon_sym_LT_AMP] = ACTIONS(331),
    [anon_sym_GT_AMP] = ACTIONS(331),
    [anon_sym_LT_LT] = ACTIONS(331),
    [anon_sym_LT_LT_DASH] = ACTIONS(331),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(331),
    [anon_sym_LF] = ACTIONS(331),
  },
  [159] = {
    [sym_file_descriptor] = ACTIONS(385),
    [anon_sym_RPAREN] = ACTIONS(343),
    [anon_sym_SEMI_SEMI] = ACTIONS(343),
    [anon_sym_PIPE] = ACTIONS(343),
    [anon_sym_PIPE_AMP] = ACTIONS(343),
    [anon_sym_AMP_AMP] = ACTIONS(343),
    [anon_sym_PIPE_PIPE] = ACTIONS(343),
    [anon_sym_DQUOTE] = ACTIONS(343),
    [sym_single_quoted_argument] = ACTIONS(343),
    [anon_sym_DOLLAR] = ACTIONS(343),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(343),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(343),
    [anon_sym_LT] = ACTIONS(343),
    [anon_sym_GT] = ACTIONS(343),
    [anon_sym_GT_GT] = ACTIONS(343),
    [anon_sym_AMP_GT] = ACTIONS(343),
    [anon_sym_AMP_GT_GT] = ACTIONS(343),
    [anon_sym_LT_AMP] = ACTIONS(343),
    [anon_sym_GT_AMP] = ACTIONS(343),
    [anon_sym_LT_LT] = ACTIONS(343),
    [anon_sym_LT_LT_DASH] = ACTIONS(343),
    [sym_word] = ACTIONS(343),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(343),
    [anon_sym_LF] = ACTIONS(343),
  },
  [160] = {
    [sym_expansion] = STATE(134),
    [sym_operator_expansion] = STATE(134),
    [sym_command_substitution] = STATE(134),
    [anon_sym_DQUOTE] = ACTIONS(603),
    [sym__quoted_chars] = ACTIONS(355),
    [anon_sym_DOLLAR] = ACTIONS(185),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(187),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(189),
    [sym_comment] = ACTIONS(145),
  },
  [161] = {
    [sym_file_descriptor] = ACTIONS(391),
    [anon_sym_RPAREN] = ACTIONS(361),
    [anon_sym_SEMI_SEMI] = ACTIONS(361),
    [anon_sym_PIPE] = ACTIONS(361),
    [anon_sym_PIPE_AMP] = ACTIONS(361),
    [anon_sym_AMP_AMP] = ACTIONS(361),
    [anon_sym_PIPE_PIPE] = ACTIONS(361),
    [anon_sym_DQUOTE] = ACTIONS(361),
    [sym_single_quoted_argument] = ACTIONS(361),
    [anon_sym_DOLLAR] = ACTIONS(361),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(361),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(361),
    [anon_sym_LT] = ACTIONS(361),
    [anon_sym_GT] = ACTIONS(361),
    [anon_sym_GT_GT] = ACTIONS(361),
    [anon_sym_AMP_GT] = ACTIONS(361),
    [anon_sym_AMP_GT_GT] = ACTIONS(361),
    [anon_sym_LT_AMP] = ACTIONS(361),
    [anon_sym_GT_AMP] = ACTIONS(361),
    [anon_sym_LT_LT] = ACTIONS(361),
    [anon_sym_LT_LT_DASH] = ACTIONS(361),
    [sym_word] = ACTIONS(361),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(361),
    [anon_sym_LF] = ACTIONS(361),
  },
  [162] = {
    [anon_sym_EQ] = ACTIONS(605),
    [anon_sym_COLON] = ACTIONS(607),
    [anon_sym_COLON_QMARK] = ACTIONS(605),
    [anon_sym_RBRACE] = ACTIONS(609),
    [sym_comment] = ACTIONS(71),
  },
  [163] = {
    [anon_sym_RPAREN] = ACTIONS(611),
    [sym_comment] = ACTIONS(71),
  },
  [164] = {
    [sym_file_descriptor] = ACTIONS(407),
    [anon_sym_RPAREN] = ACTIONS(409),
    [anon_sym_SEMI_SEMI] = ACTIONS(409),
    [anon_sym_PIPE] = ACTIONS(409),
    [anon_sym_PIPE_AMP] = ACTIONS(409),
    [anon_sym_AMP_AMP] = ACTIONS(409),
    [anon_sym_PIPE_PIPE] = ACTIONS(409),
    [anon_sym_DQUOTE] = ACTIONS(409),
    [sym_single_quoted_argument] = ACTIONS(409),
    [anon_sym_DOLLAR] = ACTIONS(409),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(409),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(409),
    [anon_sym_LT] = ACTIONS(409),
    [anon_sym_GT] = ACTIONS(409),
    [anon_sym_GT_GT] = ACTIONS(409),
    [anon_sym_AMP_GT] = ACTIONS(409),
    [anon_sym_AMP_GT_GT] = ACTIONS(409),
    [anon_sym_LT_AMP] = ACTIONS(409),
    [anon_sym_GT_AMP] = ACTIONS(409),
    [anon_sym_LT_LT] = ACTIONS(409),
    [anon_sym_LT_LT_DASH] = ACTIONS(409),
    [sym_word] = ACTIONS(409),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(409),
    [anon_sym_LF] = ACTIONS(409),
  },
  [165] = {
    [sym_file_descriptor] = ACTIONS(413),
    [anon_sym_RPAREN] = ACTIONS(415),
    [anon_sym_SEMI_SEMI] = ACTIONS(415),
    [anon_sym_PIPE] = ACTIONS(415),
    [anon_sym_PIPE_AMP] = ACTIONS(415),
    [anon_sym_AMP_AMP] = ACTIONS(415),
    [anon_sym_PIPE_PIPE] = ACTIONS(415),
    [anon_sym_DQUOTE] = ACTIONS(415),
    [sym_single_quoted_argument] = ACTIONS(415),
    [anon_sym_DOLLAR] = ACTIONS(415),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(415),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(415),
    [anon_sym_LT] = ACTIONS(415),
    [anon_sym_GT] = ACTIONS(415),
    [anon_sym_GT_GT] = ACTIONS(415),
    [anon_sym_AMP_GT] = ACTIONS(415),
    [anon_sym_AMP_GT_GT] = ACTIONS(415),
    [anon_sym_LT_AMP] = ACTIONS(415),
    [anon_sym_GT_AMP] = ACTIONS(415),
    [anon_sym_LT_LT] = ACTIONS(415),
    [anon_sym_LT_LT_DASH] = ACTIONS(415),
    [sym_word] = ACTIONS(415),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(415),
    [anon_sym_LF] = ACTIONS(415),
  },
  [166] = {
    [sym_file_redirect] = STATE(113),
    [sym_heredoc_redirect] = STATE(113),
    [sym_file_descriptor] = ACTIONS(133),
    [anon_sym_SEMI_SEMI] = ACTIONS(613),
    [anon_sym_PIPE] = ACTIONS(613),
    [anon_sym_PIPE_AMP] = ACTIONS(613),
    [anon_sym_AMP_AMP] = ACTIONS(613),
    [anon_sym_PIPE_PIPE] = ACTIONS(613),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_GT_GT] = ACTIONS(141),
    [anon_sym_AMP_GT] = ACTIONS(141),
    [anon_sym_AMP_GT_GT] = ACTIONS(141),
    [anon_sym_LT_AMP] = ACTIONS(141),
    [anon_sym_GT_AMP] = ACTIONS(141),
    [anon_sym_LT_LT] = ACTIONS(143),
    [anon_sym_LT_LT_DASH] = ACTIONS(143),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(613),
    [anon_sym_LF] = ACTIONS(613),
  },
  [167] = {
    [sym_file_descriptor] = ACTIONS(385),
    [anon_sym_SEMI_SEMI] = ACTIONS(343),
    [anon_sym_PIPE] = ACTIONS(343),
    [anon_sym_PIPE_AMP] = ACTIONS(343),
    [anon_sym_AMP_AMP] = ACTIONS(343),
    [anon_sym_PIPE_PIPE] = ACTIONS(343),
    [anon_sym_RBRACE] = ACTIONS(343),
    [anon_sym_LT] = ACTIONS(343),
    [anon_sym_GT] = ACTIONS(343),
    [anon_sym_GT_GT] = ACTIONS(343),
    [anon_sym_AMP_GT] = ACTIONS(343),
    [anon_sym_AMP_GT_GT] = ACTIONS(343),
    [anon_sym_LT_AMP] = ACTIONS(343),
    [anon_sym_GT_AMP] = ACTIONS(343),
    [sym_leading_word] = ACTIONS(343),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(343),
    [anon_sym_LF] = ACTIONS(343),
  },
  [168] = {
    [sym_expansion] = STATE(134),
    [sym_operator_expansion] = STATE(134),
    [sym_command_substitution] = STATE(134),
    [anon_sym_DQUOTE] = ACTIONS(615),
    [sym__quoted_chars] = ACTIONS(355),
    [anon_sym_DOLLAR] = ACTIONS(185),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(187),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(189),
    [sym_comment] = ACTIONS(145),
  },
  [169] = {
    [sym_file_descriptor] = ACTIONS(391),
    [anon_sym_SEMI_SEMI] = ACTIONS(361),
    [anon_sym_PIPE] = ACTIONS(361),
    [anon_sym_PIPE_AMP] = ACTIONS(361),
    [anon_sym_AMP_AMP] = ACTIONS(361),
    [anon_sym_PIPE_PIPE] = ACTIONS(361),
    [anon_sym_RBRACE] = ACTIONS(361),
    [anon_sym_LT] = ACTIONS(361),
    [anon_sym_GT] = ACTIONS(361),
    [anon_sym_GT_GT] = ACTIONS(361),
    [anon_sym_AMP_GT] = ACTIONS(361),
    [anon_sym_AMP_GT_GT] = ACTIONS(361),
    [anon_sym_LT_AMP] = ACTIONS(361),
    [anon_sym_GT_AMP] = ACTIONS(361),
    [sym_leading_word] = ACTIONS(361),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(361),
    [anon_sym_LF] = ACTIONS(361),
  },
  [170] = {
    [anon_sym_EQ] = ACTIONS(617),
    [anon_sym_COLON] = ACTIONS(619),
    [anon_sym_COLON_QMARK] = ACTIONS(617),
    [anon_sym_RBRACE] = ACTIONS(621),
    [sym_comment] = ACTIONS(71),
  },
  [171] = {
    [anon_sym_RPAREN] = ACTIONS(623),
    [sym_comment] = ACTIONS(71),
  },
  [172] = {
    [sym_file_descriptor] = ACTIONS(385),
    [anon_sym_RPAREN] = ACTIONS(343),
    [anon_sym_SEMI_SEMI] = ACTIONS(343),
    [anon_sym_PIPE] = ACTIONS(343),
    [anon_sym_PIPE_AMP] = ACTIONS(343),
    [anon_sym_AMP_AMP] = ACTIONS(343),
    [anon_sym_PIPE_PIPE] = ACTIONS(343),
    [anon_sym_LT] = ACTIONS(343),
    [anon_sym_GT] = ACTIONS(343),
    [anon_sym_GT_GT] = ACTIONS(343),
    [anon_sym_AMP_GT] = ACTIONS(343),
    [anon_sym_AMP_GT_GT] = ACTIONS(343),
    [anon_sym_LT_AMP] = ACTIONS(343),
    [anon_sym_GT_AMP] = ACTIONS(343),
    [anon_sym_LT_LT] = ACTIONS(343),
    [anon_sym_LT_LT_DASH] = ACTIONS(343),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(343),
    [anon_sym_LF] = ACTIONS(343),
  },
  [173] = {
    [sym_expansion] = STATE(134),
    [sym_operator_expansion] = STATE(134),
    [sym_command_substitution] = STATE(134),
    [anon_sym_DQUOTE] = ACTIONS(625),
    [sym__quoted_chars] = ACTIONS(355),
    [anon_sym_DOLLAR] = ACTIONS(185),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(187),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(189),
    [sym_comment] = ACTIONS(145),
  },
  [174] = {
    [sym_file_descriptor] = ACTIONS(391),
    [anon_sym_RPAREN] = ACTIONS(361),
    [anon_sym_SEMI_SEMI] = ACTIONS(361),
    [anon_sym_PIPE] = ACTIONS(361),
    [anon_sym_PIPE_AMP] = ACTIONS(361),
    [anon_sym_AMP_AMP] = ACTIONS(361),
    [anon_sym_PIPE_PIPE] = ACTIONS(361),
    [anon_sym_LT] = ACTIONS(361),
    [anon_sym_GT] = ACTIONS(361),
    [anon_sym_GT_GT] = ACTIONS(361),
    [anon_sym_AMP_GT] = ACTIONS(361),
    [anon_sym_AMP_GT_GT] = ACTIONS(361),
    [anon_sym_LT_AMP] = ACTIONS(361),
    [anon_sym_GT_AMP] = ACTIONS(361),
    [anon_sym_LT_LT] = ACTIONS(361),
    [anon_sym_LT_LT_DASH] = ACTIONS(361),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(361),
    [anon_sym_LF] = ACTIONS(361),
  },
  [175] = {
    [anon_sym_EQ] = ACTIONS(627),
    [anon_sym_COLON] = ACTIONS(629),
    [anon_sym_COLON_QMARK] = ACTIONS(627),
    [anon_sym_RBRACE] = ACTIONS(631),
    [sym_comment] = ACTIONS(71),
  },
  [176] = {
    [anon_sym_RPAREN] = ACTIONS(633),
    [sym_comment] = ACTIONS(71),
  },
  [177] = {
    [sym__heredoc_middle] = ACTIONS(635),
    [sym__heredoc_end] = ACTIONS(635),
    [anon_sym_DOLLAR] = ACTIONS(637),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(635),
    [sym_comment] = ACTIONS(71),
  },
  [178] = {
    [sym_file_descriptor] = ACTIONS(639),
    [anon_sym_RPAREN] = ACTIONS(641),
    [anon_sym_SEMI_SEMI] = ACTIONS(641),
    [anon_sym_PIPE] = ACTIONS(641),
    [anon_sym_PIPE_AMP] = ACTIONS(641),
    [anon_sym_AMP_AMP] = ACTIONS(641),
    [anon_sym_PIPE_PIPE] = ACTIONS(641),
    [anon_sym_LT] = ACTIONS(641),
    [anon_sym_GT] = ACTIONS(641),
    [anon_sym_GT_GT] = ACTIONS(641),
    [anon_sym_AMP_GT] = ACTIONS(641),
    [anon_sym_AMP_GT_GT] = ACTIONS(641),
    [anon_sym_LT_AMP] = ACTIONS(641),
    [anon_sym_GT_AMP] = ACTIONS(641),
    [anon_sym_LT_LT] = ACTIONS(641),
    [anon_sym_LT_LT_DASH] = ACTIONS(641),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(641),
    [anon_sym_LF] = ACTIONS(641),
  },
  [179] = {
    [sym_word] = ACTIONS(643),
    [sym_comment] = ACTIONS(71),
  },
  [180] = {
    [sym_leading_word] = ACTIONS(645),
    [sym_comment] = ACTIONS(71),
  },
  [181] = {
    [sym_expansion] = STATE(242),
    [sym_operator_expansion] = STATE(242),
    [sym__heredoc_middle] = ACTIONS(647),
    [sym__heredoc_end] = ACTIONS(649),
    [anon_sym_DOLLAR] = ACTIONS(471),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(473),
    [sym_comment] = ACTIONS(71),
  },
  [182] = {
    [sym_quoted_argument] = STATE(164),
    [sym_expansion] = STATE(164),
    [sym_operator_expansion] = STATE(164),
    [sym_command_substitution] = STATE(164),
    [sym_file_redirect] = STATE(47),
    [sym_heredoc_redirect] = STATE(47),
    [aux_sym_command_repeat2] = STATE(244),
    [sym_file_descriptor] = ACTIONS(133),
    [anon_sym_RPAREN] = ACTIONS(651),
    [anon_sym_SEMI_SEMI] = ACTIONS(651),
    [anon_sym_PIPE] = ACTIONS(651),
    [anon_sym_PIPE_AMP] = ACTIONS(651),
    [anon_sym_AMP_AMP] = ACTIONS(651),
    [anon_sym_PIPE_PIPE] = ACTIONS(651),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [sym_single_quoted_argument] = ACTIONS(439),
    [anon_sym_DOLLAR] = ACTIONS(257),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(259),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(261),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_GT_GT] = ACTIONS(141),
    [anon_sym_AMP_GT] = ACTIONS(141),
    [anon_sym_AMP_GT_GT] = ACTIONS(141),
    [anon_sym_LT_AMP] = ACTIONS(141),
    [anon_sym_GT_AMP] = ACTIONS(141),
    [anon_sym_LT_LT] = ACTIONS(143),
    [anon_sym_LT_LT_DASH] = ACTIONS(143),
    [sym_word] = ACTIONS(441),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(651),
    [anon_sym_LF] = ACTIONS(651),
  },
  [183] = {
    [sym_file_redirect] = STATE(113),
    [sym_heredoc_redirect] = STATE(113),
    [sym_file_descriptor] = ACTIONS(133),
    [anon_sym_RPAREN] = ACTIONS(651),
    [anon_sym_SEMI_SEMI] = ACTIONS(651),
    [anon_sym_PIPE] = ACTIONS(651),
    [anon_sym_PIPE_AMP] = ACTIONS(651),
    [anon_sym_AMP_AMP] = ACTIONS(651),
    [anon_sym_PIPE_PIPE] = ACTIONS(651),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_GT_GT] = ACTIONS(141),
    [anon_sym_AMP_GT] = ACTIONS(141),
    [anon_sym_AMP_GT_GT] = ACTIONS(141),
    [anon_sym_LT_AMP] = ACTIONS(141),
    [anon_sym_GT_AMP] = ACTIONS(141),
    [anon_sym_LT_LT] = ACTIONS(143),
    [anon_sym_LT_LT_DASH] = ACTIONS(143),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(651),
    [anon_sym_LF] = ACTIONS(651),
  },
  [184] = {
    [sym_file_descriptor] = ACTIONS(445),
    [anon_sym_LT] = ACTIONS(653),
    [anon_sym_GT] = ACTIONS(653),
    [anon_sym_GT_GT] = ACTIONS(653),
    [anon_sym_AMP_GT] = ACTIONS(653),
    [anon_sym_AMP_GT_GT] = ACTIONS(653),
    [anon_sym_LT_AMP] = ACTIONS(653),
    [anon_sym_GT_AMP] = ACTIONS(653),
    [sym_leading_word] = ACTIONS(447),
    [sym_comment] = ACTIONS(71),
  },
  [185] = {
    [sym_file_descriptor] = ACTIONS(453),
    [anon_sym_LT] = ACTIONS(655),
    [anon_sym_GT] = ACTIONS(655),
    [anon_sym_GT_GT] = ACTIONS(655),
    [anon_sym_AMP_GT] = ACTIONS(655),
    [anon_sym_AMP_GT_GT] = ACTIONS(655),
    [anon_sym_LT_AMP] = ACTIONS(655),
    [anon_sym_GT_AMP] = ACTIONS(655),
    [sym_leading_word] = ACTIONS(455),
    [sym_comment] = ACTIONS(71),
  },
  [186] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(657),
    [anon_sym_PIPE] = ACTIONS(657),
    [anon_sym_PIPE_AMP] = ACTIONS(657),
    [anon_sym_AMP_AMP] = ACTIONS(657),
    [anon_sym_PIPE_PIPE] = ACTIONS(657),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(657),
    [anon_sym_LF] = ACTIONS(657),
  },
  [187] = {
    [anon_sym_then] = ACTIONS(659),
    [sym_comment] = ACTIONS(71),
  },
  [188] = {
    [sym__terminated_statement] = STATE(52),
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
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_fi] = ACTIONS(661),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(87),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_GT_GT] = ACTIONS(89),
    [anon_sym_AMP_GT] = ACTIONS(89),
    [anon_sym_AMP_GT_GT] = ACTIONS(89),
    [anon_sym_LT_AMP] = ACTIONS(89),
    [anon_sym_GT_AMP] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_comment] = ACTIONS(71),
  },
  [189] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(663),
    [anon_sym_PIPE] = ACTIONS(663),
    [anon_sym_PIPE_AMP] = ACTIONS(663),
    [anon_sym_AMP_AMP] = ACTIONS(663),
    [anon_sym_PIPE_PIPE] = ACTIONS(663),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(663),
    [anon_sym_LF] = ACTIONS(663),
  },
  [190] = {
    [anon_sym_fi] = ACTIONS(665),
    [sym_comment] = ACTIONS(71),
  },
  [191] = {
    [sym_elif_clause] = STATE(192),
    [sym_else_clause] = STATE(247),
    [anon_sym_fi] = ACTIONS(665),
    [anon_sym_elif] = ACTIONS(507),
    [anon_sym_else] = ACTIONS(509),
    [sym_comment] = ACTIONS(71),
  },
  [192] = {
    [anon_sym_fi] = ACTIONS(667),
    [anon_sym_elif] = ACTIONS(667),
    [anon_sym_else] = ACTIONS(667),
    [sym_comment] = ACTIONS(71),
  },
  [193] = {
    [sym_quoted_argument] = STATE(248),
    [sym_expansion] = STATE(248),
    [sym_operator_expansion] = STATE(248),
    [sym_command_substitution] = STATE(248),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [sym_single_quoted_argument] = ACTIONS(669),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [sym_word] = ACTIONS(671),
    [sym_comment] = ACTIONS(71),
  },
  [194] = {
    [anon_sym_DQUOTE] = ACTIONS(537),
    [sym__quoted_chars] = ACTIONS(593),
    [anon_sym_DOLLAR] = ACTIONS(537),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(537),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(537),
    [sym_comment] = ACTIONS(145),
  },
  [195] = {
    [anon_sym_DQUOTE] = ACTIONS(575),
    [sym__quoted_chars] = ACTIONS(597),
    [anon_sym_DOLLAR] = ACTIONS(575),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(575),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(575),
    [sym_comment] = ACTIONS(145),
  },
  [196] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(673),
    [anon_sym_PIPE] = ACTIONS(673),
    [anon_sym_PIPE_AMP] = ACTIONS(673),
    [anon_sym_AMP_AMP] = ACTIONS(673),
    [anon_sym_PIPE_PIPE] = ACTIONS(673),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(673),
    [anon_sym_LF] = ACTIONS(673),
  },
  [197] = {
    [anon_sym_RPAREN] = ACTIONS(675),
    [sym_comment] = ACTIONS(71),
  },
  [198] = {
    [anon_sym_RPAREN] = ACTIONS(677),
    [sym_comment] = ACTIONS(71),
  },
  [199] = {
    [anon_sym_esac] = ACTIONS(679),
    [anon_sym_DQUOTE] = ACTIONS(681),
    [sym_single_quoted_argument] = ACTIONS(679),
    [anon_sym_DOLLAR] = ACTIONS(679),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(681),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(681),
    [sym_word] = ACTIONS(683),
    [sym_comment] = ACTIONS(71),
  },
  [200] = {
    [sym_case_item] = STATE(253),
    [sym_quoted_argument] = STATE(197),
    [sym_expansion] = STATE(197),
    [sym_operator_expansion] = STATE(197),
    [sym_command_substitution] = STATE(197),
    [anon_sym_esac] = ACTIONS(685),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [sym_single_quoted_argument] = ACTIONS(527),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [sym_word] = ACTIONS(529),
    [sym_comment] = ACTIONS(71),
  },
  [201] = {
    [sym_case_item] = STATE(199),
    [sym_quoted_argument] = STATE(197),
    [sym_expansion] = STATE(197),
    [sym_operator_expansion] = STATE(197),
    [sym_command_substitution] = STATE(197),
    [aux_sym_case_statement_repeat1] = STATE(254),
    [anon_sym_esac] = ACTIONS(685),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [sym_single_quoted_argument] = ACTIONS(527),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [sym_word] = ACTIONS(529),
    [sym_comment] = ACTIONS(71),
  },
  [202] = {
    [anon_sym_RBRACE] = ACTIONS(687),
    [sym_comment] = ACTIONS(71),
  },
  [203] = {
    [anon_sym_RBRACE] = ACTIONS(689),
    [sym_comment] = ACTIONS(71),
  },
  [204] = {
    [sym_quoted_argument] = STATE(257),
    [sym_expansion] = STATE(257),
    [sym_operator_expansion] = STATE(257),
    [sym_command_substitution] = STATE(257),
    [anon_sym_DQUOTE] = ACTIONS(545),
    [sym_single_quoted_argument] = ACTIONS(691),
    [anon_sym_DOLLAR] = ACTIONS(549),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(551),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(553),
    [sym_word] = ACTIONS(693),
    [sym_comment] = ACTIONS(71),
  },
  [205] = {
    [sym_expansion] = STATE(62),
    [sym_operator_expansion] = STATE(62),
    [sym_command_substitution] = STATE(62),
    [aux_sym_quoted_argument_repeat1] = STATE(260),
    [anon_sym_DQUOTE] = ACTIONS(695),
    [sym__quoted_chars] = ACTIONS(183),
    [anon_sym_DOLLAR] = ACTIONS(185),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(187),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(189),
    [sym_comment] = ACTIONS(145),
  },
  [206] = {
    [sym_file_descriptor] = ACTIONS(209),
    [anon_sym_RPAREN] = ACTIONS(209),
    [anon_sym_DQUOTE] = ACTIONS(209),
    [sym_single_quoted_argument] = ACTIONS(207),
    [anon_sym_DOLLAR] = ACTIONS(207),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(209),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(209),
    [anon_sym_LT] = ACTIONS(207),
    [anon_sym_GT] = ACTIONS(207),
    [anon_sym_GT_GT] = ACTIONS(209),
    [anon_sym_AMP_GT] = ACTIONS(207),
    [anon_sym_AMP_GT_GT] = ACTIONS(209),
    [anon_sym_LT_AMP] = ACTIONS(209),
    [anon_sym_GT_AMP] = ACTIONS(209),
    [anon_sym_LT_LT] = ACTIONS(207),
    [anon_sym_LT_LT_DASH] = ACTIONS(209),
    [sym_word] = ACTIONS(211),
    [sym_comment] = ACTIONS(71),
  },
  [207] = {
    [sym_word] = ACTIONS(697),
    [sym_comment] = ACTIONS(71),
  },
  [208] = {
    [sym_leading_word] = ACTIONS(699),
    [sym_comment] = ACTIONS(71),
  },
  [209] = {
    [sym_command] = STATE(263),
    [sym_environment_variable_assignment] = STATE(14),
    [sym_file_redirect] = STATE(14),
    [aux_sym_command_repeat1] = STATE(73),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_GT_GT] = ACTIONS(89),
    [anon_sym_AMP_GT] = ACTIONS(89),
    [anon_sym_AMP_GT_GT] = ACTIONS(89),
    [anon_sym_LT_AMP] = ACTIONS(89),
    [anon_sym_GT_AMP] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(199),
    [sym_comment] = ACTIONS(71),
  },
  [210] = {
    [sym_file_descriptor] = ACTIONS(219),
    [anon_sym_RPAREN] = ACTIONS(219),
    [anon_sym_DQUOTE] = ACTIONS(219),
    [sym_single_quoted_argument] = ACTIONS(217),
    [anon_sym_DOLLAR] = ACTIONS(217),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(219),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(219),
    [anon_sym_LT] = ACTIONS(217),
    [anon_sym_GT] = ACTIONS(217),
    [anon_sym_GT_GT] = ACTIONS(219),
    [anon_sym_AMP_GT] = ACTIONS(217),
    [anon_sym_AMP_GT_GT] = ACTIONS(219),
    [anon_sym_LT_AMP] = ACTIONS(219),
    [anon_sym_GT_AMP] = ACTIONS(219),
    [anon_sym_LT_LT] = ACTIONS(217),
    [anon_sym_LT_LT_DASH] = ACTIONS(219),
    [sym_word] = ACTIONS(221),
    [sym_comment] = ACTIONS(71),
  },
  [211] = {
    [sym_quoted_argument] = STATE(264),
    [sym_expansion] = STATE(264),
    [sym_operator_expansion] = STATE(264),
    [sym_command_substitution] = STATE(264),
    [sym_file_redirect] = STATE(143),
    [sym_heredoc_redirect] = STATE(143),
    [aux_sym_command_repeat2] = STATE(266),
    [sym_file_descriptor] = ACTIONS(369),
    [anon_sym_RPAREN] = ACTIONS(701),
    [anon_sym_DQUOTE] = ACTIONS(545),
    [sym_single_quoted_argument] = ACTIONS(703),
    [anon_sym_DOLLAR] = ACTIONS(549),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(551),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(553),
    [anon_sym_LT] = ACTIONS(555),
    [anon_sym_GT] = ACTIONS(555),
    [anon_sym_GT_GT] = ACTIONS(557),
    [anon_sym_AMP_GT] = ACTIONS(555),
    [anon_sym_AMP_GT_GT] = ACTIONS(557),
    [anon_sym_LT_AMP] = ACTIONS(557),
    [anon_sym_GT_AMP] = ACTIONS(557),
    [anon_sym_LT_LT] = ACTIONS(559),
    [anon_sym_LT_LT_DASH] = ACTIONS(561),
    [sym_word] = ACTIONS(705),
    [sym_comment] = ACTIONS(71),
  },
  [212] = {
    [sym_file_redirect] = STATE(218),
    [sym_heredoc_redirect] = STATE(218),
    [sym_file_descriptor] = ACTIONS(369),
    [anon_sym_RPAREN] = ACTIONS(701),
    [anon_sym_LT] = ACTIONS(555),
    [anon_sym_GT] = ACTIONS(555),
    [anon_sym_GT_GT] = ACTIONS(557),
    [anon_sym_AMP_GT] = ACTIONS(555),
    [anon_sym_AMP_GT_GT] = ACTIONS(557),
    [anon_sym_LT_AMP] = ACTIONS(557),
    [anon_sym_GT_AMP] = ACTIONS(557),
    [anon_sym_LT_LT] = ACTIONS(559),
    [anon_sym_LT_LT_DASH] = ACTIONS(561),
    [sym_comment] = ACTIONS(71),
  },
  [213] = {
    [sym_file_descriptor] = ACTIONS(231),
    [anon_sym_RPAREN] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(233),
    [anon_sym_GT] = ACTIONS(233),
    [anon_sym_GT_GT] = ACTIONS(231),
    [anon_sym_AMP_GT] = ACTIONS(233),
    [anon_sym_AMP_GT_GT] = ACTIONS(231),
    [anon_sym_LT_AMP] = ACTIONS(231),
    [anon_sym_GT_AMP] = ACTIONS(231),
    [anon_sym_LT_LT] = ACTIONS(233),
    [anon_sym_LT_LT_DASH] = ACTIONS(231),
    [sym_comment] = ACTIONS(71),
  },
  [214] = {
    [sym_file_descriptor] = ACTIONS(241),
    [anon_sym_RPAREN] = ACTIONS(241),
    [anon_sym_LT] = ACTIONS(243),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_GT_GT] = ACTIONS(241),
    [anon_sym_AMP_GT] = ACTIONS(243),
    [anon_sym_AMP_GT_GT] = ACTIONS(241),
    [anon_sym_LT_AMP] = ACTIONS(241),
    [anon_sym_GT_AMP] = ACTIONS(241),
    [anon_sym_LT_LT] = ACTIONS(243),
    [anon_sym_LT_LT_DASH] = ACTIONS(241),
    [sym_comment] = ACTIONS(71),
  },
  [215] = {
    [sym_file_descriptor] = ACTIONS(463),
    [anon_sym_RPAREN] = ACTIONS(463),
    [anon_sym_LT] = ACTIONS(707),
    [anon_sym_GT] = ACTIONS(707),
    [anon_sym_GT_GT] = ACTIONS(463),
    [anon_sym_AMP_GT] = ACTIONS(707),
    [anon_sym_AMP_GT_GT] = ACTIONS(463),
    [anon_sym_LT_AMP] = ACTIONS(463),
    [anon_sym_GT_AMP] = ACTIONS(463),
    [anon_sym_LT_LT] = ACTIONS(707),
    [anon_sym_LT_LT_DASH] = ACTIONS(463),
    [sym_comment] = ACTIONS(71),
  },
  [216] = {
    [sym_expansion] = STATE(177),
    [sym_operator_expansion] = STATE(177),
    [aux_sym_heredoc_repeat1] = STATE(268),
    [sym__heredoc_middle] = ACTIONS(467),
    [sym__heredoc_end] = ACTIONS(709),
    [anon_sym_DOLLAR] = ACTIONS(471),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(473),
    [sym_comment] = ACTIONS(71),
  },
  [217] = {
    [sym_file_descriptor] = ACTIONS(475),
    [anon_sym_RPAREN] = ACTIONS(475),
    [anon_sym_LT] = ACTIONS(711),
    [anon_sym_GT] = ACTIONS(711),
    [anon_sym_GT_GT] = ACTIONS(475),
    [anon_sym_AMP_GT] = ACTIONS(711),
    [anon_sym_AMP_GT_GT] = ACTIONS(475),
    [anon_sym_LT_AMP] = ACTIONS(475),
    [anon_sym_GT_AMP] = ACTIONS(475),
    [anon_sym_LT_LT] = ACTIONS(711),
    [anon_sym_LT_LT_DASH] = ACTIONS(475),
    [sym_comment] = ACTIONS(71),
  },
  [218] = {
    [sym_file_descriptor] = ACTIONS(479),
    [anon_sym_RPAREN] = ACTIONS(479),
    [anon_sym_LT] = ACTIONS(713),
    [anon_sym_GT] = ACTIONS(713),
    [anon_sym_GT_GT] = ACTIONS(479),
    [anon_sym_AMP_GT] = ACTIONS(713),
    [anon_sym_AMP_GT_GT] = ACTIONS(479),
    [anon_sym_LT_AMP] = ACTIONS(479),
    [anon_sym_GT_AMP] = ACTIONS(479),
    [anon_sym_LT_LT] = ACTIONS(713),
    [anon_sym_LT_LT_DASH] = ACTIONS(479),
    [sym_comment] = ACTIONS(71),
  },
  [219] = {
    [sym_quoted_argument] = STATE(206),
    [sym_expansion] = STATE(206),
    [sym_operator_expansion] = STATE(206),
    [sym_command_substitution] = STATE(206),
    [sym_file_redirect] = STATE(143),
    [sym_heredoc_redirect] = STATE(143),
    [aux_sym_bracket_command_repeat1] = STATE(269),
    [aux_sym_command_repeat2] = STATE(270),
    [sym_file_descriptor] = ACTIONS(369),
    [anon_sym_RPAREN] = ACTIONS(715),
    [anon_sym_DQUOTE] = ACTIONS(545),
    [sym_single_quoted_argument] = ACTIONS(547),
    [anon_sym_DOLLAR] = ACTIONS(549),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(551),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(553),
    [anon_sym_LT] = ACTIONS(555),
    [anon_sym_GT] = ACTIONS(555),
    [anon_sym_GT_GT] = ACTIONS(557),
    [anon_sym_AMP_GT] = ACTIONS(555),
    [anon_sym_AMP_GT_GT] = ACTIONS(557),
    [anon_sym_LT_AMP] = ACTIONS(557),
    [anon_sym_GT_AMP] = ACTIONS(557),
    [anon_sym_LT_LT] = ACTIONS(559),
    [anon_sym_LT_LT_DASH] = ACTIONS(561),
    [sym_word] = ACTIONS(563),
    [sym_comment] = ACTIONS(71),
  },
  [220] = {
    [sym_file_redirect] = STATE(218),
    [sym_heredoc_redirect] = STATE(218),
    [sym_file_descriptor] = ACTIONS(369),
    [anon_sym_RPAREN] = ACTIONS(715),
    [anon_sym_LT] = ACTIONS(555),
    [anon_sym_GT] = ACTIONS(555),
    [anon_sym_GT_GT] = ACTIONS(557),
    [anon_sym_AMP_GT] = ACTIONS(555),
    [anon_sym_AMP_GT_GT] = ACTIONS(557),
    [anon_sym_LT_AMP] = ACTIONS(557),
    [anon_sym_GT_AMP] = ACTIONS(557),
    [anon_sym_LT_LT] = ACTIONS(559),
    [anon_sym_LT_LT_DASH] = ACTIONS(561),
    [sym_comment] = ACTIONS(71),
  },
  [221] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(717),
    [anon_sym_PIPE] = ACTIONS(717),
    [anon_sym_PIPE_AMP] = ACTIONS(717),
    [anon_sym_AMP_AMP] = ACTIONS(717),
    [anon_sym_PIPE_PIPE] = ACTIONS(717),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(717),
    [anon_sym_LF] = ACTIONS(717),
  },
  [222] = {
    [sym_case_item] = STATE(253),
    [sym_quoted_argument] = STATE(197),
    [sym_expansion] = STATE(197),
    [sym_operator_expansion] = STATE(197),
    [sym_command_substitution] = STATE(197),
    [anon_sym_esac] = ACTIONS(719),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [sym_single_quoted_argument] = ACTIONS(527),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [sym_word] = ACTIONS(529),
    [sym_comment] = ACTIONS(71),
  },
  [223] = {
    [sym_case_item] = STATE(199),
    [sym_quoted_argument] = STATE(197),
    [sym_expansion] = STATE(197),
    [sym_operator_expansion] = STATE(197),
    [sym_command_substitution] = STATE(197),
    [aux_sym_case_statement_repeat1] = STATE(272),
    [anon_sym_esac] = ACTIONS(719),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [sym_single_quoted_argument] = ACTIONS(527),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [sym_word] = ACTIONS(529),
    [sym_comment] = ACTIONS(71),
  },
  [224] = {
    [anon_sym_RBRACE] = ACTIONS(721),
    [sym_comment] = ACTIONS(71),
  },
  [225] = {
    [anon_sym_RBRACE] = ACTIONS(723),
    [sym_comment] = ACTIONS(71),
  },
  [226] = {
    [anon_sym_RBRACE] = ACTIONS(725),
    [sym_comment] = ACTIONS(71),
  },
  [227] = {
    [anon_sym_RBRACE] = ACTIONS(727),
    [sym_comment] = ACTIONS(71),
  },
  [228] = {
    [sym_file_descriptor] = ACTIONS(583),
    [anon_sym_RPAREN] = ACTIONS(519),
    [anon_sym_SEMI_SEMI] = ACTIONS(519),
    [anon_sym_PIPE] = ACTIONS(519),
    [anon_sym_PIPE_AMP] = ACTIONS(519),
    [anon_sym_AMP_AMP] = ACTIONS(519),
    [anon_sym_PIPE_PIPE] = ACTIONS(519),
    [anon_sym_DQUOTE] = ACTIONS(519),
    [sym_single_quoted_argument] = ACTIONS(519),
    [anon_sym_DOLLAR] = ACTIONS(519),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(519),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(519),
    [anon_sym_LT] = ACTIONS(519),
    [anon_sym_GT] = ACTIONS(519),
    [anon_sym_GT_GT] = ACTIONS(519),
    [anon_sym_AMP_GT] = ACTIONS(519),
    [anon_sym_AMP_GT_GT] = ACTIONS(519),
    [anon_sym_LT_AMP] = ACTIONS(519),
    [anon_sym_GT_AMP] = ACTIONS(519),
    [anon_sym_LT_LT] = ACTIONS(519),
    [anon_sym_LT_LT_DASH] = ACTIONS(519),
    [sym_word] = ACTIONS(519),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(519),
    [anon_sym_LF] = ACTIONS(519),
  },
  [229] = {
    [sym_quoted_argument] = STATE(277),
    [sym_expansion] = STATE(277),
    [sym_operator_expansion] = STATE(277),
    [sym_command_substitution] = STATE(277),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [sym_single_quoted_argument] = ACTIONS(729),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [sym_word] = ACTIONS(731),
    [sym_comment] = ACTIONS(71),
  },
  [230] = {
    [sym_file_descriptor] = ACTIONS(591),
    [anon_sym_RPAREN] = ACTIONS(537),
    [anon_sym_SEMI_SEMI] = ACTIONS(537),
    [anon_sym_PIPE] = ACTIONS(537),
    [anon_sym_PIPE_AMP] = ACTIONS(537),
    [anon_sym_AMP_AMP] = ACTIONS(537),
    [anon_sym_PIPE_PIPE] = ACTIONS(537),
    [anon_sym_DQUOTE] = ACTIONS(537),
    [sym_single_quoted_argument] = ACTIONS(537),
    [anon_sym_DOLLAR] = ACTIONS(537),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(537),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(537),
    [anon_sym_LT] = ACTIONS(537),
    [anon_sym_GT] = ACTIONS(537),
    [anon_sym_GT_GT] = ACTIONS(537),
    [anon_sym_AMP_GT] = ACTIONS(537),
    [anon_sym_AMP_GT_GT] = ACTIONS(537),
    [anon_sym_LT_AMP] = ACTIONS(537),
    [anon_sym_GT_AMP] = ACTIONS(537),
    [anon_sym_LT_LT] = ACTIONS(537),
    [anon_sym_LT_LT_DASH] = ACTIONS(537),
    [sym_word] = ACTIONS(537),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(537),
    [anon_sym_LF] = ACTIONS(537),
  },
  [231] = {
    [sym_file_descriptor] = ACTIONS(595),
    [anon_sym_RPAREN] = ACTIONS(575),
    [anon_sym_SEMI_SEMI] = ACTIONS(575),
    [anon_sym_PIPE] = ACTIONS(575),
    [anon_sym_PIPE_AMP] = ACTIONS(575),
    [anon_sym_AMP_AMP] = ACTIONS(575),
    [anon_sym_PIPE_PIPE] = ACTIONS(575),
    [anon_sym_DQUOTE] = ACTIONS(575),
    [sym_single_quoted_argument] = ACTIONS(575),
    [anon_sym_DOLLAR] = ACTIONS(575),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(575),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(575),
    [anon_sym_LT] = ACTIONS(575),
    [anon_sym_GT] = ACTIONS(575),
    [anon_sym_GT_GT] = ACTIONS(575),
    [anon_sym_AMP_GT] = ACTIONS(575),
    [anon_sym_AMP_GT_GT] = ACTIONS(575),
    [anon_sym_LT_AMP] = ACTIONS(575),
    [anon_sym_GT_AMP] = ACTIONS(575),
    [anon_sym_LT_LT] = ACTIONS(575),
    [anon_sym_LT_LT_DASH] = ACTIONS(575),
    [sym_word] = ACTIONS(575),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(575),
    [anon_sym_LF] = ACTIONS(575),
  },
  [232] = {
    [sym_file_descriptor] = ACTIONS(583),
    [anon_sym_SEMI_SEMI] = ACTIONS(519),
    [anon_sym_PIPE] = ACTIONS(519),
    [anon_sym_PIPE_AMP] = ACTIONS(519),
    [anon_sym_AMP_AMP] = ACTIONS(519),
    [anon_sym_PIPE_PIPE] = ACTIONS(519),
    [anon_sym_RBRACE] = ACTIONS(519),
    [anon_sym_LT] = ACTIONS(519),
    [anon_sym_GT] = ACTIONS(519),
    [anon_sym_GT_GT] = ACTIONS(519),
    [anon_sym_AMP_GT] = ACTIONS(519),
    [anon_sym_AMP_GT_GT] = ACTIONS(519),
    [anon_sym_LT_AMP] = ACTIONS(519),
    [anon_sym_GT_AMP] = ACTIONS(519),
    [sym_leading_word] = ACTIONS(519),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(519),
    [anon_sym_LF] = ACTIONS(519),
  },
  [233] = {
    [sym_quoted_argument] = STATE(279),
    [sym_expansion] = STATE(279),
    [sym_operator_expansion] = STATE(279),
    [sym_command_substitution] = STATE(279),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [sym_single_quoted_argument] = ACTIONS(733),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [sym_word] = ACTIONS(735),
    [sym_comment] = ACTIONS(71),
  },
  [234] = {
    [sym_file_descriptor] = ACTIONS(591),
    [anon_sym_SEMI_SEMI] = ACTIONS(537),
    [anon_sym_PIPE] = ACTIONS(537),
    [anon_sym_PIPE_AMP] = ACTIONS(537),
    [anon_sym_AMP_AMP] = ACTIONS(537),
    [anon_sym_PIPE_PIPE] = ACTIONS(537),
    [anon_sym_RBRACE] = ACTIONS(537),
    [anon_sym_LT] = ACTIONS(537),
    [anon_sym_GT] = ACTIONS(537),
    [anon_sym_GT_GT] = ACTIONS(537),
    [anon_sym_AMP_GT] = ACTIONS(537),
    [anon_sym_AMP_GT_GT] = ACTIONS(537),
    [anon_sym_LT_AMP] = ACTIONS(537),
    [anon_sym_GT_AMP] = ACTIONS(537),
    [sym_leading_word] = ACTIONS(537),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(537),
    [anon_sym_LF] = ACTIONS(537),
  },
  [235] = {
    [sym_file_descriptor] = ACTIONS(595),
    [anon_sym_SEMI_SEMI] = ACTIONS(575),
    [anon_sym_PIPE] = ACTIONS(575),
    [anon_sym_PIPE_AMP] = ACTIONS(575),
    [anon_sym_AMP_AMP] = ACTIONS(575),
    [anon_sym_PIPE_PIPE] = ACTIONS(575),
    [anon_sym_RBRACE] = ACTIONS(575),
    [anon_sym_LT] = ACTIONS(575),
    [anon_sym_GT] = ACTIONS(575),
    [anon_sym_GT_GT] = ACTIONS(575),
    [anon_sym_AMP_GT] = ACTIONS(575),
    [anon_sym_AMP_GT_GT] = ACTIONS(575),
    [anon_sym_LT_AMP] = ACTIONS(575),
    [anon_sym_GT_AMP] = ACTIONS(575),
    [sym_leading_word] = ACTIONS(575),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(575),
    [anon_sym_LF] = ACTIONS(575),
  },
  [236] = {
    [sym_file_descriptor] = ACTIONS(583),
    [anon_sym_RPAREN] = ACTIONS(519),
    [anon_sym_SEMI_SEMI] = ACTIONS(519),
    [anon_sym_PIPE] = ACTIONS(519),
    [anon_sym_PIPE_AMP] = ACTIONS(519),
    [anon_sym_AMP_AMP] = ACTIONS(519),
    [anon_sym_PIPE_PIPE] = ACTIONS(519),
    [anon_sym_LT] = ACTIONS(519),
    [anon_sym_GT] = ACTIONS(519),
    [anon_sym_GT_GT] = ACTIONS(519),
    [anon_sym_AMP_GT] = ACTIONS(519),
    [anon_sym_AMP_GT_GT] = ACTIONS(519),
    [anon_sym_LT_AMP] = ACTIONS(519),
    [anon_sym_GT_AMP] = ACTIONS(519),
    [anon_sym_LT_LT] = ACTIONS(519),
    [anon_sym_LT_LT_DASH] = ACTIONS(519),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(519),
    [anon_sym_LF] = ACTIONS(519),
  },
  [237] = {
    [sym_quoted_argument] = STATE(281),
    [sym_expansion] = STATE(281),
    [sym_operator_expansion] = STATE(281),
    [sym_command_substitution] = STATE(281),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [sym_single_quoted_argument] = ACTIONS(737),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [sym_word] = ACTIONS(739),
    [sym_comment] = ACTIONS(71),
  },
  [238] = {
    [sym_file_descriptor] = ACTIONS(591),
    [anon_sym_RPAREN] = ACTIONS(537),
    [anon_sym_SEMI_SEMI] = ACTIONS(537),
    [anon_sym_PIPE] = ACTIONS(537),
    [anon_sym_PIPE_AMP] = ACTIONS(537),
    [anon_sym_AMP_AMP] = ACTIONS(537),
    [anon_sym_PIPE_PIPE] = ACTIONS(537),
    [anon_sym_LT] = ACTIONS(537),
    [anon_sym_GT] = ACTIONS(537),
    [anon_sym_GT_GT] = ACTIONS(537),
    [anon_sym_AMP_GT] = ACTIONS(537),
    [anon_sym_AMP_GT_GT] = ACTIONS(537),
    [anon_sym_LT_AMP] = ACTIONS(537),
    [anon_sym_GT_AMP] = ACTIONS(537),
    [anon_sym_LT_LT] = ACTIONS(537),
    [anon_sym_LT_LT_DASH] = ACTIONS(537),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(537),
    [anon_sym_LF] = ACTIONS(537),
  },
  [239] = {
    [sym_file_descriptor] = ACTIONS(595),
    [anon_sym_RPAREN] = ACTIONS(575),
    [anon_sym_SEMI_SEMI] = ACTIONS(575),
    [anon_sym_PIPE] = ACTIONS(575),
    [anon_sym_PIPE_AMP] = ACTIONS(575),
    [anon_sym_AMP_AMP] = ACTIONS(575),
    [anon_sym_PIPE_PIPE] = ACTIONS(575),
    [anon_sym_LT] = ACTIONS(575),
    [anon_sym_GT] = ACTIONS(575),
    [anon_sym_GT_GT] = ACTIONS(575),
    [anon_sym_AMP_GT] = ACTIONS(575),
    [anon_sym_AMP_GT_GT] = ACTIONS(575),
    [anon_sym_LT_AMP] = ACTIONS(575),
    [anon_sym_GT_AMP] = ACTIONS(575),
    [anon_sym_LT_LT] = ACTIONS(575),
    [anon_sym_LT_LT_DASH] = ACTIONS(575),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(575),
    [anon_sym_LF] = ACTIONS(575),
  },
  [240] = {
    [sym__heredoc_middle] = ACTIONS(391),
    [sym__heredoc_end] = ACTIONS(391),
    [anon_sym_DOLLAR] = ACTIONS(393),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(391),
    [sym_comment] = ACTIONS(71),
  },
  [241] = {
    [anon_sym_EQ] = ACTIONS(741),
    [anon_sym_COLON] = ACTIONS(743),
    [anon_sym_COLON_QMARK] = ACTIONS(741),
    [anon_sym_RBRACE] = ACTIONS(745),
    [sym_comment] = ACTIONS(71),
  },
  [242] = {
    [sym__heredoc_middle] = ACTIONS(747),
    [sym__heredoc_end] = ACTIONS(747),
    [anon_sym_DOLLAR] = ACTIONS(749),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(747),
    [sym_comment] = ACTIONS(71),
  },
  [243] = {
    [sym_file_descriptor] = ACTIONS(751),
    [anon_sym_RPAREN] = ACTIONS(753),
    [anon_sym_SEMI_SEMI] = ACTIONS(753),
    [anon_sym_PIPE] = ACTIONS(753),
    [anon_sym_PIPE_AMP] = ACTIONS(753),
    [anon_sym_AMP_AMP] = ACTIONS(753),
    [anon_sym_PIPE_PIPE] = ACTIONS(753),
    [anon_sym_LT] = ACTIONS(753),
    [anon_sym_GT] = ACTIONS(753),
    [anon_sym_GT_GT] = ACTIONS(753),
    [anon_sym_AMP_GT] = ACTIONS(753),
    [anon_sym_AMP_GT_GT] = ACTIONS(753),
    [anon_sym_LT_AMP] = ACTIONS(753),
    [anon_sym_GT_AMP] = ACTIONS(753),
    [anon_sym_LT_LT] = ACTIONS(753),
    [anon_sym_LT_LT_DASH] = ACTIONS(753),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(753),
    [anon_sym_LF] = ACTIONS(753),
  },
  [244] = {
    [sym_file_redirect] = STATE(113),
    [sym_heredoc_redirect] = STATE(113),
    [sym_file_descriptor] = ACTIONS(133),
    [anon_sym_RPAREN] = ACTIONS(755),
    [anon_sym_SEMI_SEMI] = ACTIONS(755),
    [anon_sym_PIPE] = ACTIONS(755),
    [anon_sym_PIPE_AMP] = ACTIONS(755),
    [anon_sym_AMP_AMP] = ACTIONS(755),
    [anon_sym_PIPE_PIPE] = ACTIONS(755),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_GT_GT] = ACTIONS(141),
    [anon_sym_AMP_GT] = ACTIONS(141),
    [anon_sym_AMP_GT_GT] = ACTIONS(141),
    [anon_sym_LT_AMP] = ACTIONS(141),
    [anon_sym_GT_AMP] = ACTIONS(141),
    [anon_sym_LT_LT] = ACTIONS(143),
    [anon_sym_LT_LT_DASH] = ACTIONS(143),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(755),
    [anon_sym_LF] = ACTIONS(755),
  },
  [245] = {
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
    [aux_sym_program_repeat1] = STATE(285),
    [aux_sym_command_repeat1] = STATE(16),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_fi] = ACTIONS(757),
    [anon_sym_elif] = ACTIONS(757),
    [anon_sym_else] = ACTIONS(757),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(87),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_GT_GT] = ACTIONS(89),
    [anon_sym_AMP_GT] = ACTIONS(89),
    [anon_sym_AMP_GT_GT] = ACTIONS(89),
    [anon_sym_LT_AMP] = ACTIONS(89),
    [anon_sym_GT_AMP] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_comment] = ACTIONS(71),
  },
  [246] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(759),
    [anon_sym_PIPE] = ACTIONS(759),
    [anon_sym_PIPE_AMP] = ACTIONS(759),
    [anon_sym_AMP_AMP] = ACTIONS(759),
    [anon_sym_PIPE_PIPE] = ACTIONS(759),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(759),
    [anon_sym_LF] = ACTIONS(759),
  },
  [247] = {
    [anon_sym_fi] = ACTIONS(761),
    [sym_comment] = ACTIONS(71),
  },
  [248] = {
    [anon_sym_RBRACE] = ACTIONS(763),
    [sym_comment] = ACTIONS(71),
  },
  [249] = {
    [anon_sym_RBRACE] = ACTIONS(765),
    [sym_comment] = ACTIONS(71),
  },
  [250] = {
    [sym__terminated_statement] = STATE(290),
    [sym_while_statement] = STATE(291),
    [sym_if_statement] = STATE(291),
    [sym_case_statement] = STATE(291),
    [sym_bracket_command] = STATE(291),
    [sym_command] = STATE(291),
    [sym_pipeline] = STATE(291),
    [sym_list] = STATE(291),
    [sym_environment_variable_assignment] = STATE(292),
    [sym_file_redirect] = STATE(14),
    [aux_sym_program_repeat1] = STATE(293),
    [aux_sym_command_repeat1] = STATE(16),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_esac] = ACTIONS(767),
    [anon_sym_SEMI_SEMI] = ACTIONS(769),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(771),
    [sym_single_quoted_argument] = ACTIONS(767),
    [anon_sym_DOLLAR] = ACTIONS(767),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(771),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(771),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_GT_GT] = ACTIONS(89),
    [anon_sym_AMP_GT] = ACTIONS(89),
    [anon_sym_AMP_GT_GT] = ACTIONS(89),
    [anon_sym_LT_AMP] = ACTIONS(89),
    [anon_sym_GT_AMP] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_word] = ACTIONS(773),
    [sym_comment] = ACTIONS(71),
  },
  [251] = {
    [sym__terminated_statement] = STATE(290),
    [sym_while_statement] = STATE(291),
    [sym_if_statement] = STATE(291),
    [sym_case_statement] = STATE(291),
    [sym_bracket_command] = STATE(291),
    [sym_command] = STATE(291),
    [sym_pipeline] = STATE(291),
    [sym_list] = STATE(291),
    [sym_environment_variable_assignment] = STATE(292),
    [sym_file_redirect] = STATE(14),
    [aux_sym_program_repeat1] = STATE(295),
    [aux_sym_command_repeat1] = STATE(16),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_esac] = ACTIONS(775),
    [anon_sym_SEMI_SEMI] = ACTIONS(777),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(779),
    [sym_single_quoted_argument] = ACTIONS(775),
    [anon_sym_DOLLAR] = ACTIONS(775),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(779),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(779),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_GT_GT] = ACTIONS(89),
    [anon_sym_AMP_GT] = ACTIONS(89),
    [anon_sym_AMP_GT_GT] = ACTIONS(89),
    [anon_sym_LT_AMP] = ACTIONS(89),
    [anon_sym_GT_AMP] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_word] = ACTIONS(781),
    [sym_comment] = ACTIONS(71),
  },
  [252] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(783),
    [anon_sym_PIPE] = ACTIONS(783),
    [anon_sym_PIPE_AMP] = ACTIONS(783),
    [anon_sym_AMP_AMP] = ACTIONS(783),
    [anon_sym_PIPE_PIPE] = ACTIONS(783),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(783),
    [anon_sym_LF] = ACTIONS(783),
  },
  [253] = {
    [anon_sym_esac] = ACTIONS(785),
    [anon_sym_DQUOTE] = ACTIONS(787),
    [sym_single_quoted_argument] = ACTIONS(785),
    [anon_sym_DOLLAR] = ACTIONS(785),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(787),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(787),
    [sym_word] = ACTIONS(789),
    [sym_comment] = ACTIONS(71),
  },
  [254] = {
    [sym_case_item] = STATE(253),
    [sym_quoted_argument] = STATE(197),
    [sym_expansion] = STATE(197),
    [sym_operator_expansion] = STATE(197),
    [sym_command_substitution] = STATE(197),
    [anon_sym_esac] = ACTIONS(791),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [sym_single_quoted_argument] = ACTIONS(527),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [sym_word] = ACTIONS(529),
    [sym_comment] = ACTIONS(71),
  },
  [255] = {
    [anon_sym_in] = ACTIONS(793),
    [anon_sym_SEMI_SEMI] = ACTIONS(793),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(793),
    [anon_sym_LF] = ACTIONS(793),
  },
  [256] = {
    [anon_sym_in] = ACTIONS(795),
    [anon_sym_SEMI_SEMI] = ACTIONS(795),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(795),
    [anon_sym_LF] = ACTIONS(795),
  },
  [257] = {
    [sym_file_descriptor] = ACTIONS(321),
    [anon_sym_RPAREN] = ACTIONS(321),
    [anon_sym_LT] = ACTIONS(323),
    [anon_sym_GT] = ACTIONS(323),
    [anon_sym_GT_GT] = ACTIONS(321),
    [anon_sym_AMP_GT] = ACTIONS(323),
    [anon_sym_AMP_GT_GT] = ACTIONS(321),
    [anon_sym_LT_AMP] = ACTIONS(321),
    [anon_sym_GT_AMP] = ACTIONS(321),
    [anon_sym_LT_LT] = ACTIONS(323),
    [anon_sym_LT_LT_DASH] = ACTIONS(321),
    [sym_comment] = ACTIONS(71),
  },
  [258] = {
    [sym_file_descriptor] = ACTIONS(327),
    [anon_sym_RPAREN] = ACTIONS(327),
    [anon_sym_LT] = ACTIONS(329),
    [anon_sym_GT] = ACTIONS(329),
    [anon_sym_GT_GT] = ACTIONS(327),
    [anon_sym_AMP_GT] = ACTIONS(329),
    [anon_sym_AMP_GT_GT] = ACTIONS(327),
    [anon_sym_LT_AMP] = ACTIONS(327),
    [anon_sym_GT_AMP] = ACTIONS(327),
    [anon_sym_LT_LT] = ACTIONS(329),
    [anon_sym_LT_LT_DASH] = ACTIONS(327),
    [sym_comment] = ACTIONS(71),
  },
  [259] = {
    [sym_file_descriptor] = ACTIONS(385),
    [anon_sym_RPAREN] = ACTIONS(385),
    [anon_sym_DQUOTE] = ACTIONS(385),
    [sym_single_quoted_argument] = ACTIONS(387),
    [anon_sym_DOLLAR] = ACTIONS(387),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(385),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(385),
    [anon_sym_LT] = ACTIONS(387),
    [anon_sym_GT] = ACTIONS(387),
    [anon_sym_GT_GT] = ACTIONS(385),
    [anon_sym_AMP_GT] = ACTIONS(387),
    [anon_sym_AMP_GT_GT] = ACTIONS(385),
    [anon_sym_LT_AMP] = ACTIONS(385),
    [anon_sym_GT_AMP] = ACTIONS(385),
    [anon_sym_LT_LT] = ACTIONS(387),
    [anon_sym_LT_LT_DASH] = ACTIONS(385),
    [sym_word] = ACTIONS(343),
    [sym_comment] = ACTIONS(71),
  },
  [260] = {
    [sym_expansion] = STATE(134),
    [sym_operator_expansion] = STATE(134),
    [sym_command_substitution] = STATE(134),
    [anon_sym_DQUOTE] = ACTIONS(797),
    [sym__quoted_chars] = ACTIONS(355),
    [anon_sym_DOLLAR] = ACTIONS(185),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(187),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(189),
    [sym_comment] = ACTIONS(145),
  },
  [261] = {
    [sym_file_descriptor] = ACTIONS(391),
    [anon_sym_RPAREN] = ACTIONS(391),
    [anon_sym_DQUOTE] = ACTIONS(391),
    [sym_single_quoted_argument] = ACTIONS(393),
    [anon_sym_DOLLAR] = ACTIONS(393),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(391),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(391),
    [anon_sym_LT] = ACTIONS(393),
    [anon_sym_GT] = ACTIONS(393),
    [anon_sym_GT_GT] = ACTIONS(391),
    [anon_sym_AMP_GT] = ACTIONS(393),
    [anon_sym_AMP_GT_GT] = ACTIONS(391),
    [anon_sym_LT_AMP] = ACTIONS(391),
    [anon_sym_GT_AMP] = ACTIONS(391),
    [anon_sym_LT_LT] = ACTIONS(393),
    [anon_sym_LT_LT_DASH] = ACTIONS(391),
    [sym_word] = ACTIONS(361),
    [sym_comment] = ACTIONS(71),
  },
  [262] = {
    [anon_sym_EQ] = ACTIONS(799),
    [anon_sym_COLON] = ACTIONS(801),
    [anon_sym_COLON_QMARK] = ACTIONS(799),
    [anon_sym_RBRACE] = ACTIONS(803),
    [sym_comment] = ACTIONS(71),
  },
  [263] = {
    [anon_sym_RPAREN] = ACTIONS(805),
    [sym_comment] = ACTIONS(71),
  },
  [264] = {
    [sym_file_descriptor] = ACTIONS(407),
    [anon_sym_RPAREN] = ACTIONS(407),
    [anon_sym_DQUOTE] = ACTIONS(407),
    [sym_single_quoted_argument] = ACTIONS(405),
    [anon_sym_DOLLAR] = ACTIONS(405),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(407),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(407),
    [anon_sym_LT] = ACTIONS(405),
    [anon_sym_GT] = ACTIONS(405),
    [anon_sym_GT_GT] = ACTIONS(407),
    [anon_sym_AMP_GT] = ACTIONS(405),
    [anon_sym_AMP_GT_GT] = ACTIONS(407),
    [anon_sym_LT_AMP] = ACTIONS(407),
    [anon_sym_GT_AMP] = ACTIONS(407),
    [anon_sym_LT_LT] = ACTIONS(405),
    [anon_sym_LT_LT_DASH] = ACTIONS(407),
    [sym_word] = ACTIONS(409),
    [sym_comment] = ACTIONS(71),
  },
  [265] = {
    [sym_file_descriptor] = ACTIONS(413),
    [anon_sym_RPAREN] = ACTIONS(413),
    [anon_sym_DQUOTE] = ACTIONS(413),
    [sym_single_quoted_argument] = ACTIONS(411),
    [anon_sym_DOLLAR] = ACTIONS(411),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(413),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(413),
    [anon_sym_LT] = ACTIONS(411),
    [anon_sym_GT] = ACTIONS(411),
    [anon_sym_GT_GT] = ACTIONS(413),
    [anon_sym_AMP_GT] = ACTIONS(411),
    [anon_sym_AMP_GT_GT] = ACTIONS(413),
    [anon_sym_LT_AMP] = ACTIONS(413),
    [anon_sym_GT_AMP] = ACTIONS(413),
    [anon_sym_LT_LT] = ACTIONS(411),
    [anon_sym_LT_LT_DASH] = ACTIONS(413),
    [sym_word] = ACTIONS(415),
    [sym_comment] = ACTIONS(71),
  },
  [266] = {
    [sym_file_redirect] = STATE(218),
    [sym_heredoc_redirect] = STATE(218),
    [sym_file_descriptor] = ACTIONS(369),
    [anon_sym_RPAREN] = ACTIONS(807),
    [anon_sym_LT] = ACTIONS(555),
    [anon_sym_GT] = ACTIONS(555),
    [anon_sym_GT_GT] = ACTIONS(557),
    [anon_sym_AMP_GT] = ACTIONS(555),
    [anon_sym_AMP_GT_GT] = ACTIONS(557),
    [anon_sym_LT_AMP] = ACTIONS(557),
    [anon_sym_GT_AMP] = ACTIONS(557),
    [anon_sym_LT_LT] = ACTIONS(559),
    [anon_sym_LT_LT_DASH] = ACTIONS(561),
    [sym_comment] = ACTIONS(71),
  },
  [267] = {
    [sym_file_descriptor] = ACTIONS(639),
    [anon_sym_RPAREN] = ACTIONS(639),
    [anon_sym_LT] = ACTIONS(809),
    [anon_sym_GT] = ACTIONS(809),
    [anon_sym_GT_GT] = ACTIONS(639),
    [anon_sym_AMP_GT] = ACTIONS(809),
    [anon_sym_AMP_GT_GT] = ACTIONS(639),
    [anon_sym_LT_AMP] = ACTIONS(639),
    [anon_sym_GT_AMP] = ACTIONS(639),
    [anon_sym_LT_LT] = ACTIONS(809),
    [anon_sym_LT_LT_DASH] = ACTIONS(639),
    [sym_comment] = ACTIONS(71),
  },
  [268] = {
    [sym_expansion] = STATE(242),
    [sym_operator_expansion] = STATE(242),
    [sym__heredoc_middle] = ACTIONS(647),
    [sym__heredoc_end] = ACTIONS(811),
    [anon_sym_DOLLAR] = ACTIONS(471),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(473),
    [sym_comment] = ACTIONS(71),
  },
  [269] = {
    [sym_quoted_argument] = STATE(264),
    [sym_expansion] = STATE(264),
    [sym_operator_expansion] = STATE(264),
    [sym_command_substitution] = STATE(264),
    [sym_file_redirect] = STATE(143),
    [sym_heredoc_redirect] = STATE(143),
    [aux_sym_command_repeat2] = STATE(302),
    [sym_file_descriptor] = ACTIONS(369),
    [anon_sym_RPAREN] = ACTIONS(813),
    [anon_sym_DQUOTE] = ACTIONS(545),
    [sym_single_quoted_argument] = ACTIONS(703),
    [anon_sym_DOLLAR] = ACTIONS(549),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(551),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(553),
    [anon_sym_LT] = ACTIONS(555),
    [anon_sym_GT] = ACTIONS(555),
    [anon_sym_GT_GT] = ACTIONS(557),
    [anon_sym_AMP_GT] = ACTIONS(555),
    [anon_sym_AMP_GT_GT] = ACTIONS(557),
    [anon_sym_LT_AMP] = ACTIONS(557),
    [anon_sym_GT_AMP] = ACTIONS(557),
    [anon_sym_LT_LT] = ACTIONS(559),
    [anon_sym_LT_LT_DASH] = ACTIONS(561),
    [sym_word] = ACTIONS(705),
    [sym_comment] = ACTIONS(71),
  },
  [270] = {
    [sym_file_redirect] = STATE(218),
    [sym_heredoc_redirect] = STATE(218),
    [sym_file_descriptor] = ACTIONS(369),
    [anon_sym_RPAREN] = ACTIONS(813),
    [anon_sym_LT] = ACTIONS(555),
    [anon_sym_GT] = ACTIONS(555),
    [anon_sym_GT_GT] = ACTIONS(557),
    [anon_sym_AMP_GT] = ACTIONS(555),
    [anon_sym_AMP_GT_GT] = ACTIONS(557),
    [anon_sym_LT_AMP] = ACTIONS(557),
    [anon_sym_GT_AMP] = ACTIONS(557),
    [anon_sym_LT_LT] = ACTIONS(559),
    [anon_sym_LT_LT_DASH] = ACTIONS(561),
    [sym_comment] = ACTIONS(71),
  },
  [271] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(815),
    [anon_sym_PIPE] = ACTIONS(815),
    [anon_sym_PIPE_AMP] = ACTIONS(815),
    [anon_sym_AMP_AMP] = ACTIONS(815),
    [anon_sym_PIPE_PIPE] = ACTIONS(815),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(815),
    [anon_sym_LF] = ACTIONS(815),
  },
  [272] = {
    [sym_case_item] = STATE(253),
    [sym_quoted_argument] = STATE(197),
    [sym_expansion] = STATE(197),
    [sym_operator_expansion] = STATE(197),
    [sym_command_substitution] = STATE(197),
    [anon_sym_esac] = ACTIONS(817),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [sym_single_quoted_argument] = ACTIONS(527),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [sym_word] = ACTIONS(529),
    [sym_comment] = ACTIONS(71),
  },
  [273] = {
    [anon_sym_RPAREN] = ACTIONS(819),
    [anon_sym_RBRACK] = ACTIONS(821),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(821),
    [anon_sym_DQUOTE] = ACTIONS(819),
    [sym_single_quoted_argument] = ACTIONS(821),
    [anon_sym_DOLLAR] = ACTIONS(821),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(819),
    [anon_sym_RBRACE] = ACTIONS(819),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(819),
    [sym_word] = ACTIONS(793),
    [sym_comment] = ACTIONS(71),
  },
  [274] = {
    [anon_sym_RPAREN] = ACTIONS(823),
    [anon_sym_RBRACK] = ACTIONS(825),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(825),
    [anon_sym_DQUOTE] = ACTIONS(823),
    [sym_single_quoted_argument] = ACTIONS(825),
    [anon_sym_DOLLAR] = ACTIONS(825),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(823),
    [anon_sym_RBRACE] = ACTIONS(823),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(823),
    [sym_word] = ACTIONS(795),
    [sym_comment] = ACTIONS(71),
  },
  [275] = {
    [sym_file_descriptor] = ACTIONS(819),
    [anon_sym_LT] = ACTIONS(821),
    [anon_sym_GT] = ACTIONS(821),
    [anon_sym_GT_GT] = ACTIONS(821),
    [anon_sym_AMP_GT] = ACTIONS(821),
    [anon_sym_AMP_GT_GT] = ACTIONS(821),
    [anon_sym_LT_AMP] = ACTIONS(821),
    [anon_sym_GT_AMP] = ACTIONS(821),
    [sym_leading_word] = ACTIONS(793),
    [sym_comment] = ACTIONS(71),
  },
  [276] = {
    [sym_file_descriptor] = ACTIONS(823),
    [anon_sym_LT] = ACTIONS(825),
    [anon_sym_GT] = ACTIONS(825),
    [anon_sym_GT_GT] = ACTIONS(825),
    [anon_sym_AMP_GT] = ACTIONS(825),
    [anon_sym_AMP_GT_GT] = ACTIONS(825),
    [anon_sym_LT_AMP] = ACTIONS(825),
    [anon_sym_GT_AMP] = ACTIONS(825),
    [sym_leading_word] = ACTIONS(795),
    [sym_comment] = ACTIONS(71),
  },
  [277] = {
    [anon_sym_RBRACE] = ACTIONS(827),
    [sym_comment] = ACTIONS(71),
  },
  [278] = {
    [anon_sym_RBRACE] = ACTIONS(829),
    [sym_comment] = ACTIONS(71),
  },
  [279] = {
    [anon_sym_RBRACE] = ACTIONS(831),
    [sym_comment] = ACTIONS(71),
  },
  [280] = {
    [anon_sym_RBRACE] = ACTIONS(833),
    [sym_comment] = ACTIONS(71),
  },
  [281] = {
    [anon_sym_RBRACE] = ACTIONS(835),
    [sym_comment] = ACTIONS(71),
  },
  [282] = {
    [anon_sym_RBRACE] = ACTIONS(837),
    [sym_comment] = ACTIONS(71),
  },
  [283] = {
    [sym_quoted_argument] = STATE(310),
    [sym_expansion] = STATE(310),
    [sym_operator_expansion] = STATE(310),
    [sym_command_substitution] = STATE(310),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [sym_single_quoted_argument] = ACTIONS(839),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [sym_word] = ACTIONS(841),
    [sym_comment] = ACTIONS(71),
  },
  [284] = {
    [sym__heredoc_middle] = ACTIONS(591),
    [sym__heredoc_end] = ACTIONS(591),
    [anon_sym_DOLLAR] = ACTIONS(593),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(591),
    [sym_comment] = ACTIONS(71),
  },
  [285] = {
    [sym__terminated_statement] = STATE(52),
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
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_fi] = ACTIONS(843),
    [anon_sym_elif] = ACTIONS(843),
    [anon_sym_else] = ACTIONS(843),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(87),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_GT_GT] = ACTIONS(89),
    [anon_sym_AMP_GT] = ACTIONS(89),
    [anon_sym_AMP_GT_GT] = ACTIONS(89),
    [anon_sym_LT_AMP] = ACTIONS(89),
    [anon_sym_GT_AMP] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_comment] = ACTIONS(71),
  },
  [286] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(845),
    [anon_sym_PIPE] = ACTIONS(845),
    [anon_sym_PIPE_AMP] = ACTIONS(845),
    [anon_sym_AMP_AMP] = ACTIONS(845),
    [anon_sym_PIPE_PIPE] = ACTIONS(845),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(845),
    [anon_sym_LF] = ACTIONS(845),
  },
  [287] = {
    [anon_sym_DQUOTE] = ACTIONS(793),
    [sym__quoted_chars] = ACTIONS(821),
    [anon_sym_DOLLAR] = ACTIONS(793),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(793),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(793),
    [sym_comment] = ACTIONS(145),
  },
  [288] = {
    [anon_sym_DQUOTE] = ACTIONS(795),
    [sym__quoted_chars] = ACTIONS(825),
    [anon_sym_DOLLAR] = ACTIONS(795),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(795),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(795),
    [sym_comment] = ACTIONS(145),
  },
  [289] = {
    [anon_sym_esac] = ACTIONS(847),
    [anon_sym_DQUOTE] = ACTIONS(849),
    [sym_single_quoted_argument] = ACTIONS(847),
    [anon_sym_DOLLAR] = ACTIONS(847),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(849),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(849),
    [sym_word] = ACTIONS(851),
    [sym_comment] = ACTIONS(71),
  },
  [290] = {
    [sym_file_descriptor] = ACTIONS(149),
    [anon_sym_while] = ACTIONS(151),
    [anon_sym_if] = ACTIONS(151),
    [anon_sym_case] = ACTIONS(151),
    [anon_sym_esac] = ACTIONS(151),
    [anon_sym_SEMI_SEMI] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [sym_single_quoted_argument] = ACTIONS(151),
    [anon_sym_DOLLAR] = ACTIONS(151),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(149),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(149),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(151),
    [anon_sym_GT_GT] = ACTIONS(151),
    [anon_sym_AMP_GT] = ACTIONS(151),
    [anon_sym_AMP_GT_GT] = ACTIONS(151),
    [anon_sym_LT_AMP] = ACTIONS(151),
    [anon_sym_GT_AMP] = ACTIONS(151),
    [sym_leading_word] = ACTIONS(153),
    [sym_word] = ACTIONS(153),
    [sym_comment] = ACTIONS(71),
  },
  [291] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(853),
    [anon_sym_PIPE] = ACTIONS(157),
    [anon_sym_PIPE_AMP] = ACTIONS(157),
    [anon_sym_AMP_AMP] = ACTIONS(159),
    [anon_sym_PIPE_PIPE] = ACTIONS(159),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(853),
    [anon_sym_LF] = ACTIONS(853),
  },
  [292] = {
    [sym_file_descriptor] = ACTIONS(161),
    [anon_sym_SEMI_SEMI] = ACTIONS(853),
    [anon_sym_PIPE] = ACTIONS(157),
    [anon_sym_PIPE_AMP] = ACTIONS(157),
    [anon_sym_AMP_AMP] = ACTIONS(159),
    [anon_sym_PIPE_PIPE] = ACTIONS(159),
    [anon_sym_LT] = ACTIONS(163),
    [anon_sym_GT] = ACTIONS(163),
    [anon_sym_GT_GT] = ACTIONS(163),
    [anon_sym_AMP_GT] = ACTIONS(163),
    [anon_sym_AMP_GT_GT] = ACTIONS(163),
    [anon_sym_LT_AMP] = ACTIONS(163),
    [anon_sym_GT_AMP] = ACTIONS(163),
    [sym_leading_word] = ACTIONS(163),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(853),
    [anon_sym_LF] = ACTIONS(853),
  },
  [293] = {
    [sym__terminated_statement] = STATE(314),
    [sym_while_statement] = STATE(291),
    [sym_if_statement] = STATE(291),
    [sym_case_statement] = STATE(291),
    [sym_bracket_command] = STATE(291),
    [sym_command] = STATE(291),
    [sym_pipeline] = STATE(291),
    [sym_list] = STATE(291),
    [sym_environment_variable_assignment] = STATE(292),
    [sym_file_redirect] = STATE(14),
    [aux_sym_command_repeat1] = STATE(16),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_esac] = ACTIONS(847),
    [anon_sym_SEMI_SEMI] = ACTIONS(855),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(849),
    [sym_single_quoted_argument] = ACTIONS(847),
    [anon_sym_DOLLAR] = ACTIONS(847),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(849),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(849),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_GT_GT] = ACTIONS(89),
    [anon_sym_AMP_GT] = ACTIONS(89),
    [anon_sym_AMP_GT_GT] = ACTIONS(89),
    [anon_sym_LT_AMP] = ACTIONS(89),
    [anon_sym_GT_AMP] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_word] = ACTIONS(851),
    [sym_comment] = ACTIONS(71),
  },
  [294] = {
    [anon_sym_esac] = ACTIONS(857),
    [anon_sym_DQUOTE] = ACTIONS(859),
    [sym_single_quoted_argument] = ACTIONS(857),
    [anon_sym_DOLLAR] = ACTIONS(857),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(859),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(859),
    [sym_word] = ACTIONS(861),
    [sym_comment] = ACTIONS(71),
  },
  [295] = {
    [sym__terminated_statement] = STATE(314),
    [sym_while_statement] = STATE(291),
    [sym_if_statement] = STATE(291),
    [sym_case_statement] = STATE(291),
    [sym_bracket_command] = STATE(291),
    [sym_command] = STATE(291),
    [sym_pipeline] = STATE(291),
    [sym_list] = STATE(291),
    [sym_environment_variable_assignment] = STATE(292),
    [sym_file_redirect] = STATE(14),
    [aux_sym_command_repeat1] = STATE(16),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_esac] = ACTIONS(857),
    [anon_sym_SEMI_SEMI] = ACTIONS(863),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(859),
    [sym_single_quoted_argument] = ACTIONS(857),
    [anon_sym_DOLLAR] = ACTIONS(857),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(859),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(859),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_GT_GT] = ACTIONS(89),
    [anon_sym_AMP_GT] = ACTIONS(89),
    [anon_sym_AMP_GT_GT] = ACTIONS(89),
    [anon_sym_LT_AMP] = ACTIONS(89),
    [anon_sym_GT_AMP] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_word] = ACTIONS(861),
    [sym_comment] = ACTIONS(71),
  },
  [296] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(865),
    [anon_sym_PIPE] = ACTIONS(865),
    [anon_sym_PIPE_AMP] = ACTIONS(865),
    [anon_sym_AMP_AMP] = ACTIONS(865),
    [anon_sym_PIPE_PIPE] = ACTIONS(865),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(865),
    [anon_sym_LF] = ACTIONS(865),
  },
  [297] = {
    [sym_file_descriptor] = ACTIONS(583),
    [anon_sym_RPAREN] = ACTIONS(583),
    [anon_sym_DQUOTE] = ACTIONS(583),
    [sym_single_quoted_argument] = ACTIONS(585),
    [anon_sym_DOLLAR] = ACTIONS(585),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(583),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(583),
    [anon_sym_LT] = ACTIONS(585),
    [anon_sym_GT] = ACTIONS(585),
    [anon_sym_GT_GT] = ACTIONS(583),
    [anon_sym_AMP_GT] = ACTIONS(585),
    [anon_sym_AMP_GT_GT] = ACTIONS(583),
    [anon_sym_LT_AMP] = ACTIONS(583),
    [anon_sym_GT_AMP] = ACTIONS(583),
    [anon_sym_LT_LT] = ACTIONS(585),
    [anon_sym_LT_LT_DASH] = ACTIONS(583),
    [sym_word] = ACTIONS(519),
    [sym_comment] = ACTIONS(71),
  },
  [298] = {
    [sym_quoted_argument] = STATE(316),
    [sym_expansion] = STATE(316),
    [sym_operator_expansion] = STATE(316),
    [sym_command_substitution] = STATE(316),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [sym_single_quoted_argument] = ACTIONS(867),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [sym_word] = ACTIONS(869),
    [sym_comment] = ACTIONS(71),
  },
  [299] = {
    [sym_file_descriptor] = ACTIONS(591),
    [anon_sym_RPAREN] = ACTIONS(591),
    [anon_sym_DQUOTE] = ACTIONS(591),
    [sym_single_quoted_argument] = ACTIONS(593),
    [anon_sym_DOLLAR] = ACTIONS(593),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(591),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(591),
    [anon_sym_LT] = ACTIONS(593),
    [anon_sym_GT] = ACTIONS(593),
    [anon_sym_GT_GT] = ACTIONS(591),
    [anon_sym_AMP_GT] = ACTIONS(593),
    [anon_sym_AMP_GT_GT] = ACTIONS(591),
    [anon_sym_LT_AMP] = ACTIONS(591),
    [anon_sym_GT_AMP] = ACTIONS(591),
    [anon_sym_LT_LT] = ACTIONS(593),
    [anon_sym_LT_LT_DASH] = ACTIONS(591),
    [sym_word] = ACTIONS(537),
    [sym_comment] = ACTIONS(71),
  },
  [300] = {
    [sym_file_descriptor] = ACTIONS(595),
    [anon_sym_RPAREN] = ACTIONS(595),
    [anon_sym_DQUOTE] = ACTIONS(595),
    [sym_single_quoted_argument] = ACTIONS(597),
    [anon_sym_DOLLAR] = ACTIONS(597),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(595),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(595),
    [anon_sym_LT] = ACTIONS(597),
    [anon_sym_GT] = ACTIONS(597),
    [anon_sym_GT_GT] = ACTIONS(595),
    [anon_sym_AMP_GT] = ACTIONS(597),
    [anon_sym_AMP_GT_GT] = ACTIONS(595),
    [anon_sym_LT_AMP] = ACTIONS(595),
    [anon_sym_GT_AMP] = ACTIONS(595),
    [anon_sym_LT_LT] = ACTIONS(597),
    [anon_sym_LT_LT_DASH] = ACTIONS(595),
    [sym_word] = ACTIONS(575),
    [sym_comment] = ACTIONS(71),
  },
  [301] = {
    [sym_file_descriptor] = ACTIONS(751),
    [anon_sym_RPAREN] = ACTIONS(751),
    [anon_sym_LT] = ACTIONS(871),
    [anon_sym_GT] = ACTIONS(871),
    [anon_sym_GT_GT] = ACTIONS(751),
    [anon_sym_AMP_GT] = ACTIONS(871),
    [anon_sym_AMP_GT_GT] = ACTIONS(751),
    [anon_sym_LT_AMP] = ACTIONS(751),
    [anon_sym_GT_AMP] = ACTIONS(751),
    [anon_sym_LT_LT] = ACTIONS(871),
    [anon_sym_LT_LT_DASH] = ACTIONS(751),
    [sym_comment] = ACTIONS(71),
  },
  [302] = {
    [sym_file_redirect] = STATE(218),
    [sym_heredoc_redirect] = STATE(218),
    [sym_file_descriptor] = ACTIONS(369),
    [anon_sym_RPAREN] = ACTIONS(873),
    [anon_sym_LT] = ACTIONS(555),
    [anon_sym_GT] = ACTIONS(555),
    [anon_sym_GT_GT] = ACTIONS(557),
    [anon_sym_AMP_GT] = ACTIONS(555),
    [anon_sym_AMP_GT_GT] = ACTIONS(557),
    [anon_sym_LT_AMP] = ACTIONS(557),
    [anon_sym_GT_AMP] = ACTIONS(557),
    [anon_sym_LT_LT] = ACTIONS(559),
    [anon_sym_LT_LT_DASH] = ACTIONS(561),
    [sym_comment] = ACTIONS(71),
  },
  [303] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(875),
    [anon_sym_PIPE] = ACTIONS(875),
    [anon_sym_PIPE_AMP] = ACTIONS(875),
    [anon_sym_AMP_AMP] = ACTIONS(875),
    [anon_sym_PIPE_PIPE] = ACTIONS(875),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(875),
    [anon_sym_LF] = ACTIONS(875),
  },
  [304] = {
    [sym_file_descriptor] = ACTIONS(819),
    [anon_sym_RPAREN] = ACTIONS(793),
    [anon_sym_SEMI_SEMI] = ACTIONS(793),
    [anon_sym_PIPE] = ACTIONS(793),
    [anon_sym_PIPE_AMP] = ACTIONS(793),
    [anon_sym_AMP_AMP] = ACTIONS(793),
    [anon_sym_PIPE_PIPE] = ACTIONS(793),
    [anon_sym_DQUOTE] = ACTIONS(793),
    [sym_single_quoted_argument] = ACTIONS(793),
    [anon_sym_DOLLAR] = ACTIONS(793),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(793),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(793),
    [anon_sym_LT] = ACTIONS(793),
    [anon_sym_GT] = ACTIONS(793),
    [anon_sym_GT_GT] = ACTIONS(793),
    [anon_sym_AMP_GT] = ACTIONS(793),
    [anon_sym_AMP_GT_GT] = ACTIONS(793),
    [anon_sym_LT_AMP] = ACTIONS(793),
    [anon_sym_GT_AMP] = ACTIONS(793),
    [anon_sym_LT_LT] = ACTIONS(793),
    [anon_sym_LT_LT_DASH] = ACTIONS(793),
    [sym_word] = ACTIONS(793),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(793),
    [anon_sym_LF] = ACTIONS(793),
  },
  [305] = {
    [sym_file_descriptor] = ACTIONS(823),
    [anon_sym_RPAREN] = ACTIONS(795),
    [anon_sym_SEMI_SEMI] = ACTIONS(795),
    [anon_sym_PIPE] = ACTIONS(795),
    [anon_sym_PIPE_AMP] = ACTIONS(795),
    [anon_sym_AMP_AMP] = ACTIONS(795),
    [anon_sym_PIPE_PIPE] = ACTIONS(795),
    [anon_sym_DQUOTE] = ACTIONS(795),
    [sym_single_quoted_argument] = ACTIONS(795),
    [anon_sym_DOLLAR] = ACTIONS(795),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(795),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(795),
    [anon_sym_LT] = ACTIONS(795),
    [anon_sym_GT] = ACTIONS(795),
    [anon_sym_GT_GT] = ACTIONS(795),
    [anon_sym_AMP_GT] = ACTIONS(795),
    [anon_sym_AMP_GT_GT] = ACTIONS(795),
    [anon_sym_LT_AMP] = ACTIONS(795),
    [anon_sym_GT_AMP] = ACTIONS(795),
    [anon_sym_LT_LT] = ACTIONS(795),
    [anon_sym_LT_LT_DASH] = ACTIONS(795),
    [sym_word] = ACTIONS(795),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(795),
    [anon_sym_LF] = ACTIONS(795),
  },
  [306] = {
    [sym_file_descriptor] = ACTIONS(819),
    [anon_sym_SEMI_SEMI] = ACTIONS(793),
    [anon_sym_PIPE] = ACTIONS(793),
    [anon_sym_PIPE_AMP] = ACTIONS(793),
    [anon_sym_AMP_AMP] = ACTIONS(793),
    [anon_sym_PIPE_PIPE] = ACTIONS(793),
    [anon_sym_RBRACE] = ACTIONS(793),
    [anon_sym_LT] = ACTIONS(793),
    [anon_sym_GT] = ACTIONS(793),
    [anon_sym_GT_GT] = ACTIONS(793),
    [anon_sym_AMP_GT] = ACTIONS(793),
    [anon_sym_AMP_GT_GT] = ACTIONS(793),
    [anon_sym_LT_AMP] = ACTIONS(793),
    [anon_sym_GT_AMP] = ACTIONS(793),
    [sym_leading_word] = ACTIONS(793),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(793),
    [anon_sym_LF] = ACTIONS(793),
  },
  [307] = {
    [sym_file_descriptor] = ACTIONS(823),
    [anon_sym_SEMI_SEMI] = ACTIONS(795),
    [anon_sym_PIPE] = ACTIONS(795),
    [anon_sym_PIPE_AMP] = ACTIONS(795),
    [anon_sym_AMP_AMP] = ACTIONS(795),
    [anon_sym_PIPE_PIPE] = ACTIONS(795),
    [anon_sym_RBRACE] = ACTIONS(795),
    [anon_sym_LT] = ACTIONS(795),
    [anon_sym_GT] = ACTIONS(795),
    [anon_sym_GT_GT] = ACTIONS(795),
    [anon_sym_AMP_GT] = ACTIONS(795),
    [anon_sym_AMP_GT_GT] = ACTIONS(795),
    [anon_sym_LT_AMP] = ACTIONS(795),
    [anon_sym_GT_AMP] = ACTIONS(795),
    [sym_leading_word] = ACTIONS(795),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(795),
    [anon_sym_LF] = ACTIONS(795),
  },
  [308] = {
    [sym_file_descriptor] = ACTIONS(819),
    [anon_sym_RPAREN] = ACTIONS(793),
    [anon_sym_SEMI_SEMI] = ACTIONS(793),
    [anon_sym_PIPE] = ACTIONS(793),
    [anon_sym_PIPE_AMP] = ACTIONS(793),
    [anon_sym_AMP_AMP] = ACTIONS(793),
    [anon_sym_PIPE_PIPE] = ACTIONS(793),
    [anon_sym_LT] = ACTIONS(793),
    [anon_sym_GT] = ACTIONS(793),
    [anon_sym_GT_GT] = ACTIONS(793),
    [anon_sym_AMP_GT] = ACTIONS(793),
    [anon_sym_AMP_GT_GT] = ACTIONS(793),
    [anon_sym_LT_AMP] = ACTIONS(793),
    [anon_sym_GT_AMP] = ACTIONS(793),
    [anon_sym_LT_LT] = ACTIONS(793),
    [anon_sym_LT_LT_DASH] = ACTIONS(793),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(793),
    [anon_sym_LF] = ACTIONS(793),
  },
  [309] = {
    [sym_file_descriptor] = ACTIONS(823),
    [anon_sym_RPAREN] = ACTIONS(795),
    [anon_sym_SEMI_SEMI] = ACTIONS(795),
    [anon_sym_PIPE] = ACTIONS(795),
    [anon_sym_PIPE_AMP] = ACTIONS(795),
    [anon_sym_AMP_AMP] = ACTIONS(795),
    [anon_sym_PIPE_PIPE] = ACTIONS(795),
    [anon_sym_LT] = ACTIONS(795),
    [anon_sym_GT] = ACTIONS(795),
    [anon_sym_GT_GT] = ACTIONS(795),
    [anon_sym_AMP_GT] = ACTIONS(795),
    [anon_sym_AMP_GT_GT] = ACTIONS(795),
    [anon_sym_LT_AMP] = ACTIONS(795),
    [anon_sym_GT_AMP] = ACTIONS(795),
    [anon_sym_LT_LT] = ACTIONS(795),
    [anon_sym_LT_LT_DASH] = ACTIONS(795),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(795),
    [anon_sym_LF] = ACTIONS(795),
  },
  [310] = {
    [anon_sym_RBRACE] = ACTIONS(877),
    [sym_comment] = ACTIONS(71),
  },
  [311] = {
    [anon_sym_RBRACE] = ACTIONS(879),
    [sym_comment] = ACTIONS(71),
  },
  [312] = {
    [sym_file_descriptor] = ACTIONS(297),
    [ts_builtin_sym_end] = ACTIONS(297),
    [anon_sym_while] = ACTIONS(299),
    [anon_sym_do] = ACTIONS(299),
    [anon_sym_done] = ACTIONS(299),
    [anon_sym_if] = ACTIONS(299),
    [anon_sym_then] = ACTIONS(299),
    [anon_sym_fi] = ACTIONS(299),
    [anon_sym_elif] = ACTIONS(299),
    [anon_sym_else] = ACTIONS(299),
    [anon_sym_case] = ACTIONS(299),
    [anon_sym_esac] = ACTIONS(299),
    [anon_sym_SEMI_SEMI] = ACTIONS(297),
    [anon_sym_LBRACK] = ACTIONS(299),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(299),
    [anon_sym_DQUOTE] = ACTIONS(297),
    [sym_single_quoted_argument] = ACTIONS(299),
    [anon_sym_DOLLAR] = ACTIONS(299),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(297),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(297),
    [anon_sym_LT] = ACTIONS(299),
    [anon_sym_GT] = ACTIONS(299),
    [anon_sym_GT_GT] = ACTIONS(299),
    [anon_sym_AMP_GT] = ACTIONS(299),
    [anon_sym_AMP_GT_GT] = ACTIONS(299),
    [anon_sym_LT_AMP] = ACTIONS(299),
    [anon_sym_GT_AMP] = ACTIONS(299),
    [sym_leading_word] = ACTIONS(301),
    [sym_word] = ACTIONS(301),
    [sym_comment] = ACTIONS(71),
  },
  [313] = {
    [anon_sym_esac] = ACTIONS(881),
    [anon_sym_DQUOTE] = ACTIONS(883),
    [sym_single_quoted_argument] = ACTIONS(881),
    [anon_sym_DOLLAR] = ACTIONS(881),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(883),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(883),
    [sym_word] = ACTIONS(885),
    [sym_comment] = ACTIONS(71),
  },
  [314] = {
    [sym_file_descriptor] = ACTIONS(303),
    [ts_builtin_sym_end] = ACTIONS(303),
    [anon_sym_while] = ACTIONS(305),
    [anon_sym_done] = ACTIONS(305),
    [anon_sym_if] = ACTIONS(305),
    [anon_sym_fi] = ACTIONS(305),
    [anon_sym_elif] = ACTIONS(305),
    [anon_sym_else] = ACTIONS(305),
    [anon_sym_case] = ACTIONS(305),
    [anon_sym_esac] = ACTIONS(305),
    [anon_sym_SEMI_SEMI] = ACTIONS(303),
    [anon_sym_LBRACK] = ACTIONS(305),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(305),
    [anon_sym_DQUOTE] = ACTIONS(303),
    [sym_single_quoted_argument] = ACTIONS(305),
    [anon_sym_DOLLAR] = ACTIONS(305),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(303),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(303),
    [anon_sym_LT] = ACTIONS(305),
    [anon_sym_GT] = ACTIONS(305),
    [anon_sym_GT_GT] = ACTIONS(305),
    [anon_sym_AMP_GT] = ACTIONS(305),
    [anon_sym_AMP_GT_GT] = ACTIONS(305),
    [anon_sym_LT_AMP] = ACTIONS(305),
    [anon_sym_GT_AMP] = ACTIONS(305),
    [sym_leading_word] = ACTIONS(307),
    [sym_word] = ACTIONS(307),
    [sym_comment] = ACTIONS(71),
  },
  [315] = {
    [anon_sym_esac] = ACTIONS(887),
    [anon_sym_DQUOTE] = ACTIONS(889),
    [sym_single_quoted_argument] = ACTIONS(887),
    [anon_sym_DOLLAR] = ACTIONS(887),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(889),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(889),
    [sym_word] = ACTIONS(891),
    [sym_comment] = ACTIONS(71),
  },
  [316] = {
    [anon_sym_RBRACE] = ACTIONS(893),
    [sym_comment] = ACTIONS(71),
  },
  [317] = {
    [anon_sym_RBRACE] = ACTIONS(895),
    [sym_comment] = ACTIONS(71),
  },
  [318] = {
    [sym__heredoc_middle] = ACTIONS(819),
    [sym__heredoc_end] = ACTIONS(819),
    [anon_sym_DOLLAR] = ACTIONS(821),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(819),
    [sym_comment] = ACTIONS(71),
  },
  [319] = {
    [sym__heredoc_middle] = ACTIONS(823),
    [sym__heredoc_end] = ACTIONS(823),
    [anon_sym_DOLLAR] = ACTIONS(825),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(823),
    [sym_comment] = ACTIONS(71),
  },
  [320] = {
    [sym_file_descriptor] = ACTIONS(819),
    [anon_sym_RPAREN] = ACTIONS(819),
    [anon_sym_DQUOTE] = ACTIONS(819),
    [sym_single_quoted_argument] = ACTIONS(821),
    [anon_sym_DOLLAR] = ACTIONS(821),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(819),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(819),
    [anon_sym_LT] = ACTIONS(821),
    [anon_sym_GT] = ACTIONS(821),
    [anon_sym_GT_GT] = ACTIONS(819),
    [anon_sym_AMP_GT] = ACTIONS(821),
    [anon_sym_AMP_GT_GT] = ACTIONS(819),
    [anon_sym_LT_AMP] = ACTIONS(819),
    [anon_sym_GT_AMP] = ACTIONS(819),
    [anon_sym_LT_LT] = ACTIONS(821),
    [anon_sym_LT_LT_DASH] = ACTIONS(819),
    [sym_word] = ACTIONS(793),
    [sym_comment] = ACTIONS(71),
  },
  [321] = {
    [sym_file_descriptor] = ACTIONS(823),
    [anon_sym_RPAREN] = ACTIONS(823),
    [anon_sym_DQUOTE] = ACTIONS(823),
    [sym_single_quoted_argument] = ACTIONS(825),
    [anon_sym_DOLLAR] = ACTIONS(825),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(823),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(823),
    [anon_sym_LT] = ACTIONS(825),
    [anon_sym_GT] = ACTIONS(825),
    [anon_sym_GT_GT] = ACTIONS(823),
    [anon_sym_AMP_GT] = ACTIONS(825),
    [anon_sym_AMP_GT_GT] = ACTIONS(823),
    [anon_sym_LT_AMP] = ACTIONS(823),
    [anon_sym_GT_AMP] = ACTIONS(823),
    [anon_sym_LT_LT] = ACTIONS(825),
    [anon_sym_LT_LT_DASH] = ACTIONS(823),
    [sym_word] = ACTIONS(795),
    [sym_comment] = ACTIONS(71),
  },
  [322] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(897),
    [anon_sym_PIPE] = ACTIONS(897),
    [anon_sym_PIPE_AMP] = ACTIONS(897),
    [anon_sym_AMP_AMP] = ACTIONS(897),
    [anon_sym_PIPE_PIPE] = ACTIONS(897),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(897),
    [anon_sym_LF] = ACTIONS(897),
  },
  [323] = {
    [sym__terminated_statement] = STATE(11),
    [sym_while_statement] = STATE(12),
    [sym_if_statement] = STATE(12),
    [sym_elif_clause] = STATE(126),
    [sym_else_clause] = STATE(127),
    [sym_case_statement] = STATE(12),
    [sym_bracket_command] = STATE(12),
    [sym_command] = STATE(12),
    [sym_pipeline] = STATE(12),
    [sym_list] = STATE(12),
    [sym_environment_variable_assignment] = STATE(13),
    [sym_file_redirect] = STATE(14),
    [aux_sym_program_repeat1] = STATE(358),
    [aux_sym_if_statement_repeat1] = STATE(129),
    [aux_sym_command_repeat1] = STATE(16),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_fi] = ACTIONS(900),
    [anon_sym_elif] = ACTIONS(903),
    [anon_sym_else] = ACTIONS(906),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(87),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_GT_GT] = ACTIONS(89),
    [anon_sym_AMP_GT] = ACTIONS(89),
    [anon_sym_AMP_GT_GT] = ACTIONS(89),
    [anon_sym_LT_AMP] = ACTIONS(89),
    [anon_sym_GT_AMP] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_comment] = ACTIONS(71),
  },
  [324] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(909),
    [anon_sym_PIPE] = ACTIONS(909),
    [anon_sym_PIPE_AMP] = ACTIONS(909),
    [anon_sym_AMP_AMP] = ACTIONS(909),
    [anon_sym_PIPE_PIPE] = ACTIONS(909),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(909),
    [anon_sym_LF] = ACTIONS(909),
  },
  [325] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(914),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(914),
    [anon_sym_LF] = ACTIONS(914),
  },
  [326] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(916),
    [anon_sym_PIPE] = ACTIONS(916),
    [anon_sym_PIPE_AMP] = ACTIONS(916),
    [anon_sym_AMP_AMP] = ACTIONS(916),
    [anon_sym_PIPE_PIPE] = ACTIONS(916),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(916),
    [anon_sym_LF] = ACTIONS(916),
  },
  [327] = {
    [sym__terminated_statement] = STATE(290),
    [sym_while_statement] = STATE(291),
    [sym_if_statement] = STATE(291),
    [sym_case_statement] = STATE(291),
    [sym_bracket_command] = STATE(291),
    [sym_command] = STATE(291),
    [sym_pipeline] = STATE(291),
    [sym_list] = STATE(291),
    [sym_environment_variable_assignment] = STATE(292),
    [sym_file_redirect] = STATE(14),
    [aux_sym_program_repeat1] = STATE(361),
    [aux_sym_command_repeat1] = STATE(16),
    [sym_file_descriptor] = ACTIONS(923),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_in] = ACTIONS(575),
    [anon_sym_esac] = ACTIONS(926),
    [anon_sym_RPAREN] = ACTIONS(575),
    [anon_sym_SEMI_SEMI] = ACTIONS(929),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(575),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(87),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(575),
    [anon_sym_PIPE] = ACTIONS(575),
    [anon_sym_PIPE_AMP] = ACTIONS(575),
    [anon_sym_AMP_AMP] = ACTIONS(575),
    [anon_sym_PIPE_PIPE] = ACTIONS(575),
    [anon_sym_DQUOTE] = ACTIONS(932),
    [sym__quoted_chars] = ACTIONS(575),
    [sym_single_quoted_argument] = ACTIONS(932),
    [anon_sym_DOLLAR] = ACTIONS(932),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(932),
    [anon_sym_RBRACE] = ACTIONS(575),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(932),
    [anon_sym_LT] = ACTIONS(936),
    [anon_sym_GT] = ACTIONS(936),
    [anon_sym_GT_GT] = ACTIONS(936),
    [anon_sym_AMP_GT] = ACTIONS(936),
    [anon_sym_AMP_GT_GT] = ACTIONS(936),
    [anon_sym_LT_AMP] = ACTIONS(936),
    [anon_sym_GT_AMP] = ACTIONS(936),
    [anon_sym_LT_LT] = ACTIONS(575),
    [anon_sym_LT_LT_DASH] = ACTIONS(575),
    [sym_leading_word] = ACTIONS(939),
    [sym_word] = ACTIONS(932),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(575),
    [anon_sym_LF] = ACTIONS(575),
  },
  [328] = {
    [sym_quoted_argument] = STATE(362),
    [sym_expansion] = STATE(362),
    [sym_operator_expansion] = STATE(362),
    [sym_command_substitution] = STATE(362),
    [anon_sym_DQUOTE] = ACTIONS(265),
    [sym_single_quoted_argument] = ACTIONS(942),
    [anon_sym_DOLLAR] = ACTIONS(269),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(271),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(273),
    [sym_word] = ACTIONS(944),
    [sym_comment] = ACTIONS(71),
  },
  [329] = {
    [sym_expansion] = STATE(62),
    [sym_operator_expansion] = STATE(62),
    [sym_command_substitution] = STATE(62),
    [aux_sym_quoted_argument_repeat1] = STATE(357),
    [sym_file_descriptor] = ACTIONS(946),
    [anon_sym_in] = ACTIONS(949),
    [anon_sym_RPAREN] = ACTIONS(949),
    [anon_sym_SEMI_SEMI] = ACTIONS(949),
    [anon_sym_RBRACK] = ACTIONS(949),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(949),
    [anon_sym_PIPE] = ACTIONS(949),
    [anon_sym_PIPE_AMP] = ACTIONS(949),
    [anon_sym_AMP_AMP] = ACTIONS(949),
    [anon_sym_PIPE_PIPE] = ACTIONS(949),
    [anon_sym_DQUOTE] = ACTIONS(952),
    [sym__quoted_chars] = ACTIONS(956),
    [sym_single_quoted_argument] = ACTIONS(949),
    [anon_sym_DOLLAR] = ACTIONS(958),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(962),
    [anon_sym_RBRACE] = ACTIONS(949),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(966),
    [anon_sym_LT] = ACTIONS(949),
    [anon_sym_GT] = ACTIONS(949),
    [anon_sym_GT_GT] = ACTIONS(949),
    [anon_sym_AMP_GT] = ACTIONS(949),
    [anon_sym_AMP_GT_GT] = ACTIONS(949),
    [anon_sym_LT_AMP] = ACTIONS(949),
    [anon_sym_GT_AMP] = ACTIONS(949),
    [anon_sym_LT_LT] = ACTIONS(949),
    [anon_sym_LT_LT_DASH] = ACTIONS(949),
    [sym_leading_word] = ACTIONS(949),
    [sym_word] = ACTIONS(949),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(949),
    [anon_sym_LF] = ACTIONS(949),
  },
  [330] = {
    [sym_word] = ACTIONS(970),
    [sym_comment] = ACTIONS(71),
  },
  [331] = {
    [sym_leading_word] = ACTIONS(972),
    [sym_comment] = ACTIONS(71),
  },
  [332] = {
    [sym_quoted_argument] = STATE(367),
    [sym_expansion] = STATE(367),
    [sym_operator_expansion] = STATE(367),
    [sym_command_substitution] = STATE(367),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [sym_single_quoted_argument] = ACTIONS(974),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [sym_word] = ACTIONS(976),
    [sym_comment] = ACTIONS(71),
  },
  [333] = {
    [sym__heredoc_middle] = ACTIONS(978),
    [sym__heredoc_end] = ACTIONS(978),
    [sym_file_descriptor] = ACTIONS(978),
    [anon_sym_in] = ACTIONS(982),
    [anon_sym_RPAREN] = ACTIONS(982),
    [anon_sym_SEMI_SEMI] = ACTIONS(982),
    [anon_sym_RBRACK] = ACTIONS(982),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(982),
    [anon_sym_PIPE] = ACTIONS(982),
    [anon_sym_PIPE_AMP] = ACTIONS(982),
    [anon_sym_AMP_AMP] = ACTIONS(982),
    [anon_sym_PIPE_PIPE] = ACTIONS(982),
    [anon_sym_DQUOTE] = ACTIONS(982),
    [sym__quoted_chars] = ACTIONS(982),
    [sym_single_quoted_argument] = ACTIONS(982),
    [anon_sym_DOLLAR] = ACTIONS(982),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(982),
    [anon_sym_RBRACE] = ACTIONS(982),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(982),
    [anon_sym_LT] = ACTIONS(982),
    [anon_sym_GT] = ACTIONS(982),
    [anon_sym_GT_GT] = ACTIONS(982),
    [anon_sym_AMP_GT] = ACTIONS(982),
    [anon_sym_AMP_GT_GT] = ACTIONS(982),
    [anon_sym_LT_AMP] = ACTIONS(982),
    [anon_sym_GT_AMP] = ACTIONS(982),
    [anon_sym_LT_LT] = ACTIONS(982),
    [anon_sym_LT_LT_DASH] = ACTIONS(982),
    [sym_leading_word] = ACTIONS(982),
    [sym_word] = ACTIONS(982),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(982),
    [anon_sym_LF] = ACTIONS(982),
  },
  [334] = {
    [sym_command] = STATE(369),
    [sym_environment_variable_assignment] = STATE(14),
    [sym_file_redirect] = STATE(14),
    [aux_sym_command_repeat1] = STATE(73),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_GT_GT] = ACTIONS(89),
    [anon_sym_AMP_GT] = ACTIONS(89),
    [anon_sym_AMP_GT_GT] = ACTIONS(89),
    [anon_sym_LT_AMP] = ACTIONS(89),
    [anon_sym_GT_AMP] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(199),
    [sym_comment] = ACTIONS(71),
  },
  [335] = {
    [sym_quoted_argument] = STATE(371),
    [sym_expansion] = STATE(371),
    [sym_operator_expansion] = STATE(371),
    [sym_command_substitution] = STATE(371),
    [anon_sym_DQUOTE] = ACTIONS(986),
    [sym_single_quoted_argument] = ACTIONS(988),
    [anon_sym_DOLLAR] = ACTIONS(990),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(992),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(994),
    [sym_word] = ACTIONS(996),
    [sym_comment] = ACTIONS(71),
  },
  [336] = {
    [sym_case_item] = STATE(199),
    [sym_quoted_argument] = STATE(197),
    [sym_expansion] = STATE(197),
    [sym_operator_expansion] = STATE(197),
    [sym_command_substitution] = STATE(197),
    [aux_sym_case_statement_repeat1] = STATE(354),
    [sym_file_descriptor] = ACTIONS(297),
    [ts_builtin_sym_end] = ACTIONS(297),
    [anon_sym_while] = ACTIONS(299),
    [anon_sym_do] = ACTIONS(299),
    [anon_sym_done] = ACTIONS(299),
    [anon_sym_if] = ACTIONS(299),
    [anon_sym_then] = ACTIONS(299),
    [anon_sym_fi] = ACTIONS(299),
    [anon_sym_elif] = ACTIONS(299),
    [anon_sym_else] = ACTIONS(299),
    [anon_sym_case] = ACTIONS(299),
    [anon_sym_in] = ACTIONS(998),
    [anon_sym_esac] = ACTIONS(1000),
    [anon_sym_SEMI_SEMI] = ACTIONS(297),
    [anon_sym_LBRACK] = ACTIONS(299),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(299),
    [anon_sym_DQUOTE] = ACTIONS(1003),
    [sym_single_quoted_argument] = ACTIONS(1006),
    [anon_sym_DOLLAR] = ACTIONS(1009),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1012),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1015),
    [anon_sym_LT] = ACTIONS(299),
    [anon_sym_GT] = ACTIONS(299),
    [anon_sym_GT_GT] = ACTIONS(299),
    [anon_sym_AMP_GT] = ACTIONS(299),
    [anon_sym_AMP_GT_GT] = ACTIONS(299),
    [anon_sym_LT_AMP] = ACTIONS(299),
    [anon_sym_GT_AMP] = ACTIONS(299),
    [sym_leading_word] = ACTIONS(301),
    [sym_word] = ACTIONS(1018),
    [sym_comment] = ACTIONS(71),
  },
  [337] = {
    [sym__heredoc_middle] = ACTIONS(1021),
    [sym__heredoc_end] = ACTIONS(1021),
    [anon_sym_DOLLAR] = ACTIONS(1024),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1021),
    [sym_comment] = ACTIONS(71),
  },
  [338] = {
    [sym_file_descriptor] = ACTIONS(1027),
    [anon_sym_RPAREN] = ACTIONS(1030),
    [anon_sym_SEMI_SEMI] = ACTIONS(1030),
    [anon_sym_PIPE] = ACTIONS(1030),
    [anon_sym_PIPE_AMP] = ACTIONS(1030),
    [anon_sym_AMP_AMP] = ACTIONS(1030),
    [anon_sym_PIPE_PIPE] = ACTIONS(1030),
    [anon_sym_LT] = ACTIONS(1030),
    [anon_sym_GT] = ACTIONS(1030),
    [anon_sym_GT_GT] = ACTIONS(1030),
    [anon_sym_AMP_GT] = ACTIONS(1030),
    [anon_sym_AMP_GT_GT] = ACTIONS(1030),
    [anon_sym_LT_AMP] = ACTIONS(1030),
    [anon_sym_GT_AMP] = ACTIONS(1030),
    [anon_sym_LT_LT] = ACTIONS(1030),
    [anon_sym_LT_LT_DASH] = ACTIONS(1030),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1030),
    [anon_sym_LF] = ACTIONS(1030),
  },
  [339] = {
    [anon_sym_LT] = ACTIONS(1033),
    [anon_sym_GT] = ACTIONS(1033),
    [anon_sym_GT_GT] = ACTIONS(1035),
    [anon_sym_AMP_GT] = ACTIONS(1033),
    [anon_sym_AMP_GT_GT] = ACTIONS(1035),
    [anon_sym_LT_AMP] = ACTIONS(1035),
    [anon_sym_GT_AMP] = ACTIONS(1035),
    [sym_comment] = ACTIONS(71),
  },
  [340] = {
    [sym_do_group] = STATE(58),
    [sym_file_descriptor] = ACTIONS(1037),
    [ts_builtin_sym_end] = ACTIONS(1037),
    [anon_sym_while] = ACTIONS(1040),
    [anon_sym_do] = ACTIONS(1043),
    [anon_sym_done] = ACTIONS(1040),
    [anon_sym_if] = ACTIONS(1040),
    [anon_sym_then] = ACTIONS(1045),
    [anon_sym_fi] = ACTIONS(1040),
    [anon_sym_elif] = ACTIONS(1040),
    [anon_sym_else] = ACTIONS(1040),
    [anon_sym_case] = ACTIONS(1040),
    [anon_sym_esac] = ACTIONS(1040),
    [anon_sym_SEMI_SEMI] = ACTIONS(1037),
    [anon_sym_LBRACK] = ACTIONS(1040),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1040),
    [anon_sym_DQUOTE] = ACTIONS(1037),
    [sym_single_quoted_argument] = ACTIONS(1040),
    [anon_sym_DOLLAR] = ACTIONS(1040),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1037),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1037),
    [anon_sym_LT] = ACTIONS(1040),
    [anon_sym_GT] = ACTIONS(1040),
    [anon_sym_GT_GT] = ACTIONS(1040),
    [anon_sym_AMP_GT] = ACTIONS(1040),
    [anon_sym_AMP_GT_GT] = ACTIONS(1040),
    [anon_sym_LT_AMP] = ACTIONS(1040),
    [anon_sym_GT_AMP] = ACTIONS(1040),
    [sym_leading_word] = ACTIONS(1047),
    [sym_word] = ACTIONS(1047),
    [sym_comment] = ACTIONS(71),
  },
  [341] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1050),
    [anon_sym_PIPE] = ACTIONS(1054),
    [anon_sym_PIPE_AMP] = ACTIONS(1054),
    [anon_sym_AMP_AMP] = ACTIONS(1058),
    [anon_sym_PIPE_PIPE] = ACTIONS(1058),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1050),
    [anon_sym_LF] = ACTIONS(1050),
  },
  [342] = {
    [anon_sym_fi] = ACTIONS(1062),
    [anon_sym_elif] = ACTIONS(1062),
    [anon_sym_else] = ACTIONS(1062),
    [sym_comment] = ACTIONS(71),
  },
  [343] = {
    [anon_sym_fi] = ACTIONS(1065),
    [sym_comment] = ACTIONS(71),
  },
  [344] = {
    [anon_sym_esac] = ACTIONS(1067),
    [anon_sym_DQUOTE] = ACTIONS(1070),
    [sym_single_quoted_argument] = ACTIONS(1067),
    [anon_sym_DOLLAR] = ACTIONS(1067),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1070),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1070),
    [sym_word] = ACTIONS(1073),
    [sym_comment] = ACTIONS(71),
  },
  [345] = {
    [anon_sym_RPAREN] = ACTIONS(1076),
    [anon_sym_SEMI_SEMI] = ACTIONS(1078),
    [anon_sym_PIPE] = ACTIONS(1082),
    [anon_sym_PIPE_AMP] = ACTIONS(1082),
    [anon_sym_AMP_AMP] = ACTIONS(1086),
    [anon_sym_PIPE_PIPE] = ACTIONS(1086),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1078),
    [anon_sym_LF] = ACTIONS(1078),
  },
  [346] = {
    [sym_file_descriptor] = ACTIONS(1090),
    [anon_sym_SEMI_SEMI] = ACTIONS(1050),
    [anon_sym_PIPE] = ACTIONS(1054),
    [anon_sym_PIPE_AMP] = ACTIONS(1054),
    [anon_sym_AMP_AMP] = ACTIONS(1058),
    [anon_sym_PIPE_PIPE] = ACTIONS(1058),
    [anon_sym_LT] = ACTIONS(1093),
    [anon_sym_GT] = ACTIONS(1093),
    [anon_sym_GT_GT] = ACTIONS(1093),
    [anon_sym_AMP_GT] = ACTIONS(1093),
    [anon_sym_AMP_GT_GT] = ACTIONS(1093),
    [anon_sym_LT_AMP] = ACTIONS(1093),
    [anon_sym_GT_AMP] = ACTIONS(1093),
    [sym_leading_word] = ACTIONS(1093),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1050),
    [anon_sym_LF] = ACTIONS(1050),
  },
  [347] = {
    [sym_file_descriptor] = ACTIONS(1096),
    [anon_sym_in] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(1102),
    [anon_sym_SEMI_SEMI] = ACTIONS(1108),
    [anon_sym_RBRACK] = ACTIONS(1115),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1115),
    [anon_sym_PIPE] = ACTIONS(1118),
    [anon_sym_PIPE_AMP] = ACTIONS(1118),
    [anon_sym_AMP_AMP] = ACTIONS(1118),
    [anon_sym_PIPE_PIPE] = ACTIONS(1118),
    [anon_sym_DQUOTE] = ACTIONS(1115),
    [sym_single_quoted_argument] = ACTIONS(1115),
    [anon_sym_DOLLAR] = ACTIONS(1115),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1115),
    [anon_sym_RBRACE] = ACTIONS(1124),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1115),
    [anon_sym_LT] = ACTIONS(1118),
    [anon_sym_GT] = ACTIONS(1118),
    [anon_sym_GT_GT] = ACTIONS(1118),
    [anon_sym_AMP_GT] = ACTIONS(1118),
    [anon_sym_AMP_GT_GT] = ACTIONS(1118),
    [anon_sym_LT_AMP] = ACTIONS(1118),
    [anon_sym_GT_AMP] = ACTIONS(1118),
    [anon_sym_LT_LT] = ACTIONS(1126),
    [anon_sym_LT_LT_DASH] = ACTIONS(1126),
    [sym_leading_word] = ACTIONS(1131),
    [sym_word] = ACTIONS(1115),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1108),
    [anon_sym_LF] = ACTIONS(1108),
  },
  [348] = {
    [sym__heredoc_middle] = ACTIONS(1021),
    [sym__heredoc_end] = ACTIONS(1021),
    [sym_file_descriptor] = ACTIONS(1096),
    [anon_sym_in] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(1102),
    [anon_sym_SEMI_SEMI] = ACTIONS(1108),
    [anon_sym_RBRACK] = ACTIONS(1115),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1115),
    [anon_sym_PIPE] = ACTIONS(1118),
    [anon_sym_PIPE_AMP] = ACTIONS(1118),
    [anon_sym_AMP_AMP] = ACTIONS(1118),
    [anon_sym_PIPE_PIPE] = ACTIONS(1118),
    [anon_sym_DQUOTE] = ACTIONS(1135),
    [sym__quoted_chars] = ACTIONS(1140),
    [sym_single_quoted_argument] = ACTIONS(1115),
    [anon_sym_DOLLAR] = ACTIONS(1143),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1143),
    [anon_sym_RBRACE] = ACTIONS(1124),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1135),
    [anon_sym_LT] = ACTIONS(1118),
    [anon_sym_GT] = ACTIONS(1118),
    [anon_sym_GT_GT] = ACTIONS(1118),
    [anon_sym_AMP_GT] = ACTIONS(1118),
    [anon_sym_AMP_GT_GT] = ACTIONS(1118),
    [anon_sym_LT_AMP] = ACTIONS(1118),
    [anon_sym_GT_AMP] = ACTIONS(1118),
    [anon_sym_LT_LT] = ACTIONS(1126),
    [anon_sym_LT_LT_DASH] = ACTIONS(1126),
    [sym_leading_word] = ACTIONS(1131),
    [sym_word] = ACTIONS(1115),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1108),
    [anon_sym_LF] = ACTIONS(1108),
  },
  [349] = {
    [sym_file_descriptor] = ACTIONS(1096),
    [anon_sym_in] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(1102),
    [anon_sym_SEMI_SEMI] = ACTIONS(1108),
    [anon_sym_RBRACK] = ACTIONS(1115),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1115),
    [anon_sym_PIPE] = ACTIONS(1118),
    [anon_sym_PIPE_AMP] = ACTIONS(1118),
    [anon_sym_AMP_AMP] = ACTIONS(1118),
    [anon_sym_PIPE_PIPE] = ACTIONS(1118),
    [anon_sym_DQUOTE] = ACTIONS(1135),
    [sym__quoted_chars] = ACTIONS(1140),
    [sym_single_quoted_argument] = ACTIONS(1115),
    [anon_sym_DOLLAR] = ACTIONS(1135),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1135),
    [anon_sym_RBRACE] = ACTIONS(1124),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1135),
    [anon_sym_LT] = ACTIONS(1118),
    [anon_sym_GT] = ACTIONS(1118),
    [anon_sym_GT_GT] = ACTIONS(1118),
    [anon_sym_AMP_GT] = ACTIONS(1118),
    [anon_sym_AMP_GT_GT] = ACTIONS(1118),
    [anon_sym_LT_AMP] = ACTIONS(1118),
    [anon_sym_GT_AMP] = ACTIONS(1118),
    [anon_sym_LT_LT] = ACTIONS(1126),
    [anon_sym_LT_LT_DASH] = ACTIONS(1126),
    [sym_leading_word] = ACTIONS(1131),
    [sym_word] = ACTIONS(1115),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1108),
    [anon_sym_LF] = ACTIONS(1108),
  },
  [350] = {
    [sym_file_descriptor] = ACTIONS(1150),
    [anon_sym_RPAREN] = ACTIONS(1155),
    [anon_sym_SEMI_SEMI] = ACTIONS(1155),
    [anon_sym_PIPE] = ACTIONS(1155),
    [anon_sym_PIPE_AMP] = ACTIONS(1155),
    [anon_sym_AMP_AMP] = ACTIONS(1155),
    [anon_sym_PIPE_PIPE] = ACTIONS(1155),
    [anon_sym_LT] = ACTIONS(1158),
    [anon_sym_GT] = ACTIONS(1158),
    [anon_sym_GT_GT] = ACTIONS(1158),
    [anon_sym_AMP_GT] = ACTIONS(1158),
    [anon_sym_AMP_GT_GT] = ACTIONS(1158),
    [anon_sym_LT_AMP] = ACTIONS(1158),
    [anon_sym_GT_AMP] = ACTIONS(1158),
    [anon_sym_LT_LT] = ACTIONS(1155),
    [anon_sym_LT_LT_DASH] = ACTIONS(1155),
    [sym_leading_word] = ACTIONS(1093),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1155),
    [anon_sym_LF] = ACTIONS(1155),
  },
  [351] = {
    [sym_file_descriptor] = ACTIONS(1163),
    [anon_sym_RPAREN] = ACTIONS(1155),
    [anon_sym_SEMI_SEMI] = ACTIONS(1155),
    [anon_sym_PIPE] = ACTIONS(1155),
    [anon_sym_PIPE_AMP] = ACTIONS(1155),
    [anon_sym_AMP_AMP] = ACTIONS(1155),
    [anon_sym_PIPE_PIPE] = ACTIONS(1155),
    [anon_sym_LT] = ACTIONS(1155),
    [anon_sym_GT] = ACTIONS(1155),
    [anon_sym_GT_GT] = ACTIONS(1155),
    [anon_sym_AMP_GT] = ACTIONS(1155),
    [anon_sym_AMP_GT_GT] = ACTIONS(1155),
    [anon_sym_LT_AMP] = ACTIONS(1155),
    [anon_sym_GT_AMP] = ACTIONS(1155),
    [anon_sym_LT_LT] = ACTIONS(1155),
    [anon_sym_LT_LT_DASH] = ACTIONS(1155),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1155),
    [anon_sym_LF] = ACTIONS(1155),
  },
  [352] = {
    [sym__terminated_statement] = STATE(314),
    [sym_while_statement] = STATE(291),
    [sym_if_statement] = STATE(291),
    [sym_elif_clause] = STATE(126),
    [sym_else_clause] = STATE(190),
    [sym_case_statement] = STATE(291),
    [sym_bracket_command] = STATE(291),
    [sym_command] = STATE(291),
    [sym_pipeline] = STATE(291),
    [sym_list] = STATE(291),
    [sym_environment_variable_assignment] = STATE(292),
    [sym_file_redirect] = STATE(14),
    [aux_sym_if_statement_repeat1] = STATE(191),
    [aux_sym_command_repeat1] = STATE(16),
    [sym_file_descriptor] = ACTIONS(75),
    [ts_builtin_sym_end] = ACTIONS(167),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_done] = ACTIONS(495),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_fi] = ACTIONS(1166),
    [anon_sym_elif] = ACTIONS(1170),
    [anon_sym_else] = ACTIONS(1173),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_esac] = ACTIONS(1176),
    [anon_sym_SEMI_SEMI] = ACTIONS(1179),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(1181),
    [sym_single_quoted_argument] = ACTIONS(1176),
    [anon_sym_DOLLAR] = ACTIONS(1176),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1181),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1181),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_GT_GT] = ACTIONS(89),
    [anon_sym_AMP_GT] = ACTIONS(89),
    [anon_sym_AMP_GT_GT] = ACTIONS(89),
    [anon_sym_LT_AMP] = ACTIONS(89),
    [anon_sym_GT_AMP] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_word] = ACTIONS(1184),
    [sym_comment] = ACTIONS(71),
  },
  [353] = {
    [sym_elif_clause] = STATE(192),
    [sym_else_clause] = STATE(384),
    [anon_sym_fi] = ACTIONS(1187),
    [anon_sym_elif] = ACTIONS(507),
    [anon_sym_else] = ACTIONS(509),
    [sym_comment] = ACTIONS(71),
  },
  [354] = {
    [sym_case_item] = STATE(253),
    [sym_quoted_argument] = STATE(197),
    [sym_expansion] = STATE(197),
    [sym_operator_expansion] = STATE(197),
    [sym_command_substitution] = STATE(197),
    [anon_sym_esac] = ACTIONS(1189),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [sym_single_quoted_argument] = ACTIONS(527),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [sym_word] = ACTIONS(529),
    [sym_comment] = ACTIONS(71),
  },
  [355] = {
    [sym_quoted_argument] = STATE(387),
    [sym_expansion] = STATE(387),
    [sym_operator_expansion] = STATE(387),
    [sym_command_substitution] = STATE(387),
    [sym_file_redirect] = STATE(47),
    [sym_heredoc_redirect] = STATE(47),
    [aux_sym_command_repeat2] = STATE(392),
    [sym_file_descriptor] = ACTIONS(133),
    [anon_sym_RPAREN] = ACTIONS(1191),
    [anon_sym_SEMI_SEMI] = ACTIONS(1191),
    [anon_sym_RBRACK] = ACTIONS(1194),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1194),
    [anon_sym_PIPE] = ACTIONS(1191),
    [anon_sym_PIPE_AMP] = ACTIONS(1191),
    [anon_sym_AMP_AMP] = ACTIONS(1191),
    [anon_sym_PIPE_PIPE] = ACTIONS(1191),
    [anon_sym_DQUOTE] = ACTIONS(1196),
    [sym_single_quoted_argument] = ACTIONS(1198),
    [anon_sym_DOLLAR] = ACTIONS(1200),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1202),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1204),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_GT_GT] = ACTIONS(141),
    [anon_sym_AMP_GT] = ACTIONS(141),
    [anon_sym_AMP_GT_GT] = ACTIONS(141),
    [anon_sym_LT_AMP] = ACTIONS(141),
    [anon_sym_GT_AMP] = ACTIONS(141),
    [anon_sym_LT_LT] = ACTIONS(143),
    [anon_sym_LT_LT_DASH] = ACTIONS(143),
    [sym_word] = ACTIONS(1206),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1191),
    [anon_sym_LF] = ACTIONS(1191),
  },
  [356] = {
    [sym_file_redirect] = STATE(113),
    [sym_heredoc_redirect] = STATE(113),
    [sym_file_descriptor] = ACTIONS(133),
    [anon_sym_RPAREN] = ACTIONS(1208),
    [anon_sym_SEMI_SEMI] = ACTIONS(1208),
    [anon_sym_PIPE] = ACTIONS(1208),
    [anon_sym_PIPE_AMP] = ACTIONS(1208),
    [anon_sym_AMP_AMP] = ACTIONS(1208),
    [anon_sym_PIPE_PIPE] = ACTIONS(1208),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_GT_GT] = ACTIONS(141),
    [anon_sym_AMP_GT] = ACTIONS(141),
    [anon_sym_AMP_GT_GT] = ACTIONS(141),
    [anon_sym_LT_AMP] = ACTIONS(141),
    [anon_sym_GT_AMP] = ACTIONS(141),
    [anon_sym_LT_LT] = ACTIONS(143),
    [anon_sym_LT_LT_DASH] = ACTIONS(143),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1208),
    [anon_sym_LF] = ACTIONS(1208),
  },
  [357] = {
    [sym_expansion] = STATE(134),
    [sym_operator_expansion] = STATE(134),
    [sym_command_substitution] = STATE(134),
    [anon_sym_DQUOTE] = ACTIONS(1215),
    [sym__quoted_chars] = ACTIONS(355),
    [anon_sym_DOLLAR] = ACTIONS(185),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(187),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(189),
    [sym_comment] = ACTIONS(145),
  },
  [358] = {
    [sym__terminated_statement] = STATE(52),
    [sym_while_statement] = STATE(12),
    [sym_if_statement] = STATE(12),
    [sym_elif_clause] = STATE(126),
    [sym_else_clause] = STATE(190),
    [sym_case_statement] = STATE(12),
    [sym_bracket_command] = STATE(12),
    [sym_command] = STATE(12),
    [sym_pipeline] = STATE(12),
    [sym_list] = STATE(12),
    [sym_environment_variable_assignment] = STATE(13),
    [sym_file_redirect] = STATE(14),
    [aux_sym_if_statement_repeat1] = STATE(191),
    [aux_sym_command_repeat1] = STATE(16),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_fi] = ACTIONS(1217),
    [anon_sym_elif] = ACTIONS(1170),
    [anon_sym_else] = ACTIONS(1173),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(87),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_GT_GT] = ACTIONS(89),
    [anon_sym_AMP_GT] = ACTIONS(89),
    [anon_sym_AMP_GT_GT] = ACTIONS(89),
    [anon_sym_LT_AMP] = ACTIONS(89),
    [anon_sym_GT_AMP] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_comment] = ACTIONS(71),
  },
  [359] = {
    [sym_case_item] = STATE(199),
    [sym_quoted_argument] = STATE(197),
    [sym_expansion] = STATE(197),
    [sym_operator_expansion] = STATE(197),
    [sym_command_substitution] = STATE(197),
    [aux_sym_case_statement_repeat1] = STATE(354),
    [anon_sym_esac] = ACTIONS(1220),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [sym_single_quoted_argument] = ACTIONS(527),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [sym_word] = ACTIONS(529),
    [sym_comment] = ACTIONS(71),
  },
  [360] = {
    [anon_sym_esac] = ACTIONS(1176),
    [anon_sym_DQUOTE] = ACTIONS(1181),
    [sym_single_quoted_argument] = ACTIONS(1176),
    [anon_sym_DOLLAR] = ACTIONS(1176),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1181),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1181),
    [sym_word] = ACTIONS(1184),
    [sym_comment] = ACTIONS(71),
  },
  [361] = {
    [sym__terminated_statement] = STATE(314),
    [sym_while_statement] = STATE(291),
    [sym_if_statement] = STATE(291),
    [sym_case_statement] = STATE(291),
    [sym_bracket_command] = STATE(291),
    [sym_command] = STATE(291),
    [sym_pipeline] = STATE(291),
    [sym_list] = STATE(291),
    [sym_environment_variable_assignment] = STATE(292),
    [sym_file_redirect] = STATE(14),
    [aux_sym_command_repeat1] = STATE(16),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_esac] = ACTIONS(1176),
    [anon_sym_SEMI_SEMI] = ACTIONS(1179),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(1181),
    [sym_single_quoted_argument] = ACTIONS(1176),
    [anon_sym_DOLLAR] = ACTIONS(1176),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1181),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1181),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_GT_GT] = ACTIONS(89),
    [anon_sym_AMP_GT] = ACTIONS(89),
    [anon_sym_AMP_GT_GT] = ACTIONS(89),
    [anon_sym_LT_AMP] = ACTIONS(89),
    [anon_sym_GT_AMP] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(91),
    [sym_word] = ACTIONS(1184),
    [sym_comment] = ACTIONS(71),
  },
  [362] = {
    [sym_file_descriptor] = ACTIONS(445),
    [anon_sym_SEMI_SEMI] = ACTIONS(447),
    [anon_sym_PIPE] = ACTIONS(447),
    [anon_sym_PIPE_AMP] = ACTIONS(447),
    [anon_sym_AMP_AMP] = ACTIONS(447),
    [anon_sym_PIPE_PIPE] = ACTIONS(447),
    [anon_sym_RBRACE] = ACTIONS(1124),
    [anon_sym_LT] = ACTIONS(447),
    [anon_sym_GT] = ACTIONS(447),
    [anon_sym_GT_GT] = ACTIONS(447),
    [anon_sym_AMP_GT] = ACTIONS(447),
    [anon_sym_AMP_GT_GT] = ACTIONS(447),
    [anon_sym_LT_AMP] = ACTIONS(447),
    [anon_sym_GT_AMP] = ACTIONS(447),
    [sym_leading_word] = ACTIONS(447),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(447),
    [anon_sym_LF] = ACTIONS(447),
  },
  [363] = {
    [sym_file_descriptor] = ACTIONS(453),
    [anon_sym_SEMI_SEMI] = ACTIONS(455),
    [anon_sym_PIPE] = ACTIONS(455),
    [anon_sym_PIPE_AMP] = ACTIONS(455),
    [anon_sym_AMP_AMP] = ACTIONS(455),
    [anon_sym_PIPE_PIPE] = ACTIONS(455),
    [anon_sym_RBRACE] = ACTIONS(1222),
    [anon_sym_LT] = ACTIONS(455),
    [anon_sym_GT] = ACTIONS(455),
    [anon_sym_GT_GT] = ACTIONS(455),
    [anon_sym_AMP_GT] = ACTIONS(455),
    [anon_sym_AMP_GT_GT] = ACTIONS(455),
    [anon_sym_LT_AMP] = ACTIONS(455),
    [anon_sym_GT_AMP] = ACTIONS(455),
    [sym_leading_word] = ACTIONS(455),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(455),
    [anon_sym_LF] = ACTIONS(455),
  },
  [364] = {
    [sym_file_descriptor] = ACTIONS(385),
    [anon_sym_in] = ACTIONS(343),
    [anon_sym_RPAREN] = ACTIONS(343),
    [anon_sym_SEMI_SEMI] = ACTIONS(343),
    [anon_sym_RBRACK] = ACTIONS(343),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(343),
    [anon_sym_PIPE] = ACTIONS(343),
    [anon_sym_PIPE_AMP] = ACTIONS(343),
    [anon_sym_AMP_AMP] = ACTIONS(343),
    [anon_sym_PIPE_PIPE] = ACTIONS(343),
    [anon_sym_DQUOTE] = ACTIONS(343),
    [sym_single_quoted_argument] = ACTIONS(343),
    [anon_sym_DOLLAR] = ACTIONS(343),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(343),
    [anon_sym_RBRACE] = ACTIONS(343),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(343),
    [anon_sym_LT] = ACTIONS(343),
    [anon_sym_GT] = ACTIONS(343),
    [anon_sym_GT_GT] = ACTIONS(343),
    [anon_sym_AMP_GT] = ACTIONS(343),
    [anon_sym_AMP_GT_GT] = ACTIONS(343),
    [anon_sym_LT_AMP] = ACTIONS(343),
    [anon_sym_GT_AMP] = ACTIONS(343),
    [anon_sym_LT_LT] = ACTIONS(343),
    [anon_sym_LT_LT_DASH] = ACTIONS(343),
    [sym_leading_word] = ACTIONS(343),
    [sym_word] = ACTIONS(343),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(343),
    [anon_sym_LF] = ACTIONS(343),
  },
  [365] = {
    [sym__heredoc_middle] = ACTIONS(391),
    [sym__heredoc_end] = ACTIONS(391),
    [sym_file_descriptor] = ACTIONS(391),
    [anon_sym_in] = ACTIONS(361),
    [anon_sym_RPAREN] = ACTIONS(361),
    [anon_sym_SEMI_SEMI] = ACTIONS(361),
    [anon_sym_RBRACK] = ACTIONS(361),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(361),
    [anon_sym_PIPE] = ACTIONS(361),
    [anon_sym_PIPE_AMP] = ACTIONS(361),
    [anon_sym_AMP_AMP] = ACTIONS(361),
    [anon_sym_PIPE_PIPE] = ACTIONS(361),
    [anon_sym_DQUOTE] = ACTIONS(361),
    [sym__quoted_chars] = ACTIONS(361),
    [sym_single_quoted_argument] = ACTIONS(361),
    [anon_sym_DOLLAR] = ACTIONS(361),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(361),
    [anon_sym_RBRACE] = ACTIONS(361),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(361),
    [anon_sym_LT] = ACTIONS(361),
    [anon_sym_GT] = ACTIONS(361),
    [anon_sym_GT_GT] = ACTIONS(361),
    [anon_sym_AMP_GT] = ACTIONS(361),
    [anon_sym_AMP_GT_GT] = ACTIONS(361),
    [anon_sym_LT_AMP] = ACTIONS(361),
    [anon_sym_GT_AMP] = ACTIONS(361),
    [anon_sym_LT_LT] = ACTIONS(361),
    [anon_sym_LT_LT_DASH] = ACTIONS(361),
    [sym_leading_word] = ACTIONS(361),
    [sym_word] = ACTIONS(361),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(361),
    [anon_sym_LF] = ACTIONS(361),
  },
  [366] = {
    [anon_sym_EQ] = ACTIONS(1224),
    [anon_sym_COLON] = ACTIONS(1226),
    [anon_sym_COLON_QMARK] = ACTIONS(1224),
    [anon_sym_RBRACE] = ACTIONS(1228),
    [sym_comment] = ACTIONS(71),
  },
  [367] = {
    [anon_sym_RBRACE] = ACTIONS(1230),
    [sym_comment] = ACTIONS(71),
  },
  [368] = {
    [anon_sym_RBRACE] = ACTIONS(1232),
    [sym_comment] = ACTIONS(71),
  },
  [369] = {
    [anon_sym_RPAREN] = ACTIONS(1234),
    [sym_comment] = ACTIONS(71),
  },
  [370] = {
    [sym_expansion] = STATE(62),
    [sym_operator_expansion] = STATE(62),
    [sym_command_substitution] = STATE(62),
    [aux_sym_quoted_argument_repeat1] = STATE(397),
    [anon_sym_DQUOTE] = ACTIONS(1236),
    [sym__quoted_chars] = ACTIONS(183),
    [anon_sym_DOLLAR] = ACTIONS(185),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(187),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(189),
    [sym_comment] = ACTIONS(145),
  },
  [371] = {
    [sym_file_descriptor] = ACTIONS(1238),
    [anon_sym_RPAREN] = ACTIONS(1241),
    [anon_sym_SEMI_SEMI] = ACTIONS(1241),
    [anon_sym_PIPE] = ACTIONS(1241),
    [anon_sym_PIPE_AMP] = ACTIONS(1241),
    [anon_sym_AMP_AMP] = ACTIONS(1241),
    [anon_sym_PIPE_PIPE] = ACTIONS(1241),
    [anon_sym_LT] = ACTIONS(1241),
    [anon_sym_GT] = ACTIONS(1241),
    [anon_sym_GT_GT] = ACTIONS(1241),
    [anon_sym_AMP_GT] = ACTIONS(1241),
    [anon_sym_AMP_GT_GT] = ACTIONS(1241),
    [anon_sym_LT_AMP] = ACTIONS(1241),
    [anon_sym_GT_AMP] = ACTIONS(1241),
    [anon_sym_LT_LT] = ACTIONS(1241),
    [anon_sym_LT_LT_DASH] = ACTIONS(1241),
    [sym_leading_word] = ACTIONS(1241),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1241),
    [anon_sym_LF] = ACTIONS(1241),
  },
  [372] = {
    [sym_word] = ACTIONS(1244),
    [sym_comment] = ACTIONS(71),
  },
  [373] = {
    [sym_leading_word] = ACTIONS(1246),
    [sym_comment] = ACTIONS(71),
  },
  [374] = {
    [sym_command] = STATE(400),
    [sym_environment_variable_assignment] = STATE(14),
    [sym_file_redirect] = STATE(14),
    [aux_sym_command_repeat1] = STATE(73),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_GT_GT] = ACTIONS(89),
    [anon_sym_AMP_GT] = ACTIONS(89),
    [anon_sym_AMP_GT_GT] = ACTIONS(89),
    [anon_sym_LT_AMP] = ACTIONS(89),
    [anon_sym_GT_AMP] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(199),
    [sym_comment] = ACTIONS(71),
  },
  [375] = {
    [sym_file_descriptor] = ACTIONS(1248),
    [anon_sym_RPAREN] = ACTIONS(1251),
    [anon_sym_SEMI_SEMI] = ACTIONS(1251),
    [anon_sym_PIPE] = ACTIONS(1251),
    [anon_sym_PIPE_AMP] = ACTIONS(1251),
    [anon_sym_AMP_AMP] = ACTIONS(1251),
    [anon_sym_PIPE_PIPE] = ACTIONS(1251),
    [anon_sym_LT] = ACTIONS(1251),
    [anon_sym_GT] = ACTIONS(1251),
    [anon_sym_GT_GT] = ACTIONS(1251),
    [anon_sym_AMP_GT] = ACTIONS(1251),
    [anon_sym_AMP_GT_GT] = ACTIONS(1251),
    [anon_sym_LT_AMP] = ACTIONS(1251),
    [anon_sym_GT_AMP] = ACTIONS(1251),
    [anon_sym_LT_LT] = ACTIONS(1251),
    [anon_sym_LT_LT_DASH] = ACTIONS(1251),
    [sym_leading_word] = ACTIONS(1251),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1251),
    [anon_sym_LF] = ACTIONS(1251),
  },
  [376] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1254),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1254),
    [anon_sym_LF] = ACTIONS(1254),
  },
  [377] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1256),
    [anon_sym_PIPE] = ACTIONS(1256),
    [anon_sym_PIPE_AMP] = ACTIONS(1256),
    [anon_sym_AMP_AMP] = ACTIONS(1256),
    [anon_sym_PIPE_PIPE] = ACTIONS(1256),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1256),
    [anon_sym_LF] = ACTIONS(1256),
  },
  [378] = {
    [sym_quoted_argument] = STATE(402),
    [sym_expansion] = STATE(402),
    [sym_operator_expansion] = STATE(402),
    [sym_command_substitution] = STATE(402),
    [anon_sym_DQUOTE] = ACTIONS(986),
    [sym_single_quoted_argument] = ACTIONS(1261),
    [anon_sym_DOLLAR] = ACTIONS(990),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(992),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(994),
    [sym_word] = ACTIONS(1263),
    [sym_comment] = ACTIONS(71),
  },
  [379] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1265),
    [anon_sym_PIPE] = ACTIONS(1265),
    [anon_sym_PIPE_AMP] = ACTIONS(1265),
    [anon_sym_AMP_AMP] = ACTIONS(1265),
    [anon_sym_PIPE_PIPE] = ACTIONS(1265),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1265),
    [anon_sym_LF] = ACTIONS(1265),
  },
  [380] = {
    [sym_file_descriptor] = ACTIONS(595),
    [anon_sym_in] = ACTIONS(575),
    [anon_sym_RPAREN] = ACTIONS(575),
    [anon_sym_SEMI_SEMI] = ACTIONS(575),
    [anon_sym_RBRACK] = ACTIONS(575),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(575),
    [anon_sym_PIPE] = ACTIONS(575),
    [anon_sym_PIPE_AMP] = ACTIONS(575),
    [anon_sym_AMP_AMP] = ACTIONS(575),
    [anon_sym_PIPE_PIPE] = ACTIONS(575),
    [anon_sym_DQUOTE] = ACTIONS(575),
    [sym__quoted_chars] = ACTIONS(575),
    [sym_single_quoted_argument] = ACTIONS(575),
    [anon_sym_DOLLAR] = ACTIONS(575),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(575),
    [anon_sym_RBRACE] = ACTIONS(575),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(575),
    [anon_sym_LT] = ACTIONS(575),
    [anon_sym_GT] = ACTIONS(575),
    [anon_sym_GT_GT] = ACTIONS(575),
    [anon_sym_AMP_GT] = ACTIONS(575),
    [anon_sym_AMP_GT_GT] = ACTIONS(575),
    [anon_sym_LT_AMP] = ACTIONS(575),
    [anon_sym_GT_AMP] = ACTIONS(575),
    [anon_sym_LT_LT] = ACTIONS(575),
    [anon_sym_LT_LT_DASH] = ACTIONS(575),
    [sym_leading_word] = ACTIONS(575),
    [sym_word] = ACTIONS(575),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(575),
    [anon_sym_LF] = ACTIONS(575),
  },
  [381] = {
    [sym__heredoc_middle] = ACTIONS(819),
    [sym__heredoc_end] = ACTIONS(819),
    [sym_file_descriptor] = ACTIONS(819),
    [anon_sym_in] = ACTIONS(793),
    [anon_sym_RPAREN] = ACTIONS(793),
    [anon_sym_SEMI_SEMI] = ACTIONS(793),
    [anon_sym_RBRACK] = ACTIONS(793),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(793),
    [anon_sym_PIPE] = ACTIONS(793),
    [anon_sym_PIPE_AMP] = ACTIONS(793),
    [anon_sym_AMP_AMP] = ACTIONS(793),
    [anon_sym_PIPE_PIPE] = ACTIONS(793),
    [anon_sym_DQUOTE] = ACTIONS(793),
    [sym__quoted_chars] = ACTIONS(793),
    [sym_single_quoted_argument] = ACTIONS(793),
    [anon_sym_DOLLAR] = ACTIONS(793),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(793),
    [anon_sym_RBRACE] = ACTIONS(793),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(793),
    [anon_sym_LT] = ACTIONS(793),
    [anon_sym_GT] = ACTIONS(793),
    [anon_sym_GT_GT] = ACTIONS(793),
    [anon_sym_AMP_GT] = ACTIONS(793),
    [anon_sym_AMP_GT_GT] = ACTIONS(793),
    [anon_sym_LT_AMP] = ACTIONS(793),
    [anon_sym_GT_AMP] = ACTIONS(793),
    [anon_sym_LT_LT] = ACTIONS(793),
    [anon_sym_LT_LT_DASH] = ACTIONS(793),
    [sym_leading_word] = ACTIONS(793),
    [sym_word] = ACTIONS(793),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(793),
    [anon_sym_LF] = ACTIONS(793),
  },
  [382] = {
    [anon_sym_esac] = ACTIONS(1269),
    [anon_sym_DQUOTE] = ACTIONS(1272),
    [sym_single_quoted_argument] = ACTIONS(1269),
    [anon_sym_DOLLAR] = ACTIONS(1269),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1272),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1272),
    [sym_word] = ACTIONS(1275),
    [sym_comment] = ACTIONS(71),
  },
  [383] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1278),
    [anon_sym_PIPE] = ACTIONS(1278),
    [anon_sym_PIPE_AMP] = ACTIONS(1278),
    [anon_sym_AMP_AMP] = ACTIONS(1278),
    [anon_sym_PIPE_PIPE] = ACTIONS(1278),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1278),
    [anon_sym_LF] = ACTIONS(1278),
  },
  [384] = {
    [anon_sym_fi] = ACTIONS(1281),
    [sym_comment] = ACTIONS(71),
  },
  [385] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1283),
    [anon_sym_PIPE] = ACTIONS(1283),
    [anon_sym_PIPE_AMP] = ACTIONS(1283),
    [anon_sym_AMP_AMP] = ACTIONS(1283),
    [anon_sym_PIPE_PIPE] = ACTIONS(1283),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1283),
    [anon_sym_LF] = ACTIONS(1283),
  },
  [386] = {
    [sym_expansion] = STATE(62),
    [sym_operator_expansion] = STATE(62),
    [sym_command_substitution] = STATE(62),
    [aux_sym_quoted_argument_repeat1] = STATE(406),
    [anon_sym_DQUOTE] = ACTIONS(1288),
    [sym__quoted_chars] = ACTIONS(183),
    [anon_sym_DOLLAR] = ACTIONS(185),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(187),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(189),
    [sym_comment] = ACTIONS(145),
  },
  [387] = {
    [sym_file_descriptor] = ACTIONS(407),
    [anon_sym_RPAREN] = ACTIONS(409),
    [anon_sym_SEMI_SEMI] = ACTIONS(409),
    [anon_sym_RBRACK] = ACTIONS(409),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(409),
    [anon_sym_PIPE] = ACTIONS(409),
    [anon_sym_PIPE_AMP] = ACTIONS(409),
    [anon_sym_AMP_AMP] = ACTIONS(409),
    [anon_sym_PIPE_PIPE] = ACTIONS(409),
    [anon_sym_DQUOTE] = ACTIONS(409),
    [sym_single_quoted_argument] = ACTIONS(409),
    [anon_sym_DOLLAR] = ACTIONS(409),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(409),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(409),
    [anon_sym_LT] = ACTIONS(409),
    [anon_sym_GT] = ACTIONS(409),
    [anon_sym_GT_GT] = ACTIONS(409),
    [anon_sym_AMP_GT] = ACTIONS(409),
    [anon_sym_AMP_GT_GT] = ACTIONS(409),
    [anon_sym_LT_AMP] = ACTIONS(409),
    [anon_sym_GT_AMP] = ACTIONS(409),
    [anon_sym_LT_LT] = ACTIONS(409),
    [anon_sym_LT_LT_DASH] = ACTIONS(409),
    [sym_word] = ACTIONS(409),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(409),
    [anon_sym_LF] = ACTIONS(409),
  },
  [388] = {
    [sym_word] = ACTIONS(1290),
    [sym_comment] = ACTIONS(71),
  },
  [389] = {
    [sym_leading_word] = ACTIONS(1292),
    [sym_comment] = ACTIONS(71),
  },
  [390] = {
    [sym_command] = STATE(409),
    [sym_environment_variable_assignment] = STATE(14),
    [sym_file_redirect] = STATE(14),
    [aux_sym_command_repeat1] = STATE(73),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_GT_GT] = ACTIONS(89),
    [anon_sym_AMP_GT] = ACTIONS(89),
    [anon_sym_AMP_GT_GT] = ACTIONS(89),
    [anon_sym_LT_AMP] = ACTIONS(89),
    [anon_sym_GT_AMP] = ACTIONS(89),
    [sym_leading_word] = ACTIONS(199),
    [sym_comment] = ACTIONS(71),
  },
  [391] = {
    [sym_file_descriptor] = ACTIONS(413),
    [anon_sym_RPAREN] = ACTIONS(415),
    [anon_sym_SEMI_SEMI] = ACTIONS(415),
    [anon_sym_RBRACK] = ACTIONS(415),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(415),
    [anon_sym_PIPE] = ACTIONS(415),
    [anon_sym_PIPE_AMP] = ACTIONS(415),
    [anon_sym_AMP_AMP] = ACTIONS(415),
    [anon_sym_PIPE_PIPE] = ACTIONS(415),
    [anon_sym_DQUOTE] = ACTIONS(415),
    [sym_single_quoted_argument] = ACTIONS(415),
    [anon_sym_DOLLAR] = ACTIONS(415),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(415),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(415),
    [anon_sym_LT] = ACTIONS(415),
    [anon_sym_GT] = ACTIONS(415),
    [anon_sym_GT_GT] = ACTIONS(415),
    [anon_sym_AMP_GT] = ACTIONS(415),
    [anon_sym_AMP_GT_GT] = ACTIONS(415),
    [anon_sym_LT_AMP] = ACTIONS(415),
    [anon_sym_GT_AMP] = ACTIONS(415),
    [anon_sym_LT_LT] = ACTIONS(415),
    [anon_sym_LT_LT_DASH] = ACTIONS(415),
    [sym_word] = ACTIONS(415),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(415),
    [anon_sym_LF] = ACTIONS(415),
  },
  [392] = {
    [sym_file_redirect] = STATE(113),
    [sym_heredoc_redirect] = STATE(113),
    [sym_file_descriptor] = ACTIONS(133),
    [anon_sym_RPAREN] = ACTIONS(1294),
    [anon_sym_SEMI_SEMI] = ACTIONS(1294),
    [anon_sym_PIPE] = ACTIONS(1294),
    [anon_sym_PIPE_AMP] = ACTIONS(1294),
    [anon_sym_AMP_AMP] = ACTIONS(1294),
    [anon_sym_PIPE_PIPE] = ACTIONS(1294),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_GT_GT] = ACTIONS(141),
    [anon_sym_AMP_GT] = ACTIONS(141),
    [anon_sym_AMP_GT_GT] = ACTIONS(141),
    [anon_sym_LT_AMP] = ACTIONS(141),
    [anon_sym_GT_AMP] = ACTIONS(141),
    [anon_sym_LT_LT] = ACTIONS(143),
    [anon_sym_LT_LT_DASH] = ACTIONS(143),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1294),
    [anon_sym_LF] = ACTIONS(1294),
  },
  [393] = {
    [sym_file_descriptor] = ACTIONS(583),
    [anon_sym_in] = ACTIONS(519),
    [anon_sym_RPAREN] = ACTIONS(519),
    [anon_sym_SEMI_SEMI] = ACTIONS(519),
    [anon_sym_RBRACK] = ACTIONS(519),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(519),
    [anon_sym_PIPE] = ACTIONS(519),
    [anon_sym_PIPE_AMP] = ACTIONS(519),
    [anon_sym_AMP_AMP] = ACTIONS(519),
    [anon_sym_PIPE_PIPE] = ACTIONS(519),
    [anon_sym_DQUOTE] = ACTIONS(519),
    [sym_single_quoted_argument] = ACTIONS(519),
    [anon_sym_DOLLAR] = ACTIONS(519),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(519),
    [anon_sym_RBRACE] = ACTIONS(519),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(519),
    [anon_sym_LT] = ACTIONS(519),
    [anon_sym_GT] = ACTIONS(519),
    [anon_sym_GT_GT] = ACTIONS(519),
    [anon_sym_AMP_GT] = ACTIONS(519),
    [anon_sym_AMP_GT_GT] = ACTIONS(519),
    [anon_sym_LT_AMP] = ACTIONS(519),
    [anon_sym_GT_AMP] = ACTIONS(519),
    [anon_sym_LT_LT] = ACTIONS(519),
    [anon_sym_LT_LT_DASH] = ACTIONS(519),
    [sym_leading_word] = ACTIONS(519),
    [sym_word] = ACTIONS(519),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(519),
    [anon_sym_LF] = ACTIONS(519),
  },
  [394] = {
    [sym__heredoc_middle] = ACTIONS(823),
    [sym__heredoc_end] = ACTIONS(823),
    [sym_file_descriptor] = ACTIONS(823),
    [anon_sym_in] = ACTIONS(795),
    [anon_sym_RPAREN] = ACTIONS(795),
    [anon_sym_SEMI_SEMI] = ACTIONS(795),
    [anon_sym_RBRACK] = ACTIONS(795),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(795),
    [anon_sym_PIPE] = ACTIONS(795),
    [anon_sym_PIPE_AMP] = ACTIONS(795),
    [anon_sym_AMP_AMP] = ACTIONS(795),
    [anon_sym_PIPE_PIPE] = ACTIONS(795),
    [anon_sym_DQUOTE] = ACTIONS(795),
    [sym__quoted_chars] = ACTIONS(795),
    [sym_single_quoted_argument] = ACTIONS(795),
    [anon_sym_DOLLAR] = ACTIONS(795),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(795),
    [anon_sym_RBRACE] = ACTIONS(795),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(795),
    [anon_sym_LT] = ACTIONS(795),
    [anon_sym_GT] = ACTIONS(795),
    [anon_sym_GT_GT] = ACTIONS(795),
    [anon_sym_AMP_GT] = ACTIONS(795),
    [anon_sym_AMP_GT_GT] = ACTIONS(795),
    [anon_sym_LT_AMP] = ACTIONS(795),
    [anon_sym_GT_AMP] = ACTIONS(795),
    [anon_sym_LT_LT] = ACTIONS(795),
    [anon_sym_LT_LT_DASH] = ACTIONS(795),
    [sym_leading_word] = ACTIONS(795),
    [sym_word] = ACTIONS(795),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(795),
    [anon_sym_LF] = ACTIONS(795),
  },
  [395] = {
    [sym__heredoc_middle] = ACTIONS(591),
    [sym__heredoc_end] = ACTIONS(591),
    [sym_file_descriptor] = ACTIONS(591),
    [anon_sym_in] = ACTIONS(537),
    [anon_sym_RPAREN] = ACTIONS(537),
    [anon_sym_SEMI_SEMI] = ACTIONS(537),
    [anon_sym_RBRACK] = ACTIONS(537),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(537),
    [anon_sym_PIPE] = ACTIONS(537),
    [anon_sym_PIPE_AMP] = ACTIONS(537),
    [anon_sym_AMP_AMP] = ACTIONS(537),
    [anon_sym_PIPE_PIPE] = ACTIONS(537),
    [anon_sym_DQUOTE] = ACTIONS(537),
    [sym__quoted_chars] = ACTIONS(537),
    [sym_single_quoted_argument] = ACTIONS(537),
    [anon_sym_DOLLAR] = ACTIONS(537),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(537),
    [anon_sym_RBRACE] = ACTIONS(537),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(537),
    [anon_sym_LT] = ACTIONS(537),
    [anon_sym_GT] = ACTIONS(537),
    [anon_sym_GT_GT] = ACTIONS(537),
    [anon_sym_AMP_GT] = ACTIONS(537),
    [anon_sym_AMP_GT_GT] = ACTIONS(537),
    [anon_sym_LT_AMP] = ACTIONS(537),
    [anon_sym_GT_AMP] = ACTIONS(537),
    [anon_sym_LT_LT] = ACTIONS(537),
    [anon_sym_LT_LT_DASH] = ACTIONS(537),
    [sym_leading_word] = ACTIONS(537),
    [sym_word] = ACTIONS(537),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(537),
    [anon_sym_LF] = ACTIONS(537),
  },
  [396] = {
    [sym_file_descriptor] = ACTIONS(385),
    [anon_sym_RPAREN] = ACTIONS(343),
    [anon_sym_SEMI_SEMI] = ACTIONS(343),
    [anon_sym_PIPE] = ACTIONS(343),
    [anon_sym_PIPE_AMP] = ACTIONS(343),
    [anon_sym_AMP_AMP] = ACTIONS(343),
    [anon_sym_PIPE_PIPE] = ACTIONS(343),
    [anon_sym_LT] = ACTIONS(343),
    [anon_sym_GT] = ACTIONS(343),
    [anon_sym_GT_GT] = ACTIONS(343),
    [anon_sym_AMP_GT] = ACTIONS(343),
    [anon_sym_AMP_GT_GT] = ACTIONS(343),
    [anon_sym_LT_AMP] = ACTIONS(343),
    [anon_sym_GT_AMP] = ACTIONS(343),
    [anon_sym_LT_LT] = ACTIONS(343),
    [anon_sym_LT_LT_DASH] = ACTIONS(343),
    [sym_leading_word] = ACTIONS(343),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(343),
    [anon_sym_LF] = ACTIONS(343),
  },
  [397] = {
    [sym_expansion] = STATE(134),
    [sym_operator_expansion] = STATE(134),
    [sym_command_substitution] = STATE(134),
    [anon_sym_DQUOTE] = ACTIONS(1297),
    [sym__quoted_chars] = ACTIONS(355),
    [anon_sym_DOLLAR] = ACTIONS(185),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(187),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(189),
    [sym_comment] = ACTIONS(145),
  },
  [398] = {
    [sym_file_descriptor] = ACTIONS(391),
    [anon_sym_RPAREN] = ACTIONS(361),
    [anon_sym_SEMI_SEMI] = ACTIONS(361),
    [anon_sym_PIPE] = ACTIONS(361),
    [anon_sym_PIPE_AMP] = ACTIONS(361),
    [anon_sym_AMP_AMP] = ACTIONS(361),
    [anon_sym_PIPE_PIPE] = ACTIONS(361),
    [anon_sym_LT] = ACTIONS(361),
    [anon_sym_GT] = ACTIONS(361),
    [anon_sym_GT_GT] = ACTIONS(361),
    [anon_sym_AMP_GT] = ACTIONS(361),
    [anon_sym_AMP_GT_GT] = ACTIONS(361),
    [anon_sym_LT_AMP] = ACTIONS(361),
    [anon_sym_GT_AMP] = ACTIONS(361),
    [anon_sym_LT_LT] = ACTIONS(361),
    [anon_sym_LT_LT_DASH] = ACTIONS(361),
    [sym_leading_word] = ACTIONS(361),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(361),
    [anon_sym_LF] = ACTIONS(361),
  },
  [399] = {
    [anon_sym_EQ] = ACTIONS(1299),
    [anon_sym_COLON] = ACTIONS(1301),
    [anon_sym_COLON_QMARK] = ACTIONS(1299),
    [anon_sym_RBRACE] = ACTIONS(1303),
    [sym_comment] = ACTIONS(71),
  },
  [400] = {
    [anon_sym_RPAREN] = ACTIONS(1305),
    [sym_comment] = ACTIONS(71),
  },
  [401] = {
    [sym_case_item] = STATE(199),
    [sym_quoted_argument] = STATE(197),
    [sym_expansion] = STATE(197),
    [sym_operator_expansion] = STATE(197),
    [sym_command_substitution] = STATE(197),
    [aux_sym_case_statement_repeat1] = STATE(415),
    [anon_sym_esac] = ACTIONS(1307),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [sym_single_quoted_argument] = ACTIONS(527),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [sym_word] = ACTIONS(529),
    [sym_comment] = ACTIONS(71),
  },
  [402] = {
    [sym_file_descriptor] = ACTIONS(321),
    [anon_sym_RPAREN] = ACTIONS(325),
    [anon_sym_SEMI_SEMI] = ACTIONS(325),
    [anon_sym_PIPE] = ACTIONS(325),
    [anon_sym_PIPE_AMP] = ACTIONS(325),
    [anon_sym_AMP_AMP] = ACTIONS(325),
    [anon_sym_PIPE_PIPE] = ACTIONS(325),
    [anon_sym_LT] = ACTIONS(325),
    [anon_sym_GT] = ACTIONS(325),
    [anon_sym_GT_GT] = ACTIONS(325),
    [anon_sym_AMP_GT] = ACTIONS(325),
    [anon_sym_AMP_GT_GT] = ACTIONS(325),
    [anon_sym_LT_AMP] = ACTIONS(325),
    [anon_sym_GT_AMP] = ACTIONS(325),
    [anon_sym_LT_LT] = ACTIONS(325),
    [anon_sym_LT_LT_DASH] = ACTIONS(325),
    [sym_leading_word] = ACTIONS(325),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(325),
    [anon_sym_LF] = ACTIONS(325),
  },
  [403] = {
    [sym_file_descriptor] = ACTIONS(327),
    [anon_sym_RPAREN] = ACTIONS(331),
    [anon_sym_SEMI_SEMI] = ACTIONS(331),
    [anon_sym_PIPE] = ACTIONS(331),
    [anon_sym_PIPE_AMP] = ACTIONS(331),
    [anon_sym_AMP_AMP] = ACTIONS(331),
    [anon_sym_PIPE_PIPE] = ACTIONS(331),
    [anon_sym_LT] = ACTIONS(331),
    [anon_sym_GT] = ACTIONS(331),
    [anon_sym_GT_GT] = ACTIONS(331),
    [anon_sym_AMP_GT] = ACTIONS(331),
    [anon_sym_AMP_GT_GT] = ACTIONS(331),
    [anon_sym_LT_AMP] = ACTIONS(331),
    [anon_sym_GT_AMP] = ACTIONS(331),
    [anon_sym_LT_LT] = ACTIONS(331),
    [anon_sym_LT_LT_DASH] = ACTIONS(331),
    [sym_leading_word] = ACTIONS(331),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(331),
    [anon_sym_LF] = ACTIONS(331),
  },
  [404] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1309),
    [anon_sym_PIPE] = ACTIONS(1309),
    [anon_sym_PIPE_AMP] = ACTIONS(1309),
    [anon_sym_AMP_AMP] = ACTIONS(1309),
    [anon_sym_PIPE_PIPE] = ACTIONS(1309),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1309),
    [anon_sym_LF] = ACTIONS(1309),
  },
  [405] = {
    [sym_file_descriptor] = ACTIONS(385),
    [anon_sym_RPAREN] = ACTIONS(343),
    [anon_sym_SEMI_SEMI] = ACTIONS(343),
    [anon_sym_RBRACK] = ACTIONS(343),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(343),
    [anon_sym_PIPE] = ACTIONS(343),
    [anon_sym_PIPE_AMP] = ACTIONS(343),
    [anon_sym_AMP_AMP] = ACTIONS(343),
    [anon_sym_PIPE_PIPE] = ACTIONS(343),
    [anon_sym_DQUOTE] = ACTIONS(343),
    [sym_single_quoted_argument] = ACTIONS(343),
    [anon_sym_DOLLAR] = ACTIONS(343),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(343),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(343),
    [anon_sym_LT] = ACTIONS(343),
    [anon_sym_GT] = ACTIONS(343),
    [anon_sym_GT_GT] = ACTIONS(343),
    [anon_sym_AMP_GT] = ACTIONS(343),
    [anon_sym_AMP_GT_GT] = ACTIONS(343),
    [anon_sym_LT_AMP] = ACTIONS(343),
    [anon_sym_GT_AMP] = ACTIONS(343),
    [anon_sym_LT_LT] = ACTIONS(343),
    [anon_sym_LT_LT_DASH] = ACTIONS(343),
    [sym_word] = ACTIONS(343),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(343),
    [anon_sym_LF] = ACTIONS(343),
  },
  [406] = {
    [sym_expansion] = STATE(134),
    [sym_operator_expansion] = STATE(134),
    [sym_command_substitution] = STATE(134),
    [anon_sym_DQUOTE] = ACTIONS(1312),
    [sym__quoted_chars] = ACTIONS(355),
    [anon_sym_DOLLAR] = ACTIONS(185),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(187),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(189),
    [sym_comment] = ACTIONS(145),
  },
  [407] = {
    [sym_file_descriptor] = ACTIONS(391),
    [anon_sym_RPAREN] = ACTIONS(361),
    [anon_sym_SEMI_SEMI] = ACTIONS(361),
    [anon_sym_RBRACK] = ACTIONS(361),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(361),
    [anon_sym_PIPE] = ACTIONS(361),
    [anon_sym_PIPE_AMP] = ACTIONS(361),
    [anon_sym_AMP_AMP] = ACTIONS(361),
    [anon_sym_PIPE_PIPE] = ACTIONS(361),
    [anon_sym_DQUOTE] = ACTIONS(361),
    [sym_single_quoted_argument] = ACTIONS(361),
    [anon_sym_DOLLAR] = ACTIONS(361),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(361),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(361),
    [anon_sym_LT] = ACTIONS(361),
    [anon_sym_GT] = ACTIONS(361),
    [anon_sym_GT_GT] = ACTIONS(361),
    [anon_sym_AMP_GT] = ACTIONS(361),
    [anon_sym_AMP_GT_GT] = ACTIONS(361),
    [anon_sym_LT_AMP] = ACTIONS(361),
    [anon_sym_GT_AMP] = ACTIONS(361),
    [anon_sym_LT_LT] = ACTIONS(361),
    [anon_sym_LT_LT_DASH] = ACTIONS(361),
    [sym_word] = ACTIONS(361),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(361),
    [anon_sym_LF] = ACTIONS(361),
  },
  [408] = {
    [anon_sym_EQ] = ACTIONS(1314),
    [anon_sym_COLON] = ACTIONS(1316),
    [anon_sym_COLON_QMARK] = ACTIONS(1314),
    [anon_sym_RBRACE] = ACTIONS(1318),
    [sym_comment] = ACTIONS(71),
  },
  [409] = {
    [anon_sym_RPAREN] = ACTIONS(1320),
    [sym_comment] = ACTIONS(71),
  },
  [410] = {
    [sym_file_descriptor] = ACTIONS(583),
    [anon_sym_RPAREN] = ACTIONS(519),
    [anon_sym_SEMI_SEMI] = ACTIONS(519),
    [anon_sym_PIPE] = ACTIONS(519),
    [anon_sym_PIPE_AMP] = ACTIONS(519),
    [anon_sym_AMP_AMP] = ACTIONS(519),
    [anon_sym_PIPE_PIPE] = ACTIONS(519),
    [anon_sym_LT] = ACTIONS(519),
    [anon_sym_GT] = ACTIONS(519),
    [anon_sym_GT_GT] = ACTIONS(519),
    [anon_sym_AMP_GT] = ACTIONS(519),
    [anon_sym_AMP_GT_GT] = ACTIONS(519),
    [anon_sym_LT_AMP] = ACTIONS(519),
    [anon_sym_GT_AMP] = ACTIONS(519),
    [anon_sym_LT_LT] = ACTIONS(519),
    [anon_sym_LT_LT_DASH] = ACTIONS(519),
    [sym_leading_word] = ACTIONS(519),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(519),
    [anon_sym_LF] = ACTIONS(519),
  },
  [411] = {
    [sym_quoted_argument] = STATE(420),
    [sym_expansion] = STATE(420),
    [sym_operator_expansion] = STATE(420),
    [sym_command_substitution] = STATE(420),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [sym_single_quoted_argument] = ACTIONS(1322),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [sym_word] = ACTIONS(1324),
    [sym_comment] = ACTIONS(71),
  },
  [412] = {
    [sym_file_descriptor] = ACTIONS(591),
    [anon_sym_RPAREN] = ACTIONS(537),
    [anon_sym_SEMI_SEMI] = ACTIONS(537),
    [anon_sym_PIPE] = ACTIONS(537),
    [anon_sym_PIPE_AMP] = ACTIONS(537),
    [anon_sym_AMP_AMP] = ACTIONS(537),
    [anon_sym_PIPE_PIPE] = ACTIONS(537),
    [anon_sym_LT] = ACTIONS(537),
    [anon_sym_GT] = ACTIONS(537),
    [anon_sym_GT_GT] = ACTIONS(537),
    [anon_sym_AMP_GT] = ACTIONS(537),
    [anon_sym_AMP_GT_GT] = ACTIONS(537),
    [anon_sym_LT_AMP] = ACTIONS(537),
    [anon_sym_GT_AMP] = ACTIONS(537),
    [anon_sym_LT_LT] = ACTIONS(537),
    [anon_sym_LT_LT_DASH] = ACTIONS(537),
    [sym_leading_word] = ACTIONS(537),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(537),
    [anon_sym_LF] = ACTIONS(537),
  },
  [413] = {
    [sym_file_descriptor] = ACTIONS(595),
    [anon_sym_RPAREN] = ACTIONS(575),
    [anon_sym_SEMI_SEMI] = ACTIONS(575),
    [anon_sym_PIPE] = ACTIONS(575),
    [anon_sym_PIPE_AMP] = ACTIONS(575),
    [anon_sym_AMP_AMP] = ACTIONS(575),
    [anon_sym_PIPE_PIPE] = ACTIONS(575),
    [anon_sym_LT] = ACTIONS(575),
    [anon_sym_GT] = ACTIONS(575),
    [anon_sym_GT_GT] = ACTIONS(575),
    [anon_sym_AMP_GT] = ACTIONS(575),
    [anon_sym_AMP_GT_GT] = ACTIONS(575),
    [anon_sym_LT_AMP] = ACTIONS(575),
    [anon_sym_GT_AMP] = ACTIONS(575),
    [anon_sym_LT_LT] = ACTIONS(575),
    [anon_sym_LT_LT_DASH] = ACTIONS(575),
    [sym_leading_word] = ACTIONS(575),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(575),
    [anon_sym_LF] = ACTIONS(575),
  },
  [414] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1326),
    [anon_sym_PIPE] = ACTIONS(1326),
    [anon_sym_PIPE_AMP] = ACTIONS(1326),
    [anon_sym_AMP_AMP] = ACTIONS(1326),
    [anon_sym_PIPE_PIPE] = ACTIONS(1326),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1326),
    [anon_sym_LF] = ACTIONS(1326),
  },
  [415] = {
    [sym_case_item] = STATE(253),
    [sym_quoted_argument] = STATE(197),
    [sym_expansion] = STATE(197),
    [sym_operator_expansion] = STATE(197),
    [sym_command_substitution] = STATE(197),
    [anon_sym_esac] = ACTIONS(1329),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [sym_single_quoted_argument] = ACTIONS(527),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [sym_word] = ACTIONS(529),
    [sym_comment] = ACTIONS(71),
  },
  [416] = {
    [sym_file_descriptor] = ACTIONS(583),
    [anon_sym_RPAREN] = ACTIONS(519),
    [anon_sym_SEMI_SEMI] = ACTIONS(519),
    [anon_sym_RBRACK] = ACTIONS(519),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(519),
    [anon_sym_PIPE] = ACTIONS(519),
    [anon_sym_PIPE_AMP] = ACTIONS(519),
    [anon_sym_AMP_AMP] = ACTIONS(519),
    [anon_sym_PIPE_PIPE] = ACTIONS(519),
    [anon_sym_DQUOTE] = ACTIONS(519),
    [sym_single_quoted_argument] = ACTIONS(519),
    [anon_sym_DOLLAR] = ACTIONS(519),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(519),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(519),
    [anon_sym_LT] = ACTIONS(519),
    [anon_sym_GT] = ACTIONS(519),
    [anon_sym_GT_GT] = ACTIONS(519),
    [anon_sym_AMP_GT] = ACTIONS(519),
    [anon_sym_AMP_GT_GT] = ACTIONS(519),
    [anon_sym_LT_AMP] = ACTIONS(519),
    [anon_sym_GT_AMP] = ACTIONS(519),
    [anon_sym_LT_LT] = ACTIONS(519),
    [anon_sym_LT_LT_DASH] = ACTIONS(519),
    [sym_word] = ACTIONS(519),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(519),
    [anon_sym_LF] = ACTIONS(519),
  },
  [417] = {
    [sym_quoted_argument] = STATE(423),
    [sym_expansion] = STATE(423),
    [sym_operator_expansion] = STATE(423),
    [sym_command_substitution] = STATE(423),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [sym_single_quoted_argument] = ACTIONS(1331),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [sym_word] = ACTIONS(1333),
    [sym_comment] = ACTIONS(71),
  },
  [418] = {
    [sym_file_descriptor] = ACTIONS(591),
    [anon_sym_RPAREN] = ACTIONS(537),
    [anon_sym_SEMI_SEMI] = ACTIONS(537),
    [anon_sym_RBRACK] = ACTIONS(537),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(537),
    [anon_sym_PIPE] = ACTIONS(537),
    [anon_sym_PIPE_AMP] = ACTIONS(537),
    [anon_sym_AMP_AMP] = ACTIONS(537),
    [anon_sym_PIPE_PIPE] = ACTIONS(537),
    [anon_sym_DQUOTE] = ACTIONS(537),
    [sym_single_quoted_argument] = ACTIONS(537),
    [anon_sym_DOLLAR] = ACTIONS(537),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(537),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(537),
    [anon_sym_LT] = ACTIONS(537),
    [anon_sym_GT] = ACTIONS(537),
    [anon_sym_GT_GT] = ACTIONS(537),
    [anon_sym_AMP_GT] = ACTIONS(537),
    [anon_sym_AMP_GT_GT] = ACTIONS(537),
    [anon_sym_LT_AMP] = ACTIONS(537),
    [anon_sym_GT_AMP] = ACTIONS(537),
    [anon_sym_LT_LT] = ACTIONS(537),
    [anon_sym_LT_LT_DASH] = ACTIONS(537),
    [sym_word] = ACTIONS(537),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(537),
    [anon_sym_LF] = ACTIONS(537),
  },
  [419] = {
    [sym_file_descriptor] = ACTIONS(595),
    [anon_sym_RPAREN] = ACTIONS(575),
    [anon_sym_SEMI_SEMI] = ACTIONS(575),
    [anon_sym_RBRACK] = ACTIONS(575),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(575),
    [anon_sym_PIPE] = ACTIONS(575),
    [anon_sym_PIPE_AMP] = ACTIONS(575),
    [anon_sym_AMP_AMP] = ACTIONS(575),
    [anon_sym_PIPE_PIPE] = ACTIONS(575),
    [anon_sym_DQUOTE] = ACTIONS(575),
    [sym_single_quoted_argument] = ACTIONS(575),
    [anon_sym_DOLLAR] = ACTIONS(575),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(575),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(575),
    [anon_sym_LT] = ACTIONS(575),
    [anon_sym_GT] = ACTIONS(575),
    [anon_sym_GT_GT] = ACTIONS(575),
    [anon_sym_AMP_GT] = ACTIONS(575),
    [anon_sym_AMP_GT_GT] = ACTIONS(575),
    [anon_sym_LT_AMP] = ACTIONS(575),
    [anon_sym_GT_AMP] = ACTIONS(575),
    [anon_sym_LT_LT] = ACTIONS(575),
    [anon_sym_LT_LT_DASH] = ACTIONS(575),
    [sym_word] = ACTIONS(575),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(575),
    [anon_sym_LF] = ACTIONS(575),
  },
  [420] = {
    [anon_sym_RBRACE] = ACTIONS(1335),
    [sym_comment] = ACTIONS(71),
  },
  [421] = {
    [anon_sym_RBRACE] = ACTIONS(1337),
    [sym_comment] = ACTIONS(71),
  },
  [422] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1339),
    [anon_sym_PIPE] = ACTIONS(1339),
    [anon_sym_PIPE_AMP] = ACTIONS(1339),
    [anon_sym_AMP_AMP] = ACTIONS(1339),
    [anon_sym_PIPE_PIPE] = ACTIONS(1339),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1339),
    [anon_sym_LF] = ACTIONS(1339),
  },
  [423] = {
    [anon_sym_RBRACE] = ACTIONS(1342),
    [sym_comment] = ACTIONS(71),
  },
  [424] = {
    [anon_sym_RBRACE] = ACTIONS(1344),
    [sym_comment] = ACTIONS(71),
  },
  [425] = {
    [sym_file_descriptor] = ACTIONS(819),
    [anon_sym_RPAREN] = ACTIONS(793),
    [anon_sym_SEMI_SEMI] = ACTIONS(793),
    [anon_sym_PIPE] = ACTIONS(793),
    [anon_sym_PIPE_AMP] = ACTIONS(793),
    [anon_sym_AMP_AMP] = ACTIONS(793),
    [anon_sym_PIPE_PIPE] = ACTIONS(793),
    [anon_sym_LT] = ACTIONS(793),
    [anon_sym_GT] = ACTIONS(793),
    [anon_sym_GT_GT] = ACTIONS(793),
    [anon_sym_AMP_GT] = ACTIONS(793),
    [anon_sym_AMP_GT_GT] = ACTIONS(793),
    [anon_sym_LT_AMP] = ACTIONS(793),
    [anon_sym_GT_AMP] = ACTIONS(793),
    [anon_sym_LT_LT] = ACTIONS(793),
    [anon_sym_LT_LT_DASH] = ACTIONS(793),
    [sym_leading_word] = ACTIONS(793),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(793),
    [anon_sym_LF] = ACTIONS(793),
  },
  [426] = {
    [sym_file_descriptor] = ACTIONS(823),
    [anon_sym_RPAREN] = ACTIONS(795),
    [anon_sym_SEMI_SEMI] = ACTIONS(795),
    [anon_sym_PIPE] = ACTIONS(795),
    [anon_sym_PIPE_AMP] = ACTIONS(795),
    [anon_sym_AMP_AMP] = ACTIONS(795),
    [anon_sym_PIPE_PIPE] = ACTIONS(795),
    [anon_sym_LT] = ACTIONS(795),
    [anon_sym_GT] = ACTIONS(795),
    [anon_sym_GT_GT] = ACTIONS(795),
    [anon_sym_AMP_GT] = ACTIONS(795),
    [anon_sym_AMP_GT_GT] = ACTIONS(795),
    [anon_sym_LT_AMP] = ACTIONS(795),
    [anon_sym_GT_AMP] = ACTIONS(795),
    [anon_sym_LT_LT] = ACTIONS(795),
    [anon_sym_LT_LT_DASH] = ACTIONS(795),
    [sym_leading_word] = ACTIONS(795),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(795),
    [anon_sym_LF] = ACTIONS(795),
  },
  [427] = {
    [sym_file_descriptor] = ACTIONS(819),
    [anon_sym_RPAREN] = ACTIONS(793),
    [anon_sym_SEMI_SEMI] = ACTIONS(793),
    [anon_sym_RBRACK] = ACTIONS(793),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(793),
    [anon_sym_PIPE] = ACTIONS(793),
    [anon_sym_PIPE_AMP] = ACTIONS(793),
    [anon_sym_AMP_AMP] = ACTIONS(793),
    [anon_sym_PIPE_PIPE] = ACTIONS(793),
    [anon_sym_DQUOTE] = ACTIONS(793),
    [sym_single_quoted_argument] = ACTIONS(793),
    [anon_sym_DOLLAR] = ACTIONS(793),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(793),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(793),
    [anon_sym_LT] = ACTIONS(793),
    [anon_sym_GT] = ACTIONS(793),
    [anon_sym_GT_GT] = ACTIONS(793),
    [anon_sym_AMP_GT] = ACTIONS(793),
    [anon_sym_AMP_GT_GT] = ACTIONS(793),
    [anon_sym_LT_AMP] = ACTIONS(793),
    [anon_sym_GT_AMP] = ACTIONS(793),
    [anon_sym_LT_LT] = ACTIONS(793),
    [anon_sym_LT_LT_DASH] = ACTIONS(793),
    [sym_word] = ACTIONS(793),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(793),
    [anon_sym_LF] = ACTIONS(793),
  },
  [428] = {
    [sym_file_descriptor] = ACTIONS(823),
    [anon_sym_RPAREN] = ACTIONS(795),
    [anon_sym_SEMI_SEMI] = ACTIONS(795),
    [anon_sym_RBRACK] = ACTIONS(795),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(795),
    [anon_sym_PIPE] = ACTIONS(795),
    [anon_sym_PIPE_AMP] = ACTIONS(795),
    [anon_sym_AMP_AMP] = ACTIONS(795),
    [anon_sym_PIPE_PIPE] = ACTIONS(795),
    [anon_sym_DQUOTE] = ACTIONS(795),
    [sym_single_quoted_argument] = ACTIONS(795),
    [anon_sym_DOLLAR] = ACTIONS(795),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(795),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(795),
    [anon_sym_LT] = ACTIONS(795),
    [anon_sym_GT] = ACTIONS(795),
    [anon_sym_GT_GT] = ACTIONS(795),
    [anon_sym_AMP_GT] = ACTIONS(795),
    [anon_sym_AMP_GT_GT] = ACTIONS(795),
    [anon_sym_LT_AMP] = ACTIONS(795),
    [anon_sym_GT_AMP] = ACTIONS(795),
    [anon_sym_LT_LT] = ACTIONS(795),
    [anon_sym_LT_LT_DASH] = ACTIONS(795),
    [sym_word] = ACTIONS(795),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(795),
    [anon_sym_LF] = ACTIONS(795),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(110),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(111),
  [5] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(337),
  [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(338),
  [9] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(339),
  [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
  [13] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(3),
  [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(57),
  [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(322),
  [19] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(4),
  [21] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(323),
  [23] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(324),
  [25] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(124),
  [27] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(125),
  [29] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(5),
  [31] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(325),
  [33] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(326),
  [35] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(327),
  [37] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(6),
  [39] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(81),
  [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(81),
  [43] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(50),
  [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(51),
  [47] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(328),
  [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(329),
  [51] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(330),
  [53] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(331),
  [55] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(332),
  [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(332),
  [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(333),
  [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(334),
  [63] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(335),
  [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(335),
  [67] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(46),
  [69] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(46),
  [71] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(336),
  [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
  [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 0),
  [79] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
  [81] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
  [83] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
  [85] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
  [87] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
  [89] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
  [91] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(9),
  [93] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(17),
  [95] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(17),
  [97] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(22),
  [99] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(23),
  [101] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(24),
  [103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(25),
  [105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(26),
  [107] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(27),
  [109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(28),
  [111] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(29),
  [113] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(30),
  [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
  [117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(32),
  [119] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(33),
  [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
  [123] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(37),
  [125] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(38),
  [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
  [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
  [131] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(41),
  [133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
  [135] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 1, .rename_sequence_id = 1),
  [137] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [139] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(44),
  [141] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(45),
  [143] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(46),
  [145] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [153] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [155] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(49),
  [157] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(50),
  [159] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(51),
  [161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1),
  [163] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1),
  [165] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_command_repeat1, 1),
  [167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [169] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(53),
  [171] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(55),
  [173] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(56),
  [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
  [177] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(59),
  [179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(60),
  [181] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(61),
  [183] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(62),
  [185] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(63),
  [187] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(64),
  [189] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(65),
  [191] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(67),
  [193] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(68),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(69),
  [197] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(70),
  [199] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(71),
  [201] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(74),
  [203] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(75),
  [205] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(76),
  [207] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_bracket_command_repeat1, 1),
  [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1),
  [211] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1),
  [213] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(78),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(79),
  [217] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_bracket_command_repeat1, 1, .rename_sequence_id = 2),
  [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1, .rename_sequence_id = 2),
  [221] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1, .rename_sequence_id = 2),
  [223] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(81),
  [225] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(82),
  [227] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(83),
  [229] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(84),
  [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2),
  [233] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 2),
  [235] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2),
  [237] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(86),
  [239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(87),
  [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 3),
  [243] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 3),
  [245] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 3),
  [247] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(89),
  [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(89),
  [251] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2, .rename_sequence_id = 4),
  [253] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(90),
  [255] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(91),
  [257] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(92),
  [259] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(93),
  [261] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(94),
  [263] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(95),
  [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(99),
  [269] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(100),
  [271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
  [275] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(103),
  [277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
  [279] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(105),
  [281] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(106),
  [283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(107),
  [285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(108),
  [287] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(109),
  [289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(110),
  [291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(111),
  [293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 1),
  [295] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 1),
  [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__terminated_statement, 2),
  [299] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__terminated_statement, 2),
  [301] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__terminated_statement, 2),
  [303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [305] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [307] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [309] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2, .rename_sequence_id = 5),
  [311] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(118),
  [313] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(119),
  [315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 2),
  [317] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_command_repeat1, 2),
  [319] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 2),
  [321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 3),
  [323] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 3),
  [325] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 3),
  [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 3, .rename_sequence_id = 6),
  [329] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 3, .rename_sequence_id = 6),
  [331] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 3, .rename_sequence_id = 6),
  [333] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(121),
  [335] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 3),
  [337] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(123),
  [339] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(124),
  [341] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(125),
  [343] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2),
  [345] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_quoted_argument_repeat1, 1),
  [347] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_quoted_argument_repeat1, 1),
  [349] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(130),
  [351] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(131),
  [353] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(133),
  [355] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(134),
  [357] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(135),
  [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(136),
  [361] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expansion, 2, .rename_sequence_id = 7),
  [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(137),
  [365] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(137),
  [367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(138),
  [369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(139),
  [371] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(140),
  [373] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(141),
  [375] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(142),
  [377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(145),
  [379] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(146),
  [381] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(147),
  [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(148),
  [385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2),
  [387] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_quoted_argument, 2),
  [389] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(149),
  [391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expansion, 2, .rename_sequence_id = 7),
  [393] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expansion, 2, .rename_sequence_id = 7),
  [395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(150),
  [397] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(150),
  [399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(151),
  [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(152),
  [403] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_bracket_command, 3),
  [405] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_bracket_command_repeat1, 2),
  [407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 2),
  [409] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 2),
  [411] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_bracket_command_repeat1, 2, .rename_sequence_id = 3),
  [413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 2, .rename_sequence_id = 3),
  [415] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 2, .rename_sequence_id = 3),
  [417] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(153),
  [419] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(154),
  [421] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(154),
  [423] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(155),
  [425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(156),
  [427] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(157),
  [429] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(158),
  [431] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(159),
  [433] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(161),
  [435] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(162),
  [437] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .rename_sequence_id = 8),
  [439] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(164),
  [441] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(165),
  [443] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(167),
  [445] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9),
  [447] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9),
  [449] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(169),
  [451] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(170),
  [453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 10),
  [455] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 10),
  [457] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(172),
  [459] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(174),
  [461] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(175),
  [463] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 1),
  [465] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 1),
  [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(177),
  [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(178),
  [471] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(179),
  [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(180),
  [475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_heredoc_redirect, 2),
  [477] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc_redirect, 2),
  [479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 2),
  [481] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 2),
  [483] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3, .fragile = true),
  [485] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list, 3, .fragile = true),
  [487] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .rename_sequence_id = 11),
  [489] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(184),
  [491] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(185),
  [493] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_group, 2),
  [495] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(186),
  [497] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
  [499] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 1),
  [501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
  [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(189),
  [505] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(189),
  [507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
  [509] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(125),
  [511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(193),
  [513] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(193),
  [515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(194),
  [517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(195),
  [519] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 3),
  [521] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_quoted_argument_repeat1, 2),
  [523] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_quoted_argument_repeat1, 2),
  [525] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(196),
  [527] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(197),
  [529] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(198),
  [531] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(201),
  [533] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(202),
  [535] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(203),
  [537] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 12),
  [539] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(204),
  [541] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(204),
  [543] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 2, .rename_sequence_id = 4),
  [545] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(205),
  [547] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(206),
  [549] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(207),
  [551] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(208),
  [553] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(209),
  [555] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(141),
  [557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(141),
  [559] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(142),
  [561] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(142),
  [563] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(210),
  [565] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(213),
  [567] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(214),
  [569] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(215),
  [571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(216),
  [573] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_command_repeat2, 1),
  [575] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3),
  [577] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(219),
  [579] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(221),
  [581] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(223),
  [583] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 3),
  [585] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_quoted_argument, 3),
  [587] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(224),
  [589] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(225),
  [591] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 12),
  [593] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 12),
  [595] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3),
  [597] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_command_substitution, 3),
  [599] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(226),
  [601] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(227),
  [603] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(228),
  [605] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(229),
  [607] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(229),
  [609] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(230),
  [611] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(231),
  [613] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 4, .rename_sequence_id = 13),
  [615] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(232),
  [617] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(233),
  [619] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(233),
  [621] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(234),
  [623] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(235),
  [625] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(236),
  [627] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(237),
  [629] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(237),
  [631] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(238),
  [633] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(239),
  [635] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_heredoc_repeat1, 1),
  [637] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_heredoc_repeat1, 1),
  [639] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 2),
  [641] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 2),
  [643] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(240),
  [645] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(241),
  [647] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(242),
  [649] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(243),
  [651] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 4, .rename_sequence_id = 14),
  [653] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9),
  [655] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 10),
  [657] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_group, 3),
  [659] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(245),
  [661] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 2),
  [663] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
  [665] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(246),
  [667] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [669] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(248),
  [671] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(249),
  [673] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 5),
  [675] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(250),
  [677] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(251),
  [679] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_case_statement_repeat1, 1),
  [681] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_case_statement_repeat1, 1),
  [683] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_case_statement_repeat1, 1),
  [685] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(252),
  [687] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(255),
  [689] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(256),
  [691] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(257),
  [693] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(258),
  [695] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(259),
  [697] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(261),
  [699] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(262),
  [701] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .rename_sequence_id = 8),
  [703] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(264),
  [705] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(265),
  [707] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_heredoc, 1),
  [709] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(267),
  [711] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_heredoc_redirect, 2),
  [713] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_command_repeat2, 2),
  [715] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .rename_sequence_id = 11),
  [717] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 5, .rename_sequence_id = 15),
  [719] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(271),
  [721] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(273),
  [723] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(274),
  [725] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(275),
  [727] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(276),
  [729] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(277),
  [731] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(278),
  [733] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(279),
  [735] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(280),
  [737] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(281),
  [739] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(282),
  [741] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(283),
  [743] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(283),
  [745] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(284),
  [747] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_heredoc_repeat1, 2),
  [749] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_heredoc_repeat1, 2),
  [751] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 3),
  [753] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 3),
  [755] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 5, .rename_sequence_id = 16),
  [757] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 3),
  [759] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
  [761] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(286),
  [763] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(287),
  [765] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(288),
  [767] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 2),
  [769] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(289),
  [771] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_case_item, 2),
  [773] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 2),
  [775] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 2, .rename_sequence_id = 17),
  [777] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(294),
  [779] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_case_item, 2, .rename_sequence_id = 17),
  [781] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 2, .rename_sequence_id = 17),
  [783] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 6),
  [785] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_case_statement_repeat1, 2),
  [787] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_case_statement_repeat1, 2),
  [789] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_case_statement_repeat1, 2),
  [791] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(296),
  [793] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 18),
  [795] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 19),
  [797] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(297),
  [799] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(298),
  [801] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(298),
  [803] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(299),
  [805] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(300),
  [807] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 4, .rename_sequence_id = 13),
  [809] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_heredoc, 2),
  [811] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(301),
  [813] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 4, .rename_sequence_id = 14),
  [815] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 6, .rename_sequence_id = 20),
  [817] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(303),
  [819] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 18),
  [821] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 18),
  [823] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 19),
  [825] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 19),
  [827] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(304),
  [829] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(305),
  [831] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(306),
  [833] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(307),
  [835] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(308),
  [837] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(309),
  [839] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(310),
  [841] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(311),
  [843] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4),
  [845] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 7),
  [847] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 3),
  [849] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_case_item, 3),
  [851] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 3),
  [853] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(312),
  [855] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(313),
  [857] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 3, .rename_sequence_id = 21),
  [859] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_case_item, 3, .rename_sequence_id = 21),
  [861] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 3, .rename_sequence_id = 21),
  [863] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(315),
  [865] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 7),
  [867] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(316),
  [869] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(317),
  [871] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_heredoc, 3),
  [873] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 5, .rename_sequence_id = 16),
  [875] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 7, .rename_sequence_id = 22),
  [877] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(318),
  [879] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(319),
  [881] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 4),
  [883] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_case_item, 4),
  [885] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 4),
  [887] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 4, .rename_sequence_id = 23),
  [889] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_case_item, 4, .rename_sequence_id = 23),
  [891] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 4, .rename_sequence_id = 23),
  [893] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(320),
  [895] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(321),
  [897] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_group, 2), REDUCE(sym_do_group, 3),
  [900] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 3), SHIFT(123),
  [903] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 3), SHIFT(124),
  [906] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 3), SHIFT(125),
  [909] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_if_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_if_statement, 7),
  [914] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(359),
  [916] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 5), REDUCE(sym_case_statement, 5, .rename_sequence_id = 15), REDUCE(sym_case_statement, 6), REDUCE(sym_case_statement, 6, .rename_sequence_id = 20), REDUCE(sym_case_statement, 7), REDUCE(sym_case_statement, 7, .rename_sequence_id = 22),
  [923] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3), SHIFT(2),
  [926] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 2), REDUCE(sym_case_item, 2, .rename_sequence_id = 17),
  [929] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3), SHIFT(360),
  [932] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 2), REDUCE(sym_case_item, 2, .rename_sequence_id = 17), REDUCE(sym_command_substitution, 3),
  [936] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3), SHIFT(8),
  [939] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3), SHIFT(9),
  [942] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(362),
  [944] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(363),
  [946] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2), REDUCE(sym_quoted_argument, 3),
  [949] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2), REDUCE(sym_quoted_argument, 3),
  [952] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2), REDUCE(sym_quoted_argument, 3), SHIFT(364),
  [956] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(62),
  [958] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2), REDUCE(sym_quoted_argument, 3), SHIFT(63),
  [962] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2), REDUCE(sym_quoted_argument, 3), SHIFT(64),
  [966] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2), REDUCE(sym_quoted_argument, 3), SHIFT(65),
  [970] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(365),
  [972] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(366),
  [974] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(367),
  [976] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(368),
  [978] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 12), REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 18), REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 19),
  [982] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 12), REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 18), REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 19),
  [986] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(370),
  [988] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(371),
  [990] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(372),
  [992] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(373),
  [994] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(374),
  [996] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(375),
  [998] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(376),
  [1000] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__terminated_statement, 2), SHIFT(377),
  [1003] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__terminated_statement, 2), SHIFT(28),
  [1006] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__terminated_statement, 2), SHIFT(197),
  [1009] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__terminated_statement, 2), SHIFT(30),
  [1012] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__terminated_statement, 2), SHIFT(31),
  [1015] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__terminated_statement, 2), SHIFT(32),
  [1018] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__terminated_statement, 2), SHIFT(198),
  [1021] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_heredoc_repeat1, 1), REDUCE(aux_sym_heredoc_repeat1, 2),
  [1024] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_heredoc_repeat1, 1), REDUCE(aux_sym_heredoc_repeat1, 2),
  [1027] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 2), REDUCE(sym_heredoc, 3),
  [1030] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 2), REDUCE(sym_heredoc, 3),
  [1033] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(378),
  [1035] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(378),
  [1037] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [1040] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [1043] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(57),
  [1045] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(323),
  [1047] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [1050] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3, .fragile = true), REDUCE(sym_list, 3, .fragile = true), SHIFT(312),
  [1054] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3, .fragile = true), REDUCE(sym_list, 3, .fragile = true), SHIFT(50),
  [1058] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3, .fragile = true), REDUCE(sym_list, 3, .fragile = true), SHIFT(51),
  [1062] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
  [1065] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(379),
  [1067] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_case_statement_repeat1, 1), REDUCE(aux_sym_case_statement_repeat1, 2),
  [1070] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_case_statement_repeat1, 1), REDUCE(aux_sym_case_statement_repeat1, 2),
  [1073] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_case_statement_repeat1, 1), REDUCE(aux_sym_case_statement_repeat1, 2),
  [1076] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(380),
  [1078] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3), REDUCE(sym_list, 3), SHIFT(312),
  [1082] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3), REDUCE(sym_list, 3), SHIFT(50),
  [1086] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3), REDUCE(sym_list, 3), SHIFT(51),
  [1090] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1), REDUCE(aux_sym_command_repeat1, 2),
  [1093] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1), REDUCE(aux_sym_command_repeat1, 2),
  [1096] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9), REDUCE(sym_file_redirect, 3),
  [1102] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_file_redirect, 3), SHIFT(250),
  [1108] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9), REDUCE(sym_file_redirect, 3), SHIFT(68),
  [1115] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(aux_sym_bracket_command_repeat1, 2),
  [1118] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9), REDUCE(sym_file_redirect, 3),
  [1124] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(381),
  [1126] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_file_redirect, 3),
  [1131] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9), REDUCE(sym_file_redirect, 3),
  [1135] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(aux_sym_quoted_argument_repeat1, 1), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(aux_sym_quoted_argument_repeat1, 2),
  [1140] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_quoted_argument_repeat1, 1), REDUCE(aux_sym_quoted_argument_repeat1, 2),
  [1143] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(aux_sym_quoted_argument_repeat1, 1), REDUCE(aux_sym_heredoc_repeat1, 1), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(aux_sym_quoted_argument_repeat1, 2), REDUCE(aux_sym_heredoc_repeat1, 2),
  [1150] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1), REDUCE(aux_sym_command_repeat2, 1), REDUCE(aux_sym_command_repeat1, 2), REDUCE(aux_sym_command_repeat2, 2),
  [1155] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 1), REDUCE(aux_sym_command_repeat2, 2),
  [1158] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1), REDUCE(aux_sym_command_repeat2, 1), REDUCE(aux_sym_command_repeat1, 2), REDUCE(aux_sym_command_repeat2, 2),
  [1163] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 1), REDUCE(aux_sym_command_repeat2, 2),
  [1166] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 2), REDUCE(sym_elif_clause, 4), SHIFT(189),
  [1170] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(124),
  [1173] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(125),
  [1176] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 3), REDUCE(sym_case_item, 3, .rename_sequence_id = 21),
  [1179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(382),
  [1181] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_case_item, 3), REDUCE(sym_case_item, 3, .rename_sequence_id = 21),
  [1184] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 3), REDUCE(sym_case_item, 3, .rename_sequence_id = 21),
  [1187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(383),
  [1189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(385),
  [1191] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .rename_sequence_id = 8), REDUCE(sym_command, 4, .rename_sequence_id = 14),
  [1194] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(81),
  [1196] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(386),
  [1198] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(387),
  [1200] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(388),
  [1202] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(389),
  [1204] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(390),
  [1206] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(391),
  [1208] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2, .rename_sequence_id = 4), REDUCE(sym_command, 3, .rename_sequence_id = 11), REDUCE(sym_command, 3, .rename_sequence_id = 8), REDUCE(sym_command, 4, .rename_sequence_id = 14), REDUCE(sym_command, 4, .rename_sequence_id = 13), REDUCE(sym_command, 5, .rename_sequence_id = 16),
  [1215] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(393),
  [1217] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(189),
  [1220] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(377),
  [1222] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(394),
  [1224] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(332),
  [1226] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(332),
  [1228] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(395),
  [1230] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(381),
  [1232] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(394),
  [1234] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(380),
  [1236] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(396),
  [1238] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2), REDUCE(sym_file_redirect, 3),
  [1241] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2), REDUCE(sym_file_redirect, 3),
  [1244] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(398),
  [1246] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(399),
  [1248] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 3), REDUCE(sym_file_redirect, 3, .rename_sequence_id = 6),
  [1251] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 3), REDUCE(sym_file_redirect, 3, .rename_sequence_id = 6),
  [1254] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(401),
  [1256] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 5), REDUCE(sym_case_statement, 5, .rename_sequence_id = 15), REDUCE(sym_case_statement, 6), REDUCE(sym_case_statement, 6, .rename_sequence_id = 20),
  [1261] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(402),
  [1263] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(403),
  [1265] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_if_statement, 7),
  [1269] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 4), REDUCE(sym_case_item, 4, .rename_sequence_id = 23),
  [1272] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_case_item, 4), REDUCE(sym_case_item, 4, .rename_sequence_id = 23),
  [1275] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 4), REDUCE(sym_case_item, 4, .rename_sequence_id = 23),
  [1278] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_if_statement, 6),
  [1281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(404),
  [1283] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 6), REDUCE(sym_case_statement, 6, .rename_sequence_id = 20), REDUCE(sym_case_statement, 7), REDUCE(sym_case_statement, 7, .rename_sequence_id = 22),
  [1288] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(405),
  [1290] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(407),
  [1292] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(408),
  [1294] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 4, .rename_sequence_id = 13), REDUCE(sym_command, 5, .rename_sequence_id = 16),
  [1297] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(410),
  [1299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(411),
  [1301] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(411),
  [1303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(412),
  [1305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(413),
  [1307] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(414),
  [1309] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6), REDUCE(sym_if_statement, 7),
  [1312] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(416),
  [1314] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(417),
  [1316] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(417),
  [1318] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(418),
  [1320] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(419),
  [1322] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(420),
  [1324] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(421),
  [1326] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 6), REDUCE(sym_case_statement, 6, .rename_sequence_id = 20),
  [1329] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(422),
  [1331] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(423),
  [1333] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(424),
  [1335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(425),
  [1337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(426),
  [1339] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 7), REDUCE(sym_case_statement, 7, .rename_sequence_id = 22),
  [1342] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(427),
  [1344] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(428),
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
