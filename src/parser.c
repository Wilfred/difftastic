#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define LANGUAGE_VERSION 3
#define STATE_COUNT 574
#define SYMBOL_COUNT 90
#define TOKEN_COUNT 58
#define EXTERNAL_TOKEN_COUNT 6
#define MAX_RENAME_SEQUENCE_LENGTH 7

enum {
  sym__simple_heredoc = 1,
  sym__heredoc_beginning = 2,
  sym__heredoc_middle = 3,
  sym__heredoc_end = 4,
  sym_file_descriptor = 5,
  sym__empty_value = 6,
  anon_sym_while = 7,
  anon_sym_do = 8,
  anon_sym_done = 9,
  anon_sym_if = 10,
  anon_sym_then = 11,
  anon_sym_fi = 12,
  anon_sym_elif = 13,
  anon_sym_else = 14,
  anon_sym_case = 15,
  anon_sym_in = 16,
  anon_sym_esac = 17,
  anon_sym_RPAREN = 18,
  anon_sym_SEMI_SEMI = 19,
  anon_sym_function = 20,
  anon_sym_LPAREN = 21,
  anon_sym_LBRACE = 22,
  anon_sym_RBRACE = 23,
  anon_sym_LBRACK = 24,
  anon_sym_RBRACK = 25,
  anon_sym_LBRACK_LBRACK = 26,
  anon_sym_RBRACK_RBRACK = 27,
  anon_sym_COLON = 28,
  aux_sym_SLASH_BSLASHs_PLUS_SLASH = 29,
  anon_sym_PIPE = 30,
  anon_sym_PIPE_AMP = 31,
  anon_sym_AMP_AMP = 32,
  anon_sym_PIPE_PIPE = 33,
  anon_sym_EQ = 34,
  anon_sym_DQUOTE = 35,
  sym__quoted_chars = 36,
  sym_single_quoted_argument = 37,
  anon_sym_DOLLAR = 38,
  anon_sym_DOLLAR_LBRACE = 39,
  anon_sym_COLON_QMARK = 40,
  anon_sym_COLON_DASH = 41,
  anon_sym_DOLLAR_LPAREN = 42,
  anon_sym_LT = 43,
  anon_sym_GT = 44,
  anon_sym_GT_GT = 45,
  anon_sym_AMP_GT = 46,
  anon_sym_AMP_GT_GT = 47,
  anon_sym_LT_AMP = 48,
  anon_sym_GT_AMP = 49,
  anon_sym_LT_LT = 50,
  anon_sym_LT_LT_DASH = 51,
  sym_leading_word = 52,
  sym_word = 53,
  sym_comment = 54,
  anon_sym_SEMI = 55,
  anon_sym_LF = 56,
  anon_sym_AMP = 57,
  sym_program = 58,
  sym__terminated_statement = 59,
  sym_while_statement = 60,
  sym_do_group = 61,
  sym_if_statement = 62,
  sym_elif_clause = 63,
  sym_else_clause = 64,
  sym_case_statement = 65,
  sym_case_item = 66,
  sym_function_definition = 67,
  sym_compound_command = 68,
  sym_bracket_command = 69,
  sym_command = 70,
  sym_pipeline = 71,
  sym_list = 72,
  sym_subshell = 73,
  sym_environment_variable_assignment = 74,
  sym_quoted_argument = 75,
  sym_expansion = 76,
  sym_operator_expansion = 77,
  sym_command_substitution = 78,
  sym_file_redirect = 79,
  sym_heredoc_redirect = 80,
  sym_heredoc = 81,
  aux_sym_program_repeat1 = 82,
  aux_sym_if_statement_repeat1 = 83,
  aux_sym_case_statement_repeat1 = 84,
  aux_sym_bracket_command_repeat1 = 85,
  aux_sym_command_repeat1 = 86,
  aux_sym_command_repeat2 = 87,
  aux_sym_quoted_argument_repeat1 = 88,
  aux_sym_heredoc_repeat1 = 89,
  rename_sym_1 = 90,
  rename_sym_argument = 91,
  rename_sym_command_name = 92,
  rename_sym_variable_name = 93,
};

static const char *ts_symbol_names[] = {
  [sym__simple_heredoc] = "_simple_heredoc",
  [sym__heredoc_beginning] = "_heredoc_beginning",
  [sym__heredoc_middle] = "_heredoc_middle",
  [sym__heredoc_end] = "_heredoc_end",
  [sym_file_descriptor] = "file_descriptor",
  [sym__empty_value] = "_empty_value",
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
  [anon_sym_function] = "function",
  [anon_sym_LPAREN] = "(",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
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
  [anon_sym_EQ] = "=",
  [anon_sym_DQUOTE] = "\"",
  [sym__quoted_chars] = "_quoted_chars",
  [sym_single_quoted_argument] = "single_quoted_argument",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_COLON_QMARK] = ":?",
  [anon_sym_COLON_DASH] = ":-",
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
  [sym_function_definition] = "function_definition",
  [sym_compound_command] = "compound_command",
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
  [sym__empty_value] = {
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
  [anon_sym_function] = {
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
  [anon_sym_LBRACE] = {
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
  [sym_function_definition] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_compound_command] = {
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
        ADVANCE(48);
      if (lookahead == 't')
        ADVANCE(51);
      if (lookahead == 'w')
        ADVANCE(55);
      if (lookahead == '{')
        ADVANCE(60);
      if (lookahead == '|')
        ADVANCE(61);
      if (lookahead == '}')
        ADVANCE(63);
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
      if (lookahead == 'u')
        ADVANCE(41);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_fi);
      END_STATE();
    case 41:
      if (lookahead == 'n')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'c')
        ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 't')
        ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 'i')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'o')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'n')
        ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 48:
      if (lookahead == 'f')
        ADVANCE(49);
      if (lookahead == 'n')
        ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 51:
      if (lookahead == 'h')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'e')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'n')
        ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 55:
      if (lookahead == 'h')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'i')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'l')
        ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'e')
        ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|')
        ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 64:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(65);
      if (lookahead == '\'')
        ADVANCE(69);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(73);
      if (lookahead == '>')
        ADVANCE(75);
      if (lookahead == '[')
        ADVANCE(78);
      if (lookahead == '\\')
        SKIP(80);
      if (lookahead == 'c')
        ADVANCE(81);
      if (lookahead == 'f')
        ADVANCE(85);
      if (lookahead == 'i')
        ADVANCE(93);
      if (lookahead == 'w')
        ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(64);
      if ((lookahead < '&' || lookahead > ')') &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(68);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == '>')
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
          lookahead != '>' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(68);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_AMP_GT);
      if (lookahead == '>')
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
          lookahead != '>' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(68);
      END_STATE();
    case 67:
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
        ADVANCE(68);
      END_STATE();
    case 68:
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
        ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == '\'')
        ADVANCE(70);
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
        ADVANCE(71);
      if (lookahead != 0)
        ADVANCE(69);
      END_STATE();
    case 70:
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
        ADVANCE(68);
      END_STATE();
    case 71:
      if (lookahead == '\'')
        ADVANCE(72);
      if (lookahead != 0)
        ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_single_quoted_argument);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&')
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
        ADVANCE(68);
      END_STATE();
    case 74:
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
        ADVANCE(68);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '&')
        ADVANCE(76);
      if (lookahead == '>')
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
          lookahead != '>' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(68);
      END_STATE();
    case 76:
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
        ADVANCE(68);
      END_STATE();
    case 77:
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
        ADVANCE(68);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[')
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
          lookahead != '[' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(68);
      END_STATE();
    case 79:
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
        ADVANCE(68);
      END_STATE();
    case 80:
      if (lookahead == '\n')
        SKIP(64);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'a')
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
        ADVANCE(68);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 's')
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
        ADVANCE(68);
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
        ADVANCE(68);
      END_STATE();
    case 84:
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
        ADVANCE(68);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'u')
        ADVANCE(86);
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
        ADVANCE(68);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'n')
        ADVANCE(87);
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
        ADVANCE(68);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'c')
        ADVANCE(88);
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
        ADVANCE(68);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 't')
        ADVANCE(89);
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
        ADVANCE(68);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(90);
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
        ADVANCE(68);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'o')
        ADVANCE(91);
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
        ADVANCE(68);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'n')
        ADVANCE(92);
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
        ADVANCE(68);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_function);
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
        ADVANCE(68);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'f')
        ADVANCE(94);
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
        ADVANCE(68);
      END_STATE();
    case 94:
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
        ADVANCE(68);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'h')
        ADVANCE(96);
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
        ADVANCE(68);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(97);
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
        ADVANCE(68);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'l')
        ADVANCE(98);
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
        ADVANCE(68);
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
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(68);
      END_STATE();
    case 99:
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
        ADVANCE(68);
      END_STATE();
    case 100:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(101);
      if (lookahead == '<')
        ADVANCE(104);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(100);
      END_STATE();
    case 101:
      if (lookahead == '>')
        ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_AMP_GT);
      if (lookahead == '>')
        ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_AMP_GT_GT);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&')
        ADVANCE(11);
      END_STATE();
    case 105:
      if (lookahead == '\n')
        SKIP(100);
      END_STATE();
    case 106:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(65);
      if (lookahead == '\'')
        ADVANCE(69);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(73);
      if (lookahead == '>')
        ADVANCE(75);
      if (lookahead == '[')
        ADVANCE(78);
      if (lookahead == '\\')
        SKIP(107);
      if (lookahead == 'c')
        ADVANCE(81);
      if (lookahead == 'f')
        ADVANCE(85);
      if (lookahead == 'i')
        ADVANCE(93);
      if (lookahead == 'w')
        ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(106);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(68);
      END_STATE();
    case 107:
      if (lookahead == '\n')
        SKIP(106);
      END_STATE();
    case 108:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(109);
      if (lookahead == '\'')
        ADVANCE(112);
      if (lookahead == '\\')
        SKIP(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(108);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(114);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '(')
        ADVANCE(110);
      if (lookahead == '{')
        ADVANCE(111);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\'')
        ADVANCE(113);
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
        ADVANCE(71);
      if (lookahead != 0)
        ADVANCE(112);
      END_STATE();
    case 113:
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
        ADVANCE(114);
      END_STATE();
    case 114:
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
        ADVANCE(114);
      END_STATE();
    case 115:
      if (lookahead == '\n')
        SKIP(108);
      END_STATE();
    case 116:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(116);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(68);
      END_STATE();
    case 117:
      if (lookahead == '\n')
        SKIP(116);
      END_STATE();
    case 118:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(65);
      if (lookahead == '\'')
        ADVANCE(69);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(73);
      if (lookahead == '>')
        ADVANCE(75);
      if (lookahead == '[')
        ADVANCE(78);
      if (lookahead == '\\')
        SKIP(119);
      if (lookahead == 'c')
        ADVANCE(81);
      if (lookahead == 'f')
        ADVANCE(85);
      if (lookahead == 'i')
        ADVANCE(93);
      if (lookahead == 'w')
        ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(118);
      if (lookahead != 0 &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(68);
      END_STATE();
    case 119:
      if (lookahead == '\n')
        SKIP(118);
      END_STATE();
    case 120:
      if (lookahead == '\n')
        ADVANCE(121);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(123);
      if (lookahead == ';')
        ADVANCE(125);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(127);
      if (lookahead == '|')
        ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(122);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&')
        ADVANCE(124);
      if (lookahead == '>')
        ADVANCE(102);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == ';')
        ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_SEMI_SEMI);
      END_STATE();
    case 127:
      if (lookahead == '\n')
        SKIP(120);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '&')
        ADVANCE(129);
      if (lookahead == '|')
        ADVANCE(62);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_PIPE_AMP);
      END_STATE();
    case 130:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(131);
      if (lookahead == '$')
        ADVANCE(109);
      if (lookahead == '\\')
        ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(134);
      if (lookahead != 0)
        ADVANCE(132);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(132);
      if (lookahead == '\"' ||
          lookahead == '$')
        ADVANCE(3);
      if (lookahead != 0)
        ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(132);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '#')
        ADVANCE(131);
      if (lookahead == '\\')
        ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(134);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(132);
      END_STATE();
    case 135:
      if (lookahead == '\n')
        ADVANCE(136);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(123);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ';')
        ADVANCE(125);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(138);
      if (lookahead == '|')
        ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(137);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(137);
      END_STATE();
    case 138:
      if (lookahead == '\n')
        SKIP(135);
      END_STATE();
    case 139:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(140);
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
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(65);
      if (lookahead == '\'')
        ADVANCE(69);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == ';')
        ADVANCE(142);
      if (lookahead == '<')
        ADVANCE(73);
      if (lookahead == '>')
        ADVANCE(75);
      if (lookahead == '[')
        ADVANCE(78);
      if (lookahead == '\\')
        SKIP(143);
      if (lookahead == 'c')
        ADVANCE(81);
      if (lookahead == 'd')
        ADVANCE(144);
      if (lookahead == 'e')
        ADVANCE(148);
      if (lookahead == 'f')
        ADVANCE(154);
      if (lookahead == 'i')
        ADVANCE(93);
      if (lookahead == 'w')
        ADVANCE(95);
      if (lookahead == '}')
        ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(141);
      if ((lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(68);
      END_STATE();
    case 142:
      if (lookahead == ';')
        ADVANCE(126);
      END_STATE();
    case 143:
      if (lookahead == '\n')
        SKIP(141);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'o')
        ADVANCE(145);
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
        ADVANCE(68);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'n')
        ADVANCE(146);
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
        ADVANCE(68);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(147);
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
        ADVANCE(68);
      END_STATE();
    case 147:
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
        ADVANCE(68);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'l')
        ADVANCE(149);
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
        ADVANCE(68);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(150);
      if (lookahead == 's')
        ADVANCE(152);
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
        ADVANCE(68);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'f')
        ADVANCE(151);
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
        ADVANCE(68);
      END_STATE();
    case 151:
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
        ADVANCE(68);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(153);
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
        ADVANCE(68);
      END_STATE();
    case 153:
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
        ADVANCE(68);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(155);
      if (lookahead == 'u')
        ADVANCE(86);
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
        ADVANCE(68);
      END_STATE();
    case 155:
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
        ADVANCE(68);
      END_STATE();
    case 156:
      if (lookahead == '\n')
        ADVANCE(157);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(158);
      if (lookahead == ';')
        ADVANCE(125);
      if (lookahead == '\\')
        SKIP(159);
      if (lookahead == '|')
        ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&')
        ADVANCE(124);
      END_STATE();
    case 159:
      if (lookahead == '\n')
        SKIP(156);
      END_STATE();
    case 160:
      if (lookahead == '\n')
        ADVANCE(157);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(161);
      if (lookahead == '\'')
        ADVANCE(69);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == ';')
        ADVANCE(125);
      if (lookahead == '<')
        ADVANCE(73);
      if (lookahead == '>')
        ADVANCE(75);
      if (lookahead == '\\')
        SKIP(163);
      if (lookahead == '|')
        ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(160);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(68);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&')
        ADVANCE(162);
      if (lookahead == '>')
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
          lookahead != '>' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(68);
      END_STATE();
    case 162:
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
        ADVANCE(68);
      END_STATE();
    case 163:
      if (lookahead == '\n')
        SKIP(160);
      END_STATE();
    case 164:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(65);
      if (lookahead == '\'')
        ADVANCE(69);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(73);
      if (lookahead == '>')
        ADVANCE(75);
      if (lookahead == '\\')
        SKIP(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(164);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(68);
      END_STATE();
    case 165:
      if (lookahead == '\n')
        SKIP(164);
      END_STATE();
    case 166:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(167);
      if (lookahead == 'd')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(166);
      END_STATE();
    case 167:
      if (lookahead == '\n')
        SKIP(166);
      END_STATE();
    case 168:
      if (lookahead == 'o')
        ADVANCE(169);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 170:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(171);
      if (lookahead == 't')
        ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(170);
      END_STATE();
    case 171:
      if (lookahead == '\n')
        SKIP(170);
      END_STATE();
    case 172:
      if (lookahead == '\n')
        ADVANCE(157);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(125);
      if (lookahead == '\\')
        SKIP(173);
      if (lookahead == 'i')
        ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(172);
      END_STATE();
    case 173:
      if (lookahead == '\n')
        SKIP(172);
      END_STATE();
    case 174:
      if (lookahead == 'n')
        ADVANCE(50);
      END_STATE();
    case 175:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '\\')
        SKIP(176);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(175);
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
        ADVANCE(114);
      END_STATE();
    case 176:
      if (lookahead == '\n')
        SKIP(175);
      END_STATE();
    case 177:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == '\\')
        SKIP(178);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(177);
      END_STATE();
    case 178:
      if (lookahead == '\n')
        SKIP(177);
      END_STATE();
    case 179:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(109);
      if (lookahead == '\'')
        ADVANCE(112);
      if (lookahead == '\\')
        SKIP(180);
      if (lookahead == ']')
        ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(179);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(114);
      END_STATE();
    case 180:
      if (lookahead == '\n')
        SKIP(179);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']')
        ADVANCE(182);
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
        ADVANCE(114);
      END_STATE();
    case 182:
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
        ADVANCE(114);
      END_STATE();
    case 183:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(109);
      if (lookahead == '\'')
        ADVANCE(112);
      if (lookahead == '\\')
        SKIP(184);
      if (lookahead == ']')
        ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(183);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(114);
      END_STATE();
    case 184:
      if (lookahead == '\n')
        SKIP(183);
      END_STATE();
    case 185:
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
        ADVANCE(114);
      END_STATE();
    case 186:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(109);
      if (lookahead == '\'')
        ADVANCE(112);
      if (lookahead == '\\')
        SKIP(187);
      if (lookahead == ']')
        ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(186);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(114);
      END_STATE();
    case 187:
      if (lookahead == '\n')
        SKIP(186);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ']')
        ADVANCE(182);
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
        ADVANCE(114);
      END_STATE();
    case 189:
      if (lookahead == '\n')
        ADVANCE(157);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(109);
      if (lookahead == '&')
        ADVANCE(123);
      if (lookahead == '\'')
        ADVANCE(112);
      if (lookahead == ';')
        ADVANCE(125);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(190);
      if (lookahead == '|')
        ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(189);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(114);
      END_STATE();
    case 190:
      if (lookahead == '\n')
        SKIP(189);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '&')
        ADVANCE(129);
      if (lookahead == '|')
        ADVANCE(192);
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
        ADVANCE(114);
      END_STATE();
    case 192:
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
        ADVANCE(114);
      END_STATE();
    case 193:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(193);
      END_STATE();
    case 194:
      if (lookahead == '\n')
        SKIP(193);
      END_STATE();
    case 195:
      if (lookahead == '\n')
        ADVANCE(157);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(123);
      if (lookahead == ';')
        ADVANCE(125);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(196);
      if (lookahead == '|')
        ADVANCE(128);
      if (lookahead == '\t' ||
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
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '\\')
        SKIP(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(197);
      END_STATE();
    case 198:
      if (lookahead == '\n')
        SKIP(197);
      END_STATE();
    case 199:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(65);
      if (lookahead == '\'')
        ADVANCE(69);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == ';')
        ADVANCE(142);
      if (lookahead == '<')
        ADVANCE(73);
      if (lookahead == '>')
        ADVANCE(75);
      if (lookahead == '[')
        ADVANCE(78);
      if (lookahead == '\\')
        SKIP(200);
      if (lookahead == 'c')
        ADVANCE(81);
      if (lookahead == 'd')
        ADVANCE(201);
      if (lookahead == 'e')
        ADVANCE(148);
      if (lookahead == 'f')
        ADVANCE(154);
      if (lookahead == 'i')
        ADVANCE(93);
      if (lookahead == 't')
        ADVANCE(203);
      if (lookahead == 'w')
        ADVANCE(95);
      if (lookahead == '}')
        ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(199);
      if ((lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(68);
      END_STATE();
    case 200:
      if (lookahead == '\n')
        SKIP(199);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'o')
        ADVANCE(202);
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
        ADVANCE(68);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == 'n')
        ADVANCE(146);
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
        ADVANCE(68);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'h')
        ADVANCE(204);
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
        ADVANCE(68);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(205);
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
        ADVANCE(68);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'n')
        ADVANCE(206);
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
        ADVANCE(68);
      END_STATE();
    case 206:
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
        ADVANCE(68);
      END_STATE();
    case 207:
      if (lookahead == '\n')
        ADVANCE(208);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(123);
      if (lookahead == ';')
        ADVANCE(125);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(210);
      if (lookahead == '|')
        ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(209);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(209);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(209);
      END_STATE();
    case 210:
      if (lookahead == '\n')
        SKIP(207);
      END_STATE();
    case 211:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(65);
      if (lookahead == '\'')
        ADVANCE(69);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(73);
      if (lookahead == '>')
        ADVANCE(75);
      if (lookahead == '[')
        ADVANCE(78);
      if (lookahead == '\\')
        SKIP(212);
      if (lookahead == 'c')
        ADVANCE(81);
      if (lookahead == 'd')
        ADVANCE(144);
      if (lookahead == 'f')
        ADVANCE(85);
      if (lookahead == 'i')
        ADVANCE(93);
      if (lookahead == 'w')
        ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(211);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(68);
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
      if (lookahead == 'd')
        ADVANCE(168);
      if (lookahead == 't')
        ADVANCE(51);
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
      if (lookahead == '&')
        ADVANCE(65);
      if (lookahead == '\'')
        ADVANCE(69);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(73);
      if (lookahead == '>')
        ADVANCE(75);
      if (lookahead == '[')
        ADVANCE(78);
      if (lookahead == '\\')
        SKIP(216);
      if (lookahead == 'c')
        ADVANCE(81);
      if (lookahead == 'e')
        ADVANCE(148);
      if (lookahead == 'f')
        ADVANCE(154);
      if (lookahead == 'i')
        ADVANCE(93);
      if (lookahead == 'w')
        ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(215);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(68);
      END_STATE();
    case 216:
      if (lookahead == '\n')
        SKIP(215);
      END_STATE();
    case 217:
      if (lookahead == '\n')
        ADVANCE(157);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(125);
      if (lookahead == '\\')
        SKIP(218);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(217);
      END_STATE();
    case 218:
      if (lookahead == '\n')
        SKIP(217);
      END_STATE();
    case 219:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(220);
      if (lookahead == 'i')
        ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(219);
      END_STATE();
    case 220:
      if (lookahead == '\n')
        SKIP(219);
      END_STATE();
    case 221:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ':')
        ADVANCE(222);
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == '\\')
        SKIP(225);
      if (lookahead == '}')
        ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-')
        ADVANCE(223);
      if (lookahead == '?')
        ADVANCE(224);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_COLON_QMARK);
      END_STATE();
    case 225:
      if (lookahead == '\n')
        SKIP(221);
      END_STATE();
    case 226:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(101);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(228);
      END_STATE();
    case 227:
      if (lookahead == '\n')
        SKIP(226);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(228);
      END_STATE();
    case 229:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(101);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(231);
      END_STATE();
    case 230:
      if (lookahead == '\n')
        SKIP(229);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(231);
      END_STATE();
    case 232:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(109);
      if (lookahead == '\'')
        ADVANCE(112);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '\\')
        SKIP(233);
      if (lookahead == ']')
        ADVANCE(181);
      if (lookahead == '}')
        ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(232);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{')
        ADVANCE(114);
      END_STATE();
    case 233:
      if (lookahead == '\n')
        SKIP(232);
      END_STATE();
    case 234:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(235);
      if (lookahead == '\\')
        SKIP(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{')
        ADVANCE(111);
      END_STATE();
    case 236:
      if (lookahead == '\n')
        SKIP(234);
      END_STATE();
    case 237:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(238);
      if (lookahead == '{')
        ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(237);
      END_STATE();
    case 238:
      if (lookahead == '\n')
        SKIP(237);
      END_STATE();
    case 239:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(65);
      if (lookahead == '\'')
        ADVANCE(69);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(73);
      if (lookahead == '>')
        ADVANCE(75);
      if (lookahead == '[')
        ADVANCE(78);
      if (lookahead == '\\')
        SKIP(240);
      if (lookahead == 'c')
        ADVANCE(81);
      if (lookahead == 'f')
        ADVANCE(154);
      if (lookahead == 'i')
        ADVANCE(93);
      if (lookahead == 'w')
        ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(239);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(68);
      END_STATE();
    case 240:
      if (lookahead == '\n')
        SKIP(239);
      END_STATE();
    case 241:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(242);
      if (lookahead == 'e')
        ADVANCE(243);
      if (lookahead == 'f')
        ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(241);
      END_STATE();
    case 242:
      if (lookahead == '\n')
        SKIP(241);
      END_STATE();
    case 243:
      if (lookahead == 'l')
        ADVANCE(31);
      END_STATE();
    case 244:
      if (lookahead == 'i')
        ADVANCE(40);
      END_STATE();
    case 245:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(246);
      if (lookahead == 'f')
        ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(245);
      END_STATE();
    case 246:
      if (lookahead == '\n')
        SKIP(245);
      END_STATE();
    case 247:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(109);
      if (lookahead == '\'')
        ADVANCE(112);
      if (lookahead == '\\')
        SKIP(248);
      if (lookahead == 'e')
        ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(247);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(114);
      END_STATE();
    case 248:
      if (lookahead == '\n')
        SKIP(247);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's')
        ADVANCE(250);
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
        ADVANCE(114);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a')
        ADVANCE(251);
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
        ADVANCE(114);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c')
        ADVANCE(252);
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
        ADVANCE(114);
      END_STATE();
    case 252:
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
        ADVANCE(114);
      END_STATE();
    case 253:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(109);
      if (lookahead == '&')
        ADVANCE(101);
      if (lookahead == '\'')
        ADVANCE(112);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(254);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(253);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(114);
      END_STATE();
    case 254:
      if (lookahead == '\n')
        SKIP(253);
      END_STATE();
    case 255:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(101);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(256);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(255);
      END_STATE();
    case 256:
      if (lookahead == '\n')
        SKIP(255);
      END_STATE();
    case 257:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(65);
      if (lookahead == '\'')
        ADVANCE(69);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(73);
      if (lookahead == '>')
        ADVANCE(75);
      if (lookahead == '[')
        ADVANCE(78);
      if (lookahead == '\\')
        SKIP(258);
      if (lookahead == 'c')
        ADVANCE(81);
      if (lookahead == 'f')
        ADVANCE(85);
      if (lookahead == 'i')
        ADVANCE(93);
      if (lookahead == 'w')
        ADVANCE(95);
      if (lookahead == '}')
        ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(257);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(68);
      END_STATE();
    case 258:
      if (lookahead == '\n')
        SKIP(257);
      END_STATE();
    case 259:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(260);
      if (lookahead == '}')
        ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(259);
      END_STATE();
    case 260:
      if (lookahead == '\n')
        SKIP(259);
      END_STATE();
    case 261:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(65);
      if (lookahead == '\'')
        ADVANCE(69);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == ';')
        ADVANCE(142);
      if (lookahead == '<')
        ADVANCE(73);
      if (lookahead == '>')
        ADVANCE(75);
      if (lookahead == '[')
        ADVANCE(78);
      if (lookahead == '\\')
        SKIP(262);
      if (lookahead == 'c')
        ADVANCE(81);
      if (lookahead == 'f')
        ADVANCE(85);
      if (lookahead == 'i')
        ADVANCE(93);
      if (lookahead == 'w')
        ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(261);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(68);
      END_STATE();
    case 262:
      if (lookahead == '\n')
        SKIP(261);
      END_STATE();
    case 263:
      if (lookahead == '\n')
        ADVANCE(264);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(131);
      if (lookahead == '$')
        ADVANCE(319);
      if (lookahead == '&')
        ADVANCE(265);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == '(')
        ADVANCE(276);
      if (lookahead == ')')
        ADVANCE(277);
      if (lookahead == ':')
        ADVANCE(278);
      if (lookahead == ';')
        ADVANCE(279);
      if (lookahead == '<')
        ADVANCE(281);
      if (lookahead == '=')
        ADVANCE(272);
      if (lookahead == '>')
        ADVANCE(285);
      if (lookahead == '[')
        ADVANCE(288);
      if (lookahead == '\\')
        ADVANCE(290);
      if (lookahead == ']')
        ADVANCE(292);
      if (lookahead == 'c')
        ADVANCE(294);
      if (lookahead == 'f')
        ADVANCE(298);
      if (lookahead == 'i')
        ADVANCE(306);
      if (lookahead == 'w')
        ADVANCE(309);
      if (lookahead == '{')
        ADVANCE(314);
      if (lookahead == '|')
        ADVANCE(315);
      if (lookahead == '}')
        ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(291);
      if (lookahead != 0)
        ADVANCE(271);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(264);
      if (lookahead == '#')
        ADVANCE(131);
      if (lookahead == '&')
        ADVANCE(265);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == '(')
        ADVANCE(276);
      if (lookahead == ')')
        ADVANCE(277);
      if (lookahead == ':')
        ADVANCE(278);
      if (lookahead == ';')
        ADVANCE(279);
      if (lookahead == '<')
        ADVANCE(281);
      if (lookahead == '=')
        ADVANCE(272);
      if (lookahead == '>')
        ADVANCE(285);
      if (lookahead == '[')
        ADVANCE(288);
      if (lookahead == '\\')
        ADVANCE(290);
      if (lookahead == ']')
        ADVANCE(292);
      if (lookahead == 'c')
        ADVANCE(294);
      if (lookahead == 'f')
        ADVANCE(298);
      if (lookahead == 'i')
        ADVANCE(306);
      if (lookahead == 'w')
        ADVANCE(309);
      if (lookahead == '{')
        ADVANCE(314);
      if (lookahead == '|')
        ADVANCE(315);
      if (lookahead == '}')
        ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(291);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '$')
        ADVANCE(68);
      if (lookahead == '&')
        ADVANCE(266);
      if (lookahead == '>')
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
        ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(267);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      if (lookahead == '$')
        ADVANCE(68);
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
        ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(267);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(68);
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
        ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_AMP_GT);
      if (lookahead == '$')
        ADVANCE(68);
      if (lookahead == '>')
        ADVANCE(269);
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
        ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(267);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_AMP_GT_GT);
      if (lookahead == '$')
        ADVANCE(68);
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
        ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(267);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\"')
        ADVANCE(71);
      if (lookahead == '$')
        ADVANCE(69);
      if (lookahead == '\'')
        ADVANCE(271);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(273);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(275);
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
        ADVANCE(274);
      if (lookahead != 0)
        ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(68);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(267);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(272);
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
        ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 272:
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
        ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\"')
        ADVANCE(71);
      if (lookahead == '$')
        ADVANCE(69);
      if (lookahead == '\'')
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
        ADVANCE(274);
      if (lookahead != 0)
        ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\'')
        ADVANCE(132);
      if (lookahead == '\"' ||
          lookahead == '$')
        ADVANCE(71);
      if (lookahead != 0)
        ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\'')
        ADVANCE(272);
      if (lookahead == '\"' ||
          lookahead == '$')
        ADVANCE(71);
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
        ADVANCE(274);
      if (lookahead != 0)
        ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(132);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(132);
      END_STATE();
    case 278:
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
        ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(272);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == ';')
        ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(132);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_SEMI_SEMI);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(132);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '$')
        ADVANCE(68);
      if (lookahead == '&')
        ADVANCE(282);
      if (lookahead == '<')
        ADVANCE(283);
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
        ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(267);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_LT_AMP);
      if (lookahead == '$')
        ADVANCE(68);
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
        ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(267);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '$')
        ADVANCE(68);
      if (lookahead == '-')
        ADVANCE(284);
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
        ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(267);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH);
      if (lookahead == '$')
        ADVANCE(68);
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
        ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(267);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '$')
        ADVANCE(68);
      if (lookahead == '&')
        ADVANCE(286);
      if (lookahead == '>')
        ADVANCE(287);
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
        ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(267);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_GT_AMP);
      if (lookahead == '$')
        ADVANCE(68);
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
        ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(267);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '$')
        ADVANCE(68);
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
        ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(267);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '$')
        ADVANCE(68);
      if (lookahead == '[')
        ADVANCE(289);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(267);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(272);
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
        ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      if (lookahead == '$')
        ADVANCE(68);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(267);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(272);
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
        ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(132);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(264);
      if (lookahead == '#')
        ADVANCE(131);
      if (lookahead == '&')
        ADVANCE(265);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == '(')
        ADVANCE(276);
      if (lookahead == ')')
        ADVANCE(277);
      if (lookahead == ':')
        ADVANCE(278);
      if (lookahead == ';')
        ADVANCE(279);
      if (lookahead == '<')
        ADVANCE(281);
      if (lookahead == '=')
        ADVANCE(272);
      if (lookahead == '>')
        ADVANCE(285);
      if (lookahead == '[')
        ADVANCE(288);
      if (lookahead == '\\')
        ADVANCE(290);
      if (lookahead == ']')
        ADVANCE(292);
      if (lookahead == 'c')
        ADVANCE(294);
      if (lookahead == 'f')
        ADVANCE(298);
      if (lookahead == 'i')
        ADVANCE(306);
      if (lookahead == 'w')
        ADVANCE(309);
      if (lookahead == '{')
        ADVANCE(314);
      if (lookahead == '|')
        ADVANCE(315);
      if (lookahead == '}')
        ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(291);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '$')
        ADVANCE(68);
      if (lookahead == ']')
        ADVANCE(293);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(267);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(272);
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
        ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      if (lookahead == '$')
        ADVANCE(68);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(267);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(272);
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
        ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(68);
      if (lookahead == 'a')
        ADVANCE(295);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(267);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(272);
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
        ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(68);
      if (lookahead == 's')
        ADVANCE(296);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(267);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(272);
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
        ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(68);
      if (lookahead == 'e')
        ADVANCE(297);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(267);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(272);
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
        ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '$')
        ADVANCE(68);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(267);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(272);
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
        ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(68);
      if (lookahead == 'u')
        ADVANCE(299);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(267);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(272);
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
        ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(68);
      if (lookahead == 'n')
        ADVANCE(300);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(267);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(272);
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
        ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(68);
      if (lookahead == 'c')
        ADVANCE(301);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(267);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(272);
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
        ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(68);
      if (lookahead == 't')
        ADVANCE(302);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(267);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(272);
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
        ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(68);
      if (lookahead == 'i')
        ADVANCE(303);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(267);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(272);
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
        ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(68);
      if (lookahead == 'o')
        ADVANCE(304);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(267);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(272);
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
        ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(68);
      if (lookahead == 'n')
        ADVANCE(305);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(267);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(272);
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
        ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead == '$')
        ADVANCE(68);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(267);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(272);
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
        ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(68);
      if (lookahead == 'f')
        ADVANCE(307);
      if (lookahead == 'n')
        ADVANCE(308);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(267);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(272);
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
        ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '$')
        ADVANCE(68);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(267);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(272);
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
        ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '$')
        ADVANCE(68);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(267);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(272);
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
        ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(68);
      if (lookahead == 'h')
        ADVANCE(310);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(267);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(272);
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
        ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(68);
      if (lookahead == 'i')
        ADVANCE(311);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(267);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(272);
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
        ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(68);
      if (lookahead == 'l')
        ADVANCE(312);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(267);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(272);
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
        ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(68);
      if (lookahead == 'e')
        ADVANCE(313);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(267);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(272);
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
        ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '$')
        ADVANCE(68);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(267);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(272);
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
        ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(132);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '&')
        ADVANCE(316);
      if (lookahead == '|')
        ADVANCE(317);
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
        ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(272);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_PIPE_AMP);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(132);
      END_STATE();
    case 317:
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
        ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(272);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(132);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '(')
        ADVANCE(110);
      if (lookahead == '{')
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
        ADVANCE(68);
      END_STATE();
    case 320:
      if (lookahead == '\n')
        ADVANCE(321);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(131);
      if (lookahead == '$')
        ADVANCE(319);
      if (lookahead == '&')
        ADVANCE(265);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == ')')
        ADVANCE(277);
      if (lookahead == ':')
        ADVANCE(278);
      if (lookahead == ';')
        ADVANCE(279);
      if (lookahead == '<')
        ADVANCE(281);
      if (lookahead == '=')
        ADVANCE(272);
      if (lookahead == '>')
        ADVANCE(285);
      if (lookahead == '\\')
        ADVANCE(322);
      if (lookahead == ']')
        ADVANCE(292);
      if (lookahead == 'i')
        ADVANCE(324);
      if (lookahead == '|')
        ADVANCE(315);
      if (lookahead == '}')
        ADVANCE(318);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(323);
      if (lookahead != 0)
        ADVANCE(271);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(321);
      if (lookahead == '#')
        ADVANCE(131);
      if (lookahead == '&')
        ADVANCE(265);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == ')')
        ADVANCE(277);
      if (lookahead == ':')
        ADVANCE(278);
      if (lookahead == ';')
        ADVANCE(279);
      if (lookahead == '<')
        ADVANCE(281);
      if (lookahead == '=')
        ADVANCE(272);
      if (lookahead == '>')
        ADVANCE(285);
      if (lookahead == '\\')
        ADVANCE(322);
      if (lookahead == ']')
        ADVANCE(292);
      if (lookahead == 'i')
        ADVANCE(324);
      if (lookahead == '|')
        ADVANCE(315);
      if (lookahead == '}')
        ADVANCE(318);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(323);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(132);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(321);
      if (lookahead == '#')
        ADVANCE(131);
      if (lookahead == '&')
        ADVANCE(265);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == ')')
        ADVANCE(277);
      if (lookahead == ':')
        ADVANCE(278);
      if (lookahead == ';')
        ADVANCE(279);
      if (lookahead == '<')
        ADVANCE(281);
      if (lookahead == '=')
        ADVANCE(272);
      if (lookahead == '>')
        ADVANCE(285);
      if (lookahead == '\\')
        ADVANCE(322);
      if (lookahead == ']')
        ADVANCE(292);
      if (lookahead == 'i')
        ADVANCE(324);
      if (lookahead == '|')
        ADVANCE(315);
      if (lookahead == '}')
        ADVANCE(318);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(323);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(68);
      if (lookahead == 'n')
        ADVANCE(308);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(267);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(272);
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
        ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 325:
      if (lookahead == '\n')
        ADVANCE(326);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(109);
      if (lookahead == '&')
        ADVANCE(123);
      if (lookahead == '\'')
        ADVANCE(112);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(125);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(328);
      if (lookahead == '|')
        ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(327);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(114);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(327);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(327);
      END_STATE();
    case 328:
      if (lookahead == '\n')
        SKIP(325);
      END_STATE();
    case 329:
      if (lookahead == '\n')
        ADVANCE(330);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(131);
      if (lookahead == '$')
        ADVANCE(319);
      if (lookahead == '&')
        ADVANCE(265);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == ')')
        ADVANCE(277);
      if (lookahead == ':')
        ADVANCE(278);
      if (lookahead == ';')
        ADVANCE(279);
      if (lookahead == '<')
        ADVANCE(281);
      if (lookahead == '=')
        ADVANCE(272);
      if (lookahead == '>')
        ADVANCE(285);
      if (lookahead == '\\')
        ADVANCE(331);
      if (lookahead == ']')
        ADVANCE(292);
      if (lookahead == 'i')
        ADVANCE(324);
      if (lookahead == '|')
        ADVANCE(315);
      if (lookahead == '}')
        ADVANCE(318);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(333);
      if (lookahead != 0)
        ADVANCE(271);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(330);
      if (lookahead == '#')
        ADVANCE(131);
      if (lookahead == '&')
        ADVANCE(265);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == ')')
        ADVANCE(277);
      if (lookahead == ':')
        ADVANCE(278);
      if (lookahead == ';')
        ADVANCE(279);
      if (lookahead == '<')
        ADVANCE(281);
      if (lookahead == '=')
        ADVANCE(272);
      if (lookahead == '>')
        ADVANCE(285);
      if (lookahead == '\\')
        ADVANCE(331);
      if (lookahead == ']')
        ADVANCE(292);
      if (lookahead == 'i')
        ADVANCE(324);
      if (lookahead == '|')
        ADVANCE(315);
      if (lookahead == '}')
        ADVANCE(318);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(333);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(132);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(330);
      if (lookahead == '#')
        ADVANCE(131);
      if (lookahead == '&')
        ADVANCE(265);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == ')')
        ADVANCE(277);
      if (lookahead == ':')
        ADVANCE(278);
      if (lookahead == ';')
        ADVANCE(279);
      if (lookahead == '<')
        ADVANCE(281);
      if (lookahead == '=')
        ADVANCE(272);
      if (lookahead == '>')
        ADVANCE(285);
      if (lookahead == '\\')
        ADVANCE(331);
      if (lookahead == ']')
        ADVANCE(292);
      if (lookahead == 'i')
        ADVANCE(324);
      if (lookahead == '|')
        ADVANCE(315);
      if (lookahead == '}')
        ADVANCE(318);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(333);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(330);
      if (lookahead == '#')
        ADVANCE(131);
      if (lookahead == '&')
        ADVANCE(265);
      if (lookahead == '\'')
        ADVANCE(270);
      if (lookahead == ')')
        ADVANCE(277);
      if (lookahead == ':')
        ADVANCE(278);
      if (lookahead == ';')
        ADVANCE(279);
      if (lookahead == '<')
        ADVANCE(281);
      if (lookahead == '=')
        ADVANCE(272);
      if (lookahead == '>')
        ADVANCE(285);
      if (lookahead == '\\')
        ADVANCE(331);
      if (lookahead == ']')
        ADVANCE(292);
      if (lookahead == 'i')
        ADVANCE(324);
      if (lookahead == '|')
        ADVANCE(315);
      if (lookahead == '}')
        ADVANCE(318);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(333);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(271);
      END_STATE();
    case 334:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(319);
      if (lookahead == '&')
        ADVANCE(65);
      if (lookahead == '\'')
        ADVANCE(335);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ':')
        ADVANCE(338);
      if (lookahead == ';')
        ADVANCE(142);
      if (lookahead == '<')
        ADVANCE(73);
      if (lookahead == '>')
        ADVANCE(75);
      if (lookahead == '[')
        ADVANCE(339);
      if (lookahead == '\\')
        SKIP(341);
      if (lookahead == 'c')
        ADVANCE(342);
      if (lookahead == 'd')
        ADVANCE(346);
      if (lookahead == 'e')
        ADVANCE(350);
      if (lookahead == 'f')
        ADVANCE(359);
      if (lookahead == 'i')
        ADVANCE(368);
      if (lookahead == 't')
        ADVANCE(371);
      if (lookahead == 'w')
        ADVANCE(375);
      if (lookahead == '}')
        ADVANCE(63);
      if (lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(334);
      if ((lookahead < '{' || lookahead > '}'))
        ADVANCE(337);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == '\'')
        ADVANCE(336);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(71);
      if (lookahead != 0)
        ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_single_quoted_argument);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(68);
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
        ADVANCE(337);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(68);
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
        ADVANCE(337);
      END_STATE();
    case 338:
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
        ADVANCE(114);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[')
        ADVANCE(340);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(68);
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
        ADVANCE(337);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(68);
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
        ADVANCE(337);
      END_STATE();
    case 341:
      if (lookahead == '\n')
        SKIP(334);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'a')
        ADVANCE(343);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(68);
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
        ADVANCE(337);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 's')
        ADVANCE(344);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(68);
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
        ADVANCE(337);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(345);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(68);
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
        ADVANCE(337);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(68);
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
        ADVANCE(337);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'o')
        ADVANCE(347);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(68);
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
        ADVANCE(337);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == 'n')
        ADVANCE(348);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(68);
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
        ADVANCE(337);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(349);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(68);
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
        ADVANCE(337);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_done);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(68);
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
        ADVANCE(337);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'l')
        ADVANCE(351);
      if (lookahead == 's')
        ADVANCE(356);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(68);
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
        ADVANCE(337);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(352);
      if (lookahead == 's')
        ADVANCE(354);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(68);
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
        ADVANCE(337);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'f')
        ADVANCE(353);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(68);
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
        ADVANCE(337);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_elif);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(68);
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
        ADVANCE(337);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(355);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(68);
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
        ADVANCE(337);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(68);
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
        ADVANCE(337);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'a')
        ADVANCE(357);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(68);
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
        ADVANCE(337);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'c')
        ADVANCE(358);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(68);
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
        ADVANCE(337);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_esac);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(68);
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
        ADVANCE(337);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(360);
      if (lookahead == 'u')
        ADVANCE(361);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(68);
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
        ADVANCE(337);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_fi);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(68);
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
        ADVANCE(337);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'n')
        ADVANCE(362);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(68);
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
        ADVANCE(337);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'c')
        ADVANCE(363);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(68);
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
        ADVANCE(337);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 't')
        ADVANCE(364);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(68);
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
        ADVANCE(337);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(365);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(68);
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
        ADVANCE(337);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'o')
        ADVANCE(366);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(68);
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
        ADVANCE(337);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'n')
        ADVANCE(367);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(68);
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
        ADVANCE(337);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(68);
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
        ADVANCE(337);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'f')
        ADVANCE(369);
      if (lookahead == 'n')
        ADVANCE(370);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(68);
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
        ADVANCE(337);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(68);
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
        ADVANCE(337);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(68);
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
        ADVANCE(337);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'h')
        ADVANCE(372);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(68);
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
        ADVANCE(337);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(373);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(68);
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
        ADVANCE(337);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'n')
        ADVANCE(374);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(68);
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
        ADVANCE(337);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_then);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(68);
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
        ADVANCE(337);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'h')
        ADVANCE(376);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(68);
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
        ADVANCE(337);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(377);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(68);
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
        ADVANCE(337);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'l')
        ADVANCE(378);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(68);
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
        ADVANCE(337);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(379);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(68);
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
        ADVANCE(337);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(68);
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
        ADVANCE(337);
      END_STATE();
    case 380:
      if (lookahead == '\n')
        ADVANCE(157);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(123);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(125);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(381);
      if (lookahead == '|')
        ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(380);
      END_STATE();
    case 381:
      if (lookahead == '\n')
        SKIP(380);
      END_STATE();
    case 382:
      if (lookahead == '\n')
        ADVANCE(157);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(158);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(125);
      if (lookahead == '\\')
        SKIP(383);
      if (lookahead == '|')
        ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(382);
      END_STATE();
    case 383:
      if (lookahead == '\n')
        SKIP(382);
      END_STATE();
    case 384:
      if (lookahead == '\n')
        ADVANCE(385);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(319);
      if (lookahead == '&')
        ADVANCE(161);
      if (lookahead == '\'')
        ADVANCE(335);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ':')
        ADVANCE(338);
      if (lookahead == ';')
        ADVANCE(125);
      if (lookahead == '<')
        ADVANCE(387);
      if (lookahead == '=')
        ADVANCE(114);
      if (lookahead == '>')
        ADVANCE(75);
      if (lookahead == '\\')
        SKIP(390);
      if (lookahead == ']')
        ADVANCE(391);
      if (lookahead == 'i')
        ADVANCE(393);
      if (lookahead == '|')
        ADVANCE(191);
      if (lookahead == '}')
        ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(386);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(337);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(386);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(386);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&')
        ADVANCE(74);
      if (lookahead == '<')
        ADVANCE(388);
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
        ADVANCE(68);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '-')
        ADVANCE(389);
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
        ADVANCE(68);
      END_STATE();
    case 389:
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
        ADVANCE(68);
      END_STATE();
    case 390:
      if (lookahead == '\n')
        SKIP(384);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']')
        ADVANCE(392);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(68);
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
        ADVANCE(337);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(68);
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
        ADVANCE(337);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'n')
        ADVANCE(370);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(68);
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
        ADVANCE(337);
      END_STATE();
    case 394:
      if (lookahead == '\n')
        ADVANCE(157);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(161);
      if (lookahead == '\'')
        ADVANCE(69);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == ';')
        ADVANCE(125);
      if (lookahead == '<')
        ADVANCE(387);
      if (lookahead == '>')
        ADVANCE(75);
      if (lookahead == '\\')
        SKIP(395);
      if (lookahead == '|')
        ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(394);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(68);
      END_STATE();
    case 395:
      if (lookahead == '\n')
        SKIP(394);
      END_STATE();
    case 396:
      if (lookahead == '\n')
        ADVANCE(157);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(109);
      if (lookahead == '&')
        ADVANCE(123);
      if (lookahead == '\'')
        ADVANCE(112);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(125);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(397);
      if (lookahead == ']')
        ADVANCE(181);
      if (lookahead == '|')
        ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(396);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(114);
      END_STATE();
    case 397:
      if (lookahead == '\n')
        SKIP(396);
      END_STATE();
    case 398:
      if (lookahead == '\n')
        ADVANCE(157);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(158);
      if (lookahead == ';')
        ADVANCE(125);
      if (lookahead == '\\')
        SKIP(399);
      if (lookahead == '{')
        ADVANCE(60);
      if (lookahead == '|')
        ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(398);
      END_STATE();
    case 399:
      if (lookahead == '\n')
        SKIP(398);
      END_STATE();
    case 400:
      if (lookahead == '\n')
        ADVANCE(157);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(109);
      if (lookahead == '&')
        ADVANCE(123);
      if (lookahead == '\'')
        ADVANCE(112);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(125);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(401);
      if (lookahead == '|')
        ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(400);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(114);
      END_STATE();
    case 401:
      if (lookahead == '\n')
        SKIP(400);
      END_STATE();
    case 402:
      if (lookahead == '\n')
        ADVANCE(157);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(161);
      if (lookahead == '\'')
        ADVANCE(69);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == ';')
        ADVANCE(125);
      if (lookahead == '<')
        ADVANCE(73);
      if (lookahead == '>')
        ADVANCE(75);
      if (lookahead == '\\')
        SKIP(403);
      if (lookahead == '|')
        ADVANCE(128);
      if (lookahead == '}')
        ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(402);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(68);
      END_STATE();
    case 403:
      if (lookahead == '\n')
        SKIP(402);
      END_STATE();
    case 404:
      if (lookahead == '\n')
        ADVANCE(405);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(123);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(125);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(407);
      if (lookahead == '|')
        ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(406);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(405);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(406);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(405);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(406);
      END_STATE();
    case 407:
      if (lookahead == '\n')
        SKIP(404);
      END_STATE();
    case 408:
      if (lookahead == '\n')
        ADVANCE(409);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(123);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(125);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(411);
      if (lookahead == '|')
        ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(410);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(409);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(410);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(409);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(410);
      END_STATE();
    case 411:
      if (lookahead == '\n')
        SKIP(408);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 64, .external_lex_state = 2},
  [2] = {.lex_state = 100},
  [3] = {.lex_state = 106, .external_lex_state = 2},
  [4] = {.lex_state = 106, .external_lex_state = 2},
  [5] = {.lex_state = 108},
  [6] = {.lex_state = 116},
  [7] = {.lex_state = 118, .external_lex_state = 2},
  [8] = {.lex_state = 108},
  [9] = {.lex_state = 108},
  [10] = {.lex_state = 120, .external_lex_state = 2},
  [11] = {.lex_state = 130},
  [12] = {.lex_state = 108},
  [13] = {.lex_state = 135, .external_lex_state = 2},
  [14] = {.lex_state = 139},
  [15] = {.lex_state = 141, .external_lex_state = 2},
  [16] = {.lex_state = 156},
  [17] = {.lex_state = 160, .external_lex_state = 2},
  [18] = {.lex_state = 164, .external_lex_state = 2},
  [19] = {.lex_state = 64, .external_lex_state = 2},
  [20] = {.lex_state = 164, .external_lex_state = 2},
  [21] = {.lex_state = 108},
  [22] = {.lex_state = 166},
  [23] = {.lex_state = 156},
  [24] = {.lex_state = 160, .external_lex_state = 2},
  [25] = {.lex_state = 170},
  [26] = {.lex_state = 130},
  [27] = {.lex_state = 172},
  [28] = {.lex_state = 175},
  [29] = {.lex_state = 116},
  [30] = {.lex_state = 164, .external_lex_state = 2},
  [31] = {.lex_state = 172},
  [32] = {.lex_state = 177},
  [33] = {.lex_state = 156},
  [34] = {.lex_state = 118, .external_lex_state = 2},
  [35] = {.lex_state = 130},
  [36] = {.lex_state = 179},
  [37] = {.lex_state = 175},
  [38] = {.lex_state = 116},
  [39] = {.lex_state = 164, .external_lex_state = 2},
  [40] = {.lex_state = 179},
  [41] = {.lex_state = 183},
  [42] = {.lex_state = 186},
  [43] = {.lex_state = 100},
  [44] = {.lex_state = 189, .external_lex_state = 2},
  [45] = {.lex_state = 108},
  [46] = {.lex_state = 193, .external_lex_state = 3},
  [47] = {.lex_state = 195, .external_lex_state = 2},
  [48] = {.lex_state = 195, .external_lex_state = 2},
  [49] = {.lex_state = 120, .external_lex_state = 2},
  [50] = {.lex_state = 130},
  [51] = {.lex_state = 175},
  [52] = {.lex_state = 116},
  [53] = {.lex_state = 164, .external_lex_state = 2},
  [54] = {.lex_state = 130},
  [55] = {.lex_state = 130},
  [56] = {.lex_state = 164, .external_lex_state = 2},
  [57] = {.lex_state = 175},
  [58] = {.lex_state = 116},
  [59] = {.lex_state = 164, .external_lex_state = 2},
  [60] = {.lex_state = 164, .external_lex_state = 2},
  [61] = {.lex_state = 197},
  [62] = {.lex_state = 189, .external_lex_state = 2},
  [63] = {.lex_state = 108, .external_lex_state = 4},
  [64] = {.lex_state = 195, .external_lex_state = 2},
  [65] = {.lex_state = 199, .external_lex_state = 2},
  [66] = {.lex_state = 106, .external_lex_state = 2},
  [67] = {.lex_state = 106, .external_lex_state = 2},
  [68] = {.lex_state = 141, .external_lex_state = 2},
  [69] = {.lex_state = 120, .external_lex_state = 2},
  [70] = {.lex_state = 207, .external_lex_state = 2},
  [71] = {.lex_state = 164, .external_lex_state = 2},
  [72] = {.lex_state = 164, .external_lex_state = 2},
  [73] = {.lex_state = 164, .external_lex_state = 2},
  [74] = {.lex_state = 211, .external_lex_state = 2},
  [75] = {.lex_state = 156},
  [76] = {.lex_state = 213},
  [77] = {.lex_state = 215, .external_lex_state = 2},
  [78] = {.lex_state = 172},
  [79] = {.lex_state = 130},
  [80] = {.lex_state = 217},
  [81] = {.lex_state = 219},
  [82] = {.lex_state = 172},
  [83] = {.lex_state = 172},
  [84] = {.lex_state = 221},
  [85] = {.lex_state = 226, .external_lex_state = 2},
  [86] = {.lex_state = 130},
  [87] = {.lex_state = 229, .external_lex_state = 2},
  [88] = {.lex_state = 197},
  [89] = {.lex_state = 164, .external_lex_state = 2},
  [90] = {.lex_state = 217},
  [91] = {.lex_state = 219},
  [92] = {.lex_state = 197},
  [93] = {.lex_state = 156},
  [94] = {.lex_state = 232},
  [95] = {.lex_state = 130},
  [96] = {.lex_state = 232},
  [97] = {.lex_state = 232},
  [98] = {.lex_state = 221},
  [99] = {.lex_state = 197},
  [100] = {.lex_state = 156},
  [101] = {.lex_state = 179},
  [102] = {.lex_state = 179},
  [103] = {.lex_state = 108},
  [104] = {.lex_state = 130},
  [105] = {.lex_state = 189, .external_lex_state = 2},
  [106] = {.lex_state = 175},
  [107] = {.lex_state = 116},
  [108] = {.lex_state = 164, .external_lex_state = 2},
  [109] = {.lex_state = 189, .external_lex_state = 2},
  [110] = {.lex_state = 189, .external_lex_state = 2},
  [111] = {.lex_state = 195, .external_lex_state = 2},
  [112] = {.lex_state = 130},
  [113] = {.lex_state = 195, .external_lex_state = 2},
  [114] = {.lex_state = 175},
  [115] = {.lex_state = 116},
  [116] = {.lex_state = 164, .external_lex_state = 2},
  [117] = {.lex_state = 195, .external_lex_state = 2},
  [118] = {.lex_state = 195, .external_lex_state = 2},
  [119] = {.lex_state = 234, .external_lex_state = 5},
  [120] = {.lex_state = 195, .external_lex_state = 2},
  [121] = {.lex_state = 195, .external_lex_state = 2},
  [122] = {.lex_state = 130},
  [123] = {.lex_state = 130},
  [124] = {.lex_state = 221},
  [125] = {.lex_state = 197},
  [126] = {.lex_state = 120, .external_lex_state = 2},
  [127] = {.lex_state = 130},
  [128] = {.lex_state = 164, .external_lex_state = 2},
  [129] = {.lex_state = 130},
  [130] = {.lex_state = 164, .external_lex_state = 2},
  [131] = {.lex_state = 164, .external_lex_state = 2},
  [132] = {.lex_state = 221},
  [133] = {.lex_state = 197},
  [134] = {.lex_state = 237},
  [135] = {.lex_state = 189, .external_lex_state = 2},
  [136] = {.lex_state = 195, .external_lex_state = 2},
  [137] = {.lex_state = 160, .external_lex_state = 2},
  [138] = {.lex_state = 130},
  [139] = {.lex_state = 175},
  [140] = {.lex_state = 116},
  [141] = {.lex_state = 164, .external_lex_state = 2},
  [142] = {.lex_state = 160, .external_lex_state = 2},
  [143] = {.lex_state = 156},
  [144] = {.lex_state = 160, .external_lex_state = 2},
  [145] = {.lex_state = 156},
  [146] = {.lex_state = 160, .external_lex_state = 2},
  [147] = {.lex_state = 189, .external_lex_state = 2},
  [148] = {.lex_state = 189, .external_lex_state = 2},
  [149] = {.lex_state = 108, .external_lex_state = 4},
  [150] = {.lex_state = 195, .external_lex_state = 2},
  [151] = {.lex_state = 156},
  [152] = {.lex_state = 211, .external_lex_state = 2},
  [153] = {.lex_state = 156},
  [154] = {.lex_state = 106, .external_lex_state = 2},
  [155] = {.lex_state = 239, .external_lex_state = 2},
  [156] = {.lex_state = 241},
  [157] = {.lex_state = 245},
  [158] = {.lex_state = 215, .external_lex_state = 2},
  [159] = {.lex_state = 241},
  [160] = {.lex_state = 172},
  [161] = {.lex_state = 247},
  [162] = {.lex_state = 217},
  [163] = {.lex_state = 172},
  [164] = {.lex_state = 108},
  [165] = {.lex_state = 100},
  [166] = {.lex_state = 253, .external_lex_state = 2},
  [167] = {.lex_state = 108},
  [168] = {.lex_state = 193, .external_lex_state = 3},
  [169] = {.lex_state = 255, .external_lex_state = 2},
  [170] = {.lex_state = 255, .external_lex_state = 2},
  [171] = {.lex_state = 226, .external_lex_state = 2},
  [172] = {.lex_state = 130},
  [173] = {.lex_state = 253, .external_lex_state = 2},
  [174] = {.lex_state = 255, .external_lex_state = 2},
  [175] = {.lex_state = 172},
  [176] = {.lex_state = 226, .external_lex_state = 2},
  [177] = {.lex_state = 229, .external_lex_state = 2},
  [178] = {.lex_state = 247},
  [179] = {.lex_state = 217},
  [180] = {.lex_state = 237},
  [181] = {.lex_state = 232},
  [182] = {.lex_state = 232},
  [183] = {.lex_state = 108},
  [184] = {.lex_state = 232},
  [185] = {.lex_state = 195, .external_lex_state = 2},
  [186] = {.lex_state = 195, .external_lex_state = 2},
  [187] = {.lex_state = 189, .external_lex_state = 2},
  [188] = {.lex_state = 130},
  [189] = {.lex_state = 189, .external_lex_state = 2},
  [190] = {.lex_state = 189, .external_lex_state = 2},
  [191] = {.lex_state = 221},
  [192] = {.lex_state = 197},
  [193] = {.lex_state = 189, .external_lex_state = 2},
  [194] = {.lex_state = 189, .external_lex_state = 2},
  [195] = {.lex_state = 195, .external_lex_state = 2},
  [196] = {.lex_state = 195, .external_lex_state = 2},
  [197] = {.lex_state = 130},
  [198] = {.lex_state = 195, .external_lex_state = 2},
  [199] = {.lex_state = 195, .external_lex_state = 2},
  [200] = {.lex_state = 221},
  [201] = {.lex_state = 197},
  [202] = {.lex_state = 234, .external_lex_state = 5},
  [203] = {.lex_state = 195, .external_lex_state = 2},
  [204] = {.lex_state = 175},
  [205] = {.lex_state = 116},
  [206] = {.lex_state = 234, .external_lex_state = 5},
  [207] = {.lex_state = 130},
  [208] = {.lex_state = 108},
  [209] = {.lex_state = 130},
  [210] = {.lex_state = 164, .external_lex_state = 2},
  [211] = {.lex_state = 164, .external_lex_state = 2},
  [212] = {.lex_state = 108},
  [213] = {.lex_state = 164, .external_lex_state = 2},
  [214] = {.lex_state = 257, .external_lex_state = 2},
  [215] = {.lex_state = 156},
  [216] = {.lex_state = 195, .external_lex_state = 2},
  [217] = {.lex_state = 160, .external_lex_state = 2},
  [218] = {.lex_state = 130},
  [219] = {.lex_state = 160, .external_lex_state = 2},
  [220] = {.lex_state = 160, .external_lex_state = 2},
  [221] = {.lex_state = 221},
  [222] = {.lex_state = 197},
  [223] = {.lex_state = 189, .external_lex_state = 2},
  [224] = {.lex_state = 189, .external_lex_state = 2},
  [225] = {.lex_state = 195, .external_lex_state = 2},
  [226] = {.lex_state = 164, .external_lex_state = 2},
  [227] = {.lex_state = 164, .external_lex_state = 2},
  [228] = {.lex_state = 156},
  [229] = {.lex_state = 170},
  [230] = {.lex_state = 239, .external_lex_state = 2},
  [231] = {.lex_state = 156},
  [232] = {.lex_state = 245},
  [233] = {.lex_state = 241},
  [234] = {.lex_state = 241},
  [235] = {.lex_state = 156},
  [236] = {.lex_state = 197},
  [237] = {.lex_state = 197},
  [238] = {.lex_state = 247},
  [239] = {.lex_state = 247},
  [240] = {.lex_state = 247},
  [241] = {.lex_state = 259},
  [242] = {.lex_state = 259},
  [243] = {.lex_state = 108},
  [244] = {.lex_state = 130},
  [245] = {.lex_state = 253, .external_lex_state = 2},
  [246] = {.lex_state = 175},
  [247] = {.lex_state = 116},
  [248] = {.lex_state = 164, .external_lex_state = 2},
  [249] = {.lex_state = 253, .external_lex_state = 2},
  [250] = {.lex_state = 253, .external_lex_state = 2},
  [251] = {.lex_state = 255, .external_lex_state = 2},
  [252] = {.lex_state = 255, .external_lex_state = 2},
  [253] = {.lex_state = 255, .external_lex_state = 2},
  [254] = {.lex_state = 255, .external_lex_state = 2},
  [255] = {.lex_state = 234, .external_lex_state = 5},
  [256] = {.lex_state = 255, .external_lex_state = 2},
  [257] = {.lex_state = 255, .external_lex_state = 2},
  [258] = {.lex_state = 226, .external_lex_state = 2},
  [259] = {.lex_state = 253, .external_lex_state = 2},
  [260] = {.lex_state = 255, .external_lex_state = 2},
  [261] = {.lex_state = 253, .external_lex_state = 2},
  [262] = {.lex_state = 253, .external_lex_state = 2},
  [263] = {.lex_state = 255, .external_lex_state = 2},
  [264] = {.lex_state = 156},
  [265] = {.lex_state = 247},
  [266] = {.lex_state = 247},
  [267] = {.lex_state = 156},
  [268] = {.lex_state = 259},
  [269] = {.lex_state = 259},
  [270] = {.lex_state = 189, .external_lex_state = 2},
  [271] = {.lex_state = 189, .external_lex_state = 2},
  [272] = {.lex_state = 108},
  [273] = {.lex_state = 189, .external_lex_state = 2},
  [274] = {.lex_state = 195, .external_lex_state = 2},
  [275] = {.lex_state = 195, .external_lex_state = 2},
  [276] = {.lex_state = 108},
  [277] = {.lex_state = 195, .external_lex_state = 2},
  [278] = {.lex_state = 234, .external_lex_state = 5},
  [279] = {.lex_state = 234, .external_lex_state = 5},
  [280] = {.lex_state = 221},
  [281] = {.lex_state = 234, .external_lex_state = 5},
  [282] = {.lex_state = 195, .external_lex_state = 2},
  [283] = {.lex_state = 259},
  [284] = {.lex_state = 259},
  [285] = {.lex_state = 259},
  [286] = {.lex_state = 259},
  [287] = {.lex_state = 156},
  [288] = {.lex_state = 257, .external_lex_state = 2},
  [289] = {.lex_state = 160, .external_lex_state = 2},
  [290] = {.lex_state = 160, .external_lex_state = 2},
  [291] = {.lex_state = 108},
  [292] = {.lex_state = 160, .external_lex_state = 2},
  [293] = {.lex_state = 195, .external_lex_state = 2},
  [294] = {.lex_state = 195, .external_lex_state = 2},
  [295] = {.lex_state = 215, .external_lex_state = 2},
  [296] = {.lex_state = 156},
  [297] = {.lex_state = 245},
  [298] = {.lex_state = 261, .external_lex_state = 2},
  [299] = {.lex_state = 261, .external_lex_state = 2},
  [300] = {.lex_state = 156},
  [301] = {.lex_state = 247},
  [302] = {.lex_state = 247},
  [303] = {.lex_state = 172},
  [304] = {.lex_state = 172},
  [305] = {.lex_state = 255, .external_lex_state = 2},
  [306] = {.lex_state = 255, .external_lex_state = 2},
  [307] = {.lex_state = 253, .external_lex_state = 2},
  [308] = {.lex_state = 130},
  [309] = {.lex_state = 253, .external_lex_state = 2},
  [310] = {.lex_state = 253, .external_lex_state = 2},
  [311] = {.lex_state = 221},
  [312] = {.lex_state = 197},
  [313] = {.lex_state = 253, .external_lex_state = 2},
  [314] = {.lex_state = 253, .external_lex_state = 2},
  [315] = {.lex_state = 255, .external_lex_state = 2},
  [316] = {.lex_state = 255, .external_lex_state = 2},
  [317] = {.lex_state = 234, .external_lex_state = 5},
  [318] = {.lex_state = 255, .external_lex_state = 2},
  [319] = {.lex_state = 253, .external_lex_state = 2},
  [320] = {.lex_state = 253, .external_lex_state = 2},
  [321] = {.lex_state = 255, .external_lex_state = 2},
  [322] = {.lex_state = 156},
  [323] = {.lex_state = 247},
  [324] = {.lex_state = 232},
  [325] = {.lex_state = 232},
  [326] = {.lex_state = 259},
  [327] = {.lex_state = 259},
  [328] = {.lex_state = 259},
  [329] = {.lex_state = 259},
  [330] = {.lex_state = 234, .external_lex_state = 5},
  [331] = {.lex_state = 108},
  [332] = {.lex_state = 130},
  [333] = {.lex_state = 130},
  [334] = {.lex_state = 164, .external_lex_state = 2},
  [335] = {.lex_state = 164, .external_lex_state = 2},
  [336] = {.lex_state = 156},
  [337] = {.lex_state = 259},
  [338] = {.lex_state = 259},
  [339] = {.lex_state = 215, .external_lex_state = 2},
  [340] = {.lex_state = 156},
  [341] = {.lex_state = 247},
  [342] = {.lex_state = 261, .external_lex_state = 2},
  [343] = {.lex_state = 247},
  [344] = {.lex_state = 261, .external_lex_state = 2},
  [345] = {.lex_state = 156},
  [346] = {.lex_state = 253, .external_lex_state = 2},
  [347] = {.lex_state = 253, .external_lex_state = 2},
  [348] = {.lex_state = 108},
  [349] = {.lex_state = 253, .external_lex_state = 2},
  [350] = {.lex_state = 255, .external_lex_state = 2},
  [351] = {.lex_state = 255, .external_lex_state = 2},
  [352] = {.lex_state = 255, .external_lex_state = 2},
  [353] = {.lex_state = 156},
  [354] = {.lex_state = 189, .external_lex_state = 2},
  [355] = {.lex_state = 189, .external_lex_state = 2},
  [356] = {.lex_state = 195, .external_lex_state = 2},
  [357] = {.lex_state = 195, .external_lex_state = 2},
  [358] = {.lex_state = 259},
  [359] = {.lex_state = 259},
  [360] = {.lex_state = 160, .external_lex_state = 2},
  [361] = {.lex_state = 160, .external_lex_state = 2},
  [362] = {.lex_state = 247},
  [363] = {.lex_state = 247},
  [364] = {.lex_state = 259},
  [365] = {.lex_state = 259},
  [366] = {.lex_state = 234, .external_lex_state = 5},
  [367] = {.lex_state = 234, .external_lex_state = 5},
  [368] = {.lex_state = 253, .external_lex_state = 2},
  [369] = {.lex_state = 253, .external_lex_state = 2},
  [370] = {.lex_state = 156},
  [371] = {.lex_state = 215, .external_lex_state = 2},
  [372] = {.lex_state = 156},
  [373] = {.lex_state = 217},
  [374] = {.lex_state = 156},
  [375] = {.lex_state = 263, .external_lex_state = 2},
  [376] = {.lex_state = 118, .external_lex_state = 2},
  [377] = {.lex_state = 320, .external_lex_state = 6},
  [378] = {.lex_state = 325, .external_lex_state = 2},
  [379] = {.lex_state = 108, .external_lex_state = 4},
  [380] = {.lex_state = 329, .external_lex_state = 2},
  [381] = {.lex_state = 320, .external_lex_state = 6},
  [382] = {.lex_state = 108},
  [383] = {.lex_state = 193, .external_lex_state = 3},
  [384] = {.lex_state = 334, .external_lex_state = 2},
  [385] = {.lex_state = 380, .external_lex_state = 2},
  [386] = {.lex_state = 234, .external_lex_state = 5},
  [387] = {.lex_state = 234, .external_lex_state = 5},
  [388] = {.lex_state = 380, .external_lex_state = 2},
  [389] = {.lex_state = 100},
  [390] = {.lex_state = 199, .external_lex_state = 2},
  [391] = {.lex_state = 156},
  [392] = {.lex_state = 241},
  [393] = {.lex_state = 245},
  [394] = {.lex_state = 247},
  [395] = {.lex_state = 156},
  [396] = {.lex_state = 382},
  [397] = {.lex_state = 160, .external_lex_state = 2},
  [398] = {.lex_state = 384, .external_lex_state = 2},
  [399] = {.lex_state = 320, .external_lex_state = 6},
  [400] = {.lex_state = 320, .external_lex_state = 2},
  [401] = {.lex_state = 394, .external_lex_state = 2},
  [402] = {.lex_state = 380, .external_lex_state = 2},
  [403] = {.lex_state = 380, .external_lex_state = 2},
  [404] = {.lex_state = 141, .external_lex_state = 2},
  [405] = {.lex_state = 241},
  [406] = {.lex_state = 247},
  [407] = {.lex_state = 396, .external_lex_state = 2},
  [408] = {.lex_state = 164, .external_lex_state = 2},
  [409] = {.lex_state = 380, .external_lex_state = 2},
  [410] = {.lex_state = 130},
  [411] = {.lex_state = 234, .external_lex_state = 5},
  [412] = {.lex_state = 215, .external_lex_state = 2},
  [413] = {.lex_state = 247},
  [414] = {.lex_state = 247},
  [415] = {.lex_state = 261, .external_lex_state = 2},
  [416] = {.lex_state = 398},
  [417] = {.lex_state = 100},
  [418] = {.lex_state = 400, .external_lex_state = 2},
  [419] = {.lex_state = 259},
  [420] = {.lex_state = 108},
  [421] = {.lex_state = 259},
  [422] = {.lex_state = 380, .external_lex_state = 2},
  [423] = {.lex_state = 380, .external_lex_state = 2},
  [424] = {.lex_state = 130},
  [425] = {.lex_state = 402, .external_lex_state = 2},
  [426] = {.lex_state = 175},
  [427] = {.lex_state = 116},
  [428] = {.lex_state = 164, .external_lex_state = 2},
  [429] = {.lex_state = 402, .external_lex_state = 2},
  [430] = {.lex_state = 384, .external_lex_state = 2},
  [431] = {.lex_state = 320, .external_lex_state = 6},
  [432] = {.lex_state = 320, .external_lex_state = 6},
  [433] = {.lex_state = 130},
  [434] = {.lex_state = 394, .external_lex_state = 2},
  [435] = {.lex_state = 175},
  [436] = {.lex_state = 116},
  [437] = {.lex_state = 164, .external_lex_state = 2},
  [438] = {.lex_state = 394, .external_lex_state = 2},
  [439] = {.lex_state = 217},
  [440] = {.lex_state = 156},
  [441] = {.lex_state = 380, .external_lex_state = 2},
  [442] = {.lex_state = 108},
  [443] = {.lex_state = 156},
  [444] = {.lex_state = 320, .external_lex_state = 2},
  [445] = {.lex_state = 320, .external_lex_state = 6},
  [446] = {.lex_state = 247},
  [447] = {.lex_state = 156},
  [448] = {.lex_state = 245},
  [449] = {.lex_state = 156},
  [450] = {.lex_state = 130},
  [451] = {.lex_state = 396, .external_lex_state = 2},
  [452] = {.lex_state = 175},
  [453] = {.lex_state = 116},
  [454] = {.lex_state = 164, .external_lex_state = 2},
  [455] = {.lex_state = 396, .external_lex_state = 2},
  [456] = {.lex_state = 380, .external_lex_state = 2},
  [457] = {.lex_state = 404, .external_lex_state = 2},
  [458] = {.lex_state = 130},
  [459] = {.lex_state = 408, .external_lex_state = 2},
  [460] = {.lex_state = 380, .external_lex_state = 2},
  [461] = {.lex_state = 384, .external_lex_state = 2},
  [462] = {.lex_state = 380, .external_lex_state = 2},
  [463] = {.lex_state = 108},
  [464] = {.lex_state = 130},
  [465] = {.lex_state = 400, .external_lex_state = 2},
  [466] = {.lex_state = 175},
  [467] = {.lex_state = 116},
  [468] = {.lex_state = 164, .external_lex_state = 2},
  [469] = {.lex_state = 400, .external_lex_state = 2},
  [470] = {.lex_state = 400, .external_lex_state = 2},
  [471] = {.lex_state = 380, .external_lex_state = 2},
  [472] = {.lex_state = 130},
  [473] = {.lex_state = 380, .external_lex_state = 2},
  [474] = {.lex_state = 175},
  [475] = {.lex_state = 116},
  [476] = {.lex_state = 164, .external_lex_state = 2},
  [477] = {.lex_state = 380, .external_lex_state = 2},
  [478] = {.lex_state = 320, .external_lex_state = 6},
  [479] = {.lex_state = 402, .external_lex_state = 2},
  [480] = {.lex_state = 130},
  [481] = {.lex_state = 402, .external_lex_state = 2},
  [482] = {.lex_state = 402, .external_lex_state = 2},
  [483] = {.lex_state = 221},
  [484] = {.lex_state = 197},
  [485] = {.lex_state = 394, .external_lex_state = 2},
  [486] = {.lex_state = 130},
  [487] = {.lex_state = 394, .external_lex_state = 2},
  [488] = {.lex_state = 394, .external_lex_state = 2},
  [489] = {.lex_state = 221},
  [490] = {.lex_state = 197},
  [491] = {.lex_state = 247},
  [492] = {.lex_state = 394, .external_lex_state = 2},
  [493] = {.lex_state = 394, .external_lex_state = 2},
  [494] = {.lex_state = 156},
  [495] = {.lex_state = 396, .external_lex_state = 2},
  [496] = {.lex_state = 130},
  [497] = {.lex_state = 396, .external_lex_state = 2},
  [498] = {.lex_state = 396, .external_lex_state = 2},
  [499] = {.lex_state = 221},
  [500] = {.lex_state = 197},
  [501] = {.lex_state = 400, .external_lex_state = 2},
  [502] = {.lex_state = 380, .external_lex_state = 2},
  [503] = {.lex_state = 404, .external_lex_state = 2},
  [504] = {.lex_state = 130},
  [505] = {.lex_state = 400, .external_lex_state = 2},
  [506] = {.lex_state = 380, .external_lex_state = 2},
  [507] = {.lex_state = 380, .external_lex_state = 2},
  [508] = {.lex_state = 380, .external_lex_state = 2},
  [509] = {.lex_state = 400, .external_lex_state = 2},
  [510] = {.lex_state = 130},
  [511] = {.lex_state = 400, .external_lex_state = 2},
  [512] = {.lex_state = 400, .external_lex_state = 2},
  [513] = {.lex_state = 221},
  [514] = {.lex_state = 197},
  [515] = {.lex_state = 400, .external_lex_state = 2},
  [516] = {.lex_state = 400, .external_lex_state = 2},
  [517] = {.lex_state = 380, .external_lex_state = 2},
  [518] = {.lex_state = 380, .external_lex_state = 2},
  [519] = {.lex_state = 130},
  [520] = {.lex_state = 380, .external_lex_state = 2},
  [521] = {.lex_state = 380, .external_lex_state = 2},
  [522] = {.lex_state = 221},
  [523] = {.lex_state = 197},
  [524] = {.lex_state = 402, .external_lex_state = 2},
  [525] = {.lex_state = 402, .external_lex_state = 2},
  [526] = {.lex_state = 108},
  [527] = {.lex_state = 402, .external_lex_state = 2},
  [528] = {.lex_state = 394, .external_lex_state = 2},
  [529] = {.lex_state = 394, .external_lex_state = 2},
  [530] = {.lex_state = 108},
  [531] = {.lex_state = 394, .external_lex_state = 2},
  [532] = {.lex_state = 156},
  [533] = {.lex_state = 247},
  [534] = {.lex_state = 396, .external_lex_state = 2},
  [535] = {.lex_state = 396, .external_lex_state = 2},
  [536] = {.lex_state = 108},
  [537] = {.lex_state = 396, .external_lex_state = 2},
  [538] = {.lex_state = 400, .external_lex_state = 2},
  [539] = {.lex_state = 380, .external_lex_state = 2},
  [540] = {.lex_state = 404, .external_lex_state = 2},
  [541] = {.lex_state = 400, .external_lex_state = 2},
  [542] = {.lex_state = 380, .external_lex_state = 2},
  [543] = {.lex_state = 400, .external_lex_state = 2},
  [544] = {.lex_state = 400, .external_lex_state = 2},
  [545] = {.lex_state = 108},
  [546] = {.lex_state = 400, .external_lex_state = 2},
  [547] = {.lex_state = 380, .external_lex_state = 2},
  [548] = {.lex_state = 380, .external_lex_state = 2},
  [549] = {.lex_state = 108},
  [550] = {.lex_state = 380, .external_lex_state = 2},
  [551] = {.lex_state = 259},
  [552] = {.lex_state = 259},
  [553] = {.lex_state = 259},
  [554] = {.lex_state = 259},
  [555] = {.lex_state = 156},
  [556] = {.lex_state = 259},
  [557] = {.lex_state = 259},
  [558] = {.lex_state = 380, .external_lex_state = 2},
  [559] = {.lex_state = 380, .external_lex_state = 2},
  [560] = {.lex_state = 259},
  [561] = {.lex_state = 259},
  [562] = {.lex_state = 259},
  [563] = {.lex_state = 259},
  [564] = {.lex_state = 402, .external_lex_state = 2},
  [565] = {.lex_state = 402, .external_lex_state = 2},
  [566] = {.lex_state = 394, .external_lex_state = 2},
  [567] = {.lex_state = 394, .external_lex_state = 2},
  [568] = {.lex_state = 396, .external_lex_state = 2},
  [569] = {.lex_state = 396, .external_lex_state = 2},
  [570] = {.lex_state = 400, .external_lex_state = 2},
  [571] = {.lex_state = 400, .external_lex_state = 2},
  [572] = {.lex_state = 380, .external_lex_state = 2},
  [573] = {.lex_state = 380, .external_lex_state = 2},
};

enum {
  ts_external_token__simple_heredoc,
  ts_external_token__heredoc_beginning,
  ts_external_token__heredoc_middle,
  ts_external_token__heredoc_end,
  ts_external_token_file_descriptor,
  ts_external_token__empty_value,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__simple_heredoc] = sym__simple_heredoc,
  [ts_external_token__heredoc_beginning] = sym__heredoc_beginning,
  [ts_external_token__heredoc_middle] = sym__heredoc_middle,
  [ts_external_token__heredoc_end] = sym__heredoc_end,
  [ts_external_token_file_descriptor] = sym_file_descriptor,
  [ts_external_token__empty_value] = sym__empty_value,
};

static bool ts_external_scanner_states[7][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__simple_heredoc] = true,
    [ts_external_token__heredoc_beginning] = true,
    [ts_external_token__heredoc_middle] = true,
    [ts_external_token__heredoc_end] = true,
    [ts_external_token_file_descriptor] = true,
    [ts_external_token__empty_value] = true,
  },
  [2] = {
    [ts_external_token_file_descriptor] = true,
  },
  [3] = {
    [ts_external_token__simple_heredoc] = true,
    [ts_external_token__heredoc_beginning] = true,
  },
  [4] = {
    [ts_external_token__empty_value] = true,
  },
  [5] = {
    [ts_external_token__heredoc_middle] = true,
    [ts_external_token__heredoc_end] = true,
  },
  [6] = {
    [ts_external_token__heredoc_middle] = true,
    [ts_external_token__heredoc_end] = true,
    [ts_external_token_file_descriptor] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_program] = STATE(14),
    [sym__terminated_statement] = STATE(390),
    [sym_while_statement] = STATE(391),
    [sym_do_group] = STATE(75),
    [sym_if_statement] = STATE(391),
    [sym_elif_clause] = STATE(392),
    [sym_else_clause] = STATE(393),
    [sym_case_statement] = STATE(391),
    [sym_case_item] = STATE(394),
    [sym_function_definition] = STATE(391),
    [sym_compound_command] = STATE(395),
    [sym_bracket_command] = STATE(391),
    [sym_command] = STATE(396),
    [sym_pipeline] = STATE(391),
    [sym_list] = STATE(391),
    [sym_subshell] = STATE(391),
    [sym_environment_variable_assignment] = STATE(397),
    [sym_quoted_argument] = STATE(398),
    [sym_expansion] = STATE(399),
    [sym_operator_expansion] = STATE(399),
    [sym_command_substitution] = STATE(400),
    [sym_file_redirect] = STATE(401),
    [sym_heredoc_redirect] = STATE(402),
    [sym_heredoc] = STATE(403),
    [aux_sym_program_repeat1] = STATE(404),
    [aux_sym_if_statement_repeat1] = STATE(405),
    [aux_sym_case_statement_repeat1] = STATE(406),
    [aux_sym_bracket_command_repeat1] = STATE(407),
    [aux_sym_command_repeat1] = STATE(408),
    [aux_sym_command_repeat2] = STATE(409),
    [aux_sym_quoted_argument_repeat1] = STATE(410),
    [aux_sym_heredoc_repeat1] = STATE(411),
    [sym__simple_heredoc] = ACTIONS(1),
    [sym__heredoc_beginning] = ACTIONS(3),
    [sym__heredoc_middle] = ACTIONS(5),
    [sym__heredoc_end] = ACTIONS(7),
    [sym_file_descriptor] = ACTIONS(9),
    [sym__empty_value] = ACTIONS(11),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_while] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(17),
    [anon_sym_done] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_then] = ACTIONS(23),
    [anon_sym_fi] = ACTIONS(25),
    [anon_sym_elif] = ACTIONS(27),
    [anon_sym_else] = ACTIONS(29),
    [anon_sym_case] = ACTIONS(31),
    [anon_sym_in] = ACTIONS(33),
    [anon_sym_esac] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_RBRACK] = ACTIONS(49),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(51),
    [anon_sym_COLON] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(55),
    [anon_sym_PIPE_PIPE] = ACTIONS(57),
    [anon_sym_EQ] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_DOLLAR] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(65),
    [anon_sym_GT_GT] = ACTIONS(67),
    [anon_sym_LT_AMP] = ACTIONS(67),
    [anon_sym_GT_AMP] = ACTIONS(67),
    [anon_sym_LT_LT] = ACTIONS(69),
    [anon_sym_LT_LT_DASH] = ACTIONS(71),
    [sym_comment] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(75),
    [anon_sym_AMP] = ACTIONS(75),
  },
  [1] = {
    [sym_program] = STATE(14),
    [sym__terminated_statement] = STATE(15),
    [sym_while_statement] = STATE(16),
    [sym_if_statement] = STATE(16),
    [sym_case_statement] = STATE(16),
    [sym_function_definition] = STATE(16),
    [sym_bracket_command] = STATE(16),
    [sym_command] = STATE(16),
    [sym_pipeline] = STATE(16),
    [sym_list] = STATE(16),
    [sym_subshell] = STATE(16),
    [sym_environment_variable_assignment] = STATE(17),
    [sym_quoted_argument] = STATE(10),
    [sym_file_redirect] = STATE(18),
    [aux_sym_program_repeat1] = STATE(19),
    [aux_sym_command_repeat1] = STATE(20),
    [sym_file_descriptor] = ACTIONS(77),
    [ts_builtin_sym_end] = ACTIONS(79),
    [anon_sym_while] = ACTIONS(81),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_case] = ACTIONS(85),
    [anon_sym_function] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_single_quoted_argument] = ACTIONS(99),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_AMP_GT] = ACTIONS(101),
    [anon_sym_AMP_GT_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [sym_leading_word] = ACTIONS(103),
    [sym_comment] = ACTIONS(73),
  },
  [2] = {
    [anon_sym_LT] = ACTIONS(105),
    [anon_sym_GT] = ACTIONS(105),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(105),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_comment] = ACTIONS(73),
  },
  [3] = {
    [sym__terminated_statement] = STATE(22),
    [sym_while_statement] = STATE(23),
    [sym_if_statement] = STATE(23),
    [sym_case_statement] = STATE(23),
    [sym_function_definition] = STATE(23),
    [sym_bracket_command] = STATE(23),
    [sym_command] = STATE(23),
    [sym_pipeline] = STATE(23),
    [sym_list] = STATE(23),
    [sym_subshell] = STATE(23),
    [sym_environment_variable_assignment] = STATE(24),
    [sym_quoted_argument] = STATE(10),
    [sym_file_redirect] = STATE(18),
    [aux_sym_command_repeat1] = STATE(20),
    [sym_file_descriptor] = ACTIONS(77),
    [anon_sym_while] = ACTIONS(81),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_case] = ACTIONS(85),
    [anon_sym_function] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_single_quoted_argument] = ACTIONS(99),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_AMP_GT] = ACTIONS(101),
    [anon_sym_AMP_GT_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [sym_leading_word] = ACTIONS(103),
    [sym_comment] = ACTIONS(73),
  },
  [4] = {
    [sym__terminated_statement] = STATE(25),
    [sym_while_statement] = STATE(23),
    [sym_if_statement] = STATE(23),
    [sym_case_statement] = STATE(23),
    [sym_function_definition] = STATE(23),
    [sym_bracket_command] = STATE(23),
    [sym_command] = STATE(23),
    [sym_pipeline] = STATE(23),
    [sym_list] = STATE(23),
    [sym_subshell] = STATE(23),
    [sym_environment_variable_assignment] = STATE(24),
    [sym_quoted_argument] = STATE(10),
    [sym_file_redirect] = STATE(18),
    [aux_sym_command_repeat1] = STATE(20),
    [sym_file_descriptor] = ACTIONS(77),
    [anon_sym_while] = ACTIONS(81),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_case] = ACTIONS(85),
    [anon_sym_function] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_single_quoted_argument] = ACTIONS(99),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_AMP_GT] = ACTIONS(101),
    [anon_sym_AMP_GT_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [sym_leading_word] = ACTIONS(103),
    [sym_comment] = ACTIONS(73),
  },
  [5] = {
    [sym_quoted_argument] = STATE(27),
    [sym_expansion] = STATE(27),
    [sym_operator_expansion] = STATE(27),
    [sym_command_substitution] = STATE(27),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [sym_single_quoted_argument] = ACTIONS(111),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [sym_word] = ACTIONS(119),
    [sym_comment] = ACTIONS(73),
  },
  [6] = {
    [sym_leading_word] = ACTIONS(121),
    [sym_comment] = ACTIONS(73),
  },
  [7] = {
    [sym__terminated_statement] = STATE(15),
    [sym_while_statement] = STATE(16),
    [sym_if_statement] = STATE(16),
    [sym_case_statement] = STATE(16),
    [sym_function_definition] = STATE(16),
    [sym_bracket_command] = STATE(16),
    [sym_command] = STATE(16),
    [sym_pipeline] = STATE(16),
    [sym_list] = STATE(16),
    [sym_subshell] = STATE(16),
    [sym_environment_variable_assignment] = STATE(17),
    [sym_quoted_argument] = STATE(10),
    [sym_file_redirect] = STATE(18),
    [aux_sym_program_repeat1] = STATE(34),
    [aux_sym_command_repeat1] = STATE(20),
    [sym_file_descriptor] = ACTIONS(77),
    [anon_sym_while] = ACTIONS(81),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_case] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(123),
    [anon_sym_function] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_single_quoted_argument] = ACTIONS(99),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_AMP_GT] = ACTIONS(101),
    [anon_sym_AMP_GT_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [sym_leading_word] = ACTIONS(103),
    [sym_comment] = ACTIONS(73),
  },
  [8] = {
    [sym_quoted_argument] = STATE(36),
    [sym_expansion] = STATE(36),
    [sym_operator_expansion] = STATE(36),
    [sym_command_substitution] = STATE(36),
    [aux_sym_bracket_command_repeat1] = STATE(41),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [sym_single_quoted_argument] = ACTIONS(127),
    [anon_sym_DOLLAR] = ACTIONS(129),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(131),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(133),
    [sym_word] = ACTIONS(135),
    [sym_comment] = ACTIONS(73),
  },
  [9] = {
    [sym_quoted_argument] = STATE(36),
    [sym_expansion] = STATE(36),
    [sym_operator_expansion] = STATE(36),
    [sym_command_substitution] = STATE(36),
    [aux_sym_bracket_command_repeat1] = STATE(42),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [sym_single_quoted_argument] = ACTIONS(127),
    [anon_sym_DOLLAR] = ACTIONS(129),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(131),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(133),
    [sym_word] = ACTIONS(135),
    [sym_comment] = ACTIONS(73),
  },
  [10] = {
    [sym_file_redirect] = STATE(47),
    [sym_heredoc_redirect] = STATE(47),
    [aux_sym_command_repeat2] = STATE(48),
    [sym_file_descriptor] = ACTIONS(137),
    [anon_sym_SEMI_SEMI] = ACTIONS(139),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(141),
    [anon_sym_PIPE] = ACTIONS(139),
    [anon_sym_PIPE_AMP] = ACTIONS(139),
    [anon_sym_AMP_AMP] = ACTIONS(139),
    [anon_sym_PIPE_PIPE] = ACTIONS(139),
    [anon_sym_LT] = ACTIONS(143),
    [anon_sym_GT] = ACTIONS(143),
    [anon_sym_GT_GT] = ACTIONS(143),
    [anon_sym_AMP_GT] = ACTIONS(143),
    [anon_sym_AMP_GT_GT] = ACTIONS(143),
    [anon_sym_LT_AMP] = ACTIONS(143),
    [anon_sym_GT_AMP] = ACTIONS(143),
    [anon_sym_LT_LT] = ACTIONS(145),
    [anon_sym_LT_LT_DASH] = ACTIONS(145),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(139),
    [anon_sym_LF] = ACTIONS(139),
    [anon_sym_AMP] = ACTIONS(139),
  },
  [11] = {
    [sym_expansion] = STATE(50),
    [sym_operator_expansion] = STATE(50),
    [sym_command_substitution] = STATE(50),
    [aux_sym_quoted_argument_repeat1] = STATE(54),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [sym__quoted_chars] = ACTIONS(151),
    [anon_sym_DOLLAR] = ACTIONS(153),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(155),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(157),
    [sym_comment] = ACTIONS(147),
  },
  [12] = {
    [sym_quoted_argument] = STATE(56),
    [sym_expansion] = STATE(56),
    [sym_operator_expansion] = STATE(56),
    [sym_command_substitution] = STATE(56),
    [anon_sym_DQUOTE] = ACTIONS(159),
    [sym_single_quoted_argument] = ACTIONS(161),
    [anon_sym_DOLLAR] = ACTIONS(163),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(165),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(167),
    [sym_word] = ACTIONS(169),
    [sym_comment] = ACTIONS(73),
  },
  [13] = {
    [sym_file_redirect] = STATE(47),
    [sym_heredoc_redirect] = STATE(47),
    [aux_sym_command_repeat2] = STATE(64),
    [sym_file_descriptor] = ACTIONS(137),
    [anon_sym_SEMI_SEMI] = ACTIONS(171),
    [anon_sym_LPAREN] = ACTIONS(173),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(175),
    [anon_sym_PIPE] = ACTIONS(171),
    [anon_sym_PIPE_AMP] = ACTIONS(171),
    [anon_sym_AMP_AMP] = ACTIONS(171),
    [anon_sym_PIPE_PIPE] = ACTIONS(171),
    [anon_sym_EQ] = ACTIONS(177),
    [anon_sym_LT] = ACTIONS(143),
    [anon_sym_GT] = ACTIONS(143),
    [anon_sym_GT_GT] = ACTIONS(143),
    [anon_sym_AMP_GT] = ACTIONS(143),
    [anon_sym_AMP_GT_GT] = ACTIONS(143),
    [anon_sym_LT_AMP] = ACTIONS(143),
    [anon_sym_GT_AMP] = ACTIONS(143),
    [anon_sym_LT_LT] = ACTIONS(145),
    [anon_sym_LT_LT_DASH] = ACTIONS(145),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(171),
    [anon_sym_LF] = ACTIONS(171),
    [anon_sym_AMP] = ACTIONS(171),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(179),
    [sym_comment] = ACTIONS(73),
  },
  [15] = {
    [sym_file_descriptor] = ACTIONS(181),
    [ts_builtin_sym_end] = ACTIONS(181),
    [anon_sym_while] = ACTIONS(183),
    [anon_sym_done] = ACTIONS(183),
    [anon_sym_if] = ACTIONS(183),
    [anon_sym_fi] = ACTIONS(183),
    [anon_sym_elif] = ACTIONS(183),
    [anon_sym_else] = ACTIONS(183),
    [anon_sym_case] = ACTIONS(183),
    [anon_sym_RPAREN] = ACTIONS(181),
    [anon_sym_SEMI_SEMI] = ACTIONS(181),
    [anon_sym_function] = ACTIONS(183),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_RBRACE] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(183),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(183),
    [anon_sym_COLON] = ACTIONS(181),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [sym_single_quoted_argument] = ACTIONS(183),
    [anon_sym_LT] = ACTIONS(183),
    [anon_sym_GT] = ACTIONS(183),
    [anon_sym_GT_GT] = ACTIONS(183),
    [anon_sym_AMP_GT] = ACTIONS(183),
    [anon_sym_AMP_GT_GT] = ACTIONS(183),
    [anon_sym_LT_AMP] = ACTIONS(183),
    [anon_sym_GT_AMP] = ACTIONS(183),
    [sym_leading_word] = ACTIONS(185),
    [sym_comment] = ACTIONS(73),
  },
  [16] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(187),
    [anon_sym_PIPE] = ACTIONS(189),
    [anon_sym_PIPE_AMP] = ACTIONS(189),
    [anon_sym_AMP_AMP] = ACTIONS(191),
    [anon_sym_PIPE_PIPE] = ACTIONS(191),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(187),
    [anon_sym_LF] = ACTIONS(187),
    [anon_sym_AMP] = ACTIONS(187),
  },
  [17] = {
    [sym_file_descriptor] = ACTIONS(193),
    [anon_sym_SEMI_SEMI] = ACTIONS(187),
    [anon_sym_COLON] = ACTIONS(195),
    [anon_sym_PIPE] = ACTIONS(189),
    [anon_sym_PIPE_AMP] = ACTIONS(189),
    [anon_sym_AMP_AMP] = ACTIONS(191),
    [anon_sym_PIPE_PIPE] = ACTIONS(191),
    [anon_sym_DQUOTE] = ACTIONS(195),
    [sym_single_quoted_argument] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(195),
    [anon_sym_GT] = ACTIONS(195),
    [anon_sym_GT_GT] = ACTIONS(195),
    [anon_sym_AMP_GT] = ACTIONS(195),
    [anon_sym_AMP_GT_GT] = ACTIONS(195),
    [anon_sym_LT_AMP] = ACTIONS(195),
    [anon_sym_GT_AMP] = ACTIONS(195),
    [sym_leading_word] = ACTIONS(195),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(187),
    [anon_sym_LF] = ACTIONS(187),
    [anon_sym_AMP] = ACTIONS(187),
  },
  [18] = {
    [sym_file_descriptor] = ACTIONS(193),
    [anon_sym_COLON] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(193),
    [sym_single_quoted_argument] = ACTIONS(197),
    [anon_sym_LT] = ACTIONS(197),
    [anon_sym_GT] = ACTIONS(197),
    [anon_sym_GT_GT] = ACTIONS(197),
    [anon_sym_AMP_GT] = ACTIONS(197),
    [anon_sym_AMP_GT_GT] = ACTIONS(197),
    [anon_sym_LT_AMP] = ACTIONS(197),
    [anon_sym_GT_AMP] = ACTIONS(197),
    [sym_leading_word] = ACTIONS(195),
    [sym_comment] = ACTIONS(73),
  },
  [19] = {
    [sym__terminated_statement] = STATE(68),
    [sym_while_statement] = STATE(16),
    [sym_if_statement] = STATE(16),
    [sym_case_statement] = STATE(16),
    [sym_function_definition] = STATE(16),
    [sym_bracket_command] = STATE(16),
    [sym_command] = STATE(16),
    [sym_pipeline] = STATE(16),
    [sym_list] = STATE(16),
    [sym_subshell] = STATE(16),
    [sym_environment_variable_assignment] = STATE(17),
    [sym_quoted_argument] = STATE(10),
    [sym_file_redirect] = STATE(18),
    [aux_sym_command_repeat1] = STATE(20),
    [sym_file_descriptor] = ACTIONS(77),
    [ts_builtin_sym_end] = ACTIONS(199),
    [anon_sym_while] = ACTIONS(81),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_case] = ACTIONS(85),
    [anon_sym_function] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_single_quoted_argument] = ACTIONS(99),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_AMP_GT] = ACTIONS(101),
    [anon_sym_AMP_GT_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [sym_leading_word] = ACTIONS(103),
    [sym_comment] = ACTIONS(73),
  },
  [20] = {
    [sym_environment_variable_assignment] = STATE(71),
    [sym_quoted_argument] = STATE(69),
    [sym_file_redirect] = STATE(71),
    [sym_file_descriptor] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(201),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_single_quoted_argument] = ACTIONS(203),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_AMP_GT] = ACTIONS(101),
    [anon_sym_AMP_GT_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [sym_leading_word] = ACTIONS(205),
    [sym_comment] = ACTIONS(73),
  },
  [21] = {
    [sym_quoted_argument] = STATE(72),
    [sym_expansion] = STATE(72),
    [sym_operator_expansion] = STATE(72),
    [sym_command_substitution] = STATE(72),
    [anon_sym_DQUOTE] = ACTIONS(159),
    [sym_single_quoted_argument] = ACTIONS(207),
    [anon_sym_DOLLAR] = ACTIONS(163),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(165),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(167),
    [sym_word] = ACTIONS(209),
    [sym_comment] = ACTIONS(73),
  },
  [22] = {
    [sym_do_group] = STATE(75),
    [anon_sym_do] = ACTIONS(211),
    [sym_comment] = ACTIONS(73),
  },
  [23] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(213),
    [anon_sym_PIPE] = ACTIONS(189),
    [anon_sym_PIPE_AMP] = ACTIONS(189),
    [anon_sym_AMP_AMP] = ACTIONS(191),
    [anon_sym_PIPE_PIPE] = ACTIONS(191),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(213),
    [anon_sym_LF] = ACTIONS(213),
    [anon_sym_AMP] = ACTIONS(213),
  },
  [24] = {
    [sym_file_descriptor] = ACTIONS(193),
    [anon_sym_SEMI_SEMI] = ACTIONS(213),
    [anon_sym_COLON] = ACTIONS(195),
    [anon_sym_PIPE] = ACTIONS(189),
    [anon_sym_PIPE_AMP] = ACTIONS(189),
    [anon_sym_AMP_AMP] = ACTIONS(191),
    [anon_sym_PIPE_PIPE] = ACTIONS(191),
    [anon_sym_DQUOTE] = ACTIONS(195),
    [sym_single_quoted_argument] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(195),
    [anon_sym_GT] = ACTIONS(195),
    [anon_sym_GT_GT] = ACTIONS(195),
    [anon_sym_AMP_GT] = ACTIONS(195),
    [anon_sym_AMP_GT_GT] = ACTIONS(195),
    [anon_sym_LT_AMP] = ACTIONS(195),
    [anon_sym_GT_AMP] = ACTIONS(195),
    [sym_leading_word] = ACTIONS(195),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(213),
    [anon_sym_LF] = ACTIONS(213),
    [anon_sym_AMP] = ACTIONS(213),
  },
  [25] = {
    [anon_sym_then] = ACTIONS(215),
    [sym_comment] = ACTIONS(73),
  },
  [26] = {
    [sym_expansion] = STATE(50),
    [sym_operator_expansion] = STATE(50),
    [sym_command_substitution] = STATE(50),
    [aux_sym_quoted_argument_repeat1] = STATE(79),
    [anon_sym_DQUOTE] = ACTIONS(217),
    [sym__quoted_chars] = ACTIONS(151),
    [anon_sym_DOLLAR] = ACTIONS(153),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(155),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(157),
    [sym_comment] = ACTIONS(147),
  },
  [27] = {
    [anon_sym_in] = ACTIONS(219),
    [anon_sym_SEMI_SEMI] = ACTIONS(221),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(221),
    [anon_sym_LF] = ACTIONS(221),
    [anon_sym_AMP] = ACTIONS(221),
  },
  [28] = {
    [anon_sym_DOLLAR] = ACTIONS(223),
    [sym_word] = ACTIONS(225),
    [sym_comment] = ACTIONS(73),
  },
  [29] = {
    [sym_leading_word] = ACTIONS(227),
    [sym_comment] = ACTIONS(73),
  },
  [30] = {
    [sym_command] = STATE(88),
    [sym_environment_variable_assignment] = STATE(18),
    [sym_quoted_argument] = STATE(85),
    [sym_file_redirect] = STATE(18),
    [aux_sym_command_repeat1] = STATE(89),
    [sym_file_descriptor] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(229),
    [anon_sym_DQUOTE] = ACTIONS(231),
    [sym_single_quoted_argument] = ACTIONS(233),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_AMP_GT] = ACTIONS(101),
    [anon_sym_AMP_GT_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [sym_leading_word] = ACTIONS(235),
    [sym_comment] = ACTIONS(73),
  },
  [31] = {
    [anon_sym_in] = ACTIONS(237),
    [anon_sym_SEMI_SEMI] = ACTIONS(239),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(239),
    [anon_sym_LF] = ACTIONS(239),
    [anon_sym_AMP] = ACTIONS(239),
  },
  [32] = {
    [anon_sym_LPAREN] = ACTIONS(241),
    [sym_comment] = ACTIONS(73),
  },
  [33] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(243),
    [anon_sym_PIPE] = ACTIONS(243),
    [anon_sym_PIPE_AMP] = ACTIONS(243),
    [anon_sym_AMP_AMP] = ACTIONS(243),
    [anon_sym_PIPE_PIPE] = ACTIONS(243),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(243),
    [anon_sym_LF] = ACTIONS(243),
    [anon_sym_AMP] = ACTIONS(243),
  },
  [34] = {
    [sym__terminated_statement] = STATE(68),
    [sym_while_statement] = STATE(16),
    [sym_if_statement] = STATE(16),
    [sym_case_statement] = STATE(16),
    [sym_function_definition] = STATE(16),
    [sym_bracket_command] = STATE(16),
    [sym_command] = STATE(16),
    [sym_pipeline] = STATE(16),
    [sym_list] = STATE(16),
    [sym_subshell] = STATE(16),
    [sym_environment_variable_assignment] = STATE(17),
    [sym_quoted_argument] = STATE(10),
    [sym_file_redirect] = STATE(18),
    [aux_sym_command_repeat1] = STATE(20),
    [sym_file_descriptor] = ACTIONS(77),
    [anon_sym_while] = ACTIONS(81),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_case] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(245),
    [anon_sym_function] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_single_quoted_argument] = ACTIONS(99),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_AMP_GT] = ACTIONS(101),
    [anon_sym_AMP_GT_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [sym_leading_word] = ACTIONS(103),
    [sym_comment] = ACTIONS(73),
  },
  [35] = {
    [sym_expansion] = STATE(50),
    [sym_operator_expansion] = STATE(50),
    [sym_command_substitution] = STATE(50),
    [aux_sym_quoted_argument_repeat1] = STATE(95),
    [anon_sym_DQUOTE] = ACTIONS(247),
    [sym__quoted_chars] = ACTIONS(151),
    [anon_sym_DOLLAR] = ACTIONS(153),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(155),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(157),
    [sym_comment] = ACTIONS(147),
  },
  [36] = {
    [anon_sym_RBRACK] = ACTIONS(249),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(249),
    [anon_sym_DQUOTE] = ACTIONS(251),
    [sym_single_quoted_argument] = ACTIONS(249),
    [anon_sym_DOLLAR] = ACTIONS(249),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(251),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(251),
    [sym_word] = ACTIONS(253),
    [sym_comment] = ACTIONS(73),
  },
  [37] = {
    [anon_sym_DOLLAR] = ACTIONS(255),
    [sym_word] = ACTIONS(257),
    [sym_comment] = ACTIONS(73),
  },
  [38] = {
    [sym_leading_word] = ACTIONS(259),
    [sym_comment] = ACTIONS(73),
  },
  [39] = {
    [sym_command] = STATE(99),
    [sym_environment_variable_assignment] = STATE(18),
    [sym_quoted_argument] = STATE(85),
    [sym_file_redirect] = STATE(18),
    [aux_sym_command_repeat1] = STATE(89),
    [sym_file_descriptor] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(229),
    [anon_sym_DQUOTE] = ACTIONS(231),
    [sym_single_quoted_argument] = ACTIONS(233),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_AMP_GT] = ACTIONS(101),
    [anon_sym_AMP_GT_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [sym_leading_word] = ACTIONS(235),
    [sym_comment] = ACTIONS(73),
  },
  [40] = {
    [anon_sym_RBRACK] = ACTIONS(261),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(261),
    [anon_sym_DQUOTE] = ACTIONS(263),
    [sym_single_quoted_argument] = ACTIONS(261),
    [anon_sym_DOLLAR] = ACTIONS(261),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(263),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(263),
    [sym_word] = ACTIONS(265),
    [sym_comment] = ACTIONS(73),
  },
  [41] = {
    [sym_quoted_argument] = STATE(101),
    [sym_expansion] = STATE(101),
    [sym_operator_expansion] = STATE(101),
    [sym_command_substitution] = STATE(101),
    [anon_sym_RBRACK] = ACTIONS(267),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [sym_single_quoted_argument] = ACTIONS(269),
    [anon_sym_DOLLAR] = ACTIONS(129),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(131),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(133),
    [sym_word] = ACTIONS(271),
    [sym_comment] = ACTIONS(73),
  },
  [42] = {
    [sym_quoted_argument] = STATE(101),
    [sym_expansion] = STATE(101),
    [sym_operator_expansion] = STATE(101),
    [sym_command_substitution] = STATE(101),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(267),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [sym_single_quoted_argument] = ACTIONS(269),
    [anon_sym_DOLLAR] = ACTIONS(129),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(131),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(133),
    [sym_word] = ACTIONS(271),
    [sym_comment] = ACTIONS(73),
  },
  [43] = {
    [anon_sym_LT] = ACTIONS(273),
    [anon_sym_GT] = ACTIONS(273),
    [anon_sym_GT_GT] = ACTIONS(275),
    [anon_sym_AMP_GT] = ACTIONS(273),
    [anon_sym_AMP_GT_GT] = ACTIONS(275),
    [anon_sym_LT_AMP] = ACTIONS(275),
    [anon_sym_GT_AMP] = ACTIONS(275),
    [sym_comment] = ACTIONS(73),
  },
  [44] = {
    [sym_quoted_argument] = STATE(105),
    [sym_expansion] = STATE(105),
    [sym_operator_expansion] = STATE(105),
    [sym_command_substitution] = STATE(105),
    [sym_file_redirect] = STATE(47),
    [sym_heredoc_redirect] = STATE(47),
    [aux_sym_bracket_command_repeat1] = STATE(110),
    [aux_sym_command_repeat2] = STATE(111),
    [sym_file_descriptor] = ACTIONS(137),
    [anon_sym_SEMI_SEMI] = ACTIONS(277),
    [anon_sym_PIPE] = ACTIONS(277),
    [anon_sym_PIPE_AMP] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_DQUOTE] = ACTIONS(279),
    [sym_single_quoted_argument] = ACTIONS(281),
    [anon_sym_DOLLAR] = ACTIONS(283),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(285),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(287),
    [anon_sym_LT] = ACTIONS(143),
    [anon_sym_GT] = ACTIONS(143),
    [anon_sym_GT_GT] = ACTIONS(143),
    [anon_sym_AMP_GT] = ACTIONS(143),
    [anon_sym_AMP_GT_GT] = ACTIONS(143),
    [anon_sym_LT_AMP] = ACTIONS(143),
    [anon_sym_GT_AMP] = ACTIONS(143),
    [anon_sym_LT_LT] = ACTIONS(145),
    [anon_sym_LT_LT_DASH] = ACTIONS(145),
    [sym_word] = ACTIONS(289),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(277),
    [anon_sym_LF] = ACTIONS(277),
    [anon_sym_AMP] = ACTIONS(277),
  },
  [45] = {
    [sym_quoted_argument] = STATE(113),
    [sym_expansion] = STATE(113),
    [sym_operator_expansion] = STATE(113),
    [sym_command_substitution] = STATE(113),
    [anon_sym_DQUOTE] = ACTIONS(291),
    [sym_single_quoted_argument] = ACTIONS(293),
    [anon_sym_DOLLAR] = ACTIONS(295),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(297),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(299),
    [sym_word] = ACTIONS(301),
    [sym_comment] = ACTIONS(73),
  },
  [46] = {
    [sym_heredoc] = STATE(120),
    [sym__simple_heredoc] = ACTIONS(303),
    [sym__heredoc_beginning] = ACTIONS(305),
    [sym_comment] = ACTIONS(73),
  },
  [47] = {
    [sym_file_descriptor] = ACTIONS(307),
    [anon_sym_SEMI_SEMI] = ACTIONS(309),
    [anon_sym_PIPE] = ACTIONS(309),
    [anon_sym_PIPE_AMP] = ACTIONS(309),
    [anon_sym_AMP_AMP] = ACTIONS(309),
    [anon_sym_PIPE_PIPE] = ACTIONS(309),
    [anon_sym_LT] = ACTIONS(309),
    [anon_sym_GT] = ACTIONS(309),
    [anon_sym_GT_GT] = ACTIONS(309),
    [anon_sym_AMP_GT] = ACTIONS(309),
    [anon_sym_AMP_GT_GT] = ACTIONS(309),
    [anon_sym_LT_AMP] = ACTIONS(309),
    [anon_sym_GT_AMP] = ACTIONS(309),
    [anon_sym_LT_LT] = ACTIONS(309),
    [anon_sym_LT_LT_DASH] = ACTIONS(309),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(309),
    [anon_sym_LF] = ACTIONS(309),
    [anon_sym_AMP] = ACTIONS(309),
  },
  [48] = {
    [sym_file_redirect] = STATE(121),
    [sym_heredoc_redirect] = STATE(121),
    [sym_file_descriptor] = ACTIONS(137),
    [anon_sym_SEMI_SEMI] = ACTIONS(277),
    [anon_sym_PIPE] = ACTIONS(277),
    [anon_sym_PIPE_AMP] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_LT] = ACTIONS(143),
    [anon_sym_GT] = ACTIONS(143),
    [anon_sym_GT_GT] = ACTIONS(143),
    [anon_sym_AMP_GT] = ACTIONS(143),
    [anon_sym_AMP_GT_GT] = ACTIONS(143),
    [anon_sym_LT_AMP] = ACTIONS(143),
    [anon_sym_GT_AMP] = ACTIONS(143),
    [anon_sym_LT_LT] = ACTIONS(145),
    [anon_sym_LT_LT_DASH] = ACTIONS(145),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(277),
    [anon_sym_LF] = ACTIONS(277),
    [anon_sym_AMP] = ACTIONS(277),
  },
  [49] = {
    [sym_file_descriptor] = ACTIONS(311),
    [anon_sym_SEMI_SEMI] = ACTIONS(313),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(313),
    [anon_sym_PIPE] = ACTIONS(313),
    [anon_sym_PIPE_AMP] = ACTIONS(313),
    [anon_sym_AMP_AMP] = ACTIONS(313),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [anon_sym_LT] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(313),
    [anon_sym_GT_GT] = ACTIONS(313),
    [anon_sym_AMP_GT] = ACTIONS(313),
    [anon_sym_AMP_GT_GT] = ACTIONS(313),
    [anon_sym_LT_AMP] = ACTIONS(313),
    [anon_sym_GT_AMP] = ACTIONS(313),
    [anon_sym_LT_LT] = ACTIONS(313),
    [anon_sym_LT_LT_DASH] = ACTIONS(313),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(313),
    [anon_sym_LF] = ACTIONS(313),
    [anon_sym_AMP] = ACTIONS(313),
  },
  [50] = {
    [anon_sym_DQUOTE] = ACTIONS(315),
    [sym__quoted_chars] = ACTIONS(317),
    [anon_sym_DOLLAR] = ACTIONS(315),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(315),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(315),
    [sym_comment] = ACTIONS(147),
  },
  [51] = {
    [anon_sym_DOLLAR] = ACTIONS(319),
    [sym_word] = ACTIONS(321),
    [sym_comment] = ACTIONS(73),
  },
  [52] = {
    [sym_leading_word] = ACTIONS(323),
    [sym_comment] = ACTIONS(73),
  },
  [53] = {
    [sym_command] = STATE(125),
    [sym_environment_variable_assignment] = STATE(18),
    [sym_quoted_argument] = STATE(85),
    [sym_file_redirect] = STATE(18),
    [aux_sym_command_repeat1] = STATE(89),
    [sym_file_descriptor] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(229),
    [anon_sym_DQUOTE] = ACTIONS(231),
    [sym_single_quoted_argument] = ACTIONS(233),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_AMP_GT] = ACTIONS(101),
    [anon_sym_AMP_GT_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [sym_leading_word] = ACTIONS(235),
    [sym_comment] = ACTIONS(73),
  },
  [54] = {
    [sym_expansion] = STATE(127),
    [sym_operator_expansion] = STATE(127),
    [sym_command_substitution] = STATE(127),
    [anon_sym_DQUOTE] = ACTIONS(325),
    [sym__quoted_chars] = ACTIONS(327),
    [anon_sym_DOLLAR] = ACTIONS(153),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(155),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(157),
    [sym_comment] = ACTIONS(147),
  },
  [55] = {
    [sym_expansion] = STATE(50),
    [sym_operator_expansion] = STATE(50),
    [sym_command_substitution] = STATE(50),
    [aux_sym_quoted_argument_repeat1] = STATE(129),
    [anon_sym_DQUOTE] = ACTIONS(329),
    [sym__quoted_chars] = ACTIONS(151),
    [anon_sym_DOLLAR] = ACTIONS(153),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(155),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(157),
    [sym_comment] = ACTIONS(147),
  },
  [56] = {
    [sym_file_descriptor] = ACTIONS(331),
    [anon_sym_COLON] = ACTIONS(331),
    [anon_sym_DQUOTE] = ACTIONS(331),
    [sym_single_quoted_argument] = ACTIONS(333),
    [anon_sym_LT] = ACTIONS(333),
    [anon_sym_GT] = ACTIONS(333),
    [anon_sym_GT_GT] = ACTIONS(333),
    [anon_sym_AMP_GT] = ACTIONS(333),
    [anon_sym_AMP_GT_GT] = ACTIONS(333),
    [anon_sym_LT_AMP] = ACTIONS(333),
    [anon_sym_GT_AMP] = ACTIONS(333),
    [sym_leading_word] = ACTIONS(335),
    [sym_comment] = ACTIONS(73),
  },
  [57] = {
    [anon_sym_DOLLAR] = ACTIONS(337),
    [sym_word] = ACTIONS(339),
    [sym_comment] = ACTIONS(73),
  },
  [58] = {
    [sym_leading_word] = ACTIONS(341),
    [sym_comment] = ACTIONS(73),
  },
  [59] = {
    [sym_command] = STATE(133),
    [sym_environment_variable_assignment] = STATE(18),
    [sym_quoted_argument] = STATE(85),
    [sym_file_redirect] = STATE(18),
    [aux_sym_command_repeat1] = STATE(89),
    [sym_file_descriptor] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(229),
    [anon_sym_DQUOTE] = ACTIONS(231),
    [sym_single_quoted_argument] = ACTIONS(233),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_AMP_GT] = ACTIONS(101),
    [anon_sym_AMP_GT_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [sym_leading_word] = ACTIONS(235),
    [sym_comment] = ACTIONS(73),
  },
  [60] = {
    [sym_file_descriptor] = ACTIONS(343),
    [anon_sym_COLON] = ACTIONS(343),
    [anon_sym_DQUOTE] = ACTIONS(343),
    [sym_single_quoted_argument] = ACTIONS(345),
    [anon_sym_LT] = ACTIONS(345),
    [anon_sym_GT] = ACTIONS(345),
    [anon_sym_GT_GT] = ACTIONS(345),
    [anon_sym_AMP_GT] = ACTIONS(345),
    [anon_sym_AMP_GT_GT] = ACTIONS(345),
    [anon_sym_LT_AMP] = ACTIONS(345),
    [anon_sym_GT_AMP] = ACTIONS(345),
    [sym_leading_word] = ACTIONS(347),
    [sym_comment] = ACTIONS(73),
  },
  [61] = {
    [anon_sym_RPAREN] = ACTIONS(349),
    [sym_comment] = ACTIONS(73),
  },
  [62] = {
    [sym_quoted_argument] = STATE(105),
    [sym_expansion] = STATE(105),
    [sym_operator_expansion] = STATE(105),
    [sym_command_substitution] = STATE(105),
    [sym_file_redirect] = STATE(47),
    [sym_heredoc_redirect] = STATE(47),
    [aux_sym_bracket_command_repeat1] = STATE(135),
    [aux_sym_command_repeat2] = STATE(136),
    [sym_file_descriptor] = ACTIONS(137),
    [anon_sym_SEMI_SEMI] = ACTIONS(351),
    [anon_sym_PIPE] = ACTIONS(351),
    [anon_sym_PIPE_AMP] = ACTIONS(351),
    [anon_sym_AMP_AMP] = ACTIONS(351),
    [anon_sym_PIPE_PIPE] = ACTIONS(351),
    [anon_sym_DQUOTE] = ACTIONS(279),
    [sym_single_quoted_argument] = ACTIONS(281),
    [anon_sym_DOLLAR] = ACTIONS(283),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(285),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(287),
    [anon_sym_LT] = ACTIONS(143),
    [anon_sym_GT] = ACTIONS(143),
    [anon_sym_GT_GT] = ACTIONS(143),
    [anon_sym_AMP_GT] = ACTIONS(143),
    [anon_sym_AMP_GT_GT] = ACTIONS(143),
    [anon_sym_LT_AMP] = ACTIONS(143),
    [anon_sym_GT_AMP] = ACTIONS(143),
    [anon_sym_LT_LT] = ACTIONS(145),
    [anon_sym_LT_LT_DASH] = ACTIONS(145),
    [sym_word] = ACTIONS(289),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(351),
    [anon_sym_LF] = ACTIONS(351),
    [anon_sym_AMP] = ACTIONS(351),
  },
  [63] = {
    [sym_quoted_argument] = STATE(137),
    [sym_expansion] = STATE(137),
    [sym_operator_expansion] = STATE(137),
    [sym_command_substitution] = STATE(137),
    [sym__empty_value] = ACTIONS(353),
    [anon_sym_DQUOTE] = ACTIONS(355),
    [sym_single_quoted_argument] = ACTIONS(357),
    [anon_sym_DOLLAR] = ACTIONS(359),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(361),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(363),
    [sym_word] = ACTIONS(365),
    [sym_comment] = ACTIONS(73),
  },
  [64] = {
    [sym_file_redirect] = STATE(121),
    [sym_heredoc_redirect] = STATE(121),
    [sym_file_descriptor] = ACTIONS(137),
    [anon_sym_SEMI_SEMI] = ACTIONS(351),
    [anon_sym_PIPE] = ACTIONS(351),
    [anon_sym_PIPE_AMP] = ACTIONS(351),
    [anon_sym_AMP_AMP] = ACTIONS(351),
    [anon_sym_PIPE_PIPE] = ACTIONS(351),
    [anon_sym_LT] = ACTIONS(143),
    [anon_sym_GT] = ACTIONS(143),
    [anon_sym_GT_GT] = ACTIONS(143),
    [anon_sym_AMP_GT] = ACTIONS(143),
    [anon_sym_AMP_GT_GT] = ACTIONS(143),
    [anon_sym_LT_AMP] = ACTIONS(143),
    [anon_sym_GT_AMP] = ACTIONS(143),
    [anon_sym_LT_LT] = ACTIONS(145),
    [anon_sym_LT_LT_DASH] = ACTIONS(145),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(351),
    [anon_sym_LF] = ACTIONS(351),
    [anon_sym_AMP] = ACTIONS(351),
  },
  [65] = {
    [sym_file_descriptor] = ACTIONS(367),
    [ts_builtin_sym_end] = ACTIONS(367),
    [anon_sym_while] = ACTIONS(369),
    [anon_sym_do] = ACTIONS(369),
    [anon_sym_done] = ACTIONS(369),
    [anon_sym_if] = ACTIONS(369),
    [anon_sym_then] = ACTIONS(369),
    [anon_sym_fi] = ACTIONS(369),
    [anon_sym_elif] = ACTIONS(369),
    [anon_sym_else] = ACTIONS(369),
    [anon_sym_case] = ACTIONS(369),
    [anon_sym_RPAREN] = ACTIONS(367),
    [anon_sym_SEMI_SEMI] = ACTIONS(367),
    [anon_sym_function] = ACTIONS(369),
    [anon_sym_LPAREN] = ACTIONS(367),
    [anon_sym_RBRACE] = ACTIONS(367),
    [anon_sym_LBRACK] = ACTIONS(369),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(369),
    [anon_sym_COLON] = ACTIONS(367),
    [anon_sym_DQUOTE] = ACTIONS(367),
    [sym_single_quoted_argument] = ACTIONS(369),
    [anon_sym_LT] = ACTIONS(369),
    [anon_sym_GT] = ACTIONS(369),
    [anon_sym_GT_GT] = ACTIONS(369),
    [anon_sym_AMP_GT] = ACTIONS(369),
    [anon_sym_AMP_GT_GT] = ACTIONS(369),
    [anon_sym_LT_AMP] = ACTIONS(369),
    [anon_sym_GT_AMP] = ACTIONS(369),
    [sym_leading_word] = ACTIONS(371),
    [sym_comment] = ACTIONS(73),
  },
  [66] = {
    [sym_while_statement] = STATE(143),
    [sym_if_statement] = STATE(143),
    [sym_case_statement] = STATE(143),
    [sym_function_definition] = STATE(143),
    [sym_bracket_command] = STATE(143),
    [sym_command] = STATE(143),
    [sym_pipeline] = STATE(143),
    [sym_list] = STATE(143),
    [sym_subshell] = STATE(143),
    [sym_environment_variable_assignment] = STATE(144),
    [sym_quoted_argument] = STATE(10),
    [sym_file_redirect] = STATE(18),
    [aux_sym_command_repeat1] = STATE(20),
    [sym_file_descriptor] = ACTIONS(77),
    [anon_sym_while] = ACTIONS(81),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_case] = ACTIONS(85),
    [anon_sym_function] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_single_quoted_argument] = ACTIONS(99),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_AMP_GT] = ACTIONS(101),
    [anon_sym_AMP_GT_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [sym_leading_word] = ACTIONS(103),
    [sym_comment] = ACTIONS(73),
  },
  [67] = {
    [sym_while_statement] = STATE(145),
    [sym_if_statement] = STATE(145),
    [sym_case_statement] = STATE(145),
    [sym_function_definition] = STATE(145),
    [sym_bracket_command] = STATE(145),
    [sym_command] = STATE(145),
    [sym_pipeline] = STATE(145),
    [sym_list] = STATE(145),
    [sym_subshell] = STATE(145),
    [sym_environment_variable_assignment] = STATE(146),
    [sym_quoted_argument] = STATE(10),
    [sym_file_redirect] = STATE(18),
    [aux_sym_command_repeat1] = STATE(20),
    [sym_file_descriptor] = ACTIONS(77),
    [anon_sym_while] = ACTIONS(81),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_case] = ACTIONS(85),
    [anon_sym_function] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_single_quoted_argument] = ACTIONS(99),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_AMP_GT] = ACTIONS(101),
    [anon_sym_AMP_GT_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [sym_leading_word] = ACTIONS(103),
    [sym_comment] = ACTIONS(73),
  },
  [68] = {
    [sym_file_descriptor] = ACTIONS(373),
    [ts_builtin_sym_end] = ACTIONS(373),
    [anon_sym_while] = ACTIONS(375),
    [anon_sym_done] = ACTIONS(375),
    [anon_sym_if] = ACTIONS(375),
    [anon_sym_fi] = ACTIONS(375),
    [anon_sym_elif] = ACTIONS(375),
    [anon_sym_else] = ACTIONS(375),
    [anon_sym_case] = ACTIONS(375),
    [anon_sym_RPAREN] = ACTIONS(373),
    [anon_sym_SEMI_SEMI] = ACTIONS(373),
    [anon_sym_function] = ACTIONS(375),
    [anon_sym_LPAREN] = ACTIONS(373),
    [anon_sym_RBRACE] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(375),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(375),
    [anon_sym_COLON] = ACTIONS(373),
    [anon_sym_DQUOTE] = ACTIONS(373),
    [sym_single_quoted_argument] = ACTIONS(375),
    [anon_sym_LT] = ACTIONS(375),
    [anon_sym_GT] = ACTIONS(375),
    [anon_sym_GT_GT] = ACTIONS(375),
    [anon_sym_AMP_GT] = ACTIONS(375),
    [anon_sym_AMP_GT_GT] = ACTIONS(375),
    [anon_sym_LT_AMP] = ACTIONS(375),
    [anon_sym_GT_AMP] = ACTIONS(375),
    [sym_leading_word] = ACTIONS(377),
    [sym_comment] = ACTIONS(73),
  },
  [69] = {
    [sym_file_redirect] = STATE(47),
    [sym_heredoc_redirect] = STATE(47),
    [aux_sym_command_repeat2] = STATE(111),
    [sym_file_descriptor] = ACTIONS(137),
    [anon_sym_SEMI_SEMI] = ACTIONS(277),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(379),
    [anon_sym_PIPE] = ACTIONS(277),
    [anon_sym_PIPE_AMP] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_LT] = ACTIONS(143),
    [anon_sym_GT] = ACTIONS(143),
    [anon_sym_GT_GT] = ACTIONS(143),
    [anon_sym_AMP_GT] = ACTIONS(143),
    [anon_sym_AMP_GT_GT] = ACTIONS(143),
    [anon_sym_LT_AMP] = ACTIONS(143),
    [anon_sym_GT_AMP] = ACTIONS(143),
    [anon_sym_LT_LT] = ACTIONS(145),
    [anon_sym_LT_LT_DASH] = ACTIONS(145),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(277),
    [anon_sym_LF] = ACTIONS(277),
    [anon_sym_AMP] = ACTIONS(277),
  },
  [70] = {
    [sym_file_redirect] = STATE(47),
    [sym_heredoc_redirect] = STATE(47),
    [aux_sym_command_repeat2] = STATE(150),
    [sym_file_descriptor] = ACTIONS(137),
    [anon_sym_SEMI_SEMI] = ACTIONS(381),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(383),
    [anon_sym_PIPE] = ACTIONS(381),
    [anon_sym_PIPE_AMP] = ACTIONS(381),
    [anon_sym_AMP_AMP] = ACTIONS(381),
    [anon_sym_PIPE_PIPE] = ACTIONS(381),
    [anon_sym_EQ] = ACTIONS(385),
    [anon_sym_LT] = ACTIONS(143),
    [anon_sym_GT] = ACTIONS(143),
    [anon_sym_GT_GT] = ACTIONS(143),
    [anon_sym_AMP_GT] = ACTIONS(143),
    [anon_sym_AMP_GT_GT] = ACTIONS(143),
    [anon_sym_LT_AMP] = ACTIONS(143),
    [anon_sym_GT_AMP] = ACTIONS(143),
    [anon_sym_LT_LT] = ACTIONS(145),
    [anon_sym_LT_LT_DASH] = ACTIONS(145),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(381),
    [anon_sym_LF] = ACTIONS(381),
    [anon_sym_AMP] = ACTIONS(381),
  },
  [71] = {
    [sym_file_descriptor] = ACTIONS(387),
    [anon_sym_COLON] = ACTIONS(387),
    [anon_sym_DQUOTE] = ACTIONS(387),
    [sym_single_quoted_argument] = ACTIONS(389),
    [anon_sym_LT] = ACTIONS(389),
    [anon_sym_GT] = ACTIONS(389),
    [anon_sym_GT_GT] = ACTIONS(389),
    [anon_sym_AMP_GT] = ACTIONS(389),
    [anon_sym_AMP_GT_GT] = ACTIONS(389),
    [anon_sym_LT_AMP] = ACTIONS(389),
    [anon_sym_GT_AMP] = ACTIONS(389),
    [sym_leading_word] = ACTIONS(391),
    [sym_comment] = ACTIONS(73),
  },
  [72] = {
    [sym_file_descriptor] = ACTIONS(393),
    [anon_sym_COLON] = ACTIONS(393),
    [anon_sym_DQUOTE] = ACTIONS(393),
    [sym_single_quoted_argument] = ACTIONS(395),
    [anon_sym_LT] = ACTIONS(395),
    [anon_sym_GT] = ACTIONS(395),
    [anon_sym_GT_GT] = ACTIONS(395),
    [anon_sym_AMP_GT] = ACTIONS(395),
    [anon_sym_AMP_GT_GT] = ACTIONS(395),
    [anon_sym_LT_AMP] = ACTIONS(395),
    [anon_sym_GT_AMP] = ACTIONS(395),
    [sym_leading_word] = ACTIONS(397),
    [sym_comment] = ACTIONS(73),
  },
  [73] = {
    [sym_file_descriptor] = ACTIONS(399),
    [anon_sym_COLON] = ACTIONS(399),
    [anon_sym_DQUOTE] = ACTIONS(399),
    [sym_single_quoted_argument] = ACTIONS(401),
    [anon_sym_LT] = ACTIONS(401),
    [anon_sym_GT] = ACTIONS(401),
    [anon_sym_GT_GT] = ACTIONS(401),
    [anon_sym_AMP_GT] = ACTIONS(401),
    [anon_sym_AMP_GT_GT] = ACTIONS(401),
    [anon_sym_LT_AMP] = ACTIONS(401),
    [anon_sym_GT_AMP] = ACTIONS(401),
    [sym_leading_word] = ACTIONS(403),
    [sym_comment] = ACTIONS(73),
  },
  [74] = {
    [sym__terminated_statement] = STATE(15),
    [sym_while_statement] = STATE(16),
    [sym_if_statement] = STATE(16),
    [sym_case_statement] = STATE(16),
    [sym_function_definition] = STATE(16),
    [sym_bracket_command] = STATE(16),
    [sym_command] = STATE(16),
    [sym_pipeline] = STATE(16),
    [sym_list] = STATE(16),
    [sym_subshell] = STATE(16),
    [sym_environment_variable_assignment] = STATE(17),
    [sym_quoted_argument] = STATE(10),
    [sym_file_redirect] = STATE(18),
    [aux_sym_program_repeat1] = STATE(152),
    [aux_sym_command_repeat1] = STATE(20),
    [sym_file_descriptor] = ACTIONS(77),
    [anon_sym_while] = ACTIONS(81),
    [anon_sym_done] = ACTIONS(405),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_case] = ACTIONS(85),
    [anon_sym_function] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_single_quoted_argument] = ACTIONS(99),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_AMP_GT] = ACTIONS(101),
    [anon_sym_AMP_GT_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [sym_leading_word] = ACTIONS(103),
    [sym_comment] = ACTIONS(73),
  },
  [75] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(407),
    [anon_sym_PIPE] = ACTIONS(407),
    [anon_sym_PIPE_AMP] = ACTIONS(407),
    [anon_sym_AMP_AMP] = ACTIONS(407),
    [anon_sym_PIPE_PIPE] = ACTIONS(407),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(407),
    [anon_sym_LF] = ACTIONS(407),
    [anon_sym_AMP] = ACTIONS(407),
  },
  [76] = {
    [anon_sym_do] = ACTIONS(367),
    [anon_sym_then] = ACTIONS(367),
    [sym_comment] = ACTIONS(73),
  },
  [77] = {
    [sym__terminated_statement] = STATE(15),
    [sym_while_statement] = STATE(16),
    [sym_if_statement] = STATE(16),
    [sym_elif_clause] = STATE(156),
    [sym_else_clause] = STATE(157),
    [sym_case_statement] = STATE(16),
    [sym_function_definition] = STATE(16),
    [sym_bracket_command] = STATE(16),
    [sym_command] = STATE(16),
    [sym_pipeline] = STATE(16),
    [sym_list] = STATE(16),
    [sym_subshell] = STATE(16),
    [sym_environment_variable_assignment] = STATE(17),
    [sym_quoted_argument] = STATE(10),
    [sym_file_redirect] = STATE(18),
    [aux_sym_program_repeat1] = STATE(158),
    [aux_sym_if_statement_repeat1] = STATE(159),
    [aux_sym_command_repeat1] = STATE(20),
    [sym_file_descriptor] = ACTIONS(77),
    [anon_sym_while] = ACTIONS(81),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_fi] = ACTIONS(409),
    [anon_sym_elif] = ACTIONS(411),
    [anon_sym_else] = ACTIONS(413),
    [anon_sym_case] = ACTIONS(85),
    [anon_sym_function] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_single_quoted_argument] = ACTIONS(99),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_AMP_GT] = ACTIONS(101),
    [anon_sym_AMP_GT_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [sym_leading_word] = ACTIONS(103),
    [sym_comment] = ACTIONS(73),
  },
  [78] = {
    [anon_sym_in] = ACTIONS(313),
    [anon_sym_SEMI_SEMI] = ACTIONS(313),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(313),
    [anon_sym_LF] = ACTIONS(313),
    [anon_sym_AMP] = ACTIONS(313),
  },
  [79] = {
    [sym_expansion] = STATE(127),
    [sym_operator_expansion] = STATE(127),
    [sym_command_substitution] = STATE(127),
    [anon_sym_DQUOTE] = ACTIONS(415),
    [sym__quoted_chars] = ACTIONS(327),
    [anon_sym_DOLLAR] = ACTIONS(153),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(155),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(157),
    [sym_comment] = ACTIONS(147),
  },
  [80] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(417),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(417),
    [anon_sym_LF] = ACTIONS(417),
    [anon_sym_AMP] = ACTIONS(417),
  },
  [81] = {
    [anon_sym_in] = ACTIONS(419),
    [sym_comment] = ACTIONS(73),
  },
  [82] = {
    [anon_sym_in] = ACTIONS(421),
    [anon_sym_SEMI_SEMI] = ACTIONS(421),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(421),
    [anon_sym_LF] = ACTIONS(421),
    [anon_sym_AMP] = ACTIONS(421),
  },
  [83] = {
    [anon_sym_in] = ACTIONS(423),
    [anon_sym_SEMI_SEMI] = ACTIONS(423),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(423),
    [anon_sym_LF] = ACTIONS(423),
    [anon_sym_AMP] = ACTIONS(423),
  },
  [84] = {
    [anon_sym_RBRACE] = ACTIONS(425),
    [anon_sym_COLON] = ACTIONS(427),
    [anon_sym_EQ] = ACTIONS(429),
    [anon_sym_COLON_QMARK] = ACTIONS(429),
    [anon_sym_COLON_DASH] = ACTIONS(429),
    [sym_comment] = ACTIONS(73),
  },
  [85] = {
    [sym_file_redirect] = STATE(169),
    [sym_heredoc_redirect] = STATE(169),
    [aux_sym_command_repeat2] = STATE(170),
    [sym_file_descriptor] = ACTIONS(431),
    [anon_sym_RPAREN] = ACTIONS(139),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(433),
    [anon_sym_LT] = ACTIONS(435),
    [anon_sym_GT] = ACTIONS(435),
    [anon_sym_GT_GT] = ACTIONS(435),
    [anon_sym_AMP_GT] = ACTIONS(435),
    [anon_sym_AMP_GT_GT] = ACTIONS(435),
    [anon_sym_LT_AMP] = ACTIONS(435),
    [anon_sym_GT_AMP] = ACTIONS(435),
    [anon_sym_LT_LT] = ACTIONS(437),
    [anon_sym_LT_LT_DASH] = ACTIONS(437),
    [sym_comment] = ACTIONS(147),
  },
  [86] = {
    [sym_expansion] = STATE(50),
    [sym_operator_expansion] = STATE(50),
    [sym_command_substitution] = STATE(50),
    [aux_sym_quoted_argument_repeat1] = STATE(172),
    [anon_sym_DQUOTE] = ACTIONS(439),
    [sym__quoted_chars] = ACTIONS(151),
    [anon_sym_DOLLAR] = ACTIONS(153),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(155),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(157),
    [sym_comment] = ACTIONS(147),
  },
  [87] = {
    [sym_file_redirect] = STATE(169),
    [sym_heredoc_redirect] = STATE(169),
    [aux_sym_command_repeat2] = STATE(174),
    [sym_file_descriptor] = ACTIONS(431),
    [anon_sym_RPAREN] = ACTIONS(171),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(441),
    [anon_sym_EQ] = ACTIONS(385),
    [anon_sym_LT] = ACTIONS(435),
    [anon_sym_GT] = ACTIONS(435),
    [anon_sym_GT_GT] = ACTIONS(435),
    [anon_sym_AMP_GT] = ACTIONS(435),
    [anon_sym_AMP_GT_GT] = ACTIONS(435),
    [anon_sym_LT_AMP] = ACTIONS(435),
    [anon_sym_GT_AMP] = ACTIONS(435),
    [anon_sym_LT_LT] = ACTIONS(437),
    [anon_sym_LT_LT_DASH] = ACTIONS(437),
    [sym_comment] = ACTIONS(147),
  },
  [88] = {
    [anon_sym_RPAREN] = ACTIONS(443),
    [sym_comment] = ACTIONS(73),
  },
  [89] = {
    [sym_environment_variable_assignment] = STATE(71),
    [sym_quoted_argument] = STATE(176),
    [sym_file_redirect] = STATE(71),
    [sym_file_descriptor] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(445),
    [anon_sym_DQUOTE] = ACTIONS(231),
    [sym_single_quoted_argument] = ACTIONS(447),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_AMP_GT] = ACTIONS(101),
    [anon_sym_AMP_GT_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [sym_leading_word] = ACTIONS(449),
    [sym_comment] = ACTIONS(73),
  },
  [90] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(451),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(451),
    [anon_sym_LF] = ACTIONS(451),
    [anon_sym_AMP] = ACTIONS(451),
  },
  [91] = {
    [anon_sym_in] = ACTIONS(453),
    [sym_comment] = ACTIONS(73),
  },
  [92] = {
    [anon_sym_RPAREN] = ACTIONS(455),
    [sym_comment] = ACTIONS(73),
  },
  [93] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(457),
    [anon_sym_PIPE] = ACTIONS(457),
    [anon_sym_PIPE_AMP] = ACTIONS(457),
    [anon_sym_AMP_AMP] = ACTIONS(457),
    [anon_sym_PIPE_PIPE] = ACTIONS(457),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(457),
    [anon_sym_LF] = ACTIONS(457),
    [anon_sym_AMP] = ACTIONS(457),
  },
  [94] = {
    [anon_sym_RPAREN] = ACTIONS(311),
    [anon_sym_RBRACE] = ACTIONS(311),
    [anon_sym_RBRACK] = ACTIONS(459),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(459),
    [anon_sym_DQUOTE] = ACTIONS(311),
    [sym_single_quoted_argument] = ACTIONS(459),
    [anon_sym_DOLLAR] = ACTIONS(459),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(311),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(311),
    [sym_word] = ACTIONS(313),
    [sym_comment] = ACTIONS(73),
  },
  [95] = {
    [sym_expansion] = STATE(127),
    [sym_operator_expansion] = STATE(127),
    [sym_command_substitution] = STATE(127),
    [anon_sym_DQUOTE] = ACTIONS(461),
    [sym__quoted_chars] = ACTIONS(327),
    [anon_sym_DOLLAR] = ACTIONS(153),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(155),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(157),
    [sym_comment] = ACTIONS(147),
  },
  [96] = {
    [anon_sym_RPAREN] = ACTIONS(463),
    [anon_sym_RBRACE] = ACTIONS(463),
    [anon_sym_RBRACK] = ACTIONS(465),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(465),
    [anon_sym_DQUOTE] = ACTIONS(463),
    [sym_single_quoted_argument] = ACTIONS(465),
    [anon_sym_DOLLAR] = ACTIONS(465),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(463),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(463),
    [sym_word] = ACTIONS(421),
    [sym_comment] = ACTIONS(73),
  },
  [97] = {
    [anon_sym_RPAREN] = ACTIONS(467),
    [anon_sym_RBRACE] = ACTIONS(467),
    [anon_sym_RBRACK] = ACTIONS(469),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(469),
    [anon_sym_DQUOTE] = ACTIONS(467),
    [sym_single_quoted_argument] = ACTIONS(469),
    [anon_sym_DOLLAR] = ACTIONS(469),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(467),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(467),
    [sym_word] = ACTIONS(423),
    [sym_comment] = ACTIONS(73),
  },
  [98] = {
    [anon_sym_RBRACE] = ACTIONS(471),
    [anon_sym_COLON] = ACTIONS(473),
    [anon_sym_EQ] = ACTIONS(475),
    [anon_sym_COLON_QMARK] = ACTIONS(475),
    [anon_sym_COLON_DASH] = ACTIONS(475),
    [sym_comment] = ACTIONS(73),
  },
  [99] = {
    [anon_sym_RPAREN] = ACTIONS(477),
    [sym_comment] = ACTIONS(73),
  },
  [100] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(479),
    [anon_sym_PIPE] = ACTIONS(479),
    [anon_sym_PIPE_AMP] = ACTIONS(479),
    [anon_sym_AMP_AMP] = ACTIONS(479),
    [anon_sym_PIPE_PIPE] = ACTIONS(479),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(479),
    [anon_sym_LF] = ACTIONS(479),
    [anon_sym_AMP] = ACTIONS(479),
  },
  [101] = {
    [anon_sym_RBRACK] = ACTIONS(481),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(481),
    [anon_sym_DQUOTE] = ACTIONS(483),
    [sym_single_quoted_argument] = ACTIONS(481),
    [anon_sym_DOLLAR] = ACTIONS(481),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(483),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(483),
    [sym_word] = ACTIONS(485),
    [sym_comment] = ACTIONS(73),
  },
  [102] = {
    [anon_sym_RBRACK] = ACTIONS(487),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(487),
    [anon_sym_DQUOTE] = ACTIONS(489),
    [sym_single_quoted_argument] = ACTIONS(487),
    [anon_sym_DOLLAR] = ACTIONS(487),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(489),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(489),
    [sym_word] = ACTIONS(491),
    [sym_comment] = ACTIONS(73),
  },
  [103] = {
    [sym_quoted_argument] = STATE(185),
    [sym_expansion] = STATE(185),
    [sym_operator_expansion] = STATE(185),
    [sym_command_substitution] = STATE(185),
    [anon_sym_DQUOTE] = ACTIONS(291),
    [sym_single_quoted_argument] = ACTIONS(493),
    [anon_sym_DOLLAR] = ACTIONS(295),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(297),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(299),
    [sym_word] = ACTIONS(495),
    [sym_comment] = ACTIONS(73),
  },
  [104] = {
    [sym_expansion] = STATE(50),
    [sym_operator_expansion] = STATE(50),
    [sym_command_substitution] = STATE(50),
    [aux_sym_quoted_argument_repeat1] = STATE(188),
    [anon_sym_DQUOTE] = ACTIONS(497),
    [sym__quoted_chars] = ACTIONS(151),
    [anon_sym_DOLLAR] = ACTIONS(153),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(155),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(157),
    [sym_comment] = ACTIONS(147),
  },
  [105] = {
    [sym_file_descriptor] = ACTIONS(251),
    [anon_sym_SEMI_SEMI] = ACTIONS(253),
    [anon_sym_PIPE] = ACTIONS(253),
    [anon_sym_PIPE_AMP] = ACTIONS(253),
    [anon_sym_AMP_AMP] = ACTIONS(253),
    [anon_sym_PIPE_PIPE] = ACTIONS(253),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [sym_single_quoted_argument] = ACTIONS(253),
    [anon_sym_DOLLAR] = ACTIONS(253),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(253),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(253),
    [anon_sym_LT] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_GT_GT] = ACTIONS(253),
    [anon_sym_AMP_GT] = ACTIONS(253),
    [anon_sym_AMP_GT_GT] = ACTIONS(253),
    [anon_sym_LT_AMP] = ACTIONS(253),
    [anon_sym_GT_AMP] = ACTIONS(253),
    [anon_sym_LT_LT] = ACTIONS(253),
    [anon_sym_LT_LT_DASH] = ACTIONS(253),
    [sym_word] = ACTIONS(253),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(253),
    [anon_sym_LF] = ACTIONS(253),
    [anon_sym_AMP] = ACTIONS(253),
  },
  [106] = {
    [anon_sym_DOLLAR] = ACTIONS(499),
    [sym_word] = ACTIONS(501),
    [sym_comment] = ACTIONS(73),
  },
  [107] = {
    [sym_leading_word] = ACTIONS(503),
    [sym_comment] = ACTIONS(73),
  },
  [108] = {
    [sym_command] = STATE(192),
    [sym_environment_variable_assignment] = STATE(18),
    [sym_quoted_argument] = STATE(85),
    [sym_file_redirect] = STATE(18),
    [aux_sym_command_repeat1] = STATE(89),
    [sym_file_descriptor] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(229),
    [anon_sym_DQUOTE] = ACTIONS(231),
    [sym_single_quoted_argument] = ACTIONS(233),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_AMP_GT] = ACTIONS(101),
    [anon_sym_AMP_GT_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [sym_leading_word] = ACTIONS(235),
    [sym_comment] = ACTIONS(73),
  },
  [109] = {
    [sym_file_descriptor] = ACTIONS(263),
    [anon_sym_SEMI_SEMI] = ACTIONS(265),
    [anon_sym_PIPE] = ACTIONS(265),
    [anon_sym_PIPE_AMP] = ACTIONS(265),
    [anon_sym_AMP_AMP] = ACTIONS(265),
    [anon_sym_PIPE_PIPE] = ACTIONS(265),
    [anon_sym_DQUOTE] = ACTIONS(265),
    [sym_single_quoted_argument] = ACTIONS(265),
    [anon_sym_DOLLAR] = ACTIONS(265),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(265),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(265),
    [anon_sym_LT] = ACTIONS(265),
    [anon_sym_GT] = ACTIONS(265),
    [anon_sym_GT_GT] = ACTIONS(265),
    [anon_sym_AMP_GT] = ACTIONS(265),
    [anon_sym_AMP_GT_GT] = ACTIONS(265),
    [anon_sym_LT_AMP] = ACTIONS(265),
    [anon_sym_GT_AMP] = ACTIONS(265),
    [anon_sym_LT_LT] = ACTIONS(265),
    [anon_sym_LT_LT_DASH] = ACTIONS(265),
    [sym_word] = ACTIONS(265),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(265),
    [anon_sym_LF] = ACTIONS(265),
    [anon_sym_AMP] = ACTIONS(265),
  },
  [110] = {
    [sym_quoted_argument] = STATE(193),
    [sym_expansion] = STATE(193),
    [sym_operator_expansion] = STATE(193),
    [sym_command_substitution] = STATE(193),
    [sym_file_redirect] = STATE(47),
    [sym_heredoc_redirect] = STATE(47),
    [aux_sym_command_repeat2] = STATE(195),
    [sym_file_descriptor] = ACTIONS(137),
    [anon_sym_SEMI_SEMI] = ACTIONS(505),
    [anon_sym_PIPE] = ACTIONS(505),
    [anon_sym_PIPE_AMP] = ACTIONS(505),
    [anon_sym_AMP_AMP] = ACTIONS(505),
    [anon_sym_PIPE_PIPE] = ACTIONS(505),
    [anon_sym_DQUOTE] = ACTIONS(279),
    [sym_single_quoted_argument] = ACTIONS(507),
    [anon_sym_DOLLAR] = ACTIONS(283),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(285),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(287),
    [anon_sym_LT] = ACTIONS(143),
    [anon_sym_GT] = ACTIONS(143),
    [anon_sym_GT_GT] = ACTIONS(143),
    [anon_sym_AMP_GT] = ACTIONS(143),
    [anon_sym_AMP_GT_GT] = ACTIONS(143),
    [anon_sym_LT_AMP] = ACTIONS(143),
    [anon_sym_GT_AMP] = ACTIONS(143),
    [anon_sym_LT_LT] = ACTIONS(145),
    [anon_sym_LT_LT_DASH] = ACTIONS(145),
    [sym_word] = ACTIONS(509),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(505),
    [anon_sym_LF] = ACTIONS(505),
    [anon_sym_AMP] = ACTIONS(505),
  },
  [111] = {
    [sym_file_redirect] = STATE(121),
    [sym_heredoc_redirect] = STATE(121),
    [sym_file_descriptor] = ACTIONS(137),
    [anon_sym_SEMI_SEMI] = ACTIONS(505),
    [anon_sym_PIPE] = ACTIONS(505),
    [anon_sym_PIPE_AMP] = ACTIONS(505),
    [anon_sym_AMP_AMP] = ACTIONS(505),
    [anon_sym_PIPE_PIPE] = ACTIONS(505),
    [anon_sym_LT] = ACTIONS(143),
    [anon_sym_GT] = ACTIONS(143),
    [anon_sym_GT_GT] = ACTIONS(143),
    [anon_sym_AMP_GT] = ACTIONS(143),
    [anon_sym_AMP_GT_GT] = ACTIONS(143),
    [anon_sym_LT_AMP] = ACTIONS(143),
    [anon_sym_GT_AMP] = ACTIONS(143),
    [anon_sym_LT_LT] = ACTIONS(145),
    [anon_sym_LT_LT_DASH] = ACTIONS(145),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(505),
    [anon_sym_LF] = ACTIONS(505),
    [anon_sym_AMP] = ACTIONS(505),
  },
  [112] = {
    [sym_expansion] = STATE(50),
    [sym_operator_expansion] = STATE(50),
    [sym_command_substitution] = STATE(50),
    [aux_sym_quoted_argument_repeat1] = STATE(197),
    [anon_sym_DQUOTE] = ACTIONS(511),
    [sym__quoted_chars] = ACTIONS(151),
    [anon_sym_DOLLAR] = ACTIONS(153),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(155),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(157),
    [sym_comment] = ACTIONS(147),
  },
  [113] = {
    [sym_file_descriptor] = ACTIONS(331),
    [anon_sym_SEMI_SEMI] = ACTIONS(335),
    [anon_sym_PIPE] = ACTIONS(335),
    [anon_sym_PIPE_AMP] = ACTIONS(335),
    [anon_sym_AMP_AMP] = ACTIONS(335),
    [anon_sym_PIPE_PIPE] = ACTIONS(335),
    [anon_sym_LT] = ACTIONS(335),
    [anon_sym_GT] = ACTIONS(335),
    [anon_sym_GT_GT] = ACTIONS(335),
    [anon_sym_AMP_GT] = ACTIONS(335),
    [anon_sym_AMP_GT_GT] = ACTIONS(335),
    [anon_sym_LT_AMP] = ACTIONS(335),
    [anon_sym_GT_AMP] = ACTIONS(335),
    [anon_sym_LT_LT] = ACTIONS(335),
    [anon_sym_LT_LT_DASH] = ACTIONS(335),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(335),
    [anon_sym_LF] = ACTIONS(335),
    [anon_sym_AMP] = ACTIONS(335),
  },
  [114] = {
    [anon_sym_DOLLAR] = ACTIONS(513),
    [sym_word] = ACTIONS(515),
    [sym_comment] = ACTIONS(73),
  },
  [115] = {
    [sym_leading_word] = ACTIONS(517),
    [sym_comment] = ACTIONS(73),
  },
  [116] = {
    [sym_command] = STATE(201),
    [sym_environment_variable_assignment] = STATE(18),
    [sym_quoted_argument] = STATE(85),
    [sym_file_redirect] = STATE(18),
    [aux_sym_command_repeat1] = STATE(89),
    [sym_file_descriptor] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(229),
    [anon_sym_DQUOTE] = ACTIONS(231),
    [sym_single_quoted_argument] = ACTIONS(233),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_AMP_GT] = ACTIONS(101),
    [anon_sym_AMP_GT_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [sym_leading_word] = ACTIONS(235),
    [sym_comment] = ACTIONS(73),
  },
  [117] = {
    [sym_file_descriptor] = ACTIONS(343),
    [anon_sym_SEMI_SEMI] = ACTIONS(347),
    [anon_sym_PIPE] = ACTIONS(347),
    [anon_sym_PIPE_AMP] = ACTIONS(347),
    [anon_sym_AMP_AMP] = ACTIONS(347),
    [anon_sym_PIPE_PIPE] = ACTIONS(347),
    [anon_sym_LT] = ACTIONS(347),
    [anon_sym_GT] = ACTIONS(347),
    [anon_sym_GT_GT] = ACTIONS(347),
    [anon_sym_AMP_GT] = ACTIONS(347),
    [anon_sym_AMP_GT_GT] = ACTIONS(347),
    [anon_sym_LT_AMP] = ACTIONS(347),
    [anon_sym_GT_AMP] = ACTIONS(347),
    [anon_sym_LT_LT] = ACTIONS(347),
    [anon_sym_LT_LT_DASH] = ACTIONS(347),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(347),
    [anon_sym_LF] = ACTIONS(347),
    [anon_sym_AMP] = ACTIONS(347),
  },
  [118] = {
    [sym_file_descriptor] = ACTIONS(519),
    [anon_sym_SEMI_SEMI] = ACTIONS(521),
    [anon_sym_PIPE] = ACTIONS(521),
    [anon_sym_PIPE_AMP] = ACTIONS(521),
    [anon_sym_AMP_AMP] = ACTIONS(521),
    [anon_sym_PIPE_PIPE] = ACTIONS(521),
    [anon_sym_LT] = ACTIONS(521),
    [anon_sym_GT] = ACTIONS(521),
    [anon_sym_GT_GT] = ACTIONS(521),
    [anon_sym_AMP_GT] = ACTIONS(521),
    [anon_sym_AMP_GT_GT] = ACTIONS(521),
    [anon_sym_LT_AMP] = ACTIONS(521),
    [anon_sym_GT_AMP] = ACTIONS(521),
    [anon_sym_LT_LT] = ACTIONS(521),
    [anon_sym_LT_LT_DASH] = ACTIONS(521),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(521),
    [anon_sym_LF] = ACTIONS(521),
    [anon_sym_AMP] = ACTIONS(521),
  },
  [119] = {
    [sym_expansion] = STATE(202),
    [sym_operator_expansion] = STATE(202),
    [aux_sym_heredoc_repeat1] = STATE(206),
    [sym__heredoc_middle] = ACTIONS(523),
    [sym__heredoc_end] = ACTIONS(525),
    [anon_sym_DOLLAR] = ACTIONS(527),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(529),
    [sym_comment] = ACTIONS(73),
  },
  [120] = {
    [sym_file_descriptor] = ACTIONS(531),
    [anon_sym_SEMI_SEMI] = ACTIONS(533),
    [anon_sym_PIPE] = ACTIONS(533),
    [anon_sym_PIPE_AMP] = ACTIONS(533),
    [anon_sym_AMP_AMP] = ACTIONS(533),
    [anon_sym_PIPE_PIPE] = ACTIONS(533),
    [anon_sym_LT] = ACTIONS(533),
    [anon_sym_GT] = ACTIONS(533),
    [anon_sym_GT_GT] = ACTIONS(533),
    [anon_sym_AMP_GT] = ACTIONS(533),
    [anon_sym_AMP_GT_GT] = ACTIONS(533),
    [anon_sym_LT_AMP] = ACTIONS(533),
    [anon_sym_GT_AMP] = ACTIONS(533),
    [anon_sym_LT_LT] = ACTIONS(533),
    [anon_sym_LT_LT_DASH] = ACTIONS(533),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(533),
    [anon_sym_LF] = ACTIONS(533),
    [anon_sym_AMP] = ACTIONS(533),
  },
  [121] = {
    [sym_file_descriptor] = ACTIONS(535),
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
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(537),
    [anon_sym_LF] = ACTIONS(537),
    [anon_sym_AMP] = ACTIONS(537),
  },
  [122] = {
    [anon_sym_DQUOTE] = ACTIONS(421),
    [sym__quoted_chars] = ACTIONS(465),
    [anon_sym_DOLLAR] = ACTIONS(421),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(421),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(421),
    [sym_comment] = ACTIONS(147),
  },
  [123] = {
    [anon_sym_DQUOTE] = ACTIONS(423),
    [sym__quoted_chars] = ACTIONS(469),
    [anon_sym_DOLLAR] = ACTIONS(423),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(423),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(423),
    [sym_comment] = ACTIONS(147),
  },
  [124] = {
    [anon_sym_RBRACE] = ACTIONS(539),
    [anon_sym_COLON] = ACTIONS(541),
    [anon_sym_EQ] = ACTIONS(543),
    [anon_sym_COLON_QMARK] = ACTIONS(543),
    [anon_sym_COLON_DASH] = ACTIONS(543),
    [sym_comment] = ACTIONS(73),
  },
  [125] = {
    [anon_sym_RPAREN] = ACTIONS(545),
    [sym_comment] = ACTIONS(73),
  },
  [126] = {
    [sym_file_descriptor] = ACTIONS(547),
    [anon_sym_SEMI_SEMI] = ACTIONS(549),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(549),
    [anon_sym_PIPE] = ACTIONS(549),
    [anon_sym_PIPE_AMP] = ACTIONS(549),
    [anon_sym_AMP_AMP] = ACTIONS(549),
    [anon_sym_PIPE_PIPE] = ACTIONS(549),
    [anon_sym_LT] = ACTIONS(549),
    [anon_sym_GT] = ACTIONS(549),
    [anon_sym_GT_GT] = ACTIONS(549),
    [anon_sym_AMP_GT] = ACTIONS(549),
    [anon_sym_AMP_GT_GT] = ACTIONS(549),
    [anon_sym_LT_AMP] = ACTIONS(549),
    [anon_sym_GT_AMP] = ACTIONS(549),
    [anon_sym_LT_LT] = ACTIONS(549),
    [anon_sym_LT_LT_DASH] = ACTIONS(549),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(549),
    [anon_sym_LF] = ACTIONS(549),
    [anon_sym_AMP] = ACTIONS(549),
  },
  [127] = {
    [anon_sym_DQUOTE] = ACTIONS(551),
    [sym__quoted_chars] = ACTIONS(553),
    [anon_sym_DOLLAR] = ACTIONS(551),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(551),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(551),
    [sym_comment] = ACTIONS(147),
  },
  [128] = {
    [sym_file_descriptor] = ACTIONS(311),
    [anon_sym_COLON] = ACTIONS(311),
    [anon_sym_DQUOTE] = ACTIONS(311),
    [sym_single_quoted_argument] = ACTIONS(459),
    [anon_sym_LT] = ACTIONS(459),
    [anon_sym_GT] = ACTIONS(459),
    [anon_sym_GT_GT] = ACTIONS(459),
    [anon_sym_AMP_GT] = ACTIONS(459),
    [anon_sym_AMP_GT_GT] = ACTIONS(459),
    [anon_sym_LT_AMP] = ACTIONS(459),
    [anon_sym_GT_AMP] = ACTIONS(459),
    [sym_leading_word] = ACTIONS(313),
    [sym_comment] = ACTIONS(73),
  },
  [129] = {
    [sym_expansion] = STATE(127),
    [sym_operator_expansion] = STATE(127),
    [sym_command_substitution] = STATE(127),
    [anon_sym_DQUOTE] = ACTIONS(555),
    [sym__quoted_chars] = ACTIONS(327),
    [anon_sym_DOLLAR] = ACTIONS(153),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(155),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(157),
    [sym_comment] = ACTIONS(147),
  },
  [130] = {
    [sym_file_descriptor] = ACTIONS(463),
    [anon_sym_COLON] = ACTIONS(463),
    [anon_sym_DQUOTE] = ACTIONS(463),
    [sym_single_quoted_argument] = ACTIONS(465),
    [anon_sym_LT] = ACTIONS(465),
    [anon_sym_GT] = ACTIONS(465),
    [anon_sym_GT_GT] = ACTIONS(465),
    [anon_sym_AMP_GT] = ACTIONS(465),
    [anon_sym_AMP_GT_GT] = ACTIONS(465),
    [anon_sym_LT_AMP] = ACTIONS(465),
    [anon_sym_GT_AMP] = ACTIONS(465),
    [sym_leading_word] = ACTIONS(421),
    [sym_comment] = ACTIONS(73),
  },
  [131] = {
    [sym_file_descriptor] = ACTIONS(467),
    [anon_sym_COLON] = ACTIONS(467),
    [anon_sym_DQUOTE] = ACTIONS(467),
    [sym_single_quoted_argument] = ACTIONS(469),
    [anon_sym_LT] = ACTIONS(469),
    [anon_sym_GT] = ACTIONS(469),
    [anon_sym_GT_GT] = ACTIONS(469),
    [anon_sym_AMP_GT] = ACTIONS(469),
    [anon_sym_AMP_GT_GT] = ACTIONS(469),
    [anon_sym_LT_AMP] = ACTIONS(469),
    [anon_sym_GT_AMP] = ACTIONS(469),
    [sym_leading_word] = ACTIONS(423),
    [sym_comment] = ACTIONS(73),
  },
  [132] = {
    [anon_sym_RBRACE] = ACTIONS(557),
    [anon_sym_COLON] = ACTIONS(559),
    [anon_sym_EQ] = ACTIONS(561),
    [anon_sym_COLON_QMARK] = ACTIONS(561),
    [anon_sym_COLON_DASH] = ACTIONS(561),
    [sym_comment] = ACTIONS(73),
  },
  [133] = {
    [anon_sym_RPAREN] = ACTIONS(563),
    [sym_comment] = ACTIONS(73),
  },
  [134] = {
    [sym_compound_command] = STATE(215),
    [anon_sym_LBRACE] = ACTIONS(565),
    [sym_comment] = ACTIONS(73),
  },
  [135] = {
    [sym_quoted_argument] = STATE(193),
    [sym_expansion] = STATE(193),
    [sym_operator_expansion] = STATE(193),
    [sym_command_substitution] = STATE(193),
    [sym_file_redirect] = STATE(47),
    [sym_heredoc_redirect] = STATE(47),
    [aux_sym_command_repeat2] = STATE(216),
    [sym_file_descriptor] = ACTIONS(137),
    [anon_sym_SEMI_SEMI] = ACTIONS(567),
    [anon_sym_PIPE] = ACTIONS(567),
    [anon_sym_PIPE_AMP] = ACTIONS(567),
    [anon_sym_AMP_AMP] = ACTIONS(567),
    [anon_sym_PIPE_PIPE] = ACTIONS(567),
    [anon_sym_DQUOTE] = ACTIONS(279),
    [sym_single_quoted_argument] = ACTIONS(507),
    [anon_sym_DOLLAR] = ACTIONS(283),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(285),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(287),
    [anon_sym_LT] = ACTIONS(143),
    [anon_sym_GT] = ACTIONS(143),
    [anon_sym_GT_GT] = ACTIONS(143),
    [anon_sym_AMP_GT] = ACTIONS(143),
    [anon_sym_AMP_GT_GT] = ACTIONS(143),
    [anon_sym_LT_AMP] = ACTIONS(143),
    [anon_sym_GT_AMP] = ACTIONS(143),
    [anon_sym_LT_LT] = ACTIONS(145),
    [anon_sym_LT_LT_DASH] = ACTIONS(145),
    [sym_word] = ACTIONS(509),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(567),
    [anon_sym_LF] = ACTIONS(567),
    [anon_sym_AMP] = ACTIONS(567),
  },
  [136] = {
    [sym_file_redirect] = STATE(121),
    [sym_heredoc_redirect] = STATE(121),
    [sym_file_descriptor] = ACTIONS(137),
    [anon_sym_SEMI_SEMI] = ACTIONS(567),
    [anon_sym_PIPE] = ACTIONS(567),
    [anon_sym_PIPE_AMP] = ACTIONS(567),
    [anon_sym_AMP_AMP] = ACTIONS(567),
    [anon_sym_PIPE_PIPE] = ACTIONS(567),
    [anon_sym_LT] = ACTIONS(143),
    [anon_sym_GT] = ACTIONS(143),
    [anon_sym_GT_GT] = ACTIONS(143),
    [anon_sym_AMP_GT] = ACTIONS(143),
    [anon_sym_AMP_GT_GT] = ACTIONS(143),
    [anon_sym_LT_AMP] = ACTIONS(143),
    [anon_sym_GT_AMP] = ACTIONS(143),
    [anon_sym_LT_LT] = ACTIONS(145),
    [anon_sym_LT_LT_DASH] = ACTIONS(145),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(567),
    [anon_sym_LF] = ACTIONS(567),
    [anon_sym_AMP] = ACTIONS(567),
  },
  [137] = {
    [sym_file_descriptor] = ACTIONS(569),
    [anon_sym_SEMI_SEMI] = ACTIONS(571),
    [anon_sym_COLON] = ACTIONS(571),
    [anon_sym_PIPE] = ACTIONS(571),
    [anon_sym_PIPE_AMP] = ACTIONS(571),
    [anon_sym_AMP_AMP] = ACTIONS(571),
    [anon_sym_PIPE_PIPE] = ACTIONS(571),
    [anon_sym_DQUOTE] = ACTIONS(571),
    [sym_single_quoted_argument] = ACTIONS(571),
    [anon_sym_LT] = ACTIONS(571),
    [anon_sym_GT] = ACTIONS(571),
    [anon_sym_GT_GT] = ACTIONS(571),
    [anon_sym_AMP_GT] = ACTIONS(571),
    [anon_sym_AMP_GT_GT] = ACTIONS(571),
    [anon_sym_LT_AMP] = ACTIONS(571),
    [anon_sym_GT_AMP] = ACTIONS(571),
    [sym_leading_word] = ACTIONS(571),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(571),
    [anon_sym_LF] = ACTIONS(571),
    [anon_sym_AMP] = ACTIONS(571),
  },
  [138] = {
    [sym_expansion] = STATE(50),
    [sym_operator_expansion] = STATE(50),
    [sym_command_substitution] = STATE(50),
    [aux_sym_quoted_argument_repeat1] = STATE(218),
    [anon_sym_DQUOTE] = ACTIONS(573),
    [sym__quoted_chars] = ACTIONS(151),
    [anon_sym_DOLLAR] = ACTIONS(153),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(155),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(157),
    [sym_comment] = ACTIONS(147),
  },
  [139] = {
    [anon_sym_DOLLAR] = ACTIONS(575),
    [sym_word] = ACTIONS(577),
    [sym_comment] = ACTIONS(73),
  },
  [140] = {
    [sym_leading_word] = ACTIONS(579),
    [sym_comment] = ACTIONS(73),
  },
  [141] = {
    [sym_command] = STATE(222),
    [sym_environment_variable_assignment] = STATE(18),
    [sym_quoted_argument] = STATE(85),
    [sym_file_redirect] = STATE(18),
    [aux_sym_command_repeat1] = STATE(89),
    [sym_file_descriptor] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(229),
    [anon_sym_DQUOTE] = ACTIONS(231),
    [sym_single_quoted_argument] = ACTIONS(233),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_AMP_GT] = ACTIONS(101),
    [anon_sym_AMP_GT_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [sym_leading_word] = ACTIONS(235),
    [sym_comment] = ACTIONS(73),
  },
  [142] = {
    [sym_file_descriptor] = ACTIONS(581),
    [anon_sym_SEMI_SEMI] = ACTIONS(583),
    [anon_sym_COLON] = ACTIONS(583),
    [anon_sym_PIPE] = ACTIONS(583),
    [anon_sym_PIPE_AMP] = ACTIONS(583),
    [anon_sym_AMP_AMP] = ACTIONS(583),
    [anon_sym_PIPE_PIPE] = ACTIONS(583),
    [anon_sym_DQUOTE] = ACTIONS(583),
    [sym_single_quoted_argument] = ACTIONS(583),
    [anon_sym_LT] = ACTIONS(583),
    [anon_sym_GT] = ACTIONS(583),
    [anon_sym_GT_GT] = ACTIONS(583),
    [anon_sym_AMP_GT] = ACTIONS(583),
    [anon_sym_AMP_GT_GT] = ACTIONS(583),
    [anon_sym_LT_AMP] = ACTIONS(583),
    [anon_sym_GT_AMP] = ACTIONS(583),
    [sym_leading_word] = ACTIONS(583),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(583),
    [anon_sym_LF] = ACTIONS(583),
    [anon_sym_AMP] = ACTIONS(583),
  },
  [143] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(585),
    [anon_sym_PIPE] = ACTIONS(585),
    [anon_sym_PIPE_AMP] = ACTIONS(585),
    [anon_sym_AMP_AMP] = ACTIONS(585),
    [anon_sym_PIPE_PIPE] = ACTIONS(585),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(585),
    [anon_sym_LF] = ACTIONS(585),
    [anon_sym_AMP] = ACTIONS(585),
  },
  [144] = {
    [sym_file_descriptor] = ACTIONS(193),
    [anon_sym_SEMI_SEMI] = ACTIONS(585),
    [anon_sym_COLON] = ACTIONS(195),
    [anon_sym_PIPE] = ACTIONS(585),
    [anon_sym_PIPE_AMP] = ACTIONS(585),
    [anon_sym_AMP_AMP] = ACTIONS(585),
    [anon_sym_PIPE_PIPE] = ACTIONS(585),
    [anon_sym_DQUOTE] = ACTIONS(195),
    [sym_single_quoted_argument] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(195),
    [anon_sym_GT] = ACTIONS(195),
    [anon_sym_GT_GT] = ACTIONS(195),
    [anon_sym_AMP_GT] = ACTIONS(195),
    [anon_sym_AMP_GT_GT] = ACTIONS(195),
    [anon_sym_LT_AMP] = ACTIONS(195),
    [anon_sym_GT_AMP] = ACTIONS(195),
    [sym_leading_word] = ACTIONS(195),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(585),
    [anon_sym_LF] = ACTIONS(585),
    [anon_sym_AMP] = ACTIONS(585),
  },
  [145] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(587),
    [anon_sym_PIPE] = ACTIONS(189),
    [anon_sym_PIPE_AMP] = ACTIONS(189),
    [anon_sym_AMP_AMP] = ACTIONS(587),
    [anon_sym_PIPE_PIPE] = ACTIONS(587),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(587),
    [anon_sym_LF] = ACTIONS(587),
    [anon_sym_AMP] = ACTIONS(587),
  },
  [146] = {
    [sym_file_descriptor] = ACTIONS(193),
    [anon_sym_SEMI_SEMI] = ACTIONS(587),
    [anon_sym_COLON] = ACTIONS(195),
    [anon_sym_PIPE] = ACTIONS(189),
    [anon_sym_PIPE_AMP] = ACTIONS(189),
    [anon_sym_AMP_AMP] = ACTIONS(587),
    [anon_sym_PIPE_PIPE] = ACTIONS(587),
    [anon_sym_DQUOTE] = ACTIONS(195),
    [sym_single_quoted_argument] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(195),
    [anon_sym_GT] = ACTIONS(195),
    [anon_sym_GT_GT] = ACTIONS(195),
    [anon_sym_AMP_GT] = ACTIONS(195),
    [anon_sym_AMP_GT_GT] = ACTIONS(195),
    [anon_sym_LT_AMP] = ACTIONS(195),
    [anon_sym_GT_AMP] = ACTIONS(195),
    [sym_leading_word] = ACTIONS(195),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(587),
    [anon_sym_LF] = ACTIONS(587),
    [anon_sym_AMP] = ACTIONS(587),
  },
  [147] = {
    [sym_quoted_argument] = STATE(105),
    [sym_expansion] = STATE(105),
    [sym_operator_expansion] = STATE(105),
    [sym_command_substitution] = STATE(105),
    [sym_file_redirect] = STATE(47),
    [sym_heredoc_redirect] = STATE(47),
    [aux_sym_bracket_command_repeat1] = STATE(223),
    [aux_sym_command_repeat2] = STATE(195),
    [sym_file_descriptor] = ACTIONS(137),
    [anon_sym_SEMI_SEMI] = ACTIONS(505),
    [anon_sym_PIPE] = ACTIONS(505),
    [anon_sym_PIPE_AMP] = ACTIONS(505),
    [anon_sym_AMP_AMP] = ACTIONS(505),
    [anon_sym_PIPE_PIPE] = ACTIONS(505),
    [anon_sym_DQUOTE] = ACTIONS(279),
    [sym_single_quoted_argument] = ACTIONS(281),
    [anon_sym_DOLLAR] = ACTIONS(283),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(285),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(287),
    [anon_sym_LT] = ACTIONS(143),
    [anon_sym_GT] = ACTIONS(143),
    [anon_sym_GT_GT] = ACTIONS(143),
    [anon_sym_AMP_GT] = ACTIONS(143),
    [anon_sym_AMP_GT_GT] = ACTIONS(143),
    [anon_sym_LT_AMP] = ACTIONS(143),
    [anon_sym_GT_AMP] = ACTIONS(143),
    [anon_sym_LT_LT] = ACTIONS(145),
    [anon_sym_LT_LT_DASH] = ACTIONS(145),
    [sym_word] = ACTIONS(289),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(505),
    [anon_sym_LF] = ACTIONS(505),
    [anon_sym_AMP] = ACTIONS(505),
  },
  [148] = {
    [sym_quoted_argument] = STATE(105),
    [sym_expansion] = STATE(105),
    [sym_operator_expansion] = STATE(105),
    [sym_command_substitution] = STATE(105),
    [sym_file_redirect] = STATE(47),
    [sym_heredoc_redirect] = STATE(47),
    [aux_sym_bracket_command_repeat1] = STATE(224),
    [aux_sym_command_repeat2] = STATE(225),
    [sym_file_descriptor] = ACTIONS(137),
    [anon_sym_SEMI_SEMI] = ACTIONS(589),
    [anon_sym_PIPE] = ACTIONS(589),
    [anon_sym_PIPE_AMP] = ACTIONS(589),
    [anon_sym_AMP_AMP] = ACTIONS(589),
    [anon_sym_PIPE_PIPE] = ACTIONS(589),
    [anon_sym_DQUOTE] = ACTIONS(279),
    [sym_single_quoted_argument] = ACTIONS(281),
    [anon_sym_DOLLAR] = ACTIONS(283),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(285),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(287),
    [anon_sym_LT] = ACTIONS(143),
    [anon_sym_GT] = ACTIONS(143),
    [anon_sym_GT_GT] = ACTIONS(143),
    [anon_sym_AMP_GT] = ACTIONS(143),
    [anon_sym_AMP_GT_GT] = ACTIONS(143),
    [anon_sym_LT_AMP] = ACTIONS(143),
    [anon_sym_GT_AMP] = ACTIONS(143),
    [anon_sym_LT_LT] = ACTIONS(145),
    [anon_sym_LT_LT_DASH] = ACTIONS(145),
    [sym_word] = ACTIONS(289),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(589),
    [anon_sym_LF] = ACTIONS(589),
    [anon_sym_AMP] = ACTIONS(589),
  },
  [149] = {
    [sym_quoted_argument] = STATE(226),
    [sym_expansion] = STATE(226),
    [sym_operator_expansion] = STATE(226),
    [sym_command_substitution] = STATE(226),
    [sym__empty_value] = ACTIONS(591),
    [anon_sym_DQUOTE] = ACTIONS(159),
    [sym_single_quoted_argument] = ACTIONS(593),
    [anon_sym_DOLLAR] = ACTIONS(163),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(165),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(167),
    [sym_word] = ACTIONS(595),
    [sym_comment] = ACTIONS(73),
  },
  [150] = {
    [sym_file_redirect] = STATE(121),
    [sym_heredoc_redirect] = STATE(121),
    [sym_file_descriptor] = ACTIONS(137),
    [anon_sym_SEMI_SEMI] = ACTIONS(589),
    [anon_sym_PIPE] = ACTIONS(589),
    [anon_sym_PIPE_AMP] = ACTIONS(589),
    [anon_sym_AMP_AMP] = ACTIONS(589),
    [anon_sym_PIPE_PIPE] = ACTIONS(589),
    [anon_sym_LT] = ACTIONS(143),
    [anon_sym_GT] = ACTIONS(143),
    [anon_sym_GT_GT] = ACTIONS(143),
    [anon_sym_AMP_GT] = ACTIONS(143),
    [anon_sym_AMP_GT_GT] = ACTIONS(143),
    [anon_sym_LT_AMP] = ACTIONS(143),
    [anon_sym_GT_AMP] = ACTIONS(143),
    [anon_sym_LT_LT] = ACTIONS(145),
    [anon_sym_LT_LT_DASH] = ACTIONS(145),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(589),
    [anon_sym_LF] = ACTIONS(589),
    [anon_sym_AMP] = ACTIONS(589),
  },
  [151] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(597),
    [anon_sym_PIPE] = ACTIONS(597),
    [anon_sym_PIPE_AMP] = ACTIONS(597),
    [anon_sym_AMP_AMP] = ACTIONS(597),
    [anon_sym_PIPE_PIPE] = ACTIONS(597),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(597),
    [anon_sym_LF] = ACTIONS(597),
    [anon_sym_AMP] = ACTIONS(597),
  },
  [152] = {
    [sym__terminated_statement] = STATE(68),
    [sym_while_statement] = STATE(16),
    [sym_if_statement] = STATE(16),
    [sym_case_statement] = STATE(16),
    [sym_function_definition] = STATE(16),
    [sym_bracket_command] = STATE(16),
    [sym_command] = STATE(16),
    [sym_pipeline] = STATE(16),
    [sym_list] = STATE(16),
    [sym_subshell] = STATE(16),
    [sym_environment_variable_assignment] = STATE(17),
    [sym_quoted_argument] = STATE(10),
    [sym_file_redirect] = STATE(18),
    [aux_sym_command_repeat1] = STATE(20),
    [sym_file_descriptor] = ACTIONS(77),
    [anon_sym_while] = ACTIONS(81),
    [anon_sym_done] = ACTIONS(599),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_case] = ACTIONS(85),
    [anon_sym_function] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_single_quoted_argument] = ACTIONS(99),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_AMP_GT] = ACTIONS(101),
    [anon_sym_AMP_GT_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [sym_leading_word] = ACTIONS(103),
    [sym_comment] = ACTIONS(73),
  },
  [153] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(601),
    [anon_sym_PIPE] = ACTIONS(601),
    [anon_sym_PIPE_AMP] = ACTIONS(601),
    [anon_sym_AMP_AMP] = ACTIONS(601),
    [anon_sym_PIPE_PIPE] = ACTIONS(601),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(601),
    [anon_sym_LF] = ACTIONS(601),
    [anon_sym_AMP] = ACTIONS(601),
  },
  [154] = {
    [sym__terminated_statement] = STATE(229),
    [sym_while_statement] = STATE(23),
    [sym_if_statement] = STATE(23),
    [sym_case_statement] = STATE(23),
    [sym_function_definition] = STATE(23),
    [sym_bracket_command] = STATE(23),
    [sym_command] = STATE(23),
    [sym_pipeline] = STATE(23),
    [sym_list] = STATE(23),
    [sym_subshell] = STATE(23),
    [sym_environment_variable_assignment] = STATE(24),
    [sym_quoted_argument] = STATE(10),
    [sym_file_redirect] = STATE(18),
    [aux_sym_command_repeat1] = STATE(20),
    [sym_file_descriptor] = ACTIONS(77),
    [anon_sym_while] = ACTIONS(81),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_case] = ACTIONS(85),
    [anon_sym_function] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_single_quoted_argument] = ACTIONS(99),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_AMP_GT] = ACTIONS(101),
    [anon_sym_AMP_GT_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [sym_leading_word] = ACTIONS(103),
    [sym_comment] = ACTIONS(73),
  },
  [155] = {
    [sym__terminated_statement] = STATE(15),
    [sym_while_statement] = STATE(16),
    [sym_if_statement] = STATE(16),
    [sym_case_statement] = STATE(16),
    [sym_function_definition] = STATE(16),
    [sym_bracket_command] = STATE(16),
    [sym_command] = STATE(16),
    [sym_pipeline] = STATE(16),
    [sym_list] = STATE(16),
    [sym_subshell] = STATE(16),
    [sym_environment_variable_assignment] = STATE(17),
    [sym_quoted_argument] = STATE(10),
    [sym_file_redirect] = STATE(18),
    [aux_sym_program_repeat1] = STATE(230),
    [aux_sym_command_repeat1] = STATE(20),
    [sym_file_descriptor] = ACTIONS(77),
    [anon_sym_while] = ACTIONS(81),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_fi] = ACTIONS(603),
    [anon_sym_case] = ACTIONS(85),
    [anon_sym_function] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_single_quoted_argument] = ACTIONS(99),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_AMP_GT] = ACTIONS(101),
    [anon_sym_AMP_GT_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [sym_leading_word] = ACTIONS(103),
    [sym_comment] = ACTIONS(73),
  },
  [156] = {
    [anon_sym_fi] = ACTIONS(605),
    [anon_sym_elif] = ACTIONS(605),
    [anon_sym_else] = ACTIONS(605),
    [sym_comment] = ACTIONS(73),
  },
  [157] = {
    [anon_sym_fi] = ACTIONS(607),
    [sym_comment] = ACTIONS(73),
  },
  [158] = {
    [sym__terminated_statement] = STATE(68),
    [sym_while_statement] = STATE(16),
    [sym_if_statement] = STATE(16),
    [sym_elif_clause] = STATE(156),
    [sym_else_clause] = STATE(232),
    [sym_case_statement] = STATE(16),
    [sym_function_definition] = STATE(16),
    [sym_bracket_command] = STATE(16),
    [sym_command] = STATE(16),
    [sym_pipeline] = STATE(16),
    [sym_list] = STATE(16),
    [sym_subshell] = STATE(16),
    [sym_environment_variable_assignment] = STATE(17),
    [sym_quoted_argument] = STATE(10),
    [sym_file_redirect] = STATE(18),
    [aux_sym_if_statement_repeat1] = STATE(233),
    [aux_sym_command_repeat1] = STATE(20),
    [sym_file_descriptor] = ACTIONS(77),
    [anon_sym_while] = ACTIONS(81),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_fi] = ACTIONS(609),
    [anon_sym_elif] = ACTIONS(411),
    [anon_sym_else] = ACTIONS(413),
    [anon_sym_case] = ACTIONS(85),
    [anon_sym_function] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_single_quoted_argument] = ACTIONS(99),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_AMP_GT] = ACTIONS(101),
    [anon_sym_AMP_GT_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [sym_leading_word] = ACTIONS(103),
    [sym_comment] = ACTIONS(73),
  },
  [159] = {
    [sym_elif_clause] = STATE(234),
    [sym_else_clause] = STATE(232),
    [anon_sym_fi] = ACTIONS(607),
    [anon_sym_elif] = ACTIONS(611),
    [anon_sym_else] = ACTIONS(613),
    [sym_comment] = ACTIONS(73),
  },
  [160] = {
    [anon_sym_in] = ACTIONS(549),
    [anon_sym_SEMI_SEMI] = ACTIONS(549),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(549),
    [anon_sym_LF] = ACTIONS(549),
    [anon_sym_AMP] = ACTIONS(549),
  },
  [161] = {
    [sym_case_item] = STATE(238),
    [sym_quoted_argument] = STATE(236),
    [sym_expansion] = STATE(236),
    [sym_operator_expansion] = STATE(236),
    [sym_command_substitution] = STATE(236),
    [aux_sym_case_statement_repeat1] = STATE(239),
    [anon_sym_esac] = ACTIONS(615),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [sym_single_quoted_argument] = ACTIONS(617),
    [anon_sym_DOLLAR] = ACTIONS(129),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(131),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(133),
    [sym_word] = ACTIONS(619),
    [sym_comment] = ACTIONS(73),
  },
  [162] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(621),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(621),
    [anon_sym_LF] = ACTIONS(621),
    [anon_sym_AMP] = ACTIONS(621),
  },
  [163] = {
    [anon_sym_in] = ACTIONS(623),
    [anon_sym_SEMI_SEMI] = ACTIONS(623),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(623),
    [anon_sym_LF] = ACTIONS(623),
    [anon_sym_AMP] = ACTIONS(623),
  },
  [164] = {
    [sym_quoted_argument] = STATE(241),
    [sym_expansion] = STATE(241),
    [sym_operator_expansion] = STATE(241),
    [sym_command_substitution] = STATE(241),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [sym_single_quoted_argument] = ACTIONS(625),
    [anon_sym_DOLLAR] = ACTIONS(129),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(131),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(133),
    [sym_word] = ACTIONS(627),
    [sym_comment] = ACTIONS(73),
  },
  [165] = {
    [anon_sym_LT] = ACTIONS(629),
    [anon_sym_GT] = ACTIONS(629),
    [anon_sym_GT_GT] = ACTIONS(631),
    [anon_sym_AMP_GT] = ACTIONS(629),
    [anon_sym_AMP_GT_GT] = ACTIONS(631),
    [anon_sym_LT_AMP] = ACTIONS(631),
    [anon_sym_GT_AMP] = ACTIONS(631),
    [sym_comment] = ACTIONS(73),
  },
  [166] = {
    [sym_quoted_argument] = STATE(245),
    [sym_expansion] = STATE(245),
    [sym_operator_expansion] = STATE(245),
    [sym_command_substitution] = STATE(245),
    [sym_file_redirect] = STATE(169),
    [sym_heredoc_redirect] = STATE(169),
    [aux_sym_bracket_command_repeat1] = STATE(250),
    [aux_sym_command_repeat2] = STATE(251),
    [sym_file_descriptor] = ACTIONS(431),
    [anon_sym_RPAREN] = ACTIONS(633),
    [anon_sym_DQUOTE] = ACTIONS(635),
    [sym_single_quoted_argument] = ACTIONS(637),
    [anon_sym_DOLLAR] = ACTIONS(639),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(641),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(643),
    [anon_sym_LT] = ACTIONS(645),
    [anon_sym_GT] = ACTIONS(645),
    [anon_sym_GT_GT] = ACTIONS(647),
    [anon_sym_AMP_GT] = ACTIONS(645),
    [anon_sym_AMP_GT_GT] = ACTIONS(647),
    [anon_sym_LT_AMP] = ACTIONS(647),
    [anon_sym_GT_AMP] = ACTIONS(647),
    [anon_sym_LT_LT] = ACTIONS(649),
    [anon_sym_LT_LT_DASH] = ACTIONS(651),
    [sym_word] = ACTIONS(653),
    [sym_comment] = ACTIONS(73),
  },
  [167] = {
    [sym_quoted_argument] = STATE(252),
    [sym_expansion] = STATE(252),
    [sym_operator_expansion] = STATE(252),
    [sym_command_substitution] = STATE(252),
    [anon_sym_DQUOTE] = ACTIONS(635),
    [sym_single_quoted_argument] = ACTIONS(655),
    [anon_sym_DOLLAR] = ACTIONS(639),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(641),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(643),
    [sym_word] = ACTIONS(657),
    [sym_comment] = ACTIONS(73),
  },
  [168] = {
    [sym_heredoc] = STATE(256),
    [sym__simple_heredoc] = ACTIONS(659),
    [sym__heredoc_beginning] = ACTIONS(661),
    [sym_comment] = ACTIONS(73),
  },
  [169] = {
    [sym_file_descriptor] = ACTIONS(307),
    [anon_sym_RPAREN] = ACTIONS(307),
    [anon_sym_LT] = ACTIONS(663),
    [anon_sym_GT] = ACTIONS(663),
    [anon_sym_GT_GT] = ACTIONS(307),
    [anon_sym_AMP_GT] = ACTIONS(663),
    [anon_sym_AMP_GT_GT] = ACTIONS(307),
    [anon_sym_LT_AMP] = ACTIONS(307),
    [anon_sym_GT_AMP] = ACTIONS(307),
    [anon_sym_LT_LT] = ACTIONS(663),
    [anon_sym_LT_LT_DASH] = ACTIONS(307),
    [sym_comment] = ACTIONS(73),
  },
  [170] = {
    [sym_file_redirect] = STATE(257),
    [sym_heredoc_redirect] = STATE(257),
    [sym_file_descriptor] = ACTIONS(431),
    [anon_sym_RPAREN] = ACTIONS(633),
    [anon_sym_LT] = ACTIONS(645),
    [anon_sym_GT] = ACTIONS(645),
    [anon_sym_GT_GT] = ACTIONS(647),
    [anon_sym_AMP_GT] = ACTIONS(645),
    [anon_sym_AMP_GT_GT] = ACTIONS(647),
    [anon_sym_LT_AMP] = ACTIONS(647),
    [anon_sym_GT_AMP] = ACTIONS(647),
    [anon_sym_LT_LT] = ACTIONS(649),
    [anon_sym_LT_LT_DASH] = ACTIONS(651),
    [sym_comment] = ACTIONS(73),
  },
  [171] = {
    [sym_file_descriptor] = ACTIONS(311),
    [anon_sym_RPAREN] = ACTIONS(313),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(313),
    [anon_sym_LT] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(313),
    [anon_sym_GT_GT] = ACTIONS(313),
    [anon_sym_AMP_GT] = ACTIONS(313),
    [anon_sym_AMP_GT_GT] = ACTIONS(313),
    [anon_sym_LT_AMP] = ACTIONS(313),
    [anon_sym_GT_AMP] = ACTIONS(313),
    [anon_sym_LT_LT] = ACTIONS(313),
    [anon_sym_LT_LT_DASH] = ACTIONS(313),
    [sym_comment] = ACTIONS(147),
  },
  [172] = {
    [sym_expansion] = STATE(127),
    [sym_operator_expansion] = STATE(127),
    [sym_command_substitution] = STATE(127),
    [anon_sym_DQUOTE] = ACTIONS(665),
    [sym__quoted_chars] = ACTIONS(327),
    [anon_sym_DOLLAR] = ACTIONS(153),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(155),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(157),
    [sym_comment] = ACTIONS(147),
  },
  [173] = {
    [sym_quoted_argument] = STATE(245),
    [sym_expansion] = STATE(245),
    [sym_operator_expansion] = STATE(245),
    [sym_command_substitution] = STATE(245),
    [sym_file_redirect] = STATE(169),
    [sym_heredoc_redirect] = STATE(169),
    [aux_sym_bracket_command_repeat1] = STATE(259),
    [aux_sym_command_repeat2] = STATE(260),
    [sym_file_descriptor] = ACTIONS(431),
    [anon_sym_RPAREN] = ACTIONS(667),
    [anon_sym_DQUOTE] = ACTIONS(635),
    [sym_single_quoted_argument] = ACTIONS(637),
    [anon_sym_DOLLAR] = ACTIONS(639),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(641),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(643),
    [anon_sym_LT] = ACTIONS(645),
    [anon_sym_GT] = ACTIONS(645),
    [anon_sym_GT_GT] = ACTIONS(647),
    [anon_sym_AMP_GT] = ACTIONS(645),
    [anon_sym_AMP_GT_GT] = ACTIONS(647),
    [anon_sym_LT_AMP] = ACTIONS(647),
    [anon_sym_GT_AMP] = ACTIONS(647),
    [anon_sym_LT_LT] = ACTIONS(649),
    [anon_sym_LT_LT_DASH] = ACTIONS(651),
    [sym_word] = ACTIONS(653),
    [sym_comment] = ACTIONS(73),
  },
  [174] = {
    [sym_file_redirect] = STATE(257),
    [sym_heredoc_redirect] = STATE(257),
    [sym_file_descriptor] = ACTIONS(431),
    [anon_sym_RPAREN] = ACTIONS(667),
    [anon_sym_LT] = ACTIONS(645),
    [anon_sym_GT] = ACTIONS(645),
    [anon_sym_GT_GT] = ACTIONS(647),
    [anon_sym_AMP_GT] = ACTIONS(645),
    [anon_sym_AMP_GT_GT] = ACTIONS(647),
    [anon_sym_LT_AMP] = ACTIONS(647),
    [anon_sym_GT_AMP] = ACTIONS(647),
    [anon_sym_LT_LT] = ACTIONS(649),
    [anon_sym_LT_LT_DASH] = ACTIONS(651),
    [sym_comment] = ACTIONS(73),
  },
  [175] = {
    [anon_sym_in] = ACTIONS(669),
    [anon_sym_SEMI_SEMI] = ACTIONS(669),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(669),
    [anon_sym_LF] = ACTIONS(669),
    [anon_sym_AMP] = ACTIONS(669),
  },
  [176] = {
    [sym_file_redirect] = STATE(169),
    [sym_heredoc_redirect] = STATE(169),
    [aux_sym_command_repeat2] = STATE(251),
    [sym_file_descriptor] = ACTIONS(431),
    [anon_sym_RPAREN] = ACTIONS(277),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(671),
    [anon_sym_LT] = ACTIONS(435),
    [anon_sym_GT] = ACTIONS(435),
    [anon_sym_GT_GT] = ACTIONS(435),
    [anon_sym_AMP_GT] = ACTIONS(435),
    [anon_sym_AMP_GT_GT] = ACTIONS(435),
    [anon_sym_LT_AMP] = ACTIONS(435),
    [anon_sym_GT_AMP] = ACTIONS(435),
    [anon_sym_LT_LT] = ACTIONS(437),
    [anon_sym_LT_LT_DASH] = ACTIONS(437),
    [sym_comment] = ACTIONS(147),
  },
  [177] = {
    [sym_file_redirect] = STATE(169),
    [sym_heredoc_redirect] = STATE(169),
    [aux_sym_command_repeat2] = STATE(263),
    [sym_file_descriptor] = ACTIONS(431),
    [anon_sym_RPAREN] = ACTIONS(381),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(673),
    [anon_sym_EQ] = ACTIONS(385),
    [anon_sym_LT] = ACTIONS(435),
    [anon_sym_GT] = ACTIONS(435),
    [anon_sym_GT_GT] = ACTIONS(435),
    [anon_sym_AMP_GT] = ACTIONS(435),
    [anon_sym_AMP_GT_GT] = ACTIONS(435),
    [anon_sym_LT_AMP] = ACTIONS(435),
    [anon_sym_GT_AMP] = ACTIONS(435),
    [anon_sym_LT_LT] = ACTIONS(437),
    [anon_sym_LT_LT_DASH] = ACTIONS(437),
    [sym_comment] = ACTIONS(147),
  },
  [178] = {
    [sym_case_item] = STATE(238),
    [sym_quoted_argument] = STATE(236),
    [sym_expansion] = STATE(236),
    [sym_operator_expansion] = STATE(236),
    [sym_command_substitution] = STATE(236),
    [aux_sym_case_statement_repeat1] = STATE(265),
    [anon_sym_esac] = ACTIONS(675),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [sym_single_quoted_argument] = ACTIONS(617),
    [anon_sym_DOLLAR] = ACTIONS(129),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(131),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(133),
    [sym_word] = ACTIONS(619),
    [sym_comment] = ACTIONS(73),
  },
  [179] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(677),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(677),
    [anon_sym_LF] = ACTIONS(677),
    [anon_sym_AMP] = ACTIONS(677),
  },
  [180] = {
    [sym_compound_command] = STATE(267),
    [anon_sym_LBRACE] = ACTIONS(565),
    [sym_comment] = ACTIONS(73),
  },
  [181] = {
    [anon_sym_RPAREN] = ACTIONS(547),
    [anon_sym_RBRACE] = ACTIONS(547),
    [anon_sym_RBRACK] = ACTIONS(679),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(679),
    [anon_sym_DQUOTE] = ACTIONS(547),
    [sym_single_quoted_argument] = ACTIONS(679),
    [anon_sym_DOLLAR] = ACTIONS(679),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(547),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(547),
    [sym_word] = ACTIONS(549),
    [sym_comment] = ACTIONS(73),
  },
  [182] = {
    [anon_sym_RPAREN] = ACTIONS(681),
    [anon_sym_RBRACE] = ACTIONS(681),
    [anon_sym_RBRACK] = ACTIONS(683),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(683),
    [anon_sym_DQUOTE] = ACTIONS(681),
    [sym_single_quoted_argument] = ACTIONS(683),
    [anon_sym_DOLLAR] = ACTIONS(683),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(681),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(681),
    [sym_word] = ACTIONS(623),
    [sym_comment] = ACTIONS(73),
  },
  [183] = {
    [sym_quoted_argument] = STATE(268),
    [sym_expansion] = STATE(268),
    [sym_operator_expansion] = STATE(268),
    [sym_command_substitution] = STATE(268),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [sym_single_quoted_argument] = ACTIONS(685),
    [anon_sym_DOLLAR] = ACTIONS(129),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(131),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(133),
    [sym_word] = ACTIONS(687),
    [sym_comment] = ACTIONS(73),
  },
  [184] = {
    [anon_sym_RPAREN] = ACTIONS(689),
    [anon_sym_RBRACE] = ACTIONS(689),
    [anon_sym_RBRACK] = ACTIONS(691),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(691),
    [anon_sym_DQUOTE] = ACTIONS(689),
    [sym_single_quoted_argument] = ACTIONS(691),
    [anon_sym_DOLLAR] = ACTIONS(691),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(689),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(689),
    [sym_word] = ACTIONS(669),
    [sym_comment] = ACTIONS(73),
  },
  [185] = {
    [sym_file_descriptor] = ACTIONS(393),
    [anon_sym_SEMI_SEMI] = ACTIONS(397),
    [anon_sym_PIPE] = ACTIONS(397),
    [anon_sym_PIPE_AMP] = ACTIONS(397),
    [anon_sym_AMP_AMP] = ACTIONS(397),
    [anon_sym_PIPE_PIPE] = ACTIONS(397),
    [anon_sym_LT] = ACTIONS(397),
    [anon_sym_GT] = ACTIONS(397),
    [anon_sym_GT_GT] = ACTIONS(397),
    [anon_sym_AMP_GT] = ACTIONS(397),
    [anon_sym_AMP_GT_GT] = ACTIONS(397),
    [anon_sym_LT_AMP] = ACTIONS(397),
    [anon_sym_GT_AMP] = ACTIONS(397),
    [anon_sym_LT_LT] = ACTIONS(397),
    [anon_sym_LT_LT_DASH] = ACTIONS(397),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(397),
    [anon_sym_LF] = ACTIONS(397),
    [anon_sym_AMP] = ACTIONS(397),
  },
  [186] = {
    [sym_file_descriptor] = ACTIONS(399),
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
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(403),
    [anon_sym_LF] = ACTIONS(403),
    [anon_sym_AMP] = ACTIONS(403),
  },
  [187] = {
    [sym_file_descriptor] = ACTIONS(311),
    [anon_sym_SEMI_SEMI] = ACTIONS(313),
    [anon_sym_PIPE] = ACTIONS(313),
    [anon_sym_PIPE_AMP] = ACTIONS(313),
    [anon_sym_AMP_AMP] = ACTIONS(313),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [anon_sym_DQUOTE] = ACTIONS(313),
    [sym_single_quoted_argument] = ACTIONS(313),
    [anon_sym_DOLLAR] = ACTIONS(313),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(313),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(313),
    [anon_sym_LT] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(313),
    [anon_sym_GT_GT] = ACTIONS(313),
    [anon_sym_AMP_GT] = ACTIONS(313),
    [anon_sym_AMP_GT_GT] = ACTIONS(313),
    [anon_sym_LT_AMP] = ACTIONS(313),
    [anon_sym_GT_AMP] = ACTIONS(313),
    [anon_sym_LT_LT] = ACTIONS(313),
    [anon_sym_LT_LT_DASH] = ACTIONS(313),
    [sym_word] = ACTIONS(313),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(313),
    [anon_sym_LF] = ACTIONS(313),
    [anon_sym_AMP] = ACTIONS(313),
  },
  [188] = {
    [sym_expansion] = STATE(127),
    [sym_operator_expansion] = STATE(127),
    [sym_command_substitution] = STATE(127),
    [anon_sym_DQUOTE] = ACTIONS(693),
    [sym__quoted_chars] = ACTIONS(327),
    [anon_sym_DOLLAR] = ACTIONS(153),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(155),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(157),
    [sym_comment] = ACTIONS(147),
  },
  [189] = {
    [sym_file_descriptor] = ACTIONS(463),
    [anon_sym_SEMI_SEMI] = ACTIONS(421),
    [anon_sym_PIPE] = ACTIONS(421),
    [anon_sym_PIPE_AMP] = ACTIONS(421),
    [anon_sym_AMP_AMP] = ACTIONS(421),
    [anon_sym_PIPE_PIPE] = ACTIONS(421),
    [anon_sym_DQUOTE] = ACTIONS(421),
    [sym_single_quoted_argument] = ACTIONS(421),
    [anon_sym_DOLLAR] = ACTIONS(421),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(421),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(421),
    [anon_sym_LT] = ACTIONS(421),
    [anon_sym_GT] = ACTIONS(421),
    [anon_sym_GT_GT] = ACTIONS(421),
    [anon_sym_AMP_GT] = ACTIONS(421),
    [anon_sym_AMP_GT_GT] = ACTIONS(421),
    [anon_sym_LT_AMP] = ACTIONS(421),
    [anon_sym_GT_AMP] = ACTIONS(421),
    [anon_sym_LT_LT] = ACTIONS(421),
    [anon_sym_LT_LT_DASH] = ACTIONS(421),
    [sym_word] = ACTIONS(421),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(421),
    [anon_sym_LF] = ACTIONS(421),
    [anon_sym_AMP] = ACTIONS(421),
  },
  [190] = {
    [sym_file_descriptor] = ACTIONS(467),
    [anon_sym_SEMI_SEMI] = ACTIONS(423),
    [anon_sym_PIPE] = ACTIONS(423),
    [anon_sym_PIPE_AMP] = ACTIONS(423),
    [anon_sym_AMP_AMP] = ACTIONS(423),
    [anon_sym_PIPE_PIPE] = ACTIONS(423),
    [anon_sym_DQUOTE] = ACTIONS(423),
    [sym_single_quoted_argument] = ACTIONS(423),
    [anon_sym_DOLLAR] = ACTIONS(423),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(423),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(423),
    [anon_sym_LT] = ACTIONS(423),
    [anon_sym_GT] = ACTIONS(423),
    [anon_sym_GT_GT] = ACTIONS(423),
    [anon_sym_AMP_GT] = ACTIONS(423),
    [anon_sym_AMP_GT_GT] = ACTIONS(423),
    [anon_sym_LT_AMP] = ACTIONS(423),
    [anon_sym_GT_AMP] = ACTIONS(423),
    [anon_sym_LT_LT] = ACTIONS(423),
    [anon_sym_LT_LT_DASH] = ACTIONS(423),
    [sym_word] = ACTIONS(423),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(423),
    [anon_sym_LF] = ACTIONS(423),
    [anon_sym_AMP] = ACTIONS(423),
  },
  [191] = {
    [anon_sym_RBRACE] = ACTIONS(695),
    [anon_sym_COLON] = ACTIONS(697),
    [anon_sym_EQ] = ACTIONS(699),
    [anon_sym_COLON_QMARK] = ACTIONS(699),
    [anon_sym_COLON_DASH] = ACTIONS(699),
    [sym_comment] = ACTIONS(73),
  },
  [192] = {
    [anon_sym_RPAREN] = ACTIONS(701),
    [sym_comment] = ACTIONS(73),
  },
  [193] = {
    [sym_file_descriptor] = ACTIONS(483),
    [anon_sym_SEMI_SEMI] = ACTIONS(485),
    [anon_sym_PIPE] = ACTIONS(485),
    [anon_sym_PIPE_AMP] = ACTIONS(485),
    [anon_sym_AMP_AMP] = ACTIONS(485),
    [anon_sym_PIPE_PIPE] = ACTIONS(485),
    [anon_sym_DQUOTE] = ACTIONS(485),
    [sym_single_quoted_argument] = ACTIONS(485),
    [anon_sym_DOLLAR] = ACTIONS(485),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(485),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(485),
    [anon_sym_LT] = ACTIONS(485),
    [anon_sym_GT] = ACTIONS(485),
    [anon_sym_GT_GT] = ACTIONS(485),
    [anon_sym_AMP_GT] = ACTIONS(485),
    [anon_sym_AMP_GT_GT] = ACTIONS(485),
    [anon_sym_LT_AMP] = ACTIONS(485),
    [anon_sym_GT_AMP] = ACTIONS(485),
    [anon_sym_LT_LT] = ACTIONS(485),
    [anon_sym_LT_LT_DASH] = ACTIONS(485),
    [sym_word] = ACTIONS(485),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(485),
    [anon_sym_LF] = ACTIONS(485),
    [anon_sym_AMP] = ACTIONS(485),
  },
  [194] = {
    [sym_file_descriptor] = ACTIONS(489),
    [anon_sym_SEMI_SEMI] = ACTIONS(491),
    [anon_sym_PIPE] = ACTIONS(491),
    [anon_sym_PIPE_AMP] = ACTIONS(491),
    [anon_sym_AMP_AMP] = ACTIONS(491),
    [anon_sym_PIPE_PIPE] = ACTIONS(491),
    [anon_sym_DQUOTE] = ACTIONS(491),
    [sym_single_quoted_argument] = ACTIONS(491),
    [anon_sym_DOLLAR] = ACTIONS(491),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(491),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(491),
    [anon_sym_LT] = ACTIONS(491),
    [anon_sym_GT] = ACTIONS(491),
    [anon_sym_GT_GT] = ACTIONS(491),
    [anon_sym_AMP_GT] = ACTIONS(491),
    [anon_sym_AMP_GT_GT] = ACTIONS(491),
    [anon_sym_LT_AMP] = ACTIONS(491),
    [anon_sym_GT_AMP] = ACTIONS(491),
    [anon_sym_LT_LT] = ACTIONS(491),
    [anon_sym_LT_LT_DASH] = ACTIONS(491),
    [sym_word] = ACTIONS(491),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(491),
    [anon_sym_LF] = ACTIONS(491),
    [anon_sym_AMP] = ACTIONS(491),
  },
  [195] = {
    [sym_file_redirect] = STATE(121),
    [sym_heredoc_redirect] = STATE(121),
    [sym_file_descriptor] = ACTIONS(137),
    [anon_sym_SEMI_SEMI] = ACTIONS(703),
    [anon_sym_PIPE] = ACTIONS(703),
    [anon_sym_PIPE_AMP] = ACTIONS(703),
    [anon_sym_AMP_AMP] = ACTIONS(703),
    [anon_sym_PIPE_PIPE] = ACTIONS(703),
    [anon_sym_LT] = ACTIONS(143),
    [anon_sym_GT] = ACTIONS(143),
    [anon_sym_GT_GT] = ACTIONS(143),
    [anon_sym_AMP_GT] = ACTIONS(143),
    [anon_sym_AMP_GT_GT] = ACTIONS(143),
    [anon_sym_LT_AMP] = ACTIONS(143),
    [anon_sym_GT_AMP] = ACTIONS(143),
    [anon_sym_LT_LT] = ACTIONS(145),
    [anon_sym_LT_LT_DASH] = ACTIONS(145),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(703),
    [anon_sym_LF] = ACTIONS(703),
    [anon_sym_AMP] = ACTIONS(703),
  },
  [196] = {
    [sym_file_descriptor] = ACTIONS(311),
    [anon_sym_SEMI_SEMI] = ACTIONS(313),
    [anon_sym_PIPE] = ACTIONS(313),
    [anon_sym_PIPE_AMP] = ACTIONS(313),
    [anon_sym_AMP_AMP] = ACTIONS(313),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [anon_sym_LT] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(313),
    [anon_sym_GT_GT] = ACTIONS(313),
    [anon_sym_AMP_GT] = ACTIONS(313),
    [anon_sym_AMP_GT_GT] = ACTIONS(313),
    [anon_sym_LT_AMP] = ACTIONS(313),
    [anon_sym_GT_AMP] = ACTIONS(313),
    [anon_sym_LT_LT] = ACTIONS(313),
    [anon_sym_LT_LT_DASH] = ACTIONS(313),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(313),
    [anon_sym_LF] = ACTIONS(313),
    [anon_sym_AMP] = ACTIONS(313),
  },
  [197] = {
    [sym_expansion] = STATE(127),
    [sym_operator_expansion] = STATE(127),
    [sym_command_substitution] = STATE(127),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [sym__quoted_chars] = ACTIONS(327),
    [anon_sym_DOLLAR] = ACTIONS(153),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(155),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(157),
    [sym_comment] = ACTIONS(147),
  },
  [198] = {
    [sym_file_descriptor] = ACTIONS(463),
    [anon_sym_SEMI_SEMI] = ACTIONS(421),
    [anon_sym_PIPE] = ACTIONS(421),
    [anon_sym_PIPE_AMP] = ACTIONS(421),
    [anon_sym_AMP_AMP] = ACTIONS(421),
    [anon_sym_PIPE_PIPE] = ACTIONS(421),
    [anon_sym_LT] = ACTIONS(421),
    [anon_sym_GT] = ACTIONS(421),
    [anon_sym_GT_GT] = ACTIONS(421),
    [anon_sym_AMP_GT] = ACTIONS(421),
    [anon_sym_AMP_GT_GT] = ACTIONS(421),
    [anon_sym_LT_AMP] = ACTIONS(421),
    [anon_sym_GT_AMP] = ACTIONS(421),
    [anon_sym_LT_LT] = ACTIONS(421),
    [anon_sym_LT_LT_DASH] = ACTIONS(421),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(421),
    [anon_sym_LF] = ACTIONS(421),
    [anon_sym_AMP] = ACTIONS(421),
  },
  [199] = {
    [sym_file_descriptor] = ACTIONS(467),
    [anon_sym_SEMI_SEMI] = ACTIONS(423),
    [anon_sym_PIPE] = ACTIONS(423),
    [anon_sym_PIPE_AMP] = ACTIONS(423),
    [anon_sym_AMP_AMP] = ACTIONS(423),
    [anon_sym_PIPE_PIPE] = ACTIONS(423),
    [anon_sym_LT] = ACTIONS(423),
    [anon_sym_GT] = ACTIONS(423),
    [anon_sym_GT_GT] = ACTIONS(423),
    [anon_sym_AMP_GT] = ACTIONS(423),
    [anon_sym_AMP_GT_GT] = ACTIONS(423),
    [anon_sym_LT_AMP] = ACTIONS(423),
    [anon_sym_GT_AMP] = ACTIONS(423),
    [anon_sym_LT_LT] = ACTIONS(423),
    [anon_sym_LT_LT_DASH] = ACTIONS(423),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(423),
    [anon_sym_LF] = ACTIONS(423),
    [anon_sym_AMP] = ACTIONS(423),
  },
  [200] = {
    [anon_sym_RBRACE] = ACTIONS(707),
    [anon_sym_COLON] = ACTIONS(709),
    [anon_sym_EQ] = ACTIONS(711),
    [anon_sym_COLON_QMARK] = ACTIONS(711),
    [anon_sym_COLON_DASH] = ACTIONS(711),
    [sym_comment] = ACTIONS(73),
  },
  [201] = {
    [anon_sym_RPAREN] = ACTIONS(713),
    [sym_comment] = ACTIONS(73),
  },
  [202] = {
    [sym__heredoc_middle] = ACTIONS(715),
    [sym__heredoc_end] = ACTIONS(715),
    [anon_sym_DOLLAR] = ACTIONS(717),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(715),
    [sym_comment] = ACTIONS(73),
  },
  [203] = {
    [sym_file_descriptor] = ACTIONS(719),
    [anon_sym_SEMI_SEMI] = ACTIONS(721),
    [anon_sym_PIPE] = ACTIONS(721),
    [anon_sym_PIPE_AMP] = ACTIONS(721),
    [anon_sym_AMP_AMP] = ACTIONS(721),
    [anon_sym_PIPE_PIPE] = ACTIONS(721),
    [anon_sym_LT] = ACTIONS(721),
    [anon_sym_GT] = ACTIONS(721),
    [anon_sym_GT_GT] = ACTIONS(721),
    [anon_sym_AMP_GT] = ACTIONS(721),
    [anon_sym_AMP_GT_GT] = ACTIONS(721),
    [anon_sym_LT_AMP] = ACTIONS(721),
    [anon_sym_GT_AMP] = ACTIONS(721),
    [anon_sym_LT_LT] = ACTIONS(721),
    [anon_sym_LT_LT_DASH] = ACTIONS(721),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(721),
    [anon_sym_LF] = ACTIONS(721),
    [anon_sym_AMP] = ACTIONS(721),
  },
  [204] = {
    [anon_sym_DOLLAR] = ACTIONS(723),
    [sym_word] = ACTIONS(725),
    [sym_comment] = ACTIONS(73),
  },
  [205] = {
    [sym_leading_word] = ACTIONS(727),
    [sym_comment] = ACTIONS(73),
  },
  [206] = {
    [sym_expansion] = STATE(281),
    [sym_operator_expansion] = STATE(281),
    [sym__heredoc_middle] = ACTIONS(729),
    [sym__heredoc_end] = ACTIONS(731),
    [anon_sym_DOLLAR] = ACTIONS(527),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(529),
    [sym_comment] = ACTIONS(73),
  },
  [207] = {
    [anon_sym_DQUOTE] = ACTIONS(623),
    [sym__quoted_chars] = ACTIONS(683),
    [anon_sym_DOLLAR] = ACTIONS(623),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(623),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(623),
    [sym_comment] = ACTIONS(147),
  },
  [208] = {
    [sym_quoted_argument] = STATE(283),
    [sym_expansion] = STATE(283),
    [sym_operator_expansion] = STATE(283),
    [sym_command_substitution] = STATE(283),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [sym_single_quoted_argument] = ACTIONS(733),
    [anon_sym_DOLLAR] = ACTIONS(129),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(131),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(133),
    [sym_word] = ACTIONS(735),
    [sym_comment] = ACTIONS(73),
  },
  [209] = {
    [anon_sym_DQUOTE] = ACTIONS(669),
    [sym__quoted_chars] = ACTIONS(691),
    [anon_sym_DOLLAR] = ACTIONS(669),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(669),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(669),
    [sym_comment] = ACTIONS(147),
  },
  [210] = {
    [sym_file_descriptor] = ACTIONS(547),
    [anon_sym_COLON] = ACTIONS(547),
    [anon_sym_DQUOTE] = ACTIONS(547),
    [sym_single_quoted_argument] = ACTIONS(679),
    [anon_sym_LT] = ACTIONS(679),
    [anon_sym_GT] = ACTIONS(679),
    [anon_sym_GT_GT] = ACTIONS(679),
    [anon_sym_AMP_GT] = ACTIONS(679),
    [anon_sym_AMP_GT_GT] = ACTIONS(679),
    [anon_sym_LT_AMP] = ACTIONS(679),
    [anon_sym_GT_AMP] = ACTIONS(679),
    [sym_leading_word] = ACTIONS(549),
    [sym_comment] = ACTIONS(73),
  },
  [211] = {
    [sym_file_descriptor] = ACTIONS(681),
    [anon_sym_COLON] = ACTIONS(681),
    [anon_sym_DQUOTE] = ACTIONS(681),
    [sym_single_quoted_argument] = ACTIONS(683),
    [anon_sym_LT] = ACTIONS(683),
    [anon_sym_GT] = ACTIONS(683),
    [anon_sym_GT_GT] = ACTIONS(683),
    [anon_sym_AMP_GT] = ACTIONS(683),
    [anon_sym_AMP_GT_GT] = ACTIONS(683),
    [anon_sym_LT_AMP] = ACTIONS(683),
    [anon_sym_GT_AMP] = ACTIONS(683),
    [sym_leading_word] = ACTIONS(623),
    [sym_comment] = ACTIONS(73),
  },
  [212] = {
    [sym_quoted_argument] = STATE(285),
    [sym_expansion] = STATE(285),
    [sym_operator_expansion] = STATE(285),
    [sym_command_substitution] = STATE(285),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [sym_single_quoted_argument] = ACTIONS(737),
    [anon_sym_DOLLAR] = ACTIONS(129),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(131),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(133),
    [sym_word] = ACTIONS(739),
    [sym_comment] = ACTIONS(73),
  },
  [213] = {
    [sym_file_descriptor] = ACTIONS(689),
    [anon_sym_COLON] = ACTIONS(689),
    [anon_sym_DQUOTE] = ACTIONS(689),
    [sym_single_quoted_argument] = ACTIONS(691),
    [anon_sym_LT] = ACTIONS(691),
    [anon_sym_GT] = ACTIONS(691),
    [anon_sym_GT_GT] = ACTIONS(691),
    [anon_sym_AMP_GT] = ACTIONS(691),
    [anon_sym_AMP_GT_GT] = ACTIONS(691),
    [anon_sym_LT_AMP] = ACTIONS(691),
    [anon_sym_GT_AMP] = ACTIONS(691),
    [sym_leading_word] = ACTIONS(669),
    [sym_comment] = ACTIONS(73),
  },
  [214] = {
    [sym__terminated_statement] = STATE(15),
    [sym_while_statement] = STATE(16),
    [sym_if_statement] = STATE(16),
    [sym_case_statement] = STATE(16),
    [sym_function_definition] = STATE(16),
    [sym_bracket_command] = STATE(16),
    [sym_command] = STATE(16),
    [sym_pipeline] = STATE(16),
    [sym_list] = STATE(16),
    [sym_subshell] = STATE(16),
    [sym_environment_variable_assignment] = STATE(17),
    [sym_quoted_argument] = STATE(10),
    [sym_file_redirect] = STATE(18),
    [aux_sym_program_repeat1] = STATE(288),
    [aux_sym_command_repeat1] = STATE(20),
    [sym_file_descriptor] = ACTIONS(77),
    [anon_sym_while] = ACTIONS(81),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_case] = ACTIONS(85),
    [anon_sym_function] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(741),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_single_quoted_argument] = ACTIONS(99),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_AMP_GT] = ACTIONS(101),
    [anon_sym_AMP_GT_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [sym_leading_word] = ACTIONS(103),
    [sym_comment] = ACTIONS(73),
  },
  [215] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(743),
    [anon_sym_PIPE] = ACTIONS(743),
    [anon_sym_PIPE_AMP] = ACTIONS(743),
    [anon_sym_AMP_AMP] = ACTIONS(743),
    [anon_sym_PIPE_PIPE] = ACTIONS(743),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(743),
    [anon_sym_LF] = ACTIONS(743),
    [anon_sym_AMP] = ACTIONS(743),
  },
  [216] = {
    [sym_file_redirect] = STATE(121),
    [sym_heredoc_redirect] = STATE(121),
    [sym_file_descriptor] = ACTIONS(137),
    [anon_sym_SEMI_SEMI] = ACTIONS(745),
    [anon_sym_PIPE] = ACTIONS(745),
    [anon_sym_PIPE_AMP] = ACTIONS(745),
    [anon_sym_AMP_AMP] = ACTIONS(745),
    [anon_sym_PIPE_PIPE] = ACTIONS(745),
    [anon_sym_LT] = ACTIONS(143),
    [anon_sym_GT] = ACTIONS(143),
    [anon_sym_GT_GT] = ACTIONS(143),
    [anon_sym_AMP_GT] = ACTIONS(143),
    [anon_sym_AMP_GT_GT] = ACTIONS(143),
    [anon_sym_LT_AMP] = ACTIONS(143),
    [anon_sym_GT_AMP] = ACTIONS(143),
    [anon_sym_LT_LT] = ACTIONS(145),
    [anon_sym_LT_LT_DASH] = ACTIONS(145),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(745),
    [anon_sym_LF] = ACTIONS(745),
    [anon_sym_AMP] = ACTIONS(745),
  },
  [217] = {
    [sym_file_descriptor] = ACTIONS(311),
    [anon_sym_SEMI_SEMI] = ACTIONS(313),
    [anon_sym_COLON] = ACTIONS(313),
    [anon_sym_PIPE] = ACTIONS(313),
    [anon_sym_PIPE_AMP] = ACTIONS(313),
    [anon_sym_AMP_AMP] = ACTIONS(313),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [anon_sym_DQUOTE] = ACTIONS(313),
    [sym_single_quoted_argument] = ACTIONS(313),
    [anon_sym_LT] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(313),
    [anon_sym_GT_GT] = ACTIONS(313),
    [anon_sym_AMP_GT] = ACTIONS(313),
    [anon_sym_AMP_GT_GT] = ACTIONS(313),
    [anon_sym_LT_AMP] = ACTIONS(313),
    [anon_sym_GT_AMP] = ACTIONS(313),
    [sym_leading_word] = ACTIONS(313),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(313),
    [anon_sym_LF] = ACTIONS(313),
    [anon_sym_AMP] = ACTIONS(313),
  },
  [218] = {
    [sym_expansion] = STATE(127),
    [sym_operator_expansion] = STATE(127),
    [sym_command_substitution] = STATE(127),
    [anon_sym_DQUOTE] = ACTIONS(747),
    [sym__quoted_chars] = ACTIONS(327),
    [anon_sym_DOLLAR] = ACTIONS(153),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(155),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(157),
    [sym_comment] = ACTIONS(147),
  },
  [219] = {
    [sym_file_descriptor] = ACTIONS(463),
    [anon_sym_SEMI_SEMI] = ACTIONS(421),
    [anon_sym_COLON] = ACTIONS(421),
    [anon_sym_PIPE] = ACTIONS(421),
    [anon_sym_PIPE_AMP] = ACTIONS(421),
    [anon_sym_AMP_AMP] = ACTIONS(421),
    [anon_sym_PIPE_PIPE] = ACTIONS(421),
    [anon_sym_DQUOTE] = ACTIONS(421),
    [sym_single_quoted_argument] = ACTIONS(421),
    [anon_sym_LT] = ACTIONS(421),
    [anon_sym_GT] = ACTIONS(421),
    [anon_sym_GT_GT] = ACTIONS(421),
    [anon_sym_AMP_GT] = ACTIONS(421),
    [anon_sym_AMP_GT_GT] = ACTIONS(421),
    [anon_sym_LT_AMP] = ACTIONS(421),
    [anon_sym_GT_AMP] = ACTIONS(421),
    [sym_leading_word] = ACTIONS(421),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(421),
    [anon_sym_LF] = ACTIONS(421),
    [anon_sym_AMP] = ACTIONS(421),
  },
  [220] = {
    [sym_file_descriptor] = ACTIONS(467),
    [anon_sym_SEMI_SEMI] = ACTIONS(423),
    [anon_sym_COLON] = ACTIONS(423),
    [anon_sym_PIPE] = ACTIONS(423),
    [anon_sym_PIPE_AMP] = ACTIONS(423),
    [anon_sym_AMP_AMP] = ACTIONS(423),
    [anon_sym_PIPE_PIPE] = ACTIONS(423),
    [anon_sym_DQUOTE] = ACTIONS(423),
    [sym_single_quoted_argument] = ACTIONS(423),
    [anon_sym_LT] = ACTIONS(423),
    [anon_sym_GT] = ACTIONS(423),
    [anon_sym_GT_GT] = ACTIONS(423),
    [anon_sym_AMP_GT] = ACTIONS(423),
    [anon_sym_AMP_GT_GT] = ACTIONS(423),
    [anon_sym_LT_AMP] = ACTIONS(423),
    [anon_sym_GT_AMP] = ACTIONS(423),
    [sym_leading_word] = ACTIONS(423),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(423),
    [anon_sym_LF] = ACTIONS(423),
    [anon_sym_AMP] = ACTIONS(423),
  },
  [221] = {
    [anon_sym_RBRACE] = ACTIONS(749),
    [anon_sym_COLON] = ACTIONS(751),
    [anon_sym_EQ] = ACTIONS(753),
    [anon_sym_COLON_QMARK] = ACTIONS(753),
    [anon_sym_COLON_DASH] = ACTIONS(753),
    [sym_comment] = ACTIONS(73),
  },
  [222] = {
    [anon_sym_RPAREN] = ACTIONS(755),
    [sym_comment] = ACTIONS(73),
  },
  [223] = {
    [sym_quoted_argument] = STATE(193),
    [sym_expansion] = STATE(193),
    [sym_operator_expansion] = STATE(193),
    [sym_command_substitution] = STATE(193),
    [sym_file_redirect] = STATE(47),
    [sym_heredoc_redirect] = STATE(47),
    [aux_sym_command_repeat2] = STATE(293),
    [sym_file_descriptor] = ACTIONS(137),
    [anon_sym_SEMI_SEMI] = ACTIONS(703),
    [anon_sym_PIPE] = ACTIONS(703),
    [anon_sym_PIPE_AMP] = ACTIONS(703),
    [anon_sym_AMP_AMP] = ACTIONS(703),
    [anon_sym_PIPE_PIPE] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(279),
    [sym_single_quoted_argument] = ACTIONS(507),
    [anon_sym_DOLLAR] = ACTIONS(283),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(285),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(287),
    [anon_sym_LT] = ACTIONS(143),
    [anon_sym_GT] = ACTIONS(143),
    [anon_sym_GT_GT] = ACTIONS(143),
    [anon_sym_AMP_GT] = ACTIONS(143),
    [anon_sym_AMP_GT_GT] = ACTIONS(143),
    [anon_sym_LT_AMP] = ACTIONS(143),
    [anon_sym_GT_AMP] = ACTIONS(143),
    [anon_sym_LT_LT] = ACTIONS(145),
    [anon_sym_LT_LT_DASH] = ACTIONS(145),
    [sym_word] = ACTIONS(509),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(703),
    [anon_sym_LF] = ACTIONS(703),
    [anon_sym_AMP] = ACTIONS(703),
  },
  [224] = {
    [sym_quoted_argument] = STATE(193),
    [sym_expansion] = STATE(193),
    [sym_operator_expansion] = STATE(193),
    [sym_command_substitution] = STATE(193),
    [sym_file_redirect] = STATE(47),
    [sym_heredoc_redirect] = STATE(47),
    [aux_sym_command_repeat2] = STATE(294),
    [sym_file_descriptor] = ACTIONS(137),
    [anon_sym_SEMI_SEMI] = ACTIONS(757),
    [anon_sym_PIPE] = ACTIONS(757),
    [anon_sym_PIPE_AMP] = ACTIONS(757),
    [anon_sym_AMP_AMP] = ACTIONS(757),
    [anon_sym_PIPE_PIPE] = ACTIONS(757),
    [anon_sym_DQUOTE] = ACTIONS(279),
    [sym_single_quoted_argument] = ACTIONS(507),
    [anon_sym_DOLLAR] = ACTIONS(283),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(285),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(287),
    [anon_sym_LT] = ACTIONS(143),
    [anon_sym_GT] = ACTIONS(143),
    [anon_sym_GT_GT] = ACTIONS(143),
    [anon_sym_AMP_GT] = ACTIONS(143),
    [anon_sym_AMP_GT_GT] = ACTIONS(143),
    [anon_sym_LT_AMP] = ACTIONS(143),
    [anon_sym_GT_AMP] = ACTIONS(143),
    [anon_sym_LT_LT] = ACTIONS(145),
    [anon_sym_LT_LT_DASH] = ACTIONS(145),
    [sym_word] = ACTIONS(509),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(757),
    [anon_sym_LF] = ACTIONS(757),
    [anon_sym_AMP] = ACTIONS(757),
  },
  [225] = {
    [sym_file_redirect] = STATE(121),
    [sym_heredoc_redirect] = STATE(121),
    [sym_file_descriptor] = ACTIONS(137),
    [anon_sym_SEMI_SEMI] = ACTIONS(757),
    [anon_sym_PIPE] = ACTIONS(757),
    [anon_sym_PIPE_AMP] = ACTIONS(757),
    [anon_sym_AMP_AMP] = ACTIONS(757),
    [anon_sym_PIPE_PIPE] = ACTIONS(757),
    [anon_sym_LT] = ACTIONS(143),
    [anon_sym_GT] = ACTIONS(143),
    [anon_sym_GT_GT] = ACTIONS(143),
    [anon_sym_AMP_GT] = ACTIONS(143),
    [anon_sym_AMP_GT_GT] = ACTIONS(143),
    [anon_sym_LT_AMP] = ACTIONS(143),
    [anon_sym_GT_AMP] = ACTIONS(143),
    [anon_sym_LT_LT] = ACTIONS(145),
    [anon_sym_LT_LT_DASH] = ACTIONS(145),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(757),
    [anon_sym_LF] = ACTIONS(757),
    [anon_sym_AMP] = ACTIONS(757),
  },
  [226] = {
    [sym_file_descriptor] = ACTIONS(569),
    [anon_sym_COLON] = ACTIONS(569),
    [anon_sym_DQUOTE] = ACTIONS(569),
    [sym_single_quoted_argument] = ACTIONS(759),
    [anon_sym_LT] = ACTIONS(759),
    [anon_sym_GT] = ACTIONS(759),
    [anon_sym_GT_GT] = ACTIONS(759),
    [anon_sym_AMP_GT] = ACTIONS(759),
    [anon_sym_AMP_GT_GT] = ACTIONS(759),
    [anon_sym_LT_AMP] = ACTIONS(759),
    [anon_sym_GT_AMP] = ACTIONS(759),
    [sym_leading_word] = ACTIONS(571),
    [sym_comment] = ACTIONS(73),
  },
  [227] = {
    [sym_file_descriptor] = ACTIONS(581),
    [anon_sym_COLON] = ACTIONS(581),
    [anon_sym_DQUOTE] = ACTIONS(581),
    [sym_single_quoted_argument] = ACTIONS(761),
    [anon_sym_LT] = ACTIONS(761),
    [anon_sym_GT] = ACTIONS(761),
    [anon_sym_GT_GT] = ACTIONS(761),
    [anon_sym_AMP_GT] = ACTIONS(761),
    [anon_sym_AMP_GT_GT] = ACTIONS(761),
    [anon_sym_LT_AMP] = ACTIONS(761),
    [anon_sym_GT_AMP] = ACTIONS(761),
    [sym_leading_word] = ACTIONS(583),
    [sym_comment] = ACTIONS(73),
  },
  [228] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(763),
    [anon_sym_PIPE] = ACTIONS(763),
    [anon_sym_PIPE_AMP] = ACTIONS(763),
    [anon_sym_AMP_AMP] = ACTIONS(763),
    [anon_sym_PIPE_PIPE] = ACTIONS(763),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(763),
    [anon_sym_LF] = ACTIONS(763),
    [anon_sym_AMP] = ACTIONS(763),
  },
  [229] = {
    [anon_sym_then] = ACTIONS(765),
    [sym_comment] = ACTIONS(73),
  },
  [230] = {
    [sym__terminated_statement] = STATE(68),
    [sym_while_statement] = STATE(16),
    [sym_if_statement] = STATE(16),
    [sym_case_statement] = STATE(16),
    [sym_function_definition] = STATE(16),
    [sym_bracket_command] = STATE(16),
    [sym_command] = STATE(16),
    [sym_pipeline] = STATE(16),
    [sym_list] = STATE(16),
    [sym_subshell] = STATE(16),
    [sym_environment_variable_assignment] = STATE(17),
    [sym_quoted_argument] = STATE(10),
    [sym_file_redirect] = STATE(18),
    [aux_sym_command_repeat1] = STATE(20),
    [sym_file_descriptor] = ACTIONS(77),
    [anon_sym_while] = ACTIONS(81),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_fi] = ACTIONS(767),
    [anon_sym_case] = ACTIONS(85),
    [anon_sym_function] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_single_quoted_argument] = ACTIONS(99),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_AMP_GT] = ACTIONS(101),
    [anon_sym_AMP_GT_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [sym_leading_word] = ACTIONS(103),
    [sym_comment] = ACTIONS(73),
  },
  [231] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(769),
    [anon_sym_PIPE] = ACTIONS(769),
    [anon_sym_PIPE_AMP] = ACTIONS(769),
    [anon_sym_AMP_AMP] = ACTIONS(769),
    [anon_sym_PIPE_PIPE] = ACTIONS(769),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(769),
    [anon_sym_LF] = ACTIONS(769),
    [anon_sym_AMP] = ACTIONS(769),
  },
  [232] = {
    [anon_sym_fi] = ACTIONS(771),
    [sym_comment] = ACTIONS(73),
  },
  [233] = {
    [sym_elif_clause] = STATE(234),
    [sym_else_clause] = STATE(297),
    [anon_sym_fi] = ACTIONS(771),
    [anon_sym_elif] = ACTIONS(611),
    [anon_sym_else] = ACTIONS(613),
    [sym_comment] = ACTIONS(73),
  },
  [234] = {
    [anon_sym_fi] = ACTIONS(773),
    [anon_sym_elif] = ACTIONS(773),
    [anon_sym_else] = ACTIONS(773),
    [sym_comment] = ACTIONS(73),
  },
  [235] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(775),
    [anon_sym_PIPE] = ACTIONS(775),
    [anon_sym_PIPE_AMP] = ACTIONS(775),
    [anon_sym_AMP_AMP] = ACTIONS(775),
    [anon_sym_PIPE_PIPE] = ACTIONS(775),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(775),
    [anon_sym_LF] = ACTIONS(775),
    [anon_sym_AMP] = ACTIONS(775),
  },
  [236] = {
    [anon_sym_RPAREN] = ACTIONS(777),
    [sym_comment] = ACTIONS(73),
  },
  [237] = {
    [anon_sym_RPAREN] = ACTIONS(779),
    [sym_comment] = ACTIONS(73),
  },
  [238] = {
    [anon_sym_esac] = ACTIONS(781),
    [anon_sym_DQUOTE] = ACTIONS(783),
    [sym_single_quoted_argument] = ACTIONS(781),
    [anon_sym_DOLLAR] = ACTIONS(781),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(783),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(783),
    [sym_word] = ACTIONS(785),
    [sym_comment] = ACTIONS(73),
  },
  [239] = {
    [sym_case_item] = STATE(301),
    [sym_quoted_argument] = STATE(236),
    [sym_expansion] = STATE(236),
    [sym_operator_expansion] = STATE(236),
    [sym_command_substitution] = STATE(236),
    [anon_sym_esac] = ACTIONS(787),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [sym_single_quoted_argument] = ACTIONS(617),
    [anon_sym_DOLLAR] = ACTIONS(129),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(131),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(133),
    [sym_word] = ACTIONS(619),
    [sym_comment] = ACTIONS(73),
  },
  [240] = {
    [sym_case_item] = STATE(238),
    [sym_quoted_argument] = STATE(236),
    [sym_expansion] = STATE(236),
    [sym_operator_expansion] = STATE(236),
    [sym_command_substitution] = STATE(236),
    [aux_sym_case_statement_repeat1] = STATE(302),
    [anon_sym_esac] = ACTIONS(787),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [sym_single_quoted_argument] = ACTIONS(617),
    [anon_sym_DOLLAR] = ACTIONS(129),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(131),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(133),
    [sym_word] = ACTIONS(619),
    [sym_comment] = ACTIONS(73),
  },
  [241] = {
    [anon_sym_RBRACE] = ACTIONS(789),
    [sym_comment] = ACTIONS(73),
  },
  [242] = {
    [anon_sym_RBRACE] = ACTIONS(791),
    [sym_comment] = ACTIONS(73),
  },
  [243] = {
    [sym_quoted_argument] = STATE(305),
    [sym_expansion] = STATE(305),
    [sym_operator_expansion] = STATE(305),
    [sym_command_substitution] = STATE(305),
    [anon_sym_DQUOTE] = ACTIONS(635),
    [sym_single_quoted_argument] = ACTIONS(793),
    [anon_sym_DOLLAR] = ACTIONS(639),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(641),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(643),
    [sym_word] = ACTIONS(795),
    [sym_comment] = ACTIONS(73),
  },
  [244] = {
    [sym_expansion] = STATE(50),
    [sym_operator_expansion] = STATE(50),
    [sym_command_substitution] = STATE(50),
    [aux_sym_quoted_argument_repeat1] = STATE(308),
    [anon_sym_DQUOTE] = ACTIONS(797),
    [sym__quoted_chars] = ACTIONS(151),
    [anon_sym_DOLLAR] = ACTIONS(153),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(155),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(157),
    [sym_comment] = ACTIONS(147),
  },
  [245] = {
    [sym_file_descriptor] = ACTIONS(251),
    [anon_sym_RPAREN] = ACTIONS(251),
    [anon_sym_DQUOTE] = ACTIONS(251),
    [sym_single_quoted_argument] = ACTIONS(249),
    [anon_sym_DOLLAR] = ACTIONS(249),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(251),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(251),
    [anon_sym_LT] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(249),
    [anon_sym_GT_GT] = ACTIONS(251),
    [anon_sym_AMP_GT] = ACTIONS(249),
    [anon_sym_AMP_GT_GT] = ACTIONS(251),
    [anon_sym_LT_AMP] = ACTIONS(251),
    [anon_sym_GT_AMP] = ACTIONS(251),
    [anon_sym_LT_LT] = ACTIONS(249),
    [anon_sym_LT_LT_DASH] = ACTIONS(251),
    [sym_word] = ACTIONS(253),
    [sym_comment] = ACTIONS(73),
  },
  [246] = {
    [anon_sym_DOLLAR] = ACTIONS(799),
    [sym_word] = ACTIONS(801),
    [sym_comment] = ACTIONS(73),
  },
  [247] = {
    [sym_leading_word] = ACTIONS(803),
    [sym_comment] = ACTIONS(73),
  },
  [248] = {
    [sym_command] = STATE(312),
    [sym_environment_variable_assignment] = STATE(18),
    [sym_quoted_argument] = STATE(85),
    [sym_file_redirect] = STATE(18),
    [aux_sym_command_repeat1] = STATE(89),
    [sym_file_descriptor] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(229),
    [anon_sym_DQUOTE] = ACTIONS(231),
    [sym_single_quoted_argument] = ACTIONS(233),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_AMP_GT] = ACTIONS(101),
    [anon_sym_AMP_GT_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [sym_leading_word] = ACTIONS(235),
    [sym_comment] = ACTIONS(73),
  },
  [249] = {
    [sym_file_descriptor] = ACTIONS(263),
    [anon_sym_RPAREN] = ACTIONS(263),
    [anon_sym_DQUOTE] = ACTIONS(263),
    [sym_single_quoted_argument] = ACTIONS(261),
    [anon_sym_DOLLAR] = ACTIONS(261),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(263),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(263),
    [anon_sym_LT] = ACTIONS(261),
    [anon_sym_GT] = ACTIONS(261),
    [anon_sym_GT_GT] = ACTIONS(263),
    [anon_sym_AMP_GT] = ACTIONS(261),
    [anon_sym_AMP_GT_GT] = ACTIONS(263),
    [anon_sym_LT_AMP] = ACTIONS(263),
    [anon_sym_GT_AMP] = ACTIONS(263),
    [anon_sym_LT_LT] = ACTIONS(261),
    [anon_sym_LT_LT_DASH] = ACTIONS(263),
    [sym_word] = ACTIONS(265),
    [sym_comment] = ACTIONS(73),
  },
  [250] = {
    [sym_quoted_argument] = STATE(313),
    [sym_expansion] = STATE(313),
    [sym_operator_expansion] = STATE(313),
    [sym_command_substitution] = STATE(313),
    [sym_file_redirect] = STATE(169),
    [sym_heredoc_redirect] = STATE(169),
    [aux_sym_command_repeat2] = STATE(315),
    [sym_file_descriptor] = ACTIONS(431),
    [anon_sym_RPAREN] = ACTIONS(805),
    [anon_sym_DQUOTE] = ACTIONS(635),
    [sym_single_quoted_argument] = ACTIONS(807),
    [anon_sym_DOLLAR] = ACTIONS(639),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(641),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(643),
    [anon_sym_LT] = ACTIONS(645),
    [anon_sym_GT] = ACTIONS(645),
    [anon_sym_GT_GT] = ACTIONS(647),
    [anon_sym_AMP_GT] = ACTIONS(645),
    [anon_sym_AMP_GT_GT] = ACTIONS(647),
    [anon_sym_LT_AMP] = ACTIONS(647),
    [anon_sym_GT_AMP] = ACTIONS(647),
    [anon_sym_LT_LT] = ACTIONS(649),
    [anon_sym_LT_LT_DASH] = ACTIONS(651),
    [sym_word] = ACTIONS(809),
    [sym_comment] = ACTIONS(73),
  },
  [251] = {
    [sym_file_redirect] = STATE(257),
    [sym_heredoc_redirect] = STATE(257),
    [sym_file_descriptor] = ACTIONS(431),
    [anon_sym_RPAREN] = ACTIONS(805),
    [anon_sym_LT] = ACTIONS(645),
    [anon_sym_GT] = ACTIONS(645),
    [anon_sym_GT_GT] = ACTIONS(647),
    [anon_sym_AMP_GT] = ACTIONS(645),
    [anon_sym_AMP_GT_GT] = ACTIONS(647),
    [anon_sym_LT_AMP] = ACTIONS(647),
    [anon_sym_GT_AMP] = ACTIONS(647),
    [anon_sym_LT_LT] = ACTIONS(649),
    [anon_sym_LT_LT_DASH] = ACTIONS(651),
    [sym_comment] = ACTIONS(73),
  },
  [252] = {
    [sym_file_descriptor] = ACTIONS(331),
    [anon_sym_RPAREN] = ACTIONS(331),
    [anon_sym_LT] = ACTIONS(333),
    [anon_sym_GT] = ACTIONS(333),
    [anon_sym_GT_GT] = ACTIONS(331),
    [anon_sym_AMP_GT] = ACTIONS(333),
    [anon_sym_AMP_GT_GT] = ACTIONS(331),
    [anon_sym_LT_AMP] = ACTIONS(331),
    [anon_sym_GT_AMP] = ACTIONS(331),
    [anon_sym_LT_LT] = ACTIONS(333),
    [anon_sym_LT_LT_DASH] = ACTIONS(331),
    [sym_comment] = ACTIONS(73),
  },
  [253] = {
    [sym_file_descriptor] = ACTIONS(343),
    [anon_sym_RPAREN] = ACTIONS(343),
    [anon_sym_LT] = ACTIONS(345),
    [anon_sym_GT] = ACTIONS(345),
    [anon_sym_GT_GT] = ACTIONS(343),
    [anon_sym_AMP_GT] = ACTIONS(345),
    [anon_sym_AMP_GT_GT] = ACTIONS(343),
    [anon_sym_LT_AMP] = ACTIONS(343),
    [anon_sym_GT_AMP] = ACTIONS(343),
    [anon_sym_LT_LT] = ACTIONS(345),
    [anon_sym_LT_LT_DASH] = ACTIONS(343),
    [sym_comment] = ACTIONS(73),
  },
  [254] = {
    [sym_file_descriptor] = ACTIONS(519),
    [anon_sym_RPAREN] = ACTIONS(519),
    [anon_sym_LT] = ACTIONS(811),
    [anon_sym_GT] = ACTIONS(811),
    [anon_sym_GT_GT] = ACTIONS(519),
    [anon_sym_AMP_GT] = ACTIONS(811),
    [anon_sym_AMP_GT_GT] = ACTIONS(519),
    [anon_sym_LT_AMP] = ACTIONS(519),
    [anon_sym_GT_AMP] = ACTIONS(519),
    [anon_sym_LT_LT] = ACTIONS(811),
    [anon_sym_LT_LT_DASH] = ACTIONS(519),
    [sym_comment] = ACTIONS(73),
  },
  [255] = {
    [sym_expansion] = STATE(202),
    [sym_operator_expansion] = STATE(202),
    [aux_sym_heredoc_repeat1] = STATE(317),
    [sym__heredoc_middle] = ACTIONS(523),
    [sym__heredoc_end] = ACTIONS(813),
    [anon_sym_DOLLAR] = ACTIONS(527),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(529),
    [sym_comment] = ACTIONS(73),
  },
  [256] = {
    [sym_file_descriptor] = ACTIONS(531),
    [anon_sym_RPAREN] = ACTIONS(531),
    [anon_sym_LT] = ACTIONS(815),
    [anon_sym_GT] = ACTIONS(815),
    [anon_sym_GT_GT] = ACTIONS(531),
    [anon_sym_AMP_GT] = ACTIONS(815),
    [anon_sym_AMP_GT_GT] = ACTIONS(531),
    [anon_sym_LT_AMP] = ACTIONS(531),
    [anon_sym_GT_AMP] = ACTIONS(531),
    [anon_sym_LT_LT] = ACTIONS(815),
    [anon_sym_LT_LT_DASH] = ACTIONS(531),
    [sym_comment] = ACTIONS(73),
  },
  [257] = {
    [sym_file_descriptor] = ACTIONS(535),
    [anon_sym_RPAREN] = ACTIONS(535),
    [anon_sym_LT] = ACTIONS(817),
    [anon_sym_GT] = ACTIONS(817),
    [anon_sym_GT_GT] = ACTIONS(535),
    [anon_sym_AMP_GT] = ACTIONS(817),
    [anon_sym_AMP_GT_GT] = ACTIONS(535),
    [anon_sym_LT_AMP] = ACTIONS(535),
    [anon_sym_GT_AMP] = ACTIONS(535),
    [anon_sym_LT_LT] = ACTIONS(817),
    [anon_sym_LT_LT_DASH] = ACTIONS(535),
    [sym_comment] = ACTIONS(73),
  },
  [258] = {
    [sym_file_descriptor] = ACTIONS(547),
    [anon_sym_RPAREN] = ACTIONS(549),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(549),
    [anon_sym_LT] = ACTIONS(549),
    [anon_sym_GT] = ACTIONS(549),
    [anon_sym_GT_GT] = ACTIONS(549),
    [anon_sym_AMP_GT] = ACTIONS(549),
    [anon_sym_AMP_GT_GT] = ACTIONS(549),
    [anon_sym_LT_AMP] = ACTIONS(549),
    [anon_sym_GT_AMP] = ACTIONS(549),
    [anon_sym_LT_LT] = ACTIONS(549),
    [anon_sym_LT_LT_DASH] = ACTIONS(549),
    [sym_comment] = ACTIONS(147),
  },
  [259] = {
    [sym_quoted_argument] = STATE(313),
    [sym_expansion] = STATE(313),
    [sym_operator_expansion] = STATE(313),
    [sym_command_substitution] = STATE(313),
    [sym_file_redirect] = STATE(169),
    [sym_heredoc_redirect] = STATE(169),
    [aux_sym_command_repeat2] = STATE(318),
    [sym_file_descriptor] = ACTIONS(431),
    [anon_sym_RPAREN] = ACTIONS(819),
    [anon_sym_DQUOTE] = ACTIONS(635),
    [sym_single_quoted_argument] = ACTIONS(807),
    [anon_sym_DOLLAR] = ACTIONS(639),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(641),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(643),
    [anon_sym_LT] = ACTIONS(645),
    [anon_sym_GT] = ACTIONS(645),
    [anon_sym_GT_GT] = ACTIONS(647),
    [anon_sym_AMP_GT] = ACTIONS(645),
    [anon_sym_AMP_GT_GT] = ACTIONS(647),
    [anon_sym_LT_AMP] = ACTIONS(647),
    [anon_sym_GT_AMP] = ACTIONS(647),
    [anon_sym_LT_LT] = ACTIONS(649),
    [anon_sym_LT_LT_DASH] = ACTIONS(651),
    [sym_word] = ACTIONS(809),
    [sym_comment] = ACTIONS(73),
  },
  [260] = {
    [sym_file_redirect] = STATE(257),
    [sym_heredoc_redirect] = STATE(257),
    [sym_file_descriptor] = ACTIONS(431),
    [anon_sym_RPAREN] = ACTIONS(819),
    [anon_sym_LT] = ACTIONS(645),
    [anon_sym_GT] = ACTIONS(645),
    [anon_sym_GT_GT] = ACTIONS(647),
    [anon_sym_AMP_GT] = ACTIONS(645),
    [anon_sym_AMP_GT_GT] = ACTIONS(647),
    [anon_sym_LT_AMP] = ACTIONS(647),
    [anon_sym_GT_AMP] = ACTIONS(647),
    [anon_sym_LT_LT] = ACTIONS(649),
    [anon_sym_LT_LT_DASH] = ACTIONS(651),
    [sym_comment] = ACTIONS(73),
  },
  [261] = {
    [sym_quoted_argument] = STATE(245),
    [sym_expansion] = STATE(245),
    [sym_operator_expansion] = STATE(245),
    [sym_command_substitution] = STATE(245),
    [sym_file_redirect] = STATE(169),
    [sym_heredoc_redirect] = STATE(169),
    [aux_sym_bracket_command_repeat1] = STATE(319),
    [aux_sym_command_repeat2] = STATE(315),
    [sym_file_descriptor] = ACTIONS(431),
    [anon_sym_RPAREN] = ACTIONS(805),
    [anon_sym_DQUOTE] = ACTIONS(635),
    [sym_single_quoted_argument] = ACTIONS(637),
    [anon_sym_DOLLAR] = ACTIONS(639),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(641),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(643),
    [anon_sym_LT] = ACTIONS(645),
    [anon_sym_GT] = ACTIONS(645),
    [anon_sym_GT_GT] = ACTIONS(647),
    [anon_sym_AMP_GT] = ACTIONS(645),
    [anon_sym_AMP_GT_GT] = ACTIONS(647),
    [anon_sym_LT_AMP] = ACTIONS(647),
    [anon_sym_GT_AMP] = ACTIONS(647),
    [anon_sym_LT_LT] = ACTIONS(649),
    [anon_sym_LT_LT_DASH] = ACTIONS(651),
    [sym_word] = ACTIONS(653),
    [sym_comment] = ACTIONS(73),
  },
  [262] = {
    [sym_quoted_argument] = STATE(245),
    [sym_expansion] = STATE(245),
    [sym_operator_expansion] = STATE(245),
    [sym_command_substitution] = STATE(245),
    [sym_file_redirect] = STATE(169),
    [sym_heredoc_redirect] = STATE(169),
    [aux_sym_bracket_command_repeat1] = STATE(320),
    [aux_sym_command_repeat2] = STATE(321),
    [sym_file_descriptor] = ACTIONS(431),
    [anon_sym_RPAREN] = ACTIONS(821),
    [anon_sym_DQUOTE] = ACTIONS(635),
    [sym_single_quoted_argument] = ACTIONS(637),
    [anon_sym_DOLLAR] = ACTIONS(639),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(641),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(643),
    [anon_sym_LT] = ACTIONS(645),
    [anon_sym_GT] = ACTIONS(645),
    [anon_sym_GT_GT] = ACTIONS(647),
    [anon_sym_AMP_GT] = ACTIONS(645),
    [anon_sym_AMP_GT_GT] = ACTIONS(647),
    [anon_sym_LT_AMP] = ACTIONS(647),
    [anon_sym_GT_AMP] = ACTIONS(647),
    [anon_sym_LT_LT] = ACTIONS(649),
    [anon_sym_LT_LT_DASH] = ACTIONS(651),
    [sym_word] = ACTIONS(653),
    [sym_comment] = ACTIONS(73),
  },
  [263] = {
    [sym_file_redirect] = STATE(257),
    [sym_heredoc_redirect] = STATE(257),
    [sym_file_descriptor] = ACTIONS(431),
    [anon_sym_RPAREN] = ACTIONS(821),
    [anon_sym_LT] = ACTIONS(645),
    [anon_sym_GT] = ACTIONS(645),
    [anon_sym_GT_GT] = ACTIONS(647),
    [anon_sym_AMP_GT] = ACTIONS(645),
    [anon_sym_AMP_GT_GT] = ACTIONS(647),
    [anon_sym_LT_AMP] = ACTIONS(647),
    [anon_sym_GT_AMP] = ACTIONS(647),
    [anon_sym_LT_LT] = ACTIONS(649),
    [anon_sym_LT_LT_DASH] = ACTIONS(651),
    [sym_comment] = ACTIONS(73),
  },
  [264] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(823),
    [anon_sym_PIPE] = ACTIONS(823),
    [anon_sym_PIPE_AMP] = ACTIONS(823),
    [anon_sym_AMP_AMP] = ACTIONS(823),
    [anon_sym_PIPE_PIPE] = ACTIONS(823),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(823),
    [anon_sym_LF] = ACTIONS(823),
    [anon_sym_AMP] = ACTIONS(823),
  },
  [265] = {
    [sym_case_item] = STATE(301),
    [sym_quoted_argument] = STATE(236),
    [sym_expansion] = STATE(236),
    [sym_operator_expansion] = STATE(236),
    [sym_command_substitution] = STATE(236),
    [anon_sym_esac] = ACTIONS(825),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [sym_single_quoted_argument] = ACTIONS(617),
    [anon_sym_DOLLAR] = ACTIONS(129),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(131),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(133),
    [sym_word] = ACTIONS(619),
    [sym_comment] = ACTIONS(73),
  },
  [266] = {
    [sym_case_item] = STATE(238),
    [sym_quoted_argument] = STATE(236),
    [sym_expansion] = STATE(236),
    [sym_operator_expansion] = STATE(236),
    [sym_command_substitution] = STATE(236),
    [aux_sym_case_statement_repeat1] = STATE(323),
    [anon_sym_esac] = ACTIONS(825),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [sym_single_quoted_argument] = ACTIONS(617),
    [anon_sym_DOLLAR] = ACTIONS(129),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(131),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(133),
    [sym_word] = ACTIONS(619),
    [sym_comment] = ACTIONS(73),
  },
  [267] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(827),
    [anon_sym_PIPE] = ACTIONS(827),
    [anon_sym_PIPE_AMP] = ACTIONS(827),
    [anon_sym_AMP_AMP] = ACTIONS(827),
    [anon_sym_PIPE_PIPE] = ACTIONS(827),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(827),
    [anon_sym_LF] = ACTIONS(827),
    [anon_sym_AMP] = ACTIONS(827),
  },
  [268] = {
    [anon_sym_RBRACE] = ACTIONS(829),
    [sym_comment] = ACTIONS(73),
  },
  [269] = {
    [anon_sym_RBRACE] = ACTIONS(831),
    [sym_comment] = ACTIONS(73),
  },
  [270] = {
    [sym_file_descriptor] = ACTIONS(547),
    [anon_sym_SEMI_SEMI] = ACTIONS(549),
    [anon_sym_PIPE] = ACTIONS(549),
    [anon_sym_PIPE_AMP] = ACTIONS(549),
    [anon_sym_AMP_AMP] = ACTIONS(549),
    [anon_sym_PIPE_PIPE] = ACTIONS(549),
    [anon_sym_DQUOTE] = ACTIONS(549),
    [sym_single_quoted_argument] = ACTIONS(549),
    [anon_sym_DOLLAR] = ACTIONS(549),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(549),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(549),
    [anon_sym_LT] = ACTIONS(549),
    [anon_sym_GT] = ACTIONS(549),
    [anon_sym_GT_GT] = ACTIONS(549),
    [anon_sym_AMP_GT] = ACTIONS(549),
    [anon_sym_AMP_GT_GT] = ACTIONS(549),
    [anon_sym_LT_AMP] = ACTIONS(549),
    [anon_sym_GT_AMP] = ACTIONS(549),
    [anon_sym_LT_LT] = ACTIONS(549),
    [anon_sym_LT_LT_DASH] = ACTIONS(549),
    [sym_word] = ACTIONS(549),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(549),
    [anon_sym_LF] = ACTIONS(549),
    [anon_sym_AMP] = ACTIONS(549),
  },
  [271] = {
    [sym_file_descriptor] = ACTIONS(681),
    [anon_sym_SEMI_SEMI] = ACTIONS(623),
    [anon_sym_PIPE] = ACTIONS(623),
    [anon_sym_PIPE_AMP] = ACTIONS(623),
    [anon_sym_AMP_AMP] = ACTIONS(623),
    [anon_sym_PIPE_PIPE] = ACTIONS(623),
    [anon_sym_DQUOTE] = ACTIONS(623),
    [sym_single_quoted_argument] = ACTIONS(623),
    [anon_sym_DOLLAR] = ACTIONS(623),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(623),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(623),
    [anon_sym_LT] = ACTIONS(623),
    [anon_sym_GT] = ACTIONS(623),
    [anon_sym_GT_GT] = ACTIONS(623),
    [anon_sym_AMP_GT] = ACTIONS(623),
    [anon_sym_AMP_GT_GT] = ACTIONS(623),
    [anon_sym_LT_AMP] = ACTIONS(623),
    [anon_sym_GT_AMP] = ACTIONS(623),
    [anon_sym_LT_LT] = ACTIONS(623),
    [anon_sym_LT_LT_DASH] = ACTIONS(623),
    [sym_word] = ACTIONS(623),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(623),
    [anon_sym_LF] = ACTIONS(623),
    [anon_sym_AMP] = ACTIONS(623),
  },
  [272] = {
    [sym_quoted_argument] = STATE(326),
    [sym_expansion] = STATE(326),
    [sym_operator_expansion] = STATE(326),
    [sym_command_substitution] = STATE(326),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [sym_single_quoted_argument] = ACTIONS(833),
    [anon_sym_DOLLAR] = ACTIONS(129),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(131),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(133),
    [sym_word] = ACTIONS(835),
    [sym_comment] = ACTIONS(73),
  },
  [273] = {
    [sym_file_descriptor] = ACTIONS(689),
    [anon_sym_SEMI_SEMI] = ACTIONS(669),
    [anon_sym_PIPE] = ACTIONS(669),
    [anon_sym_PIPE_AMP] = ACTIONS(669),
    [anon_sym_AMP_AMP] = ACTIONS(669),
    [anon_sym_PIPE_PIPE] = ACTIONS(669),
    [anon_sym_DQUOTE] = ACTIONS(669),
    [sym_single_quoted_argument] = ACTIONS(669),
    [anon_sym_DOLLAR] = ACTIONS(669),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(669),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(669),
    [anon_sym_LT] = ACTIONS(669),
    [anon_sym_GT] = ACTIONS(669),
    [anon_sym_GT_GT] = ACTIONS(669),
    [anon_sym_AMP_GT] = ACTIONS(669),
    [anon_sym_AMP_GT_GT] = ACTIONS(669),
    [anon_sym_LT_AMP] = ACTIONS(669),
    [anon_sym_GT_AMP] = ACTIONS(669),
    [anon_sym_LT_LT] = ACTIONS(669),
    [anon_sym_LT_LT_DASH] = ACTIONS(669),
    [sym_word] = ACTIONS(669),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(669),
    [anon_sym_LF] = ACTIONS(669),
    [anon_sym_AMP] = ACTIONS(669),
  },
  [274] = {
    [sym_file_descriptor] = ACTIONS(547),
    [anon_sym_SEMI_SEMI] = ACTIONS(549),
    [anon_sym_PIPE] = ACTIONS(549),
    [anon_sym_PIPE_AMP] = ACTIONS(549),
    [anon_sym_AMP_AMP] = ACTIONS(549),
    [anon_sym_PIPE_PIPE] = ACTIONS(549),
    [anon_sym_LT] = ACTIONS(549),
    [anon_sym_GT] = ACTIONS(549),
    [anon_sym_GT_GT] = ACTIONS(549),
    [anon_sym_AMP_GT] = ACTIONS(549),
    [anon_sym_AMP_GT_GT] = ACTIONS(549),
    [anon_sym_LT_AMP] = ACTIONS(549),
    [anon_sym_GT_AMP] = ACTIONS(549),
    [anon_sym_LT_LT] = ACTIONS(549),
    [anon_sym_LT_LT_DASH] = ACTIONS(549),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(549),
    [anon_sym_LF] = ACTIONS(549),
    [anon_sym_AMP] = ACTIONS(549),
  },
  [275] = {
    [sym_file_descriptor] = ACTIONS(681),
    [anon_sym_SEMI_SEMI] = ACTIONS(623),
    [anon_sym_PIPE] = ACTIONS(623),
    [anon_sym_PIPE_AMP] = ACTIONS(623),
    [anon_sym_AMP_AMP] = ACTIONS(623),
    [anon_sym_PIPE_PIPE] = ACTIONS(623),
    [anon_sym_LT] = ACTIONS(623),
    [anon_sym_GT] = ACTIONS(623),
    [anon_sym_GT_GT] = ACTIONS(623),
    [anon_sym_AMP_GT] = ACTIONS(623),
    [anon_sym_AMP_GT_GT] = ACTIONS(623),
    [anon_sym_LT_AMP] = ACTIONS(623),
    [anon_sym_GT_AMP] = ACTIONS(623),
    [anon_sym_LT_LT] = ACTIONS(623),
    [anon_sym_LT_LT_DASH] = ACTIONS(623),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(623),
    [anon_sym_LF] = ACTIONS(623),
    [anon_sym_AMP] = ACTIONS(623),
  },
  [276] = {
    [sym_quoted_argument] = STATE(328),
    [sym_expansion] = STATE(328),
    [sym_operator_expansion] = STATE(328),
    [sym_command_substitution] = STATE(328),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [sym_single_quoted_argument] = ACTIONS(837),
    [anon_sym_DOLLAR] = ACTIONS(129),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(131),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(133),
    [sym_word] = ACTIONS(839),
    [sym_comment] = ACTIONS(73),
  },
  [277] = {
    [sym_file_descriptor] = ACTIONS(689),
    [anon_sym_SEMI_SEMI] = ACTIONS(669),
    [anon_sym_PIPE] = ACTIONS(669),
    [anon_sym_PIPE_AMP] = ACTIONS(669),
    [anon_sym_AMP_AMP] = ACTIONS(669),
    [anon_sym_PIPE_PIPE] = ACTIONS(669),
    [anon_sym_LT] = ACTIONS(669),
    [anon_sym_GT] = ACTIONS(669),
    [anon_sym_GT_GT] = ACTIONS(669),
    [anon_sym_AMP_GT] = ACTIONS(669),
    [anon_sym_AMP_GT_GT] = ACTIONS(669),
    [anon_sym_LT_AMP] = ACTIONS(669),
    [anon_sym_GT_AMP] = ACTIONS(669),
    [anon_sym_LT_LT] = ACTIONS(669),
    [anon_sym_LT_LT_DASH] = ACTIONS(669),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(669),
    [anon_sym_LF] = ACTIONS(669),
    [anon_sym_AMP] = ACTIONS(669),
  },
  [278] = {
    [sym__heredoc_middle] = ACTIONS(463),
    [sym__heredoc_end] = ACTIONS(463),
    [anon_sym_DOLLAR] = ACTIONS(465),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(463),
    [sym_comment] = ACTIONS(73),
  },
  [279] = {
    [sym__heredoc_middle] = ACTIONS(467),
    [sym__heredoc_end] = ACTIONS(467),
    [anon_sym_DOLLAR] = ACTIONS(469),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(467),
    [sym_comment] = ACTIONS(73),
  },
  [280] = {
    [anon_sym_RBRACE] = ACTIONS(841),
    [anon_sym_COLON] = ACTIONS(843),
    [anon_sym_EQ] = ACTIONS(845),
    [anon_sym_COLON_QMARK] = ACTIONS(845),
    [anon_sym_COLON_DASH] = ACTIONS(845),
    [sym_comment] = ACTIONS(73),
  },
  [281] = {
    [sym__heredoc_middle] = ACTIONS(847),
    [sym__heredoc_end] = ACTIONS(847),
    [anon_sym_DOLLAR] = ACTIONS(849),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(847),
    [sym_comment] = ACTIONS(73),
  },
  [282] = {
    [sym_file_descriptor] = ACTIONS(851),
    [anon_sym_SEMI_SEMI] = ACTIONS(853),
    [anon_sym_PIPE] = ACTIONS(853),
    [anon_sym_PIPE_AMP] = ACTIONS(853),
    [anon_sym_AMP_AMP] = ACTIONS(853),
    [anon_sym_PIPE_PIPE] = ACTIONS(853),
    [anon_sym_LT] = ACTIONS(853),
    [anon_sym_GT] = ACTIONS(853),
    [anon_sym_GT_GT] = ACTIONS(853),
    [anon_sym_AMP_GT] = ACTIONS(853),
    [anon_sym_AMP_GT_GT] = ACTIONS(853),
    [anon_sym_LT_AMP] = ACTIONS(853),
    [anon_sym_GT_AMP] = ACTIONS(853),
    [anon_sym_LT_LT] = ACTIONS(853),
    [anon_sym_LT_LT_DASH] = ACTIONS(853),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(853),
    [anon_sym_LF] = ACTIONS(853),
    [anon_sym_AMP] = ACTIONS(853),
  },
  [283] = {
    [anon_sym_RBRACE] = ACTIONS(855),
    [sym_comment] = ACTIONS(73),
  },
  [284] = {
    [anon_sym_RBRACE] = ACTIONS(857),
    [sym_comment] = ACTIONS(73),
  },
  [285] = {
    [anon_sym_RBRACE] = ACTIONS(859),
    [sym_comment] = ACTIONS(73),
  },
  [286] = {
    [anon_sym_RBRACE] = ACTIONS(861),
    [sym_comment] = ACTIONS(73),
  },
  [287] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(863),
    [anon_sym_PIPE] = ACTIONS(863),
    [anon_sym_PIPE_AMP] = ACTIONS(863),
    [anon_sym_AMP_AMP] = ACTIONS(863),
    [anon_sym_PIPE_PIPE] = ACTIONS(863),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(863),
    [anon_sym_LF] = ACTIONS(863),
    [anon_sym_AMP] = ACTIONS(863),
  },
  [288] = {
    [sym__terminated_statement] = STATE(68),
    [sym_while_statement] = STATE(16),
    [sym_if_statement] = STATE(16),
    [sym_case_statement] = STATE(16),
    [sym_function_definition] = STATE(16),
    [sym_bracket_command] = STATE(16),
    [sym_command] = STATE(16),
    [sym_pipeline] = STATE(16),
    [sym_list] = STATE(16),
    [sym_subshell] = STATE(16),
    [sym_environment_variable_assignment] = STATE(17),
    [sym_quoted_argument] = STATE(10),
    [sym_file_redirect] = STATE(18),
    [aux_sym_command_repeat1] = STATE(20),
    [sym_file_descriptor] = ACTIONS(77),
    [anon_sym_while] = ACTIONS(81),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_case] = ACTIONS(85),
    [anon_sym_function] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(865),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_single_quoted_argument] = ACTIONS(99),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_AMP_GT] = ACTIONS(101),
    [anon_sym_AMP_GT_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [sym_leading_word] = ACTIONS(103),
    [sym_comment] = ACTIONS(73),
  },
  [289] = {
    [sym_file_descriptor] = ACTIONS(547),
    [anon_sym_SEMI_SEMI] = ACTIONS(549),
    [anon_sym_COLON] = ACTIONS(549),
    [anon_sym_PIPE] = ACTIONS(549),
    [anon_sym_PIPE_AMP] = ACTIONS(549),
    [anon_sym_AMP_AMP] = ACTIONS(549),
    [anon_sym_PIPE_PIPE] = ACTIONS(549),
    [anon_sym_DQUOTE] = ACTIONS(549),
    [sym_single_quoted_argument] = ACTIONS(549),
    [anon_sym_LT] = ACTIONS(549),
    [anon_sym_GT] = ACTIONS(549),
    [anon_sym_GT_GT] = ACTIONS(549),
    [anon_sym_AMP_GT] = ACTIONS(549),
    [anon_sym_AMP_GT_GT] = ACTIONS(549),
    [anon_sym_LT_AMP] = ACTIONS(549),
    [anon_sym_GT_AMP] = ACTIONS(549),
    [sym_leading_word] = ACTIONS(549),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(549),
    [anon_sym_LF] = ACTIONS(549),
    [anon_sym_AMP] = ACTIONS(549),
  },
  [290] = {
    [sym_file_descriptor] = ACTIONS(681),
    [anon_sym_SEMI_SEMI] = ACTIONS(623),
    [anon_sym_COLON] = ACTIONS(623),
    [anon_sym_PIPE] = ACTIONS(623),
    [anon_sym_PIPE_AMP] = ACTIONS(623),
    [anon_sym_AMP_AMP] = ACTIONS(623),
    [anon_sym_PIPE_PIPE] = ACTIONS(623),
    [anon_sym_DQUOTE] = ACTIONS(623),
    [sym_single_quoted_argument] = ACTIONS(623),
    [anon_sym_LT] = ACTIONS(623),
    [anon_sym_GT] = ACTIONS(623),
    [anon_sym_GT_GT] = ACTIONS(623),
    [anon_sym_AMP_GT] = ACTIONS(623),
    [anon_sym_AMP_GT_GT] = ACTIONS(623),
    [anon_sym_LT_AMP] = ACTIONS(623),
    [anon_sym_GT_AMP] = ACTIONS(623),
    [sym_leading_word] = ACTIONS(623),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(623),
    [anon_sym_LF] = ACTIONS(623),
    [anon_sym_AMP] = ACTIONS(623),
  },
  [291] = {
    [sym_quoted_argument] = STATE(337),
    [sym_expansion] = STATE(337),
    [sym_operator_expansion] = STATE(337),
    [sym_command_substitution] = STATE(337),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [sym_single_quoted_argument] = ACTIONS(867),
    [anon_sym_DOLLAR] = ACTIONS(129),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(131),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(133),
    [sym_word] = ACTIONS(869),
    [sym_comment] = ACTIONS(73),
  },
  [292] = {
    [sym_file_descriptor] = ACTIONS(689),
    [anon_sym_SEMI_SEMI] = ACTIONS(669),
    [anon_sym_COLON] = ACTIONS(669),
    [anon_sym_PIPE] = ACTIONS(669),
    [anon_sym_PIPE_AMP] = ACTIONS(669),
    [anon_sym_AMP_AMP] = ACTIONS(669),
    [anon_sym_PIPE_PIPE] = ACTIONS(669),
    [anon_sym_DQUOTE] = ACTIONS(669),
    [sym_single_quoted_argument] = ACTIONS(669),
    [anon_sym_LT] = ACTIONS(669),
    [anon_sym_GT] = ACTIONS(669),
    [anon_sym_GT_GT] = ACTIONS(669),
    [anon_sym_AMP_GT] = ACTIONS(669),
    [anon_sym_AMP_GT_GT] = ACTIONS(669),
    [anon_sym_LT_AMP] = ACTIONS(669),
    [anon_sym_GT_AMP] = ACTIONS(669),
    [sym_leading_word] = ACTIONS(669),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(669),
    [anon_sym_LF] = ACTIONS(669),
    [anon_sym_AMP] = ACTIONS(669),
  },
  [293] = {
    [sym_file_redirect] = STATE(121),
    [sym_heredoc_redirect] = STATE(121),
    [sym_file_descriptor] = ACTIONS(137),
    [anon_sym_SEMI_SEMI] = ACTIONS(871),
    [anon_sym_PIPE] = ACTIONS(871),
    [anon_sym_PIPE_AMP] = ACTIONS(871),
    [anon_sym_AMP_AMP] = ACTIONS(871),
    [anon_sym_PIPE_PIPE] = ACTIONS(871),
    [anon_sym_LT] = ACTIONS(143),
    [anon_sym_GT] = ACTIONS(143),
    [anon_sym_GT_GT] = ACTIONS(143),
    [anon_sym_AMP_GT] = ACTIONS(143),
    [anon_sym_AMP_GT_GT] = ACTIONS(143),
    [anon_sym_LT_AMP] = ACTIONS(143),
    [anon_sym_GT_AMP] = ACTIONS(143),
    [anon_sym_LT_LT] = ACTIONS(145),
    [anon_sym_LT_LT_DASH] = ACTIONS(145),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(871),
    [anon_sym_LF] = ACTIONS(871),
    [anon_sym_AMP] = ACTIONS(871),
  },
  [294] = {
    [sym_file_redirect] = STATE(121),
    [sym_heredoc_redirect] = STATE(121),
    [sym_file_descriptor] = ACTIONS(137),
    [anon_sym_SEMI_SEMI] = ACTIONS(873),
    [anon_sym_PIPE] = ACTIONS(873),
    [anon_sym_PIPE_AMP] = ACTIONS(873),
    [anon_sym_AMP_AMP] = ACTIONS(873),
    [anon_sym_PIPE_PIPE] = ACTIONS(873),
    [anon_sym_LT] = ACTIONS(143),
    [anon_sym_GT] = ACTIONS(143),
    [anon_sym_GT_GT] = ACTIONS(143),
    [anon_sym_AMP_GT] = ACTIONS(143),
    [anon_sym_AMP_GT_GT] = ACTIONS(143),
    [anon_sym_LT_AMP] = ACTIONS(143),
    [anon_sym_GT_AMP] = ACTIONS(143),
    [anon_sym_LT_LT] = ACTIONS(145),
    [anon_sym_LT_LT_DASH] = ACTIONS(145),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(873),
    [anon_sym_LF] = ACTIONS(873),
    [anon_sym_AMP] = ACTIONS(873),
  },
  [295] = {
    [sym__terminated_statement] = STATE(15),
    [sym_while_statement] = STATE(16),
    [sym_if_statement] = STATE(16),
    [sym_case_statement] = STATE(16),
    [sym_function_definition] = STATE(16),
    [sym_bracket_command] = STATE(16),
    [sym_command] = STATE(16),
    [sym_pipeline] = STATE(16),
    [sym_list] = STATE(16),
    [sym_subshell] = STATE(16),
    [sym_environment_variable_assignment] = STATE(17),
    [sym_quoted_argument] = STATE(10),
    [sym_file_redirect] = STATE(18),
    [aux_sym_program_repeat1] = STATE(339),
    [aux_sym_command_repeat1] = STATE(20),
    [sym_file_descriptor] = ACTIONS(77),
    [anon_sym_while] = ACTIONS(81),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_fi] = ACTIONS(875),
    [anon_sym_elif] = ACTIONS(875),
    [anon_sym_else] = ACTIONS(875),
    [anon_sym_case] = ACTIONS(85),
    [anon_sym_function] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_single_quoted_argument] = ACTIONS(99),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_AMP_GT] = ACTIONS(101),
    [anon_sym_AMP_GT_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [sym_leading_word] = ACTIONS(103),
    [sym_comment] = ACTIONS(73),
  },
  [296] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(877),
    [anon_sym_PIPE] = ACTIONS(877),
    [anon_sym_PIPE_AMP] = ACTIONS(877),
    [anon_sym_AMP_AMP] = ACTIONS(877),
    [anon_sym_PIPE_PIPE] = ACTIONS(877),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(877),
    [anon_sym_LF] = ACTIONS(877),
    [anon_sym_AMP] = ACTIONS(877),
  },
  [297] = {
    [anon_sym_fi] = ACTIONS(879),
    [sym_comment] = ACTIONS(73),
  },
  [298] = {
    [sym__terminated_statement] = STATE(15),
    [sym_while_statement] = STATE(16),
    [sym_if_statement] = STATE(16),
    [sym_case_statement] = STATE(16),
    [sym_function_definition] = STATE(16),
    [sym_bracket_command] = STATE(16),
    [sym_command] = STATE(16),
    [sym_pipeline] = STATE(16),
    [sym_list] = STATE(16),
    [sym_subshell] = STATE(16),
    [sym_environment_variable_assignment] = STATE(17),
    [sym_quoted_argument] = STATE(10),
    [sym_file_redirect] = STATE(18),
    [aux_sym_program_repeat1] = STATE(342),
    [aux_sym_command_repeat1] = STATE(20),
    [sym_file_descriptor] = ACTIONS(77),
    [anon_sym_while] = ACTIONS(81),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_case] = ACTIONS(85),
    [anon_sym_SEMI_SEMI] = ACTIONS(881),
    [anon_sym_function] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_single_quoted_argument] = ACTIONS(99),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_AMP_GT] = ACTIONS(101),
    [anon_sym_AMP_GT_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [sym_leading_word] = ACTIONS(103),
    [sym_comment] = ACTIONS(73),
  },
  [299] = {
    [sym__terminated_statement] = STATE(15),
    [sym_while_statement] = STATE(16),
    [sym_if_statement] = STATE(16),
    [sym_case_statement] = STATE(16),
    [sym_function_definition] = STATE(16),
    [sym_bracket_command] = STATE(16),
    [sym_command] = STATE(16),
    [sym_pipeline] = STATE(16),
    [sym_list] = STATE(16),
    [sym_subshell] = STATE(16),
    [sym_environment_variable_assignment] = STATE(17),
    [sym_quoted_argument] = STATE(10),
    [sym_file_redirect] = STATE(18),
    [aux_sym_program_repeat1] = STATE(344),
    [aux_sym_command_repeat1] = STATE(20),
    [sym_file_descriptor] = ACTIONS(77),
    [anon_sym_while] = ACTIONS(81),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_case] = ACTIONS(85),
    [anon_sym_SEMI_SEMI] = ACTIONS(883),
    [anon_sym_function] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_single_quoted_argument] = ACTIONS(99),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_AMP_GT] = ACTIONS(101),
    [anon_sym_AMP_GT_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [sym_leading_word] = ACTIONS(103),
    [sym_comment] = ACTIONS(73),
  },
  [300] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(885),
    [anon_sym_PIPE] = ACTIONS(885),
    [anon_sym_PIPE_AMP] = ACTIONS(885),
    [anon_sym_AMP_AMP] = ACTIONS(885),
    [anon_sym_PIPE_PIPE] = ACTIONS(885),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(885),
    [anon_sym_LF] = ACTIONS(885),
    [anon_sym_AMP] = ACTIONS(885),
  },
  [301] = {
    [anon_sym_esac] = ACTIONS(887),
    [anon_sym_DQUOTE] = ACTIONS(889),
    [sym_single_quoted_argument] = ACTIONS(887),
    [anon_sym_DOLLAR] = ACTIONS(887),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(889),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(889),
    [sym_word] = ACTIONS(891),
    [sym_comment] = ACTIONS(73),
  },
  [302] = {
    [sym_case_item] = STATE(301),
    [sym_quoted_argument] = STATE(236),
    [sym_expansion] = STATE(236),
    [sym_operator_expansion] = STATE(236),
    [sym_command_substitution] = STATE(236),
    [anon_sym_esac] = ACTIONS(893),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [sym_single_quoted_argument] = ACTIONS(617),
    [anon_sym_DOLLAR] = ACTIONS(129),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(131),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(133),
    [sym_word] = ACTIONS(619),
    [sym_comment] = ACTIONS(73),
  },
  [303] = {
    [anon_sym_in] = ACTIONS(895),
    [anon_sym_SEMI_SEMI] = ACTIONS(895),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(895),
    [anon_sym_LF] = ACTIONS(895),
    [anon_sym_AMP] = ACTIONS(895),
  },
  [304] = {
    [anon_sym_in] = ACTIONS(897),
    [anon_sym_SEMI_SEMI] = ACTIONS(897),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(897),
    [anon_sym_LF] = ACTIONS(897),
    [anon_sym_AMP] = ACTIONS(897),
  },
  [305] = {
    [sym_file_descriptor] = ACTIONS(393),
    [anon_sym_RPAREN] = ACTIONS(393),
    [anon_sym_LT] = ACTIONS(395),
    [anon_sym_GT] = ACTIONS(395),
    [anon_sym_GT_GT] = ACTIONS(393),
    [anon_sym_AMP_GT] = ACTIONS(395),
    [anon_sym_AMP_GT_GT] = ACTIONS(393),
    [anon_sym_LT_AMP] = ACTIONS(393),
    [anon_sym_GT_AMP] = ACTIONS(393),
    [anon_sym_LT_LT] = ACTIONS(395),
    [anon_sym_LT_LT_DASH] = ACTIONS(393),
    [sym_comment] = ACTIONS(73),
  },
  [306] = {
    [sym_file_descriptor] = ACTIONS(399),
    [anon_sym_RPAREN] = ACTIONS(399),
    [anon_sym_LT] = ACTIONS(401),
    [anon_sym_GT] = ACTIONS(401),
    [anon_sym_GT_GT] = ACTIONS(399),
    [anon_sym_AMP_GT] = ACTIONS(401),
    [anon_sym_AMP_GT_GT] = ACTIONS(399),
    [anon_sym_LT_AMP] = ACTIONS(399),
    [anon_sym_GT_AMP] = ACTIONS(399),
    [anon_sym_LT_LT] = ACTIONS(401),
    [anon_sym_LT_LT_DASH] = ACTIONS(399),
    [sym_comment] = ACTIONS(73),
  },
  [307] = {
    [sym_file_descriptor] = ACTIONS(311),
    [anon_sym_RPAREN] = ACTIONS(311),
    [anon_sym_DQUOTE] = ACTIONS(311),
    [sym_single_quoted_argument] = ACTIONS(459),
    [anon_sym_DOLLAR] = ACTIONS(459),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(311),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(311),
    [anon_sym_LT] = ACTIONS(459),
    [anon_sym_GT] = ACTIONS(459),
    [anon_sym_GT_GT] = ACTIONS(311),
    [anon_sym_AMP_GT] = ACTIONS(459),
    [anon_sym_AMP_GT_GT] = ACTIONS(311),
    [anon_sym_LT_AMP] = ACTIONS(311),
    [anon_sym_GT_AMP] = ACTIONS(311),
    [anon_sym_LT_LT] = ACTIONS(459),
    [anon_sym_LT_LT_DASH] = ACTIONS(311),
    [sym_word] = ACTIONS(313),
    [sym_comment] = ACTIONS(73),
  },
  [308] = {
    [sym_expansion] = STATE(127),
    [sym_operator_expansion] = STATE(127),
    [sym_command_substitution] = STATE(127),
    [anon_sym_DQUOTE] = ACTIONS(899),
    [sym__quoted_chars] = ACTIONS(327),
    [anon_sym_DOLLAR] = ACTIONS(153),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(155),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(157),
    [sym_comment] = ACTIONS(147),
  },
  [309] = {
    [sym_file_descriptor] = ACTIONS(463),
    [anon_sym_RPAREN] = ACTIONS(463),
    [anon_sym_DQUOTE] = ACTIONS(463),
    [sym_single_quoted_argument] = ACTIONS(465),
    [anon_sym_DOLLAR] = ACTIONS(465),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(463),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(463),
    [anon_sym_LT] = ACTIONS(465),
    [anon_sym_GT] = ACTIONS(465),
    [anon_sym_GT_GT] = ACTIONS(463),
    [anon_sym_AMP_GT] = ACTIONS(465),
    [anon_sym_AMP_GT_GT] = ACTIONS(463),
    [anon_sym_LT_AMP] = ACTIONS(463),
    [anon_sym_GT_AMP] = ACTIONS(463),
    [anon_sym_LT_LT] = ACTIONS(465),
    [anon_sym_LT_LT_DASH] = ACTIONS(463),
    [sym_word] = ACTIONS(421),
    [sym_comment] = ACTIONS(73),
  },
  [310] = {
    [sym_file_descriptor] = ACTIONS(467),
    [anon_sym_RPAREN] = ACTIONS(467),
    [anon_sym_DQUOTE] = ACTIONS(467),
    [sym_single_quoted_argument] = ACTIONS(469),
    [anon_sym_DOLLAR] = ACTIONS(469),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(467),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(467),
    [anon_sym_LT] = ACTIONS(469),
    [anon_sym_GT] = ACTIONS(469),
    [anon_sym_GT_GT] = ACTIONS(467),
    [anon_sym_AMP_GT] = ACTIONS(469),
    [anon_sym_AMP_GT_GT] = ACTIONS(467),
    [anon_sym_LT_AMP] = ACTIONS(467),
    [anon_sym_GT_AMP] = ACTIONS(467),
    [anon_sym_LT_LT] = ACTIONS(469),
    [anon_sym_LT_LT_DASH] = ACTIONS(467),
    [sym_word] = ACTIONS(423),
    [sym_comment] = ACTIONS(73),
  },
  [311] = {
    [anon_sym_RBRACE] = ACTIONS(901),
    [anon_sym_COLON] = ACTIONS(903),
    [anon_sym_EQ] = ACTIONS(905),
    [anon_sym_COLON_QMARK] = ACTIONS(905),
    [anon_sym_COLON_DASH] = ACTIONS(905),
    [sym_comment] = ACTIONS(73),
  },
  [312] = {
    [anon_sym_RPAREN] = ACTIONS(907),
    [sym_comment] = ACTIONS(73),
  },
  [313] = {
    [sym_file_descriptor] = ACTIONS(483),
    [anon_sym_RPAREN] = ACTIONS(483),
    [anon_sym_DQUOTE] = ACTIONS(483),
    [sym_single_quoted_argument] = ACTIONS(481),
    [anon_sym_DOLLAR] = ACTIONS(481),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(483),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(483),
    [anon_sym_LT] = ACTIONS(481),
    [anon_sym_GT] = ACTIONS(481),
    [anon_sym_GT_GT] = ACTIONS(483),
    [anon_sym_AMP_GT] = ACTIONS(481),
    [anon_sym_AMP_GT_GT] = ACTIONS(483),
    [anon_sym_LT_AMP] = ACTIONS(483),
    [anon_sym_GT_AMP] = ACTIONS(483),
    [anon_sym_LT_LT] = ACTIONS(481),
    [anon_sym_LT_LT_DASH] = ACTIONS(483),
    [sym_word] = ACTIONS(485),
    [sym_comment] = ACTIONS(73),
  },
  [314] = {
    [sym_file_descriptor] = ACTIONS(489),
    [anon_sym_RPAREN] = ACTIONS(489),
    [anon_sym_DQUOTE] = ACTIONS(489),
    [sym_single_quoted_argument] = ACTIONS(487),
    [anon_sym_DOLLAR] = ACTIONS(487),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(489),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(489),
    [anon_sym_LT] = ACTIONS(487),
    [anon_sym_GT] = ACTIONS(487),
    [anon_sym_GT_GT] = ACTIONS(489),
    [anon_sym_AMP_GT] = ACTIONS(487),
    [anon_sym_AMP_GT_GT] = ACTIONS(489),
    [anon_sym_LT_AMP] = ACTIONS(489),
    [anon_sym_GT_AMP] = ACTIONS(489),
    [anon_sym_LT_LT] = ACTIONS(487),
    [anon_sym_LT_LT_DASH] = ACTIONS(489),
    [sym_word] = ACTIONS(491),
    [sym_comment] = ACTIONS(73),
  },
  [315] = {
    [sym_file_redirect] = STATE(257),
    [sym_heredoc_redirect] = STATE(257),
    [sym_file_descriptor] = ACTIONS(431),
    [anon_sym_RPAREN] = ACTIONS(909),
    [anon_sym_LT] = ACTIONS(645),
    [anon_sym_GT] = ACTIONS(645),
    [anon_sym_GT_GT] = ACTIONS(647),
    [anon_sym_AMP_GT] = ACTIONS(645),
    [anon_sym_AMP_GT_GT] = ACTIONS(647),
    [anon_sym_LT_AMP] = ACTIONS(647),
    [anon_sym_GT_AMP] = ACTIONS(647),
    [anon_sym_LT_LT] = ACTIONS(649),
    [anon_sym_LT_LT_DASH] = ACTIONS(651),
    [sym_comment] = ACTIONS(73),
  },
  [316] = {
    [sym_file_descriptor] = ACTIONS(719),
    [anon_sym_RPAREN] = ACTIONS(719),
    [anon_sym_LT] = ACTIONS(911),
    [anon_sym_GT] = ACTIONS(911),
    [anon_sym_GT_GT] = ACTIONS(719),
    [anon_sym_AMP_GT] = ACTIONS(911),
    [anon_sym_AMP_GT_GT] = ACTIONS(719),
    [anon_sym_LT_AMP] = ACTIONS(719),
    [anon_sym_GT_AMP] = ACTIONS(719),
    [anon_sym_LT_LT] = ACTIONS(911),
    [anon_sym_LT_LT_DASH] = ACTIONS(719),
    [sym_comment] = ACTIONS(73),
  },
  [317] = {
    [sym_expansion] = STATE(281),
    [sym_operator_expansion] = STATE(281),
    [sym__heredoc_middle] = ACTIONS(729),
    [sym__heredoc_end] = ACTIONS(913),
    [anon_sym_DOLLAR] = ACTIONS(527),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(529),
    [sym_comment] = ACTIONS(73),
  },
  [318] = {
    [sym_file_redirect] = STATE(257),
    [sym_heredoc_redirect] = STATE(257),
    [sym_file_descriptor] = ACTIONS(431),
    [anon_sym_RPAREN] = ACTIONS(915),
    [anon_sym_LT] = ACTIONS(645),
    [anon_sym_GT] = ACTIONS(645),
    [anon_sym_GT_GT] = ACTIONS(647),
    [anon_sym_AMP_GT] = ACTIONS(645),
    [anon_sym_AMP_GT_GT] = ACTIONS(647),
    [anon_sym_LT_AMP] = ACTIONS(647),
    [anon_sym_GT_AMP] = ACTIONS(647),
    [anon_sym_LT_LT] = ACTIONS(649),
    [anon_sym_LT_LT_DASH] = ACTIONS(651),
    [sym_comment] = ACTIONS(73),
  },
  [319] = {
    [sym_quoted_argument] = STATE(313),
    [sym_expansion] = STATE(313),
    [sym_operator_expansion] = STATE(313),
    [sym_command_substitution] = STATE(313),
    [sym_file_redirect] = STATE(169),
    [sym_heredoc_redirect] = STATE(169),
    [aux_sym_command_repeat2] = STATE(351),
    [sym_file_descriptor] = ACTIONS(431),
    [anon_sym_RPAREN] = ACTIONS(909),
    [anon_sym_DQUOTE] = ACTIONS(635),
    [sym_single_quoted_argument] = ACTIONS(807),
    [anon_sym_DOLLAR] = ACTIONS(639),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(641),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(643),
    [anon_sym_LT] = ACTIONS(645),
    [anon_sym_GT] = ACTIONS(645),
    [anon_sym_GT_GT] = ACTIONS(647),
    [anon_sym_AMP_GT] = ACTIONS(645),
    [anon_sym_AMP_GT_GT] = ACTIONS(647),
    [anon_sym_LT_AMP] = ACTIONS(647),
    [anon_sym_GT_AMP] = ACTIONS(647),
    [anon_sym_LT_LT] = ACTIONS(649),
    [anon_sym_LT_LT_DASH] = ACTIONS(651),
    [sym_word] = ACTIONS(809),
    [sym_comment] = ACTIONS(73),
  },
  [320] = {
    [sym_quoted_argument] = STATE(313),
    [sym_expansion] = STATE(313),
    [sym_operator_expansion] = STATE(313),
    [sym_command_substitution] = STATE(313),
    [sym_file_redirect] = STATE(169),
    [sym_heredoc_redirect] = STATE(169),
    [aux_sym_command_repeat2] = STATE(352),
    [sym_file_descriptor] = ACTIONS(431),
    [anon_sym_RPAREN] = ACTIONS(917),
    [anon_sym_DQUOTE] = ACTIONS(635),
    [sym_single_quoted_argument] = ACTIONS(807),
    [anon_sym_DOLLAR] = ACTIONS(639),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(641),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(643),
    [anon_sym_LT] = ACTIONS(645),
    [anon_sym_GT] = ACTIONS(645),
    [anon_sym_GT_GT] = ACTIONS(647),
    [anon_sym_AMP_GT] = ACTIONS(645),
    [anon_sym_AMP_GT_GT] = ACTIONS(647),
    [anon_sym_LT_AMP] = ACTIONS(647),
    [anon_sym_GT_AMP] = ACTIONS(647),
    [anon_sym_LT_LT] = ACTIONS(649),
    [anon_sym_LT_LT_DASH] = ACTIONS(651),
    [sym_word] = ACTIONS(809),
    [sym_comment] = ACTIONS(73),
  },
  [321] = {
    [sym_file_redirect] = STATE(257),
    [sym_heredoc_redirect] = STATE(257),
    [sym_file_descriptor] = ACTIONS(431),
    [anon_sym_RPAREN] = ACTIONS(917),
    [anon_sym_LT] = ACTIONS(645),
    [anon_sym_GT] = ACTIONS(645),
    [anon_sym_GT_GT] = ACTIONS(647),
    [anon_sym_AMP_GT] = ACTIONS(645),
    [anon_sym_AMP_GT_GT] = ACTIONS(647),
    [anon_sym_LT_AMP] = ACTIONS(647),
    [anon_sym_GT_AMP] = ACTIONS(647),
    [anon_sym_LT_LT] = ACTIONS(649),
    [anon_sym_LT_LT_DASH] = ACTIONS(651),
    [sym_comment] = ACTIONS(73),
  },
  [322] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(919),
    [anon_sym_PIPE] = ACTIONS(919),
    [anon_sym_PIPE_AMP] = ACTIONS(919),
    [anon_sym_AMP_AMP] = ACTIONS(919),
    [anon_sym_PIPE_PIPE] = ACTIONS(919),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(919),
    [anon_sym_LF] = ACTIONS(919),
    [anon_sym_AMP] = ACTIONS(919),
  },
  [323] = {
    [sym_case_item] = STATE(301),
    [sym_quoted_argument] = STATE(236),
    [sym_expansion] = STATE(236),
    [sym_operator_expansion] = STATE(236),
    [sym_command_substitution] = STATE(236),
    [anon_sym_esac] = ACTIONS(921),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [sym_single_quoted_argument] = ACTIONS(617),
    [anon_sym_DOLLAR] = ACTIONS(129),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(131),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(133),
    [sym_word] = ACTIONS(619),
    [sym_comment] = ACTIONS(73),
  },
  [324] = {
    [anon_sym_RPAREN] = ACTIONS(923),
    [anon_sym_RBRACE] = ACTIONS(923),
    [anon_sym_RBRACK] = ACTIONS(925),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(925),
    [anon_sym_DQUOTE] = ACTIONS(923),
    [sym_single_quoted_argument] = ACTIONS(925),
    [anon_sym_DOLLAR] = ACTIONS(925),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(923),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(923),
    [sym_word] = ACTIONS(895),
    [sym_comment] = ACTIONS(73),
  },
  [325] = {
    [anon_sym_RPAREN] = ACTIONS(927),
    [anon_sym_RBRACE] = ACTIONS(927),
    [anon_sym_RBRACK] = ACTIONS(929),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(929),
    [anon_sym_DQUOTE] = ACTIONS(927),
    [sym_single_quoted_argument] = ACTIONS(929),
    [anon_sym_DOLLAR] = ACTIONS(929),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(927),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(927),
    [sym_word] = ACTIONS(897),
    [sym_comment] = ACTIONS(73),
  },
  [326] = {
    [anon_sym_RBRACE] = ACTIONS(931),
    [sym_comment] = ACTIONS(73),
  },
  [327] = {
    [anon_sym_RBRACE] = ACTIONS(933),
    [sym_comment] = ACTIONS(73),
  },
  [328] = {
    [anon_sym_RBRACE] = ACTIONS(935),
    [sym_comment] = ACTIONS(73),
  },
  [329] = {
    [anon_sym_RBRACE] = ACTIONS(937),
    [sym_comment] = ACTIONS(73),
  },
  [330] = {
    [sym__heredoc_middle] = ACTIONS(681),
    [sym__heredoc_end] = ACTIONS(681),
    [anon_sym_DOLLAR] = ACTIONS(683),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(681),
    [sym_comment] = ACTIONS(73),
  },
  [331] = {
    [sym_quoted_argument] = STATE(358),
    [sym_expansion] = STATE(358),
    [sym_operator_expansion] = STATE(358),
    [sym_command_substitution] = STATE(358),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [sym_single_quoted_argument] = ACTIONS(939),
    [anon_sym_DOLLAR] = ACTIONS(129),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(131),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(133),
    [sym_word] = ACTIONS(941),
    [sym_comment] = ACTIONS(73),
  },
  [332] = {
    [anon_sym_DQUOTE] = ACTIONS(895),
    [sym__quoted_chars] = ACTIONS(925),
    [anon_sym_DOLLAR] = ACTIONS(895),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(895),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(895),
    [sym_comment] = ACTIONS(147),
  },
  [333] = {
    [anon_sym_DQUOTE] = ACTIONS(897),
    [sym__quoted_chars] = ACTIONS(929),
    [anon_sym_DOLLAR] = ACTIONS(897),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(897),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(897),
    [sym_comment] = ACTIONS(147),
  },
  [334] = {
    [sym_file_descriptor] = ACTIONS(923),
    [anon_sym_COLON] = ACTIONS(923),
    [anon_sym_DQUOTE] = ACTIONS(923),
    [sym_single_quoted_argument] = ACTIONS(925),
    [anon_sym_LT] = ACTIONS(925),
    [anon_sym_GT] = ACTIONS(925),
    [anon_sym_GT_GT] = ACTIONS(925),
    [anon_sym_AMP_GT] = ACTIONS(925),
    [anon_sym_AMP_GT_GT] = ACTIONS(925),
    [anon_sym_LT_AMP] = ACTIONS(925),
    [anon_sym_GT_AMP] = ACTIONS(925),
    [sym_leading_word] = ACTIONS(895),
    [sym_comment] = ACTIONS(73),
  },
  [335] = {
    [sym_file_descriptor] = ACTIONS(927),
    [anon_sym_COLON] = ACTIONS(927),
    [anon_sym_DQUOTE] = ACTIONS(927),
    [sym_single_quoted_argument] = ACTIONS(929),
    [anon_sym_LT] = ACTIONS(929),
    [anon_sym_GT] = ACTIONS(929),
    [anon_sym_GT_GT] = ACTIONS(929),
    [anon_sym_AMP_GT] = ACTIONS(929),
    [anon_sym_AMP_GT_GT] = ACTIONS(929),
    [anon_sym_LT_AMP] = ACTIONS(929),
    [anon_sym_GT_AMP] = ACTIONS(929),
    [sym_leading_word] = ACTIONS(897),
    [sym_comment] = ACTIONS(73),
  },
  [336] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(943),
    [anon_sym_PIPE] = ACTIONS(943),
    [anon_sym_PIPE_AMP] = ACTIONS(943),
    [anon_sym_AMP_AMP] = ACTIONS(943),
    [anon_sym_PIPE_PIPE] = ACTIONS(943),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(943),
    [anon_sym_LF] = ACTIONS(943),
    [anon_sym_AMP] = ACTIONS(943),
  },
  [337] = {
    [anon_sym_RBRACE] = ACTIONS(945),
    [sym_comment] = ACTIONS(73),
  },
  [338] = {
    [anon_sym_RBRACE] = ACTIONS(947),
    [sym_comment] = ACTIONS(73),
  },
  [339] = {
    [sym__terminated_statement] = STATE(68),
    [sym_while_statement] = STATE(16),
    [sym_if_statement] = STATE(16),
    [sym_case_statement] = STATE(16),
    [sym_function_definition] = STATE(16),
    [sym_bracket_command] = STATE(16),
    [sym_command] = STATE(16),
    [sym_pipeline] = STATE(16),
    [sym_list] = STATE(16),
    [sym_subshell] = STATE(16),
    [sym_environment_variable_assignment] = STATE(17),
    [sym_quoted_argument] = STATE(10),
    [sym_file_redirect] = STATE(18),
    [aux_sym_command_repeat1] = STATE(20),
    [sym_file_descriptor] = ACTIONS(77),
    [anon_sym_while] = ACTIONS(81),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_fi] = ACTIONS(949),
    [anon_sym_elif] = ACTIONS(949),
    [anon_sym_else] = ACTIONS(949),
    [anon_sym_case] = ACTIONS(85),
    [anon_sym_function] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_single_quoted_argument] = ACTIONS(99),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_AMP_GT] = ACTIONS(101),
    [anon_sym_AMP_GT_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [sym_leading_word] = ACTIONS(103),
    [sym_comment] = ACTIONS(73),
  },
  [340] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(951),
    [anon_sym_PIPE] = ACTIONS(951),
    [anon_sym_PIPE_AMP] = ACTIONS(951),
    [anon_sym_AMP_AMP] = ACTIONS(951),
    [anon_sym_PIPE_PIPE] = ACTIONS(951),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(951),
    [anon_sym_LF] = ACTIONS(951),
    [anon_sym_AMP] = ACTIONS(951),
  },
  [341] = {
    [anon_sym_esac] = ACTIONS(953),
    [anon_sym_DQUOTE] = ACTIONS(955),
    [sym_single_quoted_argument] = ACTIONS(953),
    [anon_sym_DOLLAR] = ACTIONS(953),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(955),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(955),
    [sym_word] = ACTIONS(957),
    [sym_comment] = ACTIONS(73),
  },
  [342] = {
    [sym__terminated_statement] = STATE(68),
    [sym_while_statement] = STATE(16),
    [sym_if_statement] = STATE(16),
    [sym_case_statement] = STATE(16),
    [sym_function_definition] = STATE(16),
    [sym_bracket_command] = STATE(16),
    [sym_command] = STATE(16),
    [sym_pipeline] = STATE(16),
    [sym_list] = STATE(16),
    [sym_subshell] = STATE(16),
    [sym_environment_variable_assignment] = STATE(17),
    [sym_quoted_argument] = STATE(10),
    [sym_file_redirect] = STATE(18),
    [aux_sym_command_repeat1] = STATE(20),
    [sym_file_descriptor] = ACTIONS(77),
    [anon_sym_while] = ACTIONS(81),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_case] = ACTIONS(85),
    [anon_sym_SEMI_SEMI] = ACTIONS(959),
    [anon_sym_function] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_single_quoted_argument] = ACTIONS(99),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_AMP_GT] = ACTIONS(101),
    [anon_sym_AMP_GT_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [sym_leading_word] = ACTIONS(103),
    [sym_comment] = ACTIONS(73),
  },
  [343] = {
    [anon_sym_esac] = ACTIONS(961),
    [anon_sym_DQUOTE] = ACTIONS(963),
    [sym_single_quoted_argument] = ACTIONS(961),
    [anon_sym_DOLLAR] = ACTIONS(961),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(963),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(963),
    [sym_word] = ACTIONS(965),
    [sym_comment] = ACTIONS(73),
  },
  [344] = {
    [sym__terminated_statement] = STATE(68),
    [sym_while_statement] = STATE(16),
    [sym_if_statement] = STATE(16),
    [sym_case_statement] = STATE(16),
    [sym_function_definition] = STATE(16),
    [sym_bracket_command] = STATE(16),
    [sym_command] = STATE(16),
    [sym_pipeline] = STATE(16),
    [sym_list] = STATE(16),
    [sym_subshell] = STATE(16),
    [sym_environment_variable_assignment] = STATE(17),
    [sym_quoted_argument] = STATE(10),
    [sym_file_redirect] = STATE(18),
    [aux_sym_command_repeat1] = STATE(20),
    [sym_file_descriptor] = ACTIONS(77),
    [anon_sym_while] = ACTIONS(81),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_case] = ACTIONS(85),
    [anon_sym_SEMI_SEMI] = ACTIONS(967),
    [anon_sym_function] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_single_quoted_argument] = ACTIONS(99),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_AMP_GT] = ACTIONS(101),
    [anon_sym_AMP_GT_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [sym_leading_word] = ACTIONS(103),
    [sym_comment] = ACTIONS(73),
  },
  [345] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(969),
    [anon_sym_PIPE] = ACTIONS(969),
    [anon_sym_PIPE_AMP] = ACTIONS(969),
    [anon_sym_AMP_AMP] = ACTIONS(969),
    [anon_sym_PIPE_PIPE] = ACTIONS(969),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(969),
    [anon_sym_LF] = ACTIONS(969),
    [anon_sym_AMP] = ACTIONS(969),
  },
  [346] = {
    [sym_file_descriptor] = ACTIONS(547),
    [anon_sym_RPAREN] = ACTIONS(547),
    [anon_sym_DQUOTE] = ACTIONS(547),
    [sym_single_quoted_argument] = ACTIONS(679),
    [anon_sym_DOLLAR] = ACTIONS(679),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(547),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(547),
    [anon_sym_LT] = ACTIONS(679),
    [anon_sym_GT] = ACTIONS(679),
    [anon_sym_GT_GT] = ACTIONS(547),
    [anon_sym_AMP_GT] = ACTIONS(679),
    [anon_sym_AMP_GT_GT] = ACTIONS(547),
    [anon_sym_LT_AMP] = ACTIONS(547),
    [anon_sym_GT_AMP] = ACTIONS(547),
    [anon_sym_LT_LT] = ACTIONS(679),
    [anon_sym_LT_LT_DASH] = ACTIONS(547),
    [sym_word] = ACTIONS(549),
    [sym_comment] = ACTIONS(73),
  },
  [347] = {
    [sym_file_descriptor] = ACTIONS(681),
    [anon_sym_RPAREN] = ACTIONS(681),
    [anon_sym_DQUOTE] = ACTIONS(681),
    [sym_single_quoted_argument] = ACTIONS(683),
    [anon_sym_DOLLAR] = ACTIONS(683),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(681),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(681),
    [anon_sym_LT] = ACTIONS(683),
    [anon_sym_GT] = ACTIONS(683),
    [anon_sym_GT_GT] = ACTIONS(681),
    [anon_sym_AMP_GT] = ACTIONS(683),
    [anon_sym_AMP_GT_GT] = ACTIONS(681),
    [anon_sym_LT_AMP] = ACTIONS(681),
    [anon_sym_GT_AMP] = ACTIONS(681),
    [anon_sym_LT_LT] = ACTIONS(683),
    [anon_sym_LT_LT_DASH] = ACTIONS(681),
    [sym_word] = ACTIONS(623),
    [sym_comment] = ACTIONS(73),
  },
  [348] = {
    [sym_quoted_argument] = STATE(364),
    [sym_expansion] = STATE(364),
    [sym_operator_expansion] = STATE(364),
    [sym_command_substitution] = STATE(364),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [sym_single_quoted_argument] = ACTIONS(971),
    [anon_sym_DOLLAR] = ACTIONS(129),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(131),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(133),
    [sym_word] = ACTIONS(973),
    [sym_comment] = ACTIONS(73),
  },
  [349] = {
    [sym_file_descriptor] = ACTIONS(689),
    [anon_sym_RPAREN] = ACTIONS(689),
    [anon_sym_DQUOTE] = ACTIONS(689),
    [sym_single_quoted_argument] = ACTIONS(691),
    [anon_sym_DOLLAR] = ACTIONS(691),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(689),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(689),
    [anon_sym_LT] = ACTIONS(691),
    [anon_sym_GT] = ACTIONS(691),
    [anon_sym_GT_GT] = ACTIONS(689),
    [anon_sym_AMP_GT] = ACTIONS(691),
    [anon_sym_AMP_GT_GT] = ACTIONS(689),
    [anon_sym_LT_AMP] = ACTIONS(689),
    [anon_sym_GT_AMP] = ACTIONS(689),
    [anon_sym_LT_LT] = ACTIONS(691),
    [anon_sym_LT_LT_DASH] = ACTIONS(689),
    [sym_word] = ACTIONS(669),
    [sym_comment] = ACTIONS(73),
  },
  [350] = {
    [sym_file_descriptor] = ACTIONS(851),
    [anon_sym_RPAREN] = ACTIONS(851),
    [anon_sym_LT] = ACTIONS(975),
    [anon_sym_GT] = ACTIONS(975),
    [anon_sym_GT_GT] = ACTIONS(851),
    [anon_sym_AMP_GT] = ACTIONS(975),
    [anon_sym_AMP_GT_GT] = ACTIONS(851),
    [anon_sym_LT_AMP] = ACTIONS(851),
    [anon_sym_GT_AMP] = ACTIONS(851),
    [anon_sym_LT_LT] = ACTIONS(975),
    [anon_sym_LT_LT_DASH] = ACTIONS(851),
    [sym_comment] = ACTIONS(73),
  },
  [351] = {
    [sym_file_redirect] = STATE(257),
    [sym_heredoc_redirect] = STATE(257),
    [sym_file_descriptor] = ACTIONS(431),
    [anon_sym_RPAREN] = ACTIONS(977),
    [anon_sym_LT] = ACTIONS(645),
    [anon_sym_GT] = ACTIONS(645),
    [anon_sym_GT_GT] = ACTIONS(647),
    [anon_sym_AMP_GT] = ACTIONS(645),
    [anon_sym_AMP_GT_GT] = ACTIONS(647),
    [anon_sym_LT_AMP] = ACTIONS(647),
    [anon_sym_GT_AMP] = ACTIONS(647),
    [anon_sym_LT_LT] = ACTIONS(649),
    [anon_sym_LT_LT_DASH] = ACTIONS(651),
    [sym_comment] = ACTIONS(73),
  },
  [352] = {
    [sym_file_redirect] = STATE(257),
    [sym_heredoc_redirect] = STATE(257),
    [sym_file_descriptor] = ACTIONS(431),
    [anon_sym_RPAREN] = ACTIONS(979),
    [anon_sym_LT] = ACTIONS(645),
    [anon_sym_GT] = ACTIONS(645),
    [anon_sym_GT_GT] = ACTIONS(647),
    [anon_sym_AMP_GT] = ACTIONS(645),
    [anon_sym_AMP_GT_GT] = ACTIONS(647),
    [anon_sym_LT_AMP] = ACTIONS(647),
    [anon_sym_GT_AMP] = ACTIONS(647),
    [anon_sym_LT_LT] = ACTIONS(649),
    [anon_sym_LT_LT_DASH] = ACTIONS(651),
    [sym_comment] = ACTIONS(73),
  },
  [353] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(981),
    [anon_sym_PIPE] = ACTIONS(981),
    [anon_sym_PIPE_AMP] = ACTIONS(981),
    [anon_sym_AMP_AMP] = ACTIONS(981),
    [anon_sym_PIPE_PIPE] = ACTIONS(981),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(981),
    [anon_sym_LF] = ACTIONS(981),
    [anon_sym_AMP] = ACTIONS(981),
  },
  [354] = {
    [sym_file_descriptor] = ACTIONS(923),
    [anon_sym_SEMI_SEMI] = ACTIONS(895),
    [anon_sym_PIPE] = ACTIONS(895),
    [anon_sym_PIPE_AMP] = ACTIONS(895),
    [anon_sym_AMP_AMP] = ACTIONS(895),
    [anon_sym_PIPE_PIPE] = ACTIONS(895),
    [anon_sym_DQUOTE] = ACTIONS(895),
    [sym_single_quoted_argument] = ACTIONS(895),
    [anon_sym_DOLLAR] = ACTIONS(895),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(895),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(895),
    [anon_sym_LT] = ACTIONS(895),
    [anon_sym_GT] = ACTIONS(895),
    [anon_sym_GT_GT] = ACTIONS(895),
    [anon_sym_AMP_GT] = ACTIONS(895),
    [anon_sym_AMP_GT_GT] = ACTIONS(895),
    [anon_sym_LT_AMP] = ACTIONS(895),
    [anon_sym_GT_AMP] = ACTIONS(895),
    [anon_sym_LT_LT] = ACTIONS(895),
    [anon_sym_LT_LT_DASH] = ACTIONS(895),
    [sym_word] = ACTIONS(895),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(895),
    [anon_sym_LF] = ACTIONS(895),
    [anon_sym_AMP] = ACTIONS(895),
  },
  [355] = {
    [sym_file_descriptor] = ACTIONS(927),
    [anon_sym_SEMI_SEMI] = ACTIONS(897),
    [anon_sym_PIPE] = ACTIONS(897),
    [anon_sym_PIPE_AMP] = ACTIONS(897),
    [anon_sym_AMP_AMP] = ACTIONS(897),
    [anon_sym_PIPE_PIPE] = ACTIONS(897),
    [anon_sym_DQUOTE] = ACTIONS(897),
    [sym_single_quoted_argument] = ACTIONS(897),
    [anon_sym_DOLLAR] = ACTIONS(897),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(897),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(897),
    [anon_sym_LT] = ACTIONS(897),
    [anon_sym_GT] = ACTIONS(897),
    [anon_sym_GT_GT] = ACTIONS(897),
    [anon_sym_AMP_GT] = ACTIONS(897),
    [anon_sym_AMP_GT_GT] = ACTIONS(897),
    [anon_sym_LT_AMP] = ACTIONS(897),
    [anon_sym_GT_AMP] = ACTIONS(897),
    [anon_sym_LT_LT] = ACTIONS(897),
    [anon_sym_LT_LT_DASH] = ACTIONS(897),
    [sym_word] = ACTIONS(897),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(897),
    [anon_sym_LF] = ACTIONS(897),
    [anon_sym_AMP] = ACTIONS(897),
  },
  [356] = {
    [sym_file_descriptor] = ACTIONS(923),
    [anon_sym_SEMI_SEMI] = ACTIONS(895),
    [anon_sym_PIPE] = ACTIONS(895),
    [anon_sym_PIPE_AMP] = ACTIONS(895),
    [anon_sym_AMP_AMP] = ACTIONS(895),
    [anon_sym_PIPE_PIPE] = ACTIONS(895),
    [anon_sym_LT] = ACTIONS(895),
    [anon_sym_GT] = ACTIONS(895),
    [anon_sym_GT_GT] = ACTIONS(895),
    [anon_sym_AMP_GT] = ACTIONS(895),
    [anon_sym_AMP_GT_GT] = ACTIONS(895),
    [anon_sym_LT_AMP] = ACTIONS(895),
    [anon_sym_GT_AMP] = ACTIONS(895),
    [anon_sym_LT_LT] = ACTIONS(895),
    [anon_sym_LT_LT_DASH] = ACTIONS(895),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(895),
    [anon_sym_LF] = ACTIONS(895),
    [anon_sym_AMP] = ACTIONS(895),
  },
  [357] = {
    [sym_file_descriptor] = ACTIONS(927),
    [anon_sym_SEMI_SEMI] = ACTIONS(897),
    [anon_sym_PIPE] = ACTIONS(897),
    [anon_sym_PIPE_AMP] = ACTIONS(897),
    [anon_sym_AMP_AMP] = ACTIONS(897),
    [anon_sym_PIPE_PIPE] = ACTIONS(897),
    [anon_sym_LT] = ACTIONS(897),
    [anon_sym_GT] = ACTIONS(897),
    [anon_sym_GT_GT] = ACTIONS(897),
    [anon_sym_AMP_GT] = ACTIONS(897),
    [anon_sym_AMP_GT_GT] = ACTIONS(897),
    [anon_sym_LT_AMP] = ACTIONS(897),
    [anon_sym_GT_AMP] = ACTIONS(897),
    [anon_sym_LT_LT] = ACTIONS(897),
    [anon_sym_LT_LT_DASH] = ACTIONS(897),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(897),
    [anon_sym_LF] = ACTIONS(897),
    [anon_sym_AMP] = ACTIONS(897),
  },
  [358] = {
    [anon_sym_RBRACE] = ACTIONS(983),
    [sym_comment] = ACTIONS(73),
  },
  [359] = {
    [anon_sym_RBRACE] = ACTIONS(985),
    [sym_comment] = ACTIONS(73),
  },
  [360] = {
    [sym_file_descriptor] = ACTIONS(923),
    [anon_sym_SEMI_SEMI] = ACTIONS(895),
    [anon_sym_COLON] = ACTIONS(895),
    [anon_sym_PIPE] = ACTIONS(895),
    [anon_sym_PIPE_AMP] = ACTIONS(895),
    [anon_sym_AMP_AMP] = ACTIONS(895),
    [anon_sym_PIPE_PIPE] = ACTIONS(895),
    [anon_sym_DQUOTE] = ACTIONS(895),
    [sym_single_quoted_argument] = ACTIONS(895),
    [anon_sym_LT] = ACTIONS(895),
    [anon_sym_GT] = ACTIONS(895),
    [anon_sym_GT_GT] = ACTIONS(895),
    [anon_sym_AMP_GT] = ACTIONS(895),
    [anon_sym_AMP_GT_GT] = ACTIONS(895),
    [anon_sym_LT_AMP] = ACTIONS(895),
    [anon_sym_GT_AMP] = ACTIONS(895),
    [sym_leading_word] = ACTIONS(895),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(895),
    [anon_sym_LF] = ACTIONS(895),
    [anon_sym_AMP] = ACTIONS(895),
  },
  [361] = {
    [sym_file_descriptor] = ACTIONS(927),
    [anon_sym_SEMI_SEMI] = ACTIONS(897),
    [anon_sym_COLON] = ACTIONS(897),
    [anon_sym_PIPE] = ACTIONS(897),
    [anon_sym_PIPE_AMP] = ACTIONS(897),
    [anon_sym_AMP_AMP] = ACTIONS(897),
    [anon_sym_PIPE_PIPE] = ACTIONS(897),
    [anon_sym_DQUOTE] = ACTIONS(897),
    [sym_single_quoted_argument] = ACTIONS(897),
    [anon_sym_LT] = ACTIONS(897),
    [anon_sym_GT] = ACTIONS(897),
    [anon_sym_GT_GT] = ACTIONS(897),
    [anon_sym_AMP_GT] = ACTIONS(897),
    [anon_sym_AMP_GT_GT] = ACTIONS(897),
    [anon_sym_LT_AMP] = ACTIONS(897),
    [anon_sym_GT_AMP] = ACTIONS(897),
    [sym_leading_word] = ACTIONS(897),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(897),
    [anon_sym_LF] = ACTIONS(897),
    [anon_sym_AMP] = ACTIONS(897),
  },
  [362] = {
    [anon_sym_esac] = ACTIONS(987),
    [anon_sym_DQUOTE] = ACTIONS(989),
    [sym_single_quoted_argument] = ACTIONS(987),
    [anon_sym_DOLLAR] = ACTIONS(987),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(989),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(989),
    [sym_word] = ACTIONS(991),
    [sym_comment] = ACTIONS(73),
  },
  [363] = {
    [anon_sym_esac] = ACTIONS(993),
    [anon_sym_DQUOTE] = ACTIONS(995),
    [sym_single_quoted_argument] = ACTIONS(993),
    [anon_sym_DOLLAR] = ACTIONS(993),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(995),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(995),
    [sym_word] = ACTIONS(997),
    [sym_comment] = ACTIONS(73),
  },
  [364] = {
    [anon_sym_RBRACE] = ACTIONS(999),
    [sym_comment] = ACTIONS(73),
  },
  [365] = {
    [anon_sym_RBRACE] = ACTIONS(1001),
    [sym_comment] = ACTIONS(73),
  },
  [366] = {
    [sym__heredoc_middle] = ACTIONS(923),
    [sym__heredoc_end] = ACTIONS(923),
    [anon_sym_DOLLAR] = ACTIONS(925),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(923),
    [sym_comment] = ACTIONS(73),
  },
  [367] = {
    [sym__heredoc_middle] = ACTIONS(927),
    [sym__heredoc_end] = ACTIONS(927),
    [anon_sym_DOLLAR] = ACTIONS(929),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(927),
    [sym_comment] = ACTIONS(73),
  },
  [368] = {
    [sym_file_descriptor] = ACTIONS(923),
    [anon_sym_RPAREN] = ACTIONS(923),
    [anon_sym_DQUOTE] = ACTIONS(923),
    [sym_single_quoted_argument] = ACTIONS(925),
    [anon_sym_DOLLAR] = ACTIONS(925),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(923),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(923),
    [anon_sym_LT] = ACTIONS(925),
    [anon_sym_GT] = ACTIONS(925),
    [anon_sym_GT_GT] = ACTIONS(923),
    [anon_sym_AMP_GT] = ACTIONS(925),
    [anon_sym_AMP_GT_GT] = ACTIONS(923),
    [anon_sym_LT_AMP] = ACTIONS(923),
    [anon_sym_GT_AMP] = ACTIONS(923),
    [anon_sym_LT_LT] = ACTIONS(925),
    [anon_sym_LT_LT_DASH] = ACTIONS(923),
    [sym_word] = ACTIONS(895),
    [sym_comment] = ACTIONS(73),
  },
  [369] = {
    [sym_file_descriptor] = ACTIONS(927),
    [anon_sym_RPAREN] = ACTIONS(927),
    [anon_sym_DQUOTE] = ACTIONS(927),
    [sym_single_quoted_argument] = ACTIONS(929),
    [anon_sym_DOLLAR] = ACTIONS(929),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(927),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(927),
    [anon_sym_LT] = ACTIONS(929),
    [anon_sym_GT] = ACTIONS(929),
    [anon_sym_GT_GT] = ACTIONS(927),
    [anon_sym_AMP_GT] = ACTIONS(929),
    [anon_sym_AMP_GT_GT] = ACTIONS(927),
    [anon_sym_LT_AMP] = ACTIONS(927),
    [anon_sym_GT_AMP] = ACTIONS(927),
    [anon_sym_LT_LT] = ACTIONS(929),
    [anon_sym_LT_LT_DASH] = ACTIONS(927),
    [sym_word] = ACTIONS(897),
    [sym_comment] = ACTIONS(73),
  },
  [370] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1003),
    [anon_sym_PIPE] = ACTIONS(1003),
    [anon_sym_PIPE_AMP] = ACTIONS(1003),
    [anon_sym_AMP_AMP] = ACTIONS(1003),
    [anon_sym_PIPE_PIPE] = ACTIONS(1003),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(1003),
    [anon_sym_LF] = ACTIONS(1003),
    [anon_sym_AMP] = ACTIONS(1003),
  },
  [371] = {
    [sym__terminated_statement] = STATE(15),
    [sym_while_statement] = STATE(16),
    [sym_if_statement] = STATE(16),
    [sym_elif_clause] = STATE(156),
    [sym_else_clause] = STATE(157),
    [sym_case_statement] = STATE(16),
    [sym_function_definition] = STATE(16),
    [sym_bracket_command] = STATE(16),
    [sym_command] = STATE(16),
    [sym_pipeline] = STATE(16),
    [sym_list] = STATE(16),
    [sym_subshell] = STATE(16),
    [sym_environment_variable_assignment] = STATE(17),
    [sym_quoted_argument] = STATE(10),
    [sym_file_redirect] = STATE(18),
    [aux_sym_program_repeat1] = STATE(412),
    [aux_sym_if_statement_repeat1] = STATE(159),
    [aux_sym_command_repeat1] = STATE(20),
    [sym_file_descriptor] = ACTIONS(77),
    [anon_sym_while] = ACTIONS(81),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_fi] = ACTIONS(1006),
    [anon_sym_elif] = ACTIONS(1009),
    [anon_sym_else] = ACTIONS(1012),
    [anon_sym_case] = ACTIONS(85),
    [anon_sym_function] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_single_quoted_argument] = ACTIONS(99),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_AMP_GT] = ACTIONS(101),
    [anon_sym_AMP_GT_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [sym_leading_word] = ACTIONS(103),
    [sym_comment] = ACTIONS(73),
  },
  [372] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1015),
    [anon_sym_PIPE] = ACTIONS(1015),
    [anon_sym_PIPE_AMP] = ACTIONS(1015),
    [anon_sym_AMP_AMP] = ACTIONS(1015),
    [anon_sym_PIPE_PIPE] = ACTIONS(1015),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(1015),
    [anon_sym_LF] = ACTIONS(1015),
    [anon_sym_AMP] = ACTIONS(1015),
  },
  [373] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1020),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(1020),
    [anon_sym_LF] = ACTIONS(1020),
    [anon_sym_AMP] = ACTIONS(1020),
  },
  [374] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1022),
    [anon_sym_PIPE] = ACTIONS(1022),
    [anon_sym_PIPE_AMP] = ACTIONS(1022),
    [anon_sym_AMP_AMP] = ACTIONS(1022),
    [anon_sym_PIPE_PIPE] = ACTIONS(1022),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(1022),
    [anon_sym_LF] = ACTIONS(1022),
    [anon_sym_AMP] = ACTIONS(1022),
  },
  [375] = {
    [sym__terminated_statement] = STATE(15),
    [sym_while_statement] = STATE(16),
    [sym_if_statement] = STATE(16),
    [sym_case_statement] = STATE(16),
    [sym_function_definition] = STATE(16),
    [sym_compound_command] = STATE(395),
    [sym_bracket_command] = STATE(16),
    [sym_command] = STATE(16),
    [sym_pipeline] = STATE(16),
    [sym_list] = STATE(16),
    [sym_subshell] = STATE(16),
    [sym_environment_variable_assignment] = STATE(17),
    [sym_quoted_argument] = STATE(10),
    [sym_file_redirect] = STATE(18),
    [aux_sym_program_repeat1] = STATE(415),
    [aux_sym_command_repeat1] = STATE(20),
    [sym_file_descriptor] = ACTIONS(1029),
    [anon_sym_while] = ACTIONS(81),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_case] = ACTIONS(85),
    [anon_sym_in] = ACTIONS(669),
    [anon_sym_RPAREN] = ACTIONS(669),
    [anon_sym_SEMI_SEMI] = ACTIONS(1032),
    [anon_sym_function] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(1037),
    [anon_sym_LBRACE] = ACTIONS(1039),
    [anon_sym_RBRACE] = ACTIONS(669),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_RBRACK] = ACTIONS(669),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(93),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(669),
    [anon_sym_COLON] = ACTIONS(1041),
    [anon_sym_PIPE] = ACTIONS(1044),
    [anon_sym_PIPE_AMP] = ACTIONS(1044),
    [anon_sym_AMP_AMP] = ACTIONS(1044),
    [anon_sym_PIPE_PIPE] = ACTIONS(1044),
    [anon_sym_DQUOTE] = ACTIONS(1048),
    [sym__quoted_chars] = ACTIONS(669),
    [sym_single_quoted_argument] = ACTIONS(1041),
    [anon_sym_DOLLAR] = ACTIONS(669),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(669),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(669),
    [anon_sym_LT] = ACTIONS(1051),
    [anon_sym_GT] = ACTIONS(1051),
    [anon_sym_GT_GT] = ACTIONS(1051),
    [anon_sym_AMP_GT] = ACTIONS(1051),
    [anon_sym_AMP_GT_GT] = ACTIONS(1051),
    [anon_sym_LT_AMP] = ACTIONS(1051),
    [anon_sym_GT_AMP] = ACTIONS(1051),
    [anon_sym_LT_LT] = ACTIONS(669),
    [anon_sym_LT_LT_DASH] = ACTIONS(669),
    [sym_leading_word] = ACTIONS(1054),
    [sym_word] = ACTIONS(669),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(1044),
    [anon_sym_LF] = ACTIONS(1044),
    [anon_sym_AMP] = ACTIONS(1044),
  },
  [376] = {
    [sym__terminated_statement] = STATE(15),
    [sym_while_statement] = STATE(16),
    [sym_if_statement] = STATE(16),
    [sym_case_statement] = STATE(16),
    [sym_function_definition] = STATE(16),
    [sym_bracket_command] = STATE(16),
    [sym_command] = STATE(16),
    [sym_pipeline] = STATE(16),
    [sym_list] = STATE(16),
    [sym_subshell] = STATE(16),
    [sym_environment_variable_assignment] = STATE(17),
    [sym_quoted_argument] = STATE(10),
    [sym_file_redirect] = STATE(18),
    [aux_sym_program_repeat1] = STATE(34),
    [aux_sym_command_repeat1] = STATE(20),
    [sym_file_descriptor] = ACTIONS(77),
    [anon_sym_while] = ACTIONS(81),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_case] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(1057),
    [anon_sym_function] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_single_quoted_argument] = ACTIONS(99),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_AMP_GT] = ACTIONS(101),
    [anon_sym_AMP_GT_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [sym_leading_word] = ACTIONS(103),
    [sym_comment] = ACTIONS(73),
  },
  [377] = {
    [sym__heredoc_middle] = ACTIONS(1059),
    [sym__heredoc_end] = ACTIONS(1059),
    [sym_file_descriptor] = ACTIONS(1059),
    [anon_sym_in] = ACTIONS(1063),
    [anon_sym_RPAREN] = ACTIONS(1063),
    [anon_sym_SEMI_SEMI] = ACTIONS(1067),
    [anon_sym_RBRACE] = ACTIONS(1063),
    [anon_sym_RBRACK] = ACTIONS(1063),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1063),
    [anon_sym_COLON] = ACTIONS(1063),
    [anon_sym_PIPE] = ACTIONS(1067),
    [anon_sym_PIPE_AMP] = ACTIONS(1067),
    [anon_sym_AMP_AMP] = ACTIONS(1067),
    [anon_sym_PIPE_PIPE] = ACTIONS(1067),
    [anon_sym_DQUOTE] = ACTIONS(1063),
    [sym__quoted_chars] = ACTIONS(1063),
    [sym_single_quoted_argument] = ACTIONS(1063),
    [anon_sym_DOLLAR] = ACTIONS(1063),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1063),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1063),
    [anon_sym_LT] = ACTIONS(1063),
    [anon_sym_GT] = ACTIONS(1063),
    [anon_sym_GT_GT] = ACTIONS(1063),
    [anon_sym_AMP_GT] = ACTIONS(1063),
    [anon_sym_AMP_GT_GT] = ACTIONS(1063),
    [anon_sym_LT_AMP] = ACTIONS(1063),
    [anon_sym_GT_AMP] = ACTIONS(1063),
    [anon_sym_LT_LT] = ACTIONS(1063),
    [anon_sym_LT_LT_DASH] = ACTIONS(1063),
    [sym_leading_word] = ACTIONS(1063),
    [sym_word] = ACTIONS(1063),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(1067),
    [anon_sym_LF] = ACTIONS(1067),
    [anon_sym_AMP] = ACTIONS(1067),
  },
  [378] = {
    [sym_quoted_argument] = STATE(419),
    [sym_expansion] = STATE(419),
    [sym_operator_expansion] = STATE(419),
    [sym_command_substitution] = STATE(419),
    [sym_file_redirect] = STATE(422),
    [sym_heredoc_redirect] = STATE(422),
    [aux_sym_command_repeat2] = STATE(423),
    [sym_file_descriptor] = ACTIONS(1073),
    [anon_sym_RPAREN] = ACTIONS(1075),
    [anon_sym_SEMI_SEMI] = ACTIONS(1075),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(1078),
    [anon_sym_PIPE] = ACTIONS(1075),
    [anon_sym_PIPE_AMP] = ACTIONS(1075),
    [anon_sym_AMP_AMP] = ACTIONS(1075),
    [anon_sym_PIPE_PIPE] = ACTIONS(1075),
    [anon_sym_DQUOTE] = ACTIONS(1080),
    [sym_single_quoted_argument] = ACTIONS(1082),
    [anon_sym_DOLLAR] = ACTIONS(1084),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1086),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1088),
    [anon_sym_LT] = ACTIONS(1090),
    [anon_sym_GT] = ACTIONS(1090),
    [anon_sym_GT_GT] = ACTIONS(1090),
    [anon_sym_AMP_GT] = ACTIONS(1090),
    [anon_sym_AMP_GT_GT] = ACTIONS(1090),
    [anon_sym_LT_AMP] = ACTIONS(1090),
    [anon_sym_GT_AMP] = ACTIONS(1090),
    [anon_sym_LT_LT] = ACTIONS(1092),
    [anon_sym_LT_LT_DASH] = ACTIONS(1092),
    [sym_word] = ACTIONS(1094),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(1075),
    [anon_sym_LF] = ACTIONS(1075),
    [anon_sym_AMP] = ACTIONS(1075),
  },
  [379] = {
    [sym_quoted_argument] = STATE(425),
    [sym_expansion] = STATE(425),
    [sym_operator_expansion] = STATE(425),
    [sym_command_substitution] = STATE(425),
    [sym__empty_value] = ACTIONS(353),
    [anon_sym_DQUOTE] = ACTIONS(1096),
    [sym_single_quoted_argument] = ACTIONS(1098),
    [anon_sym_DOLLAR] = ACTIONS(1100),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1102),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1104),
    [sym_word] = ACTIONS(1106),
    [sym_comment] = ACTIONS(73),
  },
  [380] = {
    [sym_expansion] = STATE(50),
    [sym_operator_expansion] = STATE(50),
    [sym_command_substitution] = STATE(50),
    [aux_sym_quoted_argument_repeat1] = STATE(410),
    [sym_file_descriptor] = ACTIONS(1108),
    [anon_sym_in] = ACTIONS(1111),
    [anon_sym_RPAREN] = ACTIONS(1111),
    [anon_sym_SEMI_SEMI] = ACTIONS(1111),
    [anon_sym_RBRACE] = ACTIONS(1111),
    [anon_sym_RBRACK] = ACTIONS(1111),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1111),
    [anon_sym_COLON] = ACTIONS(1111),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(1111),
    [anon_sym_PIPE] = ACTIONS(1111),
    [anon_sym_PIPE_AMP] = ACTIONS(1111),
    [anon_sym_AMP_AMP] = ACTIONS(1111),
    [anon_sym_PIPE_PIPE] = ACTIONS(1111),
    [anon_sym_DQUOTE] = ACTIONS(1114),
    [sym__quoted_chars] = ACTIONS(1118),
    [sym_single_quoted_argument] = ACTIONS(1111),
    [anon_sym_DOLLAR] = ACTIONS(1120),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1124),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1128),
    [anon_sym_LT] = ACTIONS(1111),
    [anon_sym_GT] = ACTIONS(1111),
    [anon_sym_GT_GT] = ACTIONS(1111),
    [anon_sym_AMP_GT] = ACTIONS(1111),
    [anon_sym_AMP_GT_GT] = ACTIONS(1111),
    [anon_sym_LT_AMP] = ACTIONS(1111),
    [anon_sym_GT_AMP] = ACTIONS(1111),
    [anon_sym_LT_LT] = ACTIONS(1111),
    [anon_sym_LT_LT_DASH] = ACTIONS(1111),
    [sym_leading_word] = ACTIONS(1111),
    [sym_word] = ACTIONS(1111),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(1111),
    [anon_sym_LF] = ACTIONS(1111),
    [anon_sym_AMP] = ACTIONS(1111),
  },
  [381] = {
    [sym__heredoc_middle] = ACTIONS(463),
    [sym__heredoc_end] = ACTIONS(463),
    [sym_file_descriptor] = ACTIONS(463),
    [anon_sym_in] = ACTIONS(421),
    [anon_sym_RPAREN] = ACTIONS(421),
    [anon_sym_SEMI_SEMI] = ACTIONS(421),
    [anon_sym_RBRACE] = ACTIONS(421),
    [anon_sym_RBRACK] = ACTIONS(421),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(421),
    [anon_sym_COLON] = ACTIONS(421),
    [anon_sym_PIPE] = ACTIONS(421),
    [anon_sym_PIPE_AMP] = ACTIONS(421),
    [anon_sym_AMP_AMP] = ACTIONS(421),
    [anon_sym_PIPE_PIPE] = ACTIONS(421),
    [anon_sym_DQUOTE] = ACTIONS(421),
    [sym__quoted_chars] = ACTIONS(421),
    [sym_single_quoted_argument] = ACTIONS(421),
    [anon_sym_DOLLAR] = ACTIONS(1132),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(421),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(421),
    [anon_sym_LT] = ACTIONS(421),
    [anon_sym_GT] = ACTIONS(421),
    [anon_sym_GT_GT] = ACTIONS(421),
    [anon_sym_AMP_GT] = ACTIONS(421),
    [anon_sym_AMP_GT_GT] = ACTIONS(421),
    [anon_sym_LT_AMP] = ACTIONS(421),
    [anon_sym_GT_AMP] = ACTIONS(421),
    [anon_sym_LT_LT] = ACTIONS(421),
    [anon_sym_LT_LT_DASH] = ACTIONS(421),
    [sym_leading_word] = ACTIONS(421),
    [sym_word] = ACTIONS(1135),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(421),
    [anon_sym_LF] = ACTIONS(421),
    [anon_sym_AMP] = ACTIONS(421),
  },
  [382] = {
    [sym_quoted_argument] = STATE(434),
    [sym_expansion] = STATE(434),
    [sym_operator_expansion] = STATE(434),
    [sym_command_substitution] = STATE(434),
    [anon_sym_DQUOTE] = ACTIONS(1138),
    [sym_single_quoted_argument] = ACTIONS(1140),
    [anon_sym_DOLLAR] = ACTIONS(1142),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1144),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1146),
    [sym_word] = ACTIONS(1148),
    [sym_comment] = ACTIONS(73),
  },
  [383] = {
    [sym_heredoc] = STATE(403),
    [sym__simple_heredoc] = ACTIONS(1150),
    [sym__heredoc_beginning] = ACTIONS(1152),
    [sym_comment] = ACTIONS(73),
  },
  [384] = {
    [sym_case_item] = STATE(238),
    [sym_quoted_argument] = STATE(236),
    [sym_expansion] = STATE(236),
    [sym_operator_expansion] = STATE(236),
    [sym_command_substitution] = STATE(236),
    [aux_sym_case_statement_repeat1] = STATE(406),
    [sym_file_descriptor] = ACTIONS(367),
    [ts_builtin_sym_end] = ACTIONS(367),
    [anon_sym_while] = ACTIONS(369),
    [anon_sym_do] = ACTIONS(369),
    [anon_sym_done] = ACTIONS(369),
    [anon_sym_if] = ACTIONS(369),
    [anon_sym_then] = ACTIONS(369),
    [anon_sym_fi] = ACTIONS(369),
    [anon_sym_elif] = ACTIONS(369),
    [anon_sym_else] = ACTIONS(369),
    [anon_sym_case] = ACTIONS(369),
    [anon_sym_in] = ACTIONS(1154),
    [anon_sym_esac] = ACTIONS(1156),
    [anon_sym_RPAREN] = ACTIONS(367),
    [anon_sym_SEMI_SEMI] = ACTIONS(367),
    [anon_sym_function] = ACTIONS(369),
    [anon_sym_LPAREN] = ACTIONS(367),
    [anon_sym_RBRACE] = ACTIONS(367),
    [anon_sym_LBRACK] = ACTIONS(369),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(369),
    [anon_sym_COLON] = ACTIONS(369),
    [anon_sym_DQUOTE] = ACTIONS(1158),
    [sym_single_quoted_argument] = ACTIONS(1161),
    [anon_sym_DOLLAR] = ACTIONS(129),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(131),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(133),
    [anon_sym_LT] = ACTIONS(369),
    [anon_sym_GT] = ACTIONS(369),
    [anon_sym_GT_GT] = ACTIONS(369),
    [anon_sym_AMP_GT] = ACTIONS(369),
    [anon_sym_AMP_GT_GT] = ACTIONS(369),
    [anon_sym_LT_AMP] = ACTIONS(369),
    [anon_sym_GT_AMP] = ACTIONS(369),
    [sym_leading_word] = ACTIONS(371),
    [sym_word] = ACTIONS(619),
    [sym_comment] = ACTIONS(73),
  },
  [385] = {
    [sym_file_descriptor] = ACTIONS(519),
    [anon_sym_RPAREN] = ACTIONS(521),
    [anon_sym_SEMI_SEMI] = ACTIONS(521),
    [anon_sym_PIPE] = ACTIONS(521),
    [anon_sym_PIPE_AMP] = ACTIONS(521),
    [anon_sym_AMP_AMP] = ACTIONS(521),
    [anon_sym_PIPE_PIPE] = ACTIONS(521),
    [anon_sym_LT] = ACTIONS(521),
    [anon_sym_GT] = ACTIONS(521),
    [anon_sym_GT_GT] = ACTIONS(521),
    [anon_sym_AMP_GT] = ACTIONS(521),
    [anon_sym_AMP_GT_GT] = ACTIONS(521),
    [anon_sym_LT_AMP] = ACTIONS(521),
    [anon_sym_GT_AMP] = ACTIONS(521),
    [anon_sym_LT_LT] = ACTIONS(521),
    [anon_sym_LT_LT_DASH] = ACTIONS(521),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(521),
    [anon_sym_LF] = ACTIONS(521),
    [anon_sym_AMP] = ACTIONS(521),
  },
  [386] = {
    [sym_expansion] = STATE(202),
    [sym_operator_expansion] = STATE(202),
    [aux_sym_heredoc_repeat1] = STATE(411),
    [sym__heredoc_middle] = ACTIONS(523),
    [sym__heredoc_end] = ACTIONS(1164),
    [anon_sym_DOLLAR] = ACTIONS(527),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(529),
    [sym_comment] = ACTIONS(73),
  },
  [387] = {
    [sym__heredoc_middle] = ACTIONS(1166),
    [sym__heredoc_end] = ACTIONS(1166),
    [anon_sym_DOLLAR] = ACTIONS(1169),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1166),
    [sym_comment] = ACTIONS(73),
  },
  [388] = {
    [sym_file_descriptor] = ACTIONS(1172),
    [anon_sym_RPAREN] = ACTIONS(1175),
    [anon_sym_SEMI_SEMI] = ACTIONS(1175),
    [anon_sym_PIPE] = ACTIONS(1175),
    [anon_sym_PIPE_AMP] = ACTIONS(1175),
    [anon_sym_AMP_AMP] = ACTIONS(1175),
    [anon_sym_PIPE_PIPE] = ACTIONS(1175),
    [anon_sym_LT] = ACTIONS(1175),
    [anon_sym_GT] = ACTIONS(1175),
    [anon_sym_GT_GT] = ACTIONS(1175),
    [anon_sym_AMP_GT] = ACTIONS(1175),
    [anon_sym_AMP_GT_GT] = ACTIONS(1175),
    [anon_sym_LT_AMP] = ACTIONS(1175),
    [anon_sym_GT_AMP] = ACTIONS(1175),
    [anon_sym_LT_LT] = ACTIONS(1175),
    [anon_sym_LT_LT_DASH] = ACTIONS(1175),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(1175),
    [anon_sym_LF] = ACTIONS(1175),
    [anon_sym_AMP] = ACTIONS(1175),
  },
  [389] = {
    [anon_sym_LT] = ACTIONS(1178),
    [anon_sym_GT] = ACTIONS(1178),
    [anon_sym_GT_GT] = ACTIONS(1180),
    [anon_sym_AMP_GT] = ACTIONS(1178),
    [anon_sym_AMP_GT_GT] = ACTIONS(1180),
    [anon_sym_LT_AMP] = ACTIONS(1180),
    [anon_sym_GT_AMP] = ACTIONS(1180),
    [sym_comment] = ACTIONS(73),
  },
  [390] = {
    [sym_do_group] = STATE(75),
    [sym_file_descriptor] = ACTIONS(1182),
    [ts_builtin_sym_end] = ACTIONS(1182),
    [anon_sym_while] = ACTIONS(1185),
    [anon_sym_do] = ACTIONS(1188),
    [anon_sym_done] = ACTIONS(1185),
    [anon_sym_if] = ACTIONS(1185),
    [anon_sym_then] = ACTIONS(1190),
    [anon_sym_fi] = ACTIONS(1185),
    [anon_sym_elif] = ACTIONS(1185),
    [anon_sym_else] = ACTIONS(1185),
    [anon_sym_case] = ACTIONS(1185),
    [anon_sym_RPAREN] = ACTIONS(1182),
    [anon_sym_SEMI_SEMI] = ACTIONS(1182),
    [anon_sym_function] = ACTIONS(1185),
    [anon_sym_LPAREN] = ACTIONS(1182),
    [anon_sym_RBRACE] = ACTIONS(1182),
    [anon_sym_LBRACK] = ACTIONS(1185),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1185),
    [anon_sym_COLON] = ACTIONS(1182),
    [anon_sym_DQUOTE] = ACTIONS(1182),
    [sym_single_quoted_argument] = ACTIONS(1185),
    [anon_sym_LT] = ACTIONS(1185),
    [anon_sym_GT] = ACTIONS(1185),
    [anon_sym_GT_GT] = ACTIONS(1185),
    [anon_sym_AMP_GT] = ACTIONS(1185),
    [anon_sym_AMP_GT_GT] = ACTIONS(1185),
    [anon_sym_LT_AMP] = ACTIONS(1185),
    [anon_sym_GT_AMP] = ACTIONS(1185),
    [sym_leading_word] = ACTIONS(1192),
    [sym_comment] = ACTIONS(73),
  },
  [391] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1195),
    [anon_sym_PIPE] = ACTIONS(1199),
    [anon_sym_PIPE_AMP] = ACTIONS(1199),
    [anon_sym_AMP_AMP] = ACTIONS(1203),
    [anon_sym_PIPE_PIPE] = ACTIONS(1203),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(1195),
    [anon_sym_LF] = ACTIONS(1195),
    [anon_sym_AMP] = ACTIONS(1195),
  },
  [392] = {
    [anon_sym_fi] = ACTIONS(1207),
    [anon_sym_elif] = ACTIONS(1207),
    [anon_sym_else] = ACTIONS(1207),
    [sym_comment] = ACTIONS(73),
  },
  [393] = {
    [anon_sym_fi] = ACTIONS(1210),
    [sym_comment] = ACTIONS(73),
  },
  [394] = {
    [anon_sym_esac] = ACTIONS(1212),
    [anon_sym_DQUOTE] = ACTIONS(1215),
    [sym_single_quoted_argument] = ACTIONS(1212),
    [anon_sym_DOLLAR] = ACTIONS(1212),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1215),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1215),
    [sym_word] = ACTIONS(1218),
    [sym_comment] = ACTIONS(73),
  },
  [395] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1221),
    [anon_sym_PIPE] = ACTIONS(1221),
    [anon_sym_PIPE_AMP] = ACTIONS(1221),
    [anon_sym_AMP_AMP] = ACTIONS(1221),
    [anon_sym_PIPE_PIPE] = ACTIONS(1221),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(1221),
    [anon_sym_LF] = ACTIONS(1221),
    [anon_sym_AMP] = ACTIONS(1221),
  },
  [396] = {
    [anon_sym_RPAREN] = ACTIONS(1224),
    [anon_sym_SEMI_SEMI] = ACTIONS(1226),
    [anon_sym_PIPE] = ACTIONS(1230),
    [anon_sym_PIPE_AMP] = ACTIONS(1230),
    [anon_sym_AMP_AMP] = ACTIONS(1234),
    [anon_sym_PIPE_PIPE] = ACTIONS(1234),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(1226),
    [anon_sym_LF] = ACTIONS(1226),
    [anon_sym_AMP] = ACTIONS(1226),
  },
  [397] = {
    [sym_file_descriptor] = ACTIONS(1238),
    [anon_sym_SEMI_SEMI] = ACTIONS(1195),
    [anon_sym_COLON] = ACTIONS(1241),
    [anon_sym_PIPE] = ACTIONS(1199),
    [anon_sym_PIPE_AMP] = ACTIONS(1199),
    [anon_sym_AMP_AMP] = ACTIONS(1203),
    [anon_sym_PIPE_PIPE] = ACTIONS(1203),
    [anon_sym_DQUOTE] = ACTIONS(1241),
    [sym_single_quoted_argument] = ACTIONS(1241),
    [anon_sym_LT] = ACTIONS(1241),
    [anon_sym_GT] = ACTIONS(1241),
    [anon_sym_GT_GT] = ACTIONS(1241),
    [anon_sym_AMP_GT] = ACTIONS(1241),
    [anon_sym_AMP_GT_GT] = ACTIONS(1241),
    [anon_sym_LT_AMP] = ACTIONS(1241),
    [anon_sym_GT_AMP] = ACTIONS(1241),
    [sym_leading_word] = ACTIONS(1241),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(1195),
    [anon_sym_LF] = ACTIONS(1195),
    [anon_sym_AMP] = ACTIONS(1195),
  },
  [398] = {
    [sym_file_redirect] = STATE(422),
    [sym_heredoc_redirect] = STATE(422),
    [aux_sym_command_repeat2] = STATE(423),
    [sym_file_descriptor] = ACTIONS(1244),
    [anon_sym_in] = ACTIONS(219),
    [anon_sym_RPAREN] = ACTIONS(1251),
    [anon_sym_SEMI_SEMI] = ACTIONS(1259),
    [anon_sym_RBRACE] = ACTIONS(1268),
    [anon_sym_RBRACK] = ACTIONS(1270),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1270),
    [anon_sym_COLON] = ACTIONS(1273),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(1078),
    [anon_sym_PIPE] = ACTIONS(1277),
    [anon_sym_PIPE_AMP] = ACTIONS(1277),
    [anon_sym_AMP_AMP] = ACTIONS(1277),
    [anon_sym_PIPE_PIPE] = ACTIONS(1277),
    [anon_sym_DQUOTE] = ACTIONS(1285),
    [sym_single_quoted_argument] = ACTIONS(1285),
    [anon_sym_DOLLAR] = ACTIONS(1270),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1270),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1270),
    [anon_sym_LT] = ACTIONS(1291),
    [anon_sym_GT] = ACTIONS(1291),
    [anon_sym_GT_GT] = ACTIONS(1291),
    [anon_sym_AMP_GT] = ACTIONS(1291),
    [anon_sym_AMP_GT_GT] = ACTIONS(1291),
    [anon_sym_LT_AMP] = ACTIONS(1291),
    [anon_sym_GT_AMP] = ACTIONS(1291),
    [anon_sym_LT_LT] = ACTIONS(1298),
    [anon_sym_LT_LT_DASH] = ACTIONS(1298),
    [sym_leading_word] = ACTIONS(1273),
    [sym_word] = ACTIONS(1270),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(1259),
    [anon_sym_LF] = ACTIONS(1259),
    [anon_sym_AMP] = ACTIONS(1259),
  },
  [399] = {
    [sym__heredoc_middle] = ACTIONS(1166),
    [sym__heredoc_end] = ACTIONS(1166),
    [sym_file_descriptor] = ACTIONS(1304),
    [anon_sym_in] = ACTIONS(219),
    [anon_sym_RPAREN] = ACTIONS(1310),
    [anon_sym_SEMI_SEMI] = ACTIONS(1316),
    [anon_sym_RBRACE] = ACTIONS(1268),
    [anon_sym_RBRACK] = ACTIONS(1270),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1270),
    [anon_sym_COLON] = ACTIONS(1273),
    [anon_sym_PIPE] = ACTIONS(1285),
    [anon_sym_PIPE_AMP] = ACTIONS(1285),
    [anon_sym_AMP_AMP] = ACTIONS(1285),
    [anon_sym_PIPE_PIPE] = ACTIONS(1285),
    [anon_sym_DQUOTE] = ACTIONS(1323),
    [sym__quoted_chars] = ACTIONS(1331),
    [sym_single_quoted_argument] = ACTIONS(1285),
    [anon_sym_DOLLAR] = ACTIONS(1334),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1334),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1341),
    [anon_sym_LT] = ACTIONS(1285),
    [anon_sym_GT] = ACTIONS(1285),
    [anon_sym_GT_GT] = ACTIONS(1285),
    [anon_sym_AMP_GT] = ACTIONS(1285),
    [anon_sym_AMP_GT_GT] = ACTIONS(1285),
    [anon_sym_LT_AMP] = ACTIONS(1285),
    [anon_sym_GT_AMP] = ACTIONS(1285),
    [anon_sym_LT_LT] = ACTIONS(1346),
    [anon_sym_LT_LT_DASH] = ACTIONS(1346),
    [sym_leading_word] = ACTIONS(1273),
    [sym_word] = ACTIONS(1270),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(1316),
    [anon_sym_LF] = ACTIONS(1316),
    [anon_sym_AMP] = ACTIONS(1316),
  },
  [400] = {
    [sym_file_descriptor] = ACTIONS(1304),
    [anon_sym_in] = ACTIONS(219),
    [anon_sym_RPAREN] = ACTIONS(1310),
    [anon_sym_SEMI_SEMI] = ACTIONS(1316),
    [anon_sym_RBRACE] = ACTIONS(1268),
    [anon_sym_RBRACK] = ACTIONS(1270),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1270),
    [anon_sym_COLON] = ACTIONS(1273),
    [anon_sym_PIPE] = ACTIONS(1285),
    [anon_sym_PIPE_AMP] = ACTIONS(1285),
    [anon_sym_AMP_AMP] = ACTIONS(1285),
    [anon_sym_PIPE_PIPE] = ACTIONS(1285),
    [anon_sym_DQUOTE] = ACTIONS(1323),
    [sym__quoted_chars] = ACTIONS(1331),
    [sym_single_quoted_argument] = ACTIONS(1285),
    [anon_sym_DOLLAR] = ACTIONS(1341),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1341),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1341),
    [anon_sym_LT] = ACTIONS(1285),
    [anon_sym_GT] = ACTIONS(1285),
    [anon_sym_GT_GT] = ACTIONS(1285),
    [anon_sym_AMP_GT] = ACTIONS(1285),
    [anon_sym_AMP_GT_GT] = ACTIONS(1285),
    [anon_sym_LT_AMP] = ACTIONS(1285),
    [anon_sym_GT_AMP] = ACTIONS(1285),
    [anon_sym_LT_LT] = ACTIONS(1346),
    [anon_sym_LT_LT_DASH] = ACTIONS(1346),
    [sym_leading_word] = ACTIONS(1273),
    [sym_word] = ACTIONS(1270),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(1316),
    [anon_sym_LF] = ACTIONS(1316),
    [anon_sym_AMP] = ACTIONS(1316),
  },
  [401] = {
    [sym_file_descriptor] = ACTIONS(1351),
    [anon_sym_RPAREN] = ACTIONS(1356),
    [anon_sym_SEMI_SEMI] = ACTIONS(1356),
    [anon_sym_COLON] = ACTIONS(1241),
    [anon_sym_PIPE] = ACTIONS(1356),
    [anon_sym_PIPE_AMP] = ACTIONS(1356),
    [anon_sym_AMP_AMP] = ACTIONS(1356),
    [anon_sym_PIPE_PIPE] = ACTIONS(1356),
    [anon_sym_DQUOTE] = ACTIONS(1241),
    [sym_single_quoted_argument] = ACTIONS(1241),
    [anon_sym_LT] = ACTIONS(1359),
    [anon_sym_GT] = ACTIONS(1359),
    [anon_sym_GT_GT] = ACTIONS(1359),
    [anon_sym_AMP_GT] = ACTIONS(1359),
    [anon_sym_AMP_GT_GT] = ACTIONS(1359),
    [anon_sym_LT_AMP] = ACTIONS(1359),
    [anon_sym_GT_AMP] = ACTIONS(1359),
    [anon_sym_LT_LT] = ACTIONS(1356),
    [anon_sym_LT_LT_DASH] = ACTIONS(1356),
    [sym_leading_word] = ACTIONS(1241),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(1356),
    [anon_sym_LF] = ACTIONS(1356),
    [anon_sym_AMP] = ACTIONS(1356),
  },
  [402] = {
    [sym_file_descriptor] = ACTIONS(1364),
    [anon_sym_RPAREN] = ACTIONS(1356),
    [anon_sym_SEMI_SEMI] = ACTIONS(1356),
    [anon_sym_PIPE] = ACTIONS(1356),
    [anon_sym_PIPE_AMP] = ACTIONS(1356),
    [anon_sym_AMP_AMP] = ACTIONS(1356),
    [anon_sym_PIPE_PIPE] = ACTIONS(1356),
    [anon_sym_LT] = ACTIONS(1356),
    [anon_sym_GT] = ACTIONS(1356),
    [anon_sym_GT_GT] = ACTIONS(1356),
    [anon_sym_AMP_GT] = ACTIONS(1356),
    [anon_sym_AMP_GT_GT] = ACTIONS(1356),
    [anon_sym_LT_AMP] = ACTIONS(1356),
    [anon_sym_GT_AMP] = ACTIONS(1356),
    [anon_sym_LT_LT] = ACTIONS(1356),
    [anon_sym_LT_LT_DASH] = ACTIONS(1356),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(1356),
    [anon_sym_LF] = ACTIONS(1356),
    [anon_sym_AMP] = ACTIONS(1356),
  },
  [403] = {
    [sym_file_descriptor] = ACTIONS(531),
    [anon_sym_RPAREN] = ACTIONS(533),
    [anon_sym_SEMI_SEMI] = ACTIONS(533),
    [anon_sym_PIPE] = ACTIONS(533),
    [anon_sym_PIPE_AMP] = ACTIONS(533),
    [anon_sym_AMP_AMP] = ACTIONS(533),
    [anon_sym_PIPE_PIPE] = ACTIONS(533),
    [anon_sym_LT] = ACTIONS(533),
    [anon_sym_GT] = ACTIONS(533),
    [anon_sym_GT_GT] = ACTIONS(533),
    [anon_sym_AMP_GT] = ACTIONS(533),
    [anon_sym_AMP_GT_GT] = ACTIONS(533),
    [anon_sym_LT_AMP] = ACTIONS(533),
    [anon_sym_GT_AMP] = ACTIONS(533),
    [anon_sym_LT_LT] = ACTIONS(533),
    [anon_sym_LT_LT_DASH] = ACTIONS(533),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(533),
    [anon_sym_LF] = ACTIONS(533),
    [anon_sym_AMP] = ACTIONS(533),
  },
  [404] = {
    [sym__terminated_statement] = STATE(68),
    [sym_while_statement] = STATE(16),
    [sym_if_statement] = STATE(16),
    [sym_elif_clause] = STATE(156),
    [sym_else_clause] = STATE(232),
    [sym_case_statement] = STATE(16),
    [sym_function_definition] = STATE(16),
    [sym_bracket_command] = STATE(16),
    [sym_command] = STATE(16),
    [sym_pipeline] = STATE(16),
    [sym_list] = STATE(16),
    [sym_subshell] = STATE(16),
    [sym_environment_variable_assignment] = STATE(17),
    [sym_quoted_argument] = STATE(10),
    [sym_file_redirect] = STATE(18),
    [aux_sym_if_statement_repeat1] = STATE(233),
    [aux_sym_command_repeat1] = STATE(20),
    [sym_file_descriptor] = ACTIONS(77),
    [ts_builtin_sym_end] = ACTIONS(199),
    [anon_sym_while] = ACTIONS(81),
    [anon_sym_done] = ACTIONS(599),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_fi] = ACTIONS(1367),
    [anon_sym_elif] = ACTIONS(1371),
    [anon_sym_else] = ACTIONS(1374),
    [anon_sym_case] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(245),
    [anon_sym_SEMI_SEMI] = ACTIONS(1377),
    [anon_sym_function] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(865),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_single_quoted_argument] = ACTIONS(99),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_AMP_GT] = ACTIONS(101),
    [anon_sym_AMP_GT_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [sym_leading_word] = ACTIONS(103),
    [sym_comment] = ACTIONS(73),
  },
  [405] = {
    [sym_elif_clause] = STATE(234),
    [sym_else_clause] = STATE(448),
    [anon_sym_fi] = ACTIONS(1379),
    [anon_sym_elif] = ACTIONS(611),
    [anon_sym_else] = ACTIONS(613),
    [sym_comment] = ACTIONS(73),
  },
  [406] = {
    [sym_case_item] = STATE(301),
    [sym_quoted_argument] = STATE(236),
    [sym_expansion] = STATE(236),
    [sym_operator_expansion] = STATE(236),
    [sym_command_substitution] = STATE(236),
    [anon_sym_esac] = ACTIONS(1381),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [sym_single_quoted_argument] = ACTIONS(617),
    [anon_sym_DOLLAR] = ACTIONS(129),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(131),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(133),
    [sym_word] = ACTIONS(619),
    [sym_comment] = ACTIONS(73),
  },
  [407] = {
    [sym_quoted_argument] = STATE(451),
    [sym_expansion] = STATE(451),
    [sym_operator_expansion] = STATE(451),
    [sym_command_substitution] = STATE(451),
    [sym_file_redirect] = STATE(422),
    [sym_heredoc_redirect] = STATE(422),
    [aux_sym_command_repeat2] = STATE(456),
    [sym_file_descriptor] = ACTIONS(1073),
    [anon_sym_RPAREN] = ACTIONS(1383),
    [anon_sym_SEMI_SEMI] = ACTIONS(1383),
    [anon_sym_RBRACK] = ACTIONS(1388),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1388),
    [anon_sym_PIPE] = ACTIONS(1383),
    [anon_sym_PIPE_AMP] = ACTIONS(1383),
    [anon_sym_AMP_AMP] = ACTIONS(1383),
    [anon_sym_PIPE_PIPE] = ACTIONS(1383),
    [anon_sym_DQUOTE] = ACTIONS(1390),
    [sym_single_quoted_argument] = ACTIONS(1392),
    [anon_sym_DOLLAR] = ACTIONS(1394),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1396),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1398),
    [anon_sym_LT] = ACTIONS(1090),
    [anon_sym_GT] = ACTIONS(1090),
    [anon_sym_GT_GT] = ACTIONS(1090),
    [anon_sym_AMP_GT] = ACTIONS(1090),
    [anon_sym_AMP_GT_GT] = ACTIONS(1090),
    [anon_sym_LT_AMP] = ACTIONS(1090),
    [anon_sym_GT_AMP] = ACTIONS(1090),
    [anon_sym_LT_LT] = ACTIONS(1092),
    [anon_sym_LT_LT_DASH] = ACTIONS(1092),
    [sym_word] = ACTIONS(1400),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(1383),
    [anon_sym_LF] = ACTIONS(1383),
    [anon_sym_AMP] = ACTIONS(1383),
  },
  [408] = {
    [sym_environment_variable_assignment] = STATE(71),
    [sym_quoted_argument] = STATE(457),
    [sym_file_redirect] = STATE(71),
    [sym_file_descriptor] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(1402),
    [anon_sym_DQUOTE] = ACTIONS(1404),
    [sym_single_quoted_argument] = ACTIONS(1406),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_AMP_GT] = ACTIONS(101),
    [anon_sym_AMP_GT_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [sym_leading_word] = ACTIONS(1408),
    [sym_comment] = ACTIONS(73),
  },
  [409] = {
    [sym_file_redirect] = STATE(460),
    [sym_heredoc_redirect] = STATE(460),
    [sym_file_descriptor] = ACTIONS(1073),
    [anon_sym_RPAREN] = ACTIONS(1410),
    [anon_sym_SEMI_SEMI] = ACTIONS(1410),
    [anon_sym_PIPE] = ACTIONS(1410),
    [anon_sym_PIPE_AMP] = ACTIONS(1410),
    [anon_sym_AMP_AMP] = ACTIONS(1410),
    [anon_sym_PIPE_PIPE] = ACTIONS(1410),
    [anon_sym_LT] = ACTIONS(1090),
    [anon_sym_GT] = ACTIONS(1090),
    [anon_sym_GT_GT] = ACTIONS(1090),
    [anon_sym_AMP_GT] = ACTIONS(1090),
    [anon_sym_AMP_GT_GT] = ACTIONS(1090),
    [anon_sym_LT_AMP] = ACTIONS(1090),
    [anon_sym_GT_AMP] = ACTIONS(1090),
    [anon_sym_LT_LT] = ACTIONS(1092),
    [anon_sym_LT_LT_DASH] = ACTIONS(1092),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(1410),
    [anon_sym_LF] = ACTIONS(1410),
    [anon_sym_AMP] = ACTIONS(1410),
  },
  [410] = {
    [sym_expansion] = STATE(127),
    [sym_operator_expansion] = STATE(127),
    [sym_command_substitution] = STATE(127),
    [anon_sym_DQUOTE] = ACTIONS(1421),
    [sym__quoted_chars] = ACTIONS(327),
    [anon_sym_DOLLAR] = ACTIONS(153),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(155),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(157),
    [sym_comment] = ACTIONS(147),
  },
  [411] = {
    [sym_expansion] = STATE(281),
    [sym_operator_expansion] = STATE(281),
    [sym__heredoc_middle] = ACTIONS(729),
    [sym__heredoc_end] = ACTIONS(1423),
    [anon_sym_DOLLAR] = ACTIONS(527),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(529),
    [sym_comment] = ACTIONS(73),
  },
  [412] = {
    [sym__terminated_statement] = STATE(68),
    [sym_while_statement] = STATE(16),
    [sym_if_statement] = STATE(16),
    [sym_elif_clause] = STATE(156),
    [sym_else_clause] = STATE(232),
    [sym_case_statement] = STATE(16),
    [sym_function_definition] = STATE(16),
    [sym_bracket_command] = STATE(16),
    [sym_command] = STATE(16),
    [sym_pipeline] = STATE(16),
    [sym_list] = STATE(16),
    [sym_subshell] = STATE(16),
    [sym_environment_variable_assignment] = STATE(17),
    [sym_quoted_argument] = STATE(10),
    [sym_file_redirect] = STATE(18),
    [aux_sym_if_statement_repeat1] = STATE(233),
    [aux_sym_command_repeat1] = STATE(20),
    [sym_file_descriptor] = ACTIONS(77),
    [anon_sym_while] = ACTIONS(81),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_fi] = ACTIONS(1425),
    [anon_sym_elif] = ACTIONS(1371),
    [anon_sym_else] = ACTIONS(1374),
    [anon_sym_case] = ACTIONS(85),
    [anon_sym_function] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_single_quoted_argument] = ACTIONS(99),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_AMP_GT] = ACTIONS(101),
    [anon_sym_AMP_GT_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [sym_leading_word] = ACTIONS(103),
    [sym_comment] = ACTIONS(73),
  },
  [413] = {
    [sym_case_item] = STATE(238),
    [sym_quoted_argument] = STATE(236),
    [sym_expansion] = STATE(236),
    [sym_operator_expansion] = STATE(236),
    [sym_command_substitution] = STATE(236),
    [aux_sym_case_statement_repeat1] = STATE(406),
    [anon_sym_esac] = ACTIONS(1156),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [sym_single_quoted_argument] = ACTIONS(617),
    [anon_sym_DOLLAR] = ACTIONS(129),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(131),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(133),
    [sym_word] = ACTIONS(619),
    [sym_comment] = ACTIONS(73),
  },
  [414] = {
    [anon_sym_esac] = ACTIONS(1428),
    [anon_sym_DQUOTE] = ACTIONS(1431),
    [sym_single_quoted_argument] = ACTIONS(1428),
    [anon_sym_DOLLAR] = ACTIONS(1428),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1431),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1431),
    [sym_word] = ACTIONS(1434),
    [sym_comment] = ACTIONS(73),
  },
  [415] = {
    [sym__terminated_statement] = STATE(68),
    [sym_while_statement] = STATE(16),
    [sym_if_statement] = STATE(16),
    [sym_case_statement] = STATE(16),
    [sym_function_definition] = STATE(16),
    [sym_bracket_command] = STATE(16),
    [sym_command] = STATE(16),
    [sym_pipeline] = STATE(16),
    [sym_list] = STATE(16),
    [sym_subshell] = STATE(16),
    [sym_environment_variable_assignment] = STATE(17),
    [sym_quoted_argument] = STATE(10),
    [sym_file_redirect] = STATE(18),
    [aux_sym_command_repeat1] = STATE(20),
    [sym_file_descriptor] = ACTIONS(77),
    [anon_sym_while] = ACTIONS(81),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_case] = ACTIONS(85),
    [anon_sym_SEMI_SEMI] = ACTIONS(1377),
    [anon_sym_function] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_single_quoted_argument] = ACTIONS(99),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_AMP_GT] = ACTIONS(101),
    [anon_sym_AMP_GT_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [sym_leading_word] = ACTIONS(103),
    [sym_comment] = ACTIONS(73),
  },
  [416] = {
    [sym_compound_command] = STATE(395),
    [anon_sym_SEMI_SEMI] = ACTIONS(243),
    [anon_sym_LBRACE] = ACTIONS(1039),
    [anon_sym_PIPE] = ACTIONS(243),
    [anon_sym_PIPE_AMP] = ACTIONS(243),
    [anon_sym_AMP_AMP] = ACTIONS(243),
    [anon_sym_PIPE_PIPE] = ACTIONS(243),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(243),
    [anon_sym_LF] = ACTIONS(243),
    [anon_sym_AMP] = ACTIONS(243),
  },
  [417] = {
    [anon_sym_LT] = ACTIONS(1437),
    [anon_sym_GT] = ACTIONS(1437),
    [anon_sym_GT_GT] = ACTIONS(1439),
    [anon_sym_AMP_GT] = ACTIONS(1437),
    [anon_sym_AMP_GT_GT] = ACTIONS(1439),
    [anon_sym_LT_AMP] = ACTIONS(1439),
    [anon_sym_GT_AMP] = ACTIONS(1439),
    [sym_comment] = ACTIONS(73),
  },
  [418] = {
    [sym_quoted_argument] = STATE(465),
    [sym_expansion] = STATE(465),
    [sym_operator_expansion] = STATE(465),
    [sym_command_substitution] = STATE(465),
    [sym_file_redirect] = STATE(422),
    [sym_heredoc_redirect] = STATE(422),
    [aux_sym_bracket_command_repeat1] = STATE(470),
    [aux_sym_command_repeat2] = STATE(471),
    [sym_file_descriptor] = ACTIONS(1073),
    [anon_sym_RPAREN] = ACTIONS(1441),
    [anon_sym_SEMI_SEMI] = ACTIONS(1441),
    [anon_sym_PIPE] = ACTIONS(1441),
    [anon_sym_PIPE_AMP] = ACTIONS(1441),
    [anon_sym_AMP_AMP] = ACTIONS(1441),
    [anon_sym_PIPE_PIPE] = ACTIONS(1441),
    [anon_sym_DQUOTE] = ACTIONS(1444),
    [sym_single_quoted_argument] = ACTIONS(1446),
    [anon_sym_DOLLAR] = ACTIONS(1448),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1450),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1452),
    [anon_sym_LT] = ACTIONS(1090),
    [anon_sym_GT] = ACTIONS(1090),
    [anon_sym_GT_GT] = ACTIONS(1090),
    [anon_sym_AMP_GT] = ACTIONS(1090),
    [anon_sym_AMP_GT_GT] = ACTIONS(1090),
    [anon_sym_LT_AMP] = ACTIONS(1090),
    [anon_sym_GT_AMP] = ACTIONS(1090),
    [anon_sym_LT_LT] = ACTIONS(1092),
    [anon_sym_LT_LT_DASH] = ACTIONS(1092),
    [sym_word] = ACTIONS(1454),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(1441),
    [anon_sym_LF] = ACTIONS(1441),
    [anon_sym_AMP] = ACTIONS(1441),
  },
  [419] = {
    [anon_sym_RBRACE] = ACTIONS(1456),
    [sym_comment] = ACTIONS(73),
  },
  [420] = {
    [sym_quoted_argument] = STATE(473),
    [sym_expansion] = STATE(473),
    [sym_operator_expansion] = STATE(473),
    [sym_command_substitution] = STATE(473),
    [anon_sym_DQUOTE] = ACTIONS(1458),
    [sym_single_quoted_argument] = ACTIONS(1460),
    [anon_sym_DOLLAR] = ACTIONS(1462),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1464),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1466),
    [sym_word] = ACTIONS(1468),
    [sym_comment] = ACTIONS(73),
  },
  [421] = {
    [anon_sym_RBRACE] = ACTIONS(1470),
    [sym_comment] = ACTIONS(73),
  },
  [422] = {
    [sym_file_descriptor] = ACTIONS(307),
    [anon_sym_RPAREN] = ACTIONS(309),
    [anon_sym_SEMI_SEMI] = ACTIONS(309),
    [anon_sym_PIPE] = ACTIONS(309),
    [anon_sym_PIPE_AMP] = ACTIONS(309),
    [anon_sym_AMP_AMP] = ACTIONS(309),
    [anon_sym_PIPE_PIPE] = ACTIONS(309),
    [anon_sym_LT] = ACTIONS(309),
    [anon_sym_GT] = ACTIONS(309),
    [anon_sym_GT_GT] = ACTIONS(309),
    [anon_sym_AMP_GT] = ACTIONS(309),
    [anon_sym_AMP_GT_GT] = ACTIONS(309),
    [anon_sym_LT_AMP] = ACTIONS(309),
    [anon_sym_GT_AMP] = ACTIONS(309),
    [anon_sym_LT_LT] = ACTIONS(309),
    [anon_sym_LT_LT_DASH] = ACTIONS(309),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(309),
    [anon_sym_LF] = ACTIONS(309),
    [anon_sym_AMP] = ACTIONS(309),
  },
  [423] = {
    [sym_file_redirect] = STATE(460),
    [sym_heredoc_redirect] = STATE(460),
    [sym_file_descriptor] = ACTIONS(1073),
    [anon_sym_RPAREN] = ACTIONS(1441),
    [anon_sym_SEMI_SEMI] = ACTIONS(1441),
    [anon_sym_PIPE] = ACTIONS(1441),
    [anon_sym_PIPE_AMP] = ACTIONS(1441),
    [anon_sym_AMP_AMP] = ACTIONS(1441),
    [anon_sym_PIPE_PIPE] = ACTIONS(1441),
    [anon_sym_LT] = ACTIONS(1090),
    [anon_sym_GT] = ACTIONS(1090),
    [anon_sym_GT_GT] = ACTIONS(1090),
    [anon_sym_AMP_GT] = ACTIONS(1090),
    [anon_sym_AMP_GT_GT] = ACTIONS(1090),
    [anon_sym_LT_AMP] = ACTIONS(1090),
    [anon_sym_GT_AMP] = ACTIONS(1090),
    [anon_sym_LT_LT] = ACTIONS(1092),
    [anon_sym_LT_LT_DASH] = ACTIONS(1092),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(1441),
    [anon_sym_LF] = ACTIONS(1441),
    [anon_sym_AMP] = ACTIONS(1441),
  },
  [424] = {
    [sym_expansion] = STATE(50),
    [sym_operator_expansion] = STATE(50),
    [sym_command_substitution] = STATE(50),
    [aux_sym_quoted_argument_repeat1] = STATE(480),
    [anon_sym_DQUOTE] = ACTIONS(1472),
    [sym__quoted_chars] = ACTIONS(151),
    [anon_sym_DOLLAR] = ACTIONS(153),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(155),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(157),
    [sym_comment] = ACTIONS(147),
  },
  [425] = {
    [sym_file_descriptor] = ACTIONS(569),
    [anon_sym_SEMI_SEMI] = ACTIONS(571),
    [anon_sym_RBRACE] = ACTIONS(1268),
    [anon_sym_COLON] = ACTIONS(571),
    [anon_sym_PIPE] = ACTIONS(571),
    [anon_sym_PIPE_AMP] = ACTIONS(571),
    [anon_sym_AMP_AMP] = ACTIONS(571),
    [anon_sym_PIPE_PIPE] = ACTIONS(571),
    [anon_sym_DQUOTE] = ACTIONS(571),
    [sym_single_quoted_argument] = ACTIONS(571),
    [anon_sym_LT] = ACTIONS(571),
    [anon_sym_GT] = ACTIONS(571),
    [anon_sym_GT_GT] = ACTIONS(571),
    [anon_sym_AMP_GT] = ACTIONS(571),
    [anon_sym_AMP_GT_GT] = ACTIONS(571),
    [anon_sym_LT_AMP] = ACTIONS(571),
    [anon_sym_GT_AMP] = ACTIONS(571),
    [sym_leading_word] = ACTIONS(571),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(571),
    [anon_sym_LF] = ACTIONS(571),
    [anon_sym_AMP] = ACTIONS(571),
  },
  [426] = {
    [anon_sym_DOLLAR] = ACTIONS(1474),
    [sym_word] = ACTIONS(1476),
    [sym_comment] = ACTIONS(73),
  },
  [427] = {
    [sym_leading_word] = ACTIONS(1478),
    [sym_comment] = ACTIONS(73),
  },
  [428] = {
    [sym_command] = STATE(484),
    [sym_environment_variable_assignment] = STATE(18),
    [sym_quoted_argument] = STATE(85),
    [sym_file_redirect] = STATE(18),
    [aux_sym_command_repeat1] = STATE(89),
    [sym_file_descriptor] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(229),
    [anon_sym_DQUOTE] = ACTIONS(231),
    [sym_single_quoted_argument] = ACTIONS(233),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_AMP_GT] = ACTIONS(101),
    [anon_sym_AMP_GT_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [sym_leading_word] = ACTIONS(235),
    [sym_comment] = ACTIONS(73),
  },
  [429] = {
    [sym_file_descriptor] = ACTIONS(581),
    [anon_sym_SEMI_SEMI] = ACTIONS(583),
    [anon_sym_RBRACE] = ACTIONS(1480),
    [anon_sym_COLON] = ACTIONS(583),
    [anon_sym_PIPE] = ACTIONS(583),
    [anon_sym_PIPE_AMP] = ACTIONS(583),
    [anon_sym_AMP_AMP] = ACTIONS(583),
    [anon_sym_PIPE_PIPE] = ACTIONS(583),
    [anon_sym_DQUOTE] = ACTIONS(583),
    [sym_single_quoted_argument] = ACTIONS(583),
    [anon_sym_LT] = ACTIONS(583),
    [anon_sym_GT] = ACTIONS(583),
    [anon_sym_GT_GT] = ACTIONS(583),
    [anon_sym_AMP_GT] = ACTIONS(583),
    [anon_sym_AMP_GT_GT] = ACTIONS(583),
    [anon_sym_LT_AMP] = ACTIONS(583),
    [anon_sym_GT_AMP] = ACTIONS(583),
    [sym_leading_word] = ACTIONS(583),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(583),
    [anon_sym_LF] = ACTIONS(583),
    [anon_sym_AMP] = ACTIONS(583),
  },
  [430] = {
    [sym_file_descriptor] = ACTIONS(311),
    [anon_sym_in] = ACTIONS(313),
    [anon_sym_RPAREN] = ACTIONS(313),
    [anon_sym_SEMI_SEMI] = ACTIONS(313),
    [anon_sym_RBRACE] = ACTIONS(313),
    [anon_sym_RBRACK] = ACTIONS(313),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(313),
    [anon_sym_COLON] = ACTIONS(313),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(313),
    [anon_sym_PIPE] = ACTIONS(313),
    [anon_sym_PIPE_AMP] = ACTIONS(313),
    [anon_sym_AMP_AMP] = ACTIONS(313),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [anon_sym_DQUOTE] = ACTIONS(313),
    [sym_single_quoted_argument] = ACTIONS(313),
    [anon_sym_DOLLAR] = ACTIONS(313),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(313),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(313),
    [anon_sym_LT] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(313),
    [anon_sym_GT_GT] = ACTIONS(313),
    [anon_sym_AMP_GT] = ACTIONS(313),
    [anon_sym_AMP_GT_GT] = ACTIONS(313),
    [anon_sym_LT_AMP] = ACTIONS(313),
    [anon_sym_GT_AMP] = ACTIONS(313),
    [anon_sym_LT_LT] = ACTIONS(313),
    [anon_sym_LT_LT_DASH] = ACTIONS(313),
    [sym_leading_word] = ACTIONS(313),
    [sym_word] = ACTIONS(313),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(313),
    [anon_sym_LF] = ACTIONS(313),
    [anon_sym_AMP] = ACTIONS(313),
  },
  [431] = {
    [sym__heredoc_middle] = ACTIONS(463),
    [sym__heredoc_end] = ACTIONS(463),
    [sym_file_descriptor] = ACTIONS(463),
    [anon_sym_in] = ACTIONS(421),
    [anon_sym_RPAREN] = ACTIONS(421),
    [anon_sym_SEMI_SEMI] = ACTIONS(421),
    [anon_sym_RBRACE] = ACTIONS(421),
    [anon_sym_RBRACK] = ACTIONS(421),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(421),
    [anon_sym_COLON] = ACTIONS(421),
    [anon_sym_PIPE] = ACTIONS(421),
    [anon_sym_PIPE_AMP] = ACTIONS(421),
    [anon_sym_AMP_AMP] = ACTIONS(421),
    [anon_sym_PIPE_PIPE] = ACTIONS(421),
    [anon_sym_DQUOTE] = ACTIONS(421),
    [sym__quoted_chars] = ACTIONS(421),
    [sym_single_quoted_argument] = ACTIONS(421),
    [anon_sym_DOLLAR] = ACTIONS(421),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(421),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(421),
    [anon_sym_LT] = ACTIONS(421),
    [anon_sym_GT] = ACTIONS(421),
    [anon_sym_GT_GT] = ACTIONS(421),
    [anon_sym_AMP_GT] = ACTIONS(421),
    [anon_sym_AMP_GT_GT] = ACTIONS(421),
    [anon_sym_LT_AMP] = ACTIONS(421),
    [anon_sym_GT_AMP] = ACTIONS(421),
    [anon_sym_LT_LT] = ACTIONS(421),
    [anon_sym_LT_LT_DASH] = ACTIONS(421),
    [sym_leading_word] = ACTIONS(421),
    [sym_word] = ACTIONS(421),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(421),
    [anon_sym_LF] = ACTIONS(421),
    [anon_sym_AMP] = ACTIONS(421),
  },
  [432] = {
    [sym__heredoc_middle] = ACTIONS(467),
    [sym__heredoc_end] = ACTIONS(467),
    [sym_file_descriptor] = ACTIONS(467),
    [anon_sym_in] = ACTIONS(423),
    [anon_sym_RPAREN] = ACTIONS(423),
    [anon_sym_SEMI_SEMI] = ACTIONS(423),
    [anon_sym_RBRACE] = ACTIONS(423),
    [anon_sym_RBRACK] = ACTIONS(423),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(423),
    [anon_sym_COLON] = ACTIONS(423),
    [anon_sym_PIPE] = ACTIONS(423),
    [anon_sym_PIPE_AMP] = ACTIONS(423),
    [anon_sym_AMP_AMP] = ACTIONS(423),
    [anon_sym_PIPE_PIPE] = ACTIONS(423),
    [anon_sym_DQUOTE] = ACTIONS(423),
    [sym__quoted_chars] = ACTIONS(423),
    [sym_single_quoted_argument] = ACTIONS(423),
    [anon_sym_DOLLAR] = ACTIONS(423),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(423),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(423),
    [anon_sym_LT] = ACTIONS(423),
    [anon_sym_GT] = ACTIONS(423),
    [anon_sym_GT_GT] = ACTIONS(423),
    [anon_sym_AMP_GT] = ACTIONS(423),
    [anon_sym_AMP_GT_GT] = ACTIONS(423),
    [anon_sym_LT_AMP] = ACTIONS(423),
    [anon_sym_GT_AMP] = ACTIONS(423),
    [anon_sym_LT_LT] = ACTIONS(423),
    [anon_sym_LT_LT_DASH] = ACTIONS(423),
    [sym_leading_word] = ACTIONS(423),
    [sym_word] = ACTIONS(423),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(423),
    [anon_sym_LF] = ACTIONS(423),
    [anon_sym_AMP] = ACTIONS(423),
  },
  [433] = {
    [sym_expansion] = STATE(50),
    [sym_operator_expansion] = STATE(50),
    [sym_command_substitution] = STATE(50),
    [aux_sym_quoted_argument_repeat1] = STATE(486),
    [anon_sym_DQUOTE] = ACTIONS(1482),
    [sym__quoted_chars] = ACTIONS(151),
    [anon_sym_DOLLAR] = ACTIONS(153),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(155),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(157),
    [sym_comment] = ACTIONS(147),
  },
  [434] = {
    [sym_file_descriptor] = ACTIONS(1484),
    [anon_sym_RPAREN] = ACTIONS(1487),
    [anon_sym_SEMI_SEMI] = ACTIONS(1487),
    [anon_sym_COLON] = ACTIONS(1487),
    [anon_sym_PIPE] = ACTIONS(1487),
    [anon_sym_PIPE_AMP] = ACTIONS(1487),
    [anon_sym_AMP_AMP] = ACTIONS(1487),
    [anon_sym_PIPE_PIPE] = ACTIONS(1487),
    [anon_sym_DQUOTE] = ACTIONS(1487),
    [sym_single_quoted_argument] = ACTIONS(1487),
    [anon_sym_LT] = ACTIONS(1487),
    [anon_sym_GT] = ACTIONS(1487),
    [anon_sym_GT_GT] = ACTIONS(1487),
    [anon_sym_AMP_GT] = ACTIONS(1487),
    [anon_sym_AMP_GT_GT] = ACTIONS(1487),
    [anon_sym_LT_AMP] = ACTIONS(1487),
    [anon_sym_GT_AMP] = ACTIONS(1487),
    [anon_sym_LT_LT] = ACTIONS(1487),
    [anon_sym_LT_LT_DASH] = ACTIONS(1487),
    [sym_leading_word] = ACTIONS(1487),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(1487),
    [anon_sym_LF] = ACTIONS(1487),
    [anon_sym_AMP] = ACTIONS(1487),
  },
  [435] = {
    [anon_sym_DOLLAR] = ACTIONS(1490),
    [sym_word] = ACTIONS(1492),
    [sym_comment] = ACTIONS(73),
  },
  [436] = {
    [sym_leading_word] = ACTIONS(1494),
    [sym_comment] = ACTIONS(73),
  },
  [437] = {
    [sym_command] = STATE(490),
    [sym_environment_variable_assignment] = STATE(18),
    [sym_quoted_argument] = STATE(85),
    [sym_file_redirect] = STATE(18),
    [aux_sym_command_repeat1] = STATE(89),
    [sym_file_descriptor] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(229),
    [anon_sym_DQUOTE] = ACTIONS(231),
    [sym_single_quoted_argument] = ACTIONS(233),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_AMP_GT] = ACTIONS(101),
    [anon_sym_AMP_GT_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [sym_leading_word] = ACTIONS(235),
    [sym_comment] = ACTIONS(73),
  },
  [438] = {
    [sym_file_descriptor] = ACTIONS(1496),
    [anon_sym_RPAREN] = ACTIONS(1499),
    [anon_sym_SEMI_SEMI] = ACTIONS(1499),
    [anon_sym_COLON] = ACTIONS(1499),
    [anon_sym_PIPE] = ACTIONS(1499),
    [anon_sym_PIPE_AMP] = ACTIONS(1499),
    [anon_sym_AMP_AMP] = ACTIONS(1499),
    [anon_sym_PIPE_PIPE] = ACTIONS(1499),
    [anon_sym_DQUOTE] = ACTIONS(1499),
    [sym_single_quoted_argument] = ACTIONS(1499),
    [anon_sym_LT] = ACTIONS(1499),
    [anon_sym_GT] = ACTIONS(1499),
    [anon_sym_GT_GT] = ACTIONS(1499),
    [anon_sym_AMP_GT] = ACTIONS(1499),
    [anon_sym_AMP_GT_GT] = ACTIONS(1499),
    [anon_sym_LT_AMP] = ACTIONS(1499),
    [anon_sym_GT_AMP] = ACTIONS(1499),
    [anon_sym_LT_LT] = ACTIONS(1499),
    [anon_sym_LT_LT_DASH] = ACTIONS(1499),
    [sym_leading_word] = ACTIONS(1499),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(1499),
    [anon_sym_LF] = ACTIONS(1499),
    [anon_sym_AMP] = ACTIONS(1499),
  },
  [439] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1502),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(1502),
    [anon_sym_LF] = ACTIONS(1502),
    [anon_sym_AMP] = ACTIONS(1502),
  },
  [440] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1504),
    [anon_sym_PIPE] = ACTIONS(1504),
    [anon_sym_PIPE_AMP] = ACTIONS(1504),
    [anon_sym_AMP_AMP] = ACTIONS(1504),
    [anon_sym_PIPE_PIPE] = ACTIONS(1504),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(1504),
    [anon_sym_LF] = ACTIONS(1504),
    [anon_sym_AMP] = ACTIONS(1504),
  },
  [441] = {
    [sym_file_descriptor] = ACTIONS(719),
    [anon_sym_RPAREN] = ACTIONS(721),
    [anon_sym_SEMI_SEMI] = ACTIONS(721),
    [anon_sym_PIPE] = ACTIONS(721),
    [anon_sym_PIPE_AMP] = ACTIONS(721),
    [anon_sym_AMP_AMP] = ACTIONS(721),
    [anon_sym_PIPE_PIPE] = ACTIONS(721),
    [anon_sym_LT] = ACTIONS(721),
    [anon_sym_GT] = ACTIONS(721),
    [anon_sym_GT_GT] = ACTIONS(721),
    [anon_sym_AMP_GT] = ACTIONS(721),
    [anon_sym_AMP_GT_GT] = ACTIONS(721),
    [anon_sym_LT_AMP] = ACTIONS(721),
    [anon_sym_GT_AMP] = ACTIONS(721),
    [anon_sym_LT_LT] = ACTIONS(721),
    [anon_sym_LT_LT_DASH] = ACTIONS(721),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(721),
    [anon_sym_LF] = ACTIONS(721),
    [anon_sym_AMP] = ACTIONS(721),
  },
  [442] = {
    [sym_quoted_argument] = STATE(492),
    [sym_expansion] = STATE(492),
    [sym_operator_expansion] = STATE(492),
    [sym_command_substitution] = STATE(492),
    [anon_sym_DQUOTE] = ACTIONS(1138),
    [sym_single_quoted_argument] = ACTIONS(1509),
    [anon_sym_DOLLAR] = ACTIONS(1142),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1144),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1146),
    [sym_word] = ACTIONS(1511),
    [sym_comment] = ACTIONS(73),
  },
  [443] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1513),
    [anon_sym_PIPE] = ACTIONS(1513),
    [anon_sym_PIPE_AMP] = ACTIONS(1513),
    [anon_sym_AMP_AMP] = ACTIONS(1513),
    [anon_sym_PIPE_PIPE] = ACTIONS(1513),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(1513),
    [anon_sym_LF] = ACTIONS(1513),
    [anon_sym_AMP] = ACTIONS(1513),
  },
  [444] = {
    [sym_file_descriptor] = ACTIONS(689),
    [anon_sym_in] = ACTIONS(669),
    [anon_sym_RPAREN] = ACTIONS(669),
    [anon_sym_SEMI_SEMI] = ACTIONS(669),
    [anon_sym_RBRACE] = ACTIONS(669),
    [anon_sym_RBRACK] = ACTIONS(669),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(669),
    [anon_sym_COLON] = ACTIONS(669),
    [anon_sym_PIPE] = ACTIONS(669),
    [anon_sym_PIPE_AMP] = ACTIONS(669),
    [anon_sym_AMP_AMP] = ACTIONS(669),
    [anon_sym_PIPE_PIPE] = ACTIONS(669),
    [anon_sym_DQUOTE] = ACTIONS(669),
    [sym__quoted_chars] = ACTIONS(669),
    [sym_single_quoted_argument] = ACTIONS(669),
    [anon_sym_DOLLAR] = ACTIONS(669),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(669),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(669),
    [anon_sym_LT] = ACTIONS(669),
    [anon_sym_GT] = ACTIONS(669),
    [anon_sym_GT_GT] = ACTIONS(669),
    [anon_sym_AMP_GT] = ACTIONS(669),
    [anon_sym_AMP_GT_GT] = ACTIONS(669),
    [anon_sym_LT_AMP] = ACTIONS(669),
    [anon_sym_GT_AMP] = ACTIONS(669),
    [anon_sym_LT_LT] = ACTIONS(669),
    [anon_sym_LT_LT_DASH] = ACTIONS(669),
    [sym_leading_word] = ACTIONS(669),
    [sym_word] = ACTIONS(669),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(669),
    [anon_sym_LF] = ACTIONS(669),
    [anon_sym_AMP] = ACTIONS(669),
  },
  [445] = {
    [sym__heredoc_middle] = ACTIONS(923),
    [sym__heredoc_end] = ACTIONS(923),
    [sym_file_descriptor] = ACTIONS(923),
    [anon_sym_in] = ACTIONS(895),
    [anon_sym_RPAREN] = ACTIONS(895),
    [anon_sym_SEMI_SEMI] = ACTIONS(895),
    [anon_sym_RBRACE] = ACTIONS(895),
    [anon_sym_RBRACK] = ACTIONS(895),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(895),
    [anon_sym_COLON] = ACTIONS(895),
    [anon_sym_PIPE] = ACTIONS(895),
    [anon_sym_PIPE_AMP] = ACTIONS(895),
    [anon_sym_AMP_AMP] = ACTIONS(895),
    [anon_sym_PIPE_PIPE] = ACTIONS(895),
    [anon_sym_DQUOTE] = ACTIONS(895),
    [sym__quoted_chars] = ACTIONS(895),
    [sym_single_quoted_argument] = ACTIONS(895),
    [anon_sym_DOLLAR] = ACTIONS(895),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(895),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(895),
    [anon_sym_LT] = ACTIONS(895),
    [anon_sym_GT] = ACTIONS(895),
    [anon_sym_GT_GT] = ACTIONS(895),
    [anon_sym_AMP_GT] = ACTIONS(895),
    [anon_sym_AMP_GT_GT] = ACTIONS(895),
    [anon_sym_LT_AMP] = ACTIONS(895),
    [anon_sym_GT_AMP] = ACTIONS(895),
    [anon_sym_LT_LT] = ACTIONS(895),
    [anon_sym_LT_LT_DASH] = ACTIONS(895),
    [sym_leading_word] = ACTIONS(895),
    [sym_word] = ACTIONS(895),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(895),
    [anon_sym_LF] = ACTIONS(895),
    [anon_sym_AMP] = ACTIONS(895),
  },
  [446] = {
    [anon_sym_esac] = ACTIONS(1517),
    [anon_sym_DQUOTE] = ACTIONS(1520),
    [sym_single_quoted_argument] = ACTIONS(1517),
    [anon_sym_DOLLAR] = ACTIONS(1517),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1520),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1520),
    [sym_word] = ACTIONS(1523),
    [sym_comment] = ACTIONS(73),
  },
  [447] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1526),
    [anon_sym_PIPE] = ACTIONS(1526),
    [anon_sym_PIPE_AMP] = ACTIONS(1526),
    [anon_sym_AMP_AMP] = ACTIONS(1526),
    [anon_sym_PIPE_PIPE] = ACTIONS(1526),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(1526),
    [anon_sym_LF] = ACTIONS(1526),
    [anon_sym_AMP] = ACTIONS(1526),
  },
  [448] = {
    [anon_sym_fi] = ACTIONS(1529),
    [sym_comment] = ACTIONS(73),
  },
  [449] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1531),
    [anon_sym_PIPE] = ACTIONS(1531),
    [anon_sym_PIPE_AMP] = ACTIONS(1531),
    [anon_sym_AMP_AMP] = ACTIONS(1531),
    [anon_sym_PIPE_PIPE] = ACTIONS(1531),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(1531),
    [anon_sym_LF] = ACTIONS(1531),
    [anon_sym_AMP] = ACTIONS(1531),
  },
  [450] = {
    [sym_expansion] = STATE(50),
    [sym_operator_expansion] = STATE(50),
    [sym_command_substitution] = STATE(50),
    [aux_sym_quoted_argument_repeat1] = STATE(496),
    [anon_sym_DQUOTE] = ACTIONS(1536),
    [sym__quoted_chars] = ACTIONS(151),
    [anon_sym_DOLLAR] = ACTIONS(153),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(155),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(157),
    [sym_comment] = ACTIONS(147),
  },
  [451] = {
    [sym_file_descriptor] = ACTIONS(483),
    [anon_sym_RPAREN] = ACTIONS(485),
    [anon_sym_SEMI_SEMI] = ACTIONS(485),
    [anon_sym_RBRACK] = ACTIONS(485),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(485),
    [anon_sym_PIPE] = ACTIONS(485),
    [anon_sym_PIPE_AMP] = ACTIONS(485),
    [anon_sym_AMP_AMP] = ACTIONS(485),
    [anon_sym_PIPE_PIPE] = ACTIONS(485),
    [anon_sym_DQUOTE] = ACTIONS(485),
    [sym_single_quoted_argument] = ACTIONS(485),
    [anon_sym_DOLLAR] = ACTIONS(485),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(485),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(485),
    [anon_sym_LT] = ACTIONS(485),
    [anon_sym_GT] = ACTIONS(485),
    [anon_sym_GT_GT] = ACTIONS(485),
    [anon_sym_AMP_GT] = ACTIONS(485),
    [anon_sym_AMP_GT_GT] = ACTIONS(485),
    [anon_sym_LT_AMP] = ACTIONS(485),
    [anon_sym_GT_AMP] = ACTIONS(485),
    [anon_sym_LT_LT] = ACTIONS(485),
    [anon_sym_LT_LT_DASH] = ACTIONS(485),
    [sym_word] = ACTIONS(485),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(485),
    [anon_sym_LF] = ACTIONS(485),
    [anon_sym_AMP] = ACTIONS(485),
  },
  [452] = {
    [anon_sym_DOLLAR] = ACTIONS(1538),
    [sym_word] = ACTIONS(1540),
    [sym_comment] = ACTIONS(73),
  },
  [453] = {
    [sym_leading_word] = ACTIONS(1542),
    [sym_comment] = ACTIONS(73),
  },
  [454] = {
    [sym_command] = STATE(500),
    [sym_environment_variable_assignment] = STATE(18),
    [sym_quoted_argument] = STATE(85),
    [sym_file_redirect] = STATE(18),
    [aux_sym_command_repeat1] = STATE(89),
    [sym_file_descriptor] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(229),
    [anon_sym_DQUOTE] = ACTIONS(231),
    [sym_single_quoted_argument] = ACTIONS(233),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_AMP_GT] = ACTIONS(101),
    [anon_sym_AMP_GT_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [sym_leading_word] = ACTIONS(235),
    [sym_comment] = ACTIONS(73),
  },
  [455] = {
    [sym_file_descriptor] = ACTIONS(489),
    [anon_sym_RPAREN] = ACTIONS(491),
    [anon_sym_SEMI_SEMI] = ACTIONS(491),
    [anon_sym_RBRACK] = ACTIONS(491),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(491),
    [anon_sym_PIPE] = ACTIONS(491),
    [anon_sym_PIPE_AMP] = ACTIONS(491),
    [anon_sym_AMP_AMP] = ACTIONS(491),
    [anon_sym_PIPE_PIPE] = ACTIONS(491),
    [anon_sym_DQUOTE] = ACTIONS(491),
    [sym_single_quoted_argument] = ACTIONS(491),
    [anon_sym_DOLLAR] = ACTIONS(491),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(491),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(491),
    [anon_sym_LT] = ACTIONS(491),
    [anon_sym_GT] = ACTIONS(491),
    [anon_sym_GT_GT] = ACTIONS(491),
    [anon_sym_AMP_GT] = ACTIONS(491),
    [anon_sym_AMP_GT_GT] = ACTIONS(491),
    [anon_sym_LT_AMP] = ACTIONS(491),
    [anon_sym_GT_AMP] = ACTIONS(491),
    [anon_sym_LT_LT] = ACTIONS(491),
    [anon_sym_LT_LT_DASH] = ACTIONS(491),
    [sym_word] = ACTIONS(491),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(491),
    [anon_sym_LF] = ACTIONS(491),
    [anon_sym_AMP] = ACTIONS(491),
  },
  [456] = {
    [sym_file_redirect] = STATE(460),
    [sym_heredoc_redirect] = STATE(460),
    [sym_file_descriptor] = ACTIONS(1073),
    [anon_sym_RPAREN] = ACTIONS(1544),
    [anon_sym_SEMI_SEMI] = ACTIONS(1544),
    [anon_sym_PIPE] = ACTIONS(1544),
    [anon_sym_PIPE_AMP] = ACTIONS(1544),
    [anon_sym_AMP_AMP] = ACTIONS(1544),
    [anon_sym_PIPE_PIPE] = ACTIONS(1544),
    [anon_sym_LT] = ACTIONS(1090),
    [anon_sym_GT] = ACTIONS(1090),
    [anon_sym_GT_GT] = ACTIONS(1090),
    [anon_sym_AMP_GT] = ACTIONS(1090),
    [anon_sym_AMP_GT_GT] = ACTIONS(1090),
    [anon_sym_LT_AMP] = ACTIONS(1090),
    [anon_sym_GT_AMP] = ACTIONS(1090),
    [anon_sym_LT_LT] = ACTIONS(1092),
    [anon_sym_LT_LT_DASH] = ACTIONS(1092),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(1544),
    [anon_sym_LF] = ACTIONS(1544),
    [anon_sym_AMP] = ACTIONS(1544),
  },
  [457] = {
    [sym_file_redirect] = STATE(422),
    [sym_heredoc_redirect] = STATE(422),
    [aux_sym_command_repeat2] = STATE(502),
    [sym_file_descriptor] = ACTIONS(1073),
    [anon_sym_RPAREN] = ACTIONS(277),
    [anon_sym_SEMI_SEMI] = ACTIONS(277),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(1549),
    [anon_sym_PIPE] = ACTIONS(277),
    [anon_sym_PIPE_AMP] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_LT] = ACTIONS(1090),
    [anon_sym_GT] = ACTIONS(1090),
    [anon_sym_GT_GT] = ACTIONS(1090),
    [anon_sym_AMP_GT] = ACTIONS(1090),
    [anon_sym_AMP_GT_GT] = ACTIONS(1090),
    [anon_sym_LT_AMP] = ACTIONS(1090),
    [anon_sym_GT_AMP] = ACTIONS(1090),
    [anon_sym_LT_LT] = ACTIONS(1092),
    [anon_sym_LT_LT_DASH] = ACTIONS(1092),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(277),
    [anon_sym_LF] = ACTIONS(277),
    [anon_sym_AMP] = ACTIONS(277),
  },
  [458] = {
    [sym_expansion] = STATE(50),
    [sym_operator_expansion] = STATE(50),
    [sym_command_substitution] = STATE(50),
    [aux_sym_quoted_argument_repeat1] = STATE(504),
    [anon_sym_DQUOTE] = ACTIONS(1551),
    [sym__quoted_chars] = ACTIONS(151),
    [anon_sym_DOLLAR] = ACTIONS(153),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(155),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(157),
    [sym_comment] = ACTIONS(147),
  },
  [459] = {
    [sym_file_redirect] = STATE(422),
    [sym_heredoc_redirect] = STATE(422),
    [aux_sym_command_repeat2] = STATE(506),
    [sym_file_descriptor] = ACTIONS(1073),
    [anon_sym_RPAREN] = ACTIONS(381),
    [anon_sym_SEMI_SEMI] = ACTIONS(381),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(1553),
    [anon_sym_PIPE] = ACTIONS(381),
    [anon_sym_PIPE_AMP] = ACTIONS(381),
    [anon_sym_AMP_AMP] = ACTIONS(381),
    [anon_sym_PIPE_PIPE] = ACTIONS(381),
    [anon_sym_EQ] = ACTIONS(385),
    [anon_sym_LT] = ACTIONS(1090),
    [anon_sym_GT] = ACTIONS(1090),
    [anon_sym_GT_GT] = ACTIONS(1090),
    [anon_sym_AMP_GT] = ACTIONS(1090),
    [anon_sym_AMP_GT_GT] = ACTIONS(1090),
    [anon_sym_LT_AMP] = ACTIONS(1090),
    [anon_sym_GT_AMP] = ACTIONS(1090),
    [anon_sym_LT_LT] = ACTIONS(1092),
    [anon_sym_LT_LT_DASH] = ACTIONS(1092),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(381),
    [anon_sym_LF] = ACTIONS(381),
    [anon_sym_AMP] = ACTIONS(381),
  },
  [460] = {
    [sym_file_descriptor] = ACTIONS(535),
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
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(537),
    [anon_sym_LF] = ACTIONS(537),
    [anon_sym_AMP] = ACTIONS(537),
  },
  [461] = {
    [sym_file_descriptor] = ACTIONS(547),
    [anon_sym_in] = ACTIONS(549),
    [anon_sym_RPAREN] = ACTIONS(549),
    [anon_sym_SEMI_SEMI] = ACTIONS(549),
    [anon_sym_RBRACE] = ACTIONS(549),
    [anon_sym_RBRACK] = ACTIONS(549),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(549),
    [anon_sym_COLON] = ACTIONS(549),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(549),
    [anon_sym_PIPE] = ACTIONS(549),
    [anon_sym_PIPE_AMP] = ACTIONS(549),
    [anon_sym_AMP_AMP] = ACTIONS(549),
    [anon_sym_PIPE_PIPE] = ACTIONS(549),
    [anon_sym_DQUOTE] = ACTIONS(549),
    [sym_single_quoted_argument] = ACTIONS(549),
    [anon_sym_DOLLAR] = ACTIONS(549),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(549),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(549),
    [anon_sym_LT] = ACTIONS(549),
    [anon_sym_GT] = ACTIONS(549),
    [anon_sym_GT_GT] = ACTIONS(549),
    [anon_sym_AMP_GT] = ACTIONS(549),
    [anon_sym_AMP_GT_GT] = ACTIONS(549),
    [anon_sym_LT_AMP] = ACTIONS(549),
    [anon_sym_GT_AMP] = ACTIONS(549),
    [anon_sym_LT_LT] = ACTIONS(549),
    [anon_sym_LT_LT_DASH] = ACTIONS(549),
    [sym_leading_word] = ACTIONS(549),
    [sym_word] = ACTIONS(549),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(549),
    [anon_sym_LF] = ACTIONS(549),
    [anon_sym_AMP] = ACTIONS(549),
  },
  [462] = {
    [sym_file_descriptor] = ACTIONS(851),
    [anon_sym_RPAREN] = ACTIONS(853),
    [anon_sym_SEMI_SEMI] = ACTIONS(853),
    [anon_sym_PIPE] = ACTIONS(853),
    [anon_sym_PIPE_AMP] = ACTIONS(853),
    [anon_sym_AMP_AMP] = ACTIONS(853),
    [anon_sym_PIPE_PIPE] = ACTIONS(853),
    [anon_sym_LT] = ACTIONS(853),
    [anon_sym_GT] = ACTIONS(853),
    [anon_sym_GT_GT] = ACTIONS(853),
    [anon_sym_AMP_GT] = ACTIONS(853),
    [anon_sym_AMP_GT_GT] = ACTIONS(853),
    [anon_sym_LT_AMP] = ACTIONS(853),
    [anon_sym_GT_AMP] = ACTIONS(853),
    [anon_sym_LT_LT] = ACTIONS(853),
    [anon_sym_LT_LT_DASH] = ACTIONS(853),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(853),
    [anon_sym_LF] = ACTIONS(853),
    [anon_sym_AMP] = ACTIONS(853),
  },
  [463] = {
    [sym_quoted_argument] = STATE(507),
    [sym_expansion] = STATE(507),
    [sym_operator_expansion] = STATE(507),
    [sym_command_substitution] = STATE(507),
    [anon_sym_DQUOTE] = ACTIONS(1458),
    [sym_single_quoted_argument] = ACTIONS(1555),
    [anon_sym_DOLLAR] = ACTIONS(1462),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1464),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1466),
    [sym_word] = ACTIONS(1557),
    [sym_comment] = ACTIONS(73),
  },
  [464] = {
    [sym_expansion] = STATE(50),
    [sym_operator_expansion] = STATE(50),
    [sym_command_substitution] = STATE(50),
    [aux_sym_quoted_argument_repeat1] = STATE(510),
    [anon_sym_DQUOTE] = ACTIONS(1559),
    [sym__quoted_chars] = ACTIONS(151),
    [anon_sym_DOLLAR] = ACTIONS(153),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(155),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(157),
    [sym_comment] = ACTIONS(147),
  },
  [465] = {
    [sym_file_descriptor] = ACTIONS(251),
    [anon_sym_RPAREN] = ACTIONS(253),
    [anon_sym_SEMI_SEMI] = ACTIONS(253),
    [anon_sym_PIPE] = ACTIONS(253),
    [anon_sym_PIPE_AMP] = ACTIONS(253),
    [anon_sym_AMP_AMP] = ACTIONS(253),
    [anon_sym_PIPE_PIPE] = ACTIONS(253),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [sym_single_quoted_argument] = ACTIONS(253),
    [anon_sym_DOLLAR] = ACTIONS(253),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(253),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(253),
    [anon_sym_LT] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_GT_GT] = ACTIONS(253),
    [anon_sym_AMP_GT] = ACTIONS(253),
    [anon_sym_AMP_GT_GT] = ACTIONS(253),
    [anon_sym_LT_AMP] = ACTIONS(253),
    [anon_sym_GT_AMP] = ACTIONS(253),
    [anon_sym_LT_LT] = ACTIONS(253),
    [anon_sym_LT_LT_DASH] = ACTIONS(253),
    [sym_word] = ACTIONS(253),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(253),
    [anon_sym_LF] = ACTIONS(253),
    [anon_sym_AMP] = ACTIONS(253),
  },
  [466] = {
    [anon_sym_DOLLAR] = ACTIONS(1561),
    [sym_word] = ACTIONS(1563),
    [sym_comment] = ACTIONS(73),
  },
  [467] = {
    [sym_leading_word] = ACTIONS(1565),
    [sym_comment] = ACTIONS(73),
  },
  [468] = {
    [sym_command] = STATE(514),
    [sym_environment_variable_assignment] = STATE(18),
    [sym_quoted_argument] = STATE(85),
    [sym_file_redirect] = STATE(18),
    [aux_sym_command_repeat1] = STATE(89),
    [sym_file_descriptor] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(229),
    [anon_sym_DQUOTE] = ACTIONS(231),
    [sym_single_quoted_argument] = ACTIONS(233),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_AMP_GT] = ACTIONS(101),
    [anon_sym_AMP_GT_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [sym_leading_word] = ACTIONS(235),
    [sym_comment] = ACTIONS(73),
  },
  [469] = {
    [sym_file_descriptor] = ACTIONS(263),
    [anon_sym_RPAREN] = ACTIONS(265),
    [anon_sym_SEMI_SEMI] = ACTIONS(265),
    [anon_sym_PIPE] = ACTIONS(265),
    [anon_sym_PIPE_AMP] = ACTIONS(265),
    [anon_sym_AMP_AMP] = ACTIONS(265),
    [anon_sym_PIPE_PIPE] = ACTIONS(265),
    [anon_sym_DQUOTE] = ACTIONS(265),
    [sym_single_quoted_argument] = ACTIONS(265),
    [anon_sym_DOLLAR] = ACTIONS(265),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(265),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(265),
    [anon_sym_LT] = ACTIONS(265),
    [anon_sym_GT] = ACTIONS(265),
    [anon_sym_GT_GT] = ACTIONS(265),
    [anon_sym_AMP_GT] = ACTIONS(265),
    [anon_sym_AMP_GT_GT] = ACTIONS(265),
    [anon_sym_LT_AMP] = ACTIONS(265),
    [anon_sym_GT_AMP] = ACTIONS(265),
    [anon_sym_LT_LT] = ACTIONS(265),
    [anon_sym_LT_LT_DASH] = ACTIONS(265),
    [sym_word] = ACTIONS(265),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(265),
    [anon_sym_LF] = ACTIONS(265),
    [anon_sym_AMP] = ACTIONS(265),
  },
  [470] = {
    [sym_quoted_argument] = STATE(515),
    [sym_expansion] = STATE(515),
    [sym_operator_expansion] = STATE(515),
    [sym_command_substitution] = STATE(515),
    [sym_file_redirect] = STATE(422),
    [sym_heredoc_redirect] = STATE(422),
    [aux_sym_command_repeat2] = STATE(517),
    [sym_file_descriptor] = ACTIONS(1073),
    [anon_sym_RPAREN] = ACTIONS(1567),
    [anon_sym_SEMI_SEMI] = ACTIONS(1567),
    [anon_sym_PIPE] = ACTIONS(1567),
    [anon_sym_PIPE_AMP] = ACTIONS(1567),
    [anon_sym_AMP_AMP] = ACTIONS(1567),
    [anon_sym_PIPE_PIPE] = ACTIONS(1567),
    [anon_sym_DQUOTE] = ACTIONS(1444),
    [sym_single_quoted_argument] = ACTIONS(1570),
    [anon_sym_DOLLAR] = ACTIONS(1448),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1450),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1452),
    [anon_sym_LT] = ACTIONS(1090),
    [anon_sym_GT] = ACTIONS(1090),
    [anon_sym_GT_GT] = ACTIONS(1090),
    [anon_sym_AMP_GT] = ACTIONS(1090),
    [anon_sym_AMP_GT_GT] = ACTIONS(1090),
    [anon_sym_LT_AMP] = ACTIONS(1090),
    [anon_sym_GT_AMP] = ACTIONS(1090),
    [anon_sym_LT_LT] = ACTIONS(1092),
    [anon_sym_LT_LT_DASH] = ACTIONS(1092),
    [sym_word] = ACTIONS(1572),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(1567),
    [anon_sym_LF] = ACTIONS(1567),
    [anon_sym_AMP] = ACTIONS(1567),
  },
  [471] = {
    [sym_file_redirect] = STATE(460),
    [sym_heredoc_redirect] = STATE(460),
    [sym_file_descriptor] = ACTIONS(1073),
    [anon_sym_RPAREN] = ACTIONS(1567),
    [anon_sym_SEMI_SEMI] = ACTIONS(1567),
    [anon_sym_PIPE] = ACTIONS(1567),
    [anon_sym_PIPE_AMP] = ACTIONS(1567),
    [anon_sym_AMP_AMP] = ACTIONS(1567),
    [anon_sym_PIPE_PIPE] = ACTIONS(1567),
    [anon_sym_LT] = ACTIONS(1090),
    [anon_sym_GT] = ACTIONS(1090),
    [anon_sym_GT_GT] = ACTIONS(1090),
    [anon_sym_AMP_GT] = ACTIONS(1090),
    [anon_sym_AMP_GT_GT] = ACTIONS(1090),
    [anon_sym_LT_AMP] = ACTIONS(1090),
    [anon_sym_GT_AMP] = ACTIONS(1090),
    [anon_sym_LT_LT] = ACTIONS(1092),
    [anon_sym_LT_LT_DASH] = ACTIONS(1092),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(1567),
    [anon_sym_LF] = ACTIONS(1567),
    [anon_sym_AMP] = ACTIONS(1567),
  },
  [472] = {
    [sym_expansion] = STATE(50),
    [sym_operator_expansion] = STATE(50),
    [sym_command_substitution] = STATE(50),
    [aux_sym_quoted_argument_repeat1] = STATE(519),
    [anon_sym_DQUOTE] = ACTIONS(1574),
    [sym__quoted_chars] = ACTIONS(151),
    [anon_sym_DOLLAR] = ACTIONS(153),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(155),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(157),
    [sym_comment] = ACTIONS(147),
  },
  [473] = {
    [sym_file_descriptor] = ACTIONS(331),
    [anon_sym_RPAREN] = ACTIONS(335),
    [anon_sym_SEMI_SEMI] = ACTIONS(335),
    [anon_sym_PIPE] = ACTIONS(335),
    [anon_sym_PIPE_AMP] = ACTIONS(335),
    [anon_sym_AMP_AMP] = ACTIONS(335),
    [anon_sym_PIPE_PIPE] = ACTIONS(335),
    [anon_sym_LT] = ACTIONS(335),
    [anon_sym_GT] = ACTIONS(335),
    [anon_sym_GT_GT] = ACTIONS(335),
    [anon_sym_AMP_GT] = ACTIONS(335),
    [anon_sym_AMP_GT_GT] = ACTIONS(335),
    [anon_sym_LT_AMP] = ACTIONS(335),
    [anon_sym_GT_AMP] = ACTIONS(335),
    [anon_sym_LT_LT] = ACTIONS(335),
    [anon_sym_LT_LT_DASH] = ACTIONS(335),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(335),
    [anon_sym_LF] = ACTIONS(335),
    [anon_sym_AMP] = ACTIONS(335),
  },
  [474] = {
    [anon_sym_DOLLAR] = ACTIONS(1576),
    [sym_word] = ACTIONS(1578),
    [sym_comment] = ACTIONS(73),
  },
  [475] = {
    [sym_leading_word] = ACTIONS(1580),
    [sym_comment] = ACTIONS(73),
  },
  [476] = {
    [sym_command] = STATE(523),
    [sym_environment_variable_assignment] = STATE(18),
    [sym_quoted_argument] = STATE(85),
    [sym_file_redirect] = STATE(18),
    [aux_sym_command_repeat1] = STATE(89),
    [sym_file_descriptor] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(229),
    [anon_sym_DQUOTE] = ACTIONS(231),
    [sym_single_quoted_argument] = ACTIONS(233),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_AMP_GT] = ACTIONS(101),
    [anon_sym_AMP_GT_GT] = ACTIONS(101),
    [anon_sym_LT_AMP] = ACTIONS(101),
    [anon_sym_GT_AMP] = ACTIONS(101),
    [sym_leading_word] = ACTIONS(235),
    [sym_comment] = ACTIONS(73),
  },
  [477] = {
    [sym_file_descriptor] = ACTIONS(343),
    [anon_sym_RPAREN] = ACTIONS(347),
    [anon_sym_SEMI_SEMI] = ACTIONS(347),
    [anon_sym_PIPE] = ACTIONS(347),
    [anon_sym_PIPE_AMP] = ACTIONS(347),
    [anon_sym_AMP_AMP] = ACTIONS(347),
    [anon_sym_PIPE_PIPE] = ACTIONS(347),
    [anon_sym_LT] = ACTIONS(347),
    [anon_sym_GT] = ACTIONS(347),
    [anon_sym_GT_GT] = ACTIONS(347),
    [anon_sym_AMP_GT] = ACTIONS(347),
    [anon_sym_AMP_GT_GT] = ACTIONS(347),
    [anon_sym_LT_AMP] = ACTIONS(347),
    [anon_sym_GT_AMP] = ACTIONS(347),
    [anon_sym_LT_LT] = ACTIONS(347),
    [anon_sym_LT_LT_DASH] = ACTIONS(347),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(347),
    [anon_sym_LF] = ACTIONS(347),
    [anon_sym_AMP] = ACTIONS(347),
  },
  [478] = {
    [sym__heredoc_middle] = ACTIONS(927),
    [sym__heredoc_end] = ACTIONS(927),
    [sym_file_descriptor] = ACTIONS(927),
    [anon_sym_in] = ACTIONS(897),
    [anon_sym_RPAREN] = ACTIONS(897),
    [anon_sym_SEMI_SEMI] = ACTIONS(897),
    [anon_sym_RBRACE] = ACTIONS(897),
    [anon_sym_RBRACK] = ACTIONS(897),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(897),
    [anon_sym_COLON] = ACTIONS(897),
    [anon_sym_PIPE] = ACTIONS(897),
    [anon_sym_PIPE_AMP] = ACTIONS(897),
    [anon_sym_AMP_AMP] = ACTIONS(897),
    [anon_sym_PIPE_PIPE] = ACTIONS(897),
    [anon_sym_DQUOTE] = ACTIONS(897),
    [sym__quoted_chars] = ACTIONS(897),
    [sym_single_quoted_argument] = ACTIONS(897),
    [anon_sym_DOLLAR] = ACTIONS(897),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(897),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(897),
    [anon_sym_LT] = ACTIONS(897),
    [anon_sym_GT] = ACTIONS(897),
    [anon_sym_GT_GT] = ACTIONS(897),
    [anon_sym_AMP_GT] = ACTIONS(897),
    [anon_sym_AMP_GT_GT] = ACTIONS(897),
    [anon_sym_LT_AMP] = ACTIONS(897),
    [anon_sym_GT_AMP] = ACTIONS(897),
    [anon_sym_LT_LT] = ACTIONS(897),
    [anon_sym_LT_LT_DASH] = ACTIONS(897),
    [sym_leading_word] = ACTIONS(897),
    [sym_word] = ACTIONS(897),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(897),
    [anon_sym_LF] = ACTIONS(897),
    [anon_sym_AMP] = ACTIONS(897),
  },
  [479] = {
    [sym_file_descriptor] = ACTIONS(311),
    [anon_sym_SEMI_SEMI] = ACTIONS(313),
    [anon_sym_RBRACE] = ACTIONS(313),
    [anon_sym_COLON] = ACTIONS(313),
    [anon_sym_PIPE] = ACTIONS(313),
    [anon_sym_PIPE_AMP] = ACTIONS(313),
    [anon_sym_AMP_AMP] = ACTIONS(313),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [anon_sym_DQUOTE] = ACTIONS(313),
    [sym_single_quoted_argument] = ACTIONS(313),
    [anon_sym_LT] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(313),
    [anon_sym_GT_GT] = ACTIONS(313),
    [anon_sym_AMP_GT] = ACTIONS(313),
    [anon_sym_AMP_GT_GT] = ACTIONS(313),
    [anon_sym_LT_AMP] = ACTIONS(313),
    [anon_sym_GT_AMP] = ACTIONS(313),
    [sym_leading_word] = ACTIONS(313),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(313),
    [anon_sym_LF] = ACTIONS(313),
    [anon_sym_AMP] = ACTIONS(313),
  },
  [480] = {
    [sym_expansion] = STATE(127),
    [sym_operator_expansion] = STATE(127),
    [sym_command_substitution] = STATE(127),
    [anon_sym_DQUOTE] = ACTIONS(1582),
    [sym__quoted_chars] = ACTIONS(327),
    [anon_sym_DOLLAR] = ACTIONS(153),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(155),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(157),
    [sym_comment] = ACTIONS(147),
  },
  [481] = {
    [sym_file_descriptor] = ACTIONS(463),
    [anon_sym_SEMI_SEMI] = ACTIONS(421),
    [anon_sym_RBRACE] = ACTIONS(421),
    [anon_sym_COLON] = ACTIONS(421),
    [anon_sym_PIPE] = ACTIONS(421),
    [anon_sym_PIPE_AMP] = ACTIONS(421),
    [anon_sym_AMP_AMP] = ACTIONS(421),
    [anon_sym_PIPE_PIPE] = ACTIONS(421),
    [anon_sym_DQUOTE] = ACTIONS(421),
    [sym_single_quoted_argument] = ACTIONS(421),
    [anon_sym_LT] = ACTIONS(421),
    [anon_sym_GT] = ACTIONS(421),
    [anon_sym_GT_GT] = ACTIONS(421),
    [anon_sym_AMP_GT] = ACTIONS(421),
    [anon_sym_AMP_GT_GT] = ACTIONS(421),
    [anon_sym_LT_AMP] = ACTIONS(421),
    [anon_sym_GT_AMP] = ACTIONS(421),
    [sym_leading_word] = ACTIONS(421),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(421),
    [anon_sym_LF] = ACTIONS(421),
    [anon_sym_AMP] = ACTIONS(421),
  },
  [482] = {
    [sym_file_descriptor] = ACTIONS(467),
    [anon_sym_SEMI_SEMI] = ACTIONS(423),
    [anon_sym_RBRACE] = ACTIONS(423),
    [anon_sym_COLON] = ACTIONS(423),
    [anon_sym_PIPE] = ACTIONS(423),
    [anon_sym_PIPE_AMP] = ACTIONS(423),
    [anon_sym_AMP_AMP] = ACTIONS(423),
    [anon_sym_PIPE_PIPE] = ACTIONS(423),
    [anon_sym_DQUOTE] = ACTIONS(423),
    [sym_single_quoted_argument] = ACTIONS(423),
    [anon_sym_LT] = ACTIONS(423),
    [anon_sym_GT] = ACTIONS(423),
    [anon_sym_GT_GT] = ACTIONS(423),
    [anon_sym_AMP_GT] = ACTIONS(423),
    [anon_sym_AMP_GT_GT] = ACTIONS(423),
    [anon_sym_LT_AMP] = ACTIONS(423),
    [anon_sym_GT_AMP] = ACTIONS(423),
    [sym_leading_word] = ACTIONS(423),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(423),
    [anon_sym_LF] = ACTIONS(423),
    [anon_sym_AMP] = ACTIONS(423),
  },
  [483] = {
    [anon_sym_RBRACE] = ACTIONS(1584),
    [anon_sym_COLON] = ACTIONS(1586),
    [anon_sym_EQ] = ACTIONS(1588),
    [anon_sym_COLON_QMARK] = ACTIONS(1588),
    [anon_sym_COLON_DASH] = ACTIONS(1588),
    [sym_comment] = ACTIONS(73),
  },
  [484] = {
    [anon_sym_RPAREN] = ACTIONS(1590),
    [sym_comment] = ACTIONS(73),
  },
  [485] = {
    [sym_file_descriptor] = ACTIONS(311),
    [anon_sym_RPAREN] = ACTIONS(313),
    [anon_sym_SEMI_SEMI] = ACTIONS(313),
    [anon_sym_COLON] = ACTIONS(313),
    [anon_sym_PIPE] = ACTIONS(313),
    [anon_sym_PIPE_AMP] = ACTIONS(313),
    [anon_sym_AMP_AMP] = ACTIONS(313),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [anon_sym_DQUOTE] = ACTIONS(313),
    [sym_single_quoted_argument] = ACTIONS(313),
    [anon_sym_LT] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(313),
    [anon_sym_GT_GT] = ACTIONS(313),
    [anon_sym_AMP_GT] = ACTIONS(313),
    [anon_sym_AMP_GT_GT] = ACTIONS(313),
    [anon_sym_LT_AMP] = ACTIONS(313),
    [anon_sym_GT_AMP] = ACTIONS(313),
    [anon_sym_LT_LT] = ACTIONS(313),
    [anon_sym_LT_LT_DASH] = ACTIONS(313),
    [sym_leading_word] = ACTIONS(313),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(313),
    [anon_sym_LF] = ACTIONS(313),
    [anon_sym_AMP] = ACTIONS(313),
  },
  [486] = {
    [sym_expansion] = STATE(127),
    [sym_operator_expansion] = STATE(127),
    [sym_command_substitution] = STATE(127),
    [anon_sym_DQUOTE] = ACTIONS(1592),
    [sym__quoted_chars] = ACTIONS(327),
    [anon_sym_DOLLAR] = ACTIONS(153),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(155),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(157),
    [sym_comment] = ACTIONS(147),
  },
  [487] = {
    [sym_file_descriptor] = ACTIONS(463),
    [anon_sym_RPAREN] = ACTIONS(421),
    [anon_sym_SEMI_SEMI] = ACTIONS(421),
    [anon_sym_COLON] = ACTIONS(421),
    [anon_sym_PIPE] = ACTIONS(421),
    [anon_sym_PIPE_AMP] = ACTIONS(421),
    [anon_sym_AMP_AMP] = ACTIONS(421),
    [anon_sym_PIPE_PIPE] = ACTIONS(421),
    [anon_sym_DQUOTE] = ACTIONS(421),
    [sym_single_quoted_argument] = ACTIONS(421),
    [anon_sym_LT] = ACTIONS(421),
    [anon_sym_GT] = ACTIONS(421),
    [anon_sym_GT_GT] = ACTIONS(421),
    [anon_sym_AMP_GT] = ACTIONS(421),
    [anon_sym_AMP_GT_GT] = ACTIONS(421),
    [anon_sym_LT_AMP] = ACTIONS(421),
    [anon_sym_GT_AMP] = ACTIONS(421),
    [anon_sym_LT_LT] = ACTIONS(421),
    [anon_sym_LT_LT_DASH] = ACTIONS(421),
    [sym_leading_word] = ACTIONS(421),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(421),
    [anon_sym_LF] = ACTIONS(421),
    [anon_sym_AMP] = ACTIONS(421),
  },
  [488] = {
    [sym_file_descriptor] = ACTIONS(467),
    [anon_sym_RPAREN] = ACTIONS(423),
    [anon_sym_SEMI_SEMI] = ACTIONS(423),
    [anon_sym_COLON] = ACTIONS(423),
    [anon_sym_PIPE] = ACTIONS(423),
    [anon_sym_PIPE_AMP] = ACTIONS(423),
    [anon_sym_AMP_AMP] = ACTIONS(423),
    [anon_sym_PIPE_PIPE] = ACTIONS(423),
    [anon_sym_DQUOTE] = ACTIONS(423),
    [sym_single_quoted_argument] = ACTIONS(423),
    [anon_sym_LT] = ACTIONS(423),
    [anon_sym_GT] = ACTIONS(423),
    [anon_sym_GT_GT] = ACTIONS(423),
    [anon_sym_AMP_GT] = ACTIONS(423),
    [anon_sym_AMP_GT_GT] = ACTIONS(423),
    [anon_sym_LT_AMP] = ACTIONS(423),
    [anon_sym_GT_AMP] = ACTIONS(423),
    [anon_sym_LT_LT] = ACTIONS(423),
    [anon_sym_LT_LT_DASH] = ACTIONS(423),
    [sym_leading_word] = ACTIONS(423),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(423),
    [anon_sym_LF] = ACTIONS(423),
    [anon_sym_AMP] = ACTIONS(423),
  },
  [489] = {
    [anon_sym_RBRACE] = ACTIONS(1594),
    [anon_sym_COLON] = ACTIONS(1596),
    [anon_sym_EQ] = ACTIONS(1598),
    [anon_sym_COLON_QMARK] = ACTIONS(1598),
    [anon_sym_COLON_DASH] = ACTIONS(1598),
    [sym_comment] = ACTIONS(73),
  },
  [490] = {
    [anon_sym_RPAREN] = ACTIONS(1600),
    [sym_comment] = ACTIONS(73),
  },
  [491] = {
    [sym_case_item] = STATE(238),
    [sym_quoted_argument] = STATE(236),
    [sym_expansion] = STATE(236),
    [sym_operator_expansion] = STATE(236),
    [sym_command_substitution] = STATE(236),
    [aux_sym_case_statement_repeat1] = STATE(533),
    [anon_sym_esac] = ACTIONS(1602),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [sym_single_quoted_argument] = ACTIONS(617),
    [anon_sym_DOLLAR] = ACTIONS(129),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(131),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(133),
    [sym_word] = ACTIONS(619),
    [sym_comment] = ACTIONS(73),
  },
  [492] = {
    [sym_file_descriptor] = ACTIONS(393),
    [anon_sym_RPAREN] = ACTIONS(397),
    [anon_sym_SEMI_SEMI] = ACTIONS(397),
    [anon_sym_COLON] = ACTIONS(397),
    [anon_sym_PIPE] = ACTIONS(397),
    [anon_sym_PIPE_AMP] = ACTIONS(397),
    [anon_sym_AMP_AMP] = ACTIONS(397),
    [anon_sym_PIPE_PIPE] = ACTIONS(397),
    [anon_sym_DQUOTE] = ACTIONS(397),
    [sym_single_quoted_argument] = ACTIONS(397),
    [anon_sym_LT] = ACTIONS(397),
    [anon_sym_GT] = ACTIONS(397),
    [anon_sym_GT_GT] = ACTIONS(397),
    [anon_sym_AMP_GT] = ACTIONS(397),
    [anon_sym_AMP_GT_GT] = ACTIONS(397),
    [anon_sym_LT_AMP] = ACTIONS(397),
    [anon_sym_GT_AMP] = ACTIONS(397),
    [anon_sym_LT_LT] = ACTIONS(397),
    [anon_sym_LT_LT_DASH] = ACTIONS(397),
    [sym_leading_word] = ACTIONS(397),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(397),
    [anon_sym_LF] = ACTIONS(397),
    [anon_sym_AMP] = ACTIONS(397),
  },
  [493] = {
    [sym_file_descriptor] = ACTIONS(399),
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
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(403),
    [anon_sym_LF] = ACTIONS(403),
    [anon_sym_AMP] = ACTIONS(403),
  },
  [494] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1604),
    [anon_sym_PIPE] = ACTIONS(1604),
    [anon_sym_PIPE_AMP] = ACTIONS(1604),
    [anon_sym_AMP_AMP] = ACTIONS(1604),
    [anon_sym_PIPE_PIPE] = ACTIONS(1604),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(1604),
    [anon_sym_LF] = ACTIONS(1604),
    [anon_sym_AMP] = ACTIONS(1604),
  },
  [495] = {
    [sym_file_descriptor] = ACTIONS(311),
    [anon_sym_RPAREN] = ACTIONS(313),
    [anon_sym_SEMI_SEMI] = ACTIONS(313),
    [anon_sym_RBRACK] = ACTIONS(313),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(313),
    [anon_sym_PIPE] = ACTIONS(313),
    [anon_sym_PIPE_AMP] = ACTIONS(313),
    [anon_sym_AMP_AMP] = ACTIONS(313),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [anon_sym_DQUOTE] = ACTIONS(313),
    [sym_single_quoted_argument] = ACTIONS(313),
    [anon_sym_DOLLAR] = ACTIONS(313),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(313),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(313),
    [anon_sym_LT] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(313),
    [anon_sym_GT_GT] = ACTIONS(313),
    [anon_sym_AMP_GT] = ACTIONS(313),
    [anon_sym_AMP_GT_GT] = ACTIONS(313),
    [anon_sym_LT_AMP] = ACTIONS(313),
    [anon_sym_GT_AMP] = ACTIONS(313),
    [anon_sym_LT_LT] = ACTIONS(313),
    [anon_sym_LT_LT_DASH] = ACTIONS(313),
    [sym_word] = ACTIONS(313),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(313),
    [anon_sym_LF] = ACTIONS(313),
    [anon_sym_AMP] = ACTIONS(313),
  },
  [496] = {
    [sym_expansion] = STATE(127),
    [sym_operator_expansion] = STATE(127),
    [sym_command_substitution] = STATE(127),
    [anon_sym_DQUOTE] = ACTIONS(1607),
    [sym__quoted_chars] = ACTIONS(327),
    [anon_sym_DOLLAR] = ACTIONS(153),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(155),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(157),
    [sym_comment] = ACTIONS(147),
  },
  [497] = {
    [sym_file_descriptor] = ACTIONS(463),
    [anon_sym_RPAREN] = ACTIONS(421),
    [anon_sym_SEMI_SEMI] = ACTIONS(421),
    [anon_sym_RBRACK] = ACTIONS(421),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(421),
    [anon_sym_PIPE] = ACTIONS(421),
    [anon_sym_PIPE_AMP] = ACTIONS(421),
    [anon_sym_AMP_AMP] = ACTIONS(421),
    [anon_sym_PIPE_PIPE] = ACTIONS(421),
    [anon_sym_DQUOTE] = ACTIONS(421),
    [sym_single_quoted_argument] = ACTIONS(421),
    [anon_sym_DOLLAR] = ACTIONS(421),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(421),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(421),
    [anon_sym_LT] = ACTIONS(421),
    [anon_sym_GT] = ACTIONS(421),
    [anon_sym_GT_GT] = ACTIONS(421),
    [anon_sym_AMP_GT] = ACTIONS(421),
    [anon_sym_AMP_GT_GT] = ACTIONS(421),
    [anon_sym_LT_AMP] = ACTIONS(421),
    [anon_sym_GT_AMP] = ACTIONS(421),
    [anon_sym_LT_LT] = ACTIONS(421),
    [anon_sym_LT_LT_DASH] = ACTIONS(421),
    [sym_word] = ACTIONS(421),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(421),
    [anon_sym_LF] = ACTIONS(421),
    [anon_sym_AMP] = ACTIONS(421),
  },
  [498] = {
    [sym_file_descriptor] = ACTIONS(467),
    [anon_sym_RPAREN] = ACTIONS(423),
    [anon_sym_SEMI_SEMI] = ACTIONS(423),
    [anon_sym_RBRACK] = ACTIONS(423),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(423),
    [anon_sym_PIPE] = ACTIONS(423),
    [anon_sym_PIPE_AMP] = ACTIONS(423),
    [anon_sym_AMP_AMP] = ACTIONS(423),
    [anon_sym_PIPE_PIPE] = ACTIONS(423),
    [anon_sym_DQUOTE] = ACTIONS(423),
    [sym_single_quoted_argument] = ACTIONS(423),
    [anon_sym_DOLLAR] = ACTIONS(423),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(423),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(423),
    [anon_sym_LT] = ACTIONS(423),
    [anon_sym_GT] = ACTIONS(423),
    [anon_sym_GT_GT] = ACTIONS(423),
    [anon_sym_AMP_GT] = ACTIONS(423),
    [anon_sym_AMP_GT_GT] = ACTIONS(423),
    [anon_sym_LT_AMP] = ACTIONS(423),
    [anon_sym_GT_AMP] = ACTIONS(423),
    [anon_sym_LT_LT] = ACTIONS(423),
    [anon_sym_LT_LT_DASH] = ACTIONS(423),
    [sym_word] = ACTIONS(423),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(423),
    [anon_sym_LF] = ACTIONS(423),
    [anon_sym_AMP] = ACTIONS(423),
  },
  [499] = {
    [anon_sym_RBRACE] = ACTIONS(1609),
    [anon_sym_COLON] = ACTIONS(1611),
    [anon_sym_EQ] = ACTIONS(1613),
    [anon_sym_COLON_QMARK] = ACTIONS(1613),
    [anon_sym_COLON_DASH] = ACTIONS(1613),
    [sym_comment] = ACTIONS(73),
  },
  [500] = {
    [anon_sym_RPAREN] = ACTIONS(1615),
    [sym_comment] = ACTIONS(73),
  },
  [501] = {
    [sym_quoted_argument] = STATE(465),
    [sym_expansion] = STATE(465),
    [sym_operator_expansion] = STATE(465),
    [sym_command_substitution] = STATE(465),
    [sym_file_redirect] = STATE(422),
    [sym_heredoc_redirect] = STATE(422),
    [aux_sym_bracket_command_repeat1] = STATE(538),
    [aux_sym_command_repeat2] = STATE(539),
    [sym_file_descriptor] = ACTIONS(1073),
    [anon_sym_RPAREN] = ACTIONS(505),
    [anon_sym_SEMI_SEMI] = ACTIONS(505),
    [anon_sym_PIPE] = ACTIONS(505),
    [anon_sym_PIPE_AMP] = ACTIONS(505),
    [anon_sym_AMP_AMP] = ACTIONS(505),
    [anon_sym_PIPE_PIPE] = ACTIONS(505),
    [anon_sym_DQUOTE] = ACTIONS(1444),
    [sym_single_quoted_argument] = ACTIONS(1446),
    [anon_sym_DOLLAR] = ACTIONS(1448),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1450),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1452),
    [anon_sym_LT] = ACTIONS(1090),
    [anon_sym_GT] = ACTIONS(1090),
    [anon_sym_GT_GT] = ACTIONS(1090),
    [anon_sym_AMP_GT] = ACTIONS(1090),
    [anon_sym_AMP_GT_GT] = ACTIONS(1090),
    [anon_sym_LT_AMP] = ACTIONS(1090),
    [anon_sym_GT_AMP] = ACTIONS(1090),
    [anon_sym_LT_LT] = ACTIONS(1092),
    [anon_sym_LT_LT_DASH] = ACTIONS(1092),
    [sym_word] = ACTIONS(1454),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(505),
    [anon_sym_LF] = ACTIONS(505),
    [anon_sym_AMP] = ACTIONS(505),
  },
  [502] = {
    [sym_file_redirect] = STATE(460),
    [sym_heredoc_redirect] = STATE(460),
    [sym_file_descriptor] = ACTIONS(1073),
    [anon_sym_RPAREN] = ACTIONS(505),
    [anon_sym_SEMI_SEMI] = ACTIONS(505),
    [anon_sym_PIPE] = ACTIONS(505),
    [anon_sym_PIPE_AMP] = ACTIONS(505),
    [anon_sym_AMP_AMP] = ACTIONS(505),
    [anon_sym_PIPE_PIPE] = ACTIONS(505),
    [anon_sym_LT] = ACTIONS(1090),
    [anon_sym_GT] = ACTIONS(1090),
    [anon_sym_GT_GT] = ACTIONS(1090),
    [anon_sym_AMP_GT] = ACTIONS(1090),
    [anon_sym_AMP_GT_GT] = ACTIONS(1090),
    [anon_sym_LT_AMP] = ACTIONS(1090),
    [anon_sym_GT_AMP] = ACTIONS(1090),
    [anon_sym_LT_LT] = ACTIONS(1092),
    [anon_sym_LT_LT_DASH] = ACTIONS(1092),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(505),
    [anon_sym_LF] = ACTIONS(505),
    [anon_sym_AMP] = ACTIONS(505),
  },
  [503] = {
    [sym_file_descriptor] = ACTIONS(311),
    [anon_sym_RPAREN] = ACTIONS(313),
    [anon_sym_SEMI_SEMI] = ACTIONS(313),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(313),
    [anon_sym_PIPE] = ACTIONS(313),
    [anon_sym_PIPE_AMP] = ACTIONS(313),
    [anon_sym_AMP_AMP] = ACTIONS(313),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [anon_sym_LT] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(313),
    [anon_sym_GT_GT] = ACTIONS(313),
    [anon_sym_AMP_GT] = ACTIONS(313),
    [anon_sym_AMP_GT_GT] = ACTIONS(313),
    [anon_sym_LT_AMP] = ACTIONS(313),
    [anon_sym_GT_AMP] = ACTIONS(313),
    [anon_sym_LT_LT] = ACTIONS(313),
    [anon_sym_LT_LT_DASH] = ACTIONS(313),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(313),
    [anon_sym_LF] = ACTIONS(313),
    [anon_sym_AMP] = ACTIONS(313),
  },
  [504] = {
    [sym_expansion] = STATE(127),
    [sym_operator_expansion] = STATE(127),
    [sym_command_substitution] = STATE(127),
    [anon_sym_DQUOTE] = ACTIONS(1617),
    [sym__quoted_chars] = ACTIONS(327),
    [anon_sym_DOLLAR] = ACTIONS(153),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(155),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(157),
    [sym_comment] = ACTIONS(147),
  },
  [505] = {
    [sym_quoted_argument] = STATE(465),
    [sym_expansion] = STATE(465),
    [sym_operator_expansion] = STATE(465),
    [sym_command_substitution] = STATE(465),
    [sym_file_redirect] = STATE(422),
    [sym_heredoc_redirect] = STATE(422),
    [aux_sym_bracket_command_repeat1] = STATE(541),
    [aux_sym_command_repeat2] = STATE(542),
    [sym_file_descriptor] = ACTIONS(1073),
    [anon_sym_RPAREN] = ACTIONS(589),
    [anon_sym_SEMI_SEMI] = ACTIONS(589),
    [anon_sym_PIPE] = ACTIONS(589),
    [anon_sym_PIPE_AMP] = ACTIONS(589),
    [anon_sym_AMP_AMP] = ACTIONS(589),
    [anon_sym_PIPE_PIPE] = ACTIONS(589),
    [anon_sym_DQUOTE] = ACTIONS(1444),
    [sym_single_quoted_argument] = ACTIONS(1446),
    [anon_sym_DOLLAR] = ACTIONS(1448),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1450),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1452),
    [anon_sym_LT] = ACTIONS(1090),
    [anon_sym_GT] = ACTIONS(1090),
    [anon_sym_GT_GT] = ACTIONS(1090),
    [anon_sym_AMP_GT] = ACTIONS(1090),
    [anon_sym_AMP_GT_GT] = ACTIONS(1090),
    [anon_sym_LT_AMP] = ACTIONS(1090),
    [anon_sym_GT_AMP] = ACTIONS(1090),
    [anon_sym_LT_LT] = ACTIONS(1092),
    [anon_sym_LT_LT_DASH] = ACTIONS(1092),
    [sym_word] = ACTIONS(1454),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(589),
    [anon_sym_LF] = ACTIONS(589),
    [anon_sym_AMP] = ACTIONS(589),
  },
  [506] = {
    [sym_file_redirect] = STATE(460),
    [sym_heredoc_redirect] = STATE(460),
    [sym_file_descriptor] = ACTIONS(1073),
    [anon_sym_RPAREN] = ACTIONS(589),
    [anon_sym_SEMI_SEMI] = ACTIONS(589),
    [anon_sym_PIPE] = ACTIONS(589),
    [anon_sym_PIPE_AMP] = ACTIONS(589),
    [anon_sym_AMP_AMP] = ACTIONS(589),
    [anon_sym_PIPE_PIPE] = ACTIONS(589),
    [anon_sym_LT] = ACTIONS(1090),
    [anon_sym_GT] = ACTIONS(1090),
    [anon_sym_GT_GT] = ACTIONS(1090),
    [anon_sym_AMP_GT] = ACTIONS(1090),
    [anon_sym_AMP_GT_GT] = ACTIONS(1090),
    [anon_sym_LT_AMP] = ACTIONS(1090),
    [anon_sym_GT_AMP] = ACTIONS(1090),
    [anon_sym_LT_LT] = ACTIONS(1092),
    [anon_sym_LT_LT_DASH] = ACTIONS(1092),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(589),
    [anon_sym_LF] = ACTIONS(589),
    [anon_sym_AMP] = ACTIONS(589),
  },
  [507] = {
    [sym_file_descriptor] = ACTIONS(393),
    [anon_sym_RPAREN] = ACTIONS(397),
    [anon_sym_SEMI_SEMI] = ACTIONS(397),
    [anon_sym_PIPE] = ACTIONS(397),
    [anon_sym_PIPE_AMP] = ACTIONS(397),
    [anon_sym_AMP_AMP] = ACTIONS(397),
    [anon_sym_PIPE_PIPE] = ACTIONS(397),
    [anon_sym_LT] = ACTIONS(397),
    [anon_sym_GT] = ACTIONS(397),
    [anon_sym_GT_GT] = ACTIONS(397),
    [anon_sym_AMP_GT] = ACTIONS(397),
    [anon_sym_AMP_GT_GT] = ACTIONS(397),
    [anon_sym_LT_AMP] = ACTIONS(397),
    [anon_sym_GT_AMP] = ACTIONS(397),
    [anon_sym_LT_LT] = ACTIONS(397),
    [anon_sym_LT_LT_DASH] = ACTIONS(397),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(397),
    [anon_sym_LF] = ACTIONS(397),
    [anon_sym_AMP] = ACTIONS(397),
  },
  [508] = {
    [sym_file_descriptor] = ACTIONS(399),
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
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(403),
    [anon_sym_LF] = ACTIONS(403),
    [anon_sym_AMP] = ACTIONS(403),
  },
  [509] = {
    [sym_file_descriptor] = ACTIONS(311),
    [anon_sym_RPAREN] = ACTIONS(313),
    [anon_sym_SEMI_SEMI] = ACTIONS(313),
    [anon_sym_PIPE] = ACTIONS(313),
    [anon_sym_PIPE_AMP] = ACTIONS(313),
    [anon_sym_AMP_AMP] = ACTIONS(313),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [anon_sym_DQUOTE] = ACTIONS(313),
    [sym_single_quoted_argument] = ACTIONS(313),
    [anon_sym_DOLLAR] = ACTIONS(313),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(313),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(313),
    [anon_sym_LT] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(313),
    [anon_sym_GT_GT] = ACTIONS(313),
    [anon_sym_AMP_GT] = ACTIONS(313),
    [anon_sym_AMP_GT_GT] = ACTIONS(313),
    [anon_sym_LT_AMP] = ACTIONS(313),
    [anon_sym_GT_AMP] = ACTIONS(313),
    [anon_sym_LT_LT] = ACTIONS(313),
    [anon_sym_LT_LT_DASH] = ACTIONS(313),
    [sym_word] = ACTIONS(313),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(313),
    [anon_sym_LF] = ACTIONS(313),
    [anon_sym_AMP] = ACTIONS(313),
  },
  [510] = {
    [sym_expansion] = STATE(127),
    [sym_operator_expansion] = STATE(127),
    [sym_command_substitution] = STATE(127),
    [anon_sym_DQUOTE] = ACTIONS(1619),
    [sym__quoted_chars] = ACTIONS(327),
    [anon_sym_DOLLAR] = ACTIONS(153),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(155),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(157),
    [sym_comment] = ACTIONS(147),
  },
  [511] = {
    [sym_file_descriptor] = ACTIONS(463),
    [anon_sym_RPAREN] = ACTIONS(421),
    [anon_sym_SEMI_SEMI] = ACTIONS(421),
    [anon_sym_PIPE] = ACTIONS(421),
    [anon_sym_PIPE_AMP] = ACTIONS(421),
    [anon_sym_AMP_AMP] = ACTIONS(421),
    [anon_sym_PIPE_PIPE] = ACTIONS(421),
    [anon_sym_DQUOTE] = ACTIONS(421),
    [sym_single_quoted_argument] = ACTIONS(421),
    [anon_sym_DOLLAR] = ACTIONS(421),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(421),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(421),
    [anon_sym_LT] = ACTIONS(421),
    [anon_sym_GT] = ACTIONS(421),
    [anon_sym_GT_GT] = ACTIONS(421),
    [anon_sym_AMP_GT] = ACTIONS(421),
    [anon_sym_AMP_GT_GT] = ACTIONS(421),
    [anon_sym_LT_AMP] = ACTIONS(421),
    [anon_sym_GT_AMP] = ACTIONS(421),
    [anon_sym_LT_LT] = ACTIONS(421),
    [anon_sym_LT_LT_DASH] = ACTIONS(421),
    [sym_word] = ACTIONS(421),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(421),
    [anon_sym_LF] = ACTIONS(421),
    [anon_sym_AMP] = ACTIONS(421),
  },
  [512] = {
    [sym_file_descriptor] = ACTIONS(467),
    [anon_sym_RPAREN] = ACTIONS(423),
    [anon_sym_SEMI_SEMI] = ACTIONS(423),
    [anon_sym_PIPE] = ACTIONS(423),
    [anon_sym_PIPE_AMP] = ACTIONS(423),
    [anon_sym_AMP_AMP] = ACTIONS(423),
    [anon_sym_PIPE_PIPE] = ACTIONS(423),
    [anon_sym_DQUOTE] = ACTIONS(423),
    [sym_single_quoted_argument] = ACTIONS(423),
    [anon_sym_DOLLAR] = ACTIONS(423),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(423),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(423),
    [anon_sym_LT] = ACTIONS(423),
    [anon_sym_GT] = ACTIONS(423),
    [anon_sym_GT_GT] = ACTIONS(423),
    [anon_sym_AMP_GT] = ACTIONS(423),
    [anon_sym_AMP_GT_GT] = ACTIONS(423),
    [anon_sym_LT_AMP] = ACTIONS(423),
    [anon_sym_GT_AMP] = ACTIONS(423),
    [anon_sym_LT_LT] = ACTIONS(423),
    [anon_sym_LT_LT_DASH] = ACTIONS(423),
    [sym_word] = ACTIONS(423),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(423),
    [anon_sym_LF] = ACTIONS(423),
    [anon_sym_AMP] = ACTIONS(423),
  },
  [513] = {
    [anon_sym_RBRACE] = ACTIONS(1621),
    [anon_sym_COLON] = ACTIONS(1623),
    [anon_sym_EQ] = ACTIONS(1625),
    [anon_sym_COLON_QMARK] = ACTIONS(1625),
    [anon_sym_COLON_DASH] = ACTIONS(1625),
    [sym_comment] = ACTIONS(73),
  },
  [514] = {
    [anon_sym_RPAREN] = ACTIONS(1627),
    [sym_comment] = ACTIONS(73),
  },
  [515] = {
    [sym_file_descriptor] = ACTIONS(483),
    [anon_sym_RPAREN] = ACTIONS(485),
    [anon_sym_SEMI_SEMI] = ACTIONS(485),
    [anon_sym_PIPE] = ACTIONS(485),
    [anon_sym_PIPE_AMP] = ACTIONS(485),
    [anon_sym_AMP_AMP] = ACTIONS(485),
    [anon_sym_PIPE_PIPE] = ACTIONS(485),
    [anon_sym_DQUOTE] = ACTIONS(485),
    [sym_single_quoted_argument] = ACTIONS(485),
    [anon_sym_DOLLAR] = ACTIONS(485),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(485),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(485),
    [anon_sym_LT] = ACTIONS(485),
    [anon_sym_GT] = ACTIONS(485),
    [anon_sym_GT_GT] = ACTIONS(485),
    [anon_sym_AMP_GT] = ACTIONS(485),
    [anon_sym_AMP_GT_GT] = ACTIONS(485),
    [anon_sym_LT_AMP] = ACTIONS(485),
    [anon_sym_GT_AMP] = ACTIONS(485),
    [anon_sym_LT_LT] = ACTIONS(485),
    [anon_sym_LT_LT_DASH] = ACTIONS(485),
    [sym_word] = ACTIONS(485),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(485),
    [anon_sym_LF] = ACTIONS(485),
    [anon_sym_AMP] = ACTIONS(485),
  },
  [516] = {
    [sym_file_descriptor] = ACTIONS(489),
    [anon_sym_RPAREN] = ACTIONS(491),
    [anon_sym_SEMI_SEMI] = ACTIONS(491),
    [anon_sym_PIPE] = ACTIONS(491),
    [anon_sym_PIPE_AMP] = ACTIONS(491),
    [anon_sym_AMP_AMP] = ACTIONS(491),
    [anon_sym_PIPE_PIPE] = ACTIONS(491),
    [anon_sym_DQUOTE] = ACTIONS(491),
    [sym_single_quoted_argument] = ACTIONS(491),
    [anon_sym_DOLLAR] = ACTIONS(491),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(491),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(491),
    [anon_sym_LT] = ACTIONS(491),
    [anon_sym_GT] = ACTIONS(491),
    [anon_sym_GT_GT] = ACTIONS(491),
    [anon_sym_AMP_GT] = ACTIONS(491),
    [anon_sym_AMP_GT_GT] = ACTIONS(491),
    [anon_sym_LT_AMP] = ACTIONS(491),
    [anon_sym_GT_AMP] = ACTIONS(491),
    [anon_sym_LT_LT] = ACTIONS(491),
    [anon_sym_LT_LT_DASH] = ACTIONS(491),
    [sym_word] = ACTIONS(491),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(491),
    [anon_sym_LF] = ACTIONS(491),
    [anon_sym_AMP] = ACTIONS(491),
  },
  [517] = {
    [sym_file_redirect] = STATE(460),
    [sym_heredoc_redirect] = STATE(460),
    [sym_file_descriptor] = ACTIONS(1073),
    [anon_sym_RPAREN] = ACTIONS(1629),
    [anon_sym_SEMI_SEMI] = ACTIONS(1629),
    [anon_sym_PIPE] = ACTIONS(1629),
    [anon_sym_PIPE_AMP] = ACTIONS(1629),
    [anon_sym_AMP_AMP] = ACTIONS(1629),
    [anon_sym_PIPE_PIPE] = ACTIONS(1629),
    [anon_sym_LT] = ACTIONS(1090),
    [anon_sym_GT] = ACTIONS(1090),
    [anon_sym_GT_GT] = ACTIONS(1090),
    [anon_sym_AMP_GT] = ACTIONS(1090),
    [anon_sym_AMP_GT_GT] = ACTIONS(1090),
    [anon_sym_LT_AMP] = ACTIONS(1090),
    [anon_sym_GT_AMP] = ACTIONS(1090),
    [anon_sym_LT_LT] = ACTIONS(1092),
    [anon_sym_LT_LT_DASH] = ACTIONS(1092),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(1629),
    [anon_sym_LF] = ACTIONS(1629),
    [anon_sym_AMP] = ACTIONS(1629),
  },
  [518] = {
    [sym_file_descriptor] = ACTIONS(311),
    [anon_sym_RPAREN] = ACTIONS(313),
    [anon_sym_SEMI_SEMI] = ACTIONS(313),
    [anon_sym_PIPE] = ACTIONS(313),
    [anon_sym_PIPE_AMP] = ACTIONS(313),
    [anon_sym_AMP_AMP] = ACTIONS(313),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [anon_sym_LT] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(313),
    [anon_sym_GT_GT] = ACTIONS(313),
    [anon_sym_AMP_GT] = ACTIONS(313),
    [anon_sym_AMP_GT_GT] = ACTIONS(313),
    [anon_sym_LT_AMP] = ACTIONS(313),
    [anon_sym_GT_AMP] = ACTIONS(313),
    [anon_sym_LT_LT] = ACTIONS(313),
    [anon_sym_LT_LT_DASH] = ACTIONS(313),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(313),
    [anon_sym_LF] = ACTIONS(313),
    [anon_sym_AMP] = ACTIONS(313),
  },
  [519] = {
    [sym_expansion] = STATE(127),
    [sym_operator_expansion] = STATE(127),
    [sym_command_substitution] = STATE(127),
    [anon_sym_DQUOTE] = ACTIONS(1632),
    [sym__quoted_chars] = ACTIONS(327),
    [anon_sym_DOLLAR] = ACTIONS(153),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(155),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(157),
    [sym_comment] = ACTIONS(147),
  },
  [520] = {
    [sym_file_descriptor] = ACTIONS(463),
    [anon_sym_RPAREN] = ACTIONS(421),
    [anon_sym_SEMI_SEMI] = ACTIONS(421),
    [anon_sym_PIPE] = ACTIONS(421),
    [anon_sym_PIPE_AMP] = ACTIONS(421),
    [anon_sym_AMP_AMP] = ACTIONS(421),
    [anon_sym_PIPE_PIPE] = ACTIONS(421),
    [anon_sym_LT] = ACTIONS(421),
    [anon_sym_GT] = ACTIONS(421),
    [anon_sym_GT_GT] = ACTIONS(421),
    [anon_sym_AMP_GT] = ACTIONS(421),
    [anon_sym_AMP_GT_GT] = ACTIONS(421),
    [anon_sym_LT_AMP] = ACTIONS(421),
    [anon_sym_GT_AMP] = ACTIONS(421),
    [anon_sym_LT_LT] = ACTIONS(421),
    [anon_sym_LT_LT_DASH] = ACTIONS(421),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(421),
    [anon_sym_LF] = ACTIONS(421),
    [anon_sym_AMP] = ACTIONS(421),
  },
  [521] = {
    [sym_file_descriptor] = ACTIONS(467),
    [anon_sym_RPAREN] = ACTIONS(423),
    [anon_sym_SEMI_SEMI] = ACTIONS(423),
    [anon_sym_PIPE] = ACTIONS(423),
    [anon_sym_PIPE_AMP] = ACTIONS(423),
    [anon_sym_AMP_AMP] = ACTIONS(423),
    [anon_sym_PIPE_PIPE] = ACTIONS(423),
    [anon_sym_LT] = ACTIONS(423),
    [anon_sym_GT] = ACTIONS(423),
    [anon_sym_GT_GT] = ACTIONS(423),
    [anon_sym_AMP_GT] = ACTIONS(423),
    [anon_sym_AMP_GT_GT] = ACTIONS(423),
    [anon_sym_LT_AMP] = ACTIONS(423),
    [anon_sym_GT_AMP] = ACTIONS(423),
    [anon_sym_LT_LT] = ACTIONS(423),
    [anon_sym_LT_LT_DASH] = ACTIONS(423),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(423),
    [anon_sym_LF] = ACTIONS(423),
    [anon_sym_AMP] = ACTIONS(423),
  },
  [522] = {
    [anon_sym_RBRACE] = ACTIONS(1634),
    [anon_sym_COLON] = ACTIONS(1636),
    [anon_sym_EQ] = ACTIONS(1638),
    [anon_sym_COLON_QMARK] = ACTIONS(1638),
    [anon_sym_COLON_DASH] = ACTIONS(1638),
    [sym_comment] = ACTIONS(73),
  },
  [523] = {
    [anon_sym_RPAREN] = ACTIONS(1640),
    [sym_comment] = ACTIONS(73),
  },
  [524] = {
    [sym_file_descriptor] = ACTIONS(547),
    [anon_sym_SEMI_SEMI] = ACTIONS(549),
    [anon_sym_RBRACE] = ACTIONS(549),
    [anon_sym_COLON] = ACTIONS(549),
    [anon_sym_PIPE] = ACTIONS(549),
    [anon_sym_PIPE_AMP] = ACTIONS(549),
    [anon_sym_AMP_AMP] = ACTIONS(549),
    [anon_sym_PIPE_PIPE] = ACTIONS(549),
    [anon_sym_DQUOTE] = ACTIONS(549),
    [sym_single_quoted_argument] = ACTIONS(549),
    [anon_sym_LT] = ACTIONS(549),
    [anon_sym_GT] = ACTIONS(549),
    [anon_sym_GT_GT] = ACTIONS(549),
    [anon_sym_AMP_GT] = ACTIONS(549),
    [anon_sym_AMP_GT_GT] = ACTIONS(549),
    [anon_sym_LT_AMP] = ACTIONS(549),
    [anon_sym_GT_AMP] = ACTIONS(549),
    [sym_leading_word] = ACTIONS(549),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(549),
    [anon_sym_LF] = ACTIONS(549),
    [anon_sym_AMP] = ACTIONS(549),
  },
  [525] = {
    [sym_file_descriptor] = ACTIONS(681),
    [anon_sym_SEMI_SEMI] = ACTIONS(623),
    [anon_sym_RBRACE] = ACTIONS(623),
    [anon_sym_COLON] = ACTIONS(623),
    [anon_sym_PIPE] = ACTIONS(623),
    [anon_sym_PIPE_AMP] = ACTIONS(623),
    [anon_sym_AMP_AMP] = ACTIONS(623),
    [anon_sym_PIPE_PIPE] = ACTIONS(623),
    [anon_sym_DQUOTE] = ACTIONS(623),
    [sym_single_quoted_argument] = ACTIONS(623),
    [anon_sym_LT] = ACTIONS(623),
    [anon_sym_GT] = ACTIONS(623),
    [anon_sym_GT_GT] = ACTIONS(623),
    [anon_sym_AMP_GT] = ACTIONS(623),
    [anon_sym_AMP_GT_GT] = ACTIONS(623),
    [anon_sym_LT_AMP] = ACTIONS(623),
    [anon_sym_GT_AMP] = ACTIONS(623),
    [sym_leading_word] = ACTIONS(623),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(623),
    [anon_sym_LF] = ACTIONS(623),
    [anon_sym_AMP] = ACTIONS(623),
  },
  [526] = {
    [sym_quoted_argument] = STATE(551),
    [sym_expansion] = STATE(551),
    [sym_operator_expansion] = STATE(551),
    [sym_command_substitution] = STATE(551),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [sym_single_quoted_argument] = ACTIONS(1642),
    [anon_sym_DOLLAR] = ACTIONS(129),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(131),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(133),
    [sym_word] = ACTIONS(1644),
    [sym_comment] = ACTIONS(73),
  },
  [527] = {
    [sym_file_descriptor] = ACTIONS(689),
    [anon_sym_SEMI_SEMI] = ACTIONS(669),
    [anon_sym_RBRACE] = ACTIONS(669),
    [anon_sym_COLON] = ACTIONS(669),
    [anon_sym_PIPE] = ACTIONS(669),
    [anon_sym_PIPE_AMP] = ACTIONS(669),
    [anon_sym_AMP_AMP] = ACTIONS(669),
    [anon_sym_PIPE_PIPE] = ACTIONS(669),
    [anon_sym_DQUOTE] = ACTIONS(669),
    [sym_single_quoted_argument] = ACTIONS(669),
    [anon_sym_LT] = ACTIONS(669),
    [anon_sym_GT] = ACTIONS(669),
    [anon_sym_GT_GT] = ACTIONS(669),
    [anon_sym_AMP_GT] = ACTIONS(669),
    [anon_sym_AMP_GT_GT] = ACTIONS(669),
    [anon_sym_LT_AMP] = ACTIONS(669),
    [anon_sym_GT_AMP] = ACTIONS(669),
    [sym_leading_word] = ACTIONS(669),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(669),
    [anon_sym_LF] = ACTIONS(669),
    [anon_sym_AMP] = ACTIONS(669),
  },
  [528] = {
    [sym_file_descriptor] = ACTIONS(547),
    [anon_sym_RPAREN] = ACTIONS(549),
    [anon_sym_SEMI_SEMI] = ACTIONS(549),
    [anon_sym_COLON] = ACTIONS(549),
    [anon_sym_PIPE] = ACTIONS(549),
    [anon_sym_PIPE_AMP] = ACTIONS(549),
    [anon_sym_AMP_AMP] = ACTIONS(549),
    [anon_sym_PIPE_PIPE] = ACTIONS(549),
    [anon_sym_DQUOTE] = ACTIONS(549),
    [sym_single_quoted_argument] = ACTIONS(549),
    [anon_sym_LT] = ACTIONS(549),
    [anon_sym_GT] = ACTIONS(549),
    [anon_sym_GT_GT] = ACTIONS(549),
    [anon_sym_AMP_GT] = ACTIONS(549),
    [anon_sym_AMP_GT_GT] = ACTIONS(549),
    [anon_sym_LT_AMP] = ACTIONS(549),
    [anon_sym_GT_AMP] = ACTIONS(549),
    [anon_sym_LT_LT] = ACTIONS(549),
    [anon_sym_LT_LT_DASH] = ACTIONS(549),
    [sym_leading_word] = ACTIONS(549),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(549),
    [anon_sym_LF] = ACTIONS(549),
    [anon_sym_AMP] = ACTIONS(549),
  },
  [529] = {
    [sym_file_descriptor] = ACTIONS(681),
    [anon_sym_RPAREN] = ACTIONS(623),
    [anon_sym_SEMI_SEMI] = ACTIONS(623),
    [anon_sym_COLON] = ACTIONS(623),
    [anon_sym_PIPE] = ACTIONS(623),
    [anon_sym_PIPE_AMP] = ACTIONS(623),
    [anon_sym_AMP_AMP] = ACTIONS(623),
    [anon_sym_PIPE_PIPE] = ACTIONS(623),
    [anon_sym_DQUOTE] = ACTIONS(623),
    [sym_single_quoted_argument] = ACTIONS(623),
    [anon_sym_LT] = ACTIONS(623),
    [anon_sym_GT] = ACTIONS(623),
    [anon_sym_GT_GT] = ACTIONS(623),
    [anon_sym_AMP_GT] = ACTIONS(623),
    [anon_sym_AMP_GT_GT] = ACTIONS(623),
    [anon_sym_LT_AMP] = ACTIONS(623),
    [anon_sym_GT_AMP] = ACTIONS(623),
    [anon_sym_LT_LT] = ACTIONS(623),
    [anon_sym_LT_LT_DASH] = ACTIONS(623),
    [sym_leading_word] = ACTIONS(623),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(623),
    [anon_sym_LF] = ACTIONS(623),
    [anon_sym_AMP] = ACTIONS(623),
  },
  [530] = {
    [sym_quoted_argument] = STATE(553),
    [sym_expansion] = STATE(553),
    [sym_operator_expansion] = STATE(553),
    [sym_command_substitution] = STATE(553),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [sym_single_quoted_argument] = ACTIONS(1646),
    [anon_sym_DOLLAR] = ACTIONS(129),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(131),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(133),
    [sym_word] = ACTIONS(1648),
    [sym_comment] = ACTIONS(73),
  },
  [531] = {
    [sym_file_descriptor] = ACTIONS(689),
    [anon_sym_RPAREN] = ACTIONS(669),
    [anon_sym_SEMI_SEMI] = ACTIONS(669),
    [anon_sym_COLON] = ACTIONS(669),
    [anon_sym_PIPE] = ACTIONS(669),
    [anon_sym_PIPE_AMP] = ACTIONS(669),
    [anon_sym_AMP_AMP] = ACTIONS(669),
    [anon_sym_PIPE_PIPE] = ACTIONS(669),
    [anon_sym_DQUOTE] = ACTIONS(669),
    [sym_single_quoted_argument] = ACTIONS(669),
    [anon_sym_LT] = ACTIONS(669),
    [anon_sym_GT] = ACTIONS(669),
    [anon_sym_GT_GT] = ACTIONS(669),
    [anon_sym_AMP_GT] = ACTIONS(669),
    [anon_sym_AMP_GT_GT] = ACTIONS(669),
    [anon_sym_LT_AMP] = ACTIONS(669),
    [anon_sym_GT_AMP] = ACTIONS(669),
    [anon_sym_LT_LT] = ACTIONS(669),
    [anon_sym_LT_LT_DASH] = ACTIONS(669),
    [sym_leading_word] = ACTIONS(669),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(669),
    [anon_sym_LF] = ACTIONS(669),
    [anon_sym_AMP] = ACTIONS(669),
  },
  [532] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1650),
    [anon_sym_PIPE] = ACTIONS(1650),
    [anon_sym_PIPE_AMP] = ACTIONS(1650),
    [anon_sym_AMP_AMP] = ACTIONS(1650),
    [anon_sym_PIPE_PIPE] = ACTIONS(1650),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(1650),
    [anon_sym_LF] = ACTIONS(1650),
    [anon_sym_AMP] = ACTIONS(1650),
  },
  [533] = {
    [sym_case_item] = STATE(301),
    [sym_quoted_argument] = STATE(236),
    [sym_expansion] = STATE(236),
    [sym_operator_expansion] = STATE(236),
    [sym_command_substitution] = STATE(236),
    [anon_sym_esac] = ACTIONS(1653),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [sym_single_quoted_argument] = ACTIONS(617),
    [anon_sym_DOLLAR] = ACTIONS(129),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(131),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(133),
    [sym_word] = ACTIONS(619),
    [sym_comment] = ACTIONS(73),
  },
  [534] = {
    [sym_file_descriptor] = ACTIONS(547),
    [anon_sym_RPAREN] = ACTIONS(549),
    [anon_sym_SEMI_SEMI] = ACTIONS(549),
    [anon_sym_RBRACK] = ACTIONS(549),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(549),
    [anon_sym_PIPE] = ACTIONS(549),
    [anon_sym_PIPE_AMP] = ACTIONS(549),
    [anon_sym_AMP_AMP] = ACTIONS(549),
    [anon_sym_PIPE_PIPE] = ACTIONS(549),
    [anon_sym_DQUOTE] = ACTIONS(549),
    [sym_single_quoted_argument] = ACTIONS(549),
    [anon_sym_DOLLAR] = ACTIONS(549),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(549),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(549),
    [anon_sym_LT] = ACTIONS(549),
    [anon_sym_GT] = ACTIONS(549),
    [anon_sym_GT_GT] = ACTIONS(549),
    [anon_sym_AMP_GT] = ACTIONS(549),
    [anon_sym_AMP_GT_GT] = ACTIONS(549),
    [anon_sym_LT_AMP] = ACTIONS(549),
    [anon_sym_GT_AMP] = ACTIONS(549),
    [anon_sym_LT_LT] = ACTIONS(549),
    [anon_sym_LT_LT_DASH] = ACTIONS(549),
    [sym_word] = ACTIONS(549),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(549),
    [anon_sym_LF] = ACTIONS(549),
    [anon_sym_AMP] = ACTIONS(549),
  },
  [535] = {
    [sym_file_descriptor] = ACTIONS(681),
    [anon_sym_RPAREN] = ACTIONS(623),
    [anon_sym_SEMI_SEMI] = ACTIONS(623),
    [anon_sym_RBRACK] = ACTIONS(623),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(623),
    [anon_sym_PIPE] = ACTIONS(623),
    [anon_sym_PIPE_AMP] = ACTIONS(623),
    [anon_sym_AMP_AMP] = ACTIONS(623),
    [anon_sym_PIPE_PIPE] = ACTIONS(623),
    [anon_sym_DQUOTE] = ACTIONS(623),
    [sym_single_quoted_argument] = ACTIONS(623),
    [anon_sym_DOLLAR] = ACTIONS(623),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(623),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(623),
    [anon_sym_LT] = ACTIONS(623),
    [anon_sym_GT] = ACTIONS(623),
    [anon_sym_GT_GT] = ACTIONS(623),
    [anon_sym_AMP_GT] = ACTIONS(623),
    [anon_sym_AMP_GT_GT] = ACTIONS(623),
    [anon_sym_LT_AMP] = ACTIONS(623),
    [anon_sym_GT_AMP] = ACTIONS(623),
    [anon_sym_LT_LT] = ACTIONS(623),
    [anon_sym_LT_LT_DASH] = ACTIONS(623),
    [sym_word] = ACTIONS(623),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(623),
    [anon_sym_LF] = ACTIONS(623),
    [anon_sym_AMP] = ACTIONS(623),
  },
  [536] = {
    [sym_quoted_argument] = STATE(556),
    [sym_expansion] = STATE(556),
    [sym_operator_expansion] = STATE(556),
    [sym_command_substitution] = STATE(556),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [sym_single_quoted_argument] = ACTIONS(1655),
    [anon_sym_DOLLAR] = ACTIONS(129),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(131),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(133),
    [sym_word] = ACTIONS(1657),
    [sym_comment] = ACTIONS(73),
  },
  [537] = {
    [sym_file_descriptor] = ACTIONS(689),
    [anon_sym_RPAREN] = ACTIONS(669),
    [anon_sym_SEMI_SEMI] = ACTIONS(669),
    [anon_sym_RBRACK] = ACTIONS(669),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(669),
    [anon_sym_PIPE] = ACTIONS(669),
    [anon_sym_PIPE_AMP] = ACTIONS(669),
    [anon_sym_AMP_AMP] = ACTIONS(669),
    [anon_sym_PIPE_PIPE] = ACTIONS(669),
    [anon_sym_DQUOTE] = ACTIONS(669),
    [sym_single_quoted_argument] = ACTIONS(669),
    [anon_sym_DOLLAR] = ACTIONS(669),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(669),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(669),
    [anon_sym_LT] = ACTIONS(669),
    [anon_sym_GT] = ACTIONS(669),
    [anon_sym_GT_GT] = ACTIONS(669),
    [anon_sym_AMP_GT] = ACTIONS(669),
    [anon_sym_AMP_GT_GT] = ACTIONS(669),
    [anon_sym_LT_AMP] = ACTIONS(669),
    [anon_sym_GT_AMP] = ACTIONS(669),
    [anon_sym_LT_LT] = ACTIONS(669),
    [anon_sym_LT_LT_DASH] = ACTIONS(669),
    [sym_word] = ACTIONS(669),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(669),
    [anon_sym_LF] = ACTIONS(669),
    [anon_sym_AMP] = ACTIONS(669),
  },
  [538] = {
    [sym_quoted_argument] = STATE(515),
    [sym_expansion] = STATE(515),
    [sym_operator_expansion] = STATE(515),
    [sym_command_substitution] = STATE(515),
    [sym_file_redirect] = STATE(422),
    [sym_heredoc_redirect] = STATE(422),
    [aux_sym_command_repeat2] = STATE(558),
    [sym_file_descriptor] = ACTIONS(1073),
    [anon_sym_RPAREN] = ACTIONS(703),
    [anon_sym_SEMI_SEMI] = ACTIONS(703),
    [anon_sym_PIPE] = ACTIONS(703),
    [anon_sym_PIPE_AMP] = ACTIONS(703),
    [anon_sym_AMP_AMP] = ACTIONS(703),
    [anon_sym_PIPE_PIPE] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(1444),
    [sym_single_quoted_argument] = ACTIONS(1570),
    [anon_sym_DOLLAR] = ACTIONS(1448),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1450),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1452),
    [anon_sym_LT] = ACTIONS(1090),
    [anon_sym_GT] = ACTIONS(1090),
    [anon_sym_GT_GT] = ACTIONS(1090),
    [anon_sym_AMP_GT] = ACTIONS(1090),
    [anon_sym_AMP_GT_GT] = ACTIONS(1090),
    [anon_sym_LT_AMP] = ACTIONS(1090),
    [anon_sym_GT_AMP] = ACTIONS(1090),
    [anon_sym_LT_LT] = ACTIONS(1092),
    [anon_sym_LT_LT_DASH] = ACTIONS(1092),
    [sym_word] = ACTIONS(1572),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(703),
    [anon_sym_LF] = ACTIONS(703),
    [anon_sym_AMP] = ACTIONS(703),
  },
  [539] = {
    [sym_file_redirect] = STATE(460),
    [sym_heredoc_redirect] = STATE(460),
    [sym_file_descriptor] = ACTIONS(1073),
    [anon_sym_RPAREN] = ACTIONS(703),
    [anon_sym_SEMI_SEMI] = ACTIONS(703),
    [anon_sym_PIPE] = ACTIONS(703),
    [anon_sym_PIPE_AMP] = ACTIONS(703),
    [anon_sym_AMP_AMP] = ACTIONS(703),
    [anon_sym_PIPE_PIPE] = ACTIONS(703),
    [anon_sym_LT] = ACTIONS(1090),
    [anon_sym_GT] = ACTIONS(1090),
    [anon_sym_GT_GT] = ACTIONS(1090),
    [anon_sym_AMP_GT] = ACTIONS(1090),
    [anon_sym_AMP_GT_GT] = ACTIONS(1090),
    [anon_sym_LT_AMP] = ACTIONS(1090),
    [anon_sym_GT_AMP] = ACTIONS(1090),
    [anon_sym_LT_LT] = ACTIONS(1092),
    [anon_sym_LT_LT_DASH] = ACTIONS(1092),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(703),
    [anon_sym_LF] = ACTIONS(703),
    [anon_sym_AMP] = ACTIONS(703),
  },
  [540] = {
    [sym_file_descriptor] = ACTIONS(547),
    [anon_sym_RPAREN] = ACTIONS(549),
    [anon_sym_SEMI_SEMI] = ACTIONS(549),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(549),
    [anon_sym_PIPE] = ACTIONS(549),
    [anon_sym_PIPE_AMP] = ACTIONS(549),
    [anon_sym_AMP_AMP] = ACTIONS(549),
    [anon_sym_PIPE_PIPE] = ACTIONS(549),
    [anon_sym_LT] = ACTIONS(549),
    [anon_sym_GT] = ACTIONS(549),
    [anon_sym_GT_GT] = ACTIONS(549),
    [anon_sym_AMP_GT] = ACTIONS(549),
    [anon_sym_AMP_GT_GT] = ACTIONS(549),
    [anon_sym_LT_AMP] = ACTIONS(549),
    [anon_sym_GT_AMP] = ACTIONS(549),
    [anon_sym_LT_LT] = ACTIONS(549),
    [anon_sym_LT_LT_DASH] = ACTIONS(549),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(549),
    [anon_sym_LF] = ACTIONS(549),
    [anon_sym_AMP] = ACTIONS(549),
  },
  [541] = {
    [sym_quoted_argument] = STATE(515),
    [sym_expansion] = STATE(515),
    [sym_operator_expansion] = STATE(515),
    [sym_command_substitution] = STATE(515),
    [sym_file_redirect] = STATE(422),
    [sym_heredoc_redirect] = STATE(422),
    [aux_sym_command_repeat2] = STATE(559),
    [sym_file_descriptor] = ACTIONS(1073),
    [anon_sym_RPAREN] = ACTIONS(757),
    [anon_sym_SEMI_SEMI] = ACTIONS(757),
    [anon_sym_PIPE] = ACTIONS(757),
    [anon_sym_PIPE_AMP] = ACTIONS(757),
    [anon_sym_AMP_AMP] = ACTIONS(757),
    [anon_sym_PIPE_PIPE] = ACTIONS(757),
    [anon_sym_DQUOTE] = ACTIONS(1444),
    [sym_single_quoted_argument] = ACTIONS(1570),
    [anon_sym_DOLLAR] = ACTIONS(1448),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1450),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1452),
    [anon_sym_LT] = ACTIONS(1090),
    [anon_sym_GT] = ACTIONS(1090),
    [anon_sym_GT_GT] = ACTIONS(1090),
    [anon_sym_AMP_GT] = ACTIONS(1090),
    [anon_sym_AMP_GT_GT] = ACTIONS(1090),
    [anon_sym_LT_AMP] = ACTIONS(1090),
    [anon_sym_GT_AMP] = ACTIONS(1090),
    [anon_sym_LT_LT] = ACTIONS(1092),
    [anon_sym_LT_LT_DASH] = ACTIONS(1092),
    [sym_word] = ACTIONS(1572),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(757),
    [anon_sym_LF] = ACTIONS(757),
    [anon_sym_AMP] = ACTIONS(757),
  },
  [542] = {
    [sym_file_redirect] = STATE(460),
    [sym_heredoc_redirect] = STATE(460),
    [sym_file_descriptor] = ACTIONS(1073),
    [anon_sym_RPAREN] = ACTIONS(757),
    [anon_sym_SEMI_SEMI] = ACTIONS(757),
    [anon_sym_PIPE] = ACTIONS(757),
    [anon_sym_PIPE_AMP] = ACTIONS(757),
    [anon_sym_AMP_AMP] = ACTIONS(757),
    [anon_sym_PIPE_PIPE] = ACTIONS(757),
    [anon_sym_LT] = ACTIONS(1090),
    [anon_sym_GT] = ACTIONS(1090),
    [anon_sym_GT_GT] = ACTIONS(1090),
    [anon_sym_AMP_GT] = ACTIONS(1090),
    [anon_sym_AMP_GT_GT] = ACTIONS(1090),
    [anon_sym_LT_AMP] = ACTIONS(1090),
    [anon_sym_GT_AMP] = ACTIONS(1090),
    [anon_sym_LT_LT] = ACTIONS(1092),
    [anon_sym_LT_LT_DASH] = ACTIONS(1092),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(757),
    [anon_sym_LF] = ACTIONS(757),
    [anon_sym_AMP] = ACTIONS(757),
  },
  [543] = {
    [sym_file_descriptor] = ACTIONS(547),
    [anon_sym_RPAREN] = ACTIONS(549),
    [anon_sym_SEMI_SEMI] = ACTIONS(549),
    [anon_sym_PIPE] = ACTIONS(549),
    [anon_sym_PIPE_AMP] = ACTIONS(549),
    [anon_sym_AMP_AMP] = ACTIONS(549),
    [anon_sym_PIPE_PIPE] = ACTIONS(549),
    [anon_sym_DQUOTE] = ACTIONS(549),
    [sym_single_quoted_argument] = ACTIONS(549),
    [anon_sym_DOLLAR] = ACTIONS(549),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(549),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(549),
    [anon_sym_LT] = ACTIONS(549),
    [anon_sym_GT] = ACTIONS(549),
    [anon_sym_GT_GT] = ACTIONS(549),
    [anon_sym_AMP_GT] = ACTIONS(549),
    [anon_sym_AMP_GT_GT] = ACTIONS(549),
    [anon_sym_LT_AMP] = ACTIONS(549),
    [anon_sym_GT_AMP] = ACTIONS(549),
    [anon_sym_LT_LT] = ACTIONS(549),
    [anon_sym_LT_LT_DASH] = ACTIONS(549),
    [sym_word] = ACTIONS(549),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(549),
    [anon_sym_LF] = ACTIONS(549),
    [anon_sym_AMP] = ACTIONS(549),
  },
  [544] = {
    [sym_file_descriptor] = ACTIONS(681),
    [anon_sym_RPAREN] = ACTIONS(623),
    [anon_sym_SEMI_SEMI] = ACTIONS(623),
    [anon_sym_PIPE] = ACTIONS(623),
    [anon_sym_PIPE_AMP] = ACTIONS(623),
    [anon_sym_AMP_AMP] = ACTIONS(623),
    [anon_sym_PIPE_PIPE] = ACTIONS(623),
    [anon_sym_DQUOTE] = ACTIONS(623),
    [sym_single_quoted_argument] = ACTIONS(623),
    [anon_sym_DOLLAR] = ACTIONS(623),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(623),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(623),
    [anon_sym_LT] = ACTIONS(623),
    [anon_sym_GT] = ACTIONS(623),
    [anon_sym_GT_GT] = ACTIONS(623),
    [anon_sym_AMP_GT] = ACTIONS(623),
    [anon_sym_AMP_GT_GT] = ACTIONS(623),
    [anon_sym_LT_AMP] = ACTIONS(623),
    [anon_sym_GT_AMP] = ACTIONS(623),
    [anon_sym_LT_LT] = ACTIONS(623),
    [anon_sym_LT_LT_DASH] = ACTIONS(623),
    [sym_word] = ACTIONS(623),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(623),
    [anon_sym_LF] = ACTIONS(623),
    [anon_sym_AMP] = ACTIONS(623),
  },
  [545] = {
    [sym_quoted_argument] = STATE(560),
    [sym_expansion] = STATE(560),
    [sym_operator_expansion] = STATE(560),
    [sym_command_substitution] = STATE(560),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [sym_single_quoted_argument] = ACTIONS(1659),
    [anon_sym_DOLLAR] = ACTIONS(129),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(131),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(133),
    [sym_word] = ACTIONS(1661),
    [sym_comment] = ACTIONS(73),
  },
  [546] = {
    [sym_file_descriptor] = ACTIONS(689),
    [anon_sym_RPAREN] = ACTIONS(669),
    [anon_sym_SEMI_SEMI] = ACTIONS(669),
    [anon_sym_PIPE] = ACTIONS(669),
    [anon_sym_PIPE_AMP] = ACTIONS(669),
    [anon_sym_AMP_AMP] = ACTIONS(669),
    [anon_sym_PIPE_PIPE] = ACTIONS(669),
    [anon_sym_DQUOTE] = ACTIONS(669),
    [sym_single_quoted_argument] = ACTIONS(669),
    [anon_sym_DOLLAR] = ACTIONS(669),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(669),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(669),
    [anon_sym_LT] = ACTIONS(669),
    [anon_sym_GT] = ACTIONS(669),
    [anon_sym_GT_GT] = ACTIONS(669),
    [anon_sym_AMP_GT] = ACTIONS(669),
    [anon_sym_AMP_GT_GT] = ACTIONS(669),
    [anon_sym_LT_AMP] = ACTIONS(669),
    [anon_sym_GT_AMP] = ACTIONS(669),
    [anon_sym_LT_LT] = ACTIONS(669),
    [anon_sym_LT_LT_DASH] = ACTIONS(669),
    [sym_word] = ACTIONS(669),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(669),
    [anon_sym_LF] = ACTIONS(669),
    [anon_sym_AMP] = ACTIONS(669),
  },
  [547] = {
    [sym_file_descriptor] = ACTIONS(547),
    [anon_sym_RPAREN] = ACTIONS(549),
    [anon_sym_SEMI_SEMI] = ACTIONS(549),
    [anon_sym_PIPE] = ACTIONS(549),
    [anon_sym_PIPE_AMP] = ACTIONS(549),
    [anon_sym_AMP_AMP] = ACTIONS(549),
    [anon_sym_PIPE_PIPE] = ACTIONS(549),
    [anon_sym_LT] = ACTIONS(549),
    [anon_sym_GT] = ACTIONS(549),
    [anon_sym_GT_GT] = ACTIONS(549),
    [anon_sym_AMP_GT] = ACTIONS(549),
    [anon_sym_AMP_GT_GT] = ACTIONS(549),
    [anon_sym_LT_AMP] = ACTIONS(549),
    [anon_sym_GT_AMP] = ACTIONS(549),
    [anon_sym_LT_LT] = ACTIONS(549),
    [anon_sym_LT_LT_DASH] = ACTIONS(549),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(549),
    [anon_sym_LF] = ACTIONS(549),
    [anon_sym_AMP] = ACTIONS(549),
  },
  [548] = {
    [sym_file_descriptor] = ACTIONS(681),
    [anon_sym_RPAREN] = ACTIONS(623),
    [anon_sym_SEMI_SEMI] = ACTIONS(623),
    [anon_sym_PIPE] = ACTIONS(623),
    [anon_sym_PIPE_AMP] = ACTIONS(623),
    [anon_sym_AMP_AMP] = ACTIONS(623),
    [anon_sym_PIPE_PIPE] = ACTIONS(623),
    [anon_sym_LT] = ACTIONS(623),
    [anon_sym_GT] = ACTIONS(623),
    [anon_sym_GT_GT] = ACTIONS(623),
    [anon_sym_AMP_GT] = ACTIONS(623),
    [anon_sym_AMP_GT_GT] = ACTIONS(623),
    [anon_sym_LT_AMP] = ACTIONS(623),
    [anon_sym_GT_AMP] = ACTIONS(623),
    [anon_sym_LT_LT] = ACTIONS(623),
    [anon_sym_LT_LT_DASH] = ACTIONS(623),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(623),
    [anon_sym_LF] = ACTIONS(623),
    [anon_sym_AMP] = ACTIONS(623),
  },
  [549] = {
    [sym_quoted_argument] = STATE(562),
    [sym_expansion] = STATE(562),
    [sym_operator_expansion] = STATE(562),
    [sym_command_substitution] = STATE(562),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [sym_single_quoted_argument] = ACTIONS(1663),
    [anon_sym_DOLLAR] = ACTIONS(129),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(131),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(133),
    [sym_word] = ACTIONS(1665),
    [sym_comment] = ACTIONS(73),
  },
  [550] = {
    [sym_file_descriptor] = ACTIONS(689),
    [anon_sym_RPAREN] = ACTIONS(669),
    [anon_sym_SEMI_SEMI] = ACTIONS(669),
    [anon_sym_PIPE] = ACTIONS(669),
    [anon_sym_PIPE_AMP] = ACTIONS(669),
    [anon_sym_AMP_AMP] = ACTIONS(669),
    [anon_sym_PIPE_PIPE] = ACTIONS(669),
    [anon_sym_LT] = ACTIONS(669),
    [anon_sym_GT] = ACTIONS(669),
    [anon_sym_GT_GT] = ACTIONS(669),
    [anon_sym_AMP_GT] = ACTIONS(669),
    [anon_sym_AMP_GT_GT] = ACTIONS(669),
    [anon_sym_LT_AMP] = ACTIONS(669),
    [anon_sym_GT_AMP] = ACTIONS(669),
    [anon_sym_LT_LT] = ACTIONS(669),
    [anon_sym_LT_LT_DASH] = ACTIONS(669),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(669),
    [anon_sym_LF] = ACTIONS(669),
    [anon_sym_AMP] = ACTIONS(669),
  },
  [551] = {
    [anon_sym_RBRACE] = ACTIONS(1667),
    [sym_comment] = ACTIONS(73),
  },
  [552] = {
    [anon_sym_RBRACE] = ACTIONS(1669),
    [sym_comment] = ACTIONS(73),
  },
  [553] = {
    [anon_sym_RBRACE] = ACTIONS(1671),
    [sym_comment] = ACTIONS(73),
  },
  [554] = {
    [anon_sym_RBRACE] = ACTIONS(1673),
    [sym_comment] = ACTIONS(73),
  },
  [555] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1675),
    [anon_sym_PIPE] = ACTIONS(1675),
    [anon_sym_PIPE_AMP] = ACTIONS(1675),
    [anon_sym_AMP_AMP] = ACTIONS(1675),
    [anon_sym_PIPE_PIPE] = ACTIONS(1675),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(1675),
    [anon_sym_LF] = ACTIONS(1675),
    [anon_sym_AMP] = ACTIONS(1675),
  },
  [556] = {
    [anon_sym_RBRACE] = ACTIONS(1678),
    [sym_comment] = ACTIONS(73),
  },
  [557] = {
    [anon_sym_RBRACE] = ACTIONS(1680),
    [sym_comment] = ACTIONS(73),
  },
  [558] = {
    [sym_file_redirect] = STATE(460),
    [sym_heredoc_redirect] = STATE(460),
    [sym_file_descriptor] = ACTIONS(1073),
    [anon_sym_RPAREN] = ACTIONS(871),
    [anon_sym_SEMI_SEMI] = ACTIONS(871),
    [anon_sym_PIPE] = ACTIONS(871),
    [anon_sym_PIPE_AMP] = ACTIONS(871),
    [anon_sym_AMP_AMP] = ACTIONS(871),
    [anon_sym_PIPE_PIPE] = ACTIONS(871),
    [anon_sym_LT] = ACTIONS(1090),
    [anon_sym_GT] = ACTIONS(1090),
    [anon_sym_GT_GT] = ACTIONS(1090),
    [anon_sym_AMP_GT] = ACTIONS(1090),
    [anon_sym_AMP_GT_GT] = ACTIONS(1090),
    [anon_sym_LT_AMP] = ACTIONS(1090),
    [anon_sym_GT_AMP] = ACTIONS(1090),
    [anon_sym_LT_LT] = ACTIONS(1092),
    [anon_sym_LT_LT_DASH] = ACTIONS(1092),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(871),
    [anon_sym_LF] = ACTIONS(871),
    [anon_sym_AMP] = ACTIONS(871),
  },
  [559] = {
    [sym_file_redirect] = STATE(460),
    [sym_heredoc_redirect] = STATE(460),
    [sym_file_descriptor] = ACTIONS(1073),
    [anon_sym_RPAREN] = ACTIONS(873),
    [anon_sym_SEMI_SEMI] = ACTIONS(873),
    [anon_sym_PIPE] = ACTIONS(873),
    [anon_sym_PIPE_AMP] = ACTIONS(873),
    [anon_sym_AMP_AMP] = ACTIONS(873),
    [anon_sym_PIPE_PIPE] = ACTIONS(873),
    [anon_sym_LT] = ACTIONS(1090),
    [anon_sym_GT] = ACTIONS(1090),
    [anon_sym_GT_GT] = ACTIONS(1090),
    [anon_sym_AMP_GT] = ACTIONS(1090),
    [anon_sym_AMP_GT_GT] = ACTIONS(1090),
    [anon_sym_LT_AMP] = ACTIONS(1090),
    [anon_sym_GT_AMP] = ACTIONS(1090),
    [anon_sym_LT_LT] = ACTIONS(1092),
    [anon_sym_LT_LT_DASH] = ACTIONS(1092),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(873),
    [anon_sym_LF] = ACTIONS(873),
    [anon_sym_AMP] = ACTIONS(873),
  },
  [560] = {
    [anon_sym_RBRACE] = ACTIONS(1682),
    [sym_comment] = ACTIONS(73),
  },
  [561] = {
    [anon_sym_RBRACE] = ACTIONS(1684),
    [sym_comment] = ACTIONS(73),
  },
  [562] = {
    [anon_sym_RBRACE] = ACTIONS(1686),
    [sym_comment] = ACTIONS(73),
  },
  [563] = {
    [anon_sym_RBRACE] = ACTIONS(1688),
    [sym_comment] = ACTIONS(73),
  },
  [564] = {
    [sym_file_descriptor] = ACTIONS(923),
    [anon_sym_SEMI_SEMI] = ACTIONS(895),
    [anon_sym_RBRACE] = ACTIONS(895),
    [anon_sym_COLON] = ACTIONS(895),
    [anon_sym_PIPE] = ACTIONS(895),
    [anon_sym_PIPE_AMP] = ACTIONS(895),
    [anon_sym_AMP_AMP] = ACTIONS(895),
    [anon_sym_PIPE_PIPE] = ACTIONS(895),
    [anon_sym_DQUOTE] = ACTIONS(895),
    [sym_single_quoted_argument] = ACTIONS(895),
    [anon_sym_LT] = ACTIONS(895),
    [anon_sym_GT] = ACTIONS(895),
    [anon_sym_GT_GT] = ACTIONS(895),
    [anon_sym_AMP_GT] = ACTIONS(895),
    [anon_sym_AMP_GT_GT] = ACTIONS(895),
    [anon_sym_LT_AMP] = ACTIONS(895),
    [anon_sym_GT_AMP] = ACTIONS(895),
    [sym_leading_word] = ACTIONS(895),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(895),
    [anon_sym_LF] = ACTIONS(895),
    [anon_sym_AMP] = ACTIONS(895),
  },
  [565] = {
    [sym_file_descriptor] = ACTIONS(927),
    [anon_sym_SEMI_SEMI] = ACTIONS(897),
    [anon_sym_RBRACE] = ACTIONS(897),
    [anon_sym_COLON] = ACTIONS(897),
    [anon_sym_PIPE] = ACTIONS(897),
    [anon_sym_PIPE_AMP] = ACTIONS(897),
    [anon_sym_AMP_AMP] = ACTIONS(897),
    [anon_sym_PIPE_PIPE] = ACTIONS(897),
    [anon_sym_DQUOTE] = ACTIONS(897),
    [sym_single_quoted_argument] = ACTIONS(897),
    [anon_sym_LT] = ACTIONS(897),
    [anon_sym_GT] = ACTIONS(897),
    [anon_sym_GT_GT] = ACTIONS(897),
    [anon_sym_AMP_GT] = ACTIONS(897),
    [anon_sym_AMP_GT_GT] = ACTIONS(897),
    [anon_sym_LT_AMP] = ACTIONS(897),
    [anon_sym_GT_AMP] = ACTIONS(897),
    [sym_leading_word] = ACTIONS(897),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(897),
    [anon_sym_LF] = ACTIONS(897),
    [anon_sym_AMP] = ACTIONS(897),
  },
  [566] = {
    [sym_file_descriptor] = ACTIONS(923),
    [anon_sym_RPAREN] = ACTIONS(895),
    [anon_sym_SEMI_SEMI] = ACTIONS(895),
    [anon_sym_COLON] = ACTIONS(895),
    [anon_sym_PIPE] = ACTIONS(895),
    [anon_sym_PIPE_AMP] = ACTIONS(895),
    [anon_sym_AMP_AMP] = ACTIONS(895),
    [anon_sym_PIPE_PIPE] = ACTIONS(895),
    [anon_sym_DQUOTE] = ACTIONS(895),
    [sym_single_quoted_argument] = ACTIONS(895),
    [anon_sym_LT] = ACTIONS(895),
    [anon_sym_GT] = ACTIONS(895),
    [anon_sym_GT_GT] = ACTIONS(895),
    [anon_sym_AMP_GT] = ACTIONS(895),
    [anon_sym_AMP_GT_GT] = ACTIONS(895),
    [anon_sym_LT_AMP] = ACTIONS(895),
    [anon_sym_GT_AMP] = ACTIONS(895),
    [anon_sym_LT_LT] = ACTIONS(895),
    [anon_sym_LT_LT_DASH] = ACTIONS(895),
    [sym_leading_word] = ACTIONS(895),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(895),
    [anon_sym_LF] = ACTIONS(895),
    [anon_sym_AMP] = ACTIONS(895),
  },
  [567] = {
    [sym_file_descriptor] = ACTIONS(927),
    [anon_sym_RPAREN] = ACTIONS(897),
    [anon_sym_SEMI_SEMI] = ACTIONS(897),
    [anon_sym_COLON] = ACTIONS(897),
    [anon_sym_PIPE] = ACTIONS(897),
    [anon_sym_PIPE_AMP] = ACTIONS(897),
    [anon_sym_AMP_AMP] = ACTIONS(897),
    [anon_sym_PIPE_PIPE] = ACTIONS(897),
    [anon_sym_DQUOTE] = ACTIONS(897),
    [sym_single_quoted_argument] = ACTIONS(897),
    [anon_sym_LT] = ACTIONS(897),
    [anon_sym_GT] = ACTIONS(897),
    [anon_sym_GT_GT] = ACTIONS(897),
    [anon_sym_AMP_GT] = ACTIONS(897),
    [anon_sym_AMP_GT_GT] = ACTIONS(897),
    [anon_sym_LT_AMP] = ACTIONS(897),
    [anon_sym_GT_AMP] = ACTIONS(897),
    [anon_sym_LT_LT] = ACTIONS(897),
    [anon_sym_LT_LT_DASH] = ACTIONS(897),
    [sym_leading_word] = ACTIONS(897),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(897),
    [anon_sym_LF] = ACTIONS(897),
    [anon_sym_AMP] = ACTIONS(897),
  },
  [568] = {
    [sym_file_descriptor] = ACTIONS(923),
    [anon_sym_RPAREN] = ACTIONS(895),
    [anon_sym_SEMI_SEMI] = ACTIONS(895),
    [anon_sym_RBRACK] = ACTIONS(895),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(895),
    [anon_sym_PIPE] = ACTIONS(895),
    [anon_sym_PIPE_AMP] = ACTIONS(895),
    [anon_sym_AMP_AMP] = ACTIONS(895),
    [anon_sym_PIPE_PIPE] = ACTIONS(895),
    [anon_sym_DQUOTE] = ACTIONS(895),
    [sym_single_quoted_argument] = ACTIONS(895),
    [anon_sym_DOLLAR] = ACTIONS(895),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(895),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(895),
    [anon_sym_LT] = ACTIONS(895),
    [anon_sym_GT] = ACTIONS(895),
    [anon_sym_GT_GT] = ACTIONS(895),
    [anon_sym_AMP_GT] = ACTIONS(895),
    [anon_sym_AMP_GT_GT] = ACTIONS(895),
    [anon_sym_LT_AMP] = ACTIONS(895),
    [anon_sym_GT_AMP] = ACTIONS(895),
    [anon_sym_LT_LT] = ACTIONS(895),
    [anon_sym_LT_LT_DASH] = ACTIONS(895),
    [sym_word] = ACTIONS(895),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(895),
    [anon_sym_LF] = ACTIONS(895),
    [anon_sym_AMP] = ACTIONS(895),
  },
  [569] = {
    [sym_file_descriptor] = ACTIONS(927),
    [anon_sym_RPAREN] = ACTIONS(897),
    [anon_sym_SEMI_SEMI] = ACTIONS(897),
    [anon_sym_RBRACK] = ACTIONS(897),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(897),
    [anon_sym_PIPE] = ACTIONS(897),
    [anon_sym_PIPE_AMP] = ACTIONS(897),
    [anon_sym_AMP_AMP] = ACTIONS(897),
    [anon_sym_PIPE_PIPE] = ACTIONS(897),
    [anon_sym_DQUOTE] = ACTIONS(897),
    [sym_single_quoted_argument] = ACTIONS(897),
    [anon_sym_DOLLAR] = ACTIONS(897),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(897),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(897),
    [anon_sym_LT] = ACTIONS(897),
    [anon_sym_GT] = ACTIONS(897),
    [anon_sym_GT_GT] = ACTIONS(897),
    [anon_sym_AMP_GT] = ACTIONS(897),
    [anon_sym_AMP_GT_GT] = ACTIONS(897),
    [anon_sym_LT_AMP] = ACTIONS(897),
    [anon_sym_GT_AMP] = ACTIONS(897),
    [anon_sym_LT_LT] = ACTIONS(897),
    [anon_sym_LT_LT_DASH] = ACTIONS(897),
    [sym_word] = ACTIONS(897),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(897),
    [anon_sym_LF] = ACTIONS(897),
    [anon_sym_AMP] = ACTIONS(897),
  },
  [570] = {
    [sym_file_descriptor] = ACTIONS(923),
    [anon_sym_RPAREN] = ACTIONS(895),
    [anon_sym_SEMI_SEMI] = ACTIONS(895),
    [anon_sym_PIPE] = ACTIONS(895),
    [anon_sym_PIPE_AMP] = ACTIONS(895),
    [anon_sym_AMP_AMP] = ACTIONS(895),
    [anon_sym_PIPE_PIPE] = ACTIONS(895),
    [anon_sym_DQUOTE] = ACTIONS(895),
    [sym_single_quoted_argument] = ACTIONS(895),
    [anon_sym_DOLLAR] = ACTIONS(895),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(895),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(895),
    [anon_sym_LT] = ACTIONS(895),
    [anon_sym_GT] = ACTIONS(895),
    [anon_sym_GT_GT] = ACTIONS(895),
    [anon_sym_AMP_GT] = ACTIONS(895),
    [anon_sym_AMP_GT_GT] = ACTIONS(895),
    [anon_sym_LT_AMP] = ACTIONS(895),
    [anon_sym_GT_AMP] = ACTIONS(895),
    [anon_sym_LT_LT] = ACTIONS(895),
    [anon_sym_LT_LT_DASH] = ACTIONS(895),
    [sym_word] = ACTIONS(895),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(895),
    [anon_sym_LF] = ACTIONS(895),
    [anon_sym_AMP] = ACTIONS(895),
  },
  [571] = {
    [sym_file_descriptor] = ACTIONS(927),
    [anon_sym_RPAREN] = ACTIONS(897),
    [anon_sym_SEMI_SEMI] = ACTIONS(897),
    [anon_sym_PIPE] = ACTIONS(897),
    [anon_sym_PIPE_AMP] = ACTIONS(897),
    [anon_sym_AMP_AMP] = ACTIONS(897),
    [anon_sym_PIPE_PIPE] = ACTIONS(897),
    [anon_sym_DQUOTE] = ACTIONS(897),
    [sym_single_quoted_argument] = ACTIONS(897),
    [anon_sym_DOLLAR] = ACTIONS(897),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(897),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(897),
    [anon_sym_LT] = ACTIONS(897),
    [anon_sym_GT] = ACTIONS(897),
    [anon_sym_GT_GT] = ACTIONS(897),
    [anon_sym_AMP_GT] = ACTIONS(897),
    [anon_sym_AMP_GT_GT] = ACTIONS(897),
    [anon_sym_LT_AMP] = ACTIONS(897),
    [anon_sym_GT_AMP] = ACTIONS(897),
    [anon_sym_LT_LT] = ACTIONS(897),
    [anon_sym_LT_LT_DASH] = ACTIONS(897),
    [sym_word] = ACTIONS(897),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(897),
    [anon_sym_LF] = ACTIONS(897),
    [anon_sym_AMP] = ACTIONS(897),
  },
  [572] = {
    [sym_file_descriptor] = ACTIONS(923),
    [anon_sym_RPAREN] = ACTIONS(895),
    [anon_sym_SEMI_SEMI] = ACTIONS(895),
    [anon_sym_PIPE] = ACTIONS(895),
    [anon_sym_PIPE_AMP] = ACTIONS(895),
    [anon_sym_AMP_AMP] = ACTIONS(895),
    [anon_sym_PIPE_PIPE] = ACTIONS(895),
    [anon_sym_LT] = ACTIONS(895),
    [anon_sym_GT] = ACTIONS(895),
    [anon_sym_GT_GT] = ACTIONS(895),
    [anon_sym_AMP_GT] = ACTIONS(895),
    [anon_sym_AMP_GT_GT] = ACTIONS(895),
    [anon_sym_LT_AMP] = ACTIONS(895),
    [anon_sym_GT_AMP] = ACTIONS(895),
    [anon_sym_LT_LT] = ACTIONS(895),
    [anon_sym_LT_LT_DASH] = ACTIONS(895),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(895),
    [anon_sym_LF] = ACTIONS(895),
    [anon_sym_AMP] = ACTIONS(895),
  },
  [573] = {
    [sym_file_descriptor] = ACTIONS(927),
    [anon_sym_RPAREN] = ACTIONS(897),
    [anon_sym_SEMI_SEMI] = ACTIONS(897),
    [anon_sym_PIPE] = ACTIONS(897),
    [anon_sym_PIPE_AMP] = ACTIONS(897),
    [anon_sym_AMP_AMP] = ACTIONS(897),
    [anon_sym_PIPE_PIPE] = ACTIONS(897),
    [anon_sym_LT] = ACTIONS(897),
    [anon_sym_GT] = ACTIONS(897),
    [anon_sym_GT_GT] = ACTIONS(897),
    [anon_sym_AMP_GT] = ACTIONS(897),
    [anon_sym_AMP_GT_GT] = ACTIONS(897),
    [anon_sym_LT_AMP] = ACTIONS(897),
    [anon_sym_GT_AMP] = ACTIONS(897),
    [anon_sym_LT_LT] = ACTIONS(897),
    [anon_sym_LT_LT_DASH] = ACTIONS(897),
    [sym_comment] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(897),
    [anon_sym_LF] = ACTIONS(897),
    [anon_sym_AMP] = ACTIONS(897),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(385),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(386),
  [5] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(387),
  [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(388),
  [9] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(389),
  [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(137),
  [13] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
  [15] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(3),
  [17] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(74),
  [19] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(370),
  [21] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(4),
  [23] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(371),
  [25] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(372),
  [27] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(154),
  [29] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(155),
  [31] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(5),
  [33] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(373),
  [35] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(374),
  [37] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(375),
  [39] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(6),
  [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(376),
  [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(214),
  [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(377),
  [47] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(8),
  [49] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(100),
  [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(100),
  [53] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(378),
  [55] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(66),
  [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(67),
  [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(379),
  [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(380),
  [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(381),
  [65] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(382),
  [67] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(382),
  [69] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(383),
  [71] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(383),
  [73] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(384),
  [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
  [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 0),
  [81] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
  [83] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
  [85] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
  [87] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
  [89] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(7),
  [91] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
  [93] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(9),
  [95] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(10),
  [97] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(11),
  [99] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(10),
  [101] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
  [103] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(13),
  [105] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(21),
  [107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(21),
  [109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(26),
  [111] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(27),
  [113] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(28),
  [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
  [117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
  [119] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(31),
  [121] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(32),
  [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
  [125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
  [127] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(36),
  [129] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(37),
  [131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
  [133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
  [135] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(40),
  [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
  [139] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 1),
  [141] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(44),
  [143] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(45),
  [145] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(46),
  [147] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [149] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(49),
  [151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(50),
  [153] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(51),
  [155] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(52),
  [157] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(53),
  [159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
  [161] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(56),
  [163] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(57),
  [165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
  [167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
  [169] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(60),
  [171] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 1, .rename_sequence_id = 1),
  [173] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(61),
  [175] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(62),
  [177] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(63),
  [179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [183] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [185] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [187] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(65),
  [189] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(66),
  [191] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(67),
  [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1),
  [195] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1),
  [197] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_command_repeat1, 1),
  [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
  [203] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(69),
  [205] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(70),
  [207] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(72),
  [209] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(73),
  [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(74),
  [213] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(76),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
  [217] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(78),
  [219] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(80),
  [221] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(81),
  [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
  [225] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(83),
  [227] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(84),
  [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(85),
  [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
  [233] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(85),
  [235] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(87),
  [237] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(90),
  [239] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(91),
  [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
  [243] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subshell, 2),
  [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
  [247] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(94),
  [249] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_bracket_command_repeat1, 1),
  [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1),
  [253] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1),
  [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(96),
  [257] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(97),
  [259] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(98),
  [261] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_bracket_command_repeat1, 1, .rename_sequence_id = 2),
  [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1, .rename_sequence_id = 2),
  [265] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1, .rename_sequence_id = 2),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(100),
  [269] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(101),
  [271] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(102),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(103),
  [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
  [277] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2),
  [279] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(104),
  [281] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(105),
  [283] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(106),
  [285] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(107),
  [287] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(108),
  [289] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(109),
  [291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
  [293] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(113),
  [295] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(114),
  [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
  [299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
  [301] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(117),
  [303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
  [305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(119),
  [307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 1),
  [309] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 1),
  [311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2),
  [313] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2),
  [315] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_quoted_argument_repeat1, 1),
  [317] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_quoted_argument_repeat1, 1),
  [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(122),
  [321] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(123),
  [323] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(124),
  [325] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(126),
  [327] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(127),
  [329] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(128),
  [331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2),
  [333] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 2),
  [335] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2),
  [337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(130),
  [339] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(131),
  [341] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(132),
  [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 3),
  [345] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 3),
  [347] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 3),
  [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(134),
  [351] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2, .rename_sequence_id = 4),
  [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(137),
  [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(138),
  [357] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(137),
  [359] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(139),
  [361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
  [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(141),
  [365] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(142),
  [367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__terminated_statement, 2),
  [369] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__terminated_statement, 2),
  [371] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__terminated_statement, 2),
  [373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [375] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [377] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [379] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(147),
  [381] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2, .rename_sequence_id = 5),
  [383] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(148),
  [385] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(149),
  [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 2),
  [389] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_command_repeat1, 2),
  [391] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 2),
  [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 3),
  [395] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 3),
  [397] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 3),
  [399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 3, .rename_sequence_id = 6),
  [401] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 3, .rename_sequence_id = 6),
  [403] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 3, .rename_sequence_id = 6),
  [405] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(151),
  [407] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 3),
  [409] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(153),
  [411] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(154),
  [413] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(155),
  [415] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(160),
  [417] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(161),
  [419] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(162),
  [421] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expansion, 2),
  [423] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expansion, 2, .rename_sequence_id = 7),
  [425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(163),
  [427] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(164),
  [429] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(164),
  [431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
  [433] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(166),
  [435] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(167),
  [437] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(168),
  [439] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(171),
  [441] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(173),
  [443] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
  [445] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(176),
  [447] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(176),
  [449] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(177),
  [451] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(178),
  [453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(179),
  [455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(180),
  [457] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subshell, 3),
  [459] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_quoted_argument, 2),
  [461] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(181),
  [463] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expansion, 2),
  [465] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expansion, 2),
  [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expansion, 2, .rename_sequence_id = 7),
  [469] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expansion, 2, .rename_sequence_id = 7),
  [471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(182),
  [473] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(183),
  [475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(183),
  [477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(184),
  [479] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_bracket_command, 3),
  [481] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_bracket_command_repeat1, 2),
  [483] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 2),
  [485] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 2),
  [487] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_bracket_command_repeat1, 2, .rename_sequence_id = 3),
  [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 2, .rename_sequence_id = 3),
  [491] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 2, .rename_sequence_id = 3),
  [493] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(185),
  [495] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(186),
  [497] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(187),
  [499] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(189),
  [501] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(190),
  [503] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(191),
  [505] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3),
  [507] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(193),
  [509] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(194),
  [511] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(196),
  [513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(198),
  [515] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(199),
  [517] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(200),
  [519] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 1),
  [521] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 1),
  [523] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(202),
  [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(203),
  [527] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(204),
  [529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(205),
  [531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_heredoc_redirect, 2),
  [533] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc_redirect, 2),
  [535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 2),
  [537] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 2),
  [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(207),
  [541] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(208),
  [543] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(208),
  [545] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(209),
  [547] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 3),
  [549] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 3),
  [551] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_quoted_argument_repeat1, 2),
  [553] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_quoted_argument_repeat1, 2),
  [555] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(210),
  [557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(211),
  [559] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(212),
  [561] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(212),
  [563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(213),
  [565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(214),
  [567] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .rename_sequence_id = 8),
  [569] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9),
  [571] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9),
  [573] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(217),
  [575] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(219),
  [577] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(220),
  [579] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(221),
  [581] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 10),
  [583] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 10),
  [585] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3, .fragile = true),
  [587] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list, 3, .fragile = true),
  [589] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .rename_sequence_id = 11),
  [591] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(226),
  [593] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(226),
  [595] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(227),
  [597] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_group, 2),
  [599] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(228),
  [601] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
  [603] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 1),
  [605] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
  [607] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(231),
  [609] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(231),
  [611] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(154),
  [613] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(155),
  [615] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(235),
  [617] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(236),
  [619] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(237),
  [621] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(240),
  [623] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 12),
  [625] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(241),
  [627] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(242),
  [629] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(243),
  [631] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(243),
  [633] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 2),
  [635] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(244),
  [637] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(245),
  [639] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(246),
  [641] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(247),
  [643] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(248),
  [645] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(167),
  [647] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(167),
  [649] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(168),
  [651] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(168),
  [653] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(249),
  [655] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(252),
  [657] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(253),
  [659] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(254),
  [661] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(255),
  [663] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_command_repeat2, 1),
  [665] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(258),
  [667] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 2, .rename_sequence_id = 4),
  [669] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3),
  [671] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(261),
  [673] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(262),
  [675] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(264),
  [677] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(266),
  [679] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_quoted_argument, 3),
  [681] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 12),
  [683] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 12),
  [685] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(268),
  [687] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(269),
  [689] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3),
  [691] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_command_substitution, 3),
  [693] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(270),
  [695] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(271),
  [697] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(272),
  [699] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(272),
  [701] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(273),
  [703] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 4),
  [705] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(274),
  [707] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(275),
  [709] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(276),
  [711] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(276),
  [713] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(277),
  [715] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_heredoc_repeat1, 1),
  [717] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_heredoc_repeat1, 1),
  [719] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 2),
  [721] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 2),
  [723] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(278),
  [725] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(279),
  [727] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(280),
  [729] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(281),
  [731] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(282),
  [733] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(283),
  [735] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(284),
  [737] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(285),
  [739] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(286),
  [741] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(287),
  [743] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 4, .rename_sequence_id = 13),
  [745] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 4, .rename_sequence_id = 13),
  [747] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(289),
  [749] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(290),
  [751] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(291),
  [753] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(291),
  [755] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(292),
  [757] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 4, .rename_sequence_id = 14),
  [759] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9),
  [761] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 10),
  [763] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_group, 3),
  [765] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(295),
  [767] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 2),
  [769] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
  [771] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(296),
  [773] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [775] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 5),
  [777] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(298),
  [779] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(299),
  [781] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_case_statement_repeat1, 1),
  [783] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_case_statement_repeat1, 1),
  [785] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_case_statement_repeat1, 1),
  [787] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(300),
  [789] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(303),
  [791] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(304),
  [793] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(305),
  [795] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(306),
  [797] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(307),
  [799] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(309),
  [801] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(310),
  [803] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(311),
  [805] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 3),
  [807] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(313),
  [809] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(314),
  [811] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_heredoc, 1),
  [813] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(316),
  [815] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_heredoc_redirect, 2),
  [817] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_command_repeat2, 2),
  [819] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .rename_sequence_id = 8),
  [821] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .rename_sequence_id = 11),
  [823] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 5, .rename_sequence_id = 15),
  [825] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(322),
  [827] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5, .rename_sequence_id = 16),
  [829] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(324),
  [831] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(325),
  [833] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(326),
  [835] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(327),
  [837] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(328),
  [839] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(329),
  [841] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(330),
  [843] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(331),
  [845] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(331),
  [847] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_heredoc_repeat1, 2),
  [849] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_heredoc_repeat1, 2),
  [851] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 3),
  [853] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 3),
  [855] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(332),
  [857] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(333),
  [859] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(334),
  [861] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(335),
  [863] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_compound_command, 2),
  [865] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(336),
  [867] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(337),
  [869] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(338),
  [871] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 5),
  [873] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 5, .rename_sequence_id = 16),
  [875] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 3),
  [877] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
  [879] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(340),
  [881] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(341),
  [883] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(343),
  [885] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 6),
  [887] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_case_statement_repeat1, 2),
  [889] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_case_statement_repeat1, 2),
  [891] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_case_statement_repeat1, 2),
  [893] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(345),
  [895] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 17),
  [897] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 18),
  [899] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(346),
  [901] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(347),
  [903] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(348),
  [905] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(348),
  [907] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(349),
  [909] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 4),
  [911] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_heredoc, 2),
  [913] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(350),
  [915] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 4, .rename_sequence_id = 13),
  [917] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 4, .rename_sequence_id = 14),
  [919] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 6, .rename_sequence_id = 19),
  [921] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(353),
  [923] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 17),
  [925] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 17),
  [927] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 18),
  [929] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 18),
  [931] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(354),
  [933] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(355),
  [935] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(356),
  [937] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(357),
  [939] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(358),
  [941] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(359),
  [943] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_compound_command, 3),
  [945] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(360),
  [947] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(361),
  [949] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4),
  [951] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 7),
  [953] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 3),
  [955] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_case_item, 3),
  [957] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 3),
  [959] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(362),
  [961] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 3, .rename_sequence_id = 20),
  [963] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_case_item, 3, .rename_sequence_id = 20),
  [965] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 3, .rename_sequence_id = 20),
  [967] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(363),
  [969] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 7),
  [971] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(364),
  [973] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(365),
  [975] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_heredoc, 3),
  [977] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 5),
  [979] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 5, .rename_sequence_id = 16),
  [981] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 7, .rename_sequence_id = 21),
  [983] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(366),
  [985] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(367),
  [987] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 4),
  [989] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_case_item, 4),
  [991] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 4),
  [993] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 4, .rename_sequence_id = 22),
  [995] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_case_item, 4, .rename_sequence_id = 22),
  [997] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 4, .rename_sequence_id = 22),
  [999] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(368),
  [1001] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(369),
  [1003] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_group, 2), REDUCE(sym_do_group, 3),
  [1006] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 3), SHIFT(153),
  [1009] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 3), SHIFT(154),
  [1012] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 3), SHIFT(155),
  [1015] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_if_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_if_statement, 7),
  [1020] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(413),
  [1022] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 5), REDUCE(sym_case_statement, 5, .rename_sequence_id = 15), REDUCE(sym_case_statement, 6), REDUCE(sym_case_statement, 6, .rename_sequence_id = 19), REDUCE(sym_case_statement, 7), REDUCE(sym_case_statement, 7, .rename_sequence_id = 21),
  [1029] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3), SHIFT(2),
  [1032] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subshell, 2), REDUCE(sym_subshell, 3), REDUCE(sym_command_substitution, 3), SHIFT(414),
  [1037] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(7),
  [1039] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(214),
  [1041] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3), SHIFT(10),
  [1044] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subshell, 2), REDUCE(sym_subshell, 3), REDUCE(sym_command_substitution, 3),
  [1048] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3), SHIFT(11),
  [1051] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3), SHIFT(12),
  [1054] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3), SHIFT(13),
  [1057] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(416),
  [1059] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 12), REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 17), REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 18),
  [1063] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 12), REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 17), REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 18),
  [1067] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_compound_command, 2), REDUCE(sym_compound_command, 3), REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 12), REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 17), REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 18),
  [1073] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(417),
  [1075] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 1), REDUCE(sym_command, 2),
  [1078] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(418),
  [1080] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(35),
  [1082] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(419),
  [1084] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(37),
  [1086] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(38),
  [1088] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(39),
  [1090] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(420),
  [1092] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(383),
  [1094] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(421),
  [1096] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(424),
  [1098] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(425),
  [1100] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(426),
  [1102] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(427),
  [1104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(428),
  [1106] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(429),
  [1108] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2), REDUCE(sym_quoted_argument, 3),
  [1111] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2), REDUCE(sym_quoted_argument, 3),
  [1114] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2), REDUCE(sym_quoted_argument, 3), SHIFT(430),
  [1118] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(50),
  [1120] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2), REDUCE(sym_quoted_argument, 3), SHIFT(51),
  [1124] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2), REDUCE(sym_quoted_argument, 3), SHIFT(52),
  [1128] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2), REDUCE(sym_quoted_argument, 3), SHIFT(53),
  [1132] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expansion, 2), SHIFT(431),
  [1135] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expansion, 2), SHIFT(432),
  [1138] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(433),
  [1140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(434),
  [1142] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(435),
  [1144] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(436),
  [1146] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(437),
  [1148] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(438),
  [1150] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(385),
  [1152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(386),
  [1154] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(439),
  [1156] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(440),
  [1158] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__terminated_statement, 2), SHIFT(35),
  [1161] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__terminated_statement, 2), SHIFT(236),
  [1164] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(441),
  [1166] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_heredoc_repeat1, 1), REDUCE(aux_sym_heredoc_repeat1, 2),
  [1169] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_heredoc_repeat1, 1), REDUCE(aux_sym_heredoc_repeat1, 2),
  [1172] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 2), REDUCE(sym_heredoc, 3),
  [1175] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 2), REDUCE(sym_heredoc, 3),
  [1178] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(442),
  [1180] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(442),
  [1182] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [1185] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [1188] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(74),
  [1190] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(371),
  [1192] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [1195] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3, .fragile = true), REDUCE(sym_list, 3, .fragile = true), SHIFT(65),
  [1199] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3, .fragile = true), REDUCE(sym_list, 3, .fragile = true), SHIFT(66),
  [1203] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3, .fragile = true), REDUCE(sym_list, 3, .fragile = true), SHIFT(67),
  [1207] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
  [1210] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(443),
  [1212] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_case_statement_repeat1, 1), REDUCE(aux_sym_case_statement_repeat1, 2),
  [1215] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_case_statement_repeat1, 1), REDUCE(aux_sym_case_statement_repeat1, 2),
  [1218] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_case_statement_repeat1, 1), REDUCE(aux_sym_case_statement_repeat1, 2),
  [1221] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 4, .rename_sequence_id = 13), REDUCE(sym_function_definition, 5, .rename_sequence_id = 16),
  [1224] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(444),
  [1226] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3), REDUCE(sym_list, 3), SHIFT(65),
  [1230] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3), REDUCE(sym_list, 3), SHIFT(66),
  [1234] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3), REDUCE(sym_list, 3), SHIFT(67),
  [1238] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1), REDUCE(aux_sym_command_repeat1, 2),
  [1241] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1), REDUCE(aux_sym_command_repeat1, 2),
  [1244] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9), REDUCE(sym_file_redirect, 3), SHIFT(417),
  [1251] = {.count = 7, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 1), REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_command, 2), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_file_redirect, 3), SHIFT(298),
  [1259] = {.count = 8, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 1), REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_command, 2), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9), REDUCE(sym_file_redirect, 3), SHIFT(81),
  [1268] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(445),
  [1270] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(aux_sym_bracket_command_repeat1, 2),
  [1273] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9), REDUCE(sym_file_redirect, 3),
  [1277] = {.count = 7, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 1), REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_command, 2), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9), REDUCE(sym_file_redirect, 3),
  [1285] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9), REDUCE(sym_file_redirect, 3),
  [1291] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9), REDUCE(sym_file_redirect, 3), SHIFT(420),
  [1298] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_file_redirect, 3), SHIFT(383),
  [1304] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9), REDUCE(sym_file_redirect, 3),
  [1310] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_file_redirect, 3), SHIFT(298),
  [1316] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9), REDUCE(sym_file_redirect, 3), SHIFT(81),
  [1323] = {.count = 7, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(aux_sym_quoted_argument_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(aux_sym_quoted_argument_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9), REDUCE(sym_file_redirect, 3),
  [1331] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_quoted_argument_repeat1, 1), REDUCE(aux_sym_quoted_argument_repeat1, 2),
  [1334] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(aux_sym_quoted_argument_repeat1, 1), REDUCE(aux_sym_heredoc_repeat1, 1), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(aux_sym_quoted_argument_repeat1, 2), REDUCE(aux_sym_heredoc_repeat1, 2),
  [1341] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(aux_sym_quoted_argument_repeat1, 1), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(aux_sym_quoted_argument_repeat1, 2),
  [1346] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_file_redirect, 3),
  [1351] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1), REDUCE(aux_sym_command_repeat2, 1), REDUCE(aux_sym_command_repeat1, 2), REDUCE(aux_sym_command_repeat2, 2),
  [1356] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 1), REDUCE(aux_sym_command_repeat2, 2),
  [1359] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1), REDUCE(aux_sym_command_repeat2, 1), REDUCE(aux_sym_command_repeat1, 2), REDUCE(aux_sym_command_repeat2, 2),
  [1364] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 1), REDUCE(aux_sym_command_repeat2, 2),
  [1367] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 2), REDUCE(sym_elif_clause, 4), SHIFT(231),
  [1371] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(154),
  [1374] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(155),
  [1377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(446),
  [1379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(447),
  [1381] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(449),
  [1383] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3), REDUCE(sym_command, 3, .rename_sequence_id = 8), REDUCE(sym_command, 4), REDUCE(sym_command, 4, .rename_sequence_id = 14),
  [1388] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(100),
  [1390] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(450),
  [1392] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(451),
  [1394] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(452),
  [1396] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(453),
  [1398] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(454),
  [1400] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(455),
  [1402] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(457),
  [1404] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(458),
  [1406] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(457),
  [1408] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(459),
  [1410] = {.count = 10, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2), REDUCE(sym_command, 2, .rename_sequence_id = 4), REDUCE(sym_command, 3), REDUCE(sym_command, 3, .rename_sequence_id = 11), REDUCE(sym_command, 3, .rename_sequence_id = 8), REDUCE(sym_command, 4), REDUCE(sym_command, 4, .rename_sequence_id = 14), REDUCE(sym_command, 4, .rename_sequence_id = 13), REDUCE(sym_command, 5), REDUCE(sym_command, 5, .rename_sequence_id = 16),
  [1421] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(461),
  [1423] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(462),
  [1425] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(231),
  [1428] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 3), REDUCE(sym_case_item, 3, .rename_sequence_id = 20),
  [1431] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_case_item, 3), REDUCE(sym_case_item, 3, .rename_sequence_id = 20),
  [1434] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 3), REDUCE(sym_case_item, 3, .rename_sequence_id = 20),
  [1437] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(463),
  [1439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(463),
  [1441] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2), REDUCE(sym_command, 3),
  [1444] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(464),
  [1446] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(465),
  [1448] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(466),
  [1450] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(467),
  [1452] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(468),
  [1454] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(469),
  [1456] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(445),
  [1458] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(472),
  [1460] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(473),
  [1462] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(474),
  [1464] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(475),
  [1466] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(476),
  [1468] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(477),
  [1470] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(478),
  [1472] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(479),
  [1474] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(481),
  [1476] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(482),
  [1478] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(483),
  [1480] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(478),
  [1482] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(485),
  [1484] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2), REDUCE(sym_file_redirect, 3),
  [1487] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2), REDUCE(sym_file_redirect, 3),
  [1490] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(487),
  [1492] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(488),
  [1494] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(489),
  [1496] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 3), REDUCE(sym_file_redirect, 3, .rename_sequence_id = 6),
  [1499] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 3), REDUCE(sym_file_redirect, 3, .rename_sequence_id = 6),
  [1502] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(491),
  [1504] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 5), REDUCE(sym_case_statement, 5, .rename_sequence_id = 15), REDUCE(sym_case_statement, 6), REDUCE(sym_case_statement, 6, .rename_sequence_id = 19),
  [1509] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(492),
  [1511] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(493),
  [1513] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_if_statement, 7),
  [1517] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 4), REDUCE(sym_case_item, 4, .rename_sequence_id = 22),
  [1520] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_case_item, 4), REDUCE(sym_case_item, 4, .rename_sequence_id = 22),
  [1523] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 4), REDUCE(sym_case_item, 4, .rename_sequence_id = 22),
  [1526] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_if_statement, 6),
  [1529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(494),
  [1531] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 6), REDUCE(sym_case_statement, 6, .rename_sequence_id = 19), REDUCE(sym_case_statement, 7), REDUCE(sym_case_statement, 7, .rename_sequence_id = 21),
  [1536] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(495),
  [1538] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(497),
  [1540] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(498),
  [1542] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(499),
  [1544] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 4), REDUCE(sym_command, 4, .rename_sequence_id = 13), REDUCE(sym_command, 5), REDUCE(sym_command, 5, .rename_sequence_id = 16),
  [1549] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(501),
  [1551] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(503),
  [1553] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(505),
  [1555] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(507),
  [1557] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(508),
  [1559] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(509),
  [1561] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(511),
  [1563] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(512),
  [1565] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(513),
  [1567] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3), REDUCE(sym_command, 4),
  [1570] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(515),
  [1572] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(516),
  [1574] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(518),
  [1576] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(520),
  [1578] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(521),
  [1580] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(522),
  [1582] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(524),
  [1584] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(525),
  [1586] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(526),
  [1588] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(526),
  [1590] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(527),
  [1592] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(528),
  [1594] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(529),
  [1596] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(530),
  [1598] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(530),
  [1600] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(531),
  [1602] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(532),
  [1604] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6), REDUCE(sym_if_statement, 7),
  [1607] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(534),
  [1609] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(535),
  [1611] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(536),
  [1613] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(536),
  [1615] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(537),
  [1617] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(540),
  [1619] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(543),
  [1621] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(544),
  [1623] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(545),
  [1625] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(545),
  [1627] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(546),
  [1629] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 4), REDUCE(sym_command, 5),
  [1632] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(547),
  [1634] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(548),
  [1636] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(549),
  [1638] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(549),
  [1640] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(550),
  [1642] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(551),
  [1644] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(552),
  [1646] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(553),
  [1648] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(554),
  [1650] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 6), REDUCE(sym_case_statement, 6, .rename_sequence_id = 19),
  [1653] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(555),
  [1655] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(556),
  [1657] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(557),
  [1659] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(560),
  [1661] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(561),
  [1663] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(562),
  [1665] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(563),
  [1667] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(564),
  [1669] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(565),
  [1671] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(566),
  [1673] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(567),
  [1675] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 7), REDUCE(sym_case_statement, 7, .rename_sequence_id = 21),
  [1678] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(568),
  [1680] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(569),
  [1682] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(570),
  [1684] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(571),
  [1686] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(572),
  [1688] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(573),
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
