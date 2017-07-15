#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define LANGUAGE_VERSION 3
#define STATE_COUNT 541
#define SYMBOL_COUNT 85
#define TOKEN_COUNT 55
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
  anon_sym_COLON = 23,
  aux_sym_SLASH_BSLASHs_PLUS_SLASH = 24,
  anon_sym_PIPE = 25,
  anon_sym_PIPE_AMP = 26,
  anon_sym_AMP_AMP = 27,
  anon_sym_PIPE_PIPE = 28,
  anon_sym_LPAREN = 29,
  anon_sym_EQ = 30,
  anon_sym_DQUOTE = 31,
  sym__quoted_chars = 32,
  sym_single_quoted_argument = 33,
  anon_sym_DOLLAR = 34,
  anon_sym_DOLLAR_LBRACE = 35,
  anon_sym_COLON_QMARK = 36,
  anon_sym_COLON_DASH = 37,
  anon_sym_RBRACE = 38,
  anon_sym_DOLLAR_LPAREN = 39,
  anon_sym_LT = 40,
  anon_sym_GT = 41,
  anon_sym_GT_GT = 42,
  anon_sym_AMP_GT = 43,
  anon_sym_AMP_GT_GT = 44,
  anon_sym_LT_AMP = 45,
  anon_sym_GT_AMP = 46,
  anon_sym_LT_LT = 47,
  anon_sym_LT_LT_DASH = 48,
  sym_leading_word = 49,
  sym_word = 50,
  sym_comment = 51,
  anon_sym_SEMI = 52,
  anon_sym_LF = 53,
  anon_sym_AMP = 54,
  sym_program = 55,
  sym__terminated_statement = 56,
  sym_while_statement = 57,
  sym_do_group = 58,
  sym_if_statement = 59,
  sym_elif_clause = 60,
  sym_else_clause = 61,
  sym_case_statement = 62,
  sym_case_item = 63,
  sym_bracket_command = 64,
  sym_command = 65,
  sym_pipeline = 66,
  sym_list = 67,
  sym_subshell = 68,
  sym_environment_variable_assignment = 69,
  sym_quoted_argument = 70,
  sym_expansion = 71,
  sym_operator_expansion = 72,
  sym_command_substitution = 73,
  sym_file_redirect = 74,
  sym_heredoc_redirect = 75,
  sym_heredoc = 76,
  aux_sym_program_repeat1 = 77,
  aux_sym_if_statement_repeat1 = 78,
  aux_sym_case_statement_repeat1 = 79,
  aux_sym_bracket_command_repeat1 = 80,
  aux_sym_command_repeat1 = 81,
  aux_sym_command_repeat2 = 82,
  aux_sym_quoted_argument_repeat1 = 83,
  aux_sym_heredoc_repeat1 = 84,
  rename_sym_1 = 85,
  rename_sym_argument = 86,
  rename_sym_command_name = 87,
  rename_sym_variable_name = 88,
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
  [anon_sym_COLON] = ":",
  [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = "/\\s+/",
  [anon_sym_PIPE] = "|",
  [anon_sym_PIPE_AMP] = "|&",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_LPAREN] = "(",
  [anon_sym_EQ] = "=",
  [anon_sym_DQUOTE] = "\"",
  [sym__quoted_chars] = "_quoted_chars",
  [sym_single_quoted_argument] = "single_quoted_argument",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_COLON_QMARK] = ":?",
  [anon_sym_COLON_DASH] = ":-",
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
  [anon_sym_AMP] = "&",
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
  [sym_subshell] = "subshell",
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
  [anon_sym_COLON] = {
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
  [anon_sym_LPAREN] = {
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
  [anon_sym_COLON_QMARK] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_COLON_DASH] = {
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
  [anon_sym_AMP] = {
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
  [sym_subshell] = {
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

static TSSymbol ts_rename_sequences[23][MAX_RENAME_SEQUENCE_LENGTH] = {
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
    [1] = rename_sym_variable_name,
  },
  [18] = {
    [1] = rename_sym_variable_name,
    [3] = rename_sym_argument,
  },
  [19] = {
    [1] = rename_sym_argument,
  },
  [20] = {
    [0] = rename_sym_argument,
  },
  [21] = {
    [1] = rename_sym_argument,
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
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == ';')
        ADVANCE(9);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '[')
        ADVANCE(18);
      if (lookahead == '\\')
        SKIP(19);
      if (lookahead == ']')
        ADVANCE(20);
      if (lookahead == 'c')
        ADVANCE(22);
      if (lookahead == 'd')
        ADVANCE(26);
      if (lookahead == 'e')
        ADVANCE(30);
      if (lookahead == 'f')
        ADVANCE(39);
      if (lookahead == 'i')
        ADVANCE(41);
      if (lookahead == 't')
        ADVANCE(44);
      if (lookahead == 'w')
        ADVANCE(48);
      if (lookahead == '|')
        ADVANCE(53);
      if (lookahead == '}')
        ADVANCE(55);
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
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_SEMI);
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
      if (lookahead == '>')
        ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_GT_AMP);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 19:
      if (lookahead == '\n')
        SKIP(0);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']')
        ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 22:
      if (lookahead == 'a')
        ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 's')
        ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'e')
        ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 26:
      if (lookahead == 'o')
        ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == 'n')
        ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'e')
        ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_done);
      END_STATE();
    case 30:
      if (lookahead == 'l')
        ADVANCE(31);
      if (lookahead == 's')
        ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == 'i')
        ADVANCE(32);
      if (lookahead == 's')
        ADVANCE(34);
      END_STATE();
    case 32:
      if (lookahead == 'f')
        ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 34:
      if (lookahead == 'e')
        ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 36:
      if (lookahead == 'a')
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'c')
        ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_esac);
      END_STATE();
    case 39:
      if (lookahead == 'i')
        ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_fi);
      END_STATE();
    case 41:
      if (lookahead == 'f')
        ADVANCE(42);
      if (lookahead == 'n')
        ADVANCE(43);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 44:
      if (lookahead == 'h')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'e')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'n')
        ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 48:
      if (lookahead == 'h')
        ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 'i')
        ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'l')
        ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'e')
        ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|')
        ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 56:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(57);
      if (lookahead == '\'')
        ADVANCE(61);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(65);
      if (lookahead == '>')
        ADVANCE(67);
      if (lookahead == '[')
        ADVANCE(70);
      if (lookahead == '\\')
        SKIP(72);
      if (lookahead == 'c')
        ADVANCE(73);
      if (lookahead == 'i')
        ADVANCE(77);
      if (lookahead == 'w')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(56);
      if ((lookahead < '&' || lookahead > ')') &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(60);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == '>')
        ADVANCE(58);
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
        ADVANCE(60);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_AMP_GT);
      if (lookahead == '>')
        ADVANCE(59);
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
        ADVANCE(60);
      END_STATE();
    case 59:
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
        ADVANCE(60);
      END_STATE();
    case 60:
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
        ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == '\'')
        ADVANCE(62);
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
        ADVANCE(63);
      if (lookahead != 0)
        ADVANCE(61);
      END_STATE();
    case 62:
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
        ADVANCE(60);
      END_STATE();
    case 63:
      if (lookahead == '\'')
        ADVANCE(64);
      if (lookahead != 0)
        ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_single_quoted_argument);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&')
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
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(60);
      END_STATE();
    case 66:
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
        ADVANCE(60);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '&')
        ADVANCE(68);
      if (lookahead == '>')
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
          lookahead != '>' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(60);
      END_STATE();
    case 68:
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
        ADVANCE(60);
      END_STATE();
    case 69:
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
        ADVANCE(60);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[')
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
          lookahead != '[' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(60);
      END_STATE();
    case 71:
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
        ADVANCE(60);
      END_STATE();
    case 72:
      if (lookahead == '\n')
        SKIP(56);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'a')
        ADVANCE(74);
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
        ADVANCE(60);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 's')
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
        ADVANCE(60);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
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
        ADVANCE(60);
      END_STATE();
    case 76:
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
        ADVANCE(60);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'f')
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
        ADVANCE(60);
      END_STATE();
    case 78:
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
        ADVANCE(60);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'h')
        ADVANCE(80);
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
        ADVANCE(60);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
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
        ADVANCE(60);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'l')
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
        ADVANCE(60);
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
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(60);
      END_STATE();
    case 83:
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
        ADVANCE(60);
      END_STATE();
    case 84:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(85);
      if (lookahead == '<')
        ADVANCE(88);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(84);
      END_STATE();
    case 85:
      if (lookahead == '>')
        ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_AMP_GT);
      if (lookahead == '>')
        ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_AMP_GT_GT);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&')
        ADVANCE(11);
      END_STATE();
    case 89:
      if (lookahead == '\n')
        SKIP(84);
      END_STATE();
    case 90:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(57);
      if (lookahead == '\'')
        ADVANCE(61);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(65);
      if (lookahead == '>')
        ADVANCE(67);
      if (lookahead == '[')
        ADVANCE(70);
      if (lookahead == '\\')
        SKIP(91);
      if (lookahead == 'c')
        ADVANCE(73);
      if (lookahead == 'i')
        ADVANCE(77);
      if (lookahead == 'w')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(90);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(60);
      END_STATE();
    case 91:
      if (lookahead == '\n')
        SKIP(90);
      END_STATE();
    case 92:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(93);
      if (lookahead == '\'')
        ADVANCE(96);
      if (lookahead == '\\')
        SKIP(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(92);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(98);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '(')
        ADVANCE(94);
      if (lookahead == '{')
        ADVANCE(95);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\'')
        ADVANCE(97);
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
        ADVANCE(63);
      if (lookahead != 0)
        ADVANCE(96);
      END_STATE();
    case 97:
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
        ADVANCE(98);
      END_STATE();
    case 98:
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
        ADVANCE(98);
      END_STATE();
    case 99:
      if (lookahead == '\n')
        SKIP(92);
      END_STATE();
    case 100:
      if (lookahead == '\n')
        ADVANCE(101);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(103);
      if (lookahead == ';')
        ADVANCE(105);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(107);
      if (lookahead == '|')
        ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(102);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '>')
        ADVANCE(86);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == ';')
        ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_SEMI_SEMI);
      END_STATE();
    case 107:
      if (lookahead == '\n')
        SKIP(100);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '&')
        ADVANCE(109);
      if (lookahead == '|')
        ADVANCE(54);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_PIPE_AMP);
      END_STATE();
    case 110:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(57);
      if (lookahead == '\'')
        ADVANCE(61);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(65);
      if (lookahead == '>')
        ADVANCE(67);
      if (lookahead == '[')
        ADVANCE(70);
      if (lookahead == '\\')
        SKIP(111);
      if (lookahead == 'c')
        ADVANCE(73);
      if (lookahead == 'i')
        ADVANCE(77);
      if (lookahead == 'w')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(110);
      if (lookahead != 0 &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(60);
      END_STATE();
    case 111:
      if (lookahead == '\n')
        SKIP(110);
      END_STATE();
    case 112:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(113);
      if (lookahead == '$')
        ADVANCE(93);
      if (lookahead == '\\')
        ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(116);
      if (lookahead != 0)
        ADVANCE(114);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(114);
      if (lookahead == '\"' ||
          lookahead == '$')
        ADVANCE(3);
      if (lookahead != 0)
        ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(114);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '#')
        ADVANCE(113);
      if (lookahead == '\\')
        ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(116);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(114);
      END_STATE();
    case 117:
      if (lookahead == '\n')
        ADVANCE(118);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(103);
      if (lookahead == ';')
        ADVANCE(105);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(120);
      if (lookahead == '|')
        ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(119);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(119);
      END_STATE();
    case 120:
      if (lookahead == '\n')
        SKIP(117);
      END_STATE();
    case 121:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(121);
      END_STATE();
    case 122:
      if (lookahead == '\n')
        SKIP(121);
      END_STATE();
    case 123:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(57);
      if (lookahead == '\'')
        ADVANCE(61);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == ';')
        ADVANCE(124);
      if (lookahead == '<')
        ADVANCE(65);
      if (lookahead == '>')
        ADVANCE(67);
      if (lookahead == '[')
        ADVANCE(70);
      if (lookahead == '\\')
        SKIP(125);
      if (lookahead == 'c')
        ADVANCE(73);
      if (lookahead == 'd')
        ADVANCE(126);
      if (lookahead == 'e')
        ADVANCE(130);
      if (lookahead == 'f')
        ADVANCE(136);
      if (lookahead == 'i')
        ADVANCE(77);
      if (lookahead == 'w')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(123);
      if ((lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(60);
      END_STATE();
    case 124:
      if (lookahead == ';')
        ADVANCE(106);
      END_STATE();
    case 125:
      if (lookahead == '\n')
        SKIP(123);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'o')
        ADVANCE(127);
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
        ADVANCE(60);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'n')
        ADVANCE(128);
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
        ADVANCE(60);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(129);
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
        ADVANCE(60);
      END_STATE();
    case 129:
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
        ADVANCE(60);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'l')
        ADVANCE(131);
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
        ADVANCE(60);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(132);
      if (lookahead == 's')
        ADVANCE(134);
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
        ADVANCE(60);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'f')
        ADVANCE(133);
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
        ADVANCE(60);
      END_STATE();
    case 133:
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
        ADVANCE(60);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(135);
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
        ADVANCE(60);
      END_STATE();
    case 135:
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
        ADVANCE(60);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(137);
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
        ADVANCE(60);
      END_STATE();
    case 137:
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
        ADVANCE(60);
      END_STATE();
    case 138:
      if (lookahead == '\n')
        ADVANCE(139);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(140);
      if (lookahead == ';')
        ADVANCE(105);
      if (lookahead == '\\')
        SKIP(141);
      if (lookahead == '|')
        ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&')
        ADVANCE(104);
      END_STATE();
    case 141:
      if (lookahead == '\n')
        SKIP(138);
      END_STATE();
    case 142:
      if (lookahead == '\n')
        ADVANCE(139);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(143);
      if (lookahead == '\'')
        ADVANCE(61);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == ';')
        ADVANCE(105);
      if (lookahead == '<')
        ADVANCE(65);
      if (lookahead == '>')
        ADVANCE(67);
      if (lookahead == '\\')
        SKIP(145);
      if (lookahead == '|')
        ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(142);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(60);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&')
        ADVANCE(144);
      if (lookahead == '>')
        ADVANCE(58);
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
        ADVANCE(60);
      END_STATE();
    case 144:
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
        ADVANCE(60);
      END_STATE();
    case 145:
      if (lookahead == '\n')
        SKIP(142);
      END_STATE();
    case 146:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(57);
      if (lookahead == '\'')
        ADVANCE(61);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(65);
      if (lookahead == '>')
        ADVANCE(67);
      if (lookahead == '\\')
        SKIP(147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(146);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(60);
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
      if (lookahead == 'd')
        ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(148);
      END_STATE();
    case 149:
      if (lookahead == '\n')
        SKIP(148);
      END_STATE();
    case 150:
      if (lookahead == 'o')
        ADVANCE(151);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 152:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(153);
      if (lookahead == 't')
        ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(152);
      END_STATE();
    case 153:
      if (lookahead == '\n')
        SKIP(152);
      END_STATE();
    case 154:
      if (lookahead == '\n')
        ADVANCE(139);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(105);
      if (lookahead == '\\')
        SKIP(155);
      if (lookahead == 'i')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(154);
      END_STATE();
    case 155:
      if (lookahead == '\n')
        SKIP(154);
      END_STATE();
    case 156:
      if (lookahead == 'n')
        ADVANCE(43);
      END_STATE();
    case 157:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '\\')
        SKIP(158);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(157);
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
        ADVANCE(98);
      END_STATE();
    case 158:
      if (lookahead == '\n')
        SKIP(157);
      END_STATE();
    case 159:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(159);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(60);
      END_STATE();
    case 160:
      if (lookahead == '\n')
        SKIP(159);
      END_STATE();
    case 161:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(93);
      if (lookahead == '\'')
        ADVANCE(96);
      if (lookahead == '\\')
        SKIP(162);
      if (lookahead == ']')
        ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(161);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(98);
      END_STATE();
    case 162:
      if (lookahead == '\n')
        SKIP(161);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']')
        ADVANCE(164);
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
        ADVANCE(98);
      END_STATE();
    case 164:
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
        ADVANCE(98);
      END_STATE();
    case 165:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(93);
      if (lookahead == '\'')
        ADVANCE(96);
      if (lookahead == '\\')
        SKIP(166);
      if (lookahead == ']')
        ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(165);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(98);
      END_STATE();
    case 166:
      if (lookahead == '\n')
        SKIP(165);
      END_STATE();
    case 167:
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
        ADVANCE(98);
      END_STATE();
    case 168:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(93);
      if (lookahead == '\'')
        ADVANCE(96);
      if (lookahead == '\\')
        SKIP(169);
      if (lookahead == ']')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(168);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(98);
      END_STATE();
    case 169:
      if (lookahead == '\n')
        SKIP(168);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ']')
        ADVANCE(164);
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
        ADVANCE(98);
      END_STATE();
    case 171:
      if (lookahead == '\n')
        ADVANCE(139);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(93);
      if (lookahead == '&')
        ADVANCE(103);
      if (lookahead == '\'')
        ADVANCE(96);
      if (lookahead == ';')
        ADVANCE(105);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(172);
      if (lookahead == '|')
        ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(171);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(98);
      END_STATE();
    case 172:
      if (lookahead == '\n')
        SKIP(171);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '&')
        ADVANCE(109);
      if (lookahead == '|')
        ADVANCE(174);
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
        ADVANCE(98);
      END_STATE();
    case 174:
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
        ADVANCE(98);
      END_STATE();
    case 175:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(176);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(175);
      END_STATE();
    case 176:
      if (lookahead == '\n')
        SKIP(175);
      END_STATE();
    case 177:
      if (lookahead == '\n')
        ADVANCE(139);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(103);
      if (lookahead == ';')
        ADVANCE(105);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(178);
      if (lookahead == '|')
        ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(177);
      END_STATE();
    case 178:
      if (lookahead == '\n')
        SKIP(177);
      END_STATE();
    case 179:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(57);
      if (lookahead == '\'')
        ADVANCE(61);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == ';')
        ADVANCE(124);
      if (lookahead == '<')
        ADVANCE(65);
      if (lookahead == '>')
        ADVANCE(67);
      if (lookahead == '[')
        ADVANCE(70);
      if (lookahead == '\\')
        SKIP(180);
      if (lookahead == 'c')
        ADVANCE(73);
      if (lookahead == 'd')
        ADVANCE(181);
      if (lookahead == 'e')
        ADVANCE(130);
      if (lookahead == 'f')
        ADVANCE(136);
      if (lookahead == 'i')
        ADVANCE(77);
      if (lookahead == 't')
        ADVANCE(183);
      if (lookahead == 'w')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(179);
      if ((lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(60);
      END_STATE();
    case 180:
      if (lookahead == '\n')
        SKIP(179);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'o')
        ADVANCE(182);
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
        ADVANCE(60);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == 'n')
        ADVANCE(128);
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
        ADVANCE(60);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'h')
        ADVANCE(184);
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
        ADVANCE(60);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(185);
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
        ADVANCE(60);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'n')
        ADVANCE(186);
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
        ADVANCE(60);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_then);
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
        ADVANCE(60);
      END_STATE();
    case 187:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(57);
      if (lookahead == '\'')
        ADVANCE(61);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(65);
      if (lookahead == '>')
        ADVANCE(67);
      if (lookahead == '[')
        ADVANCE(70);
      if (lookahead == '\\')
        SKIP(188);
      if (lookahead == 'c')
        ADVANCE(73);
      if (lookahead == 'd')
        ADVANCE(126);
      if (lookahead == 'i')
        ADVANCE(77);
      if (lookahead == 'w')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(187);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(60);
      END_STATE();
    case 188:
      if (lookahead == '\n')
        SKIP(187);
      END_STATE();
    case 189:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(190);
      if (lookahead == 'd')
        ADVANCE(150);
      if (lookahead == 't')
        ADVANCE(44);
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
      if (lookahead == '&')
        ADVANCE(57);
      if (lookahead == '\'')
        ADVANCE(61);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(65);
      if (lookahead == '>')
        ADVANCE(67);
      if (lookahead == '[')
        ADVANCE(70);
      if (lookahead == '\\')
        SKIP(192);
      if (lookahead == 'c')
        ADVANCE(73);
      if (lookahead == 'e')
        ADVANCE(130);
      if (lookahead == 'f')
        ADVANCE(136);
      if (lookahead == 'i')
        ADVANCE(77);
      if (lookahead == 'w')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(191);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(60);
      END_STATE();
    case 192:
      if (lookahead == '\n')
        SKIP(191);
      END_STATE();
    case 193:
      if (lookahead == '\n')
        ADVANCE(139);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(105);
      if (lookahead == '\\')
        SKIP(194);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(193);
      END_STATE();
    case 194:
      if (lookahead == '\n')
        SKIP(193);
      END_STATE();
    case 195:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(196);
      if (lookahead == 'i')
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(195);
      END_STATE();
    case 196:
      if (lookahead == '\n')
        SKIP(195);
      END_STATE();
    case 197:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ':')
        ADVANCE(198);
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == '\\')
        SKIP(201);
      if (lookahead == '}')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-')
        ADVANCE(199);
      if (lookahead == '?')
        ADVANCE(200);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_COLON_QMARK);
      END_STATE();
    case 201:
      if (lookahead == '\n')
        SKIP(197);
      END_STATE();
    case 202:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(85);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(204);
      END_STATE();
    case 203:
      if (lookahead == '\n')
        SKIP(202);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(204);
      END_STATE();
    case 205:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(85);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(207);
      END_STATE();
    case 206:
      if (lookahead == '\n')
        SKIP(205);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(207);
      END_STATE();
    case 208:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '\\')
        SKIP(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(208);
      END_STATE();
    case 209:
      if (lookahead == '\n')
        SKIP(208);
      END_STATE();
    case 210:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(93);
      if (lookahead == '\'')
        ADVANCE(96);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '\\')
        SKIP(211);
      if (lookahead == ']')
        ADVANCE(163);
      if (lookahead == '}')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(210);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{')
        ADVANCE(98);
      END_STATE();
    case 211:
      if (lookahead == '\n')
        SKIP(210);
      END_STATE();
    case 212:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(213);
      if (lookahead == '\\')
        SKIP(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{')
        ADVANCE(95);
      END_STATE();
    case 214:
      if (lookahead == '\n')
        SKIP(212);
      END_STATE();
    case 215:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(57);
      if (lookahead == '\'')
        ADVANCE(61);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(65);
      if (lookahead == '>')
        ADVANCE(67);
      if (lookahead == '[')
        ADVANCE(70);
      if (lookahead == '\\')
        SKIP(216);
      if (lookahead == 'c')
        ADVANCE(73);
      if (lookahead == 'f')
        ADVANCE(136);
      if (lookahead == 'i')
        ADVANCE(77);
      if (lookahead == 'w')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(215);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(60);
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
      if (lookahead == 'e')
        ADVANCE(219);
      if (lookahead == 'f')
        ADVANCE(39);
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
      if (lookahead == 'l')
        ADVANCE(31);
      END_STATE();
    case 220:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(221);
      if (lookahead == 'f')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(220);
      END_STATE();
    case 221:
      if (lookahead == '\n')
        SKIP(220);
      END_STATE();
    case 222:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(93);
      if (lookahead == '\'')
        ADVANCE(96);
      if (lookahead == '\\')
        SKIP(223);
      if (lookahead == 'e')
        ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(222);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(98);
      END_STATE();
    case 223:
      if (lookahead == '\n')
        SKIP(222);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's')
        ADVANCE(225);
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
        ADVANCE(98);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a')
        ADVANCE(226);
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
        ADVANCE(98);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c')
        ADVANCE(227);
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
        ADVANCE(98);
      END_STATE();
    case 227:
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
        ADVANCE(98);
      END_STATE();
    case 228:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(93);
      if (lookahead == '&')
        ADVANCE(85);
      if (lookahead == '\'')
        ADVANCE(96);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(229);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(228);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(98);
      END_STATE();
    case 229:
      if (lookahead == '\n')
        SKIP(228);
      END_STATE();
    case 230:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(85);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(231);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(230);
      END_STATE();
    case 231:
      if (lookahead == '\n')
        SKIP(230);
      END_STATE();
    case 232:
      if (lookahead == '\n')
        ADVANCE(139);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(143);
      if (lookahead == '\'')
        ADVANCE(61);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == ';')
        ADVANCE(105);
      if (lookahead == '<')
        ADVANCE(65);
      if (lookahead == '>')
        ADVANCE(67);
      if (lookahead == '\\')
        SKIP(233);
      if (lookahead == '|')
        ADVANCE(108);
      if (lookahead == '}')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(232);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(60);
      END_STATE();
    case 233:
      if (lookahead == '\n')
        SKIP(232);
      END_STATE();
    case 234:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(235);
      if (lookahead == '}')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(234);
      END_STATE();
    case 235:
      if (lookahead == '\n')
        SKIP(234);
      END_STATE();
    case 236:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(57);
      if (lookahead == '\'')
        ADVANCE(61);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == ';')
        ADVANCE(124);
      if (lookahead == '<')
        ADVANCE(65);
      if (lookahead == '>')
        ADVANCE(67);
      if (lookahead == '[')
        ADVANCE(70);
      if (lookahead == '\\')
        SKIP(237);
      if (lookahead == 'c')
        ADVANCE(73);
      if (lookahead == 'i')
        ADVANCE(77);
      if (lookahead == 'w')
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(236);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(60);
      END_STATE();
    case 237:
      if (lookahead == '\n')
        SKIP(236);
      END_STATE();
    case 238:
      if (lookahead == '\n')
        ADVANCE(239);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(113);
      if (lookahead == '$')
        ADVANCE(285);
      if (lookahead == '&')
        ADVANCE(240);
      if (lookahead == '\'')
        ADVANCE(245);
      if (lookahead == '(')
        ADVANCE(251);
      if (lookahead == ')')
        ADVANCE(252);
      if (lookahead == ':')
        ADVANCE(253);
      if (lookahead == ';')
        ADVANCE(254);
      if (lookahead == '<')
        ADVANCE(256);
      if (lookahead == '=')
        ADVANCE(247);
      if (lookahead == '>')
        ADVANCE(260);
      if (lookahead == '[')
        ADVANCE(263);
      if (lookahead == '\\')
        ADVANCE(265);
      if (lookahead == ']')
        ADVANCE(267);
      if (lookahead == 'c')
        ADVANCE(269);
      if (lookahead == 'i')
        ADVANCE(273);
      if (lookahead == 'w')
        ADVANCE(276);
      if (lookahead == '{')
        ADVANCE(114);
      if (lookahead == '|')
        ADVANCE(281);
      if (lookahead == '}')
        ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(266);
      if (lookahead != 0)
        ADVANCE(246);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(239);
      if (lookahead == '#')
        ADVANCE(113);
      if (lookahead == '&')
        ADVANCE(240);
      if (lookahead == '\'')
        ADVANCE(245);
      if (lookahead == '(')
        ADVANCE(251);
      if (lookahead == ')')
        ADVANCE(252);
      if (lookahead == ':')
        ADVANCE(253);
      if (lookahead == ';')
        ADVANCE(254);
      if (lookahead == '<')
        ADVANCE(256);
      if (lookahead == '=')
        ADVANCE(247);
      if (lookahead == '>')
        ADVANCE(260);
      if (lookahead == '[')
        ADVANCE(263);
      if (lookahead == '\\')
        ADVANCE(265);
      if (lookahead == ']')
        ADVANCE(267);
      if (lookahead == 'c')
        ADVANCE(269);
      if (lookahead == 'i')
        ADVANCE(273);
      if (lookahead == 'w')
        ADVANCE(276);
      if (lookahead == '{')
        ADVANCE(114);
      if (lookahead == '|')
        ADVANCE(281);
      if (lookahead == '}')
        ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(266);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(246);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '$')
        ADVANCE(60);
      if (lookahead == '&')
        ADVANCE(241);
      if (lookahead == '>')
        ADVANCE(243);
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
        ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(242);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      if (lookahead == '$')
        ADVANCE(60);
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
        ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(242);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(60);
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
        ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_AMP_GT);
      if (lookahead == '$')
        ADVANCE(60);
      if (lookahead == '>')
        ADVANCE(244);
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
        ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(242);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_AMP_GT_GT);
      if (lookahead == '$')
        ADVANCE(60);
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
        ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(242);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\"')
        ADVANCE(63);
      if (lookahead == '$')
        ADVANCE(61);
      if (lookahead == '\'')
        ADVANCE(246);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(248);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(250);
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
        ADVANCE(249);
      if (lookahead != 0)
        ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(60);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(242);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(247);
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
        ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(246);
      END_STATE();
    case 247:
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
        ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\"')
        ADVANCE(63);
      if (lookahead == '$')
        ADVANCE(61);
      if (lookahead == '\'')
        ADVANCE(242);
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
        ADVANCE(249);
      if (lookahead != 0)
        ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\'')
        ADVANCE(114);
      if (lookahead == '\"' ||
          lookahead == '$')
        ADVANCE(63);
      if (lookahead != 0)
        ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\'')
        ADVANCE(247);
      if (lookahead == '\"' ||
          lookahead == '$')
        ADVANCE(63);
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
        ADVANCE(249);
      if (lookahead != 0)
        ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(114);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(114);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_COLON);
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
        ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(247);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == ';')
        ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(114);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_SEMI_SEMI);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(114);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '$')
        ADVANCE(60);
      if (lookahead == '&')
        ADVANCE(257);
      if (lookahead == '<')
        ADVANCE(258);
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
        ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(242);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_LT_AMP);
      if (lookahead == '$')
        ADVANCE(60);
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
        ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(242);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '$')
        ADVANCE(60);
      if (lookahead == '-')
        ADVANCE(259);
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
        ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(242);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH);
      if (lookahead == '$')
        ADVANCE(60);
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
        ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(242);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '$')
        ADVANCE(60);
      if (lookahead == '&')
        ADVANCE(261);
      if (lookahead == '>')
        ADVANCE(262);
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
        ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(242);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_GT_AMP);
      if (lookahead == '$')
        ADVANCE(60);
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
        ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(242);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '$')
        ADVANCE(60);
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
        ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(242);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '$')
        ADVANCE(60);
      if (lookahead == '[')
        ADVANCE(264);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(242);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(247);
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
        ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(246);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      if (lookahead == '$')
        ADVANCE(60);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(242);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(247);
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
        ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(246);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(114);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(239);
      if (lookahead == '#')
        ADVANCE(113);
      if (lookahead == '&')
        ADVANCE(240);
      if (lookahead == '\'')
        ADVANCE(245);
      if (lookahead == '(')
        ADVANCE(251);
      if (lookahead == ')')
        ADVANCE(252);
      if (lookahead == ':')
        ADVANCE(253);
      if (lookahead == ';')
        ADVANCE(254);
      if (lookahead == '<')
        ADVANCE(256);
      if (lookahead == '=')
        ADVANCE(247);
      if (lookahead == '>')
        ADVANCE(260);
      if (lookahead == '[')
        ADVANCE(263);
      if (lookahead == '\\')
        ADVANCE(265);
      if (lookahead == ']')
        ADVANCE(267);
      if (lookahead == 'c')
        ADVANCE(269);
      if (lookahead == 'i')
        ADVANCE(273);
      if (lookahead == 'w')
        ADVANCE(276);
      if (lookahead == '{')
        ADVANCE(114);
      if (lookahead == '|')
        ADVANCE(281);
      if (lookahead == '}')
        ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(266);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(246);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '$')
        ADVANCE(60);
      if (lookahead == ']')
        ADVANCE(268);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(242);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(247);
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
        ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(246);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      if (lookahead == '$')
        ADVANCE(60);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(242);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(247);
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
        ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(246);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(60);
      if (lookahead == 'a')
        ADVANCE(270);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(242);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(247);
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
        ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(246);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(60);
      if (lookahead == 's')
        ADVANCE(271);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(242);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(247);
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
        ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(246);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(60);
      if (lookahead == 'e')
        ADVANCE(272);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(242);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(247);
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
        ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(246);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '$')
        ADVANCE(60);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(242);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(247);
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
        ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(246);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(60);
      if (lookahead == 'f')
        ADVANCE(274);
      if (lookahead == 'n')
        ADVANCE(275);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(242);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(247);
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
        ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(246);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '$')
        ADVANCE(60);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(242);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(247);
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
        ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(246);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '$')
        ADVANCE(60);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(242);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(247);
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
        ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(246);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(60);
      if (lookahead == 'h')
        ADVANCE(277);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(242);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(247);
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
        ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(246);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(60);
      if (lookahead == 'i')
        ADVANCE(278);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(242);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(247);
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
        ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(246);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(60);
      if (lookahead == 'l')
        ADVANCE(279);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(242);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(247);
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
        ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(246);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(60);
      if (lookahead == 'e')
        ADVANCE(280);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(242);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(247);
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
        ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(246);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '$')
        ADVANCE(60);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(242);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(247);
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
        ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(246);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '&')
        ADVANCE(282);
      if (lookahead == '|')
        ADVANCE(283);
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
        ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(247);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_PIPE_AMP);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(114);
      END_STATE();
    case 283:
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
        ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(247);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(114);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '(')
        ADVANCE(94);
      if (lookahead == '{')
        ADVANCE(95);
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
        ADVANCE(60);
      END_STATE();
    case 286:
      if (lookahead == '\n')
        ADVANCE(287);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(93);
      if (lookahead == '&')
        ADVANCE(103);
      if (lookahead == '\'')
        ADVANCE(96);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(105);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(289);
      if (lookahead == '|')
        ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(288);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(98);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(288);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(288);
      END_STATE();
    case 289:
      if (lookahead == '\n')
        SKIP(286);
      END_STATE();
    case 290:
      if (lookahead == '\n')
        ADVANCE(291);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(113);
      if (lookahead == '$')
        ADVANCE(285);
      if (lookahead == '&')
        ADVANCE(240);
      if (lookahead == '\'')
        ADVANCE(245);
      if (lookahead == ')')
        ADVANCE(252);
      if (lookahead == ':')
        ADVANCE(253);
      if (lookahead == ';')
        ADVANCE(254);
      if (lookahead == '<')
        ADVANCE(256);
      if (lookahead == '=')
        ADVANCE(247);
      if (lookahead == '>')
        ADVANCE(260);
      if (lookahead == '\\')
        ADVANCE(292);
      if (lookahead == ']')
        ADVANCE(267);
      if (lookahead == 'i')
        ADVANCE(294);
      if (lookahead == '|')
        ADVANCE(281);
      if (lookahead == '}')
        ADVANCE(284);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(295);
      if (lookahead != 0)
        ADVANCE(246);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(291);
      if (lookahead == '#')
        ADVANCE(113);
      if (lookahead == '&')
        ADVANCE(240);
      if (lookahead == '\'')
        ADVANCE(245);
      if (lookahead == ')')
        ADVANCE(252);
      if (lookahead == ':')
        ADVANCE(253);
      if (lookahead == ';')
        ADVANCE(254);
      if (lookahead == '<')
        ADVANCE(256);
      if (lookahead == '=')
        ADVANCE(247);
      if (lookahead == '>')
        ADVANCE(260);
      if (lookahead == '\\')
        ADVANCE(292);
      if (lookahead == ']')
        ADVANCE(267);
      if (lookahead == 'i')
        ADVANCE(294);
      if (lookahead == '|')
        ADVANCE(281);
      if (lookahead == '}')
        ADVANCE(284);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(295);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(246);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(114);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(291);
      if (lookahead == '#')
        ADVANCE(113);
      if (lookahead == '&')
        ADVANCE(240);
      if (lookahead == '\'')
        ADVANCE(245);
      if (lookahead == ')')
        ADVANCE(252);
      if (lookahead == ':')
        ADVANCE(253);
      if (lookahead == ';')
        ADVANCE(254);
      if (lookahead == '<')
        ADVANCE(256);
      if (lookahead == '=')
        ADVANCE(247);
      if (lookahead == '>')
        ADVANCE(260);
      if (lookahead == '\\')
        ADVANCE(292);
      if (lookahead == ']')
        ADVANCE(267);
      if (lookahead == 'i')
        ADVANCE(294);
      if (lookahead == '|')
        ADVANCE(281);
      if (lookahead == '}')
        ADVANCE(284);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(295);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(246);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(60);
      if (lookahead == 'n')
        ADVANCE(275);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(242);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(247);
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
        ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(246);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(291);
      if (lookahead == '#')
        ADVANCE(113);
      if (lookahead == '&')
        ADVANCE(240);
      if (lookahead == '\'')
        ADVANCE(245);
      if (lookahead == ')')
        ADVANCE(252);
      if (lookahead == ':')
        ADVANCE(253);
      if (lookahead == ';')
        ADVANCE(254);
      if (lookahead == '<')
        ADVANCE(256);
      if (lookahead == '=')
        ADVANCE(247);
      if (lookahead == '>')
        ADVANCE(260);
      if (lookahead == '\\')
        ADVANCE(292);
      if (lookahead == ']')
        ADVANCE(267);
      if (lookahead == 'i')
        ADVANCE(294);
      if (lookahead == '|')
        ADVANCE(281);
      if (lookahead == '}')
        ADVANCE(284);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(295);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(246);
      END_STATE();
    case 296:
      if (lookahead == '\n')
        ADVANCE(297);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(113);
      if (lookahead == '$')
        ADVANCE(285);
      if (lookahead == '&')
        ADVANCE(240);
      if (lookahead == '\'')
        ADVANCE(245);
      if (lookahead == ')')
        ADVANCE(252);
      if (lookahead == ':')
        ADVANCE(253);
      if (lookahead == ';')
        ADVANCE(254);
      if (lookahead == '<')
        ADVANCE(256);
      if (lookahead == '=')
        ADVANCE(247);
      if (lookahead == '>')
        ADVANCE(260);
      if (lookahead == '\\')
        ADVANCE(298);
      if (lookahead == ']')
        ADVANCE(267);
      if (lookahead == 'i')
        ADVANCE(294);
      if (lookahead == '|')
        ADVANCE(281);
      if (lookahead == '}')
        ADVANCE(284);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(299);
      if (lookahead != 0)
        ADVANCE(246);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(297);
      if (lookahead == '#')
        ADVANCE(113);
      if (lookahead == '&')
        ADVANCE(240);
      if (lookahead == '\'')
        ADVANCE(245);
      if (lookahead == ')')
        ADVANCE(252);
      if (lookahead == ':')
        ADVANCE(253);
      if (lookahead == ';')
        ADVANCE(254);
      if (lookahead == '<')
        ADVANCE(256);
      if (lookahead == '=')
        ADVANCE(247);
      if (lookahead == '>')
        ADVANCE(260);
      if (lookahead == '\\')
        ADVANCE(298);
      if (lookahead == ']')
        ADVANCE(267);
      if (lookahead == 'i')
        ADVANCE(294);
      if (lookahead == '|')
        ADVANCE(281);
      if (lookahead == '}')
        ADVANCE(284);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(299);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(246);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(114);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(297);
      if (lookahead == '#')
        ADVANCE(113);
      if (lookahead == '&')
        ADVANCE(240);
      if (lookahead == '\'')
        ADVANCE(245);
      if (lookahead == ')')
        ADVANCE(252);
      if (lookahead == ':')
        ADVANCE(253);
      if (lookahead == ';')
        ADVANCE(254);
      if (lookahead == '<')
        ADVANCE(256);
      if (lookahead == '=')
        ADVANCE(247);
      if (lookahead == '>')
        ADVANCE(260);
      if (lookahead == '\\')
        ADVANCE(298);
      if (lookahead == ']')
        ADVANCE(267);
      if (lookahead == 'i')
        ADVANCE(294);
      if (lookahead == '|')
        ADVANCE(281);
      if (lookahead == '}')
        ADVANCE(284);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(299);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(246);
      END_STATE();
    case 300:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(285);
      if (lookahead == '&')
        ADVANCE(57);
      if (lookahead == '\'')
        ADVANCE(301);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ':')
        ADVANCE(304);
      if (lookahead == ';')
        ADVANCE(124);
      if (lookahead == '<')
        ADVANCE(65);
      if (lookahead == '>')
        ADVANCE(67);
      if (lookahead == '[')
        ADVANCE(305);
      if (lookahead == '\\')
        SKIP(307);
      if (lookahead == 'c')
        ADVANCE(308);
      if (lookahead == 'd')
        ADVANCE(312);
      if (lookahead == 'e')
        ADVANCE(316);
      if (lookahead == 'f')
        ADVANCE(325);
      if (lookahead == 'i')
        ADVANCE(327);
      if (lookahead == 't')
        ADVANCE(330);
      if (lookahead == 'w')
        ADVANCE(334);
      if (lookahead == '=' ||
          lookahead == '|')
        ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(300);
      if ((lookahead < '{' || lookahead > '}'))
        ADVANCE(303);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == '\'')
        ADVANCE(302);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(96);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(61);
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
        ADVANCE(63);
      if (lookahead != 0)
        ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_single_quoted_argument);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(60);
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
        ADVANCE(303);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(60);
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
        ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_COLON);
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
        ADVANCE(98);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[')
        ADVANCE(306);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(60);
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
        ADVANCE(303);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(60);
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
        ADVANCE(303);
      END_STATE();
    case 307:
      if (lookahead == '\n')
        SKIP(300);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'a')
        ADVANCE(309);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(60);
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
        ADVANCE(303);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 's')
        ADVANCE(310);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(60);
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
        ADVANCE(303);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(311);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(60);
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
        ADVANCE(303);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(60);
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
        ADVANCE(303);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'o')
        ADVANCE(313);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(60);
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
        ADVANCE(303);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == 'n')
        ADVANCE(314);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(60);
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
        ADVANCE(303);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(315);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(60);
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
        ADVANCE(303);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_done);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(60);
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
        ADVANCE(303);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'l')
        ADVANCE(317);
      if (lookahead == 's')
        ADVANCE(322);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(60);
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
        ADVANCE(303);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(318);
      if (lookahead == 's')
        ADVANCE(320);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(60);
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
        ADVANCE(303);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'f')
        ADVANCE(319);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(60);
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
        ADVANCE(303);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_elif);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(60);
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
        ADVANCE(303);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(321);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(60);
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
        ADVANCE(303);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(60);
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
        ADVANCE(303);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'a')
        ADVANCE(323);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(60);
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
        ADVANCE(303);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'c')
        ADVANCE(324);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(60);
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
        ADVANCE(303);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_esac);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(60);
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
        ADVANCE(303);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(326);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(60);
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
        ADVANCE(303);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_fi);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(60);
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
        ADVANCE(303);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'f')
        ADVANCE(328);
      if (lookahead == 'n')
        ADVANCE(329);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(60);
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
        ADVANCE(303);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(60);
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
        ADVANCE(303);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(60);
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
        ADVANCE(303);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'h')
        ADVANCE(331);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(60);
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
        ADVANCE(303);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(332);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(60);
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
        ADVANCE(303);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'n')
        ADVANCE(333);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(60);
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
        ADVANCE(303);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_then);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(60);
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
        ADVANCE(303);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'h')
        ADVANCE(335);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(60);
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
        ADVANCE(303);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(336);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(60);
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
        ADVANCE(303);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'l')
        ADVANCE(337);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(60);
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
        ADVANCE(303);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(338);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(60);
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
        ADVANCE(303);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(60);
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
        ADVANCE(303);
      END_STATE();
    case 339:
      if (lookahead == '\n')
        ADVANCE(139);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(103);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(105);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(340);
      if (lookahead == '|')
        ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(339);
      END_STATE();
    case 340:
      if (lookahead == '\n')
        SKIP(339);
      END_STATE();
    case 341:
      if (lookahead == '\n')
        ADVANCE(139);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(140);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(105);
      if (lookahead == '\\')
        SKIP(342);
      if (lookahead == '|')
        ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(341);
      END_STATE();
    case 342:
      if (lookahead == '\n')
        SKIP(341);
      END_STATE();
    case 343:
      if (lookahead == '\n')
        ADVANCE(344);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(285);
      if (lookahead == '&')
        ADVANCE(143);
      if (lookahead == '\'')
        ADVANCE(301);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ':')
        ADVANCE(304);
      if (lookahead == ';')
        ADVANCE(105);
      if (lookahead == '<')
        ADVANCE(346);
      if (lookahead == '=')
        ADVANCE(98);
      if (lookahead == '>')
        ADVANCE(67);
      if (lookahead == '\\')
        SKIP(349);
      if (lookahead == ']')
        ADVANCE(350);
      if (lookahead == 'i')
        ADVANCE(352);
      if (lookahead == '|')
        ADVANCE(173);
      if (lookahead == '}')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(345);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(303);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(345);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&')
        ADVANCE(66);
      if (lookahead == '<')
        ADVANCE(347);
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
        ADVANCE(60);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '-')
        ADVANCE(348);
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
        ADVANCE(60);
      END_STATE();
    case 348:
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
        ADVANCE(60);
      END_STATE();
    case 349:
      if (lookahead == '\n')
        SKIP(343);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']')
        ADVANCE(351);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(60);
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
        ADVANCE(303);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(60);
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
        ADVANCE(303);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'n')
        ADVANCE(329);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(60);
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
        ADVANCE(303);
      END_STATE();
    case 353:
      if (lookahead == '\n')
        ADVANCE(139);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(143);
      if (lookahead == '\'')
        ADVANCE(61);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == ';')
        ADVANCE(105);
      if (lookahead == '<')
        ADVANCE(346);
      if (lookahead == '>')
        ADVANCE(67);
      if (lookahead == '\\')
        SKIP(354);
      if (lookahead == '|')
        ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(353);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(60);
      END_STATE();
    case 354:
      if (lookahead == '\n')
        SKIP(353);
      END_STATE();
    case 355:
      if (lookahead == '\n')
        ADVANCE(139);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(93);
      if (lookahead == '&')
        ADVANCE(103);
      if (lookahead == '\'')
        ADVANCE(96);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(105);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(356);
      if (lookahead == ']')
        ADVANCE(163);
      if (lookahead == '|')
        ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(355);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(98);
      END_STATE();
    case 356:
      if (lookahead == '\n')
        SKIP(355);
      END_STATE();
    case 357:
      if (lookahead == '\n')
        ADVANCE(139);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(93);
      if (lookahead == '&')
        ADVANCE(103);
      if (lookahead == '\'')
        ADVANCE(96);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(105);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(358);
      if (lookahead == '|')
        ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(357);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(98);
      END_STATE();
    case 358:
      if (lookahead == '\n')
        SKIP(357);
      END_STATE();
    case 359:
      if (lookahead == '\n')
        ADVANCE(360);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(103);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(105);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(362);
      if (lookahead == '|')
        ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(361);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(360);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(361);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(360);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(361);
      END_STATE();
    case 362:
      if (lookahead == '\n')
        SKIP(359);
      END_STATE();
    case 363:
      if (lookahead == '\n')
        ADVANCE(364);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(103);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(105);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(366);
      if (lookahead == '|')
        ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(365);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(364);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(365);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(364);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(365);
      END_STATE();
    case 366:
      if (lookahead == '\n')
        SKIP(363);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 56, .external_lex_state = 2},
  [2] = {.lex_state = 84},
  [3] = {.lex_state = 90, .external_lex_state = 2},
  [4] = {.lex_state = 90, .external_lex_state = 2},
  [5] = {.lex_state = 92},
  [6] = {.lex_state = 92},
  [7] = {.lex_state = 92},
  [8] = {.lex_state = 100, .external_lex_state = 2},
  [9] = {.lex_state = 110, .external_lex_state = 2},
  [10] = {.lex_state = 112},
  [11] = {.lex_state = 92},
  [12] = {.lex_state = 117, .external_lex_state = 2},
  [13] = {.lex_state = 121},
  [14] = {.lex_state = 123, .external_lex_state = 2},
  [15] = {.lex_state = 138},
  [16] = {.lex_state = 142, .external_lex_state = 2},
  [17] = {.lex_state = 146, .external_lex_state = 2},
  [18] = {.lex_state = 56, .external_lex_state = 2},
  [19] = {.lex_state = 146, .external_lex_state = 2},
  [20] = {.lex_state = 92},
  [21] = {.lex_state = 148},
  [22] = {.lex_state = 138},
  [23] = {.lex_state = 142, .external_lex_state = 2},
  [24] = {.lex_state = 152},
  [25] = {.lex_state = 112},
  [26] = {.lex_state = 154},
  [27] = {.lex_state = 157},
  [28] = {.lex_state = 159},
  [29] = {.lex_state = 146, .external_lex_state = 2},
  [30] = {.lex_state = 154},
  [31] = {.lex_state = 112},
  [32] = {.lex_state = 161},
  [33] = {.lex_state = 157},
  [34] = {.lex_state = 159},
  [35] = {.lex_state = 146, .external_lex_state = 2},
  [36] = {.lex_state = 161},
  [37] = {.lex_state = 165},
  [38] = {.lex_state = 168},
  [39] = {.lex_state = 84},
  [40] = {.lex_state = 171, .external_lex_state = 2},
  [41] = {.lex_state = 92},
  [42] = {.lex_state = 175, .external_lex_state = 3},
  [43] = {.lex_state = 177, .external_lex_state = 2},
  [44] = {.lex_state = 177, .external_lex_state = 2},
  [45] = {.lex_state = 138},
  [46] = {.lex_state = 110, .external_lex_state = 2},
  [47] = {.lex_state = 100, .external_lex_state = 2},
  [48] = {.lex_state = 112},
  [49] = {.lex_state = 157},
  [50] = {.lex_state = 159},
  [51] = {.lex_state = 146, .external_lex_state = 2},
  [52] = {.lex_state = 112},
  [53] = {.lex_state = 112},
  [54] = {.lex_state = 146, .external_lex_state = 2},
  [55] = {.lex_state = 157},
  [56] = {.lex_state = 159},
  [57] = {.lex_state = 146, .external_lex_state = 2},
  [58] = {.lex_state = 146, .external_lex_state = 2},
  [59] = {.lex_state = 171, .external_lex_state = 2},
  [60] = {.lex_state = 92},
  [61] = {.lex_state = 177, .external_lex_state = 2},
  [62] = {.lex_state = 179, .external_lex_state = 2},
  [63] = {.lex_state = 90, .external_lex_state = 2},
  [64] = {.lex_state = 90, .external_lex_state = 2},
  [65] = {.lex_state = 123, .external_lex_state = 2},
  [66] = {.lex_state = 100, .external_lex_state = 2},
  [67] = {.lex_state = 117, .external_lex_state = 2},
  [68] = {.lex_state = 146, .external_lex_state = 2},
  [69] = {.lex_state = 146, .external_lex_state = 2},
  [70] = {.lex_state = 146, .external_lex_state = 2},
  [71] = {.lex_state = 187, .external_lex_state = 2},
  [72] = {.lex_state = 138},
  [73] = {.lex_state = 189},
  [74] = {.lex_state = 191, .external_lex_state = 2},
  [75] = {.lex_state = 154},
  [76] = {.lex_state = 112},
  [77] = {.lex_state = 193},
  [78] = {.lex_state = 195},
  [79] = {.lex_state = 154},
  [80] = {.lex_state = 154},
  [81] = {.lex_state = 197},
  [82] = {.lex_state = 202, .external_lex_state = 2},
  [83] = {.lex_state = 112},
  [84] = {.lex_state = 205, .external_lex_state = 2},
  [85] = {.lex_state = 208},
  [86] = {.lex_state = 146, .external_lex_state = 2},
  [87] = {.lex_state = 193},
  [88] = {.lex_state = 195},
  [89] = {.lex_state = 210},
  [90] = {.lex_state = 112},
  [91] = {.lex_state = 210},
  [92] = {.lex_state = 210},
  [93] = {.lex_state = 197},
  [94] = {.lex_state = 208},
  [95] = {.lex_state = 138},
  [96] = {.lex_state = 161},
  [97] = {.lex_state = 161},
  [98] = {.lex_state = 92},
  [99] = {.lex_state = 112},
  [100] = {.lex_state = 171, .external_lex_state = 2},
  [101] = {.lex_state = 157},
  [102] = {.lex_state = 159},
  [103] = {.lex_state = 146, .external_lex_state = 2},
  [104] = {.lex_state = 171, .external_lex_state = 2},
  [105] = {.lex_state = 171, .external_lex_state = 2},
  [106] = {.lex_state = 177, .external_lex_state = 2},
  [107] = {.lex_state = 112},
  [108] = {.lex_state = 177, .external_lex_state = 2},
  [109] = {.lex_state = 157},
  [110] = {.lex_state = 159},
  [111] = {.lex_state = 146, .external_lex_state = 2},
  [112] = {.lex_state = 177, .external_lex_state = 2},
  [113] = {.lex_state = 177, .external_lex_state = 2},
  [114] = {.lex_state = 212, .external_lex_state = 4},
  [115] = {.lex_state = 177, .external_lex_state = 2},
  [116] = {.lex_state = 177, .external_lex_state = 2},
  [117] = {.lex_state = 138},
  [118] = {.lex_state = 112},
  [119] = {.lex_state = 112},
  [120] = {.lex_state = 197},
  [121] = {.lex_state = 208},
  [122] = {.lex_state = 100, .external_lex_state = 2},
  [123] = {.lex_state = 112},
  [124] = {.lex_state = 146, .external_lex_state = 2},
  [125] = {.lex_state = 112},
  [126] = {.lex_state = 146, .external_lex_state = 2},
  [127] = {.lex_state = 146, .external_lex_state = 2},
  [128] = {.lex_state = 197},
  [129] = {.lex_state = 208},
  [130] = {.lex_state = 171, .external_lex_state = 2},
  [131] = {.lex_state = 177, .external_lex_state = 2},
  [132] = {.lex_state = 112},
  [133] = {.lex_state = 142, .external_lex_state = 2},
  [134] = {.lex_state = 157},
  [135] = {.lex_state = 159},
  [136] = {.lex_state = 146, .external_lex_state = 2},
  [137] = {.lex_state = 142, .external_lex_state = 2},
  [138] = {.lex_state = 138},
  [139] = {.lex_state = 142, .external_lex_state = 2},
  [140] = {.lex_state = 138},
  [141] = {.lex_state = 142, .external_lex_state = 2},
  [142] = {.lex_state = 171, .external_lex_state = 2},
  [143] = {.lex_state = 171, .external_lex_state = 2},
  [144] = {.lex_state = 92},
  [145] = {.lex_state = 177, .external_lex_state = 2},
  [146] = {.lex_state = 138},
  [147] = {.lex_state = 187, .external_lex_state = 2},
  [148] = {.lex_state = 138},
  [149] = {.lex_state = 90, .external_lex_state = 2},
  [150] = {.lex_state = 215, .external_lex_state = 2},
  [151] = {.lex_state = 217},
  [152] = {.lex_state = 220},
  [153] = {.lex_state = 191, .external_lex_state = 2},
  [154] = {.lex_state = 217},
  [155] = {.lex_state = 154},
  [156] = {.lex_state = 222},
  [157] = {.lex_state = 193},
  [158] = {.lex_state = 92},
  [159] = {.lex_state = 154},
  [160] = {.lex_state = 84},
  [161] = {.lex_state = 228, .external_lex_state = 2},
  [162] = {.lex_state = 92},
  [163] = {.lex_state = 175, .external_lex_state = 3},
  [164] = {.lex_state = 230, .external_lex_state = 2},
  [165] = {.lex_state = 230, .external_lex_state = 2},
  [166] = {.lex_state = 202, .external_lex_state = 2},
  [167] = {.lex_state = 112},
  [168] = {.lex_state = 228, .external_lex_state = 2},
  [169] = {.lex_state = 230, .external_lex_state = 2},
  [170] = {.lex_state = 154},
  [171] = {.lex_state = 202, .external_lex_state = 2},
  [172] = {.lex_state = 205, .external_lex_state = 2},
  [173] = {.lex_state = 222},
  [174] = {.lex_state = 193},
  [175] = {.lex_state = 210},
  [176] = {.lex_state = 92},
  [177] = {.lex_state = 210},
  [178] = {.lex_state = 210},
  [179] = {.lex_state = 177, .external_lex_state = 2},
  [180] = {.lex_state = 177, .external_lex_state = 2},
  [181] = {.lex_state = 171, .external_lex_state = 2},
  [182] = {.lex_state = 112},
  [183] = {.lex_state = 171, .external_lex_state = 2},
  [184] = {.lex_state = 171, .external_lex_state = 2},
  [185] = {.lex_state = 197},
  [186] = {.lex_state = 208},
  [187] = {.lex_state = 171, .external_lex_state = 2},
  [188] = {.lex_state = 171, .external_lex_state = 2},
  [189] = {.lex_state = 177, .external_lex_state = 2},
  [190] = {.lex_state = 177, .external_lex_state = 2},
  [191] = {.lex_state = 112},
  [192] = {.lex_state = 177, .external_lex_state = 2},
  [193] = {.lex_state = 177, .external_lex_state = 2},
  [194] = {.lex_state = 197},
  [195] = {.lex_state = 208},
  [196] = {.lex_state = 212, .external_lex_state = 4},
  [197] = {.lex_state = 177, .external_lex_state = 2},
  [198] = {.lex_state = 157},
  [199] = {.lex_state = 159},
  [200] = {.lex_state = 212, .external_lex_state = 4},
  [201] = {.lex_state = 92},
  [202] = {.lex_state = 112},
  [203] = {.lex_state = 112},
  [204] = {.lex_state = 146, .external_lex_state = 2},
  [205] = {.lex_state = 92},
  [206] = {.lex_state = 146, .external_lex_state = 2},
  [207] = {.lex_state = 146, .external_lex_state = 2},
  [208] = {.lex_state = 177, .external_lex_state = 2},
  [209] = {.lex_state = 232, .external_lex_state = 2},
  [210] = {.lex_state = 112},
  [211] = {.lex_state = 232, .external_lex_state = 2},
  [212] = {.lex_state = 232, .external_lex_state = 2},
  [213] = {.lex_state = 197},
  [214] = {.lex_state = 208},
  [215] = {.lex_state = 171, .external_lex_state = 2},
  [216] = {.lex_state = 171, .external_lex_state = 2},
  [217] = {.lex_state = 177, .external_lex_state = 2},
  [218] = {.lex_state = 146, .external_lex_state = 2},
  [219] = {.lex_state = 146, .external_lex_state = 2},
  [220] = {.lex_state = 138},
  [221] = {.lex_state = 152},
  [222] = {.lex_state = 215, .external_lex_state = 2},
  [223] = {.lex_state = 138},
  [224] = {.lex_state = 220},
  [225] = {.lex_state = 217},
  [226] = {.lex_state = 217},
  [227] = {.lex_state = 138},
  [228] = {.lex_state = 208},
  [229] = {.lex_state = 208},
  [230] = {.lex_state = 222},
  [231] = {.lex_state = 222},
  [232] = {.lex_state = 222},
  [233] = {.lex_state = 234},
  [234] = {.lex_state = 234},
  [235] = {.lex_state = 92},
  [236] = {.lex_state = 112},
  [237] = {.lex_state = 228, .external_lex_state = 2},
  [238] = {.lex_state = 157},
  [239] = {.lex_state = 159},
  [240] = {.lex_state = 146, .external_lex_state = 2},
  [241] = {.lex_state = 228, .external_lex_state = 2},
  [242] = {.lex_state = 228, .external_lex_state = 2},
  [243] = {.lex_state = 230, .external_lex_state = 2},
  [244] = {.lex_state = 230, .external_lex_state = 2},
  [245] = {.lex_state = 230, .external_lex_state = 2},
  [246] = {.lex_state = 230, .external_lex_state = 2},
  [247] = {.lex_state = 212, .external_lex_state = 4},
  [248] = {.lex_state = 230, .external_lex_state = 2},
  [249] = {.lex_state = 230, .external_lex_state = 2},
  [250] = {.lex_state = 202, .external_lex_state = 2},
  [251] = {.lex_state = 228, .external_lex_state = 2},
  [252] = {.lex_state = 230, .external_lex_state = 2},
  [253] = {.lex_state = 228, .external_lex_state = 2},
  [254] = {.lex_state = 228, .external_lex_state = 2},
  [255] = {.lex_state = 230, .external_lex_state = 2},
  [256] = {.lex_state = 138},
  [257] = {.lex_state = 222},
  [258] = {.lex_state = 222},
  [259] = {.lex_state = 234},
  [260] = {.lex_state = 234},
  [261] = {.lex_state = 171, .external_lex_state = 2},
  [262] = {.lex_state = 92},
  [263] = {.lex_state = 171, .external_lex_state = 2},
  [264] = {.lex_state = 171, .external_lex_state = 2},
  [265] = {.lex_state = 177, .external_lex_state = 2},
  [266] = {.lex_state = 92},
  [267] = {.lex_state = 177, .external_lex_state = 2},
  [268] = {.lex_state = 177, .external_lex_state = 2},
  [269] = {.lex_state = 212, .external_lex_state = 4},
  [270] = {.lex_state = 212, .external_lex_state = 4},
  [271] = {.lex_state = 197},
  [272] = {.lex_state = 212, .external_lex_state = 4},
  [273] = {.lex_state = 177, .external_lex_state = 2},
  [274] = {.lex_state = 234},
  [275] = {.lex_state = 234},
  [276] = {.lex_state = 234},
  [277] = {.lex_state = 234},
  [278] = {.lex_state = 232, .external_lex_state = 2},
  [279] = {.lex_state = 92},
  [280] = {.lex_state = 232, .external_lex_state = 2},
  [281] = {.lex_state = 232, .external_lex_state = 2},
  [282] = {.lex_state = 177, .external_lex_state = 2},
  [283] = {.lex_state = 177, .external_lex_state = 2},
  [284] = {.lex_state = 191, .external_lex_state = 2},
  [285] = {.lex_state = 138},
  [286] = {.lex_state = 220},
  [287] = {.lex_state = 236, .external_lex_state = 2},
  [288] = {.lex_state = 236, .external_lex_state = 2},
  [289] = {.lex_state = 138},
  [290] = {.lex_state = 222},
  [291] = {.lex_state = 222},
  [292] = {.lex_state = 154},
  [293] = {.lex_state = 154},
  [294] = {.lex_state = 230, .external_lex_state = 2},
  [295] = {.lex_state = 230, .external_lex_state = 2},
  [296] = {.lex_state = 228, .external_lex_state = 2},
  [297] = {.lex_state = 112},
  [298] = {.lex_state = 228, .external_lex_state = 2},
  [299] = {.lex_state = 228, .external_lex_state = 2},
  [300] = {.lex_state = 197},
  [301] = {.lex_state = 208},
  [302] = {.lex_state = 228, .external_lex_state = 2},
  [303] = {.lex_state = 228, .external_lex_state = 2},
  [304] = {.lex_state = 230, .external_lex_state = 2},
  [305] = {.lex_state = 230, .external_lex_state = 2},
  [306] = {.lex_state = 212, .external_lex_state = 4},
  [307] = {.lex_state = 230, .external_lex_state = 2},
  [308] = {.lex_state = 228, .external_lex_state = 2},
  [309] = {.lex_state = 228, .external_lex_state = 2},
  [310] = {.lex_state = 230, .external_lex_state = 2},
  [311] = {.lex_state = 138},
  [312] = {.lex_state = 222},
  [313] = {.lex_state = 210},
  [314] = {.lex_state = 210},
  [315] = {.lex_state = 234},
  [316] = {.lex_state = 234},
  [317] = {.lex_state = 234},
  [318] = {.lex_state = 234},
  [319] = {.lex_state = 92},
  [320] = {.lex_state = 212, .external_lex_state = 4},
  [321] = {.lex_state = 112},
  [322] = {.lex_state = 112},
  [323] = {.lex_state = 146, .external_lex_state = 2},
  [324] = {.lex_state = 146, .external_lex_state = 2},
  [325] = {.lex_state = 234},
  [326] = {.lex_state = 234},
  [327] = {.lex_state = 191, .external_lex_state = 2},
  [328] = {.lex_state = 138},
  [329] = {.lex_state = 222},
  [330] = {.lex_state = 236, .external_lex_state = 2},
  [331] = {.lex_state = 222},
  [332] = {.lex_state = 236, .external_lex_state = 2},
  [333] = {.lex_state = 138},
  [334] = {.lex_state = 228, .external_lex_state = 2},
  [335] = {.lex_state = 92},
  [336] = {.lex_state = 228, .external_lex_state = 2},
  [337] = {.lex_state = 228, .external_lex_state = 2},
  [338] = {.lex_state = 230, .external_lex_state = 2},
  [339] = {.lex_state = 230, .external_lex_state = 2},
  [340] = {.lex_state = 230, .external_lex_state = 2},
  [341] = {.lex_state = 138},
  [342] = {.lex_state = 171, .external_lex_state = 2},
  [343] = {.lex_state = 171, .external_lex_state = 2},
  [344] = {.lex_state = 177, .external_lex_state = 2},
  [345] = {.lex_state = 177, .external_lex_state = 2},
  [346] = {.lex_state = 234},
  [347] = {.lex_state = 234},
  [348] = {.lex_state = 232, .external_lex_state = 2},
  [349] = {.lex_state = 232, .external_lex_state = 2},
  [350] = {.lex_state = 222},
  [351] = {.lex_state = 222},
  [352] = {.lex_state = 234},
  [353] = {.lex_state = 234},
  [354] = {.lex_state = 212, .external_lex_state = 4},
  [355] = {.lex_state = 212, .external_lex_state = 4},
  [356] = {.lex_state = 228, .external_lex_state = 2},
  [357] = {.lex_state = 228, .external_lex_state = 2},
  [358] = {.lex_state = 138},
  [359] = {.lex_state = 191, .external_lex_state = 2},
  [360] = {.lex_state = 138},
  [361] = {.lex_state = 193},
  [362] = {.lex_state = 138},
  [363] = {.lex_state = 238, .external_lex_state = 2},
  [364] = {.lex_state = 286, .external_lex_state = 2},
  [365] = {.lex_state = 92},
  [366] = {.lex_state = 290, .external_lex_state = 2},
  [367] = {.lex_state = 296, .external_lex_state = 5},
  [368] = {.lex_state = 296, .external_lex_state = 5},
  [369] = {.lex_state = 92},
  [370] = {.lex_state = 175, .external_lex_state = 3},
  [371] = {.lex_state = 300, .external_lex_state = 2},
  [372] = {.lex_state = 339, .external_lex_state = 2},
  [373] = {.lex_state = 212, .external_lex_state = 4},
  [374] = {.lex_state = 212, .external_lex_state = 4},
  [375] = {.lex_state = 339, .external_lex_state = 2},
  [376] = {.lex_state = 84},
  [377] = {.lex_state = 179, .external_lex_state = 2},
  [378] = {.lex_state = 138},
  [379] = {.lex_state = 217},
  [380] = {.lex_state = 220},
  [381] = {.lex_state = 222},
  [382] = {.lex_state = 341},
  [383] = {.lex_state = 142, .external_lex_state = 2},
  [384] = {.lex_state = 343, .external_lex_state = 2},
  [385] = {.lex_state = 296, .external_lex_state = 5},
  [386] = {.lex_state = 296, .external_lex_state = 2},
  [387] = {.lex_state = 353, .external_lex_state = 2},
  [388] = {.lex_state = 339, .external_lex_state = 2},
  [389] = {.lex_state = 339, .external_lex_state = 2},
  [390] = {.lex_state = 123, .external_lex_state = 2},
  [391] = {.lex_state = 217},
  [392] = {.lex_state = 222},
  [393] = {.lex_state = 355, .external_lex_state = 2},
  [394] = {.lex_state = 146, .external_lex_state = 2},
  [395] = {.lex_state = 339, .external_lex_state = 2},
  [396] = {.lex_state = 112},
  [397] = {.lex_state = 212, .external_lex_state = 4},
  [398] = {.lex_state = 191, .external_lex_state = 2},
  [399] = {.lex_state = 222},
  [400] = {.lex_state = 222},
  [401] = {.lex_state = 236, .external_lex_state = 2},
  [402] = {.lex_state = 84},
  [403] = {.lex_state = 357, .external_lex_state = 2},
  [404] = {.lex_state = 234},
  [405] = {.lex_state = 92},
  [406] = {.lex_state = 234},
  [407] = {.lex_state = 339, .external_lex_state = 2},
  [408] = {.lex_state = 339, .external_lex_state = 2},
  [409] = {.lex_state = 232, .external_lex_state = 2},
  [410] = {.lex_state = 232, .external_lex_state = 2},
  [411] = {.lex_state = 343, .external_lex_state = 2},
  [412] = {.lex_state = 296, .external_lex_state = 5},
  [413] = {.lex_state = 296, .external_lex_state = 5},
  [414] = {.lex_state = 112},
  [415] = {.lex_state = 353, .external_lex_state = 2},
  [416] = {.lex_state = 157},
  [417] = {.lex_state = 159},
  [418] = {.lex_state = 146, .external_lex_state = 2},
  [419] = {.lex_state = 353, .external_lex_state = 2},
  [420] = {.lex_state = 193},
  [421] = {.lex_state = 138},
  [422] = {.lex_state = 339, .external_lex_state = 2},
  [423] = {.lex_state = 92},
  [424] = {.lex_state = 138},
  [425] = {.lex_state = 296, .external_lex_state = 2},
  [426] = {.lex_state = 296, .external_lex_state = 5},
  [427] = {.lex_state = 222},
  [428] = {.lex_state = 138},
  [429] = {.lex_state = 220},
  [430] = {.lex_state = 138},
  [431] = {.lex_state = 112},
  [432] = {.lex_state = 355, .external_lex_state = 2},
  [433] = {.lex_state = 157},
  [434] = {.lex_state = 159},
  [435] = {.lex_state = 146, .external_lex_state = 2},
  [436] = {.lex_state = 355, .external_lex_state = 2},
  [437] = {.lex_state = 339, .external_lex_state = 2},
  [438] = {.lex_state = 359, .external_lex_state = 2},
  [439] = {.lex_state = 112},
  [440] = {.lex_state = 363, .external_lex_state = 2},
  [441] = {.lex_state = 339, .external_lex_state = 2},
  [442] = {.lex_state = 343, .external_lex_state = 2},
  [443] = {.lex_state = 339, .external_lex_state = 2},
  [444] = {.lex_state = 92},
  [445] = {.lex_state = 112},
  [446] = {.lex_state = 357, .external_lex_state = 2},
  [447] = {.lex_state = 157},
  [448] = {.lex_state = 159},
  [449] = {.lex_state = 146, .external_lex_state = 2},
  [450] = {.lex_state = 357, .external_lex_state = 2},
  [451] = {.lex_state = 357, .external_lex_state = 2},
  [452] = {.lex_state = 339, .external_lex_state = 2},
  [453] = {.lex_state = 112},
  [454] = {.lex_state = 339, .external_lex_state = 2},
  [455] = {.lex_state = 157},
  [456] = {.lex_state = 159},
  [457] = {.lex_state = 146, .external_lex_state = 2},
  [458] = {.lex_state = 339, .external_lex_state = 2},
  [459] = {.lex_state = 296, .external_lex_state = 5},
  [460] = {.lex_state = 353, .external_lex_state = 2},
  [461] = {.lex_state = 112},
  [462] = {.lex_state = 353, .external_lex_state = 2},
  [463] = {.lex_state = 353, .external_lex_state = 2},
  [464] = {.lex_state = 197},
  [465] = {.lex_state = 208},
  [466] = {.lex_state = 222},
  [467] = {.lex_state = 353, .external_lex_state = 2},
  [468] = {.lex_state = 353, .external_lex_state = 2},
  [469] = {.lex_state = 138},
  [470] = {.lex_state = 355, .external_lex_state = 2},
  [471] = {.lex_state = 112},
  [472] = {.lex_state = 355, .external_lex_state = 2},
  [473] = {.lex_state = 355, .external_lex_state = 2},
  [474] = {.lex_state = 197},
  [475] = {.lex_state = 208},
  [476] = {.lex_state = 357, .external_lex_state = 2},
  [477] = {.lex_state = 339, .external_lex_state = 2},
  [478] = {.lex_state = 359, .external_lex_state = 2},
  [479] = {.lex_state = 112},
  [480] = {.lex_state = 357, .external_lex_state = 2},
  [481] = {.lex_state = 339, .external_lex_state = 2},
  [482] = {.lex_state = 339, .external_lex_state = 2},
  [483] = {.lex_state = 339, .external_lex_state = 2},
  [484] = {.lex_state = 357, .external_lex_state = 2},
  [485] = {.lex_state = 112},
  [486] = {.lex_state = 357, .external_lex_state = 2},
  [487] = {.lex_state = 357, .external_lex_state = 2},
  [488] = {.lex_state = 197},
  [489] = {.lex_state = 208},
  [490] = {.lex_state = 357, .external_lex_state = 2},
  [491] = {.lex_state = 357, .external_lex_state = 2},
  [492] = {.lex_state = 339, .external_lex_state = 2},
  [493] = {.lex_state = 339, .external_lex_state = 2},
  [494] = {.lex_state = 112},
  [495] = {.lex_state = 339, .external_lex_state = 2},
  [496] = {.lex_state = 339, .external_lex_state = 2},
  [497] = {.lex_state = 197},
  [498] = {.lex_state = 208},
  [499] = {.lex_state = 353, .external_lex_state = 2},
  [500] = {.lex_state = 92},
  [501] = {.lex_state = 353, .external_lex_state = 2},
  [502] = {.lex_state = 353, .external_lex_state = 2},
  [503] = {.lex_state = 138},
  [504] = {.lex_state = 222},
  [505] = {.lex_state = 355, .external_lex_state = 2},
  [506] = {.lex_state = 92},
  [507] = {.lex_state = 355, .external_lex_state = 2},
  [508] = {.lex_state = 355, .external_lex_state = 2},
  [509] = {.lex_state = 357, .external_lex_state = 2},
  [510] = {.lex_state = 339, .external_lex_state = 2},
  [511] = {.lex_state = 359, .external_lex_state = 2},
  [512] = {.lex_state = 357, .external_lex_state = 2},
  [513] = {.lex_state = 339, .external_lex_state = 2},
  [514] = {.lex_state = 357, .external_lex_state = 2},
  [515] = {.lex_state = 92},
  [516] = {.lex_state = 357, .external_lex_state = 2},
  [517] = {.lex_state = 357, .external_lex_state = 2},
  [518] = {.lex_state = 339, .external_lex_state = 2},
  [519] = {.lex_state = 92},
  [520] = {.lex_state = 339, .external_lex_state = 2},
  [521] = {.lex_state = 339, .external_lex_state = 2},
  [522] = {.lex_state = 234},
  [523] = {.lex_state = 234},
  [524] = {.lex_state = 138},
  [525] = {.lex_state = 234},
  [526] = {.lex_state = 234},
  [527] = {.lex_state = 339, .external_lex_state = 2},
  [528] = {.lex_state = 339, .external_lex_state = 2},
  [529] = {.lex_state = 234},
  [530] = {.lex_state = 234},
  [531] = {.lex_state = 234},
  [532] = {.lex_state = 234},
  [533] = {.lex_state = 353, .external_lex_state = 2},
  [534] = {.lex_state = 353, .external_lex_state = 2},
  [535] = {.lex_state = 355, .external_lex_state = 2},
  [536] = {.lex_state = 355, .external_lex_state = 2},
  [537] = {.lex_state = 357, .external_lex_state = 2},
  [538] = {.lex_state = 357, .external_lex_state = 2},
  [539] = {.lex_state = 339, .external_lex_state = 2},
  [540] = {.lex_state = 339, .external_lex_state = 2},
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
    [sym_program] = STATE(13),
    [sym__terminated_statement] = STATE(377),
    [sym_while_statement] = STATE(378),
    [sym_do_group] = STATE(72),
    [sym_if_statement] = STATE(378),
    [sym_elif_clause] = STATE(379),
    [sym_else_clause] = STATE(380),
    [sym_case_statement] = STATE(378),
    [sym_case_item] = STATE(381),
    [sym_bracket_command] = STATE(378),
    [sym_command] = STATE(382),
    [sym_pipeline] = STATE(378),
    [sym_list] = STATE(378),
    [sym_subshell] = STATE(378),
    [sym_environment_variable_assignment] = STATE(383),
    [sym_quoted_argument] = STATE(384),
    [sym_expansion] = STATE(385),
    [sym_operator_expansion] = STATE(385),
    [sym_command_substitution] = STATE(386),
    [sym_file_redirect] = STATE(387),
    [sym_heredoc_redirect] = STATE(388),
    [sym_heredoc] = STATE(389),
    [aux_sym_program_repeat1] = STATE(390),
    [aux_sym_if_statement_repeat1] = STATE(391),
    [aux_sym_case_statement_repeat1] = STATE(392),
    [aux_sym_bracket_command_repeat1] = STATE(393),
    [aux_sym_command_repeat1] = STATE(394),
    [aux_sym_command_repeat2] = STATE(395),
    [aux_sym_quoted_argument_repeat1] = STATE(396),
    [aux_sym_heredoc_repeat1] = STATE(397),
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
    [anon_sym_COLON] = ACTIONS(43),
    [anon_sym_PIPE] = ACTIONS(45),
    [anon_sym_PIPE_PIPE] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_DOLLAR] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(57),
    [anon_sym_LT] = ACTIONS(59),
    [anon_sym_GT] = ACTIONS(59),
    [anon_sym_GT_GT] = ACTIONS(61),
    [anon_sym_LT_AMP] = ACTIONS(61),
    [anon_sym_GT_AMP] = ACTIONS(61),
    [anon_sym_LT_LT] = ACTIONS(63),
    [anon_sym_LT_LT_DASH] = ACTIONS(65),
    [sym_comment] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(69),
    [anon_sym_AMP] = ACTIONS(69),
  },
  [1] = {
    [sym_program] = STATE(13),
    [sym__terminated_statement] = STATE(14),
    [sym_while_statement] = STATE(15),
    [sym_if_statement] = STATE(15),
    [sym_case_statement] = STATE(15),
    [sym_bracket_command] = STATE(15),
    [sym_command] = STATE(15),
    [sym_pipeline] = STATE(15),
    [sym_list] = STATE(15),
    [sym_subshell] = STATE(15),
    [sym_environment_variable_assignment] = STATE(16),
    [sym_quoted_argument] = STATE(8),
    [sym_file_redirect] = STATE(17),
    [aux_sym_program_repeat1] = STATE(18),
    [aux_sym_command_repeat1] = STATE(19),
    [sym_file_descriptor] = ACTIONS(71),
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_while] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(77),
    [anon_sym_case] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [sym_single_quoted_argument] = ACTIONS(91),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_AMP_GT] = ACTIONS(93),
    [anon_sym_AMP_GT_GT] = ACTIONS(93),
    [anon_sym_LT_AMP] = ACTIONS(93),
    [anon_sym_GT_AMP] = ACTIONS(93),
    [sym_leading_word] = ACTIONS(95),
    [sym_comment] = ACTIONS(67),
  },
  [2] = {
    [anon_sym_LT] = ACTIONS(97),
    [anon_sym_GT] = ACTIONS(97),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_AMP_GT] = ACTIONS(97),
    [anon_sym_AMP_GT_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_comment] = ACTIONS(67),
  },
  [3] = {
    [sym__terminated_statement] = STATE(21),
    [sym_while_statement] = STATE(22),
    [sym_if_statement] = STATE(22),
    [sym_case_statement] = STATE(22),
    [sym_bracket_command] = STATE(22),
    [sym_command] = STATE(22),
    [sym_pipeline] = STATE(22),
    [sym_list] = STATE(22),
    [sym_subshell] = STATE(22),
    [sym_environment_variable_assignment] = STATE(23),
    [sym_quoted_argument] = STATE(8),
    [sym_file_redirect] = STATE(17),
    [aux_sym_command_repeat1] = STATE(19),
    [sym_file_descriptor] = ACTIONS(71),
    [anon_sym_while] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(77),
    [anon_sym_case] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [sym_single_quoted_argument] = ACTIONS(91),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_AMP_GT] = ACTIONS(93),
    [anon_sym_AMP_GT_GT] = ACTIONS(93),
    [anon_sym_LT_AMP] = ACTIONS(93),
    [anon_sym_GT_AMP] = ACTIONS(93),
    [sym_leading_word] = ACTIONS(95),
    [sym_comment] = ACTIONS(67),
  },
  [4] = {
    [sym__terminated_statement] = STATE(24),
    [sym_while_statement] = STATE(22),
    [sym_if_statement] = STATE(22),
    [sym_case_statement] = STATE(22),
    [sym_bracket_command] = STATE(22),
    [sym_command] = STATE(22),
    [sym_pipeline] = STATE(22),
    [sym_list] = STATE(22),
    [sym_subshell] = STATE(22),
    [sym_environment_variable_assignment] = STATE(23),
    [sym_quoted_argument] = STATE(8),
    [sym_file_redirect] = STATE(17),
    [aux_sym_command_repeat1] = STATE(19),
    [sym_file_descriptor] = ACTIONS(71),
    [anon_sym_while] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(77),
    [anon_sym_case] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [sym_single_quoted_argument] = ACTIONS(91),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_AMP_GT] = ACTIONS(93),
    [anon_sym_AMP_GT_GT] = ACTIONS(93),
    [anon_sym_LT_AMP] = ACTIONS(93),
    [anon_sym_GT_AMP] = ACTIONS(93),
    [sym_leading_word] = ACTIONS(95),
    [sym_comment] = ACTIONS(67),
  },
  [5] = {
    [sym_quoted_argument] = STATE(26),
    [sym_expansion] = STATE(26),
    [sym_operator_expansion] = STATE(26),
    [sym_command_substitution] = STATE(26),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_single_quoted_argument] = ACTIONS(103),
    [anon_sym_DOLLAR] = ACTIONS(105),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(107),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(109),
    [sym_word] = ACTIONS(111),
    [sym_comment] = ACTIONS(67),
  },
  [6] = {
    [sym_quoted_argument] = STATE(32),
    [sym_expansion] = STATE(32),
    [sym_operator_expansion] = STATE(32),
    [sym_command_substitution] = STATE(32),
    [aux_sym_bracket_command_repeat1] = STATE(37),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [sym_single_quoted_argument] = ACTIONS(115),
    [anon_sym_DOLLAR] = ACTIONS(117),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(119),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(121),
    [sym_word] = ACTIONS(123),
    [sym_comment] = ACTIONS(67),
  },
  [7] = {
    [sym_quoted_argument] = STATE(32),
    [sym_expansion] = STATE(32),
    [sym_operator_expansion] = STATE(32),
    [sym_command_substitution] = STATE(32),
    [aux_sym_bracket_command_repeat1] = STATE(38),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [sym_single_quoted_argument] = ACTIONS(115),
    [anon_sym_DOLLAR] = ACTIONS(117),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(119),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(121),
    [sym_word] = ACTIONS(123),
    [sym_comment] = ACTIONS(67),
  },
  [8] = {
    [sym_file_redirect] = STATE(43),
    [sym_heredoc_redirect] = STATE(43),
    [aux_sym_command_repeat2] = STATE(44),
    [sym_file_descriptor] = ACTIONS(125),
    [anon_sym_SEMI_SEMI] = ACTIONS(127),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(129),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_PIPE_AMP] = ACTIONS(127),
    [anon_sym_AMP_AMP] = ACTIONS(127),
    [anon_sym_PIPE_PIPE] = ACTIONS(127),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_GT_GT] = ACTIONS(131),
    [anon_sym_AMP_GT] = ACTIONS(131),
    [anon_sym_AMP_GT_GT] = ACTIONS(131),
    [anon_sym_LT_AMP] = ACTIONS(131),
    [anon_sym_GT_AMP] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(133),
    [anon_sym_LT_LT_DASH] = ACTIONS(133),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(127),
    [anon_sym_LF] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
  },
  [9] = {
    [sym__terminated_statement] = STATE(14),
    [sym_while_statement] = STATE(15),
    [sym_if_statement] = STATE(15),
    [sym_case_statement] = STATE(15),
    [sym_bracket_command] = STATE(15),
    [sym_command] = STATE(15),
    [sym_pipeline] = STATE(15),
    [sym_list] = STATE(15),
    [sym_subshell] = STATE(15),
    [sym_environment_variable_assignment] = STATE(16),
    [sym_quoted_argument] = STATE(8),
    [sym_file_redirect] = STATE(17),
    [aux_sym_program_repeat1] = STATE(46),
    [aux_sym_command_repeat1] = STATE(19),
    [sym_file_descriptor] = ACTIONS(71),
    [anon_sym_while] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(77),
    [anon_sym_case] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [sym_single_quoted_argument] = ACTIONS(91),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_AMP_GT] = ACTIONS(93),
    [anon_sym_AMP_GT_GT] = ACTIONS(93),
    [anon_sym_LT_AMP] = ACTIONS(93),
    [anon_sym_GT_AMP] = ACTIONS(93),
    [sym_leading_word] = ACTIONS(95),
    [sym_comment] = ACTIONS(67),
  },
  [10] = {
    [sym_expansion] = STATE(48),
    [sym_operator_expansion] = STATE(48),
    [sym_command_substitution] = STATE(48),
    [aux_sym_quoted_argument_repeat1] = STATE(52),
    [anon_sym_DQUOTE] = ACTIONS(139),
    [sym__quoted_chars] = ACTIONS(141),
    [anon_sym_DOLLAR] = ACTIONS(143),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(145),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(147),
    [sym_comment] = ACTIONS(135),
  },
  [11] = {
    [sym_quoted_argument] = STATE(54),
    [sym_expansion] = STATE(54),
    [sym_operator_expansion] = STATE(54),
    [sym_command_substitution] = STATE(54),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [sym_single_quoted_argument] = ACTIONS(151),
    [anon_sym_DOLLAR] = ACTIONS(153),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(155),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(157),
    [sym_word] = ACTIONS(159),
    [sym_comment] = ACTIONS(67),
  },
  [12] = {
    [sym_file_redirect] = STATE(43),
    [sym_heredoc_redirect] = STATE(43),
    [aux_sym_command_repeat2] = STATE(61),
    [sym_file_descriptor] = ACTIONS(125),
    [anon_sym_SEMI_SEMI] = ACTIONS(161),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(163),
    [anon_sym_PIPE] = ACTIONS(161),
    [anon_sym_PIPE_AMP] = ACTIONS(161),
    [anon_sym_AMP_AMP] = ACTIONS(161),
    [anon_sym_PIPE_PIPE] = ACTIONS(161),
    [anon_sym_EQ] = ACTIONS(165),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_GT_GT] = ACTIONS(131),
    [anon_sym_AMP_GT] = ACTIONS(131),
    [anon_sym_AMP_GT_GT] = ACTIONS(131),
    [anon_sym_LT_AMP] = ACTIONS(131),
    [anon_sym_GT_AMP] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(133),
    [anon_sym_LT_LT_DASH] = ACTIONS(133),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(161),
    [anon_sym_LF] = ACTIONS(161),
    [anon_sym_AMP] = ACTIONS(161),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [sym_comment] = ACTIONS(67),
  },
  [14] = {
    [sym_file_descriptor] = ACTIONS(169),
    [ts_builtin_sym_end] = ACTIONS(169),
    [anon_sym_while] = ACTIONS(171),
    [anon_sym_done] = ACTIONS(171),
    [anon_sym_if] = ACTIONS(171),
    [anon_sym_fi] = ACTIONS(171),
    [anon_sym_elif] = ACTIONS(171),
    [anon_sym_else] = ACTIONS(171),
    [anon_sym_case] = ACTIONS(171),
    [anon_sym_RPAREN] = ACTIONS(169),
    [anon_sym_SEMI_SEMI] = ACTIONS(169),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(171),
    [anon_sym_COLON] = ACTIONS(169),
    [anon_sym_LPAREN] = ACTIONS(169),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [sym_single_quoted_argument] = ACTIONS(171),
    [anon_sym_LT] = ACTIONS(171),
    [anon_sym_GT] = ACTIONS(171),
    [anon_sym_GT_GT] = ACTIONS(171),
    [anon_sym_AMP_GT] = ACTIONS(171),
    [anon_sym_AMP_GT_GT] = ACTIONS(171),
    [anon_sym_LT_AMP] = ACTIONS(171),
    [anon_sym_GT_AMP] = ACTIONS(171),
    [sym_leading_word] = ACTIONS(173),
    [sym_comment] = ACTIONS(67),
  },
  [15] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(175),
    [anon_sym_PIPE] = ACTIONS(177),
    [anon_sym_PIPE_AMP] = ACTIONS(177),
    [anon_sym_AMP_AMP] = ACTIONS(179),
    [anon_sym_PIPE_PIPE] = ACTIONS(179),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(175),
    [anon_sym_LF] = ACTIONS(175),
    [anon_sym_AMP] = ACTIONS(175),
  },
  [16] = {
    [sym_file_descriptor] = ACTIONS(181),
    [anon_sym_SEMI_SEMI] = ACTIONS(175),
    [anon_sym_COLON] = ACTIONS(183),
    [anon_sym_PIPE] = ACTIONS(177),
    [anon_sym_PIPE_AMP] = ACTIONS(177),
    [anon_sym_AMP_AMP] = ACTIONS(179),
    [anon_sym_PIPE_PIPE] = ACTIONS(179),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_single_quoted_argument] = ACTIONS(183),
    [anon_sym_LT] = ACTIONS(183),
    [anon_sym_GT] = ACTIONS(183),
    [anon_sym_GT_GT] = ACTIONS(183),
    [anon_sym_AMP_GT] = ACTIONS(183),
    [anon_sym_AMP_GT_GT] = ACTIONS(183),
    [anon_sym_LT_AMP] = ACTIONS(183),
    [anon_sym_GT_AMP] = ACTIONS(183),
    [sym_leading_word] = ACTIONS(183),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(175),
    [anon_sym_LF] = ACTIONS(175),
    [anon_sym_AMP] = ACTIONS(175),
  },
  [17] = {
    [sym_file_descriptor] = ACTIONS(181),
    [anon_sym_COLON] = ACTIONS(181),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [sym_single_quoted_argument] = ACTIONS(185),
    [anon_sym_LT] = ACTIONS(185),
    [anon_sym_GT] = ACTIONS(185),
    [anon_sym_GT_GT] = ACTIONS(185),
    [anon_sym_AMP_GT] = ACTIONS(185),
    [anon_sym_AMP_GT_GT] = ACTIONS(185),
    [anon_sym_LT_AMP] = ACTIONS(185),
    [anon_sym_GT_AMP] = ACTIONS(185),
    [sym_leading_word] = ACTIONS(183),
    [sym_comment] = ACTIONS(67),
  },
  [18] = {
    [sym__terminated_statement] = STATE(65),
    [sym_while_statement] = STATE(15),
    [sym_if_statement] = STATE(15),
    [sym_case_statement] = STATE(15),
    [sym_bracket_command] = STATE(15),
    [sym_command] = STATE(15),
    [sym_pipeline] = STATE(15),
    [sym_list] = STATE(15),
    [sym_subshell] = STATE(15),
    [sym_environment_variable_assignment] = STATE(16),
    [sym_quoted_argument] = STATE(8),
    [sym_file_redirect] = STATE(17),
    [aux_sym_command_repeat1] = STATE(19),
    [sym_file_descriptor] = ACTIONS(71),
    [ts_builtin_sym_end] = ACTIONS(187),
    [anon_sym_while] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(77),
    [anon_sym_case] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [sym_single_quoted_argument] = ACTIONS(91),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_AMP_GT] = ACTIONS(93),
    [anon_sym_AMP_GT_GT] = ACTIONS(93),
    [anon_sym_LT_AMP] = ACTIONS(93),
    [anon_sym_GT_AMP] = ACTIONS(93),
    [sym_leading_word] = ACTIONS(95),
    [sym_comment] = ACTIONS(67),
  },
  [19] = {
    [sym_environment_variable_assignment] = STATE(68),
    [sym_quoted_argument] = STATE(66),
    [sym_file_redirect] = STATE(68),
    [sym_file_descriptor] = ACTIONS(71),
    [anon_sym_COLON] = ACTIONS(189),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [sym_single_quoted_argument] = ACTIONS(191),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_AMP_GT] = ACTIONS(93),
    [anon_sym_AMP_GT_GT] = ACTIONS(93),
    [anon_sym_LT_AMP] = ACTIONS(93),
    [anon_sym_GT_AMP] = ACTIONS(93),
    [sym_leading_word] = ACTIONS(193),
    [sym_comment] = ACTIONS(67),
  },
  [20] = {
    [sym_quoted_argument] = STATE(69),
    [sym_expansion] = STATE(69),
    [sym_operator_expansion] = STATE(69),
    [sym_command_substitution] = STATE(69),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [sym_single_quoted_argument] = ACTIONS(195),
    [anon_sym_DOLLAR] = ACTIONS(153),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(155),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(157),
    [sym_word] = ACTIONS(197),
    [sym_comment] = ACTIONS(67),
  },
  [21] = {
    [sym_do_group] = STATE(72),
    [anon_sym_do] = ACTIONS(199),
    [sym_comment] = ACTIONS(67),
  },
  [22] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(201),
    [anon_sym_PIPE] = ACTIONS(177),
    [anon_sym_PIPE_AMP] = ACTIONS(177),
    [anon_sym_AMP_AMP] = ACTIONS(179),
    [anon_sym_PIPE_PIPE] = ACTIONS(179),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(201),
    [anon_sym_LF] = ACTIONS(201),
    [anon_sym_AMP] = ACTIONS(201),
  },
  [23] = {
    [sym_file_descriptor] = ACTIONS(181),
    [anon_sym_SEMI_SEMI] = ACTIONS(201),
    [anon_sym_COLON] = ACTIONS(183),
    [anon_sym_PIPE] = ACTIONS(177),
    [anon_sym_PIPE_AMP] = ACTIONS(177),
    [anon_sym_AMP_AMP] = ACTIONS(179),
    [anon_sym_PIPE_PIPE] = ACTIONS(179),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_single_quoted_argument] = ACTIONS(183),
    [anon_sym_LT] = ACTIONS(183),
    [anon_sym_GT] = ACTIONS(183),
    [anon_sym_GT_GT] = ACTIONS(183),
    [anon_sym_AMP_GT] = ACTIONS(183),
    [anon_sym_AMP_GT_GT] = ACTIONS(183),
    [anon_sym_LT_AMP] = ACTIONS(183),
    [anon_sym_GT_AMP] = ACTIONS(183),
    [sym_leading_word] = ACTIONS(183),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(201),
    [anon_sym_LF] = ACTIONS(201),
    [anon_sym_AMP] = ACTIONS(201),
  },
  [24] = {
    [anon_sym_then] = ACTIONS(203),
    [sym_comment] = ACTIONS(67),
  },
  [25] = {
    [sym_expansion] = STATE(48),
    [sym_operator_expansion] = STATE(48),
    [sym_command_substitution] = STATE(48),
    [aux_sym_quoted_argument_repeat1] = STATE(76),
    [anon_sym_DQUOTE] = ACTIONS(205),
    [sym__quoted_chars] = ACTIONS(141),
    [anon_sym_DOLLAR] = ACTIONS(143),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(145),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(147),
    [sym_comment] = ACTIONS(135),
  },
  [26] = {
    [anon_sym_in] = ACTIONS(207),
    [anon_sym_SEMI_SEMI] = ACTIONS(209),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(209),
    [anon_sym_LF] = ACTIONS(209),
    [anon_sym_AMP] = ACTIONS(209),
  },
  [27] = {
    [anon_sym_DOLLAR] = ACTIONS(211),
    [sym_word] = ACTIONS(213),
    [sym_comment] = ACTIONS(67),
  },
  [28] = {
    [sym_leading_word] = ACTIONS(215),
    [sym_comment] = ACTIONS(67),
  },
  [29] = {
    [sym_command] = STATE(85),
    [sym_environment_variable_assignment] = STATE(17),
    [sym_quoted_argument] = STATE(82),
    [sym_file_redirect] = STATE(17),
    [aux_sym_command_repeat1] = STATE(86),
    [sym_file_descriptor] = ACTIONS(71),
    [anon_sym_COLON] = ACTIONS(217),
    [anon_sym_DQUOTE] = ACTIONS(219),
    [sym_single_quoted_argument] = ACTIONS(221),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_AMP_GT] = ACTIONS(93),
    [anon_sym_AMP_GT_GT] = ACTIONS(93),
    [anon_sym_LT_AMP] = ACTIONS(93),
    [anon_sym_GT_AMP] = ACTIONS(93),
    [sym_leading_word] = ACTIONS(223),
    [sym_comment] = ACTIONS(67),
  },
  [30] = {
    [anon_sym_in] = ACTIONS(225),
    [anon_sym_SEMI_SEMI] = ACTIONS(227),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(227),
    [anon_sym_LF] = ACTIONS(227),
    [anon_sym_AMP] = ACTIONS(227),
  },
  [31] = {
    [sym_expansion] = STATE(48),
    [sym_operator_expansion] = STATE(48),
    [sym_command_substitution] = STATE(48),
    [aux_sym_quoted_argument_repeat1] = STATE(90),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [sym__quoted_chars] = ACTIONS(141),
    [anon_sym_DOLLAR] = ACTIONS(143),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(145),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(147),
    [sym_comment] = ACTIONS(135),
  },
  [32] = {
    [anon_sym_RBRACK] = ACTIONS(231),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(231),
    [anon_sym_DQUOTE] = ACTIONS(233),
    [sym_single_quoted_argument] = ACTIONS(231),
    [anon_sym_DOLLAR] = ACTIONS(231),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(233),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(233),
    [sym_word] = ACTIONS(235),
    [sym_comment] = ACTIONS(67),
  },
  [33] = {
    [anon_sym_DOLLAR] = ACTIONS(237),
    [sym_word] = ACTIONS(239),
    [sym_comment] = ACTIONS(67),
  },
  [34] = {
    [sym_leading_word] = ACTIONS(241),
    [sym_comment] = ACTIONS(67),
  },
  [35] = {
    [sym_command] = STATE(94),
    [sym_environment_variable_assignment] = STATE(17),
    [sym_quoted_argument] = STATE(82),
    [sym_file_redirect] = STATE(17),
    [aux_sym_command_repeat1] = STATE(86),
    [sym_file_descriptor] = ACTIONS(71),
    [anon_sym_COLON] = ACTIONS(217),
    [anon_sym_DQUOTE] = ACTIONS(219),
    [sym_single_quoted_argument] = ACTIONS(221),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_AMP_GT] = ACTIONS(93),
    [anon_sym_AMP_GT_GT] = ACTIONS(93),
    [anon_sym_LT_AMP] = ACTIONS(93),
    [anon_sym_GT_AMP] = ACTIONS(93),
    [sym_leading_word] = ACTIONS(223),
    [sym_comment] = ACTIONS(67),
  },
  [36] = {
    [anon_sym_RBRACK] = ACTIONS(243),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(243),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [sym_single_quoted_argument] = ACTIONS(243),
    [anon_sym_DOLLAR] = ACTIONS(243),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(245),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(245),
    [sym_word] = ACTIONS(247),
    [sym_comment] = ACTIONS(67),
  },
  [37] = {
    [sym_quoted_argument] = STATE(96),
    [sym_expansion] = STATE(96),
    [sym_operator_expansion] = STATE(96),
    [sym_command_substitution] = STATE(96),
    [anon_sym_RBRACK] = ACTIONS(249),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [sym_single_quoted_argument] = ACTIONS(251),
    [anon_sym_DOLLAR] = ACTIONS(117),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(119),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(121),
    [sym_word] = ACTIONS(253),
    [sym_comment] = ACTIONS(67),
  },
  [38] = {
    [sym_quoted_argument] = STATE(96),
    [sym_expansion] = STATE(96),
    [sym_operator_expansion] = STATE(96),
    [sym_command_substitution] = STATE(96),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(249),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [sym_single_quoted_argument] = ACTIONS(251),
    [anon_sym_DOLLAR] = ACTIONS(117),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(119),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(121),
    [sym_word] = ACTIONS(253),
    [sym_comment] = ACTIONS(67),
  },
  [39] = {
    [anon_sym_LT] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(255),
    [anon_sym_GT_GT] = ACTIONS(257),
    [anon_sym_AMP_GT] = ACTIONS(255),
    [anon_sym_AMP_GT_GT] = ACTIONS(257),
    [anon_sym_LT_AMP] = ACTIONS(257),
    [anon_sym_GT_AMP] = ACTIONS(257),
    [sym_comment] = ACTIONS(67),
  },
  [40] = {
    [sym_quoted_argument] = STATE(100),
    [sym_expansion] = STATE(100),
    [sym_operator_expansion] = STATE(100),
    [sym_command_substitution] = STATE(100),
    [sym_file_redirect] = STATE(43),
    [sym_heredoc_redirect] = STATE(43),
    [aux_sym_bracket_command_repeat1] = STATE(105),
    [aux_sym_command_repeat2] = STATE(106),
    [sym_file_descriptor] = ACTIONS(125),
    [anon_sym_SEMI_SEMI] = ACTIONS(259),
    [anon_sym_PIPE] = ACTIONS(259),
    [anon_sym_PIPE_AMP] = ACTIONS(259),
    [anon_sym_AMP_AMP] = ACTIONS(259),
    [anon_sym_PIPE_PIPE] = ACTIONS(259),
    [anon_sym_DQUOTE] = ACTIONS(261),
    [sym_single_quoted_argument] = ACTIONS(263),
    [anon_sym_DOLLAR] = ACTIONS(265),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(267),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(269),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_GT_GT] = ACTIONS(131),
    [anon_sym_AMP_GT] = ACTIONS(131),
    [anon_sym_AMP_GT_GT] = ACTIONS(131),
    [anon_sym_LT_AMP] = ACTIONS(131),
    [anon_sym_GT_AMP] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(133),
    [anon_sym_LT_LT_DASH] = ACTIONS(133),
    [sym_word] = ACTIONS(271),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(259),
    [anon_sym_LF] = ACTIONS(259),
    [anon_sym_AMP] = ACTIONS(259),
  },
  [41] = {
    [sym_quoted_argument] = STATE(108),
    [sym_expansion] = STATE(108),
    [sym_operator_expansion] = STATE(108),
    [sym_command_substitution] = STATE(108),
    [anon_sym_DQUOTE] = ACTIONS(273),
    [sym_single_quoted_argument] = ACTIONS(275),
    [anon_sym_DOLLAR] = ACTIONS(277),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(279),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(281),
    [sym_word] = ACTIONS(283),
    [sym_comment] = ACTIONS(67),
  },
  [42] = {
    [sym_heredoc] = STATE(115),
    [sym__simple_heredoc] = ACTIONS(285),
    [sym__heredoc_beginning] = ACTIONS(287),
    [sym_comment] = ACTIONS(67),
  },
  [43] = {
    [sym_file_descriptor] = ACTIONS(289),
    [anon_sym_SEMI_SEMI] = ACTIONS(291),
    [anon_sym_PIPE] = ACTIONS(291),
    [anon_sym_PIPE_AMP] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(291),
    [anon_sym_PIPE_PIPE] = ACTIONS(291),
    [anon_sym_LT] = ACTIONS(291),
    [anon_sym_GT] = ACTIONS(291),
    [anon_sym_GT_GT] = ACTIONS(291),
    [anon_sym_AMP_GT] = ACTIONS(291),
    [anon_sym_AMP_GT_GT] = ACTIONS(291),
    [anon_sym_LT_AMP] = ACTIONS(291),
    [anon_sym_GT_AMP] = ACTIONS(291),
    [anon_sym_LT_LT] = ACTIONS(291),
    [anon_sym_LT_LT_DASH] = ACTIONS(291),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(291),
    [anon_sym_LF] = ACTIONS(291),
    [anon_sym_AMP] = ACTIONS(291),
  },
  [44] = {
    [sym_file_redirect] = STATE(116),
    [sym_heredoc_redirect] = STATE(116),
    [sym_file_descriptor] = ACTIONS(125),
    [anon_sym_SEMI_SEMI] = ACTIONS(259),
    [anon_sym_PIPE] = ACTIONS(259),
    [anon_sym_PIPE_AMP] = ACTIONS(259),
    [anon_sym_AMP_AMP] = ACTIONS(259),
    [anon_sym_PIPE_PIPE] = ACTIONS(259),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_GT_GT] = ACTIONS(131),
    [anon_sym_AMP_GT] = ACTIONS(131),
    [anon_sym_AMP_GT_GT] = ACTIONS(131),
    [anon_sym_LT_AMP] = ACTIONS(131),
    [anon_sym_GT_AMP] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(133),
    [anon_sym_LT_LT_DASH] = ACTIONS(133),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(259),
    [anon_sym_LF] = ACTIONS(259),
    [anon_sym_AMP] = ACTIONS(259),
  },
  [45] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(293),
    [anon_sym_PIPE] = ACTIONS(293),
    [anon_sym_PIPE_AMP] = ACTIONS(293),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(293),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(293),
    [anon_sym_LF] = ACTIONS(293),
    [anon_sym_AMP] = ACTIONS(293),
  },
  [46] = {
    [sym__terminated_statement] = STATE(65),
    [sym_while_statement] = STATE(15),
    [sym_if_statement] = STATE(15),
    [sym_case_statement] = STATE(15),
    [sym_bracket_command] = STATE(15),
    [sym_command] = STATE(15),
    [sym_pipeline] = STATE(15),
    [sym_list] = STATE(15),
    [sym_subshell] = STATE(15),
    [sym_environment_variable_assignment] = STATE(16),
    [sym_quoted_argument] = STATE(8),
    [sym_file_redirect] = STATE(17),
    [aux_sym_command_repeat1] = STATE(19),
    [sym_file_descriptor] = ACTIONS(71),
    [anon_sym_while] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(77),
    [anon_sym_case] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(295),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [sym_single_quoted_argument] = ACTIONS(91),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_AMP_GT] = ACTIONS(93),
    [anon_sym_AMP_GT_GT] = ACTIONS(93),
    [anon_sym_LT_AMP] = ACTIONS(93),
    [anon_sym_GT_AMP] = ACTIONS(93),
    [sym_leading_word] = ACTIONS(95),
    [sym_comment] = ACTIONS(67),
  },
  [47] = {
    [sym_file_descriptor] = ACTIONS(297),
    [anon_sym_SEMI_SEMI] = ACTIONS(299),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(299),
    [anon_sym_PIPE] = ACTIONS(299),
    [anon_sym_PIPE_AMP] = ACTIONS(299),
    [anon_sym_AMP_AMP] = ACTIONS(299),
    [anon_sym_PIPE_PIPE] = ACTIONS(299),
    [anon_sym_LT] = ACTIONS(299),
    [anon_sym_GT] = ACTIONS(299),
    [anon_sym_GT_GT] = ACTIONS(299),
    [anon_sym_AMP_GT] = ACTIONS(299),
    [anon_sym_AMP_GT_GT] = ACTIONS(299),
    [anon_sym_LT_AMP] = ACTIONS(299),
    [anon_sym_GT_AMP] = ACTIONS(299),
    [anon_sym_LT_LT] = ACTIONS(299),
    [anon_sym_LT_LT_DASH] = ACTIONS(299),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(299),
    [anon_sym_LF] = ACTIONS(299),
    [anon_sym_AMP] = ACTIONS(299),
  },
  [48] = {
    [anon_sym_DQUOTE] = ACTIONS(301),
    [sym__quoted_chars] = ACTIONS(303),
    [anon_sym_DOLLAR] = ACTIONS(301),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(301),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(301),
    [sym_comment] = ACTIONS(135),
  },
  [49] = {
    [anon_sym_DOLLAR] = ACTIONS(305),
    [sym_word] = ACTIONS(307),
    [sym_comment] = ACTIONS(67),
  },
  [50] = {
    [sym_leading_word] = ACTIONS(309),
    [sym_comment] = ACTIONS(67),
  },
  [51] = {
    [sym_command] = STATE(121),
    [sym_environment_variable_assignment] = STATE(17),
    [sym_quoted_argument] = STATE(82),
    [sym_file_redirect] = STATE(17),
    [aux_sym_command_repeat1] = STATE(86),
    [sym_file_descriptor] = ACTIONS(71),
    [anon_sym_COLON] = ACTIONS(217),
    [anon_sym_DQUOTE] = ACTIONS(219),
    [sym_single_quoted_argument] = ACTIONS(221),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_AMP_GT] = ACTIONS(93),
    [anon_sym_AMP_GT_GT] = ACTIONS(93),
    [anon_sym_LT_AMP] = ACTIONS(93),
    [anon_sym_GT_AMP] = ACTIONS(93),
    [sym_leading_word] = ACTIONS(223),
    [sym_comment] = ACTIONS(67),
  },
  [52] = {
    [sym_expansion] = STATE(123),
    [sym_operator_expansion] = STATE(123),
    [sym_command_substitution] = STATE(123),
    [anon_sym_DQUOTE] = ACTIONS(311),
    [sym__quoted_chars] = ACTIONS(313),
    [anon_sym_DOLLAR] = ACTIONS(143),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(145),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(147),
    [sym_comment] = ACTIONS(135),
  },
  [53] = {
    [sym_expansion] = STATE(48),
    [sym_operator_expansion] = STATE(48),
    [sym_command_substitution] = STATE(48),
    [aux_sym_quoted_argument_repeat1] = STATE(125),
    [anon_sym_DQUOTE] = ACTIONS(315),
    [sym__quoted_chars] = ACTIONS(141),
    [anon_sym_DOLLAR] = ACTIONS(143),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(145),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(147),
    [sym_comment] = ACTIONS(135),
  },
  [54] = {
    [sym_file_descriptor] = ACTIONS(317),
    [anon_sym_COLON] = ACTIONS(317),
    [anon_sym_DQUOTE] = ACTIONS(317),
    [sym_single_quoted_argument] = ACTIONS(319),
    [anon_sym_LT] = ACTIONS(319),
    [anon_sym_GT] = ACTIONS(319),
    [anon_sym_GT_GT] = ACTIONS(319),
    [anon_sym_AMP_GT] = ACTIONS(319),
    [anon_sym_AMP_GT_GT] = ACTIONS(319),
    [anon_sym_LT_AMP] = ACTIONS(319),
    [anon_sym_GT_AMP] = ACTIONS(319),
    [sym_leading_word] = ACTIONS(321),
    [sym_comment] = ACTIONS(67),
  },
  [55] = {
    [anon_sym_DOLLAR] = ACTIONS(323),
    [sym_word] = ACTIONS(325),
    [sym_comment] = ACTIONS(67),
  },
  [56] = {
    [sym_leading_word] = ACTIONS(327),
    [sym_comment] = ACTIONS(67),
  },
  [57] = {
    [sym_command] = STATE(129),
    [sym_environment_variable_assignment] = STATE(17),
    [sym_quoted_argument] = STATE(82),
    [sym_file_redirect] = STATE(17),
    [aux_sym_command_repeat1] = STATE(86),
    [sym_file_descriptor] = ACTIONS(71),
    [anon_sym_COLON] = ACTIONS(217),
    [anon_sym_DQUOTE] = ACTIONS(219),
    [sym_single_quoted_argument] = ACTIONS(221),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_AMP_GT] = ACTIONS(93),
    [anon_sym_AMP_GT_GT] = ACTIONS(93),
    [anon_sym_LT_AMP] = ACTIONS(93),
    [anon_sym_GT_AMP] = ACTIONS(93),
    [sym_leading_word] = ACTIONS(223),
    [sym_comment] = ACTIONS(67),
  },
  [58] = {
    [sym_file_descriptor] = ACTIONS(329),
    [anon_sym_COLON] = ACTIONS(329),
    [anon_sym_DQUOTE] = ACTIONS(329),
    [sym_single_quoted_argument] = ACTIONS(331),
    [anon_sym_LT] = ACTIONS(331),
    [anon_sym_GT] = ACTIONS(331),
    [anon_sym_GT_GT] = ACTIONS(331),
    [anon_sym_AMP_GT] = ACTIONS(331),
    [anon_sym_AMP_GT_GT] = ACTIONS(331),
    [anon_sym_LT_AMP] = ACTIONS(331),
    [anon_sym_GT_AMP] = ACTIONS(331),
    [sym_leading_word] = ACTIONS(333),
    [sym_comment] = ACTIONS(67),
  },
  [59] = {
    [sym_quoted_argument] = STATE(100),
    [sym_expansion] = STATE(100),
    [sym_operator_expansion] = STATE(100),
    [sym_command_substitution] = STATE(100),
    [sym_file_redirect] = STATE(43),
    [sym_heredoc_redirect] = STATE(43),
    [aux_sym_bracket_command_repeat1] = STATE(130),
    [aux_sym_command_repeat2] = STATE(131),
    [sym_file_descriptor] = ACTIONS(125),
    [anon_sym_SEMI_SEMI] = ACTIONS(335),
    [anon_sym_PIPE] = ACTIONS(335),
    [anon_sym_PIPE_AMP] = ACTIONS(335),
    [anon_sym_AMP_AMP] = ACTIONS(335),
    [anon_sym_PIPE_PIPE] = ACTIONS(335),
    [anon_sym_DQUOTE] = ACTIONS(261),
    [sym_single_quoted_argument] = ACTIONS(263),
    [anon_sym_DOLLAR] = ACTIONS(265),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(267),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(269),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_GT_GT] = ACTIONS(131),
    [anon_sym_AMP_GT] = ACTIONS(131),
    [anon_sym_AMP_GT_GT] = ACTIONS(131),
    [anon_sym_LT_AMP] = ACTIONS(131),
    [anon_sym_GT_AMP] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(133),
    [anon_sym_LT_LT_DASH] = ACTIONS(133),
    [sym_word] = ACTIONS(271),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(335),
    [anon_sym_LF] = ACTIONS(335),
    [anon_sym_AMP] = ACTIONS(335),
  },
  [60] = {
    [sym_quoted_argument] = STATE(133),
    [sym_expansion] = STATE(133),
    [sym_operator_expansion] = STATE(133),
    [sym_command_substitution] = STATE(133),
    [anon_sym_DQUOTE] = ACTIONS(337),
    [sym_single_quoted_argument] = ACTIONS(339),
    [anon_sym_DOLLAR] = ACTIONS(341),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(343),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(345),
    [sym_word] = ACTIONS(347),
    [sym_comment] = ACTIONS(67),
  },
  [61] = {
    [sym_file_redirect] = STATE(116),
    [sym_heredoc_redirect] = STATE(116),
    [sym_file_descriptor] = ACTIONS(125),
    [anon_sym_SEMI_SEMI] = ACTIONS(335),
    [anon_sym_PIPE] = ACTIONS(335),
    [anon_sym_PIPE_AMP] = ACTIONS(335),
    [anon_sym_AMP_AMP] = ACTIONS(335),
    [anon_sym_PIPE_PIPE] = ACTIONS(335),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_GT_GT] = ACTIONS(131),
    [anon_sym_AMP_GT] = ACTIONS(131),
    [anon_sym_AMP_GT_GT] = ACTIONS(131),
    [anon_sym_LT_AMP] = ACTIONS(131),
    [anon_sym_GT_AMP] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(133),
    [anon_sym_LT_LT_DASH] = ACTIONS(133),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(335),
    [anon_sym_LF] = ACTIONS(335),
    [anon_sym_AMP] = ACTIONS(335),
  },
  [62] = {
    [sym_file_descriptor] = ACTIONS(349),
    [ts_builtin_sym_end] = ACTIONS(349),
    [anon_sym_while] = ACTIONS(351),
    [anon_sym_do] = ACTIONS(351),
    [anon_sym_done] = ACTIONS(351),
    [anon_sym_if] = ACTIONS(351),
    [anon_sym_then] = ACTIONS(351),
    [anon_sym_fi] = ACTIONS(351),
    [anon_sym_elif] = ACTIONS(351),
    [anon_sym_else] = ACTIONS(351),
    [anon_sym_case] = ACTIONS(351),
    [anon_sym_RPAREN] = ACTIONS(349),
    [anon_sym_SEMI_SEMI] = ACTIONS(349),
    [anon_sym_LBRACK] = ACTIONS(351),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(351),
    [anon_sym_COLON] = ACTIONS(349),
    [anon_sym_LPAREN] = ACTIONS(349),
    [anon_sym_DQUOTE] = ACTIONS(349),
    [sym_single_quoted_argument] = ACTIONS(351),
    [anon_sym_LT] = ACTIONS(351),
    [anon_sym_GT] = ACTIONS(351),
    [anon_sym_GT_GT] = ACTIONS(351),
    [anon_sym_AMP_GT] = ACTIONS(351),
    [anon_sym_AMP_GT_GT] = ACTIONS(351),
    [anon_sym_LT_AMP] = ACTIONS(351),
    [anon_sym_GT_AMP] = ACTIONS(351),
    [sym_leading_word] = ACTIONS(353),
    [sym_comment] = ACTIONS(67),
  },
  [63] = {
    [sym_while_statement] = STATE(138),
    [sym_if_statement] = STATE(138),
    [sym_case_statement] = STATE(138),
    [sym_bracket_command] = STATE(138),
    [sym_command] = STATE(138),
    [sym_pipeline] = STATE(138),
    [sym_list] = STATE(138),
    [sym_subshell] = STATE(138),
    [sym_environment_variable_assignment] = STATE(139),
    [sym_quoted_argument] = STATE(8),
    [sym_file_redirect] = STATE(17),
    [aux_sym_command_repeat1] = STATE(19),
    [sym_file_descriptor] = ACTIONS(71),
    [anon_sym_while] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(77),
    [anon_sym_case] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [sym_single_quoted_argument] = ACTIONS(91),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_AMP_GT] = ACTIONS(93),
    [anon_sym_AMP_GT_GT] = ACTIONS(93),
    [anon_sym_LT_AMP] = ACTIONS(93),
    [anon_sym_GT_AMP] = ACTIONS(93),
    [sym_leading_word] = ACTIONS(95),
    [sym_comment] = ACTIONS(67),
  },
  [64] = {
    [sym_while_statement] = STATE(140),
    [sym_if_statement] = STATE(140),
    [sym_case_statement] = STATE(140),
    [sym_bracket_command] = STATE(140),
    [sym_command] = STATE(140),
    [sym_pipeline] = STATE(140),
    [sym_list] = STATE(140),
    [sym_subshell] = STATE(140),
    [sym_environment_variable_assignment] = STATE(141),
    [sym_quoted_argument] = STATE(8),
    [sym_file_redirect] = STATE(17),
    [aux_sym_command_repeat1] = STATE(19),
    [sym_file_descriptor] = ACTIONS(71),
    [anon_sym_while] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(77),
    [anon_sym_case] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [sym_single_quoted_argument] = ACTIONS(91),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_AMP_GT] = ACTIONS(93),
    [anon_sym_AMP_GT_GT] = ACTIONS(93),
    [anon_sym_LT_AMP] = ACTIONS(93),
    [anon_sym_GT_AMP] = ACTIONS(93),
    [sym_leading_word] = ACTIONS(95),
    [sym_comment] = ACTIONS(67),
  },
  [65] = {
    [sym_file_descriptor] = ACTIONS(355),
    [ts_builtin_sym_end] = ACTIONS(355),
    [anon_sym_while] = ACTIONS(357),
    [anon_sym_done] = ACTIONS(357),
    [anon_sym_if] = ACTIONS(357),
    [anon_sym_fi] = ACTIONS(357),
    [anon_sym_elif] = ACTIONS(357),
    [anon_sym_else] = ACTIONS(357),
    [anon_sym_case] = ACTIONS(357),
    [anon_sym_RPAREN] = ACTIONS(355),
    [anon_sym_SEMI_SEMI] = ACTIONS(355),
    [anon_sym_LBRACK] = ACTIONS(357),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(357),
    [anon_sym_COLON] = ACTIONS(355),
    [anon_sym_LPAREN] = ACTIONS(355),
    [anon_sym_DQUOTE] = ACTIONS(355),
    [sym_single_quoted_argument] = ACTIONS(357),
    [anon_sym_LT] = ACTIONS(357),
    [anon_sym_GT] = ACTIONS(357),
    [anon_sym_GT_GT] = ACTIONS(357),
    [anon_sym_AMP_GT] = ACTIONS(357),
    [anon_sym_AMP_GT_GT] = ACTIONS(357),
    [anon_sym_LT_AMP] = ACTIONS(357),
    [anon_sym_GT_AMP] = ACTIONS(357),
    [sym_leading_word] = ACTIONS(359),
    [sym_comment] = ACTIONS(67),
  },
  [66] = {
    [sym_file_redirect] = STATE(43),
    [sym_heredoc_redirect] = STATE(43),
    [aux_sym_command_repeat2] = STATE(106),
    [sym_file_descriptor] = ACTIONS(125),
    [anon_sym_SEMI_SEMI] = ACTIONS(259),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(361),
    [anon_sym_PIPE] = ACTIONS(259),
    [anon_sym_PIPE_AMP] = ACTIONS(259),
    [anon_sym_AMP_AMP] = ACTIONS(259),
    [anon_sym_PIPE_PIPE] = ACTIONS(259),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_GT_GT] = ACTIONS(131),
    [anon_sym_AMP_GT] = ACTIONS(131),
    [anon_sym_AMP_GT_GT] = ACTIONS(131),
    [anon_sym_LT_AMP] = ACTIONS(131),
    [anon_sym_GT_AMP] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(133),
    [anon_sym_LT_LT_DASH] = ACTIONS(133),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(259),
    [anon_sym_LF] = ACTIONS(259),
    [anon_sym_AMP] = ACTIONS(259),
  },
  [67] = {
    [sym_file_redirect] = STATE(43),
    [sym_heredoc_redirect] = STATE(43),
    [aux_sym_command_repeat2] = STATE(145),
    [sym_file_descriptor] = ACTIONS(125),
    [anon_sym_SEMI_SEMI] = ACTIONS(363),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(365),
    [anon_sym_PIPE] = ACTIONS(363),
    [anon_sym_PIPE_AMP] = ACTIONS(363),
    [anon_sym_AMP_AMP] = ACTIONS(363),
    [anon_sym_PIPE_PIPE] = ACTIONS(363),
    [anon_sym_EQ] = ACTIONS(367),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_GT_GT] = ACTIONS(131),
    [anon_sym_AMP_GT] = ACTIONS(131),
    [anon_sym_AMP_GT_GT] = ACTIONS(131),
    [anon_sym_LT_AMP] = ACTIONS(131),
    [anon_sym_GT_AMP] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(133),
    [anon_sym_LT_LT_DASH] = ACTIONS(133),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(363),
    [anon_sym_LF] = ACTIONS(363),
    [anon_sym_AMP] = ACTIONS(363),
  },
  [68] = {
    [sym_file_descriptor] = ACTIONS(369),
    [anon_sym_COLON] = ACTIONS(369),
    [anon_sym_DQUOTE] = ACTIONS(369),
    [sym_single_quoted_argument] = ACTIONS(371),
    [anon_sym_LT] = ACTIONS(371),
    [anon_sym_GT] = ACTIONS(371),
    [anon_sym_GT_GT] = ACTIONS(371),
    [anon_sym_AMP_GT] = ACTIONS(371),
    [anon_sym_AMP_GT_GT] = ACTIONS(371),
    [anon_sym_LT_AMP] = ACTIONS(371),
    [anon_sym_GT_AMP] = ACTIONS(371),
    [sym_leading_word] = ACTIONS(373),
    [sym_comment] = ACTIONS(67),
  },
  [69] = {
    [sym_file_descriptor] = ACTIONS(375),
    [anon_sym_COLON] = ACTIONS(375),
    [anon_sym_DQUOTE] = ACTIONS(375),
    [sym_single_quoted_argument] = ACTIONS(377),
    [anon_sym_LT] = ACTIONS(377),
    [anon_sym_GT] = ACTIONS(377),
    [anon_sym_GT_GT] = ACTIONS(377),
    [anon_sym_AMP_GT] = ACTIONS(377),
    [anon_sym_AMP_GT_GT] = ACTIONS(377),
    [anon_sym_LT_AMP] = ACTIONS(377),
    [anon_sym_GT_AMP] = ACTIONS(377),
    [sym_leading_word] = ACTIONS(379),
    [sym_comment] = ACTIONS(67),
  },
  [70] = {
    [sym_file_descriptor] = ACTIONS(381),
    [anon_sym_COLON] = ACTIONS(381),
    [anon_sym_DQUOTE] = ACTIONS(381),
    [sym_single_quoted_argument] = ACTIONS(383),
    [anon_sym_LT] = ACTIONS(383),
    [anon_sym_GT] = ACTIONS(383),
    [anon_sym_GT_GT] = ACTIONS(383),
    [anon_sym_AMP_GT] = ACTIONS(383),
    [anon_sym_AMP_GT_GT] = ACTIONS(383),
    [anon_sym_LT_AMP] = ACTIONS(383),
    [anon_sym_GT_AMP] = ACTIONS(383),
    [sym_leading_word] = ACTIONS(385),
    [sym_comment] = ACTIONS(67),
  },
  [71] = {
    [sym__terminated_statement] = STATE(14),
    [sym_while_statement] = STATE(15),
    [sym_if_statement] = STATE(15),
    [sym_case_statement] = STATE(15),
    [sym_bracket_command] = STATE(15),
    [sym_command] = STATE(15),
    [sym_pipeline] = STATE(15),
    [sym_list] = STATE(15),
    [sym_subshell] = STATE(15),
    [sym_environment_variable_assignment] = STATE(16),
    [sym_quoted_argument] = STATE(8),
    [sym_file_redirect] = STATE(17),
    [aux_sym_program_repeat1] = STATE(147),
    [aux_sym_command_repeat1] = STATE(19),
    [sym_file_descriptor] = ACTIONS(71),
    [anon_sym_while] = ACTIONS(75),
    [anon_sym_done] = ACTIONS(387),
    [anon_sym_if] = ACTIONS(77),
    [anon_sym_case] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [sym_single_quoted_argument] = ACTIONS(91),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_AMP_GT] = ACTIONS(93),
    [anon_sym_AMP_GT_GT] = ACTIONS(93),
    [anon_sym_LT_AMP] = ACTIONS(93),
    [anon_sym_GT_AMP] = ACTIONS(93),
    [sym_leading_word] = ACTIONS(95),
    [sym_comment] = ACTIONS(67),
  },
  [72] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(389),
    [anon_sym_PIPE] = ACTIONS(389),
    [anon_sym_PIPE_AMP] = ACTIONS(389),
    [anon_sym_AMP_AMP] = ACTIONS(389),
    [anon_sym_PIPE_PIPE] = ACTIONS(389),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(389),
    [anon_sym_LF] = ACTIONS(389),
    [anon_sym_AMP] = ACTIONS(389),
  },
  [73] = {
    [anon_sym_do] = ACTIONS(349),
    [anon_sym_then] = ACTIONS(349),
    [sym_comment] = ACTIONS(67),
  },
  [74] = {
    [sym__terminated_statement] = STATE(14),
    [sym_while_statement] = STATE(15),
    [sym_if_statement] = STATE(15),
    [sym_elif_clause] = STATE(151),
    [sym_else_clause] = STATE(152),
    [sym_case_statement] = STATE(15),
    [sym_bracket_command] = STATE(15),
    [sym_command] = STATE(15),
    [sym_pipeline] = STATE(15),
    [sym_list] = STATE(15),
    [sym_subshell] = STATE(15),
    [sym_environment_variable_assignment] = STATE(16),
    [sym_quoted_argument] = STATE(8),
    [sym_file_redirect] = STATE(17),
    [aux_sym_program_repeat1] = STATE(153),
    [aux_sym_if_statement_repeat1] = STATE(154),
    [aux_sym_command_repeat1] = STATE(19),
    [sym_file_descriptor] = ACTIONS(71),
    [anon_sym_while] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(77),
    [anon_sym_fi] = ACTIONS(391),
    [anon_sym_elif] = ACTIONS(393),
    [anon_sym_else] = ACTIONS(395),
    [anon_sym_case] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [sym_single_quoted_argument] = ACTIONS(91),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_AMP_GT] = ACTIONS(93),
    [anon_sym_AMP_GT_GT] = ACTIONS(93),
    [anon_sym_LT_AMP] = ACTIONS(93),
    [anon_sym_GT_AMP] = ACTIONS(93),
    [sym_leading_word] = ACTIONS(95),
    [sym_comment] = ACTIONS(67),
  },
  [75] = {
    [anon_sym_in] = ACTIONS(299),
    [anon_sym_SEMI_SEMI] = ACTIONS(299),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(299),
    [anon_sym_LF] = ACTIONS(299),
    [anon_sym_AMP] = ACTIONS(299),
  },
  [76] = {
    [sym_expansion] = STATE(123),
    [sym_operator_expansion] = STATE(123),
    [sym_command_substitution] = STATE(123),
    [anon_sym_DQUOTE] = ACTIONS(397),
    [sym__quoted_chars] = ACTIONS(313),
    [anon_sym_DOLLAR] = ACTIONS(143),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(145),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(147),
    [sym_comment] = ACTIONS(135),
  },
  [77] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(399),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(399),
    [anon_sym_LF] = ACTIONS(399),
    [anon_sym_AMP] = ACTIONS(399),
  },
  [78] = {
    [anon_sym_in] = ACTIONS(401),
    [sym_comment] = ACTIONS(67),
  },
  [79] = {
    [anon_sym_in] = ACTIONS(403),
    [anon_sym_SEMI_SEMI] = ACTIONS(403),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(403),
    [anon_sym_LF] = ACTIONS(403),
    [anon_sym_AMP] = ACTIONS(403),
  },
  [80] = {
    [anon_sym_in] = ACTIONS(405),
    [anon_sym_SEMI_SEMI] = ACTIONS(405),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(405),
    [anon_sym_LF] = ACTIONS(405),
    [anon_sym_AMP] = ACTIONS(405),
  },
  [81] = {
    [anon_sym_COLON] = ACTIONS(407),
    [anon_sym_EQ] = ACTIONS(409),
    [anon_sym_COLON_QMARK] = ACTIONS(409),
    [anon_sym_COLON_DASH] = ACTIONS(409),
    [anon_sym_RBRACE] = ACTIONS(411),
    [sym_comment] = ACTIONS(67),
  },
  [82] = {
    [sym_file_redirect] = STATE(164),
    [sym_heredoc_redirect] = STATE(164),
    [aux_sym_command_repeat2] = STATE(165),
    [sym_file_descriptor] = ACTIONS(413),
    [anon_sym_RPAREN] = ACTIONS(127),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(415),
    [anon_sym_LT] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(417),
    [anon_sym_GT_GT] = ACTIONS(417),
    [anon_sym_AMP_GT] = ACTIONS(417),
    [anon_sym_AMP_GT_GT] = ACTIONS(417),
    [anon_sym_LT_AMP] = ACTIONS(417),
    [anon_sym_GT_AMP] = ACTIONS(417),
    [anon_sym_LT_LT] = ACTIONS(419),
    [anon_sym_LT_LT_DASH] = ACTIONS(419),
    [sym_comment] = ACTIONS(135),
  },
  [83] = {
    [sym_expansion] = STATE(48),
    [sym_operator_expansion] = STATE(48),
    [sym_command_substitution] = STATE(48),
    [aux_sym_quoted_argument_repeat1] = STATE(167),
    [anon_sym_DQUOTE] = ACTIONS(421),
    [sym__quoted_chars] = ACTIONS(141),
    [anon_sym_DOLLAR] = ACTIONS(143),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(145),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(147),
    [sym_comment] = ACTIONS(135),
  },
  [84] = {
    [sym_file_redirect] = STATE(164),
    [sym_heredoc_redirect] = STATE(164),
    [aux_sym_command_repeat2] = STATE(169),
    [sym_file_descriptor] = ACTIONS(413),
    [anon_sym_RPAREN] = ACTIONS(161),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(423),
    [anon_sym_EQ] = ACTIONS(367),
    [anon_sym_LT] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(417),
    [anon_sym_GT_GT] = ACTIONS(417),
    [anon_sym_AMP_GT] = ACTIONS(417),
    [anon_sym_AMP_GT_GT] = ACTIONS(417),
    [anon_sym_LT_AMP] = ACTIONS(417),
    [anon_sym_GT_AMP] = ACTIONS(417),
    [anon_sym_LT_LT] = ACTIONS(419),
    [anon_sym_LT_LT_DASH] = ACTIONS(419),
    [sym_comment] = ACTIONS(135),
  },
  [85] = {
    [anon_sym_RPAREN] = ACTIONS(425),
    [sym_comment] = ACTIONS(67),
  },
  [86] = {
    [sym_environment_variable_assignment] = STATE(68),
    [sym_quoted_argument] = STATE(171),
    [sym_file_redirect] = STATE(68),
    [sym_file_descriptor] = ACTIONS(71),
    [anon_sym_COLON] = ACTIONS(427),
    [anon_sym_DQUOTE] = ACTIONS(219),
    [sym_single_quoted_argument] = ACTIONS(429),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_AMP_GT] = ACTIONS(93),
    [anon_sym_AMP_GT_GT] = ACTIONS(93),
    [anon_sym_LT_AMP] = ACTIONS(93),
    [anon_sym_GT_AMP] = ACTIONS(93),
    [sym_leading_word] = ACTIONS(431),
    [sym_comment] = ACTIONS(67),
  },
  [87] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(433),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(433),
    [anon_sym_LF] = ACTIONS(433),
    [anon_sym_AMP] = ACTIONS(433),
  },
  [88] = {
    [anon_sym_in] = ACTIONS(435),
    [sym_comment] = ACTIONS(67),
  },
  [89] = {
    [anon_sym_RPAREN] = ACTIONS(297),
    [anon_sym_RBRACK] = ACTIONS(437),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(437),
    [anon_sym_DQUOTE] = ACTIONS(297),
    [sym_single_quoted_argument] = ACTIONS(437),
    [anon_sym_DOLLAR] = ACTIONS(437),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(297),
    [anon_sym_RBRACE] = ACTIONS(297),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(297),
    [sym_word] = ACTIONS(299),
    [sym_comment] = ACTIONS(67),
  },
  [90] = {
    [sym_expansion] = STATE(123),
    [sym_operator_expansion] = STATE(123),
    [sym_command_substitution] = STATE(123),
    [anon_sym_DQUOTE] = ACTIONS(439),
    [sym__quoted_chars] = ACTIONS(313),
    [anon_sym_DOLLAR] = ACTIONS(143),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(145),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(147),
    [sym_comment] = ACTIONS(135),
  },
  [91] = {
    [anon_sym_RPAREN] = ACTIONS(441),
    [anon_sym_RBRACK] = ACTIONS(443),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(443),
    [anon_sym_DQUOTE] = ACTIONS(441),
    [sym_single_quoted_argument] = ACTIONS(443),
    [anon_sym_DOLLAR] = ACTIONS(443),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(441),
    [anon_sym_RBRACE] = ACTIONS(441),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(441),
    [sym_word] = ACTIONS(403),
    [sym_comment] = ACTIONS(67),
  },
  [92] = {
    [anon_sym_RPAREN] = ACTIONS(445),
    [anon_sym_RBRACK] = ACTIONS(447),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(447),
    [anon_sym_DQUOTE] = ACTIONS(445),
    [sym_single_quoted_argument] = ACTIONS(447),
    [anon_sym_DOLLAR] = ACTIONS(447),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(445),
    [anon_sym_RBRACE] = ACTIONS(445),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(445),
    [sym_word] = ACTIONS(405),
    [sym_comment] = ACTIONS(67),
  },
  [93] = {
    [anon_sym_COLON] = ACTIONS(449),
    [anon_sym_EQ] = ACTIONS(451),
    [anon_sym_COLON_QMARK] = ACTIONS(451),
    [anon_sym_COLON_DASH] = ACTIONS(451),
    [anon_sym_RBRACE] = ACTIONS(453),
    [sym_comment] = ACTIONS(67),
  },
  [94] = {
    [anon_sym_RPAREN] = ACTIONS(455),
    [sym_comment] = ACTIONS(67),
  },
  [95] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(457),
    [anon_sym_PIPE] = ACTIONS(457),
    [anon_sym_PIPE_AMP] = ACTIONS(457),
    [anon_sym_AMP_AMP] = ACTIONS(457),
    [anon_sym_PIPE_PIPE] = ACTIONS(457),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(457),
    [anon_sym_LF] = ACTIONS(457),
    [anon_sym_AMP] = ACTIONS(457),
  },
  [96] = {
    [anon_sym_RBRACK] = ACTIONS(459),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(459),
    [anon_sym_DQUOTE] = ACTIONS(461),
    [sym_single_quoted_argument] = ACTIONS(459),
    [anon_sym_DOLLAR] = ACTIONS(459),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(461),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(461),
    [sym_word] = ACTIONS(463),
    [sym_comment] = ACTIONS(67),
  },
  [97] = {
    [anon_sym_RBRACK] = ACTIONS(465),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(465),
    [anon_sym_DQUOTE] = ACTIONS(467),
    [sym_single_quoted_argument] = ACTIONS(465),
    [anon_sym_DOLLAR] = ACTIONS(465),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(467),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(467),
    [sym_word] = ACTIONS(469),
    [sym_comment] = ACTIONS(67),
  },
  [98] = {
    [sym_quoted_argument] = STATE(179),
    [sym_expansion] = STATE(179),
    [sym_operator_expansion] = STATE(179),
    [sym_command_substitution] = STATE(179),
    [anon_sym_DQUOTE] = ACTIONS(273),
    [sym_single_quoted_argument] = ACTIONS(471),
    [anon_sym_DOLLAR] = ACTIONS(277),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(279),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(281),
    [sym_word] = ACTIONS(473),
    [sym_comment] = ACTIONS(67),
  },
  [99] = {
    [sym_expansion] = STATE(48),
    [sym_operator_expansion] = STATE(48),
    [sym_command_substitution] = STATE(48),
    [aux_sym_quoted_argument_repeat1] = STATE(182),
    [anon_sym_DQUOTE] = ACTIONS(475),
    [sym__quoted_chars] = ACTIONS(141),
    [anon_sym_DOLLAR] = ACTIONS(143),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(145),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(147),
    [sym_comment] = ACTIONS(135),
  },
  [100] = {
    [sym_file_descriptor] = ACTIONS(233),
    [anon_sym_SEMI_SEMI] = ACTIONS(235),
    [anon_sym_PIPE] = ACTIONS(235),
    [anon_sym_PIPE_AMP] = ACTIONS(235),
    [anon_sym_AMP_AMP] = ACTIONS(235),
    [anon_sym_PIPE_PIPE] = ACTIONS(235),
    [anon_sym_DQUOTE] = ACTIONS(235),
    [sym_single_quoted_argument] = ACTIONS(235),
    [anon_sym_DOLLAR] = ACTIONS(235),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(235),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(235),
    [anon_sym_LT] = ACTIONS(235),
    [anon_sym_GT] = ACTIONS(235),
    [anon_sym_GT_GT] = ACTIONS(235),
    [anon_sym_AMP_GT] = ACTIONS(235),
    [anon_sym_AMP_GT_GT] = ACTIONS(235),
    [anon_sym_LT_AMP] = ACTIONS(235),
    [anon_sym_GT_AMP] = ACTIONS(235),
    [anon_sym_LT_LT] = ACTIONS(235),
    [anon_sym_LT_LT_DASH] = ACTIONS(235),
    [sym_word] = ACTIONS(235),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(235),
    [anon_sym_LF] = ACTIONS(235),
    [anon_sym_AMP] = ACTIONS(235),
  },
  [101] = {
    [anon_sym_DOLLAR] = ACTIONS(477),
    [sym_word] = ACTIONS(479),
    [sym_comment] = ACTIONS(67),
  },
  [102] = {
    [sym_leading_word] = ACTIONS(481),
    [sym_comment] = ACTIONS(67),
  },
  [103] = {
    [sym_command] = STATE(186),
    [sym_environment_variable_assignment] = STATE(17),
    [sym_quoted_argument] = STATE(82),
    [sym_file_redirect] = STATE(17),
    [aux_sym_command_repeat1] = STATE(86),
    [sym_file_descriptor] = ACTIONS(71),
    [anon_sym_COLON] = ACTIONS(217),
    [anon_sym_DQUOTE] = ACTIONS(219),
    [sym_single_quoted_argument] = ACTIONS(221),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_AMP_GT] = ACTIONS(93),
    [anon_sym_AMP_GT_GT] = ACTIONS(93),
    [anon_sym_LT_AMP] = ACTIONS(93),
    [anon_sym_GT_AMP] = ACTIONS(93),
    [sym_leading_word] = ACTIONS(223),
    [sym_comment] = ACTIONS(67),
  },
  [104] = {
    [sym_file_descriptor] = ACTIONS(245),
    [anon_sym_SEMI_SEMI] = ACTIONS(247),
    [anon_sym_PIPE] = ACTIONS(247),
    [anon_sym_PIPE_AMP] = ACTIONS(247),
    [anon_sym_AMP_AMP] = ACTIONS(247),
    [anon_sym_PIPE_PIPE] = ACTIONS(247),
    [anon_sym_DQUOTE] = ACTIONS(247),
    [sym_single_quoted_argument] = ACTIONS(247),
    [anon_sym_DOLLAR] = ACTIONS(247),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(247),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(247),
    [anon_sym_LT] = ACTIONS(247),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_GT_GT] = ACTIONS(247),
    [anon_sym_AMP_GT] = ACTIONS(247),
    [anon_sym_AMP_GT_GT] = ACTIONS(247),
    [anon_sym_LT_AMP] = ACTIONS(247),
    [anon_sym_GT_AMP] = ACTIONS(247),
    [anon_sym_LT_LT] = ACTIONS(247),
    [anon_sym_LT_LT_DASH] = ACTIONS(247),
    [sym_word] = ACTIONS(247),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(247),
    [anon_sym_LF] = ACTIONS(247),
    [anon_sym_AMP] = ACTIONS(247),
  },
  [105] = {
    [sym_quoted_argument] = STATE(187),
    [sym_expansion] = STATE(187),
    [sym_operator_expansion] = STATE(187),
    [sym_command_substitution] = STATE(187),
    [sym_file_redirect] = STATE(43),
    [sym_heredoc_redirect] = STATE(43),
    [aux_sym_command_repeat2] = STATE(189),
    [sym_file_descriptor] = ACTIONS(125),
    [anon_sym_SEMI_SEMI] = ACTIONS(483),
    [anon_sym_PIPE] = ACTIONS(483),
    [anon_sym_PIPE_AMP] = ACTIONS(483),
    [anon_sym_AMP_AMP] = ACTIONS(483),
    [anon_sym_PIPE_PIPE] = ACTIONS(483),
    [anon_sym_DQUOTE] = ACTIONS(261),
    [sym_single_quoted_argument] = ACTIONS(485),
    [anon_sym_DOLLAR] = ACTIONS(265),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(267),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(269),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_GT_GT] = ACTIONS(131),
    [anon_sym_AMP_GT] = ACTIONS(131),
    [anon_sym_AMP_GT_GT] = ACTIONS(131),
    [anon_sym_LT_AMP] = ACTIONS(131),
    [anon_sym_GT_AMP] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(133),
    [anon_sym_LT_LT_DASH] = ACTIONS(133),
    [sym_word] = ACTIONS(487),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(483),
    [anon_sym_LF] = ACTIONS(483),
    [anon_sym_AMP] = ACTIONS(483),
  },
  [106] = {
    [sym_file_redirect] = STATE(116),
    [sym_heredoc_redirect] = STATE(116),
    [sym_file_descriptor] = ACTIONS(125),
    [anon_sym_SEMI_SEMI] = ACTIONS(483),
    [anon_sym_PIPE] = ACTIONS(483),
    [anon_sym_PIPE_AMP] = ACTIONS(483),
    [anon_sym_AMP_AMP] = ACTIONS(483),
    [anon_sym_PIPE_PIPE] = ACTIONS(483),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_GT_GT] = ACTIONS(131),
    [anon_sym_AMP_GT] = ACTIONS(131),
    [anon_sym_AMP_GT_GT] = ACTIONS(131),
    [anon_sym_LT_AMP] = ACTIONS(131),
    [anon_sym_GT_AMP] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(133),
    [anon_sym_LT_LT_DASH] = ACTIONS(133),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(483),
    [anon_sym_LF] = ACTIONS(483),
    [anon_sym_AMP] = ACTIONS(483),
  },
  [107] = {
    [sym_expansion] = STATE(48),
    [sym_operator_expansion] = STATE(48),
    [sym_command_substitution] = STATE(48),
    [aux_sym_quoted_argument_repeat1] = STATE(191),
    [anon_sym_DQUOTE] = ACTIONS(489),
    [sym__quoted_chars] = ACTIONS(141),
    [anon_sym_DOLLAR] = ACTIONS(143),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(145),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(147),
    [sym_comment] = ACTIONS(135),
  },
  [108] = {
    [sym_file_descriptor] = ACTIONS(317),
    [anon_sym_SEMI_SEMI] = ACTIONS(321),
    [anon_sym_PIPE] = ACTIONS(321),
    [anon_sym_PIPE_AMP] = ACTIONS(321),
    [anon_sym_AMP_AMP] = ACTIONS(321),
    [anon_sym_PIPE_PIPE] = ACTIONS(321),
    [anon_sym_LT] = ACTIONS(321),
    [anon_sym_GT] = ACTIONS(321),
    [anon_sym_GT_GT] = ACTIONS(321),
    [anon_sym_AMP_GT] = ACTIONS(321),
    [anon_sym_AMP_GT_GT] = ACTIONS(321),
    [anon_sym_LT_AMP] = ACTIONS(321),
    [anon_sym_GT_AMP] = ACTIONS(321),
    [anon_sym_LT_LT] = ACTIONS(321),
    [anon_sym_LT_LT_DASH] = ACTIONS(321),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(321),
    [anon_sym_LF] = ACTIONS(321),
    [anon_sym_AMP] = ACTIONS(321),
  },
  [109] = {
    [anon_sym_DOLLAR] = ACTIONS(491),
    [sym_word] = ACTIONS(493),
    [sym_comment] = ACTIONS(67),
  },
  [110] = {
    [sym_leading_word] = ACTIONS(495),
    [sym_comment] = ACTIONS(67),
  },
  [111] = {
    [sym_command] = STATE(195),
    [sym_environment_variable_assignment] = STATE(17),
    [sym_quoted_argument] = STATE(82),
    [sym_file_redirect] = STATE(17),
    [aux_sym_command_repeat1] = STATE(86),
    [sym_file_descriptor] = ACTIONS(71),
    [anon_sym_COLON] = ACTIONS(217),
    [anon_sym_DQUOTE] = ACTIONS(219),
    [sym_single_quoted_argument] = ACTIONS(221),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_AMP_GT] = ACTIONS(93),
    [anon_sym_AMP_GT_GT] = ACTIONS(93),
    [anon_sym_LT_AMP] = ACTIONS(93),
    [anon_sym_GT_AMP] = ACTIONS(93),
    [sym_leading_word] = ACTIONS(223),
    [sym_comment] = ACTIONS(67),
  },
  [112] = {
    [sym_file_descriptor] = ACTIONS(329),
    [anon_sym_SEMI_SEMI] = ACTIONS(333),
    [anon_sym_PIPE] = ACTIONS(333),
    [anon_sym_PIPE_AMP] = ACTIONS(333),
    [anon_sym_AMP_AMP] = ACTIONS(333),
    [anon_sym_PIPE_PIPE] = ACTIONS(333),
    [anon_sym_LT] = ACTIONS(333),
    [anon_sym_GT] = ACTIONS(333),
    [anon_sym_GT_GT] = ACTIONS(333),
    [anon_sym_AMP_GT] = ACTIONS(333),
    [anon_sym_AMP_GT_GT] = ACTIONS(333),
    [anon_sym_LT_AMP] = ACTIONS(333),
    [anon_sym_GT_AMP] = ACTIONS(333),
    [anon_sym_LT_LT] = ACTIONS(333),
    [anon_sym_LT_LT_DASH] = ACTIONS(333),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(333),
    [anon_sym_LF] = ACTIONS(333),
    [anon_sym_AMP] = ACTIONS(333),
  },
  [113] = {
    [sym_file_descriptor] = ACTIONS(497),
    [anon_sym_SEMI_SEMI] = ACTIONS(499),
    [anon_sym_PIPE] = ACTIONS(499),
    [anon_sym_PIPE_AMP] = ACTIONS(499),
    [anon_sym_AMP_AMP] = ACTIONS(499),
    [anon_sym_PIPE_PIPE] = ACTIONS(499),
    [anon_sym_LT] = ACTIONS(499),
    [anon_sym_GT] = ACTIONS(499),
    [anon_sym_GT_GT] = ACTIONS(499),
    [anon_sym_AMP_GT] = ACTIONS(499),
    [anon_sym_AMP_GT_GT] = ACTIONS(499),
    [anon_sym_LT_AMP] = ACTIONS(499),
    [anon_sym_GT_AMP] = ACTIONS(499),
    [anon_sym_LT_LT] = ACTIONS(499),
    [anon_sym_LT_LT_DASH] = ACTIONS(499),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(499),
    [anon_sym_LF] = ACTIONS(499),
    [anon_sym_AMP] = ACTIONS(499),
  },
  [114] = {
    [sym_expansion] = STATE(196),
    [sym_operator_expansion] = STATE(196),
    [aux_sym_heredoc_repeat1] = STATE(200),
    [sym__heredoc_middle] = ACTIONS(501),
    [sym__heredoc_end] = ACTIONS(503),
    [anon_sym_DOLLAR] = ACTIONS(505),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(507),
    [sym_comment] = ACTIONS(67),
  },
  [115] = {
    [sym_file_descriptor] = ACTIONS(509),
    [anon_sym_SEMI_SEMI] = ACTIONS(511),
    [anon_sym_PIPE] = ACTIONS(511),
    [anon_sym_PIPE_AMP] = ACTIONS(511),
    [anon_sym_AMP_AMP] = ACTIONS(511),
    [anon_sym_PIPE_PIPE] = ACTIONS(511),
    [anon_sym_LT] = ACTIONS(511),
    [anon_sym_GT] = ACTIONS(511),
    [anon_sym_GT_GT] = ACTIONS(511),
    [anon_sym_AMP_GT] = ACTIONS(511),
    [anon_sym_AMP_GT_GT] = ACTIONS(511),
    [anon_sym_LT_AMP] = ACTIONS(511),
    [anon_sym_GT_AMP] = ACTIONS(511),
    [anon_sym_LT_LT] = ACTIONS(511),
    [anon_sym_LT_LT_DASH] = ACTIONS(511),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(511),
    [anon_sym_LF] = ACTIONS(511),
    [anon_sym_AMP] = ACTIONS(511),
  },
  [116] = {
    [sym_file_descriptor] = ACTIONS(513),
    [anon_sym_SEMI_SEMI] = ACTIONS(515),
    [anon_sym_PIPE] = ACTIONS(515),
    [anon_sym_PIPE_AMP] = ACTIONS(515),
    [anon_sym_AMP_AMP] = ACTIONS(515),
    [anon_sym_PIPE_PIPE] = ACTIONS(515),
    [anon_sym_LT] = ACTIONS(515),
    [anon_sym_GT] = ACTIONS(515),
    [anon_sym_GT_GT] = ACTIONS(515),
    [anon_sym_AMP_GT] = ACTIONS(515),
    [anon_sym_AMP_GT_GT] = ACTIONS(515),
    [anon_sym_LT_AMP] = ACTIONS(515),
    [anon_sym_GT_AMP] = ACTIONS(515),
    [anon_sym_LT_LT] = ACTIONS(515),
    [anon_sym_LT_LT_DASH] = ACTIONS(515),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(515),
    [anon_sym_LF] = ACTIONS(515),
    [anon_sym_AMP] = ACTIONS(515),
  },
  [117] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(517),
    [anon_sym_PIPE] = ACTIONS(517),
    [anon_sym_PIPE_AMP] = ACTIONS(517),
    [anon_sym_AMP_AMP] = ACTIONS(517),
    [anon_sym_PIPE_PIPE] = ACTIONS(517),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(517),
    [anon_sym_LF] = ACTIONS(517),
    [anon_sym_AMP] = ACTIONS(517),
  },
  [118] = {
    [anon_sym_DQUOTE] = ACTIONS(403),
    [sym__quoted_chars] = ACTIONS(443),
    [anon_sym_DOLLAR] = ACTIONS(403),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(403),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(403),
    [sym_comment] = ACTIONS(135),
  },
  [119] = {
    [anon_sym_DQUOTE] = ACTIONS(405),
    [sym__quoted_chars] = ACTIONS(447),
    [anon_sym_DOLLAR] = ACTIONS(405),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(405),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(405),
    [sym_comment] = ACTIONS(135),
  },
  [120] = {
    [anon_sym_COLON] = ACTIONS(519),
    [anon_sym_EQ] = ACTIONS(521),
    [anon_sym_COLON_QMARK] = ACTIONS(521),
    [anon_sym_COLON_DASH] = ACTIONS(521),
    [anon_sym_RBRACE] = ACTIONS(523),
    [sym_comment] = ACTIONS(67),
  },
  [121] = {
    [anon_sym_RPAREN] = ACTIONS(525),
    [sym_comment] = ACTIONS(67),
  },
  [122] = {
    [sym_file_descriptor] = ACTIONS(527),
    [anon_sym_SEMI_SEMI] = ACTIONS(529),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(529),
    [anon_sym_PIPE] = ACTIONS(529),
    [anon_sym_PIPE_AMP] = ACTIONS(529),
    [anon_sym_AMP_AMP] = ACTIONS(529),
    [anon_sym_PIPE_PIPE] = ACTIONS(529),
    [anon_sym_LT] = ACTIONS(529),
    [anon_sym_GT] = ACTIONS(529),
    [anon_sym_GT_GT] = ACTIONS(529),
    [anon_sym_AMP_GT] = ACTIONS(529),
    [anon_sym_AMP_GT_GT] = ACTIONS(529),
    [anon_sym_LT_AMP] = ACTIONS(529),
    [anon_sym_GT_AMP] = ACTIONS(529),
    [anon_sym_LT_LT] = ACTIONS(529),
    [anon_sym_LT_LT_DASH] = ACTIONS(529),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(529),
    [anon_sym_LF] = ACTIONS(529),
    [anon_sym_AMP] = ACTIONS(529),
  },
  [123] = {
    [anon_sym_DQUOTE] = ACTIONS(531),
    [sym__quoted_chars] = ACTIONS(533),
    [anon_sym_DOLLAR] = ACTIONS(531),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(531),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(531),
    [sym_comment] = ACTIONS(135),
  },
  [124] = {
    [sym_file_descriptor] = ACTIONS(297),
    [anon_sym_COLON] = ACTIONS(297),
    [anon_sym_DQUOTE] = ACTIONS(297),
    [sym_single_quoted_argument] = ACTIONS(437),
    [anon_sym_LT] = ACTIONS(437),
    [anon_sym_GT] = ACTIONS(437),
    [anon_sym_GT_GT] = ACTIONS(437),
    [anon_sym_AMP_GT] = ACTIONS(437),
    [anon_sym_AMP_GT_GT] = ACTIONS(437),
    [anon_sym_LT_AMP] = ACTIONS(437),
    [anon_sym_GT_AMP] = ACTIONS(437),
    [sym_leading_word] = ACTIONS(299),
    [sym_comment] = ACTIONS(67),
  },
  [125] = {
    [sym_expansion] = STATE(123),
    [sym_operator_expansion] = STATE(123),
    [sym_command_substitution] = STATE(123),
    [anon_sym_DQUOTE] = ACTIONS(535),
    [sym__quoted_chars] = ACTIONS(313),
    [anon_sym_DOLLAR] = ACTIONS(143),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(145),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(147),
    [sym_comment] = ACTIONS(135),
  },
  [126] = {
    [sym_file_descriptor] = ACTIONS(441),
    [anon_sym_COLON] = ACTIONS(441),
    [anon_sym_DQUOTE] = ACTIONS(441),
    [sym_single_quoted_argument] = ACTIONS(443),
    [anon_sym_LT] = ACTIONS(443),
    [anon_sym_GT] = ACTIONS(443),
    [anon_sym_GT_GT] = ACTIONS(443),
    [anon_sym_AMP_GT] = ACTIONS(443),
    [anon_sym_AMP_GT_GT] = ACTIONS(443),
    [anon_sym_LT_AMP] = ACTIONS(443),
    [anon_sym_GT_AMP] = ACTIONS(443),
    [sym_leading_word] = ACTIONS(403),
    [sym_comment] = ACTIONS(67),
  },
  [127] = {
    [sym_file_descriptor] = ACTIONS(445),
    [anon_sym_COLON] = ACTIONS(445),
    [anon_sym_DQUOTE] = ACTIONS(445),
    [sym_single_quoted_argument] = ACTIONS(447),
    [anon_sym_LT] = ACTIONS(447),
    [anon_sym_GT] = ACTIONS(447),
    [anon_sym_GT_GT] = ACTIONS(447),
    [anon_sym_AMP_GT] = ACTIONS(447),
    [anon_sym_AMP_GT_GT] = ACTIONS(447),
    [anon_sym_LT_AMP] = ACTIONS(447),
    [anon_sym_GT_AMP] = ACTIONS(447),
    [sym_leading_word] = ACTIONS(405),
    [sym_comment] = ACTIONS(67),
  },
  [128] = {
    [anon_sym_COLON] = ACTIONS(537),
    [anon_sym_EQ] = ACTIONS(539),
    [anon_sym_COLON_QMARK] = ACTIONS(539),
    [anon_sym_COLON_DASH] = ACTIONS(539),
    [anon_sym_RBRACE] = ACTIONS(541),
    [sym_comment] = ACTIONS(67),
  },
  [129] = {
    [anon_sym_RPAREN] = ACTIONS(543),
    [sym_comment] = ACTIONS(67),
  },
  [130] = {
    [sym_quoted_argument] = STATE(187),
    [sym_expansion] = STATE(187),
    [sym_operator_expansion] = STATE(187),
    [sym_command_substitution] = STATE(187),
    [sym_file_redirect] = STATE(43),
    [sym_heredoc_redirect] = STATE(43),
    [aux_sym_command_repeat2] = STATE(208),
    [sym_file_descriptor] = ACTIONS(125),
    [anon_sym_SEMI_SEMI] = ACTIONS(545),
    [anon_sym_PIPE] = ACTIONS(545),
    [anon_sym_PIPE_AMP] = ACTIONS(545),
    [anon_sym_AMP_AMP] = ACTIONS(545),
    [anon_sym_PIPE_PIPE] = ACTIONS(545),
    [anon_sym_DQUOTE] = ACTIONS(261),
    [sym_single_quoted_argument] = ACTIONS(485),
    [anon_sym_DOLLAR] = ACTIONS(265),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(267),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(269),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_GT_GT] = ACTIONS(131),
    [anon_sym_AMP_GT] = ACTIONS(131),
    [anon_sym_AMP_GT_GT] = ACTIONS(131),
    [anon_sym_LT_AMP] = ACTIONS(131),
    [anon_sym_GT_AMP] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(133),
    [anon_sym_LT_LT_DASH] = ACTIONS(133),
    [sym_word] = ACTIONS(487),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(545),
    [anon_sym_LF] = ACTIONS(545),
    [anon_sym_AMP] = ACTIONS(545),
  },
  [131] = {
    [sym_file_redirect] = STATE(116),
    [sym_heredoc_redirect] = STATE(116),
    [sym_file_descriptor] = ACTIONS(125),
    [anon_sym_SEMI_SEMI] = ACTIONS(545),
    [anon_sym_PIPE] = ACTIONS(545),
    [anon_sym_PIPE_AMP] = ACTIONS(545),
    [anon_sym_AMP_AMP] = ACTIONS(545),
    [anon_sym_PIPE_PIPE] = ACTIONS(545),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_GT_GT] = ACTIONS(131),
    [anon_sym_AMP_GT] = ACTIONS(131),
    [anon_sym_AMP_GT_GT] = ACTIONS(131),
    [anon_sym_LT_AMP] = ACTIONS(131),
    [anon_sym_GT_AMP] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(133),
    [anon_sym_LT_LT_DASH] = ACTIONS(133),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(545),
    [anon_sym_LF] = ACTIONS(545),
    [anon_sym_AMP] = ACTIONS(545),
  },
  [132] = {
    [sym_expansion] = STATE(48),
    [sym_operator_expansion] = STATE(48),
    [sym_command_substitution] = STATE(48),
    [aux_sym_quoted_argument_repeat1] = STATE(210),
    [anon_sym_DQUOTE] = ACTIONS(547),
    [sym__quoted_chars] = ACTIONS(141),
    [anon_sym_DOLLAR] = ACTIONS(143),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(145),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(147),
    [sym_comment] = ACTIONS(135),
  },
  [133] = {
    [sym_file_descriptor] = ACTIONS(549),
    [anon_sym_SEMI_SEMI] = ACTIONS(551),
    [anon_sym_COLON] = ACTIONS(551),
    [anon_sym_PIPE] = ACTIONS(551),
    [anon_sym_PIPE_AMP] = ACTIONS(551),
    [anon_sym_AMP_AMP] = ACTIONS(551),
    [anon_sym_PIPE_PIPE] = ACTIONS(551),
    [anon_sym_DQUOTE] = ACTIONS(551),
    [sym_single_quoted_argument] = ACTIONS(551),
    [anon_sym_LT] = ACTIONS(551),
    [anon_sym_GT] = ACTIONS(551),
    [anon_sym_GT_GT] = ACTIONS(551),
    [anon_sym_AMP_GT] = ACTIONS(551),
    [anon_sym_AMP_GT_GT] = ACTIONS(551),
    [anon_sym_LT_AMP] = ACTIONS(551),
    [anon_sym_GT_AMP] = ACTIONS(551),
    [sym_leading_word] = ACTIONS(551),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(551),
    [anon_sym_LF] = ACTIONS(551),
    [anon_sym_AMP] = ACTIONS(551),
  },
  [134] = {
    [anon_sym_DOLLAR] = ACTIONS(553),
    [sym_word] = ACTIONS(555),
    [sym_comment] = ACTIONS(67),
  },
  [135] = {
    [sym_leading_word] = ACTIONS(557),
    [sym_comment] = ACTIONS(67),
  },
  [136] = {
    [sym_command] = STATE(214),
    [sym_environment_variable_assignment] = STATE(17),
    [sym_quoted_argument] = STATE(82),
    [sym_file_redirect] = STATE(17),
    [aux_sym_command_repeat1] = STATE(86),
    [sym_file_descriptor] = ACTIONS(71),
    [anon_sym_COLON] = ACTIONS(217),
    [anon_sym_DQUOTE] = ACTIONS(219),
    [sym_single_quoted_argument] = ACTIONS(221),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_AMP_GT] = ACTIONS(93),
    [anon_sym_AMP_GT_GT] = ACTIONS(93),
    [anon_sym_LT_AMP] = ACTIONS(93),
    [anon_sym_GT_AMP] = ACTIONS(93),
    [sym_leading_word] = ACTIONS(223),
    [sym_comment] = ACTIONS(67),
  },
  [137] = {
    [sym_file_descriptor] = ACTIONS(559),
    [anon_sym_SEMI_SEMI] = ACTIONS(561),
    [anon_sym_COLON] = ACTIONS(561),
    [anon_sym_PIPE] = ACTIONS(561),
    [anon_sym_PIPE_AMP] = ACTIONS(561),
    [anon_sym_AMP_AMP] = ACTIONS(561),
    [anon_sym_PIPE_PIPE] = ACTIONS(561),
    [anon_sym_DQUOTE] = ACTIONS(561),
    [sym_single_quoted_argument] = ACTIONS(561),
    [anon_sym_LT] = ACTIONS(561),
    [anon_sym_GT] = ACTIONS(561),
    [anon_sym_GT_GT] = ACTIONS(561),
    [anon_sym_AMP_GT] = ACTIONS(561),
    [anon_sym_AMP_GT_GT] = ACTIONS(561),
    [anon_sym_LT_AMP] = ACTIONS(561),
    [anon_sym_GT_AMP] = ACTIONS(561),
    [sym_leading_word] = ACTIONS(561),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(561),
    [anon_sym_LF] = ACTIONS(561),
    [anon_sym_AMP] = ACTIONS(561),
  },
  [138] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(563),
    [anon_sym_PIPE] = ACTIONS(563),
    [anon_sym_PIPE_AMP] = ACTIONS(563),
    [anon_sym_AMP_AMP] = ACTIONS(563),
    [anon_sym_PIPE_PIPE] = ACTIONS(563),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(563),
    [anon_sym_LF] = ACTIONS(563),
    [anon_sym_AMP] = ACTIONS(563),
  },
  [139] = {
    [sym_file_descriptor] = ACTIONS(181),
    [anon_sym_SEMI_SEMI] = ACTIONS(563),
    [anon_sym_COLON] = ACTIONS(183),
    [anon_sym_PIPE] = ACTIONS(563),
    [anon_sym_PIPE_AMP] = ACTIONS(563),
    [anon_sym_AMP_AMP] = ACTIONS(563),
    [anon_sym_PIPE_PIPE] = ACTIONS(563),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_single_quoted_argument] = ACTIONS(183),
    [anon_sym_LT] = ACTIONS(183),
    [anon_sym_GT] = ACTIONS(183),
    [anon_sym_GT_GT] = ACTIONS(183),
    [anon_sym_AMP_GT] = ACTIONS(183),
    [anon_sym_AMP_GT_GT] = ACTIONS(183),
    [anon_sym_LT_AMP] = ACTIONS(183),
    [anon_sym_GT_AMP] = ACTIONS(183),
    [sym_leading_word] = ACTIONS(183),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(563),
    [anon_sym_LF] = ACTIONS(563),
    [anon_sym_AMP] = ACTIONS(563),
  },
  [140] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(565),
    [anon_sym_PIPE] = ACTIONS(177),
    [anon_sym_PIPE_AMP] = ACTIONS(177),
    [anon_sym_AMP_AMP] = ACTIONS(565),
    [anon_sym_PIPE_PIPE] = ACTIONS(565),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(565),
    [anon_sym_LF] = ACTIONS(565),
    [anon_sym_AMP] = ACTIONS(565),
  },
  [141] = {
    [sym_file_descriptor] = ACTIONS(181),
    [anon_sym_SEMI_SEMI] = ACTIONS(565),
    [anon_sym_COLON] = ACTIONS(183),
    [anon_sym_PIPE] = ACTIONS(177),
    [anon_sym_PIPE_AMP] = ACTIONS(177),
    [anon_sym_AMP_AMP] = ACTIONS(565),
    [anon_sym_PIPE_PIPE] = ACTIONS(565),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_single_quoted_argument] = ACTIONS(183),
    [anon_sym_LT] = ACTIONS(183),
    [anon_sym_GT] = ACTIONS(183),
    [anon_sym_GT_GT] = ACTIONS(183),
    [anon_sym_AMP_GT] = ACTIONS(183),
    [anon_sym_AMP_GT_GT] = ACTIONS(183),
    [anon_sym_LT_AMP] = ACTIONS(183),
    [anon_sym_GT_AMP] = ACTIONS(183),
    [sym_leading_word] = ACTIONS(183),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(565),
    [anon_sym_LF] = ACTIONS(565),
    [anon_sym_AMP] = ACTIONS(565),
  },
  [142] = {
    [sym_quoted_argument] = STATE(100),
    [sym_expansion] = STATE(100),
    [sym_operator_expansion] = STATE(100),
    [sym_command_substitution] = STATE(100),
    [sym_file_redirect] = STATE(43),
    [sym_heredoc_redirect] = STATE(43),
    [aux_sym_bracket_command_repeat1] = STATE(215),
    [aux_sym_command_repeat2] = STATE(189),
    [sym_file_descriptor] = ACTIONS(125),
    [anon_sym_SEMI_SEMI] = ACTIONS(483),
    [anon_sym_PIPE] = ACTIONS(483),
    [anon_sym_PIPE_AMP] = ACTIONS(483),
    [anon_sym_AMP_AMP] = ACTIONS(483),
    [anon_sym_PIPE_PIPE] = ACTIONS(483),
    [anon_sym_DQUOTE] = ACTIONS(261),
    [sym_single_quoted_argument] = ACTIONS(263),
    [anon_sym_DOLLAR] = ACTIONS(265),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(267),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(269),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_GT_GT] = ACTIONS(131),
    [anon_sym_AMP_GT] = ACTIONS(131),
    [anon_sym_AMP_GT_GT] = ACTIONS(131),
    [anon_sym_LT_AMP] = ACTIONS(131),
    [anon_sym_GT_AMP] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(133),
    [anon_sym_LT_LT_DASH] = ACTIONS(133),
    [sym_word] = ACTIONS(271),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(483),
    [anon_sym_LF] = ACTIONS(483),
    [anon_sym_AMP] = ACTIONS(483),
  },
  [143] = {
    [sym_quoted_argument] = STATE(100),
    [sym_expansion] = STATE(100),
    [sym_operator_expansion] = STATE(100),
    [sym_command_substitution] = STATE(100),
    [sym_file_redirect] = STATE(43),
    [sym_heredoc_redirect] = STATE(43),
    [aux_sym_bracket_command_repeat1] = STATE(216),
    [aux_sym_command_repeat2] = STATE(217),
    [sym_file_descriptor] = ACTIONS(125),
    [anon_sym_SEMI_SEMI] = ACTIONS(567),
    [anon_sym_PIPE] = ACTIONS(567),
    [anon_sym_PIPE_AMP] = ACTIONS(567),
    [anon_sym_AMP_AMP] = ACTIONS(567),
    [anon_sym_PIPE_PIPE] = ACTIONS(567),
    [anon_sym_DQUOTE] = ACTIONS(261),
    [sym_single_quoted_argument] = ACTIONS(263),
    [anon_sym_DOLLAR] = ACTIONS(265),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(267),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(269),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_GT_GT] = ACTIONS(131),
    [anon_sym_AMP_GT] = ACTIONS(131),
    [anon_sym_AMP_GT_GT] = ACTIONS(131),
    [anon_sym_LT_AMP] = ACTIONS(131),
    [anon_sym_GT_AMP] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(133),
    [anon_sym_LT_LT_DASH] = ACTIONS(133),
    [sym_word] = ACTIONS(271),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(567),
    [anon_sym_LF] = ACTIONS(567),
    [anon_sym_AMP] = ACTIONS(567),
  },
  [144] = {
    [sym_quoted_argument] = STATE(218),
    [sym_expansion] = STATE(218),
    [sym_operator_expansion] = STATE(218),
    [sym_command_substitution] = STATE(218),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [sym_single_quoted_argument] = ACTIONS(569),
    [anon_sym_DOLLAR] = ACTIONS(153),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(155),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(157),
    [sym_word] = ACTIONS(571),
    [sym_comment] = ACTIONS(67),
  },
  [145] = {
    [sym_file_redirect] = STATE(116),
    [sym_heredoc_redirect] = STATE(116),
    [sym_file_descriptor] = ACTIONS(125),
    [anon_sym_SEMI_SEMI] = ACTIONS(567),
    [anon_sym_PIPE] = ACTIONS(567),
    [anon_sym_PIPE_AMP] = ACTIONS(567),
    [anon_sym_AMP_AMP] = ACTIONS(567),
    [anon_sym_PIPE_PIPE] = ACTIONS(567),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_GT_GT] = ACTIONS(131),
    [anon_sym_AMP_GT] = ACTIONS(131),
    [anon_sym_AMP_GT_GT] = ACTIONS(131),
    [anon_sym_LT_AMP] = ACTIONS(131),
    [anon_sym_GT_AMP] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(133),
    [anon_sym_LT_LT_DASH] = ACTIONS(133),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(567),
    [anon_sym_LF] = ACTIONS(567),
    [anon_sym_AMP] = ACTIONS(567),
  },
  [146] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(573),
    [anon_sym_PIPE] = ACTIONS(573),
    [anon_sym_PIPE_AMP] = ACTIONS(573),
    [anon_sym_AMP_AMP] = ACTIONS(573),
    [anon_sym_PIPE_PIPE] = ACTIONS(573),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(573),
    [anon_sym_LF] = ACTIONS(573),
    [anon_sym_AMP] = ACTIONS(573),
  },
  [147] = {
    [sym__terminated_statement] = STATE(65),
    [sym_while_statement] = STATE(15),
    [sym_if_statement] = STATE(15),
    [sym_case_statement] = STATE(15),
    [sym_bracket_command] = STATE(15),
    [sym_command] = STATE(15),
    [sym_pipeline] = STATE(15),
    [sym_list] = STATE(15),
    [sym_subshell] = STATE(15),
    [sym_environment_variable_assignment] = STATE(16),
    [sym_quoted_argument] = STATE(8),
    [sym_file_redirect] = STATE(17),
    [aux_sym_command_repeat1] = STATE(19),
    [sym_file_descriptor] = ACTIONS(71),
    [anon_sym_while] = ACTIONS(75),
    [anon_sym_done] = ACTIONS(575),
    [anon_sym_if] = ACTIONS(77),
    [anon_sym_case] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [sym_single_quoted_argument] = ACTIONS(91),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_AMP_GT] = ACTIONS(93),
    [anon_sym_AMP_GT_GT] = ACTIONS(93),
    [anon_sym_LT_AMP] = ACTIONS(93),
    [anon_sym_GT_AMP] = ACTIONS(93),
    [sym_leading_word] = ACTIONS(95),
    [sym_comment] = ACTIONS(67),
  },
  [148] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(577),
    [anon_sym_PIPE] = ACTIONS(577),
    [anon_sym_PIPE_AMP] = ACTIONS(577),
    [anon_sym_AMP_AMP] = ACTIONS(577),
    [anon_sym_PIPE_PIPE] = ACTIONS(577),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(577),
    [anon_sym_LF] = ACTIONS(577),
    [anon_sym_AMP] = ACTIONS(577),
  },
  [149] = {
    [sym__terminated_statement] = STATE(221),
    [sym_while_statement] = STATE(22),
    [sym_if_statement] = STATE(22),
    [sym_case_statement] = STATE(22),
    [sym_bracket_command] = STATE(22),
    [sym_command] = STATE(22),
    [sym_pipeline] = STATE(22),
    [sym_list] = STATE(22),
    [sym_subshell] = STATE(22),
    [sym_environment_variable_assignment] = STATE(23),
    [sym_quoted_argument] = STATE(8),
    [sym_file_redirect] = STATE(17),
    [aux_sym_command_repeat1] = STATE(19),
    [sym_file_descriptor] = ACTIONS(71),
    [anon_sym_while] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(77),
    [anon_sym_case] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [sym_single_quoted_argument] = ACTIONS(91),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_AMP_GT] = ACTIONS(93),
    [anon_sym_AMP_GT_GT] = ACTIONS(93),
    [anon_sym_LT_AMP] = ACTIONS(93),
    [anon_sym_GT_AMP] = ACTIONS(93),
    [sym_leading_word] = ACTIONS(95),
    [sym_comment] = ACTIONS(67),
  },
  [150] = {
    [sym__terminated_statement] = STATE(14),
    [sym_while_statement] = STATE(15),
    [sym_if_statement] = STATE(15),
    [sym_case_statement] = STATE(15),
    [sym_bracket_command] = STATE(15),
    [sym_command] = STATE(15),
    [sym_pipeline] = STATE(15),
    [sym_list] = STATE(15),
    [sym_subshell] = STATE(15),
    [sym_environment_variable_assignment] = STATE(16),
    [sym_quoted_argument] = STATE(8),
    [sym_file_redirect] = STATE(17),
    [aux_sym_program_repeat1] = STATE(222),
    [aux_sym_command_repeat1] = STATE(19),
    [sym_file_descriptor] = ACTIONS(71),
    [anon_sym_while] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(77),
    [anon_sym_fi] = ACTIONS(579),
    [anon_sym_case] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [sym_single_quoted_argument] = ACTIONS(91),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_AMP_GT] = ACTIONS(93),
    [anon_sym_AMP_GT_GT] = ACTIONS(93),
    [anon_sym_LT_AMP] = ACTIONS(93),
    [anon_sym_GT_AMP] = ACTIONS(93),
    [sym_leading_word] = ACTIONS(95),
    [sym_comment] = ACTIONS(67),
  },
  [151] = {
    [anon_sym_fi] = ACTIONS(581),
    [anon_sym_elif] = ACTIONS(581),
    [anon_sym_else] = ACTIONS(581),
    [sym_comment] = ACTIONS(67),
  },
  [152] = {
    [anon_sym_fi] = ACTIONS(583),
    [sym_comment] = ACTIONS(67),
  },
  [153] = {
    [sym__terminated_statement] = STATE(65),
    [sym_while_statement] = STATE(15),
    [sym_if_statement] = STATE(15),
    [sym_elif_clause] = STATE(151),
    [sym_else_clause] = STATE(224),
    [sym_case_statement] = STATE(15),
    [sym_bracket_command] = STATE(15),
    [sym_command] = STATE(15),
    [sym_pipeline] = STATE(15),
    [sym_list] = STATE(15),
    [sym_subshell] = STATE(15),
    [sym_environment_variable_assignment] = STATE(16),
    [sym_quoted_argument] = STATE(8),
    [sym_file_redirect] = STATE(17),
    [aux_sym_if_statement_repeat1] = STATE(225),
    [aux_sym_command_repeat1] = STATE(19),
    [sym_file_descriptor] = ACTIONS(71),
    [anon_sym_while] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(77),
    [anon_sym_fi] = ACTIONS(585),
    [anon_sym_elif] = ACTIONS(393),
    [anon_sym_else] = ACTIONS(395),
    [anon_sym_case] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [sym_single_quoted_argument] = ACTIONS(91),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_AMP_GT] = ACTIONS(93),
    [anon_sym_AMP_GT_GT] = ACTIONS(93),
    [anon_sym_LT_AMP] = ACTIONS(93),
    [anon_sym_GT_AMP] = ACTIONS(93),
    [sym_leading_word] = ACTIONS(95),
    [sym_comment] = ACTIONS(67),
  },
  [154] = {
    [sym_elif_clause] = STATE(226),
    [sym_else_clause] = STATE(224),
    [anon_sym_fi] = ACTIONS(583),
    [anon_sym_elif] = ACTIONS(587),
    [anon_sym_else] = ACTIONS(589),
    [sym_comment] = ACTIONS(67),
  },
  [155] = {
    [anon_sym_in] = ACTIONS(529),
    [anon_sym_SEMI_SEMI] = ACTIONS(529),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(529),
    [anon_sym_LF] = ACTIONS(529),
    [anon_sym_AMP] = ACTIONS(529),
  },
  [156] = {
    [sym_case_item] = STATE(230),
    [sym_quoted_argument] = STATE(228),
    [sym_expansion] = STATE(228),
    [sym_operator_expansion] = STATE(228),
    [sym_command_substitution] = STATE(228),
    [aux_sym_case_statement_repeat1] = STATE(231),
    [anon_sym_esac] = ACTIONS(591),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [sym_single_quoted_argument] = ACTIONS(593),
    [anon_sym_DOLLAR] = ACTIONS(117),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(119),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(121),
    [sym_word] = ACTIONS(595),
    [sym_comment] = ACTIONS(67),
  },
  [157] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(597),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(597),
    [anon_sym_LF] = ACTIONS(597),
    [anon_sym_AMP] = ACTIONS(597),
  },
  [158] = {
    [sym_quoted_argument] = STATE(233),
    [sym_expansion] = STATE(233),
    [sym_operator_expansion] = STATE(233),
    [sym_command_substitution] = STATE(233),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [sym_single_quoted_argument] = ACTIONS(599),
    [anon_sym_DOLLAR] = ACTIONS(117),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(119),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(121),
    [sym_word] = ACTIONS(601),
    [sym_comment] = ACTIONS(67),
  },
  [159] = {
    [anon_sym_in] = ACTIONS(603),
    [anon_sym_SEMI_SEMI] = ACTIONS(603),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(603),
    [anon_sym_LF] = ACTIONS(603),
    [anon_sym_AMP] = ACTIONS(603),
  },
  [160] = {
    [anon_sym_LT] = ACTIONS(605),
    [anon_sym_GT] = ACTIONS(605),
    [anon_sym_GT_GT] = ACTIONS(607),
    [anon_sym_AMP_GT] = ACTIONS(605),
    [anon_sym_AMP_GT_GT] = ACTIONS(607),
    [anon_sym_LT_AMP] = ACTIONS(607),
    [anon_sym_GT_AMP] = ACTIONS(607),
    [sym_comment] = ACTIONS(67),
  },
  [161] = {
    [sym_quoted_argument] = STATE(237),
    [sym_expansion] = STATE(237),
    [sym_operator_expansion] = STATE(237),
    [sym_command_substitution] = STATE(237),
    [sym_file_redirect] = STATE(164),
    [sym_heredoc_redirect] = STATE(164),
    [aux_sym_bracket_command_repeat1] = STATE(242),
    [aux_sym_command_repeat2] = STATE(243),
    [sym_file_descriptor] = ACTIONS(413),
    [anon_sym_RPAREN] = ACTIONS(609),
    [anon_sym_DQUOTE] = ACTIONS(611),
    [sym_single_quoted_argument] = ACTIONS(613),
    [anon_sym_DOLLAR] = ACTIONS(615),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(617),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(621),
    [anon_sym_GT] = ACTIONS(621),
    [anon_sym_GT_GT] = ACTIONS(623),
    [anon_sym_AMP_GT] = ACTIONS(621),
    [anon_sym_AMP_GT_GT] = ACTIONS(623),
    [anon_sym_LT_AMP] = ACTIONS(623),
    [anon_sym_GT_AMP] = ACTIONS(623),
    [anon_sym_LT_LT] = ACTIONS(625),
    [anon_sym_LT_LT_DASH] = ACTIONS(627),
    [sym_word] = ACTIONS(629),
    [sym_comment] = ACTIONS(67),
  },
  [162] = {
    [sym_quoted_argument] = STATE(244),
    [sym_expansion] = STATE(244),
    [sym_operator_expansion] = STATE(244),
    [sym_command_substitution] = STATE(244),
    [anon_sym_DQUOTE] = ACTIONS(611),
    [sym_single_quoted_argument] = ACTIONS(631),
    [anon_sym_DOLLAR] = ACTIONS(615),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(617),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(619),
    [sym_word] = ACTIONS(633),
    [sym_comment] = ACTIONS(67),
  },
  [163] = {
    [sym_heredoc] = STATE(248),
    [sym__simple_heredoc] = ACTIONS(635),
    [sym__heredoc_beginning] = ACTIONS(637),
    [sym_comment] = ACTIONS(67),
  },
  [164] = {
    [sym_file_descriptor] = ACTIONS(289),
    [anon_sym_RPAREN] = ACTIONS(289),
    [anon_sym_LT] = ACTIONS(639),
    [anon_sym_GT] = ACTIONS(639),
    [anon_sym_GT_GT] = ACTIONS(289),
    [anon_sym_AMP_GT] = ACTIONS(639),
    [anon_sym_AMP_GT_GT] = ACTIONS(289),
    [anon_sym_LT_AMP] = ACTIONS(289),
    [anon_sym_GT_AMP] = ACTIONS(289),
    [anon_sym_LT_LT] = ACTIONS(639),
    [anon_sym_LT_LT_DASH] = ACTIONS(289),
    [sym_comment] = ACTIONS(67),
  },
  [165] = {
    [sym_file_redirect] = STATE(249),
    [sym_heredoc_redirect] = STATE(249),
    [sym_file_descriptor] = ACTIONS(413),
    [anon_sym_RPAREN] = ACTIONS(609),
    [anon_sym_LT] = ACTIONS(621),
    [anon_sym_GT] = ACTIONS(621),
    [anon_sym_GT_GT] = ACTIONS(623),
    [anon_sym_AMP_GT] = ACTIONS(621),
    [anon_sym_AMP_GT_GT] = ACTIONS(623),
    [anon_sym_LT_AMP] = ACTIONS(623),
    [anon_sym_GT_AMP] = ACTIONS(623),
    [anon_sym_LT_LT] = ACTIONS(625),
    [anon_sym_LT_LT_DASH] = ACTIONS(627),
    [sym_comment] = ACTIONS(67),
  },
  [166] = {
    [sym_file_descriptor] = ACTIONS(297),
    [anon_sym_RPAREN] = ACTIONS(299),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(299),
    [anon_sym_LT] = ACTIONS(299),
    [anon_sym_GT] = ACTIONS(299),
    [anon_sym_GT_GT] = ACTIONS(299),
    [anon_sym_AMP_GT] = ACTIONS(299),
    [anon_sym_AMP_GT_GT] = ACTIONS(299),
    [anon_sym_LT_AMP] = ACTIONS(299),
    [anon_sym_GT_AMP] = ACTIONS(299),
    [anon_sym_LT_LT] = ACTIONS(299),
    [anon_sym_LT_LT_DASH] = ACTIONS(299),
    [sym_comment] = ACTIONS(135),
  },
  [167] = {
    [sym_expansion] = STATE(123),
    [sym_operator_expansion] = STATE(123),
    [sym_command_substitution] = STATE(123),
    [anon_sym_DQUOTE] = ACTIONS(641),
    [sym__quoted_chars] = ACTIONS(313),
    [anon_sym_DOLLAR] = ACTIONS(143),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(145),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(147),
    [sym_comment] = ACTIONS(135),
  },
  [168] = {
    [sym_quoted_argument] = STATE(237),
    [sym_expansion] = STATE(237),
    [sym_operator_expansion] = STATE(237),
    [sym_command_substitution] = STATE(237),
    [sym_file_redirect] = STATE(164),
    [sym_heredoc_redirect] = STATE(164),
    [aux_sym_bracket_command_repeat1] = STATE(251),
    [aux_sym_command_repeat2] = STATE(252),
    [sym_file_descriptor] = ACTIONS(413),
    [anon_sym_RPAREN] = ACTIONS(643),
    [anon_sym_DQUOTE] = ACTIONS(611),
    [sym_single_quoted_argument] = ACTIONS(613),
    [anon_sym_DOLLAR] = ACTIONS(615),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(617),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(621),
    [anon_sym_GT] = ACTIONS(621),
    [anon_sym_GT_GT] = ACTIONS(623),
    [anon_sym_AMP_GT] = ACTIONS(621),
    [anon_sym_AMP_GT_GT] = ACTIONS(623),
    [anon_sym_LT_AMP] = ACTIONS(623),
    [anon_sym_GT_AMP] = ACTIONS(623),
    [anon_sym_LT_LT] = ACTIONS(625),
    [anon_sym_LT_LT_DASH] = ACTIONS(627),
    [sym_word] = ACTIONS(629),
    [sym_comment] = ACTIONS(67),
  },
  [169] = {
    [sym_file_redirect] = STATE(249),
    [sym_heredoc_redirect] = STATE(249),
    [sym_file_descriptor] = ACTIONS(413),
    [anon_sym_RPAREN] = ACTIONS(643),
    [anon_sym_LT] = ACTIONS(621),
    [anon_sym_GT] = ACTIONS(621),
    [anon_sym_GT_GT] = ACTIONS(623),
    [anon_sym_AMP_GT] = ACTIONS(621),
    [anon_sym_AMP_GT_GT] = ACTIONS(623),
    [anon_sym_LT_AMP] = ACTIONS(623),
    [anon_sym_GT_AMP] = ACTIONS(623),
    [anon_sym_LT_LT] = ACTIONS(625),
    [anon_sym_LT_LT_DASH] = ACTIONS(627),
    [sym_comment] = ACTIONS(67),
  },
  [170] = {
    [anon_sym_in] = ACTIONS(645),
    [anon_sym_SEMI_SEMI] = ACTIONS(645),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(645),
    [anon_sym_LF] = ACTIONS(645),
    [anon_sym_AMP] = ACTIONS(645),
  },
  [171] = {
    [sym_file_redirect] = STATE(164),
    [sym_heredoc_redirect] = STATE(164),
    [aux_sym_command_repeat2] = STATE(243),
    [sym_file_descriptor] = ACTIONS(413),
    [anon_sym_RPAREN] = ACTIONS(259),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(647),
    [anon_sym_LT] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(417),
    [anon_sym_GT_GT] = ACTIONS(417),
    [anon_sym_AMP_GT] = ACTIONS(417),
    [anon_sym_AMP_GT_GT] = ACTIONS(417),
    [anon_sym_LT_AMP] = ACTIONS(417),
    [anon_sym_GT_AMP] = ACTIONS(417),
    [anon_sym_LT_LT] = ACTIONS(419),
    [anon_sym_LT_LT_DASH] = ACTIONS(419),
    [sym_comment] = ACTIONS(135),
  },
  [172] = {
    [sym_file_redirect] = STATE(164),
    [sym_heredoc_redirect] = STATE(164),
    [aux_sym_command_repeat2] = STATE(255),
    [sym_file_descriptor] = ACTIONS(413),
    [anon_sym_RPAREN] = ACTIONS(363),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(649),
    [anon_sym_EQ] = ACTIONS(367),
    [anon_sym_LT] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(417),
    [anon_sym_GT_GT] = ACTIONS(417),
    [anon_sym_AMP_GT] = ACTIONS(417),
    [anon_sym_AMP_GT_GT] = ACTIONS(417),
    [anon_sym_LT_AMP] = ACTIONS(417),
    [anon_sym_GT_AMP] = ACTIONS(417),
    [anon_sym_LT_LT] = ACTIONS(419),
    [anon_sym_LT_LT_DASH] = ACTIONS(419),
    [sym_comment] = ACTIONS(135),
  },
  [173] = {
    [sym_case_item] = STATE(230),
    [sym_quoted_argument] = STATE(228),
    [sym_expansion] = STATE(228),
    [sym_operator_expansion] = STATE(228),
    [sym_command_substitution] = STATE(228),
    [aux_sym_case_statement_repeat1] = STATE(257),
    [anon_sym_esac] = ACTIONS(651),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [sym_single_quoted_argument] = ACTIONS(593),
    [anon_sym_DOLLAR] = ACTIONS(117),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(119),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(121),
    [sym_word] = ACTIONS(595),
    [sym_comment] = ACTIONS(67),
  },
  [174] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(653),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(653),
    [anon_sym_LF] = ACTIONS(653),
    [anon_sym_AMP] = ACTIONS(653),
  },
  [175] = {
    [anon_sym_RPAREN] = ACTIONS(527),
    [anon_sym_RBRACK] = ACTIONS(655),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(655),
    [anon_sym_DQUOTE] = ACTIONS(527),
    [sym_single_quoted_argument] = ACTIONS(655),
    [anon_sym_DOLLAR] = ACTIONS(655),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(527),
    [anon_sym_RBRACE] = ACTIONS(527),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(527),
    [sym_word] = ACTIONS(529),
    [sym_comment] = ACTIONS(67),
  },
  [176] = {
    [sym_quoted_argument] = STATE(259),
    [sym_expansion] = STATE(259),
    [sym_operator_expansion] = STATE(259),
    [sym_command_substitution] = STATE(259),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [sym_single_quoted_argument] = ACTIONS(657),
    [anon_sym_DOLLAR] = ACTIONS(117),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(119),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(121),
    [sym_word] = ACTIONS(659),
    [sym_comment] = ACTIONS(67),
  },
  [177] = {
    [anon_sym_RPAREN] = ACTIONS(661),
    [anon_sym_RBRACK] = ACTIONS(663),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(663),
    [anon_sym_DQUOTE] = ACTIONS(661),
    [sym_single_quoted_argument] = ACTIONS(663),
    [anon_sym_DOLLAR] = ACTIONS(663),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(661),
    [anon_sym_RBRACE] = ACTIONS(661),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(661),
    [sym_word] = ACTIONS(603),
    [sym_comment] = ACTIONS(67),
  },
  [178] = {
    [anon_sym_RPAREN] = ACTIONS(665),
    [anon_sym_RBRACK] = ACTIONS(667),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(667),
    [anon_sym_DQUOTE] = ACTIONS(665),
    [sym_single_quoted_argument] = ACTIONS(667),
    [anon_sym_DOLLAR] = ACTIONS(667),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(665),
    [anon_sym_RBRACE] = ACTIONS(665),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(665),
    [sym_word] = ACTIONS(645),
    [sym_comment] = ACTIONS(67),
  },
  [179] = {
    [sym_file_descriptor] = ACTIONS(375),
    [anon_sym_SEMI_SEMI] = ACTIONS(379),
    [anon_sym_PIPE] = ACTIONS(379),
    [anon_sym_PIPE_AMP] = ACTIONS(379),
    [anon_sym_AMP_AMP] = ACTIONS(379),
    [anon_sym_PIPE_PIPE] = ACTIONS(379),
    [anon_sym_LT] = ACTIONS(379),
    [anon_sym_GT] = ACTIONS(379),
    [anon_sym_GT_GT] = ACTIONS(379),
    [anon_sym_AMP_GT] = ACTIONS(379),
    [anon_sym_AMP_GT_GT] = ACTIONS(379),
    [anon_sym_LT_AMP] = ACTIONS(379),
    [anon_sym_GT_AMP] = ACTIONS(379),
    [anon_sym_LT_LT] = ACTIONS(379),
    [anon_sym_LT_LT_DASH] = ACTIONS(379),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(379),
    [anon_sym_LF] = ACTIONS(379),
    [anon_sym_AMP] = ACTIONS(379),
  },
  [180] = {
    [sym_file_descriptor] = ACTIONS(381),
    [anon_sym_SEMI_SEMI] = ACTIONS(385),
    [anon_sym_PIPE] = ACTIONS(385),
    [anon_sym_PIPE_AMP] = ACTIONS(385),
    [anon_sym_AMP_AMP] = ACTIONS(385),
    [anon_sym_PIPE_PIPE] = ACTIONS(385),
    [anon_sym_LT] = ACTIONS(385),
    [anon_sym_GT] = ACTIONS(385),
    [anon_sym_GT_GT] = ACTIONS(385),
    [anon_sym_AMP_GT] = ACTIONS(385),
    [anon_sym_AMP_GT_GT] = ACTIONS(385),
    [anon_sym_LT_AMP] = ACTIONS(385),
    [anon_sym_GT_AMP] = ACTIONS(385),
    [anon_sym_LT_LT] = ACTIONS(385),
    [anon_sym_LT_LT_DASH] = ACTIONS(385),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(385),
    [anon_sym_LF] = ACTIONS(385),
    [anon_sym_AMP] = ACTIONS(385),
  },
  [181] = {
    [sym_file_descriptor] = ACTIONS(297),
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
    [anon_sym_GT_GT] = ACTIONS(299),
    [anon_sym_AMP_GT] = ACTIONS(299),
    [anon_sym_AMP_GT_GT] = ACTIONS(299),
    [anon_sym_LT_AMP] = ACTIONS(299),
    [anon_sym_GT_AMP] = ACTIONS(299),
    [anon_sym_LT_LT] = ACTIONS(299),
    [anon_sym_LT_LT_DASH] = ACTIONS(299),
    [sym_word] = ACTIONS(299),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(299),
    [anon_sym_LF] = ACTIONS(299),
    [anon_sym_AMP] = ACTIONS(299),
  },
  [182] = {
    [sym_expansion] = STATE(123),
    [sym_operator_expansion] = STATE(123),
    [sym_command_substitution] = STATE(123),
    [anon_sym_DQUOTE] = ACTIONS(669),
    [sym__quoted_chars] = ACTIONS(313),
    [anon_sym_DOLLAR] = ACTIONS(143),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(145),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(147),
    [sym_comment] = ACTIONS(135),
  },
  [183] = {
    [sym_file_descriptor] = ACTIONS(441),
    [anon_sym_SEMI_SEMI] = ACTIONS(403),
    [anon_sym_PIPE] = ACTIONS(403),
    [anon_sym_PIPE_AMP] = ACTIONS(403),
    [anon_sym_AMP_AMP] = ACTIONS(403),
    [anon_sym_PIPE_PIPE] = ACTIONS(403),
    [anon_sym_DQUOTE] = ACTIONS(403),
    [sym_single_quoted_argument] = ACTIONS(403),
    [anon_sym_DOLLAR] = ACTIONS(403),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(403),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(403),
    [anon_sym_LT] = ACTIONS(403),
    [anon_sym_GT] = ACTIONS(403),
    [anon_sym_GT_GT] = ACTIONS(403),
    [anon_sym_AMP_GT] = ACTIONS(403),
    [anon_sym_AMP_GT_GT] = ACTIONS(403),
    [anon_sym_LT_AMP] = ACTIONS(403),
    [anon_sym_GT_AMP] = ACTIONS(403),
    [anon_sym_LT_LT] = ACTIONS(403),
    [anon_sym_LT_LT_DASH] = ACTIONS(403),
    [sym_word] = ACTIONS(403),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(403),
    [anon_sym_LF] = ACTIONS(403),
    [anon_sym_AMP] = ACTIONS(403),
  },
  [184] = {
    [sym_file_descriptor] = ACTIONS(445),
    [anon_sym_SEMI_SEMI] = ACTIONS(405),
    [anon_sym_PIPE] = ACTIONS(405),
    [anon_sym_PIPE_AMP] = ACTIONS(405),
    [anon_sym_AMP_AMP] = ACTIONS(405),
    [anon_sym_PIPE_PIPE] = ACTIONS(405),
    [anon_sym_DQUOTE] = ACTIONS(405),
    [sym_single_quoted_argument] = ACTIONS(405),
    [anon_sym_DOLLAR] = ACTIONS(405),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(405),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(405),
    [anon_sym_LT] = ACTIONS(405),
    [anon_sym_GT] = ACTIONS(405),
    [anon_sym_GT_GT] = ACTIONS(405),
    [anon_sym_AMP_GT] = ACTIONS(405),
    [anon_sym_AMP_GT_GT] = ACTIONS(405),
    [anon_sym_LT_AMP] = ACTIONS(405),
    [anon_sym_GT_AMP] = ACTIONS(405),
    [anon_sym_LT_LT] = ACTIONS(405),
    [anon_sym_LT_LT_DASH] = ACTIONS(405),
    [sym_word] = ACTIONS(405),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(405),
    [anon_sym_LF] = ACTIONS(405),
    [anon_sym_AMP] = ACTIONS(405),
  },
  [185] = {
    [anon_sym_COLON] = ACTIONS(671),
    [anon_sym_EQ] = ACTIONS(673),
    [anon_sym_COLON_QMARK] = ACTIONS(673),
    [anon_sym_COLON_DASH] = ACTIONS(673),
    [anon_sym_RBRACE] = ACTIONS(675),
    [sym_comment] = ACTIONS(67),
  },
  [186] = {
    [anon_sym_RPAREN] = ACTIONS(677),
    [sym_comment] = ACTIONS(67),
  },
  [187] = {
    [sym_file_descriptor] = ACTIONS(461),
    [anon_sym_SEMI_SEMI] = ACTIONS(463),
    [anon_sym_PIPE] = ACTIONS(463),
    [anon_sym_PIPE_AMP] = ACTIONS(463),
    [anon_sym_AMP_AMP] = ACTIONS(463),
    [anon_sym_PIPE_PIPE] = ACTIONS(463),
    [anon_sym_DQUOTE] = ACTIONS(463),
    [sym_single_quoted_argument] = ACTIONS(463),
    [anon_sym_DOLLAR] = ACTIONS(463),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(463),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(463),
    [anon_sym_LT] = ACTIONS(463),
    [anon_sym_GT] = ACTIONS(463),
    [anon_sym_GT_GT] = ACTIONS(463),
    [anon_sym_AMP_GT] = ACTIONS(463),
    [anon_sym_AMP_GT_GT] = ACTIONS(463),
    [anon_sym_LT_AMP] = ACTIONS(463),
    [anon_sym_GT_AMP] = ACTIONS(463),
    [anon_sym_LT_LT] = ACTIONS(463),
    [anon_sym_LT_LT_DASH] = ACTIONS(463),
    [sym_word] = ACTIONS(463),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(463),
    [anon_sym_LF] = ACTIONS(463),
    [anon_sym_AMP] = ACTIONS(463),
  },
  [188] = {
    [sym_file_descriptor] = ACTIONS(467),
    [anon_sym_SEMI_SEMI] = ACTIONS(469),
    [anon_sym_PIPE] = ACTIONS(469),
    [anon_sym_PIPE_AMP] = ACTIONS(469),
    [anon_sym_AMP_AMP] = ACTIONS(469),
    [anon_sym_PIPE_PIPE] = ACTIONS(469),
    [anon_sym_DQUOTE] = ACTIONS(469),
    [sym_single_quoted_argument] = ACTIONS(469),
    [anon_sym_DOLLAR] = ACTIONS(469),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(469),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(469),
    [anon_sym_LT] = ACTIONS(469),
    [anon_sym_GT] = ACTIONS(469),
    [anon_sym_GT_GT] = ACTIONS(469),
    [anon_sym_AMP_GT] = ACTIONS(469),
    [anon_sym_AMP_GT_GT] = ACTIONS(469),
    [anon_sym_LT_AMP] = ACTIONS(469),
    [anon_sym_GT_AMP] = ACTIONS(469),
    [anon_sym_LT_LT] = ACTIONS(469),
    [anon_sym_LT_LT_DASH] = ACTIONS(469),
    [sym_word] = ACTIONS(469),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(469),
    [anon_sym_LF] = ACTIONS(469),
    [anon_sym_AMP] = ACTIONS(469),
  },
  [189] = {
    [sym_file_redirect] = STATE(116),
    [sym_heredoc_redirect] = STATE(116),
    [sym_file_descriptor] = ACTIONS(125),
    [anon_sym_SEMI_SEMI] = ACTIONS(679),
    [anon_sym_PIPE] = ACTIONS(679),
    [anon_sym_PIPE_AMP] = ACTIONS(679),
    [anon_sym_AMP_AMP] = ACTIONS(679),
    [anon_sym_PIPE_PIPE] = ACTIONS(679),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_GT_GT] = ACTIONS(131),
    [anon_sym_AMP_GT] = ACTIONS(131),
    [anon_sym_AMP_GT_GT] = ACTIONS(131),
    [anon_sym_LT_AMP] = ACTIONS(131),
    [anon_sym_GT_AMP] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(133),
    [anon_sym_LT_LT_DASH] = ACTIONS(133),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(679),
    [anon_sym_LF] = ACTIONS(679),
    [anon_sym_AMP] = ACTIONS(679),
  },
  [190] = {
    [sym_file_descriptor] = ACTIONS(297),
    [anon_sym_SEMI_SEMI] = ACTIONS(299),
    [anon_sym_PIPE] = ACTIONS(299),
    [anon_sym_PIPE_AMP] = ACTIONS(299),
    [anon_sym_AMP_AMP] = ACTIONS(299),
    [anon_sym_PIPE_PIPE] = ACTIONS(299),
    [anon_sym_LT] = ACTIONS(299),
    [anon_sym_GT] = ACTIONS(299),
    [anon_sym_GT_GT] = ACTIONS(299),
    [anon_sym_AMP_GT] = ACTIONS(299),
    [anon_sym_AMP_GT_GT] = ACTIONS(299),
    [anon_sym_LT_AMP] = ACTIONS(299),
    [anon_sym_GT_AMP] = ACTIONS(299),
    [anon_sym_LT_LT] = ACTIONS(299),
    [anon_sym_LT_LT_DASH] = ACTIONS(299),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(299),
    [anon_sym_LF] = ACTIONS(299),
    [anon_sym_AMP] = ACTIONS(299),
  },
  [191] = {
    [sym_expansion] = STATE(123),
    [sym_operator_expansion] = STATE(123),
    [sym_command_substitution] = STATE(123),
    [anon_sym_DQUOTE] = ACTIONS(681),
    [sym__quoted_chars] = ACTIONS(313),
    [anon_sym_DOLLAR] = ACTIONS(143),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(145),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(147),
    [sym_comment] = ACTIONS(135),
  },
  [192] = {
    [sym_file_descriptor] = ACTIONS(441),
    [anon_sym_SEMI_SEMI] = ACTIONS(403),
    [anon_sym_PIPE] = ACTIONS(403),
    [anon_sym_PIPE_AMP] = ACTIONS(403),
    [anon_sym_AMP_AMP] = ACTIONS(403),
    [anon_sym_PIPE_PIPE] = ACTIONS(403),
    [anon_sym_LT] = ACTIONS(403),
    [anon_sym_GT] = ACTIONS(403),
    [anon_sym_GT_GT] = ACTIONS(403),
    [anon_sym_AMP_GT] = ACTIONS(403),
    [anon_sym_AMP_GT_GT] = ACTIONS(403),
    [anon_sym_LT_AMP] = ACTIONS(403),
    [anon_sym_GT_AMP] = ACTIONS(403),
    [anon_sym_LT_LT] = ACTIONS(403),
    [anon_sym_LT_LT_DASH] = ACTIONS(403),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(403),
    [anon_sym_LF] = ACTIONS(403),
    [anon_sym_AMP] = ACTIONS(403),
  },
  [193] = {
    [sym_file_descriptor] = ACTIONS(445),
    [anon_sym_SEMI_SEMI] = ACTIONS(405),
    [anon_sym_PIPE] = ACTIONS(405),
    [anon_sym_PIPE_AMP] = ACTIONS(405),
    [anon_sym_AMP_AMP] = ACTIONS(405),
    [anon_sym_PIPE_PIPE] = ACTIONS(405),
    [anon_sym_LT] = ACTIONS(405),
    [anon_sym_GT] = ACTIONS(405),
    [anon_sym_GT_GT] = ACTIONS(405),
    [anon_sym_AMP_GT] = ACTIONS(405),
    [anon_sym_AMP_GT_GT] = ACTIONS(405),
    [anon_sym_LT_AMP] = ACTIONS(405),
    [anon_sym_GT_AMP] = ACTIONS(405),
    [anon_sym_LT_LT] = ACTIONS(405),
    [anon_sym_LT_LT_DASH] = ACTIONS(405),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(405),
    [anon_sym_LF] = ACTIONS(405),
    [anon_sym_AMP] = ACTIONS(405),
  },
  [194] = {
    [anon_sym_COLON] = ACTIONS(683),
    [anon_sym_EQ] = ACTIONS(685),
    [anon_sym_COLON_QMARK] = ACTIONS(685),
    [anon_sym_COLON_DASH] = ACTIONS(685),
    [anon_sym_RBRACE] = ACTIONS(687),
    [sym_comment] = ACTIONS(67),
  },
  [195] = {
    [anon_sym_RPAREN] = ACTIONS(689),
    [sym_comment] = ACTIONS(67),
  },
  [196] = {
    [sym__heredoc_middle] = ACTIONS(691),
    [sym__heredoc_end] = ACTIONS(691),
    [anon_sym_DOLLAR] = ACTIONS(693),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(691),
    [sym_comment] = ACTIONS(67),
  },
  [197] = {
    [sym_file_descriptor] = ACTIONS(695),
    [anon_sym_SEMI_SEMI] = ACTIONS(697),
    [anon_sym_PIPE] = ACTIONS(697),
    [anon_sym_PIPE_AMP] = ACTIONS(697),
    [anon_sym_AMP_AMP] = ACTIONS(697),
    [anon_sym_PIPE_PIPE] = ACTIONS(697),
    [anon_sym_LT] = ACTIONS(697),
    [anon_sym_GT] = ACTIONS(697),
    [anon_sym_GT_GT] = ACTIONS(697),
    [anon_sym_AMP_GT] = ACTIONS(697),
    [anon_sym_AMP_GT_GT] = ACTIONS(697),
    [anon_sym_LT_AMP] = ACTIONS(697),
    [anon_sym_GT_AMP] = ACTIONS(697),
    [anon_sym_LT_LT] = ACTIONS(697),
    [anon_sym_LT_LT_DASH] = ACTIONS(697),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(697),
    [anon_sym_LF] = ACTIONS(697),
    [anon_sym_AMP] = ACTIONS(697),
  },
  [198] = {
    [anon_sym_DOLLAR] = ACTIONS(699),
    [sym_word] = ACTIONS(701),
    [sym_comment] = ACTIONS(67),
  },
  [199] = {
    [sym_leading_word] = ACTIONS(703),
    [sym_comment] = ACTIONS(67),
  },
  [200] = {
    [sym_expansion] = STATE(272),
    [sym_operator_expansion] = STATE(272),
    [sym__heredoc_middle] = ACTIONS(705),
    [sym__heredoc_end] = ACTIONS(707),
    [anon_sym_DOLLAR] = ACTIONS(505),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(507),
    [sym_comment] = ACTIONS(67),
  },
  [201] = {
    [sym_quoted_argument] = STATE(274),
    [sym_expansion] = STATE(274),
    [sym_operator_expansion] = STATE(274),
    [sym_command_substitution] = STATE(274),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [sym_single_quoted_argument] = ACTIONS(709),
    [anon_sym_DOLLAR] = ACTIONS(117),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(119),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(121),
    [sym_word] = ACTIONS(711),
    [sym_comment] = ACTIONS(67),
  },
  [202] = {
    [anon_sym_DQUOTE] = ACTIONS(603),
    [sym__quoted_chars] = ACTIONS(663),
    [anon_sym_DOLLAR] = ACTIONS(603),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(603),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(603),
    [sym_comment] = ACTIONS(135),
  },
  [203] = {
    [anon_sym_DQUOTE] = ACTIONS(645),
    [sym__quoted_chars] = ACTIONS(667),
    [anon_sym_DOLLAR] = ACTIONS(645),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(645),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(645),
    [sym_comment] = ACTIONS(135),
  },
  [204] = {
    [sym_file_descriptor] = ACTIONS(527),
    [anon_sym_COLON] = ACTIONS(527),
    [anon_sym_DQUOTE] = ACTIONS(527),
    [sym_single_quoted_argument] = ACTIONS(655),
    [anon_sym_LT] = ACTIONS(655),
    [anon_sym_GT] = ACTIONS(655),
    [anon_sym_GT_GT] = ACTIONS(655),
    [anon_sym_AMP_GT] = ACTIONS(655),
    [anon_sym_AMP_GT_GT] = ACTIONS(655),
    [anon_sym_LT_AMP] = ACTIONS(655),
    [anon_sym_GT_AMP] = ACTIONS(655),
    [sym_leading_word] = ACTIONS(529),
    [sym_comment] = ACTIONS(67),
  },
  [205] = {
    [sym_quoted_argument] = STATE(276),
    [sym_expansion] = STATE(276),
    [sym_operator_expansion] = STATE(276),
    [sym_command_substitution] = STATE(276),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [sym_single_quoted_argument] = ACTIONS(713),
    [anon_sym_DOLLAR] = ACTIONS(117),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(119),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(121),
    [sym_word] = ACTIONS(715),
    [sym_comment] = ACTIONS(67),
  },
  [206] = {
    [sym_file_descriptor] = ACTIONS(661),
    [anon_sym_COLON] = ACTIONS(661),
    [anon_sym_DQUOTE] = ACTIONS(661),
    [sym_single_quoted_argument] = ACTIONS(663),
    [anon_sym_LT] = ACTIONS(663),
    [anon_sym_GT] = ACTIONS(663),
    [anon_sym_GT_GT] = ACTIONS(663),
    [anon_sym_AMP_GT] = ACTIONS(663),
    [anon_sym_AMP_GT_GT] = ACTIONS(663),
    [anon_sym_LT_AMP] = ACTIONS(663),
    [anon_sym_GT_AMP] = ACTIONS(663),
    [sym_leading_word] = ACTIONS(603),
    [sym_comment] = ACTIONS(67),
  },
  [207] = {
    [sym_file_descriptor] = ACTIONS(665),
    [anon_sym_COLON] = ACTIONS(665),
    [anon_sym_DQUOTE] = ACTIONS(665),
    [sym_single_quoted_argument] = ACTIONS(667),
    [anon_sym_LT] = ACTIONS(667),
    [anon_sym_GT] = ACTIONS(667),
    [anon_sym_GT_GT] = ACTIONS(667),
    [anon_sym_AMP_GT] = ACTIONS(667),
    [anon_sym_AMP_GT_GT] = ACTIONS(667),
    [anon_sym_LT_AMP] = ACTIONS(667),
    [anon_sym_GT_AMP] = ACTIONS(667),
    [sym_leading_word] = ACTIONS(645),
    [sym_comment] = ACTIONS(67),
  },
  [208] = {
    [sym_file_redirect] = STATE(116),
    [sym_heredoc_redirect] = STATE(116),
    [sym_file_descriptor] = ACTIONS(125),
    [anon_sym_SEMI_SEMI] = ACTIONS(717),
    [anon_sym_PIPE] = ACTIONS(717),
    [anon_sym_PIPE_AMP] = ACTIONS(717),
    [anon_sym_AMP_AMP] = ACTIONS(717),
    [anon_sym_PIPE_PIPE] = ACTIONS(717),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_GT_GT] = ACTIONS(131),
    [anon_sym_AMP_GT] = ACTIONS(131),
    [anon_sym_AMP_GT_GT] = ACTIONS(131),
    [anon_sym_LT_AMP] = ACTIONS(131),
    [anon_sym_GT_AMP] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(133),
    [anon_sym_LT_LT_DASH] = ACTIONS(133),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(717),
    [anon_sym_LF] = ACTIONS(717),
    [anon_sym_AMP] = ACTIONS(717),
  },
  [209] = {
    [sym_file_descriptor] = ACTIONS(297),
    [anon_sym_SEMI_SEMI] = ACTIONS(299),
    [anon_sym_COLON] = ACTIONS(299),
    [anon_sym_PIPE] = ACTIONS(299),
    [anon_sym_PIPE_AMP] = ACTIONS(299),
    [anon_sym_AMP_AMP] = ACTIONS(299),
    [anon_sym_PIPE_PIPE] = ACTIONS(299),
    [anon_sym_DQUOTE] = ACTIONS(299),
    [sym_single_quoted_argument] = ACTIONS(299),
    [anon_sym_RBRACE] = ACTIONS(299),
    [anon_sym_LT] = ACTIONS(299),
    [anon_sym_GT] = ACTIONS(299),
    [anon_sym_GT_GT] = ACTIONS(299),
    [anon_sym_AMP_GT] = ACTIONS(299),
    [anon_sym_AMP_GT_GT] = ACTIONS(299),
    [anon_sym_LT_AMP] = ACTIONS(299),
    [anon_sym_GT_AMP] = ACTIONS(299),
    [sym_leading_word] = ACTIONS(299),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(299),
    [anon_sym_LF] = ACTIONS(299),
    [anon_sym_AMP] = ACTIONS(299),
  },
  [210] = {
    [sym_expansion] = STATE(123),
    [sym_operator_expansion] = STATE(123),
    [sym_command_substitution] = STATE(123),
    [anon_sym_DQUOTE] = ACTIONS(719),
    [sym__quoted_chars] = ACTIONS(313),
    [anon_sym_DOLLAR] = ACTIONS(143),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(145),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(147),
    [sym_comment] = ACTIONS(135),
  },
  [211] = {
    [sym_file_descriptor] = ACTIONS(441),
    [anon_sym_SEMI_SEMI] = ACTIONS(403),
    [anon_sym_COLON] = ACTIONS(403),
    [anon_sym_PIPE] = ACTIONS(403),
    [anon_sym_PIPE_AMP] = ACTIONS(403),
    [anon_sym_AMP_AMP] = ACTIONS(403),
    [anon_sym_PIPE_PIPE] = ACTIONS(403),
    [anon_sym_DQUOTE] = ACTIONS(403),
    [sym_single_quoted_argument] = ACTIONS(403),
    [anon_sym_RBRACE] = ACTIONS(403),
    [anon_sym_LT] = ACTIONS(403),
    [anon_sym_GT] = ACTIONS(403),
    [anon_sym_GT_GT] = ACTIONS(403),
    [anon_sym_AMP_GT] = ACTIONS(403),
    [anon_sym_AMP_GT_GT] = ACTIONS(403),
    [anon_sym_LT_AMP] = ACTIONS(403),
    [anon_sym_GT_AMP] = ACTIONS(403),
    [sym_leading_word] = ACTIONS(403),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(403),
    [anon_sym_LF] = ACTIONS(403),
    [anon_sym_AMP] = ACTIONS(403),
  },
  [212] = {
    [sym_file_descriptor] = ACTIONS(445),
    [anon_sym_SEMI_SEMI] = ACTIONS(405),
    [anon_sym_COLON] = ACTIONS(405),
    [anon_sym_PIPE] = ACTIONS(405),
    [anon_sym_PIPE_AMP] = ACTIONS(405),
    [anon_sym_AMP_AMP] = ACTIONS(405),
    [anon_sym_PIPE_PIPE] = ACTIONS(405),
    [anon_sym_DQUOTE] = ACTIONS(405),
    [sym_single_quoted_argument] = ACTIONS(405),
    [anon_sym_RBRACE] = ACTIONS(405),
    [anon_sym_LT] = ACTIONS(405),
    [anon_sym_GT] = ACTIONS(405),
    [anon_sym_GT_GT] = ACTIONS(405),
    [anon_sym_AMP_GT] = ACTIONS(405),
    [anon_sym_AMP_GT_GT] = ACTIONS(405),
    [anon_sym_LT_AMP] = ACTIONS(405),
    [anon_sym_GT_AMP] = ACTIONS(405),
    [sym_leading_word] = ACTIONS(405),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(405),
    [anon_sym_LF] = ACTIONS(405),
    [anon_sym_AMP] = ACTIONS(405),
  },
  [213] = {
    [anon_sym_COLON] = ACTIONS(721),
    [anon_sym_EQ] = ACTIONS(723),
    [anon_sym_COLON_QMARK] = ACTIONS(723),
    [anon_sym_COLON_DASH] = ACTIONS(723),
    [anon_sym_RBRACE] = ACTIONS(725),
    [sym_comment] = ACTIONS(67),
  },
  [214] = {
    [anon_sym_RPAREN] = ACTIONS(727),
    [sym_comment] = ACTIONS(67),
  },
  [215] = {
    [sym_quoted_argument] = STATE(187),
    [sym_expansion] = STATE(187),
    [sym_operator_expansion] = STATE(187),
    [sym_command_substitution] = STATE(187),
    [sym_file_redirect] = STATE(43),
    [sym_heredoc_redirect] = STATE(43),
    [aux_sym_command_repeat2] = STATE(282),
    [sym_file_descriptor] = ACTIONS(125),
    [anon_sym_SEMI_SEMI] = ACTIONS(679),
    [anon_sym_PIPE] = ACTIONS(679),
    [anon_sym_PIPE_AMP] = ACTIONS(679),
    [anon_sym_AMP_AMP] = ACTIONS(679),
    [anon_sym_PIPE_PIPE] = ACTIONS(679),
    [anon_sym_DQUOTE] = ACTIONS(261),
    [sym_single_quoted_argument] = ACTIONS(485),
    [anon_sym_DOLLAR] = ACTIONS(265),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(267),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(269),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_GT_GT] = ACTIONS(131),
    [anon_sym_AMP_GT] = ACTIONS(131),
    [anon_sym_AMP_GT_GT] = ACTIONS(131),
    [anon_sym_LT_AMP] = ACTIONS(131),
    [anon_sym_GT_AMP] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(133),
    [anon_sym_LT_LT_DASH] = ACTIONS(133),
    [sym_word] = ACTIONS(487),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(679),
    [anon_sym_LF] = ACTIONS(679),
    [anon_sym_AMP] = ACTIONS(679),
  },
  [216] = {
    [sym_quoted_argument] = STATE(187),
    [sym_expansion] = STATE(187),
    [sym_operator_expansion] = STATE(187),
    [sym_command_substitution] = STATE(187),
    [sym_file_redirect] = STATE(43),
    [sym_heredoc_redirect] = STATE(43),
    [aux_sym_command_repeat2] = STATE(283),
    [sym_file_descriptor] = ACTIONS(125),
    [anon_sym_SEMI_SEMI] = ACTIONS(729),
    [anon_sym_PIPE] = ACTIONS(729),
    [anon_sym_PIPE_AMP] = ACTIONS(729),
    [anon_sym_AMP_AMP] = ACTIONS(729),
    [anon_sym_PIPE_PIPE] = ACTIONS(729),
    [anon_sym_DQUOTE] = ACTIONS(261),
    [sym_single_quoted_argument] = ACTIONS(485),
    [anon_sym_DOLLAR] = ACTIONS(265),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(267),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(269),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_GT_GT] = ACTIONS(131),
    [anon_sym_AMP_GT] = ACTIONS(131),
    [anon_sym_AMP_GT_GT] = ACTIONS(131),
    [anon_sym_LT_AMP] = ACTIONS(131),
    [anon_sym_GT_AMP] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(133),
    [anon_sym_LT_LT_DASH] = ACTIONS(133),
    [sym_word] = ACTIONS(487),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(729),
    [anon_sym_LF] = ACTIONS(729),
    [anon_sym_AMP] = ACTIONS(729),
  },
  [217] = {
    [sym_file_redirect] = STATE(116),
    [sym_heredoc_redirect] = STATE(116),
    [sym_file_descriptor] = ACTIONS(125),
    [anon_sym_SEMI_SEMI] = ACTIONS(729),
    [anon_sym_PIPE] = ACTIONS(729),
    [anon_sym_PIPE_AMP] = ACTIONS(729),
    [anon_sym_AMP_AMP] = ACTIONS(729),
    [anon_sym_PIPE_PIPE] = ACTIONS(729),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_GT_GT] = ACTIONS(131),
    [anon_sym_AMP_GT] = ACTIONS(131),
    [anon_sym_AMP_GT_GT] = ACTIONS(131),
    [anon_sym_LT_AMP] = ACTIONS(131),
    [anon_sym_GT_AMP] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(133),
    [anon_sym_LT_LT_DASH] = ACTIONS(133),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(729),
    [anon_sym_LF] = ACTIONS(729),
    [anon_sym_AMP] = ACTIONS(729),
  },
  [218] = {
    [sym_file_descriptor] = ACTIONS(549),
    [anon_sym_COLON] = ACTIONS(549),
    [anon_sym_DQUOTE] = ACTIONS(549),
    [sym_single_quoted_argument] = ACTIONS(731),
    [anon_sym_LT] = ACTIONS(731),
    [anon_sym_GT] = ACTIONS(731),
    [anon_sym_GT_GT] = ACTIONS(731),
    [anon_sym_AMP_GT] = ACTIONS(731),
    [anon_sym_AMP_GT_GT] = ACTIONS(731),
    [anon_sym_LT_AMP] = ACTIONS(731),
    [anon_sym_GT_AMP] = ACTIONS(731),
    [sym_leading_word] = ACTIONS(551),
    [sym_comment] = ACTIONS(67),
  },
  [219] = {
    [sym_file_descriptor] = ACTIONS(559),
    [anon_sym_COLON] = ACTIONS(559),
    [anon_sym_DQUOTE] = ACTIONS(559),
    [sym_single_quoted_argument] = ACTIONS(733),
    [anon_sym_LT] = ACTIONS(733),
    [anon_sym_GT] = ACTIONS(733),
    [anon_sym_GT_GT] = ACTIONS(733),
    [anon_sym_AMP_GT] = ACTIONS(733),
    [anon_sym_AMP_GT_GT] = ACTIONS(733),
    [anon_sym_LT_AMP] = ACTIONS(733),
    [anon_sym_GT_AMP] = ACTIONS(733),
    [sym_leading_word] = ACTIONS(561),
    [sym_comment] = ACTIONS(67),
  },
  [220] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(735),
    [anon_sym_PIPE] = ACTIONS(735),
    [anon_sym_PIPE_AMP] = ACTIONS(735),
    [anon_sym_AMP_AMP] = ACTIONS(735),
    [anon_sym_PIPE_PIPE] = ACTIONS(735),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(735),
    [anon_sym_LF] = ACTIONS(735),
    [anon_sym_AMP] = ACTIONS(735),
  },
  [221] = {
    [anon_sym_then] = ACTIONS(737),
    [sym_comment] = ACTIONS(67),
  },
  [222] = {
    [sym__terminated_statement] = STATE(65),
    [sym_while_statement] = STATE(15),
    [sym_if_statement] = STATE(15),
    [sym_case_statement] = STATE(15),
    [sym_bracket_command] = STATE(15),
    [sym_command] = STATE(15),
    [sym_pipeline] = STATE(15),
    [sym_list] = STATE(15),
    [sym_subshell] = STATE(15),
    [sym_environment_variable_assignment] = STATE(16),
    [sym_quoted_argument] = STATE(8),
    [sym_file_redirect] = STATE(17),
    [aux_sym_command_repeat1] = STATE(19),
    [sym_file_descriptor] = ACTIONS(71),
    [anon_sym_while] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(77),
    [anon_sym_fi] = ACTIONS(739),
    [anon_sym_case] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [sym_single_quoted_argument] = ACTIONS(91),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_AMP_GT] = ACTIONS(93),
    [anon_sym_AMP_GT_GT] = ACTIONS(93),
    [anon_sym_LT_AMP] = ACTIONS(93),
    [anon_sym_GT_AMP] = ACTIONS(93),
    [sym_leading_word] = ACTIONS(95),
    [sym_comment] = ACTIONS(67),
  },
  [223] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(741),
    [anon_sym_PIPE] = ACTIONS(741),
    [anon_sym_PIPE_AMP] = ACTIONS(741),
    [anon_sym_AMP_AMP] = ACTIONS(741),
    [anon_sym_PIPE_PIPE] = ACTIONS(741),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(741),
    [anon_sym_LF] = ACTIONS(741),
    [anon_sym_AMP] = ACTIONS(741),
  },
  [224] = {
    [anon_sym_fi] = ACTIONS(743),
    [sym_comment] = ACTIONS(67),
  },
  [225] = {
    [sym_elif_clause] = STATE(226),
    [sym_else_clause] = STATE(286),
    [anon_sym_fi] = ACTIONS(743),
    [anon_sym_elif] = ACTIONS(587),
    [anon_sym_else] = ACTIONS(589),
    [sym_comment] = ACTIONS(67),
  },
  [226] = {
    [anon_sym_fi] = ACTIONS(745),
    [anon_sym_elif] = ACTIONS(745),
    [anon_sym_else] = ACTIONS(745),
    [sym_comment] = ACTIONS(67),
  },
  [227] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(747),
    [anon_sym_PIPE] = ACTIONS(747),
    [anon_sym_PIPE_AMP] = ACTIONS(747),
    [anon_sym_AMP_AMP] = ACTIONS(747),
    [anon_sym_PIPE_PIPE] = ACTIONS(747),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(747),
    [anon_sym_LF] = ACTIONS(747),
    [anon_sym_AMP] = ACTIONS(747),
  },
  [228] = {
    [anon_sym_RPAREN] = ACTIONS(749),
    [sym_comment] = ACTIONS(67),
  },
  [229] = {
    [anon_sym_RPAREN] = ACTIONS(751),
    [sym_comment] = ACTIONS(67),
  },
  [230] = {
    [anon_sym_esac] = ACTIONS(753),
    [anon_sym_DQUOTE] = ACTIONS(755),
    [sym_single_quoted_argument] = ACTIONS(753),
    [anon_sym_DOLLAR] = ACTIONS(753),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(755),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(755),
    [sym_word] = ACTIONS(757),
    [sym_comment] = ACTIONS(67),
  },
  [231] = {
    [sym_case_item] = STATE(290),
    [sym_quoted_argument] = STATE(228),
    [sym_expansion] = STATE(228),
    [sym_operator_expansion] = STATE(228),
    [sym_command_substitution] = STATE(228),
    [anon_sym_esac] = ACTIONS(759),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [sym_single_quoted_argument] = ACTIONS(593),
    [anon_sym_DOLLAR] = ACTIONS(117),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(119),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(121),
    [sym_word] = ACTIONS(595),
    [sym_comment] = ACTIONS(67),
  },
  [232] = {
    [sym_case_item] = STATE(230),
    [sym_quoted_argument] = STATE(228),
    [sym_expansion] = STATE(228),
    [sym_operator_expansion] = STATE(228),
    [sym_command_substitution] = STATE(228),
    [aux_sym_case_statement_repeat1] = STATE(291),
    [anon_sym_esac] = ACTIONS(759),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [sym_single_quoted_argument] = ACTIONS(593),
    [anon_sym_DOLLAR] = ACTIONS(117),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(119),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(121),
    [sym_word] = ACTIONS(595),
    [sym_comment] = ACTIONS(67),
  },
  [233] = {
    [anon_sym_RBRACE] = ACTIONS(761),
    [sym_comment] = ACTIONS(67),
  },
  [234] = {
    [anon_sym_RBRACE] = ACTIONS(763),
    [sym_comment] = ACTIONS(67),
  },
  [235] = {
    [sym_quoted_argument] = STATE(294),
    [sym_expansion] = STATE(294),
    [sym_operator_expansion] = STATE(294),
    [sym_command_substitution] = STATE(294),
    [anon_sym_DQUOTE] = ACTIONS(611),
    [sym_single_quoted_argument] = ACTIONS(765),
    [anon_sym_DOLLAR] = ACTIONS(615),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(617),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(619),
    [sym_word] = ACTIONS(767),
    [sym_comment] = ACTIONS(67),
  },
  [236] = {
    [sym_expansion] = STATE(48),
    [sym_operator_expansion] = STATE(48),
    [sym_command_substitution] = STATE(48),
    [aux_sym_quoted_argument_repeat1] = STATE(297),
    [anon_sym_DQUOTE] = ACTIONS(769),
    [sym__quoted_chars] = ACTIONS(141),
    [anon_sym_DOLLAR] = ACTIONS(143),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(145),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(147),
    [sym_comment] = ACTIONS(135),
  },
  [237] = {
    [sym_file_descriptor] = ACTIONS(233),
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_DQUOTE] = ACTIONS(233),
    [sym_single_quoted_argument] = ACTIONS(231),
    [anon_sym_DOLLAR] = ACTIONS(231),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(233),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(233),
    [anon_sym_LT] = ACTIONS(231),
    [anon_sym_GT] = ACTIONS(231),
    [anon_sym_GT_GT] = ACTIONS(233),
    [anon_sym_AMP_GT] = ACTIONS(231),
    [anon_sym_AMP_GT_GT] = ACTIONS(233),
    [anon_sym_LT_AMP] = ACTIONS(233),
    [anon_sym_GT_AMP] = ACTIONS(233),
    [anon_sym_LT_LT] = ACTIONS(231),
    [anon_sym_LT_LT_DASH] = ACTIONS(233),
    [sym_word] = ACTIONS(235),
    [sym_comment] = ACTIONS(67),
  },
  [238] = {
    [anon_sym_DOLLAR] = ACTIONS(771),
    [sym_word] = ACTIONS(773),
    [sym_comment] = ACTIONS(67),
  },
  [239] = {
    [sym_leading_word] = ACTIONS(775),
    [sym_comment] = ACTIONS(67),
  },
  [240] = {
    [sym_command] = STATE(301),
    [sym_environment_variable_assignment] = STATE(17),
    [sym_quoted_argument] = STATE(82),
    [sym_file_redirect] = STATE(17),
    [aux_sym_command_repeat1] = STATE(86),
    [sym_file_descriptor] = ACTIONS(71),
    [anon_sym_COLON] = ACTIONS(217),
    [anon_sym_DQUOTE] = ACTIONS(219),
    [sym_single_quoted_argument] = ACTIONS(221),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_AMP_GT] = ACTIONS(93),
    [anon_sym_AMP_GT_GT] = ACTIONS(93),
    [anon_sym_LT_AMP] = ACTIONS(93),
    [anon_sym_GT_AMP] = ACTIONS(93),
    [sym_leading_word] = ACTIONS(223),
    [sym_comment] = ACTIONS(67),
  },
  [241] = {
    [sym_file_descriptor] = ACTIONS(245),
    [anon_sym_RPAREN] = ACTIONS(245),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [sym_single_quoted_argument] = ACTIONS(243),
    [anon_sym_DOLLAR] = ACTIONS(243),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(245),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(245),
    [anon_sym_LT] = ACTIONS(243),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_GT_GT] = ACTIONS(245),
    [anon_sym_AMP_GT] = ACTIONS(243),
    [anon_sym_AMP_GT_GT] = ACTIONS(245),
    [anon_sym_LT_AMP] = ACTIONS(245),
    [anon_sym_GT_AMP] = ACTIONS(245),
    [anon_sym_LT_LT] = ACTIONS(243),
    [anon_sym_LT_LT_DASH] = ACTIONS(245),
    [sym_word] = ACTIONS(247),
    [sym_comment] = ACTIONS(67),
  },
  [242] = {
    [sym_quoted_argument] = STATE(302),
    [sym_expansion] = STATE(302),
    [sym_operator_expansion] = STATE(302),
    [sym_command_substitution] = STATE(302),
    [sym_file_redirect] = STATE(164),
    [sym_heredoc_redirect] = STATE(164),
    [aux_sym_command_repeat2] = STATE(304),
    [sym_file_descriptor] = ACTIONS(413),
    [anon_sym_RPAREN] = ACTIONS(777),
    [anon_sym_DQUOTE] = ACTIONS(611),
    [sym_single_quoted_argument] = ACTIONS(779),
    [anon_sym_DOLLAR] = ACTIONS(615),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(617),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(621),
    [anon_sym_GT] = ACTIONS(621),
    [anon_sym_GT_GT] = ACTIONS(623),
    [anon_sym_AMP_GT] = ACTIONS(621),
    [anon_sym_AMP_GT_GT] = ACTIONS(623),
    [anon_sym_LT_AMP] = ACTIONS(623),
    [anon_sym_GT_AMP] = ACTIONS(623),
    [anon_sym_LT_LT] = ACTIONS(625),
    [anon_sym_LT_LT_DASH] = ACTIONS(627),
    [sym_word] = ACTIONS(781),
    [sym_comment] = ACTIONS(67),
  },
  [243] = {
    [sym_file_redirect] = STATE(249),
    [sym_heredoc_redirect] = STATE(249),
    [sym_file_descriptor] = ACTIONS(413),
    [anon_sym_RPAREN] = ACTIONS(777),
    [anon_sym_LT] = ACTIONS(621),
    [anon_sym_GT] = ACTIONS(621),
    [anon_sym_GT_GT] = ACTIONS(623),
    [anon_sym_AMP_GT] = ACTIONS(621),
    [anon_sym_AMP_GT_GT] = ACTIONS(623),
    [anon_sym_LT_AMP] = ACTIONS(623),
    [anon_sym_GT_AMP] = ACTIONS(623),
    [anon_sym_LT_LT] = ACTIONS(625),
    [anon_sym_LT_LT_DASH] = ACTIONS(627),
    [sym_comment] = ACTIONS(67),
  },
  [244] = {
    [sym_file_descriptor] = ACTIONS(317),
    [anon_sym_RPAREN] = ACTIONS(317),
    [anon_sym_LT] = ACTIONS(319),
    [anon_sym_GT] = ACTIONS(319),
    [anon_sym_GT_GT] = ACTIONS(317),
    [anon_sym_AMP_GT] = ACTIONS(319),
    [anon_sym_AMP_GT_GT] = ACTIONS(317),
    [anon_sym_LT_AMP] = ACTIONS(317),
    [anon_sym_GT_AMP] = ACTIONS(317),
    [anon_sym_LT_LT] = ACTIONS(319),
    [anon_sym_LT_LT_DASH] = ACTIONS(317),
    [sym_comment] = ACTIONS(67),
  },
  [245] = {
    [sym_file_descriptor] = ACTIONS(329),
    [anon_sym_RPAREN] = ACTIONS(329),
    [anon_sym_LT] = ACTIONS(331),
    [anon_sym_GT] = ACTIONS(331),
    [anon_sym_GT_GT] = ACTIONS(329),
    [anon_sym_AMP_GT] = ACTIONS(331),
    [anon_sym_AMP_GT_GT] = ACTIONS(329),
    [anon_sym_LT_AMP] = ACTIONS(329),
    [anon_sym_GT_AMP] = ACTIONS(329),
    [anon_sym_LT_LT] = ACTIONS(331),
    [anon_sym_LT_LT_DASH] = ACTIONS(329),
    [sym_comment] = ACTIONS(67),
  },
  [246] = {
    [sym_file_descriptor] = ACTIONS(497),
    [anon_sym_RPAREN] = ACTIONS(497),
    [anon_sym_LT] = ACTIONS(783),
    [anon_sym_GT] = ACTIONS(783),
    [anon_sym_GT_GT] = ACTIONS(497),
    [anon_sym_AMP_GT] = ACTIONS(783),
    [anon_sym_AMP_GT_GT] = ACTIONS(497),
    [anon_sym_LT_AMP] = ACTIONS(497),
    [anon_sym_GT_AMP] = ACTIONS(497),
    [anon_sym_LT_LT] = ACTIONS(783),
    [anon_sym_LT_LT_DASH] = ACTIONS(497),
    [sym_comment] = ACTIONS(67),
  },
  [247] = {
    [sym_expansion] = STATE(196),
    [sym_operator_expansion] = STATE(196),
    [aux_sym_heredoc_repeat1] = STATE(306),
    [sym__heredoc_middle] = ACTIONS(501),
    [sym__heredoc_end] = ACTIONS(785),
    [anon_sym_DOLLAR] = ACTIONS(505),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(507),
    [sym_comment] = ACTIONS(67),
  },
  [248] = {
    [sym_file_descriptor] = ACTIONS(509),
    [anon_sym_RPAREN] = ACTIONS(509),
    [anon_sym_LT] = ACTIONS(787),
    [anon_sym_GT] = ACTIONS(787),
    [anon_sym_GT_GT] = ACTIONS(509),
    [anon_sym_AMP_GT] = ACTIONS(787),
    [anon_sym_AMP_GT_GT] = ACTIONS(509),
    [anon_sym_LT_AMP] = ACTIONS(509),
    [anon_sym_GT_AMP] = ACTIONS(509),
    [anon_sym_LT_LT] = ACTIONS(787),
    [anon_sym_LT_LT_DASH] = ACTIONS(509),
    [sym_comment] = ACTIONS(67),
  },
  [249] = {
    [sym_file_descriptor] = ACTIONS(513),
    [anon_sym_RPAREN] = ACTIONS(513),
    [anon_sym_LT] = ACTIONS(789),
    [anon_sym_GT] = ACTIONS(789),
    [anon_sym_GT_GT] = ACTIONS(513),
    [anon_sym_AMP_GT] = ACTIONS(789),
    [anon_sym_AMP_GT_GT] = ACTIONS(513),
    [anon_sym_LT_AMP] = ACTIONS(513),
    [anon_sym_GT_AMP] = ACTIONS(513),
    [anon_sym_LT_LT] = ACTIONS(789),
    [anon_sym_LT_LT_DASH] = ACTIONS(513),
    [sym_comment] = ACTIONS(67),
  },
  [250] = {
    [sym_file_descriptor] = ACTIONS(527),
    [anon_sym_RPAREN] = ACTIONS(529),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(529),
    [anon_sym_LT] = ACTIONS(529),
    [anon_sym_GT] = ACTIONS(529),
    [anon_sym_GT_GT] = ACTIONS(529),
    [anon_sym_AMP_GT] = ACTIONS(529),
    [anon_sym_AMP_GT_GT] = ACTIONS(529),
    [anon_sym_LT_AMP] = ACTIONS(529),
    [anon_sym_GT_AMP] = ACTIONS(529),
    [anon_sym_LT_LT] = ACTIONS(529),
    [anon_sym_LT_LT_DASH] = ACTIONS(529),
    [sym_comment] = ACTIONS(135),
  },
  [251] = {
    [sym_quoted_argument] = STATE(302),
    [sym_expansion] = STATE(302),
    [sym_operator_expansion] = STATE(302),
    [sym_command_substitution] = STATE(302),
    [sym_file_redirect] = STATE(164),
    [sym_heredoc_redirect] = STATE(164),
    [aux_sym_command_repeat2] = STATE(307),
    [sym_file_descriptor] = ACTIONS(413),
    [anon_sym_RPAREN] = ACTIONS(791),
    [anon_sym_DQUOTE] = ACTIONS(611),
    [sym_single_quoted_argument] = ACTIONS(779),
    [anon_sym_DOLLAR] = ACTIONS(615),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(617),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(621),
    [anon_sym_GT] = ACTIONS(621),
    [anon_sym_GT_GT] = ACTIONS(623),
    [anon_sym_AMP_GT] = ACTIONS(621),
    [anon_sym_AMP_GT_GT] = ACTIONS(623),
    [anon_sym_LT_AMP] = ACTIONS(623),
    [anon_sym_GT_AMP] = ACTIONS(623),
    [anon_sym_LT_LT] = ACTIONS(625),
    [anon_sym_LT_LT_DASH] = ACTIONS(627),
    [sym_word] = ACTIONS(781),
    [sym_comment] = ACTIONS(67),
  },
  [252] = {
    [sym_file_redirect] = STATE(249),
    [sym_heredoc_redirect] = STATE(249),
    [sym_file_descriptor] = ACTIONS(413),
    [anon_sym_RPAREN] = ACTIONS(791),
    [anon_sym_LT] = ACTIONS(621),
    [anon_sym_GT] = ACTIONS(621),
    [anon_sym_GT_GT] = ACTIONS(623),
    [anon_sym_AMP_GT] = ACTIONS(621),
    [anon_sym_AMP_GT_GT] = ACTIONS(623),
    [anon_sym_LT_AMP] = ACTIONS(623),
    [anon_sym_GT_AMP] = ACTIONS(623),
    [anon_sym_LT_LT] = ACTIONS(625),
    [anon_sym_LT_LT_DASH] = ACTIONS(627),
    [sym_comment] = ACTIONS(67),
  },
  [253] = {
    [sym_quoted_argument] = STATE(237),
    [sym_expansion] = STATE(237),
    [sym_operator_expansion] = STATE(237),
    [sym_command_substitution] = STATE(237),
    [sym_file_redirect] = STATE(164),
    [sym_heredoc_redirect] = STATE(164),
    [aux_sym_bracket_command_repeat1] = STATE(308),
    [aux_sym_command_repeat2] = STATE(304),
    [sym_file_descriptor] = ACTIONS(413),
    [anon_sym_RPAREN] = ACTIONS(777),
    [anon_sym_DQUOTE] = ACTIONS(611),
    [sym_single_quoted_argument] = ACTIONS(613),
    [anon_sym_DOLLAR] = ACTIONS(615),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(617),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(621),
    [anon_sym_GT] = ACTIONS(621),
    [anon_sym_GT_GT] = ACTIONS(623),
    [anon_sym_AMP_GT] = ACTIONS(621),
    [anon_sym_AMP_GT_GT] = ACTIONS(623),
    [anon_sym_LT_AMP] = ACTIONS(623),
    [anon_sym_GT_AMP] = ACTIONS(623),
    [anon_sym_LT_LT] = ACTIONS(625),
    [anon_sym_LT_LT_DASH] = ACTIONS(627),
    [sym_word] = ACTIONS(629),
    [sym_comment] = ACTIONS(67),
  },
  [254] = {
    [sym_quoted_argument] = STATE(237),
    [sym_expansion] = STATE(237),
    [sym_operator_expansion] = STATE(237),
    [sym_command_substitution] = STATE(237),
    [sym_file_redirect] = STATE(164),
    [sym_heredoc_redirect] = STATE(164),
    [aux_sym_bracket_command_repeat1] = STATE(309),
    [aux_sym_command_repeat2] = STATE(310),
    [sym_file_descriptor] = ACTIONS(413),
    [anon_sym_RPAREN] = ACTIONS(793),
    [anon_sym_DQUOTE] = ACTIONS(611),
    [sym_single_quoted_argument] = ACTIONS(613),
    [anon_sym_DOLLAR] = ACTIONS(615),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(617),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(621),
    [anon_sym_GT] = ACTIONS(621),
    [anon_sym_GT_GT] = ACTIONS(623),
    [anon_sym_AMP_GT] = ACTIONS(621),
    [anon_sym_AMP_GT_GT] = ACTIONS(623),
    [anon_sym_LT_AMP] = ACTIONS(623),
    [anon_sym_GT_AMP] = ACTIONS(623),
    [anon_sym_LT_LT] = ACTIONS(625),
    [anon_sym_LT_LT_DASH] = ACTIONS(627),
    [sym_word] = ACTIONS(629),
    [sym_comment] = ACTIONS(67),
  },
  [255] = {
    [sym_file_redirect] = STATE(249),
    [sym_heredoc_redirect] = STATE(249),
    [sym_file_descriptor] = ACTIONS(413),
    [anon_sym_RPAREN] = ACTIONS(793),
    [anon_sym_LT] = ACTIONS(621),
    [anon_sym_GT] = ACTIONS(621),
    [anon_sym_GT_GT] = ACTIONS(623),
    [anon_sym_AMP_GT] = ACTIONS(621),
    [anon_sym_AMP_GT_GT] = ACTIONS(623),
    [anon_sym_LT_AMP] = ACTIONS(623),
    [anon_sym_GT_AMP] = ACTIONS(623),
    [anon_sym_LT_LT] = ACTIONS(625),
    [anon_sym_LT_LT_DASH] = ACTIONS(627),
    [sym_comment] = ACTIONS(67),
  },
  [256] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(795),
    [anon_sym_PIPE] = ACTIONS(795),
    [anon_sym_PIPE_AMP] = ACTIONS(795),
    [anon_sym_AMP_AMP] = ACTIONS(795),
    [anon_sym_PIPE_PIPE] = ACTIONS(795),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(795),
    [anon_sym_LF] = ACTIONS(795),
    [anon_sym_AMP] = ACTIONS(795),
  },
  [257] = {
    [sym_case_item] = STATE(290),
    [sym_quoted_argument] = STATE(228),
    [sym_expansion] = STATE(228),
    [sym_operator_expansion] = STATE(228),
    [sym_command_substitution] = STATE(228),
    [anon_sym_esac] = ACTIONS(797),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [sym_single_quoted_argument] = ACTIONS(593),
    [anon_sym_DOLLAR] = ACTIONS(117),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(119),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(121),
    [sym_word] = ACTIONS(595),
    [sym_comment] = ACTIONS(67),
  },
  [258] = {
    [sym_case_item] = STATE(230),
    [sym_quoted_argument] = STATE(228),
    [sym_expansion] = STATE(228),
    [sym_operator_expansion] = STATE(228),
    [sym_command_substitution] = STATE(228),
    [aux_sym_case_statement_repeat1] = STATE(312),
    [anon_sym_esac] = ACTIONS(797),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [sym_single_quoted_argument] = ACTIONS(593),
    [anon_sym_DOLLAR] = ACTIONS(117),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(119),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(121),
    [sym_word] = ACTIONS(595),
    [sym_comment] = ACTIONS(67),
  },
  [259] = {
    [anon_sym_RBRACE] = ACTIONS(799),
    [sym_comment] = ACTIONS(67),
  },
  [260] = {
    [anon_sym_RBRACE] = ACTIONS(801),
    [sym_comment] = ACTIONS(67),
  },
  [261] = {
    [sym_file_descriptor] = ACTIONS(527),
    [anon_sym_SEMI_SEMI] = ACTIONS(529),
    [anon_sym_PIPE] = ACTIONS(529),
    [anon_sym_PIPE_AMP] = ACTIONS(529),
    [anon_sym_AMP_AMP] = ACTIONS(529),
    [anon_sym_PIPE_PIPE] = ACTIONS(529),
    [anon_sym_DQUOTE] = ACTIONS(529),
    [sym_single_quoted_argument] = ACTIONS(529),
    [anon_sym_DOLLAR] = ACTIONS(529),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(529),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(529),
    [anon_sym_LT] = ACTIONS(529),
    [anon_sym_GT] = ACTIONS(529),
    [anon_sym_GT_GT] = ACTIONS(529),
    [anon_sym_AMP_GT] = ACTIONS(529),
    [anon_sym_AMP_GT_GT] = ACTIONS(529),
    [anon_sym_LT_AMP] = ACTIONS(529),
    [anon_sym_GT_AMP] = ACTIONS(529),
    [anon_sym_LT_LT] = ACTIONS(529),
    [anon_sym_LT_LT_DASH] = ACTIONS(529),
    [sym_word] = ACTIONS(529),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(529),
    [anon_sym_LF] = ACTIONS(529),
    [anon_sym_AMP] = ACTIONS(529),
  },
  [262] = {
    [sym_quoted_argument] = STATE(315),
    [sym_expansion] = STATE(315),
    [sym_operator_expansion] = STATE(315),
    [sym_command_substitution] = STATE(315),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [sym_single_quoted_argument] = ACTIONS(803),
    [anon_sym_DOLLAR] = ACTIONS(117),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(119),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(121),
    [sym_word] = ACTIONS(805),
    [sym_comment] = ACTIONS(67),
  },
  [263] = {
    [sym_file_descriptor] = ACTIONS(661),
    [anon_sym_SEMI_SEMI] = ACTIONS(603),
    [anon_sym_PIPE] = ACTIONS(603),
    [anon_sym_PIPE_AMP] = ACTIONS(603),
    [anon_sym_AMP_AMP] = ACTIONS(603),
    [anon_sym_PIPE_PIPE] = ACTIONS(603),
    [anon_sym_DQUOTE] = ACTIONS(603),
    [sym_single_quoted_argument] = ACTIONS(603),
    [anon_sym_DOLLAR] = ACTIONS(603),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(603),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(603),
    [anon_sym_LT] = ACTIONS(603),
    [anon_sym_GT] = ACTIONS(603),
    [anon_sym_GT_GT] = ACTIONS(603),
    [anon_sym_AMP_GT] = ACTIONS(603),
    [anon_sym_AMP_GT_GT] = ACTIONS(603),
    [anon_sym_LT_AMP] = ACTIONS(603),
    [anon_sym_GT_AMP] = ACTIONS(603),
    [anon_sym_LT_LT] = ACTIONS(603),
    [anon_sym_LT_LT_DASH] = ACTIONS(603),
    [sym_word] = ACTIONS(603),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(603),
    [anon_sym_LF] = ACTIONS(603),
    [anon_sym_AMP] = ACTIONS(603),
  },
  [264] = {
    [sym_file_descriptor] = ACTIONS(665),
    [anon_sym_SEMI_SEMI] = ACTIONS(645),
    [anon_sym_PIPE] = ACTIONS(645),
    [anon_sym_PIPE_AMP] = ACTIONS(645),
    [anon_sym_AMP_AMP] = ACTIONS(645),
    [anon_sym_PIPE_PIPE] = ACTIONS(645),
    [anon_sym_DQUOTE] = ACTIONS(645),
    [sym_single_quoted_argument] = ACTIONS(645),
    [anon_sym_DOLLAR] = ACTIONS(645),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(645),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(645),
    [anon_sym_LT] = ACTIONS(645),
    [anon_sym_GT] = ACTIONS(645),
    [anon_sym_GT_GT] = ACTIONS(645),
    [anon_sym_AMP_GT] = ACTIONS(645),
    [anon_sym_AMP_GT_GT] = ACTIONS(645),
    [anon_sym_LT_AMP] = ACTIONS(645),
    [anon_sym_GT_AMP] = ACTIONS(645),
    [anon_sym_LT_LT] = ACTIONS(645),
    [anon_sym_LT_LT_DASH] = ACTIONS(645),
    [sym_word] = ACTIONS(645),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(645),
    [anon_sym_LF] = ACTIONS(645),
    [anon_sym_AMP] = ACTIONS(645),
  },
  [265] = {
    [sym_file_descriptor] = ACTIONS(527),
    [anon_sym_SEMI_SEMI] = ACTIONS(529),
    [anon_sym_PIPE] = ACTIONS(529),
    [anon_sym_PIPE_AMP] = ACTIONS(529),
    [anon_sym_AMP_AMP] = ACTIONS(529),
    [anon_sym_PIPE_PIPE] = ACTIONS(529),
    [anon_sym_LT] = ACTIONS(529),
    [anon_sym_GT] = ACTIONS(529),
    [anon_sym_GT_GT] = ACTIONS(529),
    [anon_sym_AMP_GT] = ACTIONS(529),
    [anon_sym_AMP_GT_GT] = ACTIONS(529),
    [anon_sym_LT_AMP] = ACTIONS(529),
    [anon_sym_GT_AMP] = ACTIONS(529),
    [anon_sym_LT_LT] = ACTIONS(529),
    [anon_sym_LT_LT_DASH] = ACTIONS(529),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(529),
    [anon_sym_LF] = ACTIONS(529),
    [anon_sym_AMP] = ACTIONS(529),
  },
  [266] = {
    [sym_quoted_argument] = STATE(317),
    [sym_expansion] = STATE(317),
    [sym_operator_expansion] = STATE(317),
    [sym_command_substitution] = STATE(317),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [sym_single_quoted_argument] = ACTIONS(807),
    [anon_sym_DOLLAR] = ACTIONS(117),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(119),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(121),
    [sym_word] = ACTIONS(809),
    [sym_comment] = ACTIONS(67),
  },
  [267] = {
    [sym_file_descriptor] = ACTIONS(661),
    [anon_sym_SEMI_SEMI] = ACTIONS(603),
    [anon_sym_PIPE] = ACTIONS(603),
    [anon_sym_PIPE_AMP] = ACTIONS(603),
    [anon_sym_AMP_AMP] = ACTIONS(603),
    [anon_sym_PIPE_PIPE] = ACTIONS(603),
    [anon_sym_LT] = ACTIONS(603),
    [anon_sym_GT] = ACTIONS(603),
    [anon_sym_GT_GT] = ACTIONS(603),
    [anon_sym_AMP_GT] = ACTIONS(603),
    [anon_sym_AMP_GT_GT] = ACTIONS(603),
    [anon_sym_LT_AMP] = ACTIONS(603),
    [anon_sym_GT_AMP] = ACTIONS(603),
    [anon_sym_LT_LT] = ACTIONS(603),
    [anon_sym_LT_LT_DASH] = ACTIONS(603),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(603),
    [anon_sym_LF] = ACTIONS(603),
    [anon_sym_AMP] = ACTIONS(603),
  },
  [268] = {
    [sym_file_descriptor] = ACTIONS(665),
    [anon_sym_SEMI_SEMI] = ACTIONS(645),
    [anon_sym_PIPE] = ACTIONS(645),
    [anon_sym_PIPE_AMP] = ACTIONS(645),
    [anon_sym_AMP_AMP] = ACTIONS(645),
    [anon_sym_PIPE_PIPE] = ACTIONS(645),
    [anon_sym_LT] = ACTIONS(645),
    [anon_sym_GT] = ACTIONS(645),
    [anon_sym_GT_GT] = ACTIONS(645),
    [anon_sym_AMP_GT] = ACTIONS(645),
    [anon_sym_AMP_GT_GT] = ACTIONS(645),
    [anon_sym_LT_AMP] = ACTIONS(645),
    [anon_sym_GT_AMP] = ACTIONS(645),
    [anon_sym_LT_LT] = ACTIONS(645),
    [anon_sym_LT_LT_DASH] = ACTIONS(645),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(645),
    [anon_sym_LF] = ACTIONS(645),
    [anon_sym_AMP] = ACTIONS(645),
  },
  [269] = {
    [sym__heredoc_middle] = ACTIONS(441),
    [sym__heredoc_end] = ACTIONS(441),
    [anon_sym_DOLLAR] = ACTIONS(443),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(441),
    [sym_comment] = ACTIONS(67),
  },
  [270] = {
    [sym__heredoc_middle] = ACTIONS(445),
    [sym__heredoc_end] = ACTIONS(445),
    [anon_sym_DOLLAR] = ACTIONS(447),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(445),
    [sym_comment] = ACTIONS(67),
  },
  [271] = {
    [anon_sym_COLON] = ACTIONS(811),
    [anon_sym_EQ] = ACTIONS(813),
    [anon_sym_COLON_QMARK] = ACTIONS(813),
    [anon_sym_COLON_DASH] = ACTIONS(813),
    [anon_sym_RBRACE] = ACTIONS(815),
    [sym_comment] = ACTIONS(67),
  },
  [272] = {
    [sym__heredoc_middle] = ACTIONS(817),
    [sym__heredoc_end] = ACTIONS(817),
    [anon_sym_DOLLAR] = ACTIONS(819),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(817),
    [sym_comment] = ACTIONS(67),
  },
  [273] = {
    [sym_file_descriptor] = ACTIONS(821),
    [anon_sym_SEMI_SEMI] = ACTIONS(823),
    [anon_sym_PIPE] = ACTIONS(823),
    [anon_sym_PIPE_AMP] = ACTIONS(823),
    [anon_sym_AMP_AMP] = ACTIONS(823),
    [anon_sym_PIPE_PIPE] = ACTIONS(823),
    [anon_sym_LT] = ACTIONS(823),
    [anon_sym_GT] = ACTIONS(823),
    [anon_sym_GT_GT] = ACTIONS(823),
    [anon_sym_AMP_GT] = ACTIONS(823),
    [anon_sym_AMP_GT_GT] = ACTIONS(823),
    [anon_sym_LT_AMP] = ACTIONS(823),
    [anon_sym_GT_AMP] = ACTIONS(823),
    [anon_sym_LT_LT] = ACTIONS(823),
    [anon_sym_LT_LT_DASH] = ACTIONS(823),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(823),
    [anon_sym_LF] = ACTIONS(823),
    [anon_sym_AMP] = ACTIONS(823),
  },
  [274] = {
    [anon_sym_RBRACE] = ACTIONS(825),
    [sym_comment] = ACTIONS(67),
  },
  [275] = {
    [anon_sym_RBRACE] = ACTIONS(827),
    [sym_comment] = ACTIONS(67),
  },
  [276] = {
    [anon_sym_RBRACE] = ACTIONS(829),
    [sym_comment] = ACTIONS(67),
  },
  [277] = {
    [anon_sym_RBRACE] = ACTIONS(831),
    [sym_comment] = ACTIONS(67),
  },
  [278] = {
    [sym_file_descriptor] = ACTIONS(527),
    [anon_sym_SEMI_SEMI] = ACTIONS(529),
    [anon_sym_COLON] = ACTIONS(529),
    [anon_sym_PIPE] = ACTIONS(529),
    [anon_sym_PIPE_AMP] = ACTIONS(529),
    [anon_sym_AMP_AMP] = ACTIONS(529),
    [anon_sym_PIPE_PIPE] = ACTIONS(529),
    [anon_sym_DQUOTE] = ACTIONS(529),
    [sym_single_quoted_argument] = ACTIONS(529),
    [anon_sym_RBRACE] = ACTIONS(529),
    [anon_sym_LT] = ACTIONS(529),
    [anon_sym_GT] = ACTIONS(529),
    [anon_sym_GT_GT] = ACTIONS(529),
    [anon_sym_AMP_GT] = ACTIONS(529),
    [anon_sym_AMP_GT_GT] = ACTIONS(529),
    [anon_sym_LT_AMP] = ACTIONS(529),
    [anon_sym_GT_AMP] = ACTIONS(529),
    [sym_leading_word] = ACTIONS(529),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(529),
    [anon_sym_LF] = ACTIONS(529),
    [anon_sym_AMP] = ACTIONS(529),
  },
  [279] = {
    [sym_quoted_argument] = STATE(325),
    [sym_expansion] = STATE(325),
    [sym_operator_expansion] = STATE(325),
    [sym_command_substitution] = STATE(325),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [sym_single_quoted_argument] = ACTIONS(833),
    [anon_sym_DOLLAR] = ACTIONS(117),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(119),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(121),
    [sym_word] = ACTIONS(835),
    [sym_comment] = ACTIONS(67),
  },
  [280] = {
    [sym_file_descriptor] = ACTIONS(661),
    [anon_sym_SEMI_SEMI] = ACTIONS(603),
    [anon_sym_COLON] = ACTIONS(603),
    [anon_sym_PIPE] = ACTIONS(603),
    [anon_sym_PIPE_AMP] = ACTIONS(603),
    [anon_sym_AMP_AMP] = ACTIONS(603),
    [anon_sym_PIPE_PIPE] = ACTIONS(603),
    [anon_sym_DQUOTE] = ACTIONS(603),
    [sym_single_quoted_argument] = ACTIONS(603),
    [anon_sym_RBRACE] = ACTIONS(603),
    [anon_sym_LT] = ACTIONS(603),
    [anon_sym_GT] = ACTIONS(603),
    [anon_sym_GT_GT] = ACTIONS(603),
    [anon_sym_AMP_GT] = ACTIONS(603),
    [anon_sym_AMP_GT_GT] = ACTIONS(603),
    [anon_sym_LT_AMP] = ACTIONS(603),
    [anon_sym_GT_AMP] = ACTIONS(603),
    [sym_leading_word] = ACTIONS(603),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(603),
    [anon_sym_LF] = ACTIONS(603),
    [anon_sym_AMP] = ACTIONS(603),
  },
  [281] = {
    [sym_file_descriptor] = ACTIONS(665),
    [anon_sym_SEMI_SEMI] = ACTIONS(645),
    [anon_sym_COLON] = ACTIONS(645),
    [anon_sym_PIPE] = ACTIONS(645),
    [anon_sym_PIPE_AMP] = ACTIONS(645),
    [anon_sym_AMP_AMP] = ACTIONS(645),
    [anon_sym_PIPE_PIPE] = ACTIONS(645),
    [anon_sym_DQUOTE] = ACTIONS(645),
    [sym_single_quoted_argument] = ACTIONS(645),
    [anon_sym_RBRACE] = ACTIONS(645),
    [anon_sym_LT] = ACTIONS(645),
    [anon_sym_GT] = ACTIONS(645),
    [anon_sym_GT_GT] = ACTIONS(645),
    [anon_sym_AMP_GT] = ACTIONS(645),
    [anon_sym_AMP_GT_GT] = ACTIONS(645),
    [anon_sym_LT_AMP] = ACTIONS(645),
    [anon_sym_GT_AMP] = ACTIONS(645),
    [sym_leading_word] = ACTIONS(645),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(645),
    [anon_sym_LF] = ACTIONS(645),
    [anon_sym_AMP] = ACTIONS(645),
  },
  [282] = {
    [sym_file_redirect] = STATE(116),
    [sym_heredoc_redirect] = STATE(116),
    [sym_file_descriptor] = ACTIONS(125),
    [anon_sym_SEMI_SEMI] = ACTIONS(837),
    [anon_sym_PIPE] = ACTIONS(837),
    [anon_sym_PIPE_AMP] = ACTIONS(837),
    [anon_sym_AMP_AMP] = ACTIONS(837),
    [anon_sym_PIPE_PIPE] = ACTIONS(837),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_GT_GT] = ACTIONS(131),
    [anon_sym_AMP_GT] = ACTIONS(131),
    [anon_sym_AMP_GT_GT] = ACTIONS(131),
    [anon_sym_LT_AMP] = ACTIONS(131),
    [anon_sym_GT_AMP] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(133),
    [anon_sym_LT_LT_DASH] = ACTIONS(133),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(837),
    [anon_sym_LF] = ACTIONS(837),
    [anon_sym_AMP] = ACTIONS(837),
  },
  [283] = {
    [sym_file_redirect] = STATE(116),
    [sym_heredoc_redirect] = STATE(116),
    [sym_file_descriptor] = ACTIONS(125),
    [anon_sym_SEMI_SEMI] = ACTIONS(839),
    [anon_sym_PIPE] = ACTIONS(839),
    [anon_sym_PIPE_AMP] = ACTIONS(839),
    [anon_sym_AMP_AMP] = ACTIONS(839),
    [anon_sym_PIPE_PIPE] = ACTIONS(839),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_GT_GT] = ACTIONS(131),
    [anon_sym_AMP_GT] = ACTIONS(131),
    [anon_sym_AMP_GT_GT] = ACTIONS(131),
    [anon_sym_LT_AMP] = ACTIONS(131),
    [anon_sym_GT_AMP] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(133),
    [anon_sym_LT_LT_DASH] = ACTIONS(133),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(839),
    [anon_sym_LF] = ACTIONS(839),
    [anon_sym_AMP] = ACTIONS(839),
  },
  [284] = {
    [sym__terminated_statement] = STATE(14),
    [sym_while_statement] = STATE(15),
    [sym_if_statement] = STATE(15),
    [sym_case_statement] = STATE(15),
    [sym_bracket_command] = STATE(15),
    [sym_command] = STATE(15),
    [sym_pipeline] = STATE(15),
    [sym_list] = STATE(15),
    [sym_subshell] = STATE(15),
    [sym_environment_variable_assignment] = STATE(16),
    [sym_quoted_argument] = STATE(8),
    [sym_file_redirect] = STATE(17),
    [aux_sym_program_repeat1] = STATE(327),
    [aux_sym_command_repeat1] = STATE(19),
    [sym_file_descriptor] = ACTIONS(71),
    [anon_sym_while] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(77),
    [anon_sym_fi] = ACTIONS(841),
    [anon_sym_elif] = ACTIONS(841),
    [anon_sym_else] = ACTIONS(841),
    [anon_sym_case] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [sym_single_quoted_argument] = ACTIONS(91),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_AMP_GT] = ACTIONS(93),
    [anon_sym_AMP_GT_GT] = ACTIONS(93),
    [anon_sym_LT_AMP] = ACTIONS(93),
    [anon_sym_GT_AMP] = ACTIONS(93),
    [sym_leading_word] = ACTIONS(95),
    [sym_comment] = ACTIONS(67),
  },
  [285] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(843),
    [anon_sym_PIPE] = ACTIONS(843),
    [anon_sym_PIPE_AMP] = ACTIONS(843),
    [anon_sym_AMP_AMP] = ACTIONS(843),
    [anon_sym_PIPE_PIPE] = ACTIONS(843),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(843),
    [anon_sym_LF] = ACTIONS(843),
    [anon_sym_AMP] = ACTIONS(843),
  },
  [286] = {
    [anon_sym_fi] = ACTIONS(845),
    [sym_comment] = ACTIONS(67),
  },
  [287] = {
    [sym__terminated_statement] = STATE(14),
    [sym_while_statement] = STATE(15),
    [sym_if_statement] = STATE(15),
    [sym_case_statement] = STATE(15),
    [sym_bracket_command] = STATE(15),
    [sym_command] = STATE(15),
    [sym_pipeline] = STATE(15),
    [sym_list] = STATE(15),
    [sym_subshell] = STATE(15),
    [sym_environment_variable_assignment] = STATE(16),
    [sym_quoted_argument] = STATE(8),
    [sym_file_redirect] = STATE(17),
    [aux_sym_program_repeat1] = STATE(330),
    [aux_sym_command_repeat1] = STATE(19),
    [sym_file_descriptor] = ACTIONS(71),
    [anon_sym_while] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(77),
    [anon_sym_case] = ACTIONS(79),
    [anon_sym_SEMI_SEMI] = ACTIONS(847),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [sym_single_quoted_argument] = ACTIONS(91),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_AMP_GT] = ACTIONS(93),
    [anon_sym_AMP_GT_GT] = ACTIONS(93),
    [anon_sym_LT_AMP] = ACTIONS(93),
    [anon_sym_GT_AMP] = ACTIONS(93),
    [sym_leading_word] = ACTIONS(95),
    [sym_comment] = ACTIONS(67),
  },
  [288] = {
    [sym__terminated_statement] = STATE(14),
    [sym_while_statement] = STATE(15),
    [sym_if_statement] = STATE(15),
    [sym_case_statement] = STATE(15),
    [sym_bracket_command] = STATE(15),
    [sym_command] = STATE(15),
    [sym_pipeline] = STATE(15),
    [sym_list] = STATE(15),
    [sym_subshell] = STATE(15),
    [sym_environment_variable_assignment] = STATE(16),
    [sym_quoted_argument] = STATE(8),
    [sym_file_redirect] = STATE(17),
    [aux_sym_program_repeat1] = STATE(332),
    [aux_sym_command_repeat1] = STATE(19),
    [sym_file_descriptor] = ACTIONS(71),
    [anon_sym_while] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(77),
    [anon_sym_case] = ACTIONS(79),
    [anon_sym_SEMI_SEMI] = ACTIONS(849),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [sym_single_quoted_argument] = ACTIONS(91),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_AMP_GT] = ACTIONS(93),
    [anon_sym_AMP_GT_GT] = ACTIONS(93),
    [anon_sym_LT_AMP] = ACTIONS(93),
    [anon_sym_GT_AMP] = ACTIONS(93),
    [sym_leading_word] = ACTIONS(95),
    [sym_comment] = ACTIONS(67),
  },
  [289] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(851),
    [anon_sym_PIPE] = ACTIONS(851),
    [anon_sym_PIPE_AMP] = ACTIONS(851),
    [anon_sym_AMP_AMP] = ACTIONS(851),
    [anon_sym_PIPE_PIPE] = ACTIONS(851),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(851),
    [anon_sym_LF] = ACTIONS(851),
    [anon_sym_AMP] = ACTIONS(851),
  },
  [290] = {
    [anon_sym_esac] = ACTIONS(853),
    [anon_sym_DQUOTE] = ACTIONS(855),
    [sym_single_quoted_argument] = ACTIONS(853),
    [anon_sym_DOLLAR] = ACTIONS(853),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(855),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(855),
    [sym_word] = ACTIONS(857),
    [sym_comment] = ACTIONS(67),
  },
  [291] = {
    [sym_case_item] = STATE(290),
    [sym_quoted_argument] = STATE(228),
    [sym_expansion] = STATE(228),
    [sym_operator_expansion] = STATE(228),
    [sym_command_substitution] = STATE(228),
    [anon_sym_esac] = ACTIONS(859),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [sym_single_quoted_argument] = ACTIONS(593),
    [anon_sym_DOLLAR] = ACTIONS(117),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(119),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(121),
    [sym_word] = ACTIONS(595),
    [sym_comment] = ACTIONS(67),
  },
  [292] = {
    [anon_sym_in] = ACTIONS(861),
    [anon_sym_SEMI_SEMI] = ACTIONS(861),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(861),
    [anon_sym_LF] = ACTIONS(861),
    [anon_sym_AMP] = ACTIONS(861),
  },
  [293] = {
    [anon_sym_in] = ACTIONS(863),
    [anon_sym_SEMI_SEMI] = ACTIONS(863),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(863),
    [anon_sym_LF] = ACTIONS(863),
    [anon_sym_AMP] = ACTIONS(863),
  },
  [294] = {
    [sym_file_descriptor] = ACTIONS(375),
    [anon_sym_RPAREN] = ACTIONS(375),
    [anon_sym_LT] = ACTIONS(377),
    [anon_sym_GT] = ACTIONS(377),
    [anon_sym_GT_GT] = ACTIONS(375),
    [anon_sym_AMP_GT] = ACTIONS(377),
    [anon_sym_AMP_GT_GT] = ACTIONS(375),
    [anon_sym_LT_AMP] = ACTIONS(375),
    [anon_sym_GT_AMP] = ACTIONS(375),
    [anon_sym_LT_LT] = ACTIONS(377),
    [anon_sym_LT_LT_DASH] = ACTIONS(375),
    [sym_comment] = ACTIONS(67),
  },
  [295] = {
    [sym_file_descriptor] = ACTIONS(381),
    [anon_sym_RPAREN] = ACTIONS(381),
    [anon_sym_LT] = ACTIONS(383),
    [anon_sym_GT] = ACTIONS(383),
    [anon_sym_GT_GT] = ACTIONS(381),
    [anon_sym_AMP_GT] = ACTIONS(383),
    [anon_sym_AMP_GT_GT] = ACTIONS(381),
    [anon_sym_LT_AMP] = ACTIONS(381),
    [anon_sym_GT_AMP] = ACTIONS(381),
    [anon_sym_LT_LT] = ACTIONS(383),
    [anon_sym_LT_LT_DASH] = ACTIONS(381),
    [sym_comment] = ACTIONS(67),
  },
  [296] = {
    [sym_file_descriptor] = ACTIONS(297),
    [anon_sym_RPAREN] = ACTIONS(297),
    [anon_sym_DQUOTE] = ACTIONS(297),
    [sym_single_quoted_argument] = ACTIONS(437),
    [anon_sym_DOLLAR] = ACTIONS(437),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(297),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(297),
    [anon_sym_LT] = ACTIONS(437),
    [anon_sym_GT] = ACTIONS(437),
    [anon_sym_GT_GT] = ACTIONS(297),
    [anon_sym_AMP_GT] = ACTIONS(437),
    [anon_sym_AMP_GT_GT] = ACTIONS(297),
    [anon_sym_LT_AMP] = ACTIONS(297),
    [anon_sym_GT_AMP] = ACTIONS(297),
    [anon_sym_LT_LT] = ACTIONS(437),
    [anon_sym_LT_LT_DASH] = ACTIONS(297),
    [sym_word] = ACTIONS(299),
    [sym_comment] = ACTIONS(67),
  },
  [297] = {
    [sym_expansion] = STATE(123),
    [sym_operator_expansion] = STATE(123),
    [sym_command_substitution] = STATE(123),
    [anon_sym_DQUOTE] = ACTIONS(865),
    [sym__quoted_chars] = ACTIONS(313),
    [anon_sym_DOLLAR] = ACTIONS(143),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(145),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(147),
    [sym_comment] = ACTIONS(135),
  },
  [298] = {
    [sym_file_descriptor] = ACTIONS(441),
    [anon_sym_RPAREN] = ACTIONS(441),
    [anon_sym_DQUOTE] = ACTIONS(441),
    [sym_single_quoted_argument] = ACTIONS(443),
    [anon_sym_DOLLAR] = ACTIONS(443),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(441),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(441),
    [anon_sym_LT] = ACTIONS(443),
    [anon_sym_GT] = ACTIONS(443),
    [anon_sym_GT_GT] = ACTIONS(441),
    [anon_sym_AMP_GT] = ACTIONS(443),
    [anon_sym_AMP_GT_GT] = ACTIONS(441),
    [anon_sym_LT_AMP] = ACTIONS(441),
    [anon_sym_GT_AMP] = ACTIONS(441),
    [anon_sym_LT_LT] = ACTIONS(443),
    [anon_sym_LT_LT_DASH] = ACTIONS(441),
    [sym_word] = ACTIONS(403),
    [sym_comment] = ACTIONS(67),
  },
  [299] = {
    [sym_file_descriptor] = ACTIONS(445),
    [anon_sym_RPAREN] = ACTIONS(445),
    [anon_sym_DQUOTE] = ACTIONS(445),
    [sym_single_quoted_argument] = ACTIONS(447),
    [anon_sym_DOLLAR] = ACTIONS(447),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(445),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(445),
    [anon_sym_LT] = ACTIONS(447),
    [anon_sym_GT] = ACTIONS(447),
    [anon_sym_GT_GT] = ACTIONS(445),
    [anon_sym_AMP_GT] = ACTIONS(447),
    [anon_sym_AMP_GT_GT] = ACTIONS(445),
    [anon_sym_LT_AMP] = ACTIONS(445),
    [anon_sym_GT_AMP] = ACTIONS(445),
    [anon_sym_LT_LT] = ACTIONS(447),
    [anon_sym_LT_LT_DASH] = ACTIONS(445),
    [sym_word] = ACTIONS(405),
    [sym_comment] = ACTIONS(67),
  },
  [300] = {
    [anon_sym_COLON] = ACTIONS(867),
    [anon_sym_EQ] = ACTIONS(869),
    [anon_sym_COLON_QMARK] = ACTIONS(869),
    [anon_sym_COLON_DASH] = ACTIONS(869),
    [anon_sym_RBRACE] = ACTIONS(871),
    [sym_comment] = ACTIONS(67),
  },
  [301] = {
    [anon_sym_RPAREN] = ACTIONS(873),
    [sym_comment] = ACTIONS(67),
  },
  [302] = {
    [sym_file_descriptor] = ACTIONS(461),
    [anon_sym_RPAREN] = ACTIONS(461),
    [anon_sym_DQUOTE] = ACTIONS(461),
    [sym_single_quoted_argument] = ACTIONS(459),
    [anon_sym_DOLLAR] = ACTIONS(459),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(461),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(461),
    [anon_sym_LT] = ACTIONS(459),
    [anon_sym_GT] = ACTIONS(459),
    [anon_sym_GT_GT] = ACTIONS(461),
    [anon_sym_AMP_GT] = ACTIONS(459),
    [anon_sym_AMP_GT_GT] = ACTIONS(461),
    [anon_sym_LT_AMP] = ACTIONS(461),
    [anon_sym_GT_AMP] = ACTIONS(461),
    [anon_sym_LT_LT] = ACTIONS(459),
    [anon_sym_LT_LT_DASH] = ACTIONS(461),
    [sym_word] = ACTIONS(463),
    [sym_comment] = ACTIONS(67),
  },
  [303] = {
    [sym_file_descriptor] = ACTIONS(467),
    [anon_sym_RPAREN] = ACTIONS(467),
    [anon_sym_DQUOTE] = ACTIONS(467),
    [sym_single_quoted_argument] = ACTIONS(465),
    [anon_sym_DOLLAR] = ACTIONS(465),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(467),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(467),
    [anon_sym_LT] = ACTIONS(465),
    [anon_sym_GT] = ACTIONS(465),
    [anon_sym_GT_GT] = ACTIONS(467),
    [anon_sym_AMP_GT] = ACTIONS(465),
    [anon_sym_AMP_GT_GT] = ACTIONS(467),
    [anon_sym_LT_AMP] = ACTIONS(467),
    [anon_sym_GT_AMP] = ACTIONS(467),
    [anon_sym_LT_LT] = ACTIONS(465),
    [anon_sym_LT_LT_DASH] = ACTIONS(467),
    [sym_word] = ACTIONS(469),
    [sym_comment] = ACTIONS(67),
  },
  [304] = {
    [sym_file_redirect] = STATE(249),
    [sym_heredoc_redirect] = STATE(249),
    [sym_file_descriptor] = ACTIONS(413),
    [anon_sym_RPAREN] = ACTIONS(875),
    [anon_sym_LT] = ACTIONS(621),
    [anon_sym_GT] = ACTIONS(621),
    [anon_sym_GT_GT] = ACTIONS(623),
    [anon_sym_AMP_GT] = ACTIONS(621),
    [anon_sym_AMP_GT_GT] = ACTIONS(623),
    [anon_sym_LT_AMP] = ACTIONS(623),
    [anon_sym_GT_AMP] = ACTIONS(623),
    [anon_sym_LT_LT] = ACTIONS(625),
    [anon_sym_LT_LT_DASH] = ACTIONS(627),
    [sym_comment] = ACTIONS(67),
  },
  [305] = {
    [sym_file_descriptor] = ACTIONS(695),
    [anon_sym_RPAREN] = ACTIONS(695),
    [anon_sym_LT] = ACTIONS(877),
    [anon_sym_GT] = ACTIONS(877),
    [anon_sym_GT_GT] = ACTIONS(695),
    [anon_sym_AMP_GT] = ACTIONS(877),
    [anon_sym_AMP_GT_GT] = ACTIONS(695),
    [anon_sym_LT_AMP] = ACTIONS(695),
    [anon_sym_GT_AMP] = ACTIONS(695),
    [anon_sym_LT_LT] = ACTIONS(877),
    [anon_sym_LT_LT_DASH] = ACTIONS(695),
    [sym_comment] = ACTIONS(67),
  },
  [306] = {
    [sym_expansion] = STATE(272),
    [sym_operator_expansion] = STATE(272),
    [sym__heredoc_middle] = ACTIONS(705),
    [sym__heredoc_end] = ACTIONS(879),
    [anon_sym_DOLLAR] = ACTIONS(505),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(507),
    [sym_comment] = ACTIONS(67),
  },
  [307] = {
    [sym_file_redirect] = STATE(249),
    [sym_heredoc_redirect] = STATE(249),
    [sym_file_descriptor] = ACTIONS(413),
    [anon_sym_RPAREN] = ACTIONS(881),
    [anon_sym_LT] = ACTIONS(621),
    [anon_sym_GT] = ACTIONS(621),
    [anon_sym_GT_GT] = ACTIONS(623),
    [anon_sym_AMP_GT] = ACTIONS(621),
    [anon_sym_AMP_GT_GT] = ACTIONS(623),
    [anon_sym_LT_AMP] = ACTIONS(623),
    [anon_sym_GT_AMP] = ACTIONS(623),
    [anon_sym_LT_LT] = ACTIONS(625),
    [anon_sym_LT_LT_DASH] = ACTIONS(627),
    [sym_comment] = ACTIONS(67),
  },
  [308] = {
    [sym_quoted_argument] = STATE(302),
    [sym_expansion] = STATE(302),
    [sym_operator_expansion] = STATE(302),
    [sym_command_substitution] = STATE(302),
    [sym_file_redirect] = STATE(164),
    [sym_heredoc_redirect] = STATE(164),
    [aux_sym_command_repeat2] = STATE(339),
    [sym_file_descriptor] = ACTIONS(413),
    [anon_sym_RPAREN] = ACTIONS(875),
    [anon_sym_DQUOTE] = ACTIONS(611),
    [sym_single_quoted_argument] = ACTIONS(779),
    [anon_sym_DOLLAR] = ACTIONS(615),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(617),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(621),
    [anon_sym_GT] = ACTIONS(621),
    [anon_sym_GT_GT] = ACTIONS(623),
    [anon_sym_AMP_GT] = ACTIONS(621),
    [anon_sym_AMP_GT_GT] = ACTIONS(623),
    [anon_sym_LT_AMP] = ACTIONS(623),
    [anon_sym_GT_AMP] = ACTIONS(623),
    [anon_sym_LT_LT] = ACTIONS(625),
    [anon_sym_LT_LT_DASH] = ACTIONS(627),
    [sym_word] = ACTIONS(781),
    [sym_comment] = ACTIONS(67),
  },
  [309] = {
    [sym_quoted_argument] = STATE(302),
    [sym_expansion] = STATE(302),
    [sym_operator_expansion] = STATE(302),
    [sym_command_substitution] = STATE(302),
    [sym_file_redirect] = STATE(164),
    [sym_heredoc_redirect] = STATE(164),
    [aux_sym_command_repeat2] = STATE(340),
    [sym_file_descriptor] = ACTIONS(413),
    [anon_sym_RPAREN] = ACTIONS(883),
    [anon_sym_DQUOTE] = ACTIONS(611),
    [sym_single_quoted_argument] = ACTIONS(779),
    [anon_sym_DOLLAR] = ACTIONS(615),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(617),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(621),
    [anon_sym_GT] = ACTIONS(621),
    [anon_sym_GT_GT] = ACTIONS(623),
    [anon_sym_AMP_GT] = ACTIONS(621),
    [anon_sym_AMP_GT_GT] = ACTIONS(623),
    [anon_sym_LT_AMP] = ACTIONS(623),
    [anon_sym_GT_AMP] = ACTIONS(623),
    [anon_sym_LT_LT] = ACTIONS(625),
    [anon_sym_LT_LT_DASH] = ACTIONS(627),
    [sym_word] = ACTIONS(781),
    [sym_comment] = ACTIONS(67),
  },
  [310] = {
    [sym_file_redirect] = STATE(249),
    [sym_heredoc_redirect] = STATE(249),
    [sym_file_descriptor] = ACTIONS(413),
    [anon_sym_RPAREN] = ACTIONS(883),
    [anon_sym_LT] = ACTIONS(621),
    [anon_sym_GT] = ACTIONS(621),
    [anon_sym_GT_GT] = ACTIONS(623),
    [anon_sym_AMP_GT] = ACTIONS(621),
    [anon_sym_AMP_GT_GT] = ACTIONS(623),
    [anon_sym_LT_AMP] = ACTIONS(623),
    [anon_sym_GT_AMP] = ACTIONS(623),
    [anon_sym_LT_LT] = ACTIONS(625),
    [anon_sym_LT_LT_DASH] = ACTIONS(627),
    [sym_comment] = ACTIONS(67),
  },
  [311] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(885),
    [anon_sym_PIPE] = ACTIONS(885),
    [anon_sym_PIPE_AMP] = ACTIONS(885),
    [anon_sym_AMP_AMP] = ACTIONS(885),
    [anon_sym_PIPE_PIPE] = ACTIONS(885),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(885),
    [anon_sym_LF] = ACTIONS(885),
    [anon_sym_AMP] = ACTIONS(885),
  },
  [312] = {
    [sym_case_item] = STATE(290),
    [sym_quoted_argument] = STATE(228),
    [sym_expansion] = STATE(228),
    [sym_operator_expansion] = STATE(228),
    [sym_command_substitution] = STATE(228),
    [anon_sym_esac] = ACTIONS(887),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [sym_single_quoted_argument] = ACTIONS(593),
    [anon_sym_DOLLAR] = ACTIONS(117),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(119),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(121),
    [sym_word] = ACTIONS(595),
    [sym_comment] = ACTIONS(67),
  },
  [313] = {
    [anon_sym_RPAREN] = ACTIONS(889),
    [anon_sym_RBRACK] = ACTIONS(891),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(891),
    [anon_sym_DQUOTE] = ACTIONS(889),
    [sym_single_quoted_argument] = ACTIONS(891),
    [anon_sym_DOLLAR] = ACTIONS(891),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(889),
    [anon_sym_RBRACE] = ACTIONS(889),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(889),
    [sym_word] = ACTIONS(861),
    [sym_comment] = ACTIONS(67),
  },
  [314] = {
    [anon_sym_RPAREN] = ACTIONS(893),
    [anon_sym_RBRACK] = ACTIONS(895),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(895),
    [anon_sym_DQUOTE] = ACTIONS(893),
    [sym_single_quoted_argument] = ACTIONS(895),
    [anon_sym_DOLLAR] = ACTIONS(895),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(893),
    [anon_sym_RBRACE] = ACTIONS(893),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(893),
    [sym_word] = ACTIONS(863),
    [sym_comment] = ACTIONS(67),
  },
  [315] = {
    [anon_sym_RBRACE] = ACTIONS(897),
    [sym_comment] = ACTIONS(67),
  },
  [316] = {
    [anon_sym_RBRACE] = ACTIONS(899),
    [sym_comment] = ACTIONS(67),
  },
  [317] = {
    [anon_sym_RBRACE] = ACTIONS(901),
    [sym_comment] = ACTIONS(67),
  },
  [318] = {
    [anon_sym_RBRACE] = ACTIONS(903),
    [sym_comment] = ACTIONS(67),
  },
  [319] = {
    [sym_quoted_argument] = STATE(346),
    [sym_expansion] = STATE(346),
    [sym_operator_expansion] = STATE(346),
    [sym_command_substitution] = STATE(346),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [sym_single_quoted_argument] = ACTIONS(905),
    [anon_sym_DOLLAR] = ACTIONS(117),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(119),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(121),
    [sym_word] = ACTIONS(907),
    [sym_comment] = ACTIONS(67),
  },
  [320] = {
    [sym__heredoc_middle] = ACTIONS(661),
    [sym__heredoc_end] = ACTIONS(661),
    [anon_sym_DOLLAR] = ACTIONS(663),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(661),
    [sym_comment] = ACTIONS(67),
  },
  [321] = {
    [anon_sym_DQUOTE] = ACTIONS(861),
    [sym__quoted_chars] = ACTIONS(891),
    [anon_sym_DOLLAR] = ACTIONS(861),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(861),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(861),
    [sym_comment] = ACTIONS(135),
  },
  [322] = {
    [anon_sym_DQUOTE] = ACTIONS(863),
    [sym__quoted_chars] = ACTIONS(895),
    [anon_sym_DOLLAR] = ACTIONS(863),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(863),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(863),
    [sym_comment] = ACTIONS(135),
  },
  [323] = {
    [sym_file_descriptor] = ACTIONS(889),
    [anon_sym_COLON] = ACTIONS(889),
    [anon_sym_DQUOTE] = ACTIONS(889),
    [sym_single_quoted_argument] = ACTIONS(891),
    [anon_sym_LT] = ACTIONS(891),
    [anon_sym_GT] = ACTIONS(891),
    [anon_sym_GT_GT] = ACTIONS(891),
    [anon_sym_AMP_GT] = ACTIONS(891),
    [anon_sym_AMP_GT_GT] = ACTIONS(891),
    [anon_sym_LT_AMP] = ACTIONS(891),
    [anon_sym_GT_AMP] = ACTIONS(891),
    [sym_leading_word] = ACTIONS(861),
    [sym_comment] = ACTIONS(67),
  },
  [324] = {
    [sym_file_descriptor] = ACTIONS(893),
    [anon_sym_COLON] = ACTIONS(893),
    [anon_sym_DQUOTE] = ACTIONS(893),
    [sym_single_quoted_argument] = ACTIONS(895),
    [anon_sym_LT] = ACTIONS(895),
    [anon_sym_GT] = ACTIONS(895),
    [anon_sym_GT_GT] = ACTIONS(895),
    [anon_sym_AMP_GT] = ACTIONS(895),
    [anon_sym_AMP_GT_GT] = ACTIONS(895),
    [anon_sym_LT_AMP] = ACTIONS(895),
    [anon_sym_GT_AMP] = ACTIONS(895),
    [sym_leading_word] = ACTIONS(863),
    [sym_comment] = ACTIONS(67),
  },
  [325] = {
    [anon_sym_RBRACE] = ACTIONS(909),
    [sym_comment] = ACTIONS(67),
  },
  [326] = {
    [anon_sym_RBRACE] = ACTIONS(911),
    [sym_comment] = ACTIONS(67),
  },
  [327] = {
    [sym__terminated_statement] = STATE(65),
    [sym_while_statement] = STATE(15),
    [sym_if_statement] = STATE(15),
    [sym_case_statement] = STATE(15),
    [sym_bracket_command] = STATE(15),
    [sym_command] = STATE(15),
    [sym_pipeline] = STATE(15),
    [sym_list] = STATE(15),
    [sym_subshell] = STATE(15),
    [sym_environment_variable_assignment] = STATE(16),
    [sym_quoted_argument] = STATE(8),
    [sym_file_redirect] = STATE(17),
    [aux_sym_command_repeat1] = STATE(19),
    [sym_file_descriptor] = ACTIONS(71),
    [anon_sym_while] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(77),
    [anon_sym_fi] = ACTIONS(913),
    [anon_sym_elif] = ACTIONS(913),
    [anon_sym_else] = ACTIONS(913),
    [anon_sym_case] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [sym_single_quoted_argument] = ACTIONS(91),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_AMP_GT] = ACTIONS(93),
    [anon_sym_AMP_GT_GT] = ACTIONS(93),
    [anon_sym_LT_AMP] = ACTIONS(93),
    [anon_sym_GT_AMP] = ACTIONS(93),
    [sym_leading_word] = ACTIONS(95),
    [sym_comment] = ACTIONS(67),
  },
  [328] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(915),
    [anon_sym_PIPE] = ACTIONS(915),
    [anon_sym_PIPE_AMP] = ACTIONS(915),
    [anon_sym_AMP_AMP] = ACTIONS(915),
    [anon_sym_PIPE_PIPE] = ACTIONS(915),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(915),
    [anon_sym_LF] = ACTIONS(915),
    [anon_sym_AMP] = ACTIONS(915),
  },
  [329] = {
    [anon_sym_esac] = ACTIONS(917),
    [anon_sym_DQUOTE] = ACTIONS(919),
    [sym_single_quoted_argument] = ACTIONS(917),
    [anon_sym_DOLLAR] = ACTIONS(917),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(919),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(919),
    [sym_word] = ACTIONS(921),
    [sym_comment] = ACTIONS(67),
  },
  [330] = {
    [sym__terminated_statement] = STATE(65),
    [sym_while_statement] = STATE(15),
    [sym_if_statement] = STATE(15),
    [sym_case_statement] = STATE(15),
    [sym_bracket_command] = STATE(15),
    [sym_command] = STATE(15),
    [sym_pipeline] = STATE(15),
    [sym_list] = STATE(15),
    [sym_subshell] = STATE(15),
    [sym_environment_variable_assignment] = STATE(16),
    [sym_quoted_argument] = STATE(8),
    [sym_file_redirect] = STATE(17),
    [aux_sym_command_repeat1] = STATE(19),
    [sym_file_descriptor] = ACTIONS(71),
    [anon_sym_while] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(77),
    [anon_sym_case] = ACTIONS(79),
    [anon_sym_SEMI_SEMI] = ACTIONS(923),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [sym_single_quoted_argument] = ACTIONS(91),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_AMP_GT] = ACTIONS(93),
    [anon_sym_AMP_GT_GT] = ACTIONS(93),
    [anon_sym_LT_AMP] = ACTIONS(93),
    [anon_sym_GT_AMP] = ACTIONS(93),
    [sym_leading_word] = ACTIONS(95),
    [sym_comment] = ACTIONS(67),
  },
  [331] = {
    [anon_sym_esac] = ACTIONS(925),
    [anon_sym_DQUOTE] = ACTIONS(927),
    [sym_single_quoted_argument] = ACTIONS(925),
    [anon_sym_DOLLAR] = ACTIONS(925),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(927),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(927),
    [sym_word] = ACTIONS(929),
    [sym_comment] = ACTIONS(67),
  },
  [332] = {
    [sym__terminated_statement] = STATE(65),
    [sym_while_statement] = STATE(15),
    [sym_if_statement] = STATE(15),
    [sym_case_statement] = STATE(15),
    [sym_bracket_command] = STATE(15),
    [sym_command] = STATE(15),
    [sym_pipeline] = STATE(15),
    [sym_list] = STATE(15),
    [sym_subshell] = STATE(15),
    [sym_environment_variable_assignment] = STATE(16),
    [sym_quoted_argument] = STATE(8),
    [sym_file_redirect] = STATE(17),
    [aux_sym_command_repeat1] = STATE(19),
    [sym_file_descriptor] = ACTIONS(71),
    [anon_sym_while] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(77),
    [anon_sym_case] = ACTIONS(79),
    [anon_sym_SEMI_SEMI] = ACTIONS(931),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [sym_single_quoted_argument] = ACTIONS(91),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_AMP_GT] = ACTIONS(93),
    [anon_sym_AMP_GT_GT] = ACTIONS(93),
    [anon_sym_LT_AMP] = ACTIONS(93),
    [anon_sym_GT_AMP] = ACTIONS(93),
    [sym_leading_word] = ACTIONS(95),
    [sym_comment] = ACTIONS(67),
  },
  [333] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(933),
    [anon_sym_PIPE] = ACTIONS(933),
    [anon_sym_PIPE_AMP] = ACTIONS(933),
    [anon_sym_AMP_AMP] = ACTIONS(933),
    [anon_sym_PIPE_PIPE] = ACTIONS(933),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(933),
    [anon_sym_LF] = ACTIONS(933),
    [anon_sym_AMP] = ACTIONS(933),
  },
  [334] = {
    [sym_file_descriptor] = ACTIONS(527),
    [anon_sym_RPAREN] = ACTIONS(527),
    [anon_sym_DQUOTE] = ACTIONS(527),
    [sym_single_quoted_argument] = ACTIONS(655),
    [anon_sym_DOLLAR] = ACTIONS(655),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(527),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(527),
    [anon_sym_LT] = ACTIONS(655),
    [anon_sym_GT] = ACTIONS(655),
    [anon_sym_GT_GT] = ACTIONS(527),
    [anon_sym_AMP_GT] = ACTIONS(655),
    [anon_sym_AMP_GT_GT] = ACTIONS(527),
    [anon_sym_LT_AMP] = ACTIONS(527),
    [anon_sym_GT_AMP] = ACTIONS(527),
    [anon_sym_LT_LT] = ACTIONS(655),
    [anon_sym_LT_LT_DASH] = ACTIONS(527),
    [sym_word] = ACTIONS(529),
    [sym_comment] = ACTIONS(67),
  },
  [335] = {
    [sym_quoted_argument] = STATE(352),
    [sym_expansion] = STATE(352),
    [sym_operator_expansion] = STATE(352),
    [sym_command_substitution] = STATE(352),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [sym_single_quoted_argument] = ACTIONS(935),
    [anon_sym_DOLLAR] = ACTIONS(117),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(119),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(121),
    [sym_word] = ACTIONS(937),
    [sym_comment] = ACTIONS(67),
  },
  [336] = {
    [sym_file_descriptor] = ACTIONS(661),
    [anon_sym_RPAREN] = ACTIONS(661),
    [anon_sym_DQUOTE] = ACTIONS(661),
    [sym_single_quoted_argument] = ACTIONS(663),
    [anon_sym_DOLLAR] = ACTIONS(663),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(661),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(661),
    [anon_sym_LT] = ACTIONS(663),
    [anon_sym_GT] = ACTIONS(663),
    [anon_sym_GT_GT] = ACTIONS(661),
    [anon_sym_AMP_GT] = ACTIONS(663),
    [anon_sym_AMP_GT_GT] = ACTIONS(661),
    [anon_sym_LT_AMP] = ACTIONS(661),
    [anon_sym_GT_AMP] = ACTIONS(661),
    [anon_sym_LT_LT] = ACTIONS(663),
    [anon_sym_LT_LT_DASH] = ACTIONS(661),
    [sym_word] = ACTIONS(603),
    [sym_comment] = ACTIONS(67),
  },
  [337] = {
    [sym_file_descriptor] = ACTIONS(665),
    [anon_sym_RPAREN] = ACTIONS(665),
    [anon_sym_DQUOTE] = ACTIONS(665),
    [sym_single_quoted_argument] = ACTIONS(667),
    [anon_sym_DOLLAR] = ACTIONS(667),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(665),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(665),
    [anon_sym_LT] = ACTIONS(667),
    [anon_sym_GT] = ACTIONS(667),
    [anon_sym_GT_GT] = ACTIONS(665),
    [anon_sym_AMP_GT] = ACTIONS(667),
    [anon_sym_AMP_GT_GT] = ACTIONS(665),
    [anon_sym_LT_AMP] = ACTIONS(665),
    [anon_sym_GT_AMP] = ACTIONS(665),
    [anon_sym_LT_LT] = ACTIONS(667),
    [anon_sym_LT_LT_DASH] = ACTIONS(665),
    [sym_word] = ACTIONS(645),
    [sym_comment] = ACTIONS(67),
  },
  [338] = {
    [sym_file_descriptor] = ACTIONS(821),
    [anon_sym_RPAREN] = ACTIONS(821),
    [anon_sym_LT] = ACTIONS(939),
    [anon_sym_GT] = ACTIONS(939),
    [anon_sym_GT_GT] = ACTIONS(821),
    [anon_sym_AMP_GT] = ACTIONS(939),
    [anon_sym_AMP_GT_GT] = ACTIONS(821),
    [anon_sym_LT_AMP] = ACTIONS(821),
    [anon_sym_GT_AMP] = ACTIONS(821),
    [anon_sym_LT_LT] = ACTIONS(939),
    [anon_sym_LT_LT_DASH] = ACTIONS(821),
    [sym_comment] = ACTIONS(67),
  },
  [339] = {
    [sym_file_redirect] = STATE(249),
    [sym_heredoc_redirect] = STATE(249),
    [sym_file_descriptor] = ACTIONS(413),
    [anon_sym_RPAREN] = ACTIONS(941),
    [anon_sym_LT] = ACTIONS(621),
    [anon_sym_GT] = ACTIONS(621),
    [anon_sym_GT_GT] = ACTIONS(623),
    [anon_sym_AMP_GT] = ACTIONS(621),
    [anon_sym_AMP_GT_GT] = ACTIONS(623),
    [anon_sym_LT_AMP] = ACTIONS(623),
    [anon_sym_GT_AMP] = ACTIONS(623),
    [anon_sym_LT_LT] = ACTIONS(625),
    [anon_sym_LT_LT_DASH] = ACTIONS(627),
    [sym_comment] = ACTIONS(67),
  },
  [340] = {
    [sym_file_redirect] = STATE(249),
    [sym_heredoc_redirect] = STATE(249),
    [sym_file_descriptor] = ACTIONS(413),
    [anon_sym_RPAREN] = ACTIONS(943),
    [anon_sym_LT] = ACTIONS(621),
    [anon_sym_GT] = ACTIONS(621),
    [anon_sym_GT_GT] = ACTIONS(623),
    [anon_sym_AMP_GT] = ACTIONS(621),
    [anon_sym_AMP_GT_GT] = ACTIONS(623),
    [anon_sym_LT_AMP] = ACTIONS(623),
    [anon_sym_GT_AMP] = ACTIONS(623),
    [anon_sym_LT_LT] = ACTIONS(625),
    [anon_sym_LT_LT_DASH] = ACTIONS(627),
    [sym_comment] = ACTIONS(67),
  },
  [341] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(945),
    [anon_sym_PIPE] = ACTIONS(945),
    [anon_sym_PIPE_AMP] = ACTIONS(945),
    [anon_sym_AMP_AMP] = ACTIONS(945),
    [anon_sym_PIPE_PIPE] = ACTIONS(945),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(945),
    [anon_sym_LF] = ACTIONS(945),
    [anon_sym_AMP] = ACTIONS(945),
  },
  [342] = {
    [sym_file_descriptor] = ACTIONS(889),
    [anon_sym_SEMI_SEMI] = ACTIONS(861),
    [anon_sym_PIPE] = ACTIONS(861),
    [anon_sym_PIPE_AMP] = ACTIONS(861),
    [anon_sym_AMP_AMP] = ACTIONS(861),
    [anon_sym_PIPE_PIPE] = ACTIONS(861),
    [anon_sym_DQUOTE] = ACTIONS(861),
    [sym_single_quoted_argument] = ACTIONS(861),
    [anon_sym_DOLLAR] = ACTIONS(861),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(861),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(861),
    [anon_sym_LT] = ACTIONS(861),
    [anon_sym_GT] = ACTIONS(861),
    [anon_sym_GT_GT] = ACTIONS(861),
    [anon_sym_AMP_GT] = ACTIONS(861),
    [anon_sym_AMP_GT_GT] = ACTIONS(861),
    [anon_sym_LT_AMP] = ACTIONS(861),
    [anon_sym_GT_AMP] = ACTIONS(861),
    [anon_sym_LT_LT] = ACTIONS(861),
    [anon_sym_LT_LT_DASH] = ACTIONS(861),
    [sym_word] = ACTIONS(861),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(861),
    [anon_sym_LF] = ACTIONS(861),
    [anon_sym_AMP] = ACTIONS(861),
  },
  [343] = {
    [sym_file_descriptor] = ACTIONS(893),
    [anon_sym_SEMI_SEMI] = ACTIONS(863),
    [anon_sym_PIPE] = ACTIONS(863),
    [anon_sym_PIPE_AMP] = ACTIONS(863),
    [anon_sym_AMP_AMP] = ACTIONS(863),
    [anon_sym_PIPE_PIPE] = ACTIONS(863),
    [anon_sym_DQUOTE] = ACTIONS(863),
    [sym_single_quoted_argument] = ACTIONS(863),
    [anon_sym_DOLLAR] = ACTIONS(863),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(863),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(863),
    [anon_sym_LT] = ACTIONS(863),
    [anon_sym_GT] = ACTIONS(863),
    [anon_sym_GT_GT] = ACTIONS(863),
    [anon_sym_AMP_GT] = ACTIONS(863),
    [anon_sym_AMP_GT_GT] = ACTIONS(863),
    [anon_sym_LT_AMP] = ACTIONS(863),
    [anon_sym_GT_AMP] = ACTIONS(863),
    [anon_sym_LT_LT] = ACTIONS(863),
    [anon_sym_LT_LT_DASH] = ACTIONS(863),
    [sym_word] = ACTIONS(863),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(863),
    [anon_sym_LF] = ACTIONS(863),
    [anon_sym_AMP] = ACTIONS(863),
  },
  [344] = {
    [sym_file_descriptor] = ACTIONS(889),
    [anon_sym_SEMI_SEMI] = ACTIONS(861),
    [anon_sym_PIPE] = ACTIONS(861),
    [anon_sym_PIPE_AMP] = ACTIONS(861),
    [anon_sym_AMP_AMP] = ACTIONS(861),
    [anon_sym_PIPE_PIPE] = ACTIONS(861),
    [anon_sym_LT] = ACTIONS(861),
    [anon_sym_GT] = ACTIONS(861),
    [anon_sym_GT_GT] = ACTIONS(861),
    [anon_sym_AMP_GT] = ACTIONS(861),
    [anon_sym_AMP_GT_GT] = ACTIONS(861),
    [anon_sym_LT_AMP] = ACTIONS(861),
    [anon_sym_GT_AMP] = ACTIONS(861),
    [anon_sym_LT_LT] = ACTIONS(861),
    [anon_sym_LT_LT_DASH] = ACTIONS(861),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(861),
    [anon_sym_LF] = ACTIONS(861),
    [anon_sym_AMP] = ACTIONS(861),
  },
  [345] = {
    [sym_file_descriptor] = ACTIONS(893),
    [anon_sym_SEMI_SEMI] = ACTIONS(863),
    [anon_sym_PIPE] = ACTIONS(863),
    [anon_sym_PIPE_AMP] = ACTIONS(863),
    [anon_sym_AMP_AMP] = ACTIONS(863),
    [anon_sym_PIPE_PIPE] = ACTIONS(863),
    [anon_sym_LT] = ACTIONS(863),
    [anon_sym_GT] = ACTIONS(863),
    [anon_sym_GT_GT] = ACTIONS(863),
    [anon_sym_AMP_GT] = ACTIONS(863),
    [anon_sym_AMP_GT_GT] = ACTIONS(863),
    [anon_sym_LT_AMP] = ACTIONS(863),
    [anon_sym_GT_AMP] = ACTIONS(863),
    [anon_sym_LT_LT] = ACTIONS(863),
    [anon_sym_LT_LT_DASH] = ACTIONS(863),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(863),
    [anon_sym_LF] = ACTIONS(863),
    [anon_sym_AMP] = ACTIONS(863),
  },
  [346] = {
    [anon_sym_RBRACE] = ACTIONS(947),
    [sym_comment] = ACTIONS(67),
  },
  [347] = {
    [anon_sym_RBRACE] = ACTIONS(949),
    [sym_comment] = ACTIONS(67),
  },
  [348] = {
    [sym_file_descriptor] = ACTIONS(889),
    [anon_sym_SEMI_SEMI] = ACTIONS(861),
    [anon_sym_COLON] = ACTIONS(861),
    [anon_sym_PIPE] = ACTIONS(861),
    [anon_sym_PIPE_AMP] = ACTIONS(861),
    [anon_sym_AMP_AMP] = ACTIONS(861),
    [anon_sym_PIPE_PIPE] = ACTIONS(861),
    [anon_sym_DQUOTE] = ACTIONS(861),
    [sym_single_quoted_argument] = ACTIONS(861),
    [anon_sym_RBRACE] = ACTIONS(861),
    [anon_sym_LT] = ACTIONS(861),
    [anon_sym_GT] = ACTIONS(861),
    [anon_sym_GT_GT] = ACTIONS(861),
    [anon_sym_AMP_GT] = ACTIONS(861),
    [anon_sym_AMP_GT_GT] = ACTIONS(861),
    [anon_sym_LT_AMP] = ACTIONS(861),
    [anon_sym_GT_AMP] = ACTIONS(861),
    [sym_leading_word] = ACTIONS(861),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(861),
    [anon_sym_LF] = ACTIONS(861),
    [anon_sym_AMP] = ACTIONS(861),
  },
  [349] = {
    [sym_file_descriptor] = ACTIONS(893),
    [anon_sym_SEMI_SEMI] = ACTIONS(863),
    [anon_sym_COLON] = ACTIONS(863),
    [anon_sym_PIPE] = ACTIONS(863),
    [anon_sym_PIPE_AMP] = ACTIONS(863),
    [anon_sym_AMP_AMP] = ACTIONS(863),
    [anon_sym_PIPE_PIPE] = ACTIONS(863),
    [anon_sym_DQUOTE] = ACTIONS(863),
    [sym_single_quoted_argument] = ACTIONS(863),
    [anon_sym_RBRACE] = ACTIONS(863),
    [anon_sym_LT] = ACTIONS(863),
    [anon_sym_GT] = ACTIONS(863),
    [anon_sym_GT_GT] = ACTIONS(863),
    [anon_sym_AMP_GT] = ACTIONS(863),
    [anon_sym_AMP_GT_GT] = ACTIONS(863),
    [anon_sym_LT_AMP] = ACTIONS(863),
    [anon_sym_GT_AMP] = ACTIONS(863),
    [sym_leading_word] = ACTIONS(863),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(863),
    [anon_sym_LF] = ACTIONS(863),
    [anon_sym_AMP] = ACTIONS(863),
  },
  [350] = {
    [anon_sym_esac] = ACTIONS(951),
    [anon_sym_DQUOTE] = ACTIONS(953),
    [sym_single_quoted_argument] = ACTIONS(951),
    [anon_sym_DOLLAR] = ACTIONS(951),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(953),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(953),
    [sym_word] = ACTIONS(955),
    [sym_comment] = ACTIONS(67),
  },
  [351] = {
    [anon_sym_esac] = ACTIONS(957),
    [anon_sym_DQUOTE] = ACTIONS(959),
    [sym_single_quoted_argument] = ACTIONS(957),
    [anon_sym_DOLLAR] = ACTIONS(957),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(959),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(959),
    [sym_word] = ACTIONS(961),
    [sym_comment] = ACTIONS(67),
  },
  [352] = {
    [anon_sym_RBRACE] = ACTIONS(963),
    [sym_comment] = ACTIONS(67),
  },
  [353] = {
    [anon_sym_RBRACE] = ACTIONS(965),
    [sym_comment] = ACTIONS(67),
  },
  [354] = {
    [sym__heredoc_middle] = ACTIONS(889),
    [sym__heredoc_end] = ACTIONS(889),
    [anon_sym_DOLLAR] = ACTIONS(891),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(889),
    [sym_comment] = ACTIONS(67),
  },
  [355] = {
    [sym__heredoc_middle] = ACTIONS(893),
    [sym__heredoc_end] = ACTIONS(893),
    [anon_sym_DOLLAR] = ACTIONS(895),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(893),
    [sym_comment] = ACTIONS(67),
  },
  [356] = {
    [sym_file_descriptor] = ACTIONS(889),
    [anon_sym_RPAREN] = ACTIONS(889),
    [anon_sym_DQUOTE] = ACTIONS(889),
    [sym_single_quoted_argument] = ACTIONS(891),
    [anon_sym_DOLLAR] = ACTIONS(891),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(889),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(889),
    [anon_sym_LT] = ACTIONS(891),
    [anon_sym_GT] = ACTIONS(891),
    [anon_sym_GT_GT] = ACTIONS(889),
    [anon_sym_AMP_GT] = ACTIONS(891),
    [anon_sym_AMP_GT_GT] = ACTIONS(889),
    [anon_sym_LT_AMP] = ACTIONS(889),
    [anon_sym_GT_AMP] = ACTIONS(889),
    [anon_sym_LT_LT] = ACTIONS(891),
    [anon_sym_LT_LT_DASH] = ACTIONS(889),
    [sym_word] = ACTIONS(861),
    [sym_comment] = ACTIONS(67),
  },
  [357] = {
    [sym_file_descriptor] = ACTIONS(893),
    [anon_sym_RPAREN] = ACTIONS(893),
    [anon_sym_DQUOTE] = ACTIONS(893),
    [sym_single_quoted_argument] = ACTIONS(895),
    [anon_sym_DOLLAR] = ACTIONS(895),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(893),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(893),
    [anon_sym_LT] = ACTIONS(895),
    [anon_sym_GT] = ACTIONS(895),
    [anon_sym_GT_GT] = ACTIONS(893),
    [anon_sym_AMP_GT] = ACTIONS(895),
    [anon_sym_AMP_GT_GT] = ACTIONS(893),
    [anon_sym_LT_AMP] = ACTIONS(893),
    [anon_sym_GT_AMP] = ACTIONS(893),
    [anon_sym_LT_LT] = ACTIONS(895),
    [anon_sym_LT_LT_DASH] = ACTIONS(893),
    [sym_word] = ACTIONS(863),
    [sym_comment] = ACTIONS(67),
  },
  [358] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(967),
    [anon_sym_PIPE] = ACTIONS(967),
    [anon_sym_PIPE_AMP] = ACTIONS(967),
    [anon_sym_AMP_AMP] = ACTIONS(967),
    [anon_sym_PIPE_PIPE] = ACTIONS(967),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(967),
    [anon_sym_LF] = ACTIONS(967),
    [anon_sym_AMP] = ACTIONS(967),
  },
  [359] = {
    [sym__terminated_statement] = STATE(14),
    [sym_while_statement] = STATE(15),
    [sym_if_statement] = STATE(15),
    [sym_elif_clause] = STATE(151),
    [sym_else_clause] = STATE(152),
    [sym_case_statement] = STATE(15),
    [sym_bracket_command] = STATE(15),
    [sym_command] = STATE(15),
    [sym_pipeline] = STATE(15),
    [sym_list] = STATE(15),
    [sym_subshell] = STATE(15),
    [sym_environment_variable_assignment] = STATE(16),
    [sym_quoted_argument] = STATE(8),
    [sym_file_redirect] = STATE(17),
    [aux_sym_program_repeat1] = STATE(398),
    [aux_sym_if_statement_repeat1] = STATE(154),
    [aux_sym_command_repeat1] = STATE(19),
    [sym_file_descriptor] = ACTIONS(71),
    [anon_sym_while] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(77),
    [anon_sym_fi] = ACTIONS(970),
    [anon_sym_elif] = ACTIONS(973),
    [anon_sym_else] = ACTIONS(976),
    [anon_sym_case] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [sym_single_quoted_argument] = ACTIONS(91),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_AMP_GT] = ACTIONS(93),
    [anon_sym_AMP_GT_GT] = ACTIONS(93),
    [anon_sym_LT_AMP] = ACTIONS(93),
    [anon_sym_GT_AMP] = ACTIONS(93),
    [sym_leading_word] = ACTIONS(95),
    [sym_comment] = ACTIONS(67),
  },
  [360] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(979),
    [anon_sym_PIPE] = ACTIONS(979),
    [anon_sym_PIPE_AMP] = ACTIONS(979),
    [anon_sym_AMP_AMP] = ACTIONS(979),
    [anon_sym_PIPE_PIPE] = ACTIONS(979),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(979),
    [anon_sym_LF] = ACTIONS(979),
    [anon_sym_AMP] = ACTIONS(979),
  },
  [361] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(984),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(984),
    [anon_sym_LF] = ACTIONS(984),
    [anon_sym_AMP] = ACTIONS(984),
  },
  [362] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(986),
    [anon_sym_PIPE] = ACTIONS(986),
    [anon_sym_PIPE_AMP] = ACTIONS(986),
    [anon_sym_AMP_AMP] = ACTIONS(986),
    [anon_sym_PIPE_PIPE] = ACTIONS(986),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(986),
    [anon_sym_LF] = ACTIONS(986),
    [anon_sym_AMP] = ACTIONS(986),
  },
  [363] = {
    [sym__terminated_statement] = STATE(14),
    [sym_while_statement] = STATE(15),
    [sym_if_statement] = STATE(15),
    [sym_case_statement] = STATE(15),
    [sym_bracket_command] = STATE(15),
    [sym_command] = STATE(15),
    [sym_pipeline] = STATE(15),
    [sym_list] = STATE(15),
    [sym_subshell] = STATE(15),
    [sym_environment_variable_assignment] = STATE(16),
    [sym_quoted_argument] = STATE(8),
    [sym_file_redirect] = STATE(17),
    [aux_sym_program_repeat1] = STATE(401),
    [aux_sym_command_repeat1] = STATE(19),
    [sym_file_descriptor] = ACTIONS(993),
    [anon_sym_while] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(77),
    [anon_sym_case] = ACTIONS(79),
    [anon_sym_in] = ACTIONS(645),
    [anon_sym_RPAREN] = ACTIONS(645),
    [anon_sym_SEMI_SEMI] = ACTIONS(996),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(645),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(83),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(645),
    [anon_sym_COLON] = ACTIONS(1001),
    [anon_sym_PIPE] = ACTIONS(1004),
    [anon_sym_PIPE_AMP] = ACTIONS(1004),
    [anon_sym_AMP_AMP] = ACTIONS(1004),
    [anon_sym_PIPE_PIPE] = ACTIONS(1004),
    [anon_sym_LPAREN] = ACTIONS(1008),
    [anon_sym_DQUOTE] = ACTIONS(1010),
    [sym__quoted_chars] = ACTIONS(645),
    [sym_single_quoted_argument] = ACTIONS(1001),
    [anon_sym_DOLLAR] = ACTIONS(645),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(645),
    [anon_sym_RBRACE] = ACTIONS(645),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(645),
    [anon_sym_LT] = ACTIONS(1013),
    [anon_sym_GT] = ACTIONS(1013),
    [anon_sym_GT_GT] = ACTIONS(1013),
    [anon_sym_AMP_GT] = ACTIONS(1013),
    [anon_sym_AMP_GT_GT] = ACTIONS(1013),
    [anon_sym_LT_AMP] = ACTIONS(1013),
    [anon_sym_GT_AMP] = ACTIONS(1013),
    [anon_sym_LT_LT] = ACTIONS(645),
    [anon_sym_LT_LT_DASH] = ACTIONS(645),
    [sym_leading_word] = ACTIONS(1016),
    [sym_word] = ACTIONS(645),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(1004),
    [anon_sym_LF] = ACTIONS(1004),
    [anon_sym_AMP] = ACTIONS(1004),
  },
  [364] = {
    [sym_quoted_argument] = STATE(404),
    [sym_expansion] = STATE(404),
    [sym_operator_expansion] = STATE(404),
    [sym_command_substitution] = STATE(404),
    [sym_file_redirect] = STATE(407),
    [sym_heredoc_redirect] = STATE(407),
    [aux_sym_command_repeat2] = STATE(408),
    [sym_file_descriptor] = ACTIONS(1019),
    [anon_sym_RPAREN] = ACTIONS(1021),
    [anon_sym_SEMI_SEMI] = ACTIONS(1021),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(1024),
    [anon_sym_PIPE] = ACTIONS(1021),
    [anon_sym_PIPE_AMP] = ACTIONS(1021),
    [anon_sym_AMP_AMP] = ACTIONS(1021),
    [anon_sym_PIPE_PIPE] = ACTIONS(1021),
    [anon_sym_DQUOTE] = ACTIONS(1026),
    [sym_single_quoted_argument] = ACTIONS(1028),
    [anon_sym_DOLLAR] = ACTIONS(1030),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1032),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1034),
    [anon_sym_LT] = ACTIONS(1036),
    [anon_sym_GT] = ACTIONS(1036),
    [anon_sym_GT_GT] = ACTIONS(1036),
    [anon_sym_AMP_GT] = ACTIONS(1036),
    [anon_sym_AMP_GT_GT] = ACTIONS(1036),
    [anon_sym_LT_AMP] = ACTIONS(1036),
    [anon_sym_GT_AMP] = ACTIONS(1036),
    [anon_sym_LT_LT] = ACTIONS(1038),
    [anon_sym_LT_LT_DASH] = ACTIONS(1038),
    [sym_word] = ACTIONS(1040),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(1021),
    [anon_sym_LF] = ACTIONS(1021),
    [anon_sym_AMP] = ACTIONS(1021),
  },
  [365] = {
    [sym_quoted_argument] = STATE(409),
    [sym_expansion] = STATE(409),
    [sym_operator_expansion] = STATE(409),
    [sym_command_substitution] = STATE(409),
    [anon_sym_DQUOTE] = ACTIONS(337),
    [sym_single_quoted_argument] = ACTIONS(1042),
    [anon_sym_DOLLAR] = ACTIONS(341),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(343),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(345),
    [sym_word] = ACTIONS(1044),
    [sym_comment] = ACTIONS(67),
  },
  [366] = {
    [sym_expansion] = STATE(48),
    [sym_operator_expansion] = STATE(48),
    [sym_command_substitution] = STATE(48),
    [aux_sym_quoted_argument_repeat1] = STATE(396),
    [sym_file_descriptor] = ACTIONS(1046),
    [anon_sym_in] = ACTIONS(1049),
    [anon_sym_RPAREN] = ACTIONS(1049),
    [anon_sym_SEMI_SEMI] = ACTIONS(1049),
    [anon_sym_RBRACK] = ACTIONS(1049),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1049),
    [anon_sym_COLON] = ACTIONS(1049),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(1049),
    [anon_sym_PIPE] = ACTIONS(1049),
    [anon_sym_PIPE_AMP] = ACTIONS(1049),
    [anon_sym_AMP_AMP] = ACTIONS(1049),
    [anon_sym_PIPE_PIPE] = ACTIONS(1049),
    [anon_sym_DQUOTE] = ACTIONS(1052),
    [sym__quoted_chars] = ACTIONS(1056),
    [sym_single_quoted_argument] = ACTIONS(1049),
    [anon_sym_DOLLAR] = ACTIONS(1058),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1062),
    [anon_sym_RBRACE] = ACTIONS(1049),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1066),
    [anon_sym_LT] = ACTIONS(1049),
    [anon_sym_GT] = ACTIONS(1049),
    [anon_sym_GT_GT] = ACTIONS(1049),
    [anon_sym_AMP_GT] = ACTIONS(1049),
    [anon_sym_AMP_GT_GT] = ACTIONS(1049),
    [anon_sym_LT_AMP] = ACTIONS(1049),
    [anon_sym_GT_AMP] = ACTIONS(1049),
    [anon_sym_LT_LT] = ACTIONS(1049),
    [anon_sym_LT_LT_DASH] = ACTIONS(1049),
    [sym_leading_word] = ACTIONS(1049),
    [sym_word] = ACTIONS(1049),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(1049),
    [anon_sym_LF] = ACTIONS(1049),
    [anon_sym_AMP] = ACTIONS(1049),
  },
  [367] = {
    [sym__heredoc_middle] = ACTIONS(441),
    [sym__heredoc_end] = ACTIONS(441),
    [sym_file_descriptor] = ACTIONS(441),
    [anon_sym_in] = ACTIONS(403),
    [anon_sym_RPAREN] = ACTIONS(403),
    [anon_sym_SEMI_SEMI] = ACTIONS(403),
    [anon_sym_RBRACK] = ACTIONS(403),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(403),
    [anon_sym_COLON] = ACTIONS(403),
    [anon_sym_PIPE] = ACTIONS(403),
    [anon_sym_PIPE_AMP] = ACTIONS(403),
    [anon_sym_AMP_AMP] = ACTIONS(403),
    [anon_sym_PIPE_PIPE] = ACTIONS(403),
    [anon_sym_DQUOTE] = ACTIONS(403),
    [sym__quoted_chars] = ACTIONS(403),
    [sym_single_quoted_argument] = ACTIONS(403),
    [anon_sym_DOLLAR] = ACTIONS(1070),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(403),
    [anon_sym_RBRACE] = ACTIONS(403),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(403),
    [anon_sym_LT] = ACTIONS(403),
    [anon_sym_GT] = ACTIONS(403),
    [anon_sym_GT_GT] = ACTIONS(403),
    [anon_sym_AMP_GT] = ACTIONS(403),
    [anon_sym_AMP_GT_GT] = ACTIONS(403),
    [anon_sym_LT_AMP] = ACTIONS(403),
    [anon_sym_GT_AMP] = ACTIONS(403),
    [anon_sym_LT_LT] = ACTIONS(403),
    [anon_sym_LT_LT_DASH] = ACTIONS(403),
    [sym_leading_word] = ACTIONS(403),
    [sym_word] = ACTIONS(1073),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(403),
    [anon_sym_LF] = ACTIONS(403),
    [anon_sym_AMP] = ACTIONS(403),
  },
  [368] = {
    [sym__heredoc_middle] = ACTIONS(1076),
    [sym__heredoc_end] = ACTIONS(1076),
    [sym_file_descriptor] = ACTIONS(1076),
    [anon_sym_in] = ACTIONS(1080),
    [anon_sym_RPAREN] = ACTIONS(1080),
    [anon_sym_SEMI_SEMI] = ACTIONS(1080),
    [anon_sym_RBRACK] = ACTIONS(1080),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1080),
    [anon_sym_COLON] = ACTIONS(1080),
    [anon_sym_PIPE] = ACTIONS(1080),
    [anon_sym_PIPE_AMP] = ACTIONS(1080),
    [anon_sym_AMP_AMP] = ACTIONS(1080),
    [anon_sym_PIPE_PIPE] = ACTIONS(1080),
    [anon_sym_DQUOTE] = ACTIONS(1080),
    [sym__quoted_chars] = ACTIONS(1080),
    [sym_single_quoted_argument] = ACTIONS(1080),
    [anon_sym_DOLLAR] = ACTIONS(1080),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1080),
    [anon_sym_RBRACE] = ACTIONS(1080),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1080),
    [anon_sym_LT] = ACTIONS(1080),
    [anon_sym_GT] = ACTIONS(1080),
    [anon_sym_GT_GT] = ACTIONS(1080),
    [anon_sym_AMP_GT] = ACTIONS(1080),
    [anon_sym_AMP_GT_GT] = ACTIONS(1080),
    [anon_sym_LT_AMP] = ACTIONS(1080),
    [anon_sym_GT_AMP] = ACTIONS(1080),
    [anon_sym_LT_LT] = ACTIONS(1080),
    [anon_sym_LT_LT_DASH] = ACTIONS(1080),
    [sym_leading_word] = ACTIONS(1080),
    [sym_word] = ACTIONS(1080),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(1080),
    [anon_sym_LF] = ACTIONS(1080),
    [anon_sym_AMP] = ACTIONS(1080),
  },
  [369] = {
    [sym_quoted_argument] = STATE(415),
    [sym_expansion] = STATE(415),
    [sym_operator_expansion] = STATE(415),
    [sym_command_substitution] = STATE(415),
    [anon_sym_DQUOTE] = ACTIONS(1084),
    [sym_single_quoted_argument] = ACTIONS(1086),
    [anon_sym_DOLLAR] = ACTIONS(1088),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1090),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1092),
    [sym_word] = ACTIONS(1094),
    [sym_comment] = ACTIONS(67),
  },
  [370] = {
    [sym_heredoc] = STATE(389),
    [sym__simple_heredoc] = ACTIONS(1096),
    [sym__heredoc_beginning] = ACTIONS(1098),
    [sym_comment] = ACTIONS(67),
  },
  [371] = {
    [sym_case_item] = STATE(230),
    [sym_quoted_argument] = STATE(228),
    [sym_expansion] = STATE(228),
    [sym_operator_expansion] = STATE(228),
    [sym_command_substitution] = STATE(228),
    [aux_sym_case_statement_repeat1] = STATE(392),
    [sym_file_descriptor] = ACTIONS(349),
    [ts_builtin_sym_end] = ACTIONS(349),
    [anon_sym_while] = ACTIONS(351),
    [anon_sym_do] = ACTIONS(351),
    [anon_sym_done] = ACTIONS(351),
    [anon_sym_if] = ACTIONS(351),
    [anon_sym_then] = ACTIONS(351),
    [anon_sym_fi] = ACTIONS(351),
    [anon_sym_elif] = ACTIONS(351),
    [anon_sym_else] = ACTIONS(351),
    [anon_sym_case] = ACTIONS(351),
    [anon_sym_in] = ACTIONS(1100),
    [anon_sym_esac] = ACTIONS(1102),
    [anon_sym_RPAREN] = ACTIONS(349),
    [anon_sym_SEMI_SEMI] = ACTIONS(349),
    [anon_sym_LBRACK] = ACTIONS(351),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(351),
    [anon_sym_COLON] = ACTIONS(351),
    [anon_sym_LPAREN] = ACTIONS(349),
    [anon_sym_DQUOTE] = ACTIONS(1104),
    [sym_single_quoted_argument] = ACTIONS(1107),
    [anon_sym_DOLLAR] = ACTIONS(117),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(119),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(121),
    [anon_sym_LT] = ACTIONS(351),
    [anon_sym_GT] = ACTIONS(351),
    [anon_sym_GT_GT] = ACTIONS(351),
    [anon_sym_AMP_GT] = ACTIONS(351),
    [anon_sym_AMP_GT_GT] = ACTIONS(351),
    [anon_sym_LT_AMP] = ACTIONS(351),
    [anon_sym_GT_AMP] = ACTIONS(351),
    [sym_leading_word] = ACTIONS(353),
    [sym_word] = ACTIONS(595),
    [sym_comment] = ACTIONS(67),
  },
  [372] = {
    [sym_file_descriptor] = ACTIONS(497),
    [anon_sym_RPAREN] = ACTIONS(499),
    [anon_sym_SEMI_SEMI] = ACTIONS(499),
    [anon_sym_PIPE] = ACTIONS(499),
    [anon_sym_PIPE_AMP] = ACTIONS(499),
    [anon_sym_AMP_AMP] = ACTIONS(499),
    [anon_sym_PIPE_PIPE] = ACTIONS(499),
    [anon_sym_LT] = ACTIONS(499),
    [anon_sym_GT] = ACTIONS(499),
    [anon_sym_GT_GT] = ACTIONS(499),
    [anon_sym_AMP_GT] = ACTIONS(499),
    [anon_sym_AMP_GT_GT] = ACTIONS(499),
    [anon_sym_LT_AMP] = ACTIONS(499),
    [anon_sym_GT_AMP] = ACTIONS(499),
    [anon_sym_LT_LT] = ACTIONS(499),
    [anon_sym_LT_LT_DASH] = ACTIONS(499),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(499),
    [anon_sym_LF] = ACTIONS(499),
    [anon_sym_AMP] = ACTIONS(499),
  },
  [373] = {
    [sym_expansion] = STATE(196),
    [sym_operator_expansion] = STATE(196),
    [aux_sym_heredoc_repeat1] = STATE(397),
    [sym__heredoc_middle] = ACTIONS(501),
    [sym__heredoc_end] = ACTIONS(1110),
    [anon_sym_DOLLAR] = ACTIONS(505),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(507),
    [sym_comment] = ACTIONS(67),
  },
  [374] = {
    [sym__heredoc_middle] = ACTIONS(1112),
    [sym__heredoc_end] = ACTIONS(1112),
    [anon_sym_DOLLAR] = ACTIONS(1115),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1112),
    [sym_comment] = ACTIONS(67),
  },
  [375] = {
    [sym_file_descriptor] = ACTIONS(1118),
    [anon_sym_RPAREN] = ACTIONS(1121),
    [anon_sym_SEMI_SEMI] = ACTIONS(1121),
    [anon_sym_PIPE] = ACTIONS(1121),
    [anon_sym_PIPE_AMP] = ACTIONS(1121),
    [anon_sym_AMP_AMP] = ACTIONS(1121),
    [anon_sym_PIPE_PIPE] = ACTIONS(1121),
    [anon_sym_LT] = ACTIONS(1121),
    [anon_sym_GT] = ACTIONS(1121),
    [anon_sym_GT_GT] = ACTIONS(1121),
    [anon_sym_AMP_GT] = ACTIONS(1121),
    [anon_sym_AMP_GT_GT] = ACTIONS(1121),
    [anon_sym_LT_AMP] = ACTIONS(1121),
    [anon_sym_GT_AMP] = ACTIONS(1121),
    [anon_sym_LT_LT] = ACTIONS(1121),
    [anon_sym_LT_LT_DASH] = ACTIONS(1121),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(1121),
    [anon_sym_LF] = ACTIONS(1121),
    [anon_sym_AMP] = ACTIONS(1121),
  },
  [376] = {
    [anon_sym_LT] = ACTIONS(1124),
    [anon_sym_GT] = ACTIONS(1124),
    [anon_sym_GT_GT] = ACTIONS(1126),
    [anon_sym_AMP_GT] = ACTIONS(1124),
    [anon_sym_AMP_GT_GT] = ACTIONS(1126),
    [anon_sym_LT_AMP] = ACTIONS(1126),
    [anon_sym_GT_AMP] = ACTIONS(1126),
    [sym_comment] = ACTIONS(67),
  },
  [377] = {
    [sym_do_group] = STATE(72),
    [sym_file_descriptor] = ACTIONS(1128),
    [ts_builtin_sym_end] = ACTIONS(1128),
    [anon_sym_while] = ACTIONS(1131),
    [anon_sym_do] = ACTIONS(1134),
    [anon_sym_done] = ACTIONS(1131),
    [anon_sym_if] = ACTIONS(1131),
    [anon_sym_then] = ACTIONS(1136),
    [anon_sym_fi] = ACTIONS(1131),
    [anon_sym_elif] = ACTIONS(1131),
    [anon_sym_else] = ACTIONS(1131),
    [anon_sym_case] = ACTIONS(1131),
    [anon_sym_RPAREN] = ACTIONS(1128),
    [anon_sym_SEMI_SEMI] = ACTIONS(1128),
    [anon_sym_LBRACK] = ACTIONS(1131),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1131),
    [anon_sym_COLON] = ACTIONS(1128),
    [anon_sym_LPAREN] = ACTIONS(1128),
    [anon_sym_DQUOTE] = ACTIONS(1128),
    [sym_single_quoted_argument] = ACTIONS(1131),
    [anon_sym_LT] = ACTIONS(1131),
    [anon_sym_GT] = ACTIONS(1131),
    [anon_sym_GT_GT] = ACTIONS(1131),
    [anon_sym_AMP_GT] = ACTIONS(1131),
    [anon_sym_AMP_GT_GT] = ACTIONS(1131),
    [anon_sym_LT_AMP] = ACTIONS(1131),
    [anon_sym_GT_AMP] = ACTIONS(1131),
    [sym_leading_word] = ACTIONS(1138),
    [sym_comment] = ACTIONS(67),
  },
  [378] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1141),
    [anon_sym_PIPE] = ACTIONS(1145),
    [anon_sym_PIPE_AMP] = ACTIONS(1145),
    [anon_sym_AMP_AMP] = ACTIONS(1149),
    [anon_sym_PIPE_PIPE] = ACTIONS(1149),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(1141),
    [anon_sym_LF] = ACTIONS(1141),
    [anon_sym_AMP] = ACTIONS(1141),
  },
  [379] = {
    [anon_sym_fi] = ACTIONS(1153),
    [anon_sym_elif] = ACTIONS(1153),
    [anon_sym_else] = ACTIONS(1153),
    [sym_comment] = ACTIONS(67),
  },
  [380] = {
    [anon_sym_fi] = ACTIONS(1156),
    [sym_comment] = ACTIONS(67),
  },
  [381] = {
    [anon_sym_esac] = ACTIONS(1158),
    [anon_sym_DQUOTE] = ACTIONS(1161),
    [sym_single_quoted_argument] = ACTIONS(1158),
    [anon_sym_DOLLAR] = ACTIONS(1158),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1161),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1161),
    [sym_word] = ACTIONS(1164),
    [sym_comment] = ACTIONS(67),
  },
  [382] = {
    [anon_sym_RPAREN] = ACTIONS(1167),
    [anon_sym_SEMI_SEMI] = ACTIONS(1169),
    [anon_sym_PIPE] = ACTIONS(1173),
    [anon_sym_PIPE_AMP] = ACTIONS(1173),
    [anon_sym_AMP_AMP] = ACTIONS(1177),
    [anon_sym_PIPE_PIPE] = ACTIONS(1177),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(1169),
    [anon_sym_LF] = ACTIONS(1169),
    [anon_sym_AMP] = ACTIONS(1169),
  },
  [383] = {
    [sym_file_descriptor] = ACTIONS(1181),
    [anon_sym_SEMI_SEMI] = ACTIONS(1141),
    [anon_sym_COLON] = ACTIONS(1184),
    [anon_sym_PIPE] = ACTIONS(1145),
    [anon_sym_PIPE_AMP] = ACTIONS(1145),
    [anon_sym_AMP_AMP] = ACTIONS(1149),
    [anon_sym_PIPE_PIPE] = ACTIONS(1149),
    [anon_sym_DQUOTE] = ACTIONS(1184),
    [sym_single_quoted_argument] = ACTIONS(1184),
    [anon_sym_LT] = ACTIONS(1184),
    [anon_sym_GT] = ACTIONS(1184),
    [anon_sym_GT_GT] = ACTIONS(1184),
    [anon_sym_AMP_GT] = ACTIONS(1184),
    [anon_sym_AMP_GT_GT] = ACTIONS(1184),
    [anon_sym_LT_AMP] = ACTIONS(1184),
    [anon_sym_GT_AMP] = ACTIONS(1184),
    [sym_leading_word] = ACTIONS(1184),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(1141),
    [anon_sym_LF] = ACTIONS(1141),
    [anon_sym_AMP] = ACTIONS(1141),
  },
  [384] = {
    [sym_file_redirect] = STATE(407),
    [sym_heredoc_redirect] = STATE(407),
    [aux_sym_command_repeat2] = STATE(408),
    [sym_file_descriptor] = ACTIONS(1187),
    [anon_sym_in] = ACTIONS(207),
    [anon_sym_RPAREN] = ACTIONS(1194),
    [anon_sym_SEMI_SEMI] = ACTIONS(1202),
    [anon_sym_RBRACK] = ACTIONS(1211),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1211),
    [anon_sym_COLON] = ACTIONS(1214),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(1024),
    [anon_sym_PIPE] = ACTIONS(1218),
    [anon_sym_PIPE_AMP] = ACTIONS(1218),
    [anon_sym_AMP_AMP] = ACTIONS(1218),
    [anon_sym_PIPE_PIPE] = ACTIONS(1218),
    [anon_sym_DQUOTE] = ACTIONS(1226),
    [sym_single_quoted_argument] = ACTIONS(1226),
    [anon_sym_DOLLAR] = ACTIONS(1211),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1211),
    [anon_sym_RBRACE] = ACTIONS(1232),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1211),
    [anon_sym_LT] = ACTIONS(1234),
    [anon_sym_GT] = ACTIONS(1234),
    [anon_sym_GT_GT] = ACTIONS(1234),
    [anon_sym_AMP_GT] = ACTIONS(1234),
    [anon_sym_AMP_GT_GT] = ACTIONS(1234),
    [anon_sym_LT_AMP] = ACTIONS(1234),
    [anon_sym_GT_AMP] = ACTIONS(1234),
    [anon_sym_LT_LT] = ACTIONS(1241),
    [anon_sym_LT_LT_DASH] = ACTIONS(1241),
    [sym_leading_word] = ACTIONS(1214),
    [sym_word] = ACTIONS(1211),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(1202),
    [anon_sym_LF] = ACTIONS(1202),
    [anon_sym_AMP] = ACTIONS(1202),
  },
  [385] = {
    [sym__heredoc_middle] = ACTIONS(1112),
    [sym__heredoc_end] = ACTIONS(1112),
    [sym_file_descriptor] = ACTIONS(1247),
    [anon_sym_in] = ACTIONS(207),
    [anon_sym_RPAREN] = ACTIONS(1253),
    [anon_sym_SEMI_SEMI] = ACTIONS(1259),
    [anon_sym_RBRACK] = ACTIONS(1211),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1211),
    [anon_sym_COLON] = ACTIONS(1214),
    [anon_sym_PIPE] = ACTIONS(1226),
    [anon_sym_PIPE_AMP] = ACTIONS(1226),
    [anon_sym_AMP_AMP] = ACTIONS(1226),
    [anon_sym_PIPE_PIPE] = ACTIONS(1226),
    [anon_sym_DQUOTE] = ACTIONS(1266),
    [sym__quoted_chars] = ACTIONS(1274),
    [sym_single_quoted_argument] = ACTIONS(1226),
    [anon_sym_DOLLAR] = ACTIONS(1277),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1277),
    [anon_sym_RBRACE] = ACTIONS(1232),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1284),
    [anon_sym_LT] = ACTIONS(1226),
    [anon_sym_GT] = ACTIONS(1226),
    [anon_sym_GT_GT] = ACTIONS(1226),
    [anon_sym_AMP_GT] = ACTIONS(1226),
    [anon_sym_AMP_GT_GT] = ACTIONS(1226),
    [anon_sym_LT_AMP] = ACTIONS(1226),
    [anon_sym_GT_AMP] = ACTIONS(1226),
    [anon_sym_LT_LT] = ACTIONS(1289),
    [anon_sym_LT_LT_DASH] = ACTIONS(1289),
    [sym_leading_word] = ACTIONS(1214),
    [sym_word] = ACTIONS(1211),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(1259),
    [anon_sym_LF] = ACTIONS(1259),
    [anon_sym_AMP] = ACTIONS(1259),
  },
  [386] = {
    [sym_file_descriptor] = ACTIONS(1247),
    [anon_sym_in] = ACTIONS(207),
    [anon_sym_RPAREN] = ACTIONS(1253),
    [anon_sym_SEMI_SEMI] = ACTIONS(1259),
    [anon_sym_RBRACK] = ACTIONS(1211),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1211),
    [anon_sym_COLON] = ACTIONS(1214),
    [anon_sym_PIPE] = ACTIONS(1226),
    [anon_sym_PIPE_AMP] = ACTIONS(1226),
    [anon_sym_AMP_AMP] = ACTIONS(1226),
    [anon_sym_PIPE_PIPE] = ACTIONS(1226),
    [anon_sym_DQUOTE] = ACTIONS(1266),
    [sym__quoted_chars] = ACTIONS(1274),
    [sym_single_quoted_argument] = ACTIONS(1226),
    [anon_sym_DOLLAR] = ACTIONS(1284),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1284),
    [anon_sym_RBRACE] = ACTIONS(1232),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1284),
    [anon_sym_LT] = ACTIONS(1226),
    [anon_sym_GT] = ACTIONS(1226),
    [anon_sym_GT_GT] = ACTIONS(1226),
    [anon_sym_AMP_GT] = ACTIONS(1226),
    [anon_sym_AMP_GT_GT] = ACTIONS(1226),
    [anon_sym_LT_AMP] = ACTIONS(1226),
    [anon_sym_GT_AMP] = ACTIONS(1226),
    [anon_sym_LT_LT] = ACTIONS(1289),
    [anon_sym_LT_LT_DASH] = ACTIONS(1289),
    [sym_leading_word] = ACTIONS(1214),
    [sym_word] = ACTIONS(1211),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(1259),
    [anon_sym_LF] = ACTIONS(1259),
    [anon_sym_AMP] = ACTIONS(1259),
  },
  [387] = {
    [sym_file_descriptor] = ACTIONS(1294),
    [anon_sym_RPAREN] = ACTIONS(1299),
    [anon_sym_SEMI_SEMI] = ACTIONS(1299),
    [anon_sym_COLON] = ACTIONS(1184),
    [anon_sym_PIPE] = ACTIONS(1299),
    [anon_sym_PIPE_AMP] = ACTIONS(1299),
    [anon_sym_AMP_AMP] = ACTIONS(1299),
    [anon_sym_PIPE_PIPE] = ACTIONS(1299),
    [anon_sym_DQUOTE] = ACTIONS(1184),
    [sym_single_quoted_argument] = ACTIONS(1184),
    [anon_sym_LT] = ACTIONS(1302),
    [anon_sym_GT] = ACTIONS(1302),
    [anon_sym_GT_GT] = ACTIONS(1302),
    [anon_sym_AMP_GT] = ACTIONS(1302),
    [anon_sym_AMP_GT_GT] = ACTIONS(1302),
    [anon_sym_LT_AMP] = ACTIONS(1302),
    [anon_sym_GT_AMP] = ACTIONS(1302),
    [anon_sym_LT_LT] = ACTIONS(1299),
    [anon_sym_LT_LT_DASH] = ACTIONS(1299),
    [sym_leading_word] = ACTIONS(1184),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(1299),
    [anon_sym_LF] = ACTIONS(1299),
    [anon_sym_AMP] = ACTIONS(1299),
  },
  [388] = {
    [sym_file_descriptor] = ACTIONS(1307),
    [anon_sym_RPAREN] = ACTIONS(1299),
    [anon_sym_SEMI_SEMI] = ACTIONS(1299),
    [anon_sym_PIPE] = ACTIONS(1299),
    [anon_sym_PIPE_AMP] = ACTIONS(1299),
    [anon_sym_AMP_AMP] = ACTIONS(1299),
    [anon_sym_PIPE_PIPE] = ACTIONS(1299),
    [anon_sym_LT] = ACTIONS(1299),
    [anon_sym_GT] = ACTIONS(1299),
    [anon_sym_GT_GT] = ACTIONS(1299),
    [anon_sym_AMP_GT] = ACTIONS(1299),
    [anon_sym_AMP_GT_GT] = ACTIONS(1299),
    [anon_sym_LT_AMP] = ACTIONS(1299),
    [anon_sym_GT_AMP] = ACTIONS(1299),
    [anon_sym_LT_LT] = ACTIONS(1299),
    [anon_sym_LT_LT_DASH] = ACTIONS(1299),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(1299),
    [anon_sym_LF] = ACTIONS(1299),
    [anon_sym_AMP] = ACTIONS(1299),
  },
  [389] = {
    [sym_file_descriptor] = ACTIONS(509),
    [anon_sym_RPAREN] = ACTIONS(511),
    [anon_sym_SEMI_SEMI] = ACTIONS(511),
    [anon_sym_PIPE] = ACTIONS(511),
    [anon_sym_PIPE_AMP] = ACTIONS(511),
    [anon_sym_AMP_AMP] = ACTIONS(511),
    [anon_sym_PIPE_PIPE] = ACTIONS(511),
    [anon_sym_LT] = ACTIONS(511),
    [anon_sym_GT] = ACTIONS(511),
    [anon_sym_GT_GT] = ACTIONS(511),
    [anon_sym_AMP_GT] = ACTIONS(511),
    [anon_sym_AMP_GT_GT] = ACTIONS(511),
    [anon_sym_LT_AMP] = ACTIONS(511),
    [anon_sym_GT_AMP] = ACTIONS(511),
    [anon_sym_LT_LT] = ACTIONS(511),
    [anon_sym_LT_LT_DASH] = ACTIONS(511),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(511),
    [anon_sym_LF] = ACTIONS(511),
    [anon_sym_AMP] = ACTIONS(511),
  },
  [390] = {
    [sym__terminated_statement] = STATE(65),
    [sym_while_statement] = STATE(15),
    [sym_if_statement] = STATE(15),
    [sym_elif_clause] = STATE(151),
    [sym_else_clause] = STATE(224),
    [sym_case_statement] = STATE(15),
    [sym_bracket_command] = STATE(15),
    [sym_command] = STATE(15),
    [sym_pipeline] = STATE(15),
    [sym_list] = STATE(15),
    [sym_subshell] = STATE(15),
    [sym_environment_variable_assignment] = STATE(16),
    [sym_quoted_argument] = STATE(8),
    [sym_file_redirect] = STATE(17),
    [aux_sym_if_statement_repeat1] = STATE(225),
    [aux_sym_command_repeat1] = STATE(19),
    [sym_file_descriptor] = ACTIONS(71),
    [ts_builtin_sym_end] = ACTIONS(187),
    [anon_sym_while] = ACTIONS(75),
    [anon_sym_done] = ACTIONS(575),
    [anon_sym_if] = ACTIONS(77),
    [anon_sym_fi] = ACTIONS(1310),
    [anon_sym_elif] = ACTIONS(1314),
    [anon_sym_else] = ACTIONS(1317),
    [anon_sym_case] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(295),
    [anon_sym_SEMI_SEMI] = ACTIONS(1320),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [sym_single_quoted_argument] = ACTIONS(91),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_AMP_GT] = ACTIONS(93),
    [anon_sym_AMP_GT_GT] = ACTIONS(93),
    [anon_sym_LT_AMP] = ACTIONS(93),
    [anon_sym_GT_AMP] = ACTIONS(93),
    [sym_leading_word] = ACTIONS(95),
    [sym_comment] = ACTIONS(67),
  },
  [391] = {
    [sym_elif_clause] = STATE(226),
    [sym_else_clause] = STATE(429),
    [anon_sym_fi] = ACTIONS(1322),
    [anon_sym_elif] = ACTIONS(587),
    [anon_sym_else] = ACTIONS(589),
    [sym_comment] = ACTIONS(67),
  },
  [392] = {
    [sym_case_item] = STATE(290),
    [sym_quoted_argument] = STATE(228),
    [sym_expansion] = STATE(228),
    [sym_operator_expansion] = STATE(228),
    [sym_command_substitution] = STATE(228),
    [anon_sym_esac] = ACTIONS(1324),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [sym_single_quoted_argument] = ACTIONS(593),
    [anon_sym_DOLLAR] = ACTIONS(117),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(119),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(121),
    [sym_word] = ACTIONS(595),
    [sym_comment] = ACTIONS(67),
  },
  [393] = {
    [sym_quoted_argument] = STATE(432),
    [sym_expansion] = STATE(432),
    [sym_operator_expansion] = STATE(432),
    [sym_command_substitution] = STATE(432),
    [sym_file_redirect] = STATE(407),
    [sym_heredoc_redirect] = STATE(407),
    [aux_sym_command_repeat2] = STATE(437),
    [sym_file_descriptor] = ACTIONS(1019),
    [anon_sym_RPAREN] = ACTIONS(1326),
    [anon_sym_SEMI_SEMI] = ACTIONS(1326),
    [anon_sym_RBRACK] = ACTIONS(1331),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1331),
    [anon_sym_PIPE] = ACTIONS(1326),
    [anon_sym_PIPE_AMP] = ACTIONS(1326),
    [anon_sym_AMP_AMP] = ACTIONS(1326),
    [anon_sym_PIPE_PIPE] = ACTIONS(1326),
    [anon_sym_DQUOTE] = ACTIONS(1333),
    [sym_single_quoted_argument] = ACTIONS(1335),
    [anon_sym_DOLLAR] = ACTIONS(1337),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1339),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1341),
    [anon_sym_LT] = ACTIONS(1036),
    [anon_sym_GT] = ACTIONS(1036),
    [anon_sym_GT_GT] = ACTIONS(1036),
    [anon_sym_AMP_GT] = ACTIONS(1036),
    [anon_sym_AMP_GT_GT] = ACTIONS(1036),
    [anon_sym_LT_AMP] = ACTIONS(1036),
    [anon_sym_GT_AMP] = ACTIONS(1036),
    [anon_sym_LT_LT] = ACTIONS(1038),
    [anon_sym_LT_LT_DASH] = ACTIONS(1038),
    [sym_word] = ACTIONS(1343),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(1326),
    [anon_sym_LF] = ACTIONS(1326),
    [anon_sym_AMP] = ACTIONS(1326),
  },
  [394] = {
    [sym_environment_variable_assignment] = STATE(68),
    [sym_quoted_argument] = STATE(438),
    [sym_file_redirect] = STATE(68),
    [sym_file_descriptor] = ACTIONS(71),
    [anon_sym_COLON] = ACTIONS(1345),
    [anon_sym_DQUOTE] = ACTIONS(1347),
    [sym_single_quoted_argument] = ACTIONS(1349),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_AMP_GT] = ACTIONS(93),
    [anon_sym_AMP_GT_GT] = ACTIONS(93),
    [anon_sym_LT_AMP] = ACTIONS(93),
    [anon_sym_GT_AMP] = ACTIONS(93),
    [sym_leading_word] = ACTIONS(1351),
    [sym_comment] = ACTIONS(67),
  },
  [395] = {
    [sym_file_redirect] = STATE(441),
    [sym_heredoc_redirect] = STATE(441),
    [sym_file_descriptor] = ACTIONS(1019),
    [anon_sym_RPAREN] = ACTIONS(1353),
    [anon_sym_SEMI_SEMI] = ACTIONS(1353),
    [anon_sym_PIPE] = ACTIONS(1353),
    [anon_sym_PIPE_AMP] = ACTIONS(1353),
    [anon_sym_AMP_AMP] = ACTIONS(1353),
    [anon_sym_PIPE_PIPE] = ACTIONS(1353),
    [anon_sym_LT] = ACTIONS(1036),
    [anon_sym_GT] = ACTIONS(1036),
    [anon_sym_GT_GT] = ACTIONS(1036),
    [anon_sym_AMP_GT] = ACTIONS(1036),
    [anon_sym_AMP_GT_GT] = ACTIONS(1036),
    [anon_sym_LT_AMP] = ACTIONS(1036),
    [anon_sym_GT_AMP] = ACTIONS(1036),
    [anon_sym_LT_LT] = ACTIONS(1038),
    [anon_sym_LT_LT_DASH] = ACTIONS(1038),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(1353),
    [anon_sym_LF] = ACTIONS(1353),
    [anon_sym_AMP] = ACTIONS(1353),
  },
  [396] = {
    [sym_expansion] = STATE(123),
    [sym_operator_expansion] = STATE(123),
    [sym_command_substitution] = STATE(123),
    [anon_sym_DQUOTE] = ACTIONS(1364),
    [sym__quoted_chars] = ACTIONS(313),
    [anon_sym_DOLLAR] = ACTIONS(143),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(145),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(147),
    [sym_comment] = ACTIONS(135),
  },
  [397] = {
    [sym_expansion] = STATE(272),
    [sym_operator_expansion] = STATE(272),
    [sym__heredoc_middle] = ACTIONS(705),
    [sym__heredoc_end] = ACTIONS(1366),
    [anon_sym_DOLLAR] = ACTIONS(505),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(507),
    [sym_comment] = ACTIONS(67),
  },
  [398] = {
    [sym__terminated_statement] = STATE(65),
    [sym_while_statement] = STATE(15),
    [sym_if_statement] = STATE(15),
    [sym_elif_clause] = STATE(151),
    [sym_else_clause] = STATE(224),
    [sym_case_statement] = STATE(15),
    [sym_bracket_command] = STATE(15),
    [sym_command] = STATE(15),
    [sym_pipeline] = STATE(15),
    [sym_list] = STATE(15),
    [sym_subshell] = STATE(15),
    [sym_environment_variable_assignment] = STATE(16),
    [sym_quoted_argument] = STATE(8),
    [sym_file_redirect] = STATE(17),
    [aux_sym_if_statement_repeat1] = STATE(225),
    [aux_sym_command_repeat1] = STATE(19),
    [sym_file_descriptor] = ACTIONS(71),
    [anon_sym_while] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(77),
    [anon_sym_fi] = ACTIONS(1368),
    [anon_sym_elif] = ACTIONS(1314),
    [anon_sym_else] = ACTIONS(1317),
    [anon_sym_case] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [sym_single_quoted_argument] = ACTIONS(91),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_AMP_GT] = ACTIONS(93),
    [anon_sym_AMP_GT_GT] = ACTIONS(93),
    [anon_sym_LT_AMP] = ACTIONS(93),
    [anon_sym_GT_AMP] = ACTIONS(93),
    [sym_leading_word] = ACTIONS(95),
    [sym_comment] = ACTIONS(67),
  },
  [399] = {
    [sym_case_item] = STATE(230),
    [sym_quoted_argument] = STATE(228),
    [sym_expansion] = STATE(228),
    [sym_operator_expansion] = STATE(228),
    [sym_command_substitution] = STATE(228),
    [aux_sym_case_statement_repeat1] = STATE(392),
    [anon_sym_esac] = ACTIONS(1102),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [sym_single_quoted_argument] = ACTIONS(593),
    [anon_sym_DOLLAR] = ACTIONS(117),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(119),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(121),
    [sym_word] = ACTIONS(595),
    [sym_comment] = ACTIONS(67),
  },
  [400] = {
    [anon_sym_esac] = ACTIONS(1371),
    [anon_sym_DQUOTE] = ACTIONS(1374),
    [sym_single_quoted_argument] = ACTIONS(1371),
    [anon_sym_DOLLAR] = ACTIONS(1371),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1374),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1374),
    [sym_word] = ACTIONS(1377),
    [sym_comment] = ACTIONS(67),
  },
  [401] = {
    [sym__terminated_statement] = STATE(65),
    [sym_while_statement] = STATE(15),
    [sym_if_statement] = STATE(15),
    [sym_case_statement] = STATE(15),
    [sym_bracket_command] = STATE(15),
    [sym_command] = STATE(15),
    [sym_pipeline] = STATE(15),
    [sym_list] = STATE(15),
    [sym_subshell] = STATE(15),
    [sym_environment_variable_assignment] = STATE(16),
    [sym_quoted_argument] = STATE(8),
    [sym_file_redirect] = STATE(17),
    [aux_sym_command_repeat1] = STATE(19),
    [sym_file_descriptor] = ACTIONS(71),
    [anon_sym_while] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(77),
    [anon_sym_case] = ACTIONS(79),
    [anon_sym_SEMI_SEMI] = ACTIONS(1320),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [sym_single_quoted_argument] = ACTIONS(91),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_AMP_GT] = ACTIONS(93),
    [anon_sym_AMP_GT_GT] = ACTIONS(93),
    [anon_sym_LT_AMP] = ACTIONS(93),
    [anon_sym_GT_AMP] = ACTIONS(93),
    [sym_leading_word] = ACTIONS(95),
    [sym_comment] = ACTIONS(67),
  },
  [402] = {
    [anon_sym_LT] = ACTIONS(1380),
    [anon_sym_GT] = ACTIONS(1380),
    [anon_sym_GT_GT] = ACTIONS(1382),
    [anon_sym_AMP_GT] = ACTIONS(1380),
    [anon_sym_AMP_GT_GT] = ACTIONS(1382),
    [anon_sym_LT_AMP] = ACTIONS(1382),
    [anon_sym_GT_AMP] = ACTIONS(1382),
    [sym_comment] = ACTIONS(67),
  },
  [403] = {
    [sym_quoted_argument] = STATE(446),
    [sym_expansion] = STATE(446),
    [sym_operator_expansion] = STATE(446),
    [sym_command_substitution] = STATE(446),
    [sym_file_redirect] = STATE(407),
    [sym_heredoc_redirect] = STATE(407),
    [aux_sym_bracket_command_repeat1] = STATE(451),
    [aux_sym_command_repeat2] = STATE(452),
    [sym_file_descriptor] = ACTIONS(1019),
    [anon_sym_RPAREN] = ACTIONS(1384),
    [anon_sym_SEMI_SEMI] = ACTIONS(1384),
    [anon_sym_PIPE] = ACTIONS(1384),
    [anon_sym_PIPE_AMP] = ACTIONS(1384),
    [anon_sym_AMP_AMP] = ACTIONS(1384),
    [anon_sym_PIPE_PIPE] = ACTIONS(1384),
    [anon_sym_DQUOTE] = ACTIONS(1387),
    [sym_single_quoted_argument] = ACTIONS(1389),
    [anon_sym_DOLLAR] = ACTIONS(1391),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1393),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1395),
    [anon_sym_LT] = ACTIONS(1036),
    [anon_sym_GT] = ACTIONS(1036),
    [anon_sym_GT_GT] = ACTIONS(1036),
    [anon_sym_AMP_GT] = ACTIONS(1036),
    [anon_sym_AMP_GT_GT] = ACTIONS(1036),
    [anon_sym_LT_AMP] = ACTIONS(1036),
    [anon_sym_GT_AMP] = ACTIONS(1036),
    [anon_sym_LT_LT] = ACTIONS(1038),
    [anon_sym_LT_LT_DASH] = ACTIONS(1038),
    [sym_word] = ACTIONS(1397),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(1384),
    [anon_sym_LF] = ACTIONS(1384),
    [anon_sym_AMP] = ACTIONS(1384),
  },
  [404] = {
    [anon_sym_RBRACE] = ACTIONS(1399),
    [sym_comment] = ACTIONS(67),
  },
  [405] = {
    [sym_quoted_argument] = STATE(454),
    [sym_expansion] = STATE(454),
    [sym_operator_expansion] = STATE(454),
    [sym_command_substitution] = STATE(454),
    [anon_sym_DQUOTE] = ACTIONS(1401),
    [sym_single_quoted_argument] = ACTIONS(1403),
    [anon_sym_DOLLAR] = ACTIONS(1405),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1407),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1409),
    [sym_word] = ACTIONS(1411),
    [sym_comment] = ACTIONS(67),
  },
  [406] = {
    [anon_sym_RBRACE] = ACTIONS(1413),
    [sym_comment] = ACTIONS(67),
  },
  [407] = {
    [sym_file_descriptor] = ACTIONS(289),
    [anon_sym_RPAREN] = ACTIONS(291),
    [anon_sym_SEMI_SEMI] = ACTIONS(291),
    [anon_sym_PIPE] = ACTIONS(291),
    [anon_sym_PIPE_AMP] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(291),
    [anon_sym_PIPE_PIPE] = ACTIONS(291),
    [anon_sym_LT] = ACTIONS(291),
    [anon_sym_GT] = ACTIONS(291),
    [anon_sym_GT_GT] = ACTIONS(291),
    [anon_sym_AMP_GT] = ACTIONS(291),
    [anon_sym_AMP_GT_GT] = ACTIONS(291),
    [anon_sym_LT_AMP] = ACTIONS(291),
    [anon_sym_GT_AMP] = ACTIONS(291),
    [anon_sym_LT_LT] = ACTIONS(291),
    [anon_sym_LT_LT_DASH] = ACTIONS(291),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(291),
    [anon_sym_LF] = ACTIONS(291),
    [anon_sym_AMP] = ACTIONS(291),
  },
  [408] = {
    [sym_file_redirect] = STATE(441),
    [sym_heredoc_redirect] = STATE(441),
    [sym_file_descriptor] = ACTIONS(1019),
    [anon_sym_RPAREN] = ACTIONS(1384),
    [anon_sym_SEMI_SEMI] = ACTIONS(1384),
    [anon_sym_PIPE] = ACTIONS(1384),
    [anon_sym_PIPE_AMP] = ACTIONS(1384),
    [anon_sym_AMP_AMP] = ACTIONS(1384),
    [anon_sym_PIPE_PIPE] = ACTIONS(1384),
    [anon_sym_LT] = ACTIONS(1036),
    [anon_sym_GT] = ACTIONS(1036),
    [anon_sym_GT_GT] = ACTIONS(1036),
    [anon_sym_AMP_GT] = ACTIONS(1036),
    [anon_sym_AMP_GT_GT] = ACTIONS(1036),
    [anon_sym_LT_AMP] = ACTIONS(1036),
    [anon_sym_GT_AMP] = ACTIONS(1036),
    [anon_sym_LT_LT] = ACTIONS(1038),
    [anon_sym_LT_LT_DASH] = ACTIONS(1038),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(1384),
    [anon_sym_LF] = ACTIONS(1384),
    [anon_sym_AMP] = ACTIONS(1384),
  },
  [409] = {
    [sym_file_descriptor] = ACTIONS(549),
    [anon_sym_SEMI_SEMI] = ACTIONS(551),
    [anon_sym_COLON] = ACTIONS(551),
    [anon_sym_PIPE] = ACTIONS(551),
    [anon_sym_PIPE_AMP] = ACTIONS(551),
    [anon_sym_AMP_AMP] = ACTIONS(551),
    [anon_sym_PIPE_PIPE] = ACTIONS(551),
    [anon_sym_DQUOTE] = ACTIONS(551),
    [sym_single_quoted_argument] = ACTIONS(551),
    [anon_sym_RBRACE] = ACTIONS(1232),
    [anon_sym_LT] = ACTIONS(551),
    [anon_sym_GT] = ACTIONS(551),
    [anon_sym_GT_GT] = ACTIONS(551),
    [anon_sym_AMP_GT] = ACTIONS(551),
    [anon_sym_AMP_GT_GT] = ACTIONS(551),
    [anon_sym_LT_AMP] = ACTIONS(551),
    [anon_sym_GT_AMP] = ACTIONS(551),
    [sym_leading_word] = ACTIONS(551),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(551),
    [anon_sym_LF] = ACTIONS(551),
    [anon_sym_AMP] = ACTIONS(551),
  },
  [410] = {
    [sym_file_descriptor] = ACTIONS(559),
    [anon_sym_SEMI_SEMI] = ACTIONS(561),
    [anon_sym_COLON] = ACTIONS(561),
    [anon_sym_PIPE] = ACTIONS(561),
    [anon_sym_PIPE_AMP] = ACTIONS(561),
    [anon_sym_AMP_AMP] = ACTIONS(561),
    [anon_sym_PIPE_PIPE] = ACTIONS(561),
    [anon_sym_DQUOTE] = ACTIONS(561),
    [sym_single_quoted_argument] = ACTIONS(561),
    [anon_sym_RBRACE] = ACTIONS(1415),
    [anon_sym_LT] = ACTIONS(561),
    [anon_sym_GT] = ACTIONS(561),
    [anon_sym_GT_GT] = ACTIONS(561),
    [anon_sym_AMP_GT] = ACTIONS(561),
    [anon_sym_AMP_GT_GT] = ACTIONS(561),
    [anon_sym_LT_AMP] = ACTIONS(561),
    [anon_sym_GT_AMP] = ACTIONS(561),
    [sym_leading_word] = ACTIONS(561),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(561),
    [anon_sym_LF] = ACTIONS(561),
    [anon_sym_AMP] = ACTIONS(561),
  },
  [411] = {
    [sym_file_descriptor] = ACTIONS(297),
    [anon_sym_in] = ACTIONS(299),
    [anon_sym_RPAREN] = ACTIONS(299),
    [anon_sym_SEMI_SEMI] = ACTIONS(299),
    [anon_sym_RBRACK] = ACTIONS(299),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(299),
    [anon_sym_COLON] = ACTIONS(299),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(299),
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
    [anon_sym_GT_GT] = ACTIONS(299),
    [anon_sym_AMP_GT] = ACTIONS(299),
    [anon_sym_AMP_GT_GT] = ACTIONS(299),
    [anon_sym_LT_AMP] = ACTIONS(299),
    [anon_sym_GT_AMP] = ACTIONS(299),
    [anon_sym_LT_LT] = ACTIONS(299),
    [anon_sym_LT_LT_DASH] = ACTIONS(299),
    [sym_leading_word] = ACTIONS(299),
    [sym_word] = ACTIONS(299),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(299),
    [anon_sym_LF] = ACTIONS(299),
    [anon_sym_AMP] = ACTIONS(299),
  },
  [412] = {
    [sym__heredoc_middle] = ACTIONS(441),
    [sym__heredoc_end] = ACTIONS(441),
    [sym_file_descriptor] = ACTIONS(441),
    [anon_sym_in] = ACTIONS(403),
    [anon_sym_RPAREN] = ACTIONS(403),
    [anon_sym_SEMI_SEMI] = ACTIONS(403),
    [anon_sym_RBRACK] = ACTIONS(403),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(403),
    [anon_sym_COLON] = ACTIONS(403),
    [anon_sym_PIPE] = ACTIONS(403),
    [anon_sym_PIPE_AMP] = ACTIONS(403),
    [anon_sym_AMP_AMP] = ACTIONS(403),
    [anon_sym_PIPE_PIPE] = ACTIONS(403),
    [anon_sym_DQUOTE] = ACTIONS(403),
    [sym__quoted_chars] = ACTIONS(403),
    [sym_single_quoted_argument] = ACTIONS(403),
    [anon_sym_DOLLAR] = ACTIONS(403),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(403),
    [anon_sym_RBRACE] = ACTIONS(403),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(403),
    [anon_sym_LT] = ACTIONS(403),
    [anon_sym_GT] = ACTIONS(403),
    [anon_sym_GT_GT] = ACTIONS(403),
    [anon_sym_AMP_GT] = ACTIONS(403),
    [anon_sym_AMP_GT_GT] = ACTIONS(403),
    [anon_sym_LT_AMP] = ACTIONS(403),
    [anon_sym_GT_AMP] = ACTIONS(403),
    [anon_sym_LT_LT] = ACTIONS(403),
    [anon_sym_LT_LT_DASH] = ACTIONS(403),
    [sym_leading_word] = ACTIONS(403),
    [sym_word] = ACTIONS(403),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(403),
    [anon_sym_LF] = ACTIONS(403),
    [anon_sym_AMP] = ACTIONS(403),
  },
  [413] = {
    [sym__heredoc_middle] = ACTIONS(445),
    [sym__heredoc_end] = ACTIONS(445),
    [sym_file_descriptor] = ACTIONS(445),
    [anon_sym_in] = ACTIONS(405),
    [anon_sym_RPAREN] = ACTIONS(405),
    [anon_sym_SEMI_SEMI] = ACTIONS(405),
    [anon_sym_RBRACK] = ACTIONS(405),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(405),
    [anon_sym_COLON] = ACTIONS(405),
    [anon_sym_PIPE] = ACTIONS(405),
    [anon_sym_PIPE_AMP] = ACTIONS(405),
    [anon_sym_AMP_AMP] = ACTIONS(405),
    [anon_sym_PIPE_PIPE] = ACTIONS(405),
    [anon_sym_DQUOTE] = ACTIONS(405),
    [sym__quoted_chars] = ACTIONS(405),
    [sym_single_quoted_argument] = ACTIONS(405),
    [anon_sym_DOLLAR] = ACTIONS(405),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(405),
    [anon_sym_RBRACE] = ACTIONS(405),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(405),
    [anon_sym_LT] = ACTIONS(405),
    [anon_sym_GT] = ACTIONS(405),
    [anon_sym_GT_GT] = ACTIONS(405),
    [anon_sym_AMP_GT] = ACTIONS(405),
    [anon_sym_AMP_GT_GT] = ACTIONS(405),
    [anon_sym_LT_AMP] = ACTIONS(405),
    [anon_sym_GT_AMP] = ACTIONS(405),
    [anon_sym_LT_LT] = ACTIONS(405),
    [anon_sym_LT_LT_DASH] = ACTIONS(405),
    [sym_leading_word] = ACTIONS(405),
    [sym_word] = ACTIONS(405),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(405),
    [anon_sym_LF] = ACTIONS(405),
    [anon_sym_AMP] = ACTIONS(405),
  },
  [414] = {
    [sym_expansion] = STATE(48),
    [sym_operator_expansion] = STATE(48),
    [sym_command_substitution] = STATE(48),
    [aux_sym_quoted_argument_repeat1] = STATE(461),
    [anon_sym_DQUOTE] = ACTIONS(1417),
    [sym__quoted_chars] = ACTIONS(141),
    [anon_sym_DOLLAR] = ACTIONS(143),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(145),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(147),
    [sym_comment] = ACTIONS(135),
  },
  [415] = {
    [sym_file_descriptor] = ACTIONS(1419),
    [anon_sym_RPAREN] = ACTIONS(1422),
    [anon_sym_SEMI_SEMI] = ACTIONS(1422),
    [anon_sym_COLON] = ACTIONS(1422),
    [anon_sym_PIPE] = ACTIONS(1422),
    [anon_sym_PIPE_AMP] = ACTIONS(1422),
    [anon_sym_AMP_AMP] = ACTIONS(1422),
    [anon_sym_PIPE_PIPE] = ACTIONS(1422),
    [anon_sym_DQUOTE] = ACTIONS(1422),
    [sym_single_quoted_argument] = ACTIONS(1422),
    [anon_sym_LT] = ACTIONS(1422),
    [anon_sym_GT] = ACTIONS(1422),
    [anon_sym_GT_GT] = ACTIONS(1422),
    [anon_sym_AMP_GT] = ACTIONS(1422),
    [anon_sym_AMP_GT_GT] = ACTIONS(1422),
    [anon_sym_LT_AMP] = ACTIONS(1422),
    [anon_sym_GT_AMP] = ACTIONS(1422),
    [anon_sym_LT_LT] = ACTIONS(1422),
    [anon_sym_LT_LT_DASH] = ACTIONS(1422),
    [sym_leading_word] = ACTIONS(1422),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(1422),
    [anon_sym_LF] = ACTIONS(1422),
    [anon_sym_AMP] = ACTIONS(1422),
  },
  [416] = {
    [anon_sym_DOLLAR] = ACTIONS(1425),
    [sym_word] = ACTIONS(1427),
    [sym_comment] = ACTIONS(67),
  },
  [417] = {
    [sym_leading_word] = ACTIONS(1429),
    [sym_comment] = ACTIONS(67),
  },
  [418] = {
    [sym_command] = STATE(465),
    [sym_environment_variable_assignment] = STATE(17),
    [sym_quoted_argument] = STATE(82),
    [sym_file_redirect] = STATE(17),
    [aux_sym_command_repeat1] = STATE(86),
    [sym_file_descriptor] = ACTIONS(71),
    [anon_sym_COLON] = ACTIONS(217),
    [anon_sym_DQUOTE] = ACTIONS(219),
    [sym_single_quoted_argument] = ACTIONS(221),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_AMP_GT] = ACTIONS(93),
    [anon_sym_AMP_GT_GT] = ACTIONS(93),
    [anon_sym_LT_AMP] = ACTIONS(93),
    [anon_sym_GT_AMP] = ACTIONS(93),
    [sym_leading_word] = ACTIONS(223),
    [sym_comment] = ACTIONS(67),
  },
  [419] = {
    [sym_file_descriptor] = ACTIONS(1431),
    [anon_sym_RPAREN] = ACTIONS(1434),
    [anon_sym_SEMI_SEMI] = ACTIONS(1434),
    [anon_sym_COLON] = ACTIONS(1434),
    [anon_sym_PIPE] = ACTIONS(1434),
    [anon_sym_PIPE_AMP] = ACTIONS(1434),
    [anon_sym_AMP_AMP] = ACTIONS(1434),
    [anon_sym_PIPE_PIPE] = ACTIONS(1434),
    [anon_sym_DQUOTE] = ACTIONS(1434),
    [sym_single_quoted_argument] = ACTIONS(1434),
    [anon_sym_LT] = ACTIONS(1434),
    [anon_sym_GT] = ACTIONS(1434),
    [anon_sym_GT_GT] = ACTIONS(1434),
    [anon_sym_AMP_GT] = ACTIONS(1434),
    [anon_sym_AMP_GT_GT] = ACTIONS(1434),
    [anon_sym_LT_AMP] = ACTIONS(1434),
    [anon_sym_GT_AMP] = ACTIONS(1434),
    [anon_sym_LT_LT] = ACTIONS(1434),
    [anon_sym_LT_LT_DASH] = ACTIONS(1434),
    [sym_leading_word] = ACTIONS(1434),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(1434),
    [anon_sym_LF] = ACTIONS(1434),
    [anon_sym_AMP] = ACTIONS(1434),
  },
  [420] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1437),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(1437),
    [anon_sym_LF] = ACTIONS(1437),
    [anon_sym_AMP] = ACTIONS(1437),
  },
  [421] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1439),
    [anon_sym_PIPE] = ACTIONS(1439),
    [anon_sym_PIPE_AMP] = ACTIONS(1439),
    [anon_sym_AMP_AMP] = ACTIONS(1439),
    [anon_sym_PIPE_PIPE] = ACTIONS(1439),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(1439),
    [anon_sym_LF] = ACTIONS(1439),
    [anon_sym_AMP] = ACTIONS(1439),
  },
  [422] = {
    [sym_file_descriptor] = ACTIONS(695),
    [anon_sym_RPAREN] = ACTIONS(697),
    [anon_sym_SEMI_SEMI] = ACTIONS(697),
    [anon_sym_PIPE] = ACTIONS(697),
    [anon_sym_PIPE_AMP] = ACTIONS(697),
    [anon_sym_AMP_AMP] = ACTIONS(697),
    [anon_sym_PIPE_PIPE] = ACTIONS(697),
    [anon_sym_LT] = ACTIONS(697),
    [anon_sym_GT] = ACTIONS(697),
    [anon_sym_GT_GT] = ACTIONS(697),
    [anon_sym_AMP_GT] = ACTIONS(697),
    [anon_sym_AMP_GT_GT] = ACTIONS(697),
    [anon_sym_LT_AMP] = ACTIONS(697),
    [anon_sym_GT_AMP] = ACTIONS(697),
    [anon_sym_LT_LT] = ACTIONS(697),
    [anon_sym_LT_LT_DASH] = ACTIONS(697),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(697),
    [anon_sym_LF] = ACTIONS(697),
    [anon_sym_AMP] = ACTIONS(697),
  },
  [423] = {
    [sym_quoted_argument] = STATE(467),
    [sym_expansion] = STATE(467),
    [sym_operator_expansion] = STATE(467),
    [sym_command_substitution] = STATE(467),
    [anon_sym_DQUOTE] = ACTIONS(1084),
    [sym_single_quoted_argument] = ACTIONS(1444),
    [anon_sym_DOLLAR] = ACTIONS(1088),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1090),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1092),
    [sym_word] = ACTIONS(1446),
    [sym_comment] = ACTIONS(67),
  },
  [424] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1448),
    [anon_sym_PIPE] = ACTIONS(1448),
    [anon_sym_PIPE_AMP] = ACTIONS(1448),
    [anon_sym_AMP_AMP] = ACTIONS(1448),
    [anon_sym_PIPE_PIPE] = ACTIONS(1448),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(1448),
    [anon_sym_LF] = ACTIONS(1448),
    [anon_sym_AMP] = ACTIONS(1448),
  },
  [425] = {
    [sym_file_descriptor] = ACTIONS(665),
    [anon_sym_in] = ACTIONS(645),
    [anon_sym_RPAREN] = ACTIONS(645),
    [anon_sym_SEMI_SEMI] = ACTIONS(645),
    [anon_sym_RBRACK] = ACTIONS(645),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(645),
    [anon_sym_COLON] = ACTIONS(645),
    [anon_sym_PIPE] = ACTIONS(645),
    [anon_sym_PIPE_AMP] = ACTIONS(645),
    [anon_sym_AMP_AMP] = ACTIONS(645),
    [anon_sym_PIPE_PIPE] = ACTIONS(645),
    [anon_sym_DQUOTE] = ACTIONS(645),
    [sym__quoted_chars] = ACTIONS(645),
    [sym_single_quoted_argument] = ACTIONS(645),
    [anon_sym_DOLLAR] = ACTIONS(645),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(645),
    [anon_sym_RBRACE] = ACTIONS(645),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(645),
    [anon_sym_LT] = ACTIONS(645),
    [anon_sym_GT] = ACTIONS(645),
    [anon_sym_GT_GT] = ACTIONS(645),
    [anon_sym_AMP_GT] = ACTIONS(645),
    [anon_sym_AMP_GT_GT] = ACTIONS(645),
    [anon_sym_LT_AMP] = ACTIONS(645),
    [anon_sym_GT_AMP] = ACTIONS(645),
    [anon_sym_LT_LT] = ACTIONS(645),
    [anon_sym_LT_LT_DASH] = ACTIONS(645),
    [sym_leading_word] = ACTIONS(645),
    [sym_word] = ACTIONS(645),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(645),
    [anon_sym_LF] = ACTIONS(645),
    [anon_sym_AMP] = ACTIONS(645),
  },
  [426] = {
    [sym__heredoc_middle] = ACTIONS(889),
    [sym__heredoc_end] = ACTIONS(889),
    [sym_file_descriptor] = ACTIONS(889),
    [anon_sym_in] = ACTIONS(861),
    [anon_sym_RPAREN] = ACTIONS(861),
    [anon_sym_SEMI_SEMI] = ACTIONS(861),
    [anon_sym_RBRACK] = ACTIONS(861),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(861),
    [anon_sym_COLON] = ACTIONS(861),
    [anon_sym_PIPE] = ACTIONS(861),
    [anon_sym_PIPE_AMP] = ACTIONS(861),
    [anon_sym_AMP_AMP] = ACTIONS(861),
    [anon_sym_PIPE_PIPE] = ACTIONS(861),
    [anon_sym_DQUOTE] = ACTIONS(861),
    [sym__quoted_chars] = ACTIONS(861),
    [sym_single_quoted_argument] = ACTIONS(861),
    [anon_sym_DOLLAR] = ACTIONS(861),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(861),
    [anon_sym_RBRACE] = ACTIONS(861),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(861),
    [anon_sym_LT] = ACTIONS(861),
    [anon_sym_GT] = ACTIONS(861),
    [anon_sym_GT_GT] = ACTIONS(861),
    [anon_sym_AMP_GT] = ACTIONS(861),
    [anon_sym_AMP_GT_GT] = ACTIONS(861),
    [anon_sym_LT_AMP] = ACTIONS(861),
    [anon_sym_GT_AMP] = ACTIONS(861),
    [anon_sym_LT_LT] = ACTIONS(861),
    [anon_sym_LT_LT_DASH] = ACTIONS(861),
    [sym_leading_word] = ACTIONS(861),
    [sym_word] = ACTIONS(861),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(861),
    [anon_sym_LF] = ACTIONS(861),
    [anon_sym_AMP] = ACTIONS(861),
  },
  [427] = {
    [anon_sym_esac] = ACTIONS(1452),
    [anon_sym_DQUOTE] = ACTIONS(1455),
    [sym_single_quoted_argument] = ACTIONS(1452),
    [anon_sym_DOLLAR] = ACTIONS(1452),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1455),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1455),
    [sym_word] = ACTIONS(1458),
    [sym_comment] = ACTIONS(67),
  },
  [428] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1461),
    [anon_sym_PIPE] = ACTIONS(1461),
    [anon_sym_PIPE_AMP] = ACTIONS(1461),
    [anon_sym_AMP_AMP] = ACTIONS(1461),
    [anon_sym_PIPE_PIPE] = ACTIONS(1461),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(1461),
    [anon_sym_LF] = ACTIONS(1461),
    [anon_sym_AMP] = ACTIONS(1461),
  },
  [429] = {
    [anon_sym_fi] = ACTIONS(1464),
    [sym_comment] = ACTIONS(67),
  },
  [430] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1466),
    [anon_sym_PIPE] = ACTIONS(1466),
    [anon_sym_PIPE_AMP] = ACTIONS(1466),
    [anon_sym_AMP_AMP] = ACTIONS(1466),
    [anon_sym_PIPE_PIPE] = ACTIONS(1466),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(1466),
    [anon_sym_LF] = ACTIONS(1466),
    [anon_sym_AMP] = ACTIONS(1466),
  },
  [431] = {
    [sym_expansion] = STATE(48),
    [sym_operator_expansion] = STATE(48),
    [sym_command_substitution] = STATE(48),
    [aux_sym_quoted_argument_repeat1] = STATE(471),
    [anon_sym_DQUOTE] = ACTIONS(1471),
    [sym__quoted_chars] = ACTIONS(141),
    [anon_sym_DOLLAR] = ACTIONS(143),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(145),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(147),
    [sym_comment] = ACTIONS(135),
  },
  [432] = {
    [sym_file_descriptor] = ACTIONS(461),
    [anon_sym_RPAREN] = ACTIONS(463),
    [anon_sym_SEMI_SEMI] = ACTIONS(463),
    [anon_sym_RBRACK] = ACTIONS(463),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(463),
    [anon_sym_PIPE] = ACTIONS(463),
    [anon_sym_PIPE_AMP] = ACTIONS(463),
    [anon_sym_AMP_AMP] = ACTIONS(463),
    [anon_sym_PIPE_PIPE] = ACTIONS(463),
    [anon_sym_DQUOTE] = ACTIONS(463),
    [sym_single_quoted_argument] = ACTIONS(463),
    [anon_sym_DOLLAR] = ACTIONS(463),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(463),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(463),
    [anon_sym_LT] = ACTIONS(463),
    [anon_sym_GT] = ACTIONS(463),
    [anon_sym_GT_GT] = ACTIONS(463),
    [anon_sym_AMP_GT] = ACTIONS(463),
    [anon_sym_AMP_GT_GT] = ACTIONS(463),
    [anon_sym_LT_AMP] = ACTIONS(463),
    [anon_sym_GT_AMP] = ACTIONS(463),
    [anon_sym_LT_LT] = ACTIONS(463),
    [anon_sym_LT_LT_DASH] = ACTIONS(463),
    [sym_word] = ACTIONS(463),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(463),
    [anon_sym_LF] = ACTIONS(463),
    [anon_sym_AMP] = ACTIONS(463),
  },
  [433] = {
    [anon_sym_DOLLAR] = ACTIONS(1473),
    [sym_word] = ACTIONS(1475),
    [sym_comment] = ACTIONS(67),
  },
  [434] = {
    [sym_leading_word] = ACTIONS(1477),
    [sym_comment] = ACTIONS(67),
  },
  [435] = {
    [sym_command] = STATE(475),
    [sym_environment_variable_assignment] = STATE(17),
    [sym_quoted_argument] = STATE(82),
    [sym_file_redirect] = STATE(17),
    [aux_sym_command_repeat1] = STATE(86),
    [sym_file_descriptor] = ACTIONS(71),
    [anon_sym_COLON] = ACTIONS(217),
    [anon_sym_DQUOTE] = ACTIONS(219),
    [sym_single_quoted_argument] = ACTIONS(221),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_AMP_GT] = ACTIONS(93),
    [anon_sym_AMP_GT_GT] = ACTIONS(93),
    [anon_sym_LT_AMP] = ACTIONS(93),
    [anon_sym_GT_AMP] = ACTIONS(93),
    [sym_leading_word] = ACTIONS(223),
    [sym_comment] = ACTIONS(67),
  },
  [436] = {
    [sym_file_descriptor] = ACTIONS(467),
    [anon_sym_RPAREN] = ACTIONS(469),
    [anon_sym_SEMI_SEMI] = ACTIONS(469),
    [anon_sym_RBRACK] = ACTIONS(469),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(469),
    [anon_sym_PIPE] = ACTIONS(469),
    [anon_sym_PIPE_AMP] = ACTIONS(469),
    [anon_sym_AMP_AMP] = ACTIONS(469),
    [anon_sym_PIPE_PIPE] = ACTIONS(469),
    [anon_sym_DQUOTE] = ACTIONS(469),
    [sym_single_quoted_argument] = ACTIONS(469),
    [anon_sym_DOLLAR] = ACTIONS(469),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(469),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(469),
    [anon_sym_LT] = ACTIONS(469),
    [anon_sym_GT] = ACTIONS(469),
    [anon_sym_GT_GT] = ACTIONS(469),
    [anon_sym_AMP_GT] = ACTIONS(469),
    [anon_sym_AMP_GT_GT] = ACTIONS(469),
    [anon_sym_LT_AMP] = ACTIONS(469),
    [anon_sym_GT_AMP] = ACTIONS(469),
    [anon_sym_LT_LT] = ACTIONS(469),
    [anon_sym_LT_LT_DASH] = ACTIONS(469),
    [sym_word] = ACTIONS(469),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(469),
    [anon_sym_LF] = ACTIONS(469),
    [anon_sym_AMP] = ACTIONS(469),
  },
  [437] = {
    [sym_file_redirect] = STATE(441),
    [sym_heredoc_redirect] = STATE(441),
    [sym_file_descriptor] = ACTIONS(1019),
    [anon_sym_RPAREN] = ACTIONS(1479),
    [anon_sym_SEMI_SEMI] = ACTIONS(1479),
    [anon_sym_PIPE] = ACTIONS(1479),
    [anon_sym_PIPE_AMP] = ACTIONS(1479),
    [anon_sym_AMP_AMP] = ACTIONS(1479),
    [anon_sym_PIPE_PIPE] = ACTIONS(1479),
    [anon_sym_LT] = ACTIONS(1036),
    [anon_sym_GT] = ACTIONS(1036),
    [anon_sym_GT_GT] = ACTIONS(1036),
    [anon_sym_AMP_GT] = ACTIONS(1036),
    [anon_sym_AMP_GT_GT] = ACTIONS(1036),
    [anon_sym_LT_AMP] = ACTIONS(1036),
    [anon_sym_GT_AMP] = ACTIONS(1036),
    [anon_sym_LT_LT] = ACTIONS(1038),
    [anon_sym_LT_LT_DASH] = ACTIONS(1038),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(1479),
    [anon_sym_LF] = ACTIONS(1479),
    [anon_sym_AMP] = ACTIONS(1479),
  },
  [438] = {
    [sym_file_redirect] = STATE(407),
    [sym_heredoc_redirect] = STATE(407),
    [aux_sym_command_repeat2] = STATE(477),
    [sym_file_descriptor] = ACTIONS(1019),
    [anon_sym_RPAREN] = ACTIONS(259),
    [anon_sym_SEMI_SEMI] = ACTIONS(259),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(1484),
    [anon_sym_PIPE] = ACTIONS(259),
    [anon_sym_PIPE_AMP] = ACTIONS(259),
    [anon_sym_AMP_AMP] = ACTIONS(259),
    [anon_sym_PIPE_PIPE] = ACTIONS(259),
    [anon_sym_LT] = ACTIONS(1036),
    [anon_sym_GT] = ACTIONS(1036),
    [anon_sym_GT_GT] = ACTIONS(1036),
    [anon_sym_AMP_GT] = ACTIONS(1036),
    [anon_sym_AMP_GT_GT] = ACTIONS(1036),
    [anon_sym_LT_AMP] = ACTIONS(1036),
    [anon_sym_GT_AMP] = ACTIONS(1036),
    [anon_sym_LT_LT] = ACTIONS(1038),
    [anon_sym_LT_LT_DASH] = ACTIONS(1038),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(259),
    [anon_sym_LF] = ACTIONS(259),
    [anon_sym_AMP] = ACTIONS(259),
  },
  [439] = {
    [sym_expansion] = STATE(48),
    [sym_operator_expansion] = STATE(48),
    [sym_command_substitution] = STATE(48),
    [aux_sym_quoted_argument_repeat1] = STATE(479),
    [anon_sym_DQUOTE] = ACTIONS(1486),
    [sym__quoted_chars] = ACTIONS(141),
    [anon_sym_DOLLAR] = ACTIONS(143),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(145),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(147),
    [sym_comment] = ACTIONS(135),
  },
  [440] = {
    [sym_file_redirect] = STATE(407),
    [sym_heredoc_redirect] = STATE(407),
    [aux_sym_command_repeat2] = STATE(481),
    [sym_file_descriptor] = ACTIONS(1019),
    [anon_sym_RPAREN] = ACTIONS(363),
    [anon_sym_SEMI_SEMI] = ACTIONS(363),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(1488),
    [anon_sym_PIPE] = ACTIONS(363),
    [anon_sym_PIPE_AMP] = ACTIONS(363),
    [anon_sym_AMP_AMP] = ACTIONS(363),
    [anon_sym_PIPE_PIPE] = ACTIONS(363),
    [anon_sym_EQ] = ACTIONS(367),
    [anon_sym_LT] = ACTIONS(1036),
    [anon_sym_GT] = ACTIONS(1036),
    [anon_sym_GT_GT] = ACTIONS(1036),
    [anon_sym_AMP_GT] = ACTIONS(1036),
    [anon_sym_AMP_GT_GT] = ACTIONS(1036),
    [anon_sym_LT_AMP] = ACTIONS(1036),
    [anon_sym_GT_AMP] = ACTIONS(1036),
    [anon_sym_LT_LT] = ACTIONS(1038),
    [anon_sym_LT_LT_DASH] = ACTIONS(1038),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(363),
    [anon_sym_LF] = ACTIONS(363),
    [anon_sym_AMP] = ACTIONS(363),
  },
  [441] = {
    [sym_file_descriptor] = ACTIONS(513),
    [anon_sym_RPAREN] = ACTIONS(515),
    [anon_sym_SEMI_SEMI] = ACTIONS(515),
    [anon_sym_PIPE] = ACTIONS(515),
    [anon_sym_PIPE_AMP] = ACTIONS(515),
    [anon_sym_AMP_AMP] = ACTIONS(515),
    [anon_sym_PIPE_PIPE] = ACTIONS(515),
    [anon_sym_LT] = ACTIONS(515),
    [anon_sym_GT] = ACTIONS(515),
    [anon_sym_GT_GT] = ACTIONS(515),
    [anon_sym_AMP_GT] = ACTIONS(515),
    [anon_sym_AMP_GT_GT] = ACTIONS(515),
    [anon_sym_LT_AMP] = ACTIONS(515),
    [anon_sym_GT_AMP] = ACTIONS(515),
    [anon_sym_LT_LT] = ACTIONS(515),
    [anon_sym_LT_LT_DASH] = ACTIONS(515),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(515),
    [anon_sym_LF] = ACTIONS(515),
    [anon_sym_AMP] = ACTIONS(515),
  },
  [442] = {
    [sym_file_descriptor] = ACTIONS(527),
    [anon_sym_in] = ACTIONS(529),
    [anon_sym_RPAREN] = ACTIONS(529),
    [anon_sym_SEMI_SEMI] = ACTIONS(529),
    [anon_sym_RBRACK] = ACTIONS(529),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(529),
    [anon_sym_COLON] = ACTIONS(529),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(529),
    [anon_sym_PIPE] = ACTIONS(529),
    [anon_sym_PIPE_AMP] = ACTIONS(529),
    [anon_sym_AMP_AMP] = ACTIONS(529),
    [anon_sym_PIPE_PIPE] = ACTIONS(529),
    [anon_sym_DQUOTE] = ACTIONS(529),
    [sym_single_quoted_argument] = ACTIONS(529),
    [anon_sym_DOLLAR] = ACTIONS(529),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(529),
    [anon_sym_RBRACE] = ACTIONS(529),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(529),
    [anon_sym_LT] = ACTIONS(529),
    [anon_sym_GT] = ACTIONS(529),
    [anon_sym_GT_GT] = ACTIONS(529),
    [anon_sym_AMP_GT] = ACTIONS(529),
    [anon_sym_AMP_GT_GT] = ACTIONS(529),
    [anon_sym_LT_AMP] = ACTIONS(529),
    [anon_sym_GT_AMP] = ACTIONS(529),
    [anon_sym_LT_LT] = ACTIONS(529),
    [anon_sym_LT_LT_DASH] = ACTIONS(529),
    [sym_leading_word] = ACTIONS(529),
    [sym_word] = ACTIONS(529),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(529),
    [anon_sym_LF] = ACTIONS(529),
    [anon_sym_AMP] = ACTIONS(529),
  },
  [443] = {
    [sym_file_descriptor] = ACTIONS(821),
    [anon_sym_RPAREN] = ACTIONS(823),
    [anon_sym_SEMI_SEMI] = ACTIONS(823),
    [anon_sym_PIPE] = ACTIONS(823),
    [anon_sym_PIPE_AMP] = ACTIONS(823),
    [anon_sym_AMP_AMP] = ACTIONS(823),
    [anon_sym_PIPE_PIPE] = ACTIONS(823),
    [anon_sym_LT] = ACTIONS(823),
    [anon_sym_GT] = ACTIONS(823),
    [anon_sym_GT_GT] = ACTIONS(823),
    [anon_sym_AMP_GT] = ACTIONS(823),
    [anon_sym_AMP_GT_GT] = ACTIONS(823),
    [anon_sym_LT_AMP] = ACTIONS(823),
    [anon_sym_GT_AMP] = ACTIONS(823),
    [anon_sym_LT_LT] = ACTIONS(823),
    [anon_sym_LT_LT_DASH] = ACTIONS(823),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(823),
    [anon_sym_LF] = ACTIONS(823),
    [anon_sym_AMP] = ACTIONS(823),
  },
  [444] = {
    [sym_quoted_argument] = STATE(482),
    [sym_expansion] = STATE(482),
    [sym_operator_expansion] = STATE(482),
    [sym_command_substitution] = STATE(482),
    [anon_sym_DQUOTE] = ACTIONS(1401),
    [sym_single_quoted_argument] = ACTIONS(1490),
    [anon_sym_DOLLAR] = ACTIONS(1405),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1407),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1409),
    [sym_word] = ACTIONS(1492),
    [sym_comment] = ACTIONS(67),
  },
  [445] = {
    [sym_expansion] = STATE(48),
    [sym_operator_expansion] = STATE(48),
    [sym_command_substitution] = STATE(48),
    [aux_sym_quoted_argument_repeat1] = STATE(485),
    [anon_sym_DQUOTE] = ACTIONS(1494),
    [sym__quoted_chars] = ACTIONS(141),
    [anon_sym_DOLLAR] = ACTIONS(143),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(145),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(147),
    [sym_comment] = ACTIONS(135),
  },
  [446] = {
    [sym_file_descriptor] = ACTIONS(233),
    [anon_sym_RPAREN] = ACTIONS(235),
    [anon_sym_SEMI_SEMI] = ACTIONS(235),
    [anon_sym_PIPE] = ACTIONS(235),
    [anon_sym_PIPE_AMP] = ACTIONS(235),
    [anon_sym_AMP_AMP] = ACTIONS(235),
    [anon_sym_PIPE_PIPE] = ACTIONS(235),
    [anon_sym_DQUOTE] = ACTIONS(235),
    [sym_single_quoted_argument] = ACTIONS(235),
    [anon_sym_DOLLAR] = ACTIONS(235),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(235),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(235),
    [anon_sym_LT] = ACTIONS(235),
    [anon_sym_GT] = ACTIONS(235),
    [anon_sym_GT_GT] = ACTIONS(235),
    [anon_sym_AMP_GT] = ACTIONS(235),
    [anon_sym_AMP_GT_GT] = ACTIONS(235),
    [anon_sym_LT_AMP] = ACTIONS(235),
    [anon_sym_GT_AMP] = ACTIONS(235),
    [anon_sym_LT_LT] = ACTIONS(235),
    [anon_sym_LT_LT_DASH] = ACTIONS(235),
    [sym_word] = ACTIONS(235),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(235),
    [anon_sym_LF] = ACTIONS(235),
    [anon_sym_AMP] = ACTIONS(235),
  },
  [447] = {
    [anon_sym_DOLLAR] = ACTIONS(1496),
    [sym_word] = ACTIONS(1498),
    [sym_comment] = ACTIONS(67),
  },
  [448] = {
    [sym_leading_word] = ACTIONS(1500),
    [sym_comment] = ACTIONS(67),
  },
  [449] = {
    [sym_command] = STATE(489),
    [sym_environment_variable_assignment] = STATE(17),
    [sym_quoted_argument] = STATE(82),
    [sym_file_redirect] = STATE(17),
    [aux_sym_command_repeat1] = STATE(86),
    [sym_file_descriptor] = ACTIONS(71),
    [anon_sym_COLON] = ACTIONS(217),
    [anon_sym_DQUOTE] = ACTIONS(219),
    [sym_single_quoted_argument] = ACTIONS(221),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_AMP_GT] = ACTIONS(93),
    [anon_sym_AMP_GT_GT] = ACTIONS(93),
    [anon_sym_LT_AMP] = ACTIONS(93),
    [anon_sym_GT_AMP] = ACTIONS(93),
    [sym_leading_word] = ACTIONS(223),
    [sym_comment] = ACTIONS(67),
  },
  [450] = {
    [sym_file_descriptor] = ACTIONS(245),
    [anon_sym_RPAREN] = ACTIONS(247),
    [anon_sym_SEMI_SEMI] = ACTIONS(247),
    [anon_sym_PIPE] = ACTIONS(247),
    [anon_sym_PIPE_AMP] = ACTIONS(247),
    [anon_sym_AMP_AMP] = ACTIONS(247),
    [anon_sym_PIPE_PIPE] = ACTIONS(247),
    [anon_sym_DQUOTE] = ACTIONS(247),
    [sym_single_quoted_argument] = ACTIONS(247),
    [anon_sym_DOLLAR] = ACTIONS(247),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(247),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(247),
    [anon_sym_LT] = ACTIONS(247),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_GT_GT] = ACTIONS(247),
    [anon_sym_AMP_GT] = ACTIONS(247),
    [anon_sym_AMP_GT_GT] = ACTIONS(247),
    [anon_sym_LT_AMP] = ACTIONS(247),
    [anon_sym_GT_AMP] = ACTIONS(247),
    [anon_sym_LT_LT] = ACTIONS(247),
    [anon_sym_LT_LT_DASH] = ACTIONS(247),
    [sym_word] = ACTIONS(247),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(247),
    [anon_sym_LF] = ACTIONS(247),
    [anon_sym_AMP] = ACTIONS(247),
  },
  [451] = {
    [sym_quoted_argument] = STATE(490),
    [sym_expansion] = STATE(490),
    [sym_operator_expansion] = STATE(490),
    [sym_command_substitution] = STATE(490),
    [sym_file_redirect] = STATE(407),
    [sym_heredoc_redirect] = STATE(407),
    [aux_sym_command_repeat2] = STATE(492),
    [sym_file_descriptor] = ACTIONS(1019),
    [anon_sym_RPAREN] = ACTIONS(1502),
    [anon_sym_SEMI_SEMI] = ACTIONS(1502),
    [anon_sym_PIPE] = ACTIONS(1502),
    [anon_sym_PIPE_AMP] = ACTIONS(1502),
    [anon_sym_AMP_AMP] = ACTIONS(1502),
    [anon_sym_PIPE_PIPE] = ACTIONS(1502),
    [anon_sym_DQUOTE] = ACTIONS(1387),
    [sym_single_quoted_argument] = ACTIONS(1505),
    [anon_sym_DOLLAR] = ACTIONS(1391),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1393),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1395),
    [anon_sym_LT] = ACTIONS(1036),
    [anon_sym_GT] = ACTIONS(1036),
    [anon_sym_GT_GT] = ACTIONS(1036),
    [anon_sym_AMP_GT] = ACTIONS(1036),
    [anon_sym_AMP_GT_GT] = ACTIONS(1036),
    [anon_sym_LT_AMP] = ACTIONS(1036),
    [anon_sym_GT_AMP] = ACTIONS(1036),
    [anon_sym_LT_LT] = ACTIONS(1038),
    [anon_sym_LT_LT_DASH] = ACTIONS(1038),
    [sym_word] = ACTIONS(1507),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(1502),
    [anon_sym_LF] = ACTIONS(1502),
    [anon_sym_AMP] = ACTIONS(1502),
  },
  [452] = {
    [sym_file_redirect] = STATE(441),
    [sym_heredoc_redirect] = STATE(441),
    [sym_file_descriptor] = ACTIONS(1019),
    [anon_sym_RPAREN] = ACTIONS(1502),
    [anon_sym_SEMI_SEMI] = ACTIONS(1502),
    [anon_sym_PIPE] = ACTIONS(1502),
    [anon_sym_PIPE_AMP] = ACTIONS(1502),
    [anon_sym_AMP_AMP] = ACTIONS(1502),
    [anon_sym_PIPE_PIPE] = ACTIONS(1502),
    [anon_sym_LT] = ACTIONS(1036),
    [anon_sym_GT] = ACTIONS(1036),
    [anon_sym_GT_GT] = ACTIONS(1036),
    [anon_sym_AMP_GT] = ACTIONS(1036),
    [anon_sym_AMP_GT_GT] = ACTIONS(1036),
    [anon_sym_LT_AMP] = ACTIONS(1036),
    [anon_sym_GT_AMP] = ACTIONS(1036),
    [anon_sym_LT_LT] = ACTIONS(1038),
    [anon_sym_LT_LT_DASH] = ACTIONS(1038),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(1502),
    [anon_sym_LF] = ACTIONS(1502),
    [anon_sym_AMP] = ACTIONS(1502),
  },
  [453] = {
    [sym_expansion] = STATE(48),
    [sym_operator_expansion] = STATE(48),
    [sym_command_substitution] = STATE(48),
    [aux_sym_quoted_argument_repeat1] = STATE(494),
    [anon_sym_DQUOTE] = ACTIONS(1509),
    [sym__quoted_chars] = ACTIONS(141),
    [anon_sym_DOLLAR] = ACTIONS(143),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(145),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(147),
    [sym_comment] = ACTIONS(135),
  },
  [454] = {
    [sym_file_descriptor] = ACTIONS(317),
    [anon_sym_RPAREN] = ACTIONS(321),
    [anon_sym_SEMI_SEMI] = ACTIONS(321),
    [anon_sym_PIPE] = ACTIONS(321),
    [anon_sym_PIPE_AMP] = ACTIONS(321),
    [anon_sym_AMP_AMP] = ACTIONS(321),
    [anon_sym_PIPE_PIPE] = ACTIONS(321),
    [anon_sym_LT] = ACTIONS(321),
    [anon_sym_GT] = ACTIONS(321),
    [anon_sym_GT_GT] = ACTIONS(321),
    [anon_sym_AMP_GT] = ACTIONS(321),
    [anon_sym_AMP_GT_GT] = ACTIONS(321),
    [anon_sym_LT_AMP] = ACTIONS(321),
    [anon_sym_GT_AMP] = ACTIONS(321),
    [anon_sym_LT_LT] = ACTIONS(321),
    [anon_sym_LT_LT_DASH] = ACTIONS(321),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(321),
    [anon_sym_LF] = ACTIONS(321),
    [anon_sym_AMP] = ACTIONS(321),
  },
  [455] = {
    [anon_sym_DOLLAR] = ACTIONS(1511),
    [sym_word] = ACTIONS(1513),
    [sym_comment] = ACTIONS(67),
  },
  [456] = {
    [sym_leading_word] = ACTIONS(1515),
    [sym_comment] = ACTIONS(67),
  },
  [457] = {
    [sym_command] = STATE(498),
    [sym_environment_variable_assignment] = STATE(17),
    [sym_quoted_argument] = STATE(82),
    [sym_file_redirect] = STATE(17),
    [aux_sym_command_repeat1] = STATE(86),
    [sym_file_descriptor] = ACTIONS(71),
    [anon_sym_COLON] = ACTIONS(217),
    [anon_sym_DQUOTE] = ACTIONS(219),
    [sym_single_quoted_argument] = ACTIONS(221),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_AMP_GT] = ACTIONS(93),
    [anon_sym_AMP_GT_GT] = ACTIONS(93),
    [anon_sym_LT_AMP] = ACTIONS(93),
    [anon_sym_GT_AMP] = ACTIONS(93),
    [sym_leading_word] = ACTIONS(223),
    [sym_comment] = ACTIONS(67),
  },
  [458] = {
    [sym_file_descriptor] = ACTIONS(329),
    [anon_sym_RPAREN] = ACTIONS(333),
    [anon_sym_SEMI_SEMI] = ACTIONS(333),
    [anon_sym_PIPE] = ACTIONS(333),
    [anon_sym_PIPE_AMP] = ACTIONS(333),
    [anon_sym_AMP_AMP] = ACTIONS(333),
    [anon_sym_PIPE_PIPE] = ACTIONS(333),
    [anon_sym_LT] = ACTIONS(333),
    [anon_sym_GT] = ACTIONS(333),
    [anon_sym_GT_GT] = ACTIONS(333),
    [anon_sym_AMP_GT] = ACTIONS(333),
    [anon_sym_AMP_GT_GT] = ACTIONS(333),
    [anon_sym_LT_AMP] = ACTIONS(333),
    [anon_sym_GT_AMP] = ACTIONS(333),
    [anon_sym_LT_LT] = ACTIONS(333),
    [anon_sym_LT_LT_DASH] = ACTIONS(333),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(333),
    [anon_sym_LF] = ACTIONS(333),
    [anon_sym_AMP] = ACTIONS(333),
  },
  [459] = {
    [sym__heredoc_middle] = ACTIONS(893),
    [sym__heredoc_end] = ACTIONS(893),
    [sym_file_descriptor] = ACTIONS(893),
    [anon_sym_in] = ACTIONS(863),
    [anon_sym_RPAREN] = ACTIONS(863),
    [anon_sym_SEMI_SEMI] = ACTIONS(863),
    [anon_sym_RBRACK] = ACTIONS(863),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(863),
    [anon_sym_COLON] = ACTIONS(863),
    [anon_sym_PIPE] = ACTIONS(863),
    [anon_sym_PIPE_AMP] = ACTIONS(863),
    [anon_sym_AMP_AMP] = ACTIONS(863),
    [anon_sym_PIPE_PIPE] = ACTIONS(863),
    [anon_sym_DQUOTE] = ACTIONS(863),
    [sym__quoted_chars] = ACTIONS(863),
    [sym_single_quoted_argument] = ACTIONS(863),
    [anon_sym_DOLLAR] = ACTIONS(863),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(863),
    [anon_sym_RBRACE] = ACTIONS(863),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(863),
    [anon_sym_LT] = ACTIONS(863),
    [anon_sym_GT] = ACTIONS(863),
    [anon_sym_GT_GT] = ACTIONS(863),
    [anon_sym_AMP_GT] = ACTIONS(863),
    [anon_sym_AMP_GT_GT] = ACTIONS(863),
    [anon_sym_LT_AMP] = ACTIONS(863),
    [anon_sym_GT_AMP] = ACTIONS(863),
    [anon_sym_LT_LT] = ACTIONS(863),
    [anon_sym_LT_LT_DASH] = ACTIONS(863),
    [sym_leading_word] = ACTIONS(863),
    [sym_word] = ACTIONS(863),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(863),
    [anon_sym_LF] = ACTIONS(863),
    [anon_sym_AMP] = ACTIONS(863),
  },
  [460] = {
    [sym_file_descriptor] = ACTIONS(297),
    [anon_sym_RPAREN] = ACTIONS(299),
    [anon_sym_SEMI_SEMI] = ACTIONS(299),
    [anon_sym_COLON] = ACTIONS(299),
    [anon_sym_PIPE] = ACTIONS(299),
    [anon_sym_PIPE_AMP] = ACTIONS(299),
    [anon_sym_AMP_AMP] = ACTIONS(299),
    [anon_sym_PIPE_PIPE] = ACTIONS(299),
    [anon_sym_DQUOTE] = ACTIONS(299),
    [sym_single_quoted_argument] = ACTIONS(299),
    [anon_sym_LT] = ACTIONS(299),
    [anon_sym_GT] = ACTIONS(299),
    [anon_sym_GT_GT] = ACTIONS(299),
    [anon_sym_AMP_GT] = ACTIONS(299),
    [anon_sym_AMP_GT_GT] = ACTIONS(299),
    [anon_sym_LT_AMP] = ACTIONS(299),
    [anon_sym_GT_AMP] = ACTIONS(299),
    [anon_sym_LT_LT] = ACTIONS(299),
    [anon_sym_LT_LT_DASH] = ACTIONS(299),
    [sym_leading_word] = ACTIONS(299),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(299),
    [anon_sym_LF] = ACTIONS(299),
    [anon_sym_AMP] = ACTIONS(299),
  },
  [461] = {
    [sym_expansion] = STATE(123),
    [sym_operator_expansion] = STATE(123),
    [sym_command_substitution] = STATE(123),
    [anon_sym_DQUOTE] = ACTIONS(1517),
    [sym__quoted_chars] = ACTIONS(313),
    [anon_sym_DOLLAR] = ACTIONS(143),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(145),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(147),
    [sym_comment] = ACTIONS(135),
  },
  [462] = {
    [sym_file_descriptor] = ACTIONS(441),
    [anon_sym_RPAREN] = ACTIONS(403),
    [anon_sym_SEMI_SEMI] = ACTIONS(403),
    [anon_sym_COLON] = ACTIONS(403),
    [anon_sym_PIPE] = ACTIONS(403),
    [anon_sym_PIPE_AMP] = ACTIONS(403),
    [anon_sym_AMP_AMP] = ACTIONS(403),
    [anon_sym_PIPE_PIPE] = ACTIONS(403),
    [anon_sym_DQUOTE] = ACTIONS(403),
    [sym_single_quoted_argument] = ACTIONS(403),
    [anon_sym_LT] = ACTIONS(403),
    [anon_sym_GT] = ACTIONS(403),
    [anon_sym_GT_GT] = ACTIONS(403),
    [anon_sym_AMP_GT] = ACTIONS(403),
    [anon_sym_AMP_GT_GT] = ACTIONS(403),
    [anon_sym_LT_AMP] = ACTIONS(403),
    [anon_sym_GT_AMP] = ACTIONS(403),
    [anon_sym_LT_LT] = ACTIONS(403),
    [anon_sym_LT_LT_DASH] = ACTIONS(403),
    [sym_leading_word] = ACTIONS(403),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(403),
    [anon_sym_LF] = ACTIONS(403),
    [anon_sym_AMP] = ACTIONS(403),
  },
  [463] = {
    [sym_file_descriptor] = ACTIONS(445),
    [anon_sym_RPAREN] = ACTIONS(405),
    [anon_sym_SEMI_SEMI] = ACTIONS(405),
    [anon_sym_COLON] = ACTIONS(405),
    [anon_sym_PIPE] = ACTIONS(405),
    [anon_sym_PIPE_AMP] = ACTIONS(405),
    [anon_sym_AMP_AMP] = ACTIONS(405),
    [anon_sym_PIPE_PIPE] = ACTIONS(405),
    [anon_sym_DQUOTE] = ACTIONS(405),
    [sym_single_quoted_argument] = ACTIONS(405),
    [anon_sym_LT] = ACTIONS(405),
    [anon_sym_GT] = ACTIONS(405),
    [anon_sym_GT_GT] = ACTIONS(405),
    [anon_sym_AMP_GT] = ACTIONS(405),
    [anon_sym_AMP_GT_GT] = ACTIONS(405),
    [anon_sym_LT_AMP] = ACTIONS(405),
    [anon_sym_GT_AMP] = ACTIONS(405),
    [anon_sym_LT_LT] = ACTIONS(405),
    [anon_sym_LT_LT_DASH] = ACTIONS(405),
    [sym_leading_word] = ACTIONS(405),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(405),
    [anon_sym_LF] = ACTIONS(405),
    [anon_sym_AMP] = ACTIONS(405),
  },
  [464] = {
    [anon_sym_COLON] = ACTIONS(1519),
    [anon_sym_EQ] = ACTIONS(1521),
    [anon_sym_COLON_QMARK] = ACTIONS(1521),
    [anon_sym_COLON_DASH] = ACTIONS(1521),
    [anon_sym_RBRACE] = ACTIONS(1523),
    [sym_comment] = ACTIONS(67),
  },
  [465] = {
    [anon_sym_RPAREN] = ACTIONS(1525),
    [sym_comment] = ACTIONS(67),
  },
  [466] = {
    [sym_case_item] = STATE(230),
    [sym_quoted_argument] = STATE(228),
    [sym_expansion] = STATE(228),
    [sym_operator_expansion] = STATE(228),
    [sym_command_substitution] = STATE(228),
    [aux_sym_case_statement_repeat1] = STATE(504),
    [anon_sym_esac] = ACTIONS(1527),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [sym_single_quoted_argument] = ACTIONS(593),
    [anon_sym_DOLLAR] = ACTIONS(117),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(119),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(121),
    [sym_word] = ACTIONS(595),
    [sym_comment] = ACTIONS(67),
  },
  [467] = {
    [sym_file_descriptor] = ACTIONS(375),
    [anon_sym_RPAREN] = ACTIONS(379),
    [anon_sym_SEMI_SEMI] = ACTIONS(379),
    [anon_sym_COLON] = ACTIONS(379),
    [anon_sym_PIPE] = ACTIONS(379),
    [anon_sym_PIPE_AMP] = ACTIONS(379),
    [anon_sym_AMP_AMP] = ACTIONS(379),
    [anon_sym_PIPE_PIPE] = ACTIONS(379),
    [anon_sym_DQUOTE] = ACTIONS(379),
    [sym_single_quoted_argument] = ACTIONS(379),
    [anon_sym_LT] = ACTIONS(379),
    [anon_sym_GT] = ACTIONS(379),
    [anon_sym_GT_GT] = ACTIONS(379),
    [anon_sym_AMP_GT] = ACTIONS(379),
    [anon_sym_AMP_GT_GT] = ACTIONS(379),
    [anon_sym_LT_AMP] = ACTIONS(379),
    [anon_sym_GT_AMP] = ACTIONS(379),
    [anon_sym_LT_LT] = ACTIONS(379),
    [anon_sym_LT_LT_DASH] = ACTIONS(379),
    [sym_leading_word] = ACTIONS(379),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(379),
    [anon_sym_LF] = ACTIONS(379),
    [anon_sym_AMP] = ACTIONS(379),
  },
  [468] = {
    [sym_file_descriptor] = ACTIONS(381),
    [anon_sym_RPAREN] = ACTIONS(385),
    [anon_sym_SEMI_SEMI] = ACTIONS(385),
    [anon_sym_COLON] = ACTIONS(385),
    [anon_sym_PIPE] = ACTIONS(385),
    [anon_sym_PIPE_AMP] = ACTIONS(385),
    [anon_sym_AMP_AMP] = ACTIONS(385),
    [anon_sym_PIPE_PIPE] = ACTIONS(385),
    [anon_sym_DQUOTE] = ACTIONS(385),
    [sym_single_quoted_argument] = ACTIONS(385),
    [anon_sym_LT] = ACTIONS(385),
    [anon_sym_GT] = ACTIONS(385),
    [anon_sym_GT_GT] = ACTIONS(385),
    [anon_sym_AMP_GT] = ACTIONS(385),
    [anon_sym_AMP_GT_GT] = ACTIONS(385),
    [anon_sym_LT_AMP] = ACTIONS(385),
    [anon_sym_GT_AMP] = ACTIONS(385),
    [anon_sym_LT_LT] = ACTIONS(385),
    [anon_sym_LT_LT_DASH] = ACTIONS(385),
    [sym_leading_word] = ACTIONS(385),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(385),
    [anon_sym_LF] = ACTIONS(385),
    [anon_sym_AMP] = ACTIONS(385),
  },
  [469] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1529),
    [anon_sym_PIPE] = ACTIONS(1529),
    [anon_sym_PIPE_AMP] = ACTIONS(1529),
    [anon_sym_AMP_AMP] = ACTIONS(1529),
    [anon_sym_PIPE_PIPE] = ACTIONS(1529),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(1529),
    [anon_sym_LF] = ACTIONS(1529),
    [anon_sym_AMP] = ACTIONS(1529),
  },
  [470] = {
    [sym_file_descriptor] = ACTIONS(297),
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
    [anon_sym_GT_GT] = ACTIONS(299),
    [anon_sym_AMP_GT] = ACTIONS(299),
    [anon_sym_AMP_GT_GT] = ACTIONS(299),
    [anon_sym_LT_AMP] = ACTIONS(299),
    [anon_sym_GT_AMP] = ACTIONS(299),
    [anon_sym_LT_LT] = ACTIONS(299),
    [anon_sym_LT_LT_DASH] = ACTIONS(299),
    [sym_word] = ACTIONS(299),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(299),
    [anon_sym_LF] = ACTIONS(299),
    [anon_sym_AMP] = ACTIONS(299),
  },
  [471] = {
    [sym_expansion] = STATE(123),
    [sym_operator_expansion] = STATE(123),
    [sym_command_substitution] = STATE(123),
    [anon_sym_DQUOTE] = ACTIONS(1532),
    [sym__quoted_chars] = ACTIONS(313),
    [anon_sym_DOLLAR] = ACTIONS(143),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(145),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(147),
    [sym_comment] = ACTIONS(135),
  },
  [472] = {
    [sym_file_descriptor] = ACTIONS(441),
    [anon_sym_RPAREN] = ACTIONS(403),
    [anon_sym_SEMI_SEMI] = ACTIONS(403),
    [anon_sym_RBRACK] = ACTIONS(403),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(403),
    [anon_sym_PIPE] = ACTIONS(403),
    [anon_sym_PIPE_AMP] = ACTIONS(403),
    [anon_sym_AMP_AMP] = ACTIONS(403),
    [anon_sym_PIPE_PIPE] = ACTIONS(403),
    [anon_sym_DQUOTE] = ACTIONS(403),
    [sym_single_quoted_argument] = ACTIONS(403),
    [anon_sym_DOLLAR] = ACTIONS(403),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(403),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(403),
    [anon_sym_LT] = ACTIONS(403),
    [anon_sym_GT] = ACTIONS(403),
    [anon_sym_GT_GT] = ACTIONS(403),
    [anon_sym_AMP_GT] = ACTIONS(403),
    [anon_sym_AMP_GT_GT] = ACTIONS(403),
    [anon_sym_LT_AMP] = ACTIONS(403),
    [anon_sym_GT_AMP] = ACTIONS(403),
    [anon_sym_LT_LT] = ACTIONS(403),
    [anon_sym_LT_LT_DASH] = ACTIONS(403),
    [sym_word] = ACTIONS(403),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(403),
    [anon_sym_LF] = ACTIONS(403),
    [anon_sym_AMP] = ACTIONS(403),
  },
  [473] = {
    [sym_file_descriptor] = ACTIONS(445),
    [anon_sym_RPAREN] = ACTIONS(405),
    [anon_sym_SEMI_SEMI] = ACTIONS(405),
    [anon_sym_RBRACK] = ACTIONS(405),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(405),
    [anon_sym_PIPE] = ACTIONS(405),
    [anon_sym_PIPE_AMP] = ACTIONS(405),
    [anon_sym_AMP_AMP] = ACTIONS(405),
    [anon_sym_PIPE_PIPE] = ACTIONS(405),
    [anon_sym_DQUOTE] = ACTIONS(405),
    [sym_single_quoted_argument] = ACTIONS(405),
    [anon_sym_DOLLAR] = ACTIONS(405),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(405),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(405),
    [anon_sym_LT] = ACTIONS(405),
    [anon_sym_GT] = ACTIONS(405),
    [anon_sym_GT_GT] = ACTIONS(405),
    [anon_sym_AMP_GT] = ACTIONS(405),
    [anon_sym_AMP_GT_GT] = ACTIONS(405),
    [anon_sym_LT_AMP] = ACTIONS(405),
    [anon_sym_GT_AMP] = ACTIONS(405),
    [anon_sym_LT_LT] = ACTIONS(405),
    [anon_sym_LT_LT_DASH] = ACTIONS(405),
    [sym_word] = ACTIONS(405),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(405),
    [anon_sym_LF] = ACTIONS(405),
    [anon_sym_AMP] = ACTIONS(405),
  },
  [474] = {
    [anon_sym_COLON] = ACTIONS(1534),
    [anon_sym_EQ] = ACTIONS(1536),
    [anon_sym_COLON_QMARK] = ACTIONS(1536),
    [anon_sym_COLON_DASH] = ACTIONS(1536),
    [anon_sym_RBRACE] = ACTIONS(1538),
    [sym_comment] = ACTIONS(67),
  },
  [475] = {
    [anon_sym_RPAREN] = ACTIONS(1540),
    [sym_comment] = ACTIONS(67),
  },
  [476] = {
    [sym_quoted_argument] = STATE(446),
    [sym_expansion] = STATE(446),
    [sym_operator_expansion] = STATE(446),
    [sym_command_substitution] = STATE(446),
    [sym_file_redirect] = STATE(407),
    [sym_heredoc_redirect] = STATE(407),
    [aux_sym_bracket_command_repeat1] = STATE(509),
    [aux_sym_command_repeat2] = STATE(510),
    [sym_file_descriptor] = ACTIONS(1019),
    [anon_sym_RPAREN] = ACTIONS(483),
    [anon_sym_SEMI_SEMI] = ACTIONS(483),
    [anon_sym_PIPE] = ACTIONS(483),
    [anon_sym_PIPE_AMP] = ACTIONS(483),
    [anon_sym_AMP_AMP] = ACTIONS(483),
    [anon_sym_PIPE_PIPE] = ACTIONS(483),
    [anon_sym_DQUOTE] = ACTIONS(1387),
    [sym_single_quoted_argument] = ACTIONS(1389),
    [anon_sym_DOLLAR] = ACTIONS(1391),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1393),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1395),
    [anon_sym_LT] = ACTIONS(1036),
    [anon_sym_GT] = ACTIONS(1036),
    [anon_sym_GT_GT] = ACTIONS(1036),
    [anon_sym_AMP_GT] = ACTIONS(1036),
    [anon_sym_AMP_GT_GT] = ACTIONS(1036),
    [anon_sym_LT_AMP] = ACTIONS(1036),
    [anon_sym_GT_AMP] = ACTIONS(1036),
    [anon_sym_LT_LT] = ACTIONS(1038),
    [anon_sym_LT_LT_DASH] = ACTIONS(1038),
    [sym_word] = ACTIONS(1397),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(483),
    [anon_sym_LF] = ACTIONS(483),
    [anon_sym_AMP] = ACTIONS(483),
  },
  [477] = {
    [sym_file_redirect] = STATE(441),
    [sym_heredoc_redirect] = STATE(441),
    [sym_file_descriptor] = ACTIONS(1019),
    [anon_sym_RPAREN] = ACTIONS(483),
    [anon_sym_SEMI_SEMI] = ACTIONS(483),
    [anon_sym_PIPE] = ACTIONS(483),
    [anon_sym_PIPE_AMP] = ACTIONS(483),
    [anon_sym_AMP_AMP] = ACTIONS(483),
    [anon_sym_PIPE_PIPE] = ACTIONS(483),
    [anon_sym_LT] = ACTIONS(1036),
    [anon_sym_GT] = ACTIONS(1036),
    [anon_sym_GT_GT] = ACTIONS(1036),
    [anon_sym_AMP_GT] = ACTIONS(1036),
    [anon_sym_AMP_GT_GT] = ACTIONS(1036),
    [anon_sym_LT_AMP] = ACTIONS(1036),
    [anon_sym_GT_AMP] = ACTIONS(1036),
    [anon_sym_LT_LT] = ACTIONS(1038),
    [anon_sym_LT_LT_DASH] = ACTIONS(1038),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(483),
    [anon_sym_LF] = ACTIONS(483),
    [anon_sym_AMP] = ACTIONS(483),
  },
  [478] = {
    [sym_file_descriptor] = ACTIONS(297),
    [anon_sym_RPAREN] = ACTIONS(299),
    [anon_sym_SEMI_SEMI] = ACTIONS(299),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(299),
    [anon_sym_PIPE] = ACTIONS(299),
    [anon_sym_PIPE_AMP] = ACTIONS(299),
    [anon_sym_AMP_AMP] = ACTIONS(299),
    [anon_sym_PIPE_PIPE] = ACTIONS(299),
    [anon_sym_LT] = ACTIONS(299),
    [anon_sym_GT] = ACTIONS(299),
    [anon_sym_GT_GT] = ACTIONS(299),
    [anon_sym_AMP_GT] = ACTIONS(299),
    [anon_sym_AMP_GT_GT] = ACTIONS(299),
    [anon_sym_LT_AMP] = ACTIONS(299),
    [anon_sym_GT_AMP] = ACTIONS(299),
    [anon_sym_LT_LT] = ACTIONS(299),
    [anon_sym_LT_LT_DASH] = ACTIONS(299),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(299),
    [anon_sym_LF] = ACTIONS(299),
    [anon_sym_AMP] = ACTIONS(299),
  },
  [479] = {
    [sym_expansion] = STATE(123),
    [sym_operator_expansion] = STATE(123),
    [sym_command_substitution] = STATE(123),
    [anon_sym_DQUOTE] = ACTIONS(1542),
    [sym__quoted_chars] = ACTIONS(313),
    [anon_sym_DOLLAR] = ACTIONS(143),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(145),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(147),
    [sym_comment] = ACTIONS(135),
  },
  [480] = {
    [sym_quoted_argument] = STATE(446),
    [sym_expansion] = STATE(446),
    [sym_operator_expansion] = STATE(446),
    [sym_command_substitution] = STATE(446),
    [sym_file_redirect] = STATE(407),
    [sym_heredoc_redirect] = STATE(407),
    [aux_sym_bracket_command_repeat1] = STATE(512),
    [aux_sym_command_repeat2] = STATE(513),
    [sym_file_descriptor] = ACTIONS(1019),
    [anon_sym_RPAREN] = ACTIONS(567),
    [anon_sym_SEMI_SEMI] = ACTIONS(567),
    [anon_sym_PIPE] = ACTIONS(567),
    [anon_sym_PIPE_AMP] = ACTIONS(567),
    [anon_sym_AMP_AMP] = ACTIONS(567),
    [anon_sym_PIPE_PIPE] = ACTIONS(567),
    [anon_sym_DQUOTE] = ACTIONS(1387),
    [sym_single_quoted_argument] = ACTIONS(1389),
    [anon_sym_DOLLAR] = ACTIONS(1391),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1393),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1395),
    [anon_sym_LT] = ACTIONS(1036),
    [anon_sym_GT] = ACTIONS(1036),
    [anon_sym_GT_GT] = ACTIONS(1036),
    [anon_sym_AMP_GT] = ACTIONS(1036),
    [anon_sym_AMP_GT_GT] = ACTIONS(1036),
    [anon_sym_LT_AMP] = ACTIONS(1036),
    [anon_sym_GT_AMP] = ACTIONS(1036),
    [anon_sym_LT_LT] = ACTIONS(1038),
    [anon_sym_LT_LT_DASH] = ACTIONS(1038),
    [sym_word] = ACTIONS(1397),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(567),
    [anon_sym_LF] = ACTIONS(567),
    [anon_sym_AMP] = ACTIONS(567),
  },
  [481] = {
    [sym_file_redirect] = STATE(441),
    [sym_heredoc_redirect] = STATE(441),
    [sym_file_descriptor] = ACTIONS(1019),
    [anon_sym_RPAREN] = ACTIONS(567),
    [anon_sym_SEMI_SEMI] = ACTIONS(567),
    [anon_sym_PIPE] = ACTIONS(567),
    [anon_sym_PIPE_AMP] = ACTIONS(567),
    [anon_sym_AMP_AMP] = ACTIONS(567),
    [anon_sym_PIPE_PIPE] = ACTIONS(567),
    [anon_sym_LT] = ACTIONS(1036),
    [anon_sym_GT] = ACTIONS(1036),
    [anon_sym_GT_GT] = ACTIONS(1036),
    [anon_sym_AMP_GT] = ACTIONS(1036),
    [anon_sym_AMP_GT_GT] = ACTIONS(1036),
    [anon_sym_LT_AMP] = ACTIONS(1036),
    [anon_sym_GT_AMP] = ACTIONS(1036),
    [anon_sym_LT_LT] = ACTIONS(1038),
    [anon_sym_LT_LT_DASH] = ACTIONS(1038),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(567),
    [anon_sym_LF] = ACTIONS(567),
    [anon_sym_AMP] = ACTIONS(567),
  },
  [482] = {
    [sym_file_descriptor] = ACTIONS(375),
    [anon_sym_RPAREN] = ACTIONS(379),
    [anon_sym_SEMI_SEMI] = ACTIONS(379),
    [anon_sym_PIPE] = ACTIONS(379),
    [anon_sym_PIPE_AMP] = ACTIONS(379),
    [anon_sym_AMP_AMP] = ACTIONS(379),
    [anon_sym_PIPE_PIPE] = ACTIONS(379),
    [anon_sym_LT] = ACTIONS(379),
    [anon_sym_GT] = ACTIONS(379),
    [anon_sym_GT_GT] = ACTIONS(379),
    [anon_sym_AMP_GT] = ACTIONS(379),
    [anon_sym_AMP_GT_GT] = ACTIONS(379),
    [anon_sym_LT_AMP] = ACTIONS(379),
    [anon_sym_GT_AMP] = ACTIONS(379),
    [anon_sym_LT_LT] = ACTIONS(379),
    [anon_sym_LT_LT_DASH] = ACTIONS(379),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(379),
    [anon_sym_LF] = ACTIONS(379),
    [anon_sym_AMP] = ACTIONS(379),
  },
  [483] = {
    [sym_file_descriptor] = ACTIONS(381),
    [anon_sym_RPAREN] = ACTIONS(385),
    [anon_sym_SEMI_SEMI] = ACTIONS(385),
    [anon_sym_PIPE] = ACTIONS(385),
    [anon_sym_PIPE_AMP] = ACTIONS(385),
    [anon_sym_AMP_AMP] = ACTIONS(385),
    [anon_sym_PIPE_PIPE] = ACTIONS(385),
    [anon_sym_LT] = ACTIONS(385),
    [anon_sym_GT] = ACTIONS(385),
    [anon_sym_GT_GT] = ACTIONS(385),
    [anon_sym_AMP_GT] = ACTIONS(385),
    [anon_sym_AMP_GT_GT] = ACTIONS(385),
    [anon_sym_LT_AMP] = ACTIONS(385),
    [anon_sym_GT_AMP] = ACTIONS(385),
    [anon_sym_LT_LT] = ACTIONS(385),
    [anon_sym_LT_LT_DASH] = ACTIONS(385),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(385),
    [anon_sym_LF] = ACTIONS(385),
    [anon_sym_AMP] = ACTIONS(385),
  },
  [484] = {
    [sym_file_descriptor] = ACTIONS(297),
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
    [anon_sym_GT_GT] = ACTIONS(299),
    [anon_sym_AMP_GT] = ACTIONS(299),
    [anon_sym_AMP_GT_GT] = ACTIONS(299),
    [anon_sym_LT_AMP] = ACTIONS(299),
    [anon_sym_GT_AMP] = ACTIONS(299),
    [anon_sym_LT_LT] = ACTIONS(299),
    [anon_sym_LT_LT_DASH] = ACTIONS(299),
    [sym_word] = ACTIONS(299),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(299),
    [anon_sym_LF] = ACTIONS(299),
    [anon_sym_AMP] = ACTIONS(299),
  },
  [485] = {
    [sym_expansion] = STATE(123),
    [sym_operator_expansion] = STATE(123),
    [sym_command_substitution] = STATE(123),
    [anon_sym_DQUOTE] = ACTIONS(1544),
    [sym__quoted_chars] = ACTIONS(313),
    [anon_sym_DOLLAR] = ACTIONS(143),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(145),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(147),
    [sym_comment] = ACTIONS(135),
  },
  [486] = {
    [sym_file_descriptor] = ACTIONS(441),
    [anon_sym_RPAREN] = ACTIONS(403),
    [anon_sym_SEMI_SEMI] = ACTIONS(403),
    [anon_sym_PIPE] = ACTIONS(403),
    [anon_sym_PIPE_AMP] = ACTIONS(403),
    [anon_sym_AMP_AMP] = ACTIONS(403),
    [anon_sym_PIPE_PIPE] = ACTIONS(403),
    [anon_sym_DQUOTE] = ACTIONS(403),
    [sym_single_quoted_argument] = ACTIONS(403),
    [anon_sym_DOLLAR] = ACTIONS(403),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(403),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(403),
    [anon_sym_LT] = ACTIONS(403),
    [anon_sym_GT] = ACTIONS(403),
    [anon_sym_GT_GT] = ACTIONS(403),
    [anon_sym_AMP_GT] = ACTIONS(403),
    [anon_sym_AMP_GT_GT] = ACTIONS(403),
    [anon_sym_LT_AMP] = ACTIONS(403),
    [anon_sym_GT_AMP] = ACTIONS(403),
    [anon_sym_LT_LT] = ACTIONS(403),
    [anon_sym_LT_LT_DASH] = ACTIONS(403),
    [sym_word] = ACTIONS(403),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(403),
    [anon_sym_LF] = ACTIONS(403),
    [anon_sym_AMP] = ACTIONS(403),
  },
  [487] = {
    [sym_file_descriptor] = ACTIONS(445),
    [anon_sym_RPAREN] = ACTIONS(405),
    [anon_sym_SEMI_SEMI] = ACTIONS(405),
    [anon_sym_PIPE] = ACTIONS(405),
    [anon_sym_PIPE_AMP] = ACTIONS(405),
    [anon_sym_AMP_AMP] = ACTIONS(405),
    [anon_sym_PIPE_PIPE] = ACTIONS(405),
    [anon_sym_DQUOTE] = ACTIONS(405),
    [sym_single_quoted_argument] = ACTIONS(405),
    [anon_sym_DOLLAR] = ACTIONS(405),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(405),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(405),
    [anon_sym_LT] = ACTIONS(405),
    [anon_sym_GT] = ACTIONS(405),
    [anon_sym_GT_GT] = ACTIONS(405),
    [anon_sym_AMP_GT] = ACTIONS(405),
    [anon_sym_AMP_GT_GT] = ACTIONS(405),
    [anon_sym_LT_AMP] = ACTIONS(405),
    [anon_sym_GT_AMP] = ACTIONS(405),
    [anon_sym_LT_LT] = ACTIONS(405),
    [anon_sym_LT_LT_DASH] = ACTIONS(405),
    [sym_word] = ACTIONS(405),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(405),
    [anon_sym_LF] = ACTIONS(405),
    [anon_sym_AMP] = ACTIONS(405),
  },
  [488] = {
    [anon_sym_COLON] = ACTIONS(1546),
    [anon_sym_EQ] = ACTIONS(1548),
    [anon_sym_COLON_QMARK] = ACTIONS(1548),
    [anon_sym_COLON_DASH] = ACTIONS(1548),
    [anon_sym_RBRACE] = ACTIONS(1550),
    [sym_comment] = ACTIONS(67),
  },
  [489] = {
    [anon_sym_RPAREN] = ACTIONS(1552),
    [sym_comment] = ACTIONS(67),
  },
  [490] = {
    [sym_file_descriptor] = ACTIONS(461),
    [anon_sym_RPAREN] = ACTIONS(463),
    [anon_sym_SEMI_SEMI] = ACTIONS(463),
    [anon_sym_PIPE] = ACTIONS(463),
    [anon_sym_PIPE_AMP] = ACTIONS(463),
    [anon_sym_AMP_AMP] = ACTIONS(463),
    [anon_sym_PIPE_PIPE] = ACTIONS(463),
    [anon_sym_DQUOTE] = ACTIONS(463),
    [sym_single_quoted_argument] = ACTIONS(463),
    [anon_sym_DOLLAR] = ACTIONS(463),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(463),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(463),
    [anon_sym_LT] = ACTIONS(463),
    [anon_sym_GT] = ACTIONS(463),
    [anon_sym_GT_GT] = ACTIONS(463),
    [anon_sym_AMP_GT] = ACTIONS(463),
    [anon_sym_AMP_GT_GT] = ACTIONS(463),
    [anon_sym_LT_AMP] = ACTIONS(463),
    [anon_sym_GT_AMP] = ACTIONS(463),
    [anon_sym_LT_LT] = ACTIONS(463),
    [anon_sym_LT_LT_DASH] = ACTIONS(463),
    [sym_word] = ACTIONS(463),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(463),
    [anon_sym_LF] = ACTIONS(463),
    [anon_sym_AMP] = ACTIONS(463),
  },
  [491] = {
    [sym_file_descriptor] = ACTIONS(467),
    [anon_sym_RPAREN] = ACTIONS(469),
    [anon_sym_SEMI_SEMI] = ACTIONS(469),
    [anon_sym_PIPE] = ACTIONS(469),
    [anon_sym_PIPE_AMP] = ACTIONS(469),
    [anon_sym_AMP_AMP] = ACTIONS(469),
    [anon_sym_PIPE_PIPE] = ACTIONS(469),
    [anon_sym_DQUOTE] = ACTIONS(469),
    [sym_single_quoted_argument] = ACTIONS(469),
    [anon_sym_DOLLAR] = ACTIONS(469),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(469),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(469),
    [anon_sym_LT] = ACTIONS(469),
    [anon_sym_GT] = ACTIONS(469),
    [anon_sym_GT_GT] = ACTIONS(469),
    [anon_sym_AMP_GT] = ACTIONS(469),
    [anon_sym_AMP_GT_GT] = ACTIONS(469),
    [anon_sym_LT_AMP] = ACTIONS(469),
    [anon_sym_GT_AMP] = ACTIONS(469),
    [anon_sym_LT_LT] = ACTIONS(469),
    [anon_sym_LT_LT_DASH] = ACTIONS(469),
    [sym_word] = ACTIONS(469),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(469),
    [anon_sym_LF] = ACTIONS(469),
    [anon_sym_AMP] = ACTIONS(469),
  },
  [492] = {
    [sym_file_redirect] = STATE(441),
    [sym_heredoc_redirect] = STATE(441),
    [sym_file_descriptor] = ACTIONS(1019),
    [anon_sym_RPAREN] = ACTIONS(1554),
    [anon_sym_SEMI_SEMI] = ACTIONS(1554),
    [anon_sym_PIPE] = ACTIONS(1554),
    [anon_sym_PIPE_AMP] = ACTIONS(1554),
    [anon_sym_AMP_AMP] = ACTIONS(1554),
    [anon_sym_PIPE_PIPE] = ACTIONS(1554),
    [anon_sym_LT] = ACTIONS(1036),
    [anon_sym_GT] = ACTIONS(1036),
    [anon_sym_GT_GT] = ACTIONS(1036),
    [anon_sym_AMP_GT] = ACTIONS(1036),
    [anon_sym_AMP_GT_GT] = ACTIONS(1036),
    [anon_sym_LT_AMP] = ACTIONS(1036),
    [anon_sym_GT_AMP] = ACTIONS(1036),
    [anon_sym_LT_LT] = ACTIONS(1038),
    [anon_sym_LT_LT_DASH] = ACTIONS(1038),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(1554),
    [anon_sym_LF] = ACTIONS(1554),
    [anon_sym_AMP] = ACTIONS(1554),
  },
  [493] = {
    [sym_file_descriptor] = ACTIONS(297),
    [anon_sym_RPAREN] = ACTIONS(299),
    [anon_sym_SEMI_SEMI] = ACTIONS(299),
    [anon_sym_PIPE] = ACTIONS(299),
    [anon_sym_PIPE_AMP] = ACTIONS(299),
    [anon_sym_AMP_AMP] = ACTIONS(299),
    [anon_sym_PIPE_PIPE] = ACTIONS(299),
    [anon_sym_LT] = ACTIONS(299),
    [anon_sym_GT] = ACTIONS(299),
    [anon_sym_GT_GT] = ACTIONS(299),
    [anon_sym_AMP_GT] = ACTIONS(299),
    [anon_sym_AMP_GT_GT] = ACTIONS(299),
    [anon_sym_LT_AMP] = ACTIONS(299),
    [anon_sym_GT_AMP] = ACTIONS(299),
    [anon_sym_LT_LT] = ACTIONS(299),
    [anon_sym_LT_LT_DASH] = ACTIONS(299),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(299),
    [anon_sym_LF] = ACTIONS(299),
    [anon_sym_AMP] = ACTIONS(299),
  },
  [494] = {
    [sym_expansion] = STATE(123),
    [sym_operator_expansion] = STATE(123),
    [sym_command_substitution] = STATE(123),
    [anon_sym_DQUOTE] = ACTIONS(1557),
    [sym__quoted_chars] = ACTIONS(313),
    [anon_sym_DOLLAR] = ACTIONS(143),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(145),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(147),
    [sym_comment] = ACTIONS(135),
  },
  [495] = {
    [sym_file_descriptor] = ACTIONS(441),
    [anon_sym_RPAREN] = ACTIONS(403),
    [anon_sym_SEMI_SEMI] = ACTIONS(403),
    [anon_sym_PIPE] = ACTIONS(403),
    [anon_sym_PIPE_AMP] = ACTIONS(403),
    [anon_sym_AMP_AMP] = ACTIONS(403),
    [anon_sym_PIPE_PIPE] = ACTIONS(403),
    [anon_sym_LT] = ACTIONS(403),
    [anon_sym_GT] = ACTIONS(403),
    [anon_sym_GT_GT] = ACTIONS(403),
    [anon_sym_AMP_GT] = ACTIONS(403),
    [anon_sym_AMP_GT_GT] = ACTIONS(403),
    [anon_sym_LT_AMP] = ACTIONS(403),
    [anon_sym_GT_AMP] = ACTIONS(403),
    [anon_sym_LT_LT] = ACTIONS(403),
    [anon_sym_LT_LT_DASH] = ACTIONS(403),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(403),
    [anon_sym_LF] = ACTIONS(403),
    [anon_sym_AMP] = ACTIONS(403),
  },
  [496] = {
    [sym_file_descriptor] = ACTIONS(445),
    [anon_sym_RPAREN] = ACTIONS(405),
    [anon_sym_SEMI_SEMI] = ACTIONS(405),
    [anon_sym_PIPE] = ACTIONS(405),
    [anon_sym_PIPE_AMP] = ACTIONS(405),
    [anon_sym_AMP_AMP] = ACTIONS(405),
    [anon_sym_PIPE_PIPE] = ACTIONS(405),
    [anon_sym_LT] = ACTIONS(405),
    [anon_sym_GT] = ACTIONS(405),
    [anon_sym_GT_GT] = ACTIONS(405),
    [anon_sym_AMP_GT] = ACTIONS(405),
    [anon_sym_AMP_GT_GT] = ACTIONS(405),
    [anon_sym_LT_AMP] = ACTIONS(405),
    [anon_sym_GT_AMP] = ACTIONS(405),
    [anon_sym_LT_LT] = ACTIONS(405),
    [anon_sym_LT_LT_DASH] = ACTIONS(405),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(405),
    [anon_sym_LF] = ACTIONS(405),
    [anon_sym_AMP] = ACTIONS(405),
  },
  [497] = {
    [anon_sym_COLON] = ACTIONS(1559),
    [anon_sym_EQ] = ACTIONS(1561),
    [anon_sym_COLON_QMARK] = ACTIONS(1561),
    [anon_sym_COLON_DASH] = ACTIONS(1561),
    [anon_sym_RBRACE] = ACTIONS(1563),
    [sym_comment] = ACTIONS(67),
  },
  [498] = {
    [anon_sym_RPAREN] = ACTIONS(1565),
    [sym_comment] = ACTIONS(67),
  },
  [499] = {
    [sym_file_descriptor] = ACTIONS(527),
    [anon_sym_RPAREN] = ACTIONS(529),
    [anon_sym_SEMI_SEMI] = ACTIONS(529),
    [anon_sym_COLON] = ACTIONS(529),
    [anon_sym_PIPE] = ACTIONS(529),
    [anon_sym_PIPE_AMP] = ACTIONS(529),
    [anon_sym_AMP_AMP] = ACTIONS(529),
    [anon_sym_PIPE_PIPE] = ACTIONS(529),
    [anon_sym_DQUOTE] = ACTIONS(529),
    [sym_single_quoted_argument] = ACTIONS(529),
    [anon_sym_LT] = ACTIONS(529),
    [anon_sym_GT] = ACTIONS(529),
    [anon_sym_GT_GT] = ACTIONS(529),
    [anon_sym_AMP_GT] = ACTIONS(529),
    [anon_sym_AMP_GT_GT] = ACTIONS(529),
    [anon_sym_LT_AMP] = ACTIONS(529),
    [anon_sym_GT_AMP] = ACTIONS(529),
    [anon_sym_LT_LT] = ACTIONS(529),
    [anon_sym_LT_LT_DASH] = ACTIONS(529),
    [sym_leading_word] = ACTIONS(529),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(529),
    [anon_sym_LF] = ACTIONS(529),
    [anon_sym_AMP] = ACTIONS(529),
  },
  [500] = {
    [sym_quoted_argument] = STATE(522),
    [sym_expansion] = STATE(522),
    [sym_operator_expansion] = STATE(522),
    [sym_command_substitution] = STATE(522),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [sym_single_quoted_argument] = ACTIONS(1567),
    [anon_sym_DOLLAR] = ACTIONS(117),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(119),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(121),
    [sym_word] = ACTIONS(1569),
    [sym_comment] = ACTIONS(67),
  },
  [501] = {
    [sym_file_descriptor] = ACTIONS(661),
    [anon_sym_RPAREN] = ACTIONS(603),
    [anon_sym_SEMI_SEMI] = ACTIONS(603),
    [anon_sym_COLON] = ACTIONS(603),
    [anon_sym_PIPE] = ACTIONS(603),
    [anon_sym_PIPE_AMP] = ACTIONS(603),
    [anon_sym_AMP_AMP] = ACTIONS(603),
    [anon_sym_PIPE_PIPE] = ACTIONS(603),
    [anon_sym_DQUOTE] = ACTIONS(603),
    [sym_single_quoted_argument] = ACTIONS(603),
    [anon_sym_LT] = ACTIONS(603),
    [anon_sym_GT] = ACTIONS(603),
    [anon_sym_GT_GT] = ACTIONS(603),
    [anon_sym_AMP_GT] = ACTIONS(603),
    [anon_sym_AMP_GT_GT] = ACTIONS(603),
    [anon_sym_LT_AMP] = ACTIONS(603),
    [anon_sym_GT_AMP] = ACTIONS(603),
    [anon_sym_LT_LT] = ACTIONS(603),
    [anon_sym_LT_LT_DASH] = ACTIONS(603),
    [sym_leading_word] = ACTIONS(603),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(603),
    [anon_sym_LF] = ACTIONS(603),
    [anon_sym_AMP] = ACTIONS(603),
  },
  [502] = {
    [sym_file_descriptor] = ACTIONS(665),
    [anon_sym_RPAREN] = ACTIONS(645),
    [anon_sym_SEMI_SEMI] = ACTIONS(645),
    [anon_sym_COLON] = ACTIONS(645),
    [anon_sym_PIPE] = ACTIONS(645),
    [anon_sym_PIPE_AMP] = ACTIONS(645),
    [anon_sym_AMP_AMP] = ACTIONS(645),
    [anon_sym_PIPE_PIPE] = ACTIONS(645),
    [anon_sym_DQUOTE] = ACTIONS(645),
    [sym_single_quoted_argument] = ACTIONS(645),
    [anon_sym_LT] = ACTIONS(645),
    [anon_sym_GT] = ACTIONS(645),
    [anon_sym_GT_GT] = ACTIONS(645),
    [anon_sym_AMP_GT] = ACTIONS(645),
    [anon_sym_AMP_GT_GT] = ACTIONS(645),
    [anon_sym_LT_AMP] = ACTIONS(645),
    [anon_sym_GT_AMP] = ACTIONS(645),
    [anon_sym_LT_LT] = ACTIONS(645),
    [anon_sym_LT_LT_DASH] = ACTIONS(645),
    [sym_leading_word] = ACTIONS(645),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(645),
    [anon_sym_LF] = ACTIONS(645),
    [anon_sym_AMP] = ACTIONS(645),
  },
  [503] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1571),
    [anon_sym_PIPE] = ACTIONS(1571),
    [anon_sym_PIPE_AMP] = ACTIONS(1571),
    [anon_sym_AMP_AMP] = ACTIONS(1571),
    [anon_sym_PIPE_PIPE] = ACTIONS(1571),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(1571),
    [anon_sym_LF] = ACTIONS(1571),
    [anon_sym_AMP] = ACTIONS(1571),
  },
  [504] = {
    [sym_case_item] = STATE(290),
    [sym_quoted_argument] = STATE(228),
    [sym_expansion] = STATE(228),
    [sym_operator_expansion] = STATE(228),
    [sym_command_substitution] = STATE(228),
    [anon_sym_esac] = ACTIONS(1574),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [sym_single_quoted_argument] = ACTIONS(593),
    [anon_sym_DOLLAR] = ACTIONS(117),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(119),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(121),
    [sym_word] = ACTIONS(595),
    [sym_comment] = ACTIONS(67),
  },
  [505] = {
    [sym_file_descriptor] = ACTIONS(527),
    [anon_sym_RPAREN] = ACTIONS(529),
    [anon_sym_SEMI_SEMI] = ACTIONS(529),
    [anon_sym_RBRACK] = ACTIONS(529),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(529),
    [anon_sym_PIPE] = ACTIONS(529),
    [anon_sym_PIPE_AMP] = ACTIONS(529),
    [anon_sym_AMP_AMP] = ACTIONS(529),
    [anon_sym_PIPE_PIPE] = ACTIONS(529),
    [anon_sym_DQUOTE] = ACTIONS(529),
    [sym_single_quoted_argument] = ACTIONS(529),
    [anon_sym_DOLLAR] = ACTIONS(529),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(529),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(529),
    [anon_sym_LT] = ACTIONS(529),
    [anon_sym_GT] = ACTIONS(529),
    [anon_sym_GT_GT] = ACTIONS(529),
    [anon_sym_AMP_GT] = ACTIONS(529),
    [anon_sym_AMP_GT_GT] = ACTIONS(529),
    [anon_sym_LT_AMP] = ACTIONS(529),
    [anon_sym_GT_AMP] = ACTIONS(529),
    [anon_sym_LT_LT] = ACTIONS(529),
    [anon_sym_LT_LT_DASH] = ACTIONS(529),
    [sym_word] = ACTIONS(529),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(529),
    [anon_sym_LF] = ACTIONS(529),
    [anon_sym_AMP] = ACTIONS(529),
  },
  [506] = {
    [sym_quoted_argument] = STATE(525),
    [sym_expansion] = STATE(525),
    [sym_operator_expansion] = STATE(525),
    [sym_command_substitution] = STATE(525),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [sym_single_quoted_argument] = ACTIONS(1576),
    [anon_sym_DOLLAR] = ACTIONS(117),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(119),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(121),
    [sym_word] = ACTIONS(1578),
    [sym_comment] = ACTIONS(67),
  },
  [507] = {
    [sym_file_descriptor] = ACTIONS(661),
    [anon_sym_RPAREN] = ACTIONS(603),
    [anon_sym_SEMI_SEMI] = ACTIONS(603),
    [anon_sym_RBRACK] = ACTIONS(603),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(603),
    [anon_sym_PIPE] = ACTIONS(603),
    [anon_sym_PIPE_AMP] = ACTIONS(603),
    [anon_sym_AMP_AMP] = ACTIONS(603),
    [anon_sym_PIPE_PIPE] = ACTIONS(603),
    [anon_sym_DQUOTE] = ACTIONS(603),
    [sym_single_quoted_argument] = ACTIONS(603),
    [anon_sym_DOLLAR] = ACTIONS(603),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(603),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(603),
    [anon_sym_LT] = ACTIONS(603),
    [anon_sym_GT] = ACTIONS(603),
    [anon_sym_GT_GT] = ACTIONS(603),
    [anon_sym_AMP_GT] = ACTIONS(603),
    [anon_sym_AMP_GT_GT] = ACTIONS(603),
    [anon_sym_LT_AMP] = ACTIONS(603),
    [anon_sym_GT_AMP] = ACTIONS(603),
    [anon_sym_LT_LT] = ACTIONS(603),
    [anon_sym_LT_LT_DASH] = ACTIONS(603),
    [sym_word] = ACTIONS(603),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(603),
    [anon_sym_LF] = ACTIONS(603),
    [anon_sym_AMP] = ACTIONS(603),
  },
  [508] = {
    [sym_file_descriptor] = ACTIONS(665),
    [anon_sym_RPAREN] = ACTIONS(645),
    [anon_sym_SEMI_SEMI] = ACTIONS(645),
    [anon_sym_RBRACK] = ACTIONS(645),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(645),
    [anon_sym_PIPE] = ACTIONS(645),
    [anon_sym_PIPE_AMP] = ACTIONS(645),
    [anon_sym_AMP_AMP] = ACTIONS(645),
    [anon_sym_PIPE_PIPE] = ACTIONS(645),
    [anon_sym_DQUOTE] = ACTIONS(645),
    [sym_single_quoted_argument] = ACTIONS(645),
    [anon_sym_DOLLAR] = ACTIONS(645),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(645),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(645),
    [anon_sym_LT] = ACTIONS(645),
    [anon_sym_GT] = ACTIONS(645),
    [anon_sym_GT_GT] = ACTIONS(645),
    [anon_sym_AMP_GT] = ACTIONS(645),
    [anon_sym_AMP_GT_GT] = ACTIONS(645),
    [anon_sym_LT_AMP] = ACTIONS(645),
    [anon_sym_GT_AMP] = ACTIONS(645),
    [anon_sym_LT_LT] = ACTIONS(645),
    [anon_sym_LT_LT_DASH] = ACTIONS(645),
    [sym_word] = ACTIONS(645),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(645),
    [anon_sym_LF] = ACTIONS(645),
    [anon_sym_AMP] = ACTIONS(645),
  },
  [509] = {
    [sym_quoted_argument] = STATE(490),
    [sym_expansion] = STATE(490),
    [sym_operator_expansion] = STATE(490),
    [sym_command_substitution] = STATE(490),
    [sym_file_redirect] = STATE(407),
    [sym_heredoc_redirect] = STATE(407),
    [aux_sym_command_repeat2] = STATE(527),
    [sym_file_descriptor] = ACTIONS(1019),
    [anon_sym_RPAREN] = ACTIONS(679),
    [anon_sym_SEMI_SEMI] = ACTIONS(679),
    [anon_sym_PIPE] = ACTIONS(679),
    [anon_sym_PIPE_AMP] = ACTIONS(679),
    [anon_sym_AMP_AMP] = ACTIONS(679),
    [anon_sym_PIPE_PIPE] = ACTIONS(679),
    [anon_sym_DQUOTE] = ACTIONS(1387),
    [sym_single_quoted_argument] = ACTIONS(1505),
    [anon_sym_DOLLAR] = ACTIONS(1391),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1393),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1395),
    [anon_sym_LT] = ACTIONS(1036),
    [anon_sym_GT] = ACTIONS(1036),
    [anon_sym_GT_GT] = ACTIONS(1036),
    [anon_sym_AMP_GT] = ACTIONS(1036),
    [anon_sym_AMP_GT_GT] = ACTIONS(1036),
    [anon_sym_LT_AMP] = ACTIONS(1036),
    [anon_sym_GT_AMP] = ACTIONS(1036),
    [anon_sym_LT_LT] = ACTIONS(1038),
    [anon_sym_LT_LT_DASH] = ACTIONS(1038),
    [sym_word] = ACTIONS(1507),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(679),
    [anon_sym_LF] = ACTIONS(679),
    [anon_sym_AMP] = ACTIONS(679),
  },
  [510] = {
    [sym_file_redirect] = STATE(441),
    [sym_heredoc_redirect] = STATE(441),
    [sym_file_descriptor] = ACTIONS(1019),
    [anon_sym_RPAREN] = ACTIONS(679),
    [anon_sym_SEMI_SEMI] = ACTIONS(679),
    [anon_sym_PIPE] = ACTIONS(679),
    [anon_sym_PIPE_AMP] = ACTIONS(679),
    [anon_sym_AMP_AMP] = ACTIONS(679),
    [anon_sym_PIPE_PIPE] = ACTIONS(679),
    [anon_sym_LT] = ACTIONS(1036),
    [anon_sym_GT] = ACTIONS(1036),
    [anon_sym_GT_GT] = ACTIONS(1036),
    [anon_sym_AMP_GT] = ACTIONS(1036),
    [anon_sym_AMP_GT_GT] = ACTIONS(1036),
    [anon_sym_LT_AMP] = ACTIONS(1036),
    [anon_sym_GT_AMP] = ACTIONS(1036),
    [anon_sym_LT_LT] = ACTIONS(1038),
    [anon_sym_LT_LT_DASH] = ACTIONS(1038),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(679),
    [anon_sym_LF] = ACTIONS(679),
    [anon_sym_AMP] = ACTIONS(679),
  },
  [511] = {
    [sym_file_descriptor] = ACTIONS(527),
    [anon_sym_RPAREN] = ACTIONS(529),
    [anon_sym_SEMI_SEMI] = ACTIONS(529),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(529),
    [anon_sym_PIPE] = ACTIONS(529),
    [anon_sym_PIPE_AMP] = ACTIONS(529),
    [anon_sym_AMP_AMP] = ACTIONS(529),
    [anon_sym_PIPE_PIPE] = ACTIONS(529),
    [anon_sym_LT] = ACTIONS(529),
    [anon_sym_GT] = ACTIONS(529),
    [anon_sym_GT_GT] = ACTIONS(529),
    [anon_sym_AMP_GT] = ACTIONS(529),
    [anon_sym_AMP_GT_GT] = ACTIONS(529),
    [anon_sym_LT_AMP] = ACTIONS(529),
    [anon_sym_GT_AMP] = ACTIONS(529),
    [anon_sym_LT_LT] = ACTIONS(529),
    [anon_sym_LT_LT_DASH] = ACTIONS(529),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(529),
    [anon_sym_LF] = ACTIONS(529),
    [anon_sym_AMP] = ACTIONS(529),
  },
  [512] = {
    [sym_quoted_argument] = STATE(490),
    [sym_expansion] = STATE(490),
    [sym_operator_expansion] = STATE(490),
    [sym_command_substitution] = STATE(490),
    [sym_file_redirect] = STATE(407),
    [sym_heredoc_redirect] = STATE(407),
    [aux_sym_command_repeat2] = STATE(528),
    [sym_file_descriptor] = ACTIONS(1019),
    [anon_sym_RPAREN] = ACTIONS(729),
    [anon_sym_SEMI_SEMI] = ACTIONS(729),
    [anon_sym_PIPE] = ACTIONS(729),
    [anon_sym_PIPE_AMP] = ACTIONS(729),
    [anon_sym_AMP_AMP] = ACTIONS(729),
    [anon_sym_PIPE_PIPE] = ACTIONS(729),
    [anon_sym_DQUOTE] = ACTIONS(1387),
    [sym_single_quoted_argument] = ACTIONS(1505),
    [anon_sym_DOLLAR] = ACTIONS(1391),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1393),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1395),
    [anon_sym_LT] = ACTIONS(1036),
    [anon_sym_GT] = ACTIONS(1036),
    [anon_sym_GT_GT] = ACTIONS(1036),
    [anon_sym_AMP_GT] = ACTIONS(1036),
    [anon_sym_AMP_GT_GT] = ACTIONS(1036),
    [anon_sym_LT_AMP] = ACTIONS(1036),
    [anon_sym_GT_AMP] = ACTIONS(1036),
    [anon_sym_LT_LT] = ACTIONS(1038),
    [anon_sym_LT_LT_DASH] = ACTIONS(1038),
    [sym_word] = ACTIONS(1507),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(729),
    [anon_sym_LF] = ACTIONS(729),
    [anon_sym_AMP] = ACTIONS(729),
  },
  [513] = {
    [sym_file_redirect] = STATE(441),
    [sym_heredoc_redirect] = STATE(441),
    [sym_file_descriptor] = ACTIONS(1019),
    [anon_sym_RPAREN] = ACTIONS(729),
    [anon_sym_SEMI_SEMI] = ACTIONS(729),
    [anon_sym_PIPE] = ACTIONS(729),
    [anon_sym_PIPE_AMP] = ACTIONS(729),
    [anon_sym_AMP_AMP] = ACTIONS(729),
    [anon_sym_PIPE_PIPE] = ACTIONS(729),
    [anon_sym_LT] = ACTIONS(1036),
    [anon_sym_GT] = ACTIONS(1036),
    [anon_sym_GT_GT] = ACTIONS(1036),
    [anon_sym_AMP_GT] = ACTIONS(1036),
    [anon_sym_AMP_GT_GT] = ACTIONS(1036),
    [anon_sym_LT_AMP] = ACTIONS(1036),
    [anon_sym_GT_AMP] = ACTIONS(1036),
    [anon_sym_LT_LT] = ACTIONS(1038),
    [anon_sym_LT_LT_DASH] = ACTIONS(1038),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(729),
    [anon_sym_LF] = ACTIONS(729),
    [anon_sym_AMP] = ACTIONS(729),
  },
  [514] = {
    [sym_file_descriptor] = ACTIONS(527),
    [anon_sym_RPAREN] = ACTIONS(529),
    [anon_sym_SEMI_SEMI] = ACTIONS(529),
    [anon_sym_PIPE] = ACTIONS(529),
    [anon_sym_PIPE_AMP] = ACTIONS(529),
    [anon_sym_AMP_AMP] = ACTIONS(529),
    [anon_sym_PIPE_PIPE] = ACTIONS(529),
    [anon_sym_DQUOTE] = ACTIONS(529),
    [sym_single_quoted_argument] = ACTIONS(529),
    [anon_sym_DOLLAR] = ACTIONS(529),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(529),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(529),
    [anon_sym_LT] = ACTIONS(529),
    [anon_sym_GT] = ACTIONS(529),
    [anon_sym_GT_GT] = ACTIONS(529),
    [anon_sym_AMP_GT] = ACTIONS(529),
    [anon_sym_AMP_GT_GT] = ACTIONS(529),
    [anon_sym_LT_AMP] = ACTIONS(529),
    [anon_sym_GT_AMP] = ACTIONS(529),
    [anon_sym_LT_LT] = ACTIONS(529),
    [anon_sym_LT_LT_DASH] = ACTIONS(529),
    [sym_word] = ACTIONS(529),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(529),
    [anon_sym_LF] = ACTIONS(529),
    [anon_sym_AMP] = ACTIONS(529),
  },
  [515] = {
    [sym_quoted_argument] = STATE(529),
    [sym_expansion] = STATE(529),
    [sym_operator_expansion] = STATE(529),
    [sym_command_substitution] = STATE(529),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [sym_single_quoted_argument] = ACTIONS(1580),
    [anon_sym_DOLLAR] = ACTIONS(117),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(119),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(121),
    [sym_word] = ACTIONS(1582),
    [sym_comment] = ACTIONS(67),
  },
  [516] = {
    [sym_file_descriptor] = ACTIONS(661),
    [anon_sym_RPAREN] = ACTIONS(603),
    [anon_sym_SEMI_SEMI] = ACTIONS(603),
    [anon_sym_PIPE] = ACTIONS(603),
    [anon_sym_PIPE_AMP] = ACTIONS(603),
    [anon_sym_AMP_AMP] = ACTIONS(603),
    [anon_sym_PIPE_PIPE] = ACTIONS(603),
    [anon_sym_DQUOTE] = ACTIONS(603),
    [sym_single_quoted_argument] = ACTIONS(603),
    [anon_sym_DOLLAR] = ACTIONS(603),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(603),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(603),
    [anon_sym_LT] = ACTIONS(603),
    [anon_sym_GT] = ACTIONS(603),
    [anon_sym_GT_GT] = ACTIONS(603),
    [anon_sym_AMP_GT] = ACTIONS(603),
    [anon_sym_AMP_GT_GT] = ACTIONS(603),
    [anon_sym_LT_AMP] = ACTIONS(603),
    [anon_sym_GT_AMP] = ACTIONS(603),
    [anon_sym_LT_LT] = ACTIONS(603),
    [anon_sym_LT_LT_DASH] = ACTIONS(603),
    [sym_word] = ACTIONS(603),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(603),
    [anon_sym_LF] = ACTIONS(603),
    [anon_sym_AMP] = ACTIONS(603),
  },
  [517] = {
    [sym_file_descriptor] = ACTIONS(665),
    [anon_sym_RPAREN] = ACTIONS(645),
    [anon_sym_SEMI_SEMI] = ACTIONS(645),
    [anon_sym_PIPE] = ACTIONS(645),
    [anon_sym_PIPE_AMP] = ACTIONS(645),
    [anon_sym_AMP_AMP] = ACTIONS(645),
    [anon_sym_PIPE_PIPE] = ACTIONS(645),
    [anon_sym_DQUOTE] = ACTIONS(645),
    [sym_single_quoted_argument] = ACTIONS(645),
    [anon_sym_DOLLAR] = ACTIONS(645),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(645),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(645),
    [anon_sym_LT] = ACTIONS(645),
    [anon_sym_GT] = ACTIONS(645),
    [anon_sym_GT_GT] = ACTIONS(645),
    [anon_sym_AMP_GT] = ACTIONS(645),
    [anon_sym_AMP_GT_GT] = ACTIONS(645),
    [anon_sym_LT_AMP] = ACTIONS(645),
    [anon_sym_GT_AMP] = ACTIONS(645),
    [anon_sym_LT_LT] = ACTIONS(645),
    [anon_sym_LT_LT_DASH] = ACTIONS(645),
    [sym_word] = ACTIONS(645),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(645),
    [anon_sym_LF] = ACTIONS(645),
    [anon_sym_AMP] = ACTIONS(645),
  },
  [518] = {
    [sym_file_descriptor] = ACTIONS(527),
    [anon_sym_RPAREN] = ACTIONS(529),
    [anon_sym_SEMI_SEMI] = ACTIONS(529),
    [anon_sym_PIPE] = ACTIONS(529),
    [anon_sym_PIPE_AMP] = ACTIONS(529),
    [anon_sym_AMP_AMP] = ACTIONS(529),
    [anon_sym_PIPE_PIPE] = ACTIONS(529),
    [anon_sym_LT] = ACTIONS(529),
    [anon_sym_GT] = ACTIONS(529),
    [anon_sym_GT_GT] = ACTIONS(529),
    [anon_sym_AMP_GT] = ACTIONS(529),
    [anon_sym_AMP_GT_GT] = ACTIONS(529),
    [anon_sym_LT_AMP] = ACTIONS(529),
    [anon_sym_GT_AMP] = ACTIONS(529),
    [anon_sym_LT_LT] = ACTIONS(529),
    [anon_sym_LT_LT_DASH] = ACTIONS(529),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(529),
    [anon_sym_LF] = ACTIONS(529),
    [anon_sym_AMP] = ACTIONS(529),
  },
  [519] = {
    [sym_quoted_argument] = STATE(531),
    [sym_expansion] = STATE(531),
    [sym_operator_expansion] = STATE(531),
    [sym_command_substitution] = STATE(531),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [sym_single_quoted_argument] = ACTIONS(1584),
    [anon_sym_DOLLAR] = ACTIONS(117),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(119),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(121),
    [sym_word] = ACTIONS(1586),
    [sym_comment] = ACTIONS(67),
  },
  [520] = {
    [sym_file_descriptor] = ACTIONS(661),
    [anon_sym_RPAREN] = ACTIONS(603),
    [anon_sym_SEMI_SEMI] = ACTIONS(603),
    [anon_sym_PIPE] = ACTIONS(603),
    [anon_sym_PIPE_AMP] = ACTIONS(603),
    [anon_sym_AMP_AMP] = ACTIONS(603),
    [anon_sym_PIPE_PIPE] = ACTIONS(603),
    [anon_sym_LT] = ACTIONS(603),
    [anon_sym_GT] = ACTIONS(603),
    [anon_sym_GT_GT] = ACTIONS(603),
    [anon_sym_AMP_GT] = ACTIONS(603),
    [anon_sym_AMP_GT_GT] = ACTIONS(603),
    [anon_sym_LT_AMP] = ACTIONS(603),
    [anon_sym_GT_AMP] = ACTIONS(603),
    [anon_sym_LT_LT] = ACTIONS(603),
    [anon_sym_LT_LT_DASH] = ACTIONS(603),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(603),
    [anon_sym_LF] = ACTIONS(603),
    [anon_sym_AMP] = ACTIONS(603),
  },
  [521] = {
    [sym_file_descriptor] = ACTIONS(665),
    [anon_sym_RPAREN] = ACTIONS(645),
    [anon_sym_SEMI_SEMI] = ACTIONS(645),
    [anon_sym_PIPE] = ACTIONS(645),
    [anon_sym_PIPE_AMP] = ACTIONS(645),
    [anon_sym_AMP_AMP] = ACTIONS(645),
    [anon_sym_PIPE_PIPE] = ACTIONS(645),
    [anon_sym_LT] = ACTIONS(645),
    [anon_sym_GT] = ACTIONS(645),
    [anon_sym_GT_GT] = ACTIONS(645),
    [anon_sym_AMP_GT] = ACTIONS(645),
    [anon_sym_AMP_GT_GT] = ACTIONS(645),
    [anon_sym_LT_AMP] = ACTIONS(645),
    [anon_sym_GT_AMP] = ACTIONS(645),
    [anon_sym_LT_LT] = ACTIONS(645),
    [anon_sym_LT_LT_DASH] = ACTIONS(645),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(645),
    [anon_sym_LF] = ACTIONS(645),
    [anon_sym_AMP] = ACTIONS(645),
  },
  [522] = {
    [anon_sym_RBRACE] = ACTIONS(1588),
    [sym_comment] = ACTIONS(67),
  },
  [523] = {
    [anon_sym_RBRACE] = ACTIONS(1590),
    [sym_comment] = ACTIONS(67),
  },
  [524] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1592),
    [anon_sym_PIPE] = ACTIONS(1592),
    [anon_sym_PIPE_AMP] = ACTIONS(1592),
    [anon_sym_AMP_AMP] = ACTIONS(1592),
    [anon_sym_PIPE_PIPE] = ACTIONS(1592),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(1592),
    [anon_sym_LF] = ACTIONS(1592),
    [anon_sym_AMP] = ACTIONS(1592),
  },
  [525] = {
    [anon_sym_RBRACE] = ACTIONS(1595),
    [sym_comment] = ACTIONS(67),
  },
  [526] = {
    [anon_sym_RBRACE] = ACTIONS(1597),
    [sym_comment] = ACTIONS(67),
  },
  [527] = {
    [sym_file_redirect] = STATE(441),
    [sym_heredoc_redirect] = STATE(441),
    [sym_file_descriptor] = ACTIONS(1019),
    [anon_sym_RPAREN] = ACTIONS(837),
    [anon_sym_SEMI_SEMI] = ACTIONS(837),
    [anon_sym_PIPE] = ACTIONS(837),
    [anon_sym_PIPE_AMP] = ACTIONS(837),
    [anon_sym_AMP_AMP] = ACTIONS(837),
    [anon_sym_PIPE_PIPE] = ACTIONS(837),
    [anon_sym_LT] = ACTIONS(1036),
    [anon_sym_GT] = ACTIONS(1036),
    [anon_sym_GT_GT] = ACTIONS(1036),
    [anon_sym_AMP_GT] = ACTIONS(1036),
    [anon_sym_AMP_GT_GT] = ACTIONS(1036),
    [anon_sym_LT_AMP] = ACTIONS(1036),
    [anon_sym_GT_AMP] = ACTIONS(1036),
    [anon_sym_LT_LT] = ACTIONS(1038),
    [anon_sym_LT_LT_DASH] = ACTIONS(1038),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(837),
    [anon_sym_LF] = ACTIONS(837),
    [anon_sym_AMP] = ACTIONS(837),
  },
  [528] = {
    [sym_file_redirect] = STATE(441),
    [sym_heredoc_redirect] = STATE(441),
    [sym_file_descriptor] = ACTIONS(1019),
    [anon_sym_RPAREN] = ACTIONS(839),
    [anon_sym_SEMI_SEMI] = ACTIONS(839),
    [anon_sym_PIPE] = ACTIONS(839),
    [anon_sym_PIPE_AMP] = ACTIONS(839),
    [anon_sym_AMP_AMP] = ACTIONS(839),
    [anon_sym_PIPE_PIPE] = ACTIONS(839),
    [anon_sym_LT] = ACTIONS(1036),
    [anon_sym_GT] = ACTIONS(1036),
    [anon_sym_GT_GT] = ACTIONS(1036),
    [anon_sym_AMP_GT] = ACTIONS(1036),
    [anon_sym_AMP_GT_GT] = ACTIONS(1036),
    [anon_sym_LT_AMP] = ACTIONS(1036),
    [anon_sym_GT_AMP] = ACTIONS(1036),
    [anon_sym_LT_LT] = ACTIONS(1038),
    [anon_sym_LT_LT_DASH] = ACTIONS(1038),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(839),
    [anon_sym_LF] = ACTIONS(839),
    [anon_sym_AMP] = ACTIONS(839),
  },
  [529] = {
    [anon_sym_RBRACE] = ACTIONS(1599),
    [sym_comment] = ACTIONS(67),
  },
  [530] = {
    [anon_sym_RBRACE] = ACTIONS(1601),
    [sym_comment] = ACTIONS(67),
  },
  [531] = {
    [anon_sym_RBRACE] = ACTIONS(1603),
    [sym_comment] = ACTIONS(67),
  },
  [532] = {
    [anon_sym_RBRACE] = ACTIONS(1605),
    [sym_comment] = ACTIONS(67),
  },
  [533] = {
    [sym_file_descriptor] = ACTIONS(889),
    [anon_sym_RPAREN] = ACTIONS(861),
    [anon_sym_SEMI_SEMI] = ACTIONS(861),
    [anon_sym_COLON] = ACTIONS(861),
    [anon_sym_PIPE] = ACTIONS(861),
    [anon_sym_PIPE_AMP] = ACTIONS(861),
    [anon_sym_AMP_AMP] = ACTIONS(861),
    [anon_sym_PIPE_PIPE] = ACTIONS(861),
    [anon_sym_DQUOTE] = ACTIONS(861),
    [sym_single_quoted_argument] = ACTIONS(861),
    [anon_sym_LT] = ACTIONS(861),
    [anon_sym_GT] = ACTIONS(861),
    [anon_sym_GT_GT] = ACTIONS(861),
    [anon_sym_AMP_GT] = ACTIONS(861),
    [anon_sym_AMP_GT_GT] = ACTIONS(861),
    [anon_sym_LT_AMP] = ACTIONS(861),
    [anon_sym_GT_AMP] = ACTIONS(861),
    [anon_sym_LT_LT] = ACTIONS(861),
    [anon_sym_LT_LT_DASH] = ACTIONS(861),
    [sym_leading_word] = ACTIONS(861),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(861),
    [anon_sym_LF] = ACTIONS(861),
    [anon_sym_AMP] = ACTIONS(861),
  },
  [534] = {
    [sym_file_descriptor] = ACTIONS(893),
    [anon_sym_RPAREN] = ACTIONS(863),
    [anon_sym_SEMI_SEMI] = ACTIONS(863),
    [anon_sym_COLON] = ACTIONS(863),
    [anon_sym_PIPE] = ACTIONS(863),
    [anon_sym_PIPE_AMP] = ACTIONS(863),
    [anon_sym_AMP_AMP] = ACTIONS(863),
    [anon_sym_PIPE_PIPE] = ACTIONS(863),
    [anon_sym_DQUOTE] = ACTIONS(863),
    [sym_single_quoted_argument] = ACTIONS(863),
    [anon_sym_LT] = ACTIONS(863),
    [anon_sym_GT] = ACTIONS(863),
    [anon_sym_GT_GT] = ACTIONS(863),
    [anon_sym_AMP_GT] = ACTIONS(863),
    [anon_sym_AMP_GT_GT] = ACTIONS(863),
    [anon_sym_LT_AMP] = ACTIONS(863),
    [anon_sym_GT_AMP] = ACTIONS(863),
    [anon_sym_LT_LT] = ACTIONS(863),
    [anon_sym_LT_LT_DASH] = ACTIONS(863),
    [sym_leading_word] = ACTIONS(863),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(863),
    [anon_sym_LF] = ACTIONS(863),
    [anon_sym_AMP] = ACTIONS(863),
  },
  [535] = {
    [sym_file_descriptor] = ACTIONS(889),
    [anon_sym_RPAREN] = ACTIONS(861),
    [anon_sym_SEMI_SEMI] = ACTIONS(861),
    [anon_sym_RBRACK] = ACTIONS(861),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(861),
    [anon_sym_PIPE] = ACTIONS(861),
    [anon_sym_PIPE_AMP] = ACTIONS(861),
    [anon_sym_AMP_AMP] = ACTIONS(861),
    [anon_sym_PIPE_PIPE] = ACTIONS(861),
    [anon_sym_DQUOTE] = ACTIONS(861),
    [sym_single_quoted_argument] = ACTIONS(861),
    [anon_sym_DOLLAR] = ACTIONS(861),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(861),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(861),
    [anon_sym_LT] = ACTIONS(861),
    [anon_sym_GT] = ACTIONS(861),
    [anon_sym_GT_GT] = ACTIONS(861),
    [anon_sym_AMP_GT] = ACTIONS(861),
    [anon_sym_AMP_GT_GT] = ACTIONS(861),
    [anon_sym_LT_AMP] = ACTIONS(861),
    [anon_sym_GT_AMP] = ACTIONS(861),
    [anon_sym_LT_LT] = ACTIONS(861),
    [anon_sym_LT_LT_DASH] = ACTIONS(861),
    [sym_word] = ACTIONS(861),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(861),
    [anon_sym_LF] = ACTIONS(861),
    [anon_sym_AMP] = ACTIONS(861),
  },
  [536] = {
    [sym_file_descriptor] = ACTIONS(893),
    [anon_sym_RPAREN] = ACTIONS(863),
    [anon_sym_SEMI_SEMI] = ACTIONS(863),
    [anon_sym_RBRACK] = ACTIONS(863),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(863),
    [anon_sym_PIPE] = ACTIONS(863),
    [anon_sym_PIPE_AMP] = ACTIONS(863),
    [anon_sym_AMP_AMP] = ACTIONS(863),
    [anon_sym_PIPE_PIPE] = ACTIONS(863),
    [anon_sym_DQUOTE] = ACTIONS(863),
    [sym_single_quoted_argument] = ACTIONS(863),
    [anon_sym_DOLLAR] = ACTIONS(863),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(863),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(863),
    [anon_sym_LT] = ACTIONS(863),
    [anon_sym_GT] = ACTIONS(863),
    [anon_sym_GT_GT] = ACTIONS(863),
    [anon_sym_AMP_GT] = ACTIONS(863),
    [anon_sym_AMP_GT_GT] = ACTIONS(863),
    [anon_sym_LT_AMP] = ACTIONS(863),
    [anon_sym_GT_AMP] = ACTIONS(863),
    [anon_sym_LT_LT] = ACTIONS(863),
    [anon_sym_LT_LT_DASH] = ACTIONS(863),
    [sym_word] = ACTIONS(863),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(863),
    [anon_sym_LF] = ACTIONS(863),
    [anon_sym_AMP] = ACTIONS(863),
  },
  [537] = {
    [sym_file_descriptor] = ACTIONS(889),
    [anon_sym_RPAREN] = ACTIONS(861),
    [anon_sym_SEMI_SEMI] = ACTIONS(861),
    [anon_sym_PIPE] = ACTIONS(861),
    [anon_sym_PIPE_AMP] = ACTIONS(861),
    [anon_sym_AMP_AMP] = ACTIONS(861),
    [anon_sym_PIPE_PIPE] = ACTIONS(861),
    [anon_sym_DQUOTE] = ACTIONS(861),
    [sym_single_quoted_argument] = ACTIONS(861),
    [anon_sym_DOLLAR] = ACTIONS(861),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(861),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(861),
    [anon_sym_LT] = ACTIONS(861),
    [anon_sym_GT] = ACTIONS(861),
    [anon_sym_GT_GT] = ACTIONS(861),
    [anon_sym_AMP_GT] = ACTIONS(861),
    [anon_sym_AMP_GT_GT] = ACTIONS(861),
    [anon_sym_LT_AMP] = ACTIONS(861),
    [anon_sym_GT_AMP] = ACTIONS(861),
    [anon_sym_LT_LT] = ACTIONS(861),
    [anon_sym_LT_LT_DASH] = ACTIONS(861),
    [sym_word] = ACTIONS(861),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(861),
    [anon_sym_LF] = ACTIONS(861),
    [anon_sym_AMP] = ACTIONS(861),
  },
  [538] = {
    [sym_file_descriptor] = ACTIONS(893),
    [anon_sym_RPAREN] = ACTIONS(863),
    [anon_sym_SEMI_SEMI] = ACTIONS(863),
    [anon_sym_PIPE] = ACTIONS(863),
    [anon_sym_PIPE_AMP] = ACTIONS(863),
    [anon_sym_AMP_AMP] = ACTIONS(863),
    [anon_sym_PIPE_PIPE] = ACTIONS(863),
    [anon_sym_DQUOTE] = ACTIONS(863),
    [sym_single_quoted_argument] = ACTIONS(863),
    [anon_sym_DOLLAR] = ACTIONS(863),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(863),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(863),
    [anon_sym_LT] = ACTIONS(863),
    [anon_sym_GT] = ACTIONS(863),
    [anon_sym_GT_GT] = ACTIONS(863),
    [anon_sym_AMP_GT] = ACTIONS(863),
    [anon_sym_AMP_GT_GT] = ACTIONS(863),
    [anon_sym_LT_AMP] = ACTIONS(863),
    [anon_sym_GT_AMP] = ACTIONS(863),
    [anon_sym_LT_LT] = ACTIONS(863),
    [anon_sym_LT_LT_DASH] = ACTIONS(863),
    [sym_word] = ACTIONS(863),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(863),
    [anon_sym_LF] = ACTIONS(863),
    [anon_sym_AMP] = ACTIONS(863),
  },
  [539] = {
    [sym_file_descriptor] = ACTIONS(889),
    [anon_sym_RPAREN] = ACTIONS(861),
    [anon_sym_SEMI_SEMI] = ACTIONS(861),
    [anon_sym_PIPE] = ACTIONS(861),
    [anon_sym_PIPE_AMP] = ACTIONS(861),
    [anon_sym_AMP_AMP] = ACTIONS(861),
    [anon_sym_PIPE_PIPE] = ACTIONS(861),
    [anon_sym_LT] = ACTIONS(861),
    [anon_sym_GT] = ACTIONS(861),
    [anon_sym_GT_GT] = ACTIONS(861),
    [anon_sym_AMP_GT] = ACTIONS(861),
    [anon_sym_AMP_GT_GT] = ACTIONS(861),
    [anon_sym_LT_AMP] = ACTIONS(861),
    [anon_sym_GT_AMP] = ACTIONS(861),
    [anon_sym_LT_LT] = ACTIONS(861),
    [anon_sym_LT_LT_DASH] = ACTIONS(861),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(861),
    [anon_sym_LF] = ACTIONS(861),
    [anon_sym_AMP] = ACTIONS(861),
  },
  [540] = {
    [sym_file_descriptor] = ACTIONS(893),
    [anon_sym_RPAREN] = ACTIONS(863),
    [anon_sym_SEMI_SEMI] = ACTIONS(863),
    [anon_sym_PIPE] = ACTIONS(863),
    [anon_sym_PIPE_AMP] = ACTIONS(863),
    [anon_sym_AMP_AMP] = ACTIONS(863),
    [anon_sym_PIPE_PIPE] = ACTIONS(863),
    [anon_sym_LT] = ACTIONS(863),
    [anon_sym_GT] = ACTIONS(863),
    [anon_sym_GT_GT] = ACTIONS(863),
    [anon_sym_AMP_GT] = ACTIONS(863),
    [anon_sym_AMP_GT_GT] = ACTIONS(863),
    [anon_sym_LT_AMP] = ACTIONS(863),
    [anon_sym_GT_AMP] = ACTIONS(863),
    [anon_sym_LT_LT] = ACTIONS(863),
    [anon_sym_LT_LT_DASH] = ACTIONS(863),
    [sym_comment] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(863),
    [anon_sym_LF] = ACTIONS(863),
    [anon_sym_AMP] = ACTIONS(863),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(372),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(373),
  [5] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(374),
  [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(375),
  [9] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(376),
  [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
  [13] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(3),
  [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(71),
  [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(358),
  [19] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(4),
  [21] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(359),
  [23] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(360),
  [25] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(149),
  [27] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(150),
  [29] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(5),
  [31] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(361),
  [33] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(362),
  [35] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(363),
  [37] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(6),
  [39] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(95),
  [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(95),
  [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(364),
  [45] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(63),
  [47] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(64),
  [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(9),
  [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(365),
  [53] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(366),
  [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(367),
  [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(368),
  [59] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(369),
  [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(369),
  [63] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(370),
  [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(370),
  [67] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [69] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(371),
  [71] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
  [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 0),
  [75] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
  [77] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
  [79] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
  [81] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
  [83] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
  [85] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(8),
  [87] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(9),
  [89] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(10),
  [91] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
  [93] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(11),
  [95] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(12),
  [97] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(20),
  [99] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(20),
  [101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(25),
  [103] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(26),
  [105] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(27),
  [107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(28),
  [109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
  [111] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(30),
  [113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
  [115] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(32),
  [117] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(33),
  [119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
  [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
  [123] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(36),
  [125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
  [127] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 1),
  [129] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(40),
  [131] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(41),
  [133] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(42),
  [135] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
  [139] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(47),
  [141] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(48),
  [143] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(49),
  [145] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(50),
  [147] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(51),
  [149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
  [151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(54),
  [153] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(55),
  [155] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
  [157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
  [159] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(58),
  [161] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 1, .rename_sequence_id = 1),
  [163] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(59),
  [165] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(60),
  [167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [171] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [173] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [175] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(62),
  [177] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(63),
  [179] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(64),
  [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1),
  [183] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1),
  [185] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_command_repeat1, 1),
  [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(66),
  [191] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(66),
  [193] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(67),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(69),
  [197] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(70),
  [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(71),
  [201] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(73),
  [203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(74),
  [205] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(75),
  [207] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(77),
  [209] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(78),
  [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(79),
  [213] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(80),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(81),
  [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
  [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
  [221] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(82),
  [223] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(84),
  [225] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(87),
  [227] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(88),
  [229] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(89),
  [231] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_bracket_command_repeat1, 1),
  [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1),
  [235] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1),
  [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
  [239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(92),
  [241] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(93),
  [243] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_bracket_command_repeat1, 1, .rename_sequence_id = 2),
  [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1, .rename_sequence_id = 2),
  [247] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1, .rename_sequence_id = 2),
  [249] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(95),
  [251] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(96),
  [253] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(97),
  [255] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(98),
  [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
  [259] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2),
  [261] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(99),
  [263] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(100),
  [265] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(101),
  [267] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(102),
  [269] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(103),
  [271] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(104),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(107),
  [275] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(108),
  [277] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(109),
  [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(110),
  [281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(111),
  [283] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(112),
  [285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(113),
  [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(114),
  [289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 1),
  [291] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 1),
  [293] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subshell, 2),
  [295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(117),
  [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2),
  [299] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2),
  [301] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_quoted_argument_repeat1, 1),
  [303] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_quoted_argument_repeat1, 1),
  [305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
  [307] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(119),
  [309] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(120),
  [311] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(122),
  [313] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(123),
  [315] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(124),
  [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2),
  [319] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 2),
  [321] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2),
  [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(126),
  [325] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(127),
  [327] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(128),
  [329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 3),
  [331] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 3),
  [333] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 3),
  [335] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2, .rename_sequence_id = 4),
  [337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
  [339] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(133),
  [341] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(134),
  [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(135),
  [345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(136),
  [347] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(137),
  [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__terminated_statement, 2),
  [351] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__terminated_statement, 2),
  [353] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__terminated_statement, 2),
  [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [357] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [359] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [361] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(142),
  [363] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2, .rename_sequence_id = 5),
  [365] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(143),
  [367] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(144),
  [369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 2),
  [371] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_command_repeat1, 2),
  [373] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 2),
  [375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 3),
  [377] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 3),
  [379] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 3),
  [381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 3, .rename_sequence_id = 6),
  [383] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 3, .rename_sequence_id = 6),
  [385] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 3, .rename_sequence_id = 6),
  [387] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(146),
  [389] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 3),
  [391] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(148),
  [393] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(149),
  [395] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(150),
  [397] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(155),
  [399] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(156),
  [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(157),
  [403] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expansion, 2),
  [405] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expansion, 2, .rename_sequence_id = 7),
  [407] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(158),
  [409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(158),
  [411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(159),
  [413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(160),
  [415] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(161),
  [417] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(162),
  [419] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(163),
  [421] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(166),
  [423] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(168),
  [425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(170),
  [427] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(171),
  [429] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(171),
  [431] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(172),
  [433] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(173),
  [435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(174),
  [437] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_quoted_argument, 2),
  [439] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(175),
  [441] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expansion, 2),
  [443] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expansion, 2),
  [445] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expansion, 2, .rename_sequence_id = 7),
  [447] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expansion, 2, .rename_sequence_id = 7),
  [449] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(176),
  [451] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(176),
  [453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(177),
  [455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(178),
  [457] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_bracket_command, 3),
  [459] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_bracket_command_repeat1, 2),
  [461] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 2),
  [463] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 2),
  [465] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_bracket_command_repeat1, 2, .rename_sequence_id = 3),
  [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 2, .rename_sequence_id = 3),
  [469] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 2, .rename_sequence_id = 3),
  [471] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(179),
  [473] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(180),
  [475] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(181),
  [477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(183),
  [479] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(184),
  [481] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(185),
  [483] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3),
  [485] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(187),
  [487] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(188),
  [489] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(190),
  [491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(192),
  [493] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(193),
  [495] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(194),
  [497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 1),
  [499] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 1),
  [501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(196),
  [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(197),
  [505] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(198),
  [507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(199),
  [509] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_heredoc_redirect, 2),
  [511] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc_redirect, 2),
  [513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 2),
  [515] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 2),
  [517] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subshell, 3),
  [519] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(201),
  [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(201),
  [523] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(202),
  [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(203),
  [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 3),
  [529] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 3),
  [531] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_quoted_argument_repeat1, 2),
  [533] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_quoted_argument_repeat1, 2),
  [535] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(204),
  [537] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(205),
  [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(205),
  [541] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(206),
  [543] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(207),
  [545] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .rename_sequence_id = 8),
  [547] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(209),
  [549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9),
  [551] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9),
  [553] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(211),
  [555] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(212),
  [557] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(213),
  [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 10),
  [561] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 10),
  [563] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3, .fragile = true),
  [565] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list, 3, .fragile = true),
  [567] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .rename_sequence_id = 11),
  [569] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(218),
  [571] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(219),
  [573] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_group, 2),
  [575] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(220),
  [577] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
  [579] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 1),
  [581] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
  [583] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(223),
  [585] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(223),
  [587] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(149),
  [589] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(150),
  [591] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(227),
  [593] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(228),
  [595] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(229),
  [597] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(232),
  [599] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(233),
  [601] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(234),
  [603] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 12),
  [605] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(235),
  [607] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(235),
  [609] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 2),
  [611] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(236),
  [613] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(237),
  [615] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(238),
  [617] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(239),
  [619] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(240),
  [621] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(162),
  [623] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(162),
  [625] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(163),
  [627] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(163),
  [629] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(241),
  [631] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(244),
  [633] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(245),
  [635] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(246),
  [637] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(247),
  [639] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_command_repeat2, 1),
  [641] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(250),
  [643] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 2, .rename_sequence_id = 4),
  [645] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3),
  [647] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(253),
  [649] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(254),
  [651] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(256),
  [653] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(258),
  [655] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_quoted_argument, 3),
  [657] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(259),
  [659] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(260),
  [661] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 12),
  [663] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 12),
  [665] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3),
  [667] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_command_substitution, 3),
  [669] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(261),
  [671] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(262),
  [673] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(262),
  [675] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(263),
  [677] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(264),
  [679] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 4),
  [681] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(265),
  [683] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(266),
  [685] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(266),
  [687] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(267),
  [689] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(268),
  [691] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_heredoc_repeat1, 1),
  [693] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_heredoc_repeat1, 1),
  [695] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 2),
  [697] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 2),
  [699] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(269),
  [701] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(270),
  [703] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(271),
  [705] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(272),
  [707] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(273),
  [709] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(274),
  [711] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(275),
  [713] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(276),
  [715] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(277),
  [717] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 4, .rename_sequence_id = 13),
  [719] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(278),
  [721] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(279),
  [723] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(279),
  [725] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(280),
  [727] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(281),
  [729] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 4, .rename_sequence_id = 14),
  [731] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9),
  [733] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 10),
  [735] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_group, 3),
  [737] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(284),
  [739] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 2),
  [741] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
  [743] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(285),
  [745] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [747] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 5),
  [749] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(287),
  [751] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(288),
  [753] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_case_statement_repeat1, 1),
  [755] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_case_statement_repeat1, 1),
  [757] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_case_statement_repeat1, 1),
  [759] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(289),
  [761] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(292),
  [763] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(293),
  [765] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(294),
  [767] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(295),
  [769] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(296),
  [771] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(298),
  [773] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(299),
  [775] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(300),
  [777] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 3),
  [779] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(302),
  [781] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(303),
  [783] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_heredoc, 1),
  [785] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(305),
  [787] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_heredoc_redirect, 2),
  [789] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_command_repeat2, 2),
  [791] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .rename_sequence_id = 8),
  [793] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .rename_sequence_id = 11),
  [795] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 5, .rename_sequence_id = 15),
  [797] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(311),
  [799] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(313),
  [801] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(314),
  [803] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(315),
  [805] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(316),
  [807] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(317),
  [809] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(318),
  [811] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(319),
  [813] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(319),
  [815] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(320),
  [817] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_heredoc_repeat1, 2),
  [819] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_heredoc_repeat1, 2),
  [821] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 3),
  [823] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 3),
  [825] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(321),
  [827] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(322),
  [829] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(323),
  [831] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(324),
  [833] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(325),
  [835] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(326),
  [837] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 5),
  [839] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 5, .rename_sequence_id = 16),
  [841] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 3),
  [843] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
  [845] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(328),
  [847] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(329),
  [849] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(331),
  [851] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 6),
  [853] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_case_statement_repeat1, 2),
  [855] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_case_statement_repeat1, 2),
  [857] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_case_statement_repeat1, 2),
  [859] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(333),
  [861] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 17),
  [863] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 18),
  [865] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(334),
  [867] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(335),
  [869] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(335),
  [871] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(336),
  [873] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(337),
  [875] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 4),
  [877] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_heredoc, 2),
  [879] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(338),
  [881] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 4, .rename_sequence_id = 13),
  [883] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 4, .rename_sequence_id = 14),
  [885] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 6, .rename_sequence_id = 19),
  [887] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(341),
  [889] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 17),
  [891] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 17),
  [893] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 18),
  [895] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 18),
  [897] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(342),
  [899] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(343),
  [901] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(344),
  [903] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(345),
  [905] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(346),
  [907] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(347),
  [909] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(348),
  [911] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(349),
  [913] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4),
  [915] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 7),
  [917] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 3),
  [919] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_case_item, 3),
  [921] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 3),
  [923] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(350),
  [925] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 3, .rename_sequence_id = 20),
  [927] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_case_item, 3, .rename_sequence_id = 20),
  [929] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 3, .rename_sequence_id = 20),
  [931] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(351),
  [933] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 7),
  [935] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(352),
  [937] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(353),
  [939] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_heredoc, 3),
  [941] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 5),
  [943] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 5, .rename_sequence_id = 16),
  [945] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 7, .rename_sequence_id = 21),
  [947] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(354),
  [949] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(355),
  [951] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 4),
  [953] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_case_item, 4),
  [955] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 4),
  [957] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 4, .rename_sequence_id = 22),
  [959] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_case_item, 4, .rename_sequence_id = 22),
  [961] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 4, .rename_sequence_id = 22),
  [963] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(356),
  [965] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(357),
  [967] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_group, 2), REDUCE(sym_do_group, 3),
  [970] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 3), SHIFT(148),
  [973] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 3), SHIFT(149),
  [976] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 3), SHIFT(150),
  [979] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_if_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_if_statement, 7),
  [984] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(399),
  [986] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 5), REDUCE(sym_case_statement, 5, .rename_sequence_id = 15), REDUCE(sym_case_statement, 6), REDUCE(sym_case_statement, 6, .rename_sequence_id = 19), REDUCE(sym_case_statement, 7), REDUCE(sym_case_statement, 7, .rename_sequence_id = 21),
  [993] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3), SHIFT(2),
  [996] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subshell, 2), REDUCE(sym_subshell, 3), REDUCE(sym_command_substitution, 3), SHIFT(400),
  [1001] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3), SHIFT(8),
  [1004] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subshell, 2), REDUCE(sym_subshell, 3), REDUCE(sym_command_substitution, 3),
  [1008] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(9),
  [1010] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3), SHIFT(10),
  [1013] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3), SHIFT(11),
  [1016] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3), SHIFT(12),
  [1019] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(402),
  [1021] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 1), REDUCE(sym_command, 2),
  [1024] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(403),
  [1026] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(31),
  [1028] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(404),
  [1030] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(33),
  [1032] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(34),
  [1034] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(35),
  [1036] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(405),
  [1038] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(370),
  [1040] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(406),
  [1042] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(409),
  [1044] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(410),
  [1046] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2), REDUCE(sym_quoted_argument, 3),
  [1049] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2), REDUCE(sym_quoted_argument, 3),
  [1052] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2), REDUCE(sym_quoted_argument, 3), SHIFT(411),
  [1056] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(48),
  [1058] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2), REDUCE(sym_quoted_argument, 3), SHIFT(49),
  [1062] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2), REDUCE(sym_quoted_argument, 3), SHIFT(50),
  [1066] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2), REDUCE(sym_quoted_argument, 3), SHIFT(51),
  [1070] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expansion, 2), SHIFT(412),
  [1073] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expansion, 2), SHIFT(413),
  [1076] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 12), REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 17), REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 18),
  [1080] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 12), REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 17), REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 18),
  [1084] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(414),
  [1086] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(415),
  [1088] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(416),
  [1090] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(417),
  [1092] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(418),
  [1094] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(419),
  [1096] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(372),
  [1098] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(373),
  [1100] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(420),
  [1102] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(421),
  [1104] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__terminated_statement, 2), SHIFT(31),
  [1107] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__terminated_statement, 2), SHIFT(228),
  [1110] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(422),
  [1112] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_heredoc_repeat1, 1), REDUCE(aux_sym_heredoc_repeat1, 2),
  [1115] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_heredoc_repeat1, 1), REDUCE(aux_sym_heredoc_repeat1, 2),
  [1118] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 2), REDUCE(sym_heredoc, 3),
  [1121] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 2), REDUCE(sym_heredoc, 3),
  [1124] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(423),
  [1126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(423),
  [1128] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [1131] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [1134] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(71),
  [1136] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(359),
  [1138] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [1141] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3, .fragile = true), REDUCE(sym_list, 3, .fragile = true), SHIFT(62),
  [1145] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3, .fragile = true), REDUCE(sym_list, 3, .fragile = true), SHIFT(63),
  [1149] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3, .fragile = true), REDUCE(sym_list, 3, .fragile = true), SHIFT(64),
  [1153] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
  [1156] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(424),
  [1158] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_case_statement_repeat1, 1), REDUCE(aux_sym_case_statement_repeat1, 2),
  [1161] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_case_statement_repeat1, 1), REDUCE(aux_sym_case_statement_repeat1, 2),
  [1164] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_case_statement_repeat1, 1), REDUCE(aux_sym_case_statement_repeat1, 2),
  [1167] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(425),
  [1169] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3), REDUCE(sym_list, 3), SHIFT(62),
  [1173] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3), REDUCE(sym_list, 3), SHIFT(63),
  [1177] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3), REDUCE(sym_list, 3), SHIFT(64),
  [1181] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1), REDUCE(aux_sym_command_repeat1, 2),
  [1184] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1), REDUCE(aux_sym_command_repeat1, 2),
  [1187] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9), REDUCE(sym_file_redirect, 3), SHIFT(402),
  [1194] = {.count = 7, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 1), REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_command, 2), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_file_redirect, 3), SHIFT(287),
  [1202] = {.count = 8, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 1), REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_command, 2), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9), REDUCE(sym_file_redirect, 3), SHIFT(78),
  [1211] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(aux_sym_bracket_command_repeat1, 2),
  [1214] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9), REDUCE(sym_file_redirect, 3),
  [1218] = {.count = 7, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 1), REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_command, 2), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9), REDUCE(sym_file_redirect, 3),
  [1226] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9), REDUCE(sym_file_redirect, 3),
  [1232] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(426),
  [1234] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9), REDUCE(sym_file_redirect, 3), SHIFT(405),
  [1241] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_file_redirect, 3), SHIFT(370),
  [1247] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9), REDUCE(sym_file_redirect, 3),
  [1253] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_file_redirect, 3), SHIFT(287),
  [1259] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9), REDUCE(sym_file_redirect, 3), SHIFT(78),
  [1266] = {.count = 7, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(aux_sym_quoted_argument_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(aux_sym_quoted_argument_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9), REDUCE(sym_file_redirect, 3),
  [1274] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_quoted_argument_repeat1, 1), REDUCE(aux_sym_quoted_argument_repeat1, 2),
  [1277] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(aux_sym_quoted_argument_repeat1, 1), REDUCE(aux_sym_heredoc_repeat1, 1), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(aux_sym_quoted_argument_repeat1, 2), REDUCE(aux_sym_heredoc_repeat1, 2),
  [1284] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(aux_sym_quoted_argument_repeat1, 1), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(aux_sym_quoted_argument_repeat1, 2),
  [1289] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_file_redirect, 3),
  [1294] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1), REDUCE(aux_sym_command_repeat2, 1), REDUCE(aux_sym_command_repeat1, 2), REDUCE(aux_sym_command_repeat2, 2),
  [1299] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 1), REDUCE(aux_sym_command_repeat2, 2),
  [1302] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1), REDUCE(aux_sym_command_repeat2, 1), REDUCE(aux_sym_command_repeat1, 2), REDUCE(aux_sym_command_repeat2, 2),
  [1307] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 1), REDUCE(aux_sym_command_repeat2, 2),
  [1310] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 2), REDUCE(sym_elif_clause, 4), SHIFT(223),
  [1314] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(149),
  [1317] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(150),
  [1320] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(427),
  [1322] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(428),
  [1324] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(430),
  [1326] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3), REDUCE(sym_command, 3, .rename_sequence_id = 8), REDUCE(sym_command, 4), REDUCE(sym_command, 4, .rename_sequence_id = 14),
  [1331] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(95),
  [1333] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(431),
  [1335] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(432),
  [1337] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(433),
  [1339] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(434),
  [1341] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(435),
  [1343] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(436),
  [1345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(438),
  [1347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(439),
  [1349] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(438),
  [1351] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(440),
  [1353] = {.count = 10, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2), REDUCE(sym_command, 2, .rename_sequence_id = 4), REDUCE(sym_command, 3), REDUCE(sym_command, 3, .rename_sequence_id = 11), REDUCE(sym_command, 3, .rename_sequence_id = 8), REDUCE(sym_command, 4), REDUCE(sym_command, 4, .rename_sequence_id = 14), REDUCE(sym_command, 4, .rename_sequence_id = 13), REDUCE(sym_command, 5), REDUCE(sym_command, 5, .rename_sequence_id = 16),
  [1364] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(442),
  [1366] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(443),
  [1368] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(223),
  [1371] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 3), REDUCE(sym_case_item, 3, .rename_sequence_id = 20),
  [1374] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_case_item, 3), REDUCE(sym_case_item, 3, .rename_sequence_id = 20),
  [1377] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 3), REDUCE(sym_case_item, 3, .rename_sequence_id = 20),
  [1380] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(444),
  [1382] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(444),
  [1384] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2), REDUCE(sym_command, 3),
  [1387] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(445),
  [1389] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(446),
  [1391] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(447),
  [1393] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(448),
  [1395] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(449),
  [1397] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(450),
  [1399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(426),
  [1401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(453),
  [1403] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(454),
  [1405] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(455),
  [1407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(456),
  [1409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(457),
  [1411] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(458),
  [1413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(459),
  [1415] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(459),
  [1417] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(460),
  [1419] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2), REDUCE(sym_file_redirect, 3),
  [1422] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2), REDUCE(sym_file_redirect, 3),
  [1425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(462),
  [1427] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(463),
  [1429] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(464),
  [1431] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 3), REDUCE(sym_file_redirect, 3, .rename_sequence_id = 6),
  [1434] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 3), REDUCE(sym_file_redirect, 3, .rename_sequence_id = 6),
  [1437] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(466),
  [1439] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 5), REDUCE(sym_case_statement, 5, .rename_sequence_id = 15), REDUCE(sym_case_statement, 6), REDUCE(sym_case_statement, 6, .rename_sequence_id = 19),
  [1444] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(467),
  [1446] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(468),
  [1448] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_if_statement, 7),
  [1452] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 4), REDUCE(sym_case_item, 4, .rename_sequence_id = 22),
  [1455] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_case_item, 4), REDUCE(sym_case_item, 4, .rename_sequence_id = 22),
  [1458] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 4), REDUCE(sym_case_item, 4, .rename_sequence_id = 22),
  [1461] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_if_statement, 6),
  [1464] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(469),
  [1466] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 6), REDUCE(sym_case_statement, 6, .rename_sequence_id = 19), REDUCE(sym_case_statement, 7), REDUCE(sym_case_statement, 7, .rename_sequence_id = 21),
  [1471] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(470),
  [1473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(472),
  [1475] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(473),
  [1477] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(474),
  [1479] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 4), REDUCE(sym_command, 4, .rename_sequence_id = 13), REDUCE(sym_command, 5), REDUCE(sym_command, 5, .rename_sequence_id = 16),
  [1484] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(476),
  [1486] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(478),
  [1488] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(480),
  [1490] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(482),
  [1492] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(483),
  [1494] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(484),
  [1496] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(486),
  [1498] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(487),
  [1500] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(488),
  [1502] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3), REDUCE(sym_command, 4),
  [1505] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(490),
  [1507] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(491),
  [1509] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(493),
  [1511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(495),
  [1513] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(496),
  [1515] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(497),
  [1517] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(499),
  [1519] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(500),
  [1521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(500),
  [1523] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(501),
  [1525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(502),
  [1527] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(503),
  [1529] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6), REDUCE(sym_if_statement, 7),
  [1532] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(505),
  [1534] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(506),
  [1536] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(506),
  [1538] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(507),
  [1540] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(508),
  [1542] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(511),
  [1544] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(514),
  [1546] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(515),
  [1548] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(515),
  [1550] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(516),
  [1552] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(517),
  [1554] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 4), REDUCE(sym_command, 5),
  [1557] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(518),
  [1559] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(519),
  [1561] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(519),
  [1563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(520),
  [1565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(521),
  [1567] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(522),
  [1569] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(523),
  [1571] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 6), REDUCE(sym_case_statement, 6, .rename_sequence_id = 19),
  [1574] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(524),
  [1576] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(525),
  [1578] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(526),
  [1580] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(529),
  [1582] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(530),
  [1584] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(531),
  [1586] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(532),
  [1588] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(533),
  [1590] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(534),
  [1592] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 7), REDUCE(sym_case_statement, 7, .rename_sequence_id = 21),
  [1595] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(535),
  [1597] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(536),
  [1599] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(537),
  [1601] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(538),
  [1603] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(539),
  [1605] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(540),
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
