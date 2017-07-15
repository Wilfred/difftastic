#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define LANGUAGE_VERSION 3
#define STATE_COUNT 574
#define SYMBOL_COUNT 89
#define TOKEN_COUNT 57
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
  anon_sym_function = 19,
  anon_sym_LPAREN = 20,
  anon_sym_LBRACE = 21,
  anon_sym_RBRACE = 22,
  anon_sym_LBRACK = 23,
  anon_sym_RBRACK = 24,
  anon_sym_LBRACK_LBRACK = 25,
  anon_sym_RBRACK_RBRACK = 26,
  anon_sym_COLON = 27,
  aux_sym_SLASH_BSLASHs_PLUS_SLASH = 28,
  anon_sym_PIPE = 29,
  anon_sym_PIPE_AMP = 30,
  anon_sym_AMP_AMP = 31,
  anon_sym_PIPE_PIPE = 32,
  anon_sym_EQ = 33,
  anon_sym_DQUOTE = 34,
  sym__quoted_chars = 35,
  sym_single_quoted_argument = 36,
  anon_sym_DOLLAR = 37,
  anon_sym_DOLLAR_LBRACE = 38,
  anon_sym_COLON_QMARK = 39,
  anon_sym_COLON_DASH = 40,
  anon_sym_DOLLAR_LPAREN = 41,
  anon_sym_LT = 42,
  anon_sym_GT = 43,
  anon_sym_GT_GT = 44,
  anon_sym_AMP_GT = 45,
  anon_sym_AMP_GT_GT = 46,
  anon_sym_LT_AMP = 47,
  anon_sym_GT_AMP = 48,
  anon_sym_LT_LT = 49,
  anon_sym_LT_LT_DASH = 50,
  sym_leading_word = 51,
  sym_word = 52,
  sym_comment = 53,
  anon_sym_SEMI = 54,
  anon_sym_LF = 55,
  anon_sym_AMP = 56,
  sym_program = 57,
  sym__terminated_statement = 58,
  sym_while_statement = 59,
  sym_do_group = 60,
  sym_if_statement = 61,
  sym_elif_clause = 62,
  sym_else_clause = 63,
  sym_case_statement = 64,
  sym_case_item = 65,
  sym_function_definition = 66,
  sym_compound_command = 67,
  sym_bracket_command = 68,
  sym_command = 69,
  sym_pipeline = 70,
  sym_list = 71,
  sym_subshell = 72,
  sym_environment_variable_assignment = 73,
  sym_quoted_argument = 74,
  sym_expansion = 75,
  sym_operator_expansion = 76,
  sym_command_substitution = 77,
  sym_file_redirect = 78,
  sym_heredoc_redirect = 79,
  sym_heredoc = 80,
  aux_sym_program_repeat1 = 81,
  aux_sym_if_statement_repeat1 = 82,
  aux_sym_case_statement_repeat1 = 83,
  aux_sym_bracket_command_repeat1 = 84,
  aux_sym_command_repeat1 = 85,
  aux_sym_command_repeat2 = 86,
  aux_sym_quoted_argument_repeat1 = 87,
  aux_sym_heredoc_repeat1 = 88,
  rename_sym_1 = 89,
  rename_sym_argument = 90,
  rename_sym_command_name = 91,
  rename_sym_variable_name = 92,
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
  [63] = {.lex_state = 108},
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
  [119] = {.lex_state = 234, .external_lex_state = 4},
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
  [137] = {.lex_state = 130},
  [138] = {.lex_state = 160, .external_lex_state = 2},
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
  [149] = {.lex_state = 108},
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
  [202] = {.lex_state = 234, .external_lex_state = 4},
  [203] = {.lex_state = 195, .external_lex_state = 2},
  [204] = {.lex_state = 175},
  [205] = {.lex_state = 116},
  [206] = {.lex_state = 234, .external_lex_state = 4},
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
  [255] = {.lex_state = 234, .external_lex_state = 4},
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
  [278] = {.lex_state = 234, .external_lex_state = 4},
  [279] = {.lex_state = 234, .external_lex_state = 4},
  [280] = {.lex_state = 221},
  [281] = {.lex_state = 234, .external_lex_state = 4},
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
  [317] = {.lex_state = 234, .external_lex_state = 4},
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
  [330] = {.lex_state = 234, .external_lex_state = 4},
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
  [366] = {.lex_state = 234, .external_lex_state = 4},
  [367] = {.lex_state = 234, .external_lex_state = 4},
  [368] = {.lex_state = 253, .external_lex_state = 2},
  [369] = {.lex_state = 253, .external_lex_state = 2},
  [370] = {.lex_state = 156},
  [371] = {.lex_state = 215, .external_lex_state = 2},
  [372] = {.lex_state = 156},
  [373] = {.lex_state = 217},
  [374] = {.lex_state = 156},
  [375] = {.lex_state = 263, .external_lex_state = 2},
  [376] = {.lex_state = 118, .external_lex_state = 2},
  [377] = {.lex_state = 320, .external_lex_state = 5},
  [378] = {.lex_state = 325, .external_lex_state = 2},
  [379] = {.lex_state = 108},
  [380] = {.lex_state = 329, .external_lex_state = 2},
  [381] = {.lex_state = 320, .external_lex_state = 5},
  [382] = {.lex_state = 108},
  [383] = {.lex_state = 193, .external_lex_state = 3},
  [384] = {.lex_state = 334, .external_lex_state = 2},
  [385] = {.lex_state = 380, .external_lex_state = 2},
  [386] = {.lex_state = 234, .external_lex_state = 4},
  [387] = {.lex_state = 234, .external_lex_state = 4},
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
  [399] = {.lex_state = 320, .external_lex_state = 5},
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
  [411] = {.lex_state = 234, .external_lex_state = 4},
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
  [431] = {.lex_state = 320, .external_lex_state = 5},
  [432] = {.lex_state = 320, .external_lex_state = 5},
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
  [445] = {.lex_state = 320, .external_lex_state = 5},
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
  [478] = {.lex_state = 320, .external_lex_state = 5},
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
    [anon_sym_function] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_RBRACK] = ACTIONS(47),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(49),
    [anon_sym_COLON] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(53),
    [anon_sym_PIPE_PIPE] = ACTIONS(55),
    [anon_sym_EQ] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [anon_sym_DOLLAR] = ACTIONS(61),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_GT_GT] = ACTIONS(65),
    [anon_sym_LT_AMP] = ACTIONS(65),
    [anon_sym_GT_AMP] = ACTIONS(65),
    [anon_sym_LT_LT] = ACTIONS(67),
    [anon_sym_LT_LT_DASH] = ACTIONS(69),
    [sym_comment] = ACTIONS(71),
    [anon_sym_SEMI] = ACTIONS(73),
    [anon_sym_AMP] = ACTIONS(73),
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
    [sym_file_descriptor] = ACTIONS(75),
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_function] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_single_quoted_argument] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_AMP_GT] = ACTIONS(99),
    [anon_sym_AMP_GT_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_leading_word] = ACTIONS(101),
    [sym_comment] = ACTIONS(71),
  },
  [2] = {
    [anon_sym_LT] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(103),
    [anon_sym_GT_GT] = ACTIONS(105),
    [anon_sym_AMP_GT] = ACTIONS(103),
    [anon_sym_AMP_GT_GT] = ACTIONS(105),
    [anon_sym_LT_AMP] = ACTIONS(105),
    [anon_sym_GT_AMP] = ACTIONS(105),
    [sym_comment] = ACTIONS(71),
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
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_function] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_single_quoted_argument] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_AMP_GT] = ACTIONS(99),
    [anon_sym_AMP_GT_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_leading_word] = ACTIONS(101),
    [sym_comment] = ACTIONS(71),
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
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_function] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_single_quoted_argument] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_AMP_GT] = ACTIONS(99),
    [anon_sym_AMP_GT_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_leading_word] = ACTIONS(101),
    [sym_comment] = ACTIONS(71),
  },
  [5] = {
    [sym_quoted_argument] = STATE(27),
    [sym_expansion] = STATE(27),
    [sym_operator_expansion] = STATE(27),
    [sym_command_substitution] = STATE(27),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_single_quoted_argument] = ACTIONS(109),
    [anon_sym_DOLLAR] = ACTIONS(111),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(113),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(115),
    [sym_word] = ACTIONS(117),
    [sym_comment] = ACTIONS(71),
  },
  [6] = {
    [sym_leading_word] = ACTIONS(119),
    [sym_comment] = ACTIONS(71),
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
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_RPAREN] = ACTIONS(121),
    [anon_sym_function] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_single_quoted_argument] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_AMP_GT] = ACTIONS(99),
    [anon_sym_AMP_GT_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_leading_word] = ACTIONS(101),
    [sym_comment] = ACTIONS(71),
  },
  [8] = {
    [sym_quoted_argument] = STATE(36),
    [sym_expansion] = STATE(36),
    [sym_operator_expansion] = STATE(36),
    [sym_command_substitution] = STATE(36),
    [aux_sym_bracket_command_repeat1] = STATE(41),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [sym_single_quoted_argument] = ACTIONS(125),
    [anon_sym_DOLLAR] = ACTIONS(127),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(129),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(131),
    [sym_word] = ACTIONS(133),
    [sym_comment] = ACTIONS(71),
  },
  [9] = {
    [sym_quoted_argument] = STATE(36),
    [sym_expansion] = STATE(36),
    [sym_operator_expansion] = STATE(36),
    [sym_command_substitution] = STATE(36),
    [aux_sym_bracket_command_repeat1] = STATE(42),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [sym_single_quoted_argument] = ACTIONS(125),
    [anon_sym_DOLLAR] = ACTIONS(127),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(129),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(131),
    [sym_word] = ACTIONS(133),
    [sym_comment] = ACTIONS(71),
  },
  [10] = {
    [sym_file_redirect] = STATE(47),
    [sym_heredoc_redirect] = STATE(47),
    [aux_sym_command_repeat2] = STATE(48),
    [sym_file_descriptor] = ACTIONS(135),
    [anon_sym_SEMI_SEMI] = ACTIONS(137),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(139),
    [anon_sym_PIPE] = ACTIONS(137),
    [anon_sym_PIPE_AMP] = ACTIONS(137),
    [anon_sym_AMP_AMP] = ACTIONS(137),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
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
    [anon_sym_SEMI] = ACTIONS(137),
    [anon_sym_LF] = ACTIONS(137),
    [anon_sym_AMP] = ACTIONS(137),
  },
  [11] = {
    [sym_expansion] = STATE(50),
    [sym_operator_expansion] = STATE(50),
    [sym_command_substitution] = STATE(50),
    [aux_sym_quoted_argument_repeat1] = STATE(54),
    [anon_sym_DQUOTE] = ACTIONS(147),
    [sym__quoted_chars] = ACTIONS(149),
    [anon_sym_DOLLAR] = ACTIONS(151),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(153),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(155),
    [sym_comment] = ACTIONS(145),
  },
  [12] = {
    [sym_quoted_argument] = STATE(56),
    [sym_expansion] = STATE(56),
    [sym_operator_expansion] = STATE(56),
    [sym_command_substitution] = STATE(56),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [sym_single_quoted_argument] = ACTIONS(159),
    [anon_sym_DOLLAR] = ACTIONS(161),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(163),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(165),
    [sym_word] = ACTIONS(167),
    [sym_comment] = ACTIONS(71),
  },
  [13] = {
    [sym_file_redirect] = STATE(47),
    [sym_heredoc_redirect] = STATE(47),
    [aux_sym_command_repeat2] = STATE(64),
    [sym_file_descriptor] = ACTIONS(135),
    [anon_sym_SEMI_SEMI] = ACTIONS(169),
    [anon_sym_LPAREN] = ACTIONS(171),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(173),
    [anon_sym_PIPE] = ACTIONS(169),
    [anon_sym_PIPE_AMP] = ACTIONS(169),
    [anon_sym_AMP_AMP] = ACTIONS(169),
    [anon_sym_PIPE_PIPE] = ACTIONS(169),
    [anon_sym_EQ] = ACTIONS(175),
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
    [anon_sym_SEMI] = ACTIONS(169),
    [anon_sym_LF] = ACTIONS(169),
    [anon_sym_AMP] = ACTIONS(169),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [sym_comment] = ACTIONS(71),
  },
  [15] = {
    [sym_file_descriptor] = ACTIONS(179),
    [ts_builtin_sym_end] = ACTIONS(179),
    [anon_sym_while] = ACTIONS(181),
    [anon_sym_done] = ACTIONS(181),
    [anon_sym_if] = ACTIONS(181),
    [anon_sym_fi] = ACTIONS(181),
    [anon_sym_elif] = ACTIONS(181),
    [anon_sym_else] = ACTIONS(181),
    [anon_sym_case] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(179),
    [anon_sym_SEMI_SEMI] = ACTIONS(179),
    [anon_sym_function] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(179),
    [anon_sym_RBRACE] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(181),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(181),
    [anon_sym_COLON] = ACTIONS(179),
    [anon_sym_DQUOTE] = ACTIONS(179),
    [sym_single_quoted_argument] = ACTIONS(181),
    [anon_sym_LT] = ACTIONS(181),
    [anon_sym_GT] = ACTIONS(181),
    [anon_sym_GT_GT] = ACTIONS(181),
    [anon_sym_AMP_GT] = ACTIONS(181),
    [anon_sym_AMP_GT_GT] = ACTIONS(181),
    [anon_sym_LT_AMP] = ACTIONS(181),
    [anon_sym_GT_AMP] = ACTIONS(181),
    [sym_leading_word] = ACTIONS(183),
    [sym_comment] = ACTIONS(71),
  },
  [16] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(185),
    [anon_sym_PIPE] = ACTIONS(187),
    [anon_sym_PIPE_AMP] = ACTIONS(187),
    [anon_sym_AMP_AMP] = ACTIONS(189),
    [anon_sym_PIPE_PIPE] = ACTIONS(189),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(185),
    [anon_sym_LF] = ACTIONS(185),
    [anon_sym_AMP] = ACTIONS(185),
  },
  [17] = {
    [sym_file_descriptor] = ACTIONS(191),
    [anon_sym_SEMI_SEMI] = ACTIONS(185),
    [anon_sym_COLON] = ACTIONS(193),
    [anon_sym_PIPE] = ACTIONS(187),
    [anon_sym_PIPE_AMP] = ACTIONS(187),
    [anon_sym_AMP_AMP] = ACTIONS(189),
    [anon_sym_PIPE_PIPE] = ACTIONS(189),
    [anon_sym_DQUOTE] = ACTIONS(193),
    [sym_single_quoted_argument] = ACTIONS(193),
    [anon_sym_LT] = ACTIONS(193),
    [anon_sym_GT] = ACTIONS(193),
    [anon_sym_GT_GT] = ACTIONS(193),
    [anon_sym_AMP_GT] = ACTIONS(193),
    [anon_sym_AMP_GT_GT] = ACTIONS(193),
    [anon_sym_LT_AMP] = ACTIONS(193),
    [anon_sym_GT_AMP] = ACTIONS(193),
    [sym_leading_word] = ACTIONS(193),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(185),
    [anon_sym_LF] = ACTIONS(185),
    [anon_sym_AMP] = ACTIONS(185),
  },
  [18] = {
    [sym_file_descriptor] = ACTIONS(191),
    [anon_sym_COLON] = ACTIONS(191),
    [anon_sym_DQUOTE] = ACTIONS(191),
    [sym_single_quoted_argument] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(195),
    [anon_sym_GT] = ACTIONS(195),
    [anon_sym_GT_GT] = ACTIONS(195),
    [anon_sym_AMP_GT] = ACTIONS(195),
    [anon_sym_AMP_GT_GT] = ACTIONS(195),
    [anon_sym_LT_AMP] = ACTIONS(195),
    [anon_sym_GT_AMP] = ACTIONS(195),
    [sym_leading_word] = ACTIONS(193),
    [sym_comment] = ACTIONS(71),
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
    [sym_file_descriptor] = ACTIONS(75),
    [ts_builtin_sym_end] = ACTIONS(197),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_function] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_single_quoted_argument] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_AMP_GT] = ACTIONS(99),
    [anon_sym_AMP_GT_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_leading_word] = ACTIONS(101),
    [sym_comment] = ACTIONS(71),
  },
  [20] = {
    [sym_environment_variable_assignment] = STATE(71),
    [sym_quoted_argument] = STATE(69),
    [sym_file_redirect] = STATE(71),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(199),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_single_quoted_argument] = ACTIONS(201),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_AMP_GT] = ACTIONS(99),
    [anon_sym_AMP_GT_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_leading_word] = ACTIONS(203),
    [sym_comment] = ACTIONS(71),
  },
  [21] = {
    [sym_quoted_argument] = STATE(72),
    [sym_expansion] = STATE(72),
    [sym_operator_expansion] = STATE(72),
    [sym_command_substitution] = STATE(72),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [sym_single_quoted_argument] = ACTIONS(205),
    [anon_sym_DOLLAR] = ACTIONS(161),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(163),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(165),
    [sym_word] = ACTIONS(207),
    [sym_comment] = ACTIONS(71),
  },
  [22] = {
    [sym_do_group] = STATE(75),
    [anon_sym_do] = ACTIONS(209),
    [sym_comment] = ACTIONS(71),
  },
  [23] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(211),
    [anon_sym_PIPE] = ACTIONS(187),
    [anon_sym_PIPE_AMP] = ACTIONS(187),
    [anon_sym_AMP_AMP] = ACTIONS(189),
    [anon_sym_PIPE_PIPE] = ACTIONS(189),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(211),
    [anon_sym_LF] = ACTIONS(211),
    [anon_sym_AMP] = ACTIONS(211),
  },
  [24] = {
    [sym_file_descriptor] = ACTIONS(191),
    [anon_sym_SEMI_SEMI] = ACTIONS(211),
    [anon_sym_COLON] = ACTIONS(193),
    [anon_sym_PIPE] = ACTIONS(187),
    [anon_sym_PIPE_AMP] = ACTIONS(187),
    [anon_sym_AMP_AMP] = ACTIONS(189),
    [anon_sym_PIPE_PIPE] = ACTIONS(189),
    [anon_sym_DQUOTE] = ACTIONS(193),
    [sym_single_quoted_argument] = ACTIONS(193),
    [anon_sym_LT] = ACTIONS(193),
    [anon_sym_GT] = ACTIONS(193),
    [anon_sym_GT_GT] = ACTIONS(193),
    [anon_sym_AMP_GT] = ACTIONS(193),
    [anon_sym_AMP_GT_GT] = ACTIONS(193),
    [anon_sym_LT_AMP] = ACTIONS(193),
    [anon_sym_GT_AMP] = ACTIONS(193),
    [sym_leading_word] = ACTIONS(193),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(211),
    [anon_sym_LF] = ACTIONS(211),
    [anon_sym_AMP] = ACTIONS(211),
  },
  [25] = {
    [anon_sym_then] = ACTIONS(213),
    [sym_comment] = ACTIONS(71),
  },
  [26] = {
    [sym_expansion] = STATE(50),
    [sym_operator_expansion] = STATE(50),
    [sym_command_substitution] = STATE(50),
    [aux_sym_quoted_argument_repeat1] = STATE(79),
    [anon_sym_DQUOTE] = ACTIONS(215),
    [sym__quoted_chars] = ACTIONS(149),
    [anon_sym_DOLLAR] = ACTIONS(151),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(153),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(155),
    [sym_comment] = ACTIONS(145),
  },
  [27] = {
    [anon_sym_in] = ACTIONS(217),
    [anon_sym_SEMI_SEMI] = ACTIONS(219),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(219),
    [anon_sym_LF] = ACTIONS(219),
    [anon_sym_AMP] = ACTIONS(219),
  },
  [28] = {
    [anon_sym_DOLLAR] = ACTIONS(221),
    [sym_word] = ACTIONS(223),
    [sym_comment] = ACTIONS(71),
  },
  [29] = {
    [sym_leading_word] = ACTIONS(225),
    [sym_comment] = ACTIONS(71),
  },
  [30] = {
    [sym_command] = STATE(88),
    [sym_environment_variable_assignment] = STATE(18),
    [sym_quoted_argument] = STATE(85),
    [sym_file_redirect] = STATE(18),
    [aux_sym_command_repeat1] = STATE(89),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [sym_single_quoted_argument] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_AMP_GT] = ACTIONS(99),
    [anon_sym_AMP_GT_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_leading_word] = ACTIONS(233),
    [sym_comment] = ACTIONS(71),
  },
  [31] = {
    [anon_sym_in] = ACTIONS(235),
    [anon_sym_SEMI_SEMI] = ACTIONS(237),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(237),
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_AMP] = ACTIONS(237),
  },
  [32] = {
    [anon_sym_LPAREN] = ACTIONS(239),
    [sym_comment] = ACTIONS(71),
  },
  [33] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(241),
    [anon_sym_PIPE] = ACTIONS(241),
    [anon_sym_PIPE_AMP] = ACTIONS(241),
    [anon_sym_AMP_AMP] = ACTIONS(241),
    [anon_sym_PIPE_PIPE] = ACTIONS(241),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(241),
    [anon_sym_LF] = ACTIONS(241),
    [anon_sym_AMP] = ACTIONS(241),
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
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_function] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_single_quoted_argument] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_AMP_GT] = ACTIONS(99),
    [anon_sym_AMP_GT_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_leading_word] = ACTIONS(101),
    [sym_comment] = ACTIONS(71),
  },
  [35] = {
    [sym_expansion] = STATE(50),
    [sym_operator_expansion] = STATE(50),
    [sym_command_substitution] = STATE(50),
    [aux_sym_quoted_argument_repeat1] = STATE(95),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [sym__quoted_chars] = ACTIONS(149),
    [anon_sym_DOLLAR] = ACTIONS(151),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(153),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(155),
    [sym_comment] = ACTIONS(145),
  },
  [36] = {
    [anon_sym_RBRACK] = ACTIONS(247),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(247),
    [anon_sym_DQUOTE] = ACTIONS(249),
    [sym_single_quoted_argument] = ACTIONS(247),
    [anon_sym_DOLLAR] = ACTIONS(247),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(249),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(249),
    [sym_word] = ACTIONS(251),
    [sym_comment] = ACTIONS(71),
  },
  [37] = {
    [anon_sym_DOLLAR] = ACTIONS(253),
    [sym_word] = ACTIONS(255),
    [sym_comment] = ACTIONS(71),
  },
  [38] = {
    [sym_leading_word] = ACTIONS(257),
    [sym_comment] = ACTIONS(71),
  },
  [39] = {
    [sym_command] = STATE(99),
    [sym_environment_variable_assignment] = STATE(18),
    [sym_quoted_argument] = STATE(85),
    [sym_file_redirect] = STATE(18),
    [aux_sym_command_repeat1] = STATE(89),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [sym_single_quoted_argument] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_AMP_GT] = ACTIONS(99),
    [anon_sym_AMP_GT_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_leading_word] = ACTIONS(233),
    [sym_comment] = ACTIONS(71),
  },
  [40] = {
    [anon_sym_RBRACK] = ACTIONS(259),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(259),
    [anon_sym_DQUOTE] = ACTIONS(261),
    [sym_single_quoted_argument] = ACTIONS(259),
    [anon_sym_DOLLAR] = ACTIONS(259),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(261),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(261),
    [sym_word] = ACTIONS(263),
    [sym_comment] = ACTIONS(71),
  },
  [41] = {
    [sym_quoted_argument] = STATE(101),
    [sym_expansion] = STATE(101),
    [sym_operator_expansion] = STATE(101),
    [sym_command_substitution] = STATE(101),
    [anon_sym_RBRACK] = ACTIONS(265),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [sym_single_quoted_argument] = ACTIONS(267),
    [anon_sym_DOLLAR] = ACTIONS(127),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(129),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(131),
    [sym_word] = ACTIONS(269),
    [sym_comment] = ACTIONS(71),
  },
  [42] = {
    [sym_quoted_argument] = STATE(101),
    [sym_expansion] = STATE(101),
    [sym_operator_expansion] = STATE(101),
    [sym_command_substitution] = STATE(101),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(265),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [sym_single_quoted_argument] = ACTIONS(267),
    [anon_sym_DOLLAR] = ACTIONS(127),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(129),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(131),
    [sym_word] = ACTIONS(269),
    [sym_comment] = ACTIONS(71),
  },
  [43] = {
    [anon_sym_LT] = ACTIONS(271),
    [anon_sym_GT] = ACTIONS(271),
    [anon_sym_GT_GT] = ACTIONS(273),
    [anon_sym_AMP_GT] = ACTIONS(271),
    [anon_sym_AMP_GT_GT] = ACTIONS(273),
    [anon_sym_LT_AMP] = ACTIONS(273),
    [anon_sym_GT_AMP] = ACTIONS(273),
    [sym_comment] = ACTIONS(71),
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
    [sym_file_descriptor] = ACTIONS(135),
    [anon_sym_SEMI_SEMI] = ACTIONS(275),
    [anon_sym_PIPE] = ACTIONS(275),
    [anon_sym_PIPE_AMP] = ACTIONS(275),
    [anon_sym_AMP_AMP] = ACTIONS(275),
    [anon_sym_PIPE_PIPE] = ACTIONS(275),
    [anon_sym_DQUOTE] = ACTIONS(277),
    [sym_single_quoted_argument] = ACTIONS(279),
    [anon_sym_DOLLAR] = ACTIONS(281),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(283),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(285),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_GT_GT] = ACTIONS(141),
    [anon_sym_AMP_GT] = ACTIONS(141),
    [anon_sym_AMP_GT_GT] = ACTIONS(141),
    [anon_sym_LT_AMP] = ACTIONS(141),
    [anon_sym_GT_AMP] = ACTIONS(141),
    [anon_sym_LT_LT] = ACTIONS(143),
    [anon_sym_LT_LT_DASH] = ACTIONS(143),
    [sym_word] = ACTIONS(287),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(275),
    [anon_sym_LF] = ACTIONS(275),
    [anon_sym_AMP] = ACTIONS(275),
  },
  [45] = {
    [sym_quoted_argument] = STATE(113),
    [sym_expansion] = STATE(113),
    [sym_operator_expansion] = STATE(113),
    [sym_command_substitution] = STATE(113),
    [anon_sym_DQUOTE] = ACTIONS(289),
    [sym_single_quoted_argument] = ACTIONS(291),
    [anon_sym_DOLLAR] = ACTIONS(293),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(295),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(297),
    [sym_word] = ACTIONS(299),
    [sym_comment] = ACTIONS(71),
  },
  [46] = {
    [sym_heredoc] = STATE(120),
    [sym__simple_heredoc] = ACTIONS(301),
    [sym__heredoc_beginning] = ACTIONS(303),
    [sym_comment] = ACTIONS(71),
  },
  [47] = {
    [sym_file_descriptor] = ACTIONS(305),
    [anon_sym_SEMI_SEMI] = ACTIONS(307),
    [anon_sym_PIPE] = ACTIONS(307),
    [anon_sym_PIPE_AMP] = ACTIONS(307),
    [anon_sym_AMP_AMP] = ACTIONS(307),
    [anon_sym_PIPE_PIPE] = ACTIONS(307),
    [anon_sym_LT] = ACTIONS(307),
    [anon_sym_GT] = ACTIONS(307),
    [anon_sym_GT_GT] = ACTIONS(307),
    [anon_sym_AMP_GT] = ACTIONS(307),
    [anon_sym_AMP_GT_GT] = ACTIONS(307),
    [anon_sym_LT_AMP] = ACTIONS(307),
    [anon_sym_GT_AMP] = ACTIONS(307),
    [anon_sym_LT_LT] = ACTIONS(307),
    [anon_sym_LT_LT_DASH] = ACTIONS(307),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(307),
    [anon_sym_LF] = ACTIONS(307),
    [anon_sym_AMP] = ACTIONS(307),
  },
  [48] = {
    [sym_file_redirect] = STATE(121),
    [sym_heredoc_redirect] = STATE(121),
    [sym_file_descriptor] = ACTIONS(135),
    [anon_sym_SEMI_SEMI] = ACTIONS(275),
    [anon_sym_PIPE] = ACTIONS(275),
    [anon_sym_PIPE_AMP] = ACTIONS(275),
    [anon_sym_AMP_AMP] = ACTIONS(275),
    [anon_sym_PIPE_PIPE] = ACTIONS(275),
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
    [anon_sym_SEMI] = ACTIONS(275),
    [anon_sym_LF] = ACTIONS(275),
    [anon_sym_AMP] = ACTIONS(275),
  },
  [49] = {
    [sym_file_descriptor] = ACTIONS(309),
    [anon_sym_SEMI_SEMI] = ACTIONS(311),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(311),
    [anon_sym_PIPE] = ACTIONS(311),
    [anon_sym_PIPE_AMP] = ACTIONS(311),
    [anon_sym_AMP_AMP] = ACTIONS(311),
    [anon_sym_PIPE_PIPE] = ACTIONS(311),
    [anon_sym_LT] = ACTIONS(311),
    [anon_sym_GT] = ACTIONS(311),
    [anon_sym_GT_GT] = ACTIONS(311),
    [anon_sym_AMP_GT] = ACTIONS(311),
    [anon_sym_AMP_GT_GT] = ACTIONS(311),
    [anon_sym_LT_AMP] = ACTIONS(311),
    [anon_sym_GT_AMP] = ACTIONS(311),
    [anon_sym_LT_LT] = ACTIONS(311),
    [anon_sym_LT_LT_DASH] = ACTIONS(311),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(311),
    [anon_sym_LF] = ACTIONS(311),
    [anon_sym_AMP] = ACTIONS(311),
  },
  [50] = {
    [anon_sym_DQUOTE] = ACTIONS(313),
    [sym__quoted_chars] = ACTIONS(315),
    [anon_sym_DOLLAR] = ACTIONS(313),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(313),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(313),
    [sym_comment] = ACTIONS(145),
  },
  [51] = {
    [anon_sym_DOLLAR] = ACTIONS(317),
    [sym_word] = ACTIONS(319),
    [sym_comment] = ACTIONS(71),
  },
  [52] = {
    [sym_leading_word] = ACTIONS(321),
    [sym_comment] = ACTIONS(71),
  },
  [53] = {
    [sym_command] = STATE(125),
    [sym_environment_variable_assignment] = STATE(18),
    [sym_quoted_argument] = STATE(85),
    [sym_file_redirect] = STATE(18),
    [aux_sym_command_repeat1] = STATE(89),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [sym_single_quoted_argument] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_AMP_GT] = ACTIONS(99),
    [anon_sym_AMP_GT_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_leading_word] = ACTIONS(233),
    [sym_comment] = ACTIONS(71),
  },
  [54] = {
    [sym_expansion] = STATE(127),
    [sym_operator_expansion] = STATE(127),
    [sym_command_substitution] = STATE(127),
    [anon_sym_DQUOTE] = ACTIONS(323),
    [sym__quoted_chars] = ACTIONS(325),
    [anon_sym_DOLLAR] = ACTIONS(151),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(153),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(155),
    [sym_comment] = ACTIONS(145),
  },
  [55] = {
    [sym_expansion] = STATE(50),
    [sym_operator_expansion] = STATE(50),
    [sym_command_substitution] = STATE(50),
    [aux_sym_quoted_argument_repeat1] = STATE(129),
    [anon_sym_DQUOTE] = ACTIONS(327),
    [sym__quoted_chars] = ACTIONS(149),
    [anon_sym_DOLLAR] = ACTIONS(151),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(153),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(155),
    [sym_comment] = ACTIONS(145),
  },
  [56] = {
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
    [sym_comment] = ACTIONS(71),
  },
  [57] = {
    [anon_sym_DOLLAR] = ACTIONS(335),
    [sym_word] = ACTIONS(337),
    [sym_comment] = ACTIONS(71),
  },
  [58] = {
    [sym_leading_word] = ACTIONS(339),
    [sym_comment] = ACTIONS(71),
  },
  [59] = {
    [sym_command] = STATE(133),
    [sym_environment_variable_assignment] = STATE(18),
    [sym_quoted_argument] = STATE(85),
    [sym_file_redirect] = STATE(18),
    [aux_sym_command_repeat1] = STATE(89),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [sym_single_quoted_argument] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_AMP_GT] = ACTIONS(99),
    [anon_sym_AMP_GT_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_leading_word] = ACTIONS(233),
    [sym_comment] = ACTIONS(71),
  },
  [60] = {
    [sym_file_descriptor] = ACTIONS(341),
    [anon_sym_COLON] = ACTIONS(341),
    [anon_sym_DQUOTE] = ACTIONS(341),
    [sym_single_quoted_argument] = ACTIONS(343),
    [anon_sym_LT] = ACTIONS(343),
    [anon_sym_GT] = ACTIONS(343),
    [anon_sym_GT_GT] = ACTIONS(343),
    [anon_sym_AMP_GT] = ACTIONS(343),
    [anon_sym_AMP_GT_GT] = ACTIONS(343),
    [anon_sym_LT_AMP] = ACTIONS(343),
    [anon_sym_GT_AMP] = ACTIONS(343),
    [sym_leading_word] = ACTIONS(345),
    [sym_comment] = ACTIONS(71),
  },
  [61] = {
    [anon_sym_RPAREN] = ACTIONS(347),
    [sym_comment] = ACTIONS(71),
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
    [sym_file_descriptor] = ACTIONS(135),
    [anon_sym_SEMI_SEMI] = ACTIONS(349),
    [anon_sym_PIPE] = ACTIONS(349),
    [anon_sym_PIPE_AMP] = ACTIONS(349),
    [anon_sym_AMP_AMP] = ACTIONS(349),
    [anon_sym_PIPE_PIPE] = ACTIONS(349),
    [anon_sym_DQUOTE] = ACTIONS(277),
    [sym_single_quoted_argument] = ACTIONS(279),
    [anon_sym_DOLLAR] = ACTIONS(281),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(283),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(285),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_GT_GT] = ACTIONS(141),
    [anon_sym_AMP_GT] = ACTIONS(141),
    [anon_sym_AMP_GT_GT] = ACTIONS(141),
    [anon_sym_LT_AMP] = ACTIONS(141),
    [anon_sym_GT_AMP] = ACTIONS(141),
    [anon_sym_LT_LT] = ACTIONS(143),
    [anon_sym_LT_LT_DASH] = ACTIONS(143),
    [sym_word] = ACTIONS(287),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(349),
    [anon_sym_LF] = ACTIONS(349),
    [anon_sym_AMP] = ACTIONS(349),
  },
  [63] = {
    [sym_quoted_argument] = STATE(138),
    [sym_expansion] = STATE(138),
    [sym_operator_expansion] = STATE(138),
    [sym_command_substitution] = STATE(138),
    [anon_sym_DQUOTE] = ACTIONS(351),
    [sym_single_quoted_argument] = ACTIONS(353),
    [anon_sym_DOLLAR] = ACTIONS(355),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(357),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(359),
    [sym_word] = ACTIONS(361),
    [sym_comment] = ACTIONS(71),
  },
  [64] = {
    [sym_file_redirect] = STATE(121),
    [sym_heredoc_redirect] = STATE(121),
    [sym_file_descriptor] = ACTIONS(135),
    [anon_sym_SEMI_SEMI] = ACTIONS(349),
    [anon_sym_PIPE] = ACTIONS(349),
    [anon_sym_PIPE_AMP] = ACTIONS(349),
    [anon_sym_AMP_AMP] = ACTIONS(349),
    [anon_sym_PIPE_PIPE] = ACTIONS(349),
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
    [anon_sym_SEMI] = ACTIONS(349),
    [anon_sym_LF] = ACTIONS(349),
    [anon_sym_AMP] = ACTIONS(349),
  },
  [65] = {
    [sym_file_descriptor] = ACTIONS(363),
    [ts_builtin_sym_end] = ACTIONS(363),
    [anon_sym_while] = ACTIONS(365),
    [anon_sym_do] = ACTIONS(365),
    [anon_sym_done] = ACTIONS(365),
    [anon_sym_if] = ACTIONS(365),
    [anon_sym_then] = ACTIONS(365),
    [anon_sym_fi] = ACTIONS(365),
    [anon_sym_elif] = ACTIONS(365),
    [anon_sym_else] = ACTIONS(365),
    [anon_sym_case] = ACTIONS(365),
    [anon_sym_RPAREN] = ACTIONS(363),
    [anon_sym_SEMI_SEMI] = ACTIONS(363),
    [anon_sym_function] = ACTIONS(365),
    [anon_sym_LPAREN] = ACTIONS(363),
    [anon_sym_RBRACE] = ACTIONS(363),
    [anon_sym_LBRACK] = ACTIONS(365),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(365),
    [anon_sym_COLON] = ACTIONS(363),
    [anon_sym_DQUOTE] = ACTIONS(363),
    [sym_single_quoted_argument] = ACTIONS(365),
    [anon_sym_LT] = ACTIONS(365),
    [anon_sym_GT] = ACTIONS(365),
    [anon_sym_GT_GT] = ACTIONS(365),
    [anon_sym_AMP_GT] = ACTIONS(365),
    [anon_sym_AMP_GT_GT] = ACTIONS(365),
    [anon_sym_LT_AMP] = ACTIONS(365),
    [anon_sym_GT_AMP] = ACTIONS(365),
    [sym_leading_word] = ACTIONS(367),
    [sym_comment] = ACTIONS(71),
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
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_function] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_single_quoted_argument] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_AMP_GT] = ACTIONS(99),
    [anon_sym_AMP_GT_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_leading_word] = ACTIONS(101),
    [sym_comment] = ACTIONS(71),
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
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_function] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_single_quoted_argument] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_AMP_GT] = ACTIONS(99),
    [anon_sym_AMP_GT_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_leading_word] = ACTIONS(101),
    [sym_comment] = ACTIONS(71),
  },
  [68] = {
    [sym_file_descriptor] = ACTIONS(369),
    [ts_builtin_sym_end] = ACTIONS(369),
    [anon_sym_while] = ACTIONS(371),
    [anon_sym_done] = ACTIONS(371),
    [anon_sym_if] = ACTIONS(371),
    [anon_sym_fi] = ACTIONS(371),
    [anon_sym_elif] = ACTIONS(371),
    [anon_sym_else] = ACTIONS(371),
    [anon_sym_case] = ACTIONS(371),
    [anon_sym_RPAREN] = ACTIONS(369),
    [anon_sym_SEMI_SEMI] = ACTIONS(369),
    [anon_sym_function] = ACTIONS(371),
    [anon_sym_LPAREN] = ACTIONS(369),
    [anon_sym_RBRACE] = ACTIONS(369),
    [anon_sym_LBRACK] = ACTIONS(371),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(371),
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
    [sym_comment] = ACTIONS(71),
  },
  [69] = {
    [sym_file_redirect] = STATE(47),
    [sym_heredoc_redirect] = STATE(47),
    [aux_sym_command_repeat2] = STATE(111),
    [sym_file_descriptor] = ACTIONS(135),
    [anon_sym_SEMI_SEMI] = ACTIONS(275),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(375),
    [anon_sym_PIPE] = ACTIONS(275),
    [anon_sym_PIPE_AMP] = ACTIONS(275),
    [anon_sym_AMP_AMP] = ACTIONS(275),
    [anon_sym_PIPE_PIPE] = ACTIONS(275),
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
    [anon_sym_SEMI] = ACTIONS(275),
    [anon_sym_LF] = ACTIONS(275),
    [anon_sym_AMP] = ACTIONS(275),
  },
  [70] = {
    [sym_file_redirect] = STATE(47),
    [sym_heredoc_redirect] = STATE(47),
    [aux_sym_command_repeat2] = STATE(150),
    [sym_file_descriptor] = ACTIONS(135),
    [anon_sym_SEMI_SEMI] = ACTIONS(377),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(379),
    [anon_sym_PIPE] = ACTIONS(377),
    [anon_sym_PIPE_AMP] = ACTIONS(377),
    [anon_sym_AMP_AMP] = ACTIONS(377),
    [anon_sym_PIPE_PIPE] = ACTIONS(377),
    [anon_sym_EQ] = ACTIONS(381),
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
    [anon_sym_SEMI] = ACTIONS(377),
    [anon_sym_LF] = ACTIONS(377),
    [anon_sym_AMP] = ACTIONS(377),
  },
  [71] = {
    [sym_file_descriptor] = ACTIONS(383),
    [anon_sym_COLON] = ACTIONS(383),
    [anon_sym_DQUOTE] = ACTIONS(383),
    [sym_single_quoted_argument] = ACTIONS(385),
    [anon_sym_LT] = ACTIONS(385),
    [anon_sym_GT] = ACTIONS(385),
    [anon_sym_GT_GT] = ACTIONS(385),
    [anon_sym_AMP_GT] = ACTIONS(385),
    [anon_sym_AMP_GT_GT] = ACTIONS(385),
    [anon_sym_LT_AMP] = ACTIONS(385),
    [anon_sym_GT_AMP] = ACTIONS(385),
    [sym_leading_word] = ACTIONS(387),
    [sym_comment] = ACTIONS(71),
  },
  [72] = {
    [sym_file_descriptor] = ACTIONS(389),
    [anon_sym_COLON] = ACTIONS(389),
    [anon_sym_DQUOTE] = ACTIONS(389),
    [sym_single_quoted_argument] = ACTIONS(391),
    [anon_sym_LT] = ACTIONS(391),
    [anon_sym_GT] = ACTIONS(391),
    [anon_sym_GT_GT] = ACTIONS(391),
    [anon_sym_AMP_GT] = ACTIONS(391),
    [anon_sym_AMP_GT_GT] = ACTIONS(391),
    [anon_sym_LT_AMP] = ACTIONS(391),
    [anon_sym_GT_AMP] = ACTIONS(391),
    [sym_leading_word] = ACTIONS(393),
    [sym_comment] = ACTIONS(71),
  },
  [73] = {
    [sym_file_descriptor] = ACTIONS(395),
    [anon_sym_COLON] = ACTIONS(395),
    [anon_sym_DQUOTE] = ACTIONS(395),
    [sym_single_quoted_argument] = ACTIONS(397),
    [anon_sym_LT] = ACTIONS(397),
    [anon_sym_GT] = ACTIONS(397),
    [anon_sym_GT_GT] = ACTIONS(397),
    [anon_sym_AMP_GT] = ACTIONS(397),
    [anon_sym_AMP_GT_GT] = ACTIONS(397),
    [anon_sym_LT_AMP] = ACTIONS(397),
    [anon_sym_GT_AMP] = ACTIONS(397),
    [sym_leading_word] = ACTIONS(399),
    [sym_comment] = ACTIONS(71),
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
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_done] = ACTIONS(401),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_function] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_single_quoted_argument] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_AMP_GT] = ACTIONS(99),
    [anon_sym_AMP_GT_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_leading_word] = ACTIONS(101),
    [sym_comment] = ACTIONS(71),
  },
  [75] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(403),
    [anon_sym_PIPE] = ACTIONS(403),
    [anon_sym_PIPE_AMP] = ACTIONS(403),
    [anon_sym_AMP_AMP] = ACTIONS(403),
    [anon_sym_PIPE_PIPE] = ACTIONS(403),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(403),
    [anon_sym_LF] = ACTIONS(403),
    [anon_sym_AMP] = ACTIONS(403),
  },
  [76] = {
    [anon_sym_do] = ACTIONS(363),
    [anon_sym_then] = ACTIONS(363),
    [sym_comment] = ACTIONS(71),
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
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_fi] = ACTIONS(405),
    [anon_sym_elif] = ACTIONS(407),
    [anon_sym_else] = ACTIONS(409),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_function] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_single_quoted_argument] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_AMP_GT] = ACTIONS(99),
    [anon_sym_AMP_GT_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_leading_word] = ACTIONS(101),
    [sym_comment] = ACTIONS(71),
  },
  [78] = {
    [anon_sym_in] = ACTIONS(311),
    [anon_sym_SEMI_SEMI] = ACTIONS(311),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(311),
    [anon_sym_LF] = ACTIONS(311),
    [anon_sym_AMP] = ACTIONS(311),
  },
  [79] = {
    [sym_expansion] = STATE(127),
    [sym_operator_expansion] = STATE(127),
    [sym_command_substitution] = STATE(127),
    [anon_sym_DQUOTE] = ACTIONS(411),
    [sym__quoted_chars] = ACTIONS(325),
    [anon_sym_DOLLAR] = ACTIONS(151),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(153),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(155),
    [sym_comment] = ACTIONS(145),
  },
  [80] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(413),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(413),
    [anon_sym_LF] = ACTIONS(413),
    [anon_sym_AMP] = ACTIONS(413),
  },
  [81] = {
    [anon_sym_in] = ACTIONS(415),
    [sym_comment] = ACTIONS(71),
  },
  [82] = {
    [anon_sym_in] = ACTIONS(417),
    [anon_sym_SEMI_SEMI] = ACTIONS(417),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(417),
    [anon_sym_LF] = ACTIONS(417),
    [anon_sym_AMP] = ACTIONS(417),
  },
  [83] = {
    [anon_sym_in] = ACTIONS(419),
    [anon_sym_SEMI_SEMI] = ACTIONS(419),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(419),
    [anon_sym_LF] = ACTIONS(419),
    [anon_sym_AMP] = ACTIONS(419),
  },
  [84] = {
    [anon_sym_RBRACE] = ACTIONS(421),
    [anon_sym_COLON] = ACTIONS(423),
    [anon_sym_EQ] = ACTIONS(425),
    [anon_sym_COLON_QMARK] = ACTIONS(425),
    [anon_sym_COLON_DASH] = ACTIONS(425),
    [sym_comment] = ACTIONS(71),
  },
  [85] = {
    [sym_file_redirect] = STATE(169),
    [sym_heredoc_redirect] = STATE(169),
    [aux_sym_command_repeat2] = STATE(170),
    [sym_file_descriptor] = ACTIONS(427),
    [anon_sym_RPAREN] = ACTIONS(137),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(429),
    [anon_sym_LT] = ACTIONS(431),
    [anon_sym_GT] = ACTIONS(431),
    [anon_sym_GT_GT] = ACTIONS(431),
    [anon_sym_AMP_GT] = ACTIONS(431),
    [anon_sym_AMP_GT_GT] = ACTIONS(431),
    [anon_sym_LT_AMP] = ACTIONS(431),
    [anon_sym_GT_AMP] = ACTIONS(431),
    [anon_sym_LT_LT] = ACTIONS(433),
    [anon_sym_LT_LT_DASH] = ACTIONS(433),
    [sym_comment] = ACTIONS(145),
  },
  [86] = {
    [sym_expansion] = STATE(50),
    [sym_operator_expansion] = STATE(50),
    [sym_command_substitution] = STATE(50),
    [aux_sym_quoted_argument_repeat1] = STATE(172),
    [anon_sym_DQUOTE] = ACTIONS(435),
    [sym__quoted_chars] = ACTIONS(149),
    [anon_sym_DOLLAR] = ACTIONS(151),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(153),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(155),
    [sym_comment] = ACTIONS(145),
  },
  [87] = {
    [sym_file_redirect] = STATE(169),
    [sym_heredoc_redirect] = STATE(169),
    [aux_sym_command_repeat2] = STATE(174),
    [sym_file_descriptor] = ACTIONS(427),
    [anon_sym_RPAREN] = ACTIONS(169),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(437),
    [anon_sym_EQ] = ACTIONS(381),
    [anon_sym_LT] = ACTIONS(431),
    [anon_sym_GT] = ACTIONS(431),
    [anon_sym_GT_GT] = ACTIONS(431),
    [anon_sym_AMP_GT] = ACTIONS(431),
    [anon_sym_AMP_GT_GT] = ACTIONS(431),
    [anon_sym_LT_AMP] = ACTIONS(431),
    [anon_sym_GT_AMP] = ACTIONS(431),
    [anon_sym_LT_LT] = ACTIONS(433),
    [anon_sym_LT_LT_DASH] = ACTIONS(433),
    [sym_comment] = ACTIONS(145),
  },
  [88] = {
    [anon_sym_RPAREN] = ACTIONS(439),
    [sym_comment] = ACTIONS(71),
  },
  [89] = {
    [sym_environment_variable_assignment] = STATE(71),
    [sym_quoted_argument] = STATE(176),
    [sym_file_redirect] = STATE(71),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(441),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [sym_single_quoted_argument] = ACTIONS(443),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_AMP_GT] = ACTIONS(99),
    [anon_sym_AMP_GT_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_leading_word] = ACTIONS(445),
    [sym_comment] = ACTIONS(71),
  },
  [90] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(447),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(447),
    [anon_sym_LF] = ACTIONS(447),
    [anon_sym_AMP] = ACTIONS(447),
  },
  [91] = {
    [anon_sym_in] = ACTIONS(449),
    [sym_comment] = ACTIONS(71),
  },
  [92] = {
    [anon_sym_RPAREN] = ACTIONS(451),
    [sym_comment] = ACTIONS(71),
  },
  [93] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(453),
    [anon_sym_PIPE] = ACTIONS(453),
    [anon_sym_PIPE_AMP] = ACTIONS(453),
    [anon_sym_AMP_AMP] = ACTIONS(453),
    [anon_sym_PIPE_PIPE] = ACTIONS(453),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(453),
    [anon_sym_LF] = ACTIONS(453),
    [anon_sym_AMP] = ACTIONS(453),
  },
  [94] = {
    [anon_sym_RPAREN] = ACTIONS(309),
    [anon_sym_RBRACE] = ACTIONS(309),
    [anon_sym_RBRACK] = ACTIONS(455),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(455),
    [anon_sym_DQUOTE] = ACTIONS(309),
    [sym_single_quoted_argument] = ACTIONS(455),
    [anon_sym_DOLLAR] = ACTIONS(455),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(309),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(309),
    [sym_word] = ACTIONS(311),
    [sym_comment] = ACTIONS(71),
  },
  [95] = {
    [sym_expansion] = STATE(127),
    [sym_operator_expansion] = STATE(127),
    [sym_command_substitution] = STATE(127),
    [anon_sym_DQUOTE] = ACTIONS(457),
    [sym__quoted_chars] = ACTIONS(325),
    [anon_sym_DOLLAR] = ACTIONS(151),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(153),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(155),
    [sym_comment] = ACTIONS(145),
  },
  [96] = {
    [anon_sym_RPAREN] = ACTIONS(459),
    [anon_sym_RBRACE] = ACTIONS(459),
    [anon_sym_RBRACK] = ACTIONS(461),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(461),
    [anon_sym_DQUOTE] = ACTIONS(459),
    [sym_single_quoted_argument] = ACTIONS(461),
    [anon_sym_DOLLAR] = ACTIONS(461),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(459),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(459),
    [sym_word] = ACTIONS(417),
    [sym_comment] = ACTIONS(71),
  },
  [97] = {
    [anon_sym_RPAREN] = ACTIONS(463),
    [anon_sym_RBRACE] = ACTIONS(463),
    [anon_sym_RBRACK] = ACTIONS(465),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(465),
    [anon_sym_DQUOTE] = ACTIONS(463),
    [sym_single_quoted_argument] = ACTIONS(465),
    [anon_sym_DOLLAR] = ACTIONS(465),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(463),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(463),
    [sym_word] = ACTIONS(419),
    [sym_comment] = ACTIONS(71),
  },
  [98] = {
    [anon_sym_RBRACE] = ACTIONS(467),
    [anon_sym_COLON] = ACTIONS(469),
    [anon_sym_EQ] = ACTIONS(471),
    [anon_sym_COLON_QMARK] = ACTIONS(471),
    [anon_sym_COLON_DASH] = ACTIONS(471),
    [sym_comment] = ACTIONS(71),
  },
  [99] = {
    [anon_sym_RPAREN] = ACTIONS(473),
    [sym_comment] = ACTIONS(71),
  },
  [100] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(475),
    [anon_sym_PIPE] = ACTIONS(475),
    [anon_sym_PIPE_AMP] = ACTIONS(475),
    [anon_sym_AMP_AMP] = ACTIONS(475),
    [anon_sym_PIPE_PIPE] = ACTIONS(475),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(475),
    [anon_sym_LF] = ACTIONS(475),
    [anon_sym_AMP] = ACTIONS(475),
  },
  [101] = {
    [anon_sym_RBRACK] = ACTIONS(477),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(477),
    [anon_sym_DQUOTE] = ACTIONS(479),
    [sym_single_quoted_argument] = ACTIONS(477),
    [anon_sym_DOLLAR] = ACTIONS(477),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(479),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(479),
    [sym_word] = ACTIONS(481),
    [sym_comment] = ACTIONS(71),
  },
  [102] = {
    [anon_sym_RBRACK] = ACTIONS(483),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(483),
    [anon_sym_DQUOTE] = ACTIONS(485),
    [sym_single_quoted_argument] = ACTIONS(483),
    [anon_sym_DOLLAR] = ACTIONS(483),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(485),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(485),
    [sym_word] = ACTIONS(487),
    [sym_comment] = ACTIONS(71),
  },
  [103] = {
    [sym_quoted_argument] = STATE(185),
    [sym_expansion] = STATE(185),
    [sym_operator_expansion] = STATE(185),
    [sym_command_substitution] = STATE(185),
    [anon_sym_DQUOTE] = ACTIONS(289),
    [sym_single_quoted_argument] = ACTIONS(489),
    [anon_sym_DOLLAR] = ACTIONS(293),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(295),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(297),
    [sym_word] = ACTIONS(491),
    [sym_comment] = ACTIONS(71),
  },
  [104] = {
    [sym_expansion] = STATE(50),
    [sym_operator_expansion] = STATE(50),
    [sym_command_substitution] = STATE(50),
    [aux_sym_quoted_argument_repeat1] = STATE(188),
    [anon_sym_DQUOTE] = ACTIONS(493),
    [sym__quoted_chars] = ACTIONS(149),
    [anon_sym_DOLLAR] = ACTIONS(151),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(153),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(155),
    [sym_comment] = ACTIONS(145),
  },
  [105] = {
    [sym_file_descriptor] = ACTIONS(249),
    [anon_sym_SEMI_SEMI] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(251),
    [anon_sym_PIPE_AMP] = ACTIONS(251),
    [anon_sym_AMP_AMP] = ACTIONS(251),
    [anon_sym_PIPE_PIPE] = ACTIONS(251),
    [anon_sym_DQUOTE] = ACTIONS(251),
    [sym_single_quoted_argument] = ACTIONS(251),
    [anon_sym_DOLLAR] = ACTIONS(251),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(251),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(251),
    [anon_sym_LT] = ACTIONS(251),
    [anon_sym_GT] = ACTIONS(251),
    [anon_sym_GT_GT] = ACTIONS(251),
    [anon_sym_AMP_GT] = ACTIONS(251),
    [anon_sym_AMP_GT_GT] = ACTIONS(251),
    [anon_sym_LT_AMP] = ACTIONS(251),
    [anon_sym_GT_AMP] = ACTIONS(251),
    [anon_sym_LT_LT] = ACTIONS(251),
    [anon_sym_LT_LT_DASH] = ACTIONS(251),
    [sym_word] = ACTIONS(251),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(251),
    [anon_sym_LF] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(251),
  },
  [106] = {
    [anon_sym_DOLLAR] = ACTIONS(495),
    [sym_word] = ACTIONS(497),
    [sym_comment] = ACTIONS(71),
  },
  [107] = {
    [sym_leading_word] = ACTIONS(499),
    [sym_comment] = ACTIONS(71),
  },
  [108] = {
    [sym_command] = STATE(192),
    [sym_environment_variable_assignment] = STATE(18),
    [sym_quoted_argument] = STATE(85),
    [sym_file_redirect] = STATE(18),
    [aux_sym_command_repeat1] = STATE(89),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [sym_single_quoted_argument] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_AMP_GT] = ACTIONS(99),
    [anon_sym_AMP_GT_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_leading_word] = ACTIONS(233),
    [sym_comment] = ACTIONS(71),
  },
  [109] = {
    [sym_file_descriptor] = ACTIONS(261),
    [anon_sym_SEMI_SEMI] = ACTIONS(263),
    [anon_sym_PIPE] = ACTIONS(263),
    [anon_sym_PIPE_AMP] = ACTIONS(263),
    [anon_sym_AMP_AMP] = ACTIONS(263),
    [anon_sym_PIPE_PIPE] = ACTIONS(263),
    [anon_sym_DQUOTE] = ACTIONS(263),
    [sym_single_quoted_argument] = ACTIONS(263),
    [anon_sym_DOLLAR] = ACTIONS(263),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(263),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(263),
    [anon_sym_LT] = ACTIONS(263),
    [anon_sym_GT] = ACTIONS(263),
    [anon_sym_GT_GT] = ACTIONS(263),
    [anon_sym_AMP_GT] = ACTIONS(263),
    [anon_sym_AMP_GT_GT] = ACTIONS(263),
    [anon_sym_LT_AMP] = ACTIONS(263),
    [anon_sym_GT_AMP] = ACTIONS(263),
    [anon_sym_LT_LT] = ACTIONS(263),
    [anon_sym_LT_LT_DASH] = ACTIONS(263),
    [sym_word] = ACTIONS(263),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(263),
    [anon_sym_LF] = ACTIONS(263),
    [anon_sym_AMP] = ACTIONS(263),
  },
  [110] = {
    [sym_quoted_argument] = STATE(193),
    [sym_expansion] = STATE(193),
    [sym_operator_expansion] = STATE(193),
    [sym_command_substitution] = STATE(193),
    [sym_file_redirect] = STATE(47),
    [sym_heredoc_redirect] = STATE(47),
    [aux_sym_command_repeat2] = STATE(195),
    [sym_file_descriptor] = ACTIONS(135),
    [anon_sym_SEMI_SEMI] = ACTIONS(501),
    [anon_sym_PIPE] = ACTIONS(501),
    [anon_sym_PIPE_AMP] = ACTIONS(501),
    [anon_sym_AMP_AMP] = ACTIONS(501),
    [anon_sym_PIPE_PIPE] = ACTIONS(501),
    [anon_sym_DQUOTE] = ACTIONS(277),
    [sym_single_quoted_argument] = ACTIONS(503),
    [anon_sym_DOLLAR] = ACTIONS(281),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(283),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(285),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_GT_GT] = ACTIONS(141),
    [anon_sym_AMP_GT] = ACTIONS(141),
    [anon_sym_AMP_GT_GT] = ACTIONS(141),
    [anon_sym_LT_AMP] = ACTIONS(141),
    [anon_sym_GT_AMP] = ACTIONS(141),
    [anon_sym_LT_LT] = ACTIONS(143),
    [anon_sym_LT_LT_DASH] = ACTIONS(143),
    [sym_word] = ACTIONS(505),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(501),
    [anon_sym_LF] = ACTIONS(501),
    [anon_sym_AMP] = ACTIONS(501),
  },
  [111] = {
    [sym_file_redirect] = STATE(121),
    [sym_heredoc_redirect] = STATE(121),
    [sym_file_descriptor] = ACTIONS(135),
    [anon_sym_SEMI_SEMI] = ACTIONS(501),
    [anon_sym_PIPE] = ACTIONS(501),
    [anon_sym_PIPE_AMP] = ACTIONS(501),
    [anon_sym_AMP_AMP] = ACTIONS(501),
    [anon_sym_PIPE_PIPE] = ACTIONS(501),
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
    [anon_sym_SEMI] = ACTIONS(501),
    [anon_sym_LF] = ACTIONS(501),
    [anon_sym_AMP] = ACTIONS(501),
  },
  [112] = {
    [sym_expansion] = STATE(50),
    [sym_operator_expansion] = STATE(50),
    [sym_command_substitution] = STATE(50),
    [aux_sym_quoted_argument_repeat1] = STATE(197),
    [anon_sym_DQUOTE] = ACTIONS(507),
    [sym__quoted_chars] = ACTIONS(149),
    [anon_sym_DOLLAR] = ACTIONS(151),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(153),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(155),
    [sym_comment] = ACTIONS(145),
  },
  [113] = {
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
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(333),
    [anon_sym_LF] = ACTIONS(333),
    [anon_sym_AMP] = ACTIONS(333),
  },
  [114] = {
    [anon_sym_DOLLAR] = ACTIONS(509),
    [sym_word] = ACTIONS(511),
    [sym_comment] = ACTIONS(71),
  },
  [115] = {
    [sym_leading_word] = ACTIONS(513),
    [sym_comment] = ACTIONS(71),
  },
  [116] = {
    [sym_command] = STATE(201),
    [sym_environment_variable_assignment] = STATE(18),
    [sym_quoted_argument] = STATE(85),
    [sym_file_redirect] = STATE(18),
    [aux_sym_command_repeat1] = STATE(89),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [sym_single_quoted_argument] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_AMP_GT] = ACTIONS(99),
    [anon_sym_AMP_GT_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_leading_word] = ACTIONS(233),
    [sym_comment] = ACTIONS(71),
  },
  [117] = {
    [sym_file_descriptor] = ACTIONS(341),
    [anon_sym_SEMI_SEMI] = ACTIONS(345),
    [anon_sym_PIPE] = ACTIONS(345),
    [anon_sym_PIPE_AMP] = ACTIONS(345),
    [anon_sym_AMP_AMP] = ACTIONS(345),
    [anon_sym_PIPE_PIPE] = ACTIONS(345),
    [anon_sym_LT] = ACTIONS(345),
    [anon_sym_GT] = ACTIONS(345),
    [anon_sym_GT_GT] = ACTIONS(345),
    [anon_sym_AMP_GT] = ACTIONS(345),
    [anon_sym_AMP_GT_GT] = ACTIONS(345),
    [anon_sym_LT_AMP] = ACTIONS(345),
    [anon_sym_GT_AMP] = ACTIONS(345),
    [anon_sym_LT_LT] = ACTIONS(345),
    [anon_sym_LT_LT_DASH] = ACTIONS(345),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(345),
    [anon_sym_LF] = ACTIONS(345),
    [anon_sym_AMP] = ACTIONS(345),
  },
  [118] = {
    [sym_file_descriptor] = ACTIONS(515),
    [anon_sym_SEMI_SEMI] = ACTIONS(517),
    [anon_sym_PIPE] = ACTIONS(517),
    [anon_sym_PIPE_AMP] = ACTIONS(517),
    [anon_sym_AMP_AMP] = ACTIONS(517),
    [anon_sym_PIPE_PIPE] = ACTIONS(517),
    [anon_sym_LT] = ACTIONS(517),
    [anon_sym_GT] = ACTIONS(517),
    [anon_sym_GT_GT] = ACTIONS(517),
    [anon_sym_AMP_GT] = ACTIONS(517),
    [anon_sym_AMP_GT_GT] = ACTIONS(517),
    [anon_sym_LT_AMP] = ACTIONS(517),
    [anon_sym_GT_AMP] = ACTIONS(517),
    [anon_sym_LT_LT] = ACTIONS(517),
    [anon_sym_LT_LT_DASH] = ACTIONS(517),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(517),
    [anon_sym_LF] = ACTIONS(517),
    [anon_sym_AMP] = ACTIONS(517),
  },
  [119] = {
    [sym_expansion] = STATE(202),
    [sym_operator_expansion] = STATE(202),
    [aux_sym_heredoc_repeat1] = STATE(206),
    [sym__heredoc_middle] = ACTIONS(519),
    [sym__heredoc_end] = ACTIONS(521),
    [anon_sym_DOLLAR] = ACTIONS(523),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(525),
    [sym_comment] = ACTIONS(71),
  },
  [120] = {
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
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(529),
    [anon_sym_LF] = ACTIONS(529),
    [anon_sym_AMP] = ACTIONS(529),
  },
  [121] = {
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
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(533),
    [anon_sym_LF] = ACTIONS(533),
    [anon_sym_AMP] = ACTIONS(533),
  },
  [122] = {
    [anon_sym_DQUOTE] = ACTIONS(417),
    [sym__quoted_chars] = ACTIONS(461),
    [anon_sym_DOLLAR] = ACTIONS(417),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(417),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(417),
    [sym_comment] = ACTIONS(145),
  },
  [123] = {
    [anon_sym_DQUOTE] = ACTIONS(419),
    [sym__quoted_chars] = ACTIONS(465),
    [anon_sym_DOLLAR] = ACTIONS(419),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(419),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(419),
    [sym_comment] = ACTIONS(145),
  },
  [124] = {
    [anon_sym_RBRACE] = ACTIONS(535),
    [anon_sym_COLON] = ACTIONS(537),
    [anon_sym_EQ] = ACTIONS(539),
    [anon_sym_COLON_QMARK] = ACTIONS(539),
    [anon_sym_COLON_DASH] = ACTIONS(539),
    [sym_comment] = ACTIONS(71),
  },
  [125] = {
    [anon_sym_RPAREN] = ACTIONS(541),
    [sym_comment] = ACTIONS(71),
  },
  [126] = {
    [sym_file_descriptor] = ACTIONS(543),
    [anon_sym_SEMI_SEMI] = ACTIONS(545),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(545),
    [anon_sym_PIPE] = ACTIONS(545),
    [anon_sym_PIPE_AMP] = ACTIONS(545),
    [anon_sym_AMP_AMP] = ACTIONS(545),
    [anon_sym_PIPE_PIPE] = ACTIONS(545),
    [anon_sym_LT] = ACTIONS(545),
    [anon_sym_GT] = ACTIONS(545),
    [anon_sym_GT_GT] = ACTIONS(545),
    [anon_sym_AMP_GT] = ACTIONS(545),
    [anon_sym_AMP_GT_GT] = ACTIONS(545),
    [anon_sym_LT_AMP] = ACTIONS(545),
    [anon_sym_GT_AMP] = ACTIONS(545),
    [anon_sym_LT_LT] = ACTIONS(545),
    [anon_sym_LT_LT_DASH] = ACTIONS(545),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(545),
    [anon_sym_LF] = ACTIONS(545),
    [anon_sym_AMP] = ACTIONS(545),
  },
  [127] = {
    [anon_sym_DQUOTE] = ACTIONS(547),
    [sym__quoted_chars] = ACTIONS(549),
    [anon_sym_DOLLAR] = ACTIONS(547),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(547),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(547),
    [sym_comment] = ACTIONS(145),
  },
  [128] = {
    [sym_file_descriptor] = ACTIONS(309),
    [anon_sym_COLON] = ACTIONS(309),
    [anon_sym_DQUOTE] = ACTIONS(309),
    [sym_single_quoted_argument] = ACTIONS(455),
    [anon_sym_LT] = ACTIONS(455),
    [anon_sym_GT] = ACTIONS(455),
    [anon_sym_GT_GT] = ACTIONS(455),
    [anon_sym_AMP_GT] = ACTIONS(455),
    [anon_sym_AMP_GT_GT] = ACTIONS(455),
    [anon_sym_LT_AMP] = ACTIONS(455),
    [anon_sym_GT_AMP] = ACTIONS(455),
    [sym_leading_word] = ACTIONS(311),
    [sym_comment] = ACTIONS(71),
  },
  [129] = {
    [sym_expansion] = STATE(127),
    [sym_operator_expansion] = STATE(127),
    [sym_command_substitution] = STATE(127),
    [anon_sym_DQUOTE] = ACTIONS(551),
    [sym__quoted_chars] = ACTIONS(325),
    [anon_sym_DOLLAR] = ACTIONS(151),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(153),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(155),
    [sym_comment] = ACTIONS(145),
  },
  [130] = {
    [sym_file_descriptor] = ACTIONS(459),
    [anon_sym_COLON] = ACTIONS(459),
    [anon_sym_DQUOTE] = ACTIONS(459),
    [sym_single_quoted_argument] = ACTIONS(461),
    [anon_sym_LT] = ACTIONS(461),
    [anon_sym_GT] = ACTIONS(461),
    [anon_sym_GT_GT] = ACTIONS(461),
    [anon_sym_AMP_GT] = ACTIONS(461),
    [anon_sym_AMP_GT_GT] = ACTIONS(461),
    [anon_sym_LT_AMP] = ACTIONS(461),
    [anon_sym_GT_AMP] = ACTIONS(461),
    [sym_leading_word] = ACTIONS(417),
    [sym_comment] = ACTIONS(71),
  },
  [131] = {
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
    [sym_leading_word] = ACTIONS(419),
    [sym_comment] = ACTIONS(71),
  },
  [132] = {
    [anon_sym_RBRACE] = ACTIONS(553),
    [anon_sym_COLON] = ACTIONS(555),
    [anon_sym_EQ] = ACTIONS(557),
    [anon_sym_COLON_QMARK] = ACTIONS(557),
    [anon_sym_COLON_DASH] = ACTIONS(557),
    [sym_comment] = ACTIONS(71),
  },
  [133] = {
    [anon_sym_RPAREN] = ACTIONS(559),
    [sym_comment] = ACTIONS(71),
  },
  [134] = {
    [sym_compound_command] = STATE(215),
    [anon_sym_LBRACE] = ACTIONS(561),
    [sym_comment] = ACTIONS(71),
  },
  [135] = {
    [sym_quoted_argument] = STATE(193),
    [sym_expansion] = STATE(193),
    [sym_operator_expansion] = STATE(193),
    [sym_command_substitution] = STATE(193),
    [sym_file_redirect] = STATE(47),
    [sym_heredoc_redirect] = STATE(47),
    [aux_sym_command_repeat2] = STATE(216),
    [sym_file_descriptor] = ACTIONS(135),
    [anon_sym_SEMI_SEMI] = ACTIONS(563),
    [anon_sym_PIPE] = ACTIONS(563),
    [anon_sym_PIPE_AMP] = ACTIONS(563),
    [anon_sym_AMP_AMP] = ACTIONS(563),
    [anon_sym_PIPE_PIPE] = ACTIONS(563),
    [anon_sym_DQUOTE] = ACTIONS(277),
    [sym_single_quoted_argument] = ACTIONS(503),
    [anon_sym_DOLLAR] = ACTIONS(281),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(283),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(285),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_GT_GT] = ACTIONS(141),
    [anon_sym_AMP_GT] = ACTIONS(141),
    [anon_sym_AMP_GT_GT] = ACTIONS(141),
    [anon_sym_LT_AMP] = ACTIONS(141),
    [anon_sym_GT_AMP] = ACTIONS(141),
    [anon_sym_LT_LT] = ACTIONS(143),
    [anon_sym_LT_LT_DASH] = ACTIONS(143),
    [sym_word] = ACTIONS(505),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(563),
    [anon_sym_LF] = ACTIONS(563),
    [anon_sym_AMP] = ACTIONS(563),
  },
  [136] = {
    [sym_file_redirect] = STATE(121),
    [sym_heredoc_redirect] = STATE(121),
    [sym_file_descriptor] = ACTIONS(135),
    [anon_sym_SEMI_SEMI] = ACTIONS(563),
    [anon_sym_PIPE] = ACTIONS(563),
    [anon_sym_PIPE_AMP] = ACTIONS(563),
    [anon_sym_AMP_AMP] = ACTIONS(563),
    [anon_sym_PIPE_PIPE] = ACTIONS(563),
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
    [anon_sym_SEMI] = ACTIONS(563),
    [anon_sym_LF] = ACTIONS(563),
    [anon_sym_AMP] = ACTIONS(563),
  },
  [137] = {
    [sym_expansion] = STATE(50),
    [sym_operator_expansion] = STATE(50),
    [sym_command_substitution] = STATE(50),
    [aux_sym_quoted_argument_repeat1] = STATE(218),
    [anon_sym_DQUOTE] = ACTIONS(565),
    [sym__quoted_chars] = ACTIONS(149),
    [anon_sym_DOLLAR] = ACTIONS(151),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(153),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(155),
    [sym_comment] = ACTIONS(145),
  },
  [138] = {
    [sym_file_descriptor] = ACTIONS(567),
    [anon_sym_SEMI_SEMI] = ACTIONS(569),
    [anon_sym_COLON] = ACTIONS(569),
    [anon_sym_PIPE] = ACTIONS(569),
    [anon_sym_PIPE_AMP] = ACTIONS(569),
    [anon_sym_AMP_AMP] = ACTIONS(569),
    [anon_sym_PIPE_PIPE] = ACTIONS(569),
    [anon_sym_DQUOTE] = ACTIONS(569),
    [sym_single_quoted_argument] = ACTIONS(569),
    [anon_sym_LT] = ACTIONS(569),
    [anon_sym_GT] = ACTIONS(569),
    [anon_sym_GT_GT] = ACTIONS(569),
    [anon_sym_AMP_GT] = ACTIONS(569),
    [anon_sym_AMP_GT_GT] = ACTIONS(569),
    [anon_sym_LT_AMP] = ACTIONS(569),
    [anon_sym_GT_AMP] = ACTIONS(569),
    [sym_leading_word] = ACTIONS(569),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(569),
    [anon_sym_LF] = ACTIONS(569),
    [anon_sym_AMP] = ACTIONS(569),
  },
  [139] = {
    [anon_sym_DOLLAR] = ACTIONS(571),
    [sym_word] = ACTIONS(573),
    [sym_comment] = ACTIONS(71),
  },
  [140] = {
    [sym_leading_word] = ACTIONS(575),
    [sym_comment] = ACTIONS(71),
  },
  [141] = {
    [sym_command] = STATE(222),
    [sym_environment_variable_assignment] = STATE(18),
    [sym_quoted_argument] = STATE(85),
    [sym_file_redirect] = STATE(18),
    [aux_sym_command_repeat1] = STATE(89),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [sym_single_quoted_argument] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_AMP_GT] = ACTIONS(99),
    [anon_sym_AMP_GT_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_leading_word] = ACTIONS(233),
    [sym_comment] = ACTIONS(71),
  },
  [142] = {
    [sym_file_descriptor] = ACTIONS(577),
    [anon_sym_SEMI_SEMI] = ACTIONS(579),
    [anon_sym_COLON] = ACTIONS(579),
    [anon_sym_PIPE] = ACTIONS(579),
    [anon_sym_PIPE_AMP] = ACTIONS(579),
    [anon_sym_AMP_AMP] = ACTIONS(579),
    [anon_sym_PIPE_PIPE] = ACTIONS(579),
    [anon_sym_DQUOTE] = ACTIONS(579),
    [sym_single_quoted_argument] = ACTIONS(579),
    [anon_sym_LT] = ACTIONS(579),
    [anon_sym_GT] = ACTIONS(579),
    [anon_sym_GT_GT] = ACTIONS(579),
    [anon_sym_AMP_GT] = ACTIONS(579),
    [anon_sym_AMP_GT_GT] = ACTIONS(579),
    [anon_sym_LT_AMP] = ACTIONS(579),
    [anon_sym_GT_AMP] = ACTIONS(579),
    [sym_leading_word] = ACTIONS(579),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(579),
    [anon_sym_LF] = ACTIONS(579),
    [anon_sym_AMP] = ACTIONS(579),
  },
  [143] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(581),
    [anon_sym_PIPE] = ACTIONS(581),
    [anon_sym_PIPE_AMP] = ACTIONS(581),
    [anon_sym_AMP_AMP] = ACTIONS(581),
    [anon_sym_PIPE_PIPE] = ACTIONS(581),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(581),
    [anon_sym_LF] = ACTIONS(581),
    [anon_sym_AMP] = ACTIONS(581),
  },
  [144] = {
    [sym_file_descriptor] = ACTIONS(191),
    [anon_sym_SEMI_SEMI] = ACTIONS(581),
    [anon_sym_COLON] = ACTIONS(193),
    [anon_sym_PIPE] = ACTIONS(581),
    [anon_sym_PIPE_AMP] = ACTIONS(581),
    [anon_sym_AMP_AMP] = ACTIONS(581),
    [anon_sym_PIPE_PIPE] = ACTIONS(581),
    [anon_sym_DQUOTE] = ACTIONS(193),
    [sym_single_quoted_argument] = ACTIONS(193),
    [anon_sym_LT] = ACTIONS(193),
    [anon_sym_GT] = ACTIONS(193),
    [anon_sym_GT_GT] = ACTIONS(193),
    [anon_sym_AMP_GT] = ACTIONS(193),
    [anon_sym_AMP_GT_GT] = ACTIONS(193),
    [anon_sym_LT_AMP] = ACTIONS(193),
    [anon_sym_GT_AMP] = ACTIONS(193),
    [sym_leading_word] = ACTIONS(193),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(581),
    [anon_sym_LF] = ACTIONS(581),
    [anon_sym_AMP] = ACTIONS(581),
  },
  [145] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(583),
    [anon_sym_PIPE] = ACTIONS(187),
    [anon_sym_PIPE_AMP] = ACTIONS(187),
    [anon_sym_AMP_AMP] = ACTIONS(583),
    [anon_sym_PIPE_PIPE] = ACTIONS(583),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(583),
    [anon_sym_LF] = ACTIONS(583),
    [anon_sym_AMP] = ACTIONS(583),
  },
  [146] = {
    [sym_file_descriptor] = ACTIONS(191),
    [anon_sym_SEMI_SEMI] = ACTIONS(583),
    [anon_sym_COLON] = ACTIONS(193),
    [anon_sym_PIPE] = ACTIONS(187),
    [anon_sym_PIPE_AMP] = ACTIONS(187),
    [anon_sym_AMP_AMP] = ACTIONS(583),
    [anon_sym_PIPE_PIPE] = ACTIONS(583),
    [anon_sym_DQUOTE] = ACTIONS(193),
    [sym_single_quoted_argument] = ACTIONS(193),
    [anon_sym_LT] = ACTIONS(193),
    [anon_sym_GT] = ACTIONS(193),
    [anon_sym_GT_GT] = ACTIONS(193),
    [anon_sym_AMP_GT] = ACTIONS(193),
    [anon_sym_AMP_GT_GT] = ACTIONS(193),
    [anon_sym_LT_AMP] = ACTIONS(193),
    [anon_sym_GT_AMP] = ACTIONS(193),
    [sym_leading_word] = ACTIONS(193),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(583),
    [anon_sym_LF] = ACTIONS(583),
    [anon_sym_AMP] = ACTIONS(583),
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
    [sym_file_descriptor] = ACTIONS(135),
    [anon_sym_SEMI_SEMI] = ACTIONS(501),
    [anon_sym_PIPE] = ACTIONS(501),
    [anon_sym_PIPE_AMP] = ACTIONS(501),
    [anon_sym_AMP_AMP] = ACTIONS(501),
    [anon_sym_PIPE_PIPE] = ACTIONS(501),
    [anon_sym_DQUOTE] = ACTIONS(277),
    [sym_single_quoted_argument] = ACTIONS(279),
    [anon_sym_DOLLAR] = ACTIONS(281),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(283),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(285),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_GT_GT] = ACTIONS(141),
    [anon_sym_AMP_GT] = ACTIONS(141),
    [anon_sym_AMP_GT_GT] = ACTIONS(141),
    [anon_sym_LT_AMP] = ACTIONS(141),
    [anon_sym_GT_AMP] = ACTIONS(141),
    [anon_sym_LT_LT] = ACTIONS(143),
    [anon_sym_LT_LT_DASH] = ACTIONS(143),
    [sym_word] = ACTIONS(287),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(501),
    [anon_sym_LF] = ACTIONS(501),
    [anon_sym_AMP] = ACTIONS(501),
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
    [sym_file_descriptor] = ACTIONS(135),
    [anon_sym_SEMI_SEMI] = ACTIONS(585),
    [anon_sym_PIPE] = ACTIONS(585),
    [anon_sym_PIPE_AMP] = ACTIONS(585),
    [anon_sym_AMP_AMP] = ACTIONS(585),
    [anon_sym_PIPE_PIPE] = ACTIONS(585),
    [anon_sym_DQUOTE] = ACTIONS(277),
    [sym_single_quoted_argument] = ACTIONS(279),
    [anon_sym_DOLLAR] = ACTIONS(281),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(283),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(285),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_GT_GT] = ACTIONS(141),
    [anon_sym_AMP_GT] = ACTIONS(141),
    [anon_sym_AMP_GT_GT] = ACTIONS(141),
    [anon_sym_LT_AMP] = ACTIONS(141),
    [anon_sym_GT_AMP] = ACTIONS(141),
    [anon_sym_LT_LT] = ACTIONS(143),
    [anon_sym_LT_LT_DASH] = ACTIONS(143),
    [sym_word] = ACTIONS(287),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(585),
    [anon_sym_LF] = ACTIONS(585),
    [anon_sym_AMP] = ACTIONS(585),
  },
  [149] = {
    [sym_quoted_argument] = STATE(226),
    [sym_expansion] = STATE(226),
    [sym_operator_expansion] = STATE(226),
    [sym_command_substitution] = STATE(226),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [sym_single_quoted_argument] = ACTIONS(587),
    [anon_sym_DOLLAR] = ACTIONS(161),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(163),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(165),
    [sym_word] = ACTIONS(589),
    [sym_comment] = ACTIONS(71),
  },
  [150] = {
    [sym_file_redirect] = STATE(121),
    [sym_heredoc_redirect] = STATE(121),
    [sym_file_descriptor] = ACTIONS(135),
    [anon_sym_SEMI_SEMI] = ACTIONS(585),
    [anon_sym_PIPE] = ACTIONS(585),
    [anon_sym_PIPE_AMP] = ACTIONS(585),
    [anon_sym_AMP_AMP] = ACTIONS(585),
    [anon_sym_PIPE_PIPE] = ACTIONS(585),
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
    [anon_sym_SEMI] = ACTIONS(585),
    [anon_sym_LF] = ACTIONS(585),
    [anon_sym_AMP] = ACTIONS(585),
  },
  [151] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(591),
    [anon_sym_PIPE] = ACTIONS(591),
    [anon_sym_PIPE_AMP] = ACTIONS(591),
    [anon_sym_AMP_AMP] = ACTIONS(591),
    [anon_sym_PIPE_PIPE] = ACTIONS(591),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(591),
    [anon_sym_LF] = ACTIONS(591),
    [anon_sym_AMP] = ACTIONS(591),
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
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_done] = ACTIONS(593),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_function] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_single_quoted_argument] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_AMP_GT] = ACTIONS(99),
    [anon_sym_AMP_GT_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_leading_word] = ACTIONS(101),
    [sym_comment] = ACTIONS(71),
  },
  [153] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(595),
    [anon_sym_PIPE] = ACTIONS(595),
    [anon_sym_PIPE_AMP] = ACTIONS(595),
    [anon_sym_AMP_AMP] = ACTIONS(595),
    [anon_sym_PIPE_PIPE] = ACTIONS(595),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(595),
    [anon_sym_LF] = ACTIONS(595),
    [anon_sym_AMP] = ACTIONS(595),
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
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_function] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_single_quoted_argument] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_AMP_GT] = ACTIONS(99),
    [anon_sym_AMP_GT_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_leading_word] = ACTIONS(101),
    [sym_comment] = ACTIONS(71),
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
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_fi] = ACTIONS(597),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_function] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_single_quoted_argument] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_AMP_GT] = ACTIONS(99),
    [anon_sym_AMP_GT_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_leading_word] = ACTIONS(101),
    [sym_comment] = ACTIONS(71),
  },
  [156] = {
    [anon_sym_fi] = ACTIONS(599),
    [anon_sym_elif] = ACTIONS(599),
    [anon_sym_else] = ACTIONS(599),
    [sym_comment] = ACTIONS(71),
  },
  [157] = {
    [anon_sym_fi] = ACTIONS(601),
    [sym_comment] = ACTIONS(71),
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
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_fi] = ACTIONS(603),
    [anon_sym_elif] = ACTIONS(407),
    [anon_sym_else] = ACTIONS(409),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_function] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_single_quoted_argument] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_AMP_GT] = ACTIONS(99),
    [anon_sym_AMP_GT_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_leading_word] = ACTIONS(101),
    [sym_comment] = ACTIONS(71),
  },
  [159] = {
    [sym_elif_clause] = STATE(234),
    [sym_else_clause] = STATE(232),
    [anon_sym_fi] = ACTIONS(601),
    [anon_sym_elif] = ACTIONS(605),
    [anon_sym_else] = ACTIONS(607),
    [sym_comment] = ACTIONS(71),
  },
  [160] = {
    [anon_sym_in] = ACTIONS(545),
    [anon_sym_SEMI_SEMI] = ACTIONS(545),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(545),
    [anon_sym_LF] = ACTIONS(545),
    [anon_sym_AMP] = ACTIONS(545),
  },
  [161] = {
    [sym_case_item] = STATE(238),
    [sym_quoted_argument] = STATE(236),
    [sym_expansion] = STATE(236),
    [sym_operator_expansion] = STATE(236),
    [sym_command_substitution] = STATE(236),
    [aux_sym_case_statement_repeat1] = STATE(239),
    [anon_sym_esac] = ACTIONS(609),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [sym_single_quoted_argument] = ACTIONS(611),
    [anon_sym_DOLLAR] = ACTIONS(127),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(129),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(131),
    [sym_word] = ACTIONS(613),
    [sym_comment] = ACTIONS(71),
  },
  [162] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(615),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(615),
    [anon_sym_LF] = ACTIONS(615),
    [anon_sym_AMP] = ACTIONS(615),
  },
  [163] = {
    [anon_sym_in] = ACTIONS(617),
    [anon_sym_SEMI_SEMI] = ACTIONS(617),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(617),
    [anon_sym_LF] = ACTIONS(617),
    [anon_sym_AMP] = ACTIONS(617),
  },
  [164] = {
    [sym_quoted_argument] = STATE(241),
    [sym_expansion] = STATE(241),
    [sym_operator_expansion] = STATE(241),
    [sym_command_substitution] = STATE(241),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [sym_single_quoted_argument] = ACTIONS(619),
    [anon_sym_DOLLAR] = ACTIONS(127),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(129),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(131),
    [sym_word] = ACTIONS(621),
    [sym_comment] = ACTIONS(71),
  },
  [165] = {
    [anon_sym_LT] = ACTIONS(623),
    [anon_sym_GT] = ACTIONS(623),
    [anon_sym_GT_GT] = ACTIONS(625),
    [anon_sym_AMP_GT] = ACTIONS(623),
    [anon_sym_AMP_GT_GT] = ACTIONS(625),
    [anon_sym_LT_AMP] = ACTIONS(625),
    [anon_sym_GT_AMP] = ACTIONS(625),
    [sym_comment] = ACTIONS(71),
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
    [sym_file_descriptor] = ACTIONS(427),
    [anon_sym_RPAREN] = ACTIONS(627),
    [anon_sym_DQUOTE] = ACTIONS(629),
    [sym_single_quoted_argument] = ACTIONS(631),
    [anon_sym_DOLLAR] = ACTIONS(633),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(635),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(637),
    [anon_sym_LT] = ACTIONS(639),
    [anon_sym_GT] = ACTIONS(639),
    [anon_sym_GT_GT] = ACTIONS(641),
    [anon_sym_AMP_GT] = ACTIONS(639),
    [anon_sym_AMP_GT_GT] = ACTIONS(641),
    [anon_sym_LT_AMP] = ACTIONS(641),
    [anon_sym_GT_AMP] = ACTIONS(641),
    [anon_sym_LT_LT] = ACTIONS(643),
    [anon_sym_LT_LT_DASH] = ACTIONS(645),
    [sym_word] = ACTIONS(647),
    [sym_comment] = ACTIONS(71),
  },
  [167] = {
    [sym_quoted_argument] = STATE(252),
    [sym_expansion] = STATE(252),
    [sym_operator_expansion] = STATE(252),
    [sym_command_substitution] = STATE(252),
    [anon_sym_DQUOTE] = ACTIONS(629),
    [sym_single_quoted_argument] = ACTIONS(649),
    [anon_sym_DOLLAR] = ACTIONS(633),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(635),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(637),
    [sym_word] = ACTIONS(651),
    [sym_comment] = ACTIONS(71),
  },
  [168] = {
    [sym_heredoc] = STATE(256),
    [sym__simple_heredoc] = ACTIONS(653),
    [sym__heredoc_beginning] = ACTIONS(655),
    [sym_comment] = ACTIONS(71),
  },
  [169] = {
    [sym_file_descriptor] = ACTIONS(305),
    [anon_sym_RPAREN] = ACTIONS(305),
    [anon_sym_LT] = ACTIONS(657),
    [anon_sym_GT] = ACTIONS(657),
    [anon_sym_GT_GT] = ACTIONS(305),
    [anon_sym_AMP_GT] = ACTIONS(657),
    [anon_sym_AMP_GT_GT] = ACTIONS(305),
    [anon_sym_LT_AMP] = ACTIONS(305),
    [anon_sym_GT_AMP] = ACTIONS(305),
    [anon_sym_LT_LT] = ACTIONS(657),
    [anon_sym_LT_LT_DASH] = ACTIONS(305),
    [sym_comment] = ACTIONS(71),
  },
  [170] = {
    [sym_file_redirect] = STATE(257),
    [sym_heredoc_redirect] = STATE(257),
    [sym_file_descriptor] = ACTIONS(427),
    [anon_sym_RPAREN] = ACTIONS(627),
    [anon_sym_LT] = ACTIONS(639),
    [anon_sym_GT] = ACTIONS(639),
    [anon_sym_GT_GT] = ACTIONS(641),
    [anon_sym_AMP_GT] = ACTIONS(639),
    [anon_sym_AMP_GT_GT] = ACTIONS(641),
    [anon_sym_LT_AMP] = ACTIONS(641),
    [anon_sym_GT_AMP] = ACTIONS(641),
    [anon_sym_LT_LT] = ACTIONS(643),
    [anon_sym_LT_LT_DASH] = ACTIONS(645),
    [sym_comment] = ACTIONS(71),
  },
  [171] = {
    [sym_file_descriptor] = ACTIONS(309),
    [anon_sym_RPAREN] = ACTIONS(311),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(311),
    [anon_sym_LT] = ACTIONS(311),
    [anon_sym_GT] = ACTIONS(311),
    [anon_sym_GT_GT] = ACTIONS(311),
    [anon_sym_AMP_GT] = ACTIONS(311),
    [anon_sym_AMP_GT_GT] = ACTIONS(311),
    [anon_sym_LT_AMP] = ACTIONS(311),
    [anon_sym_GT_AMP] = ACTIONS(311),
    [anon_sym_LT_LT] = ACTIONS(311),
    [anon_sym_LT_LT_DASH] = ACTIONS(311),
    [sym_comment] = ACTIONS(145),
  },
  [172] = {
    [sym_expansion] = STATE(127),
    [sym_operator_expansion] = STATE(127),
    [sym_command_substitution] = STATE(127),
    [anon_sym_DQUOTE] = ACTIONS(659),
    [sym__quoted_chars] = ACTIONS(325),
    [anon_sym_DOLLAR] = ACTIONS(151),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(153),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(155),
    [sym_comment] = ACTIONS(145),
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
    [sym_file_descriptor] = ACTIONS(427),
    [anon_sym_RPAREN] = ACTIONS(661),
    [anon_sym_DQUOTE] = ACTIONS(629),
    [sym_single_quoted_argument] = ACTIONS(631),
    [anon_sym_DOLLAR] = ACTIONS(633),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(635),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(637),
    [anon_sym_LT] = ACTIONS(639),
    [anon_sym_GT] = ACTIONS(639),
    [anon_sym_GT_GT] = ACTIONS(641),
    [anon_sym_AMP_GT] = ACTIONS(639),
    [anon_sym_AMP_GT_GT] = ACTIONS(641),
    [anon_sym_LT_AMP] = ACTIONS(641),
    [anon_sym_GT_AMP] = ACTIONS(641),
    [anon_sym_LT_LT] = ACTIONS(643),
    [anon_sym_LT_LT_DASH] = ACTIONS(645),
    [sym_word] = ACTIONS(647),
    [sym_comment] = ACTIONS(71),
  },
  [174] = {
    [sym_file_redirect] = STATE(257),
    [sym_heredoc_redirect] = STATE(257),
    [sym_file_descriptor] = ACTIONS(427),
    [anon_sym_RPAREN] = ACTIONS(661),
    [anon_sym_LT] = ACTIONS(639),
    [anon_sym_GT] = ACTIONS(639),
    [anon_sym_GT_GT] = ACTIONS(641),
    [anon_sym_AMP_GT] = ACTIONS(639),
    [anon_sym_AMP_GT_GT] = ACTIONS(641),
    [anon_sym_LT_AMP] = ACTIONS(641),
    [anon_sym_GT_AMP] = ACTIONS(641),
    [anon_sym_LT_LT] = ACTIONS(643),
    [anon_sym_LT_LT_DASH] = ACTIONS(645),
    [sym_comment] = ACTIONS(71),
  },
  [175] = {
    [anon_sym_in] = ACTIONS(663),
    [anon_sym_SEMI_SEMI] = ACTIONS(663),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(663),
    [anon_sym_LF] = ACTIONS(663),
    [anon_sym_AMP] = ACTIONS(663),
  },
  [176] = {
    [sym_file_redirect] = STATE(169),
    [sym_heredoc_redirect] = STATE(169),
    [aux_sym_command_repeat2] = STATE(251),
    [sym_file_descriptor] = ACTIONS(427),
    [anon_sym_RPAREN] = ACTIONS(275),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(665),
    [anon_sym_LT] = ACTIONS(431),
    [anon_sym_GT] = ACTIONS(431),
    [anon_sym_GT_GT] = ACTIONS(431),
    [anon_sym_AMP_GT] = ACTIONS(431),
    [anon_sym_AMP_GT_GT] = ACTIONS(431),
    [anon_sym_LT_AMP] = ACTIONS(431),
    [anon_sym_GT_AMP] = ACTIONS(431),
    [anon_sym_LT_LT] = ACTIONS(433),
    [anon_sym_LT_LT_DASH] = ACTIONS(433),
    [sym_comment] = ACTIONS(145),
  },
  [177] = {
    [sym_file_redirect] = STATE(169),
    [sym_heredoc_redirect] = STATE(169),
    [aux_sym_command_repeat2] = STATE(263),
    [sym_file_descriptor] = ACTIONS(427),
    [anon_sym_RPAREN] = ACTIONS(377),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(667),
    [anon_sym_EQ] = ACTIONS(381),
    [anon_sym_LT] = ACTIONS(431),
    [anon_sym_GT] = ACTIONS(431),
    [anon_sym_GT_GT] = ACTIONS(431),
    [anon_sym_AMP_GT] = ACTIONS(431),
    [anon_sym_AMP_GT_GT] = ACTIONS(431),
    [anon_sym_LT_AMP] = ACTIONS(431),
    [anon_sym_GT_AMP] = ACTIONS(431),
    [anon_sym_LT_LT] = ACTIONS(433),
    [anon_sym_LT_LT_DASH] = ACTIONS(433),
    [sym_comment] = ACTIONS(145),
  },
  [178] = {
    [sym_case_item] = STATE(238),
    [sym_quoted_argument] = STATE(236),
    [sym_expansion] = STATE(236),
    [sym_operator_expansion] = STATE(236),
    [sym_command_substitution] = STATE(236),
    [aux_sym_case_statement_repeat1] = STATE(265),
    [anon_sym_esac] = ACTIONS(669),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [sym_single_quoted_argument] = ACTIONS(611),
    [anon_sym_DOLLAR] = ACTIONS(127),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(129),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(131),
    [sym_word] = ACTIONS(613),
    [sym_comment] = ACTIONS(71),
  },
  [179] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(671),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(671),
    [anon_sym_LF] = ACTIONS(671),
    [anon_sym_AMP] = ACTIONS(671),
  },
  [180] = {
    [sym_compound_command] = STATE(267),
    [anon_sym_LBRACE] = ACTIONS(561),
    [sym_comment] = ACTIONS(71),
  },
  [181] = {
    [anon_sym_RPAREN] = ACTIONS(543),
    [anon_sym_RBRACE] = ACTIONS(543),
    [anon_sym_RBRACK] = ACTIONS(673),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(673),
    [anon_sym_DQUOTE] = ACTIONS(543),
    [sym_single_quoted_argument] = ACTIONS(673),
    [anon_sym_DOLLAR] = ACTIONS(673),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(543),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(543),
    [sym_word] = ACTIONS(545),
    [sym_comment] = ACTIONS(71),
  },
  [182] = {
    [anon_sym_RPAREN] = ACTIONS(675),
    [anon_sym_RBRACE] = ACTIONS(675),
    [anon_sym_RBRACK] = ACTIONS(677),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(677),
    [anon_sym_DQUOTE] = ACTIONS(675),
    [sym_single_quoted_argument] = ACTIONS(677),
    [anon_sym_DOLLAR] = ACTIONS(677),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(675),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(675),
    [sym_word] = ACTIONS(617),
    [sym_comment] = ACTIONS(71),
  },
  [183] = {
    [sym_quoted_argument] = STATE(268),
    [sym_expansion] = STATE(268),
    [sym_operator_expansion] = STATE(268),
    [sym_command_substitution] = STATE(268),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [sym_single_quoted_argument] = ACTIONS(679),
    [anon_sym_DOLLAR] = ACTIONS(127),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(129),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(131),
    [sym_word] = ACTIONS(681),
    [sym_comment] = ACTIONS(71),
  },
  [184] = {
    [anon_sym_RPAREN] = ACTIONS(683),
    [anon_sym_RBRACE] = ACTIONS(683),
    [anon_sym_RBRACK] = ACTIONS(685),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(685),
    [anon_sym_DQUOTE] = ACTIONS(683),
    [sym_single_quoted_argument] = ACTIONS(685),
    [anon_sym_DOLLAR] = ACTIONS(685),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(683),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(683),
    [sym_word] = ACTIONS(663),
    [sym_comment] = ACTIONS(71),
  },
  [185] = {
    [sym_file_descriptor] = ACTIONS(389),
    [anon_sym_SEMI_SEMI] = ACTIONS(393),
    [anon_sym_PIPE] = ACTIONS(393),
    [anon_sym_PIPE_AMP] = ACTIONS(393),
    [anon_sym_AMP_AMP] = ACTIONS(393),
    [anon_sym_PIPE_PIPE] = ACTIONS(393),
    [anon_sym_LT] = ACTIONS(393),
    [anon_sym_GT] = ACTIONS(393),
    [anon_sym_GT_GT] = ACTIONS(393),
    [anon_sym_AMP_GT] = ACTIONS(393),
    [anon_sym_AMP_GT_GT] = ACTIONS(393),
    [anon_sym_LT_AMP] = ACTIONS(393),
    [anon_sym_GT_AMP] = ACTIONS(393),
    [anon_sym_LT_LT] = ACTIONS(393),
    [anon_sym_LT_LT_DASH] = ACTIONS(393),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(393),
    [anon_sym_LF] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(393),
  },
  [186] = {
    [sym_file_descriptor] = ACTIONS(395),
    [anon_sym_SEMI_SEMI] = ACTIONS(399),
    [anon_sym_PIPE] = ACTIONS(399),
    [anon_sym_PIPE_AMP] = ACTIONS(399),
    [anon_sym_AMP_AMP] = ACTIONS(399),
    [anon_sym_PIPE_PIPE] = ACTIONS(399),
    [anon_sym_LT] = ACTIONS(399),
    [anon_sym_GT] = ACTIONS(399),
    [anon_sym_GT_GT] = ACTIONS(399),
    [anon_sym_AMP_GT] = ACTIONS(399),
    [anon_sym_AMP_GT_GT] = ACTIONS(399),
    [anon_sym_LT_AMP] = ACTIONS(399),
    [anon_sym_GT_AMP] = ACTIONS(399),
    [anon_sym_LT_LT] = ACTIONS(399),
    [anon_sym_LT_LT_DASH] = ACTIONS(399),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(399),
    [anon_sym_LF] = ACTIONS(399),
    [anon_sym_AMP] = ACTIONS(399),
  },
  [187] = {
    [sym_file_descriptor] = ACTIONS(309),
    [anon_sym_SEMI_SEMI] = ACTIONS(311),
    [anon_sym_PIPE] = ACTIONS(311),
    [anon_sym_PIPE_AMP] = ACTIONS(311),
    [anon_sym_AMP_AMP] = ACTIONS(311),
    [anon_sym_PIPE_PIPE] = ACTIONS(311),
    [anon_sym_DQUOTE] = ACTIONS(311),
    [sym_single_quoted_argument] = ACTIONS(311),
    [anon_sym_DOLLAR] = ACTIONS(311),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(311),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(311),
    [anon_sym_LT] = ACTIONS(311),
    [anon_sym_GT] = ACTIONS(311),
    [anon_sym_GT_GT] = ACTIONS(311),
    [anon_sym_AMP_GT] = ACTIONS(311),
    [anon_sym_AMP_GT_GT] = ACTIONS(311),
    [anon_sym_LT_AMP] = ACTIONS(311),
    [anon_sym_GT_AMP] = ACTIONS(311),
    [anon_sym_LT_LT] = ACTIONS(311),
    [anon_sym_LT_LT_DASH] = ACTIONS(311),
    [sym_word] = ACTIONS(311),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(311),
    [anon_sym_LF] = ACTIONS(311),
    [anon_sym_AMP] = ACTIONS(311),
  },
  [188] = {
    [sym_expansion] = STATE(127),
    [sym_operator_expansion] = STATE(127),
    [sym_command_substitution] = STATE(127),
    [anon_sym_DQUOTE] = ACTIONS(687),
    [sym__quoted_chars] = ACTIONS(325),
    [anon_sym_DOLLAR] = ACTIONS(151),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(153),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(155),
    [sym_comment] = ACTIONS(145),
  },
  [189] = {
    [sym_file_descriptor] = ACTIONS(459),
    [anon_sym_SEMI_SEMI] = ACTIONS(417),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_PIPE_AMP] = ACTIONS(417),
    [anon_sym_AMP_AMP] = ACTIONS(417),
    [anon_sym_PIPE_PIPE] = ACTIONS(417),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [sym_single_quoted_argument] = ACTIONS(417),
    [anon_sym_DOLLAR] = ACTIONS(417),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(417),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(417),
    [anon_sym_LT] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(417),
    [anon_sym_GT_GT] = ACTIONS(417),
    [anon_sym_AMP_GT] = ACTIONS(417),
    [anon_sym_AMP_GT_GT] = ACTIONS(417),
    [anon_sym_LT_AMP] = ACTIONS(417),
    [anon_sym_GT_AMP] = ACTIONS(417),
    [anon_sym_LT_LT] = ACTIONS(417),
    [anon_sym_LT_LT_DASH] = ACTIONS(417),
    [sym_word] = ACTIONS(417),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(417),
    [anon_sym_LF] = ACTIONS(417),
    [anon_sym_AMP] = ACTIONS(417),
  },
  [190] = {
    [sym_file_descriptor] = ACTIONS(463),
    [anon_sym_SEMI_SEMI] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(419),
    [anon_sym_PIPE_AMP] = ACTIONS(419),
    [anon_sym_AMP_AMP] = ACTIONS(419),
    [anon_sym_PIPE_PIPE] = ACTIONS(419),
    [anon_sym_DQUOTE] = ACTIONS(419),
    [sym_single_quoted_argument] = ACTIONS(419),
    [anon_sym_DOLLAR] = ACTIONS(419),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(419),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(419),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_GT_GT] = ACTIONS(419),
    [anon_sym_AMP_GT] = ACTIONS(419),
    [anon_sym_AMP_GT_GT] = ACTIONS(419),
    [anon_sym_LT_AMP] = ACTIONS(419),
    [anon_sym_GT_AMP] = ACTIONS(419),
    [anon_sym_LT_LT] = ACTIONS(419),
    [anon_sym_LT_LT_DASH] = ACTIONS(419),
    [sym_word] = ACTIONS(419),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(419),
    [anon_sym_LF] = ACTIONS(419),
    [anon_sym_AMP] = ACTIONS(419),
  },
  [191] = {
    [anon_sym_RBRACE] = ACTIONS(689),
    [anon_sym_COLON] = ACTIONS(691),
    [anon_sym_EQ] = ACTIONS(693),
    [anon_sym_COLON_QMARK] = ACTIONS(693),
    [anon_sym_COLON_DASH] = ACTIONS(693),
    [sym_comment] = ACTIONS(71),
  },
  [192] = {
    [anon_sym_RPAREN] = ACTIONS(695),
    [sym_comment] = ACTIONS(71),
  },
  [193] = {
    [sym_file_descriptor] = ACTIONS(479),
    [anon_sym_SEMI_SEMI] = ACTIONS(481),
    [anon_sym_PIPE] = ACTIONS(481),
    [anon_sym_PIPE_AMP] = ACTIONS(481),
    [anon_sym_AMP_AMP] = ACTIONS(481),
    [anon_sym_PIPE_PIPE] = ACTIONS(481),
    [anon_sym_DQUOTE] = ACTIONS(481),
    [sym_single_quoted_argument] = ACTIONS(481),
    [anon_sym_DOLLAR] = ACTIONS(481),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(481),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(481),
    [anon_sym_LT] = ACTIONS(481),
    [anon_sym_GT] = ACTIONS(481),
    [anon_sym_GT_GT] = ACTIONS(481),
    [anon_sym_AMP_GT] = ACTIONS(481),
    [anon_sym_AMP_GT_GT] = ACTIONS(481),
    [anon_sym_LT_AMP] = ACTIONS(481),
    [anon_sym_GT_AMP] = ACTIONS(481),
    [anon_sym_LT_LT] = ACTIONS(481),
    [anon_sym_LT_LT_DASH] = ACTIONS(481),
    [sym_word] = ACTIONS(481),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(481),
    [anon_sym_LF] = ACTIONS(481),
    [anon_sym_AMP] = ACTIONS(481),
  },
  [194] = {
    [sym_file_descriptor] = ACTIONS(485),
    [anon_sym_SEMI_SEMI] = ACTIONS(487),
    [anon_sym_PIPE] = ACTIONS(487),
    [anon_sym_PIPE_AMP] = ACTIONS(487),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [anon_sym_PIPE_PIPE] = ACTIONS(487),
    [anon_sym_DQUOTE] = ACTIONS(487),
    [sym_single_quoted_argument] = ACTIONS(487),
    [anon_sym_DOLLAR] = ACTIONS(487),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(487),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(487),
    [anon_sym_LT] = ACTIONS(487),
    [anon_sym_GT] = ACTIONS(487),
    [anon_sym_GT_GT] = ACTIONS(487),
    [anon_sym_AMP_GT] = ACTIONS(487),
    [anon_sym_AMP_GT_GT] = ACTIONS(487),
    [anon_sym_LT_AMP] = ACTIONS(487),
    [anon_sym_GT_AMP] = ACTIONS(487),
    [anon_sym_LT_LT] = ACTIONS(487),
    [anon_sym_LT_LT_DASH] = ACTIONS(487),
    [sym_word] = ACTIONS(487),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_LF] = ACTIONS(487),
    [anon_sym_AMP] = ACTIONS(487),
  },
  [195] = {
    [sym_file_redirect] = STATE(121),
    [sym_heredoc_redirect] = STATE(121),
    [sym_file_descriptor] = ACTIONS(135),
    [anon_sym_SEMI_SEMI] = ACTIONS(697),
    [anon_sym_PIPE] = ACTIONS(697),
    [anon_sym_PIPE_AMP] = ACTIONS(697),
    [anon_sym_AMP_AMP] = ACTIONS(697),
    [anon_sym_PIPE_PIPE] = ACTIONS(697),
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
    [anon_sym_SEMI] = ACTIONS(697),
    [anon_sym_LF] = ACTIONS(697),
    [anon_sym_AMP] = ACTIONS(697),
  },
  [196] = {
    [sym_file_descriptor] = ACTIONS(309),
    [anon_sym_SEMI_SEMI] = ACTIONS(311),
    [anon_sym_PIPE] = ACTIONS(311),
    [anon_sym_PIPE_AMP] = ACTIONS(311),
    [anon_sym_AMP_AMP] = ACTIONS(311),
    [anon_sym_PIPE_PIPE] = ACTIONS(311),
    [anon_sym_LT] = ACTIONS(311),
    [anon_sym_GT] = ACTIONS(311),
    [anon_sym_GT_GT] = ACTIONS(311),
    [anon_sym_AMP_GT] = ACTIONS(311),
    [anon_sym_AMP_GT_GT] = ACTIONS(311),
    [anon_sym_LT_AMP] = ACTIONS(311),
    [anon_sym_GT_AMP] = ACTIONS(311),
    [anon_sym_LT_LT] = ACTIONS(311),
    [anon_sym_LT_LT_DASH] = ACTIONS(311),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(311),
    [anon_sym_LF] = ACTIONS(311),
    [anon_sym_AMP] = ACTIONS(311),
  },
  [197] = {
    [sym_expansion] = STATE(127),
    [sym_operator_expansion] = STATE(127),
    [sym_command_substitution] = STATE(127),
    [anon_sym_DQUOTE] = ACTIONS(699),
    [sym__quoted_chars] = ACTIONS(325),
    [anon_sym_DOLLAR] = ACTIONS(151),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(153),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(155),
    [sym_comment] = ACTIONS(145),
  },
  [198] = {
    [sym_file_descriptor] = ACTIONS(459),
    [anon_sym_SEMI_SEMI] = ACTIONS(417),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_PIPE_AMP] = ACTIONS(417),
    [anon_sym_AMP_AMP] = ACTIONS(417),
    [anon_sym_PIPE_PIPE] = ACTIONS(417),
    [anon_sym_LT] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(417),
    [anon_sym_GT_GT] = ACTIONS(417),
    [anon_sym_AMP_GT] = ACTIONS(417),
    [anon_sym_AMP_GT_GT] = ACTIONS(417),
    [anon_sym_LT_AMP] = ACTIONS(417),
    [anon_sym_GT_AMP] = ACTIONS(417),
    [anon_sym_LT_LT] = ACTIONS(417),
    [anon_sym_LT_LT_DASH] = ACTIONS(417),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(417),
    [anon_sym_LF] = ACTIONS(417),
    [anon_sym_AMP] = ACTIONS(417),
  },
  [199] = {
    [sym_file_descriptor] = ACTIONS(463),
    [anon_sym_SEMI_SEMI] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(419),
    [anon_sym_PIPE_AMP] = ACTIONS(419),
    [anon_sym_AMP_AMP] = ACTIONS(419),
    [anon_sym_PIPE_PIPE] = ACTIONS(419),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_GT_GT] = ACTIONS(419),
    [anon_sym_AMP_GT] = ACTIONS(419),
    [anon_sym_AMP_GT_GT] = ACTIONS(419),
    [anon_sym_LT_AMP] = ACTIONS(419),
    [anon_sym_GT_AMP] = ACTIONS(419),
    [anon_sym_LT_LT] = ACTIONS(419),
    [anon_sym_LT_LT_DASH] = ACTIONS(419),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(419),
    [anon_sym_LF] = ACTIONS(419),
    [anon_sym_AMP] = ACTIONS(419),
  },
  [200] = {
    [anon_sym_RBRACE] = ACTIONS(701),
    [anon_sym_COLON] = ACTIONS(703),
    [anon_sym_EQ] = ACTIONS(705),
    [anon_sym_COLON_QMARK] = ACTIONS(705),
    [anon_sym_COLON_DASH] = ACTIONS(705),
    [sym_comment] = ACTIONS(71),
  },
  [201] = {
    [anon_sym_RPAREN] = ACTIONS(707),
    [sym_comment] = ACTIONS(71),
  },
  [202] = {
    [sym__heredoc_middle] = ACTIONS(709),
    [sym__heredoc_end] = ACTIONS(709),
    [anon_sym_DOLLAR] = ACTIONS(711),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(709),
    [sym_comment] = ACTIONS(71),
  },
  [203] = {
    [sym_file_descriptor] = ACTIONS(713),
    [anon_sym_SEMI_SEMI] = ACTIONS(715),
    [anon_sym_PIPE] = ACTIONS(715),
    [anon_sym_PIPE_AMP] = ACTIONS(715),
    [anon_sym_AMP_AMP] = ACTIONS(715),
    [anon_sym_PIPE_PIPE] = ACTIONS(715),
    [anon_sym_LT] = ACTIONS(715),
    [anon_sym_GT] = ACTIONS(715),
    [anon_sym_GT_GT] = ACTIONS(715),
    [anon_sym_AMP_GT] = ACTIONS(715),
    [anon_sym_AMP_GT_GT] = ACTIONS(715),
    [anon_sym_LT_AMP] = ACTIONS(715),
    [anon_sym_GT_AMP] = ACTIONS(715),
    [anon_sym_LT_LT] = ACTIONS(715),
    [anon_sym_LT_LT_DASH] = ACTIONS(715),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(715),
    [anon_sym_LF] = ACTIONS(715),
    [anon_sym_AMP] = ACTIONS(715),
  },
  [204] = {
    [anon_sym_DOLLAR] = ACTIONS(717),
    [sym_word] = ACTIONS(719),
    [sym_comment] = ACTIONS(71),
  },
  [205] = {
    [sym_leading_word] = ACTIONS(721),
    [sym_comment] = ACTIONS(71),
  },
  [206] = {
    [sym_expansion] = STATE(281),
    [sym_operator_expansion] = STATE(281),
    [sym__heredoc_middle] = ACTIONS(723),
    [sym__heredoc_end] = ACTIONS(725),
    [anon_sym_DOLLAR] = ACTIONS(523),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(525),
    [sym_comment] = ACTIONS(71),
  },
  [207] = {
    [anon_sym_DQUOTE] = ACTIONS(617),
    [sym__quoted_chars] = ACTIONS(677),
    [anon_sym_DOLLAR] = ACTIONS(617),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(617),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(617),
    [sym_comment] = ACTIONS(145),
  },
  [208] = {
    [sym_quoted_argument] = STATE(283),
    [sym_expansion] = STATE(283),
    [sym_operator_expansion] = STATE(283),
    [sym_command_substitution] = STATE(283),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [sym_single_quoted_argument] = ACTIONS(727),
    [anon_sym_DOLLAR] = ACTIONS(127),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(129),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(131),
    [sym_word] = ACTIONS(729),
    [sym_comment] = ACTIONS(71),
  },
  [209] = {
    [anon_sym_DQUOTE] = ACTIONS(663),
    [sym__quoted_chars] = ACTIONS(685),
    [anon_sym_DOLLAR] = ACTIONS(663),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(663),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(663),
    [sym_comment] = ACTIONS(145),
  },
  [210] = {
    [sym_file_descriptor] = ACTIONS(543),
    [anon_sym_COLON] = ACTIONS(543),
    [anon_sym_DQUOTE] = ACTIONS(543),
    [sym_single_quoted_argument] = ACTIONS(673),
    [anon_sym_LT] = ACTIONS(673),
    [anon_sym_GT] = ACTIONS(673),
    [anon_sym_GT_GT] = ACTIONS(673),
    [anon_sym_AMP_GT] = ACTIONS(673),
    [anon_sym_AMP_GT_GT] = ACTIONS(673),
    [anon_sym_LT_AMP] = ACTIONS(673),
    [anon_sym_GT_AMP] = ACTIONS(673),
    [sym_leading_word] = ACTIONS(545),
    [sym_comment] = ACTIONS(71),
  },
  [211] = {
    [sym_file_descriptor] = ACTIONS(675),
    [anon_sym_COLON] = ACTIONS(675),
    [anon_sym_DQUOTE] = ACTIONS(675),
    [sym_single_quoted_argument] = ACTIONS(677),
    [anon_sym_LT] = ACTIONS(677),
    [anon_sym_GT] = ACTIONS(677),
    [anon_sym_GT_GT] = ACTIONS(677),
    [anon_sym_AMP_GT] = ACTIONS(677),
    [anon_sym_AMP_GT_GT] = ACTIONS(677),
    [anon_sym_LT_AMP] = ACTIONS(677),
    [anon_sym_GT_AMP] = ACTIONS(677),
    [sym_leading_word] = ACTIONS(617),
    [sym_comment] = ACTIONS(71),
  },
  [212] = {
    [sym_quoted_argument] = STATE(285),
    [sym_expansion] = STATE(285),
    [sym_operator_expansion] = STATE(285),
    [sym_command_substitution] = STATE(285),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [sym_single_quoted_argument] = ACTIONS(731),
    [anon_sym_DOLLAR] = ACTIONS(127),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(129),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(131),
    [sym_word] = ACTIONS(733),
    [sym_comment] = ACTIONS(71),
  },
  [213] = {
    [sym_file_descriptor] = ACTIONS(683),
    [anon_sym_COLON] = ACTIONS(683),
    [anon_sym_DQUOTE] = ACTIONS(683),
    [sym_single_quoted_argument] = ACTIONS(685),
    [anon_sym_LT] = ACTIONS(685),
    [anon_sym_GT] = ACTIONS(685),
    [anon_sym_GT_GT] = ACTIONS(685),
    [anon_sym_AMP_GT] = ACTIONS(685),
    [anon_sym_AMP_GT_GT] = ACTIONS(685),
    [anon_sym_LT_AMP] = ACTIONS(685),
    [anon_sym_GT_AMP] = ACTIONS(685),
    [sym_leading_word] = ACTIONS(663),
    [sym_comment] = ACTIONS(71),
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
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_function] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_RBRACE] = ACTIONS(735),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_single_quoted_argument] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_AMP_GT] = ACTIONS(99),
    [anon_sym_AMP_GT_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_leading_word] = ACTIONS(101),
    [sym_comment] = ACTIONS(71),
  },
  [215] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(737),
    [anon_sym_PIPE] = ACTIONS(737),
    [anon_sym_PIPE_AMP] = ACTIONS(737),
    [anon_sym_AMP_AMP] = ACTIONS(737),
    [anon_sym_PIPE_PIPE] = ACTIONS(737),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(737),
    [anon_sym_LF] = ACTIONS(737),
    [anon_sym_AMP] = ACTIONS(737),
  },
  [216] = {
    [sym_file_redirect] = STATE(121),
    [sym_heredoc_redirect] = STATE(121),
    [sym_file_descriptor] = ACTIONS(135),
    [anon_sym_SEMI_SEMI] = ACTIONS(739),
    [anon_sym_PIPE] = ACTIONS(739),
    [anon_sym_PIPE_AMP] = ACTIONS(739),
    [anon_sym_AMP_AMP] = ACTIONS(739),
    [anon_sym_PIPE_PIPE] = ACTIONS(739),
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
    [anon_sym_SEMI] = ACTIONS(739),
    [anon_sym_LF] = ACTIONS(739),
    [anon_sym_AMP] = ACTIONS(739),
  },
  [217] = {
    [sym_file_descriptor] = ACTIONS(309),
    [anon_sym_SEMI_SEMI] = ACTIONS(311),
    [anon_sym_COLON] = ACTIONS(311),
    [anon_sym_PIPE] = ACTIONS(311),
    [anon_sym_PIPE_AMP] = ACTIONS(311),
    [anon_sym_AMP_AMP] = ACTIONS(311),
    [anon_sym_PIPE_PIPE] = ACTIONS(311),
    [anon_sym_DQUOTE] = ACTIONS(311),
    [sym_single_quoted_argument] = ACTIONS(311),
    [anon_sym_LT] = ACTIONS(311),
    [anon_sym_GT] = ACTIONS(311),
    [anon_sym_GT_GT] = ACTIONS(311),
    [anon_sym_AMP_GT] = ACTIONS(311),
    [anon_sym_AMP_GT_GT] = ACTIONS(311),
    [anon_sym_LT_AMP] = ACTIONS(311),
    [anon_sym_GT_AMP] = ACTIONS(311),
    [sym_leading_word] = ACTIONS(311),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(311),
    [anon_sym_LF] = ACTIONS(311),
    [anon_sym_AMP] = ACTIONS(311),
  },
  [218] = {
    [sym_expansion] = STATE(127),
    [sym_operator_expansion] = STATE(127),
    [sym_command_substitution] = STATE(127),
    [anon_sym_DQUOTE] = ACTIONS(741),
    [sym__quoted_chars] = ACTIONS(325),
    [anon_sym_DOLLAR] = ACTIONS(151),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(153),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(155),
    [sym_comment] = ACTIONS(145),
  },
  [219] = {
    [sym_file_descriptor] = ACTIONS(459),
    [anon_sym_SEMI_SEMI] = ACTIONS(417),
    [anon_sym_COLON] = ACTIONS(417),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_PIPE_AMP] = ACTIONS(417),
    [anon_sym_AMP_AMP] = ACTIONS(417),
    [anon_sym_PIPE_PIPE] = ACTIONS(417),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [sym_single_quoted_argument] = ACTIONS(417),
    [anon_sym_LT] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(417),
    [anon_sym_GT_GT] = ACTIONS(417),
    [anon_sym_AMP_GT] = ACTIONS(417),
    [anon_sym_AMP_GT_GT] = ACTIONS(417),
    [anon_sym_LT_AMP] = ACTIONS(417),
    [anon_sym_GT_AMP] = ACTIONS(417),
    [sym_leading_word] = ACTIONS(417),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(417),
    [anon_sym_LF] = ACTIONS(417),
    [anon_sym_AMP] = ACTIONS(417),
  },
  [220] = {
    [sym_file_descriptor] = ACTIONS(463),
    [anon_sym_SEMI_SEMI] = ACTIONS(419),
    [anon_sym_COLON] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(419),
    [anon_sym_PIPE_AMP] = ACTIONS(419),
    [anon_sym_AMP_AMP] = ACTIONS(419),
    [anon_sym_PIPE_PIPE] = ACTIONS(419),
    [anon_sym_DQUOTE] = ACTIONS(419),
    [sym_single_quoted_argument] = ACTIONS(419),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_GT_GT] = ACTIONS(419),
    [anon_sym_AMP_GT] = ACTIONS(419),
    [anon_sym_AMP_GT_GT] = ACTIONS(419),
    [anon_sym_LT_AMP] = ACTIONS(419),
    [anon_sym_GT_AMP] = ACTIONS(419),
    [sym_leading_word] = ACTIONS(419),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(419),
    [anon_sym_LF] = ACTIONS(419),
    [anon_sym_AMP] = ACTIONS(419),
  },
  [221] = {
    [anon_sym_RBRACE] = ACTIONS(743),
    [anon_sym_COLON] = ACTIONS(745),
    [anon_sym_EQ] = ACTIONS(747),
    [anon_sym_COLON_QMARK] = ACTIONS(747),
    [anon_sym_COLON_DASH] = ACTIONS(747),
    [sym_comment] = ACTIONS(71),
  },
  [222] = {
    [anon_sym_RPAREN] = ACTIONS(749),
    [sym_comment] = ACTIONS(71),
  },
  [223] = {
    [sym_quoted_argument] = STATE(193),
    [sym_expansion] = STATE(193),
    [sym_operator_expansion] = STATE(193),
    [sym_command_substitution] = STATE(193),
    [sym_file_redirect] = STATE(47),
    [sym_heredoc_redirect] = STATE(47),
    [aux_sym_command_repeat2] = STATE(293),
    [sym_file_descriptor] = ACTIONS(135),
    [anon_sym_SEMI_SEMI] = ACTIONS(697),
    [anon_sym_PIPE] = ACTIONS(697),
    [anon_sym_PIPE_AMP] = ACTIONS(697),
    [anon_sym_AMP_AMP] = ACTIONS(697),
    [anon_sym_PIPE_PIPE] = ACTIONS(697),
    [anon_sym_DQUOTE] = ACTIONS(277),
    [sym_single_quoted_argument] = ACTIONS(503),
    [anon_sym_DOLLAR] = ACTIONS(281),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(283),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(285),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_GT_GT] = ACTIONS(141),
    [anon_sym_AMP_GT] = ACTIONS(141),
    [anon_sym_AMP_GT_GT] = ACTIONS(141),
    [anon_sym_LT_AMP] = ACTIONS(141),
    [anon_sym_GT_AMP] = ACTIONS(141),
    [anon_sym_LT_LT] = ACTIONS(143),
    [anon_sym_LT_LT_DASH] = ACTIONS(143),
    [sym_word] = ACTIONS(505),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(697),
    [anon_sym_LF] = ACTIONS(697),
    [anon_sym_AMP] = ACTIONS(697),
  },
  [224] = {
    [sym_quoted_argument] = STATE(193),
    [sym_expansion] = STATE(193),
    [sym_operator_expansion] = STATE(193),
    [sym_command_substitution] = STATE(193),
    [sym_file_redirect] = STATE(47),
    [sym_heredoc_redirect] = STATE(47),
    [aux_sym_command_repeat2] = STATE(294),
    [sym_file_descriptor] = ACTIONS(135),
    [anon_sym_SEMI_SEMI] = ACTIONS(751),
    [anon_sym_PIPE] = ACTIONS(751),
    [anon_sym_PIPE_AMP] = ACTIONS(751),
    [anon_sym_AMP_AMP] = ACTIONS(751),
    [anon_sym_PIPE_PIPE] = ACTIONS(751),
    [anon_sym_DQUOTE] = ACTIONS(277),
    [sym_single_quoted_argument] = ACTIONS(503),
    [anon_sym_DOLLAR] = ACTIONS(281),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(283),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(285),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_GT_GT] = ACTIONS(141),
    [anon_sym_AMP_GT] = ACTIONS(141),
    [anon_sym_AMP_GT_GT] = ACTIONS(141),
    [anon_sym_LT_AMP] = ACTIONS(141),
    [anon_sym_GT_AMP] = ACTIONS(141),
    [anon_sym_LT_LT] = ACTIONS(143),
    [anon_sym_LT_LT_DASH] = ACTIONS(143),
    [sym_word] = ACTIONS(505),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(751),
    [anon_sym_LF] = ACTIONS(751),
    [anon_sym_AMP] = ACTIONS(751),
  },
  [225] = {
    [sym_file_redirect] = STATE(121),
    [sym_heredoc_redirect] = STATE(121),
    [sym_file_descriptor] = ACTIONS(135),
    [anon_sym_SEMI_SEMI] = ACTIONS(751),
    [anon_sym_PIPE] = ACTIONS(751),
    [anon_sym_PIPE_AMP] = ACTIONS(751),
    [anon_sym_AMP_AMP] = ACTIONS(751),
    [anon_sym_PIPE_PIPE] = ACTIONS(751),
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
    [anon_sym_SEMI] = ACTIONS(751),
    [anon_sym_LF] = ACTIONS(751),
    [anon_sym_AMP] = ACTIONS(751),
  },
  [226] = {
    [sym_file_descriptor] = ACTIONS(567),
    [anon_sym_COLON] = ACTIONS(567),
    [anon_sym_DQUOTE] = ACTIONS(567),
    [sym_single_quoted_argument] = ACTIONS(753),
    [anon_sym_LT] = ACTIONS(753),
    [anon_sym_GT] = ACTIONS(753),
    [anon_sym_GT_GT] = ACTIONS(753),
    [anon_sym_AMP_GT] = ACTIONS(753),
    [anon_sym_AMP_GT_GT] = ACTIONS(753),
    [anon_sym_LT_AMP] = ACTIONS(753),
    [anon_sym_GT_AMP] = ACTIONS(753),
    [sym_leading_word] = ACTIONS(569),
    [sym_comment] = ACTIONS(71),
  },
  [227] = {
    [sym_file_descriptor] = ACTIONS(577),
    [anon_sym_COLON] = ACTIONS(577),
    [anon_sym_DQUOTE] = ACTIONS(577),
    [sym_single_quoted_argument] = ACTIONS(755),
    [anon_sym_LT] = ACTIONS(755),
    [anon_sym_GT] = ACTIONS(755),
    [anon_sym_GT_GT] = ACTIONS(755),
    [anon_sym_AMP_GT] = ACTIONS(755),
    [anon_sym_AMP_GT_GT] = ACTIONS(755),
    [anon_sym_LT_AMP] = ACTIONS(755),
    [anon_sym_GT_AMP] = ACTIONS(755),
    [sym_leading_word] = ACTIONS(579),
    [sym_comment] = ACTIONS(71),
  },
  [228] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(757),
    [anon_sym_PIPE] = ACTIONS(757),
    [anon_sym_PIPE_AMP] = ACTIONS(757),
    [anon_sym_AMP_AMP] = ACTIONS(757),
    [anon_sym_PIPE_PIPE] = ACTIONS(757),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(757),
    [anon_sym_LF] = ACTIONS(757),
    [anon_sym_AMP] = ACTIONS(757),
  },
  [229] = {
    [anon_sym_then] = ACTIONS(759),
    [sym_comment] = ACTIONS(71),
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
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_fi] = ACTIONS(761),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_function] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_single_quoted_argument] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_AMP_GT] = ACTIONS(99),
    [anon_sym_AMP_GT_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_leading_word] = ACTIONS(101),
    [sym_comment] = ACTIONS(71),
  },
  [231] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(763),
    [anon_sym_PIPE] = ACTIONS(763),
    [anon_sym_PIPE_AMP] = ACTIONS(763),
    [anon_sym_AMP_AMP] = ACTIONS(763),
    [anon_sym_PIPE_PIPE] = ACTIONS(763),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(763),
    [anon_sym_LF] = ACTIONS(763),
    [anon_sym_AMP] = ACTIONS(763),
  },
  [232] = {
    [anon_sym_fi] = ACTIONS(765),
    [sym_comment] = ACTIONS(71),
  },
  [233] = {
    [sym_elif_clause] = STATE(234),
    [sym_else_clause] = STATE(297),
    [anon_sym_fi] = ACTIONS(765),
    [anon_sym_elif] = ACTIONS(605),
    [anon_sym_else] = ACTIONS(607),
    [sym_comment] = ACTIONS(71),
  },
  [234] = {
    [anon_sym_fi] = ACTIONS(767),
    [anon_sym_elif] = ACTIONS(767),
    [anon_sym_else] = ACTIONS(767),
    [sym_comment] = ACTIONS(71),
  },
  [235] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(769),
    [anon_sym_PIPE] = ACTIONS(769),
    [anon_sym_PIPE_AMP] = ACTIONS(769),
    [anon_sym_AMP_AMP] = ACTIONS(769),
    [anon_sym_PIPE_PIPE] = ACTIONS(769),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(769),
    [anon_sym_LF] = ACTIONS(769),
    [anon_sym_AMP] = ACTIONS(769),
  },
  [236] = {
    [anon_sym_RPAREN] = ACTIONS(771),
    [sym_comment] = ACTIONS(71),
  },
  [237] = {
    [anon_sym_RPAREN] = ACTIONS(773),
    [sym_comment] = ACTIONS(71),
  },
  [238] = {
    [anon_sym_esac] = ACTIONS(775),
    [anon_sym_DQUOTE] = ACTIONS(777),
    [sym_single_quoted_argument] = ACTIONS(775),
    [anon_sym_DOLLAR] = ACTIONS(775),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(777),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(777),
    [sym_word] = ACTIONS(779),
    [sym_comment] = ACTIONS(71),
  },
  [239] = {
    [sym_case_item] = STATE(301),
    [sym_quoted_argument] = STATE(236),
    [sym_expansion] = STATE(236),
    [sym_operator_expansion] = STATE(236),
    [sym_command_substitution] = STATE(236),
    [anon_sym_esac] = ACTIONS(781),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [sym_single_quoted_argument] = ACTIONS(611),
    [anon_sym_DOLLAR] = ACTIONS(127),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(129),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(131),
    [sym_word] = ACTIONS(613),
    [sym_comment] = ACTIONS(71),
  },
  [240] = {
    [sym_case_item] = STATE(238),
    [sym_quoted_argument] = STATE(236),
    [sym_expansion] = STATE(236),
    [sym_operator_expansion] = STATE(236),
    [sym_command_substitution] = STATE(236),
    [aux_sym_case_statement_repeat1] = STATE(302),
    [anon_sym_esac] = ACTIONS(781),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [sym_single_quoted_argument] = ACTIONS(611),
    [anon_sym_DOLLAR] = ACTIONS(127),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(129),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(131),
    [sym_word] = ACTIONS(613),
    [sym_comment] = ACTIONS(71),
  },
  [241] = {
    [anon_sym_RBRACE] = ACTIONS(783),
    [sym_comment] = ACTIONS(71),
  },
  [242] = {
    [anon_sym_RBRACE] = ACTIONS(785),
    [sym_comment] = ACTIONS(71),
  },
  [243] = {
    [sym_quoted_argument] = STATE(305),
    [sym_expansion] = STATE(305),
    [sym_operator_expansion] = STATE(305),
    [sym_command_substitution] = STATE(305),
    [anon_sym_DQUOTE] = ACTIONS(629),
    [sym_single_quoted_argument] = ACTIONS(787),
    [anon_sym_DOLLAR] = ACTIONS(633),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(635),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(637),
    [sym_word] = ACTIONS(789),
    [sym_comment] = ACTIONS(71),
  },
  [244] = {
    [sym_expansion] = STATE(50),
    [sym_operator_expansion] = STATE(50),
    [sym_command_substitution] = STATE(50),
    [aux_sym_quoted_argument_repeat1] = STATE(308),
    [anon_sym_DQUOTE] = ACTIONS(791),
    [sym__quoted_chars] = ACTIONS(149),
    [anon_sym_DOLLAR] = ACTIONS(151),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(153),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(155),
    [sym_comment] = ACTIONS(145),
  },
  [245] = {
    [sym_file_descriptor] = ACTIONS(249),
    [anon_sym_RPAREN] = ACTIONS(249),
    [anon_sym_DQUOTE] = ACTIONS(249),
    [sym_single_quoted_argument] = ACTIONS(247),
    [anon_sym_DOLLAR] = ACTIONS(247),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(249),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(247),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_GT_GT] = ACTIONS(249),
    [anon_sym_AMP_GT] = ACTIONS(247),
    [anon_sym_AMP_GT_GT] = ACTIONS(249),
    [anon_sym_LT_AMP] = ACTIONS(249),
    [anon_sym_GT_AMP] = ACTIONS(249),
    [anon_sym_LT_LT] = ACTIONS(247),
    [anon_sym_LT_LT_DASH] = ACTIONS(249),
    [sym_word] = ACTIONS(251),
    [sym_comment] = ACTIONS(71),
  },
  [246] = {
    [anon_sym_DOLLAR] = ACTIONS(793),
    [sym_word] = ACTIONS(795),
    [sym_comment] = ACTIONS(71),
  },
  [247] = {
    [sym_leading_word] = ACTIONS(797),
    [sym_comment] = ACTIONS(71),
  },
  [248] = {
    [sym_command] = STATE(312),
    [sym_environment_variable_assignment] = STATE(18),
    [sym_quoted_argument] = STATE(85),
    [sym_file_redirect] = STATE(18),
    [aux_sym_command_repeat1] = STATE(89),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [sym_single_quoted_argument] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_AMP_GT] = ACTIONS(99),
    [anon_sym_AMP_GT_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_leading_word] = ACTIONS(233),
    [sym_comment] = ACTIONS(71),
  },
  [249] = {
    [sym_file_descriptor] = ACTIONS(261),
    [anon_sym_RPAREN] = ACTIONS(261),
    [anon_sym_DQUOTE] = ACTIONS(261),
    [sym_single_quoted_argument] = ACTIONS(259),
    [anon_sym_DOLLAR] = ACTIONS(259),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(261),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(261),
    [anon_sym_LT] = ACTIONS(259),
    [anon_sym_GT] = ACTIONS(259),
    [anon_sym_GT_GT] = ACTIONS(261),
    [anon_sym_AMP_GT] = ACTIONS(259),
    [anon_sym_AMP_GT_GT] = ACTIONS(261),
    [anon_sym_LT_AMP] = ACTIONS(261),
    [anon_sym_GT_AMP] = ACTIONS(261),
    [anon_sym_LT_LT] = ACTIONS(259),
    [anon_sym_LT_LT_DASH] = ACTIONS(261),
    [sym_word] = ACTIONS(263),
    [sym_comment] = ACTIONS(71),
  },
  [250] = {
    [sym_quoted_argument] = STATE(313),
    [sym_expansion] = STATE(313),
    [sym_operator_expansion] = STATE(313),
    [sym_command_substitution] = STATE(313),
    [sym_file_redirect] = STATE(169),
    [sym_heredoc_redirect] = STATE(169),
    [aux_sym_command_repeat2] = STATE(315),
    [sym_file_descriptor] = ACTIONS(427),
    [anon_sym_RPAREN] = ACTIONS(799),
    [anon_sym_DQUOTE] = ACTIONS(629),
    [sym_single_quoted_argument] = ACTIONS(801),
    [anon_sym_DOLLAR] = ACTIONS(633),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(635),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(637),
    [anon_sym_LT] = ACTIONS(639),
    [anon_sym_GT] = ACTIONS(639),
    [anon_sym_GT_GT] = ACTIONS(641),
    [anon_sym_AMP_GT] = ACTIONS(639),
    [anon_sym_AMP_GT_GT] = ACTIONS(641),
    [anon_sym_LT_AMP] = ACTIONS(641),
    [anon_sym_GT_AMP] = ACTIONS(641),
    [anon_sym_LT_LT] = ACTIONS(643),
    [anon_sym_LT_LT_DASH] = ACTIONS(645),
    [sym_word] = ACTIONS(803),
    [sym_comment] = ACTIONS(71),
  },
  [251] = {
    [sym_file_redirect] = STATE(257),
    [sym_heredoc_redirect] = STATE(257),
    [sym_file_descriptor] = ACTIONS(427),
    [anon_sym_RPAREN] = ACTIONS(799),
    [anon_sym_LT] = ACTIONS(639),
    [anon_sym_GT] = ACTIONS(639),
    [anon_sym_GT_GT] = ACTIONS(641),
    [anon_sym_AMP_GT] = ACTIONS(639),
    [anon_sym_AMP_GT_GT] = ACTIONS(641),
    [anon_sym_LT_AMP] = ACTIONS(641),
    [anon_sym_GT_AMP] = ACTIONS(641),
    [anon_sym_LT_LT] = ACTIONS(643),
    [anon_sym_LT_LT_DASH] = ACTIONS(645),
    [sym_comment] = ACTIONS(71),
  },
  [252] = {
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
    [sym_comment] = ACTIONS(71),
  },
  [253] = {
    [sym_file_descriptor] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(341),
    [anon_sym_LT] = ACTIONS(343),
    [anon_sym_GT] = ACTIONS(343),
    [anon_sym_GT_GT] = ACTIONS(341),
    [anon_sym_AMP_GT] = ACTIONS(343),
    [anon_sym_AMP_GT_GT] = ACTIONS(341),
    [anon_sym_LT_AMP] = ACTIONS(341),
    [anon_sym_GT_AMP] = ACTIONS(341),
    [anon_sym_LT_LT] = ACTIONS(343),
    [anon_sym_LT_LT_DASH] = ACTIONS(341),
    [sym_comment] = ACTIONS(71),
  },
  [254] = {
    [sym_file_descriptor] = ACTIONS(515),
    [anon_sym_RPAREN] = ACTIONS(515),
    [anon_sym_LT] = ACTIONS(805),
    [anon_sym_GT] = ACTIONS(805),
    [anon_sym_GT_GT] = ACTIONS(515),
    [anon_sym_AMP_GT] = ACTIONS(805),
    [anon_sym_AMP_GT_GT] = ACTIONS(515),
    [anon_sym_LT_AMP] = ACTIONS(515),
    [anon_sym_GT_AMP] = ACTIONS(515),
    [anon_sym_LT_LT] = ACTIONS(805),
    [anon_sym_LT_LT_DASH] = ACTIONS(515),
    [sym_comment] = ACTIONS(71),
  },
  [255] = {
    [sym_expansion] = STATE(202),
    [sym_operator_expansion] = STATE(202),
    [aux_sym_heredoc_repeat1] = STATE(317),
    [sym__heredoc_middle] = ACTIONS(519),
    [sym__heredoc_end] = ACTIONS(807),
    [anon_sym_DOLLAR] = ACTIONS(523),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(525),
    [sym_comment] = ACTIONS(71),
  },
  [256] = {
    [sym_file_descriptor] = ACTIONS(527),
    [anon_sym_RPAREN] = ACTIONS(527),
    [anon_sym_LT] = ACTIONS(809),
    [anon_sym_GT] = ACTIONS(809),
    [anon_sym_GT_GT] = ACTIONS(527),
    [anon_sym_AMP_GT] = ACTIONS(809),
    [anon_sym_AMP_GT_GT] = ACTIONS(527),
    [anon_sym_LT_AMP] = ACTIONS(527),
    [anon_sym_GT_AMP] = ACTIONS(527),
    [anon_sym_LT_LT] = ACTIONS(809),
    [anon_sym_LT_LT_DASH] = ACTIONS(527),
    [sym_comment] = ACTIONS(71),
  },
  [257] = {
    [sym_file_descriptor] = ACTIONS(531),
    [anon_sym_RPAREN] = ACTIONS(531),
    [anon_sym_LT] = ACTIONS(811),
    [anon_sym_GT] = ACTIONS(811),
    [anon_sym_GT_GT] = ACTIONS(531),
    [anon_sym_AMP_GT] = ACTIONS(811),
    [anon_sym_AMP_GT_GT] = ACTIONS(531),
    [anon_sym_LT_AMP] = ACTIONS(531),
    [anon_sym_GT_AMP] = ACTIONS(531),
    [anon_sym_LT_LT] = ACTIONS(811),
    [anon_sym_LT_LT_DASH] = ACTIONS(531),
    [sym_comment] = ACTIONS(71),
  },
  [258] = {
    [sym_file_descriptor] = ACTIONS(543),
    [anon_sym_RPAREN] = ACTIONS(545),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(545),
    [anon_sym_LT] = ACTIONS(545),
    [anon_sym_GT] = ACTIONS(545),
    [anon_sym_GT_GT] = ACTIONS(545),
    [anon_sym_AMP_GT] = ACTIONS(545),
    [anon_sym_AMP_GT_GT] = ACTIONS(545),
    [anon_sym_LT_AMP] = ACTIONS(545),
    [anon_sym_GT_AMP] = ACTIONS(545),
    [anon_sym_LT_LT] = ACTIONS(545),
    [anon_sym_LT_LT_DASH] = ACTIONS(545),
    [sym_comment] = ACTIONS(145),
  },
  [259] = {
    [sym_quoted_argument] = STATE(313),
    [sym_expansion] = STATE(313),
    [sym_operator_expansion] = STATE(313),
    [sym_command_substitution] = STATE(313),
    [sym_file_redirect] = STATE(169),
    [sym_heredoc_redirect] = STATE(169),
    [aux_sym_command_repeat2] = STATE(318),
    [sym_file_descriptor] = ACTIONS(427),
    [anon_sym_RPAREN] = ACTIONS(813),
    [anon_sym_DQUOTE] = ACTIONS(629),
    [sym_single_quoted_argument] = ACTIONS(801),
    [anon_sym_DOLLAR] = ACTIONS(633),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(635),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(637),
    [anon_sym_LT] = ACTIONS(639),
    [anon_sym_GT] = ACTIONS(639),
    [anon_sym_GT_GT] = ACTIONS(641),
    [anon_sym_AMP_GT] = ACTIONS(639),
    [anon_sym_AMP_GT_GT] = ACTIONS(641),
    [anon_sym_LT_AMP] = ACTIONS(641),
    [anon_sym_GT_AMP] = ACTIONS(641),
    [anon_sym_LT_LT] = ACTIONS(643),
    [anon_sym_LT_LT_DASH] = ACTIONS(645),
    [sym_word] = ACTIONS(803),
    [sym_comment] = ACTIONS(71),
  },
  [260] = {
    [sym_file_redirect] = STATE(257),
    [sym_heredoc_redirect] = STATE(257),
    [sym_file_descriptor] = ACTIONS(427),
    [anon_sym_RPAREN] = ACTIONS(813),
    [anon_sym_LT] = ACTIONS(639),
    [anon_sym_GT] = ACTIONS(639),
    [anon_sym_GT_GT] = ACTIONS(641),
    [anon_sym_AMP_GT] = ACTIONS(639),
    [anon_sym_AMP_GT_GT] = ACTIONS(641),
    [anon_sym_LT_AMP] = ACTIONS(641),
    [anon_sym_GT_AMP] = ACTIONS(641),
    [anon_sym_LT_LT] = ACTIONS(643),
    [anon_sym_LT_LT_DASH] = ACTIONS(645),
    [sym_comment] = ACTIONS(71),
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
    [sym_file_descriptor] = ACTIONS(427),
    [anon_sym_RPAREN] = ACTIONS(799),
    [anon_sym_DQUOTE] = ACTIONS(629),
    [sym_single_quoted_argument] = ACTIONS(631),
    [anon_sym_DOLLAR] = ACTIONS(633),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(635),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(637),
    [anon_sym_LT] = ACTIONS(639),
    [anon_sym_GT] = ACTIONS(639),
    [anon_sym_GT_GT] = ACTIONS(641),
    [anon_sym_AMP_GT] = ACTIONS(639),
    [anon_sym_AMP_GT_GT] = ACTIONS(641),
    [anon_sym_LT_AMP] = ACTIONS(641),
    [anon_sym_GT_AMP] = ACTIONS(641),
    [anon_sym_LT_LT] = ACTIONS(643),
    [anon_sym_LT_LT_DASH] = ACTIONS(645),
    [sym_word] = ACTIONS(647),
    [sym_comment] = ACTIONS(71),
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
    [sym_file_descriptor] = ACTIONS(427),
    [anon_sym_RPAREN] = ACTIONS(815),
    [anon_sym_DQUOTE] = ACTIONS(629),
    [sym_single_quoted_argument] = ACTIONS(631),
    [anon_sym_DOLLAR] = ACTIONS(633),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(635),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(637),
    [anon_sym_LT] = ACTIONS(639),
    [anon_sym_GT] = ACTIONS(639),
    [anon_sym_GT_GT] = ACTIONS(641),
    [anon_sym_AMP_GT] = ACTIONS(639),
    [anon_sym_AMP_GT_GT] = ACTIONS(641),
    [anon_sym_LT_AMP] = ACTIONS(641),
    [anon_sym_GT_AMP] = ACTIONS(641),
    [anon_sym_LT_LT] = ACTIONS(643),
    [anon_sym_LT_LT_DASH] = ACTIONS(645),
    [sym_word] = ACTIONS(647),
    [sym_comment] = ACTIONS(71),
  },
  [263] = {
    [sym_file_redirect] = STATE(257),
    [sym_heredoc_redirect] = STATE(257),
    [sym_file_descriptor] = ACTIONS(427),
    [anon_sym_RPAREN] = ACTIONS(815),
    [anon_sym_LT] = ACTIONS(639),
    [anon_sym_GT] = ACTIONS(639),
    [anon_sym_GT_GT] = ACTIONS(641),
    [anon_sym_AMP_GT] = ACTIONS(639),
    [anon_sym_AMP_GT_GT] = ACTIONS(641),
    [anon_sym_LT_AMP] = ACTIONS(641),
    [anon_sym_GT_AMP] = ACTIONS(641),
    [anon_sym_LT_LT] = ACTIONS(643),
    [anon_sym_LT_LT_DASH] = ACTIONS(645),
    [sym_comment] = ACTIONS(71),
  },
  [264] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(817),
    [anon_sym_PIPE] = ACTIONS(817),
    [anon_sym_PIPE_AMP] = ACTIONS(817),
    [anon_sym_AMP_AMP] = ACTIONS(817),
    [anon_sym_PIPE_PIPE] = ACTIONS(817),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(817),
    [anon_sym_LF] = ACTIONS(817),
    [anon_sym_AMP] = ACTIONS(817),
  },
  [265] = {
    [sym_case_item] = STATE(301),
    [sym_quoted_argument] = STATE(236),
    [sym_expansion] = STATE(236),
    [sym_operator_expansion] = STATE(236),
    [sym_command_substitution] = STATE(236),
    [anon_sym_esac] = ACTIONS(819),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [sym_single_quoted_argument] = ACTIONS(611),
    [anon_sym_DOLLAR] = ACTIONS(127),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(129),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(131),
    [sym_word] = ACTIONS(613),
    [sym_comment] = ACTIONS(71),
  },
  [266] = {
    [sym_case_item] = STATE(238),
    [sym_quoted_argument] = STATE(236),
    [sym_expansion] = STATE(236),
    [sym_operator_expansion] = STATE(236),
    [sym_command_substitution] = STATE(236),
    [aux_sym_case_statement_repeat1] = STATE(323),
    [anon_sym_esac] = ACTIONS(819),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [sym_single_quoted_argument] = ACTIONS(611),
    [anon_sym_DOLLAR] = ACTIONS(127),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(129),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(131),
    [sym_word] = ACTIONS(613),
    [sym_comment] = ACTIONS(71),
  },
  [267] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(821),
    [anon_sym_PIPE] = ACTIONS(821),
    [anon_sym_PIPE_AMP] = ACTIONS(821),
    [anon_sym_AMP_AMP] = ACTIONS(821),
    [anon_sym_PIPE_PIPE] = ACTIONS(821),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(821),
    [anon_sym_LF] = ACTIONS(821),
    [anon_sym_AMP] = ACTIONS(821),
  },
  [268] = {
    [anon_sym_RBRACE] = ACTIONS(823),
    [sym_comment] = ACTIONS(71),
  },
  [269] = {
    [anon_sym_RBRACE] = ACTIONS(825),
    [sym_comment] = ACTIONS(71),
  },
  [270] = {
    [sym_file_descriptor] = ACTIONS(543),
    [anon_sym_SEMI_SEMI] = ACTIONS(545),
    [anon_sym_PIPE] = ACTIONS(545),
    [anon_sym_PIPE_AMP] = ACTIONS(545),
    [anon_sym_AMP_AMP] = ACTIONS(545),
    [anon_sym_PIPE_PIPE] = ACTIONS(545),
    [anon_sym_DQUOTE] = ACTIONS(545),
    [sym_single_quoted_argument] = ACTIONS(545),
    [anon_sym_DOLLAR] = ACTIONS(545),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(545),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(545),
    [anon_sym_LT] = ACTIONS(545),
    [anon_sym_GT] = ACTIONS(545),
    [anon_sym_GT_GT] = ACTIONS(545),
    [anon_sym_AMP_GT] = ACTIONS(545),
    [anon_sym_AMP_GT_GT] = ACTIONS(545),
    [anon_sym_LT_AMP] = ACTIONS(545),
    [anon_sym_GT_AMP] = ACTIONS(545),
    [anon_sym_LT_LT] = ACTIONS(545),
    [anon_sym_LT_LT_DASH] = ACTIONS(545),
    [sym_word] = ACTIONS(545),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(545),
    [anon_sym_LF] = ACTIONS(545),
    [anon_sym_AMP] = ACTIONS(545),
  },
  [271] = {
    [sym_file_descriptor] = ACTIONS(675),
    [anon_sym_SEMI_SEMI] = ACTIONS(617),
    [anon_sym_PIPE] = ACTIONS(617),
    [anon_sym_PIPE_AMP] = ACTIONS(617),
    [anon_sym_AMP_AMP] = ACTIONS(617),
    [anon_sym_PIPE_PIPE] = ACTIONS(617),
    [anon_sym_DQUOTE] = ACTIONS(617),
    [sym_single_quoted_argument] = ACTIONS(617),
    [anon_sym_DOLLAR] = ACTIONS(617),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(617),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(617),
    [anon_sym_LT] = ACTIONS(617),
    [anon_sym_GT] = ACTIONS(617),
    [anon_sym_GT_GT] = ACTIONS(617),
    [anon_sym_AMP_GT] = ACTIONS(617),
    [anon_sym_AMP_GT_GT] = ACTIONS(617),
    [anon_sym_LT_AMP] = ACTIONS(617),
    [anon_sym_GT_AMP] = ACTIONS(617),
    [anon_sym_LT_LT] = ACTIONS(617),
    [anon_sym_LT_LT_DASH] = ACTIONS(617),
    [sym_word] = ACTIONS(617),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(617),
    [anon_sym_LF] = ACTIONS(617),
    [anon_sym_AMP] = ACTIONS(617),
  },
  [272] = {
    [sym_quoted_argument] = STATE(326),
    [sym_expansion] = STATE(326),
    [sym_operator_expansion] = STATE(326),
    [sym_command_substitution] = STATE(326),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [sym_single_quoted_argument] = ACTIONS(827),
    [anon_sym_DOLLAR] = ACTIONS(127),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(129),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(131),
    [sym_word] = ACTIONS(829),
    [sym_comment] = ACTIONS(71),
  },
  [273] = {
    [sym_file_descriptor] = ACTIONS(683),
    [anon_sym_SEMI_SEMI] = ACTIONS(663),
    [anon_sym_PIPE] = ACTIONS(663),
    [anon_sym_PIPE_AMP] = ACTIONS(663),
    [anon_sym_AMP_AMP] = ACTIONS(663),
    [anon_sym_PIPE_PIPE] = ACTIONS(663),
    [anon_sym_DQUOTE] = ACTIONS(663),
    [sym_single_quoted_argument] = ACTIONS(663),
    [anon_sym_DOLLAR] = ACTIONS(663),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(663),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(663),
    [anon_sym_LT] = ACTIONS(663),
    [anon_sym_GT] = ACTIONS(663),
    [anon_sym_GT_GT] = ACTIONS(663),
    [anon_sym_AMP_GT] = ACTIONS(663),
    [anon_sym_AMP_GT_GT] = ACTIONS(663),
    [anon_sym_LT_AMP] = ACTIONS(663),
    [anon_sym_GT_AMP] = ACTIONS(663),
    [anon_sym_LT_LT] = ACTIONS(663),
    [anon_sym_LT_LT_DASH] = ACTIONS(663),
    [sym_word] = ACTIONS(663),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(663),
    [anon_sym_LF] = ACTIONS(663),
    [anon_sym_AMP] = ACTIONS(663),
  },
  [274] = {
    [sym_file_descriptor] = ACTIONS(543),
    [anon_sym_SEMI_SEMI] = ACTIONS(545),
    [anon_sym_PIPE] = ACTIONS(545),
    [anon_sym_PIPE_AMP] = ACTIONS(545),
    [anon_sym_AMP_AMP] = ACTIONS(545),
    [anon_sym_PIPE_PIPE] = ACTIONS(545),
    [anon_sym_LT] = ACTIONS(545),
    [anon_sym_GT] = ACTIONS(545),
    [anon_sym_GT_GT] = ACTIONS(545),
    [anon_sym_AMP_GT] = ACTIONS(545),
    [anon_sym_AMP_GT_GT] = ACTIONS(545),
    [anon_sym_LT_AMP] = ACTIONS(545),
    [anon_sym_GT_AMP] = ACTIONS(545),
    [anon_sym_LT_LT] = ACTIONS(545),
    [anon_sym_LT_LT_DASH] = ACTIONS(545),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(545),
    [anon_sym_LF] = ACTIONS(545),
    [anon_sym_AMP] = ACTIONS(545),
  },
  [275] = {
    [sym_file_descriptor] = ACTIONS(675),
    [anon_sym_SEMI_SEMI] = ACTIONS(617),
    [anon_sym_PIPE] = ACTIONS(617),
    [anon_sym_PIPE_AMP] = ACTIONS(617),
    [anon_sym_AMP_AMP] = ACTIONS(617),
    [anon_sym_PIPE_PIPE] = ACTIONS(617),
    [anon_sym_LT] = ACTIONS(617),
    [anon_sym_GT] = ACTIONS(617),
    [anon_sym_GT_GT] = ACTIONS(617),
    [anon_sym_AMP_GT] = ACTIONS(617),
    [anon_sym_AMP_GT_GT] = ACTIONS(617),
    [anon_sym_LT_AMP] = ACTIONS(617),
    [anon_sym_GT_AMP] = ACTIONS(617),
    [anon_sym_LT_LT] = ACTIONS(617),
    [anon_sym_LT_LT_DASH] = ACTIONS(617),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(617),
    [anon_sym_LF] = ACTIONS(617),
    [anon_sym_AMP] = ACTIONS(617),
  },
  [276] = {
    [sym_quoted_argument] = STATE(328),
    [sym_expansion] = STATE(328),
    [sym_operator_expansion] = STATE(328),
    [sym_command_substitution] = STATE(328),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [sym_single_quoted_argument] = ACTIONS(831),
    [anon_sym_DOLLAR] = ACTIONS(127),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(129),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(131),
    [sym_word] = ACTIONS(833),
    [sym_comment] = ACTIONS(71),
  },
  [277] = {
    [sym_file_descriptor] = ACTIONS(683),
    [anon_sym_SEMI_SEMI] = ACTIONS(663),
    [anon_sym_PIPE] = ACTIONS(663),
    [anon_sym_PIPE_AMP] = ACTIONS(663),
    [anon_sym_AMP_AMP] = ACTIONS(663),
    [anon_sym_PIPE_PIPE] = ACTIONS(663),
    [anon_sym_LT] = ACTIONS(663),
    [anon_sym_GT] = ACTIONS(663),
    [anon_sym_GT_GT] = ACTIONS(663),
    [anon_sym_AMP_GT] = ACTIONS(663),
    [anon_sym_AMP_GT_GT] = ACTIONS(663),
    [anon_sym_LT_AMP] = ACTIONS(663),
    [anon_sym_GT_AMP] = ACTIONS(663),
    [anon_sym_LT_LT] = ACTIONS(663),
    [anon_sym_LT_LT_DASH] = ACTIONS(663),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(663),
    [anon_sym_LF] = ACTIONS(663),
    [anon_sym_AMP] = ACTIONS(663),
  },
  [278] = {
    [sym__heredoc_middle] = ACTIONS(459),
    [sym__heredoc_end] = ACTIONS(459),
    [anon_sym_DOLLAR] = ACTIONS(461),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(459),
    [sym_comment] = ACTIONS(71),
  },
  [279] = {
    [sym__heredoc_middle] = ACTIONS(463),
    [sym__heredoc_end] = ACTIONS(463),
    [anon_sym_DOLLAR] = ACTIONS(465),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(463),
    [sym_comment] = ACTIONS(71),
  },
  [280] = {
    [anon_sym_RBRACE] = ACTIONS(835),
    [anon_sym_COLON] = ACTIONS(837),
    [anon_sym_EQ] = ACTIONS(839),
    [anon_sym_COLON_QMARK] = ACTIONS(839),
    [anon_sym_COLON_DASH] = ACTIONS(839),
    [sym_comment] = ACTIONS(71),
  },
  [281] = {
    [sym__heredoc_middle] = ACTIONS(841),
    [sym__heredoc_end] = ACTIONS(841),
    [anon_sym_DOLLAR] = ACTIONS(843),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(841),
    [sym_comment] = ACTIONS(71),
  },
  [282] = {
    [sym_file_descriptor] = ACTIONS(845),
    [anon_sym_SEMI_SEMI] = ACTIONS(847),
    [anon_sym_PIPE] = ACTIONS(847),
    [anon_sym_PIPE_AMP] = ACTIONS(847),
    [anon_sym_AMP_AMP] = ACTIONS(847),
    [anon_sym_PIPE_PIPE] = ACTIONS(847),
    [anon_sym_LT] = ACTIONS(847),
    [anon_sym_GT] = ACTIONS(847),
    [anon_sym_GT_GT] = ACTIONS(847),
    [anon_sym_AMP_GT] = ACTIONS(847),
    [anon_sym_AMP_GT_GT] = ACTIONS(847),
    [anon_sym_LT_AMP] = ACTIONS(847),
    [anon_sym_GT_AMP] = ACTIONS(847),
    [anon_sym_LT_LT] = ACTIONS(847),
    [anon_sym_LT_LT_DASH] = ACTIONS(847),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(847),
    [anon_sym_LF] = ACTIONS(847),
    [anon_sym_AMP] = ACTIONS(847),
  },
  [283] = {
    [anon_sym_RBRACE] = ACTIONS(849),
    [sym_comment] = ACTIONS(71),
  },
  [284] = {
    [anon_sym_RBRACE] = ACTIONS(851),
    [sym_comment] = ACTIONS(71),
  },
  [285] = {
    [anon_sym_RBRACE] = ACTIONS(853),
    [sym_comment] = ACTIONS(71),
  },
  [286] = {
    [anon_sym_RBRACE] = ACTIONS(855),
    [sym_comment] = ACTIONS(71),
  },
  [287] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(857),
    [anon_sym_PIPE] = ACTIONS(857),
    [anon_sym_PIPE_AMP] = ACTIONS(857),
    [anon_sym_AMP_AMP] = ACTIONS(857),
    [anon_sym_PIPE_PIPE] = ACTIONS(857),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(857),
    [anon_sym_LF] = ACTIONS(857),
    [anon_sym_AMP] = ACTIONS(857),
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
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_function] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_RBRACE] = ACTIONS(859),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_single_quoted_argument] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_AMP_GT] = ACTIONS(99),
    [anon_sym_AMP_GT_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_leading_word] = ACTIONS(101),
    [sym_comment] = ACTIONS(71),
  },
  [289] = {
    [sym_file_descriptor] = ACTIONS(543),
    [anon_sym_SEMI_SEMI] = ACTIONS(545),
    [anon_sym_COLON] = ACTIONS(545),
    [anon_sym_PIPE] = ACTIONS(545),
    [anon_sym_PIPE_AMP] = ACTIONS(545),
    [anon_sym_AMP_AMP] = ACTIONS(545),
    [anon_sym_PIPE_PIPE] = ACTIONS(545),
    [anon_sym_DQUOTE] = ACTIONS(545),
    [sym_single_quoted_argument] = ACTIONS(545),
    [anon_sym_LT] = ACTIONS(545),
    [anon_sym_GT] = ACTIONS(545),
    [anon_sym_GT_GT] = ACTIONS(545),
    [anon_sym_AMP_GT] = ACTIONS(545),
    [anon_sym_AMP_GT_GT] = ACTIONS(545),
    [anon_sym_LT_AMP] = ACTIONS(545),
    [anon_sym_GT_AMP] = ACTIONS(545),
    [sym_leading_word] = ACTIONS(545),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(545),
    [anon_sym_LF] = ACTIONS(545),
    [anon_sym_AMP] = ACTIONS(545),
  },
  [290] = {
    [sym_file_descriptor] = ACTIONS(675),
    [anon_sym_SEMI_SEMI] = ACTIONS(617),
    [anon_sym_COLON] = ACTIONS(617),
    [anon_sym_PIPE] = ACTIONS(617),
    [anon_sym_PIPE_AMP] = ACTIONS(617),
    [anon_sym_AMP_AMP] = ACTIONS(617),
    [anon_sym_PIPE_PIPE] = ACTIONS(617),
    [anon_sym_DQUOTE] = ACTIONS(617),
    [sym_single_quoted_argument] = ACTIONS(617),
    [anon_sym_LT] = ACTIONS(617),
    [anon_sym_GT] = ACTIONS(617),
    [anon_sym_GT_GT] = ACTIONS(617),
    [anon_sym_AMP_GT] = ACTIONS(617),
    [anon_sym_AMP_GT_GT] = ACTIONS(617),
    [anon_sym_LT_AMP] = ACTIONS(617),
    [anon_sym_GT_AMP] = ACTIONS(617),
    [sym_leading_word] = ACTIONS(617),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(617),
    [anon_sym_LF] = ACTIONS(617),
    [anon_sym_AMP] = ACTIONS(617),
  },
  [291] = {
    [sym_quoted_argument] = STATE(337),
    [sym_expansion] = STATE(337),
    [sym_operator_expansion] = STATE(337),
    [sym_command_substitution] = STATE(337),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [sym_single_quoted_argument] = ACTIONS(861),
    [anon_sym_DOLLAR] = ACTIONS(127),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(129),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(131),
    [sym_word] = ACTIONS(863),
    [sym_comment] = ACTIONS(71),
  },
  [292] = {
    [sym_file_descriptor] = ACTIONS(683),
    [anon_sym_SEMI_SEMI] = ACTIONS(663),
    [anon_sym_COLON] = ACTIONS(663),
    [anon_sym_PIPE] = ACTIONS(663),
    [anon_sym_PIPE_AMP] = ACTIONS(663),
    [anon_sym_AMP_AMP] = ACTIONS(663),
    [anon_sym_PIPE_PIPE] = ACTIONS(663),
    [anon_sym_DQUOTE] = ACTIONS(663),
    [sym_single_quoted_argument] = ACTIONS(663),
    [anon_sym_LT] = ACTIONS(663),
    [anon_sym_GT] = ACTIONS(663),
    [anon_sym_GT_GT] = ACTIONS(663),
    [anon_sym_AMP_GT] = ACTIONS(663),
    [anon_sym_AMP_GT_GT] = ACTIONS(663),
    [anon_sym_LT_AMP] = ACTIONS(663),
    [anon_sym_GT_AMP] = ACTIONS(663),
    [sym_leading_word] = ACTIONS(663),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(663),
    [anon_sym_LF] = ACTIONS(663),
    [anon_sym_AMP] = ACTIONS(663),
  },
  [293] = {
    [sym_file_redirect] = STATE(121),
    [sym_heredoc_redirect] = STATE(121),
    [sym_file_descriptor] = ACTIONS(135),
    [anon_sym_SEMI_SEMI] = ACTIONS(865),
    [anon_sym_PIPE] = ACTIONS(865),
    [anon_sym_PIPE_AMP] = ACTIONS(865),
    [anon_sym_AMP_AMP] = ACTIONS(865),
    [anon_sym_PIPE_PIPE] = ACTIONS(865),
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
    [anon_sym_SEMI] = ACTIONS(865),
    [anon_sym_LF] = ACTIONS(865),
    [anon_sym_AMP] = ACTIONS(865),
  },
  [294] = {
    [sym_file_redirect] = STATE(121),
    [sym_heredoc_redirect] = STATE(121),
    [sym_file_descriptor] = ACTIONS(135),
    [anon_sym_SEMI_SEMI] = ACTIONS(867),
    [anon_sym_PIPE] = ACTIONS(867),
    [anon_sym_PIPE_AMP] = ACTIONS(867),
    [anon_sym_AMP_AMP] = ACTIONS(867),
    [anon_sym_PIPE_PIPE] = ACTIONS(867),
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
    [anon_sym_SEMI] = ACTIONS(867),
    [anon_sym_LF] = ACTIONS(867),
    [anon_sym_AMP] = ACTIONS(867),
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
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_fi] = ACTIONS(869),
    [anon_sym_elif] = ACTIONS(869),
    [anon_sym_else] = ACTIONS(869),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_function] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_single_quoted_argument] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_AMP_GT] = ACTIONS(99),
    [anon_sym_AMP_GT_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_leading_word] = ACTIONS(101),
    [sym_comment] = ACTIONS(71),
  },
  [296] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(871),
    [anon_sym_PIPE] = ACTIONS(871),
    [anon_sym_PIPE_AMP] = ACTIONS(871),
    [anon_sym_AMP_AMP] = ACTIONS(871),
    [anon_sym_PIPE_PIPE] = ACTIONS(871),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(871),
    [anon_sym_LF] = ACTIONS(871),
    [anon_sym_AMP] = ACTIONS(871),
  },
  [297] = {
    [anon_sym_fi] = ACTIONS(873),
    [sym_comment] = ACTIONS(71),
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
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_SEMI_SEMI] = ACTIONS(875),
    [anon_sym_function] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_single_quoted_argument] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_AMP_GT] = ACTIONS(99),
    [anon_sym_AMP_GT_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_leading_word] = ACTIONS(101),
    [sym_comment] = ACTIONS(71),
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
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_SEMI_SEMI] = ACTIONS(877),
    [anon_sym_function] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_single_quoted_argument] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_AMP_GT] = ACTIONS(99),
    [anon_sym_AMP_GT_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_leading_word] = ACTIONS(101),
    [sym_comment] = ACTIONS(71),
  },
  [300] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(879),
    [anon_sym_PIPE] = ACTIONS(879),
    [anon_sym_PIPE_AMP] = ACTIONS(879),
    [anon_sym_AMP_AMP] = ACTIONS(879),
    [anon_sym_PIPE_PIPE] = ACTIONS(879),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(879),
    [anon_sym_LF] = ACTIONS(879),
    [anon_sym_AMP] = ACTIONS(879),
  },
  [301] = {
    [anon_sym_esac] = ACTIONS(881),
    [anon_sym_DQUOTE] = ACTIONS(883),
    [sym_single_quoted_argument] = ACTIONS(881),
    [anon_sym_DOLLAR] = ACTIONS(881),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(883),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(883),
    [sym_word] = ACTIONS(885),
    [sym_comment] = ACTIONS(71),
  },
  [302] = {
    [sym_case_item] = STATE(301),
    [sym_quoted_argument] = STATE(236),
    [sym_expansion] = STATE(236),
    [sym_operator_expansion] = STATE(236),
    [sym_command_substitution] = STATE(236),
    [anon_sym_esac] = ACTIONS(887),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [sym_single_quoted_argument] = ACTIONS(611),
    [anon_sym_DOLLAR] = ACTIONS(127),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(129),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(131),
    [sym_word] = ACTIONS(613),
    [sym_comment] = ACTIONS(71),
  },
  [303] = {
    [anon_sym_in] = ACTIONS(889),
    [anon_sym_SEMI_SEMI] = ACTIONS(889),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(889),
    [anon_sym_LF] = ACTIONS(889),
    [anon_sym_AMP] = ACTIONS(889),
  },
  [304] = {
    [anon_sym_in] = ACTIONS(891),
    [anon_sym_SEMI_SEMI] = ACTIONS(891),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(891),
    [anon_sym_LF] = ACTIONS(891),
    [anon_sym_AMP] = ACTIONS(891),
  },
  [305] = {
    [sym_file_descriptor] = ACTIONS(389),
    [anon_sym_RPAREN] = ACTIONS(389),
    [anon_sym_LT] = ACTIONS(391),
    [anon_sym_GT] = ACTIONS(391),
    [anon_sym_GT_GT] = ACTIONS(389),
    [anon_sym_AMP_GT] = ACTIONS(391),
    [anon_sym_AMP_GT_GT] = ACTIONS(389),
    [anon_sym_LT_AMP] = ACTIONS(389),
    [anon_sym_GT_AMP] = ACTIONS(389),
    [anon_sym_LT_LT] = ACTIONS(391),
    [anon_sym_LT_LT_DASH] = ACTIONS(389),
    [sym_comment] = ACTIONS(71),
  },
  [306] = {
    [sym_file_descriptor] = ACTIONS(395),
    [anon_sym_RPAREN] = ACTIONS(395),
    [anon_sym_LT] = ACTIONS(397),
    [anon_sym_GT] = ACTIONS(397),
    [anon_sym_GT_GT] = ACTIONS(395),
    [anon_sym_AMP_GT] = ACTIONS(397),
    [anon_sym_AMP_GT_GT] = ACTIONS(395),
    [anon_sym_LT_AMP] = ACTIONS(395),
    [anon_sym_GT_AMP] = ACTIONS(395),
    [anon_sym_LT_LT] = ACTIONS(397),
    [anon_sym_LT_LT_DASH] = ACTIONS(395),
    [sym_comment] = ACTIONS(71),
  },
  [307] = {
    [sym_file_descriptor] = ACTIONS(309),
    [anon_sym_RPAREN] = ACTIONS(309),
    [anon_sym_DQUOTE] = ACTIONS(309),
    [sym_single_quoted_argument] = ACTIONS(455),
    [anon_sym_DOLLAR] = ACTIONS(455),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(309),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(309),
    [anon_sym_LT] = ACTIONS(455),
    [anon_sym_GT] = ACTIONS(455),
    [anon_sym_GT_GT] = ACTIONS(309),
    [anon_sym_AMP_GT] = ACTIONS(455),
    [anon_sym_AMP_GT_GT] = ACTIONS(309),
    [anon_sym_LT_AMP] = ACTIONS(309),
    [anon_sym_GT_AMP] = ACTIONS(309),
    [anon_sym_LT_LT] = ACTIONS(455),
    [anon_sym_LT_LT_DASH] = ACTIONS(309),
    [sym_word] = ACTIONS(311),
    [sym_comment] = ACTIONS(71),
  },
  [308] = {
    [sym_expansion] = STATE(127),
    [sym_operator_expansion] = STATE(127),
    [sym_command_substitution] = STATE(127),
    [anon_sym_DQUOTE] = ACTIONS(893),
    [sym__quoted_chars] = ACTIONS(325),
    [anon_sym_DOLLAR] = ACTIONS(151),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(153),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(155),
    [sym_comment] = ACTIONS(145),
  },
  [309] = {
    [sym_file_descriptor] = ACTIONS(459),
    [anon_sym_RPAREN] = ACTIONS(459),
    [anon_sym_DQUOTE] = ACTIONS(459),
    [sym_single_quoted_argument] = ACTIONS(461),
    [anon_sym_DOLLAR] = ACTIONS(461),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(459),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(459),
    [anon_sym_LT] = ACTIONS(461),
    [anon_sym_GT] = ACTIONS(461),
    [anon_sym_GT_GT] = ACTIONS(459),
    [anon_sym_AMP_GT] = ACTIONS(461),
    [anon_sym_AMP_GT_GT] = ACTIONS(459),
    [anon_sym_LT_AMP] = ACTIONS(459),
    [anon_sym_GT_AMP] = ACTIONS(459),
    [anon_sym_LT_LT] = ACTIONS(461),
    [anon_sym_LT_LT_DASH] = ACTIONS(459),
    [sym_word] = ACTIONS(417),
    [sym_comment] = ACTIONS(71),
  },
  [310] = {
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
    [sym_word] = ACTIONS(419),
    [sym_comment] = ACTIONS(71),
  },
  [311] = {
    [anon_sym_RBRACE] = ACTIONS(895),
    [anon_sym_COLON] = ACTIONS(897),
    [anon_sym_EQ] = ACTIONS(899),
    [anon_sym_COLON_QMARK] = ACTIONS(899),
    [anon_sym_COLON_DASH] = ACTIONS(899),
    [sym_comment] = ACTIONS(71),
  },
  [312] = {
    [anon_sym_RPAREN] = ACTIONS(901),
    [sym_comment] = ACTIONS(71),
  },
  [313] = {
    [sym_file_descriptor] = ACTIONS(479),
    [anon_sym_RPAREN] = ACTIONS(479),
    [anon_sym_DQUOTE] = ACTIONS(479),
    [sym_single_quoted_argument] = ACTIONS(477),
    [anon_sym_DOLLAR] = ACTIONS(477),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(479),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(479),
    [anon_sym_LT] = ACTIONS(477),
    [anon_sym_GT] = ACTIONS(477),
    [anon_sym_GT_GT] = ACTIONS(479),
    [anon_sym_AMP_GT] = ACTIONS(477),
    [anon_sym_AMP_GT_GT] = ACTIONS(479),
    [anon_sym_LT_AMP] = ACTIONS(479),
    [anon_sym_GT_AMP] = ACTIONS(479),
    [anon_sym_LT_LT] = ACTIONS(477),
    [anon_sym_LT_LT_DASH] = ACTIONS(479),
    [sym_word] = ACTIONS(481),
    [sym_comment] = ACTIONS(71),
  },
  [314] = {
    [sym_file_descriptor] = ACTIONS(485),
    [anon_sym_RPAREN] = ACTIONS(485),
    [anon_sym_DQUOTE] = ACTIONS(485),
    [sym_single_quoted_argument] = ACTIONS(483),
    [anon_sym_DOLLAR] = ACTIONS(483),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(485),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(485),
    [anon_sym_LT] = ACTIONS(483),
    [anon_sym_GT] = ACTIONS(483),
    [anon_sym_GT_GT] = ACTIONS(485),
    [anon_sym_AMP_GT] = ACTIONS(483),
    [anon_sym_AMP_GT_GT] = ACTIONS(485),
    [anon_sym_LT_AMP] = ACTIONS(485),
    [anon_sym_GT_AMP] = ACTIONS(485),
    [anon_sym_LT_LT] = ACTIONS(483),
    [anon_sym_LT_LT_DASH] = ACTIONS(485),
    [sym_word] = ACTIONS(487),
    [sym_comment] = ACTIONS(71),
  },
  [315] = {
    [sym_file_redirect] = STATE(257),
    [sym_heredoc_redirect] = STATE(257),
    [sym_file_descriptor] = ACTIONS(427),
    [anon_sym_RPAREN] = ACTIONS(903),
    [anon_sym_LT] = ACTIONS(639),
    [anon_sym_GT] = ACTIONS(639),
    [anon_sym_GT_GT] = ACTIONS(641),
    [anon_sym_AMP_GT] = ACTIONS(639),
    [anon_sym_AMP_GT_GT] = ACTIONS(641),
    [anon_sym_LT_AMP] = ACTIONS(641),
    [anon_sym_GT_AMP] = ACTIONS(641),
    [anon_sym_LT_LT] = ACTIONS(643),
    [anon_sym_LT_LT_DASH] = ACTIONS(645),
    [sym_comment] = ACTIONS(71),
  },
  [316] = {
    [sym_file_descriptor] = ACTIONS(713),
    [anon_sym_RPAREN] = ACTIONS(713),
    [anon_sym_LT] = ACTIONS(905),
    [anon_sym_GT] = ACTIONS(905),
    [anon_sym_GT_GT] = ACTIONS(713),
    [anon_sym_AMP_GT] = ACTIONS(905),
    [anon_sym_AMP_GT_GT] = ACTIONS(713),
    [anon_sym_LT_AMP] = ACTIONS(713),
    [anon_sym_GT_AMP] = ACTIONS(713),
    [anon_sym_LT_LT] = ACTIONS(905),
    [anon_sym_LT_LT_DASH] = ACTIONS(713),
    [sym_comment] = ACTIONS(71),
  },
  [317] = {
    [sym_expansion] = STATE(281),
    [sym_operator_expansion] = STATE(281),
    [sym__heredoc_middle] = ACTIONS(723),
    [sym__heredoc_end] = ACTIONS(907),
    [anon_sym_DOLLAR] = ACTIONS(523),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(525),
    [sym_comment] = ACTIONS(71),
  },
  [318] = {
    [sym_file_redirect] = STATE(257),
    [sym_heredoc_redirect] = STATE(257),
    [sym_file_descriptor] = ACTIONS(427),
    [anon_sym_RPAREN] = ACTIONS(909),
    [anon_sym_LT] = ACTIONS(639),
    [anon_sym_GT] = ACTIONS(639),
    [anon_sym_GT_GT] = ACTIONS(641),
    [anon_sym_AMP_GT] = ACTIONS(639),
    [anon_sym_AMP_GT_GT] = ACTIONS(641),
    [anon_sym_LT_AMP] = ACTIONS(641),
    [anon_sym_GT_AMP] = ACTIONS(641),
    [anon_sym_LT_LT] = ACTIONS(643),
    [anon_sym_LT_LT_DASH] = ACTIONS(645),
    [sym_comment] = ACTIONS(71),
  },
  [319] = {
    [sym_quoted_argument] = STATE(313),
    [sym_expansion] = STATE(313),
    [sym_operator_expansion] = STATE(313),
    [sym_command_substitution] = STATE(313),
    [sym_file_redirect] = STATE(169),
    [sym_heredoc_redirect] = STATE(169),
    [aux_sym_command_repeat2] = STATE(351),
    [sym_file_descriptor] = ACTIONS(427),
    [anon_sym_RPAREN] = ACTIONS(903),
    [anon_sym_DQUOTE] = ACTIONS(629),
    [sym_single_quoted_argument] = ACTIONS(801),
    [anon_sym_DOLLAR] = ACTIONS(633),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(635),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(637),
    [anon_sym_LT] = ACTIONS(639),
    [anon_sym_GT] = ACTIONS(639),
    [anon_sym_GT_GT] = ACTIONS(641),
    [anon_sym_AMP_GT] = ACTIONS(639),
    [anon_sym_AMP_GT_GT] = ACTIONS(641),
    [anon_sym_LT_AMP] = ACTIONS(641),
    [anon_sym_GT_AMP] = ACTIONS(641),
    [anon_sym_LT_LT] = ACTIONS(643),
    [anon_sym_LT_LT_DASH] = ACTIONS(645),
    [sym_word] = ACTIONS(803),
    [sym_comment] = ACTIONS(71),
  },
  [320] = {
    [sym_quoted_argument] = STATE(313),
    [sym_expansion] = STATE(313),
    [sym_operator_expansion] = STATE(313),
    [sym_command_substitution] = STATE(313),
    [sym_file_redirect] = STATE(169),
    [sym_heredoc_redirect] = STATE(169),
    [aux_sym_command_repeat2] = STATE(352),
    [sym_file_descriptor] = ACTIONS(427),
    [anon_sym_RPAREN] = ACTIONS(911),
    [anon_sym_DQUOTE] = ACTIONS(629),
    [sym_single_quoted_argument] = ACTIONS(801),
    [anon_sym_DOLLAR] = ACTIONS(633),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(635),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(637),
    [anon_sym_LT] = ACTIONS(639),
    [anon_sym_GT] = ACTIONS(639),
    [anon_sym_GT_GT] = ACTIONS(641),
    [anon_sym_AMP_GT] = ACTIONS(639),
    [anon_sym_AMP_GT_GT] = ACTIONS(641),
    [anon_sym_LT_AMP] = ACTIONS(641),
    [anon_sym_GT_AMP] = ACTIONS(641),
    [anon_sym_LT_LT] = ACTIONS(643),
    [anon_sym_LT_LT_DASH] = ACTIONS(645),
    [sym_word] = ACTIONS(803),
    [sym_comment] = ACTIONS(71),
  },
  [321] = {
    [sym_file_redirect] = STATE(257),
    [sym_heredoc_redirect] = STATE(257),
    [sym_file_descriptor] = ACTIONS(427),
    [anon_sym_RPAREN] = ACTIONS(911),
    [anon_sym_LT] = ACTIONS(639),
    [anon_sym_GT] = ACTIONS(639),
    [anon_sym_GT_GT] = ACTIONS(641),
    [anon_sym_AMP_GT] = ACTIONS(639),
    [anon_sym_AMP_GT_GT] = ACTIONS(641),
    [anon_sym_LT_AMP] = ACTIONS(641),
    [anon_sym_GT_AMP] = ACTIONS(641),
    [anon_sym_LT_LT] = ACTIONS(643),
    [anon_sym_LT_LT_DASH] = ACTIONS(645),
    [sym_comment] = ACTIONS(71),
  },
  [322] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(913),
    [anon_sym_PIPE] = ACTIONS(913),
    [anon_sym_PIPE_AMP] = ACTIONS(913),
    [anon_sym_AMP_AMP] = ACTIONS(913),
    [anon_sym_PIPE_PIPE] = ACTIONS(913),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(913),
    [anon_sym_LF] = ACTIONS(913),
    [anon_sym_AMP] = ACTIONS(913),
  },
  [323] = {
    [sym_case_item] = STATE(301),
    [sym_quoted_argument] = STATE(236),
    [sym_expansion] = STATE(236),
    [sym_operator_expansion] = STATE(236),
    [sym_command_substitution] = STATE(236),
    [anon_sym_esac] = ACTIONS(915),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [sym_single_quoted_argument] = ACTIONS(611),
    [anon_sym_DOLLAR] = ACTIONS(127),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(129),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(131),
    [sym_word] = ACTIONS(613),
    [sym_comment] = ACTIONS(71),
  },
  [324] = {
    [anon_sym_RPAREN] = ACTIONS(917),
    [anon_sym_RBRACE] = ACTIONS(917),
    [anon_sym_RBRACK] = ACTIONS(919),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(919),
    [anon_sym_DQUOTE] = ACTIONS(917),
    [sym_single_quoted_argument] = ACTIONS(919),
    [anon_sym_DOLLAR] = ACTIONS(919),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(917),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(917),
    [sym_word] = ACTIONS(889),
    [sym_comment] = ACTIONS(71),
  },
  [325] = {
    [anon_sym_RPAREN] = ACTIONS(921),
    [anon_sym_RBRACE] = ACTIONS(921),
    [anon_sym_RBRACK] = ACTIONS(923),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(923),
    [anon_sym_DQUOTE] = ACTIONS(921),
    [sym_single_quoted_argument] = ACTIONS(923),
    [anon_sym_DOLLAR] = ACTIONS(923),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(921),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(921),
    [sym_word] = ACTIONS(891),
    [sym_comment] = ACTIONS(71),
  },
  [326] = {
    [anon_sym_RBRACE] = ACTIONS(925),
    [sym_comment] = ACTIONS(71),
  },
  [327] = {
    [anon_sym_RBRACE] = ACTIONS(927),
    [sym_comment] = ACTIONS(71),
  },
  [328] = {
    [anon_sym_RBRACE] = ACTIONS(929),
    [sym_comment] = ACTIONS(71),
  },
  [329] = {
    [anon_sym_RBRACE] = ACTIONS(931),
    [sym_comment] = ACTIONS(71),
  },
  [330] = {
    [sym__heredoc_middle] = ACTIONS(675),
    [sym__heredoc_end] = ACTIONS(675),
    [anon_sym_DOLLAR] = ACTIONS(677),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(675),
    [sym_comment] = ACTIONS(71),
  },
  [331] = {
    [sym_quoted_argument] = STATE(358),
    [sym_expansion] = STATE(358),
    [sym_operator_expansion] = STATE(358),
    [sym_command_substitution] = STATE(358),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [sym_single_quoted_argument] = ACTIONS(933),
    [anon_sym_DOLLAR] = ACTIONS(127),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(129),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(131),
    [sym_word] = ACTIONS(935),
    [sym_comment] = ACTIONS(71),
  },
  [332] = {
    [anon_sym_DQUOTE] = ACTIONS(889),
    [sym__quoted_chars] = ACTIONS(919),
    [anon_sym_DOLLAR] = ACTIONS(889),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(889),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(889),
    [sym_comment] = ACTIONS(145),
  },
  [333] = {
    [anon_sym_DQUOTE] = ACTIONS(891),
    [sym__quoted_chars] = ACTIONS(923),
    [anon_sym_DOLLAR] = ACTIONS(891),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(891),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(891),
    [sym_comment] = ACTIONS(145),
  },
  [334] = {
    [sym_file_descriptor] = ACTIONS(917),
    [anon_sym_COLON] = ACTIONS(917),
    [anon_sym_DQUOTE] = ACTIONS(917),
    [sym_single_quoted_argument] = ACTIONS(919),
    [anon_sym_LT] = ACTIONS(919),
    [anon_sym_GT] = ACTIONS(919),
    [anon_sym_GT_GT] = ACTIONS(919),
    [anon_sym_AMP_GT] = ACTIONS(919),
    [anon_sym_AMP_GT_GT] = ACTIONS(919),
    [anon_sym_LT_AMP] = ACTIONS(919),
    [anon_sym_GT_AMP] = ACTIONS(919),
    [sym_leading_word] = ACTIONS(889),
    [sym_comment] = ACTIONS(71),
  },
  [335] = {
    [sym_file_descriptor] = ACTIONS(921),
    [anon_sym_COLON] = ACTIONS(921),
    [anon_sym_DQUOTE] = ACTIONS(921),
    [sym_single_quoted_argument] = ACTIONS(923),
    [anon_sym_LT] = ACTIONS(923),
    [anon_sym_GT] = ACTIONS(923),
    [anon_sym_GT_GT] = ACTIONS(923),
    [anon_sym_AMP_GT] = ACTIONS(923),
    [anon_sym_AMP_GT_GT] = ACTIONS(923),
    [anon_sym_LT_AMP] = ACTIONS(923),
    [anon_sym_GT_AMP] = ACTIONS(923),
    [sym_leading_word] = ACTIONS(891),
    [sym_comment] = ACTIONS(71),
  },
  [336] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(937),
    [anon_sym_PIPE] = ACTIONS(937),
    [anon_sym_PIPE_AMP] = ACTIONS(937),
    [anon_sym_AMP_AMP] = ACTIONS(937),
    [anon_sym_PIPE_PIPE] = ACTIONS(937),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(937),
    [anon_sym_LF] = ACTIONS(937),
    [anon_sym_AMP] = ACTIONS(937),
  },
  [337] = {
    [anon_sym_RBRACE] = ACTIONS(939),
    [sym_comment] = ACTIONS(71),
  },
  [338] = {
    [anon_sym_RBRACE] = ACTIONS(941),
    [sym_comment] = ACTIONS(71),
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
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_fi] = ACTIONS(943),
    [anon_sym_elif] = ACTIONS(943),
    [anon_sym_else] = ACTIONS(943),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_function] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_single_quoted_argument] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_AMP_GT] = ACTIONS(99),
    [anon_sym_AMP_GT_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_leading_word] = ACTIONS(101),
    [sym_comment] = ACTIONS(71),
  },
  [340] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(945),
    [anon_sym_PIPE] = ACTIONS(945),
    [anon_sym_PIPE_AMP] = ACTIONS(945),
    [anon_sym_AMP_AMP] = ACTIONS(945),
    [anon_sym_PIPE_PIPE] = ACTIONS(945),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(945),
    [anon_sym_LF] = ACTIONS(945),
    [anon_sym_AMP] = ACTIONS(945),
  },
  [341] = {
    [anon_sym_esac] = ACTIONS(947),
    [anon_sym_DQUOTE] = ACTIONS(949),
    [sym_single_quoted_argument] = ACTIONS(947),
    [anon_sym_DOLLAR] = ACTIONS(947),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(949),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(949),
    [sym_word] = ACTIONS(951),
    [sym_comment] = ACTIONS(71),
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
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_SEMI_SEMI] = ACTIONS(953),
    [anon_sym_function] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_single_quoted_argument] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_AMP_GT] = ACTIONS(99),
    [anon_sym_AMP_GT_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_leading_word] = ACTIONS(101),
    [sym_comment] = ACTIONS(71),
  },
  [343] = {
    [anon_sym_esac] = ACTIONS(955),
    [anon_sym_DQUOTE] = ACTIONS(957),
    [sym_single_quoted_argument] = ACTIONS(955),
    [anon_sym_DOLLAR] = ACTIONS(955),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(957),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(957),
    [sym_word] = ACTIONS(959),
    [sym_comment] = ACTIONS(71),
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
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_SEMI_SEMI] = ACTIONS(961),
    [anon_sym_function] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_single_quoted_argument] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_AMP_GT] = ACTIONS(99),
    [anon_sym_AMP_GT_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_leading_word] = ACTIONS(101),
    [sym_comment] = ACTIONS(71),
  },
  [345] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(963),
    [anon_sym_PIPE] = ACTIONS(963),
    [anon_sym_PIPE_AMP] = ACTIONS(963),
    [anon_sym_AMP_AMP] = ACTIONS(963),
    [anon_sym_PIPE_PIPE] = ACTIONS(963),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(963),
    [anon_sym_LF] = ACTIONS(963),
    [anon_sym_AMP] = ACTIONS(963),
  },
  [346] = {
    [sym_file_descriptor] = ACTIONS(543),
    [anon_sym_RPAREN] = ACTIONS(543),
    [anon_sym_DQUOTE] = ACTIONS(543),
    [sym_single_quoted_argument] = ACTIONS(673),
    [anon_sym_DOLLAR] = ACTIONS(673),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(543),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(543),
    [anon_sym_LT] = ACTIONS(673),
    [anon_sym_GT] = ACTIONS(673),
    [anon_sym_GT_GT] = ACTIONS(543),
    [anon_sym_AMP_GT] = ACTIONS(673),
    [anon_sym_AMP_GT_GT] = ACTIONS(543),
    [anon_sym_LT_AMP] = ACTIONS(543),
    [anon_sym_GT_AMP] = ACTIONS(543),
    [anon_sym_LT_LT] = ACTIONS(673),
    [anon_sym_LT_LT_DASH] = ACTIONS(543),
    [sym_word] = ACTIONS(545),
    [sym_comment] = ACTIONS(71),
  },
  [347] = {
    [sym_file_descriptor] = ACTIONS(675),
    [anon_sym_RPAREN] = ACTIONS(675),
    [anon_sym_DQUOTE] = ACTIONS(675),
    [sym_single_quoted_argument] = ACTIONS(677),
    [anon_sym_DOLLAR] = ACTIONS(677),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(675),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(675),
    [anon_sym_LT] = ACTIONS(677),
    [anon_sym_GT] = ACTIONS(677),
    [anon_sym_GT_GT] = ACTIONS(675),
    [anon_sym_AMP_GT] = ACTIONS(677),
    [anon_sym_AMP_GT_GT] = ACTIONS(675),
    [anon_sym_LT_AMP] = ACTIONS(675),
    [anon_sym_GT_AMP] = ACTIONS(675),
    [anon_sym_LT_LT] = ACTIONS(677),
    [anon_sym_LT_LT_DASH] = ACTIONS(675),
    [sym_word] = ACTIONS(617),
    [sym_comment] = ACTIONS(71),
  },
  [348] = {
    [sym_quoted_argument] = STATE(364),
    [sym_expansion] = STATE(364),
    [sym_operator_expansion] = STATE(364),
    [sym_command_substitution] = STATE(364),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [sym_single_quoted_argument] = ACTIONS(965),
    [anon_sym_DOLLAR] = ACTIONS(127),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(129),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(131),
    [sym_word] = ACTIONS(967),
    [sym_comment] = ACTIONS(71),
  },
  [349] = {
    [sym_file_descriptor] = ACTIONS(683),
    [anon_sym_RPAREN] = ACTIONS(683),
    [anon_sym_DQUOTE] = ACTIONS(683),
    [sym_single_quoted_argument] = ACTIONS(685),
    [anon_sym_DOLLAR] = ACTIONS(685),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(683),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(683),
    [anon_sym_LT] = ACTIONS(685),
    [anon_sym_GT] = ACTIONS(685),
    [anon_sym_GT_GT] = ACTIONS(683),
    [anon_sym_AMP_GT] = ACTIONS(685),
    [anon_sym_AMP_GT_GT] = ACTIONS(683),
    [anon_sym_LT_AMP] = ACTIONS(683),
    [anon_sym_GT_AMP] = ACTIONS(683),
    [anon_sym_LT_LT] = ACTIONS(685),
    [anon_sym_LT_LT_DASH] = ACTIONS(683),
    [sym_word] = ACTIONS(663),
    [sym_comment] = ACTIONS(71),
  },
  [350] = {
    [sym_file_descriptor] = ACTIONS(845),
    [anon_sym_RPAREN] = ACTIONS(845),
    [anon_sym_LT] = ACTIONS(969),
    [anon_sym_GT] = ACTIONS(969),
    [anon_sym_GT_GT] = ACTIONS(845),
    [anon_sym_AMP_GT] = ACTIONS(969),
    [anon_sym_AMP_GT_GT] = ACTIONS(845),
    [anon_sym_LT_AMP] = ACTIONS(845),
    [anon_sym_GT_AMP] = ACTIONS(845),
    [anon_sym_LT_LT] = ACTIONS(969),
    [anon_sym_LT_LT_DASH] = ACTIONS(845),
    [sym_comment] = ACTIONS(71),
  },
  [351] = {
    [sym_file_redirect] = STATE(257),
    [sym_heredoc_redirect] = STATE(257),
    [sym_file_descriptor] = ACTIONS(427),
    [anon_sym_RPAREN] = ACTIONS(971),
    [anon_sym_LT] = ACTIONS(639),
    [anon_sym_GT] = ACTIONS(639),
    [anon_sym_GT_GT] = ACTIONS(641),
    [anon_sym_AMP_GT] = ACTIONS(639),
    [anon_sym_AMP_GT_GT] = ACTIONS(641),
    [anon_sym_LT_AMP] = ACTIONS(641),
    [anon_sym_GT_AMP] = ACTIONS(641),
    [anon_sym_LT_LT] = ACTIONS(643),
    [anon_sym_LT_LT_DASH] = ACTIONS(645),
    [sym_comment] = ACTIONS(71),
  },
  [352] = {
    [sym_file_redirect] = STATE(257),
    [sym_heredoc_redirect] = STATE(257),
    [sym_file_descriptor] = ACTIONS(427),
    [anon_sym_RPAREN] = ACTIONS(973),
    [anon_sym_LT] = ACTIONS(639),
    [anon_sym_GT] = ACTIONS(639),
    [anon_sym_GT_GT] = ACTIONS(641),
    [anon_sym_AMP_GT] = ACTIONS(639),
    [anon_sym_AMP_GT_GT] = ACTIONS(641),
    [anon_sym_LT_AMP] = ACTIONS(641),
    [anon_sym_GT_AMP] = ACTIONS(641),
    [anon_sym_LT_LT] = ACTIONS(643),
    [anon_sym_LT_LT_DASH] = ACTIONS(645),
    [sym_comment] = ACTIONS(71),
  },
  [353] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(975),
    [anon_sym_PIPE] = ACTIONS(975),
    [anon_sym_PIPE_AMP] = ACTIONS(975),
    [anon_sym_AMP_AMP] = ACTIONS(975),
    [anon_sym_PIPE_PIPE] = ACTIONS(975),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(975),
    [anon_sym_LF] = ACTIONS(975),
    [anon_sym_AMP] = ACTIONS(975),
  },
  [354] = {
    [sym_file_descriptor] = ACTIONS(917),
    [anon_sym_SEMI_SEMI] = ACTIONS(889),
    [anon_sym_PIPE] = ACTIONS(889),
    [anon_sym_PIPE_AMP] = ACTIONS(889),
    [anon_sym_AMP_AMP] = ACTIONS(889),
    [anon_sym_PIPE_PIPE] = ACTIONS(889),
    [anon_sym_DQUOTE] = ACTIONS(889),
    [sym_single_quoted_argument] = ACTIONS(889),
    [anon_sym_DOLLAR] = ACTIONS(889),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(889),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(889),
    [anon_sym_LT] = ACTIONS(889),
    [anon_sym_GT] = ACTIONS(889),
    [anon_sym_GT_GT] = ACTIONS(889),
    [anon_sym_AMP_GT] = ACTIONS(889),
    [anon_sym_AMP_GT_GT] = ACTIONS(889),
    [anon_sym_LT_AMP] = ACTIONS(889),
    [anon_sym_GT_AMP] = ACTIONS(889),
    [anon_sym_LT_LT] = ACTIONS(889),
    [anon_sym_LT_LT_DASH] = ACTIONS(889),
    [sym_word] = ACTIONS(889),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(889),
    [anon_sym_LF] = ACTIONS(889),
    [anon_sym_AMP] = ACTIONS(889),
  },
  [355] = {
    [sym_file_descriptor] = ACTIONS(921),
    [anon_sym_SEMI_SEMI] = ACTIONS(891),
    [anon_sym_PIPE] = ACTIONS(891),
    [anon_sym_PIPE_AMP] = ACTIONS(891),
    [anon_sym_AMP_AMP] = ACTIONS(891),
    [anon_sym_PIPE_PIPE] = ACTIONS(891),
    [anon_sym_DQUOTE] = ACTIONS(891),
    [sym_single_quoted_argument] = ACTIONS(891),
    [anon_sym_DOLLAR] = ACTIONS(891),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(891),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(891),
    [anon_sym_LT] = ACTIONS(891),
    [anon_sym_GT] = ACTIONS(891),
    [anon_sym_GT_GT] = ACTIONS(891),
    [anon_sym_AMP_GT] = ACTIONS(891),
    [anon_sym_AMP_GT_GT] = ACTIONS(891),
    [anon_sym_LT_AMP] = ACTIONS(891),
    [anon_sym_GT_AMP] = ACTIONS(891),
    [anon_sym_LT_LT] = ACTIONS(891),
    [anon_sym_LT_LT_DASH] = ACTIONS(891),
    [sym_word] = ACTIONS(891),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(891),
    [anon_sym_LF] = ACTIONS(891),
    [anon_sym_AMP] = ACTIONS(891),
  },
  [356] = {
    [sym_file_descriptor] = ACTIONS(917),
    [anon_sym_SEMI_SEMI] = ACTIONS(889),
    [anon_sym_PIPE] = ACTIONS(889),
    [anon_sym_PIPE_AMP] = ACTIONS(889),
    [anon_sym_AMP_AMP] = ACTIONS(889),
    [anon_sym_PIPE_PIPE] = ACTIONS(889),
    [anon_sym_LT] = ACTIONS(889),
    [anon_sym_GT] = ACTIONS(889),
    [anon_sym_GT_GT] = ACTIONS(889),
    [anon_sym_AMP_GT] = ACTIONS(889),
    [anon_sym_AMP_GT_GT] = ACTIONS(889),
    [anon_sym_LT_AMP] = ACTIONS(889),
    [anon_sym_GT_AMP] = ACTIONS(889),
    [anon_sym_LT_LT] = ACTIONS(889),
    [anon_sym_LT_LT_DASH] = ACTIONS(889),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(889),
    [anon_sym_LF] = ACTIONS(889),
    [anon_sym_AMP] = ACTIONS(889),
  },
  [357] = {
    [sym_file_descriptor] = ACTIONS(921),
    [anon_sym_SEMI_SEMI] = ACTIONS(891),
    [anon_sym_PIPE] = ACTIONS(891),
    [anon_sym_PIPE_AMP] = ACTIONS(891),
    [anon_sym_AMP_AMP] = ACTIONS(891),
    [anon_sym_PIPE_PIPE] = ACTIONS(891),
    [anon_sym_LT] = ACTIONS(891),
    [anon_sym_GT] = ACTIONS(891),
    [anon_sym_GT_GT] = ACTIONS(891),
    [anon_sym_AMP_GT] = ACTIONS(891),
    [anon_sym_AMP_GT_GT] = ACTIONS(891),
    [anon_sym_LT_AMP] = ACTIONS(891),
    [anon_sym_GT_AMP] = ACTIONS(891),
    [anon_sym_LT_LT] = ACTIONS(891),
    [anon_sym_LT_LT_DASH] = ACTIONS(891),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(891),
    [anon_sym_LF] = ACTIONS(891),
    [anon_sym_AMP] = ACTIONS(891),
  },
  [358] = {
    [anon_sym_RBRACE] = ACTIONS(977),
    [sym_comment] = ACTIONS(71),
  },
  [359] = {
    [anon_sym_RBRACE] = ACTIONS(979),
    [sym_comment] = ACTIONS(71),
  },
  [360] = {
    [sym_file_descriptor] = ACTIONS(917),
    [anon_sym_SEMI_SEMI] = ACTIONS(889),
    [anon_sym_COLON] = ACTIONS(889),
    [anon_sym_PIPE] = ACTIONS(889),
    [anon_sym_PIPE_AMP] = ACTIONS(889),
    [anon_sym_AMP_AMP] = ACTIONS(889),
    [anon_sym_PIPE_PIPE] = ACTIONS(889),
    [anon_sym_DQUOTE] = ACTIONS(889),
    [sym_single_quoted_argument] = ACTIONS(889),
    [anon_sym_LT] = ACTIONS(889),
    [anon_sym_GT] = ACTIONS(889),
    [anon_sym_GT_GT] = ACTIONS(889),
    [anon_sym_AMP_GT] = ACTIONS(889),
    [anon_sym_AMP_GT_GT] = ACTIONS(889),
    [anon_sym_LT_AMP] = ACTIONS(889),
    [anon_sym_GT_AMP] = ACTIONS(889),
    [sym_leading_word] = ACTIONS(889),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(889),
    [anon_sym_LF] = ACTIONS(889),
    [anon_sym_AMP] = ACTIONS(889),
  },
  [361] = {
    [sym_file_descriptor] = ACTIONS(921),
    [anon_sym_SEMI_SEMI] = ACTIONS(891),
    [anon_sym_COLON] = ACTIONS(891),
    [anon_sym_PIPE] = ACTIONS(891),
    [anon_sym_PIPE_AMP] = ACTIONS(891),
    [anon_sym_AMP_AMP] = ACTIONS(891),
    [anon_sym_PIPE_PIPE] = ACTIONS(891),
    [anon_sym_DQUOTE] = ACTIONS(891),
    [sym_single_quoted_argument] = ACTIONS(891),
    [anon_sym_LT] = ACTIONS(891),
    [anon_sym_GT] = ACTIONS(891),
    [anon_sym_GT_GT] = ACTIONS(891),
    [anon_sym_AMP_GT] = ACTIONS(891),
    [anon_sym_AMP_GT_GT] = ACTIONS(891),
    [anon_sym_LT_AMP] = ACTIONS(891),
    [anon_sym_GT_AMP] = ACTIONS(891),
    [sym_leading_word] = ACTIONS(891),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(891),
    [anon_sym_LF] = ACTIONS(891),
    [anon_sym_AMP] = ACTIONS(891),
  },
  [362] = {
    [anon_sym_esac] = ACTIONS(981),
    [anon_sym_DQUOTE] = ACTIONS(983),
    [sym_single_quoted_argument] = ACTIONS(981),
    [anon_sym_DOLLAR] = ACTIONS(981),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(983),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(983),
    [sym_word] = ACTIONS(985),
    [sym_comment] = ACTIONS(71),
  },
  [363] = {
    [anon_sym_esac] = ACTIONS(987),
    [anon_sym_DQUOTE] = ACTIONS(989),
    [sym_single_quoted_argument] = ACTIONS(987),
    [anon_sym_DOLLAR] = ACTIONS(987),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(989),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(989),
    [sym_word] = ACTIONS(991),
    [sym_comment] = ACTIONS(71),
  },
  [364] = {
    [anon_sym_RBRACE] = ACTIONS(993),
    [sym_comment] = ACTIONS(71),
  },
  [365] = {
    [anon_sym_RBRACE] = ACTIONS(995),
    [sym_comment] = ACTIONS(71),
  },
  [366] = {
    [sym__heredoc_middle] = ACTIONS(917),
    [sym__heredoc_end] = ACTIONS(917),
    [anon_sym_DOLLAR] = ACTIONS(919),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(917),
    [sym_comment] = ACTIONS(71),
  },
  [367] = {
    [sym__heredoc_middle] = ACTIONS(921),
    [sym__heredoc_end] = ACTIONS(921),
    [anon_sym_DOLLAR] = ACTIONS(923),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(921),
    [sym_comment] = ACTIONS(71),
  },
  [368] = {
    [sym_file_descriptor] = ACTIONS(917),
    [anon_sym_RPAREN] = ACTIONS(917),
    [anon_sym_DQUOTE] = ACTIONS(917),
    [sym_single_quoted_argument] = ACTIONS(919),
    [anon_sym_DOLLAR] = ACTIONS(919),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(917),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(917),
    [anon_sym_LT] = ACTIONS(919),
    [anon_sym_GT] = ACTIONS(919),
    [anon_sym_GT_GT] = ACTIONS(917),
    [anon_sym_AMP_GT] = ACTIONS(919),
    [anon_sym_AMP_GT_GT] = ACTIONS(917),
    [anon_sym_LT_AMP] = ACTIONS(917),
    [anon_sym_GT_AMP] = ACTIONS(917),
    [anon_sym_LT_LT] = ACTIONS(919),
    [anon_sym_LT_LT_DASH] = ACTIONS(917),
    [sym_word] = ACTIONS(889),
    [sym_comment] = ACTIONS(71),
  },
  [369] = {
    [sym_file_descriptor] = ACTIONS(921),
    [anon_sym_RPAREN] = ACTIONS(921),
    [anon_sym_DQUOTE] = ACTIONS(921),
    [sym_single_quoted_argument] = ACTIONS(923),
    [anon_sym_DOLLAR] = ACTIONS(923),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(921),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(921),
    [anon_sym_LT] = ACTIONS(923),
    [anon_sym_GT] = ACTIONS(923),
    [anon_sym_GT_GT] = ACTIONS(921),
    [anon_sym_AMP_GT] = ACTIONS(923),
    [anon_sym_AMP_GT_GT] = ACTIONS(921),
    [anon_sym_LT_AMP] = ACTIONS(921),
    [anon_sym_GT_AMP] = ACTIONS(921),
    [anon_sym_LT_LT] = ACTIONS(923),
    [anon_sym_LT_LT_DASH] = ACTIONS(921),
    [sym_word] = ACTIONS(891),
    [sym_comment] = ACTIONS(71),
  },
  [370] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(997),
    [anon_sym_PIPE] = ACTIONS(997),
    [anon_sym_PIPE_AMP] = ACTIONS(997),
    [anon_sym_AMP_AMP] = ACTIONS(997),
    [anon_sym_PIPE_PIPE] = ACTIONS(997),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(997),
    [anon_sym_LF] = ACTIONS(997),
    [anon_sym_AMP] = ACTIONS(997),
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
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_fi] = ACTIONS(1000),
    [anon_sym_elif] = ACTIONS(1003),
    [anon_sym_else] = ACTIONS(1006),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_function] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_single_quoted_argument] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_AMP_GT] = ACTIONS(99),
    [anon_sym_AMP_GT_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_leading_word] = ACTIONS(101),
    [sym_comment] = ACTIONS(71),
  },
  [372] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1009),
    [anon_sym_PIPE] = ACTIONS(1009),
    [anon_sym_PIPE_AMP] = ACTIONS(1009),
    [anon_sym_AMP_AMP] = ACTIONS(1009),
    [anon_sym_PIPE_PIPE] = ACTIONS(1009),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1009),
    [anon_sym_LF] = ACTIONS(1009),
    [anon_sym_AMP] = ACTIONS(1009),
  },
  [373] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1014),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1014),
    [anon_sym_LF] = ACTIONS(1014),
    [anon_sym_AMP] = ACTIONS(1014),
  },
  [374] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1016),
    [anon_sym_PIPE] = ACTIONS(1016),
    [anon_sym_PIPE_AMP] = ACTIONS(1016),
    [anon_sym_AMP_AMP] = ACTIONS(1016),
    [anon_sym_PIPE_PIPE] = ACTIONS(1016),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1016),
    [anon_sym_LF] = ACTIONS(1016),
    [anon_sym_AMP] = ACTIONS(1016),
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
    [sym_file_descriptor] = ACTIONS(1023),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_in] = ACTIONS(663),
    [anon_sym_RPAREN] = ACTIONS(663),
    [anon_sym_SEMI_SEMI] = ACTIONS(1026),
    [anon_sym_function] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(1031),
    [anon_sym_LBRACE] = ACTIONS(1033),
    [anon_sym_RBRACE] = ACTIONS(663),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(663),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(91),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(663),
    [anon_sym_COLON] = ACTIONS(1035),
    [anon_sym_PIPE] = ACTIONS(1038),
    [anon_sym_PIPE_AMP] = ACTIONS(1038),
    [anon_sym_AMP_AMP] = ACTIONS(1038),
    [anon_sym_PIPE_PIPE] = ACTIONS(1038),
    [anon_sym_DQUOTE] = ACTIONS(1042),
    [sym__quoted_chars] = ACTIONS(663),
    [sym_single_quoted_argument] = ACTIONS(1035),
    [anon_sym_DOLLAR] = ACTIONS(663),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(663),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(663),
    [anon_sym_LT] = ACTIONS(1045),
    [anon_sym_GT] = ACTIONS(1045),
    [anon_sym_GT_GT] = ACTIONS(1045),
    [anon_sym_AMP_GT] = ACTIONS(1045),
    [anon_sym_AMP_GT_GT] = ACTIONS(1045),
    [anon_sym_LT_AMP] = ACTIONS(1045),
    [anon_sym_GT_AMP] = ACTIONS(1045),
    [anon_sym_LT_LT] = ACTIONS(663),
    [anon_sym_LT_LT_DASH] = ACTIONS(663),
    [sym_leading_word] = ACTIONS(1048),
    [sym_word] = ACTIONS(663),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1038),
    [anon_sym_LF] = ACTIONS(1038),
    [anon_sym_AMP] = ACTIONS(1038),
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
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_RPAREN] = ACTIONS(1051),
    [anon_sym_function] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_single_quoted_argument] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_AMP_GT] = ACTIONS(99),
    [anon_sym_AMP_GT_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_leading_word] = ACTIONS(101),
    [sym_comment] = ACTIONS(71),
  },
  [377] = {
    [sym__heredoc_middle] = ACTIONS(1053),
    [sym__heredoc_end] = ACTIONS(1053),
    [sym_file_descriptor] = ACTIONS(1053),
    [anon_sym_in] = ACTIONS(1057),
    [anon_sym_RPAREN] = ACTIONS(1057),
    [anon_sym_SEMI_SEMI] = ACTIONS(1061),
    [anon_sym_RBRACE] = ACTIONS(1057),
    [anon_sym_RBRACK] = ACTIONS(1057),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1057),
    [anon_sym_COLON] = ACTIONS(1057),
    [anon_sym_PIPE] = ACTIONS(1061),
    [anon_sym_PIPE_AMP] = ACTIONS(1061),
    [anon_sym_AMP_AMP] = ACTIONS(1061),
    [anon_sym_PIPE_PIPE] = ACTIONS(1061),
    [anon_sym_DQUOTE] = ACTIONS(1057),
    [sym__quoted_chars] = ACTIONS(1057),
    [sym_single_quoted_argument] = ACTIONS(1057),
    [anon_sym_DOLLAR] = ACTIONS(1057),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1057),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1057),
    [anon_sym_LT] = ACTIONS(1057),
    [anon_sym_GT] = ACTIONS(1057),
    [anon_sym_GT_GT] = ACTIONS(1057),
    [anon_sym_AMP_GT] = ACTIONS(1057),
    [anon_sym_AMP_GT_GT] = ACTIONS(1057),
    [anon_sym_LT_AMP] = ACTIONS(1057),
    [anon_sym_GT_AMP] = ACTIONS(1057),
    [anon_sym_LT_LT] = ACTIONS(1057),
    [anon_sym_LT_LT_DASH] = ACTIONS(1057),
    [sym_leading_word] = ACTIONS(1057),
    [sym_word] = ACTIONS(1057),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1061),
    [anon_sym_LF] = ACTIONS(1061),
    [anon_sym_AMP] = ACTIONS(1061),
  },
  [378] = {
    [sym_quoted_argument] = STATE(419),
    [sym_expansion] = STATE(419),
    [sym_operator_expansion] = STATE(419),
    [sym_command_substitution] = STATE(419),
    [sym_file_redirect] = STATE(422),
    [sym_heredoc_redirect] = STATE(422),
    [aux_sym_command_repeat2] = STATE(423),
    [sym_file_descriptor] = ACTIONS(1067),
    [anon_sym_RPAREN] = ACTIONS(1069),
    [anon_sym_SEMI_SEMI] = ACTIONS(1069),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(1072),
    [anon_sym_PIPE] = ACTIONS(1069),
    [anon_sym_PIPE_AMP] = ACTIONS(1069),
    [anon_sym_AMP_AMP] = ACTIONS(1069),
    [anon_sym_PIPE_PIPE] = ACTIONS(1069),
    [anon_sym_DQUOTE] = ACTIONS(1074),
    [sym_single_quoted_argument] = ACTIONS(1076),
    [anon_sym_DOLLAR] = ACTIONS(1078),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1080),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1082),
    [anon_sym_LT] = ACTIONS(1084),
    [anon_sym_GT] = ACTIONS(1084),
    [anon_sym_GT_GT] = ACTIONS(1084),
    [anon_sym_AMP_GT] = ACTIONS(1084),
    [anon_sym_AMP_GT_GT] = ACTIONS(1084),
    [anon_sym_LT_AMP] = ACTIONS(1084),
    [anon_sym_GT_AMP] = ACTIONS(1084),
    [anon_sym_LT_LT] = ACTIONS(1086),
    [anon_sym_LT_LT_DASH] = ACTIONS(1086),
    [sym_word] = ACTIONS(1088),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1069),
    [anon_sym_LF] = ACTIONS(1069),
    [anon_sym_AMP] = ACTIONS(1069),
  },
  [379] = {
    [sym_quoted_argument] = STATE(425),
    [sym_expansion] = STATE(425),
    [sym_operator_expansion] = STATE(425),
    [sym_command_substitution] = STATE(425),
    [anon_sym_DQUOTE] = ACTIONS(1090),
    [sym_single_quoted_argument] = ACTIONS(1092),
    [anon_sym_DOLLAR] = ACTIONS(1094),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1096),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1098),
    [sym_word] = ACTIONS(1100),
    [sym_comment] = ACTIONS(71),
  },
  [380] = {
    [sym_expansion] = STATE(50),
    [sym_operator_expansion] = STATE(50),
    [sym_command_substitution] = STATE(50),
    [aux_sym_quoted_argument_repeat1] = STATE(410),
    [sym_file_descriptor] = ACTIONS(1102),
    [anon_sym_in] = ACTIONS(1105),
    [anon_sym_RPAREN] = ACTIONS(1105),
    [anon_sym_SEMI_SEMI] = ACTIONS(1105),
    [anon_sym_RBRACE] = ACTIONS(1105),
    [anon_sym_RBRACK] = ACTIONS(1105),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1105),
    [anon_sym_COLON] = ACTIONS(1105),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(1105),
    [anon_sym_PIPE] = ACTIONS(1105),
    [anon_sym_PIPE_AMP] = ACTIONS(1105),
    [anon_sym_AMP_AMP] = ACTIONS(1105),
    [anon_sym_PIPE_PIPE] = ACTIONS(1105),
    [anon_sym_DQUOTE] = ACTIONS(1108),
    [sym__quoted_chars] = ACTIONS(1112),
    [sym_single_quoted_argument] = ACTIONS(1105),
    [anon_sym_DOLLAR] = ACTIONS(1114),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1118),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1122),
    [anon_sym_LT] = ACTIONS(1105),
    [anon_sym_GT] = ACTIONS(1105),
    [anon_sym_GT_GT] = ACTIONS(1105),
    [anon_sym_AMP_GT] = ACTIONS(1105),
    [anon_sym_AMP_GT_GT] = ACTIONS(1105),
    [anon_sym_LT_AMP] = ACTIONS(1105),
    [anon_sym_GT_AMP] = ACTIONS(1105),
    [anon_sym_LT_LT] = ACTIONS(1105),
    [anon_sym_LT_LT_DASH] = ACTIONS(1105),
    [sym_leading_word] = ACTIONS(1105),
    [sym_word] = ACTIONS(1105),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1105),
    [anon_sym_LF] = ACTIONS(1105),
    [anon_sym_AMP] = ACTIONS(1105),
  },
  [381] = {
    [sym__heredoc_middle] = ACTIONS(459),
    [sym__heredoc_end] = ACTIONS(459),
    [sym_file_descriptor] = ACTIONS(459),
    [anon_sym_in] = ACTIONS(417),
    [anon_sym_RPAREN] = ACTIONS(417),
    [anon_sym_SEMI_SEMI] = ACTIONS(417),
    [anon_sym_RBRACE] = ACTIONS(417),
    [anon_sym_RBRACK] = ACTIONS(417),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(417),
    [anon_sym_COLON] = ACTIONS(417),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_PIPE_AMP] = ACTIONS(417),
    [anon_sym_AMP_AMP] = ACTIONS(417),
    [anon_sym_PIPE_PIPE] = ACTIONS(417),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [sym__quoted_chars] = ACTIONS(417),
    [sym_single_quoted_argument] = ACTIONS(417),
    [anon_sym_DOLLAR] = ACTIONS(1126),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(417),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(417),
    [anon_sym_LT] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(417),
    [anon_sym_GT_GT] = ACTIONS(417),
    [anon_sym_AMP_GT] = ACTIONS(417),
    [anon_sym_AMP_GT_GT] = ACTIONS(417),
    [anon_sym_LT_AMP] = ACTIONS(417),
    [anon_sym_GT_AMP] = ACTIONS(417),
    [anon_sym_LT_LT] = ACTIONS(417),
    [anon_sym_LT_LT_DASH] = ACTIONS(417),
    [sym_leading_word] = ACTIONS(417),
    [sym_word] = ACTIONS(1129),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(417),
    [anon_sym_LF] = ACTIONS(417),
    [anon_sym_AMP] = ACTIONS(417),
  },
  [382] = {
    [sym_quoted_argument] = STATE(434),
    [sym_expansion] = STATE(434),
    [sym_operator_expansion] = STATE(434),
    [sym_command_substitution] = STATE(434),
    [anon_sym_DQUOTE] = ACTIONS(1132),
    [sym_single_quoted_argument] = ACTIONS(1134),
    [anon_sym_DOLLAR] = ACTIONS(1136),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1138),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1140),
    [sym_word] = ACTIONS(1142),
    [sym_comment] = ACTIONS(71),
  },
  [383] = {
    [sym_heredoc] = STATE(403),
    [sym__simple_heredoc] = ACTIONS(1144),
    [sym__heredoc_beginning] = ACTIONS(1146),
    [sym_comment] = ACTIONS(71),
  },
  [384] = {
    [sym_case_item] = STATE(238),
    [sym_quoted_argument] = STATE(236),
    [sym_expansion] = STATE(236),
    [sym_operator_expansion] = STATE(236),
    [sym_command_substitution] = STATE(236),
    [aux_sym_case_statement_repeat1] = STATE(406),
    [sym_file_descriptor] = ACTIONS(363),
    [ts_builtin_sym_end] = ACTIONS(363),
    [anon_sym_while] = ACTIONS(365),
    [anon_sym_do] = ACTIONS(365),
    [anon_sym_done] = ACTIONS(365),
    [anon_sym_if] = ACTIONS(365),
    [anon_sym_then] = ACTIONS(365),
    [anon_sym_fi] = ACTIONS(365),
    [anon_sym_elif] = ACTIONS(365),
    [anon_sym_else] = ACTIONS(365),
    [anon_sym_case] = ACTIONS(365),
    [anon_sym_in] = ACTIONS(1148),
    [anon_sym_esac] = ACTIONS(1150),
    [anon_sym_RPAREN] = ACTIONS(363),
    [anon_sym_SEMI_SEMI] = ACTIONS(363),
    [anon_sym_function] = ACTIONS(365),
    [anon_sym_LPAREN] = ACTIONS(363),
    [anon_sym_RBRACE] = ACTIONS(363),
    [anon_sym_LBRACK] = ACTIONS(365),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(365),
    [anon_sym_COLON] = ACTIONS(365),
    [anon_sym_DQUOTE] = ACTIONS(1152),
    [sym_single_quoted_argument] = ACTIONS(1155),
    [anon_sym_DOLLAR] = ACTIONS(127),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(129),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(131),
    [anon_sym_LT] = ACTIONS(365),
    [anon_sym_GT] = ACTIONS(365),
    [anon_sym_GT_GT] = ACTIONS(365),
    [anon_sym_AMP_GT] = ACTIONS(365),
    [anon_sym_AMP_GT_GT] = ACTIONS(365),
    [anon_sym_LT_AMP] = ACTIONS(365),
    [anon_sym_GT_AMP] = ACTIONS(365),
    [sym_leading_word] = ACTIONS(367),
    [sym_word] = ACTIONS(613),
    [sym_comment] = ACTIONS(71),
  },
  [385] = {
    [sym_file_descriptor] = ACTIONS(515),
    [anon_sym_RPAREN] = ACTIONS(517),
    [anon_sym_SEMI_SEMI] = ACTIONS(517),
    [anon_sym_PIPE] = ACTIONS(517),
    [anon_sym_PIPE_AMP] = ACTIONS(517),
    [anon_sym_AMP_AMP] = ACTIONS(517),
    [anon_sym_PIPE_PIPE] = ACTIONS(517),
    [anon_sym_LT] = ACTIONS(517),
    [anon_sym_GT] = ACTIONS(517),
    [anon_sym_GT_GT] = ACTIONS(517),
    [anon_sym_AMP_GT] = ACTIONS(517),
    [anon_sym_AMP_GT_GT] = ACTIONS(517),
    [anon_sym_LT_AMP] = ACTIONS(517),
    [anon_sym_GT_AMP] = ACTIONS(517),
    [anon_sym_LT_LT] = ACTIONS(517),
    [anon_sym_LT_LT_DASH] = ACTIONS(517),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(517),
    [anon_sym_LF] = ACTIONS(517),
    [anon_sym_AMP] = ACTIONS(517),
  },
  [386] = {
    [sym_expansion] = STATE(202),
    [sym_operator_expansion] = STATE(202),
    [aux_sym_heredoc_repeat1] = STATE(411),
    [sym__heredoc_middle] = ACTIONS(519),
    [sym__heredoc_end] = ACTIONS(1158),
    [anon_sym_DOLLAR] = ACTIONS(523),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(525),
    [sym_comment] = ACTIONS(71),
  },
  [387] = {
    [sym__heredoc_middle] = ACTIONS(1160),
    [sym__heredoc_end] = ACTIONS(1160),
    [anon_sym_DOLLAR] = ACTIONS(1163),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1160),
    [sym_comment] = ACTIONS(71),
  },
  [388] = {
    [sym_file_descriptor] = ACTIONS(1166),
    [anon_sym_RPAREN] = ACTIONS(1169),
    [anon_sym_SEMI_SEMI] = ACTIONS(1169),
    [anon_sym_PIPE] = ACTIONS(1169),
    [anon_sym_PIPE_AMP] = ACTIONS(1169),
    [anon_sym_AMP_AMP] = ACTIONS(1169),
    [anon_sym_PIPE_PIPE] = ACTIONS(1169),
    [anon_sym_LT] = ACTIONS(1169),
    [anon_sym_GT] = ACTIONS(1169),
    [anon_sym_GT_GT] = ACTIONS(1169),
    [anon_sym_AMP_GT] = ACTIONS(1169),
    [anon_sym_AMP_GT_GT] = ACTIONS(1169),
    [anon_sym_LT_AMP] = ACTIONS(1169),
    [anon_sym_GT_AMP] = ACTIONS(1169),
    [anon_sym_LT_LT] = ACTIONS(1169),
    [anon_sym_LT_LT_DASH] = ACTIONS(1169),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1169),
    [anon_sym_LF] = ACTIONS(1169),
    [anon_sym_AMP] = ACTIONS(1169),
  },
  [389] = {
    [anon_sym_LT] = ACTIONS(1172),
    [anon_sym_GT] = ACTIONS(1172),
    [anon_sym_GT_GT] = ACTIONS(1174),
    [anon_sym_AMP_GT] = ACTIONS(1172),
    [anon_sym_AMP_GT_GT] = ACTIONS(1174),
    [anon_sym_LT_AMP] = ACTIONS(1174),
    [anon_sym_GT_AMP] = ACTIONS(1174),
    [sym_comment] = ACTIONS(71),
  },
  [390] = {
    [sym_do_group] = STATE(75),
    [sym_file_descriptor] = ACTIONS(1176),
    [ts_builtin_sym_end] = ACTIONS(1176),
    [anon_sym_while] = ACTIONS(1179),
    [anon_sym_do] = ACTIONS(1182),
    [anon_sym_done] = ACTIONS(1179),
    [anon_sym_if] = ACTIONS(1179),
    [anon_sym_then] = ACTIONS(1184),
    [anon_sym_fi] = ACTIONS(1179),
    [anon_sym_elif] = ACTIONS(1179),
    [anon_sym_else] = ACTIONS(1179),
    [anon_sym_case] = ACTIONS(1179),
    [anon_sym_RPAREN] = ACTIONS(1176),
    [anon_sym_SEMI_SEMI] = ACTIONS(1176),
    [anon_sym_function] = ACTIONS(1179),
    [anon_sym_LPAREN] = ACTIONS(1176),
    [anon_sym_RBRACE] = ACTIONS(1176),
    [anon_sym_LBRACK] = ACTIONS(1179),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1179),
    [anon_sym_COLON] = ACTIONS(1176),
    [anon_sym_DQUOTE] = ACTIONS(1176),
    [sym_single_quoted_argument] = ACTIONS(1179),
    [anon_sym_LT] = ACTIONS(1179),
    [anon_sym_GT] = ACTIONS(1179),
    [anon_sym_GT_GT] = ACTIONS(1179),
    [anon_sym_AMP_GT] = ACTIONS(1179),
    [anon_sym_AMP_GT_GT] = ACTIONS(1179),
    [anon_sym_LT_AMP] = ACTIONS(1179),
    [anon_sym_GT_AMP] = ACTIONS(1179),
    [sym_leading_word] = ACTIONS(1186),
    [sym_comment] = ACTIONS(71),
  },
  [391] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1189),
    [anon_sym_PIPE] = ACTIONS(1193),
    [anon_sym_PIPE_AMP] = ACTIONS(1193),
    [anon_sym_AMP_AMP] = ACTIONS(1197),
    [anon_sym_PIPE_PIPE] = ACTIONS(1197),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1189),
    [anon_sym_LF] = ACTIONS(1189),
    [anon_sym_AMP] = ACTIONS(1189),
  },
  [392] = {
    [anon_sym_fi] = ACTIONS(1201),
    [anon_sym_elif] = ACTIONS(1201),
    [anon_sym_else] = ACTIONS(1201),
    [sym_comment] = ACTIONS(71),
  },
  [393] = {
    [anon_sym_fi] = ACTIONS(1204),
    [sym_comment] = ACTIONS(71),
  },
  [394] = {
    [anon_sym_esac] = ACTIONS(1206),
    [anon_sym_DQUOTE] = ACTIONS(1209),
    [sym_single_quoted_argument] = ACTIONS(1206),
    [anon_sym_DOLLAR] = ACTIONS(1206),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1209),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1209),
    [sym_word] = ACTIONS(1212),
    [sym_comment] = ACTIONS(71),
  },
  [395] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1215),
    [anon_sym_PIPE] = ACTIONS(1215),
    [anon_sym_PIPE_AMP] = ACTIONS(1215),
    [anon_sym_AMP_AMP] = ACTIONS(1215),
    [anon_sym_PIPE_PIPE] = ACTIONS(1215),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1215),
    [anon_sym_LF] = ACTIONS(1215),
    [anon_sym_AMP] = ACTIONS(1215),
  },
  [396] = {
    [anon_sym_RPAREN] = ACTIONS(1218),
    [anon_sym_SEMI_SEMI] = ACTIONS(1220),
    [anon_sym_PIPE] = ACTIONS(1224),
    [anon_sym_PIPE_AMP] = ACTIONS(1224),
    [anon_sym_AMP_AMP] = ACTIONS(1228),
    [anon_sym_PIPE_PIPE] = ACTIONS(1228),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1220),
    [anon_sym_LF] = ACTIONS(1220),
    [anon_sym_AMP] = ACTIONS(1220),
  },
  [397] = {
    [sym_file_descriptor] = ACTIONS(1232),
    [anon_sym_SEMI_SEMI] = ACTIONS(1189),
    [anon_sym_COLON] = ACTIONS(1235),
    [anon_sym_PIPE] = ACTIONS(1193),
    [anon_sym_PIPE_AMP] = ACTIONS(1193),
    [anon_sym_AMP_AMP] = ACTIONS(1197),
    [anon_sym_PIPE_PIPE] = ACTIONS(1197),
    [anon_sym_DQUOTE] = ACTIONS(1235),
    [sym_single_quoted_argument] = ACTIONS(1235),
    [anon_sym_LT] = ACTIONS(1235),
    [anon_sym_GT] = ACTIONS(1235),
    [anon_sym_GT_GT] = ACTIONS(1235),
    [anon_sym_AMP_GT] = ACTIONS(1235),
    [anon_sym_AMP_GT_GT] = ACTIONS(1235),
    [anon_sym_LT_AMP] = ACTIONS(1235),
    [anon_sym_GT_AMP] = ACTIONS(1235),
    [sym_leading_word] = ACTIONS(1235),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1189),
    [anon_sym_LF] = ACTIONS(1189),
    [anon_sym_AMP] = ACTIONS(1189),
  },
  [398] = {
    [sym_file_redirect] = STATE(422),
    [sym_heredoc_redirect] = STATE(422),
    [aux_sym_command_repeat2] = STATE(423),
    [sym_file_descriptor] = ACTIONS(1238),
    [anon_sym_in] = ACTIONS(217),
    [anon_sym_RPAREN] = ACTIONS(1245),
    [anon_sym_SEMI_SEMI] = ACTIONS(1253),
    [anon_sym_RBRACE] = ACTIONS(1262),
    [anon_sym_RBRACK] = ACTIONS(1264),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1264),
    [anon_sym_COLON] = ACTIONS(1267),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(1072),
    [anon_sym_PIPE] = ACTIONS(1271),
    [anon_sym_PIPE_AMP] = ACTIONS(1271),
    [anon_sym_AMP_AMP] = ACTIONS(1271),
    [anon_sym_PIPE_PIPE] = ACTIONS(1271),
    [anon_sym_DQUOTE] = ACTIONS(1279),
    [sym_single_quoted_argument] = ACTIONS(1279),
    [anon_sym_DOLLAR] = ACTIONS(1264),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1264),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1264),
    [anon_sym_LT] = ACTIONS(1285),
    [anon_sym_GT] = ACTIONS(1285),
    [anon_sym_GT_GT] = ACTIONS(1285),
    [anon_sym_AMP_GT] = ACTIONS(1285),
    [anon_sym_AMP_GT_GT] = ACTIONS(1285),
    [anon_sym_LT_AMP] = ACTIONS(1285),
    [anon_sym_GT_AMP] = ACTIONS(1285),
    [anon_sym_LT_LT] = ACTIONS(1292),
    [anon_sym_LT_LT_DASH] = ACTIONS(1292),
    [sym_leading_word] = ACTIONS(1267),
    [sym_word] = ACTIONS(1264),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1253),
    [anon_sym_LF] = ACTIONS(1253),
    [anon_sym_AMP] = ACTIONS(1253),
  },
  [399] = {
    [sym__heredoc_middle] = ACTIONS(1160),
    [sym__heredoc_end] = ACTIONS(1160),
    [sym_file_descriptor] = ACTIONS(1298),
    [anon_sym_in] = ACTIONS(217),
    [anon_sym_RPAREN] = ACTIONS(1304),
    [anon_sym_SEMI_SEMI] = ACTIONS(1310),
    [anon_sym_RBRACE] = ACTIONS(1262),
    [anon_sym_RBRACK] = ACTIONS(1264),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1264),
    [anon_sym_COLON] = ACTIONS(1267),
    [anon_sym_PIPE] = ACTIONS(1279),
    [anon_sym_PIPE_AMP] = ACTIONS(1279),
    [anon_sym_AMP_AMP] = ACTIONS(1279),
    [anon_sym_PIPE_PIPE] = ACTIONS(1279),
    [anon_sym_DQUOTE] = ACTIONS(1317),
    [sym__quoted_chars] = ACTIONS(1325),
    [sym_single_quoted_argument] = ACTIONS(1279),
    [anon_sym_DOLLAR] = ACTIONS(1328),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1328),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1335),
    [anon_sym_LT] = ACTIONS(1279),
    [anon_sym_GT] = ACTIONS(1279),
    [anon_sym_GT_GT] = ACTIONS(1279),
    [anon_sym_AMP_GT] = ACTIONS(1279),
    [anon_sym_AMP_GT_GT] = ACTIONS(1279),
    [anon_sym_LT_AMP] = ACTIONS(1279),
    [anon_sym_GT_AMP] = ACTIONS(1279),
    [anon_sym_LT_LT] = ACTIONS(1340),
    [anon_sym_LT_LT_DASH] = ACTIONS(1340),
    [sym_leading_word] = ACTIONS(1267),
    [sym_word] = ACTIONS(1264),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1310),
    [anon_sym_LF] = ACTIONS(1310),
    [anon_sym_AMP] = ACTIONS(1310),
  },
  [400] = {
    [sym_file_descriptor] = ACTIONS(1298),
    [anon_sym_in] = ACTIONS(217),
    [anon_sym_RPAREN] = ACTIONS(1304),
    [anon_sym_SEMI_SEMI] = ACTIONS(1310),
    [anon_sym_RBRACE] = ACTIONS(1262),
    [anon_sym_RBRACK] = ACTIONS(1264),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1264),
    [anon_sym_COLON] = ACTIONS(1267),
    [anon_sym_PIPE] = ACTIONS(1279),
    [anon_sym_PIPE_AMP] = ACTIONS(1279),
    [anon_sym_AMP_AMP] = ACTIONS(1279),
    [anon_sym_PIPE_PIPE] = ACTIONS(1279),
    [anon_sym_DQUOTE] = ACTIONS(1317),
    [sym__quoted_chars] = ACTIONS(1325),
    [sym_single_quoted_argument] = ACTIONS(1279),
    [anon_sym_DOLLAR] = ACTIONS(1335),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1335),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1335),
    [anon_sym_LT] = ACTIONS(1279),
    [anon_sym_GT] = ACTIONS(1279),
    [anon_sym_GT_GT] = ACTIONS(1279),
    [anon_sym_AMP_GT] = ACTIONS(1279),
    [anon_sym_AMP_GT_GT] = ACTIONS(1279),
    [anon_sym_LT_AMP] = ACTIONS(1279),
    [anon_sym_GT_AMP] = ACTIONS(1279),
    [anon_sym_LT_LT] = ACTIONS(1340),
    [anon_sym_LT_LT_DASH] = ACTIONS(1340),
    [sym_leading_word] = ACTIONS(1267),
    [sym_word] = ACTIONS(1264),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1310),
    [anon_sym_LF] = ACTIONS(1310),
    [anon_sym_AMP] = ACTIONS(1310),
  },
  [401] = {
    [sym_file_descriptor] = ACTIONS(1345),
    [anon_sym_RPAREN] = ACTIONS(1350),
    [anon_sym_SEMI_SEMI] = ACTIONS(1350),
    [anon_sym_COLON] = ACTIONS(1235),
    [anon_sym_PIPE] = ACTIONS(1350),
    [anon_sym_PIPE_AMP] = ACTIONS(1350),
    [anon_sym_AMP_AMP] = ACTIONS(1350),
    [anon_sym_PIPE_PIPE] = ACTIONS(1350),
    [anon_sym_DQUOTE] = ACTIONS(1235),
    [sym_single_quoted_argument] = ACTIONS(1235),
    [anon_sym_LT] = ACTIONS(1353),
    [anon_sym_GT] = ACTIONS(1353),
    [anon_sym_GT_GT] = ACTIONS(1353),
    [anon_sym_AMP_GT] = ACTIONS(1353),
    [anon_sym_AMP_GT_GT] = ACTIONS(1353),
    [anon_sym_LT_AMP] = ACTIONS(1353),
    [anon_sym_GT_AMP] = ACTIONS(1353),
    [anon_sym_LT_LT] = ACTIONS(1350),
    [anon_sym_LT_LT_DASH] = ACTIONS(1350),
    [sym_leading_word] = ACTIONS(1235),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1350),
    [anon_sym_LF] = ACTIONS(1350),
    [anon_sym_AMP] = ACTIONS(1350),
  },
  [402] = {
    [sym_file_descriptor] = ACTIONS(1358),
    [anon_sym_RPAREN] = ACTIONS(1350),
    [anon_sym_SEMI_SEMI] = ACTIONS(1350),
    [anon_sym_PIPE] = ACTIONS(1350),
    [anon_sym_PIPE_AMP] = ACTIONS(1350),
    [anon_sym_AMP_AMP] = ACTIONS(1350),
    [anon_sym_PIPE_PIPE] = ACTIONS(1350),
    [anon_sym_LT] = ACTIONS(1350),
    [anon_sym_GT] = ACTIONS(1350),
    [anon_sym_GT_GT] = ACTIONS(1350),
    [anon_sym_AMP_GT] = ACTIONS(1350),
    [anon_sym_AMP_GT_GT] = ACTIONS(1350),
    [anon_sym_LT_AMP] = ACTIONS(1350),
    [anon_sym_GT_AMP] = ACTIONS(1350),
    [anon_sym_LT_LT] = ACTIONS(1350),
    [anon_sym_LT_LT_DASH] = ACTIONS(1350),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1350),
    [anon_sym_LF] = ACTIONS(1350),
    [anon_sym_AMP] = ACTIONS(1350),
  },
  [403] = {
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
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(529),
    [anon_sym_LF] = ACTIONS(529),
    [anon_sym_AMP] = ACTIONS(529),
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
    [sym_file_descriptor] = ACTIONS(75),
    [ts_builtin_sym_end] = ACTIONS(197),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_done] = ACTIONS(593),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_fi] = ACTIONS(1361),
    [anon_sym_elif] = ACTIONS(1365),
    [anon_sym_else] = ACTIONS(1368),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_SEMI_SEMI] = ACTIONS(1371),
    [anon_sym_function] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_RBRACE] = ACTIONS(859),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_single_quoted_argument] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_AMP_GT] = ACTIONS(99),
    [anon_sym_AMP_GT_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_leading_word] = ACTIONS(101),
    [sym_comment] = ACTIONS(71),
  },
  [405] = {
    [sym_elif_clause] = STATE(234),
    [sym_else_clause] = STATE(448),
    [anon_sym_fi] = ACTIONS(1373),
    [anon_sym_elif] = ACTIONS(605),
    [anon_sym_else] = ACTIONS(607),
    [sym_comment] = ACTIONS(71),
  },
  [406] = {
    [sym_case_item] = STATE(301),
    [sym_quoted_argument] = STATE(236),
    [sym_expansion] = STATE(236),
    [sym_operator_expansion] = STATE(236),
    [sym_command_substitution] = STATE(236),
    [anon_sym_esac] = ACTIONS(1375),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [sym_single_quoted_argument] = ACTIONS(611),
    [anon_sym_DOLLAR] = ACTIONS(127),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(129),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(131),
    [sym_word] = ACTIONS(613),
    [sym_comment] = ACTIONS(71),
  },
  [407] = {
    [sym_quoted_argument] = STATE(451),
    [sym_expansion] = STATE(451),
    [sym_operator_expansion] = STATE(451),
    [sym_command_substitution] = STATE(451),
    [sym_file_redirect] = STATE(422),
    [sym_heredoc_redirect] = STATE(422),
    [aux_sym_command_repeat2] = STATE(456),
    [sym_file_descriptor] = ACTIONS(1067),
    [anon_sym_RPAREN] = ACTIONS(1377),
    [anon_sym_SEMI_SEMI] = ACTIONS(1377),
    [anon_sym_RBRACK] = ACTIONS(1382),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1382),
    [anon_sym_PIPE] = ACTIONS(1377),
    [anon_sym_PIPE_AMP] = ACTIONS(1377),
    [anon_sym_AMP_AMP] = ACTIONS(1377),
    [anon_sym_PIPE_PIPE] = ACTIONS(1377),
    [anon_sym_DQUOTE] = ACTIONS(1384),
    [sym_single_quoted_argument] = ACTIONS(1386),
    [anon_sym_DOLLAR] = ACTIONS(1388),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1390),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1392),
    [anon_sym_LT] = ACTIONS(1084),
    [anon_sym_GT] = ACTIONS(1084),
    [anon_sym_GT_GT] = ACTIONS(1084),
    [anon_sym_AMP_GT] = ACTIONS(1084),
    [anon_sym_AMP_GT_GT] = ACTIONS(1084),
    [anon_sym_LT_AMP] = ACTIONS(1084),
    [anon_sym_GT_AMP] = ACTIONS(1084),
    [anon_sym_LT_LT] = ACTIONS(1086),
    [anon_sym_LT_LT_DASH] = ACTIONS(1086),
    [sym_word] = ACTIONS(1394),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1377),
    [anon_sym_LF] = ACTIONS(1377),
    [anon_sym_AMP] = ACTIONS(1377),
  },
  [408] = {
    [sym_environment_variable_assignment] = STATE(71),
    [sym_quoted_argument] = STATE(457),
    [sym_file_redirect] = STATE(71),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(1396),
    [anon_sym_DQUOTE] = ACTIONS(1398),
    [sym_single_quoted_argument] = ACTIONS(1400),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_AMP_GT] = ACTIONS(99),
    [anon_sym_AMP_GT_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_leading_word] = ACTIONS(1402),
    [sym_comment] = ACTIONS(71),
  },
  [409] = {
    [sym_file_redirect] = STATE(460),
    [sym_heredoc_redirect] = STATE(460),
    [sym_file_descriptor] = ACTIONS(1067),
    [anon_sym_RPAREN] = ACTIONS(1404),
    [anon_sym_SEMI_SEMI] = ACTIONS(1404),
    [anon_sym_PIPE] = ACTIONS(1404),
    [anon_sym_PIPE_AMP] = ACTIONS(1404),
    [anon_sym_AMP_AMP] = ACTIONS(1404),
    [anon_sym_PIPE_PIPE] = ACTIONS(1404),
    [anon_sym_LT] = ACTIONS(1084),
    [anon_sym_GT] = ACTIONS(1084),
    [anon_sym_GT_GT] = ACTIONS(1084),
    [anon_sym_AMP_GT] = ACTIONS(1084),
    [anon_sym_AMP_GT_GT] = ACTIONS(1084),
    [anon_sym_LT_AMP] = ACTIONS(1084),
    [anon_sym_GT_AMP] = ACTIONS(1084),
    [anon_sym_LT_LT] = ACTIONS(1086),
    [anon_sym_LT_LT_DASH] = ACTIONS(1086),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1404),
    [anon_sym_LF] = ACTIONS(1404),
    [anon_sym_AMP] = ACTIONS(1404),
  },
  [410] = {
    [sym_expansion] = STATE(127),
    [sym_operator_expansion] = STATE(127),
    [sym_command_substitution] = STATE(127),
    [anon_sym_DQUOTE] = ACTIONS(1415),
    [sym__quoted_chars] = ACTIONS(325),
    [anon_sym_DOLLAR] = ACTIONS(151),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(153),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(155),
    [sym_comment] = ACTIONS(145),
  },
  [411] = {
    [sym_expansion] = STATE(281),
    [sym_operator_expansion] = STATE(281),
    [sym__heredoc_middle] = ACTIONS(723),
    [sym__heredoc_end] = ACTIONS(1417),
    [anon_sym_DOLLAR] = ACTIONS(523),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(525),
    [sym_comment] = ACTIONS(71),
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
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_fi] = ACTIONS(1419),
    [anon_sym_elif] = ACTIONS(1365),
    [anon_sym_else] = ACTIONS(1368),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_function] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_single_quoted_argument] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_AMP_GT] = ACTIONS(99),
    [anon_sym_AMP_GT_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_leading_word] = ACTIONS(101),
    [sym_comment] = ACTIONS(71),
  },
  [413] = {
    [sym_case_item] = STATE(238),
    [sym_quoted_argument] = STATE(236),
    [sym_expansion] = STATE(236),
    [sym_operator_expansion] = STATE(236),
    [sym_command_substitution] = STATE(236),
    [aux_sym_case_statement_repeat1] = STATE(406),
    [anon_sym_esac] = ACTIONS(1150),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [sym_single_quoted_argument] = ACTIONS(611),
    [anon_sym_DOLLAR] = ACTIONS(127),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(129),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(131),
    [sym_word] = ACTIONS(613),
    [sym_comment] = ACTIONS(71),
  },
  [414] = {
    [anon_sym_esac] = ACTIONS(1422),
    [anon_sym_DQUOTE] = ACTIONS(1425),
    [sym_single_quoted_argument] = ACTIONS(1422),
    [anon_sym_DOLLAR] = ACTIONS(1422),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1425),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1425),
    [sym_word] = ACTIONS(1428),
    [sym_comment] = ACTIONS(71),
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
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_while] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_SEMI_SEMI] = ACTIONS(1371),
    [anon_sym_function] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_single_quoted_argument] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_AMP_GT] = ACTIONS(99),
    [anon_sym_AMP_GT_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_leading_word] = ACTIONS(101),
    [sym_comment] = ACTIONS(71),
  },
  [416] = {
    [sym_compound_command] = STATE(395),
    [anon_sym_SEMI_SEMI] = ACTIONS(241),
    [anon_sym_LBRACE] = ACTIONS(1033),
    [anon_sym_PIPE] = ACTIONS(241),
    [anon_sym_PIPE_AMP] = ACTIONS(241),
    [anon_sym_AMP_AMP] = ACTIONS(241),
    [anon_sym_PIPE_PIPE] = ACTIONS(241),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(241),
    [anon_sym_LF] = ACTIONS(241),
    [anon_sym_AMP] = ACTIONS(241),
  },
  [417] = {
    [anon_sym_LT] = ACTIONS(1431),
    [anon_sym_GT] = ACTIONS(1431),
    [anon_sym_GT_GT] = ACTIONS(1433),
    [anon_sym_AMP_GT] = ACTIONS(1431),
    [anon_sym_AMP_GT_GT] = ACTIONS(1433),
    [anon_sym_LT_AMP] = ACTIONS(1433),
    [anon_sym_GT_AMP] = ACTIONS(1433),
    [sym_comment] = ACTIONS(71),
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
    [sym_file_descriptor] = ACTIONS(1067),
    [anon_sym_RPAREN] = ACTIONS(1435),
    [anon_sym_SEMI_SEMI] = ACTIONS(1435),
    [anon_sym_PIPE] = ACTIONS(1435),
    [anon_sym_PIPE_AMP] = ACTIONS(1435),
    [anon_sym_AMP_AMP] = ACTIONS(1435),
    [anon_sym_PIPE_PIPE] = ACTIONS(1435),
    [anon_sym_DQUOTE] = ACTIONS(1438),
    [sym_single_quoted_argument] = ACTIONS(1440),
    [anon_sym_DOLLAR] = ACTIONS(1442),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1444),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1446),
    [anon_sym_LT] = ACTIONS(1084),
    [anon_sym_GT] = ACTIONS(1084),
    [anon_sym_GT_GT] = ACTIONS(1084),
    [anon_sym_AMP_GT] = ACTIONS(1084),
    [anon_sym_AMP_GT_GT] = ACTIONS(1084),
    [anon_sym_LT_AMP] = ACTIONS(1084),
    [anon_sym_GT_AMP] = ACTIONS(1084),
    [anon_sym_LT_LT] = ACTIONS(1086),
    [anon_sym_LT_LT_DASH] = ACTIONS(1086),
    [sym_word] = ACTIONS(1448),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1435),
    [anon_sym_LF] = ACTIONS(1435),
    [anon_sym_AMP] = ACTIONS(1435),
  },
  [419] = {
    [anon_sym_RBRACE] = ACTIONS(1450),
    [sym_comment] = ACTIONS(71),
  },
  [420] = {
    [sym_quoted_argument] = STATE(473),
    [sym_expansion] = STATE(473),
    [sym_operator_expansion] = STATE(473),
    [sym_command_substitution] = STATE(473),
    [anon_sym_DQUOTE] = ACTIONS(1452),
    [sym_single_quoted_argument] = ACTIONS(1454),
    [anon_sym_DOLLAR] = ACTIONS(1456),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1458),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1460),
    [sym_word] = ACTIONS(1462),
    [sym_comment] = ACTIONS(71),
  },
  [421] = {
    [anon_sym_RBRACE] = ACTIONS(1464),
    [sym_comment] = ACTIONS(71),
  },
  [422] = {
    [sym_file_descriptor] = ACTIONS(305),
    [anon_sym_RPAREN] = ACTIONS(307),
    [anon_sym_SEMI_SEMI] = ACTIONS(307),
    [anon_sym_PIPE] = ACTIONS(307),
    [anon_sym_PIPE_AMP] = ACTIONS(307),
    [anon_sym_AMP_AMP] = ACTIONS(307),
    [anon_sym_PIPE_PIPE] = ACTIONS(307),
    [anon_sym_LT] = ACTIONS(307),
    [anon_sym_GT] = ACTIONS(307),
    [anon_sym_GT_GT] = ACTIONS(307),
    [anon_sym_AMP_GT] = ACTIONS(307),
    [anon_sym_AMP_GT_GT] = ACTIONS(307),
    [anon_sym_LT_AMP] = ACTIONS(307),
    [anon_sym_GT_AMP] = ACTIONS(307),
    [anon_sym_LT_LT] = ACTIONS(307),
    [anon_sym_LT_LT_DASH] = ACTIONS(307),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(307),
    [anon_sym_LF] = ACTIONS(307),
    [anon_sym_AMP] = ACTIONS(307),
  },
  [423] = {
    [sym_file_redirect] = STATE(460),
    [sym_heredoc_redirect] = STATE(460),
    [sym_file_descriptor] = ACTIONS(1067),
    [anon_sym_RPAREN] = ACTIONS(1435),
    [anon_sym_SEMI_SEMI] = ACTIONS(1435),
    [anon_sym_PIPE] = ACTIONS(1435),
    [anon_sym_PIPE_AMP] = ACTIONS(1435),
    [anon_sym_AMP_AMP] = ACTIONS(1435),
    [anon_sym_PIPE_PIPE] = ACTIONS(1435),
    [anon_sym_LT] = ACTIONS(1084),
    [anon_sym_GT] = ACTIONS(1084),
    [anon_sym_GT_GT] = ACTIONS(1084),
    [anon_sym_AMP_GT] = ACTIONS(1084),
    [anon_sym_AMP_GT_GT] = ACTIONS(1084),
    [anon_sym_LT_AMP] = ACTIONS(1084),
    [anon_sym_GT_AMP] = ACTIONS(1084),
    [anon_sym_LT_LT] = ACTIONS(1086),
    [anon_sym_LT_LT_DASH] = ACTIONS(1086),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1435),
    [anon_sym_LF] = ACTIONS(1435),
    [anon_sym_AMP] = ACTIONS(1435),
  },
  [424] = {
    [sym_expansion] = STATE(50),
    [sym_operator_expansion] = STATE(50),
    [sym_command_substitution] = STATE(50),
    [aux_sym_quoted_argument_repeat1] = STATE(480),
    [anon_sym_DQUOTE] = ACTIONS(1466),
    [sym__quoted_chars] = ACTIONS(149),
    [anon_sym_DOLLAR] = ACTIONS(151),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(153),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(155),
    [sym_comment] = ACTIONS(145),
  },
  [425] = {
    [sym_file_descriptor] = ACTIONS(567),
    [anon_sym_SEMI_SEMI] = ACTIONS(569),
    [anon_sym_RBRACE] = ACTIONS(1262),
    [anon_sym_COLON] = ACTIONS(569),
    [anon_sym_PIPE] = ACTIONS(569),
    [anon_sym_PIPE_AMP] = ACTIONS(569),
    [anon_sym_AMP_AMP] = ACTIONS(569),
    [anon_sym_PIPE_PIPE] = ACTIONS(569),
    [anon_sym_DQUOTE] = ACTIONS(569),
    [sym_single_quoted_argument] = ACTIONS(569),
    [anon_sym_LT] = ACTIONS(569),
    [anon_sym_GT] = ACTIONS(569),
    [anon_sym_GT_GT] = ACTIONS(569),
    [anon_sym_AMP_GT] = ACTIONS(569),
    [anon_sym_AMP_GT_GT] = ACTIONS(569),
    [anon_sym_LT_AMP] = ACTIONS(569),
    [anon_sym_GT_AMP] = ACTIONS(569),
    [sym_leading_word] = ACTIONS(569),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(569),
    [anon_sym_LF] = ACTIONS(569),
    [anon_sym_AMP] = ACTIONS(569),
  },
  [426] = {
    [anon_sym_DOLLAR] = ACTIONS(1468),
    [sym_word] = ACTIONS(1470),
    [sym_comment] = ACTIONS(71),
  },
  [427] = {
    [sym_leading_word] = ACTIONS(1472),
    [sym_comment] = ACTIONS(71),
  },
  [428] = {
    [sym_command] = STATE(484),
    [sym_environment_variable_assignment] = STATE(18),
    [sym_quoted_argument] = STATE(85),
    [sym_file_redirect] = STATE(18),
    [aux_sym_command_repeat1] = STATE(89),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [sym_single_quoted_argument] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_AMP_GT] = ACTIONS(99),
    [anon_sym_AMP_GT_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_leading_word] = ACTIONS(233),
    [sym_comment] = ACTIONS(71),
  },
  [429] = {
    [sym_file_descriptor] = ACTIONS(577),
    [anon_sym_SEMI_SEMI] = ACTIONS(579),
    [anon_sym_RBRACE] = ACTIONS(1474),
    [anon_sym_COLON] = ACTIONS(579),
    [anon_sym_PIPE] = ACTIONS(579),
    [anon_sym_PIPE_AMP] = ACTIONS(579),
    [anon_sym_AMP_AMP] = ACTIONS(579),
    [anon_sym_PIPE_PIPE] = ACTIONS(579),
    [anon_sym_DQUOTE] = ACTIONS(579),
    [sym_single_quoted_argument] = ACTIONS(579),
    [anon_sym_LT] = ACTIONS(579),
    [anon_sym_GT] = ACTIONS(579),
    [anon_sym_GT_GT] = ACTIONS(579),
    [anon_sym_AMP_GT] = ACTIONS(579),
    [anon_sym_AMP_GT_GT] = ACTIONS(579),
    [anon_sym_LT_AMP] = ACTIONS(579),
    [anon_sym_GT_AMP] = ACTIONS(579),
    [sym_leading_word] = ACTIONS(579),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(579),
    [anon_sym_LF] = ACTIONS(579),
    [anon_sym_AMP] = ACTIONS(579),
  },
  [430] = {
    [sym_file_descriptor] = ACTIONS(309),
    [anon_sym_in] = ACTIONS(311),
    [anon_sym_RPAREN] = ACTIONS(311),
    [anon_sym_SEMI_SEMI] = ACTIONS(311),
    [anon_sym_RBRACE] = ACTIONS(311),
    [anon_sym_RBRACK] = ACTIONS(311),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(311),
    [anon_sym_COLON] = ACTIONS(311),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(311),
    [anon_sym_PIPE] = ACTIONS(311),
    [anon_sym_PIPE_AMP] = ACTIONS(311),
    [anon_sym_AMP_AMP] = ACTIONS(311),
    [anon_sym_PIPE_PIPE] = ACTIONS(311),
    [anon_sym_DQUOTE] = ACTIONS(311),
    [sym_single_quoted_argument] = ACTIONS(311),
    [anon_sym_DOLLAR] = ACTIONS(311),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(311),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(311),
    [anon_sym_LT] = ACTIONS(311),
    [anon_sym_GT] = ACTIONS(311),
    [anon_sym_GT_GT] = ACTIONS(311),
    [anon_sym_AMP_GT] = ACTIONS(311),
    [anon_sym_AMP_GT_GT] = ACTIONS(311),
    [anon_sym_LT_AMP] = ACTIONS(311),
    [anon_sym_GT_AMP] = ACTIONS(311),
    [anon_sym_LT_LT] = ACTIONS(311),
    [anon_sym_LT_LT_DASH] = ACTIONS(311),
    [sym_leading_word] = ACTIONS(311),
    [sym_word] = ACTIONS(311),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(311),
    [anon_sym_LF] = ACTIONS(311),
    [anon_sym_AMP] = ACTIONS(311),
  },
  [431] = {
    [sym__heredoc_middle] = ACTIONS(459),
    [sym__heredoc_end] = ACTIONS(459),
    [sym_file_descriptor] = ACTIONS(459),
    [anon_sym_in] = ACTIONS(417),
    [anon_sym_RPAREN] = ACTIONS(417),
    [anon_sym_SEMI_SEMI] = ACTIONS(417),
    [anon_sym_RBRACE] = ACTIONS(417),
    [anon_sym_RBRACK] = ACTIONS(417),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(417),
    [anon_sym_COLON] = ACTIONS(417),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_PIPE_AMP] = ACTIONS(417),
    [anon_sym_AMP_AMP] = ACTIONS(417),
    [anon_sym_PIPE_PIPE] = ACTIONS(417),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [sym__quoted_chars] = ACTIONS(417),
    [sym_single_quoted_argument] = ACTIONS(417),
    [anon_sym_DOLLAR] = ACTIONS(417),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(417),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(417),
    [anon_sym_LT] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(417),
    [anon_sym_GT_GT] = ACTIONS(417),
    [anon_sym_AMP_GT] = ACTIONS(417),
    [anon_sym_AMP_GT_GT] = ACTIONS(417),
    [anon_sym_LT_AMP] = ACTIONS(417),
    [anon_sym_GT_AMP] = ACTIONS(417),
    [anon_sym_LT_LT] = ACTIONS(417),
    [anon_sym_LT_LT_DASH] = ACTIONS(417),
    [sym_leading_word] = ACTIONS(417),
    [sym_word] = ACTIONS(417),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(417),
    [anon_sym_LF] = ACTIONS(417),
    [anon_sym_AMP] = ACTIONS(417),
  },
  [432] = {
    [sym__heredoc_middle] = ACTIONS(463),
    [sym__heredoc_end] = ACTIONS(463),
    [sym_file_descriptor] = ACTIONS(463),
    [anon_sym_in] = ACTIONS(419),
    [anon_sym_RPAREN] = ACTIONS(419),
    [anon_sym_SEMI_SEMI] = ACTIONS(419),
    [anon_sym_RBRACE] = ACTIONS(419),
    [anon_sym_RBRACK] = ACTIONS(419),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(419),
    [anon_sym_COLON] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(419),
    [anon_sym_PIPE_AMP] = ACTIONS(419),
    [anon_sym_AMP_AMP] = ACTIONS(419),
    [anon_sym_PIPE_PIPE] = ACTIONS(419),
    [anon_sym_DQUOTE] = ACTIONS(419),
    [sym__quoted_chars] = ACTIONS(419),
    [sym_single_quoted_argument] = ACTIONS(419),
    [anon_sym_DOLLAR] = ACTIONS(419),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(419),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(419),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_GT_GT] = ACTIONS(419),
    [anon_sym_AMP_GT] = ACTIONS(419),
    [anon_sym_AMP_GT_GT] = ACTIONS(419),
    [anon_sym_LT_AMP] = ACTIONS(419),
    [anon_sym_GT_AMP] = ACTIONS(419),
    [anon_sym_LT_LT] = ACTIONS(419),
    [anon_sym_LT_LT_DASH] = ACTIONS(419),
    [sym_leading_word] = ACTIONS(419),
    [sym_word] = ACTIONS(419),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(419),
    [anon_sym_LF] = ACTIONS(419),
    [anon_sym_AMP] = ACTIONS(419),
  },
  [433] = {
    [sym_expansion] = STATE(50),
    [sym_operator_expansion] = STATE(50),
    [sym_command_substitution] = STATE(50),
    [aux_sym_quoted_argument_repeat1] = STATE(486),
    [anon_sym_DQUOTE] = ACTIONS(1476),
    [sym__quoted_chars] = ACTIONS(149),
    [anon_sym_DOLLAR] = ACTIONS(151),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(153),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(155),
    [sym_comment] = ACTIONS(145),
  },
  [434] = {
    [sym_file_descriptor] = ACTIONS(1478),
    [anon_sym_RPAREN] = ACTIONS(1481),
    [anon_sym_SEMI_SEMI] = ACTIONS(1481),
    [anon_sym_COLON] = ACTIONS(1481),
    [anon_sym_PIPE] = ACTIONS(1481),
    [anon_sym_PIPE_AMP] = ACTIONS(1481),
    [anon_sym_AMP_AMP] = ACTIONS(1481),
    [anon_sym_PIPE_PIPE] = ACTIONS(1481),
    [anon_sym_DQUOTE] = ACTIONS(1481),
    [sym_single_quoted_argument] = ACTIONS(1481),
    [anon_sym_LT] = ACTIONS(1481),
    [anon_sym_GT] = ACTIONS(1481),
    [anon_sym_GT_GT] = ACTIONS(1481),
    [anon_sym_AMP_GT] = ACTIONS(1481),
    [anon_sym_AMP_GT_GT] = ACTIONS(1481),
    [anon_sym_LT_AMP] = ACTIONS(1481),
    [anon_sym_GT_AMP] = ACTIONS(1481),
    [anon_sym_LT_LT] = ACTIONS(1481),
    [anon_sym_LT_LT_DASH] = ACTIONS(1481),
    [sym_leading_word] = ACTIONS(1481),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1481),
    [anon_sym_LF] = ACTIONS(1481),
    [anon_sym_AMP] = ACTIONS(1481),
  },
  [435] = {
    [anon_sym_DOLLAR] = ACTIONS(1484),
    [sym_word] = ACTIONS(1486),
    [sym_comment] = ACTIONS(71),
  },
  [436] = {
    [sym_leading_word] = ACTIONS(1488),
    [sym_comment] = ACTIONS(71),
  },
  [437] = {
    [sym_command] = STATE(490),
    [sym_environment_variable_assignment] = STATE(18),
    [sym_quoted_argument] = STATE(85),
    [sym_file_redirect] = STATE(18),
    [aux_sym_command_repeat1] = STATE(89),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [sym_single_quoted_argument] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_AMP_GT] = ACTIONS(99),
    [anon_sym_AMP_GT_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_leading_word] = ACTIONS(233),
    [sym_comment] = ACTIONS(71),
  },
  [438] = {
    [sym_file_descriptor] = ACTIONS(1490),
    [anon_sym_RPAREN] = ACTIONS(1493),
    [anon_sym_SEMI_SEMI] = ACTIONS(1493),
    [anon_sym_COLON] = ACTIONS(1493),
    [anon_sym_PIPE] = ACTIONS(1493),
    [anon_sym_PIPE_AMP] = ACTIONS(1493),
    [anon_sym_AMP_AMP] = ACTIONS(1493),
    [anon_sym_PIPE_PIPE] = ACTIONS(1493),
    [anon_sym_DQUOTE] = ACTIONS(1493),
    [sym_single_quoted_argument] = ACTIONS(1493),
    [anon_sym_LT] = ACTIONS(1493),
    [anon_sym_GT] = ACTIONS(1493),
    [anon_sym_GT_GT] = ACTIONS(1493),
    [anon_sym_AMP_GT] = ACTIONS(1493),
    [anon_sym_AMP_GT_GT] = ACTIONS(1493),
    [anon_sym_LT_AMP] = ACTIONS(1493),
    [anon_sym_GT_AMP] = ACTIONS(1493),
    [anon_sym_LT_LT] = ACTIONS(1493),
    [anon_sym_LT_LT_DASH] = ACTIONS(1493),
    [sym_leading_word] = ACTIONS(1493),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1493),
    [anon_sym_LF] = ACTIONS(1493),
    [anon_sym_AMP] = ACTIONS(1493),
  },
  [439] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1496),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1496),
    [anon_sym_LF] = ACTIONS(1496),
    [anon_sym_AMP] = ACTIONS(1496),
  },
  [440] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1498),
    [anon_sym_PIPE] = ACTIONS(1498),
    [anon_sym_PIPE_AMP] = ACTIONS(1498),
    [anon_sym_AMP_AMP] = ACTIONS(1498),
    [anon_sym_PIPE_PIPE] = ACTIONS(1498),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1498),
    [anon_sym_LF] = ACTIONS(1498),
    [anon_sym_AMP] = ACTIONS(1498),
  },
  [441] = {
    [sym_file_descriptor] = ACTIONS(713),
    [anon_sym_RPAREN] = ACTIONS(715),
    [anon_sym_SEMI_SEMI] = ACTIONS(715),
    [anon_sym_PIPE] = ACTIONS(715),
    [anon_sym_PIPE_AMP] = ACTIONS(715),
    [anon_sym_AMP_AMP] = ACTIONS(715),
    [anon_sym_PIPE_PIPE] = ACTIONS(715),
    [anon_sym_LT] = ACTIONS(715),
    [anon_sym_GT] = ACTIONS(715),
    [anon_sym_GT_GT] = ACTIONS(715),
    [anon_sym_AMP_GT] = ACTIONS(715),
    [anon_sym_AMP_GT_GT] = ACTIONS(715),
    [anon_sym_LT_AMP] = ACTIONS(715),
    [anon_sym_GT_AMP] = ACTIONS(715),
    [anon_sym_LT_LT] = ACTIONS(715),
    [anon_sym_LT_LT_DASH] = ACTIONS(715),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(715),
    [anon_sym_LF] = ACTIONS(715),
    [anon_sym_AMP] = ACTIONS(715),
  },
  [442] = {
    [sym_quoted_argument] = STATE(492),
    [sym_expansion] = STATE(492),
    [sym_operator_expansion] = STATE(492),
    [sym_command_substitution] = STATE(492),
    [anon_sym_DQUOTE] = ACTIONS(1132),
    [sym_single_quoted_argument] = ACTIONS(1503),
    [anon_sym_DOLLAR] = ACTIONS(1136),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1138),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1140),
    [sym_word] = ACTIONS(1505),
    [sym_comment] = ACTIONS(71),
  },
  [443] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1507),
    [anon_sym_PIPE] = ACTIONS(1507),
    [anon_sym_PIPE_AMP] = ACTIONS(1507),
    [anon_sym_AMP_AMP] = ACTIONS(1507),
    [anon_sym_PIPE_PIPE] = ACTIONS(1507),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1507),
    [anon_sym_LF] = ACTIONS(1507),
    [anon_sym_AMP] = ACTIONS(1507),
  },
  [444] = {
    [sym_file_descriptor] = ACTIONS(683),
    [anon_sym_in] = ACTIONS(663),
    [anon_sym_RPAREN] = ACTIONS(663),
    [anon_sym_SEMI_SEMI] = ACTIONS(663),
    [anon_sym_RBRACE] = ACTIONS(663),
    [anon_sym_RBRACK] = ACTIONS(663),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(663),
    [anon_sym_COLON] = ACTIONS(663),
    [anon_sym_PIPE] = ACTIONS(663),
    [anon_sym_PIPE_AMP] = ACTIONS(663),
    [anon_sym_AMP_AMP] = ACTIONS(663),
    [anon_sym_PIPE_PIPE] = ACTIONS(663),
    [anon_sym_DQUOTE] = ACTIONS(663),
    [sym__quoted_chars] = ACTIONS(663),
    [sym_single_quoted_argument] = ACTIONS(663),
    [anon_sym_DOLLAR] = ACTIONS(663),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(663),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(663),
    [anon_sym_LT] = ACTIONS(663),
    [anon_sym_GT] = ACTIONS(663),
    [anon_sym_GT_GT] = ACTIONS(663),
    [anon_sym_AMP_GT] = ACTIONS(663),
    [anon_sym_AMP_GT_GT] = ACTIONS(663),
    [anon_sym_LT_AMP] = ACTIONS(663),
    [anon_sym_GT_AMP] = ACTIONS(663),
    [anon_sym_LT_LT] = ACTIONS(663),
    [anon_sym_LT_LT_DASH] = ACTIONS(663),
    [sym_leading_word] = ACTIONS(663),
    [sym_word] = ACTIONS(663),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(663),
    [anon_sym_LF] = ACTIONS(663),
    [anon_sym_AMP] = ACTIONS(663),
  },
  [445] = {
    [sym__heredoc_middle] = ACTIONS(917),
    [sym__heredoc_end] = ACTIONS(917),
    [sym_file_descriptor] = ACTIONS(917),
    [anon_sym_in] = ACTIONS(889),
    [anon_sym_RPAREN] = ACTIONS(889),
    [anon_sym_SEMI_SEMI] = ACTIONS(889),
    [anon_sym_RBRACE] = ACTIONS(889),
    [anon_sym_RBRACK] = ACTIONS(889),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(889),
    [anon_sym_COLON] = ACTIONS(889),
    [anon_sym_PIPE] = ACTIONS(889),
    [anon_sym_PIPE_AMP] = ACTIONS(889),
    [anon_sym_AMP_AMP] = ACTIONS(889),
    [anon_sym_PIPE_PIPE] = ACTIONS(889),
    [anon_sym_DQUOTE] = ACTIONS(889),
    [sym__quoted_chars] = ACTIONS(889),
    [sym_single_quoted_argument] = ACTIONS(889),
    [anon_sym_DOLLAR] = ACTIONS(889),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(889),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(889),
    [anon_sym_LT] = ACTIONS(889),
    [anon_sym_GT] = ACTIONS(889),
    [anon_sym_GT_GT] = ACTIONS(889),
    [anon_sym_AMP_GT] = ACTIONS(889),
    [anon_sym_AMP_GT_GT] = ACTIONS(889),
    [anon_sym_LT_AMP] = ACTIONS(889),
    [anon_sym_GT_AMP] = ACTIONS(889),
    [anon_sym_LT_LT] = ACTIONS(889),
    [anon_sym_LT_LT_DASH] = ACTIONS(889),
    [sym_leading_word] = ACTIONS(889),
    [sym_word] = ACTIONS(889),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(889),
    [anon_sym_LF] = ACTIONS(889),
    [anon_sym_AMP] = ACTIONS(889),
  },
  [446] = {
    [anon_sym_esac] = ACTIONS(1511),
    [anon_sym_DQUOTE] = ACTIONS(1514),
    [sym_single_quoted_argument] = ACTIONS(1511),
    [anon_sym_DOLLAR] = ACTIONS(1511),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1514),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1514),
    [sym_word] = ACTIONS(1517),
    [sym_comment] = ACTIONS(71),
  },
  [447] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1520),
    [anon_sym_PIPE] = ACTIONS(1520),
    [anon_sym_PIPE_AMP] = ACTIONS(1520),
    [anon_sym_AMP_AMP] = ACTIONS(1520),
    [anon_sym_PIPE_PIPE] = ACTIONS(1520),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1520),
    [anon_sym_LF] = ACTIONS(1520),
    [anon_sym_AMP] = ACTIONS(1520),
  },
  [448] = {
    [anon_sym_fi] = ACTIONS(1523),
    [sym_comment] = ACTIONS(71),
  },
  [449] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1525),
    [anon_sym_PIPE] = ACTIONS(1525),
    [anon_sym_PIPE_AMP] = ACTIONS(1525),
    [anon_sym_AMP_AMP] = ACTIONS(1525),
    [anon_sym_PIPE_PIPE] = ACTIONS(1525),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1525),
    [anon_sym_LF] = ACTIONS(1525),
    [anon_sym_AMP] = ACTIONS(1525),
  },
  [450] = {
    [sym_expansion] = STATE(50),
    [sym_operator_expansion] = STATE(50),
    [sym_command_substitution] = STATE(50),
    [aux_sym_quoted_argument_repeat1] = STATE(496),
    [anon_sym_DQUOTE] = ACTIONS(1530),
    [sym__quoted_chars] = ACTIONS(149),
    [anon_sym_DOLLAR] = ACTIONS(151),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(153),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(155),
    [sym_comment] = ACTIONS(145),
  },
  [451] = {
    [sym_file_descriptor] = ACTIONS(479),
    [anon_sym_RPAREN] = ACTIONS(481),
    [anon_sym_SEMI_SEMI] = ACTIONS(481),
    [anon_sym_RBRACK] = ACTIONS(481),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(481),
    [anon_sym_PIPE] = ACTIONS(481),
    [anon_sym_PIPE_AMP] = ACTIONS(481),
    [anon_sym_AMP_AMP] = ACTIONS(481),
    [anon_sym_PIPE_PIPE] = ACTIONS(481),
    [anon_sym_DQUOTE] = ACTIONS(481),
    [sym_single_quoted_argument] = ACTIONS(481),
    [anon_sym_DOLLAR] = ACTIONS(481),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(481),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(481),
    [anon_sym_LT] = ACTIONS(481),
    [anon_sym_GT] = ACTIONS(481),
    [anon_sym_GT_GT] = ACTIONS(481),
    [anon_sym_AMP_GT] = ACTIONS(481),
    [anon_sym_AMP_GT_GT] = ACTIONS(481),
    [anon_sym_LT_AMP] = ACTIONS(481),
    [anon_sym_GT_AMP] = ACTIONS(481),
    [anon_sym_LT_LT] = ACTIONS(481),
    [anon_sym_LT_LT_DASH] = ACTIONS(481),
    [sym_word] = ACTIONS(481),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(481),
    [anon_sym_LF] = ACTIONS(481),
    [anon_sym_AMP] = ACTIONS(481),
  },
  [452] = {
    [anon_sym_DOLLAR] = ACTIONS(1532),
    [sym_word] = ACTIONS(1534),
    [sym_comment] = ACTIONS(71),
  },
  [453] = {
    [sym_leading_word] = ACTIONS(1536),
    [sym_comment] = ACTIONS(71),
  },
  [454] = {
    [sym_command] = STATE(500),
    [sym_environment_variable_assignment] = STATE(18),
    [sym_quoted_argument] = STATE(85),
    [sym_file_redirect] = STATE(18),
    [aux_sym_command_repeat1] = STATE(89),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [sym_single_quoted_argument] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_AMP_GT] = ACTIONS(99),
    [anon_sym_AMP_GT_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_leading_word] = ACTIONS(233),
    [sym_comment] = ACTIONS(71),
  },
  [455] = {
    [sym_file_descriptor] = ACTIONS(485),
    [anon_sym_RPAREN] = ACTIONS(487),
    [anon_sym_SEMI_SEMI] = ACTIONS(487),
    [anon_sym_RBRACK] = ACTIONS(487),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(487),
    [anon_sym_PIPE] = ACTIONS(487),
    [anon_sym_PIPE_AMP] = ACTIONS(487),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [anon_sym_PIPE_PIPE] = ACTIONS(487),
    [anon_sym_DQUOTE] = ACTIONS(487),
    [sym_single_quoted_argument] = ACTIONS(487),
    [anon_sym_DOLLAR] = ACTIONS(487),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(487),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(487),
    [anon_sym_LT] = ACTIONS(487),
    [anon_sym_GT] = ACTIONS(487),
    [anon_sym_GT_GT] = ACTIONS(487),
    [anon_sym_AMP_GT] = ACTIONS(487),
    [anon_sym_AMP_GT_GT] = ACTIONS(487),
    [anon_sym_LT_AMP] = ACTIONS(487),
    [anon_sym_GT_AMP] = ACTIONS(487),
    [anon_sym_LT_LT] = ACTIONS(487),
    [anon_sym_LT_LT_DASH] = ACTIONS(487),
    [sym_word] = ACTIONS(487),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_LF] = ACTIONS(487),
    [anon_sym_AMP] = ACTIONS(487),
  },
  [456] = {
    [sym_file_redirect] = STATE(460),
    [sym_heredoc_redirect] = STATE(460),
    [sym_file_descriptor] = ACTIONS(1067),
    [anon_sym_RPAREN] = ACTIONS(1538),
    [anon_sym_SEMI_SEMI] = ACTIONS(1538),
    [anon_sym_PIPE] = ACTIONS(1538),
    [anon_sym_PIPE_AMP] = ACTIONS(1538),
    [anon_sym_AMP_AMP] = ACTIONS(1538),
    [anon_sym_PIPE_PIPE] = ACTIONS(1538),
    [anon_sym_LT] = ACTIONS(1084),
    [anon_sym_GT] = ACTIONS(1084),
    [anon_sym_GT_GT] = ACTIONS(1084),
    [anon_sym_AMP_GT] = ACTIONS(1084),
    [anon_sym_AMP_GT_GT] = ACTIONS(1084),
    [anon_sym_LT_AMP] = ACTIONS(1084),
    [anon_sym_GT_AMP] = ACTIONS(1084),
    [anon_sym_LT_LT] = ACTIONS(1086),
    [anon_sym_LT_LT_DASH] = ACTIONS(1086),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1538),
    [anon_sym_LF] = ACTIONS(1538),
    [anon_sym_AMP] = ACTIONS(1538),
  },
  [457] = {
    [sym_file_redirect] = STATE(422),
    [sym_heredoc_redirect] = STATE(422),
    [aux_sym_command_repeat2] = STATE(502),
    [sym_file_descriptor] = ACTIONS(1067),
    [anon_sym_RPAREN] = ACTIONS(275),
    [anon_sym_SEMI_SEMI] = ACTIONS(275),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(1543),
    [anon_sym_PIPE] = ACTIONS(275),
    [anon_sym_PIPE_AMP] = ACTIONS(275),
    [anon_sym_AMP_AMP] = ACTIONS(275),
    [anon_sym_PIPE_PIPE] = ACTIONS(275),
    [anon_sym_LT] = ACTIONS(1084),
    [anon_sym_GT] = ACTIONS(1084),
    [anon_sym_GT_GT] = ACTIONS(1084),
    [anon_sym_AMP_GT] = ACTIONS(1084),
    [anon_sym_AMP_GT_GT] = ACTIONS(1084),
    [anon_sym_LT_AMP] = ACTIONS(1084),
    [anon_sym_GT_AMP] = ACTIONS(1084),
    [anon_sym_LT_LT] = ACTIONS(1086),
    [anon_sym_LT_LT_DASH] = ACTIONS(1086),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(275),
    [anon_sym_LF] = ACTIONS(275),
    [anon_sym_AMP] = ACTIONS(275),
  },
  [458] = {
    [sym_expansion] = STATE(50),
    [sym_operator_expansion] = STATE(50),
    [sym_command_substitution] = STATE(50),
    [aux_sym_quoted_argument_repeat1] = STATE(504),
    [anon_sym_DQUOTE] = ACTIONS(1545),
    [sym__quoted_chars] = ACTIONS(149),
    [anon_sym_DOLLAR] = ACTIONS(151),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(153),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(155),
    [sym_comment] = ACTIONS(145),
  },
  [459] = {
    [sym_file_redirect] = STATE(422),
    [sym_heredoc_redirect] = STATE(422),
    [aux_sym_command_repeat2] = STATE(506),
    [sym_file_descriptor] = ACTIONS(1067),
    [anon_sym_RPAREN] = ACTIONS(377),
    [anon_sym_SEMI_SEMI] = ACTIONS(377),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(1547),
    [anon_sym_PIPE] = ACTIONS(377),
    [anon_sym_PIPE_AMP] = ACTIONS(377),
    [anon_sym_AMP_AMP] = ACTIONS(377),
    [anon_sym_PIPE_PIPE] = ACTIONS(377),
    [anon_sym_EQ] = ACTIONS(381),
    [anon_sym_LT] = ACTIONS(1084),
    [anon_sym_GT] = ACTIONS(1084),
    [anon_sym_GT_GT] = ACTIONS(1084),
    [anon_sym_AMP_GT] = ACTIONS(1084),
    [anon_sym_AMP_GT_GT] = ACTIONS(1084),
    [anon_sym_LT_AMP] = ACTIONS(1084),
    [anon_sym_GT_AMP] = ACTIONS(1084),
    [anon_sym_LT_LT] = ACTIONS(1086),
    [anon_sym_LT_LT_DASH] = ACTIONS(1086),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(377),
    [anon_sym_LF] = ACTIONS(377),
    [anon_sym_AMP] = ACTIONS(377),
  },
  [460] = {
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
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(533),
    [anon_sym_LF] = ACTIONS(533),
    [anon_sym_AMP] = ACTIONS(533),
  },
  [461] = {
    [sym_file_descriptor] = ACTIONS(543),
    [anon_sym_in] = ACTIONS(545),
    [anon_sym_RPAREN] = ACTIONS(545),
    [anon_sym_SEMI_SEMI] = ACTIONS(545),
    [anon_sym_RBRACE] = ACTIONS(545),
    [anon_sym_RBRACK] = ACTIONS(545),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(545),
    [anon_sym_COLON] = ACTIONS(545),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(545),
    [anon_sym_PIPE] = ACTIONS(545),
    [anon_sym_PIPE_AMP] = ACTIONS(545),
    [anon_sym_AMP_AMP] = ACTIONS(545),
    [anon_sym_PIPE_PIPE] = ACTIONS(545),
    [anon_sym_DQUOTE] = ACTIONS(545),
    [sym_single_quoted_argument] = ACTIONS(545),
    [anon_sym_DOLLAR] = ACTIONS(545),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(545),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(545),
    [anon_sym_LT] = ACTIONS(545),
    [anon_sym_GT] = ACTIONS(545),
    [anon_sym_GT_GT] = ACTIONS(545),
    [anon_sym_AMP_GT] = ACTIONS(545),
    [anon_sym_AMP_GT_GT] = ACTIONS(545),
    [anon_sym_LT_AMP] = ACTIONS(545),
    [anon_sym_GT_AMP] = ACTIONS(545),
    [anon_sym_LT_LT] = ACTIONS(545),
    [anon_sym_LT_LT_DASH] = ACTIONS(545),
    [sym_leading_word] = ACTIONS(545),
    [sym_word] = ACTIONS(545),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(545),
    [anon_sym_LF] = ACTIONS(545),
    [anon_sym_AMP] = ACTIONS(545),
  },
  [462] = {
    [sym_file_descriptor] = ACTIONS(845),
    [anon_sym_RPAREN] = ACTIONS(847),
    [anon_sym_SEMI_SEMI] = ACTIONS(847),
    [anon_sym_PIPE] = ACTIONS(847),
    [anon_sym_PIPE_AMP] = ACTIONS(847),
    [anon_sym_AMP_AMP] = ACTIONS(847),
    [anon_sym_PIPE_PIPE] = ACTIONS(847),
    [anon_sym_LT] = ACTIONS(847),
    [anon_sym_GT] = ACTIONS(847),
    [anon_sym_GT_GT] = ACTIONS(847),
    [anon_sym_AMP_GT] = ACTIONS(847),
    [anon_sym_AMP_GT_GT] = ACTIONS(847),
    [anon_sym_LT_AMP] = ACTIONS(847),
    [anon_sym_GT_AMP] = ACTIONS(847),
    [anon_sym_LT_LT] = ACTIONS(847),
    [anon_sym_LT_LT_DASH] = ACTIONS(847),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(847),
    [anon_sym_LF] = ACTIONS(847),
    [anon_sym_AMP] = ACTIONS(847),
  },
  [463] = {
    [sym_quoted_argument] = STATE(507),
    [sym_expansion] = STATE(507),
    [sym_operator_expansion] = STATE(507),
    [sym_command_substitution] = STATE(507),
    [anon_sym_DQUOTE] = ACTIONS(1452),
    [sym_single_quoted_argument] = ACTIONS(1549),
    [anon_sym_DOLLAR] = ACTIONS(1456),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1458),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1460),
    [sym_word] = ACTIONS(1551),
    [sym_comment] = ACTIONS(71),
  },
  [464] = {
    [sym_expansion] = STATE(50),
    [sym_operator_expansion] = STATE(50),
    [sym_command_substitution] = STATE(50),
    [aux_sym_quoted_argument_repeat1] = STATE(510),
    [anon_sym_DQUOTE] = ACTIONS(1553),
    [sym__quoted_chars] = ACTIONS(149),
    [anon_sym_DOLLAR] = ACTIONS(151),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(153),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(155),
    [sym_comment] = ACTIONS(145),
  },
  [465] = {
    [sym_file_descriptor] = ACTIONS(249),
    [anon_sym_RPAREN] = ACTIONS(251),
    [anon_sym_SEMI_SEMI] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(251),
    [anon_sym_PIPE_AMP] = ACTIONS(251),
    [anon_sym_AMP_AMP] = ACTIONS(251),
    [anon_sym_PIPE_PIPE] = ACTIONS(251),
    [anon_sym_DQUOTE] = ACTIONS(251),
    [sym_single_quoted_argument] = ACTIONS(251),
    [anon_sym_DOLLAR] = ACTIONS(251),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(251),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(251),
    [anon_sym_LT] = ACTIONS(251),
    [anon_sym_GT] = ACTIONS(251),
    [anon_sym_GT_GT] = ACTIONS(251),
    [anon_sym_AMP_GT] = ACTIONS(251),
    [anon_sym_AMP_GT_GT] = ACTIONS(251),
    [anon_sym_LT_AMP] = ACTIONS(251),
    [anon_sym_GT_AMP] = ACTIONS(251),
    [anon_sym_LT_LT] = ACTIONS(251),
    [anon_sym_LT_LT_DASH] = ACTIONS(251),
    [sym_word] = ACTIONS(251),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(251),
    [anon_sym_LF] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(251),
  },
  [466] = {
    [anon_sym_DOLLAR] = ACTIONS(1555),
    [sym_word] = ACTIONS(1557),
    [sym_comment] = ACTIONS(71),
  },
  [467] = {
    [sym_leading_word] = ACTIONS(1559),
    [sym_comment] = ACTIONS(71),
  },
  [468] = {
    [sym_command] = STATE(514),
    [sym_environment_variable_assignment] = STATE(18),
    [sym_quoted_argument] = STATE(85),
    [sym_file_redirect] = STATE(18),
    [aux_sym_command_repeat1] = STATE(89),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [sym_single_quoted_argument] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_AMP_GT] = ACTIONS(99),
    [anon_sym_AMP_GT_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_leading_word] = ACTIONS(233),
    [sym_comment] = ACTIONS(71),
  },
  [469] = {
    [sym_file_descriptor] = ACTIONS(261),
    [anon_sym_RPAREN] = ACTIONS(263),
    [anon_sym_SEMI_SEMI] = ACTIONS(263),
    [anon_sym_PIPE] = ACTIONS(263),
    [anon_sym_PIPE_AMP] = ACTIONS(263),
    [anon_sym_AMP_AMP] = ACTIONS(263),
    [anon_sym_PIPE_PIPE] = ACTIONS(263),
    [anon_sym_DQUOTE] = ACTIONS(263),
    [sym_single_quoted_argument] = ACTIONS(263),
    [anon_sym_DOLLAR] = ACTIONS(263),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(263),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(263),
    [anon_sym_LT] = ACTIONS(263),
    [anon_sym_GT] = ACTIONS(263),
    [anon_sym_GT_GT] = ACTIONS(263),
    [anon_sym_AMP_GT] = ACTIONS(263),
    [anon_sym_AMP_GT_GT] = ACTIONS(263),
    [anon_sym_LT_AMP] = ACTIONS(263),
    [anon_sym_GT_AMP] = ACTIONS(263),
    [anon_sym_LT_LT] = ACTIONS(263),
    [anon_sym_LT_LT_DASH] = ACTIONS(263),
    [sym_word] = ACTIONS(263),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(263),
    [anon_sym_LF] = ACTIONS(263),
    [anon_sym_AMP] = ACTIONS(263),
  },
  [470] = {
    [sym_quoted_argument] = STATE(515),
    [sym_expansion] = STATE(515),
    [sym_operator_expansion] = STATE(515),
    [sym_command_substitution] = STATE(515),
    [sym_file_redirect] = STATE(422),
    [sym_heredoc_redirect] = STATE(422),
    [aux_sym_command_repeat2] = STATE(517),
    [sym_file_descriptor] = ACTIONS(1067),
    [anon_sym_RPAREN] = ACTIONS(1561),
    [anon_sym_SEMI_SEMI] = ACTIONS(1561),
    [anon_sym_PIPE] = ACTIONS(1561),
    [anon_sym_PIPE_AMP] = ACTIONS(1561),
    [anon_sym_AMP_AMP] = ACTIONS(1561),
    [anon_sym_PIPE_PIPE] = ACTIONS(1561),
    [anon_sym_DQUOTE] = ACTIONS(1438),
    [sym_single_quoted_argument] = ACTIONS(1564),
    [anon_sym_DOLLAR] = ACTIONS(1442),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1444),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1446),
    [anon_sym_LT] = ACTIONS(1084),
    [anon_sym_GT] = ACTIONS(1084),
    [anon_sym_GT_GT] = ACTIONS(1084),
    [anon_sym_AMP_GT] = ACTIONS(1084),
    [anon_sym_AMP_GT_GT] = ACTIONS(1084),
    [anon_sym_LT_AMP] = ACTIONS(1084),
    [anon_sym_GT_AMP] = ACTIONS(1084),
    [anon_sym_LT_LT] = ACTIONS(1086),
    [anon_sym_LT_LT_DASH] = ACTIONS(1086),
    [sym_word] = ACTIONS(1566),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1561),
    [anon_sym_LF] = ACTIONS(1561),
    [anon_sym_AMP] = ACTIONS(1561),
  },
  [471] = {
    [sym_file_redirect] = STATE(460),
    [sym_heredoc_redirect] = STATE(460),
    [sym_file_descriptor] = ACTIONS(1067),
    [anon_sym_RPAREN] = ACTIONS(1561),
    [anon_sym_SEMI_SEMI] = ACTIONS(1561),
    [anon_sym_PIPE] = ACTIONS(1561),
    [anon_sym_PIPE_AMP] = ACTIONS(1561),
    [anon_sym_AMP_AMP] = ACTIONS(1561),
    [anon_sym_PIPE_PIPE] = ACTIONS(1561),
    [anon_sym_LT] = ACTIONS(1084),
    [anon_sym_GT] = ACTIONS(1084),
    [anon_sym_GT_GT] = ACTIONS(1084),
    [anon_sym_AMP_GT] = ACTIONS(1084),
    [anon_sym_AMP_GT_GT] = ACTIONS(1084),
    [anon_sym_LT_AMP] = ACTIONS(1084),
    [anon_sym_GT_AMP] = ACTIONS(1084),
    [anon_sym_LT_LT] = ACTIONS(1086),
    [anon_sym_LT_LT_DASH] = ACTIONS(1086),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1561),
    [anon_sym_LF] = ACTIONS(1561),
    [anon_sym_AMP] = ACTIONS(1561),
  },
  [472] = {
    [sym_expansion] = STATE(50),
    [sym_operator_expansion] = STATE(50),
    [sym_command_substitution] = STATE(50),
    [aux_sym_quoted_argument_repeat1] = STATE(519),
    [anon_sym_DQUOTE] = ACTIONS(1568),
    [sym__quoted_chars] = ACTIONS(149),
    [anon_sym_DOLLAR] = ACTIONS(151),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(153),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(155),
    [sym_comment] = ACTIONS(145),
  },
  [473] = {
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
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(333),
    [anon_sym_LF] = ACTIONS(333),
    [anon_sym_AMP] = ACTIONS(333),
  },
  [474] = {
    [anon_sym_DOLLAR] = ACTIONS(1570),
    [sym_word] = ACTIONS(1572),
    [sym_comment] = ACTIONS(71),
  },
  [475] = {
    [sym_leading_word] = ACTIONS(1574),
    [sym_comment] = ACTIONS(71),
  },
  [476] = {
    [sym_command] = STATE(523),
    [sym_environment_variable_assignment] = STATE(18),
    [sym_quoted_argument] = STATE(85),
    [sym_file_redirect] = STATE(18),
    [aux_sym_command_repeat1] = STATE(89),
    [sym_file_descriptor] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [sym_single_quoted_argument] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_AMP_GT] = ACTIONS(99),
    [anon_sym_AMP_GT_GT] = ACTIONS(99),
    [anon_sym_LT_AMP] = ACTIONS(99),
    [anon_sym_GT_AMP] = ACTIONS(99),
    [sym_leading_word] = ACTIONS(233),
    [sym_comment] = ACTIONS(71),
  },
  [477] = {
    [sym_file_descriptor] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(345),
    [anon_sym_SEMI_SEMI] = ACTIONS(345),
    [anon_sym_PIPE] = ACTIONS(345),
    [anon_sym_PIPE_AMP] = ACTIONS(345),
    [anon_sym_AMP_AMP] = ACTIONS(345),
    [anon_sym_PIPE_PIPE] = ACTIONS(345),
    [anon_sym_LT] = ACTIONS(345),
    [anon_sym_GT] = ACTIONS(345),
    [anon_sym_GT_GT] = ACTIONS(345),
    [anon_sym_AMP_GT] = ACTIONS(345),
    [anon_sym_AMP_GT_GT] = ACTIONS(345),
    [anon_sym_LT_AMP] = ACTIONS(345),
    [anon_sym_GT_AMP] = ACTIONS(345),
    [anon_sym_LT_LT] = ACTIONS(345),
    [anon_sym_LT_LT_DASH] = ACTIONS(345),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(345),
    [anon_sym_LF] = ACTIONS(345),
    [anon_sym_AMP] = ACTIONS(345),
  },
  [478] = {
    [sym__heredoc_middle] = ACTIONS(921),
    [sym__heredoc_end] = ACTIONS(921),
    [sym_file_descriptor] = ACTIONS(921),
    [anon_sym_in] = ACTIONS(891),
    [anon_sym_RPAREN] = ACTIONS(891),
    [anon_sym_SEMI_SEMI] = ACTIONS(891),
    [anon_sym_RBRACE] = ACTIONS(891),
    [anon_sym_RBRACK] = ACTIONS(891),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(891),
    [anon_sym_COLON] = ACTIONS(891),
    [anon_sym_PIPE] = ACTIONS(891),
    [anon_sym_PIPE_AMP] = ACTIONS(891),
    [anon_sym_AMP_AMP] = ACTIONS(891),
    [anon_sym_PIPE_PIPE] = ACTIONS(891),
    [anon_sym_DQUOTE] = ACTIONS(891),
    [sym__quoted_chars] = ACTIONS(891),
    [sym_single_quoted_argument] = ACTIONS(891),
    [anon_sym_DOLLAR] = ACTIONS(891),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(891),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(891),
    [anon_sym_LT] = ACTIONS(891),
    [anon_sym_GT] = ACTIONS(891),
    [anon_sym_GT_GT] = ACTIONS(891),
    [anon_sym_AMP_GT] = ACTIONS(891),
    [anon_sym_AMP_GT_GT] = ACTIONS(891),
    [anon_sym_LT_AMP] = ACTIONS(891),
    [anon_sym_GT_AMP] = ACTIONS(891),
    [anon_sym_LT_LT] = ACTIONS(891),
    [anon_sym_LT_LT_DASH] = ACTIONS(891),
    [sym_leading_word] = ACTIONS(891),
    [sym_word] = ACTIONS(891),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(891),
    [anon_sym_LF] = ACTIONS(891),
    [anon_sym_AMP] = ACTIONS(891),
  },
  [479] = {
    [sym_file_descriptor] = ACTIONS(309),
    [anon_sym_SEMI_SEMI] = ACTIONS(311),
    [anon_sym_RBRACE] = ACTIONS(311),
    [anon_sym_COLON] = ACTIONS(311),
    [anon_sym_PIPE] = ACTIONS(311),
    [anon_sym_PIPE_AMP] = ACTIONS(311),
    [anon_sym_AMP_AMP] = ACTIONS(311),
    [anon_sym_PIPE_PIPE] = ACTIONS(311),
    [anon_sym_DQUOTE] = ACTIONS(311),
    [sym_single_quoted_argument] = ACTIONS(311),
    [anon_sym_LT] = ACTIONS(311),
    [anon_sym_GT] = ACTIONS(311),
    [anon_sym_GT_GT] = ACTIONS(311),
    [anon_sym_AMP_GT] = ACTIONS(311),
    [anon_sym_AMP_GT_GT] = ACTIONS(311),
    [anon_sym_LT_AMP] = ACTIONS(311),
    [anon_sym_GT_AMP] = ACTIONS(311),
    [sym_leading_word] = ACTIONS(311),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(311),
    [anon_sym_LF] = ACTIONS(311),
    [anon_sym_AMP] = ACTIONS(311),
  },
  [480] = {
    [sym_expansion] = STATE(127),
    [sym_operator_expansion] = STATE(127),
    [sym_command_substitution] = STATE(127),
    [anon_sym_DQUOTE] = ACTIONS(1576),
    [sym__quoted_chars] = ACTIONS(325),
    [anon_sym_DOLLAR] = ACTIONS(151),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(153),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(155),
    [sym_comment] = ACTIONS(145),
  },
  [481] = {
    [sym_file_descriptor] = ACTIONS(459),
    [anon_sym_SEMI_SEMI] = ACTIONS(417),
    [anon_sym_RBRACE] = ACTIONS(417),
    [anon_sym_COLON] = ACTIONS(417),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_PIPE_AMP] = ACTIONS(417),
    [anon_sym_AMP_AMP] = ACTIONS(417),
    [anon_sym_PIPE_PIPE] = ACTIONS(417),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [sym_single_quoted_argument] = ACTIONS(417),
    [anon_sym_LT] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(417),
    [anon_sym_GT_GT] = ACTIONS(417),
    [anon_sym_AMP_GT] = ACTIONS(417),
    [anon_sym_AMP_GT_GT] = ACTIONS(417),
    [anon_sym_LT_AMP] = ACTIONS(417),
    [anon_sym_GT_AMP] = ACTIONS(417),
    [sym_leading_word] = ACTIONS(417),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(417),
    [anon_sym_LF] = ACTIONS(417),
    [anon_sym_AMP] = ACTIONS(417),
  },
  [482] = {
    [sym_file_descriptor] = ACTIONS(463),
    [anon_sym_SEMI_SEMI] = ACTIONS(419),
    [anon_sym_RBRACE] = ACTIONS(419),
    [anon_sym_COLON] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(419),
    [anon_sym_PIPE_AMP] = ACTIONS(419),
    [anon_sym_AMP_AMP] = ACTIONS(419),
    [anon_sym_PIPE_PIPE] = ACTIONS(419),
    [anon_sym_DQUOTE] = ACTIONS(419),
    [sym_single_quoted_argument] = ACTIONS(419),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_GT_GT] = ACTIONS(419),
    [anon_sym_AMP_GT] = ACTIONS(419),
    [anon_sym_AMP_GT_GT] = ACTIONS(419),
    [anon_sym_LT_AMP] = ACTIONS(419),
    [anon_sym_GT_AMP] = ACTIONS(419),
    [sym_leading_word] = ACTIONS(419),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(419),
    [anon_sym_LF] = ACTIONS(419),
    [anon_sym_AMP] = ACTIONS(419),
  },
  [483] = {
    [anon_sym_RBRACE] = ACTIONS(1578),
    [anon_sym_COLON] = ACTIONS(1580),
    [anon_sym_EQ] = ACTIONS(1582),
    [anon_sym_COLON_QMARK] = ACTIONS(1582),
    [anon_sym_COLON_DASH] = ACTIONS(1582),
    [sym_comment] = ACTIONS(71),
  },
  [484] = {
    [anon_sym_RPAREN] = ACTIONS(1584),
    [sym_comment] = ACTIONS(71),
  },
  [485] = {
    [sym_file_descriptor] = ACTIONS(309),
    [anon_sym_RPAREN] = ACTIONS(311),
    [anon_sym_SEMI_SEMI] = ACTIONS(311),
    [anon_sym_COLON] = ACTIONS(311),
    [anon_sym_PIPE] = ACTIONS(311),
    [anon_sym_PIPE_AMP] = ACTIONS(311),
    [anon_sym_AMP_AMP] = ACTIONS(311),
    [anon_sym_PIPE_PIPE] = ACTIONS(311),
    [anon_sym_DQUOTE] = ACTIONS(311),
    [sym_single_quoted_argument] = ACTIONS(311),
    [anon_sym_LT] = ACTIONS(311),
    [anon_sym_GT] = ACTIONS(311),
    [anon_sym_GT_GT] = ACTIONS(311),
    [anon_sym_AMP_GT] = ACTIONS(311),
    [anon_sym_AMP_GT_GT] = ACTIONS(311),
    [anon_sym_LT_AMP] = ACTIONS(311),
    [anon_sym_GT_AMP] = ACTIONS(311),
    [anon_sym_LT_LT] = ACTIONS(311),
    [anon_sym_LT_LT_DASH] = ACTIONS(311),
    [sym_leading_word] = ACTIONS(311),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(311),
    [anon_sym_LF] = ACTIONS(311),
    [anon_sym_AMP] = ACTIONS(311),
  },
  [486] = {
    [sym_expansion] = STATE(127),
    [sym_operator_expansion] = STATE(127),
    [sym_command_substitution] = STATE(127),
    [anon_sym_DQUOTE] = ACTIONS(1586),
    [sym__quoted_chars] = ACTIONS(325),
    [anon_sym_DOLLAR] = ACTIONS(151),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(153),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(155),
    [sym_comment] = ACTIONS(145),
  },
  [487] = {
    [sym_file_descriptor] = ACTIONS(459),
    [anon_sym_RPAREN] = ACTIONS(417),
    [anon_sym_SEMI_SEMI] = ACTIONS(417),
    [anon_sym_COLON] = ACTIONS(417),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_PIPE_AMP] = ACTIONS(417),
    [anon_sym_AMP_AMP] = ACTIONS(417),
    [anon_sym_PIPE_PIPE] = ACTIONS(417),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [sym_single_quoted_argument] = ACTIONS(417),
    [anon_sym_LT] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(417),
    [anon_sym_GT_GT] = ACTIONS(417),
    [anon_sym_AMP_GT] = ACTIONS(417),
    [anon_sym_AMP_GT_GT] = ACTIONS(417),
    [anon_sym_LT_AMP] = ACTIONS(417),
    [anon_sym_GT_AMP] = ACTIONS(417),
    [anon_sym_LT_LT] = ACTIONS(417),
    [anon_sym_LT_LT_DASH] = ACTIONS(417),
    [sym_leading_word] = ACTIONS(417),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(417),
    [anon_sym_LF] = ACTIONS(417),
    [anon_sym_AMP] = ACTIONS(417),
  },
  [488] = {
    [sym_file_descriptor] = ACTIONS(463),
    [anon_sym_RPAREN] = ACTIONS(419),
    [anon_sym_SEMI_SEMI] = ACTIONS(419),
    [anon_sym_COLON] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(419),
    [anon_sym_PIPE_AMP] = ACTIONS(419),
    [anon_sym_AMP_AMP] = ACTIONS(419),
    [anon_sym_PIPE_PIPE] = ACTIONS(419),
    [anon_sym_DQUOTE] = ACTIONS(419),
    [sym_single_quoted_argument] = ACTIONS(419),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_GT_GT] = ACTIONS(419),
    [anon_sym_AMP_GT] = ACTIONS(419),
    [anon_sym_AMP_GT_GT] = ACTIONS(419),
    [anon_sym_LT_AMP] = ACTIONS(419),
    [anon_sym_GT_AMP] = ACTIONS(419),
    [anon_sym_LT_LT] = ACTIONS(419),
    [anon_sym_LT_LT_DASH] = ACTIONS(419),
    [sym_leading_word] = ACTIONS(419),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(419),
    [anon_sym_LF] = ACTIONS(419),
    [anon_sym_AMP] = ACTIONS(419),
  },
  [489] = {
    [anon_sym_RBRACE] = ACTIONS(1588),
    [anon_sym_COLON] = ACTIONS(1590),
    [anon_sym_EQ] = ACTIONS(1592),
    [anon_sym_COLON_QMARK] = ACTIONS(1592),
    [anon_sym_COLON_DASH] = ACTIONS(1592),
    [sym_comment] = ACTIONS(71),
  },
  [490] = {
    [anon_sym_RPAREN] = ACTIONS(1594),
    [sym_comment] = ACTIONS(71),
  },
  [491] = {
    [sym_case_item] = STATE(238),
    [sym_quoted_argument] = STATE(236),
    [sym_expansion] = STATE(236),
    [sym_operator_expansion] = STATE(236),
    [sym_command_substitution] = STATE(236),
    [aux_sym_case_statement_repeat1] = STATE(533),
    [anon_sym_esac] = ACTIONS(1596),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [sym_single_quoted_argument] = ACTIONS(611),
    [anon_sym_DOLLAR] = ACTIONS(127),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(129),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(131),
    [sym_word] = ACTIONS(613),
    [sym_comment] = ACTIONS(71),
  },
  [492] = {
    [sym_file_descriptor] = ACTIONS(389),
    [anon_sym_RPAREN] = ACTIONS(393),
    [anon_sym_SEMI_SEMI] = ACTIONS(393),
    [anon_sym_COLON] = ACTIONS(393),
    [anon_sym_PIPE] = ACTIONS(393),
    [anon_sym_PIPE_AMP] = ACTIONS(393),
    [anon_sym_AMP_AMP] = ACTIONS(393),
    [anon_sym_PIPE_PIPE] = ACTIONS(393),
    [anon_sym_DQUOTE] = ACTIONS(393),
    [sym_single_quoted_argument] = ACTIONS(393),
    [anon_sym_LT] = ACTIONS(393),
    [anon_sym_GT] = ACTIONS(393),
    [anon_sym_GT_GT] = ACTIONS(393),
    [anon_sym_AMP_GT] = ACTIONS(393),
    [anon_sym_AMP_GT_GT] = ACTIONS(393),
    [anon_sym_LT_AMP] = ACTIONS(393),
    [anon_sym_GT_AMP] = ACTIONS(393),
    [anon_sym_LT_LT] = ACTIONS(393),
    [anon_sym_LT_LT_DASH] = ACTIONS(393),
    [sym_leading_word] = ACTIONS(393),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(393),
    [anon_sym_LF] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(393),
  },
  [493] = {
    [sym_file_descriptor] = ACTIONS(395),
    [anon_sym_RPAREN] = ACTIONS(399),
    [anon_sym_SEMI_SEMI] = ACTIONS(399),
    [anon_sym_COLON] = ACTIONS(399),
    [anon_sym_PIPE] = ACTIONS(399),
    [anon_sym_PIPE_AMP] = ACTIONS(399),
    [anon_sym_AMP_AMP] = ACTIONS(399),
    [anon_sym_PIPE_PIPE] = ACTIONS(399),
    [anon_sym_DQUOTE] = ACTIONS(399),
    [sym_single_quoted_argument] = ACTIONS(399),
    [anon_sym_LT] = ACTIONS(399),
    [anon_sym_GT] = ACTIONS(399),
    [anon_sym_GT_GT] = ACTIONS(399),
    [anon_sym_AMP_GT] = ACTIONS(399),
    [anon_sym_AMP_GT_GT] = ACTIONS(399),
    [anon_sym_LT_AMP] = ACTIONS(399),
    [anon_sym_GT_AMP] = ACTIONS(399),
    [anon_sym_LT_LT] = ACTIONS(399),
    [anon_sym_LT_LT_DASH] = ACTIONS(399),
    [sym_leading_word] = ACTIONS(399),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(399),
    [anon_sym_LF] = ACTIONS(399),
    [anon_sym_AMP] = ACTIONS(399),
  },
  [494] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1598),
    [anon_sym_PIPE] = ACTIONS(1598),
    [anon_sym_PIPE_AMP] = ACTIONS(1598),
    [anon_sym_AMP_AMP] = ACTIONS(1598),
    [anon_sym_PIPE_PIPE] = ACTIONS(1598),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1598),
    [anon_sym_LF] = ACTIONS(1598),
    [anon_sym_AMP] = ACTIONS(1598),
  },
  [495] = {
    [sym_file_descriptor] = ACTIONS(309),
    [anon_sym_RPAREN] = ACTIONS(311),
    [anon_sym_SEMI_SEMI] = ACTIONS(311),
    [anon_sym_RBRACK] = ACTIONS(311),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(311),
    [anon_sym_PIPE] = ACTIONS(311),
    [anon_sym_PIPE_AMP] = ACTIONS(311),
    [anon_sym_AMP_AMP] = ACTIONS(311),
    [anon_sym_PIPE_PIPE] = ACTIONS(311),
    [anon_sym_DQUOTE] = ACTIONS(311),
    [sym_single_quoted_argument] = ACTIONS(311),
    [anon_sym_DOLLAR] = ACTIONS(311),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(311),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(311),
    [anon_sym_LT] = ACTIONS(311),
    [anon_sym_GT] = ACTIONS(311),
    [anon_sym_GT_GT] = ACTIONS(311),
    [anon_sym_AMP_GT] = ACTIONS(311),
    [anon_sym_AMP_GT_GT] = ACTIONS(311),
    [anon_sym_LT_AMP] = ACTIONS(311),
    [anon_sym_GT_AMP] = ACTIONS(311),
    [anon_sym_LT_LT] = ACTIONS(311),
    [anon_sym_LT_LT_DASH] = ACTIONS(311),
    [sym_word] = ACTIONS(311),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(311),
    [anon_sym_LF] = ACTIONS(311),
    [anon_sym_AMP] = ACTIONS(311),
  },
  [496] = {
    [sym_expansion] = STATE(127),
    [sym_operator_expansion] = STATE(127),
    [sym_command_substitution] = STATE(127),
    [anon_sym_DQUOTE] = ACTIONS(1601),
    [sym__quoted_chars] = ACTIONS(325),
    [anon_sym_DOLLAR] = ACTIONS(151),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(153),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(155),
    [sym_comment] = ACTIONS(145),
  },
  [497] = {
    [sym_file_descriptor] = ACTIONS(459),
    [anon_sym_RPAREN] = ACTIONS(417),
    [anon_sym_SEMI_SEMI] = ACTIONS(417),
    [anon_sym_RBRACK] = ACTIONS(417),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(417),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_PIPE_AMP] = ACTIONS(417),
    [anon_sym_AMP_AMP] = ACTIONS(417),
    [anon_sym_PIPE_PIPE] = ACTIONS(417),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [sym_single_quoted_argument] = ACTIONS(417),
    [anon_sym_DOLLAR] = ACTIONS(417),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(417),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(417),
    [anon_sym_LT] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(417),
    [anon_sym_GT_GT] = ACTIONS(417),
    [anon_sym_AMP_GT] = ACTIONS(417),
    [anon_sym_AMP_GT_GT] = ACTIONS(417),
    [anon_sym_LT_AMP] = ACTIONS(417),
    [anon_sym_GT_AMP] = ACTIONS(417),
    [anon_sym_LT_LT] = ACTIONS(417),
    [anon_sym_LT_LT_DASH] = ACTIONS(417),
    [sym_word] = ACTIONS(417),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(417),
    [anon_sym_LF] = ACTIONS(417),
    [anon_sym_AMP] = ACTIONS(417),
  },
  [498] = {
    [sym_file_descriptor] = ACTIONS(463),
    [anon_sym_RPAREN] = ACTIONS(419),
    [anon_sym_SEMI_SEMI] = ACTIONS(419),
    [anon_sym_RBRACK] = ACTIONS(419),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(419),
    [anon_sym_PIPE_AMP] = ACTIONS(419),
    [anon_sym_AMP_AMP] = ACTIONS(419),
    [anon_sym_PIPE_PIPE] = ACTIONS(419),
    [anon_sym_DQUOTE] = ACTIONS(419),
    [sym_single_quoted_argument] = ACTIONS(419),
    [anon_sym_DOLLAR] = ACTIONS(419),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(419),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(419),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_GT_GT] = ACTIONS(419),
    [anon_sym_AMP_GT] = ACTIONS(419),
    [anon_sym_AMP_GT_GT] = ACTIONS(419),
    [anon_sym_LT_AMP] = ACTIONS(419),
    [anon_sym_GT_AMP] = ACTIONS(419),
    [anon_sym_LT_LT] = ACTIONS(419),
    [anon_sym_LT_LT_DASH] = ACTIONS(419),
    [sym_word] = ACTIONS(419),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(419),
    [anon_sym_LF] = ACTIONS(419),
    [anon_sym_AMP] = ACTIONS(419),
  },
  [499] = {
    [anon_sym_RBRACE] = ACTIONS(1603),
    [anon_sym_COLON] = ACTIONS(1605),
    [anon_sym_EQ] = ACTIONS(1607),
    [anon_sym_COLON_QMARK] = ACTIONS(1607),
    [anon_sym_COLON_DASH] = ACTIONS(1607),
    [sym_comment] = ACTIONS(71),
  },
  [500] = {
    [anon_sym_RPAREN] = ACTIONS(1609),
    [sym_comment] = ACTIONS(71),
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
    [sym_file_descriptor] = ACTIONS(1067),
    [anon_sym_RPAREN] = ACTIONS(501),
    [anon_sym_SEMI_SEMI] = ACTIONS(501),
    [anon_sym_PIPE] = ACTIONS(501),
    [anon_sym_PIPE_AMP] = ACTIONS(501),
    [anon_sym_AMP_AMP] = ACTIONS(501),
    [anon_sym_PIPE_PIPE] = ACTIONS(501),
    [anon_sym_DQUOTE] = ACTIONS(1438),
    [sym_single_quoted_argument] = ACTIONS(1440),
    [anon_sym_DOLLAR] = ACTIONS(1442),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1444),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1446),
    [anon_sym_LT] = ACTIONS(1084),
    [anon_sym_GT] = ACTIONS(1084),
    [anon_sym_GT_GT] = ACTIONS(1084),
    [anon_sym_AMP_GT] = ACTIONS(1084),
    [anon_sym_AMP_GT_GT] = ACTIONS(1084),
    [anon_sym_LT_AMP] = ACTIONS(1084),
    [anon_sym_GT_AMP] = ACTIONS(1084),
    [anon_sym_LT_LT] = ACTIONS(1086),
    [anon_sym_LT_LT_DASH] = ACTIONS(1086),
    [sym_word] = ACTIONS(1448),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(501),
    [anon_sym_LF] = ACTIONS(501),
    [anon_sym_AMP] = ACTIONS(501),
  },
  [502] = {
    [sym_file_redirect] = STATE(460),
    [sym_heredoc_redirect] = STATE(460),
    [sym_file_descriptor] = ACTIONS(1067),
    [anon_sym_RPAREN] = ACTIONS(501),
    [anon_sym_SEMI_SEMI] = ACTIONS(501),
    [anon_sym_PIPE] = ACTIONS(501),
    [anon_sym_PIPE_AMP] = ACTIONS(501),
    [anon_sym_AMP_AMP] = ACTIONS(501),
    [anon_sym_PIPE_PIPE] = ACTIONS(501),
    [anon_sym_LT] = ACTIONS(1084),
    [anon_sym_GT] = ACTIONS(1084),
    [anon_sym_GT_GT] = ACTIONS(1084),
    [anon_sym_AMP_GT] = ACTIONS(1084),
    [anon_sym_AMP_GT_GT] = ACTIONS(1084),
    [anon_sym_LT_AMP] = ACTIONS(1084),
    [anon_sym_GT_AMP] = ACTIONS(1084),
    [anon_sym_LT_LT] = ACTIONS(1086),
    [anon_sym_LT_LT_DASH] = ACTIONS(1086),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(501),
    [anon_sym_LF] = ACTIONS(501),
    [anon_sym_AMP] = ACTIONS(501),
  },
  [503] = {
    [sym_file_descriptor] = ACTIONS(309),
    [anon_sym_RPAREN] = ACTIONS(311),
    [anon_sym_SEMI_SEMI] = ACTIONS(311),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(311),
    [anon_sym_PIPE] = ACTIONS(311),
    [anon_sym_PIPE_AMP] = ACTIONS(311),
    [anon_sym_AMP_AMP] = ACTIONS(311),
    [anon_sym_PIPE_PIPE] = ACTIONS(311),
    [anon_sym_LT] = ACTIONS(311),
    [anon_sym_GT] = ACTIONS(311),
    [anon_sym_GT_GT] = ACTIONS(311),
    [anon_sym_AMP_GT] = ACTIONS(311),
    [anon_sym_AMP_GT_GT] = ACTIONS(311),
    [anon_sym_LT_AMP] = ACTIONS(311),
    [anon_sym_GT_AMP] = ACTIONS(311),
    [anon_sym_LT_LT] = ACTIONS(311),
    [anon_sym_LT_LT_DASH] = ACTIONS(311),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(311),
    [anon_sym_LF] = ACTIONS(311),
    [anon_sym_AMP] = ACTIONS(311),
  },
  [504] = {
    [sym_expansion] = STATE(127),
    [sym_operator_expansion] = STATE(127),
    [sym_command_substitution] = STATE(127),
    [anon_sym_DQUOTE] = ACTIONS(1611),
    [sym__quoted_chars] = ACTIONS(325),
    [anon_sym_DOLLAR] = ACTIONS(151),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(153),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(155),
    [sym_comment] = ACTIONS(145),
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
    [sym_file_descriptor] = ACTIONS(1067),
    [anon_sym_RPAREN] = ACTIONS(585),
    [anon_sym_SEMI_SEMI] = ACTIONS(585),
    [anon_sym_PIPE] = ACTIONS(585),
    [anon_sym_PIPE_AMP] = ACTIONS(585),
    [anon_sym_AMP_AMP] = ACTIONS(585),
    [anon_sym_PIPE_PIPE] = ACTIONS(585),
    [anon_sym_DQUOTE] = ACTIONS(1438),
    [sym_single_quoted_argument] = ACTIONS(1440),
    [anon_sym_DOLLAR] = ACTIONS(1442),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1444),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1446),
    [anon_sym_LT] = ACTIONS(1084),
    [anon_sym_GT] = ACTIONS(1084),
    [anon_sym_GT_GT] = ACTIONS(1084),
    [anon_sym_AMP_GT] = ACTIONS(1084),
    [anon_sym_AMP_GT_GT] = ACTIONS(1084),
    [anon_sym_LT_AMP] = ACTIONS(1084),
    [anon_sym_GT_AMP] = ACTIONS(1084),
    [anon_sym_LT_LT] = ACTIONS(1086),
    [anon_sym_LT_LT_DASH] = ACTIONS(1086),
    [sym_word] = ACTIONS(1448),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(585),
    [anon_sym_LF] = ACTIONS(585),
    [anon_sym_AMP] = ACTIONS(585),
  },
  [506] = {
    [sym_file_redirect] = STATE(460),
    [sym_heredoc_redirect] = STATE(460),
    [sym_file_descriptor] = ACTIONS(1067),
    [anon_sym_RPAREN] = ACTIONS(585),
    [anon_sym_SEMI_SEMI] = ACTIONS(585),
    [anon_sym_PIPE] = ACTIONS(585),
    [anon_sym_PIPE_AMP] = ACTIONS(585),
    [anon_sym_AMP_AMP] = ACTIONS(585),
    [anon_sym_PIPE_PIPE] = ACTIONS(585),
    [anon_sym_LT] = ACTIONS(1084),
    [anon_sym_GT] = ACTIONS(1084),
    [anon_sym_GT_GT] = ACTIONS(1084),
    [anon_sym_AMP_GT] = ACTIONS(1084),
    [anon_sym_AMP_GT_GT] = ACTIONS(1084),
    [anon_sym_LT_AMP] = ACTIONS(1084),
    [anon_sym_GT_AMP] = ACTIONS(1084),
    [anon_sym_LT_LT] = ACTIONS(1086),
    [anon_sym_LT_LT_DASH] = ACTIONS(1086),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(585),
    [anon_sym_LF] = ACTIONS(585),
    [anon_sym_AMP] = ACTIONS(585),
  },
  [507] = {
    [sym_file_descriptor] = ACTIONS(389),
    [anon_sym_RPAREN] = ACTIONS(393),
    [anon_sym_SEMI_SEMI] = ACTIONS(393),
    [anon_sym_PIPE] = ACTIONS(393),
    [anon_sym_PIPE_AMP] = ACTIONS(393),
    [anon_sym_AMP_AMP] = ACTIONS(393),
    [anon_sym_PIPE_PIPE] = ACTIONS(393),
    [anon_sym_LT] = ACTIONS(393),
    [anon_sym_GT] = ACTIONS(393),
    [anon_sym_GT_GT] = ACTIONS(393),
    [anon_sym_AMP_GT] = ACTIONS(393),
    [anon_sym_AMP_GT_GT] = ACTIONS(393),
    [anon_sym_LT_AMP] = ACTIONS(393),
    [anon_sym_GT_AMP] = ACTIONS(393),
    [anon_sym_LT_LT] = ACTIONS(393),
    [anon_sym_LT_LT_DASH] = ACTIONS(393),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(393),
    [anon_sym_LF] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(393),
  },
  [508] = {
    [sym_file_descriptor] = ACTIONS(395),
    [anon_sym_RPAREN] = ACTIONS(399),
    [anon_sym_SEMI_SEMI] = ACTIONS(399),
    [anon_sym_PIPE] = ACTIONS(399),
    [anon_sym_PIPE_AMP] = ACTIONS(399),
    [anon_sym_AMP_AMP] = ACTIONS(399),
    [anon_sym_PIPE_PIPE] = ACTIONS(399),
    [anon_sym_LT] = ACTIONS(399),
    [anon_sym_GT] = ACTIONS(399),
    [anon_sym_GT_GT] = ACTIONS(399),
    [anon_sym_AMP_GT] = ACTIONS(399),
    [anon_sym_AMP_GT_GT] = ACTIONS(399),
    [anon_sym_LT_AMP] = ACTIONS(399),
    [anon_sym_GT_AMP] = ACTIONS(399),
    [anon_sym_LT_LT] = ACTIONS(399),
    [anon_sym_LT_LT_DASH] = ACTIONS(399),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(399),
    [anon_sym_LF] = ACTIONS(399),
    [anon_sym_AMP] = ACTIONS(399),
  },
  [509] = {
    [sym_file_descriptor] = ACTIONS(309),
    [anon_sym_RPAREN] = ACTIONS(311),
    [anon_sym_SEMI_SEMI] = ACTIONS(311),
    [anon_sym_PIPE] = ACTIONS(311),
    [anon_sym_PIPE_AMP] = ACTIONS(311),
    [anon_sym_AMP_AMP] = ACTIONS(311),
    [anon_sym_PIPE_PIPE] = ACTIONS(311),
    [anon_sym_DQUOTE] = ACTIONS(311),
    [sym_single_quoted_argument] = ACTIONS(311),
    [anon_sym_DOLLAR] = ACTIONS(311),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(311),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(311),
    [anon_sym_LT] = ACTIONS(311),
    [anon_sym_GT] = ACTIONS(311),
    [anon_sym_GT_GT] = ACTIONS(311),
    [anon_sym_AMP_GT] = ACTIONS(311),
    [anon_sym_AMP_GT_GT] = ACTIONS(311),
    [anon_sym_LT_AMP] = ACTIONS(311),
    [anon_sym_GT_AMP] = ACTIONS(311),
    [anon_sym_LT_LT] = ACTIONS(311),
    [anon_sym_LT_LT_DASH] = ACTIONS(311),
    [sym_word] = ACTIONS(311),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(311),
    [anon_sym_LF] = ACTIONS(311),
    [anon_sym_AMP] = ACTIONS(311),
  },
  [510] = {
    [sym_expansion] = STATE(127),
    [sym_operator_expansion] = STATE(127),
    [sym_command_substitution] = STATE(127),
    [anon_sym_DQUOTE] = ACTIONS(1613),
    [sym__quoted_chars] = ACTIONS(325),
    [anon_sym_DOLLAR] = ACTIONS(151),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(153),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(155),
    [sym_comment] = ACTIONS(145),
  },
  [511] = {
    [sym_file_descriptor] = ACTIONS(459),
    [anon_sym_RPAREN] = ACTIONS(417),
    [anon_sym_SEMI_SEMI] = ACTIONS(417),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_PIPE_AMP] = ACTIONS(417),
    [anon_sym_AMP_AMP] = ACTIONS(417),
    [anon_sym_PIPE_PIPE] = ACTIONS(417),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [sym_single_quoted_argument] = ACTIONS(417),
    [anon_sym_DOLLAR] = ACTIONS(417),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(417),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(417),
    [anon_sym_LT] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(417),
    [anon_sym_GT_GT] = ACTIONS(417),
    [anon_sym_AMP_GT] = ACTIONS(417),
    [anon_sym_AMP_GT_GT] = ACTIONS(417),
    [anon_sym_LT_AMP] = ACTIONS(417),
    [anon_sym_GT_AMP] = ACTIONS(417),
    [anon_sym_LT_LT] = ACTIONS(417),
    [anon_sym_LT_LT_DASH] = ACTIONS(417),
    [sym_word] = ACTIONS(417),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(417),
    [anon_sym_LF] = ACTIONS(417),
    [anon_sym_AMP] = ACTIONS(417),
  },
  [512] = {
    [sym_file_descriptor] = ACTIONS(463),
    [anon_sym_RPAREN] = ACTIONS(419),
    [anon_sym_SEMI_SEMI] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(419),
    [anon_sym_PIPE_AMP] = ACTIONS(419),
    [anon_sym_AMP_AMP] = ACTIONS(419),
    [anon_sym_PIPE_PIPE] = ACTIONS(419),
    [anon_sym_DQUOTE] = ACTIONS(419),
    [sym_single_quoted_argument] = ACTIONS(419),
    [anon_sym_DOLLAR] = ACTIONS(419),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(419),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(419),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_GT_GT] = ACTIONS(419),
    [anon_sym_AMP_GT] = ACTIONS(419),
    [anon_sym_AMP_GT_GT] = ACTIONS(419),
    [anon_sym_LT_AMP] = ACTIONS(419),
    [anon_sym_GT_AMP] = ACTIONS(419),
    [anon_sym_LT_LT] = ACTIONS(419),
    [anon_sym_LT_LT_DASH] = ACTIONS(419),
    [sym_word] = ACTIONS(419),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(419),
    [anon_sym_LF] = ACTIONS(419),
    [anon_sym_AMP] = ACTIONS(419),
  },
  [513] = {
    [anon_sym_RBRACE] = ACTIONS(1615),
    [anon_sym_COLON] = ACTIONS(1617),
    [anon_sym_EQ] = ACTIONS(1619),
    [anon_sym_COLON_QMARK] = ACTIONS(1619),
    [anon_sym_COLON_DASH] = ACTIONS(1619),
    [sym_comment] = ACTIONS(71),
  },
  [514] = {
    [anon_sym_RPAREN] = ACTIONS(1621),
    [sym_comment] = ACTIONS(71),
  },
  [515] = {
    [sym_file_descriptor] = ACTIONS(479),
    [anon_sym_RPAREN] = ACTIONS(481),
    [anon_sym_SEMI_SEMI] = ACTIONS(481),
    [anon_sym_PIPE] = ACTIONS(481),
    [anon_sym_PIPE_AMP] = ACTIONS(481),
    [anon_sym_AMP_AMP] = ACTIONS(481),
    [anon_sym_PIPE_PIPE] = ACTIONS(481),
    [anon_sym_DQUOTE] = ACTIONS(481),
    [sym_single_quoted_argument] = ACTIONS(481),
    [anon_sym_DOLLAR] = ACTIONS(481),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(481),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(481),
    [anon_sym_LT] = ACTIONS(481),
    [anon_sym_GT] = ACTIONS(481),
    [anon_sym_GT_GT] = ACTIONS(481),
    [anon_sym_AMP_GT] = ACTIONS(481),
    [anon_sym_AMP_GT_GT] = ACTIONS(481),
    [anon_sym_LT_AMP] = ACTIONS(481),
    [anon_sym_GT_AMP] = ACTIONS(481),
    [anon_sym_LT_LT] = ACTIONS(481),
    [anon_sym_LT_LT_DASH] = ACTIONS(481),
    [sym_word] = ACTIONS(481),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(481),
    [anon_sym_LF] = ACTIONS(481),
    [anon_sym_AMP] = ACTIONS(481),
  },
  [516] = {
    [sym_file_descriptor] = ACTIONS(485),
    [anon_sym_RPAREN] = ACTIONS(487),
    [anon_sym_SEMI_SEMI] = ACTIONS(487),
    [anon_sym_PIPE] = ACTIONS(487),
    [anon_sym_PIPE_AMP] = ACTIONS(487),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [anon_sym_PIPE_PIPE] = ACTIONS(487),
    [anon_sym_DQUOTE] = ACTIONS(487),
    [sym_single_quoted_argument] = ACTIONS(487),
    [anon_sym_DOLLAR] = ACTIONS(487),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(487),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(487),
    [anon_sym_LT] = ACTIONS(487),
    [anon_sym_GT] = ACTIONS(487),
    [anon_sym_GT_GT] = ACTIONS(487),
    [anon_sym_AMP_GT] = ACTIONS(487),
    [anon_sym_AMP_GT_GT] = ACTIONS(487),
    [anon_sym_LT_AMP] = ACTIONS(487),
    [anon_sym_GT_AMP] = ACTIONS(487),
    [anon_sym_LT_LT] = ACTIONS(487),
    [anon_sym_LT_LT_DASH] = ACTIONS(487),
    [sym_word] = ACTIONS(487),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_LF] = ACTIONS(487),
    [anon_sym_AMP] = ACTIONS(487),
  },
  [517] = {
    [sym_file_redirect] = STATE(460),
    [sym_heredoc_redirect] = STATE(460),
    [sym_file_descriptor] = ACTIONS(1067),
    [anon_sym_RPAREN] = ACTIONS(1623),
    [anon_sym_SEMI_SEMI] = ACTIONS(1623),
    [anon_sym_PIPE] = ACTIONS(1623),
    [anon_sym_PIPE_AMP] = ACTIONS(1623),
    [anon_sym_AMP_AMP] = ACTIONS(1623),
    [anon_sym_PIPE_PIPE] = ACTIONS(1623),
    [anon_sym_LT] = ACTIONS(1084),
    [anon_sym_GT] = ACTIONS(1084),
    [anon_sym_GT_GT] = ACTIONS(1084),
    [anon_sym_AMP_GT] = ACTIONS(1084),
    [anon_sym_AMP_GT_GT] = ACTIONS(1084),
    [anon_sym_LT_AMP] = ACTIONS(1084),
    [anon_sym_GT_AMP] = ACTIONS(1084),
    [anon_sym_LT_LT] = ACTIONS(1086),
    [anon_sym_LT_LT_DASH] = ACTIONS(1086),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1623),
    [anon_sym_LF] = ACTIONS(1623),
    [anon_sym_AMP] = ACTIONS(1623),
  },
  [518] = {
    [sym_file_descriptor] = ACTIONS(309),
    [anon_sym_RPAREN] = ACTIONS(311),
    [anon_sym_SEMI_SEMI] = ACTIONS(311),
    [anon_sym_PIPE] = ACTIONS(311),
    [anon_sym_PIPE_AMP] = ACTIONS(311),
    [anon_sym_AMP_AMP] = ACTIONS(311),
    [anon_sym_PIPE_PIPE] = ACTIONS(311),
    [anon_sym_LT] = ACTIONS(311),
    [anon_sym_GT] = ACTIONS(311),
    [anon_sym_GT_GT] = ACTIONS(311),
    [anon_sym_AMP_GT] = ACTIONS(311),
    [anon_sym_AMP_GT_GT] = ACTIONS(311),
    [anon_sym_LT_AMP] = ACTIONS(311),
    [anon_sym_GT_AMP] = ACTIONS(311),
    [anon_sym_LT_LT] = ACTIONS(311),
    [anon_sym_LT_LT_DASH] = ACTIONS(311),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(311),
    [anon_sym_LF] = ACTIONS(311),
    [anon_sym_AMP] = ACTIONS(311),
  },
  [519] = {
    [sym_expansion] = STATE(127),
    [sym_operator_expansion] = STATE(127),
    [sym_command_substitution] = STATE(127),
    [anon_sym_DQUOTE] = ACTIONS(1626),
    [sym__quoted_chars] = ACTIONS(325),
    [anon_sym_DOLLAR] = ACTIONS(151),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(153),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(155),
    [sym_comment] = ACTIONS(145),
  },
  [520] = {
    [sym_file_descriptor] = ACTIONS(459),
    [anon_sym_RPAREN] = ACTIONS(417),
    [anon_sym_SEMI_SEMI] = ACTIONS(417),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_PIPE_AMP] = ACTIONS(417),
    [anon_sym_AMP_AMP] = ACTIONS(417),
    [anon_sym_PIPE_PIPE] = ACTIONS(417),
    [anon_sym_LT] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(417),
    [anon_sym_GT_GT] = ACTIONS(417),
    [anon_sym_AMP_GT] = ACTIONS(417),
    [anon_sym_AMP_GT_GT] = ACTIONS(417),
    [anon_sym_LT_AMP] = ACTIONS(417),
    [anon_sym_GT_AMP] = ACTIONS(417),
    [anon_sym_LT_LT] = ACTIONS(417),
    [anon_sym_LT_LT_DASH] = ACTIONS(417),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(417),
    [anon_sym_LF] = ACTIONS(417),
    [anon_sym_AMP] = ACTIONS(417),
  },
  [521] = {
    [sym_file_descriptor] = ACTIONS(463),
    [anon_sym_RPAREN] = ACTIONS(419),
    [anon_sym_SEMI_SEMI] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(419),
    [anon_sym_PIPE_AMP] = ACTIONS(419),
    [anon_sym_AMP_AMP] = ACTIONS(419),
    [anon_sym_PIPE_PIPE] = ACTIONS(419),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_GT_GT] = ACTIONS(419),
    [anon_sym_AMP_GT] = ACTIONS(419),
    [anon_sym_AMP_GT_GT] = ACTIONS(419),
    [anon_sym_LT_AMP] = ACTIONS(419),
    [anon_sym_GT_AMP] = ACTIONS(419),
    [anon_sym_LT_LT] = ACTIONS(419),
    [anon_sym_LT_LT_DASH] = ACTIONS(419),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(419),
    [anon_sym_LF] = ACTIONS(419),
    [anon_sym_AMP] = ACTIONS(419),
  },
  [522] = {
    [anon_sym_RBRACE] = ACTIONS(1628),
    [anon_sym_COLON] = ACTIONS(1630),
    [anon_sym_EQ] = ACTIONS(1632),
    [anon_sym_COLON_QMARK] = ACTIONS(1632),
    [anon_sym_COLON_DASH] = ACTIONS(1632),
    [sym_comment] = ACTIONS(71),
  },
  [523] = {
    [anon_sym_RPAREN] = ACTIONS(1634),
    [sym_comment] = ACTIONS(71),
  },
  [524] = {
    [sym_file_descriptor] = ACTIONS(543),
    [anon_sym_SEMI_SEMI] = ACTIONS(545),
    [anon_sym_RBRACE] = ACTIONS(545),
    [anon_sym_COLON] = ACTIONS(545),
    [anon_sym_PIPE] = ACTIONS(545),
    [anon_sym_PIPE_AMP] = ACTIONS(545),
    [anon_sym_AMP_AMP] = ACTIONS(545),
    [anon_sym_PIPE_PIPE] = ACTIONS(545),
    [anon_sym_DQUOTE] = ACTIONS(545),
    [sym_single_quoted_argument] = ACTIONS(545),
    [anon_sym_LT] = ACTIONS(545),
    [anon_sym_GT] = ACTIONS(545),
    [anon_sym_GT_GT] = ACTIONS(545),
    [anon_sym_AMP_GT] = ACTIONS(545),
    [anon_sym_AMP_GT_GT] = ACTIONS(545),
    [anon_sym_LT_AMP] = ACTIONS(545),
    [anon_sym_GT_AMP] = ACTIONS(545),
    [sym_leading_word] = ACTIONS(545),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(545),
    [anon_sym_LF] = ACTIONS(545),
    [anon_sym_AMP] = ACTIONS(545),
  },
  [525] = {
    [sym_file_descriptor] = ACTIONS(675),
    [anon_sym_SEMI_SEMI] = ACTIONS(617),
    [anon_sym_RBRACE] = ACTIONS(617),
    [anon_sym_COLON] = ACTIONS(617),
    [anon_sym_PIPE] = ACTIONS(617),
    [anon_sym_PIPE_AMP] = ACTIONS(617),
    [anon_sym_AMP_AMP] = ACTIONS(617),
    [anon_sym_PIPE_PIPE] = ACTIONS(617),
    [anon_sym_DQUOTE] = ACTIONS(617),
    [sym_single_quoted_argument] = ACTIONS(617),
    [anon_sym_LT] = ACTIONS(617),
    [anon_sym_GT] = ACTIONS(617),
    [anon_sym_GT_GT] = ACTIONS(617),
    [anon_sym_AMP_GT] = ACTIONS(617),
    [anon_sym_AMP_GT_GT] = ACTIONS(617),
    [anon_sym_LT_AMP] = ACTIONS(617),
    [anon_sym_GT_AMP] = ACTIONS(617),
    [sym_leading_word] = ACTIONS(617),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(617),
    [anon_sym_LF] = ACTIONS(617),
    [anon_sym_AMP] = ACTIONS(617),
  },
  [526] = {
    [sym_quoted_argument] = STATE(551),
    [sym_expansion] = STATE(551),
    [sym_operator_expansion] = STATE(551),
    [sym_command_substitution] = STATE(551),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [sym_single_quoted_argument] = ACTIONS(1636),
    [anon_sym_DOLLAR] = ACTIONS(127),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(129),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(131),
    [sym_word] = ACTIONS(1638),
    [sym_comment] = ACTIONS(71),
  },
  [527] = {
    [sym_file_descriptor] = ACTIONS(683),
    [anon_sym_SEMI_SEMI] = ACTIONS(663),
    [anon_sym_RBRACE] = ACTIONS(663),
    [anon_sym_COLON] = ACTIONS(663),
    [anon_sym_PIPE] = ACTIONS(663),
    [anon_sym_PIPE_AMP] = ACTIONS(663),
    [anon_sym_AMP_AMP] = ACTIONS(663),
    [anon_sym_PIPE_PIPE] = ACTIONS(663),
    [anon_sym_DQUOTE] = ACTIONS(663),
    [sym_single_quoted_argument] = ACTIONS(663),
    [anon_sym_LT] = ACTIONS(663),
    [anon_sym_GT] = ACTIONS(663),
    [anon_sym_GT_GT] = ACTIONS(663),
    [anon_sym_AMP_GT] = ACTIONS(663),
    [anon_sym_AMP_GT_GT] = ACTIONS(663),
    [anon_sym_LT_AMP] = ACTIONS(663),
    [anon_sym_GT_AMP] = ACTIONS(663),
    [sym_leading_word] = ACTIONS(663),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(663),
    [anon_sym_LF] = ACTIONS(663),
    [anon_sym_AMP] = ACTIONS(663),
  },
  [528] = {
    [sym_file_descriptor] = ACTIONS(543),
    [anon_sym_RPAREN] = ACTIONS(545),
    [anon_sym_SEMI_SEMI] = ACTIONS(545),
    [anon_sym_COLON] = ACTIONS(545),
    [anon_sym_PIPE] = ACTIONS(545),
    [anon_sym_PIPE_AMP] = ACTIONS(545),
    [anon_sym_AMP_AMP] = ACTIONS(545),
    [anon_sym_PIPE_PIPE] = ACTIONS(545),
    [anon_sym_DQUOTE] = ACTIONS(545),
    [sym_single_quoted_argument] = ACTIONS(545),
    [anon_sym_LT] = ACTIONS(545),
    [anon_sym_GT] = ACTIONS(545),
    [anon_sym_GT_GT] = ACTIONS(545),
    [anon_sym_AMP_GT] = ACTIONS(545),
    [anon_sym_AMP_GT_GT] = ACTIONS(545),
    [anon_sym_LT_AMP] = ACTIONS(545),
    [anon_sym_GT_AMP] = ACTIONS(545),
    [anon_sym_LT_LT] = ACTIONS(545),
    [anon_sym_LT_LT_DASH] = ACTIONS(545),
    [sym_leading_word] = ACTIONS(545),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(545),
    [anon_sym_LF] = ACTIONS(545),
    [anon_sym_AMP] = ACTIONS(545),
  },
  [529] = {
    [sym_file_descriptor] = ACTIONS(675),
    [anon_sym_RPAREN] = ACTIONS(617),
    [anon_sym_SEMI_SEMI] = ACTIONS(617),
    [anon_sym_COLON] = ACTIONS(617),
    [anon_sym_PIPE] = ACTIONS(617),
    [anon_sym_PIPE_AMP] = ACTIONS(617),
    [anon_sym_AMP_AMP] = ACTIONS(617),
    [anon_sym_PIPE_PIPE] = ACTIONS(617),
    [anon_sym_DQUOTE] = ACTIONS(617),
    [sym_single_quoted_argument] = ACTIONS(617),
    [anon_sym_LT] = ACTIONS(617),
    [anon_sym_GT] = ACTIONS(617),
    [anon_sym_GT_GT] = ACTIONS(617),
    [anon_sym_AMP_GT] = ACTIONS(617),
    [anon_sym_AMP_GT_GT] = ACTIONS(617),
    [anon_sym_LT_AMP] = ACTIONS(617),
    [anon_sym_GT_AMP] = ACTIONS(617),
    [anon_sym_LT_LT] = ACTIONS(617),
    [anon_sym_LT_LT_DASH] = ACTIONS(617),
    [sym_leading_word] = ACTIONS(617),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(617),
    [anon_sym_LF] = ACTIONS(617),
    [anon_sym_AMP] = ACTIONS(617),
  },
  [530] = {
    [sym_quoted_argument] = STATE(553),
    [sym_expansion] = STATE(553),
    [sym_operator_expansion] = STATE(553),
    [sym_command_substitution] = STATE(553),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [sym_single_quoted_argument] = ACTIONS(1640),
    [anon_sym_DOLLAR] = ACTIONS(127),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(129),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(131),
    [sym_word] = ACTIONS(1642),
    [sym_comment] = ACTIONS(71),
  },
  [531] = {
    [sym_file_descriptor] = ACTIONS(683),
    [anon_sym_RPAREN] = ACTIONS(663),
    [anon_sym_SEMI_SEMI] = ACTIONS(663),
    [anon_sym_COLON] = ACTIONS(663),
    [anon_sym_PIPE] = ACTIONS(663),
    [anon_sym_PIPE_AMP] = ACTIONS(663),
    [anon_sym_AMP_AMP] = ACTIONS(663),
    [anon_sym_PIPE_PIPE] = ACTIONS(663),
    [anon_sym_DQUOTE] = ACTIONS(663),
    [sym_single_quoted_argument] = ACTIONS(663),
    [anon_sym_LT] = ACTIONS(663),
    [anon_sym_GT] = ACTIONS(663),
    [anon_sym_GT_GT] = ACTIONS(663),
    [anon_sym_AMP_GT] = ACTIONS(663),
    [anon_sym_AMP_GT_GT] = ACTIONS(663),
    [anon_sym_LT_AMP] = ACTIONS(663),
    [anon_sym_GT_AMP] = ACTIONS(663),
    [anon_sym_LT_LT] = ACTIONS(663),
    [anon_sym_LT_LT_DASH] = ACTIONS(663),
    [sym_leading_word] = ACTIONS(663),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(663),
    [anon_sym_LF] = ACTIONS(663),
    [anon_sym_AMP] = ACTIONS(663),
  },
  [532] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1644),
    [anon_sym_PIPE] = ACTIONS(1644),
    [anon_sym_PIPE_AMP] = ACTIONS(1644),
    [anon_sym_AMP_AMP] = ACTIONS(1644),
    [anon_sym_PIPE_PIPE] = ACTIONS(1644),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1644),
    [anon_sym_LF] = ACTIONS(1644),
    [anon_sym_AMP] = ACTIONS(1644),
  },
  [533] = {
    [sym_case_item] = STATE(301),
    [sym_quoted_argument] = STATE(236),
    [sym_expansion] = STATE(236),
    [sym_operator_expansion] = STATE(236),
    [sym_command_substitution] = STATE(236),
    [anon_sym_esac] = ACTIONS(1647),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [sym_single_quoted_argument] = ACTIONS(611),
    [anon_sym_DOLLAR] = ACTIONS(127),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(129),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(131),
    [sym_word] = ACTIONS(613),
    [sym_comment] = ACTIONS(71),
  },
  [534] = {
    [sym_file_descriptor] = ACTIONS(543),
    [anon_sym_RPAREN] = ACTIONS(545),
    [anon_sym_SEMI_SEMI] = ACTIONS(545),
    [anon_sym_RBRACK] = ACTIONS(545),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(545),
    [anon_sym_PIPE] = ACTIONS(545),
    [anon_sym_PIPE_AMP] = ACTIONS(545),
    [anon_sym_AMP_AMP] = ACTIONS(545),
    [anon_sym_PIPE_PIPE] = ACTIONS(545),
    [anon_sym_DQUOTE] = ACTIONS(545),
    [sym_single_quoted_argument] = ACTIONS(545),
    [anon_sym_DOLLAR] = ACTIONS(545),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(545),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(545),
    [anon_sym_LT] = ACTIONS(545),
    [anon_sym_GT] = ACTIONS(545),
    [anon_sym_GT_GT] = ACTIONS(545),
    [anon_sym_AMP_GT] = ACTIONS(545),
    [anon_sym_AMP_GT_GT] = ACTIONS(545),
    [anon_sym_LT_AMP] = ACTIONS(545),
    [anon_sym_GT_AMP] = ACTIONS(545),
    [anon_sym_LT_LT] = ACTIONS(545),
    [anon_sym_LT_LT_DASH] = ACTIONS(545),
    [sym_word] = ACTIONS(545),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(545),
    [anon_sym_LF] = ACTIONS(545),
    [anon_sym_AMP] = ACTIONS(545),
  },
  [535] = {
    [sym_file_descriptor] = ACTIONS(675),
    [anon_sym_RPAREN] = ACTIONS(617),
    [anon_sym_SEMI_SEMI] = ACTIONS(617),
    [anon_sym_RBRACK] = ACTIONS(617),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(617),
    [anon_sym_PIPE] = ACTIONS(617),
    [anon_sym_PIPE_AMP] = ACTIONS(617),
    [anon_sym_AMP_AMP] = ACTIONS(617),
    [anon_sym_PIPE_PIPE] = ACTIONS(617),
    [anon_sym_DQUOTE] = ACTIONS(617),
    [sym_single_quoted_argument] = ACTIONS(617),
    [anon_sym_DOLLAR] = ACTIONS(617),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(617),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(617),
    [anon_sym_LT] = ACTIONS(617),
    [anon_sym_GT] = ACTIONS(617),
    [anon_sym_GT_GT] = ACTIONS(617),
    [anon_sym_AMP_GT] = ACTIONS(617),
    [anon_sym_AMP_GT_GT] = ACTIONS(617),
    [anon_sym_LT_AMP] = ACTIONS(617),
    [anon_sym_GT_AMP] = ACTIONS(617),
    [anon_sym_LT_LT] = ACTIONS(617),
    [anon_sym_LT_LT_DASH] = ACTIONS(617),
    [sym_word] = ACTIONS(617),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(617),
    [anon_sym_LF] = ACTIONS(617),
    [anon_sym_AMP] = ACTIONS(617),
  },
  [536] = {
    [sym_quoted_argument] = STATE(556),
    [sym_expansion] = STATE(556),
    [sym_operator_expansion] = STATE(556),
    [sym_command_substitution] = STATE(556),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [sym_single_quoted_argument] = ACTIONS(1649),
    [anon_sym_DOLLAR] = ACTIONS(127),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(129),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(131),
    [sym_word] = ACTIONS(1651),
    [sym_comment] = ACTIONS(71),
  },
  [537] = {
    [sym_file_descriptor] = ACTIONS(683),
    [anon_sym_RPAREN] = ACTIONS(663),
    [anon_sym_SEMI_SEMI] = ACTIONS(663),
    [anon_sym_RBRACK] = ACTIONS(663),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(663),
    [anon_sym_PIPE] = ACTIONS(663),
    [anon_sym_PIPE_AMP] = ACTIONS(663),
    [anon_sym_AMP_AMP] = ACTIONS(663),
    [anon_sym_PIPE_PIPE] = ACTIONS(663),
    [anon_sym_DQUOTE] = ACTIONS(663),
    [sym_single_quoted_argument] = ACTIONS(663),
    [anon_sym_DOLLAR] = ACTIONS(663),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(663),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(663),
    [anon_sym_LT] = ACTIONS(663),
    [anon_sym_GT] = ACTIONS(663),
    [anon_sym_GT_GT] = ACTIONS(663),
    [anon_sym_AMP_GT] = ACTIONS(663),
    [anon_sym_AMP_GT_GT] = ACTIONS(663),
    [anon_sym_LT_AMP] = ACTIONS(663),
    [anon_sym_GT_AMP] = ACTIONS(663),
    [anon_sym_LT_LT] = ACTIONS(663),
    [anon_sym_LT_LT_DASH] = ACTIONS(663),
    [sym_word] = ACTIONS(663),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(663),
    [anon_sym_LF] = ACTIONS(663),
    [anon_sym_AMP] = ACTIONS(663),
  },
  [538] = {
    [sym_quoted_argument] = STATE(515),
    [sym_expansion] = STATE(515),
    [sym_operator_expansion] = STATE(515),
    [sym_command_substitution] = STATE(515),
    [sym_file_redirect] = STATE(422),
    [sym_heredoc_redirect] = STATE(422),
    [aux_sym_command_repeat2] = STATE(558),
    [sym_file_descriptor] = ACTIONS(1067),
    [anon_sym_RPAREN] = ACTIONS(697),
    [anon_sym_SEMI_SEMI] = ACTIONS(697),
    [anon_sym_PIPE] = ACTIONS(697),
    [anon_sym_PIPE_AMP] = ACTIONS(697),
    [anon_sym_AMP_AMP] = ACTIONS(697),
    [anon_sym_PIPE_PIPE] = ACTIONS(697),
    [anon_sym_DQUOTE] = ACTIONS(1438),
    [sym_single_quoted_argument] = ACTIONS(1564),
    [anon_sym_DOLLAR] = ACTIONS(1442),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1444),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1446),
    [anon_sym_LT] = ACTIONS(1084),
    [anon_sym_GT] = ACTIONS(1084),
    [anon_sym_GT_GT] = ACTIONS(1084),
    [anon_sym_AMP_GT] = ACTIONS(1084),
    [anon_sym_AMP_GT_GT] = ACTIONS(1084),
    [anon_sym_LT_AMP] = ACTIONS(1084),
    [anon_sym_GT_AMP] = ACTIONS(1084),
    [anon_sym_LT_LT] = ACTIONS(1086),
    [anon_sym_LT_LT_DASH] = ACTIONS(1086),
    [sym_word] = ACTIONS(1566),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(697),
    [anon_sym_LF] = ACTIONS(697),
    [anon_sym_AMP] = ACTIONS(697),
  },
  [539] = {
    [sym_file_redirect] = STATE(460),
    [sym_heredoc_redirect] = STATE(460),
    [sym_file_descriptor] = ACTIONS(1067),
    [anon_sym_RPAREN] = ACTIONS(697),
    [anon_sym_SEMI_SEMI] = ACTIONS(697),
    [anon_sym_PIPE] = ACTIONS(697),
    [anon_sym_PIPE_AMP] = ACTIONS(697),
    [anon_sym_AMP_AMP] = ACTIONS(697),
    [anon_sym_PIPE_PIPE] = ACTIONS(697),
    [anon_sym_LT] = ACTIONS(1084),
    [anon_sym_GT] = ACTIONS(1084),
    [anon_sym_GT_GT] = ACTIONS(1084),
    [anon_sym_AMP_GT] = ACTIONS(1084),
    [anon_sym_AMP_GT_GT] = ACTIONS(1084),
    [anon_sym_LT_AMP] = ACTIONS(1084),
    [anon_sym_GT_AMP] = ACTIONS(1084),
    [anon_sym_LT_LT] = ACTIONS(1086),
    [anon_sym_LT_LT_DASH] = ACTIONS(1086),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(697),
    [anon_sym_LF] = ACTIONS(697),
    [anon_sym_AMP] = ACTIONS(697),
  },
  [540] = {
    [sym_file_descriptor] = ACTIONS(543),
    [anon_sym_RPAREN] = ACTIONS(545),
    [anon_sym_SEMI_SEMI] = ACTIONS(545),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(545),
    [anon_sym_PIPE] = ACTIONS(545),
    [anon_sym_PIPE_AMP] = ACTIONS(545),
    [anon_sym_AMP_AMP] = ACTIONS(545),
    [anon_sym_PIPE_PIPE] = ACTIONS(545),
    [anon_sym_LT] = ACTIONS(545),
    [anon_sym_GT] = ACTIONS(545),
    [anon_sym_GT_GT] = ACTIONS(545),
    [anon_sym_AMP_GT] = ACTIONS(545),
    [anon_sym_AMP_GT_GT] = ACTIONS(545),
    [anon_sym_LT_AMP] = ACTIONS(545),
    [anon_sym_GT_AMP] = ACTIONS(545),
    [anon_sym_LT_LT] = ACTIONS(545),
    [anon_sym_LT_LT_DASH] = ACTIONS(545),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(545),
    [anon_sym_LF] = ACTIONS(545),
    [anon_sym_AMP] = ACTIONS(545),
  },
  [541] = {
    [sym_quoted_argument] = STATE(515),
    [sym_expansion] = STATE(515),
    [sym_operator_expansion] = STATE(515),
    [sym_command_substitution] = STATE(515),
    [sym_file_redirect] = STATE(422),
    [sym_heredoc_redirect] = STATE(422),
    [aux_sym_command_repeat2] = STATE(559),
    [sym_file_descriptor] = ACTIONS(1067),
    [anon_sym_RPAREN] = ACTIONS(751),
    [anon_sym_SEMI_SEMI] = ACTIONS(751),
    [anon_sym_PIPE] = ACTIONS(751),
    [anon_sym_PIPE_AMP] = ACTIONS(751),
    [anon_sym_AMP_AMP] = ACTIONS(751),
    [anon_sym_PIPE_PIPE] = ACTIONS(751),
    [anon_sym_DQUOTE] = ACTIONS(1438),
    [sym_single_quoted_argument] = ACTIONS(1564),
    [anon_sym_DOLLAR] = ACTIONS(1442),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1444),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1446),
    [anon_sym_LT] = ACTIONS(1084),
    [anon_sym_GT] = ACTIONS(1084),
    [anon_sym_GT_GT] = ACTIONS(1084),
    [anon_sym_AMP_GT] = ACTIONS(1084),
    [anon_sym_AMP_GT_GT] = ACTIONS(1084),
    [anon_sym_LT_AMP] = ACTIONS(1084),
    [anon_sym_GT_AMP] = ACTIONS(1084),
    [anon_sym_LT_LT] = ACTIONS(1086),
    [anon_sym_LT_LT_DASH] = ACTIONS(1086),
    [sym_word] = ACTIONS(1566),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(751),
    [anon_sym_LF] = ACTIONS(751),
    [anon_sym_AMP] = ACTIONS(751),
  },
  [542] = {
    [sym_file_redirect] = STATE(460),
    [sym_heredoc_redirect] = STATE(460),
    [sym_file_descriptor] = ACTIONS(1067),
    [anon_sym_RPAREN] = ACTIONS(751),
    [anon_sym_SEMI_SEMI] = ACTIONS(751),
    [anon_sym_PIPE] = ACTIONS(751),
    [anon_sym_PIPE_AMP] = ACTIONS(751),
    [anon_sym_AMP_AMP] = ACTIONS(751),
    [anon_sym_PIPE_PIPE] = ACTIONS(751),
    [anon_sym_LT] = ACTIONS(1084),
    [anon_sym_GT] = ACTIONS(1084),
    [anon_sym_GT_GT] = ACTIONS(1084),
    [anon_sym_AMP_GT] = ACTIONS(1084),
    [anon_sym_AMP_GT_GT] = ACTIONS(1084),
    [anon_sym_LT_AMP] = ACTIONS(1084),
    [anon_sym_GT_AMP] = ACTIONS(1084),
    [anon_sym_LT_LT] = ACTIONS(1086),
    [anon_sym_LT_LT_DASH] = ACTIONS(1086),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(751),
    [anon_sym_LF] = ACTIONS(751),
    [anon_sym_AMP] = ACTIONS(751),
  },
  [543] = {
    [sym_file_descriptor] = ACTIONS(543),
    [anon_sym_RPAREN] = ACTIONS(545),
    [anon_sym_SEMI_SEMI] = ACTIONS(545),
    [anon_sym_PIPE] = ACTIONS(545),
    [anon_sym_PIPE_AMP] = ACTIONS(545),
    [anon_sym_AMP_AMP] = ACTIONS(545),
    [anon_sym_PIPE_PIPE] = ACTIONS(545),
    [anon_sym_DQUOTE] = ACTIONS(545),
    [sym_single_quoted_argument] = ACTIONS(545),
    [anon_sym_DOLLAR] = ACTIONS(545),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(545),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(545),
    [anon_sym_LT] = ACTIONS(545),
    [anon_sym_GT] = ACTIONS(545),
    [anon_sym_GT_GT] = ACTIONS(545),
    [anon_sym_AMP_GT] = ACTIONS(545),
    [anon_sym_AMP_GT_GT] = ACTIONS(545),
    [anon_sym_LT_AMP] = ACTIONS(545),
    [anon_sym_GT_AMP] = ACTIONS(545),
    [anon_sym_LT_LT] = ACTIONS(545),
    [anon_sym_LT_LT_DASH] = ACTIONS(545),
    [sym_word] = ACTIONS(545),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(545),
    [anon_sym_LF] = ACTIONS(545),
    [anon_sym_AMP] = ACTIONS(545),
  },
  [544] = {
    [sym_file_descriptor] = ACTIONS(675),
    [anon_sym_RPAREN] = ACTIONS(617),
    [anon_sym_SEMI_SEMI] = ACTIONS(617),
    [anon_sym_PIPE] = ACTIONS(617),
    [anon_sym_PIPE_AMP] = ACTIONS(617),
    [anon_sym_AMP_AMP] = ACTIONS(617),
    [anon_sym_PIPE_PIPE] = ACTIONS(617),
    [anon_sym_DQUOTE] = ACTIONS(617),
    [sym_single_quoted_argument] = ACTIONS(617),
    [anon_sym_DOLLAR] = ACTIONS(617),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(617),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(617),
    [anon_sym_LT] = ACTIONS(617),
    [anon_sym_GT] = ACTIONS(617),
    [anon_sym_GT_GT] = ACTIONS(617),
    [anon_sym_AMP_GT] = ACTIONS(617),
    [anon_sym_AMP_GT_GT] = ACTIONS(617),
    [anon_sym_LT_AMP] = ACTIONS(617),
    [anon_sym_GT_AMP] = ACTIONS(617),
    [anon_sym_LT_LT] = ACTIONS(617),
    [anon_sym_LT_LT_DASH] = ACTIONS(617),
    [sym_word] = ACTIONS(617),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(617),
    [anon_sym_LF] = ACTIONS(617),
    [anon_sym_AMP] = ACTIONS(617),
  },
  [545] = {
    [sym_quoted_argument] = STATE(560),
    [sym_expansion] = STATE(560),
    [sym_operator_expansion] = STATE(560),
    [sym_command_substitution] = STATE(560),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [sym_single_quoted_argument] = ACTIONS(1653),
    [anon_sym_DOLLAR] = ACTIONS(127),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(129),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(131),
    [sym_word] = ACTIONS(1655),
    [sym_comment] = ACTIONS(71),
  },
  [546] = {
    [sym_file_descriptor] = ACTIONS(683),
    [anon_sym_RPAREN] = ACTIONS(663),
    [anon_sym_SEMI_SEMI] = ACTIONS(663),
    [anon_sym_PIPE] = ACTIONS(663),
    [anon_sym_PIPE_AMP] = ACTIONS(663),
    [anon_sym_AMP_AMP] = ACTIONS(663),
    [anon_sym_PIPE_PIPE] = ACTIONS(663),
    [anon_sym_DQUOTE] = ACTIONS(663),
    [sym_single_quoted_argument] = ACTIONS(663),
    [anon_sym_DOLLAR] = ACTIONS(663),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(663),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(663),
    [anon_sym_LT] = ACTIONS(663),
    [anon_sym_GT] = ACTIONS(663),
    [anon_sym_GT_GT] = ACTIONS(663),
    [anon_sym_AMP_GT] = ACTIONS(663),
    [anon_sym_AMP_GT_GT] = ACTIONS(663),
    [anon_sym_LT_AMP] = ACTIONS(663),
    [anon_sym_GT_AMP] = ACTIONS(663),
    [anon_sym_LT_LT] = ACTIONS(663),
    [anon_sym_LT_LT_DASH] = ACTIONS(663),
    [sym_word] = ACTIONS(663),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(663),
    [anon_sym_LF] = ACTIONS(663),
    [anon_sym_AMP] = ACTIONS(663),
  },
  [547] = {
    [sym_file_descriptor] = ACTIONS(543),
    [anon_sym_RPAREN] = ACTIONS(545),
    [anon_sym_SEMI_SEMI] = ACTIONS(545),
    [anon_sym_PIPE] = ACTIONS(545),
    [anon_sym_PIPE_AMP] = ACTIONS(545),
    [anon_sym_AMP_AMP] = ACTIONS(545),
    [anon_sym_PIPE_PIPE] = ACTIONS(545),
    [anon_sym_LT] = ACTIONS(545),
    [anon_sym_GT] = ACTIONS(545),
    [anon_sym_GT_GT] = ACTIONS(545),
    [anon_sym_AMP_GT] = ACTIONS(545),
    [anon_sym_AMP_GT_GT] = ACTIONS(545),
    [anon_sym_LT_AMP] = ACTIONS(545),
    [anon_sym_GT_AMP] = ACTIONS(545),
    [anon_sym_LT_LT] = ACTIONS(545),
    [anon_sym_LT_LT_DASH] = ACTIONS(545),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(545),
    [anon_sym_LF] = ACTIONS(545),
    [anon_sym_AMP] = ACTIONS(545),
  },
  [548] = {
    [sym_file_descriptor] = ACTIONS(675),
    [anon_sym_RPAREN] = ACTIONS(617),
    [anon_sym_SEMI_SEMI] = ACTIONS(617),
    [anon_sym_PIPE] = ACTIONS(617),
    [anon_sym_PIPE_AMP] = ACTIONS(617),
    [anon_sym_AMP_AMP] = ACTIONS(617),
    [anon_sym_PIPE_PIPE] = ACTIONS(617),
    [anon_sym_LT] = ACTIONS(617),
    [anon_sym_GT] = ACTIONS(617),
    [anon_sym_GT_GT] = ACTIONS(617),
    [anon_sym_AMP_GT] = ACTIONS(617),
    [anon_sym_AMP_GT_GT] = ACTIONS(617),
    [anon_sym_LT_AMP] = ACTIONS(617),
    [anon_sym_GT_AMP] = ACTIONS(617),
    [anon_sym_LT_LT] = ACTIONS(617),
    [anon_sym_LT_LT_DASH] = ACTIONS(617),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(617),
    [anon_sym_LF] = ACTIONS(617),
    [anon_sym_AMP] = ACTIONS(617),
  },
  [549] = {
    [sym_quoted_argument] = STATE(562),
    [sym_expansion] = STATE(562),
    [sym_operator_expansion] = STATE(562),
    [sym_command_substitution] = STATE(562),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [sym_single_quoted_argument] = ACTIONS(1657),
    [anon_sym_DOLLAR] = ACTIONS(127),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(129),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(131),
    [sym_word] = ACTIONS(1659),
    [sym_comment] = ACTIONS(71),
  },
  [550] = {
    [sym_file_descriptor] = ACTIONS(683),
    [anon_sym_RPAREN] = ACTIONS(663),
    [anon_sym_SEMI_SEMI] = ACTIONS(663),
    [anon_sym_PIPE] = ACTIONS(663),
    [anon_sym_PIPE_AMP] = ACTIONS(663),
    [anon_sym_AMP_AMP] = ACTIONS(663),
    [anon_sym_PIPE_PIPE] = ACTIONS(663),
    [anon_sym_LT] = ACTIONS(663),
    [anon_sym_GT] = ACTIONS(663),
    [anon_sym_GT_GT] = ACTIONS(663),
    [anon_sym_AMP_GT] = ACTIONS(663),
    [anon_sym_AMP_GT_GT] = ACTIONS(663),
    [anon_sym_LT_AMP] = ACTIONS(663),
    [anon_sym_GT_AMP] = ACTIONS(663),
    [anon_sym_LT_LT] = ACTIONS(663),
    [anon_sym_LT_LT_DASH] = ACTIONS(663),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(663),
    [anon_sym_LF] = ACTIONS(663),
    [anon_sym_AMP] = ACTIONS(663),
  },
  [551] = {
    [anon_sym_RBRACE] = ACTIONS(1661),
    [sym_comment] = ACTIONS(71),
  },
  [552] = {
    [anon_sym_RBRACE] = ACTIONS(1663),
    [sym_comment] = ACTIONS(71),
  },
  [553] = {
    [anon_sym_RBRACE] = ACTIONS(1665),
    [sym_comment] = ACTIONS(71),
  },
  [554] = {
    [anon_sym_RBRACE] = ACTIONS(1667),
    [sym_comment] = ACTIONS(71),
  },
  [555] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1669),
    [anon_sym_PIPE] = ACTIONS(1669),
    [anon_sym_PIPE_AMP] = ACTIONS(1669),
    [anon_sym_AMP_AMP] = ACTIONS(1669),
    [anon_sym_PIPE_PIPE] = ACTIONS(1669),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(1669),
    [anon_sym_LF] = ACTIONS(1669),
    [anon_sym_AMP] = ACTIONS(1669),
  },
  [556] = {
    [anon_sym_RBRACE] = ACTIONS(1672),
    [sym_comment] = ACTIONS(71),
  },
  [557] = {
    [anon_sym_RBRACE] = ACTIONS(1674),
    [sym_comment] = ACTIONS(71),
  },
  [558] = {
    [sym_file_redirect] = STATE(460),
    [sym_heredoc_redirect] = STATE(460),
    [sym_file_descriptor] = ACTIONS(1067),
    [anon_sym_RPAREN] = ACTIONS(865),
    [anon_sym_SEMI_SEMI] = ACTIONS(865),
    [anon_sym_PIPE] = ACTIONS(865),
    [anon_sym_PIPE_AMP] = ACTIONS(865),
    [anon_sym_AMP_AMP] = ACTIONS(865),
    [anon_sym_PIPE_PIPE] = ACTIONS(865),
    [anon_sym_LT] = ACTIONS(1084),
    [anon_sym_GT] = ACTIONS(1084),
    [anon_sym_GT_GT] = ACTIONS(1084),
    [anon_sym_AMP_GT] = ACTIONS(1084),
    [anon_sym_AMP_GT_GT] = ACTIONS(1084),
    [anon_sym_LT_AMP] = ACTIONS(1084),
    [anon_sym_GT_AMP] = ACTIONS(1084),
    [anon_sym_LT_LT] = ACTIONS(1086),
    [anon_sym_LT_LT_DASH] = ACTIONS(1086),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(865),
    [anon_sym_LF] = ACTIONS(865),
    [anon_sym_AMP] = ACTIONS(865),
  },
  [559] = {
    [sym_file_redirect] = STATE(460),
    [sym_heredoc_redirect] = STATE(460),
    [sym_file_descriptor] = ACTIONS(1067),
    [anon_sym_RPAREN] = ACTIONS(867),
    [anon_sym_SEMI_SEMI] = ACTIONS(867),
    [anon_sym_PIPE] = ACTIONS(867),
    [anon_sym_PIPE_AMP] = ACTIONS(867),
    [anon_sym_AMP_AMP] = ACTIONS(867),
    [anon_sym_PIPE_PIPE] = ACTIONS(867),
    [anon_sym_LT] = ACTIONS(1084),
    [anon_sym_GT] = ACTIONS(1084),
    [anon_sym_GT_GT] = ACTIONS(1084),
    [anon_sym_AMP_GT] = ACTIONS(1084),
    [anon_sym_AMP_GT_GT] = ACTIONS(1084),
    [anon_sym_LT_AMP] = ACTIONS(1084),
    [anon_sym_GT_AMP] = ACTIONS(1084),
    [anon_sym_LT_LT] = ACTIONS(1086),
    [anon_sym_LT_LT_DASH] = ACTIONS(1086),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(867),
    [anon_sym_LF] = ACTIONS(867),
    [anon_sym_AMP] = ACTIONS(867),
  },
  [560] = {
    [anon_sym_RBRACE] = ACTIONS(1676),
    [sym_comment] = ACTIONS(71),
  },
  [561] = {
    [anon_sym_RBRACE] = ACTIONS(1678),
    [sym_comment] = ACTIONS(71),
  },
  [562] = {
    [anon_sym_RBRACE] = ACTIONS(1680),
    [sym_comment] = ACTIONS(71),
  },
  [563] = {
    [anon_sym_RBRACE] = ACTIONS(1682),
    [sym_comment] = ACTIONS(71),
  },
  [564] = {
    [sym_file_descriptor] = ACTIONS(917),
    [anon_sym_SEMI_SEMI] = ACTIONS(889),
    [anon_sym_RBRACE] = ACTIONS(889),
    [anon_sym_COLON] = ACTIONS(889),
    [anon_sym_PIPE] = ACTIONS(889),
    [anon_sym_PIPE_AMP] = ACTIONS(889),
    [anon_sym_AMP_AMP] = ACTIONS(889),
    [anon_sym_PIPE_PIPE] = ACTIONS(889),
    [anon_sym_DQUOTE] = ACTIONS(889),
    [sym_single_quoted_argument] = ACTIONS(889),
    [anon_sym_LT] = ACTIONS(889),
    [anon_sym_GT] = ACTIONS(889),
    [anon_sym_GT_GT] = ACTIONS(889),
    [anon_sym_AMP_GT] = ACTIONS(889),
    [anon_sym_AMP_GT_GT] = ACTIONS(889),
    [anon_sym_LT_AMP] = ACTIONS(889),
    [anon_sym_GT_AMP] = ACTIONS(889),
    [sym_leading_word] = ACTIONS(889),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(889),
    [anon_sym_LF] = ACTIONS(889),
    [anon_sym_AMP] = ACTIONS(889),
  },
  [565] = {
    [sym_file_descriptor] = ACTIONS(921),
    [anon_sym_SEMI_SEMI] = ACTIONS(891),
    [anon_sym_RBRACE] = ACTIONS(891),
    [anon_sym_COLON] = ACTIONS(891),
    [anon_sym_PIPE] = ACTIONS(891),
    [anon_sym_PIPE_AMP] = ACTIONS(891),
    [anon_sym_AMP_AMP] = ACTIONS(891),
    [anon_sym_PIPE_PIPE] = ACTIONS(891),
    [anon_sym_DQUOTE] = ACTIONS(891),
    [sym_single_quoted_argument] = ACTIONS(891),
    [anon_sym_LT] = ACTIONS(891),
    [anon_sym_GT] = ACTIONS(891),
    [anon_sym_GT_GT] = ACTIONS(891),
    [anon_sym_AMP_GT] = ACTIONS(891),
    [anon_sym_AMP_GT_GT] = ACTIONS(891),
    [anon_sym_LT_AMP] = ACTIONS(891),
    [anon_sym_GT_AMP] = ACTIONS(891),
    [sym_leading_word] = ACTIONS(891),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(891),
    [anon_sym_LF] = ACTIONS(891),
    [anon_sym_AMP] = ACTIONS(891),
  },
  [566] = {
    [sym_file_descriptor] = ACTIONS(917),
    [anon_sym_RPAREN] = ACTIONS(889),
    [anon_sym_SEMI_SEMI] = ACTIONS(889),
    [anon_sym_COLON] = ACTIONS(889),
    [anon_sym_PIPE] = ACTIONS(889),
    [anon_sym_PIPE_AMP] = ACTIONS(889),
    [anon_sym_AMP_AMP] = ACTIONS(889),
    [anon_sym_PIPE_PIPE] = ACTIONS(889),
    [anon_sym_DQUOTE] = ACTIONS(889),
    [sym_single_quoted_argument] = ACTIONS(889),
    [anon_sym_LT] = ACTIONS(889),
    [anon_sym_GT] = ACTIONS(889),
    [anon_sym_GT_GT] = ACTIONS(889),
    [anon_sym_AMP_GT] = ACTIONS(889),
    [anon_sym_AMP_GT_GT] = ACTIONS(889),
    [anon_sym_LT_AMP] = ACTIONS(889),
    [anon_sym_GT_AMP] = ACTIONS(889),
    [anon_sym_LT_LT] = ACTIONS(889),
    [anon_sym_LT_LT_DASH] = ACTIONS(889),
    [sym_leading_word] = ACTIONS(889),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(889),
    [anon_sym_LF] = ACTIONS(889),
    [anon_sym_AMP] = ACTIONS(889),
  },
  [567] = {
    [sym_file_descriptor] = ACTIONS(921),
    [anon_sym_RPAREN] = ACTIONS(891),
    [anon_sym_SEMI_SEMI] = ACTIONS(891),
    [anon_sym_COLON] = ACTIONS(891),
    [anon_sym_PIPE] = ACTIONS(891),
    [anon_sym_PIPE_AMP] = ACTIONS(891),
    [anon_sym_AMP_AMP] = ACTIONS(891),
    [anon_sym_PIPE_PIPE] = ACTIONS(891),
    [anon_sym_DQUOTE] = ACTIONS(891),
    [sym_single_quoted_argument] = ACTIONS(891),
    [anon_sym_LT] = ACTIONS(891),
    [anon_sym_GT] = ACTIONS(891),
    [anon_sym_GT_GT] = ACTIONS(891),
    [anon_sym_AMP_GT] = ACTIONS(891),
    [anon_sym_AMP_GT_GT] = ACTIONS(891),
    [anon_sym_LT_AMP] = ACTIONS(891),
    [anon_sym_GT_AMP] = ACTIONS(891),
    [anon_sym_LT_LT] = ACTIONS(891),
    [anon_sym_LT_LT_DASH] = ACTIONS(891),
    [sym_leading_word] = ACTIONS(891),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(891),
    [anon_sym_LF] = ACTIONS(891),
    [anon_sym_AMP] = ACTIONS(891),
  },
  [568] = {
    [sym_file_descriptor] = ACTIONS(917),
    [anon_sym_RPAREN] = ACTIONS(889),
    [anon_sym_SEMI_SEMI] = ACTIONS(889),
    [anon_sym_RBRACK] = ACTIONS(889),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(889),
    [anon_sym_PIPE] = ACTIONS(889),
    [anon_sym_PIPE_AMP] = ACTIONS(889),
    [anon_sym_AMP_AMP] = ACTIONS(889),
    [anon_sym_PIPE_PIPE] = ACTIONS(889),
    [anon_sym_DQUOTE] = ACTIONS(889),
    [sym_single_quoted_argument] = ACTIONS(889),
    [anon_sym_DOLLAR] = ACTIONS(889),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(889),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(889),
    [anon_sym_LT] = ACTIONS(889),
    [anon_sym_GT] = ACTIONS(889),
    [anon_sym_GT_GT] = ACTIONS(889),
    [anon_sym_AMP_GT] = ACTIONS(889),
    [anon_sym_AMP_GT_GT] = ACTIONS(889),
    [anon_sym_LT_AMP] = ACTIONS(889),
    [anon_sym_GT_AMP] = ACTIONS(889),
    [anon_sym_LT_LT] = ACTIONS(889),
    [anon_sym_LT_LT_DASH] = ACTIONS(889),
    [sym_word] = ACTIONS(889),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(889),
    [anon_sym_LF] = ACTIONS(889),
    [anon_sym_AMP] = ACTIONS(889),
  },
  [569] = {
    [sym_file_descriptor] = ACTIONS(921),
    [anon_sym_RPAREN] = ACTIONS(891),
    [anon_sym_SEMI_SEMI] = ACTIONS(891),
    [anon_sym_RBRACK] = ACTIONS(891),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(891),
    [anon_sym_PIPE] = ACTIONS(891),
    [anon_sym_PIPE_AMP] = ACTIONS(891),
    [anon_sym_AMP_AMP] = ACTIONS(891),
    [anon_sym_PIPE_PIPE] = ACTIONS(891),
    [anon_sym_DQUOTE] = ACTIONS(891),
    [sym_single_quoted_argument] = ACTIONS(891),
    [anon_sym_DOLLAR] = ACTIONS(891),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(891),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(891),
    [anon_sym_LT] = ACTIONS(891),
    [anon_sym_GT] = ACTIONS(891),
    [anon_sym_GT_GT] = ACTIONS(891),
    [anon_sym_AMP_GT] = ACTIONS(891),
    [anon_sym_AMP_GT_GT] = ACTIONS(891),
    [anon_sym_LT_AMP] = ACTIONS(891),
    [anon_sym_GT_AMP] = ACTIONS(891),
    [anon_sym_LT_LT] = ACTIONS(891),
    [anon_sym_LT_LT_DASH] = ACTIONS(891),
    [sym_word] = ACTIONS(891),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(891),
    [anon_sym_LF] = ACTIONS(891),
    [anon_sym_AMP] = ACTIONS(891),
  },
  [570] = {
    [sym_file_descriptor] = ACTIONS(917),
    [anon_sym_RPAREN] = ACTIONS(889),
    [anon_sym_SEMI_SEMI] = ACTIONS(889),
    [anon_sym_PIPE] = ACTIONS(889),
    [anon_sym_PIPE_AMP] = ACTIONS(889),
    [anon_sym_AMP_AMP] = ACTIONS(889),
    [anon_sym_PIPE_PIPE] = ACTIONS(889),
    [anon_sym_DQUOTE] = ACTIONS(889),
    [sym_single_quoted_argument] = ACTIONS(889),
    [anon_sym_DOLLAR] = ACTIONS(889),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(889),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(889),
    [anon_sym_LT] = ACTIONS(889),
    [anon_sym_GT] = ACTIONS(889),
    [anon_sym_GT_GT] = ACTIONS(889),
    [anon_sym_AMP_GT] = ACTIONS(889),
    [anon_sym_AMP_GT_GT] = ACTIONS(889),
    [anon_sym_LT_AMP] = ACTIONS(889),
    [anon_sym_GT_AMP] = ACTIONS(889),
    [anon_sym_LT_LT] = ACTIONS(889),
    [anon_sym_LT_LT_DASH] = ACTIONS(889),
    [sym_word] = ACTIONS(889),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(889),
    [anon_sym_LF] = ACTIONS(889),
    [anon_sym_AMP] = ACTIONS(889),
  },
  [571] = {
    [sym_file_descriptor] = ACTIONS(921),
    [anon_sym_RPAREN] = ACTIONS(891),
    [anon_sym_SEMI_SEMI] = ACTIONS(891),
    [anon_sym_PIPE] = ACTIONS(891),
    [anon_sym_PIPE_AMP] = ACTIONS(891),
    [anon_sym_AMP_AMP] = ACTIONS(891),
    [anon_sym_PIPE_PIPE] = ACTIONS(891),
    [anon_sym_DQUOTE] = ACTIONS(891),
    [sym_single_quoted_argument] = ACTIONS(891),
    [anon_sym_DOLLAR] = ACTIONS(891),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(891),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(891),
    [anon_sym_LT] = ACTIONS(891),
    [anon_sym_GT] = ACTIONS(891),
    [anon_sym_GT_GT] = ACTIONS(891),
    [anon_sym_AMP_GT] = ACTIONS(891),
    [anon_sym_AMP_GT_GT] = ACTIONS(891),
    [anon_sym_LT_AMP] = ACTIONS(891),
    [anon_sym_GT_AMP] = ACTIONS(891),
    [anon_sym_LT_LT] = ACTIONS(891),
    [anon_sym_LT_LT_DASH] = ACTIONS(891),
    [sym_word] = ACTIONS(891),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(891),
    [anon_sym_LF] = ACTIONS(891),
    [anon_sym_AMP] = ACTIONS(891),
  },
  [572] = {
    [sym_file_descriptor] = ACTIONS(917),
    [anon_sym_RPAREN] = ACTIONS(889),
    [anon_sym_SEMI_SEMI] = ACTIONS(889),
    [anon_sym_PIPE] = ACTIONS(889),
    [anon_sym_PIPE_AMP] = ACTIONS(889),
    [anon_sym_AMP_AMP] = ACTIONS(889),
    [anon_sym_PIPE_PIPE] = ACTIONS(889),
    [anon_sym_LT] = ACTIONS(889),
    [anon_sym_GT] = ACTIONS(889),
    [anon_sym_GT_GT] = ACTIONS(889),
    [anon_sym_AMP_GT] = ACTIONS(889),
    [anon_sym_AMP_GT_GT] = ACTIONS(889),
    [anon_sym_LT_AMP] = ACTIONS(889),
    [anon_sym_GT_AMP] = ACTIONS(889),
    [anon_sym_LT_LT] = ACTIONS(889),
    [anon_sym_LT_LT_DASH] = ACTIONS(889),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(889),
    [anon_sym_LF] = ACTIONS(889),
    [anon_sym_AMP] = ACTIONS(889),
  },
  [573] = {
    [sym_file_descriptor] = ACTIONS(921),
    [anon_sym_RPAREN] = ACTIONS(891),
    [anon_sym_SEMI_SEMI] = ACTIONS(891),
    [anon_sym_PIPE] = ACTIONS(891),
    [anon_sym_PIPE_AMP] = ACTIONS(891),
    [anon_sym_AMP_AMP] = ACTIONS(891),
    [anon_sym_PIPE_PIPE] = ACTIONS(891),
    [anon_sym_LT] = ACTIONS(891),
    [anon_sym_GT] = ACTIONS(891),
    [anon_sym_GT_GT] = ACTIONS(891),
    [anon_sym_AMP_GT] = ACTIONS(891),
    [anon_sym_AMP_GT_GT] = ACTIONS(891),
    [anon_sym_LT_AMP] = ACTIONS(891),
    [anon_sym_GT_AMP] = ACTIONS(891),
    [anon_sym_LT_LT] = ACTIONS(891),
    [anon_sym_LT_LT_DASH] = ACTIONS(891),
    [sym_comment] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(891),
    [anon_sym_LF] = ACTIONS(891),
    [anon_sym_AMP] = ACTIONS(891),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(385),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(386),
  [5] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(387),
  [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(388),
  [9] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(389),
  [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
  [13] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(3),
  [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(74),
  [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(370),
  [19] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(4),
  [21] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(371),
  [23] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(372),
  [25] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(154),
  [27] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(155),
  [29] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(5),
  [31] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(373),
  [33] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(374),
  [35] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(375),
  [37] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(6),
  [39] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(376),
  [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(214),
  [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(377),
  [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(8),
  [47] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(100),
  [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(100),
  [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(378),
  [53] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(66),
  [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(67),
  [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(379),
  [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(380),
  [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(381),
  [63] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(382),
  [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(382),
  [67] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(383),
  [69] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(383),
  [71] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(384),
  [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
  [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 0),
  [79] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
  [81] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
  [83] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
  [85] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
  [87] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(7),
  [89] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
  [91] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(9),
  [93] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(10),
  [95] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(11),
  [97] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(10),
  [99] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
  [101] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(13),
  [103] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(21),
  [105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(21),
  [107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(26),
  [109] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(27),
  [111] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(28),
  [113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
  [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
  [117] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(31),
  [119] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(32),
  [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
  [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
  [125] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(36),
  [127] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(37),
  [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
  [131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
  [133] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(40),
  [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
  [137] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 1),
  [139] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(44),
  [141] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(45),
  [143] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(46),
  [145] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [147] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(49),
  [149] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(50),
  [151] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(51),
  [153] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(52),
  [155] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(53),
  [157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
  [159] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(56),
  [161] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(57),
  [163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
  [165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
  [167] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(60),
  [169] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 1, .rename_sequence_id = 1),
  [171] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(61),
  [173] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(62),
  [175] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(63),
  [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [181] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [183] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [185] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(65),
  [187] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(66),
  [189] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(67),
  [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1),
  [193] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_command_repeat1, 1),
  [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
  [201] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(69),
  [203] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(70),
  [205] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(72),
  [207] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(73),
  [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(74),
  [211] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(76),
  [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
  [215] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(78),
  [217] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(80),
  [219] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(81),
  [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
  [223] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(83),
  [225] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(84),
  [227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(85),
  [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
  [231] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(85),
  [233] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(87),
  [235] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(90),
  [237] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(91),
  [239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
  [241] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subshell, 2),
  [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
  [245] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(94),
  [247] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_bracket_command_repeat1, 1),
  [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1),
  [251] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1),
  [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(96),
  [255] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(97),
  [257] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(98),
  [259] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_bracket_command_repeat1, 1, .rename_sequence_id = 2),
  [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1, .rename_sequence_id = 2),
  [263] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1, .rename_sequence_id = 2),
  [265] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(100),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(101),
  [269] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(102),
  [271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(103),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
  [275] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2),
  [277] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(104),
  [279] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(105),
  [281] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(106),
  [283] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(107),
  [285] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(108),
  [287] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(109),
  [289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
  [291] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(113),
  [293] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(114),
  [295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
  [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
  [299] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(117),
  [301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
  [303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(119),
  [305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 1),
  [307] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 1),
  [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2),
  [311] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2),
  [313] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_quoted_argument_repeat1, 1),
  [315] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_quoted_argument_repeat1, 1),
  [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(122),
  [319] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(123),
  [321] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(124),
  [323] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(126),
  [325] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(127),
  [327] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(128),
  [329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2),
  [331] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 2),
  [333] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2),
  [335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(130),
  [337] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(131),
  [339] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(132),
  [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 3),
  [343] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 3),
  [345] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 3),
  [347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(134),
  [349] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2, .rename_sequence_id = 4),
  [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(137),
  [353] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(138),
  [355] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(139),
  [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
  [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(141),
  [361] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(142),
  [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__terminated_statement, 2),
  [365] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__terminated_statement, 2),
  [367] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__terminated_statement, 2),
  [369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [371] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [373] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [375] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(147),
  [377] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2, .rename_sequence_id = 5),
  [379] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(148),
  [381] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(149),
  [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 2),
  [385] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_command_repeat1, 2),
  [387] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 2),
  [389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 3),
  [391] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 3),
  [393] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 3),
  [395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 3, .rename_sequence_id = 6),
  [397] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 3, .rename_sequence_id = 6),
  [399] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 3, .rename_sequence_id = 6),
  [401] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(151),
  [403] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 3),
  [405] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(153),
  [407] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(154),
  [409] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(155),
  [411] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(160),
  [413] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(161),
  [415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(162),
  [417] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expansion, 2),
  [419] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expansion, 2, .rename_sequence_id = 7),
  [421] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(163),
  [423] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(164),
  [425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(164),
  [427] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
  [429] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(166),
  [431] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(167),
  [433] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(168),
  [435] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(171),
  [437] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(173),
  [439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
  [441] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(176),
  [443] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(176),
  [445] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(177),
  [447] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(178),
  [449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(179),
  [451] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(180),
  [453] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subshell, 3),
  [455] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_quoted_argument, 2),
  [457] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(181),
  [459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expansion, 2),
  [461] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expansion, 2),
  [463] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expansion, 2, .rename_sequence_id = 7),
  [465] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expansion, 2, .rename_sequence_id = 7),
  [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(182),
  [469] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(183),
  [471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(183),
  [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(184),
  [475] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_bracket_command, 3),
  [477] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_bracket_command_repeat1, 2),
  [479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 2),
  [481] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 2),
  [483] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_bracket_command_repeat1, 2, .rename_sequence_id = 3),
  [485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 2, .rename_sequence_id = 3),
  [487] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 2, .rename_sequence_id = 3),
  [489] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(185),
  [491] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(186),
  [493] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(187),
  [495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(189),
  [497] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(190),
  [499] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(191),
  [501] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3),
  [503] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(193),
  [505] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(194),
  [507] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(196),
  [509] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(198),
  [511] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(199),
  [513] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(200),
  [515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 1),
  [517] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 1),
  [519] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(202),
  [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(203),
  [523] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(204),
  [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(205),
  [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_heredoc_redirect, 2),
  [529] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc_redirect, 2),
  [531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 2),
  [533] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 2),
  [535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(207),
  [537] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(208),
  [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(208),
  [541] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(209),
  [543] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 3),
  [545] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 3),
  [547] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_quoted_argument_repeat1, 2),
  [549] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_quoted_argument_repeat1, 2),
  [551] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(210),
  [553] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(211),
  [555] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(212),
  [557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(212),
  [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(213),
  [561] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(214),
  [563] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .rename_sequence_id = 8),
  [565] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(217),
  [567] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9),
  [569] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9),
  [571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(219),
  [573] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(220),
  [575] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(221),
  [577] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 10),
  [579] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 10),
  [581] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3, .fragile = true),
  [583] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list, 3, .fragile = true),
  [585] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .rename_sequence_id = 11),
  [587] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(226),
  [589] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(227),
  [591] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_group, 2),
  [593] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(228),
  [595] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
  [597] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 1),
  [599] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
  [601] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(231),
  [603] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(231),
  [605] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(154),
  [607] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(155),
  [609] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(235),
  [611] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(236),
  [613] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(237),
  [615] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(240),
  [617] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 12),
  [619] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(241),
  [621] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(242),
  [623] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(243),
  [625] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(243),
  [627] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 2),
  [629] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(244),
  [631] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(245),
  [633] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(246),
  [635] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(247),
  [637] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(248),
  [639] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(167),
  [641] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(167),
  [643] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(168),
  [645] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(168),
  [647] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(249),
  [649] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(252),
  [651] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(253),
  [653] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(254),
  [655] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(255),
  [657] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_command_repeat2, 1),
  [659] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(258),
  [661] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 2, .rename_sequence_id = 4),
  [663] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3),
  [665] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(261),
  [667] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(262),
  [669] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(264),
  [671] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(266),
  [673] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_quoted_argument, 3),
  [675] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 12),
  [677] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 12),
  [679] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(268),
  [681] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(269),
  [683] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3),
  [685] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_command_substitution, 3),
  [687] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(270),
  [689] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(271),
  [691] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(272),
  [693] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(272),
  [695] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(273),
  [697] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 4),
  [699] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(274),
  [701] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(275),
  [703] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(276),
  [705] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(276),
  [707] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(277),
  [709] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_heredoc_repeat1, 1),
  [711] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_heredoc_repeat1, 1),
  [713] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 2),
  [715] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 2),
  [717] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(278),
  [719] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(279),
  [721] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(280),
  [723] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(281),
  [725] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(282),
  [727] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(283),
  [729] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(284),
  [731] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(285),
  [733] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(286),
  [735] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(287),
  [737] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 4, .rename_sequence_id = 13),
  [739] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 4, .rename_sequence_id = 13),
  [741] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(289),
  [743] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(290),
  [745] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(291),
  [747] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(291),
  [749] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(292),
  [751] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 4, .rename_sequence_id = 14),
  [753] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9),
  [755] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 10),
  [757] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_group, 3),
  [759] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(295),
  [761] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 2),
  [763] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
  [765] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(296),
  [767] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [769] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 5),
  [771] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(298),
  [773] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(299),
  [775] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_case_statement_repeat1, 1),
  [777] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_case_statement_repeat1, 1),
  [779] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_case_statement_repeat1, 1),
  [781] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(300),
  [783] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(303),
  [785] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(304),
  [787] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(305),
  [789] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(306),
  [791] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(307),
  [793] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(309),
  [795] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(310),
  [797] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(311),
  [799] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 3),
  [801] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(313),
  [803] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(314),
  [805] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_heredoc, 1),
  [807] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(316),
  [809] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_heredoc_redirect, 2),
  [811] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_command_repeat2, 2),
  [813] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .rename_sequence_id = 8),
  [815] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .rename_sequence_id = 11),
  [817] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 5, .rename_sequence_id = 15),
  [819] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(322),
  [821] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5, .rename_sequence_id = 16),
  [823] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(324),
  [825] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(325),
  [827] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(326),
  [829] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(327),
  [831] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(328),
  [833] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(329),
  [835] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(330),
  [837] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(331),
  [839] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(331),
  [841] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_heredoc_repeat1, 2),
  [843] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_heredoc_repeat1, 2),
  [845] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 3),
  [847] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 3),
  [849] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(332),
  [851] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(333),
  [853] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(334),
  [855] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(335),
  [857] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_compound_command, 2),
  [859] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(336),
  [861] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(337),
  [863] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(338),
  [865] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 5),
  [867] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 5, .rename_sequence_id = 16),
  [869] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 3),
  [871] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
  [873] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(340),
  [875] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(341),
  [877] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(343),
  [879] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 6),
  [881] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_case_statement_repeat1, 2),
  [883] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_case_statement_repeat1, 2),
  [885] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_case_statement_repeat1, 2),
  [887] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(345),
  [889] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 17),
  [891] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 18),
  [893] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(346),
  [895] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(347),
  [897] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(348),
  [899] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(348),
  [901] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(349),
  [903] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 4),
  [905] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_heredoc, 2),
  [907] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(350),
  [909] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 4, .rename_sequence_id = 13),
  [911] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 4, .rename_sequence_id = 14),
  [913] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 6, .rename_sequence_id = 19),
  [915] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(353),
  [917] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 17),
  [919] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 17),
  [921] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 18),
  [923] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 18),
  [925] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(354),
  [927] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(355),
  [929] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(356),
  [931] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(357),
  [933] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(358),
  [935] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(359),
  [937] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_compound_command, 3),
  [939] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(360),
  [941] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(361),
  [943] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4),
  [945] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 7),
  [947] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 3),
  [949] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_case_item, 3),
  [951] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 3),
  [953] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(362),
  [955] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 3, .rename_sequence_id = 20),
  [957] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_case_item, 3, .rename_sequence_id = 20),
  [959] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 3, .rename_sequence_id = 20),
  [961] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(363),
  [963] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 7),
  [965] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(364),
  [967] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(365),
  [969] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_heredoc, 3),
  [971] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 5),
  [973] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 5, .rename_sequence_id = 16),
  [975] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 7, .rename_sequence_id = 21),
  [977] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(366),
  [979] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(367),
  [981] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 4),
  [983] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_case_item, 4),
  [985] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 4),
  [987] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 4, .rename_sequence_id = 22),
  [989] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_case_item, 4, .rename_sequence_id = 22),
  [991] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 4, .rename_sequence_id = 22),
  [993] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(368),
  [995] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(369),
  [997] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_group, 2), REDUCE(sym_do_group, 3),
  [1000] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 3), SHIFT(153),
  [1003] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 3), SHIFT(154),
  [1006] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 3), SHIFT(155),
  [1009] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_if_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_if_statement, 7),
  [1014] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(413),
  [1016] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 5), REDUCE(sym_case_statement, 5, .rename_sequence_id = 15), REDUCE(sym_case_statement, 6), REDUCE(sym_case_statement, 6, .rename_sequence_id = 19), REDUCE(sym_case_statement, 7), REDUCE(sym_case_statement, 7, .rename_sequence_id = 21),
  [1023] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3), SHIFT(2),
  [1026] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subshell, 2), REDUCE(sym_subshell, 3), REDUCE(sym_command_substitution, 3), SHIFT(414),
  [1031] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(7),
  [1033] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(214),
  [1035] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3), SHIFT(10),
  [1038] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subshell, 2), REDUCE(sym_subshell, 3), REDUCE(sym_command_substitution, 3),
  [1042] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3), SHIFT(11),
  [1045] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3), SHIFT(12),
  [1048] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3), SHIFT(13),
  [1051] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(416),
  [1053] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 12), REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 17), REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 18),
  [1057] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 12), REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 17), REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 18),
  [1061] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_compound_command, 2), REDUCE(sym_compound_command, 3), REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 12), REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 17), REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 18),
  [1067] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(417),
  [1069] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 1), REDUCE(sym_command, 2),
  [1072] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(418),
  [1074] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(35),
  [1076] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(419),
  [1078] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(37),
  [1080] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(38),
  [1082] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(39),
  [1084] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(420),
  [1086] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(383),
  [1088] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(421),
  [1090] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(424),
  [1092] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(425),
  [1094] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(426),
  [1096] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(427),
  [1098] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(428),
  [1100] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(429),
  [1102] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2), REDUCE(sym_quoted_argument, 3),
  [1105] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2), REDUCE(sym_quoted_argument, 3),
  [1108] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2), REDUCE(sym_quoted_argument, 3), SHIFT(430),
  [1112] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(50),
  [1114] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2), REDUCE(sym_quoted_argument, 3), SHIFT(51),
  [1118] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2), REDUCE(sym_quoted_argument, 3), SHIFT(52),
  [1122] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2), REDUCE(sym_quoted_argument, 3), SHIFT(53),
  [1126] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expansion, 2), SHIFT(431),
  [1129] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expansion, 2), SHIFT(432),
  [1132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(433),
  [1134] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(434),
  [1136] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(435),
  [1138] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(436),
  [1140] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(437),
  [1142] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(438),
  [1144] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(385),
  [1146] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(386),
  [1148] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(439),
  [1150] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(440),
  [1152] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__terminated_statement, 2), SHIFT(35),
  [1155] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__terminated_statement, 2), SHIFT(236),
  [1158] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(441),
  [1160] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_heredoc_repeat1, 1), REDUCE(aux_sym_heredoc_repeat1, 2),
  [1163] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_heredoc_repeat1, 1), REDUCE(aux_sym_heredoc_repeat1, 2),
  [1166] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 2), REDUCE(sym_heredoc, 3),
  [1169] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 2), REDUCE(sym_heredoc, 3),
  [1172] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(442),
  [1174] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(442),
  [1176] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [1179] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [1182] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(74),
  [1184] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(371),
  [1186] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [1189] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3, .fragile = true), REDUCE(sym_list, 3, .fragile = true), SHIFT(65),
  [1193] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3, .fragile = true), REDUCE(sym_list, 3, .fragile = true), SHIFT(66),
  [1197] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3, .fragile = true), REDUCE(sym_list, 3, .fragile = true), SHIFT(67),
  [1201] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
  [1204] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(443),
  [1206] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_case_statement_repeat1, 1), REDUCE(aux_sym_case_statement_repeat1, 2),
  [1209] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_case_statement_repeat1, 1), REDUCE(aux_sym_case_statement_repeat1, 2),
  [1212] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_case_statement_repeat1, 1), REDUCE(aux_sym_case_statement_repeat1, 2),
  [1215] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 4, .rename_sequence_id = 13), REDUCE(sym_function_definition, 5, .rename_sequence_id = 16),
  [1218] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(444),
  [1220] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3), REDUCE(sym_list, 3), SHIFT(65),
  [1224] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3), REDUCE(sym_list, 3), SHIFT(66),
  [1228] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3), REDUCE(sym_list, 3), SHIFT(67),
  [1232] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1), REDUCE(aux_sym_command_repeat1, 2),
  [1235] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1), REDUCE(aux_sym_command_repeat1, 2),
  [1238] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9), REDUCE(sym_file_redirect, 3), SHIFT(417),
  [1245] = {.count = 7, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 1), REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_command, 2), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_file_redirect, 3), SHIFT(298),
  [1253] = {.count = 8, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 1), REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_command, 2), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9), REDUCE(sym_file_redirect, 3), SHIFT(81),
  [1262] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(445),
  [1264] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(aux_sym_bracket_command_repeat1, 2),
  [1267] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9), REDUCE(sym_file_redirect, 3),
  [1271] = {.count = 7, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 1), REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_command, 2), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9), REDUCE(sym_file_redirect, 3),
  [1279] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9), REDUCE(sym_file_redirect, 3),
  [1285] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9), REDUCE(sym_file_redirect, 3), SHIFT(420),
  [1292] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_file_redirect, 3), SHIFT(383),
  [1298] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9), REDUCE(sym_file_redirect, 3),
  [1304] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_file_redirect, 3), SHIFT(298),
  [1310] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9), REDUCE(sym_file_redirect, 3), SHIFT(81),
  [1317] = {.count = 7, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(aux_sym_quoted_argument_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(aux_sym_quoted_argument_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9), REDUCE(sym_file_redirect, 3),
  [1325] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_quoted_argument_repeat1, 1), REDUCE(aux_sym_quoted_argument_repeat1, 2),
  [1328] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(aux_sym_quoted_argument_repeat1, 1), REDUCE(aux_sym_heredoc_repeat1, 1), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(aux_sym_quoted_argument_repeat1, 2), REDUCE(aux_sym_heredoc_repeat1, 2),
  [1335] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(aux_sym_quoted_argument_repeat1, 1), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(aux_sym_quoted_argument_repeat1, 2),
  [1340] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_file_redirect, 3),
  [1345] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1), REDUCE(aux_sym_command_repeat2, 1), REDUCE(aux_sym_command_repeat1, 2), REDUCE(aux_sym_command_repeat2, 2),
  [1350] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 1), REDUCE(aux_sym_command_repeat2, 2),
  [1353] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1), REDUCE(aux_sym_command_repeat2, 1), REDUCE(aux_sym_command_repeat1, 2), REDUCE(aux_sym_command_repeat2, 2),
  [1358] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 1), REDUCE(aux_sym_command_repeat2, 2),
  [1361] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 2), REDUCE(sym_elif_clause, 4), SHIFT(231),
  [1365] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(154),
  [1368] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(155),
  [1371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(446),
  [1373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(447),
  [1375] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(449),
  [1377] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3), REDUCE(sym_command, 3, .rename_sequence_id = 8), REDUCE(sym_command, 4), REDUCE(sym_command, 4, .rename_sequence_id = 14),
  [1382] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(100),
  [1384] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(450),
  [1386] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(451),
  [1388] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(452),
  [1390] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(453),
  [1392] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(454),
  [1394] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(455),
  [1396] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(457),
  [1398] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(458),
  [1400] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(457),
  [1402] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(459),
  [1404] = {.count = 10, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2), REDUCE(sym_command, 2, .rename_sequence_id = 4), REDUCE(sym_command, 3), REDUCE(sym_command, 3, .rename_sequence_id = 11), REDUCE(sym_command, 3, .rename_sequence_id = 8), REDUCE(sym_command, 4), REDUCE(sym_command, 4, .rename_sequence_id = 14), REDUCE(sym_command, 4, .rename_sequence_id = 13), REDUCE(sym_command, 5), REDUCE(sym_command, 5, .rename_sequence_id = 16),
  [1415] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(461),
  [1417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(462),
  [1419] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(231),
  [1422] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 3), REDUCE(sym_case_item, 3, .rename_sequence_id = 20),
  [1425] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_case_item, 3), REDUCE(sym_case_item, 3, .rename_sequence_id = 20),
  [1428] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 3), REDUCE(sym_case_item, 3, .rename_sequence_id = 20),
  [1431] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(463),
  [1433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(463),
  [1435] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2), REDUCE(sym_command, 3),
  [1438] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(464),
  [1440] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(465),
  [1442] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(466),
  [1444] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(467),
  [1446] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(468),
  [1448] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(469),
  [1450] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(445),
  [1452] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(472),
  [1454] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(473),
  [1456] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(474),
  [1458] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(475),
  [1460] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(476),
  [1462] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(477),
  [1464] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(478),
  [1466] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(479),
  [1468] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(481),
  [1470] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(482),
  [1472] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(483),
  [1474] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(478),
  [1476] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(485),
  [1478] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2), REDUCE(sym_file_redirect, 3),
  [1481] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2), REDUCE(sym_file_redirect, 3),
  [1484] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(487),
  [1486] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(488),
  [1488] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(489),
  [1490] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 3), REDUCE(sym_file_redirect, 3, .rename_sequence_id = 6),
  [1493] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 3), REDUCE(sym_file_redirect, 3, .rename_sequence_id = 6),
  [1496] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(491),
  [1498] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 5), REDUCE(sym_case_statement, 5, .rename_sequence_id = 15), REDUCE(sym_case_statement, 6), REDUCE(sym_case_statement, 6, .rename_sequence_id = 19),
  [1503] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(492),
  [1505] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(493),
  [1507] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_if_statement, 7),
  [1511] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 4), REDUCE(sym_case_item, 4, .rename_sequence_id = 22),
  [1514] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_case_item, 4), REDUCE(sym_case_item, 4, .rename_sequence_id = 22),
  [1517] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 4), REDUCE(sym_case_item, 4, .rename_sequence_id = 22),
  [1520] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_if_statement, 6),
  [1523] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(494),
  [1525] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 6), REDUCE(sym_case_statement, 6, .rename_sequence_id = 19), REDUCE(sym_case_statement, 7), REDUCE(sym_case_statement, 7, .rename_sequence_id = 21),
  [1530] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(495),
  [1532] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(497),
  [1534] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(498),
  [1536] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(499),
  [1538] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 4), REDUCE(sym_command, 4, .rename_sequence_id = 13), REDUCE(sym_command, 5), REDUCE(sym_command, 5, .rename_sequence_id = 16),
  [1543] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(501),
  [1545] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(503),
  [1547] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(505),
  [1549] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(507),
  [1551] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(508),
  [1553] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(509),
  [1555] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(511),
  [1557] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(512),
  [1559] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(513),
  [1561] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3), REDUCE(sym_command, 4),
  [1564] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(515),
  [1566] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(516),
  [1568] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(518),
  [1570] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(520),
  [1572] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(521),
  [1574] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(522),
  [1576] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(524),
  [1578] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(525),
  [1580] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(526),
  [1582] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(526),
  [1584] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(527),
  [1586] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(528),
  [1588] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(529),
  [1590] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(530),
  [1592] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(530),
  [1594] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(531),
  [1596] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(532),
  [1598] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6), REDUCE(sym_if_statement, 7),
  [1601] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(534),
  [1603] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(535),
  [1605] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(536),
  [1607] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(536),
  [1609] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(537),
  [1611] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(540),
  [1613] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(543),
  [1615] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(544),
  [1617] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(545),
  [1619] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(545),
  [1621] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(546),
  [1623] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 4), REDUCE(sym_command, 5),
  [1626] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(547),
  [1628] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(548),
  [1630] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(549),
  [1632] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(549),
  [1634] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(550),
  [1636] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(551),
  [1638] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(552),
  [1640] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(553),
  [1642] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(554),
  [1644] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 6), REDUCE(sym_case_statement, 6, .rename_sequence_id = 19),
  [1647] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(555),
  [1649] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(556),
  [1651] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(557),
  [1653] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(560),
  [1655] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(561),
  [1657] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(562),
  [1659] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(563),
  [1661] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(564),
  [1663] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(565),
  [1665] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(566),
  [1667] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(567),
  [1669] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 7), REDUCE(sym_case_statement, 7, .rename_sequence_id = 21),
  [1672] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(568),
  [1674] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(569),
  [1676] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(570),
  [1678] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(571),
  [1680] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(572),
  [1682] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(573),
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
