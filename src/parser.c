#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define LANGUAGE_VERSION 3
#define STATE_COUNT 589
#define SYMBOL_COUNT 92
#define TOKEN_COUNT 59
#define EXTERNAL_TOKEN_COUNT 6
#define MAX_RENAME_SEQUENCE_LENGTH 7

enum {
  sym__simple_heredoc = 1,
  sym__heredoc_beginning = 2,
  sym__heredoc_middle = 3,
  sym__heredoc_end = 4,
  sym_file_descriptor = 5,
  sym__empty_value = 6,
  anon_sym_for = 7,
  anon_sym_in = 8,
  anon_sym_while = 9,
  anon_sym_do = 10,
  anon_sym_done = 11,
  anon_sym_if = 12,
  anon_sym_then = 13,
  anon_sym_fi = 14,
  anon_sym_elif = 15,
  anon_sym_else = 16,
  anon_sym_case = 17,
  anon_sym_esac = 18,
  anon_sym_RPAREN = 19,
  anon_sym_SEMI_SEMI = 20,
  anon_sym_function = 21,
  anon_sym_LPAREN = 22,
  anon_sym_LBRACE = 23,
  anon_sym_RBRACE = 24,
  anon_sym_LBRACK = 25,
  anon_sym_RBRACK = 26,
  anon_sym_LBRACK_LBRACK = 27,
  anon_sym_RBRACK_RBRACK = 28,
  anon_sym_COLON = 29,
  aux_sym_SLASH_BSLASHs_PLUS_SLASH = 30,
  anon_sym_PIPE = 31,
  anon_sym_PIPE_AMP = 32,
  anon_sym_AMP_AMP = 33,
  anon_sym_PIPE_PIPE = 34,
  anon_sym_EQ = 35,
  anon_sym_DQUOTE = 36,
  sym__quoted_chars = 37,
  sym_single_quoted_argument = 38,
  anon_sym_DOLLAR = 39,
  anon_sym_DOLLAR_LBRACE = 40,
  anon_sym_COLON_QMARK = 41,
  anon_sym_COLON_DASH = 42,
  anon_sym_DOLLAR_LPAREN = 43,
  anon_sym_LT = 44,
  anon_sym_GT = 45,
  anon_sym_GT_GT = 46,
  anon_sym_AMP_GT = 47,
  anon_sym_AMP_GT_GT = 48,
  anon_sym_LT_AMP = 49,
  anon_sym_GT_AMP = 50,
  anon_sym_LT_LT = 51,
  anon_sym_LT_LT_DASH = 52,
  sym_leading_word = 53,
  sym_word = 54,
  sym_comment = 55,
  anon_sym_SEMI = 56,
  anon_sym_LF = 57,
  anon_sym_AMP = 58,
  sym_program = 59,
  sym__terminated_statement = 60,
  sym_for_statement = 61,
  sym_while_statement = 62,
  sym_do_group = 63,
  sym_if_statement = 64,
  sym_elif_clause = 65,
  sym_else_clause = 66,
  sym_case_statement = 67,
  sym_case_item = 68,
  sym_function_definition = 69,
  sym_compound_command = 70,
  sym_bracket_command = 71,
  sym_command = 72,
  sym_pipeline = 73,
  sym_list = 74,
  sym_subshell = 75,
  sym_environment_variable_assignment = 76,
  sym_quoted_argument = 77,
  sym_expansion = 78,
  sym_operator_expansion = 79,
  sym_command_substitution = 80,
  sym_file_redirect = 81,
  sym_heredoc_redirect = 82,
  sym_heredoc = 83,
  aux_sym_program_repeat1 = 84,
  aux_sym_if_statement_repeat1 = 85,
  aux_sym_case_statement_repeat1 = 86,
  aux_sym_bracket_command_repeat1 = 87,
  aux_sym_command_repeat1 = 88,
  aux_sym_command_repeat2 = 89,
  aux_sym_quoted_argument_repeat1 = 90,
  aux_sym_heredoc_repeat1 = 91,
  rename_sym_1 = 92,
  rename_sym_argument = 93,
  rename_sym_command_name = 94,
  rename_sym_variable_name = 95,
};

static const char *ts_symbol_names[] = {
  [sym__simple_heredoc] = "_simple_heredoc",
  [sym__heredoc_beginning] = "_heredoc_beginning",
  [sym__heredoc_middle] = "_heredoc_middle",
  [sym__heredoc_end] = "_heredoc_end",
  [sym_file_descriptor] = "file_descriptor",
  [sym__empty_value] = "_empty_value",
  [ts_builtin_sym_end] = "END",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_while] = "while",
  [anon_sym_do] = "do",
  [anon_sym_done] = "done",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_fi] = "fi",
  [anon_sym_elif] = "elif",
  [anon_sym_else] = "else",
  [anon_sym_case] = "case",
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
  [sym_for_statement] = "for_statement",
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
  [anon_sym_for] = {
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
  [sym_for_statement] = {
    .visible = true,
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
        ADVANCE(50);
      if (lookahead == 't')
        ADVANCE(53);
      if (lookahead == 'w')
        ADVANCE(57);
      if (lookahead == '{')
        ADVANCE(62);
      if (lookahead == '|')
        ADVANCE(63);
      if (lookahead == '}')
        ADVANCE(65);
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
      if (lookahead == 'o')
        ADVANCE(41);
      if (lookahead == 'u')
        ADVANCE(43);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_fi);
      END_STATE();
    case 41:
      if (lookahead == 'r')
        ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 43:
      if (lookahead == 'n')
        ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 'c')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 't')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'i')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'o')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'n')
        ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 50:
      if (lookahead == 'f')
        ADVANCE(51);
      if (lookahead == 'n')
        ADVANCE(52);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 53:
      if (lookahead == 'h')
        ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'e')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'n')
        ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 57:
      if (lookahead == 'h')
        ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'i')
        ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == 'l')
        ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'e')
        ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|')
        ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 66:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(67);
      if (lookahead == '&')
        ADVANCE(70);
      if (lookahead == '\'')
        ADVANCE(73);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(77);
      if (lookahead == '>')
        ADVANCE(79);
      if (lookahead == '[')
        ADVANCE(82);
      if (lookahead == '\\')
        SKIP(84);
      if (lookahead == 'c')
        ADVANCE(85);
      if (lookahead == 'f')
        ADVANCE(89);
      if (lookahead == 'i')
        ADVANCE(99);
      if (lookahead == 'w')
        ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(66);
      if ((lookahead < '&' || lookahead > ')') &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(69);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == '(')
        ADVANCE(68);
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
        ADVANCE(69);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      END_STATE();
    case 69:
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
        ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == '>')
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
          lookahead != '>' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(69);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_AMP_GT);
      if (lookahead == '>')
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
          lookahead != '>' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(69);
      END_STATE();
    case 72:
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
        ADVANCE(69);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == '\'')
        ADVANCE(74);
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
        ADVANCE(75);
      if (lookahead != 0)
        ADVANCE(73);
      END_STATE();
    case 74:
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
        ADVANCE(69);
      END_STATE();
    case 75:
      if (lookahead == '\'')
        ADVANCE(76);
      if (lookahead != 0)
        ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_single_quoted_argument);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&')
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
        ADVANCE(69);
      END_STATE();
    case 78:
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
        ADVANCE(69);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '&')
        ADVANCE(80);
      if (lookahead == '>')
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
          lookahead != '>' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(69);
      END_STATE();
    case 80:
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
        ADVANCE(69);
      END_STATE();
    case 81:
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
        ADVANCE(69);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[')
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
          lookahead != '[' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(69);
      END_STATE();
    case 83:
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
        ADVANCE(69);
      END_STATE();
    case 84:
      if (lookahead == '\n')
        SKIP(66);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'a')
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
        ADVANCE(69);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 's')
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
        ADVANCE(69);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
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
        ADVANCE(69);
      END_STATE();
    case 88:
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
        ADVANCE(69);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'o')
        ADVANCE(90);
      if (lookahead == 'u')
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
        ADVANCE(69);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'r')
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
        ADVANCE(69);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_for);
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
        ADVANCE(69);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'n')
        ADVANCE(93);
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
        ADVANCE(69);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'c')
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
        ADVANCE(69);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 't')
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
        ADVANCE(69);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
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
        ADVANCE(69);
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
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(69);
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
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(69);
      END_STATE();
    case 98:
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
        ADVANCE(69);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'f')
        ADVANCE(100);
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
        ADVANCE(69);
      END_STATE();
    case 100:
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
        ADVANCE(69);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'h')
        ADVANCE(102);
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
        ADVANCE(69);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(103);
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
        ADVANCE(69);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'l')
        ADVANCE(104);
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
        ADVANCE(69);
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
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(69);
      END_STATE();
    case 105:
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
        ADVANCE(69);
      END_STATE();
    case 106:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(107);
      if (lookahead == '<')
        ADVANCE(110);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(106);
      END_STATE();
    case 107:
      if (lookahead == '>')
        ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_AMP_GT);
      if (lookahead == '>')
        ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_AMP_GT_GT);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&')
        ADVANCE(11);
      END_STATE();
    case 111:
      if (lookahead == '\n')
        SKIP(106);
      END_STATE();
    case 112:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(112);
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
    case 113:
      if (lookahead == '\n')
        SKIP(112);
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
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(67);
      if (lookahead == '&')
        ADVANCE(70);
      if (lookahead == '\'')
        ADVANCE(73);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(77);
      if (lookahead == '>')
        ADVANCE(79);
      if (lookahead == '[')
        ADVANCE(82);
      if (lookahead == '\\')
        SKIP(116);
      if (lookahead == 'c')
        ADVANCE(85);
      if (lookahead == 'f')
        ADVANCE(89);
      if (lookahead == 'i')
        ADVANCE(99);
      if (lookahead == 'w')
        ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(115);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(69);
      END_STATE();
    case 116:
      if (lookahead == '\n')
        SKIP(115);
      END_STATE();
    case 117:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(118);
      if (lookahead == '\'')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(117);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(114);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '(')
        ADVANCE(68);
      if (lookahead == '{')
        ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\'')
        ADVANCE(121);
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
        ADVANCE(75);
      if (lookahead != 0)
        ADVANCE(120);
      END_STATE();
    case 121:
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
    case 122:
      if (lookahead == '\n')
        SKIP(117);
      END_STATE();
    case 123:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(123);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(69);
      END_STATE();
    case 124:
      if (lookahead == '\n')
        SKIP(123);
      END_STATE();
    case 125:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(67);
      if (lookahead == '&')
        ADVANCE(70);
      if (lookahead == '\'')
        ADVANCE(73);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(77);
      if (lookahead == '>')
        ADVANCE(79);
      if (lookahead == '[')
        ADVANCE(82);
      if (lookahead == '\\')
        SKIP(126);
      if (lookahead == 'c')
        ADVANCE(85);
      if (lookahead == 'f')
        ADVANCE(89);
      if (lookahead == 'i')
        ADVANCE(99);
      if (lookahead == 'w')
        ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(125);
      if (lookahead != 0 &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(69);
      END_STATE();
    case 126:
      if (lookahead == '\n')
        SKIP(125);
      END_STATE();
    case 127:
      if (lookahead == '\n')
        ADVANCE(128);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(130);
      if (lookahead == ';')
        ADVANCE(132);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(134);
      if (lookahead == '|')
        ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(129);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&')
        ADVANCE(131);
      if (lookahead == '>')
        ADVANCE(108);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == ';')
        ADVANCE(133);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_SEMI_SEMI);
      END_STATE();
    case 134:
      if (lookahead == '\n')
        SKIP(127);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '&')
        ADVANCE(136);
      if (lookahead == '|')
        ADVANCE(64);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_PIPE_AMP);
      END_STATE();
    case 137:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(138);
      if (lookahead == '$')
        ADVANCE(118);
      if (lookahead == '\\')
        ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(141);
      if (lookahead != 0)
        ADVANCE(139);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(139);
      if (lookahead == '\"' ||
          lookahead == '$')
        ADVANCE(3);
      if (lookahead != 0)
        ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(139);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '#')
        ADVANCE(138);
      if (lookahead == '\\')
        ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(139);
      END_STATE();
    case 142:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(67);
      if (lookahead == '&')
        ADVANCE(70);
      if (lookahead == '\'')
        ADVANCE(73);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(77);
      if (lookahead == '>')
        ADVANCE(79);
      if (lookahead == '\\')
        SKIP(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(142);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(69);
      END_STATE();
    case 143:
      if (lookahead == '\n')
        SKIP(142);
      END_STATE();
    case 144:
      if (lookahead == '\n')
        ADVANCE(145);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(130);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ';')
        ADVANCE(132);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(147);
      if (lookahead == '|')
        ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(146);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(146);
      END_STATE();
    case 147:
      if (lookahead == '\n')
        SKIP(144);
      END_STATE();
    case 148:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(149);
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
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(67);
      if (lookahead == '&')
        ADVANCE(70);
      if (lookahead == '\'')
        ADVANCE(73);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == ';')
        ADVANCE(151);
      if (lookahead == '<')
        ADVANCE(77);
      if (lookahead == '>')
        ADVANCE(79);
      if (lookahead == '[')
        ADVANCE(82);
      if (lookahead == '\\')
        SKIP(152);
      if (lookahead == 'c')
        ADVANCE(85);
      if (lookahead == 'd')
        ADVANCE(153);
      if (lookahead == 'e')
        ADVANCE(157);
      if (lookahead == 'f')
        ADVANCE(163);
      if (lookahead == 'i')
        ADVANCE(99);
      if (lookahead == 'w')
        ADVANCE(101);
      if (lookahead == '}')
        ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(150);
      if ((lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(69);
      END_STATE();
    case 151:
      if (lookahead == ';')
        ADVANCE(133);
      END_STATE();
    case 152:
      if (lookahead == '\n')
        SKIP(150);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'o')
        ADVANCE(154);
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
        ADVANCE(69);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'n')
        ADVANCE(155);
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
        ADVANCE(69);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(156);
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
        ADVANCE(69);
      END_STATE();
    case 156:
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
        ADVANCE(69);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'l')
        ADVANCE(158);
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
        ADVANCE(69);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(159);
      if (lookahead == 's')
        ADVANCE(161);
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
        ADVANCE(69);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'f')
        ADVANCE(160);
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
        ADVANCE(69);
      END_STATE();
    case 160:
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
        ADVANCE(69);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(162);
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
        ADVANCE(69);
      END_STATE();
    case 162:
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
        ADVANCE(69);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(164);
      if (lookahead == 'o')
        ADVANCE(90);
      if (lookahead == 'u')
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
        ADVANCE(69);
      END_STATE();
    case 164:
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
        ADVANCE(69);
      END_STATE();
    case 165:
      if (lookahead == '\n')
        ADVANCE(166);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(167);
      if (lookahead == ';')
        ADVANCE(132);
      if (lookahead == '\\')
        SKIP(168);
      if (lookahead == '|')
        ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&')
        ADVANCE(131);
      END_STATE();
    case 168:
      if (lookahead == '\n')
        SKIP(165);
      END_STATE();
    case 169:
      if (lookahead == '\n')
        ADVANCE(166);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(67);
      if (lookahead == '&')
        ADVANCE(170);
      if (lookahead == '\'')
        ADVANCE(73);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == ';')
        ADVANCE(132);
      if (lookahead == '<')
        ADVANCE(77);
      if (lookahead == '>')
        ADVANCE(79);
      if (lookahead == '\\')
        SKIP(172);
      if (lookahead == '|')
        ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(169);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(69);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&')
        ADVANCE(171);
      if (lookahead == '>')
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
          lookahead != '>' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(69);
      END_STATE();
    case 171:
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
        ADVANCE(69);
      END_STATE();
    case 172:
      if (lookahead == '\n')
        SKIP(169);
      END_STATE();
    case 173:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(174);
      if (lookahead == 'i')
        ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(173);
      END_STATE();
    case 174:
      if (lookahead == '\n')
        SKIP(173);
      END_STATE();
    case 175:
      if (lookahead == 'n')
        ADVANCE(52);
      END_STATE();
    case 176:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(177);
      if (lookahead == 'd')
        ADVANCE(178);
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
      if (lookahead == 'o')
        ADVANCE(179);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 180:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(181);
      if (lookahead == 't')
        ADVANCE(53);
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
      if (lookahead == '\n')
        ADVANCE(166);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(132);
      if (lookahead == '\\')
        SKIP(183);
      if (lookahead == 'i')
        ADVANCE(175);
      if (lookahead == '\t' ||
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
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '\\')
        SKIP(185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(184);
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
    case 185:
      if (lookahead == '\n')
        SKIP(184);
      END_STATE();
    case 186:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == '\\')
        SKIP(187);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(186);
      END_STATE();
    case 187:
      if (lookahead == '\n')
        SKIP(186);
      END_STATE();
    case 188:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(118);
      if (lookahead == '\'')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(189);
      if (lookahead == ']')
        ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(188);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(114);
      END_STATE();
    case 189:
      if (lookahead == '\n')
        SKIP(188);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']')
        ADVANCE(191);
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
    case 191:
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
    case 192:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(118);
      if (lookahead == '\'')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(193);
      if (lookahead == ']')
        ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(192);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(114);
      END_STATE();
    case 193:
      if (lookahead == '\n')
        SKIP(192);
      END_STATE();
    case 194:
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
    case 195:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(118);
      if (lookahead == '\'')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(196);
      if (lookahead == ']')
        ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(195);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(114);
      END_STATE();
    case 196:
      if (lookahead == '\n')
        SKIP(195);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ']')
        ADVANCE(191);
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
    case 198:
      if (lookahead == '\n')
        ADVANCE(166);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(118);
      if (lookahead == '&')
        ADVANCE(130);
      if (lookahead == '\'')
        ADVANCE(120);
      if (lookahead == ';')
        ADVANCE(132);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(199);
      if (lookahead == '|')
        ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(198);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(114);
      END_STATE();
    case 199:
      if (lookahead == '\n')
        SKIP(198);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '&')
        ADVANCE(136);
      if (lookahead == '|')
        ADVANCE(201);
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
    case 201:
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
    case 202:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(202);
      END_STATE();
    case 203:
      if (lookahead == '\n')
        SKIP(202);
      END_STATE();
    case 204:
      if (lookahead == '\n')
        ADVANCE(166);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(130);
      if (lookahead == ';')
        ADVANCE(132);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(205);
      if (lookahead == '|')
        ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(204);
      END_STATE();
    case 205:
      if (lookahead == '\n')
        SKIP(204);
      END_STATE();
    case 206:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(107);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(208);
      END_STATE();
    case 207:
      if (lookahead == '\n')
        SKIP(206);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(208);
      END_STATE();
    case 209:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(107);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(211);
      END_STATE();
    case 210:
      if (lookahead == '\n')
        SKIP(209);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(211);
      END_STATE();
    case 212:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '\\')
        SKIP(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(212);
      END_STATE();
    case 213:
      if (lookahead == '\n')
        SKIP(212);
      END_STATE();
    case 214:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(67);
      if (lookahead == '&')
        ADVANCE(70);
      if (lookahead == '\'')
        ADVANCE(73);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == ';')
        ADVANCE(151);
      if (lookahead == '<')
        ADVANCE(77);
      if (lookahead == '>')
        ADVANCE(79);
      if (lookahead == '[')
        ADVANCE(82);
      if (lookahead == '\\')
        SKIP(215);
      if (lookahead == 'c')
        ADVANCE(85);
      if (lookahead == 'd')
        ADVANCE(216);
      if (lookahead == 'e')
        ADVANCE(157);
      if (lookahead == 'f')
        ADVANCE(163);
      if (lookahead == 'i')
        ADVANCE(99);
      if (lookahead == 't')
        ADVANCE(218);
      if (lookahead == 'w')
        ADVANCE(101);
      if (lookahead == '}')
        ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(214);
      if ((lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(69);
      END_STATE();
    case 215:
      if (lookahead == '\n')
        SKIP(214);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'o')
        ADVANCE(217);
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
        ADVANCE(69);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == 'n')
        ADVANCE(155);
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
        ADVANCE(69);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'h')
        ADVANCE(219);
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
        ADVANCE(69);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(220);
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
        ADVANCE(69);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'n')
        ADVANCE(221);
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
        ADVANCE(69);
      END_STATE();
    case 221:
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
        ADVANCE(69);
      END_STATE();
    case 222:
      if (lookahead == '\n')
        ADVANCE(223);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(130);
      if (lookahead == ';')
        ADVANCE(132);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(225);
      if (lookahead == '|')
        ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(224);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(224);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(224);
      END_STATE();
    case 225:
      if (lookahead == '\n')
        SKIP(222);
      END_STATE();
    case 226:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(67);
      if (lookahead == '&')
        ADVANCE(70);
      if (lookahead == '\'')
        ADVANCE(73);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(77);
      if (lookahead == '>')
        ADVANCE(79);
      if (lookahead == '[')
        ADVANCE(82);
      if (lookahead == '\\')
        SKIP(227);
      if (lookahead == 'c')
        ADVANCE(85);
      if (lookahead == 'd')
        ADVANCE(153);
      if (lookahead == 'f')
        ADVANCE(89);
      if (lookahead == 'i')
        ADVANCE(99);
      if (lookahead == 'w')
        ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(226);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(69);
      END_STATE();
    case 227:
      if (lookahead == '\n')
        SKIP(226);
      END_STATE();
    case 228:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(229);
      if (lookahead == 'd')
        ADVANCE(178);
      if (lookahead == 't')
        ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(228);
      END_STATE();
    case 229:
      if (lookahead == '\n')
        SKIP(228);
      END_STATE();
    case 230:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(67);
      if (lookahead == '&')
        ADVANCE(70);
      if (lookahead == '\'')
        ADVANCE(73);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(77);
      if (lookahead == '>')
        ADVANCE(79);
      if (lookahead == '[')
        ADVANCE(82);
      if (lookahead == '\\')
        SKIP(231);
      if (lookahead == 'c')
        ADVANCE(85);
      if (lookahead == 'e')
        ADVANCE(157);
      if (lookahead == 'f')
        ADVANCE(163);
      if (lookahead == 'i')
        ADVANCE(99);
      if (lookahead == 'w')
        ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(230);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(69);
      END_STATE();
    case 231:
      if (lookahead == '\n')
        SKIP(230);
      END_STATE();
    case 232:
      if (lookahead == '\n')
        ADVANCE(166);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(132);
      if (lookahead == '\\')
        SKIP(233);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(232);
      END_STATE();
    case 233:
      if (lookahead == '\n')
        SKIP(232);
      END_STATE();
    case 234:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ':')
        ADVANCE(235);
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == '\\')
        SKIP(238);
      if (lookahead == '}')
        ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-')
        ADVANCE(236);
      if (lookahead == '?')
        ADVANCE(237);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_COLON_QMARK);
      END_STATE();
    case 238:
      if (lookahead == '\n')
        SKIP(234);
      END_STATE();
    case 239:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(118);
      if (lookahead == '\'')
        ADVANCE(120);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '\\')
        SKIP(240);
      if (lookahead == ']')
        ADVANCE(190);
      if (lookahead == '}')
        ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(239);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{')
        ADVANCE(114);
      END_STATE();
    case 240:
      if (lookahead == '\n')
        SKIP(239);
      END_STATE();
    case 241:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(242);
      if (lookahead == '\\')
        SKIP(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{')
        ADVANCE(119);
      END_STATE();
    case 243:
      if (lookahead == '\n')
        SKIP(241);
      END_STATE();
    case 244:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(118);
      if (lookahead == '&')
        ADVANCE(107);
      if (lookahead == '\'')
        ADVANCE(120);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(244);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(114);
      END_STATE();
    case 245:
      if (lookahead == '\n')
        SKIP(244);
      END_STATE();
    case 246:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(107);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(247);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(246);
      END_STATE();
    case 247:
      if (lookahead == '\n')
        SKIP(246);
      END_STATE();
    case 248:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(249);
      if (lookahead == '{')
        ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(248);
      END_STATE();
    case 249:
      if (lookahead == '\n')
        SKIP(248);
      END_STATE();
    case 250:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(67);
      if (lookahead == '&')
        ADVANCE(70);
      if (lookahead == '\'')
        ADVANCE(73);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(77);
      if (lookahead == '>')
        ADVANCE(79);
      if (lookahead == '[')
        ADVANCE(82);
      if (lookahead == '\\')
        SKIP(251);
      if (lookahead == 'c')
        ADVANCE(85);
      if (lookahead == 'f')
        ADVANCE(163);
      if (lookahead == 'i')
        ADVANCE(99);
      if (lookahead == 'w')
        ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(250);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(69);
      END_STATE();
    case 251:
      if (lookahead == '\n')
        SKIP(250);
      END_STATE();
    case 252:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(253);
      if (lookahead == 'e')
        ADVANCE(254);
      if (lookahead == 'f')
        ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(252);
      END_STATE();
    case 253:
      if (lookahead == '\n')
        SKIP(252);
      END_STATE();
    case 254:
      if (lookahead == 'l')
        ADVANCE(31);
      END_STATE();
    case 255:
      if (lookahead == 'i')
        ADVANCE(40);
      END_STATE();
    case 256:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(257);
      if (lookahead == 'f')
        ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(256);
      END_STATE();
    case 257:
      if (lookahead == '\n')
        SKIP(256);
      END_STATE();
    case 258:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(118);
      if (lookahead == '\'')
        ADVANCE(120);
      if (lookahead == '\\')
        SKIP(259);
      if (lookahead == 'e')
        ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(258);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(114);
      END_STATE();
    case 259:
      if (lookahead == '\n')
        SKIP(258);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's')
        ADVANCE(261);
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
    case 261:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a')
        ADVANCE(262);
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
    case 262:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c')
        ADVANCE(263);
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
    case 263:
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
    case 264:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(67);
      if (lookahead == '&')
        ADVANCE(70);
      if (lookahead == '\'')
        ADVANCE(73);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(77);
      if (lookahead == '>')
        ADVANCE(79);
      if (lookahead == '[')
        ADVANCE(82);
      if (lookahead == '\\')
        SKIP(265);
      if (lookahead == 'c')
        ADVANCE(85);
      if (lookahead == 'f')
        ADVANCE(89);
      if (lookahead == 'i')
        ADVANCE(99);
      if (lookahead == 'w')
        ADVANCE(101);
      if (lookahead == '}')
        ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(264);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(69);
      END_STATE();
    case 265:
      if (lookahead == '\n')
        SKIP(264);
      END_STATE();
    case 266:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(267);
      if (lookahead == '}')
        ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(266);
      END_STATE();
    case 267:
      if (lookahead == '\n')
        SKIP(266);
      END_STATE();
    case 268:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(67);
      if (lookahead == '&')
        ADVANCE(70);
      if (lookahead == '\'')
        ADVANCE(73);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == ';')
        ADVANCE(151);
      if (lookahead == '<')
        ADVANCE(77);
      if (lookahead == '>')
        ADVANCE(79);
      if (lookahead == '[')
        ADVANCE(82);
      if (lookahead == '\\')
        SKIP(269);
      if (lookahead == 'c')
        ADVANCE(85);
      if (lookahead == 'f')
        ADVANCE(89);
      if (lookahead == 'i')
        ADVANCE(99);
      if (lookahead == 'w')
        ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(268);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(69);
      END_STATE();
    case 269:
      if (lookahead == '\n')
        SKIP(268);
      END_STATE();
    case 270:
      if (lookahead == '\n')
        ADVANCE(166);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(67);
      if (lookahead == '&')
        ADVANCE(271);
      if (lookahead == '\'')
        ADVANCE(73);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == ';')
        ADVANCE(132);
      if (lookahead == '<')
        ADVANCE(77);
      if (lookahead == '>')
        ADVANCE(79);
      if (lookahead == '[')
        ADVANCE(82);
      if (lookahead == '\\')
        SKIP(272);
      if (lookahead == 'c')
        ADVANCE(85);
      if (lookahead == 'f')
        ADVANCE(89);
      if (lookahead == 'i')
        ADVANCE(99);
      if (lookahead == 'w')
        ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(270);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(69);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '>')
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
          lookahead != '>' &&
          lookahead != '\\' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(69);
      END_STATE();
    case 272:
      if (lookahead == '\n')
        SKIP(270);
      END_STATE();
    case 273:
      if (lookahead == '\n')
        ADVANCE(274);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(138);
      if (lookahead == '$')
        ADVANCE(332);
      if (lookahead == '&')
        ADVANCE(275);
      if (lookahead == '\'')
        ADVANCE(280);
      if (lookahead == '(')
        ADVANCE(286);
      if (lookahead == ')')
        ADVANCE(287);
      if (lookahead == ':')
        ADVANCE(288);
      if (lookahead == ';')
        ADVANCE(289);
      if (lookahead == '<')
        ADVANCE(291);
      if (lookahead == '=')
        ADVANCE(282);
      if (lookahead == '>')
        ADVANCE(295);
      if (lookahead == '[')
        ADVANCE(298);
      if (lookahead == '\\')
        ADVANCE(300);
      if (lookahead == ']')
        ADVANCE(302);
      if (lookahead == 'c')
        ADVANCE(304);
      if (lookahead == 'f')
        ADVANCE(308);
      if (lookahead == 'i')
        ADVANCE(318);
      if (lookahead == 'w')
        ADVANCE(321);
      if (lookahead == '{')
        ADVANCE(326);
      if (lookahead == '|')
        ADVANCE(327);
      if (lookahead == '}')
        ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(331);
      if (lookahead != 0)
        ADVANCE(281);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(274);
      if (lookahead == '#')
        ADVANCE(138);
      if (lookahead == '&')
        ADVANCE(275);
      if (lookahead == '\'')
        ADVANCE(280);
      if (lookahead == '(')
        ADVANCE(286);
      if (lookahead == ')')
        ADVANCE(287);
      if (lookahead == ':')
        ADVANCE(288);
      if (lookahead == ';')
        ADVANCE(289);
      if (lookahead == '<')
        ADVANCE(291);
      if (lookahead == '=')
        ADVANCE(282);
      if (lookahead == '>')
        ADVANCE(295);
      if (lookahead == '[')
        ADVANCE(298);
      if (lookahead == '\\')
        ADVANCE(300);
      if (lookahead == ']')
        ADVANCE(302);
      if (lookahead == 'c')
        ADVANCE(304);
      if (lookahead == 'f')
        ADVANCE(308);
      if (lookahead == 'i')
        ADVANCE(318);
      if (lookahead == 'w')
        ADVANCE(321);
      if (lookahead == '{')
        ADVANCE(326);
      if (lookahead == '|')
        ADVANCE(327);
      if (lookahead == '}')
        ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(281);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '$')
        ADVANCE(69);
      if (lookahead == '&')
        ADVANCE(276);
      if (lookahead == '>')
        ADVANCE(278);
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
        ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(277);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      if (lookahead == '$')
        ADVANCE(69);
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
        ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(277);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(69);
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
        ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_AMP_GT);
      if (lookahead == '$')
        ADVANCE(69);
      if (lookahead == '>')
        ADVANCE(279);
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
        ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(277);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_AMP_GT_GT);
      if (lookahead == '$')
        ADVANCE(69);
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
        ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(277);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\"')
        ADVANCE(75);
      if (lookahead == '$')
        ADVANCE(73);
      if (lookahead == '\'')
        ADVANCE(281);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(283);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(285);
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
        ADVANCE(284);
      if (lookahead != 0)
        ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(69);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(277);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(282);
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
        ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(281);
      END_STATE();
    case 282:
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
        ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\"')
        ADVANCE(75);
      if (lookahead == '$')
        ADVANCE(73);
      if (lookahead == '\'')
        ADVANCE(277);
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
        ADVANCE(284);
      if (lookahead != 0)
        ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\'')
        ADVANCE(139);
      if (lookahead == '\"' ||
          lookahead == '$')
        ADVANCE(75);
      if (lookahead != 0)
        ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\'')
        ADVANCE(282);
      if (lookahead == '\"' ||
          lookahead == '$')
        ADVANCE(75);
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
        ADVANCE(284);
      if (lookahead != 0)
        ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(139);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(139);
      END_STATE();
    case 288:
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
        ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(282);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == ';')
        ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(139);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_SEMI_SEMI);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(139);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '$')
        ADVANCE(69);
      if (lookahead == '&')
        ADVANCE(292);
      if (lookahead == '<')
        ADVANCE(293);
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
        ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(277);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_LT_AMP);
      if (lookahead == '$')
        ADVANCE(69);
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
        ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(277);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '$')
        ADVANCE(69);
      if (lookahead == '-')
        ADVANCE(294);
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
        ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(277);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH);
      if (lookahead == '$')
        ADVANCE(69);
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
        ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(277);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '$')
        ADVANCE(69);
      if (lookahead == '&')
        ADVANCE(296);
      if (lookahead == '>')
        ADVANCE(297);
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
        ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(277);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_GT_AMP);
      if (lookahead == '$')
        ADVANCE(69);
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
        ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(277);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '$')
        ADVANCE(69);
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
        ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(277);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '$')
        ADVANCE(69);
      if (lookahead == '[')
        ADVANCE(299);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(277);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(282);
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
        ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(281);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      if (lookahead == '$')
        ADVANCE(69);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(277);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(282);
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
        ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(281);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(139);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(274);
      if (lookahead == '#')
        ADVANCE(138);
      if (lookahead == '&')
        ADVANCE(275);
      if (lookahead == '\'')
        ADVANCE(280);
      if (lookahead == '(')
        ADVANCE(286);
      if (lookahead == ')')
        ADVANCE(287);
      if (lookahead == ':')
        ADVANCE(288);
      if (lookahead == ';')
        ADVANCE(289);
      if (lookahead == '<')
        ADVANCE(291);
      if (lookahead == '=')
        ADVANCE(282);
      if (lookahead == '>')
        ADVANCE(295);
      if (lookahead == '[')
        ADVANCE(298);
      if (lookahead == '\\')
        ADVANCE(300);
      if (lookahead == ']')
        ADVANCE(302);
      if (lookahead == 'c')
        ADVANCE(304);
      if (lookahead == 'f')
        ADVANCE(308);
      if (lookahead == 'i')
        ADVANCE(318);
      if (lookahead == 'w')
        ADVANCE(321);
      if (lookahead == '{')
        ADVANCE(326);
      if (lookahead == '|')
        ADVANCE(327);
      if (lookahead == '}')
        ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(281);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '$')
        ADVANCE(69);
      if (lookahead == ']')
        ADVANCE(303);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(277);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(282);
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
        ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(281);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      if (lookahead == '$')
        ADVANCE(69);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(277);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(282);
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
        ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(281);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(69);
      if (lookahead == 'a')
        ADVANCE(305);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(277);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(282);
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
        ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(281);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(69);
      if (lookahead == 's')
        ADVANCE(306);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(277);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(282);
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
        ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(281);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(69);
      if (lookahead == 'e')
        ADVANCE(307);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(277);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(282);
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
        ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(281);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '$')
        ADVANCE(69);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(277);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(282);
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
        ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(281);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(69);
      if (lookahead == 'o')
        ADVANCE(309);
      if (lookahead == 'u')
        ADVANCE(311);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(277);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(282);
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
        ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(281);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(69);
      if (lookahead == 'r')
        ADVANCE(310);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(277);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(282);
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
        ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(281);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '$')
        ADVANCE(69);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(277);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(282);
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
        ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(281);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(69);
      if (lookahead == 'n')
        ADVANCE(312);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(277);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(282);
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
        ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(281);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(69);
      if (lookahead == 'c')
        ADVANCE(313);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(277);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(282);
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
        ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(281);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(69);
      if (lookahead == 't')
        ADVANCE(314);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(277);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(282);
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
        ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(281);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(69);
      if (lookahead == 'i')
        ADVANCE(315);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(277);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(282);
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
        ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(281);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(69);
      if (lookahead == 'o')
        ADVANCE(316);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(277);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(282);
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
        ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(281);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(69);
      if (lookahead == 'n')
        ADVANCE(317);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(277);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(282);
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
        ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(281);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead == '$')
        ADVANCE(69);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(277);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(282);
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
        ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(281);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(69);
      if (lookahead == 'f')
        ADVANCE(319);
      if (lookahead == 'n')
        ADVANCE(320);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(277);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(282);
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
        ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(281);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '$')
        ADVANCE(69);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(277);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(282);
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
        ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(281);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '$')
        ADVANCE(69);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(277);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(282);
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
        ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(281);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(69);
      if (lookahead == 'h')
        ADVANCE(322);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(277);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(282);
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
        ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(281);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(69);
      if (lookahead == 'i')
        ADVANCE(323);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(277);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(282);
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
        ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(281);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(69);
      if (lookahead == 'l')
        ADVANCE(324);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(277);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(282);
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
        ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(281);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(69);
      if (lookahead == 'e')
        ADVANCE(325);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(277);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(282);
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
        ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(281);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '$')
        ADVANCE(69);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(277);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(282);
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
        ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(281);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(139);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '&')
        ADVANCE(328);
      if (lookahead == '|')
        ADVANCE(329);
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
        ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(282);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_PIPE_AMP);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(139);
      END_STATE();
    case 329:
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
        ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(282);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(139);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(274);
      if (lookahead == '#')
        ADVANCE(138);
      if (lookahead == '&')
        ADVANCE(275);
      if (lookahead == '\'')
        ADVANCE(280);
      if (lookahead == '(')
        ADVANCE(286);
      if (lookahead == ')')
        ADVANCE(287);
      if (lookahead == ':')
        ADVANCE(288);
      if (lookahead == ';')
        ADVANCE(289);
      if (lookahead == '<')
        ADVANCE(291);
      if (lookahead == '=')
        ADVANCE(282);
      if (lookahead == '>')
        ADVANCE(295);
      if (lookahead == '[')
        ADVANCE(298);
      if (lookahead == '\\')
        ADVANCE(300);
      if (lookahead == ']')
        ADVANCE(302);
      if (lookahead == 'c')
        ADVANCE(304);
      if (lookahead == 'f')
        ADVANCE(308);
      if (lookahead == 'i')
        ADVANCE(318);
      if (lookahead == 'w')
        ADVANCE(321);
      if (lookahead == '{')
        ADVANCE(326);
      if (lookahead == '|')
        ADVANCE(327);
      if (lookahead == '}')
        ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(281);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '(')
        ADVANCE(68);
      if (lookahead == '{')
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
        ADVANCE(69);
      END_STATE();
    case 333:
      if (lookahead == '\n')
        ADVANCE(334);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(138);
      if (lookahead == '$')
        ADVANCE(332);
      if (lookahead == '&')
        ADVANCE(275);
      if (lookahead == '\'')
        ADVANCE(280);
      if (lookahead == ')')
        ADVANCE(287);
      if (lookahead == ':')
        ADVANCE(288);
      if (lookahead == ';')
        ADVANCE(289);
      if (lookahead == '<')
        ADVANCE(291);
      if (lookahead == '=')
        ADVANCE(282);
      if (lookahead == '>')
        ADVANCE(295);
      if (lookahead == '\\')
        ADVANCE(335);
      if (lookahead == ']')
        ADVANCE(302);
      if (lookahead == 'i')
        ADVANCE(337);
      if (lookahead == '|')
        ADVANCE(327);
      if (lookahead == '}')
        ADVANCE(330);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(336);
      if (lookahead != 0)
        ADVANCE(281);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(334);
      if (lookahead == '#')
        ADVANCE(138);
      if (lookahead == '&')
        ADVANCE(275);
      if (lookahead == '\'')
        ADVANCE(280);
      if (lookahead == ')')
        ADVANCE(287);
      if (lookahead == ':')
        ADVANCE(288);
      if (lookahead == ';')
        ADVANCE(289);
      if (lookahead == '<')
        ADVANCE(291);
      if (lookahead == '=')
        ADVANCE(282);
      if (lookahead == '>')
        ADVANCE(295);
      if (lookahead == '\\')
        ADVANCE(335);
      if (lookahead == ']')
        ADVANCE(302);
      if (lookahead == 'i')
        ADVANCE(337);
      if (lookahead == '|')
        ADVANCE(327);
      if (lookahead == '}')
        ADVANCE(330);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(336);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(281);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(139);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(334);
      if (lookahead == '#')
        ADVANCE(138);
      if (lookahead == '&')
        ADVANCE(275);
      if (lookahead == '\'')
        ADVANCE(280);
      if (lookahead == ')')
        ADVANCE(287);
      if (lookahead == ':')
        ADVANCE(288);
      if (lookahead == ';')
        ADVANCE(289);
      if (lookahead == '<')
        ADVANCE(291);
      if (lookahead == '=')
        ADVANCE(282);
      if (lookahead == '>')
        ADVANCE(295);
      if (lookahead == '\\')
        ADVANCE(335);
      if (lookahead == ']')
        ADVANCE(302);
      if (lookahead == 'i')
        ADVANCE(337);
      if (lookahead == '|')
        ADVANCE(327);
      if (lookahead == '}')
        ADVANCE(330);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(336);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(281);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(69);
      if (lookahead == 'n')
        ADVANCE(320);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(277);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(282);
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
        ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(281);
      END_STATE();
    case 338:
      if (lookahead == '\n')
        ADVANCE(339);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(118);
      if (lookahead == '&')
        ADVANCE(130);
      if (lookahead == '\'')
        ADVANCE(120);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(132);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(341);
      if (lookahead == '|')
        ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(340);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(114);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(340);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(340);
      END_STATE();
    case 341:
      if (lookahead == '\n')
        SKIP(338);
      END_STATE();
    case 342:
      if (lookahead == '\n')
        ADVANCE(343);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(138);
      if (lookahead == '$')
        ADVANCE(332);
      if (lookahead == '&')
        ADVANCE(275);
      if (lookahead == '\'')
        ADVANCE(280);
      if (lookahead == ')')
        ADVANCE(287);
      if (lookahead == ':')
        ADVANCE(288);
      if (lookahead == ';')
        ADVANCE(289);
      if (lookahead == '<')
        ADVANCE(291);
      if (lookahead == '=')
        ADVANCE(282);
      if (lookahead == '>')
        ADVANCE(295);
      if (lookahead == '\\')
        ADVANCE(344);
      if (lookahead == ']')
        ADVANCE(302);
      if (lookahead == 'i')
        ADVANCE(337);
      if (lookahead == '|')
        ADVANCE(327);
      if (lookahead == '}')
        ADVANCE(330);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(346);
      if (lookahead != 0)
        ADVANCE(281);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(343);
      if (lookahead == '#')
        ADVANCE(138);
      if (lookahead == '&')
        ADVANCE(275);
      if (lookahead == '\'')
        ADVANCE(280);
      if (lookahead == ')')
        ADVANCE(287);
      if (lookahead == ':')
        ADVANCE(288);
      if (lookahead == ';')
        ADVANCE(289);
      if (lookahead == '<')
        ADVANCE(291);
      if (lookahead == '=')
        ADVANCE(282);
      if (lookahead == '>')
        ADVANCE(295);
      if (lookahead == '\\')
        ADVANCE(344);
      if (lookahead == ']')
        ADVANCE(302);
      if (lookahead == 'i')
        ADVANCE(337);
      if (lookahead == '|')
        ADVANCE(327);
      if (lookahead == '}')
        ADVANCE(330);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(346);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(281);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(139);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(343);
      if (lookahead == '#')
        ADVANCE(138);
      if (lookahead == '&')
        ADVANCE(275);
      if (lookahead == '\'')
        ADVANCE(280);
      if (lookahead == ')')
        ADVANCE(287);
      if (lookahead == ':')
        ADVANCE(288);
      if (lookahead == ';')
        ADVANCE(289);
      if (lookahead == '<')
        ADVANCE(291);
      if (lookahead == '=')
        ADVANCE(282);
      if (lookahead == '>')
        ADVANCE(295);
      if (lookahead == '\\')
        ADVANCE(344);
      if (lookahead == ']')
        ADVANCE(302);
      if (lookahead == 'i')
        ADVANCE(337);
      if (lookahead == '|')
        ADVANCE(327);
      if (lookahead == '}')
        ADVANCE(330);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(346);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(281);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(343);
      if (lookahead == '#')
        ADVANCE(138);
      if (lookahead == '&')
        ADVANCE(275);
      if (lookahead == '\'')
        ADVANCE(280);
      if (lookahead == ')')
        ADVANCE(287);
      if (lookahead == ':')
        ADVANCE(288);
      if (lookahead == ';')
        ADVANCE(289);
      if (lookahead == '<')
        ADVANCE(291);
      if (lookahead == '=')
        ADVANCE(282);
      if (lookahead == '>')
        ADVANCE(295);
      if (lookahead == '\\')
        ADVANCE(344);
      if (lookahead == ']')
        ADVANCE(302);
      if (lookahead == 'i')
        ADVANCE(337);
      if (lookahead == '|')
        ADVANCE(327);
      if (lookahead == '}')
        ADVANCE(330);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(346);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(281);
      END_STATE();
    case 347:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(332);
      if (lookahead == '&')
        ADVANCE(70);
      if (lookahead == '\'')
        ADVANCE(348);
      if (lookahead == '(')
        ADVANCE(6);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ':')
        ADVANCE(351);
      if (lookahead == ';')
        ADVANCE(151);
      if (lookahead == '<')
        ADVANCE(77);
      if (lookahead == '>')
        ADVANCE(79);
      if (lookahead == '[')
        ADVANCE(352);
      if (lookahead == '\\')
        SKIP(354);
      if (lookahead == 'c')
        ADVANCE(355);
      if (lookahead == 'd')
        ADVANCE(359);
      if (lookahead == 'e')
        ADVANCE(363);
      if (lookahead == 'f')
        ADVANCE(372);
      if (lookahead == 'i')
        ADVANCE(383);
      if (lookahead == 't')
        ADVANCE(386);
      if (lookahead == 'w')
        ADVANCE(390);
      if (lookahead == '}')
        ADVANCE(65);
      if (lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(347);
      if ((lookahead < '{' || lookahead > '}'))
        ADVANCE(350);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == '\'')
        ADVANCE(349);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(73);
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
        ADVANCE(75);
      if (lookahead != 0)
        ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_single_quoted_argument);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 351:
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
    case 352:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[')
        ADVANCE(353);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 354:
      if (lookahead == '\n')
        SKIP(347);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'a')
        ADVANCE(356);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 's')
        ADVANCE(357);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(358);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'o')
        ADVANCE(360);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == 'n')
        ADVANCE(361);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(362);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_done);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'l')
        ADVANCE(364);
      if (lookahead == 's')
        ADVANCE(369);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(365);
      if (lookahead == 's')
        ADVANCE(367);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'f')
        ADVANCE(366);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_elif);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(368);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'a')
        ADVANCE(370);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'c')
        ADVANCE(371);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_esac);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(373);
      if (lookahead == 'o')
        ADVANCE(374);
      if (lookahead == 'u')
        ADVANCE(376);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_fi);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'r')
        ADVANCE(375);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'n')
        ADVANCE(377);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'c')
        ADVANCE(378);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 't')
        ADVANCE(379);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(380);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'o')
        ADVANCE(381);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'n')
        ADVANCE(382);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'f')
        ADVANCE(384);
      if (lookahead == 'n')
        ADVANCE(385);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'h')
        ADVANCE(387);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(388);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'n')
        ADVANCE(389);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_then);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'h')
        ADVANCE(391);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(392);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'l')
        ADVANCE(393);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(394);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 395:
      if (lookahead == '\n')
        ADVANCE(166);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(130);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(132);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(396);
      if (lookahead == '|')
        ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(395);
      END_STATE();
    case 396:
      if (lookahead == '\n')
        SKIP(395);
      END_STATE();
    case 397:
      if (lookahead == '\n')
        ADVANCE(166);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(167);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(132);
      if (lookahead == '\\')
        SKIP(398);
      if (lookahead == '|')
        ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(397);
      END_STATE();
    case 398:
      if (lookahead == '\n')
        SKIP(397);
      END_STATE();
    case 399:
      if (lookahead == '\n')
        ADVANCE(400);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(332);
      if (lookahead == '&')
        ADVANCE(170);
      if (lookahead == '\'')
        ADVANCE(348);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ':')
        ADVANCE(351);
      if (lookahead == ';')
        ADVANCE(132);
      if (lookahead == '<')
        ADVANCE(402);
      if (lookahead == '=')
        ADVANCE(114);
      if (lookahead == '>')
        ADVANCE(79);
      if (lookahead == '\\')
        SKIP(405);
      if (lookahead == ']')
        ADVANCE(406);
      if (lookahead == 'i')
        ADVANCE(408);
      if (lookahead == '|')
        ADVANCE(200);
      if (lookahead == '}')
        ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(401);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(350);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(400);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(401);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(400);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&')
        ADVANCE(78);
      if (lookahead == '<')
        ADVANCE(403);
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
        ADVANCE(69);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '-')
        ADVANCE(404);
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
        ADVANCE(69);
      END_STATE();
    case 404:
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
        ADVANCE(69);
      END_STATE();
    case 405:
      if (lookahead == '\n')
        SKIP(399);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']')
        ADVANCE(407);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'n')
        ADVANCE(385);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(69);
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
        ADVANCE(350);
      END_STATE();
    case 409:
      if (lookahead == '\n')
        ADVANCE(166);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(67);
      if (lookahead == '&')
        ADVANCE(170);
      if (lookahead == '\'')
        ADVANCE(73);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == ';')
        ADVANCE(132);
      if (lookahead == '<')
        ADVANCE(402);
      if (lookahead == '>')
        ADVANCE(79);
      if (lookahead == '\\')
        SKIP(410);
      if (lookahead == '|')
        ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(409);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(69);
      END_STATE();
    case 410:
      if (lookahead == '\n')
        SKIP(409);
      END_STATE();
    case 411:
      if (lookahead == '\n')
        ADVANCE(166);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(118);
      if (lookahead == '&')
        ADVANCE(130);
      if (lookahead == '\'')
        ADVANCE(120);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(132);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(412);
      if (lookahead == ']')
        ADVANCE(190);
      if (lookahead == '|')
        ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(411);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(114);
      END_STATE();
    case 412:
      if (lookahead == '\n')
        SKIP(411);
      END_STATE();
    case 413:
      if (lookahead == '\n')
        ADVANCE(166);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(167);
      if (lookahead == ';')
        ADVANCE(132);
      if (lookahead == '\\')
        SKIP(414);
      if (lookahead == '{')
        ADVANCE(62);
      if (lookahead == '|')
        ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(413);
      END_STATE();
    case 414:
      if (lookahead == '\n')
        SKIP(413);
      END_STATE();
    case 415:
      if (lookahead == '\n')
        ADVANCE(166);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(118);
      if (lookahead == '&')
        ADVANCE(130);
      if (lookahead == '\'')
        ADVANCE(120);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(132);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(416);
      if (lookahead == '|')
        ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(415);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(114);
      END_STATE();
    case 416:
      if (lookahead == '\n')
        SKIP(415);
      END_STATE();
    case 417:
      if (lookahead == '\n')
        ADVANCE(166);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(67);
      if (lookahead == '&')
        ADVANCE(170);
      if (lookahead == '\'')
        ADVANCE(73);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == ';')
        ADVANCE(132);
      if (lookahead == '<')
        ADVANCE(77);
      if (lookahead == '>')
        ADVANCE(79);
      if (lookahead == '\\')
        SKIP(418);
      if (lookahead == '|')
        ADVANCE(135);
      if (lookahead == '}')
        ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(417);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(69);
      END_STATE();
    case 418:
      if (lookahead == '\n')
        SKIP(417);
      END_STATE();
    case 419:
      if (lookahead == '\n')
        ADVANCE(420);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(130);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(132);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(422);
      if (lookahead == '|')
        ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(421);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(420);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(421);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(420);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(421);
      END_STATE();
    case 422:
      if (lookahead == '\n')
        SKIP(419);
      END_STATE();
    case 423:
      if (lookahead == '\n')
        ADVANCE(424);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(130);
      if (lookahead == ')')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(132);
      if (lookahead == '<')
        ADVANCE(10);
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '\\')
        SKIP(426);
      if (lookahead == '|')
        ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(425);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(424);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(425);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(424);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(425);
      END_STATE();
    case 426:
      if (lookahead == '\n')
        SKIP(423);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 66, .external_lex_state = 2},
  [2] = {.lex_state = 106},
  [3] = {.lex_state = 112},
  [4] = {.lex_state = 115, .external_lex_state = 2},
  [5] = {.lex_state = 115, .external_lex_state = 2},
  [6] = {.lex_state = 117},
  [7] = {.lex_state = 123},
  [8] = {.lex_state = 125, .external_lex_state = 2},
  [9] = {.lex_state = 117},
  [10] = {.lex_state = 117},
  [11] = {.lex_state = 127, .external_lex_state = 2},
  [12] = {.lex_state = 137},
  [13] = {.lex_state = 142, .external_lex_state = 2},
  [14] = {.lex_state = 117},
  [15] = {.lex_state = 144, .external_lex_state = 2},
  [16] = {.lex_state = 148},
  [17] = {.lex_state = 150, .external_lex_state = 2},
  [18] = {.lex_state = 165},
  [19] = {.lex_state = 169, .external_lex_state = 2},
  [20] = {.lex_state = 142, .external_lex_state = 2},
  [21] = {.lex_state = 66, .external_lex_state = 2},
  [22] = {.lex_state = 142, .external_lex_state = 2},
  [23] = {.lex_state = 117},
  [24] = {.lex_state = 173},
  [25] = {.lex_state = 176},
  [26] = {.lex_state = 165},
  [27] = {.lex_state = 169, .external_lex_state = 2},
  [28] = {.lex_state = 180},
  [29] = {.lex_state = 137},
  [30] = {.lex_state = 182},
  [31] = {.lex_state = 184},
  [32] = {.lex_state = 123},
  [33] = {.lex_state = 142, .external_lex_state = 2},
  [34] = {.lex_state = 182},
  [35] = {.lex_state = 186},
  [36] = {.lex_state = 165},
  [37] = {.lex_state = 125, .external_lex_state = 2},
  [38] = {.lex_state = 137},
  [39] = {.lex_state = 188},
  [40] = {.lex_state = 184},
  [41] = {.lex_state = 123},
  [42] = {.lex_state = 142, .external_lex_state = 2},
  [43] = {.lex_state = 188},
  [44] = {.lex_state = 192},
  [45] = {.lex_state = 195},
  [46] = {.lex_state = 106},
  [47] = {.lex_state = 198, .external_lex_state = 2},
  [48] = {.lex_state = 117},
  [49] = {.lex_state = 202, .external_lex_state = 3},
  [50] = {.lex_state = 204, .external_lex_state = 2},
  [51] = {.lex_state = 204, .external_lex_state = 2},
  [52] = {.lex_state = 127, .external_lex_state = 2},
  [53] = {.lex_state = 137},
  [54] = {.lex_state = 184},
  [55] = {.lex_state = 123},
  [56] = {.lex_state = 142, .external_lex_state = 2},
  [57] = {.lex_state = 137},
  [58] = {.lex_state = 206, .external_lex_state = 2},
  [59] = {.lex_state = 137},
  [60] = {.lex_state = 142, .external_lex_state = 2},
  [61] = {.lex_state = 209, .external_lex_state = 2},
  [62] = {.lex_state = 212},
  [63] = {.lex_state = 142, .external_lex_state = 2},
  [64] = {.lex_state = 137},
  [65] = {.lex_state = 142, .external_lex_state = 2},
  [66] = {.lex_state = 184},
  [67] = {.lex_state = 123},
  [68] = {.lex_state = 142, .external_lex_state = 2},
  [69] = {.lex_state = 142, .external_lex_state = 2},
  [70] = {.lex_state = 212},
  [71] = {.lex_state = 198, .external_lex_state = 2},
  [72] = {.lex_state = 117, .external_lex_state = 4},
  [73] = {.lex_state = 204, .external_lex_state = 2},
  [74] = {.lex_state = 214, .external_lex_state = 2},
  [75] = {.lex_state = 115, .external_lex_state = 2},
  [76] = {.lex_state = 115, .external_lex_state = 2},
  [77] = {.lex_state = 150, .external_lex_state = 2},
  [78] = {.lex_state = 127, .external_lex_state = 2},
  [79] = {.lex_state = 222, .external_lex_state = 2},
  [80] = {.lex_state = 142, .external_lex_state = 2},
  [81] = {.lex_state = 142, .external_lex_state = 2},
  [82] = {.lex_state = 142, .external_lex_state = 2},
  [83] = {.lex_state = 115, .external_lex_state = 2},
  [84] = {.lex_state = 226, .external_lex_state = 2},
  [85] = {.lex_state = 165},
  [86] = {.lex_state = 228},
  [87] = {.lex_state = 230, .external_lex_state = 2},
  [88] = {.lex_state = 182},
  [89] = {.lex_state = 137},
  [90] = {.lex_state = 232},
  [91] = {.lex_state = 173},
  [92] = {.lex_state = 182},
  [93] = {.lex_state = 182},
  [94] = {.lex_state = 234},
  [95] = {.lex_state = 212},
  [96] = {.lex_state = 232},
  [97] = {.lex_state = 173},
  [98] = {.lex_state = 212},
  [99] = {.lex_state = 165},
  [100] = {.lex_state = 239},
  [101] = {.lex_state = 137},
  [102] = {.lex_state = 239},
  [103] = {.lex_state = 239},
  [104] = {.lex_state = 234},
  [105] = {.lex_state = 212},
  [106] = {.lex_state = 165},
  [107] = {.lex_state = 188},
  [108] = {.lex_state = 188},
  [109] = {.lex_state = 117},
  [110] = {.lex_state = 137},
  [111] = {.lex_state = 198, .external_lex_state = 2},
  [112] = {.lex_state = 184},
  [113] = {.lex_state = 123},
  [114] = {.lex_state = 142, .external_lex_state = 2},
  [115] = {.lex_state = 198, .external_lex_state = 2},
  [116] = {.lex_state = 198, .external_lex_state = 2},
  [117] = {.lex_state = 204, .external_lex_state = 2},
  [118] = {.lex_state = 137},
  [119] = {.lex_state = 204, .external_lex_state = 2},
  [120] = {.lex_state = 184},
  [121] = {.lex_state = 123},
  [122] = {.lex_state = 142, .external_lex_state = 2},
  [123] = {.lex_state = 204, .external_lex_state = 2},
  [124] = {.lex_state = 204, .external_lex_state = 2},
  [125] = {.lex_state = 241, .external_lex_state = 5},
  [126] = {.lex_state = 204, .external_lex_state = 2},
  [127] = {.lex_state = 204, .external_lex_state = 2},
  [128] = {.lex_state = 137},
  [129] = {.lex_state = 137},
  [130] = {.lex_state = 234},
  [131] = {.lex_state = 212},
  [132] = {.lex_state = 127, .external_lex_state = 2},
  [133] = {.lex_state = 137},
  [134] = {.lex_state = 106},
  [135] = {.lex_state = 244, .external_lex_state = 2},
  [136] = {.lex_state = 117},
  [137] = {.lex_state = 202, .external_lex_state = 3},
  [138] = {.lex_state = 246, .external_lex_state = 2},
  [139] = {.lex_state = 246, .external_lex_state = 2},
  [140] = {.lex_state = 206, .external_lex_state = 2},
  [141] = {.lex_state = 137},
  [142] = {.lex_state = 212},
  [143] = {.lex_state = 244, .external_lex_state = 2},
  [144] = {.lex_state = 117, .external_lex_state = 4},
  [145] = {.lex_state = 246, .external_lex_state = 2},
  [146] = {.lex_state = 127, .external_lex_state = 2},
  [147] = {.lex_state = 206, .external_lex_state = 2},
  [148] = {.lex_state = 209, .external_lex_state = 2},
  [149] = {.lex_state = 142, .external_lex_state = 2},
  [150] = {.lex_state = 137},
  [151] = {.lex_state = 142, .external_lex_state = 2},
  [152] = {.lex_state = 142, .external_lex_state = 2},
  [153] = {.lex_state = 234},
  [154] = {.lex_state = 212},
  [155] = {.lex_state = 248},
  [156] = {.lex_state = 198, .external_lex_state = 2},
  [157] = {.lex_state = 204, .external_lex_state = 2},
  [158] = {.lex_state = 169, .external_lex_state = 2},
  [159] = {.lex_state = 137},
  [160] = {.lex_state = 184},
  [161] = {.lex_state = 123},
  [162] = {.lex_state = 142, .external_lex_state = 2},
  [163] = {.lex_state = 169, .external_lex_state = 2},
  [164] = {.lex_state = 165},
  [165] = {.lex_state = 169, .external_lex_state = 2},
  [166] = {.lex_state = 165},
  [167] = {.lex_state = 169, .external_lex_state = 2},
  [168] = {.lex_state = 198, .external_lex_state = 2},
  [169] = {.lex_state = 198, .external_lex_state = 2},
  [170] = {.lex_state = 204, .external_lex_state = 2},
  [171] = {.lex_state = 176},
  [172] = {.lex_state = 165},
  [173] = {.lex_state = 226, .external_lex_state = 2},
  [174] = {.lex_state = 165},
  [175] = {.lex_state = 115, .external_lex_state = 2},
  [176] = {.lex_state = 250, .external_lex_state = 2},
  [177] = {.lex_state = 252},
  [178] = {.lex_state = 256},
  [179] = {.lex_state = 230, .external_lex_state = 2},
  [180] = {.lex_state = 252},
  [181] = {.lex_state = 182},
  [182] = {.lex_state = 258},
  [183] = {.lex_state = 232},
  [184] = {.lex_state = 182},
  [185] = {.lex_state = 117},
  [186] = {.lex_state = 182},
  [187] = {.lex_state = 258},
  [188] = {.lex_state = 232},
  [189] = {.lex_state = 248},
  [190] = {.lex_state = 239},
  [191] = {.lex_state = 239},
  [192] = {.lex_state = 117},
  [193] = {.lex_state = 239},
  [194] = {.lex_state = 204, .external_lex_state = 2},
  [195] = {.lex_state = 204, .external_lex_state = 2},
  [196] = {.lex_state = 198, .external_lex_state = 2},
  [197] = {.lex_state = 137},
  [198] = {.lex_state = 198, .external_lex_state = 2},
  [199] = {.lex_state = 198, .external_lex_state = 2},
  [200] = {.lex_state = 234},
  [201] = {.lex_state = 212},
  [202] = {.lex_state = 198, .external_lex_state = 2},
  [203] = {.lex_state = 198, .external_lex_state = 2},
  [204] = {.lex_state = 204, .external_lex_state = 2},
  [205] = {.lex_state = 204, .external_lex_state = 2},
  [206] = {.lex_state = 137},
  [207] = {.lex_state = 204, .external_lex_state = 2},
  [208] = {.lex_state = 204, .external_lex_state = 2},
  [209] = {.lex_state = 234},
  [210] = {.lex_state = 212},
  [211] = {.lex_state = 241, .external_lex_state = 5},
  [212] = {.lex_state = 204, .external_lex_state = 2},
  [213] = {.lex_state = 184},
  [214] = {.lex_state = 123},
  [215] = {.lex_state = 241, .external_lex_state = 5},
  [216] = {.lex_state = 137},
  [217] = {.lex_state = 117},
  [218] = {.lex_state = 137},
  [219] = {.lex_state = 117},
  [220] = {.lex_state = 137},
  [221] = {.lex_state = 244, .external_lex_state = 2},
  [222] = {.lex_state = 184},
  [223] = {.lex_state = 123},
  [224] = {.lex_state = 142, .external_lex_state = 2},
  [225] = {.lex_state = 244, .external_lex_state = 2},
  [226] = {.lex_state = 244, .external_lex_state = 2},
  [227] = {.lex_state = 246, .external_lex_state = 2},
  [228] = {.lex_state = 246, .external_lex_state = 2},
  [229] = {.lex_state = 246, .external_lex_state = 2},
  [230] = {.lex_state = 246, .external_lex_state = 2},
  [231] = {.lex_state = 241, .external_lex_state = 5},
  [232] = {.lex_state = 246, .external_lex_state = 2},
  [233] = {.lex_state = 246, .external_lex_state = 2},
  [234] = {.lex_state = 206, .external_lex_state = 2},
  [235] = {.lex_state = 206, .external_lex_state = 2},
  [236] = {.lex_state = 244, .external_lex_state = 2},
  [237] = {.lex_state = 246, .external_lex_state = 2},
  [238] = {.lex_state = 142, .external_lex_state = 2},
  [239] = {.lex_state = 142, .external_lex_state = 2},
  [240] = {.lex_state = 244, .external_lex_state = 2},
  [241] = {.lex_state = 244, .external_lex_state = 2},
  [242] = {.lex_state = 246, .external_lex_state = 2},
  [243] = {.lex_state = 142, .external_lex_state = 2},
  [244] = {.lex_state = 142, .external_lex_state = 2},
  [245] = {.lex_state = 117},
  [246] = {.lex_state = 142, .external_lex_state = 2},
  [247] = {.lex_state = 264, .external_lex_state = 2},
  [248] = {.lex_state = 165},
  [249] = {.lex_state = 204, .external_lex_state = 2},
  [250] = {.lex_state = 169, .external_lex_state = 2},
  [251] = {.lex_state = 137},
  [252] = {.lex_state = 169, .external_lex_state = 2},
  [253] = {.lex_state = 169, .external_lex_state = 2},
  [254] = {.lex_state = 234},
  [255] = {.lex_state = 212},
  [256] = {.lex_state = 198, .external_lex_state = 2},
  [257] = {.lex_state = 198, .external_lex_state = 2},
  [258] = {.lex_state = 204, .external_lex_state = 2},
  [259] = {.lex_state = 165},
  [260] = {.lex_state = 165},
  [261] = {.lex_state = 180},
  [262] = {.lex_state = 250, .external_lex_state = 2},
  [263] = {.lex_state = 165},
  [264] = {.lex_state = 256},
  [265] = {.lex_state = 252},
  [266] = {.lex_state = 252},
  [267] = {.lex_state = 165},
  [268] = {.lex_state = 212},
  [269] = {.lex_state = 212},
  [270] = {.lex_state = 258},
  [271] = {.lex_state = 258},
  [272] = {.lex_state = 258},
  [273] = {.lex_state = 266},
  [274] = {.lex_state = 266},
  [275] = {.lex_state = 165},
  [276] = {.lex_state = 258},
  [277] = {.lex_state = 258},
  [278] = {.lex_state = 165},
  [279] = {.lex_state = 266},
  [280] = {.lex_state = 266},
  [281] = {.lex_state = 198, .external_lex_state = 2},
  [282] = {.lex_state = 198, .external_lex_state = 2},
  [283] = {.lex_state = 117},
  [284] = {.lex_state = 198, .external_lex_state = 2},
  [285] = {.lex_state = 204, .external_lex_state = 2},
  [286] = {.lex_state = 204, .external_lex_state = 2},
  [287] = {.lex_state = 117},
  [288] = {.lex_state = 204, .external_lex_state = 2},
  [289] = {.lex_state = 241, .external_lex_state = 5},
  [290] = {.lex_state = 241, .external_lex_state = 5},
  [291] = {.lex_state = 234},
  [292] = {.lex_state = 241, .external_lex_state = 5},
  [293] = {.lex_state = 204, .external_lex_state = 2},
  [294] = {.lex_state = 266},
  [295] = {.lex_state = 266},
  [296] = {.lex_state = 246, .external_lex_state = 2},
  [297] = {.lex_state = 246, .external_lex_state = 2},
  [298] = {.lex_state = 244, .external_lex_state = 2},
  [299] = {.lex_state = 137},
  [300] = {.lex_state = 244, .external_lex_state = 2},
  [301] = {.lex_state = 244, .external_lex_state = 2},
  [302] = {.lex_state = 234},
  [303] = {.lex_state = 212},
  [304] = {.lex_state = 244, .external_lex_state = 2},
  [305] = {.lex_state = 244, .external_lex_state = 2},
  [306] = {.lex_state = 246, .external_lex_state = 2},
  [307] = {.lex_state = 246, .external_lex_state = 2},
  [308] = {.lex_state = 241, .external_lex_state = 5},
  [309] = {.lex_state = 246, .external_lex_state = 2},
  [310] = {.lex_state = 244, .external_lex_state = 2},
  [311] = {.lex_state = 244, .external_lex_state = 2},
  [312] = {.lex_state = 246, .external_lex_state = 2},
  [313] = {.lex_state = 266},
  [314] = {.lex_state = 266},
  [315] = {.lex_state = 165},
  [316] = {.lex_state = 264, .external_lex_state = 2},
  [317] = {.lex_state = 169, .external_lex_state = 2},
  [318] = {.lex_state = 169, .external_lex_state = 2},
  [319] = {.lex_state = 117},
  [320] = {.lex_state = 169, .external_lex_state = 2},
  [321] = {.lex_state = 204, .external_lex_state = 2},
  [322] = {.lex_state = 204, .external_lex_state = 2},
  [323] = {.lex_state = 230, .external_lex_state = 2},
  [324] = {.lex_state = 165},
  [325] = {.lex_state = 256},
  [326] = {.lex_state = 268, .external_lex_state = 2},
  [327] = {.lex_state = 268, .external_lex_state = 2},
  [328] = {.lex_state = 165},
  [329] = {.lex_state = 258},
  [330] = {.lex_state = 258},
  [331] = {.lex_state = 182},
  [332] = {.lex_state = 182},
  [333] = {.lex_state = 165},
  [334] = {.lex_state = 258},
  [335] = {.lex_state = 239},
  [336] = {.lex_state = 239},
  [337] = {.lex_state = 266},
  [338] = {.lex_state = 266},
  [339] = {.lex_state = 266},
  [340] = {.lex_state = 266},
  [341] = {.lex_state = 241, .external_lex_state = 5},
  [342] = {.lex_state = 117},
  [343] = {.lex_state = 137},
  [344] = {.lex_state = 137},
  [345] = {.lex_state = 244, .external_lex_state = 2},
  [346] = {.lex_state = 244, .external_lex_state = 2},
  [347] = {.lex_state = 117},
  [348] = {.lex_state = 244, .external_lex_state = 2},
  [349] = {.lex_state = 246, .external_lex_state = 2},
  [350] = {.lex_state = 246, .external_lex_state = 2},
  [351] = {.lex_state = 246, .external_lex_state = 2},
  [352] = {.lex_state = 142, .external_lex_state = 2},
  [353] = {.lex_state = 142, .external_lex_state = 2},
  [354] = {.lex_state = 165},
  [355] = {.lex_state = 266},
  [356] = {.lex_state = 266},
  [357] = {.lex_state = 230, .external_lex_state = 2},
  [358] = {.lex_state = 165},
  [359] = {.lex_state = 258},
  [360] = {.lex_state = 268, .external_lex_state = 2},
  [361] = {.lex_state = 258},
  [362] = {.lex_state = 268, .external_lex_state = 2},
  [363] = {.lex_state = 165},
  [364] = {.lex_state = 165},
  [365] = {.lex_state = 198, .external_lex_state = 2},
  [366] = {.lex_state = 198, .external_lex_state = 2},
  [367] = {.lex_state = 204, .external_lex_state = 2},
  [368] = {.lex_state = 204, .external_lex_state = 2},
  [369] = {.lex_state = 266},
  [370] = {.lex_state = 266},
  [371] = {.lex_state = 266},
  [372] = {.lex_state = 266},
  [373] = {.lex_state = 169, .external_lex_state = 2},
  [374] = {.lex_state = 169, .external_lex_state = 2},
  [375] = {.lex_state = 258},
  [376] = {.lex_state = 258},
  [377] = {.lex_state = 241, .external_lex_state = 5},
  [378] = {.lex_state = 241, .external_lex_state = 5},
  [379] = {.lex_state = 244, .external_lex_state = 2},
  [380] = {.lex_state = 244, .external_lex_state = 2},
  [381] = {.lex_state = 270, .external_lex_state = 2},
  [382] = {.lex_state = 165},
  [383] = {.lex_state = 230, .external_lex_state = 2},
  [384] = {.lex_state = 165},
  [385] = {.lex_state = 165},
  [386] = {.lex_state = 273, .external_lex_state = 2},
  [387] = {.lex_state = 125, .external_lex_state = 2},
  [388] = {.lex_state = 333, .external_lex_state = 6},
  [389] = {.lex_state = 338, .external_lex_state = 2},
  [390] = {.lex_state = 117, .external_lex_state = 4},
  [391] = {.lex_state = 342, .external_lex_state = 2},
  [392] = {.lex_state = 333, .external_lex_state = 6},
  [393] = {.lex_state = 117},
  [394] = {.lex_state = 202, .external_lex_state = 3},
  [395] = {.lex_state = 347, .external_lex_state = 2},
  [396] = {.lex_state = 395, .external_lex_state = 2},
  [397] = {.lex_state = 241, .external_lex_state = 5},
  [398] = {.lex_state = 241, .external_lex_state = 5},
  [399] = {.lex_state = 395, .external_lex_state = 2},
  [400] = {.lex_state = 106},
  [401] = {.lex_state = 214, .external_lex_state = 2},
  [402] = {.lex_state = 165},
  [403] = {.lex_state = 165},
  [404] = {.lex_state = 252},
  [405] = {.lex_state = 256},
  [406] = {.lex_state = 258},
  [407] = {.lex_state = 165},
  [408] = {.lex_state = 397},
  [409] = {.lex_state = 169, .external_lex_state = 2},
  [410] = {.lex_state = 399, .external_lex_state = 2},
  [411] = {.lex_state = 333, .external_lex_state = 6},
  [412] = {.lex_state = 342, .external_lex_state = 2},
  [413] = {.lex_state = 409, .external_lex_state = 2},
  [414] = {.lex_state = 395, .external_lex_state = 2},
  [415] = {.lex_state = 395, .external_lex_state = 2},
  [416] = {.lex_state = 150, .external_lex_state = 2},
  [417] = {.lex_state = 252},
  [418] = {.lex_state = 258},
  [419] = {.lex_state = 411, .external_lex_state = 2},
  [420] = {.lex_state = 142, .external_lex_state = 2},
  [421] = {.lex_state = 395, .external_lex_state = 2},
  [422] = {.lex_state = 137},
  [423] = {.lex_state = 241, .external_lex_state = 5},
  [424] = {.lex_state = 258},
  [425] = {.lex_state = 230, .external_lex_state = 2},
  [426] = {.lex_state = 258},
  [427] = {.lex_state = 268, .external_lex_state = 2},
  [428] = {.lex_state = 413},
  [429] = {.lex_state = 106},
  [430] = {.lex_state = 415, .external_lex_state = 2},
  [431] = {.lex_state = 266},
  [432] = {.lex_state = 117},
  [433] = {.lex_state = 266},
  [434] = {.lex_state = 395, .external_lex_state = 2},
  [435] = {.lex_state = 395, .external_lex_state = 2},
  [436] = {.lex_state = 137},
  [437] = {.lex_state = 417, .external_lex_state = 2},
  [438] = {.lex_state = 184},
  [439] = {.lex_state = 123},
  [440] = {.lex_state = 142, .external_lex_state = 2},
  [441] = {.lex_state = 417, .external_lex_state = 2},
  [442] = {.lex_state = 399, .external_lex_state = 2},
  [443] = {.lex_state = 333, .external_lex_state = 6},
  [444] = {.lex_state = 333, .external_lex_state = 6},
  [445] = {.lex_state = 137},
  [446] = {.lex_state = 409, .external_lex_state = 2},
  [447] = {.lex_state = 184},
  [448] = {.lex_state = 123},
  [449] = {.lex_state = 142, .external_lex_state = 2},
  [450] = {.lex_state = 409, .external_lex_state = 2},
  [451] = {.lex_state = 232},
  [452] = {.lex_state = 165},
  [453] = {.lex_state = 395, .external_lex_state = 2},
  [454] = {.lex_state = 117},
  [455] = {.lex_state = 165},
  [456] = {.lex_state = 342, .external_lex_state = 2},
  [457] = {.lex_state = 333, .external_lex_state = 6},
  [458] = {.lex_state = 258},
  [459] = {.lex_state = 165},
  [460] = {.lex_state = 256},
  [461] = {.lex_state = 165},
  [462] = {.lex_state = 137},
  [463] = {.lex_state = 411, .external_lex_state = 2},
  [464] = {.lex_state = 184},
  [465] = {.lex_state = 123},
  [466] = {.lex_state = 142, .external_lex_state = 2},
  [467] = {.lex_state = 411, .external_lex_state = 2},
  [468] = {.lex_state = 395, .external_lex_state = 2},
  [469] = {.lex_state = 419, .external_lex_state = 2},
  [470] = {.lex_state = 137},
  [471] = {.lex_state = 142, .external_lex_state = 2},
  [472] = {.lex_state = 423, .external_lex_state = 2},
  [473] = {.lex_state = 395, .external_lex_state = 2},
  [474] = {.lex_state = 399, .external_lex_state = 2},
  [475] = {.lex_state = 395, .external_lex_state = 2},
  [476] = {.lex_state = 117},
  [477] = {.lex_state = 137},
  [478] = {.lex_state = 415, .external_lex_state = 2},
  [479] = {.lex_state = 184},
  [480] = {.lex_state = 123},
  [481] = {.lex_state = 142, .external_lex_state = 2},
  [482] = {.lex_state = 415, .external_lex_state = 2},
  [483] = {.lex_state = 415, .external_lex_state = 2},
  [484] = {.lex_state = 395, .external_lex_state = 2},
  [485] = {.lex_state = 137},
  [486] = {.lex_state = 395, .external_lex_state = 2},
  [487] = {.lex_state = 184},
  [488] = {.lex_state = 123},
  [489] = {.lex_state = 142, .external_lex_state = 2},
  [490] = {.lex_state = 395, .external_lex_state = 2},
  [491] = {.lex_state = 333, .external_lex_state = 6},
  [492] = {.lex_state = 417, .external_lex_state = 2},
  [493] = {.lex_state = 137},
  [494] = {.lex_state = 417, .external_lex_state = 2},
  [495] = {.lex_state = 417, .external_lex_state = 2},
  [496] = {.lex_state = 234},
  [497] = {.lex_state = 212},
  [498] = {.lex_state = 409, .external_lex_state = 2},
  [499] = {.lex_state = 137},
  [500] = {.lex_state = 409, .external_lex_state = 2},
  [501] = {.lex_state = 409, .external_lex_state = 2},
  [502] = {.lex_state = 234},
  [503] = {.lex_state = 212},
  [504] = {.lex_state = 258},
  [505] = {.lex_state = 409, .external_lex_state = 2},
  [506] = {.lex_state = 409, .external_lex_state = 2},
  [507] = {.lex_state = 165},
  [508] = {.lex_state = 411, .external_lex_state = 2},
  [509] = {.lex_state = 137},
  [510] = {.lex_state = 411, .external_lex_state = 2},
  [511] = {.lex_state = 411, .external_lex_state = 2},
  [512] = {.lex_state = 234},
  [513] = {.lex_state = 212},
  [514] = {.lex_state = 415, .external_lex_state = 2},
  [515] = {.lex_state = 395, .external_lex_state = 2},
  [516] = {.lex_state = 419, .external_lex_state = 2},
  [517] = {.lex_state = 137},
  [518] = {.lex_state = 212},
  [519] = {.lex_state = 415, .external_lex_state = 2},
  [520] = {.lex_state = 395, .external_lex_state = 2},
  [521] = {.lex_state = 395, .external_lex_state = 2},
  [522] = {.lex_state = 395, .external_lex_state = 2},
  [523] = {.lex_state = 415, .external_lex_state = 2},
  [524] = {.lex_state = 137},
  [525] = {.lex_state = 415, .external_lex_state = 2},
  [526] = {.lex_state = 415, .external_lex_state = 2},
  [527] = {.lex_state = 234},
  [528] = {.lex_state = 212},
  [529] = {.lex_state = 415, .external_lex_state = 2},
  [530] = {.lex_state = 415, .external_lex_state = 2},
  [531] = {.lex_state = 395, .external_lex_state = 2},
  [532] = {.lex_state = 395, .external_lex_state = 2},
  [533] = {.lex_state = 137},
  [534] = {.lex_state = 395, .external_lex_state = 2},
  [535] = {.lex_state = 395, .external_lex_state = 2},
  [536] = {.lex_state = 234},
  [537] = {.lex_state = 212},
  [538] = {.lex_state = 417, .external_lex_state = 2},
  [539] = {.lex_state = 417, .external_lex_state = 2},
  [540] = {.lex_state = 117},
  [541] = {.lex_state = 417, .external_lex_state = 2},
  [542] = {.lex_state = 409, .external_lex_state = 2},
  [543] = {.lex_state = 409, .external_lex_state = 2},
  [544] = {.lex_state = 117},
  [545] = {.lex_state = 409, .external_lex_state = 2},
  [546] = {.lex_state = 165},
  [547] = {.lex_state = 258},
  [548] = {.lex_state = 411, .external_lex_state = 2},
  [549] = {.lex_state = 411, .external_lex_state = 2},
  [550] = {.lex_state = 117},
  [551] = {.lex_state = 411, .external_lex_state = 2},
  [552] = {.lex_state = 415, .external_lex_state = 2},
  [553] = {.lex_state = 395, .external_lex_state = 2},
  [554] = {.lex_state = 419, .external_lex_state = 2},
  [555] = {.lex_state = 419, .external_lex_state = 2},
  [556] = {.lex_state = 415, .external_lex_state = 2},
  [557] = {.lex_state = 395, .external_lex_state = 2},
  [558] = {.lex_state = 415, .external_lex_state = 2},
  [559] = {.lex_state = 415, .external_lex_state = 2},
  [560] = {.lex_state = 117},
  [561] = {.lex_state = 415, .external_lex_state = 2},
  [562] = {.lex_state = 395, .external_lex_state = 2},
  [563] = {.lex_state = 395, .external_lex_state = 2},
  [564] = {.lex_state = 117},
  [565] = {.lex_state = 395, .external_lex_state = 2},
  [566] = {.lex_state = 266},
  [567] = {.lex_state = 266},
  [568] = {.lex_state = 266},
  [569] = {.lex_state = 266},
  [570] = {.lex_state = 165},
  [571] = {.lex_state = 266},
  [572] = {.lex_state = 266},
  [573] = {.lex_state = 395, .external_lex_state = 2},
  [574] = {.lex_state = 395, .external_lex_state = 2},
  [575] = {.lex_state = 266},
  [576] = {.lex_state = 266},
  [577] = {.lex_state = 266},
  [578] = {.lex_state = 266},
  [579] = {.lex_state = 417, .external_lex_state = 2},
  [580] = {.lex_state = 417, .external_lex_state = 2},
  [581] = {.lex_state = 409, .external_lex_state = 2},
  [582] = {.lex_state = 409, .external_lex_state = 2},
  [583] = {.lex_state = 411, .external_lex_state = 2},
  [584] = {.lex_state = 411, .external_lex_state = 2},
  [585] = {.lex_state = 415, .external_lex_state = 2},
  [586] = {.lex_state = 415, .external_lex_state = 2},
  [587] = {.lex_state = 395, .external_lex_state = 2},
  [588] = {.lex_state = 395, .external_lex_state = 2},
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
    [sym_program] = STATE(16),
    [sym__terminated_statement] = STATE(401),
    [sym_for_statement] = STATE(402),
    [sym_while_statement] = STATE(402),
    [sym_do_group] = STATE(403),
    [sym_if_statement] = STATE(402),
    [sym_elif_clause] = STATE(404),
    [sym_else_clause] = STATE(405),
    [sym_case_statement] = STATE(402),
    [sym_case_item] = STATE(406),
    [sym_function_definition] = STATE(402),
    [sym_compound_command] = STATE(407),
    [sym_bracket_command] = STATE(402),
    [sym_command] = STATE(408),
    [sym_pipeline] = STATE(402),
    [sym_list] = STATE(402),
    [sym_subshell] = STATE(402),
    [sym_environment_variable_assignment] = STATE(409),
    [sym_quoted_argument] = STATE(410),
    [sym_expansion] = STATE(411),
    [sym_operator_expansion] = STATE(411),
    [sym_command_substitution] = STATE(412),
    [sym_file_redirect] = STATE(413),
    [sym_heredoc_redirect] = STATE(414),
    [sym_heredoc] = STATE(415),
    [aux_sym_program_repeat1] = STATE(416),
    [aux_sym_if_statement_repeat1] = STATE(417),
    [aux_sym_case_statement_repeat1] = STATE(418),
    [aux_sym_bracket_command_repeat1] = STATE(419),
    [aux_sym_command_repeat1] = STATE(420),
    [aux_sym_command_repeat2] = STATE(421),
    [aux_sym_quoted_argument_repeat1] = STATE(422),
    [aux_sym_heredoc_repeat1] = STATE(423),
    [sym__simple_heredoc] = ACTIONS(1),
    [sym__heredoc_beginning] = ACTIONS(3),
    [sym__heredoc_middle] = ACTIONS(5),
    [sym__heredoc_end] = ACTIONS(7),
    [sym_file_descriptor] = ACTIONS(9),
    [sym__empty_value] = ACTIONS(11),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_for] = ACTIONS(15),
    [anon_sym_in] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(19),
    [anon_sym_do] = ACTIONS(21),
    [anon_sym_done] = ACTIONS(23),
    [anon_sym_if] = ACTIONS(25),
    [anon_sym_then] = ACTIONS(27),
    [anon_sym_fi] = ACTIONS(29),
    [anon_sym_elif] = ACTIONS(31),
    [anon_sym_else] = ACTIONS(33),
    [anon_sym_case] = ACTIONS(35),
    [anon_sym_esac] = ACTIONS(37),
    [anon_sym_RPAREN] = ACTIONS(39),
    [anon_sym_function] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_RBRACK] = ACTIONS(51),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(55),
    [anon_sym_PIPE] = ACTIONS(57),
    [anon_sym_PIPE_PIPE] = ACTIONS(59),
    [anon_sym_EQ] = ACTIONS(61),
    [anon_sym_DQUOTE] = ACTIONS(63),
    [anon_sym_DOLLAR] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(67),
    [anon_sym_GT_GT] = ACTIONS(69),
    [anon_sym_LT_AMP] = ACTIONS(69),
    [anon_sym_GT_AMP] = ACTIONS(69),
    [anon_sym_LT_LT] = ACTIONS(71),
    [anon_sym_LT_LT_DASH] = ACTIONS(73),
    [sym_comment] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(77),
    [anon_sym_AMP] = ACTIONS(77),
  },
  [1] = {
    [sym_program] = STATE(16),
    [sym__terminated_statement] = STATE(17),
    [sym_for_statement] = STATE(18),
    [sym_while_statement] = STATE(18),
    [sym_if_statement] = STATE(18),
    [sym_case_statement] = STATE(18),
    [sym_function_definition] = STATE(18),
    [sym_bracket_command] = STATE(18),
    [sym_command] = STATE(18),
    [sym_pipeline] = STATE(18),
    [sym_list] = STATE(18),
    [sym_subshell] = STATE(18),
    [sym_environment_variable_assignment] = STATE(19),
    [sym_quoted_argument] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(20),
    [aux_sym_program_repeat1] = STATE(21),
    [aux_sym_command_repeat1] = STATE(22),
    [sym_file_descriptor] = ACTIONS(79),
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_for] = ACTIONS(83),
    [anon_sym_while] = ACTIONS(85),
    [anon_sym_if] = ACTIONS(87),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_function] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(97),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_single_quoted_argument] = ACTIONS(103),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(109),
    [sym_comment] = ACTIONS(75),
  },
  [2] = {
    [anon_sym_LT] = ACTIONS(111),
    [anon_sym_GT] = ACTIONS(111),
    [anon_sym_GT_GT] = ACTIONS(113),
    [anon_sym_AMP_GT] = ACTIONS(111),
    [anon_sym_AMP_GT_GT] = ACTIONS(113),
    [anon_sym_LT_AMP] = ACTIONS(113),
    [anon_sym_GT_AMP] = ACTIONS(113),
    [sym_comment] = ACTIONS(75),
  },
  [3] = {
    [sym_word] = ACTIONS(115),
    [sym_comment] = ACTIONS(75),
  },
  [4] = {
    [sym__terminated_statement] = STATE(25),
    [sym_for_statement] = STATE(26),
    [sym_while_statement] = STATE(26),
    [sym_if_statement] = STATE(26),
    [sym_case_statement] = STATE(26),
    [sym_function_definition] = STATE(26),
    [sym_bracket_command] = STATE(26),
    [sym_command] = STATE(26),
    [sym_pipeline] = STATE(26),
    [sym_list] = STATE(26),
    [sym_subshell] = STATE(26),
    [sym_environment_variable_assignment] = STATE(27),
    [sym_quoted_argument] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(20),
    [aux_sym_command_repeat1] = STATE(22),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_for] = ACTIONS(83),
    [anon_sym_while] = ACTIONS(85),
    [anon_sym_if] = ACTIONS(87),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_function] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(97),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_single_quoted_argument] = ACTIONS(103),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(109),
    [sym_comment] = ACTIONS(75),
  },
  [5] = {
    [sym__terminated_statement] = STATE(28),
    [sym_for_statement] = STATE(26),
    [sym_while_statement] = STATE(26),
    [sym_if_statement] = STATE(26),
    [sym_case_statement] = STATE(26),
    [sym_function_definition] = STATE(26),
    [sym_bracket_command] = STATE(26),
    [sym_command] = STATE(26),
    [sym_pipeline] = STATE(26),
    [sym_list] = STATE(26),
    [sym_subshell] = STATE(26),
    [sym_environment_variable_assignment] = STATE(27),
    [sym_quoted_argument] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(20),
    [aux_sym_command_repeat1] = STATE(22),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_for] = ACTIONS(83),
    [anon_sym_while] = ACTIONS(85),
    [anon_sym_if] = ACTIONS(87),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_function] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(97),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_single_quoted_argument] = ACTIONS(103),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(109),
    [sym_comment] = ACTIONS(75),
  },
  [6] = {
    [sym_quoted_argument] = STATE(30),
    [sym_expansion] = STATE(30),
    [sym_operator_expansion] = STATE(30),
    [sym_command_substitution] = STATE(30),
    [anon_sym_DQUOTE] = ACTIONS(117),
    [sym_single_quoted_argument] = ACTIONS(119),
    [anon_sym_DOLLAR] = ACTIONS(121),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(123),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(125),
    [sym_word] = ACTIONS(127),
    [sym_comment] = ACTIONS(75),
  },
  [7] = {
    [sym_leading_word] = ACTIONS(129),
    [sym_comment] = ACTIONS(75),
  },
  [8] = {
    [sym__terminated_statement] = STATE(17),
    [sym_for_statement] = STATE(18),
    [sym_while_statement] = STATE(18),
    [sym_if_statement] = STATE(18),
    [sym_case_statement] = STATE(18),
    [sym_function_definition] = STATE(18),
    [sym_bracket_command] = STATE(18),
    [sym_command] = STATE(18),
    [sym_pipeline] = STATE(18),
    [sym_list] = STATE(18),
    [sym_subshell] = STATE(18),
    [sym_environment_variable_assignment] = STATE(19),
    [sym_quoted_argument] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(20),
    [aux_sym_program_repeat1] = STATE(37),
    [aux_sym_command_repeat1] = STATE(22),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_for] = ACTIONS(83),
    [anon_sym_while] = ACTIONS(85),
    [anon_sym_if] = ACTIONS(87),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(131),
    [anon_sym_function] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(97),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_single_quoted_argument] = ACTIONS(103),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(109),
    [sym_comment] = ACTIONS(75),
  },
  [9] = {
    [sym_quoted_argument] = STATE(39),
    [sym_expansion] = STATE(39),
    [sym_operator_expansion] = STATE(39),
    [sym_command_substitution] = STATE(39),
    [aux_sym_bracket_command_repeat1] = STATE(44),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [sym_single_quoted_argument] = ACTIONS(135),
    [anon_sym_DOLLAR] = ACTIONS(137),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(139),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(141),
    [sym_word] = ACTIONS(143),
    [sym_comment] = ACTIONS(75),
  },
  [10] = {
    [sym_quoted_argument] = STATE(39),
    [sym_expansion] = STATE(39),
    [sym_operator_expansion] = STATE(39),
    [sym_command_substitution] = STATE(39),
    [aux_sym_bracket_command_repeat1] = STATE(45),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [sym_single_quoted_argument] = ACTIONS(135),
    [anon_sym_DOLLAR] = ACTIONS(137),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(139),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(141),
    [sym_word] = ACTIONS(143),
    [sym_comment] = ACTIONS(75),
  },
  [11] = {
    [sym_file_redirect] = STATE(50),
    [sym_heredoc_redirect] = STATE(50),
    [aux_sym_command_repeat2] = STATE(51),
    [sym_file_descriptor] = ACTIONS(145),
    [anon_sym_SEMI_SEMI] = ACTIONS(147),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(149),
    [anon_sym_PIPE] = ACTIONS(147),
    [anon_sym_PIPE_AMP] = ACTIONS(147),
    [anon_sym_AMP_AMP] = ACTIONS(147),
    [anon_sym_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(151),
    [anon_sym_GT_GT] = ACTIONS(151),
    [anon_sym_AMP_GT] = ACTIONS(151),
    [anon_sym_AMP_GT_GT] = ACTIONS(151),
    [anon_sym_LT_AMP] = ACTIONS(151),
    [anon_sym_GT_AMP] = ACTIONS(151),
    [anon_sym_LT_LT] = ACTIONS(153),
    [anon_sym_LT_LT_DASH] = ACTIONS(153),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(147),
    [anon_sym_LF] = ACTIONS(147),
    [anon_sym_AMP] = ACTIONS(147),
  },
  [12] = {
    [sym_expansion] = STATE(53),
    [sym_operator_expansion] = STATE(53),
    [sym_command_substitution] = STATE(53),
    [aux_sym_quoted_argument_repeat1] = STATE(57),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [sym__quoted_chars] = ACTIONS(159),
    [anon_sym_DOLLAR] = ACTIONS(161),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(163),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(165),
    [sym_comment] = ACTIONS(155),
  },
  [13] = {
    [sym_command] = STATE(62),
    [sym_environment_variable_assignment] = STATE(20),
    [sym_quoted_argument] = STATE(58),
    [sym_command_substitution] = STATE(58),
    [sym_file_redirect] = STATE(20),
    [aux_sym_command_repeat1] = STATE(63),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [sym_single_quoted_argument] = ACTIONS(171),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(173),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(175),
    [sym_comment] = ACTIONS(75),
  },
  [14] = {
    [sym_quoted_argument] = STATE(65),
    [sym_expansion] = STATE(65),
    [sym_operator_expansion] = STATE(65),
    [sym_command_substitution] = STATE(65),
    [anon_sym_DQUOTE] = ACTIONS(177),
    [sym_single_quoted_argument] = ACTIONS(179),
    [anon_sym_DOLLAR] = ACTIONS(181),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(183),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(185),
    [sym_word] = ACTIONS(187),
    [sym_comment] = ACTIONS(75),
  },
  [15] = {
    [sym_file_redirect] = STATE(50),
    [sym_heredoc_redirect] = STATE(50),
    [aux_sym_command_repeat2] = STATE(73),
    [sym_file_descriptor] = ACTIONS(145),
    [anon_sym_SEMI_SEMI] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(191),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(193),
    [anon_sym_PIPE] = ACTIONS(189),
    [anon_sym_PIPE_AMP] = ACTIONS(189),
    [anon_sym_AMP_AMP] = ACTIONS(189),
    [anon_sym_PIPE_PIPE] = ACTIONS(189),
    [anon_sym_EQ] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(151),
    [anon_sym_GT_GT] = ACTIONS(151),
    [anon_sym_AMP_GT] = ACTIONS(151),
    [anon_sym_AMP_GT_GT] = ACTIONS(151),
    [anon_sym_LT_AMP] = ACTIONS(151),
    [anon_sym_GT_AMP] = ACTIONS(151),
    [anon_sym_LT_LT] = ACTIONS(153),
    [anon_sym_LT_LT_DASH] = ACTIONS(153),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(189),
    [anon_sym_LF] = ACTIONS(189),
    [anon_sym_AMP] = ACTIONS(189),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [sym_comment] = ACTIONS(75),
  },
  [17] = {
    [sym_file_descriptor] = ACTIONS(199),
    [ts_builtin_sym_end] = ACTIONS(199),
    [anon_sym_for] = ACTIONS(201),
    [anon_sym_while] = ACTIONS(201),
    [anon_sym_done] = ACTIONS(201),
    [anon_sym_if] = ACTIONS(201),
    [anon_sym_fi] = ACTIONS(201),
    [anon_sym_elif] = ACTIONS(201),
    [anon_sym_else] = ACTIONS(201),
    [anon_sym_case] = ACTIONS(201),
    [anon_sym_RPAREN] = ACTIONS(199),
    [anon_sym_SEMI_SEMI] = ACTIONS(199),
    [anon_sym_function] = ACTIONS(201),
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_RBRACE] = ACTIONS(199),
    [anon_sym_LBRACK] = ACTIONS(201),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(201),
    [anon_sym_COLON] = ACTIONS(199),
    [anon_sym_DQUOTE] = ACTIONS(199),
    [sym_single_quoted_argument] = ACTIONS(201),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(199),
    [anon_sym_LT] = ACTIONS(201),
    [anon_sym_GT] = ACTIONS(201),
    [anon_sym_GT_GT] = ACTIONS(201),
    [anon_sym_AMP_GT] = ACTIONS(201),
    [anon_sym_AMP_GT_GT] = ACTIONS(201),
    [anon_sym_LT_AMP] = ACTIONS(201),
    [anon_sym_GT_AMP] = ACTIONS(201),
    [sym_leading_word] = ACTIONS(203),
    [sym_comment] = ACTIONS(75),
  },
  [18] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(205),
    [anon_sym_PIPE] = ACTIONS(207),
    [anon_sym_PIPE_AMP] = ACTIONS(207),
    [anon_sym_AMP_AMP] = ACTIONS(209),
    [anon_sym_PIPE_PIPE] = ACTIONS(209),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(205),
    [anon_sym_LF] = ACTIONS(205),
    [anon_sym_AMP] = ACTIONS(205),
  },
  [19] = {
    [sym_file_descriptor] = ACTIONS(211),
    [anon_sym_SEMI_SEMI] = ACTIONS(205),
    [anon_sym_COLON] = ACTIONS(213),
    [anon_sym_PIPE] = ACTIONS(207),
    [anon_sym_PIPE_AMP] = ACTIONS(207),
    [anon_sym_AMP_AMP] = ACTIONS(209),
    [anon_sym_PIPE_PIPE] = ACTIONS(209),
    [anon_sym_DQUOTE] = ACTIONS(213),
    [sym_single_quoted_argument] = ACTIONS(213),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(213),
    [anon_sym_LT] = ACTIONS(213),
    [anon_sym_GT] = ACTIONS(213),
    [anon_sym_GT_GT] = ACTIONS(213),
    [anon_sym_AMP_GT] = ACTIONS(213),
    [anon_sym_AMP_GT_GT] = ACTIONS(213),
    [anon_sym_LT_AMP] = ACTIONS(213),
    [anon_sym_GT_AMP] = ACTIONS(213),
    [sym_leading_word] = ACTIONS(213),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(205),
    [anon_sym_LF] = ACTIONS(205),
    [anon_sym_AMP] = ACTIONS(205),
  },
  [20] = {
    [sym_file_descriptor] = ACTIONS(211),
    [anon_sym_COLON] = ACTIONS(211),
    [anon_sym_DQUOTE] = ACTIONS(211),
    [sym_single_quoted_argument] = ACTIONS(215),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(211),
    [anon_sym_LT] = ACTIONS(215),
    [anon_sym_GT] = ACTIONS(215),
    [anon_sym_GT_GT] = ACTIONS(215),
    [anon_sym_AMP_GT] = ACTIONS(215),
    [anon_sym_AMP_GT_GT] = ACTIONS(215),
    [anon_sym_LT_AMP] = ACTIONS(215),
    [anon_sym_GT_AMP] = ACTIONS(215),
    [sym_leading_word] = ACTIONS(213),
    [sym_comment] = ACTIONS(75),
  },
  [21] = {
    [sym__terminated_statement] = STATE(77),
    [sym_for_statement] = STATE(18),
    [sym_while_statement] = STATE(18),
    [sym_if_statement] = STATE(18),
    [sym_case_statement] = STATE(18),
    [sym_function_definition] = STATE(18),
    [sym_bracket_command] = STATE(18),
    [sym_command] = STATE(18),
    [sym_pipeline] = STATE(18),
    [sym_list] = STATE(18),
    [sym_subshell] = STATE(18),
    [sym_environment_variable_assignment] = STATE(19),
    [sym_quoted_argument] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(20),
    [aux_sym_command_repeat1] = STATE(22),
    [sym_file_descriptor] = ACTIONS(79),
    [ts_builtin_sym_end] = ACTIONS(217),
    [anon_sym_for] = ACTIONS(83),
    [anon_sym_while] = ACTIONS(85),
    [anon_sym_if] = ACTIONS(87),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_function] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(97),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_single_quoted_argument] = ACTIONS(103),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(109),
    [sym_comment] = ACTIONS(75),
  },
  [22] = {
    [sym_environment_variable_assignment] = STATE(80),
    [sym_quoted_argument] = STATE(78),
    [sym_command_substitution] = STATE(78),
    [sym_file_redirect] = STATE(80),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(219),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_single_quoted_argument] = ACTIONS(221),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(223),
    [sym_comment] = ACTIONS(75),
  },
  [23] = {
    [sym_quoted_argument] = STATE(81),
    [sym_expansion] = STATE(81),
    [sym_operator_expansion] = STATE(81),
    [sym_command_substitution] = STATE(81),
    [anon_sym_DQUOTE] = ACTIONS(177),
    [sym_single_quoted_argument] = ACTIONS(225),
    [anon_sym_DOLLAR] = ACTIONS(181),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(183),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(185),
    [sym_word] = ACTIONS(227),
    [sym_comment] = ACTIONS(75),
  },
  [24] = {
    [anon_sym_in] = ACTIONS(229),
    [sym_comment] = ACTIONS(75),
  },
  [25] = {
    [sym_do_group] = STATE(85),
    [anon_sym_do] = ACTIONS(231),
    [sym_comment] = ACTIONS(75),
  },
  [26] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(233),
    [anon_sym_PIPE] = ACTIONS(207),
    [anon_sym_PIPE_AMP] = ACTIONS(207),
    [anon_sym_AMP_AMP] = ACTIONS(209),
    [anon_sym_PIPE_PIPE] = ACTIONS(209),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(233),
    [anon_sym_LF] = ACTIONS(233),
    [anon_sym_AMP] = ACTIONS(233),
  },
  [27] = {
    [sym_file_descriptor] = ACTIONS(211),
    [anon_sym_SEMI_SEMI] = ACTIONS(233),
    [anon_sym_COLON] = ACTIONS(213),
    [anon_sym_PIPE] = ACTIONS(207),
    [anon_sym_PIPE_AMP] = ACTIONS(207),
    [anon_sym_AMP_AMP] = ACTIONS(209),
    [anon_sym_PIPE_PIPE] = ACTIONS(209),
    [anon_sym_DQUOTE] = ACTIONS(213),
    [sym_single_quoted_argument] = ACTIONS(213),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(213),
    [anon_sym_LT] = ACTIONS(213),
    [anon_sym_GT] = ACTIONS(213),
    [anon_sym_GT_GT] = ACTIONS(213),
    [anon_sym_AMP_GT] = ACTIONS(213),
    [anon_sym_AMP_GT_GT] = ACTIONS(213),
    [anon_sym_LT_AMP] = ACTIONS(213),
    [anon_sym_GT_AMP] = ACTIONS(213),
    [sym_leading_word] = ACTIONS(213),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(233),
    [anon_sym_LF] = ACTIONS(233),
    [anon_sym_AMP] = ACTIONS(233),
  },
  [28] = {
    [anon_sym_then] = ACTIONS(235),
    [sym_comment] = ACTIONS(75),
  },
  [29] = {
    [sym_expansion] = STATE(53),
    [sym_operator_expansion] = STATE(53),
    [sym_command_substitution] = STATE(53),
    [aux_sym_quoted_argument_repeat1] = STATE(89),
    [anon_sym_DQUOTE] = ACTIONS(237),
    [sym__quoted_chars] = ACTIONS(159),
    [anon_sym_DOLLAR] = ACTIONS(161),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(163),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(165),
    [sym_comment] = ACTIONS(155),
  },
  [30] = {
    [anon_sym_in] = ACTIONS(239),
    [anon_sym_SEMI_SEMI] = ACTIONS(241),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(241),
    [anon_sym_LF] = ACTIONS(241),
    [anon_sym_AMP] = ACTIONS(241),
  },
  [31] = {
    [anon_sym_DOLLAR] = ACTIONS(243),
    [sym_word] = ACTIONS(245),
    [sym_comment] = ACTIONS(75),
  },
  [32] = {
    [sym_leading_word] = ACTIONS(247),
    [sym_comment] = ACTIONS(75),
  },
  [33] = {
    [sym_command] = STATE(95),
    [sym_environment_variable_assignment] = STATE(20),
    [sym_quoted_argument] = STATE(58),
    [sym_command_substitution] = STATE(58),
    [sym_file_redirect] = STATE(20),
    [aux_sym_command_repeat1] = STATE(63),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [sym_single_quoted_argument] = ACTIONS(171),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(173),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(175),
    [sym_comment] = ACTIONS(75),
  },
  [34] = {
    [anon_sym_in] = ACTIONS(249),
    [anon_sym_SEMI_SEMI] = ACTIONS(251),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(251),
    [anon_sym_LF] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(251),
  },
  [35] = {
    [anon_sym_LPAREN] = ACTIONS(253),
    [sym_comment] = ACTIONS(75),
  },
  [36] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(255),
    [anon_sym_PIPE] = ACTIONS(255),
    [anon_sym_PIPE_AMP] = ACTIONS(255),
    [anon_sym_AMP_AMP] = ACTIONS(255),
    [anon_sym_PIPE_PIPE] = ACTIONS(255),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(255),
    [anon_sym_LF] = ACTIONS(255),
    [anon_sym_AMP] = ACTIONS(255),
  },
  [37] = {
    [sym__terminated_statement] = STATE(77),
    [sym_for_statement] = STATE(18),
    [sym_while_statement] = STATE(18),
    [sym_if_statement] = STATE(18),
    [sym_case_statement] = STATE(18),
    [sym_function_definition] = STATE(18),
    [sym_bracket_command] = STATE(18),
    [sym_command] = STATE(18),
    [sym_pipeline] = STATE(18),
    [sym_list] = STATE(18),
    [sym_subshell] = STATE(18),
    [sym_environment_variable_assignment] = STATE(19),
    [sym_quoted_argument] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(20),
    [aux_sym_command_repeat1] = STATE(22),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_for] = ACTIONS(83),
    [anon_sym_while] = ACTIONS(85),
    [anon_sym_if] = ACTIONS(87),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(257),
    [anon_sym_function] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(97),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_single_quoted_argument] = ACTIONS(103),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(109),
    [sym_comment] = ACTIONS(75),
  },
  [38] = {
    [sym_expansion] = STATE(53),
    [sym_operator_expansion] = STATE(53),
    [sym_command_substitution] = STATE(53),
    [aux_sym_quoted_argument_repeat1] = STATE(101),
    [anon_sym_DQUOTE] = ACTIONS(259),
    [sym__quoted_chars] = ACTIONS(159),
    [anon_sym_DOLLAR] = ACTIONS(161),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(163),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(165),
    [sym_comment] = ACTIONS(155),
  },
  [39] = {
    [anon_sym_RBRACK] = ACTIONS(261),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(261),
    [anon_sym_DQUOTE] = ACTIONS(263),
    [sym_single_quoted_argument] = ACTIONS(261),
    [anon_sym_DOLLAR] = ACTIONS(261),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(263),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(263),
    [sym_word] = ACTIONS(265),
    [sym_comment] = ACTIONS(75),
  },
  [40] = {
    [anon_sym_DOLLAR] = ACTIONS(267),
    [sym_word] = ACTIONS(269),
    [sym_comment] = ACTIONS(75),
  },
  [41] = {
    [sym_leading_word] = ACTIONS(271),
    [sym_comment] = ACTIONS(75),
  },
  [42] = {
    [sym_command] = STATE(105),
    [sym_environment_variable_assignment] = STATE(20),
    [sym_quoted_argument] = STATE(58),
    [sym_command_substitution] = STATE(58),
    [sym_file_redirect] = STATE(20),
    [aux_sym_command_repeat1] = STATE(63),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [sym_single_quoted_argument] = ACTIONS(171),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(173),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(175),
    [sym_comment] = ACTIONS(75),
  },
  [43] = {
    [anon_sym_RBRACK] = ACTIONS(273),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(273),
    [anon_sym_DQUOTE] = ACTIONS(275),
    [sym_single_quoted_argument] = ACTIONS(273),
    [anon_sym_DOLLAR] = ACTIONS(273),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(275),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(275),
    [sym_word] = ACTIONS(277),
    [sym_comment] = ACTIONS(75),
  },
  [44] = {
    [sym_quoted_argument] = STATE(107),
    [sym_expansion] = STATE(107),
    [sym_operator_expansion] = STATE(107),
    [sym_command_substitution] = STATE(107),
    [anon_sym_RBRACK] = ACTIONS(279),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [sym_single_quoted_argument] = ACTIONS(281),
    [anon_sym_DOLLAR] = ACTIONS(137),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(139),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(141),
    [sym_word] = ACTIONS(283),
    [sym_comment] = ACTIONS(75),
  },
  [45] = {
    [sym_quoted_argument] = STATE(107),
    [sym_expansion] = STATE(107),
    [sym_operator_expansion] = STATE(107),
    [sym_command_substitution] = STATE(107),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(279),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [sym_single_quoted_argument] = ACTIONS(281),
    [anon_sym_DOLLAR] = ACTIONS(137),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(139),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(141),
    [sym_word] = ACTIONS(283),
    [sym_comment] = ACTIONS(75),
  },
  [46] = {
    [anon_sym_LT] = ACTIONS(285),
    [anon_sym_GT] = ACTIONS(285),
    [anon_sym_GT_GT] = ACTIONS(287),
    [anon_sym_AMP_GT] = ACTIONS(285),
    [anon_sym_AMP_GT_GT] = ACTIONS(287),
    [anon_sym_LT_AMP] = ACTIONS(287),
    [anon_sym_GT_AMP] = ACTIONS(287),
    [sym_comment] = ACTIONS(75),
  },
  [47] = {
    [sym_quoted_argument] = STATE(111),
    [sym_expansion] = STATE(111),
    [sym_operator_expansion] = STATE(111),
    [sym_command_substitution] = STATE(111),
    [sym_file_redirect] = STATE(50),
    [sym_heredoc_redirect] = STATE(50),
    [aux_sym_bracket_command_repeat1] = STATE(116),
    [aux_sym_command_repeat2] = STATE(117),
    [sym_file_descriptor] = ACTIONS(145),
    [anon_sym_SEMI_SEMI] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(289),
    [anon_sym_PIPE_AMP] = ACTIONS(289),
    [anon_sym_AMP_AMP] = ACTIONS(289),
    [anon_sym_PIPE_PIPE] = ACTIONS(289),
    [anon_sym_DQUOTE] = ACTIONS(291),
    [sym_single_quoted_argument] = ACTIONS(293),
    [anon_sym_DOLLAR] = ACTIONS(295),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(297),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(299),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(151),
    [anon_sym_GT_GT] = ACTIONS(151),
    [anon_sym_AMP_GT] = ACTIONS(151),
    [anon_sym_AMP_GT_GT] = ACTIONS(151),
    [anon_sym_LT_AMP] = ACTIONS(151),
    [anon_sym_GT_AMP] = ACTIONS(151),
    [anon_sym_LT_LT] = ACTIONS(153),
    [anon_sym_LT_LT_DASH] = ACTIONS(153),
    [sym_word] = ACTIONS(301),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(289),
    [anon_sym_LF] = ACTIONS(289),
    [anon_sym_AMP] = ACTIONS(289),
  },
  [48] = {
    [sym_quoted_argument] = STATE(119),
    [sym_expansion] = STATE(119),
    [sym_operator_expansion] = STATE(119),
    [sym_command_substitution] = STATE(119),
    [anon_sym_DQUOTE] = ACTIONS(303),
    [sym_single_quoted_argument] = ACTIONS(305),
    [anon_sym_DOLLAR] = ACTIONS(307),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(309),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(311),
    [sym_word] = ACTIONS(313),
    [sym_comment] = ACTIONS(75),
  },
  [49] = {
    [sym_heredoc] = STATE(126),
    [sym__simple_heredoc] = ACTIONS(315),
    [sym__heredoc_beginning] = ACTIONS(317),
    [sym_comment] = ACTIONS(75),
  },
  [50] = {
    [sym_file_descriptor] = ACTIONS(319),
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
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(321),
    [anon_sym_LF] = ACTIONS(321),
    [anon_sym_AMP] = ACTIONS(321),
  },
  [51] = {
    [sym_file_redirect] = STATE(127),
    [sym_heredoc_redirect] = STATE(127),
    [sym_file_descriptor] = ACTIONS(145),
    [anon_sym_SEMI_SEMI] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(289),
    [anon_sym_PIPE_AMP] = ACTIONS(289),
    [anon_sym_AMP_AMP] = ACTIONS(289),
    [anon_sym_PIPE_PIPE] = ACTIONS(289),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(151),
    [anon_sym_GT_GT] = ACTIONS(151),
    [anon_sym_AMP_GT] = ACTIONS(151),
    [anon_sym_AMP_GT_GT] = ACTIONS(151),
    [anon_sym_LT_AMP] = ACTIONS(151),
    [anon_sym_GT_AMP] = ACTIONS(151),
    [anon_sym_LT_LT] = ACTIONS(153),
    [anon_sym_LT_LT_DASH] = ACTIONS(153),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(289),
    [anon_sym_LF] = ACTIONS(289),
    [anon_sym_AMP] = ACTIONS(289),
  },
  [52] = {
    [sym_file_descriptor] = ACTIONS(323),
    [anon_sym_SEMI_SEMI] = ACTIONS(325),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(325),
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
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(325),
    [anon_sym_LF] = ACTIONS(325),
    [anon_sym_AMP] = ACTIONS(325),
  },
  [53] = {
    [anon_sym_DQUOTE] = ACTIONS(327),
    [sym__quoted_chars] = ACTIONS(329),
    [anon_sym_DOLLAR] = ACTIONS(327),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(327),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(327),
    [sym_comment] = ACTIONS(155),
  },
  [54] = {
    [anon_sym_DOLLAR] = ACTIONS(331),
    [sym_word] = ACTIONS(333),
    [sym_comment] = ACTIONS(75),
  },
  [55] = {
    [sym_leading_word] = ACTIONS(335),
    [sym_comment] = ACTIONS(75),
  },
  [56] = {
    [sym_command] = STATE(131),
    [sym_environment_variable_assignment] = STATE(20),
    [sym_quoted_argument] = STATE(58),
    [sym_command_substitution] = STATE(58),
    [sym_file_redirect] = STATE(20),
    [aux_sym_command_repeat1] = STATE(63),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [sym_single_quoted_argument] = ACTIONS(171),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(173),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(175),
    [sym_comment] = ACTIONS(75),
  },
  [57] = {
    [sym_expansion] = STATE(133),
    [sym_operator_expansion] = STATE(133),
    [sym_command_substitution] = STATE(133),
    [anon_sym_DQUOTE] = ACTIONS(337),
    [sym__quoted_chars] = ACTIONS(339),
    [anon_sym_DOLLAR] = ACTIONS(161),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(163),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(165),
    [sym_comment] = ACTIONS(155),
  },
  [58] = {
    [sym_file_redirect] = STATE(138),
    [sym_heredoc_redirect] = STATE(138),
    [aux_sym_command_repeat2] = STATE(139),
    [sym_file_descriptor] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(147),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(343),
    [anon_sym_LT] = ACTIONS(345),
    [anon_sym_GT] = ACTIONS(345),
    [anon_sym_GT_GT] = ACTIONS(345),
    [anon_sym_AMP_GT] = ACTIONS(345),
    [anon_sym_AMP_GT_GT] = ACTIONS(345),
    [anon_sym_LT_AMP] = ACTIONS(345),
    [anon_sym_GT_AMP] = ACTIONS(345),
    [anon_sym_LT_LT] = ACTIONS(347),
    [anon_sym_LT_LT_DASH] = ACTIONS(347),
    [sym_comment] = ACTIONS(155),
  },
  [59] = {
    [sym_expansion] = STATE(53),
    [sym_operator_expansion] = STATE(53),
    [sym_command_substitution] = STATE(53),
    [aux_sym_quoted_argument_repeat1] = STATE(141),
    [anon_sym_DQUOTE] = ACTIONS(349),
    [sym__quoted_chars] = ACTIONS(159),
    [anon_sym_DOLLAR] = ACTIONS(161),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(163),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(165),
    [sym_comment] = ACTIONS(155),
  },
  [60] = {
    [sym_command] = STATE(142),
    [sym_environment_variable_assignment] = STATE(20),
    [sym_quoted_argument] = STATE(58),
    [sym_command_substitution] = STATE(58),
    [sym_file_redirect] = STATE(20),
    [aux_sym_command_repeat1] = STATE(63),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [sym_single_quoted_argument] = ACTIONS(171),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(173),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(175),
    [sym_comment] = ACTIONS(75),
  },
  [61] = {
    [sym_file_redirect] = STATE(138),
    [sym_heredoc_redirect] = STATE(138),
    [aux_sym_command_repeat2] = STATE(145),
    [sym_file_descriptor] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(189),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(351),
    [anon_sym_EQ] = ACTIONS(353),
    [anon_sym_LT] = ACTIONS(345),
    [anon_sym_GT] = ACTIONS(345),
    [anon_sym_GT_GT] = ACTIONS(345),
    [anon_sym_AMP_GT] = ACTIONS(345),
    [anon_sym_AMP_GT_GT] = ACTIONS(345),
    [anon_sym_LT_AMP] = ACTIONS(345),
    [anon_sym_GT_AMP] = ACTIONS(345),
    [anon_sym_LT_LT] = ACTIONS(347),
    [anon_sym_LT_LT_DASH] = ACTIONS(347),
    [sym_comment] = ACTIONS(155),
  },
  [62] = {
    [anon_sym_RPAREN] = ACTIONS(355),
    [sym_comment] = ACTIONS(75),
  },
  [63] = {
    [sym_environment_variable_assignment] = STATE(80),
    [sym_quoted_argument] = STATE(147),
    [sym_command_substitution] = STATE(147),
    [sym_file_redirect] = STATE(80),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(357),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [sym_single_quoted_argument] = ACTIONS(359),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(173),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(361),
    [sym_comment] = ACTIONS(75),
  },
  [64] = {
    [sym_expansion] = STATE(53),
    [sym_operator_expansion] = STATE(53),
    [sym_command_substitution] = STATE(53),
    [aux_sym_quoted_argument_repeat1] = STATE(150),
    [anon_sym_DQUOTE] = ACTIONS(363),
    [sym__quoted_chars] = ACTIONS(159),
    [anon_sym_DOLLAR] = ACTIONS(161),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(163),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(165),
    [sym_comment] = ACTIONS(155),
  },
  [65] = {
    [sym_file_descriptor] = ACTIONS(365),
    [anon_sym_COLON] = ACTIONS(365),
    [anon_sym_DQUOTE] = ACTIONS(365),
    [sym_single_quoted_argument] = ACTIONS(367),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(365),
    [anon_sym_LT] = ACTIONS(367),
    [anon_sym_GT] = ACTIONS(367),
    [anon_sym_GT_GT] = ACTIONS(367),
    [anon_sym_AMP_GT] = ACTIONS(367),
    [anon_sym_AMP_GT_GT] = ACTIONS(367),
    [anon_sym_LT_AMP] = ACTIONS(367),
    [anon_sym_GT_AMP] = ACTIONS(367),
    [sym_leading_word] = ACTIONS(369),
    [sym_comment] = ACTIONS(75),
  },
  [66] = {
    [anon_sym_DOLLAR] = ACTIONS(371),
    [sym_word] = ACTIONS(373),
    [sym_comment] = ACTIONS(75),
  },
  [67] = {
    [sym_leading_word] = ACTIONS(375),
    [sym_comment] = ACTIONS(75),
  },
  [68] = {
    [sym_command] = STATE(154),
    [sym_environment_variable_assignment] = STATE(20),
    [sym_quoted_argument] = STATE(58),
    [sym_command_substitution] = STATE(58),
    [sym_file_redirect] = STATE(20),
    [aux_sym_command_repeat1] = STATE(63),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [sym_single_quoted_argument] = ACTIONS(171),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(173),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(175),
    [sym_comment] = ACTIONS(75),
  },
  [69] = {
    [sym_file_descriptor] = ACTIONS(377),
    [anon_sym_COLON] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(377),
    [sym_single_quoted_argument] = ACTIONS(379),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(377),
    [anon_sym_LT] = ACTIONS(379),
    [anon_sym_GT] = ACTIONS(379),
    [anon_sym_GT_GT] = ACTIONS(379),
    [anon_sym_AMP_GT] = ACTIONS(379),
    [anon_sym_AMP_GT_GT] = ACTIONS(379),
    [anon_sym_LT_AMP] = ACTIONS(379),
    [anon_sym_GT_AMP] = ACTIONS(379),
    [sym_leading_word] = ACTIONS(381),
    [sym_comment] = ACTIONS(75),
  },
  [70] = {
    [anon_sym_RPAREN] = ACTIONS(383),
    [sym_comment] = ACTIONS(75),
  },
  [71] = {
    [sym_quoted_argument] = STATE(111),
    [sym_expansion] = STATE(111),
    [sym_operator_expansion] = STATE(111),
    [sym_command_substitution] = STATE(111),
    [sym_file_redirect] = STATE(50),
    [sym_heredoc_redirect] = STATE(50),
    [aux_sym_bracket_command_repeat1] = STATE(156),
    [aux_sym_command_repeat2] = STATE(157),
    [sym_file_descriptor] = ACTIONS(145),
    [anon_sym_SEMI_SEMI] = ACTIONS(385),
    [anon_sym_PIPE] = ACTIONS(385),
    [anon_sym_PIPE_AMP] = ACTIONS(385),
    [anon_sym_AMP_AMP] = ACTIONS(385),
    [anon_sym_PIPE_PIPE] = ACTIONS(385),
    [anon_sym_DQUOTE] = ACTIONS(291),
    [sym_single_quoted_argument] = ACTIONS(293),
    [anon_sym_DOLLAR] = ACTIONS(295),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(297),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(299),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(151),
    [anon_sym_GT_GT] = ACTIONS(151),
    [anon_sym_AMP_GT] = ACTIONS(151),
    [anon_sym_AMP_GT_GT] = ACTIONS(151),
    [anon_sym_LT_AMP] = ACTIONS(151),
    [anon_sym_GT_AMP] = ACTIONS(151),
    [anon_sym_LT_LT] = ACTIONS(153),
    [anon_sym_LT_LT_DASH] = ACTIONS(153),
    [sym_word] = ACTIONS(301),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(385),
    [anon_sym_LF] = ACTIONS(385),
    [anon_sym_AMP] = ACTIONS(385),
  },
  [72] = {
    [sym_quoted_argument] = STATE(158),
    [sym_expansion] = STATE(158),
    [sym_operator_expansion] = STATE(158),
    [sym_command_substitution] = STATE(158),
    [sym__empty_value] = ACTIONS(387),
    [anon_sym_DQUOTE] = ACTIONS(389),
    [sym_single_quoted_argument] = ACTIONS(391),
    [anon_sym_DOLLAR] = ACTIONS(393),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(395),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(397),
    [sym_word] = ACTIONS(399),
    [sym_comment] = ACTIONS(75),
  },
  [73] = {
    [sym_file_redirect] = STATE(127),
    [sym_heredoc_redirect] = STATE(127),
    [sym_file_descriptor] = ACTIONS(145),
    [anon_sym_SEMI_SEMI] = ACTIONS(385),
    [anon_sym_PIPE] = ACTIONS(385),
    [anon_sym_PIPE_AMP] = ACTIONS(385),
    [anon_sym_AMP_AMP] = ACTIONS(385),
    [anon_sym_PIPE_PIPE] = ACTIONS(385),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(151),
    [anon_sym_GT_GT] = ACTIONS(151),
    [anon_sym_AMP_GT] = ACTIONS(151),
    [anon_sym_AMP_GT_GT] = ACTIONS(151),
    [anon_sym_LT_AMP] = ACTIONS(151),
    [anon_sym_GT_AMP] = ACTIONS(151),
    [anon_sym_LT_LT] = ACTIONS(153),
    [anon_sym_LT_LT_DASH] = ACTIONS(153),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(385),
    [anon_sym_LF] = ACTIONS(385),
    [anon_sym_AMP] = ACTIONS(385),
  },
  [74] = {
    [sym_file_descriptor] = ACTIONS(401),
    [ts_builtin_sym_end] = ACTIONS(401),
    [anon_sym_for] = ACTIONS(403),
    [anon_sym_while] = ACTIONS(403),
    [anon_sym_do] = ACTIONS(403),
    [anon_sym_done] = ACTIONS(403),
    [anon_sym_if] = ACTIONS(403),
    [anon_sym_then] = ACTIONS(403),
    [anon_sym_fi] = ACTIONS(403),
    [anon_sym_elif] = ACTIONS(403),
    [anon_sym_else] = ACTIONS(403),
    [anon_sym_case] = ACTIONS(403),
    [anon_sym_RPAREN] = ACTIONS(401),
    [anon_sym_SEMI_SEMI] = ACTIONS(401),
    [anon_sym_function] = ACTIONS(403),
    [anon_sym_LPAREN] = ACTIONS(401),
    [anon_sym_RBRACE] = ACTIONS(401),
    [anon_sym_LBRACK] = ACTIONS(403),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(403),
    [anon_sym_COLON] = ACTIONS(401),
    [anon_sym_DQUOTE] = ACTIONS(401),
    [sym_single_quoted_argument] = ACTIONS(403),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(401),
    [anon_sym_LT] = ACTIONS(403),
    [anon_sym_GT] = ACTIONS(403),
    [anon_sym_GT_GT] = ACTIONS(403),
    [anon_sym_AMP_GT] = ACTIONS(403),
    [anon_sym_AMP_GT_GT] = ACTIONS(403),
    [anon_sym_LT_AMP] = ACTIONS(403),
    [anon_sym_GT_AMP] = ACTIONS(403),
    [sym_leading_word] = ACTIONS(405),
    [sym_comment] = ACTIONS(75),
  },
  [75] = {
    [sym_for_statement] = STATE(164),
    [sym_while_statement] = STATE(164),
    [sym_if_statement] = STATE(164),
    [sym_case_statement] = STATE(164),
    [sym_function_definition] = STATE(164),
    [sym_bracket_command] = STATE(164),
    [sym_command] = STATE(164),
    [sym_pipeline] = STATE(164),
    [sym_list] = STATE(164),
    [sym_subshell] = STATE(164),
    [sym_environment_variable_assignment] = STATE(165),
    [sym_quoted_argument] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(20),
    [aux_sym_command_repeat1] = STATE(22),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_for] = ACTIONS(83),
    [anon_sym_while] = ACTIONS(85),
    [anon_sym_if] = ACTIONS(87),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_function] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(97),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_single_quoted_argument] = ACTIONS(103),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(109),
    [sym_comment] = ACTIONS(75),
  },
  [76] = {
    [sym_for_statement] = STATE(166),
    [sym_while_statement] = STATE(166),
    [sym_if_statement] = STATE(166),
    [sym_case_statement] = STATE(166),
    [sym_function_definition] = STATE(166),
    [sym_bracket_command] = STATE(166),
    [sym_command] = STATE(166),
    [sym_pipeline] = STATE(166),
    [sym_list] = STATE(166),
    [sym_subshell] = STATE(166),
    [sym_environment_variable_assignment] = STATE(167),
    [sym_quoted_argument] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(20),
    [aux_sym_command_repeat1] = STATE(22),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_for] = ACTIONS(83),
    [anon_sym_while] = ACTIONS(85),
    [anon_sym_if] = ACTIONS(87),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_function] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(97),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_single_quoted_argument] = ACTIONS(103),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(109),
    [sym_comment] = ACTIONS(75),
  },
  [77] = {
    [sym_file_descriptor] = ACTIONS(407),
    [ts_builtin_sym_end] = ACTIONS(407),
    [anon_sym_for] = ACTIONS(409),
    [anon_sym_while] = ACTIONS(409),
    [anon_sym_done] = ACTIONS(409),
    [anon_sym_if] = ACTIONS(409),
    [anon_sym_fi] = ACTIONS(409),
    [anon_sym_elif] = ACTIONS(409),
    [anon_sym_else] = ACTIONS(409),
    [anon_sym_case] = ACTIONS(409),
    [anon_sym_RPAREN] = ACTIONS(407),
    [anon_sym_SEMI_SEMI] = ACTIONS(407),
    [anon_sym_function] = ACTIONS(409),
    [anon_sym_LPAREN] = ACTIONS(407),
    [anon_sym_RBRACE] = ACTIONS(407),
    [anon_sym_LBRACK] = ACTIONS(409),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(409),
    [anon_sym_COLON] = ACTIONS(407),
    [anon_sym_DQUOTE] = ACTIONS(407),
    [sym_single_quoted_argument] = ACTIONS(409),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(407),
    [anon_sym_LT] = ACTIONS(409),
    [anon_sym_GT] = ACTIONS(409),
    [anon_sym_GT_GT] = ACTIONS(409),
    [anon_sym_AMP_GT] = ACTIONS(409),
    [anon_sym_AMP_GT_GT] = ACTIONS(409),
    [anon_sym_LT_AMP] = ACTIONS(409),
    [anon_sym_GT_AMP] = ACTIONS(409),
    [sym_leading_word] = ACTIONS(411),
    [sym_comment] = ACTIONS(75),
  },
  [78] = {
    [sym_file_redirect] = STATE(50),
    [sym_heredoc_redirect] = STATE(50),
    [aux_sym_command_repeat2] = STATE(117),
    [sym_file_descriptor] = ACTIONS(145),
    [anon_sym_SEMI_SEMI] = ACTIONS(289),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(413),
    [anon_sym_PIPE] = ACTIONS(289),
    [anon_sym_PIPE_AMP] = ACTIONS(289),
    [anon_sym_AMP_AMP] = ACTIONS(289),
    [anon_sym_PIPE_PIPE] = ACTIONS(289),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(151),
    [anon_sym_GT_GT] = ACTIONS(151),
    [anon_sym_AMP_GT] = ACTIONS(151),
    [anon_sym_AMP_GT_GT] = ACTIONS(151),
    [anon_sym_LT_AMP] = ACTIONS(151),
    [anon_sym_GT_AMP] = ACTIONS(151),
    [anon_sym_LT_LT] = ACTIONS(153),
    [anon_sym_LT_LT_DASH] = ACTIONS(153),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(289),
    [anon_sym_LF] = ACTIONS(289),
    [anon_sym_AMP] = ACTIONS(289),
  },
  [79] = {
    [sym_file_redirect] = STATE(50),
    [sym_heredoc_redirect] = STATE(50),
    [aux_sym_command_repeat2] = STATE(170),
    [sym_file_descriptor] = ACTIONS(145),
    [anon_sym_SEMI_SEMI] = ACTIONS(415),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(417),
    [anon_sym_PIPE] = ACTIONS(415),
    [anon_sym_PIPE_AMP] = ACTIONS(415),
    [anon_sym_AMP_AMP] = ACTIONS(415),
    [anon_sym_PIPE_PIPE] = ACTIONS(415),
    [anon_sym_EQ] = ACTIONS(353),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(151),
    [anon_sym_GT_GT] = ACTIONS(151),
    [anon_sym_AMP_GT] = ACTIONS(151),
    [anon_sym_AMP_GT_GT] = ACTIONS(151),
    [anon_sym_LT_AMP] = ACTIONS(151),
    [anon_sym_GT_AMP] = ACTIONS(151),
    [anon_sym_LT_LT] = ACTIONS(153),
    [anon_sym_LT_LT_DASH] = ACTIONS(153),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(415),
    [anon_sym_LF] = ACTIONS(415),
    [anon_sym_AMP] = ACTIONS(415),
  },
  [80] = {
    [sym_file_descriptor] = ACTIONS(419),
    [anon_sym_COLON] = ACTIONS(419),
    [anon_sym_DQUOTE] = ACTIONS(419),
    [sym_single_quoted_argument] = ACTIONS(421),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(419),
    [anon_sym_LT] = ACTIONS(421),
    [anon_sym_GT] = ACTIONS(421),
    [anon_sym_GT_GT] = ACTIONS(421),
    [anon_sym_AMP_GT] = ACTIONS(421),
    [anon_sym_AMP_GT_GT] = ACTIONS(421),
    [anon_sym_LT_AMP] = ACTIONS(421),
    [anon_sym_GT_AMP] = ACTIONS(421),
    [sym_leading_word] = ACTIONS(423),
    [sym_comment] = ACTIONS(75),
  },
  [81] = {
    [sym_file_descriptor] = ACTIONS(425),
    [anon_sym_COLON] = ACTIONS(425),
    [anon_sym_DQUOTE] = ACTIONS(425),
    [sym_single_quoted_argument] = ACTIONS(427),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(425),
    [anon_sym_LT] = ACTIONS(427),
    [anon_sym_GT] = ACTIONS(427),
    [anon_sym_GT_GT] = ACTIONS(427),
    [anon_sym_AMP_GT] = ACTIONS(427),
    [anon_sym_AMP_GT_GT] = ACTIONS(427),
    [anon_sym_LT_AMP] = ACTIONS(427),
    [anon_sym_GT_AMP] = ACTIONS(427),
    [sym_leading_word] = ACTIONS(429),
    [sym_comment] = ACTIONS(75),
  },
  [82] = {
    [sym_file_descriptor] = ACTIONS(431),
    [anon_sym_COLON] = ACTIONS(431),
    [anon_sym_DQUOTE] = ACTIONS(431),
    [sym_single_quoted_argument] = ACTIONS(433),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(431),
    [anon_sym_LT] = ACTIONS(433),
    [anon_sym_GT] = ACTIONS(433),
    [anon_sym_GT_GT] = ACTIONS(433),
    [anon_sym_AMP_GT] = ACTIONS(433),
    [anon_sym_AMP_GT_GT] = ACTIONS(433),
    [anon_sym_LT_AMP] = ACTIONS(433),
    [anon_sym_GT_AMP] = ACTIONS(433),
    [sym_leading_word] = ACTIONS(435),
    [sym_comment] = ACTIONS(75),
  },
  [83] = {
    [sym__terminated_statement] = STATE(171),
    [sym_for_statement] = STATE(26),
    [sym_while_statement] = STATE(26),
    [sym_if_statement] = STATE(26),
    [sym_case_statement] = STATE(26),
    [sym_function_definition] = STATE(26),
    [sym_bracket_command] = STATE(26),
    [sym_command] = STATE(26),
    [sym_pipeline] = STATE(26),
    [sym_list] = STATE(26),
    [sym_subshell] = STATE(26),
    [sym_environment_variable_assignment] = STATE(27),
    [sym_quoted_argument] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(20),
    [aux_sym_command_repeat1] = STATE(22),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_for] = ACTIONS(83),
    [anon_sym_while] = ACTIONS(85),
    [anon_sym_if] = ACTIONS(87),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_function] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(97),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_single_quoted_argument] = ACTIONS(103),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(109),
    [sym_comment] = ACTIONS(75),
  },
  [84] = {
    [sym__terminated_statement] = STATE(17),
    [sym_for_statement] = STATE(18),
    [sym_while_statement] = STATE(18),
    [sym_if_statement] = STATE(18),
    [sym_case_statement] = STATE(18),
    [sym_function_definition] = STATE(18),
    [sym_bracket_command] = STATE(18),
    [sym_command] = STATE(18),
    [sym_pipeline] = STATE(18),
    [sym_list] = STATE(18),
    [sym_subshell] = STATE(18),
    [sym_environment_variable_assignment] = STATE(19),
    [sym_quoted_argument] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(20),
    [aux_sym_program_repeat1] = STATE(173),
    [aux_sym_command_repeat1] = STATE(22),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_for] = ACTIONS(83),
    [anon_sym_while] = ACTIONS(85),
    [anon_sym_done] = ACTIONS(437),
    [anon_sym_if] = ACTIONS(87),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_function] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(97),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_single_quoted_argument] = ACTIONS(103),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(109),
    [sym_comment] = ACTIONS(75),
  },
  [85] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(439),
    [anon_sym_PIPE] = ACTIONS(439),
    [anon_sym_PIPE_AMP] = ACTIONS(439),
    [anon_sym_AMP_AMP] = ACTIONS(439),
    [anon_sym_PIPE_PIPE] = ACTIONS(439),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(439),
    [anon_sym_LF] = ACTIONS(439),
    [anon_sym_AMP] = ACTIONS(439),
  },
  [86] = {
    [anon_sym_do] = ACTIONS(401),
    [anon_sym_then] = ACTIONS(401),
    [sym_comment] = ACTIONS(75),
  },
  [87] = {
    [sym__terminated_statement] = STATE(17),
    [sym_for_statement] = STATE(18),
    [sym_while_statement] = STATE(18),
    [sym_if_statement] = STATE(18),
    [sym_elif_clause] = STATE(177),
    [sym_else_clause] = STATE(178),
    [sym_case_statement] = STATE(18),
    [sym_function_definition] = STATE(18),
    [sym_bracket_command] = STATE(18),
    [sym_command] = STATE(18),
    [sym_pipeline] = STATE(18),
    [sym_list] = STATE(18),
    [sym_subshell] = STATE(18),
    [sym_environment_variable_assignment] = STATE(19),
    [sym_quoted_argument] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(20),
    [aux_sym_program_repeat1] = STATE(179),
    [aux_sym_if_statement_repeat1] = STATE(180),
    [aux_sym_command_repeat1] = STATE(22),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_for] = ACTIONS(83),
    [anon_sym_while] = ACTIONS(85),
    [anon_sym_if] = ACTIONS(87),
    [anon_sym_fi] = ACTIONS(441),
    [anon_sym_elif] = ACTIONS(443),
    [anon_sym_else] = ACTIONS(445),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_function] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(97),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_single_quoted_argument] = ACTIONS(103),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(109),
    [sym_comment] = ACTIONS(75),
  },
  [88] = {
    [anon_sym_in] = ACTIONS(325),
    [anon_sym_SEMI_SEMI] = ACTIONS(325),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(325),
    [anon_sym_LF] = ACTIONS(325),
    [anon_sym_AMP] = ACTIONS(325),
  },
  [89] = {
    [sym_expansion] = STATE(133),
    [sym_operator_expansion] = STATE(133),
    [sym_command_substitution] = STATE(133),
    [anon_sym_DQUOTE] = ACTIONS(447),
    [sym__quoted_chars] = ACTIONS(339),
    [anon_sym_DOLLAR] = ACTIONS(161),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(163),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(165),
    [sym_comment] = ACTIONS(155),
  },
  [90] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(449),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(449),
    [anon_sym_LF] = ACTIONS(449),
    [anon_sym_AMP] = ACTIONS(449),
  },
  [91] = {
    [anon_sym_in] = ACTIONS(451),
    [sym_comment] = ACTIONS(75),
  },
  [92] = {
    [anon_sym_in] = ACTIONS(453),
    [anon_sym_SEMI_SEMI] = ACTIONS(453),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(453),
    [anon_sym_LF] = ACTIONS(453),
    [anon_sym_AMP] = ACTIONS(453),
  },
  [93] = {
    [anon_sym_in] = ACTIONS(455),
    [anon_sym_SEMI_SEMI] = ACTIONS(455),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(455),
    [anon_sym_LF] = ACTIONS(455),
    [anon_sym_AMP] = ACTIONS(455),
  },
  [94] = {
    [anon_sym_RBRACE] = ACTIONS(457),
    [anon_sym_COLON] = ACTIONS(459),
    [anon_sym_EQ] = ACTIONS(461),
    [anon_sym_COLON_QMARK] = ACTIONS(461),
    [anon_sym_COLON_DASH] = ACTIONS(461),
    [sym_comment] = ACTIONS(75),
  },
  [95] = {
    [anon_sym_RPAREN] = ACTIONS(463),
    [sym_comment] = ACTIONS(75),
  },
  [96] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(465),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(465),
    [anon_sym_LF] = ACTIONS(465),
    [anon_sym_AMP] = ACTIONS(465),
  },
  [97] = {
    [anon_sym_in] = ACTIONS(467),
    [sym_comment] = ACTIONS(75),
  },
  [98] = {
    [anon_sym_RPAREN] = ACTIONS(469),
    [sym_comment] = ACTIONS(75),
  },
  [99] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(471),
    [anon_sym_PIPE] = ACTIONS(471),
    [anon_sym_PIPE_AMP] = ACTIONS(471),
    [anon_sym_AMP_AMP] = ACTIONS(471),
    [anon_sym_PIPE_PIPE] = ACTIONS(471),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(471),
    [anon_sym_LF] = ACTIONS(471),
    [anon_sym_AMP] = ACTIONS(471),
  },
  [100] = {
    [anon_sym_RPAREN] = ACTIONS(323),
    [anon_sym_RBRACE] = ACTIONS(323),
    [anon_sym_RBRACK] = ACTIONS(473),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(473),
    [anon_sym_DQUOTE] = ACTIONS(323),
    [sym_single_quoted_argument] = ACTIONS(473),
    [anon_sym_DOLLAR] = ACTIONS(473),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(323),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(323),
    [sym_word] = ACTIONS(325),
    [sym_comment] = ACTIONS(75),
  },
  [101] = {
    [sym_expansion] = STATE(133),
    [sym_operator_expansion] = STATE(133),
    [sym_command_substitution] = STATE(133),
    [anon_sym_DQUOTE] = ACTIONS(475),
    [sym__quoted_chars] = ACTIONS(339),
    [anon_sym_DOLLAR] = ACTIONS(161),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(163),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(165),
    [sym_comment] = ACTIONS(155),
  },
  [102] = {
    [anon_sym_RPAREN] = ACTIONS(477),
    [anon_sym_RBRACE] = ACTIONS(477),
    [anon_sym_RBRACK] = ACTIONS(479),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(479),
    [anon_sym_DQUOTE] = ACTIONS(477),
    [sym_single_quoted_argument] = ACTIONS(479),
    [anon_sym_DOLLAR] = ACTIONS(479),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(477),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(477),
    [sym_word] = ACTIONS(453),
    [sym_comment] = ACTIONS(75),
  },
  [103] = {
    [anon_sym_RPAREN] = ACTIONS(481),
    [anon_sym_RBRACE] = ACTIONS(481),
    [anon_sym_RBRACK] = ACTIONS(483),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(483),
    [anon_sym_DQUOTE] = ACTIONS(481),
    [sym_single_quoted_argument] = ACTIONS(483),
    [anon_sym_DOLLAR] = ACTIONS(483),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(481),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(481),
    [sym_word] = ACTIONS(455),
    [sym_comment] = ACTIONS(75),
  },
  [104] = {
    [anon_sym_RBRACE] = ACTIONS(485),
    [anon_sym_COLON] = ACTIONS(487),
    [anon_sym_EQ] = ACTIONS(489),
    [anon_sym_COLON_QMARK] = ACTIONS(489),
    [anon_sym_COLON_DASH] = ACTIONS(489),
    [sym_comment] = ACTIONS(75),
  },
  [105] = {
    [anon_sym_RPAREN] = ACTIONS(491),
    [sym_comment] = ACTIONS(75),
  },
  [106] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(493),
    [anon_sym_PIPE] = ACTIONS(493),
    [anon_sym_PIPE_AMP] = ACTIONS(493),
    [anon_sym_AMP_AMP] = ACTIONS(493),
    [anon_sym_PIPE_PIPE] = ACTIONS(493),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(493),
    [anon_sym_LF] = ACTIONS(493),
    [anon_sym_AMP] = ACTIONS(493),
  },
  [107] = {
    [anon_sym_RBRACK] = ACTIONS(495),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(495),
    [anon_sym_DQUOTE] = ACTIONS(497),
    [sym_single_quoted_argument] = ACTIONS(495),
    [anon_sym_DOLLAR] = ACTIONS(495),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(497),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(497),
    [sym_word] = ACTIONS(499),
    [sym_comment] = ACTIONS(75),
  },
  [108] = {
    [anon_sym_RBRACK] = ACTIONS(501),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(501),
    [anon_sym_DQUOTE] = ACTIONS(503),
    [sym_single_quoted_argument] = ACTIONS(501),
    [anon_sym_DOLLAR] = ACTIONS(501),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(503),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(503),
    [sym_word] = ACTIONS(505),
    [sym_comment] = ACTIONS(75),
  },
  [109] = {
    [sym_quoted_argument] = STATE(194),
    [sym_expansion] = STATE(194),
    [sym_operator_expansion] = STATE(194),
    [sym_command_substitution] = STATE(194),
    [anon_sym_DQUOTE] = ACTIONS(303),
    [sym_single_quoted_argument] = ACTIONS(507),
    [anon_sym_DOLLAR] = ACTIONS(307),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(309),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(311),
    [sym_word] = ACTIONS(509),
    [sym_comment] = ACTIONS(75),
  },
  [110] = {
    [sym_expansion] = STATE(53),
    [sym_operator_expansion] = STATE(53),
    [sym_command_substitution] = STATE(53),
    [aux_sym_quoted_argument_repeat1] = STATE(197),
    [anon_sym_DQUOTE] = ACTIONS(511),
    [sym__quoted_chars] = ACTIONS(159),
    [anon_sym_DOLLAR] = ACTIONS(161),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(163),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(165),
    [sym_comment] = ACTIONS(155),
  },
  [111] = {
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
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(265),
    [anon_sym_LF] = ACTIONS(265),
    [anon_sym_AMP] = ACTIONS(265),
  },
  [112] = {
    [anon_sym_DOLLAR] = ACTIONS(513),
    [sym_word] = ACTIONS(515),
    [sym_comment] = ACTIONS(75),
  },
  [113] = {
    [sym_leading_word] = ACTIONS(517),
    [sym_comment] = ACTIONS(75),
  },
  [114] = {
    [sym_command] = STATE(201),
    [sym_environment_variable_assignment] = STATE(20),
    [sym_quoted_argument] = STATE(58),
    [sym_command_substitution] = STATE(58),
    [sym_file_redirect] = STATE(20),
    [aux_sym_command_repeat1] = STATE(63),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [sym_single_quoted_argument] = ACTIONS(171),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(173),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(175),
    [sym_comment] = ACTIONS(75),
  },
  [115] = {
    [sym_file_descriptor] = ACTIONS(275),
    [anon_sym_SEMI_SEMI] = ACTIONS(277),
    [anon_sym_PIPE] = ACTIONS(277),
    [anon_sym_PIPE_AMP] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_DQUOTE] = ACTIONS(277),
    [sym_single_quoted_argument] = ACTIONS(277),
    [anon_sym_DOLLAR] = ACTIONS(277),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(277),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(277),
    [anon_sym_LT] = ACTIONS(277),
    [anon_sym_GT] = ACTIONS(277),
    [anon_sym_GT_GT] = ACTIONS(277),
    [anon_sym_AMP_GT] = ACTIONS(277),
    [anon_sym_AMP_GT_GT] = ACTIONS(277),
    [anon_sym_LT_AMP] = ACTIONS(277),
    [anon_sym_GT_AMP] = ACTIONS(277),
    [anon_sym_LT_LT] = ACTIONS(277),
    [anon_sym_LT_LT_DASH] = ACTIONS(277),
    [sym_word] = ACTIONS(277),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(277),
    [anon_sym_LF] = ACTIONS(277),
    [anon_sym_AMP] = ACTIONS(277),
  },
  [116] = {
    [sym_quoted_argument] = STATE(202),
    [sym_expansion] = STATE(202),
    [sym_operator_expansion] = STATE(202),
    [sym_command_substitution] = STATE(202),
    [sym_file_redirect] = STATE(50),
    [sym_heredoc_redirect] = STATE(50),
    [aux_sym_command_repeat2] = STATE(204),
    [sym_file_descriptor] = ACTIONS(145),
    [anon_sym_SEMI_SEMI] = ACTIONS(519),
    [anon_sym_PIPE] = ACTIONS(519),
    [anon_sym_PIPE_AMP] = ACTIONS(519),
    [anon_sym_AMP_AMP] = ACTIONS(519),
    [anon_sym_PIPE_PIPE] = ACTIONS(519),
    [anon_sym_DQUOTE] = ACTIONS(291),
    [sym_single_quoted_argument] = ACTIONS(521),
    [anon_sym_DOLLAR] = ACTIONS(295),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(297),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(299),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(151),
    [anon_sym_GT_GT] = ACTIONS(151),
    [anon_sym_AMP_GT] = ACTIONS(151),
    [anon_sym_AMP_GT_GT] = ACTIONS(151),
    [anon_sym_LT_AMP] = ACTIONS(151),
    [anon_sym_GT_AMP] = ACTIONS(151),
    [anon_sym_LT_LT] = ACTIONS(153),
    [anon_sym_LT_LT_DASH] = ACTIONS(153),
    [sym_word] = ACTIONS(523),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(519),
    [anon_sym_LF] = ACTIONS(519),
    [anon_sym_AMP] = ACTIONS(519),
  },
  [117] = {
    [sym_file_redirect] = STATE(127),
    [sym_heredoc_redirect] = STATE(127),
    [sym_file_descriptor] = ACTIONS(145),
    [anon_sym_SEMI_SEMI] = ACTIONS(519),
    [anon_sym_PIPE] = ACTIONS(519),
    [anon_sym_PIPE_AMP] = ACTIONS(519),
    [anon_sym_AMP_AMP] = ACTIONS(519),
    [anon_sym_PIPE_PIPE] = ACTIONS(519),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(151),
    [anon_sym_GT_GT] = ACTIONS(151),
    [anon_sym_AMP_GT] = ACTIONS(151),
    [anon_sym_AMP_GT_GT] = ACTIONS(151),
    [anon_sym_LT_AMP] = ACTIONS(151),
    [anon_sym_GT_AMP] = ACTIONS(151),
    [anon_sym_LT_LT] = ACTIONS(153),
    [anon_sym_LT_LT_DASH] = ACTIONS(153),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(519),
    [anon_sym_LF] = ACTIONS(519),
    [anon_sym_AMP] = ACTIONS(519),
  },
  [118] = {
    [sym_expansion] = STATE(53),
    [sym_operator_expansion] = STATE(53),
    [sym_command_substitution] = STATE(53),
    [aux_sym_quoted_argument_repeat1] = STATE(206),
    [anon_sym_DQUOTE] = ACTIONS(525),
    [sym__quoted_chars] = ACTIONS(159),
    [anon_sym_DOLLAR] = ACTIONS(161),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(163),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(165),
    [sym_comment] = ACTIONS(155),
  },
  [119] = {
    [sym_file_descriptor] = ACTIONS(365),
    [anon_sym_SEMI_SEMI] = ACTIONS(369),
    [anon_sym_PIPE] = ACTIONS(369),
    [anon_sym_PIPE_AMP] = ACTIONS(369),
    [anon_sym_AMP_AMP] = ACTIONS(369),
    [anon_sym_PIPE_PIPE] = ACTIONS(369),
    [anon_sym_LT] = ACTIONS(369),
    [anon_sym_GT] = ACTIONS(369),
    [anon_sym_GT_GT] = ACTIONS(369),
    [anon_sym_AMP_GT] = ACTIONS(369),
    [anon_sym_AMP_GT_GT] = ACTIONS(369),
    [anon_sym_LT_AMP] = ACTIONS(369),
    [anon_sym_GT_AMP] = ACTIONS(369),
    [anon_sym_LT_LT] = ACTIONS(369),
    [anon_sym_LT_LT_DASH] = ACTIONS(369),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(369),
    [anon_sym_LF] = ACTIONS(369),
    [anon_sym_AMP] = ACTIONS(369),
  },
  [120] = {
    [anon_sym_DOLLAR] = ACTIONS(527),
    [sym_word] = ACTIONS(529),
    [sym_comment] = ACTIONS(75),
  },
  [121] = {
    [sym_leading_word] = ACTIONS(531),
    [sym_comment] = ACTIONS(75),
  },
  [122] = {
    [sym_command] = STATE(210),
    [sym_environment_variable_assignment] = STATE(20),
    [sym_quoted_argument] = STATE(58),
    [sym_command_substitution] = STATE(58),
    [sym_file_redirect] = STATE(20),
    [aux_sym_command_repeat1] = STATE(63),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [sym_single_quoted_argument] = ACTIONS(171),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(173),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(175),
    [sym_comment] = ACTIONS(75),
  },
  [123] = {
    [sym_file_descriptor] = ACTIONS(377),
    [anon_sym_SEMI_SEMI] = ACTIONS(381),
    [anon_sym_PIPE] = ACTIONS(381),
    [anon_sym_PIPE_AMP] = ACTIONS(381),
    [anon_sym_AMP_AMP] = ACTIONS(381),
    [anon_sym_PIPE_PIPE] = ACTIONS(381),
    [anon_sym_LT] = ACTIONS(381),
    [anon_sym_GT] = ACTIONS(381),
    [anon_sym_GT_GT] = ACTIONS(381),
    [anon_sym_AMP_GT] = ACTIONS(381),
    [anon_sym_AMP_GT_GT] = ACTIONS(381),
    [anon_sym_LT_AMP] = ACTIONS(381),
    [anon_sym_GT_AMP] = ACTIONS(381),
    [anon_sym_LT_LT] = ACTIONS(381),
    [anon_sym_LT_LT_DASH] = ACTIONS(381),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(381),
    [anon_sym_LF] = ACTIONS(381),
    [anon_sym_AMP] = ACTIONS(381),
  },
  [124] = {
    [sym_file_descriptor] = ACTIONS(533),
    [anon_sym_SEMI_SEMI] = ACTIONS(535),
    [anon_sym_PIPE] = ACTIONS(535),
    [anon_sym_PIPE_AMP] = ACTIONS(535),
    [anon_sym_AMP_AMP] = ACTIONS(535),
    [anon_sym_PIPE_PIPE] = ACTIONS(535),
    [anon_sym_LT] = ACTIONS(535),
    [anon_sym_GT] = ACTIONS(535),
    [anon_sym_GT_GT] = ACTIONS(535),
    [anon_sym_AMP_GT] = ACTIONS(535),
    [anon_sym_AMP_GT_GT] = ACTIONS(535),
    [anon_sym_LT_AMP] = ACTIONS(535),
    [anon_sym_GT_AMP] = ACTIONS(535),
    [anon_sym_LT_LT] = ACTIONS(535),
    [anon_sym_LT_LT_DASH] = ACTIONS(535),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(535),
    [anon_sym_LF] = ACTIONS(535),
    [anon_sym_AMP] = ACTIONS(535),
  },
  [125] = {
    [sym_expansion] = STATE(211),
    [sym_operator_expansion] = STATE(211),
    [aux_sym_heredoc_repeat1] = STATE(215),
    [sym__heredoc_middle] = ACTIONS(537),
    [sym__heredoc_end] = ACTIONS(539),
    [anon_sym_DOLLAR] = ACTIONS(541),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(543),
    [sym_comment] = ACTIONS(75),
  },
  [126] = {
    [sym_file_descriptor] = ACTIONS(545),
    [anon_sym_SEMI_SEMI] = ACTIONS(547),
    [anon_sym_PIPE] = ACTIONS(547),
    [anon_sym_PIPE_AMP] = ACTIONS(547),
    [anon_sym_AMP_AMP] = ACTIONS(547),
    [anon_sym_PIPE_PIPE] = ACTIONS(547),
    [anon_sym_LT] = ACTIONS(547),
    [anon_sym_GT] = ACTIONS(547),
    [anon_sym_GT_GT] = ACTIONS(547),
    [anon_sym_AMP_GT] = ACTIONS(547),
    [anon_sym_AMP_GT_GT] = ACTIONS(547),
    [anon_sym_LT_AMP] = ACTIONS(547),
    [anon_sym_GT_AMP] = ACTIONS(547),
    [anon_sym_LT_LT] = ACTIONS(547),
    [anon_sym_LT_LT_DASH] = ACTIONS(547),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(547),
    [anon_sym_LF] = ACTIONS(547),
    [anon_sym_AMP] = ACTIONS(547),
  },
  [127] = {
    [sym_file_descriptor] = ACTIONS(549),
    [anon_sym_SEMI_SEMI] = ACTIONS(551),
    [anon_sym_PIPE] = ACTIONS(551),
    [anon_sym_PIPE_AMP] = ACTIONS(551),
    [anon_sym_AMP_AMP] = ACTIONS(551),
    [anon_sym_PIPE_PIPE] = ACTIONS(551),
    [anon_sym_LT] = ACTIONS(551),
    [anon_sym_GT] = ACTIONS(551),
    [anon_sym_GT_GT] = ACTIONS(551),
    [anon_sym_AMP_GT] = ACTIONS(551),
    [anon_sym_AMP_GT_GT] = ACTIONS(551),
    [anon_sym_LT_AMP] = ACTIONS(551),
    [anon_sym_GT_AMP] = ACTIONS(551),
    [anon_sym_LT_LT] = ACTIONS(551),
    [anon_sym_LT_LT_DASH] = ACTIONS(551),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(551),
    [anon_sym_LF] = ACTIONS(551),
    [anon_sym_AMP] = ACTIONS(551),
  },
  [128] = {
    [anon_sym_DQUOTE] = ACTIONS(453),
    [sym__quoted_chars] = ACTIONS(479),
    [anon_sym_DOLLAR] = ACTIONS(453),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(453),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(453),
    [sym_comment] = ACTIONS(155),
  },
  [129] = {
    [anon_sym_DQUOTE] = ACTIONS(455),
    [sym__quoted_chars] = ACTIONS(483),
    [anon_sym_DOLLAR] = ACTIONS(455),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(455),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(455),
    [sym_comment] = ACTIONS(155),
  },
  [130] = {
    [anon_sym_RBRACE] = ACTIONS(553),
    [anon_sym_COLON] = ACTIONS(555),
    [anon_sym_EQ] = ACTIONS(557),
    [anon_sym_COLON_QMARK] = ACTIONS(557),
    [anon_sym_COLON_DASH] = ACTIONS(557),
    [sym_comment] = ACTIONS(75),
  },
  [131] = {
    [anon_sym_RPAREN] = ACTIONS(559),
    [sym_comment] = ACTIONS(75),
  },
  [132] = {
    [sym_file_descriptor] = ACTIONS(561),
    [anon_sym_SEMI_SEMI] = ACTIONS(563),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(563),
    [anon_sym_PIPE] = ACTIONS(563),
    [anon_sym_PIPE_AMP] = ACTIONS(563),
    [anon_sym_AMP_AMP] = ACTIONS(563),
    [anon_sym_PIPE_PIPE] = ACTIONS(563),
    [anon_sym_LT] = ACTIONS(563),
    [anon_sym_GT] = ACTIONS(563),
    [anon_sym_GT_GT] = ACTIONS(563),
    [anon_sym_AMP_GT] = ACTIONS(563),
    [anon_sym_AMP_GT_GT] = ACTIONS(563),
    [anon_sym_LT_AMP] = ACTIONS(563),
    [anon_sym_GT_AMP] = ACTIONS(563),
    [anon_sym_LT_LT] = ACTIONS(563),
    [anon_sym_LT_LT_DASH] = ACTIONS(563),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(563),
    [anon_sym_LF] = ACTIONS(563),
    [anon_sym_AMP] = ACTIONS(563),
  },
  [133] = {
    [anon_sym_DQUOTE] = ACTIONS(565),
    [sym__quoted_chars] = ACTIONS(567),
    [anon_sym_DOLLAR] = ACTIONS(565),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(565),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(565),
    [sym_comment] = ACTIONS(155),
  },
  [134] = {
    [anon_sym_LT] = ACTIONS(569),
    [anon_sym_GT] = ACTIONS(569),
    [anon_sym_GT_GT] = ACTIONS(571),
    [anon_sym_AMP_GT] = ACTIONS(569),
    [anon_sym_AMP_GT_GT] = ACTIONS(571),
    [anon_sym_LT_AMP] = ACTIONS(571),
    [anon_sym_GT_AMP] = ACTIONS(571),
    [sym_comment] = ACTIONS(75),
  },
  [135] = {
    [sym_quoted_argument] = STATE(221),
    [sym_expansion] = STATE(221),
    [sym_operator_expansion] = STATE(221),
    [sym_command_substitution] = STATE(221),
    [sym_file_redirect] = STATE(138),
    [sym_heredoc_redirect] = STATE(138),
    [aux_sym_bracket_command_repeat1] = STATE(226),
    [aux_sym_command_repeat2] = STATE(227),
    [sym_file_descriptor] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(573),
    [anon_sym_DQUOTE] = ACTIONS(575),
    [sym_single_quoted_argument] = ACTIONS(577),
    [anon_sym_DOLLAR] = ACTIONS(579),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(581),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(583),
    [anon_sym_LT] = ACTIONS(585),
    [anon_sym_GT] = ACTIONS(585),
    [anon_sym_GT_GT] = ACTIONS(587),
    [anon_sym_AMP_GT] = ACTIONS(585),
    [anon_sym_AMP_GT_GT] = ACTIONS(587),
    [anon_sym_LT_AMP] = ACTIONS(587),
    [anon_sym_GT_AMP] = ACTIONS(587),
    [anon_sym_LT_LT] = ACTIONS(589),
    [anon_sym_LT_LT_DASH] = ACTIONS(591),
    [sym_word] = ACTIONS(593),
    [sym_comment] = ACTIONS(75),
  },
  [136] = {
    [sym_quoted_argument] = STATE(228),
    [sym_expansion] = STATE(228),
    [sym_operator_expansion] = STATE(228),
    [sym_command_substitution] = STATE(228),
    [anon_sym_DQUOTE] = ACTIONS(575),
    [sym_single_quoted_argument] = ACTIONS(595),
    [anon_sym_DOLLAR] = ACTIONS(579),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(581),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(583),
    [sym_word] = ACTIONS(597),
    [sym_comment] = ACTIONS(75),
  },
  [137] = {
    [sym_heredoc] = STATE(232),
    [sym__simple_heredoc] = ACTIONS(599),
    [sym__heredoc_beginning] = ACTIONS(601),
    [sym_comment] = ACTIONS(75),
  },
  [138] = {
    [sym_file_descriptor] = ACTIONS(319),
    [anon_sym_RPAREN] = ACTIONS(319),
    [anon_sym_LT] = ACTIONS(603),
    [anon_sym_GT] = ACTIONS(603),
    [anon_sym_GT_GT] = ACTIONS(319),
    [anon_sym_AMP_GT] = ACTIONS(603),
    [anon_sym_AMP_GT_GT] = ACTIONS(319),
    [anon_sym_LT_AMP] = ACTIONS(319),
    [anon_sym_GT_AMP] = ACTIONS(319),
    [anon_sym_LT_LT] = ACTIONS(603),
    [anon_sym_LT_LT_DASH] = ACTIONS(319),
    [sym_comment] = ACTIONS(75),
  },
  [139] = {
    [sym_file_redirect] = STATE(233),
    [sym_heredoc_redirect] = STATE(233),
    [sym_file_descriptor] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(573),
    [anon_sym_LT] = ACTIONS(585),
    [anon_sym_GT] = ACTIONS(585),
    [anon_sym_GT_GT] = ACTIONS(587),
    [anon_sym_AMP_GT] = ACTIONS(585),
    [anon_sym_AMP_GT_GT] = ACTIONS(587),
    [anon_sym_LT_AMP] = ACTIONS(587),
    [anon_sym_GT_AMP] = ACTIONS(587),
    [anon_sym_LT_LT] = ACTIONS(589),
    [anon_sym_LT_LT_DASH] = ACTIONS(591),
    [sym_comment] = ACTIONS(75),
  },
  [140] = {
    [sym_file_descriptor] = ACTIONS(323),
    [anon_sym_RPAREN] = ACTIONS(325),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(325),
    [anon_sym_LT] = ACTIONS(325),
    [anon_sym_GT] = ACTIONS(325),
    [anon_sym_GT_GT] = ACTIONS(325),
    [anon_sym_AMP_GT] = ACTIONS(325),
    [anon_sym_AMP_GT_GT] = ACTIONS(325),
    [anon_sym_LT_AMP] = ACTIONS(325),
    [anon_sym_GT_AMP] = ACTIONS(325),
    [anon_sym_LT_LT] = ACTIONS(325),
    [anon_sym_LT_LT_DASH] = ACTIONS(325),
    [sym_comment] = ACTIONS(155),
  },
  [141] = {
    [sym_expansion] = STATE(133),
    [sym_operator_expansion] = STATE(133),
    [sym_command_substitution] = STATE(133),
    [anon_sym_DQUOTE] = ACTIONS(605),
    [sym__quoted_chars] = ACTIONS(339),
    [anon_sym_DOLLAR] = ACTIONS(161),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(163),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(165),
    [sym_comment] = ACTIONS(155),
  },
  [142] = {
    [anon_sym_RPAREN] = ACTIONS(607),
    [sym_comment] = ACTIONS(75),
  },
  [143] = {
    [sym_quoted_argument] = STATE(221),
    [sym_expansion] = STATE(221),
    [sym_operator_expansion] = STATE(221),
    [sym_command_substitution] = STATE(221),
    [sym_file_redirect] = STATE(138),
    [sym_heredoc_redirect] = STATE(138),
    [aux_sym_bracket_command_repeat1] = STATE(236),
    [aux_sym_command_repeat2] = STATE(237),
    [sym_file_descriptor] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(609),
    [anon_sym_DQUOTE] = ACTIONS(575),
    [sym_single_quoted_argument] = ACTIONS(577),
    [anon_sym_DOLLAR] = ACTIONS(579),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(581),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(583),
    [anon_sym_LT] = ACTIONS(585),
    [anon_sym_GT] = ACTIONS(585),
    [anon_sym_GT_GT] = ACTIONS(587),
    [anon_sym_AMP_GT] = ACTIONS(585),
    [anon_sym_AMP_GT_GT] = ACTIONS(587),
    [anon_sym_LT_AMP] = ACTIONS(587),
    [anon_sym_GT_AMP] = ACTIONS(587),
    [anon_sym_LT_LT] = ACTIONS(589),
    [anon_sym_LT_LT_DASH] = ACTIONS(591),
    [sym_word] = ACTIONS(593),
    [sym_comment] = ACTIONS(75),
  },
  [144] = {
    [sym_quoted_argument] = STATE(238),
    [sym_expansion] = STATE(238),
    [sym_operator_expansion] = STATE(238),
    [sym_command_substitution] = STATE(238),
    [sym__empty_value] = ACTIONS(611),
    [anon_sym_DQUOTE] = ACTIONS(177),
    [sym_single_quoted_argument] = ACTIONS(613),
    [anon_sym_DOLLAR] = ACTIONS(181),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(183),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(185),
    [sym_word] = ACTIONS(615),
    [sym_comment] = ACTIONS(75),
  },
  [145] = {
    [sym_file_redirect] = STATE(233),
    [sym_heredoc_redirect] = STATE(233),
    [sym_file_descriptor] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(609),
    [anon_sym_LT] = ACTIONS(585),
    [anon_sym_GT] = ACTIONS(585),
    [anon_sym_GT_GT] = ACTIONS(587),
    [anon_sym_AMP_GT] = ACTIONS(585),
    [anon_sym_AMP_GT_GT] = ACTIONS(587),
    [anon_sym_LT_AMP] = ACTIONS(587),
    [anon_sym_GT_AMP] = ACTIONS(587),
    [anon_sym_LT_LT] = ACTIONS(589),
    [anon_sym_LT_LT_DASH] = ACTIONS(591),
    [sym_comment] = ACTIONS(75),
  },
  [146] = {
    [sym_file_descriptor] = ACTIONS(617),
    [anon_sym_SEMI_SEMI] = ACTIONS(619),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(619),
    [anon_sym_PIPE] = ACTIONS(619),
    [anon_sym_PIPE_AMP] = ACTIONS(619),
    [anon_sym_AMP_AMP] = ACTIONS(619),
    [anon_sym_PIPE_PIPE] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(619),
    [anon_sym_GT] = ACTIONS(619),
    [anon_sym_GT_GT] = ACTIONS(619),
    [anon_sym_AMP_GT] = ACTIONS(619),
    [anon_sym_AMP_GT_GT] = ACTIONS(619),
    [anon_sym_LT_AMP] = ACTIONS(619),
    [anon_sym_GT_AMP] = ACTIONS(619),
    [anon_sym_LT_LT] = ACTIONS(619),
    [anon_sym_LT_LT_DASH] = ACTIONS(619),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(619),
    [anon_sym_LF] = ACTIONS(619),
    [anon_sym_AMP] = ACTIONS(619),
  },
  [147] = {
    [sym_file_redirect] = STATE(138),
    [sym_heredoc_redirect] = STATE(138),
    [aux_sym_command_repeat2] = STATE(227),
    [sym_file_descriptor] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(289),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(621),
    [anon_sym_LT] = ACTIONS(345),
    [anon_sym_GT] = ACTIONS(345),
    [anon_sym_GT_GT] = ACTIONS(345),
    [anon_sym_AMP_GT] = ACTIONS(345),
    [anon_sym_AMP_GT_GT] = ACTIONS(345),
    [anon_sym_LT_AMP] = ACTIONS(345),
    [anon_sym_GT_AMP] = ACTIONS(345),
    [anon_sym_LT_LT] = ACTIONS(347),
    [anon_sym_LT_LT_DASH] = ACTIONS(347),
    [sym_comment] = ACTIONS(155),
  },
  [148] = {
    [sym_file_redirect] = STATE(138),
    [sym_heredoc_redirect] = STATE(138),
    [aux_sym_command_repeat2] = STATE(242),
    [sym_file_descriptor] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(415),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(623),
    [anon_sym_EQ] = ACTIONS(353),
    [anon_sym_LT] = ACTIONS(345),
    [anon_sym_GT] = ACTIONS(345),
    [anon_sym_GT_GT] = ACTIONS(345),
    [anon_sym_AMP_GT] = ACTIONS(345),
    [anon_sym_AMP_GT_GT] = ACTIONS(345),
    [anon_sym_LT_AMP] = ACTIONS(345),
    [anon_sym_GT_AMP] = ACTIONS(345),
    [anon_sym_LT_LT] = ACTIONS(347),
    [anon_sym_LT_LT_DASH] = ACTIONS(347),
    [sym_comment] = ACTIONS(155),
  },
  [149] = {
    [sym_file_descriptor] = ACTIONS(323),
    [anon_sym_COLON] = ACTIONS(323),
    [anon_sym_DQUOTE] = ACTIONS(323),
    [sym_single_quoted_argument] = ACTIONS(473),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(323),
    [anon_sym_LT] = ACTIONS(473),
    [anon_sym_GT] = ACTIONS(473),
    [anon_sym_GT_GT] = ACTIONS(473),
    [anon_sym_AMP_GT] = ACTIONS(473),
    [anon_sym_AMP_GT_GT] = ACTIONS(473),
    [anon_sym_LT_AMP] = ACTIONS(473),
    [anon_sym_GT_AMP] = ACTIONS(473),
    [sym_leading_word] = ACTIONS(325),
    [sym_comment] = ACTIONS(75),
  },
  [150] = {
    [sym_expansion] = STATE(133),
    [sym_operator_expansion] = STATE(133),
    [sym_command_substitution] = STATE(133),
    [anon_sym_DQUOTE] = ACTIONS(625),
    [sym__quoted_chars] = ACTIONS(339),
    [anon_sym_DOLLAR] = ACTIONS(161),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(163),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(165),
    [sym_comment] = ACTIONS(155),
  },
  [151] = {
    [sym_file_descriptor] = ACTIONS(477),
    [anon_sym_COLON] = ACTIONS(477),
    [anon_sym_DQUOTE] = ACTIONS(477),
    [sym_single_quoted_argument] = ACTIONS(479),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(477),
    [anon_sym_LT] = ACTIONS(479),
    [anon_sym_GT] = ACTIONS(479),
    [anon_sym_GT_GT] = ACTIONS(479),
    [anon_sym_AMP_GT] = ACTIONS(479),
    [anon_sym_AMP_GT_GT] = ACTIONS(479),
    [anon_sym_LT_AMP] = ACTIONS(479),
    [anon_sym_GT_AMP] = ACTIONS(479),
    [sym_leading_word] = ACTIONS(453),
    [sym_comment] = ACTIONS(75),
  },
  [152] = {
    [sym_file_descriptor] = ACTIONS(481),
    [anon_sym_COLON] = ACTIONS(481),
    [anon_sym_DQUOTE] = ACTIONS(481),
    [sym_single_quoted_argument] = ACTIONS(483),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(481),
    [anon_sym_LT] = ACTIONS(483),
    [anon_sym_GT] = ACTIONS(483),
    [anon_sym_GT_GT] = ACTIONS(483),
    [anon_sym_AMP_GT] = ACTIONS(483),
    [anon_sym_AMP_GT_GT] = ACTIONS(483),
    [anon_sym_LT_AMP] = ACTIONS(483),
    [anon_sym_GT_AMP] = ACTIONS(483),
    [sym_leading_word] = ACTIONS(455),
    [sym_comment] = ACTIONS(75),
  },
  [153] = {
    [anon_sym_RBRACE] = ACTIONS(627),
    [anon_sym_COLON] = ACTIONS(629),
    [anon_sym_EQ] = ACTIONS(631),
    [anon_sym_COLON_QMARK] = ACTIONS(631),
    [anon_sym_COLON_DASH] = ACTIONS(631),
    [sym_comment] = ACTIONS(75),
  },
  [154] = {
    [anon_sym_RPAREN] = ACTIONS(633),
    [sym_comment] = ACTIONS(75),
  },
  [155] = {
    [sym_compound_command] = STATE(248),
    [anon_sym_LBRACE] = ACTIONS(635),
    [sym_comment] = ACTIONS(75),
  },
  [156] = {
    [sym_quoted_argument] = STATE(202),
    [sym_expansion] = STATE(202),
    [sym_operator_expansion] = STATE(202),
    [sym_command_substitution] = STATE(202),
    [sym_file_redirect] = STATE(50),
    [sym_heredoc_redirect] = STATE(50),
    [aux_sym_command_repeat2] = STATE(249),
    [sym_file_descriptor] = ACTIONS(145),
    [anon_sym_SEMI_SEMI] = ACTIONS(637),
    [anon_sym_PIPE] = ACTIONS(637),
    [anon_sym_PIPE_AMP] = ACTIONS(637),
    [anon_sym_AMP_AMP] = ACTIONS(637),
    [anon_sym_PIPE_PIPE] = ACTIONS(637),
    [anon_sym_DQUOTE] = ACTIONS(291),
    [sym_single_quoted_argument] = ACTIONS(521),
    [anon_sym_DOLLAR] = ACTIONS(295),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(297),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(299),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(151),
    [anon_sym_GT_GT] = ACTIONS(151),
    [anon_sym_AMP_GT] = ACTIONS(151),
    [anon_sym_AMP_GT_GT] = ACTIONS(151),
    [anon_sym_LT_AMP] = ACTIONS(151),
    [anon_sym_GT_AMP] = ACTIONS(151),
    [anon_sym_LT_LT] = ACTIONS(153),
    [anon_sym_LT_LT_DASH] = ACTIONS(153),
    [sym_word] = ACTIONS(523),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(637),
    [anon_sym_LF] = ACTIONS(637),
    [anon_sym_AMP] = ACTIONS(637),
  },
  [157] = {
    [sym_file_redirect] = STATE(127),
    [sym_heredoc_redirect] = STATE(127),
    [sym_file_descriptor] = ACTIONS(145),
    [anon_sym_SEMI_SEMI] = ACTIONS(637),
    [anon_sym_PIPE] = ACTIONS(637),
    [anon_sym_PIPE_AMP] = ACTIONS(637),
    [anon_sym_AMP_AMP] = ACTIONS(637),
    [anon_sym_PIPE_PIPE] = ACTIONS(637),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(151),
    [anon_sym_GT_GT] = ACTIONS(151),
    [anon_sym_AMP_GT] = ACTIONS(151),
    [anon_sym_AMP_GT_GT] = ACTIONS(151),
    [anon_sym_LT_AMP] = ACTIONS(151),
    [anon_sym_GT_AMP] = ACTIONS(151),
    [anon_sym_LT_LT] = ACTIONS(153),
    [anon_sym_LT_LT_DASH] = ACTIONS(153),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(637),
    [anon_sym_LF] = ACTIONS(637),
    [anon_sym_AMP] = ACTIONS(637),
  },
  [158] = {
    [sym_file_descriptor] = ACTIONS(639),
    [anon_sym_SEMI_SEMI] = ACTIONS(641),
    [anon_sym_COLON] = ACTIONS(641),
    [anon_sym_PIPE] = ACTIONS(641),
    [anon_sym_PIPE_AMP] = ACTIONS(641),
    [anon_sym_AMP_AMP] = ACTIONS(641),
    [anon_sym_PIPE_PIPE] = ACTIONS(641),
    [anon_sym_DQUOTE] = ACTIONS(641),
    [sym_single_quoted_argument] = ACTIONS(641),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(641),
    [anon_sym_LT] = ACTIONS(641),
    [anon_sym_GT] = ACTIONS(641),
    [anon_sym_GT_GT] = ACTIONS(641),
    [anon_sym_AMP_GT] = ACTIONS(641),
    [anon_sym_AMP_GT_GT] = ACTIONS(641),
    [anon_sym_LT_AMP] = ACTIONS(641),
    [anon_sym_GT_AMP] = ACTIONS(641),
    [sym_leading_word] = ACTIONS(641),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(641),
    [anon_sym_LF] = ACTIONS(641),
    [anon_sym_AMP] = ACTIONS(641),
  },
  [159] = {
    [sym_expansion] = STATE(53),
    [sym_operator_expansion] = STATE(53),
    [sym_command_substitution] = STATE(53),
    [aux_sym_quoted_argument_repeat1] = STATE(251),
    [anon_sym_DQUOTE] = ACTIONS(643),
    [sym__quoted_chars] = ACTIONS(159),
    [anon_sym_DOLLAR] = ACTIONS(161),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(163),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(165),
    [sym_comment] = ACTIONS(155),
  },
  [160] = {
    [anon_sym_DOLLAR] = ACTIONS(645),
    [sym_word] = ACTIONS(647),
    [sym_comment] = ACTIONS(75),
  },
  [161] = {
    [sym_leading_word] = ACTIONS(649),
    [sym_comment] = ACTIONS(75),
  },
  [162] = {
    [sym_command] = STATE(255),
    [sym_environment_variable_assignment] = STATE(20),
    [sym_quoted_argument] = STATE(58),
    [sym_command_substitution] = STATE(58),
    [sym_file_redirect] = STATE(20),
    [aux_sym_command_repeat1] = STATE(63),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [sym_single_quoted_argument] = ACTIONS(171),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(173),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(175),
    [sym_comment] = ACTIONS(75),
  },
  [163] = {
    [sym_file_descriptor] = ACTIONS(651),
    [anon_sym_SEMI_SEMI] = ACTIONS(653),
    [anon_sym_COLON] = ACTIONS(653),
    [anon_sym_PIPE] = ACTIONS(653),
    [anon_sym_PIPE_AMP] = ACTIONS(653),
    [anon_sym_AMP_AMP] = ACTIONS(653),
    [anon_sym_PIPE_PIPE] = ACTIONS(653),
    [anon_sym_DQUOTE] = ACTIONS(653),
    [sym_single_quoted_argument] = ACTIONS(653),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(653),
    [anon_sym_LT] = ACTIONS(653),
    [anon_sym_GT] = ACTIONS(653),
    [anon_sym_GT_GT] = ACTIONS(653),
    [anon_sym_AMP_GT] = ACTIONS(653),
    [anon_sym_AMP_GT_GT] = ACTIONS(653),
    [anon_sym_LT_AMP] = ACTIONS(653),
    [anon_sym_GT_AMP] = ACTIONS(653),
    [sym_leading_word] = ACTIONS(653),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(653),
    [anon_sym_LF] = ACTIONS(653),
    [anon_sym_AMP] = ACTIONS(653),
  },
  [164] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(655),
    [anon_sym_PIPE] = ACTIONS(655),
    [anon_sym_PIPE_AMP] = ACTIONS(655),
    [anon_sym_AMP_AMP] = ACTIONS(655),
    [anon_sym_PIPE_PIPE] = ACTIONS(655),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(655),
    [anon_sym_LF] = ACTIONS(655),
    [anon_sym_AMP] = ACTIONS(655),
  },
  [165] = {
    [sym_file_descriptor] = ACTIONS(211),
    [anon_sym_SEMI_SEMI] = ACTIONS(655),
    [anon_sym_COLON] = ACTIONS(213),
    [anon_sym_PIPE] = ACTIONS(655),
    [anon_sym_PIPE_AMP] = ACTIONS(655),
    [anon_sym_AMP_AMP] = ACTIONS(655),
    [anon_sym_PIPE_PIPE] = ACTIONS(655),
    [anon_sym_DQUOTE] = ACTIONS(213),
    [sym_single_quoted_argument] = ACTIONS(213),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(213),
    [anon_sym_LT] = ACTIONS(213),
    [anon_sym_GT] = ACTIONS(213),
    [anon_sym_GT_GT] = ACTIONS(213),
    [anon_sym_AMP_GT] = ACTIONS(213),
    [anon_sym_AMP_GT_GT] = ACTIONS(213),
    [anon_sym_LT_AMP] = ACTIONS(213),
    [anon_sym_GT_AMP] = ACTIONS(213),
    [sym_leading_word] = ACTIONS(213),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(655),
    [anon_sym_LF] = ACTIONS(655),
    [anon_sym_AMP] = ACTIONS(655),
  },
  [166] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(657),
    [anon_sym_PIPE] = ACTIONS(207),
    [anon_sym_PIPE_AMP] = ACTIONS(207),
    [anon_sym_AMP_AMP] = ACTIONS(657),
    [anon_sym_PIPE_PIPE] = ACTIONS(657),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(657),
    [anon_sym_LF] = ACTIONS(657),
    [anon_sym_AMP] = ACTIONS(657),
  },
  [167] = {
    [sym_file_descriptor] = ACTIONS(211),
    [anon_sym_SEMI_SEMI] = ACTIONS(657),
    [anon_sym_COLON] = ACTIONS(213),
    [anon_sym_PIPE] = ACTIONS(207),
    [anon_sym_PIPE_AMP] = ACTIONS(207),
    [anon_sym_AMP_AMP] = ACTIONS(657),
    [anon_sym_PIPE_PIPE] = ACTIONS(657),
    [anon_sym_DQUOTE] = ACTIONS(213),
    [sym_single_quoted_argument] = ACTIONS(213),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(213),
    [anon_sym_LT] = ACTIONS(213),
    [anon_sym_GT] = ACTIONS(213),
    [anon_sym_GT_GT] = ACTIONS(213),
    [anon_sym_AMP_GT] = ACTIONS(213),
    [anon_sym_AMP_GT_GT] = ACTIONS(213),
    [anon_sym_LT_AMP] = ACTIONS(213),
    [anon_sym_GT_AMP] = ACTIONS(213),
    [sym_leading_word] = ACTIONS(213),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(657),
    [anon_sym_LF] = ACTIONS(657),
    [anon_sym_AMP] = ACTIONS(657),
  },
  [168] = {
    [sym_quoted_argument] = STATE(111),
    [sym_expansion] = STATE(111),
    [sym_operator_expansion] = STATE(111),
    [sym_command_substitution] = STATE(111),
    [sym_file_redirect] = STATE(50),
    [sym_heredoc_redirect] = STATE(50),
    [aux_sym_bracket_command_repeat1] = STATE(256),
    [aux_sym_command_repeat2] = STATE(204),
    [sym_file_descriptor] = ACTIONS(145),
    [anon_sym_SEMI_SEMI] = ACTIONS(519),
    [anon_sym_PIPE] = ACTIONS(519),
    [anon_sym_PIPE_AMP] = ACTIONS(519),
    [anon_sym_AMP_AMP] = ACTIONS(519),
    [anon_sym_PIPE_PIPE] = ACTIONS(519),
    [anon_sym_DQUOTE] = ACTIONS(291),
    [sym_single_quoted_argument] = ACTIONS(293),
    [anon_sym_DOLLAR] = ACTIONS(295),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(297),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(299),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(151),
    [anon_sym_GT_GT] = ACTIONS(151),
    [anon_sym_AMP_GT] = ACTIONS(151),
    [anon_sym_AMP_GT_GT] = ACTIONS(151),
    [anon_sym_LT_AMP] = ACTIONS(151),
    [anon_sym_GT_AMP] = ACTIONS(151),
    [anon_sym_LT_LT] = ACTIONS(153),
    [anon_sym_LT_LT_DASH] = ACTIONS(153),
    [sym_word] = ACTIONS(301),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(519),
    [anon_sym_LF] = ACTIONS(519),
    [anon_sym_AMP] = ACTIONS(519),
  },
  [169] = {
    [sym_quoted_argument] = STATE(111),
    [sym_expansion] = STATE(111),
    [sym_operator_expansion] = STATE(111),
    [sym_command_substitution] = STATE(111),
    [sym_file_redirect] = STATE(50),
    [sym_heredoc_redirect] = STATE(50),
    [aux_sym_bracket_command_repeat1] = STATE(257),
    [aux_sym_command_repeat2] = STATE(258),
    [sym_file_descriptor] = ACTIONS(145),
    [anon_sym_SEMI_SEMI] = ACTIONS(659),
    [anon_sym_PIPE] = ACTIONS(659),
    [anon_sym_PIPE_AMP] = ACTIONS(659),
    [anon_sym_AMP_AMP] = ACTIONS(659),
    [anon_sym_PIPE_PIPE] = ACTIONS(659),
    [anon_sym_DQUOTE] = ACTIONS(291),
    [sym_single_quoted_argument] = ACTIONS(293),
    [anon_sym_DOLLAR] = ACTIONS(295),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(297),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(299),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(151),
    [anon_sym_GT_GT] = ACTIONS(151),
    [anon_sym_AMP_GT] = ACTIONS(151),
    [anon_sym_AMP_GT_GT] = ACTIONS(151),
    [anon_sym_LT_AMP] = ACTIONS(151),
    [anon_sym_GT_AMP] = ACTIONS(151),
    [anon_sym_LT_LT] = ACTIONS(153),
    [anon_sym_LT_LT_DASH] = ACTIONS(153),
    [sym_word] = ACTIONS(301),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(659),
    [anon_sym_LF] = ACTIONS(659),
    [anon_sym_AMP] = ACTIONS(659),
  },
  [170] = {
    [sym_file_redirect] = STATE(127),
    [sym_heredoc_redirect] = STATE(127),
    [sym_file_descriptor] = ACTIONS(145),
    [anon_sym_SEMI_SEMI] = ACTIONS(659),
    [anon_sym_PIPE] = ACTIONS(659),
    [anon_sym_PIPE_AMP] = ACTIONS(659),
    [anon_sym_AMP_AMP] = ACTIONS(659),
    [anon_sym_PIPE_PIPE] = ACTIONS(659),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(151),
    [anon_sym_GT_GT] = ACTIONS(151),
    [anon_sym_AMP_GT] = ACTIONS(151),
    [anon_sym_AMP_GT_GT] = ACTIONS(151),
    [anon_sym_LT_AMP] = ACTIONS(151),
    [anon_sym_GT_AMP] = ACTIONS(151),
    [anon_sym_LT_LT] = ACTIONS(153),
    [anon_sym_LT_LT_DASH] = ACTIONS(153),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(659),
    [anon_sym_LF] = ACTIONS(659),
    [anon_sym_AMP] = ACTIONS(659),
  },
  [171] = {
    [sym_do_group] = STATE(259),
    [anon_sym_do] = ACTIONS(231),
    [sym_comment] = ACTIONS(75),
  },
  [172] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(661),
    [anon_sym_PIPE] = ACTIONS(661),
    [anon_sym_PIPE_AMP] = ACTIONS(661),
    [anon_sym_AMP_AMP] = ACTIONS(661),
    [anon_sym_PIPE_PIPE] = ACTIONS(661),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(661),
    [anon_sym_LF] = ACTIONS(661),
    [anon_sym_AMP] = ACTIONS(661),
  },
  [173] = {
    [sym__terminated_statement] = STATE(77),
    [sym_for_statement] = STATE(18),
    [sym_while_statement] = STATE(18),
    [sym_if_statement] = STATE(18),
    [sym_case_statement] = STATE(18),
    [sym_function_definition] = STATE(18),
    [sym_bracket_command] = STATE(18),
    [sym_command] = STATE(18),
    [sym_pipeline] = STATE(18),
    [sym_list] = STATE(18),
    [sym_subshell] = STATE(18),
    [sym_environment_variable_assignment] = STATE(19),
    [sym_quoted_argument] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(20),
    [aux_sym_command_repeat1] = STATE(22),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_for] = ACTIONS(83),
    [anon_sym_while] = ACTIONS(85),
    [anon_sym_done] = ACTIONS(663),
    [anon_sym_if] = ACTIONS(87),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_function] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(97),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_single_quoted_argument] = ACTIONS(103),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(109),
    [sym_comment] = ACTIONS(75),
  },
  [174] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(665),
    [anon_sym_PIPE] = ACTIONS(665),
    [anon_sym_PIPE_AMP] = ACTIONS(665),
    [anon_sym_AMP_AMP] = ACTIONS(665),
    [anon_sym_PIPE_PIPE] = ACTIONS(665),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(665),
    [anon_sym_LF] = ACTIONS(665),
    [anon_sym_AMP] = ACTIONS(665),
  },
  [175] = {
    [sym__terminated_statement] = STATE(261),
    [sym_for_statement] = STATE(26),
    [sym_while_statement] = STATE(26),
    [sym_if_statement] = STATE(26),
    [sym_case_statement] = STATE(26),
    [sym_function_definition] = STATE(26),
    [sym_bracket_command] = STATE(26),
    [sym_command] = STATE(26),
    [sym_pipeline] = STATE(26),
    [sym_list] = STATE(26),
    [sym_subshell] = STATE(26),
    [sym_environment_variable_assignment] = STATE(27),
    [sym_quoted_argument] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(20),
    [aux_sym_command_repeat1] = STATE(22),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_for] = ACTIONS(83),
    [anon_sym_while] = ACTIONS(85),
    [anon_sym_if] = ACTIONS(87),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_function] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(97),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_single_quoted_argument] = ACTIONS(103),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(109),
    [sym_comment] = ACTIONS(75),
  },
  [176] = {
    [sym__terminated_statement] = STATE(17),
    [sym_for_statement] = STATE(18),
    [sym_while_statement] = STATE(18),
    [sym_if_statement] = STATE(18),
    [sym_case_statement] = STATE(18),
    [sym_function_definition] = STATE(18),
    [sym_bracket_command] = STATE(18),
    [sym_command] = STATE(18),
    [sym_pipeline] = STATE(18),
    [sym_list] = STATE(18),
    [sym_subshell] = STATE(18),
    [sym_environment_variable_assignment] = STATE(19),
    [sym_quoted_argument] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(20),
    [aux_sym_program_repeat1] = STATE(262),
    [aux_sym_command_repeat1] = STATE(22),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_for] = ACTIONS(83),
    [anon_sym_while] = ACTIONS(85),
    [anon_sym_if] = ACTIONS(87),
    [anon_sym_fi] = ACTIONS(667),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_function] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(97),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_single_quoted_argument] = ACTIONS(103),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(109),
    [sym_comment] = ACTIONS(75),
  },
  [177] = {
    [anon_sym_fi] = ACTIONS(669),
    [anon_sym_elif] = ACTIONS(669),
    [anon_sym_else] = ACTIONS(669),
    [sym_comment] = ACTIONS(75),
  },
  [178] = {
    [anon_sym_fi] = ACTIONS(671),
    [sym_comment] = ACTIONS(75),
  },
  [179] = {
    [sym__terminated_statement] = STATE(77),
    [sym_for_statement] = STATE(18),
    [sym_while_statement] = STATE(18),
    [sym_if_statement] = STATE(18),
    [sym_elif_clause] = STATE(177),
    [sym_else_clause] = STATE(264),
    [sym_case_statement] = STATE(18),
    [sym_function_definition] = STATE(18),
    [sym_bracket_command] = STATE(18),
    [sym_command] = STATE(18),
    [sym_pipeline] = STATE(18),
    [sym_list] = STATE(18),
    [sym_subshell] = STATE(18),
    [sym_environment_variable_assignment] = STATE(19),
    [sym_quoted_argument] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(20),
    [aux_sym_if_statement_repeat1] = STATE(265),
    [aux_sym_command_repeat1] = STATE(22),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_for] = ACTIONS(83),
    [anon_sym_while] = ACTIONS(85),
    [anon_sym_if] = ACTIONS(87),
    [anon_sym_fi] = ACTIONS(673),
    [anon_sym_elif] = ACTIONS(443),
    [anon_sym_else] = ACTIONS(445),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_function] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(97),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_single_quoted_argument] = ACTIONS(103),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(109),
    [sym_comment] = ACTIONS(75),
  },
  [180] = {
    [sym_elif_clause] = STATE(266),
    [sym_else_clause] = STATE(264),
    [anon_sym_fi] = ACTIONS(671),
    [anon_sym_elif] = ACTIONS(675),
    [anon_sym_else] = ACTIONS(677),
    [sym_comment] = ACTIONS(75),
  },
  [181] = {
    [anon_sym_in] = ACTIONS(563),
    [anon_sym_SEMI_SEMI] = ACTIONS(563),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(563),
    [anon_sym_LF] = ACTIONS(563),
    [anon_sym_AMP] = ACTIONS(563),
  },
  [182] = {
    [sym_case_item] = STATE(270),
    [sym_quoted_argument] = STATE(268),
    [sym_expansion] = STATE(268),
    [sym_operator_expansion] = STATE(268),
    [sym_command_substitution] = STATE(268),
    [aux_sym_case_statement_repeat1] = STATE(271),
    [anon_sym_esac] = ACTIONS(679),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [sym_single_quoted_argument] = ACTIONS(681),
    [anon_sym_DOLLAR] = ACTIONS(137),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(139),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(141),
    [sym_word] = ACTIONS(683),
    [sym_comment] = ACTIONS(75),
  },
  [183] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(685),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(685),
    [anon_sym_LF] = ACTIONS(685),
    [anon_sym_AMP] = ACTIONS(685),
  },
  [184] = {
    [anon_sym_in] = ACTIONS(687),
    [anon_sym_SEMI_SEMI] = ACTIONS(687),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(687),
    [anon_sym_LF] = ACTIONS(687),
    [anon_sym_AMP] = ACTIONS(687),
  },
  [185] = {
    [sym_quoted_argument] = STATE(273),
    [sym_expansion] = STATE(273),
    [sym_operator_expansion] = STATE(273),
    [sym_command_substitution] = STATE(273),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [sym_single_quoted_argument] = ACTIONS(689),
    [anon_sym_DOLLAR] = ACTIONS(137),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(139),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(141),
    [sym_word] = ACTIONS(691),
    [sym_comment] = ACTIONS(75),
  },
  [186] = {
    [anon_sym_in] = ACTIONS(619),
    [anon_sym_SEMI_SEMI] = ACTIONS(619),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(619),
    [anon_sym_LF] = ACTIONS(619),
    [anon_sym_AMP] = ACTIONS(619),
  },
  [187] = {
    [sym_case_item] = STATE(270),
    [sym_quoted_argument] = STATE(268),
    [sym_expansion] = STATE(268),
    [sym_operator_expansion] = STATE(268),
    [sym_command_substitution] = STATE(268),
    [aux_sym_case_statement_repeat1] = STATE(276),
    [anon_sym_esac] = ACTIONS(693),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [sym_single_quoted_argument] = ACTIONS(681),
    [anon_sym_DOLLAR] = ACTIONS(137),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(139),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(141),
    [sym_word] = ACTIONS(683),
    [sym_comment] = ACTIONS(75),
  },
  [188] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(695),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(695),
    [anon_sym_LF] = ACTIONS(695),
    [anon_sym_AMP] = ACTIONS(695),
  },
  [189] = {
    [sym_compound_command] = STATE(278),
    [anon_sym_LBRACE] = ACTIONS(635),
    [sym_comment] = ACTIONS(75),
  },
  [190] = {
    [anon_sym_RPAREN] = ACTIONS(561),
    [anon_sym_RBRACE] = ACTIONS(561),
    [anon_sym_RBRACK] = ACTIONS(697),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(697),
    [anon_sym_DQUOTE] = ACTIONS(561),
    [sym_single_quoted_argument] = ACTIONS(697),
    [anon_sym_DOLLAR] = ACTIONS(697),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(561),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(561),
    [sym_word] = ACTIONS(563),
    [sym_comment] = ACTIONS(75),
  },
  [191] = {
    [anon_sym_RPAREN] = ACTIONS(699),
    [anon_sym_RBRACE] = ACTIONS(699),
    [anon_sym_RBRACK] = ACTIONS(701),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(701),
    [anon_sym_DQUOTE] = ACTIONS(699),
    [sym_single_quoted_argument] = ACTIONS(701),
    [anon_sym_DOLLAR] = ACTIONS(701),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(699),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(699),
    [sym_word] = ACTIONS(687),
    [sym_comment] = ACTIONS(75),
  },
  [192] = {
    [sym_quoted_argument] = STATE(279),
    [sym_expansion] = STATE(279),
    [sym_operator_expansion] = STATE(279),
    [sym_command_substitution] = STATE(279),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [sym_single_quoted_argument] = ACTIONS(703),
    [anon_sym_DOLLAR] = ACTIONS(137),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(139),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(141),
    [sym_word] = ACTIONS(705),
    [sym_comment] = ACTIONS(75),
  },
  [193] = {
    [anon_sym_RPAREN] = ACTIONS(617),
    [anon_sym_RBRACE] = ACTIONS(617),
    [anon_sym_RBRACK] = ACTIONS(707),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(707),
    [anon_sym_DQUOTE] = ACTIONS(617),
    [sym_single_quoted_argument] = ACTIONS(707),
    [anon_sym_DOLLAR] = ACTIONS(707),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(617),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(617),
    [sym_word] = ACTIONS(619),
    [sym_comment] = ACTIONS(75),
  },
  [194] = {
    [sym_file_descriptor] = ACTIONS(425),
    [anon_sym_SEMI_SEMI] = ACTIONS(429),
    [anon_sym_PIPE] = ACTIONS(429),
    [anon_sym_PIPE_AMP] = ACTIONS(429),
    [anon_sym_AMP_AMP] = ACTIONS(429),
    [anon_sym_PIPE_PIPE] = ACTIONS(429),
    [anon_sym_LT] = ACTIONS(429),
    [anon_sym_GT] = ACTIONS(429),
    [anon_sym_GT_GT] = ACTIONS(429),
    [anon_sym_AMP_GT] = ACTIONS(429),
    [anon_sym_AMP_GT_GT] = ACTIONS(429),
    [anon_sym_LT_AMP] = ACTIONS(429),
    [anon_sym_GT_AMP] = ACTIONS(429),
    [anon_sym_LT_LT] = ACTIONS(429),
    [anon_sym_LT_LT_DASH] = ACTIONS(429),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(429),
    [anon_sym_LF] = ACTIONS(429),
    [anon_sym_AMP] = ACTIONS(429),
  },
  [195] = {
    [sym_file_descriptor] = ACTIONS(431),
    [anon_sym_SEMI_SEMI] = ACTIONS(435),
    [anon_sym_PIPE] = ACTIONS(435),
    [anon_sym_PIPE_AMP] = ACTIONS(435),
    [anon_sym_AMP_AMP] = ACTIONS(435),
    [anon_sym_PIPE_PIPE] = ACTIONS(435),
    [anon_sym_LT] = ACTIONS(435),
    [anon_sym_GT] = ACTIONS(435),
    [anon_sym_GT_GT] = ACTIONS(435),
    [anon_sym_AMP_GT] = ACTIONS(435),
    [anon_sym_AMP_GT_GT] = ACTIONS(435),
    [anon_sym_LT_AMP] = ACTIONS(435),
    [anon_sym_GT_AMP] = ACTIONS(435),
    [anon_sym_LT_LT] = ACTIONS(435),
    [anon_sym_LT_LT_DASH] = ACTIONS(435),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(435),
    [anon_sym_LF] = ACTIONS(435),
    [anon_sym_AMP] = ACTIONS(435),
  },
  [196] = {
    [sym_file_descriptor] = ACTIONS(323),
    [anon_sym_SEMI_SEMI] = ACTIONS(325),
    [anon_sym_PIPE] = ACTIONS(325),
    [anon_sym_PIPE_AMP] = ACTIONS(325),
    [anon_sym_AMP_AMP] = ACTIONS(325),
    [anon_sym_PIPE_PIPE] = ACTIONS(325),
    [anon_sym_DQUOTE] = ACTIONS(325),
    [sym_single_quoted_argument] = ACTIONS(325),
    [anon_sym_DOLLAR] = ACTIONS(325),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(325),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(325),
    [anon_sym_LT] = ACTIONS(325),
    [anon_sym_GT] = ACTIONS(325),
    [anon_sym_GT_GT] = ACTIONS(325),
    [anon_sym_AMP_GT] = ACTIONS(325),
    [anon_sym_AMP_GT_GT] = ACTIONS(325),
    [anon_sym_LT_AMP] = ACTIONS(325),
    [anon_sym_GT_AMP] = ACTIONS(325),
    [anon_sym_LT_LT] = ACTIONS(325),
    [anon_sym_LT_LT_DASH] = ACTIONS(325),
    [sym_word] = ACTIONS(325),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(325),
    [anon_sym_LF] = ACTIONS(325),
    [anon_sym_AMP] = ACTIONS(325),
  },
  [197] = {
    [sym_expansion] = STATE(133),
    [sym_operator_expansion] = STATE(133),
    [sym_command_substitution] = STATE(133),
    [anon_sym_DQUOTE] = ACTIONS(709),
    [sym__quoted_chars] = ACTIONS(339),
    [anon_sym_DOLLAR] = ACTIONS(161),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(163),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(165),
    [sym_comment] = ACTIONS(155),
  },
  [198] = {
    [sym_file_descriptor] = ACTIONS(477),
    [anon_sym_SEMI_SEMI] = ACTIONS(453),
    [anon_sym_PIPE] = ACTIONS(453),
    [anon_sym_PIPE_AMP] = ACTIONS(453),
    [anon_sym_AMP_AMP] = ACTIONS(453),
    [anon_sym_PIPE_PIPE] = ACTIONS(453),
    [anon_sym_DQUOTE] = ACTIONS(453),
    [sym_single_quoted_argument] = ACTIONS(453),
    [anon_sym_DOLLAR] = ACTIONS(453),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(453),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(453),
    [anon_sym_LT] = ACTIONS(453),
    [anon_sym_GT] = ACTIONS(453),
    [anon_sym_GT_GT] = ACTIONS(453),
    [anon_sym_AMP_GT] = ACTIONS(453),
    [anon_sym_AMP_GT_GT] = ACTIONS(453),
    [anon_sym_LT_AMP] = ACTIONS(453),
    [anon_sym_GT_AMP] = ACTIONS(453),
    [anon_sym_LT_LT] = ACTIONS(453),
    [anon_sym_LT_LT_DASH] = ACTIONS(453),
    [sym_word] = ACTIONS(453),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(453),
    [anon_sym_LF] = ACTIONS(453),
    [anon_sym_AMP] = ACTIONS(453),
  },
  [199] = {
    [sym_file_descriptor] = ACTIONS(481),
    [anon_sym_SEMI_SEMI] = ACTIONS(455),
    [anon_sym_PIPE] = ACTIONS(455),
    [anon_sym_PIPE_AMP] = ACTIONS(455),
    [anon_sym_AMP_AMP] = ACTIONS(455),
    [anon_sym_PIPE_PIPE] = ACTIONS(455),
    [anon_sym_DQUOTE] = ACTIONS(455),
    [sym_single_quoted_argument] = ACTIONS(455),
    [anon_sym_DOLLAR] = ACTIONS(455),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(455),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(455),
    [anon_sym_LT] = ACTIONS(455),
    [anon_sym_GT] = ACTIONS(455),
    [anon_sym_GT_GT] = ACTIONS(455),
    [anon_sym_AMP_GT] = ACTIONS(455),
    [anon_sym_AMP_GT_GT] = ACTIONS(455),
    [anon_sym_LT_AMP] = ACTIONS(455),
    [anon_sym_GT_AMP] = ACTIONS(455),
    [anon_sym_LT_LT] = ACTIONS(455),
    [anon_sym_LT_LT_DASH] = ACTIONS(455),
    [sym_word] = ACTIONS(455),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(455),
    [anon_sym_LF] = ACTIONS(455),
    [anon_sym_AMP] = ACTIONS(455),
  },
  [200] = {
    [anon_sym_RBRACE] = ACTIONS(711),
    [anon_sym_COLON] = ACTIONS(713),
    [anon_sym_EQ] = ACTIONS(715),
    [anon_sym_COLON_QMARK] = ACTIONS(715),
    [anon_sym_COLON_DASH] = ACTIONS(715),
    [sym_comment] = ACTIONS(75),
  },
  [201] = {
    [anon_sym_RPAREN] = ACTIONS(717),
    [sym_comment] = ACTIONS(75),
  },
  [202] = {
    [sym_file_descriptor] = ACTIONS(497),
    [anon_sym_SEMI_SEMI] = ACTIONS(499),
    [anon_sym_PIPE] = ACTIONS(499),
    [anon_sym_PIPE_AMP] = ACTIONS(499),
    [anon_sym_AMP_AMP] = ACTIONS(499),
    [anon_sym_PIPE_PIPE] = ACTIONS(499),
    [anon_sym_DQUOTE] = ACTIONS(499),
    [sym_single_quoted_argument] = ACTIONS(499),
    [anon_sym_DOLLAR] = ACTIONS(499),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(499),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(499),
    [anon_sym_LT] = ACTIONS(499),
    [anon_sym_GT] = ACTIONS(499),
    [anon_sym_GT_GT] = ACTIONS(499),
    [anon_sym_AMP_GT] = ACTIONS(499),
    [anon_sym_AMP_GT_GT] = ACTIONS(499),
    [anon_sym_LT_AMP] = ACTIONS(499),
    [anon_sym_GT_AMP] = ACTIONS(499),
    [anon_sym_LT_LT] = ACTIONS(499),
    [anon_sym_LT_LT_DASH] = ACTIONS(499),
    [sym_word] = ACTIONS(499),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(499),
    [anon_sym_LF] = ACTIONS(499),
    [anon_sym_AMP] = ACTIONS(499),
  },
  [203] = {
    [sym_file_descriptor] = ACTIONS(503),
    [anon_sym_SEMI_SEMI] = ACTIONS(505),
    [anon_sym_PIPE] = ACTIONS(505),
    [anon_sym_PIPE_AMP] = ACTIONS(505),
    [anon_sym_AMP_AMP] = ACTIONS(505),
    [anon_sym_PIPE_PIPE] = ACTIONS(505),
    [anon_sym_DQUOTE] = ACTIONS(505),
    [sym_single_quoted_argument] = ACTIONS(505),
    [anon_sym_DOLLAR] = ACTIONS(505),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(505),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(505),
    [anon_sym_LT] = ACTIONS(505),
    [anon_sym_GT] = ACTIONS(505),
    [anon_sym_GT_GT] = ACTIONS(505),
    [anon_sym_AMP_GT] = ACTIONS(505),
    [anon_sym_AMP_GT_GT] = ACTIONS(505),
    [anon_sym_LT_AMP] = ACTIONS(505),
    [anon_sym_GT_AMP] = ACTIONS(505),
    [anon_sym_LT_LT] = ACTIONS(505),
    [anon_sym_LT_LT_DASH] = ACTIONS(505),
    [sym_word] = ACTIONS(505),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(505),
    [anon_sym_LF] = ACTIONS(505),
    [anon_sym_AMP] = ACTIONS(505),
  },
  [204] = {
    [sym_file_redirect] = STATE(127),
    [sym_heredoc_redirect] = STATE(127),
    [sym_file_descriptor] = ACTIONS(145),
    [anon_sym_SEMI_SEMI] = ACTIONS(719),
    [anon_sym_PIPE] = ACTIONS(719),
    [anon_sym_PIPE_AMP] = ACTIONS(719),
    [anon_sym_AMP_AMP] = ACTIONS(719),
    [anon_sym_PIPE_PIPE] = ACTIONS(719),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(151),
    [anon_sym_GT_GT] = ACTIONS(151),
    [anon_sym_AMP_GT] = ACTIONS(151),
    [anon_sym_AMP_GT_GT] = ACTIONS(151),
    [anon_sym_LT_AMP] = ACTIONS(151),
    [anon_sym_GT_AMP] = ACTIONS(151),
    [anon_sym_LT_LT] = ACTIONS(153),
    [anon_sym_LT_LT_DASH] = ACTIONS(153),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(719),
    [anon_sym_LF] = ACTIONS(719),
    [anon_sym_AMP] = ACTIONS(719),
  },
  [205] = {
    [sym_file_descriptor] = ACTIONS(323),
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
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(325),
    [anon_sym_LF] = ACTIONS(325),
    [anon_sym_AMP] = ACTIONS(325),
  },
  [206] = {
    [sym_expansion] = STATE(133),
    [sym_operator_expansion] = STATE(133),
    [sym_command_substitution] = STATE(133),
    [anon_sym_DQUOTE] = ACTIONS(721),
    [sym__quoted_chars] = ACTIONS(339),
    [anon_sym_DOLLAR] = ACTIONS(161),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(163),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(165),
    [sym_comment] = ACTIONS(155),
  },
  [207] = {
    [sym_file_descriptor] = ACTIONS(477),
    [anon_sym_SEMI_SEMI] = ACTIONS(453),
    [anon_sym_PIPE] = ACTIONS(453),
    [anon_sym_PIPE_AMP] = ACTIONS(453),
    [anon_sym_AMP_AMP] = ACTIONS(453),
    [anon_sym_PIPE_PIPE] = ACTIONS(453),
    [anon_sym_LT] = ACTIONS(453),
    [anon_sym_GT] = ACTIONS(453),
    [anon_sym_GT_GT] = ACTIONS(453),
    [anon_sym_AMP_GT] = ACTIONS(453),
    [anon_sym_AMP_GT_GT] = ACTIONS(453),
    [anon_sym_LT_AMP] = ACTIONS(453),
    [anon_sym_GT_AMP] = ACTIONS(453),
    [anon_sym_LT_LT] = ACTIONS(453),
    [anon_sym_LT_LT_DASH] = ACTIONS(453),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(453),
    [anon_sym_LF] = ACTIONS(453),
    [anon_sym_AMP] = ACTIONS(453),
  },
  [208] = {
    [sym_file_descriptor] = ACTIONS(481),
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
    [anon_sym_LT_LT] = ACTIONS(455),
    [anon_sym_LT_LT_DASH] = ACTIONS(455),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(455),
    [anon_sym_LF] = ACTIONS(455),
    [anon_sym_AMP] = ACTIONS(455),
  },
  [209] = {
    [anon_sym_RBRACE] = ACTIONS(723),
    [anon_sym_COLON] = ACTIONS(725),
    [anon_sym_EQ] = ACTIONS(727),
    [anon_sym_COLON_QMARK] = ACTIONS(727),
    [anon_sym_COLON_DASH] = ACTIONS(727),
    [sym_comment] = ACTIONS(75),
  },
  [210] = {
    [anon_sym_RPAREN] = ACTIONS(729),
    [sym_comment] = ACTIONS(75),
  },
  [211] = {
    [sym__heredoc_middle] = ACTIONS(731),
    [sym__heredoc_end] = ACTIONS(731),
    [anon_sym_DOLLAR] = ACTIONS(733),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(731),
    [sym_comment] = ACTIONS(75),
  },
  [212] = {
    [sym_file_descriptor] = ACTIONS(735),
    [anon_sym_SEMI_SEMI] = ACTIONS(737),
    [anon_sym_PIPE] = ACTIONS(737),
    [anon_sym_PIPE_AMP] = ACTIONS(737),
    [anon_sym_AMP_AMP] = ACTIONS(737),
    [anon_sym_PIPE_PIPE] = ACTIONS(737),
    [anon_sym_LT] = ACTIONS(737),
    [anon_sym_GT] = ACTIONS(737),
    [anon_sym_GT_GT] = ACTIONS(737),
    [anon_sym_AMP_GT] = ACTIONS(737),
    [anon_sym_AMP_GT_GT] = ACTIONS(737),
    [anon_sym_LT_AMP] = ACTIONS(737),
    [anon_sym_GT_AMP] = ACTIONS(737),
    [anon_sym_LT_LT] = ACTIONS(737),
    [anon_sym_LT_LT_DASH] = ACTIONS(737),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(737),
    [anon_sym_LF] = ACTIONS(737),
    [anon_sym_AMP] = ACTIONS(737),
  },
  [213] = {
    [anon_sym_DOLLAR] = ACTIONS(739),
    [sym_word] = ACTIONS(741),
    [sym_comment] = ACTIONS(75),
  },
  [214] = {
    [sym_leading_word] = ACTIONS(743),
    [sym_comment] = ACTIONS(75),
  },
  [215] = {
    [sym_expansion] = STATE(292),
    [sym_operator_expansion] = STATE(292),
    [sym__heredoc_middle] = ACTIONS(745),
    [sym__heredoc_end] = ACTIONS(747),
    [anon_sym_DOLLAR] = ACTIONS(541),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(543),
    [sym_comment] = ACTIONS(75),
  },
  [216] = {
    [anon_sym_DQUOTE] = ACTIONS(687),
    [sym__quoted_chars] = ACTIONS(701),
    [anon_sym_DOLLAR] = ACTIONS(687),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(687),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(687),
    [sym_comment] = ACTIONS(155),
  },
  [217] = {
    [sym_quoted_argument] = STATE(294),
    [sym_expansion] = STATE(294),
    [sym_operator_expansion] = STATE(294),
    [sym_command_substitution] = STATE(294),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [sym_single_quoted_argument] = ACTIONS(749),
    [anon_sym_DOLLAR] = ACTIONS(137),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(139),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(141),
    [sym_word] = ACTIONS(751),
    [sym_comment] = ACTIONS(75),
  },
  [218] = {
    [anon_sym_DQUOTE] = ACTIONS(619),
    [sym__quoted_chars] = ACTIONS(707),
    [anon_sym_DOLLAR] = ACTIONS(619),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(619),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(619),
    [sym_comment] = ACTIONS(155),
  },
  [219] = {
    [sym_quoted_argument] = STATE(296),
    [sym_expansion] = STATE(296),
    [sym_operator_expansion] = STATE(296),
    [sym_command_substitution] = STATE(296),
    [anon_sym_DQUOTE] = ACTIONS(575),
    [sym_single_quoted_argument] = ACTIONS(753),
    [anon_sym_DOLLAR] = ACTIONS(579),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(581),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(583),
    [sym_word] = ACTIONS(755),
    [sym_comment] = ACTIONS(75),
  },
  [220] = {
    [sym_expansion] = STATE(53),
    [sym_operator_expansion] = STATE(53),
    [sym_command_substitution] = STATE(53),
    [aux_sym_quoted_argument_repeat1] = STATE(299),
    [anon_sym_DQUOTE] = ACTIONS(757),
    [sym__quoted_chars] = ACTIONS(159),
    [anon_sym_DOLLAR] = ACTIONS(161),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(163),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(165),
    [sym_comment] = ACTIONS(155),
  },
  [221] = {
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
    [sym_comment] = ACTIONS(75),
  },
  [222] = {
    [anon_sym_DOLLAR] = ACTIONS(759),
    [sym_word] = ACTIONS(761),
    [sym_comment] = ACTIONS(75),
  },
  [223] = {
    [sym_leading_word] = ACTIONS(763),
    [sym_comment] = ACTIONS(75),
  },
  [224] = {
    [sym_command] = STATE(303),
    [sym_environment_variable_assignment] = STATE(20),
    [sym_quoted_argument] = STATE(58),
    [sym_command_substitution] = STATE(58),
    [sym_file_redirect] = STATE(20),
    [aux_sym_command_repeat1] = STATE(63),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [sym_single_quoted_argument] = ACTIONS(171),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(173),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(175),
    [sym_comment] = ACTIONS(75),
  },
  [225] = {
    [sym_file_descriptor] = ACTIONS(275),
    [anon_sym_RPAREN] = ACTIONS(275),
    [anon_sym_DQUOTE] = ACTIONS(275),
    [sym_single_quoted_argument] = ACTIONS(273),
    [anon_sym_DOLLAR] = ACTIONS(273),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(275),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(275),
    [anon_sym_LT] = ACTIONS(273),
    [anon_sym_GT] = ACTIONS(273),
    [anon_sym_GT_GT] = ACTIONS(275),
    [anon_sym_AMP_GT] = ACTIONS(273),
    [anon_sym_AMP_GT_GT] = ACTIONS(275),
    [anon_sym_LT_AMP] = ACTIONS(275),
    [anon_sym_GT_AMP] = ACTIONS(275),
    [anon_sym_LT_LT] = ACTIONS(273),
    [anon_sym_LT_LT_DASH] = ACTIONS(275),
    [sym_word] = ACTIONS(277),
    [sym_comment] = ACTIONS(75),
  },
  [226] = {
    [sym_quoted_argument] = STATE(304),
    [sym_expansion] = STATE(304),
    [sym_operator_expansion] = STATE(304),
    [sym_command_substitution] = STATE(304),
    [sym_file_redirect] = STATE(138),
    [sym_heredoc_redirect] = STATE(138),
    [aux_sym_command_repeat2] = STATE(306),
    [sym_file_descriptor] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(765),
    [anon_sym_DQUOTE] = ACTIONS(575),
    [sym_single_quoted_argument] = ACTIONS(767),
    [anon_sym_DOLLAR] = ACTIONS(579),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(581),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(583),
    [anon_sym_LT] = ACTIONS(585),
    [anon_sym_GT] = ACTIONS(585),
    [anon_sym_GT_GT] = ACTIONS(587),
    [anon_sym_AMP_GT] = ACTIONS(585),
    [anon_sym_AMP_GT_GT] = ACTIONS(587),
    [anon_sym_LT_AMP] = ACTIONS(587),
    [anon_sym_GT_AMP] = ACTIONS(587),
    [anon_sym_LT_LT] = ACTIONS(589),
    [anon_sym_LT_LT_DASH] = ACTIONS(591),
    [sym_word] = ACTIONS(769),
    [sym_comment] = ACTIONS(75),
  },
  [227] = {
    [sym_file_redirect] = STATE(233),
    [sym_heredoc_redirect] = STATE(233),
    [sym_file_descriptor] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(765),
    [anon_sym_LT] = ACTIONS(585),
    [anon_sym_GT] = ACTIONS(585),
    [anon_sym_GT_GT] = ACTIONS(587),
    [anon_sym_AMP_GT] = ACTIONS(585),
    [anon_sym_AMP_GT_GT] = ACTIONS(587),
    [anon_sym_LT_AMP] = ACTIONS(587),
    [anon_sym_GT_AMP] = ACTIONS(587),
    [anon_sym_LT_LT] = ACTIONS(589),
    [anon_sym_LT_LT_DASH] = ACTIONS(591),
    [sym_comment] = ACTIONS(75),
  },
  [228] = {
    [sym_file_descriptor] = ACTIONS(365),
    [anon_sym_RPAREN] = ACTIONS(365),
    [anon_sym_LT] = ACTIONS(367),
    [anon_sym_GT] = ACTIONS(367),
    [anon_sym_GT_GT] = ACTIONS(365),
    [anon_sym_AMP_GT] = ACTIONS(367),
    [anon_sym_AMP_GT_GT] = ACTIONS(365),
    [anon_sym_LT_AMP] = ACTIONS(365),
    [anon_sym_GT_AMP] = ACTIONS(365),
    [anon_sym_LT_LT] = ACTIONS(367),
    [anon_sym_LT_LT_DASH] = ACTIONS(365),
    [sym_comment] = ACTIONS(75),
  },
  [229] = {
    [sym_file_descriptor] = ACTIONS(377),
    [anon_sym_RPAREN] = ACTIONS(377),
    [anon_sym_LT] = ACTIONS(379),
    [anon_sym_GT] = ACTIONS(379),
    [anon_sym_GT_GT] = ACTIONS(377),
    [anon_sym_AMP_GT] = ACTIONS(379),
    [anon_sym_AMP_GT_GT] = ACTIONS(377),
    [anon_sym_LT_AMP] = ACTIONS(377),
    [anon_sym_GT_AMP] = ACTIONS(377),
    [anon_sym_LT_LT] = ACTIONS(379),
    [anon_sym_LT_LT_DASH] = ACTIONS(377),
    [sym_comment] = ACTIONS(75),
  },
  [230] = {
    [sym_file_descriptor] = ACTIONS(533),
    [anon_sym_RPAREN] = ACTIONS(533),
    [anon_sym_LT] = ACTIONS(771),
    [anon_sym_GT] = ACTIONS(771),
    [anon_sym_GT_GT] = ACTIONS(533),
    [anon_sym_AMP_GT] = ACTIONS(771),
    [anon_sym_AMP_GT_GT] = ACTIONS(533),
    [anon_sym_LT_AMP] = ACTIONS(533),
    [anon_sym_GT_AMP] = ACTIONS(533),
    [anon_sym_LT_LT] = ACTIONS(771),
    [anon_sym_LT_LT_DASH] = ACTIONS(533),
    [sym_comment] = ACTIONS(75),
  },
  [231] = {
    [sym_expansion] = STATE(211),
    [sym_operator_expansion] = STATE(211),
    [aux_sym_heredoc_repeat1] = STATE(308),
    [sym__heredoc_middle] = ACTIONS(537),
    [sym__heredoc_end] = ACTIONS(773),
    [anon_sym_DOLLAR] = ACTIONS(541),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(543),
    [sym_comment] = ACTIONS(75),
  },
  [232] = {
    [sym_file_descriptor] = ACTIONS(545),
    [anon_sym_RPAREN] = ACTIONS(545),
    [anon_sym_LT] = ACTIONS(775),
    [anon_sym_GT] = ACTIONS(775),
    [anon_sym_GT_GT] = ACTIONS(545),
    [anon_sym_AMP_GT] = ACTIONS(775),
    [anon_sym_AMP_GT_GT] = ACTIONS(545),
    [anon_sym_LT_AMP] = ACTIONS(545),
    [anon_sym_GT_AMP] = ACTIONS(545),
    [anon_sym_LT_LT] = ACTIONS(775),
    [anon_sym_LT_LT_DASH] = ACTIONS(545),
    [sym_comment] = ACTIONS(75),
  },
  [233] = {
    [sym_file_descriptor] = ACTIONS(549),
    [anon_sym_RPAREN] = ACTIONS(549),
    [anon_sym_LT] = ACTIONS(777),
    [anon_sym_GT] = ACTIONS(777),
    [anon_sym_GT_GT] = ACTIONS(549),
    [anon_sym_AMP_GT] = ACTIONS(777),
    [anon_sym_AMP_GT_GT] = ACTIONS(549),
    [anon_sym_LT_AMP] = ACTIONS(549),
    [anon_sym_GT_AMP] = ACTIONS(549),
    [anon_sym_LT_LT] = ACTIONS(777),
    [anon_sym_LT_LT_DASH] = ACTIONS(549),
    [sym_comment] = ACTIONS(75),
  },
  [234] = {
    [sym_file_descriptor] = ACTIONS(561),
    [anon_sym_RPAREN] = ACTIONS(563),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(563),
    [anon_sym_LT] = ACTIONS(563),
    [anon_sym_GT] = ACTIONS(563),
    [anon_sym_GT_GT] = ACTIONS(563),
    [anon_sym_AMP_GT] = ACTIONS(563),
    [anon_sym_AMP_GT_GT] = ACTIONS(563),
    [anon_sym_LT_AMP] = ACTIONS(563),
    [anon_sym_GT_AMP] = ACTIONS(563),
    [anon_sym_LT_LT] = ACTIONS(563),
    [anon_sym_LT_LT_DASH] = ACTIONS(563),
    [sym_comment] = ACTIONS(155),
  },
  [235] = {
    [sym_file_descriptor] = ACTIONS(617),
    [anon_sym_RPAREN] = ACTIONS(619),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(619),
    [anon_sym_GT] = ACTIONS(619),
    [anon_sym_GT_GT] = ACTIONS(619),
    [anon_sym_AMP_GT] = ACTIONS(619),
    [anon_sym_AMP_GT_GT] = ACTIONS(619),
    [anon_sym_LT_AMP] = ACTIONS(619),
    [anon_sym_GT_AMP] = ACTIONS(619),
    [anon_sym_LT_LT] = ACTIONS(619),
    [anon_sym_LT_LT_DASH] = ACTIONS(619),
    [sym_comment] = ACTIONS(155),
  },
  [236] = {
    [sym_quoted_argument] = STATE(304),
    [sym_expansion] = STATE(304),
    [sym_operator_expansion] = STATE(304),
    [sym_command_substitution] = STATE(304),
    [sym_file_redirect] = STATE(138),
    [sym_heredoc_redirect] = STATE(138),
    [aux_sym_command_repeat2] = STATE(309),
    [sym_file_descriptor] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(779),
    [anon_sym_DQUOTE] = ACTIONS(575),
    [sym_single_quoted_argument] = ACTIONS(767),
    [anon_sym_DOLLAR] = ACTIONS(579),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(581),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(583),
    [anon_sym_LT] = ACTIONS(585),
    [anon_sym_GT] = ACTIONS(585),
    [anon_sym_GT_GT] = ACTIONS(587),
    [anon_sym_AMP_GT] = ACTIONS(585),
    [anon_sym_AMP_GT_GT] = ACTIONS(587),
    [anon_sym_LT_AMP] = ACTIONS(587),
    [anon_sym_GT_AMP] = ACTIONS(587),
    [anon_sym_LT_LT] = ACTIONS(589),
    [anon_sym_LT_LT_DASH] = ACTIONS(591),
    [sym_word] = ACTIONS(769),
    [sym_comment] = ACTIONS(75),
  },
  [237] = {
    [sym_file_redirect] = STATE(233),
    [sym_heredoc_redirect] = STATE(233),
    [sym_file_descriptor] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(779),
    [anon_sym_LT] = ACTIONS(585),
    [anon_sym_GT] = ACTIONS(585),
    [anon_sym_GT_GT] = ACTIONS(587),
    [anon_sym_AMP_GT] = ACTIONS(585),
    [anon_sym_AMP_GT_GT] = ACTIONS(587),
    [anon_sym_LT_AMP] = ACTIONS(587),
    [anon_sym_GT_AMP] = ACTIONS(587),
    [anon_sym_LT_LT] = ACTIONS(589),
    [anon_sym_LT_LT_DASH] = ACTIONS(591),
    [sym_comment] = ACTIONS(75),
  },
  [238] = {
    [sym_file_descriptor] = ACTIONS(639),
    [anon_sym_COLON] = ACTIONS(639),
    [anon_sym_DQUOTE] = ACTIONS(639),
    [sym_single_quoted_argument] = ACTIONS(781),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(639),
    [anon_sym_LT] = ACTIONS(781),
    [anon_sym_GT] = ACTIONS(781),
    [anon_sym_GT_GT] = ACTIONS(781),
    [anon_sym_AMP_GT] = ACTIONS(781),
    [anon_sym_AMP_GT_GT] = ACTIONS(781),
    [anon_sym_LT_AMP] = ACTIONS(781),
    [anon_sym_GT_AMP] = ACTIONS(781),
    [sym_leading_word] = ACTIONS(641),
    [sym_comment] = ACTIONS(75),
  },
  [239] = {
    [sym_file_descriptor] = ACTIONS(651),
    [anon_sym_COLON] = ACTIONS(651),
    [anon_sym_DQUOTE] = ACTIONS(651),
    [sym_single_quoted_argument] = ACTIONS(783),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(651),
    [anon_sym_LT] = ACTIONS(783),
    [anon_sym_GT] = ACTIONS(783),
    [anon_sym_GT_GT] = ACTIONS(783),
    [anon_sym_AMP_GT] = ACTIONS(783),
    [anon_sym_AMP_GT_GT] = ACTIONS(783),
    [anon_sym_LT_AMP] = ACTIONS(783),
    [anon_sym_GT_AMP] = ACTIONS(783),
    [sym_leading_word] = ACTIONS(653),
    [sym_comment] = ACTIONS(75),
  },
  [240] = {
    [sym_quoted_argument] = STATE(221),
    [sym_expansion] = STATE(221),
    [sym_operator_expansion] = STATE(221),
    [sym_command_substitution] = STATE(221),
    [sym_file_redirect] = STATE(138),
    [sym_heredoc_redirect] = STATE(138),
    [aux_sym_bracket_command_repeat1] = STATE(310),
    [aux_sym_command_repeat2] = STATE(306),
    [sym_file_descriptor] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(765),
    [anon_sym_DQUOTE] = ACTIONS(575),
    [sym_single_quoted_argument] = ACTIONS(577),
    [anon_sym_DOLLAR] = ACTIONS(579),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(581),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(583),
    [anon_sym_LT] = ACTIONS(585),
    [anon_sym_GT] = ACTIONS(585),
    [anon_sym_GT_GT] = ACTIONS(587),
    [anon_sym_AMP_GT] = ACTIONS(585),
    [anon_sym_AMP_GT_GT] = ACTIONS(587),
    [anon_sym_LT_AMP] = ACTIONS(587),
    [anon_sym_GT_AMP] = ACTIONS(587),
    [anon_sym_LT_LT] = ACTIONS(589),
    [anon_sym_LT_LT_DASH] = ACTIONS(591),
    [sym_word] = ACTIONS(593),
    [sym_comment] = ACTIONS(75),
  },
  [241] = {
    [sym_quoted_argument] = STATE(221),
    [sym_expansion] = STATE(221),
    [sym_operator_expansion] = STATE(221),
    [sym_command_substitution] = STATE(221),
    [sym_file_redirect] = STATE(138),
    [sym_heredoc_redirect] = STATE(138),
    [aux_sym_bracket_command_repeat1] = STATE(311),
    [aux_sym_command_repeat2] = STATE(312),
    [sym_file_descriptor] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(785),
    [anon_sym_DQUOTE] = ACTIONS(575),
    [sym_single_quoted_argument] = ACTIONS(577),
    [anon_sym_DOLLAR] = ACTIONS(579),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(581),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(583),
    [anon_sym_LT] = ACTIONS(585),
    [anon_sym_GT] = ACTIONS(585),
    [anon_sym_GT_GT] = ACTIONS(587),
    [anon_sym_AMP_GT] = ACTIONS(585),
    [anon_sym_AMP_GT_GT] = ACTIONS(587),
    [anon_sym_LT_AMP] = ACTIONS(587),
    [anon_sym_GT_AMP] = ACTIONS(587),
    [anon_sym_LT_LT] = ACTIONS(589),
    [anon_sym_LT_LT_DASH] = ACTIONS(591),
    [sym_word] = ACTIONS(593),
    [sym_comment] = ACTIONS(75),
  },
  [242] = {
    [sym_file_redirect] = STATE(233),
    [sym_heredoc_redirect] = STATE(233),
    [sym_file_descriptor] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(785),
    [anon_sym_LT] = ACTIONS(585),
    [anon_sym_GT] = ACTIONS(585),
    [anon_sym_GT_GT] = ACTIONS(587),
    [anon_sym_AMP_GT] = ACTIONS(585),
    [anon_sym_AMP_GT_GT] = ACTIONS(587),
    [anon_sym_LT_AMP] = ACTIONS(587),
    [anon_sym_GT_AMP] = ACTIONS(587),
    [anon_sym_LT_LT] = ACTIONS(589),
    [anon_sym_LT_LT_DASH] = ACTIONS(591),
    [sym_comment] = ACTIONS(75),
  },
  [243] = {
    [sym_file_descriptor] = ACTIONS(561),
    [anon_sym_COLON] = ACTIONS(561),
    [anon_sym_DQUOTE] = ACTIONS(561),
    [sym_single_quoted_argument] = ACTIONS(697),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(561),
    [anon_sym_LT] = ACTIONS(697),
    [anon_sym_GT] = ACTIONS(697),
    [anon_sym_GT_GT] = ACTIONS(697),
    [anon_sym_AMP_GT] = ACTIONS(697),
    [anon_sym_AMP_GT_GT] = ACTIONS(697),
    [anon_sym_LT_AMP] = ACTIONS(697),
    [anon_sym_GT_AMP] = ACTIONS(697),
    [sym_leading_word] = ACTIONS(563),
    [sym_comment] = ACTIONS(75),
  },
  [244] = {
    [sym_file_descriptor] = ACTIONS(699),
    [anon_sym_COLON] = ACTIONS(699),
    [anon_sym_DQUOTE] = ACTIONS(699),
    [sym_single_quoted_argument] = ACTIONS(701),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(699),
    [anon_sym_LT] = ACTIONS(701),
    [anon_sym_GT] = ACTIONS(701),
    [anon_sym_GT_GT] = ACTIONS(701),
    [anon_sym_AMP_GT] = ACTIONS(701),
    [anon_sym_AMP_GT_GT] = ACTIONS(701),
    [anon_sym_LT_AMP] = ACTIONS(701),
    [anon_sym_GT_AMP] = ACTIONS(701),
    [sym_leading_word] = ACTIONS(687),
    [sym_comment] = ACTIONS(75),
  },
  [245] = {
    [sym_quoted_argument] = STATE(313),
    [sym_expansion] = STATE(313),
    [sym_operator_expansion] = STATE(313),
    [sym_command_substitution] = STATE(313),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [sym_single_quoted_argument] = ACTIONS(787),
    [anon_sym_DOLLAR] = ACTIONS(137),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(139),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(141),
    [sym_word] = ACTIONS(789),
    [sym_comment] = ACTIONS(75),
  },
  [246] = {
    [sym_file_descriptor] = ACTIONS(617),
    [anon_sym_COLON] = ACTIONS(617),
    [anon_sym_DQUOTE] = ACTIONS(617),
    [sym_single_quoted_argument] = ACTIONS(707),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(617),
    [anon_sym_LT] = ACTIONS(707),
    [anon_sym_GT] = ACTIONS(707),
    [anon_sym_GT_GT] = ACTIONS(707),
    [anon_sym_AMP_GT] = ACTIONS(707),
    [anon_sym_AMP_GT_GT] = ACTIONS(707),
    [anon_sym_LT_AMP] = ACTIONS(707),
    [anon_sym_GT_AMP] = ACTIONS(707),
    [sym_leading_word] = ACTIONS(619),
    [sym_comment] = ACTIONS(75),
  },
  [247] = {
    [sym__terminated_statement] = STATE(17),
    [sym_for_statement] = STATE(18),
    [sym_while_statement] = STATE(18),
    [sym_if_statement] = STATE(18),
    [sym_case_statement] = STATE(18),
    [sym_function_definition] = STATE(18),
    [sym_bracket_command] = STATE(18),
    [sym_command] = STATE(18),
    [sym_pipeline] = STATE(18),
    [sym_list] = STATE(18),
    [sym_subshell] = STATE(18),
    [sym_environment_variable_assignment] = STATE(19),
    [sym_quoted_argument] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(20),
    [aux_sym_program_repeat1] = STATE(316),
    [aux_sym_command_repeat1] = STATE(22),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_for] = ACTIONS(83),
    [anon_sym_while] = ACTIONS(85),
    [anon_sym_if] = ACTIONS(87),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_function] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_RBRACE] = ACTIONS(791),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(97),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_single_quoted_argument] = ACTIONS(103),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(109),
    [sym_comment] = ACTIONS(75),
  },
  [248] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(793),
    [anon_sym_PIPE] = ACTIONS(793),
    [anon_sym_PIPE_AMP] = ACTIONS(793),
    [anon_sym_AMP_AMP] = ACTIONS(793),
    [anon_sym_PIPE_PIPE] = ACTIONS(793),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(793),
    [anon_sym_LF] = ACTIONS(793),
    [anon_sym_AMP] = ACTIONS(793),
  },
  [249] = {
    [sym_file_redirect] = STATE(127),
    [sym_heredoc_redirect] = STATE(127),
    [sym_file_descriptor] = ACTIONS(145),
    [anon_sym_SEMI_SEMI] = ACTIONS(795),
    [anon_sym_PIPE] = ACTIONS(795),
    [anon_sym_PIPE_AMP] = ACTIONS(795),
    [anon_sym_AMP_AMP] = ACTIONS(795),
    [anon_sym_PIPE_PIPE] = ACTIONS(795),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(151),
    [anon_sym_GT_GT] = ACTIONS(151),
    [anon_sym_AMP_GT] = ACTIONS(151),
    [anon_sym_AMP_GT_GT] = ACTIONS(151),
    [anon_sym_LT_AMP] = ACTIONS(151),
    [anon_sym_GT_AMP] = ACTIONS(151),
    [anon_sym_LT_LT] = ACTIONS(153),
    [anon_sym_LT_LT_DASH] = ACTIONS(153),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(795),
    [anon_sym_LF] = ACTIONS(795),
    [anon_sym_AMP] = ACTIONS(795),
  },
  [250] = {
    [sym_file_descriptor] = ACTIONS(323),
    [anon_sym_SEMI_SEMI] = ACTIONS(325),
    [anon_sym_COLON] = ACTIONS(325),
    [anon_sym_PIPE] = ACTIONS(325),
    [anon_sym_PIPE_AMP] = ACTIONS(325),
    [anon_sym_AMP_AMP] = ACTIONS(325),
    [anon_sym_PIPE_PIPE] = ACTIONS(325),
    [anon_sym_DQUOTE] = ACTIONS(325),
    [sym_single_quoted_argument] = ACTIONS(325),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(325),
    [anon_sym_LT] = ACTIONS(325),
    [anon_sym_GT] = ACTIONS(325),
    [anon_sym_GT_GT] = ACTIONS(325),
    [anon_sym_AMP_GT] = ACTIONS(325),
    [anon_sym_AMP_GT_GT] = ACTIONS(325),
    [anon_sym_LT_AMP] = ACTIONS(325),
    [anon_sym_GT_AMP] = ACTIONS(325),
    [sym_leading_word] = ACTIONS(325),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(325),
    [anon_sym_LF] = ACTIONS(325),
    [anon_sym_AMP] = ACTIONS(325),
  },
  [251] = {
    [sym_expansion] = STATE(133),
    [sym_operator_expansion] = STATE(133),
    [sym_command_substitution] = STATE(133),
    [anon_sym_DQUOTE] = ACTIONS(797),
    [sym__quoted_chars] = ACTIONS(339),
    [anon_sym_DOLLAR] = ACTIONS(161),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(163),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(165),
    [sym_comment] = ACTIONS(155),
  },
  [252] = {
    [sym_file_descriptor] = ACTIONS(477),
    [anon_sym_SEMI_SEMI] = ACTIONS(453),
    [anon_sym_COLON] = ACTIONS(453),
    [anon_sym_PIPE] = ACTIONS(453),
    [anon_sym_PIPE_AMP] = ACTIONS(453),
    [anon_sym_AMP_AMP] = ACTIONS(453),
    [anon_sym_PIPE_PIPE] = ACTIONS(453),
    [anon_sym_DQUOTE] = ACTIONS(453),
    [sym_single_quoted_argument] = ACTIONS(453),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(453),
    [anon_sym_LT] = ACTIONS(453),
    [anon_sym_GT] = ACTIONS(453),
    [anon_sym_GT_GT] = ACTIONS(453),
    [anon_sym_AMP_GT] = ACTIONS(453),
    [anon_sym_AMP_GT_GT] = ACTIONS(453),
    [anon_sym_LT_AMP] = ACTIONS(453),
    [anon_sym_GT_AMP] = ACTIONS(453),
    [sym_leading_word] = ACTIONS(453),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(453),
    [anon_sym_LF] = ACTIONS(453),
    [anon_sym_AMP] = ACTIONS(453),
  },
  [253] = {
    [sym_file_descriptor] = ACTIONS(481),
    [anon_sym_SEMI_SEMI] = ACTIONS(455),
    [anon_sym_COLON] = ACTIONS(455),
    [anon_sym_PIPE] = ACTIONS(455),
    [anon_sym_PIPE_AMP] = ACTIONS(455),
    [anon_sym_AMP_AMP] = ACTIONS(455),
    [anon_sym_PIPE_PIPE] = ACTIONS(455),
    [anon_sym_DQUOTE] = ACTIONS(455),
    [sym_single_quoted_argument] = ACTIONS(455),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(455),
    [anon_sym_LT] = ACTIONS(455),
    [anon_sym_GT] = ACTIONS(455),
    [anon_sym_GT_GT] = ACTIONS(455),
    [anon_sym_AMP_GT] = ACTIONS(455),
    [anon_sym_AMP_GT_GT] = ACTIONS(455),
    [anon_sym_LT_AMP] = ACTIONS(455),
    [anon_sym_GT_AMP] = ACTIONS(455),
    [sym_leading_word] = ACTIONS(455),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(455),
    [anon_sym_LF] = ACTIONS(455),
    [anon_sym_AMP] = ACTIONS(455),
  },
  [254] = {
    [anon_sym_RBRACE] = ACTIONS(799),
    [anon_sym_COLON] = ACTIONS(801),
    [anon_sym_EQ] = ACTIONS(803),
    [anon_sym_COLON_QMARK] = ACTIONS(803),
    [anon_sym_COLON_DASH] = ACTIONS(803),
    [sym_comment] = ACTIONS(75),
  },
  [255] = {
    [anon_sym_RPAREN] = ACTIONS(805),
    [sym_comment] = ACTIONS(75),
  },
  [256] = {
    [sym_quoted_argument] = STATE(202),
    [sym_expansion] = STATE(202),
    [sym_operator_expansion] = STATE(202),
    [sym_command_substitution] = STATE(202),
    [sym_file_redirect] = STATE(50),
    [sym_heredoc_redirect] = STATE(50),
    [aux_sym_command_repeat2] = STATE(321),
    [sym_file_descriptor] = ACTIONS(145),
    [anon_sym_SEMI_SEMI] = ACTIONS(719),
    [anon_sym_PIPE] = ACTIONS(719),
    [anon_sym_PIPE_AMP] = ACTIONS(719),
    [anon_sym_AMP_AMP] = ACTIONS(719),
    [anon_sym_PIPE_PIPE] = ACTIONS(719),
    [anon_sym_DQUOTE] = ACTIONS(291),
    [sym_single_quoted_argument] = ACTIONS(521),
    [anon_sym_DOLLAR] = ACTIONS(295),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(297),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(299),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(151),
    [anon_sym_GT_GT] = ACTIONS(151),
    [anon_sym_AMP_GT] = ACTIONS(151),
    [anon_sym_AMP_GT_GT] = ACTIONS(151),
    [anon_sym_LT_AMP] = ACTIONS(151),
    [anon_sym_GT_AMP] = ACTIONS(151),
    [anon_sym_LT_LT] = ACTIONS(153),
    [anon_sym_LT_LT_DASH] = ACTIONS(153),
    [sym_word] = ACTIONS(523),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(719),
    [anon_sym_LF] = ACTIONS(719),
    [anon_sym_AMP] = ACTIONS(719),
  },
  [257] = {
    [sym_quoted_argument] = STATE(202),
    [sym_expansion] = STATE(202),
    [sym_operator_expansion] = STATE(202),
    [sym_command_substitution] = STATE(202),
    [sym_file_redirect] = STATE(50),
    [sym_heredoc_redirect] = STATE(50),
    [aux_sym_command_repeat2] = STATE(322),
    [sym_file_descriptor] = ACTIONS(145),
    [anon_sym_SEMI_SEMI] = ACTIONS(807),
    [anon_sym_PIPE] = ACTIONS(807),
    [anon_sym_PIPE_AMP] = ACTIONS(807),
    [anon_sym_AMP_AMP] = ACTIONS(807),
    [anon_sym_PIPE_PIPE] = ACTIONS(807),
    [anon_sym_DQUOTE] = ACTIONS(291),
    [sym_single_quoted_argument] = ACTIONS(521),
    [anon_sym_DOLLAR] = ACTIONS(295),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(297),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(299),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(151),
    [anon_sym_GT_GT] = ACTIONS(151),
    [anon_sym_AMP_GT] = ACTIONS(151),
    [anon_sym_AMP_GT_GT] = ACTIONS(151),
    [anon_sym_LT_AMP] = ACTIONS(151),
    [anon_sym_GT_AMP] = ACTIONS(151),
    [anon_sym_LT_LT] = ACTIONS(153),
    [anon_sym_LT_LT_DASH] = ACTIONS(153),
    [sym_word] = ACTIONS(523),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(807),
    [anon_sym_LF] = ACTIONS(807),
    [anon_sym_AMP] = ACTIONS(807),
  },
  [258] = {
    [sym_file_redirect] = STATE(127),
    [sym_heredoc_redirect] = STATE(127),
    [sym_file_descriptor] = ACTIONS(145),
    [anon_sym_SEMI_SEMI] = ACTIONS(807),
    [anon_sym_PIPE] = ACTIONS(807),
    [anon_sym_PIPE_AMP] = ACTIONS(807),
    [anon_sym_AMP_AMP] = ACTIONS(807),
    [anon_sym_PIPE_PIPE] = ACTIONS(807),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(151),
    [anon_sym_GT_GT] = ACTIONS(151),
    [anon_sym_AMP_GT] = ACTIONS(151),
    [anon_sym_AMP_GT_GT] = ACTIONS(151),
    [anon_sym_LT_AMP] = ACTIONS(151),
    [anon_sym_GT_AMP] = ACTIONS(151),
    [anon_sym_LT_LT] = ACTIONS(153),
    [anon_sym_LT_LT_DASH] = ACTIONS(153),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(807),
    [anon_sym_LF] = ACTIONS(807),
    [anon_sym_AMP] = ACTIONS(807),
  },
  [259] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(809),
    [anon_sym_PIPE] = ACTIONS(809),
    [anon_sym_PIPE_AMP] = ACTIONS(809),
    [anon_sym_AMP_AMP] = ACTIONS(809),
    [anon_sym_PIPE_PIPE] = ACTIONS(809),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(809),
    [anon_sym_LF] = ACTIONS(809),
    [anon_sym_AMP] = ACTIONS(809),
  },
  [260] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(811),
    [anon_sym_PIPE] = ACTIONS(811),
    [anon_sym_PIPE_AMP] = ACTIONS(811),
    [anon_sym_AMP_AMP] = ACTIONS(811),
    [anon_sym_PIPE_PIPE] = ACTIONS(811),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(811),
    [anon_sym_LF] = ACTIONS(811),
    [anon_sym_AMP] = ACTIONS(811),
  },
  [261] = {
    [anon_sym_then] = ACTIONS(813),
    [sym_comment] = ACTIONS(75),
  },
  [262] = {
    [sym__terminated_statement] = STATE(77),
    [sym_for_statement] = STATE(18),
    [sym_while_statement] = STATE(18),
    [sym_if_statement] = STATE(18),
    [sym_case_statement] = STATE(18),
    [sym_function_definition] = STATE(18),
    [sym_bracket_command] = STATE(18),
    [sym_command] = STATE(18),
    [sym_pipeline] = STATE(18),
    [sym_list] = STATE(18),
    [sym_subshell] = STATE(18),
    [sym_environment_variable_assignment] = STATE(19),
    [sym_quoted_argument] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(20),
    [aux_sym_command_repeat1] = STATE(22),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_for] = ACTIONS(83),
    [anon_sym_while] = ACTIONS(85),
    [anon_sym_if] = ACTIONS(87),
    [anon_sym_fi] = ACTIONS(815),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_function] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(97),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_single_quoted_argument] = ACTIONS(103),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(109),
    [sym_comment] = ACTIONS(75),
  },
  [263] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(817),
    [anon_sym_PIPE] = ACTIONS(817),
    [anon_sym_PIPE_AMP] = ACTIONS(817),
    [anon_sym_AMP_AMP] = ACTIONS(817),
    [anon_sym_PIPE_PIPE] = ACTIONS(817),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(817),
    [anon_sym_LF] = ACTIONS(817),
    [anon_sym_AMP] = ACTIONS(817),
  },
  [264] = {
    [anon_sym_fi] = ACTIONS(819),
    [sym_comment] = ACTIONS(75),
  },
  [265] = {
    [sym_elif_clause] = STATE(266),
    [sym_else_clause] = STATE(325),
    [anon_sym_fi] = ACTIONS(819),
    [anon_sym_elif] = ACTIONS(675),
    [anon_sym_else] = ACTIONS(677),
    [sym_comment] = ACTIONS(75),
  },
  [266] = {
    [anon_sym_fi] = ACTIONS(821),
    [anon_sym_elif] = ACTIONS(821),
    [anon_sym_else] = ACTIONS(821),
    [sym_comment] = ACTIONS(75),
  },
  [267] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(823),
    [anon_sym_PIPE] = ACTIONS(823),
    [anon_sym_PIPE_AMP] = ACTIONS(823),
    [anon_sym_AMP_AMP] = ACTIONS(823),
    [anon_sym_PIPE_PIPE] = ACTIONS(823),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(823),
    [anon_sym_LF] = ACTIONS(823),
    [anon_sym_AMP] = ACTIONS(823),
  },
  [268] = {
    [anon_sym_RPAREN] = ACTIONS(825),
    [sym_comment] = ACTIONS(75),
  },
  [269] = {
    [anon_sym_RPAREN] = ACTIONS(827),
    [sym_comment] = ACTIONS(75),
  },
  [270] = {
    [anon_sym_esac] = ACTIONS(829),
    [anon_sym_DQUOTE] = ACTIONS(831),
    [sym_single_quoted_argument] = ACTIONS(829),
    [anon_sym_DOLLAR] = ACTIONS(829),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(831),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(831),
    [sym_word] = ACTIONS(833),
    [sym_comment] = ACTIONS(75),
  },
  [271] = {
    [sym_case_item] = STATE(329),
    [sym_quoted_argument] = STATE(268),
    [sym_expansion] = STATE(268),
    [sym_operator_expansion] = STATE(268),
    [sym_command_substitution] = STATE(268),
    [anon_sym_esac] = ACTIONS(835),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [sym_single_quoted_argument] = ACTIONS(681),
    [anon_sym_DOLLAR] = ACTIONS(137),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(139),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(141),
    [sym_word] = ACTIONS(683),
    [sym_comment] = ACTIONS(75),
  },
  [272] = {
    [sym_case_item] = STATE(270),
    [sym_quoted_argument] = STATE(268),
    [sym_expansion] = STATE(268),
    [sym_operator_expansion] = STATE(268),
    [sym_command_substitution] = STATE(268),
    [aux_sym_case_statement_repeat1] = STATE(330),
    [anon_sym_esac] = ACTIONS(835),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [sym_single_quoted_argument] = ACTIONS(681),
    [anon_sym_DOLLAR] = ACTIONS(137),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(139),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(141),
    [sym_word] = ACTIONS(683),
    [sym_comment] = ACTIONS(75),
  },
  [273] = {
    [anon_sym_RBRACE] = ACTIONS(837),
    [sym_comment] = ACTIONS(75),
  },
  [274] = {
    [anon_sym_RBRACE] = ACTIONS(839),
    [sym_comment] = ACTIONS(75),
  },
  [275] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(841),
    [anon_sym_PIPE] = ACTIONS(841),
    [anon_sym_PIPE_AMP] = ACTIONS(841),
    [anon_sym_AMP_AMP] = ACTIONS(841),
    [anon_sym_PIPE_PIPE] = ACTIONS(841),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(841),
    [anon_sym_LF] = ACTIONS(841),
    [anon_sym_AMP] = ACTIONS(841),
  },
  [276] = {
    [sym_case_item] = STATE(329),
    [sym_quoted_argument] = STATE(268),
    [sym_expansion] = STATE(268),
    [sym_operator_expansion] = STATE(268),
    [sym_command_substitution] = STATE(268),
    [anon_sym_esac] = ACTIONS(843),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [sym_single_quoted_argument] = ACTIONS(681),
    [anon_sym_DOLLAR] = ACTIONS(137),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(139),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(141),
    [sym_word] = ACTIONS(683),
    [sym_comment] = ACTIONS(75),
  },
  [277] = {
    [sym_case_item] = STATE(270),
    [sym_quoted_argument] = STATE(268),
    [sym_expansion] = STATE(268),
    [sym_operator_expansion] = STATE(268),
    [sym_command_substitution] = STATE(268),
    [aux_sym_case_statement_repeat1] = STATE(334),
    [anon_sym_esac] = ACTIONS(843),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [sym_single_quoted_argument] = ACTIONS(681),
    [anon_sym_DOLLAR] = ACTIONS(137),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(139),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(141),
    [sym_word] = ACTIONS(683),
    [sym_comment] = ACTIONS(75),
  },
  [278] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(845),
    [anon_sym_PIPE] = ACTIONS(845),
    [anon_sym_PIPE_AMP] = ACTIONS(845),
    [anon_sym_AMP_AMP] = ACTIONS(845),
    [anon_sym_PIPE_PIPE] = ACTIONS(845),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(845),
    [anon_sym_LF] = ACTIONS(845),
    [anon_sym_AMP] = ACTIONS(845),
  },
  [279] = {
    [anon_sym_RBRACE] = ACTIONS(847),
    [sym_comment] = ACTIONS(75),
  },
  [280] = {
    [anon_sym_RBRACE] = ACTIONS(849),
    [sym_comment] = ACTIONS(75),
  },
  [281] = {
    [sym_file_descriptor] = ACTIONS(561),
    [anon_sym_SEMI_SEMI] = ACTIONS(563),
    [anon_sym_PIPE] = ACTIONS(563),
    [anon_sym_PIPE_AMP] = ACTIONS(563),
    [anon_sym_AMP_AMP] = ACTIONS(563),
    [anon_sym_PIPE_PIPE] = ACTIONS(563),
    [anon_sym_DQUOTE] = ACTIONS(563),
    [sym_single_quoted_argument] = ACTIONS(563),
    [anon_sym_DOLLAR] = ACTIONS(563),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(563),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(563),
    [anon_sym_LT] = ACTIONS(563),
    [anon_sym_GT] = ACTIONS(563),
    [anon_sym_GT_GT] = ACTIONS(563),
    [anon_sym_AMP_GT] = ACTIONS(563),
    [anon_sym_AMP_GT_GT] = ACTIONS(563),
    [anon_sym_LT_AMP] = ACTIONS(563),
    [anon_sym_GT_AMP] = ACTIONS(563),
    [anon_sym_LT_LT] = ACTIONS(563),
    [anon_sym_LT_LT_DASH] = ACTIONS(563),
    [sym_word] = ACTIONS(563),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(563),
    [anon_sym_LF] = ACTIONS(563),
    [anon_sym_AMP] = ACTIONS(563),
  },
  [282] = {
    [sym_file_descriptor] = ACTIONS(699),
    [anon_sym_SEMI_SEMI] = ACTIONS(687),
    [anon_sym_PIPE] = ACTIONS(687),
    [anon_sym_PIPE_AMP] = ACTIONS(687),
    [anon_sym_AMP_AMP] = ACTIONS(687),
    [anon_sym_PIPE_PIPE] = ACTIONS(687),
    [anon_sym_DQUOTE] = ACTIONS(687),
    [sym_single_quoted_argument] = ACTIONS(687),
    [anon_sym_DOLLAR] = ACTIONS(687),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(687),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(687),
    [anon_sym_LT] = ACTIONS(687),
    [anon_sym_GT] = ACTIONS(687),
    [anon_sym_GT_GT] = ACTIONS(687),
    [anon_sym_AMP_GT] = ACTIONS(687),
    [anon_sym_AMP_GT_GT] = ACTIONS(687),
    [anon_sym_LT_AMP] = ACTIONS(687),
    [anon_sym_GT_AMP] = ACTIONS(687),
    [anon_sym_LT_LT] = ACTIONS(687),
    [anon_sym_LT_LT_DASH] = ACTIONS(687),
    [sym_word] = ACTIONS(687),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(687),
    [anon_sym_LF] = ACTIONS(687),
    [anon_sym_AMP] = ACTIONS(687),
  },
  [283] = {
    [sym_quoted_argument] = STATE(337),
    [sym_expansion] = STATE(337),
    [sym_operator_expansion] = STATE(337),
    [sym_command_substitution] = STATE(337),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [sym_single_quoted_argument] = ACTIONS(851),
    [anon_sym_DOLLAR] = ACTIONS(137),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(139),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(141),
    [sym_word] = ACTIONS(853),
    [sym_comment] = ACTIONS(75),
  },
  [284] = {
    [sym_file_descriptor] = ACTIONS(617),
    [anon_sym_SEMI_SEMI] = ACTIONS(619),
    [anon_sym_PIPE] = ACTIONS(619),
    [anon_sym_PIPE_AMP] = ACTIONS(619),
    [anon_sym_AMP_AMP] = ACTIONS(619),
    [anon_sym_PIPE_PIPE] = ACTIONS(619),
    [anon_sym_DQUOTE] = ACTIONS(619),
    [sym_single_quoted_argument] = ACTIONS(619),
    [anon_sym_DOLLAR] = ACTIONS(619),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(619),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(619),
    [anon_sym_GT] = ACTIONS(619),
    [anon_sym_GT_GT] = ACTIONS(619),
    [anon_sym_AMP_GT] = ACTIONS(619),
    [anon_sym_AMP_GT_GT] = ACTIONS(619),
    [anon_sym_LT_AMP] = ACTIONS(619),
    [anon_sym_GT_AMP] = ACTIONS(619),
    [anon_sym_LT_LT] = ACTIONS(619),
    [anon_sym_LT_LT_DASH] = ACTIONS(619),
    [sym_word] = ACTIONS(619),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(619),
    [anon_sym_LF] = ACTIONS(619),
    [anon_sym_AMP] = ACTIONS(619),
  },
  [285] = {
    [sym_file_descriptor] = ACTIONS(561),
    [anon_sym_SEMI_SEMI] = ACTIONS(563),
    [anon_sym_PIPE] = ACTIONS(563),
    [anon_sym_PIPE_AMP] = ACTIONS(563),
    [anon_sym_AMP_AMP] = ACTIONS(563),
    [anon_sym_PIPE_PIPE] = ACTIONS(563),
    [anon_sym_LT] = ACTIONS(563),
    [anon_sym_GT] = ACTIONS(563),
    [anon_sym_GT_GT] = ACTIONS(563),
    [anon_sym_AMP_GT] = ACTIONS(563),
    [anon_sym_AMP_GT_GT] = ACTIONS(563),
    [anon_sym_LT_AMP] = ACTIONS(563),
    [anon_sym_GT_AMP] = ACTIONS(563),
    [anon_sym_LT_LT] = ACTIONS(563),
    [anon_sym_LT_LT_DASH] = ACTIONS(563),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(563),
    [anon_sym_LF] = ACTIONS(563),
    [anon_sym_AMP] = ACTIONS(563),
  },
  [286] = {
    [sym_file_descriptor] = ACTIONS(699),
    [anon_sym_SEMI_SEMI] = ACTIONS(687),
    [anon_sym_PIPE] = ACTIONS(687),
    [anon_sym_PIPE_AMP] = ACTIONS(687),
    [anon_sym_AMP_AMP] = ACTIONS(687),
    [anon_sym_PIPE_PIPE] = ACTIONS(687),
    [anon_sym_LT] = ACTIONS(687),
    [anon_sym_GT] = ACTIONS(687),
    [anon_sym_GT_GT] = ACTIONS(687),
    [anon_sym_AMP_GT] = ACTIONS(687),
    [anon_sym_AMP_GT_GT] = ACTIONS(687),
    [anon_sym_LT_AMP] = ACTIONS(687),
    [anon_sym_GT_AMP] = ACTIONS(687),
    [anon_sym_LT_LT] = ACTIONS(687),
    [anon_sym_LT_LT_DASH] = ACTIONS(687),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(687),
    [anon_sym_LF] = ACTIONS(687),
    [anon_sym_AMP] = ACTIONS(687),
  },
  [287] = {
    [sym_quoted_argument] = STATE(339),
    [sym_expansion] = STATE(339),
    [sym_operator_expansion] = STATE(339),
    [sym_command_substitution] = STATE(339),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [sym_single_quoted_argument] = ACTIONS(855),
    [anon_sym_DOLLAR] = ACTIONS(137),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(139),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(141),
    [sym_word] = ACTIONS(857),
    [sym_comment] = ACTIONS(75),
  },
  [288] = {
    [sym_file_descriptor] = ACTIONS(617),
    [anon_sym_SEMI_SEMI] = ACTIONS(619),
    [anon_sym_PIPE] = ACTIONS(619),
    [anon_sym_PIPE_AMP] = ACTIONS(619),
    [anon_sym_AMP_AMP] = ACTIONS(619),
    [anon_sym_PIPE_PIPE] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(619),
    [anon_sym_GT] = ACTIONS(619),
    [anon_sym_GT_GT] = ACTIONS(619),
    [anon_sym_AMP_GT] = ACTIONS(619),
    [anon_sym_AMP_GT_GT] = ACTIONS(619),
    [anon_sym_LT_AMP] = ACTIONS(619),
    [anon_sym_GT_AMP] = ACTIONS(619),
    [anon_sym_LT_LT] = ACTIONS(619),
    [anon_sym_LT_LT_DASH] = ACTIONS(619),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(619),
    [anon_sym_LF] = ACTIONS(619),
    [anon_sym_AMP] = ACTIONS(619),
  },
  [289] = {
    [sym__heredoc_middle] = ACTIONS(477),
    [sym__heredoc_end] = ACTIONS(477),
    [anon_sym_DOLLAR] = ACTIONS(479),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(477),
    [sym_comment] = ACTIONS(75),
  },
  [290] = {
    [sym__heredoc_middle] = ACTIONS(481),
    [sym__heredoc_end] = ACTIONS(481),
    [anon_sym_DOLLAR] = ACTIONS(483),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(481),
    [sym_comment] = ACTIONS(75),
  },
  [291] = {
    [anon_sym_RBRACE] = ACTIONS(859),
    [anon_sym_COLON] = ACTIONS(861),
    [anon_sym_EQ] = ACTIONS(863),
    [anon_sym_COLON_QMARK] = ACTIONS(863),
    [anon_sym_COLON_DASH] = ACTIONS(863),
    [sym_comment] = ACTIONS(75),
  },
  [292] = {
    [sym__heredoc_middle] = ACTIONS(865),
    [sym__heredoc_end] = ACTIONS(865),
    [anon_sym_DOLLAR] = ACTIONS(867),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(865),
    [sym_comment] = ACTIONS(75),
  },
  [293] = {
    [sym_file_descriptor] = ACTIONS(869),
    [anon_sym_SEMI_SEMI] = ACTIONS(871),
    [anon_sym_PIPE] = ACTIONS(871),
    [anon_sym_PIPE_AMP] = ACTIONS(871),
    [anon_sym_AMP_AMP] = ACTIONS(871),
    [anon_sym_PIPE_PIPE] = ACTIONS(871),
    [anon_sym_LT] = ACTIONS(871),
    [anon_sym_GT] = ACTIONS(871),
    [anon_sym_GT_GT] = ACTIONS(871),
    [anon_sym_AMP_GT] = ACTIONS(871),
    [anon_sym_AMP_GT_GT] = ACTIONS(871),
    [anon_sym_LT_AMP] = ACTIONS(871),
    [anon_sym_GT_AMP] = ACTIONS(871),
    [anon_sym_LT_LT] = ACTIONS(871),
    [anon_sym_LT_LT_DASH] = ACTIONS(871),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(871),
    [anon_sym_LF] = ACTIONS(871),
    [anon_sym_AMP] = ACTIONS(871),
  },
  [294] = {
    [anon_sym_RBRACE] = ACTIONS(873),
    [sym_comment] = ACTIONS(75),
  },
  [295] = {
    [anon_sym_RBRACE] = ACTIONS(875),
    [sym_comment] = ACTIONS(75),
  },
  [296] = {
    [sym_file_descriptor] = ACTIONS(425),
    [anon_sym_RPAREN] = ACTIONS(425),
    [anon_sym_LT] = ACTIONS(427),
    [anon_sym_GT] = ACTIONS(427),
    [anon_sym_GT_GT] = ACTIONS(425),
    [anon_sym_AMP_GT] = ACTIONS(427),
    [anon_sym_AMP_GT_GT] = ACTIONS(425),
    [anon_sym_LT_AMP] = ACTIONS(425),
    [anon_sym_GT_AMP] = ACTIONS(425),
    [anon_sym_LT_LT] = ACTIONS(427),
    [anon_sym_LT_LT_DASH] = ACTIONS(425),
    [sym_comment] = ACTIONS(75),
  },
  [297] = {
    [sym_file_descriptor] = ACTIONS(431),
    [anon_sym_RPAREN] = ACTIONS(431),
    [anon_sym_LT] = ACTIONS(433),
    [anon_sym_GT] = ACTIONS(433),
    [anon_sym_GT_GT] = ACTIONS(431),
    [anon_sym_AMP_GT] = ACTIONS(433),
    [anon_sym_AMP_GT_GT] = ACTIONS(431),
    [anon_sym_LT_AMP] = ACTIONS(431),
    [anon_sym_GT_AMP] = ACTIONS(431),
    [anon_sym_LT_LT] = ACTIONS(433),
    [anon_sym_LT_LT_DASH] = ACTIONS(431),
    [sym_comment] = ACTIONS(75),
  },
  [298] = {
    [sym_file_descriptor] = ACTIONS(323),
    [anon_sym_RPAREN] = ACTIONS(323),
    [anon_sym_DQUOTE] = ACTIONS(323),
    [sym_single_quoted_argument] = ACTIONS(473),
    [anon_sym_DOLLAR] = ACTIONS(473),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(323),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(323),
    [anon_sym_LT] = ACTIONS(473),
    [anon_sym_GT] = ACTIONS(473),
    [anon_sym_GT_GT] = ACTIONS(323),
    [anon_sym_AMP_GT] = ACTIONS(473),
    [anon_sym_AMP_GT_GT] = ACTIONS(323),
    [anon_sym_LT_AMP] = ACTIONS(323),
    [anon_sym_GT_AMP] = ACTIONS(323),
    [anon_sym_LT_LT] = ACTIONS(473),
    [anon_sym_LT_LT_DASH] = ACTIONS(323),
    [sym_word] = ACTIONS(325),
    [sym_comment] = ACTIONS(75),
  },
  [299] = {
    [sym_expansion] = STATE(133),
    [sym_operator_expansion] = STATE(133),
    [sym_command_substitution] = STATE(133),
    [anon_sym_DQUOTE] = ACTIONS(877),
    [sym__quoted_chars] = ACTIONS(339),
    [anon_sym_DOLLAR] = ACTIONS(161),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(163),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(165),
    [sym_comment] = ACTIONS(155),
  },
  [300] = {
    [sym_file_descriptor] = ACTIONS(477),
    [anon_sym_RPAREN] = ACTIONS(477),
    [anon_sym_DQUOTE] = ACTIONS(477),
    [sym_single_quoted_argument] = ACTIONS(479),
    [anon_sym_DOLLAR] = ACTIONS(479),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(477),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(477),
    [anon_sym_LT] = ACTIONS(479),
    [anon_sym_GT] = ACTIONS(479),
    [anon_sym_GT_GT] = ACTIONS(477),
    [anon_sym_AMP_GT] = ACTIONS(479),
    [anon_sym_AMP_GT_GT] = ACTIONS(477),
    [anon_sym_LT_AMP] = ACTIONS(477),
    [anon_sym_GT_AMP] = ACTIONS(477),
    [anon_sym_LT_LT] = ACTIONS(479),
    [anon_sym_LT_LT_DASH] = ACTIONS(477),
    [sym_word] = ACTIONS(453),
    [sym_comment] = ACTIONS(75),
  },
  [301] = {
    [sym_file_descriptor] = ACTIONS(481),
    [anon_sym_RPAREN] = ACTIONS(481),
    [anon_sym_DQUOTE] = ACTIONS(481),
    [sym_single_quoted_argument] = ACTIONS(483),
    [anon_sym_DOLLAR] = ACTIONS(483),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(481),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(481),
    [anon_sym_LT] = ACTIONS(483),
    [anon_sym_GT] = ACTIONS(483),
    [anon_sym_GT_GT] = ACTIONS(481),
    [anon_sym_AMP_GT] = ACTIONS(483),
    [anon_sym_AMP_GT_GT] = ACTIONS(481),
    [anon_sym_LT_AMP] = ACTIONS(481),
    [anon_sym_GT_AMP] = ACTIONS(481),
    [anon_sym_LT_LT] = ACTIONS(483),
    [anon_sym_LT_LT_DASH] = ACTIONS(481),
    [sym_word] = ACTIONS(455),
    [sym_comment] = ACTIONS(75),
  },
  [302] = {
    [anon_sym_RBRACE] = ACTIONS(879),
    [anon_sym_COLON] = ACTIONS(881),
    [anon_sym_EQ] = ACTIONS(883),
    [anon_sym_COLON_QMARK] = ACTIONS(883),
    [anon_sym_COLON_DASH] = ACTIONS(883),
    [sym_comment] = ACTIONS(75),
  },
  [303] = {
    [anon_sym_RPAREN] = ACTIONS(885),
    [sym_comment] = ACTIONS(75),
  },
  [304] = {
    [sym_file_descriptor] = ACTIONS(497),
    [anon_sym_RPAREN] = ACTIONS(497),
    [anon_sym_DQUOTE] = ACTIONS(497),
    [sym_single_quoted_argument] = ACTIONS(495),
    [anon_sym_DOLLAR] = ACTIONS(495),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(497),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(497),
    [anon_sym_LT] = ACTIONS(495),
    [anon_sym_GT] = ACTIONS(495),
    [anon_sym_GT_GT] = ACTIONS(497),
    [anon_sym_AMP_GT] = ACTIONS(495),
    [anon_sym_AMP_GT_GT] = ACTIONS(497),
    [anon_sym_LT_AMP] = ACTIONS(497),
    [anon_sym_GT_AMP] = ACTIONS(497),
    [anon_sym_LT_LT] = ACTIONS(495),
    [anon_sym_LT_LT_DASH] = ACTIONS(497),
    [sym_word] = ACTIONS(499),
    [sym_comment] = ACTIONS(75),
  },
  [305] = {
    [sym_file_descriptor] = ACTIONS(503),
    [anon_sym_RPAREN] = ACTIONS(503),
    [anon_sym_DQUOTE] = ACTIONS(503),
    [sym_single_quoted_argument] = ACTIONS(501),
    [anon_sym_DOLLAR] = ACTIONS(501),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(503),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(503),
    [anon_sym_LT] = ACTIONS(501),
    [anon_sym_GT] = ACTIONS(501),
    [anon_sym_GT_GT] = ACTIONS(503),
    [anon_sym_AMP_GT] = ACTIONS(501),
    [anon_sym_AMP_GT_GT] = ACTIONS(503),
    [anon_sym_LT_AMP] = ACTIONS(503),
    [anon_sym_GT_AMP] = ACTIONS(503),
    [anon_sym_LT_LT] = ACTIONS(501),
    [anon_sym_LT_LT_DASH] = ACTIONS(503),
    [sym_word] = ACTIONS(505),
    [sym_comment] = ACTIONS(75),
  },
  [306] = {
    [sym_file_redirect] = STATE(233),
    [sym_heredoc_redirect] = STATE(233),
    [sym_file_descriptor] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(887),
    [anon_sym_LT] = ACTIONS(585),
    [anon_sym_GT] = ACTIONS(585),
    [anon_sym_GT_GT] = ACTIONS(587),
    [anon_sym_AMP_GT] = ACTIONS(585),
    [anon_sym_AMP_GT_GT] = ACTIONS(587),
    [anon_sym_LT_AMP] = ACTIONS(587),
    [anon_sym_GT_AMP] = ACTIONS(587),
    [anon_sym_LT_LT] = ACTIONS(589),
    [anon_sym_LT_LT_DASH] = ACTIONS(591),
    [sym_comment] = ACTIONS(75),
  },
  [307] = {
    [sym_file_descriptor] = ACTIONS(735),
    [anon_sym_RPAREN] = ACTIONS(735),
    [anon_sym_LT] = ACTIONS(889),
    [anon_sym_GT] = ACTIONS(889),
    [anon_sym_GT_GT] = ACTIONS(735),
    [anon_sym_AMP_GT] = ACTIONS(889),
    [anon_sym_AMP_GT_GT] = ACTIONS(735),
    [anon_sym_LT_AMP] = ACTIONS(735),
    [anon_sym_GT_AMP] = ACTIONS(735),
    [anon_sym_LT_LT] = ACTIONS(889),
    [anon_sym_LT_LT_DASH] = ACTIONS(735),
    [sym_comment] = ACTIONS(75),
  },
  [308] = {
    [sym_expansion] = STATE(292),
    [sym_operator_expansion] = STATE(292),
    [sym__heredoc_middle] = ACTIONS(745),
    [sym__heredoc_end] = ACTIONS(891),
    [anon_sym_DOLLAR] = ACTIONS(541),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(543),
    [sym_comment] = ACTIONS(75),
  },
  [309] = {
    [sym_file_redirect] = STATE(233),
    [sym_heredoc_redirect] = STATE(233),
    [sym_file_descriptor] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(893),
    [anon_sym_LT] = ACTIONS(585),
    [anon_sym_GT] = ACTIONS(585),
    [anon_sym_GT_GT] = ACTIONS(587),
    [anon_sym_AMP_GT] = ACTIONS(585),
    [anon_sym_AMP_GT_GT] = ACTIONS(587),
    [anon_sym_LT_AMP] = ACTIONS(587),
    [anon_sym_GT_AMP] = ACTIONS(587),
    [anon_sym_LT_LT] = ACTIONS(589),
    [anon_sym_LT_LT_DASH] = ACTIONS(591),
    [sym_comment] = ACTIONS(75),
  },
  [310] = {
    [sym_quoted_argument] = STATE(304),
    [sym_expansion] = STATE(304),
    [sym_operator_expansion] = STATE(304),
    [sym_command_substitution] = STATE(304),
    [sym_file_redirect] = STATE(138),
    [sym_heredoc_redirect] = STATE(138),
    [aux_sym_command_repeat2] = STATE(350),
    [sym_file_descriptor] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(887),
    [anon_sym_DQUOTE] = ACTIONS(575),
    [sym_single_quoted_argument] = ACTIONS(767),
    [anon_sym_DOLLAR] = ACTIONS(579),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(581),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(583),
    [anon_sym_LT] = ACTIONS(585),
    [anon_sym_GT] = ACTIONS(585),
    [anon_sym_GT_GT] = ACTIONS(587),
    [anon_sym_AMP_GT] = ACTIONS(585),
    [anon_sym_AMP_GT_GT] = ACTIONS(587),
    [anon_sym_LT_AMP] = ACTIONS(587),
    [anon_sym_GT_AMP] = ACTIONS(587),
    [anon_sym_LT_LT] = ACTIONS(589),
    [anon_sym_LT_LT_DASH] = ACTIONS(591),
    [sym_word] = ACTIONS(769),
    [sym_comment] = ACTIONS(75),
  },
  [311] = {
    [sym_quoted_argument] = STATE(304),
    [sym_expansion] = STATE(304),
    [sym_operator_expansion] = STATE(304),
    [sym_command_substitution] = STATE(304),
    [sym_file_redirect] = STATE(138),
    [sym_heredoc_redirect] = STATE(138),
    [aux_sym_command_repeat2] = STATE(351),
    [sym_file_descriptor] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(895),
    [anon_sym_DQUOTE] = ACTIONS(575),
    [sym_single_quoted_argument] = ACTIONS(767),
    [anon_sym_DOLLAR] = ACTIONS(579),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(581),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(583),
    [anon_sym_LT] = ACTIONS(585),
    [anon_sym_GT] = ACTIONS(585),
    [anon_sym_GT_GT] = ACTIONS(587),
    [anon_sym_AMP_GT] = ACTIONS(585),
    [anon_sym_AMP_GT_GT] = ACTIONS(587),
    [anon_sym_LT_AMP] = ACTIONS(587),
    [anon_sym_GT_AMP] = ACTIONS(587),
    [anon_sym_LT_LT] = ACTIONS(589),
    [anon_sym_LT_LT_DASH] = ACTIONS(591),
    [sym_word] = ACTIONS(769),
    [sym_comment] = ACTIONS(75),
  },
  [312] = {
    [sym_file_redirect] = STATE(233),
    [sym_heredoc_redirect] = STATE(233),
    [sym_file_descriptor] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(895),
    [anon_sym_LT] = ACTIONS(585),
    [anon_sym_GT] = ACTIONS(585),
    [anon_sym_GT_GT] = ACTIONS(587),
    [anon_sym_AMP_GT] = ACTIONS(585),
    [anon_sym_AMP_GT_GT] = ACTIONS(587),
    [anon_sym_LT_AMP] = ACTIONS(587),
    [anon_sym_GT_AMP] = ACTIONS(587),
    [anon_sym_LT_LT] = ACTIONS(589),
    [anon_sym_LT_LT_DASH] = ACTIONS(591),
    [sym_comment] = ACTIONS(75),
  },
  [313] = {
    [anon_sym_RBRACE] = ACTIONS(897),
    [sym_comment] = ACTIONS(75),
  },
  [314] = {
    [anon_sym_RBRACE] = ACTIONS(899),
    [sym_comment] = ACTIONS(75),
  },
  [315] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(901),
    [anon_sym_PIPE] = ACTIONS(901),
    [anon_sym_PIPE_AMP] = ACTIONS(901),
    [anon_sym_AMP_AMP] = ACTIONS(901),
    [anon_sym_PIPE_PIPE] = ACTIONS(901),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(901),
    [anon_sym_LF] = ACTIONS(901),
    [anon_sym_AMP] = ACTIONS(901),
  },
  [316] = {
    [sym__terminated_statement] = STATE(77),
    [sym_for_statement] = STATE(18),
    [sym_while_statement] = STATE(18),
    [sym_if_statement] = STATE(18),
    [sym_case_statement] = STATE(18),
    [sym_function_definition] = STATE(18),
    [sym_bracket_command] = STATE(18),
    [sym_command] = STATE(18),
    [sym_pipeline] = STATE(18),
    [sym_list] = STATE(18),
    [sym_subshell] = STATE(18),
    [sym_environment_variable_assignment] = STATE(19),
    [sym_quoted_argument] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(20),
    [aux_sym_command_repeat1] = STATE(22),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_for] = ACTIONS(83),
    [anon_sym_while] = ACTIONS(85),
    [anon_sym_if] = ACTIONS(87),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_function] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_RBRACE] = ACTIONS(903),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(97),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_single_quoted_argument] = ACTIONS(103),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(109),
    [sym_comment] = ACTIONS(75),
  },
  [317] = {
    [sym_file_descriptor] = ACTIONS(561),
    [anon_sym_SEMI_SEMI] = ACTIONS(563),
    [anon_sym_COLON] = ACTIONS(563),
    [anon_sym_PIPE] = ACTIONS(563),
    [anon_sym_PIPE_AMP] = ACTIONS(563),
    [anon_sym_AMP_AMP] = ACTIONS(563),
    [anon_sym_PIPE_PIPE] = ACTIONS(563),
    [anon_sym_DQUOTE] = ACTIONS(563),
    [sym_single_quoted_argument] = ACTIONS(563),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(563),
    [anon_sym_LT] = ACTIONS(563),
    [anon_sym_GT] = ACTIONS(563),
    [anon_sym_GT_GT] = ACTIONS(563),
    [anon_sym_AMP_GT] = ACTIONS(563),
    [anon_sym_AMP_GT_GT] = ACTIONS(563),
    [anon_sym_LT_AMP] = ACTIONS(563),
    [anon_sym_GT_AMP] = ACTIONS(563),
    [sym_leading_word] = ACTIONS(563),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(563),
    [anon_sym_LF] = ACTIONS(563),
    [anon_sym_AMP] = ACTIONS(563),
  },
  [318] = {
    [sym_file_descriptor] = ACTIONS(699),
    [anon_sym_SEMI_SEMI] = ACTIONS(687),
    [anon_sym_COLON] = ACTIONS(687),
    [anon_sym_PIPE] = ACTIONS(687),
    [anon_sym_PIPE_AMP] = ACTIONS(687),
    [anon_sym_AMP_AMP] = ACTIONS(687),
    [anon_sym_PIPE_PIPE] = ACTIONS(687),
    [anon_sym_DQUOTE] = ACTIONS(687),
    [sym_single_quoted_argument] = ACTIONS(687),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(687),
    [anon_sym_LT] = ACTIONS(687),
    [anon_sym_GT] = ACTIONS(687),
    [anon_sym_GT_GT] = ACTIONS(687),
    [anon_sym_AMP_GT] = ACTIONS(687),
    [anon_sym_AMP_GT_GT] = ACTIONS(687),
    [anon_sym_LT_AMP] = ACTIONS(687),
    [anon_sym_GT_AMP] = ACTIONS(687),
    [sym_leading_word] = ACTIONS(687),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(687),
    [anon_sym_LF] = ACTIONS(687),
    [anon_sym_AMP] = ACTIONS(687),
  },
  [319] = {
    [sym_quoted_argument] = STATE(355),
    [sym_expansion] = STATE(355),
    [sym_operator_expansion] = STATE(355),
    [sym_command_substitution] = STATE(355),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [sym_single_quoted_argument] = ACTIONS(905),
    [anon_sym_DOLLAR] = ACTIONS(137),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(139),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(141),
    [sym_word] = ACTIONS(907),
    [sym_comment] = ACTIONS(75),
  },
  [320] = {
    [sym_file_descriptor] = ACTIONS(617),
    [anon_sym_SEMI_SEMI] = ACTIONS(619),
    [anon_sym_COLON] = ACTIONS(619),
    [anon_sym_PIPE] = ACTIONS(619),
    [anon_sym_PIPE_AMP] = ACTIONS(619),
    [anon_sym_AMP_AMP] = ACTIONS(619),
    [anon_sym_PIPE_PIPE] = ACTIONS(619),
    [anon_sym_DQUOTE] = ACTIONS(619),
    [sym_single_quoted_argument] = ACTIONS(619),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(619),
    [anon_sym_GT] = ACTIONS(619),
    [anon_sym_GT_GT] = ACTIONS(619),
    [anon_sym_AMP_GT] = ACTIONS(619),
    [anon_sym_AMP_GT_GT] = ACTIONS(619),
    [anon_sym_LT_AMP] = ACTIONS(619),
    [anon_sym_GT_AMP] = ACTIONS(619),
    [sym_leading_word] = ACTIONS(619),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(619),
    [anon_sym_LF] = ACTIONS(619),
    [anon_sym_AMP] = ACTIONS(619),
  },
  [321] = {
    [sym_file_redirect] = STATE(127),
    [sym_heredoc_redirect] = STATE(127),
    [sym_file_descriptor] = ACTIONS(145),
    [anon_sym_SEMI_SEMI] = ACTIONS(909),
    [anon_sym_PIPE] = ACTIONS(909),
    [anon_sym_PIPE_AMP] = ACTIONS(909),
    [anon_sym_AMP_AMP] = ACTIONS(909),
    [anon_sym_PIPE_PIPE] = ACTIONS(909),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(151),
    [anon_sym_GT_GT] = ACTIONS(151),
    [anon_sym_AMP_GT] = ACTIONS(151),
    [anon_sym_AMP_GT_GT] = ACTIONS(151),
    [anon_sym_LT_AMP] = ACTIONS(151),
    [anon_sym_GT_AMP] = ACTIONS(151),
    [anon_sym_LT_LT] = ACTIONS(153),
    [anon_sym_LT_LT_DASH] = ACTIONS(153),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(909),
    [anon_sym_LF] = ACTIONS(909),
    [anon_sym_AMP] = ACTIONS(909),
  },
  [322] = {
    [sym_file_redirect] = STATE(127),
    [sym_heredoc_redirect] = STATE(127),
    [sym_file_descriptor] = ACTIONS(145),
    [anon_sym_SEMI_SEMI] = ACTIONS(911),
    [anon_sym_PIPE] = ACTIONS(911),
    [anon_sym_PIPE_AMP] = ACTIONS(911),
    [anon_sym_AMP_AMP] = ACTIONS(911),
    [anon_sym_PIPE_PIPE] = ACTIONS(911),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(151),
    [anon_sym_GT_GT] = ACTIONS(151),
    [anon_sym_AMP_GT] = ACTIONS(151),
    [anon_sym_AMP_GT_GT] = ACTIONS(151),
    [anon_sym_LT_AMP] = ACTIONS(151),
    [anon_sym_GT_AMP] = ACTIONS(151),
    [anon_sym_LT_LT] = ACTIONS(153),
    [anon_sym_LT_LT_DASH] = ACTIONS(153),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(911),
    [anon_sym_LF] = ACTIONS(911),
    [anon_sym_AMP] = ACTIONS(911),
  },
  [323] = {
    [sym__terminated_statement] = STATE(17),
    [sym_for_statement] = STATE(18),
    [sym_while_statement] = STATE(18),
    [sym_if_statement] = STATE(18),
    [sym_case_statement] = STATE(18),
    [sym_function_definition] = STATE(18),
    [sym_bracket_command] = STATE(18),
    [sym_command] = STATE(18),
    [sym_pipeline] = STATE(18),
    [sym_list] = STATE(18),
    [sym_subshell] = STATE(18),
    [sym_environment_variable_assignment] = STATE(19),
    [sym_quoted_argument] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(20),
    [aux_sym_program_repeat1] = STATE(357),
    [aux_sym_command_repeat1] = STATE(22),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_for] = ACTIONS(83),
    [anon_sym_while] = ACTIONS(85),
    [anon_sym_if] = ACTIONS(87),
    [anon_sym_fi] = ACTIONS(913),
    [anon_sym_elif] = ACTIONS(913),
    [anon_sym_else] = ACTIONS(913),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_function] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(97),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_single_quoted_argument] = ACTIONS(103),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(109),
    [sym_comment] = ACTIONS(75),
  },
  [324] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(915),
    [anon_sym_PIPE] = ACTIONS(915),
    [anon_sym_PIPE_AMP] = ACTIONS(915),
    [anon_sym_AMP_AMP] = ACTIONS(915),
    [anon_sym_PIPE_PIPE] = ACTIONS(915),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(915),
    [anon_sym_LF] = ACTIONS(915),
    [anon_sym_AMP] = ACTIONS(915),
  },
  [325] = {
    [anon_sym_fi] = ACTIONS(917),
    [sym_comment] = ACTIONS(75),
  },
  [326] = {
    [sym__terminated_statement] = STATE(17),
    [sym_for_statement] = STATE(18),
    [sym_while_statement] = STATE(18),
    [sym_if_statement] = STATE(18),
    [sym_case_statement] = STATE(18),
    [sym_function_definition] = STATE(18),
    [sym_bracket_command] = STATE(18),
    [sym_command] = STATE(18),
    [sym_pipeline] = STATE(18),
    [sym_list] = STATE(18),
    [sym_subshell] = STATE(18),
    [sym_environment_variable_assignment] = STATE(19),
    [sym_quoted_argument] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(20),
    [aux_sym_program_repeat1] = STATE(360),
    [aux_sym_command_repeat1] = STATE(22),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_for] = ACTIONS(83),
    [anon_sym_while] = ACTIONS(85),
    [anon_sym_if] = ACTIONS(87),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_SEMI_SEMI] = ACTIONS(919),
    [anon_sym_function] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(97),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_single_quoted_argument] = ACTIONS(103),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(109),
    [sym_comment] = ACTIONS(75),
  },
  [327] = {
    [sym__terminated_statement] = STATE(17),
    [sym_for_statement] = STATE(18),
    [sym_while_statement] = STATE(18),
    [sym_if_statement] = STATE(18),
    [sym_case_statement] = STATE(18),
    [sym_function_definition] = STATE(18),
    [sym_bracket_command] = STATE(18),
    [sym_command] = STATE(18),
    [sym_pipeline] = STATE(18),
    [sym_list] = STATE(18),
    [sym_subshell] = STATE(18),
    [sym_environment_variable_assignment] = STATE(19),
    [sym_quoted_argument] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(20),
    [aux_sym_program_repeat1] = STATE(362),
    [aux_sym_command_repeat1] = STATE(22),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_for] = ACTIONS(83),
    [anon_sym_while] = ACTIONS(85),
    [anon_sym_if] = ACTIONS(87),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_SEMI_SEMI] = ACTIONS(921),
    [anon_sym_function] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(97),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_single_quoted_argument] = ACTIONS(103),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(109),
    [sym_comment] = ACTIONS(75),
  },
  [328] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(923),
    [anon_sym_PIPE] = ACTIONS(923),
    [anon_sym_PIPE_AMP] = ACTIONS(923),
    [anon_sym_AMP_AMP] = ACTIONS(923),
    [anon_sym_PIPE_PIPE] = ACTIONS(923),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(923),
    [anon_sym_LF] = ACTIONS(923),
    [anon_sym_AMP] = ACTIONS(923),
  },
  [329] = {
    [anon_sym_esac] = ACTIONS(925),
    [anon_sym_DQUOTE] = ACTIONS(927),
    [sym_single_quoted_argument] = ACTIONS(925),
    [anon_sym_DOLLAR] = ACTIONS(925),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(927),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(927),
    [sym_word] = ACTIONS(929),
    [sym_comment] = ACTIONS(75),
  },
  [330] = {
    [sym_case_item] = STATE(329),
    [sym_quoted_argument] = STATE(268),
    [sym_expansion] = STATE(268),
    [sym_operator_expansion] = STATE(268),
    [sym_command_substitution] = STATE(268),
    [anon_sym_esac] = ACTIONS(931),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [sym_single_quoted_argument] = ACTIONS(681),
    [anon_sym_DOLLAR] = ACTIONS(137),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(139),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(141),
    [sym_word] = ACTIONS(683),
    [sym_comment] = ACTIONS(75),
  },
  [331] = {
    [anon_sym_in] = ACTIONS(933),
    [anon_sym_SEMI_SEMI] = ACTIONS(933),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(933),
    [anon_sym_LF] = ACTIONS(933),
    [anon_sym_AMP] = ACTIONS(933),
  },
  [332] = {
    [anon_sym_in] = ACTIONS(935),
    [anon_sym_SEMI_SEMI] = ACTIONS(935),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(935),
    [anon_sym_LF] = ACTIONS(935),
    [anon_sym_AMP] = ACTIONS(935),
  },
  [333] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(937),
    [anon_sym_PIPE] = ACTIONS(937),
    [anon_sym_PIPE_AMP] = ACTIONS(937),
    [anon_sym_AMP_AMP] = ACTIONS(937),
    [anon_sym_PIPE_PIPE] = ACTIONS(937),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(937),
    [anon_sym_LF] = ACTIONS(937),
    [anon_sym_AMP] = ACTIONS(937),
  },
  [334] = {
    [sym_case_item] = STATE(329),
    [sym_quoted_argument] = STATE(268),
    [sym_expansion] = STATE(268),
    [sym_operator_expansion] = STATE(268),
    [sym_command_substitution] = STATE(268),
    [anon_sym_esac] = ACTIONS(939),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [sym_single_quoted_argument] = ACTIONS(681),
    [anon_sym_DOLLAR] = ACTIONS(137),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(139),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(141),
    [sym_word] = ACTIONS(683),
    [sym_comment] = ACTIONS(75),
  },
  [335] = {
    [anon_sym_RPAREN] = ACTIONS(941),
    [anon_sym_RBRACE] = ACTIONS(941),
    [anon_sym_RBRACK] = ACTIONS(943),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(943),
    [anon_sym_DQUOTE] = ACTIONS(941),
    [sym_single_quoted_argument] = ACTIONS(943),
    [anon_sym_DOLLAR] = ACTIONS(943),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(941),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(941),
    [sym_word] = ACTIONS(933),
    [sym_comment] = ACTIONS(75),
  },
  [336] = {
    [anon_sym_RPAREN] = ACTIONS(945),
    [anon_sym_RBRACE] = ACTIONS(945),
    [anon_sym_RBRACK] = ACTIONS(947),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(947),
    [anon_sym_DQUOTE] = ACTIONS(945),
    [sym_single_quoted_argument] = ACTIONS(947),
    [anon_sym_DOLLAR] = ACTIONS(947),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(945),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(945),
    [sym_word] = ACTIONS(935),
    [sym_comment] = ACTIONS(75),
  },
  [337] = {
    [anon_sym_RBRACE] = ACTIONS(949),
    [sym_comment] = ACTIONS(75),
  },
  [338] = {
    [anon_sym_RBRACE] = ACTIONS(951),
    [sym_comment] = ACTIONS(75),
  },
  [339] = {
    [anon_sym_RBRACE] = ACTIONS(953),
    [sym_comment] = ACTIONS(75),
  },
  [340] = {
    [anon_sym_RBRACE] = ACTIONS(955),
    [sym_comment] = ACTIONS(75),
  },
  [341] = {
    [sym__heredoc_middle] = ACTIONS(699),
    [sym__heredoc_end] = ACTIONS(699),
    [anon_sym_DOLLAR] = ACTIONS(701),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(699),
    [sym_comment] = ACTIONS(75),
  },
  [342] = {
    [sym_quoted_argument] = STATE(369),
    [sym_expansion] = STATE(369),
    [sym_operator_expansion] = STATE(369),
    [sym_command_substitution] = STATE(369),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [sym_single_quoted_argument] = ACTIONS(957),
    [anon_sym_DOLLAR] = ACTIONS(137),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(139),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(141),
    [sym_word] = ACTIONS(959),
    [sym_comment] = ACTIONS(75),
  },
  [343] = {
    [anon_sym_DQUOTE] = ACTIONS(933),
    [sym__quoted_chars] = ACTIONS(943),
    [anon_sym_DOLLAR] = ACTIONS(933),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(933),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(933),
    [sym_comment] = ACTIONS(155),
  },
  [344] = {
    [anon_sym_DQUOTE] = ACTIONS(935),
    [sym__quoted_chars] = ACTIONS(947),
    [anon_sym_DOLLAR] = ACTIONS(935),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(935),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(935),
    [sym_comment] = ACTIONS(155),
  },
  [345] = {
    [sym_file_descriptor] = ACTIONS(561),
    [anon_sym_RPAREN] = ACTIONS(561),
    [anon_sym_DQUOTE] = ACTIONS(561),
    [sym_single_quoted_argument] = ACTIONS(697),
    [anon_sym_DOLLAR] = ACTIONS(697),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(561),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(561),
    [anon_sym_LT] = ACTIONS(697),
    [anon_sym_GT] = ACTIONS(697),
    [anon_sym_GT_GT] = ACTIONS(561),
    [anon_sym_AMP_GT] = ACTIONS(697),
    [anon_sym_AMP_GT_GT] = ACTIONS(561),
    [anon_sym_LT_AMP] = ACTIONS(561),
    [anon_sym_GT_AMP] = ACTIONS(561),
    [anon_sym_LT_LT] = ACTIONS(697),
    [anon_sym_LT_LT_DASH] = ACTIONS(561),
    [sym_word] = ACTIONS(563),
    [sym_comment] = ACTIONS(75),
  },
  [346] = {
    [sym_file_descriptor] = ACTIONS(699),
    [anon_sym_RPAREN] = ACTIONS(699),
    [anon_sym_DQUOTE] = ACTIONS(699),
    [sym_single_quoted_argument] = ACTIONS(701),
    [anon_sym_DOLLAR] = ACTIONS(701),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(699),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(699),
    [anon_sym_LT] = ACTIONS(701),
    [anon_sym_GT] = ACTIONS(701),
    [anon_sym_GT_GT] = ACTIONS(699),
    [anon_sym_AMP_GT] = ACTIONS(701),
    [anon_sym_AMP_GT_GT] = ACTIONS(699),
    [anon_sym_LT_AMP] = ACTIONS(699),
    [anon_sym_GT_AMP] = ACTIONS(699),
    [anon_sym_LT_LT] = ACTIONS(701),
    [anon_sym_LT_LT_DASH] = ACTIONS(699),
    [sym_word] = ACTIONS(687),
    [sym_comment] = ACTIONS(75),
  },
  [347] = {
    [sym_quoted_argument] = STATE(371),
    [sym_expansion] = STATE(371),
    [sym_operator_expansion] = STATE(371),
    [sym_command_substitution] = STATE(371),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [sym_single_quoted_argument] = ACTIONS(961),
    [anon_sym_DOLLAR] = ACTIONS(137),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(139),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(141),
    [sym_word] = ACTIONS(963),
    [sym_comment] = ACTIONS(75),
  },
  [348] = {
    [sym_file_descriptor] = ACTIONS(617),
    [anon_sym_RPAREN] = ACTIONS(617),
    [anon_sym_DQUOTE] = ACTIONS(617),
    [sym_single_quoted_argument] = ACTIONS(707),
    [anon_sym_DOLLAR] = ACTIONS(707),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(617),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(617),
    [anon_sym_LT] = ACTIONS(707),
    [anon_sym_GT] = ACTIONS(707),
    [anon_sym_GT_GT] = ACTIONS(617),
    [anon_sym_AMP_GT] = ACTIONS(707),
    [anon_sym_AMP_GT_GT] = ACTIONS(617),
    [anon_sym_LT_AMP] = ACTIONS(617),
    [anon_sym_GT_AMP] = ACTIONS(617),
    [anon_sym_LT_LT] = ACTIONS(707),
    [anon_sym_LT_LT_DASH] = ACTIONS(617),
    [sym_word] = ACTIONS(619),
    [sym_comment] = ACTIONS(75),
  },
  [349] = {
    [sym_file_descriptor] = ACTIONS(869),
    [anon_sym_RPAREN] = ACTIONS(869),
    [anon_sym_LT] = ACTIONS(965),
    [anon_sym_GT] = ACTIONS(965),
    [anon_sym_GT_GT] = ACTIONS(869),
    [anon_sym_AMP_GT] = ACTIONS(965),
    [anon_sym_AMP_GT_GT] = ACTIONS(869),
    [anon_sym_LT_AMP] = ACTIONS(869),
    [anon_sym_GT_AMP] = ACTIONS(869),
    [anon_sym_LT_LT] = ACTIONS(965),
    [anon_sym_LT_LT_DASH] = ACTIONS(869),
    [sym_comment] = ACTIONS(75),
  },
  [350] = {
    [sym_file_redirect] = STATE(233),
    [sym_heredoc_redirect] = STATE(233),
    [sym_file_descriptor] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(967),
    [anon_sym_LT] = ACTIONS(585),
    [anon_sym_GT] = ACTIONS(585),
    [anon_sym_GT_GT] = ACTIONS(587),
    [anon_sym_AMP_GT] = ACTIONS(585),
    [anon_sym_AMP_GT_GT] = ACTIONS(587),
    [anon_sym_LT_AMP] = ACTIONS(587),
    [anon_sym_GT_AMP] = ACTIONS(587),
    [anon_sym_LT_LT] = ACTIONS(589),
    [anon_sym_LT_LT_DASH] = ACTIONS(591),
    [sym_comment] = ACTIONS(75),
  },
  [351] = {
    [sym_file_redirect] = STATE(233),
    [sym_heredoc_redirect] = STATE(233),
    [sym_file_descriptor] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(969),
    [anon_sym_LT] = ACTIONS(585),
    [anon_sym_GT] = ACTIONS(585),
    [anon_sym_GT_GT] = ACTIONS(587),
    [anon_sym_AMP_GT] = ACTIONS(585),
    [anon_sym_AMP_GT_GT] = ACTIONS(587),
    [anon_sym_LT_AMP] = ACTIONS(587),
    [anon_sym_GT_AMP] = ACTIONS(587),
    [anon_sym_LT_LT] = ACTIONS(589),
    [anon_sym_LT_LT_DASH] = ACTIONS(591),
    [sym_comment] = ACTIONS(75),
  },
  [352] = {
    [sym_file_descriptor] = ACTIONS(941),
    [anon_sym_COLON] = ACTIONS(941),
    [anon_sym_DQUOTE] = ACTIONS(941),
    [sym_single_quoted_argument] = ACTIONS(943),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(941),
    [anon_sym_LT] = ACTIONS(943),
    [anon_sym_GT] = ACTIONS(943),
    [anon_sym_GT_GT] = ACTIONS(943),
    [anon_sym_AMP_GT] = ACTIONS(943),
    [anon_sym_AMP_GT_GT] = ACTIONS(943),
    [anon_sym_LT_AMP] = ACTIONS(943),
    [anon_sym_GT_AMP] = ACTIONS(943),
    [sym_leading_word] = ACTIONS(933),
    [sym_comment] = ACTIONS(75),
  },
  [353] = {
    [sym_file_descriptor] = ACTIONS(945),
    [anon_sym_COLON] = ACTIONS(945),
    [anon_sym_DQUOTE] = ACTIONS(945),
    [sym_single_quoted_argument] = ACTIONS(947),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(945),
    [anon_sym_LT] = ACTIONS(947),
    [anon_sym_GT] = ACTIONS(947),
    [anon_sym_GT_GT] = ACTIONS(947),
    [anon_sym_AMP_GT] = ACTIONS(947),
    [anon_sym_AMP_GT_GT] = ACTIONS(947),
    [anon_sym_LT_AMP] = ACTIONS(947),
    [anon_sym_GT_AMP] = ACTIONS(947),
    [sym_leading_word] = ACTIONS(935),
    [sym_comment] = ACTIONS(75),
  },
  [354] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(971),
    [anon_sym_PIPE] = ACTIONS(971),
    [anon_sym_PIPE_AMP] = ACTIONS(971),
    [anon_sym_AMP_AMP] = ACTIONS(971),
    [anon_sym_PIPE_PIPE] = ACTIONS(971),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(971),
    [anon_sym_LF] = ACTIONS(971),
    [anon_sym_AMP] = ACTIONS(971),
  },
  [355] = {
    [anon_sym_RBRACE] = ACTIONS(973),
    [sym_comment] = ACTIONS(75),
  },
  [356] = {
    [anon_sym_RBRACE] = ACTIONS(975),
    [sym_comment] = ACTIONS(75),
  },
  [357] = {
    [sym__terminated_statement] = STATE(77),
    [sym_for_statement] = STATE(18),
    [sym_while_statement] = STATE(18),
    [sym_if_statement] = STATE(18),
    [sym_case_statement] = STATE(18),
    [sym_function_definition] = STATE(18),
    [sym_bracket_command] = STATE(18),
    [sym_command] = STATE(18),
    [sym_pipeline] = STATE(18),
    [sym_list] = STATE(18),
    [sym_subshell] = STATE(18),
    [sym_environment_variable_assignment] = STATE(19),
    [sym_quoted_argument] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(20),
    [aux_sym_command_repeat1] = STATE(22),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_for] = ACTIONS(83),
    [anon_sym_while] = ACTIONS(85),
    [anon_sym_if] = ACTIONS(87),
    [anon_sym_fi] = ACTIONS(977),
    [anon_sym_elif] = ACTIONS(977),
    [anon_sym_else] = ACTIONS(977),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_function] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(97),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_single_quoted_argument] = ACTIONS(103),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(109),
    [sym_comment] = ACTIONS(75),
  },
  [358] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(979),
    [anon_sym_PIPE] = ACTIONS(979),
    [anon_sym_PIPE_AMP] = ACTIONS(979),
    [anon_sym_AMP_AMP] = ACTIONS(979),
    [anon_sym_PIPE_PIPE] = ACTIONS(979),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(979),
    [anon_sym_LF] = ACTIONS(979),
    [anon_sym_AMP] = ACTIONS(979),
  },
  [359] = {
    [anon_sym_esac] = ACTIONS(981),
    [anon_sym_DQUOTE] = ACTIONS(983),
    [sym_single_quoted_argument] = ACTIONS(981),
    [anon_sym_DOLLAR] = ACTIONS(981),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(983),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(983),
    [sym_word] = ACTIONS(985),
    [sym_comment] = ACTIONS(75),
  },
  [360] = {
    [sym__terminated_statement] = STATE(77),
    [sym_for_statement] = STATE(18),
    [sym_while_statement] = STATE(18),
    [sym_if_statement] = STATE(18),
    [sym_case_statement] = STATE(18),
    [sym_function_definition] = STATE(18),
    [sym_bracket_command] = STATE(18),
    [sym_command] = STATE(18),
    [sym_pipeline] = STATE(18),
    [sym_list] = STATE(18),
    [sym_subshell] = STATE(18),
    [sym_environment_variable_assignment] = STATE(19),
    [sym_quoted_argument] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(20),
    [aux_sym_command_repeat1] = STATE(22),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_for] = ACTIONS(83),
    [anon_sym_while] = ACTIONS(85),
    [anon_sym_if] = ACTIONS(87),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_SEMI_SEMI] = ACTIONS(987),
    [anon_sym_function] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(97),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_single_quoted_argument] = ACTIONS(103),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(109),
    [sym_comment] = ACTIONS(75),
  },
  [361] = {
    [anon_sym_esac] = ACTIONS(989),
    [anon_sym_DQUOTE] = ACTIONS(991),
    [sym_single_quoted_argument] = ACTIONS(989),
    [anon_sym_DOLLAR] = ACTIONS(989),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(991),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(991),
    [sym_word] = ACTIONS(993),
    [sym_comment] = ACTIONS(75),
  },
  [362] = {
    [sym__terminated_statement] = STATE(77),
    [sym_for_statement] = STATE(18),
    [sym_while_statement] = STATE(18),
    [sym_if_statement] = STATE(18),
    [sym_case_statement] = STATE(18),
    [sym_function_definition] = STATE(18),
    [sym_bracket_command] = STATE(18),
    [sym_command] = STATE(18),
    [sym_pipeline] = STATE(18),
    [sym_list] = STATE(18),
    [sym_subshell] = STATE(18),
    [sym_environment_variable_assignment] = STATE(19),
    [sym_quoted_argument] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(20),
    [aux_sym_command_repeat1] = STATE(22),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_for] = ACTIONS(83),
    [anon_sym_while] = ACTIONS(85),
    [anon_sym_if] = ACTIONS(87),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_SEMI_SEMI] = ACTIONS(995),
    [anon_sym_function] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(97),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_single_quoted_argument] = ACTIONS(103),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(109),
    [sym_comment] = ACTIONS(75),
  },
  [363] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(997),
    [anon_sym_PIPE] = ACTIONS(997),
    [anon_sym_PIPE_AMP] = ACTIONS(997),
    [anon_sym_AMP_AMP] = ACTIONS(997),
    [anon_sym_PIPE_PIPE] = ACTIONS(997),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(997),
    [anon_sym_LF] = ACTIONS(997),
    [anon_sym_AMP] = ACTIONS(997),
  },
  [364] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(999),
    [anon_sym_PIPE] = ACTIONS(999),
    [anon_sym_PIPE_AMP] = ACTIONS(999),
    [anon_sym_AMP_AMP] = ACTIONS(999),
    [anon_sym_PIPE_PIPE] = ACTIONS(999),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(999),
    [anon_sym_LF] = ACTIONS(999),
    [anon_sym_AMP] = ACTIONS(999),
  },
  [365] = {
    [sym_file_descriptor] = ACTIONS(941),
    [anon_sym_SEMI_SEMI] = ACTIONS(933),
    [anon_sym_PIPE] = ACTIONS(933),
    [anon_sym_PIPE_AMP] = ACTIONS(933),
    [anon_sym_AMP_AMP] = ACTIONS(933),
    [anon_sym_PIPE_PIPE] = ACTIONS(933),
    [anon_sym_DQUOTE] = ACTIONS(933),
    [sym_single_quoted_argument] = ACTIONS(933),
    [anon_sym_DOLLAR] = ACTIONS(933),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(933),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(933),
    [anon_sym_LT] = ACTIONS(933),
    [anon_sym_GT] = ACTIONS(933),
    [anon_sym_GT_GT] = ACTIONS(933),
    [anon_sym_AMP_GT] = ACTIONS(933),
    [anon_sym_AMP_GT_GT] = ACTIONS(933),
    [anon_sym_LT_AMP] = ACTIONS(933),
    [anon_sym_GT_AMP] = ACTIONS(933),
    [anon_sym_LT_LT] = ACTIONS(933),
    [anon_sym_LT_LT_DASH] = ACTIONS(933),
    [sym_word] = ACTIONS(933),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(933),
    [anon_sym_LF] = ACTIONS(933),
    [anon_sym_AMP] = ACTIONS(933),
  },
  [366] = {
    [sym_file_descriptor] = ACTIONS(945),
    [anon_sym_SEMI_SEMI] = ACTIONS(935),
    [anon_sym_PIPE] = ACTIONS(935),
    [anon_sym_PIPE_AMP] = ACTIONS(935),
    [anon_sym_AMP_AMP] = ACTIONS(935),
    [anon_sym_PIPE_PIPE] = ACTIONS(935),
    [anon_sym_DQUOTE] = ACTIONS(935),
    [sym_single_quoted_argument] = ACTIONS(935),
    [anon_sym_DOLLAR] = ACTIONS(935),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(935),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(935),
    [anon_sym_LT] = ACTIONS(935),
    [anon_sym_GT] = ACTIONS(935),
    [anon_sym_GT_GT] = ACTIONS(935),
    [anon_sym_AMP_GT] = ACTIONS(935),
    [anon_sym_AMP_GT_GT] = ACTIONS(935),
    [anon_sym_LT_AMP] = ACTIONS(935),
    [anon_sym_GT_AMP] = ACTIONS(935),
    [anon_sym_LT_LT] = ACTIONS(935),
    [anon_sym_LT_LT_DASH] = ACTIONS(935),
    [sym_word] = ACTIONS(935),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(935),
    [anon_sym_LF] = ACTIONS(935),
    [anon_sym_AMP] = ACTIONS(935),
  },
  [367] = {
    [sym_file_descriptor] = ACTIONS(941),
    [anon_sym_SEMI_SEMI] = ACTIONS(933),
    [anon_sym_PIPE] = ACTIONS(933),
    [anon_sym_PIPE_AMP] = ACTIONS(933),
    [anon_sym_AMP_AMP] = ACTIONS(933),
    [anon_sym_PIPE_PIPE] = ACTIONS(933),
    [anon_sym_LT] = ACTIONS(933),
    [anon_sym_GT] = ACTIONS(933),
    [anon_sym_GT_GT] = ACTIONS(933),
    [anon_sym_AMP_GT] = ACTIONS(933),
    [anon_sym_AMP_GT_GT] = ACTIONS(933),
    [anon_sym_LT_AMP] = ACTIONS(933),
    [anon_sym_GT_AMP] = ACTIONS(933),
    [anon_sym_LT_LT] = ACTIONS(933),
    [anon_sym_LT_LT_DASH] = ACTIONS(933),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(933),
    [anon_sym_LF] = ACTIONS(933),
    [anon_sym_AMP] = ACTIONS(933),
  },
  [368] = {
    [sym_file_descriptor] = ACTIONS(945),
    [anon_sym_SEMI_SEMI] = ACTIONS(935),
    [anon_sym_PIPE] = ACTIONS(935),
    [anon_sym_PIPE_AMP] = ACTIONS(935),
    [anon_sym_AMP_AMP] = ACTIONS(935),
    [anon_sym_PIPE_PIPE] = ACTIONS(935),
    [anon_sym_LT] = ACTIONS(935),
    [anon_sym_GT] = ACTIONS(935),
    [anon_sym_GT_GT] = ACTIONS(935),
    [anon_sym_AMP_GT] = ACTIONS(935),
    [anon_sym_AMP_GT_GT] = ACTIONS(935),
    [anon_sym_LT_AMP] = ACTIONS(935),
    [anon_sym_GT_AMP] = ACTIONS(935),
    [anon_sym_LT_LT] = ACTIONS(935),
    [anon_sym_LT_LT_DASH] = ACTIONS(935),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(935),
    [anon_sym_LF] = ACTIONS(935),
    [anon_sym_AMP] = ACTIONS(935),
  },
  [369] = {
    [anon_sym_RBRACE] = ACTIONS(1001),
    [sym_comment] = ACTIONS(75),
  },
  [370] = {
    [anon_sym_RBRACE] = ACTIONS(1003),
    [sym_comment] = ACTIONS(75),
  },
  [371] = {
    [anon_sym_RBRACE] = ACTIONS(1005),
    [sym_comment] = ACTIONS(75),
  },
  [372] = {
    [anon_sym_RBRACE] = ACTIONS(1007),
    [sym_comment] = ACTIONS(75),
  },
  [373] = {
    [sym_file_descriptor] = ACTIONS(941),
    [anon_sym_SEMI_SEMI] = ACTIONS(933),
    [anon_sym_COLON] = ACTIONS(933),
    [anon_sym_PIPE] = ACTIONS(933),
    [anon_sym_PIPE_AMP] = ACTIONS(933),
    [anon_sym_AMP_AMP] = ACTIONS(933),
    [anon_sym_PIPE_PIPE] = ACTIONS(933),
    [anon_sym_DQUOTE] = ACTIONS(933),
    [sym_single_quoted_argument] = ACTIONS(933),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(933),
    [anon_sym_LT] = ACTIONS(933),
    [anon_sym_GT] = ACTIONS(933),
    [anon_sym_GT_GT] = ACTIONS(933),
    [anon_sym_AMP_GT] = ACTIONS(933),
    [anon_sym_AMP_GT_GT] = ACTIONS(933),
    [anon_sym_LT_AMP] = ACTIONS(933),
    [anon_sym_GT_AMP] = ACTIONS(933),
    [sym_leading_word] = ACTIONS(933),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(933),
    [anon_sym_LF] = ACTIONS(933),
    [anon_sym_AMP] = ACTIONS(933),
  },
  [374] = {
    [sym_file_descriptor] = ACTIONS(945),
    [anon_sym_SEMI_SEMI] = ACTIONS(935),
    [anon_sym_COLON] = ACTIONS(935),
    [anon_sym_PIPE] = ACTIONS(935),
    [anon_sym_PIPE_AMP] = ACTIONS(935),
    [anon_sym_AMP_AMP] = ACTIONS(935),
    [anon_sym_PIPE_PIPE] = ACTIONS(935),
    [anon_sym_DQUOTE] = ACTIONS(935),
    [sym_single_quoted_argument] = ACTIONS(935),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(935),
    [anon_sym_LT] = ACTIONS(935),
    [anon_sym_GT] = ACTIONS(935),
    [anon_sym_GT_GT] = ACTIONS(935),
    [anon_sym_AMP_GT] = ACTIONS(935),
    [anon_sym_AMP_GT_GT] = ACTIONS(935),
    [anon_sym_LT_AMP] = ACTIONS(935),
    [anon_sym_GT_AMP] = ACTIONS(935),
    [sym_leading_word] = ACTIONS(935),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(935),
    [anon_sym_LF] = ACTIONS(935),
    [anon_sym_AMP] = ACTIONS(935),
  },
  [375] = {
    [anon_sym_esac] = ACTIONS(1009),
    [anon_sym_DQUOTE] = ACTIONS(1011),
    [sym_single_quoted_argument] = ACTIONS(1009),
    [anon_sym_DOLLAR] = ACTIONS(1009),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1011),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1011),
    [sym_word] = ACTIONS(1013),
    [sym_comment] = ACTIONS(75),
  },
  [376] = {
    [anon_sym_esac] = ACTIONS(1015),
    [anon_sym_DQUOTE] = ACTIONS(1017),
    [sym_single_quoted_argument] = ACTIONS(1015),
    [anon_sym_DOLLAR] = ACTIONS(1015),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1017),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1017),
    [sym_word] = ACTIONS(1019),
    [sym_comment] = ACTIONS(75),
  },
  [377] = {
    [sym__heredoc_middle] = ACTIONS(941),
    [sym__heredoc_end] = ACTIONS(941),
    [anon_sym_DOLLAR] = ACTIONS(943),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(941),
    [sym_comment] = ACTIONS(75),
  },
  [378] = {
    [sym__heredoc_middle] = ACTIONS(945),
    [sym__heredoc_end] = ACTIONS(945),
    [anon_sym_DOLLAR] = ACTIONS(947),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(945),
    [sym_comment] = ACTIONS(75),
  },
  [379] = {
    [sym_file_descriptor] = ACTIONS(941),
    [anon_sym_RPAREN] = ACTIONS(941),
    [anon_sym_DQUOTE] = ACTIONS(941),
    [sym_single_quoted_argument] = ACTIONS(943),
    [anon_sym_DOLLAR] = ACTIONS(943),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(941),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(941),
    [anon_sym_LT] = ACTIONS(943),
    [anon_sym_GT] = ACTIONS(943),
    [anon_sym_GT_GT] = ACTIONS(941),
    [anon_sym_AMP_GT] = ACTIONS(943),
    [anon_sym_AMP_GT_GT] = ACTIONS(941),
    [anon_sym_LT_AMP] = ACTIONS(941),
    [anon_sym_GT_AMP] = ACTIONS(941),
    [anon_sym_LT_LT] = ACTIONS(943),
    [anon_sym_LT_LT_DASH] = ACTIONS(941),
    [sym_word] = ACTIONS(933),
    [sym_comment] = ACTIONS(75),
  },
  [380] = {
    [sym_file_descriptor] = ACTIONS(945),
    [anon_sym_RPAREN] = ACTIONS(945),
    [anon_sym_DQUOTE] = ACTIONS(945),
    [sym_single_quoted_argument] = ACTIONS(947),
    [anon_sym_DOLLAR] = ACTIONS(947),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(945),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(945),
    [anon_sym_LT] = ACTIONS(947),
    [anon_sym_GT] = ACTIONS(947),
    [anon_sym_GT_GT] = ACTIONS(945),
    [anon_sym_AMP_GT] = ACTIONS(947),
    [anon_sym_AMP_GT_GT] = ACTIONS(945),
    [anon_sym_LT_AMP] = ACTIONS(945),
    [anon_sym_GT_AMP] = ACTIONS(945),
    [anon_sym_LT_LT] = ACTIONS(947),
    [anon_sym_LT_LT_DASH] = ACTIONS(945),
    [sym_word] = ACTIONS(935),
    [sym_comment] = ACTIONS(75),
  },
  [381] = {
    [sym__terminated_statement] = STATE(171),
    [sym_for_statement] = STATE(26),
    [sym_while_statement] = STATE(26),
    [sym_if_statement] = STATE(26),
    [sym_case_statement] = STATE(26),
    [sym_function_definition] = STATE(26),
    [sym_bracket_command] = STATE(26),
    [sym_command] = STATE(26),
    [sym_pipeline] = STATE(26),
    [sym_list] = STATE(26),
    [sym_subshell] = STATE(26),
    [sym_environment_variable_assignment] = STATE(27),
    [sym_quoted_argument] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(20),
    [aux_sym_command_repeat1] = STATE(22),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_for] = ACTIONS(1021),
    [anon_sym_while] = ACTIONS(1023),
    [anon_sym_if] = ACTIONS(1025),
    [anon_sym_case] = ACTIONS(1027),
    [anon_sym_SEMI_SEMI] = ACTIONS(1029),
    [anon_sym_function] = ACTIONS(1031),
    [anon_sym_LPAREN] = ACTIONS(1033),
    [anon_sym_LBRACK] = ACTIONS(1035),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1037),
    [anon_sym_COLON] = ACTIONS(1039),
    [anon_sym_DQUOTE] = ACTIONS(1041),
    [sym_single_quoted_argument] = ACTIONS(1039),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1043),
    [anon_sym_LT] = ACTIONS(1045),
    [anon_sym_GT] = ACTIONS(1045),
    [anon_sym_GT_GT] = ACTIONS(1045),
    [anon_sym_AMP_GT] = ACTIONS(1045),
    [anon_sym_AMP_GT_GT] = ACTIONS(1045),
    [anon_sym_LT_AMP] = ACTIONS(1045),
    [anon_sym_GT_AMP] = ACTIONS(1045),
    [sym_leading_word] = ACTIONS(109),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(1029),
    [anon_sym_LF] = ACTIONS(1029),
    [anon_sym_AMP] = ACTIONS(1029),
  },
  [382] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1047),
    [anon_sym_PIPE] = ACTIONS(1047),
    [anon_sym_PIPE_AMP] = ACTIONS(1047),
    [anon_sym_AMP_AMP] = ACTIONS(1047),
    [anon_sym_PIPE_PIPE] = ACTIONS(1047),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(1047),
    [anon_sym_LF] = ACTIONS(1047),
    [anon_sym_AMP] = ACTIONS(1047),
  },
  [383] = {
    [sym__terminated_statement] = STATE(17),
    [sym_for_statement] = STATE(18),
    [sym_while_statement] = STATE(18),
    [sym_if_statement] = STATE(18),
    [sym_elif_clause] = STATE(177),
    [sym_else_clause] = STATE(178),
    [sym_case_statement] = STATE(18),
    [sym_function_definition] = STATE(18),
    [sym_bracket_command] = STATE(18),
    [sym_command] = STATE(18),
    [sym_pipeline] = STATE(18),
    [sym_list] = STATE(18),
    [sym_subshell] = STATE(18),
    [sym_environment_variable_assignment] = STATE(19),
    [sym_quoted_argument] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(20),
    [aux_sym_program_repeat1] = STATE(425),
    [aux_sym_if_statement_repeat1] = STATE(180),
    [aux_sym_command_repeat1] = STATE(22),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_for] = ACTIONS(83),
    [anon_sym_while] = ACTIONS(85),
    [anon_sym_if] = ACTIONS(87),
    [anon_sym_fi] = ACTIONS(1050),
    [anon_sym_elif] = ACTIONS(1053),
    [anon_sym_else] = ACTIONS(1056),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_function] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(97),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_single_quoted_argument] = ACTIONS(103),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(109),
    [sym_comment] = ACTIONS(75),
  },
  [384] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1059),
    [anon_sym_PIPE] = ACTIONS(1059),
    [anon_sym_PIPE_AMP] = ACTIONS(1059),
    [anon_sym_AMP_AMP] = ACTIONS(1059),
    [anon_sym_PIPE_PIPE] = ACTIONS(1059),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(1059),
    [anon_sym_LF] = ACTIONS(1059),
    [anon_sym_AMP] = ACTIONS(1059),
  },
  [385] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1064),
    [anon_sym_PIPE] = ACTIONS(1064),
    [anon_sym_PIPE_AMP] = ACTIONS(1064),
    [anon_sym_AMP_AMP] = ACTIONS(1064),
    [anon_sym_PIPE_PIPE] = ACTIONS(1064),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(1064),
    [anon_sym_LF] = ACTIONS(1064),
    [anon_sym_AMP] = ACTIONS(1064),
  },
  [386] = {
    [sym__terminated_statement] = STATE(17),
    [sym_for_statement] = STATE(18),
    [sym_while_statement] = STATE(18),
    [sym_if_statement] = STATE(18),
    [sym_case_statement] = STATE(18),
    [sym_function_definition] = STATE(18),
    [sym_compound_command] = STATE(407),
    [sym_bracket_command] = STATE(18),
    [sym_command] = STATE(18),
    [sym_pipeline] = STATE(18),
    [sym_list] = STATE(18),
    [sym_subshell] = STATE(18),
    [sym_environment_variable_assignment] = STATE(19),
    [sym_quoted_argument] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(20),
    [aux_sym_program_repeat1] = STATE(427),
    [aux_sym_command_repeat1] = STATE(22),
    [sym_file_descriptor] = ACTIONS(1071),
    [anon_sym_for] = ACTIONS(1021),
    [anon_sym_in] = ACTIONS(619),
    [anon_sym_while] = ACTIONS(1023),
    [anon_sym_if] = ACTIONS(1025),
    [anon_sym_case] = ACTIONS(1027),
    [anon_sym_RPAREN] = ACTIONS(619),
    [anon_sym_SEMI_SEMI] = ACTIONS(1074),
    [anon_sym_function] = ACTIONS(1031),
    [anon_sym_LPAREN] = ACTIONS(1033),
    [anon_sym_LBRACE] = ACTIONS(1079),
    [anon_sym_RBRACE] = ACTIONS(619),
    [anon_sym_LBRACK] = ACTIONS(1035),
    [anon_sym_RBRACK] = ACTIONS(619),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1037),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(619),
    [anon_sym_COLON] = ACTIONS(1081),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(619),
    [anon_sym_PIPE] = ACTIONS(1084),
    [anon_sym_PIPE_AMP] = ACTIONS(1084),
    [anon_sym_AMP_AMP] = ACTIONS(1084),
    [anon_sym_PIPE_PIPE] = ACTIONS(1084),
    [anon_sym_DQUOTE] = ACTIONS(1088),
    [sym__quoted_chars] = ACTIONS(619),
    [sym_single_quoted_argument] = ACTIONS(1081),
    [anon_sym_DOLLAR] = ACTIONS(619),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(619),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1091),
    [anon_sym_LT] = ACTIONS(1094),
    [anon_sym_GT] = ACTIONS(1094),
    [anon_sym_GT_GT] = ACTIONS(1094),
    [anon_sym_AMP_GT] = ACTIONS(1094),
    [anon_sym_AMP_GT_GT] = ACTIONS(1094),
    [anon_sym_LT_AMP] = ACTIONS(1094),
    [anon_sym_GT_AMP] = ACTIONS(1094),
    [anon_sym_LT_LT] = ACTIONS(619),
    [anon_sym_LT_LT_DASH] = ACTIONS(619),
    [sym_leading_word] = ACTIONS(1097),
    [sym_word] = ACTIONS(619),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(1084),
    [anon_sym_LF] = ACTIONS(1084),
    [anon_sym_AMP] = ACTIONS(1084),
  },
  [387] = {
    [sym__terminated_statement] = STATE(17),
    [sym_for_statement] = STATE(18),
    [sym_while_statement] = STATE(18),
    [sym_if_statement] = STATE(18),
    [sym_case_statement] = STATE(18),
    [sym_function_definition] = STATE(18),
    [sym_bracket_command] = STATE(18),
    [sym_command] = STATE(18),
    [sym_pipeline] = STATE(18),
    [sym_list] = STATE(18),
    [sym_subshell] = STATE(18),
    [sym_environment_variable_assignment] = STATE(19),
    [sym_quoted_argument] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(20),
    [aux_sym_program_repeat1] = STATE(37),
    [aux_sym_command_repeat1] = STATE(22),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_for] = ACTIONS(83),
    [anon_sym_while] = ACTIONS(85),
    [anon_sym_if] = ACTIONS(87),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(1100),
    [anon_sym_function] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(97),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_single_quoted_argument] = ACTIONS(103),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(109),
    [sym_comment] = ACTIONS(75),
  },
  [388] = {
    [sym__heredoc_middle] = ACTIONS(1102),
    [sym__heredoc_end] = ACTIONS(1102),
    [sym_file_descriptor] = ACTIONS(1102),
    [anon_sym_in] = ACTIONS(1106),
    [anon_sym_RPAREN] = ACTIONS(1106),
    [anon_sym_SEMI_SEMI] = ACTIONS(1110),
    [anon_sym_RBRACE] = ACTIONS(1106),
    [anon_sym_RBRACK] = ACTIONS(1106),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1106),
    [anon_sym_COLON] = ACTIONS(1106),
    [anon_sym_PIPE] = ACTIONS(1110),
    [anon_sym_PIPE_AMP] = ACTIONS(1110),
    [anon_sym_AMP_AMP] = ACTIONS(1110),
    [anon_sym_PIPE_PIPE] = ACTIONS(1110),
    [anon_sym_DQUOTE] = ACTIONS(1106),
    [sym__quoted_chars] = ACTIONS(1106),
    [sym_single_quoted_argument] = ACTIONS(1106),
    [anon_sym_DOLLAR] = ACTIONS(1106),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1106),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1106),
    [anon_sym_LT] = ACTIONS(1106),
    [anon_sym_GT] = ACTIONS(1106),
    [anon_sym_GT_GT] = ACTIONS(1106),
    [anon_sym_AMP_GT] = ACTIONS(1106),
    [anon_sym_AMP_GT_GT] = ACTIONS(1106),
    [anon_sym_LT_AMP] = ACTIONS(1106),
    [anon_sym_GT_AMP] = ACTIONS(1106),
    [anon_sym_LT_LT] = ACTIONS(1106),
    [anon_sym_LT_LT_DASH] = ACTIONS(1106),
    [sym_leading_word] = ACTIONS(1106),
    [sym_word] = ACTIONS(1106),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(1110),
    [anon_sym_LF] = ACTIONS(1110),
    [anon_sym_AMP] = ACTIONS(1110),
  },
  [389] = {
    [sym_quoted_argument] = STATE(431),
    [sym_expansion] = STATE(431),
    [sym_operator_expansion] = STATE(431),
    [sym_command_substitution] = STATE(431),
    [sym_file_redirect] = STATE(434),
    [sym_heredoc_redirect] = STATE(434),
    [aux_sym_command_repeat2] = STATE(435),
    [sym_file_descriptor] = ACTIONS(1116),
    [anon_sym_RPAREN] = ACTIONS(1118),
    [anon_sym_SEMI_SEMI] = ACTIONS(1118),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(1121),
    [anon_sym_PIPE] = ACTIONS(1118),
    [anon_sym_PIPE_AMP] = ACTIONS(1118),
    [anon_sym_AMP_AMP] = ACTIONS(1118),
    [anon_sym_PIPE_PIPE] = ACTIONS(1118),
    [anon_sym_DQUOTE] = ACTIONS(1123),
    [sym_single_quoted_argument] = ACTIONS(1125),
    [anon_sym_DOLLAR] = ACTIONS(1127),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1129),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1131),
    [anon_sym_LT] = ACTIONS(1133),
    [anon_sym_GT] = ACTIONS(1133),
    [anon_sym_GT_GT] = ACTIONS(1133),
    [anon_sym_AMP_GT] = ACTIONS(1133),
    [anon_sym_AMP_GT_GT] = ACTIONS(1133),
    [anon_sym_LT_AMP] = ACTIONS(1133),
    [anon_sym_GT_AMP] = ACTIONS(1133),
    [anon_sym_LT_LT] = ACTIONS(1135),
    [anon_sym_LT_LT_DASH] = ACTIONS(1135),
    [sym_word] = ACTIONS(1137),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(1118),
    [anon_sym_LF] = ACTIONS(1118),
    [anon_sym_AMP] = ACTIONS(1118),
  },
  [390] = {
    [sym_quoted_argument] = STATE(437),
    [sym_expansion] = STATE(437),
    [sym_operator_expansion] = STATE(437),
    [sym_command_substitution] = STATE(437),
    [sym__empty_value] = ACTIONS(387),
    [anon_sym_DQUOTE] = ACTIONS(1139),
    [sym_single_quoted_argument] = ACTIONS(1141),
    [anon_sym_DOLLAR] = ACTIONS(1143),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1145),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1147),
    [sym_word] = ACTIONS(1149),
    [sym_comment] = ACTIONS(75),
  },
  [391] = {
    [sym_expansion] = STATE(53),
    [sym_operator_expansion] = STATE(53),
    [sym_command_substitution] = STATE(53),
    [aux_sym_quoted_argument_repeat1] = STATE(422),
    [sym_file_descriptor] = ACTIONS(1151),
    [anon_sym_in] = ACTIONS(1154),
    [anon_sym_RPAREN] = ACTIONS(1154),
    [anon_sym_SEMI_SEMI] = ACTIONS(1154),
    [anon_sym_RBRACE] = ACTIONS(1154),
    [anon_sym_RBRACK] = ACTIONS(1154),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1154),
    [anon_sym_COLON] = ACTIONS(1154),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(1154),
    [anon_sym_PIPE] = ACTIONS(1154),
    [anon_sym_PIPE_AMP] = ACTIONS(1154),
    [anon_sym_AMP_AMP] = ACTIONS(1154),
    [anon_sym_PIPE_PIPE] = ACTIONS(1154),
    [anon_sym_DQUOTE] = ACTIONS(1157),
    [sym__quoted_chars] = ACTIONS(1161),
    [sym_single_quoted_argument] = ACTIONS(1154),
    [anon_sym_DOLLAR] = ACTIONS(1163),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1167),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1171),
    [anon_sym_LT] = ACTIONS(1154),
    [anon_sym_GT] = ACTIONS(1154),
    [anon_sym_GT_GT] = ACTIONS(1154),
    [anon_sym_AMP_GT] = ACTIONS(1154),
    [anon_sym_AMP_GT_GT] = ACTIONS(1154),
    [anon_sym_LT_AMP] = ACTIONS(1154),
    [anon_sym_GT_AMP] = ACTIONS(1154),
    [anon_sym_LT_LT] = ACTIONS(1154),
    [anon_sym_LT_LT_DASH] = ACTIONS(1154),
    [sym_leading_word] = ACTIONS(1154),
    [sym_word] = ACTIONS(1154),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(1154),
    [anon_sym_LF] = ACTIONS(1154),
    [anon_sym_AMP] = ACTIONS(1154),
  },
  [392] = {
    [sym__heredoc_middle] = ACTIONS(477),
    [sym__heredoc_end] = ACTIONS(477),
    [sym_file_descriptor] = ACTIONS(477),
    [anon_sym_in] = ACTIONS(453),
    [anon_sym_RPAREN] = ACTIONS(453),
    [anon_sym_SEMI_SEMI] = ACTIONS(453),
    [anon_sym_RBRACE] = ACTIONS(453),
    [anon_sym_RBRACK] = ACTIONS(453),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(453),
    [anon_sym_COLON] = ACTIONS(453),
    [anon_sym_PIPE] = ACTIONS(453),
    [anon_sym_PIPE_AMP] = ACTIONS(453),
    [anon_sym_AMP_AMP] = ACTIONS(453),
    [anon_sym_PIPE_PIPE] = ACTIONS(453),
    [anon_sym_DQUOTE] = ACTIONS(453),
    [sym__quoted_chars] = ACTIONS(453),
    [sym_single_quoted_argument] = ACTIONS(453),
    [anon_sym_DOLLAR] = ACTIONS(1175),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(453),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(453),
    [anon_sym_LT] = ACTIONS(453),
    [anon_sym_GT] = ACTIONS(453),
    [anon_sym_GT_GT] = ACTIONS(453),
    [anon_sym_AMP_GT] = ACTIONS(453),
    [anon_sym_AMP_GT_GT] = ACTIONS(453),
    [anon_sym_LT_AMP] = ACTIONS(453),
    [anon_sym_GT_AMP] = ACTIONS(453),
    [anon_sym_LT_LT] = ACTIONS(453),
    [anon_sym_LT_LT_DASH] = ACTIONS(453),
    [sym_leading_word] = ACTIONS(453),
    [sym_word] = ACTIONS(1178),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(453),
    [anon_sym_LF] = ACTIONS(453),
    [anon_sym_AMP] = ACTIONS(453),
  },
  [393] = {
    [sym_quoted_argument] = STATE(446),
    [sym_expansion] = STATE(446),
    [sym_operator_expansion] = STATE(446),
    [sym_command_substitution] = STATE(446),
    [anon_sym_DQUOTE] = ACTIONS(1181),
    [sym_single_quoted_argument] = ACTIONS(1183),
    [anon_sym_DOLLAR] = ACTIONS(1185),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1187),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1189),
    [sym_word] = ACTIONS(1191),
    [sym_comment] = ACTIONS(75),
  },
  [394] = {
    [sym_heredoc] = STATE(415),
    [sym__simple_heredoc] = ACTIONS(1193),
    [sym__heredoc_beginning] = ACTIONS(1195),
    [sym_comment] = ACTIONS(75),
  },
  [395] = {
    [sym_case_item] = STATE(270),
    [sym_quoted_argument] = STATE(268),
    [sym_expansion] = STATE(268),
    [sym_operator_expansion] = STATE(268),
    [sym_command_substitution] = STATE(268),
    [aux_sym_case_statement_repeat1] = STATE(418),
    [sym_file_descriptor] = ACTIONS(401),
    [ts_builtin_sym_end] = ACTIONS(401),
    [anon_sym_for] = ACTIONS(403),
    [anon_sym_in] = ACTIONS(1197),
    [anon_sym_while] = ACTIONS(403),
    [anon_sym_do] = ACTIONS(403),
    [anon_sym_done] = ACTIONS(403),
    [anon_sym_if] = ACTIONS(403),
    [anon_sym_then] = ACTIONS(403),
    [anon_sym_fi] = ACTIONS(403),
    [anon_sym_elif] = ACTIONS(403),
    [anon_sym_else] = ACTIONS(403),
    [anon_sym_case] = ACTIONS(403),
    [anon_sym_esac] = ACTIONS(1199),
    [anon_sym_RPAREN] = ACTIONS(401),
    [anon_sym_SEMI_SEMI] = ACTIONS(401),
    [anon_sym_function] = ACTIONS(403),
    [anon_sym_LPAREN] = ACTIONS(401),
    [anon_sym_RBRACE] = ACTIONS(401),
    [anon_sym_LBRACK] = ACTIONS(403),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(403),
    [anon_sym_COLON] = ACTIONS(403),
    [anon_sym_DQUOTE] = ACTIONS(1201),
    [sym_single_quoted_argument] = ACTIONS(1204),
    [anon_sym_DOLLAR] = ACTIONS(137),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(139),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1207),
    [anon_sym_LT] = ACTIONS(403),
    [anon_sym_GT] = ACTIONS(403),
    [anon_sym_GT_GT] = ACTIONS(403),
    [anon_sym_AMP_GT] = ACTIONS(403),
    [anon_sym_AMP_GT_GT] = ACTIONS(403),
    [anon_sym_LT_AMP] = ACTIONS(403),
    [anon_sym_GT_AMP] = ACTIONS(403),
    [sym_leading_word] = ACTIONS(405),
    [sym_word] = ACTIONS(683),
    [sym_comment] = ACTIONS(75),
  },
  [396] = {
    [sym_file_descriptor] = ACTIONS(533),
    [anon_sym_RPAREN] = ACTIONS(535),
    [anon_sym_SEMI_SEMI] = ACTIONS(535),
    [anon_sym_PIPE] = ACTIONS(535),
    [anon_sym_PIPE_AMP] = ACTIONS(535),
    [anon_sym_AMP_AMP] = ACTIONS(535),
    [anon_sym_PIPE_PIPE] = ACTIONS(535),
    [anon_sym_LT] = ACTIONS(535),
    [anon_sym_GT] = ACTIONS(535),
    [anon_sym_GT_GT] = ACTIONS(535),
    [anon_sym_AMP_GT] = ACTIONS(535),
    [anon_sym_AMP_GT_GT] = ACTIONS(535),
    [anon_sym_LT_AMP] = ACTIONS(535),
    [anon_sym_GT_AMP] = ACTIONS(535),
    [anon_sym_LT_LT] = ACTIONS(535),
    [anon_sym_LT_LT_DASH] = ACTIONS(535),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(535),
    [anon_sym_LF] = ACTIONS(535),
    [anon_sym_AMP] = ACTIONS(535),
  },
  [397] = {
    [sym_expansion] = STATE(211),
    [sym_operator_expansion] = STATE(211),
    [aux_sym_heredoc_repeat1] = STATE(423),
    [sym__heredoc_middle] = ACTIONS(537),
    [sym__heredoc_end] = ACTIONS(1210),
    [anon_sym_DOLLAR] = ACTIONS(541),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(543),
    [sym_comment] = ACTIONS(75),
  },
  [398] = {
    [sym__heredoc_middle] = ACTIONS(1212),
    [sym__heredoc_end] = ACTIONS(1212),
    [anon_sym_DOLLAR] = ACTIONS(1215),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1212),
    [sym_comment] = ACTIONS(75),
  },
  [399] = {
    [sym_file_descriptor] = ACTIONS(1218),
    [anon_sym_RPAREN] = ACTIONS(1221),
    [anon_sym_SEMI_SEMI] = ACTIONS(1221),
    [anon_sym_PIPE] = ACTIONS(1221),
    [anon_sym_PIPE_AMP] = ACTIONS(1221),
    [anon_sym_AMP_AMP] = ACTIONS(1221),
    [anon_sym_PIPE_PIPE] = ACTIONS(1221),
    [anon_sym_LT] = ACTIONS(1221),
    [anon_sym_GT] = ACTIONS(1221),
    [anon_sym_GT_GT] = ACTIONS(1221),
    [anon_sym_AMP_GT] = ACTIONS(1221),
    [anon_sym_AMP_GT_GT] = ACTIONS(1221),
    [anon_sym_LT_AMP] = ACTIONS(1221),
    [anon_sym_GT_AMP] = ACTIONS(1221),
    [anon_sym_LT_LT] = ACTIONS(1221),
    [anon_sym_LT_LT_DASH] = ACTIONS(1221),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(1221),
    [anon_sym_LF] = ACTIONS(1221),
    [anon_sym_AMP] = ACTIONS(1221),
  },
  [400] = {
    [anon_sym_LT] = ACTIONS(1224),
    [anon_sym_GT] = ACTIONS(1224),
    [anon_sym_GT_GT] = ACTIONS(1226),
    [anon_sym_AMP_GT] = ACTIONS(1224),
    [anon_sym_AMP_GT_GT] = ACTIONS(1226),
    [anon_sym_LT_AMP] = ACTIONS(1226),
    [anon_sym_GT_AMP] = ACTIONS(1226),
    [sym_comment] = ACTIONS(75),
  },
  [401] = {
    [sym_do_group] = STATE(403),
    [sym_file_descriptor] = ACTIONS(1228),
    [ts_builtin_sym_end] = ACTIONS(1228),
    [anon_sym_for] = ACTIONS(1231),
    [anon_sym_while] = ACTIONS(1231),
    [anon_sym_do] = ACTIONS(1234),
    [anon_sym_done] = ACTIONS(1231),
    [anon_sym_if] = ACTIONS(1231),
    [anon_sym_then] = ACTIONS(1236),
    [anon_sym_fi] = ACTIONS(1231),
    [anon_sym_elif] = ACTIONS(1231),
    [anon_sym_else] = ACTIONS(1231),
    [anon_sym_case] = ACTIONS(1231),
    [anon_sym_RPAREN] = ACTIONS(1228),
    [anon_sym_SEMI_SEMI] = ACTIONS(1228),
    [anon_sym_function] = ACTIONS(1231),
    [anon_sym_LPAREN] = ACTIONS(1228),
    [anon_sym_RBRACE] = ACTIONS(1228),
    [anon_sym_LBRACK] = ACTIONS(1231),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1231),
    [anon_sym_COLON] = ACTIONS(1228),
    [anon_sym_DQUOTE] = ACTIONS(1228),
    [sym_single_quoted_argument] = ACTIONS(1231),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1228),
    [anon_sym_LT] = ACTIONS(1231),
    [anon_sym_GT] = ACTIONS(1231),
    [anon_sym_GT_GT] = ACTIONS(1231),
    [anon_sym_AMP_GT] = ACTIONS(1231),
    [anon_sym_AMP_GT_GT] = ACTIONS(1231),
    [anon_sym_LT_AMP] = ACTIONS(1231),
    [anon_sym_GT_AMP] = ACTIONS(1231),
    [sym_leading_word] = ACTIONS(1238),
    [sym_comment] = ACTIONS(75),
  },
  [402] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1241),
    [anon_sym_PIPE] = ACTIONS(1245),
    [anon_sym_PIPE_AMP] = ACTIONS(1245),
    [anon_sym_AMP_AMP] = ACTIONS(1249),
    [anon_sym_PIPE_PIPE] = ACTIONS(1249),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(1241),
    [anon_sym_LF] = ACTIONS(1241),
    [anon_sym_AMP] = ACTIONS(1241),
  },
  [403] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1253),
    [anon_sym_PIPE] = ACTIONS(1253),
    [anon_sym_PIPE_AMP] = ACTIONS(1253),
    [anon_sym_AMP_AMP] = ACTIONS(1253),
    [anon_sym_PIPE_PIPE] = ACTIONS(1253),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(1253),
    [anon_sym_LF] = ACTIONS(1253),
    [anon_sym_AMP] = ACTIONS(1253),
  },
  [404] = {
    [anon_sym_fi] = ACTIONS(1256),
    [anon_sym_elif] = ACTIONS(1256),
    [anon_sym_else] = ACTIONS(1256),
    [sym_comment] = ACTIONS(75),
  },
  [405] = {
    [anon_sym_fi] = ACTIONS(1259),
    [sym_comment] = ACTIONS(75),
  },
  [406] = {
    [anon_sym_esac] = ACTIONS(1261),
    [anon_sym_DQUOTE] = ACTIONS(1264),
    [sym_single_quoted_argument] = ACTIONS(1261),
    [anon_sym_DOLLAR] = ACTIONS(1261),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1264),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1264),
    [sym_word] = ACTIONS(1267),
    [sym_comment] = ACTIONS(75),
  },
  [407] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1270),
    [anon_sym_PIPE] = ACTIONS(1270),
    [anon_sym_PIPE_AMP] = ACTIONS(1270),
    [anon_sym_AMP_AMP] = ACTIONS(1270),
    [anon_sym_PIPE_PIPE] = ACTIONS(1270),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(1270),
    [anon_sym_LF] = ACTIONS(1270),
    [anon_sym_AMP] = ACTIONS(1270),
  },
  [408] = {
    [anon_sym_RPAREN] = ACTIONS(1273),
    [anon_sym_SEMI_SEMI] = ACTIONS(1275),
    [anon_sym_PIPE] = ACTIONS(1279),
    [anon_sym_PIPE_AMP] = ACTIONS(1279),
    [anon_sym_AMP_AMP] = ACTIONS(1283),
    [anon_sym_PIPE_PIPE] = ACTIONS(1283),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(1275),
    [anon_sym_LF] = ACTIONS(1275),
    [anon_sym_AMP] = ACTIONS(1275),
  },
  [409] = {
    [sym_file_descriptor] = ACTIONS(1287),
    [anon_sym_SEMI_SEMI] = ACTIONS(1241),
    [anon_sym_COLON] = ACTIONS(1290),
    [anon_sym_PIPE] = ACTIONS(1245),
    [anon_sym_PIPE_AMP] = ACTIONS(1245),
    [anon_sym_AMP_AMP] = ACTIONS(1249),
    [anon_sym_PIPE_PIPE] = ACTIONS(1249),
    [anon_sym_DQUOTE] = ACTIONS(1290),
    [sym_single_quoted_argument] = ACTIONS(1290),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1290),
    [anon_sym_LT] = ACTIONS(1290),
    [anon_sym_GT] = ACTIONS(1290),
    [anon_sym_GT_GT] = ACTIONS(1290),
    [anon_sym_AMP_GT] = ACTIONS(1290),
    [anon_sym_AMP_GT_GT] = ACTIONS(1290),
    [anon_sym_LT_AMP] = ACTIONS(1290),
    [anon_sym_GT_AMP] = ACTIONS(1290),
    [sym_leading_word] = ACTIONS(1290),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(1241),
    [anon_sym_LF] = ACTIONS(1241),
    [anon_sym_AMP] = ACTIONS(1241),
  },
  [410] = {
    [sym_file_redirect] = STATE(434),
    [sym_heredoc_redirect] = STATE(434),
    [aux_sym_command_repeat2] = STATE(435),
    [sym_file_descriptor] = ACTIONS(1293),
    [anon_sym_in] = ACTIONS(239),
    [anon_sym_RPAREN] = ACTIONS(1300),
    [anon_sym_SEMI_SEMI] = ACTIONS(1308),
    [anon_sym_RBRACE] = ACTIONS(1317),
    [anon_sym_RBRACK] = ACTIONS(1319),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1319),
    [anon_sym_COLON] = ACTIONS(1322),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(1121),
    [anon_sym_PIPE] = ACTIONS(1326),
    [anon_sym_PIPE_AMP] = ACTIONS(1326),
    [anon_sym_AMP_AMP] = ACTIONS(1326),
    [anon_sym_PIPE_PIPE] = ACTIONS(1326),
    [anon_sym_DQUOTE] = ACTIONS(1334),
    [sym_single_quoted_argument] = ACTIONS(1334),
    [anon_sym_DOLLAR] = ACTIONS(1319),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1319),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1334),
    [anon_sym_LT] = ACTIONS(1340),
    [anon_sym_GT] = ACTIONS(1340),
    [anon_sym_GT_GT] = ACTIONS(1340),
    [anon_sym_AMP_GT] = ACTIONS(1340),
    [anon_sym_AMP_GT_GT] = ACTIONS(1340),
    [anon_sym_LT_AMP] = ACTIONS(1340),
    [anon_sym_GT_AMP] = ACTIONS(1340),
    [anon_sym_LT_LT] = ACTIONS(1347),
    [anon_sym_LT_LT_DASH] = ACTIONS(1347),
    [sym_leading_word] = ACTIONS(1322),
    [sym_word] = ACTIONS(1319),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(1308),
    [anon_sym_LF] = ACTIONS(1308),
    [anon_sym_AMP] = ACTIONS(1308),
  },
  [411] = {
    [sym__heredoc_middle] = ACTIONS(1212),
    [sym__heredoc_end] = ACTIONS(1212),
    [sym_file_descriptor] = ACTIONS(1353),
    [anon_sym_in] = ACTIONS(239),
    [anon_sym_RPAREN] = ACTIONS(1359),
    [anon_sym_SEMI_SEMI] = ACTIONS(1365),
    [anon_sym_RBRACE] = ACTIONS(1317),
    [anon_sym_RBRACK] = ACTIONS(1319),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1319),
    [anon_sym_COLON] = ACTIONS(1322),
    [anon_sym_PIPE] = ACTIONS(1334),
    [anon_sym_PIPE_AMP] = ACTIONS(1334),
    [anon_sym_AMP_AMP] = ACTIONS(1334),
    [anon_sym_PIPE_PIPE] = ACTIONS(1334),
    [anon_sym_DQUOTE] = ACTIONS(1372),
    [sym__quoted_chars] = ACTIONS(1380),
    [sym_single_quoted_argument] = ACTIONS(1334),
    [anon_sym_DOLLAR] = ACTIONS(1383),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1383),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1372),
    [anon_sym_LT] = ACTIONS(1334),
    [anon_sym_GT] = ACTIONS(1334),
    [anon_sym_GT_GT] = ACTIONS(1334),
    [anon_sym_AMP_GT] = ACTIONS(1334),
    [anon_sym_AMP_GT_GT] = ACTIONS(1334),
    [anon_sym_LT_AMP] = ACTIONS(1334),
    [anon_sym_GT_AMP] = ACTIONS(1334),
    [anon_sym_LT_LT] = ACTIONS(1390),
    [anon_sym_LT_LT_DASH] = ACTIONS(1390),
    [sym_leading_word] = ACTIONS(1322),
    [sym_word] = ACTIONS(1319),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(1365),
    [anon_sym_LF] = ACTIONS(1365),
    [anon_sym_AMP] = ACTIONS(1365),
  },
  [412] = {
    [sym_file_redirect] = STATE(434),
    [sym_heredoc_redirect] = STATE(434),
    [aux_sym_command_repeat2] = STATE(435),
    [sym_file_descriptor] = ACTIONS(1293),
    [anon_sym_in] = ACTIONS(239),
    [anon_sym_RPAREN] = ACTIONS(1300),
    [anon_sym_SEMI_SEMI] = ACTIONS(1308),
    [anon_sym_RBRACE] = ACTIONS(1317),
    [anon_sym_RBRACK] = ACTIONS(1319),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1319),
    [anon_sym_COLON] = ACTIONS(1322),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(1121),
    [anon_sym_PIPE] = ACTIONS(1326),
    [anon_sym_PIPE_AMP] = ACTIONS(1326),
    [anon_sym_AMP_AMP] = ACTIONS(1326),
    [anon_sym_PIPE_PIPE] = ACTIONS(1326),
    [anon_sym_DQUOTE] = ACTIONS(1372),
    [sym__quoted_chars] = ACTIONS(1380),
    [sym_single_quoted_argument] = ACTIONS(1334),
    [anon_sym_DOLLAR] = ACTIONS(1395),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1395),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1372),
    [anon_sym_LT] = ACTIONS(1340),
    [anon_sym_GT] = ACTIONS(1340),
    [anon_sym_GT_GT] = ACTIONS(1340),
    [anon_sym_AMP_GT] = ACTIONS(1340),
    [anon_sym_AMP_GT_GT] = ACTIONS(1340),
    [anon_sym_LT_AMP] = ACTIONS(1340),
    [anon_sym_GT_AMP] = ACTIONS(1340),
    [anon_sym_LT_LT] = ACTIONS(1347),
    [anon_sym_LT_LT_DASH] = ACTIONS(1347),
    [sym_leading_word] = ACTIONS(1322),
    [sym_word] = ACTIONS(1319),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(1308),
    [anon_sym_LF] = ACTIONS(1308),
    [anon_sym_AMP] = ACTIONS(1308),
  },
  [413] = {
    [sym_file_descriptor] = ACTIONS(1400),
    [anon_sym_RPAREN] = ACTIONS(1405),
    [anon_sym_SEMI_SEMI] = ACTIONS(1405),
    [anon_sym_COLON] = ACTIONS(1290),
    [anon_sym_PIPE] = ACTIONS(1405),
    [anon_sym_PIPE_AMP] = ACTIONS(1405),
    [anon_sym_AMP_AMP] = ACTIONS(1405),
    [anon_sym_PIPE_PIPE] = ACTIONS(1405),
    [anon_sym_DQUOTE] = ACTIONS(1290),
    [sym_single_quoted_argument] = ACTIONS(1290),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1290),
    [anon_sym_LT] = ACTIONS(1408),
    [anon_sym_GT] = ACTIONS(1408),
    [anon_sym_GT_GT] = ACTIONS(1408),
    [anon_sym_AMP_GT] = ACTIONS(1408),
    [anon_sym_AMP_GT_GT] = ACTIONS(1408),
    [anon_sym_LT_AMP] = ACTIONS(1408),
    [anon_sym_GT_AMP] = ACTIONS(1408),
    [anon_sym_LT_LT] = ACTIONS(1405),
    [anon_sym_LT_LT_DASH] = ACTIONS(1405),
    [sym_leading_word] = ACTIONS(1290),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(1405),
    [anon_sym_LF] = ACTIONS(1405),
    [anon_sym_AMP] = ACTIONS(1405),
  },
  [414] = {
    [sym_file_descriptor] = ACTIONS(1413),
    [anon_sym_RPAREN] = ACTIONS(1405),
    [anon_sym_SEMI_SEMI] = ACTIONS(1405),
    [anon_sym_PIPE] = ACTIONS(1405),
    [anon_sym_PIPE_AMP] = ACTIONS(1405),
    [anon_sym_AMP_AMP] = ACTIONS(1405),
    [anon_sym_PIPE_PIPE] = ACTIONS(1405),
    [anon_sym_LT] = ACTIONS(1405),
    [anon_sym_GT] = ACTIONS(1405),
    [anon_sym_GT_GT] = ACTIONS(1405),
    [anon_sym_AMP_GT] = ACTIONS(1405),
    [anon_sym_AMP_GT_GT] = ACTIONS(1405),
    [anon_sym_LT_AMP] = ACTIONS(1405),
    [anon_sym_GT_AMP] = ACTIONS(1405),
    [anon_sym_LT_LT] = ACTIONS(1405),
    [anon_sym_LT_LT_DASH] = ACTIONS(1405),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(1405),
    [anon_sym_LF] = ACTIONS(1405),
    [anon_sym_AMP] = ACTIONS(1405),
  },
  [415] = {
    [sym_file_descriptor] = ACTIONS(545),
    [anon_sym_RPAREN] = ACTIONS(547),
    [anon_sym_SEMI_SEMI] = ACTIONS(547),
    [anon_sym_PIPE] = ACTIONS(547),
    [anon_sym_PIPE_AMP] = ACTIONS(547),
    [anon_sym_AMP_AMP] = ACTIONS(547),
    [anon_sym_PIPE_PIPE] = ACTIONS(547),
    [anon_sym_LT] = ACTIONS(547),
    [anon_sym_GT] = ACTIONS(547),
    [anon_sym_GT_GT] = ACTIONS(547),
    [anon_sym_AMP_GT] = ACTIONS(547),
    [anon_sym_AMP_GT_GT] = ACTIONS(547),
    [anon_sym_LT_AMP] = ACTIONS(547),
    [anon_sym_GT_AMP] = ACTIONS(547),
    [anon_sym_LT_LT] = ACTIONS(547),
    [anon_sym_LT_LT_DASH] = ACTIONS(547),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(547),
    [anon_sym_LF] = ACTIONS(547),
    [anon_sym_AMP] = ACTIONS(547),
  },
  [416] = {
    [sym__terminated_statement] = STATE(77),
    [sym_for_statement] = STATE(18),
    [sym_while_statement] = STATE(18),
    [sym_if_statement] = STATE(18),
    [sym_elif_clause] = STATE(177),
    [sym_else_clause] = STATE(264),
    [sym_case_statement] = STATE(18),
    [sym_function_definition] = STATE(18),
    [sym_bracket_command] = STATE(18),
    [sym_command] = STATE(18),
    [sym_pipeline] = STATE(18),
    [sym_list] = STATE(18),
    [sym_subshell] = STATE(18),
    [sym_environment_variable_assignment] = STATE(19),
    [sym_quoted_argument] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(20),
    [aux_sym_if_statement_repeat1] = STATE(265),
    [aux_sym_command_repeat1] = STATE(22),
    [sym_file_descriptor] = ACTIONS(79),
    [ts_builtin_sym_end] = ACTIONS(217),
    [anon_sym_for] = ACTIONS(83),
    [anon_sym_while] = ACTIONS(85),
    [anon_sym_done] = ACTIONS(663),
    [anon_sym_if] = ACTIONS(87),
    [anon_sym_fi] = ACTIONS(1416),
    [anon_sym_elif] = ACTIONS(1420),
    [anon_sym_else] = ACTIONS(1423),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(257),
    [anon_sym_SEMI_SEMI] = ACTIONS(1426),
    [anon_sym_function] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_RBRACE] = ACTIONS(903),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(97),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_single_quoted_argument] = ACTIONS(103),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(109),
    [sym_comment] = ACTIONS(75),
  },
  [417] = {
    [sym_elif_clause] = STATE(266),
    [sym_else_clause] = STATE(460),
    [anon_sym_fi] = ACTIONS(1428),
    [anon_sym_elif] = ACTIONS(675),
    [anon_sym_else] = ACTIONS(677),
    [sym_comment] = ACTIONS(75),
  },
  [418] = {
    [sym_case_item] = STATE(329),
    [sym_quoted_argument] = STATE(268),
    [sym_expansion] = STATE(268),
    [sym_operator_expansion] = STATE(268),
    [sym_command_substitution] = STATE(268),
    [anon_sym_esac] = ACTIONS(1430),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [sym_single_quoted_argument] = ACTIONS(681),
    [anon_sym_DOLLAR] = ACTIONS(137),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(139),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(141),
    [sym_word] = ACTIONS(683),
    [sym_comment] = ACTIONS(75),
  },
  [419] = {
    [sym_quoted_argument] = STATE(463),
    [sym_expansion] = STATE(463),
    [sym_operator_expansion] = STATE(463),
    [sym_command_substitution] = STATE(463),
    [sym_file_redirect] = STATE(434),
    [sym_heredoc_redirect] = STATE(434),
    [aux_sym_command_repeat2] = STATE(468),
    [sym_file_descriptor] = ACTIONS(1116),
    [anon_sym_RPAREN] = ACTIONS(1432),
    [anon_sym_SEMI_SEMI] = ACTIONS(1432),
    [anon_sym_RBRACK] = ACTIONS(1437),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1437),
    [anon_sym_PIPE] = ACTIONS(1432),
    [anon_sym_PIPE_AMP] = ACTIONS(1432),
    [anon_sym_AMP_AMP] = ACTIONS(1432),
    [anon_sym_PIPE_PIPE] = ACTIONS(1432),
    [anon_sym_DQUOTE] = ACTIONS(1439),
    [sym_single_quoted_argument] = ACTIONS(1441),
    [anon_sym_DOLLAR] = ACTIONS(1443),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1445),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1447),
    [anon_sym_LT] = ACTIONS(1133),
    [anon_sym_GT] = ACTIONS(1133),
    [anon_sym_GT_GT] = ACTIONS(1133),
    [anon_sym_AMP_GT] = ACTIONS(1133),
    [anon_sym_AMP_GT_GT] = ACTIONS(1133),
    [anon_sym_LT_AMP] = ACTIONS(1133),
    [anon_sym_GT_AMP] = ACTIONS(1133),
    [anon_sym_LT_LT] = ACTIONS(1135),
    [anon_sym_LT_LT_DASH] = ACTIONS(1135),
    [sym_word] = ACTIONS(1449),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(1432),
    [anon_sym_LF] = ACTIONS(1432),
    [anon_sym_AMP] = ACTIONS(1432),
  },
  [420] = {
    [sym_environment_variable_assignment] = STATE(80),
    [sym_quoted_argument] = STATE(469),
    [sym_command_substitution] = STATE(469),
    [sym_file_redirect] = STATE(80),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(1451),
    [anon_sym_DQUOTE] = ACTIONS(1453),
    [sym_single_quoted_argument] = ACTIONS(1455),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1457),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(1459),
    [sym_comment] = ACTIONS(75),
  },
  [421] = {
    [sym_file_redirect] = STATE(473),
    [sym_heredoc_redirect] = STATE(473),
    [sym_file_descriptor] = ACTIONS(1116),
    [anon_sym_RPAREN] = ACTIONS(1461),
    [anon_sym_SEMI_SEMI] = ACTIONS(1461),
    [anon_sym_PIPE] = ACTIONS(1461),
    [anon_sym_PIPE_AMP] = ACTIONS(1461),
    [anon_sym_AMP_AMP] = ACTIONS(1461),
    [anon_sym_PIPE_PIPE] = ACTIONS(1461),
    [anon_sym_LT] = ACTIONS(1133),
    [anon_sym_GT] = ACTIONS(1133),
    [anon_sym_GT_GT] = ACTIONS(1133),
    [anon_sym_AMP_GT] = ACTIONS(1133),
    [anon_sym_AMP_GT_GT] = ACTIONS(1133),
    [anon_sym_LT_AMP] = ACTIONS(1133),
    [anon_sym_GT_AMP] = ACTIONS(1133),
    [anon_sym_LT_LT] = ACTIONS(1135),
    [anon_sym_LT_LT_DASH] = ACTIONS(1135),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(1461),
    [anon_sym_LF] = ACTIONS(1461),
    [anon_sym_AMP] = ACTIONS(1461),
  },
  [422] = {
    [sym_expansion] = STATE(133),
    [sym_operator_expansion] = STATE(133),
    [sym_command_substitution] = STATE(133),
    [anon_sym_DQUOTE] = ACTIONS(1472),
    [sym__quoted_chars] = ACTIONS(339),
    [anon_sym_DOLLAR] = ACTIONS(161),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(163),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(165),
    [sym_comment] = ACTIONS(155),
  },
  [423] = {
    [sym_expansion] = STATE(292),
    [sym_operator_expansion] = STATE(292),
    [sym__heredoc_middle] = ACTIONS(745),
    [sym__heredoc_end] = ACTIONS(1474),
    [anon_sym_DOLLAR] = ACTIONS(541),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(543),
    [sym_comment] = ACTIONS(75),
  },
  [424] = {
    [sym_case_item] = STATE(270),
    [sym_quoted_argument] = STATE(268),
    [sym_expansion] = STATE(268),
    [sym_operator_expansion] = STATE(268),
    [sym_command_substitution] = STATE(268),
    [aux_sym_case_statement_repeat1] = STATE(418),
    [anon_sym_esac] = ACTIONS(1199),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [sym_single_quoted_argument] = ACTIONS(681),
    [anon_sym_DOLLAR] = ACTIONS(137),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(139),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(141),
    [sym_word] = ACTIONS(683),
    [sym_comment] = ACTIONS(75),
  },
  [425] = {
    [sym__terminated_statement] = STATE(77),
    [sym_for_statement] = STATE(18),
    [sym_while_statement] = STATE(18),
    [sym_if_statement] = STATE(18),
    [sym_elif_clause] = STATE(177),
    [sym_else_clause] = STATE(264),
    [sym_case_statement] = STATE(18),
    [sym_function_definition] = STATE(18),
    [sym_bracket_command] = STATE(18),
    [sym_command] = STATE(18),
    [sym_pipeline] = STATE(18),
    [sym_list] = STATE(18),
    [sym_subshell] = STATE(18),
    [sym_environment_variable_assignment] = STATE(19),
    [sym_quoted_argument] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(20),
    [aux_sym_if_statement_repeat1] = STATE(265),
    [aux_sym_command_repeat1] = STATE(22),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_for] = ACTIONS(83),
    [anon_sym_while] = ACTIONS(85),
    [anon_sym_if] = ACTIONS(87),
    [anon_sym_fi] = ACTIONS(1476),
    [anon_sym_elif] = ACTIONS(1420),
    [anon_sym_else] = ACTIONS(1423),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_function] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(97),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_single_quoted_argument] = ACTIONS(103),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(109),
    [sym_comment] = ACTIONS(75),
  },
  [426] = {
    [anon_sym_esac] = ACTIONS(1479),
    [anon_sym_DQUOTE] = ACTIONS(1482),
    [sym_single_quoted_argument] = ACTIONS(1479),
    [anon_sym_DOLLAR] = ACTIONS(1479),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1482),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1482),
    [sym_word] = ACTIONS(1485),
    [sym_comment] = ACTIONS(75),
  },
  [427] = {
    [sym__terminated_statement] = STATE(77),
    [sym_for_statement] = STATE(18),
    [sym_while_statement] = STATE(18),
    [sym_if_statement] = STATE(18),
    [sym_case_statement] = STATE(18),
    [sym_function_definition] = STATE(18),
    [sym_bracket_command] = STATE(18),
    [sym_command] = STATE(18),
    [sym_pipeline] = STATE(18),
    [sym_list] = STATE(18),
    [sym_subshell] = STATE(18),
    [sym_environment_variable_assignment] = STATE(19),
    [sym_quoted_argument] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(20),
    [aux_sym_command_repeat1] = STATE(22),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_for] = ACTIONS(83),
    [anon_sym_while] = ACTIONS(85),
    [anon_sym_if] = ACTIONS(87),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_SEMI_SEMI] = ACTIONS(1426),
    [anon_sym_function] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(97),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_single_quoted_argument] = ACTIONS(103),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(109),
    [sym_comment] = ACTIONS(75),
  },
  [428] = {
    [sym_compound_command] = STATE(407),
    [anon_sym_SEMI_SEMI] = ACTIONS(255),
    [anon_sym_LBRACE] = ACTIONS(1079),
    [anon_sym_PIPE] = ACTIONS(255),
    [anon_sym_PIPE_AMP] = ACTIONS(255),
    [anon_sym_AMP_AMP] = ACTIONS(255),
    [anon_sym_PIPE_PIPE] = ACTIONS(255),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(255),
    [anon_sym_LF] = ACTIONS(255),
    [anon_sym_AMP] = ACTIONS(255),
  },
  [429] = {
    [anon_sym_LT] = ACTIONS(1488),
    [anon_sym_GT] = ACTIONS(1488),
    [anon_sym_GT_GT] = ACTIONS(1490),
    [anon_sym_AMP_GT] = ACTIONS(1488),
    [anon_sym_AMP_GT_GT] = ACTIONS(1490),
    [anon_sym_LT_AMP] = ACTIONS(1490),
    [anon_sym_GT_AMP] = ACTIONS(1490),
    [sym_comment] = ACTIONS(75),
  },
  [430] = {
    [sym_quoted_argument] = STATE(478),
    [sym_expansion] = STATE(478),
    [sym_operator_expansion] = STATE(478),
    [sym_command_substitution] = STATE(478),
    [sym_file_redirect] = STATE(434),
    [sym_heredoc_redirect] = STATE(434),
    [aux_sym_bracket_command_repeat1] = STATE(483),
    [aux_sym_command_repeat2] = STATE(484),
    [sym_file_descriptor] = ACTIONS(1116),
    [anon_sym_RPAREN] = ACTIONS(1492),
    [anon_sym_SEMI_SEMI] = ACTIONS(1492),
    [anon_sym_PIPE] = ACTIONS(1492),
    [anon_sym_PIPE_AMP] = ACTIONS(1492),
    [anon_sym_AMP_AMP] = ACTIONS(1492),
    [anon_sym_PIPE_PIPE] = ACTIONS(1492),
    [anon_sym_DQUOTE] = ACTIONS(1495),
    [sym_single_quoted_argument] = ACTIONS(1497),
    [anon_sym_DOLLAR] = ACTIONS(1499),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1501),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1503),
    [anon_sym_LT] = ACTIONS(1133),
    [anon_sym_GT] = ACTIONS(1133),
    [anon_sym_GT_GT] = ACTIONS(1133),
    [anon_sym_AMP_GT] = ACTIONS(1133),
    [anon_sym_AMP_GT_GT] = ACTIONS(1133),
    [anon_sym_LT_AMP] = ACTIONS(1133),
    [anon_sym_GT_AMP] = ACTIONS(1133),
    [anon_sym_LT_LT] = ACTIONS(1135),
    [anon_sym_LT_LT_DASH] = ACTIONS(1135),
    [sym_word] = ACTIONS(1505),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(1492),
    [anon_sym_LF] = ACTIONS(1492),
    [anon_sym_AMP] = ACTIONS(1492),
  },
  [431] = {
    [anon_sym_RBRACE] = ACTIONS(1507),
    [sym_comment] = ACTIONS(75),
  },
  [432] = {
    [sym_quoted_argument] = STATE(486),
    [sym_expansion] = STATE(486),
    [sym_operator_expansion] = STATE(486),
    [sym_command_substitution] = STATE(486),
    [anon_sym_DQUOTE] = ACTIONS(1509),
    [sym_single_quoted_argument] = ACTIONS(1511),
    [anon_sym_DOLLAR] = ACTIONS(1513),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1515),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1517),
    [sym_word] = ACTIONS(1519),
    [sym_comment] = ACTIONS(75),
  },
  [433] = {
    [anon_sym_RBRACE] = ACTIONS(1521),
    [sym_comment] = ACTIONS(75),
  },
  [434] = {
    [sym_file_descriptor] = ACTIONS(319),
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
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(321),
    [anon_sym_LF] = ACTIONS(321),
    [anon_sym_AMP] = ACTIONS(321),
  },
  [435] = {
    [sym_file_redirect] = STATE(473),
    [sym_heredoc_redirect] = STATE(473),
    [sym_file_descriptor] = ACTIONS(1116),
    [anon_sym_RPAREN] = ACTIONS(1492),
    [anon_sym_SEMI_SEMI] = ACTIONS(1492),
    [anon_sym_PIPE] = ACTIONS(1492),
    [anon_sym_PIPE_AMP] = ACTIONS(1492),
    [anon_sym_AMP_AMP] = ACTIONS(1492),
    [anon_sym_PIPE_PIPE] = ACTIONS(1492),
    [anon_sym_LT] = ACTIONS(1133),
    [anon_sym_GT] = ACTIONS(1133),
    [anon_sym_GT_GT] = ACTIONS(1133),
    [anon_sym_AMP_GT] = ACTIONS(1133),
    [anon_sym_AMP_GT_GT] = ACTIONS(1133),
    [anon_sym_LT_AMP] = ACTIONS(1133),
    [anon_sym_GT_AMP] = ACTIONS(1133),
    [anon_sym_LT_LT] = ACTIONS(1135),
    [anon_sym_LT_LT_DASH] = ACTIONS(1135),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(1492),
    [anon_sym_LF] = ACTIONS(1492),
    [anon_sym_AMP] = ACTIONS(1492),
  },
  [436] = {
    [sym_expansion] = STATE(53),
    [sym_operator_expansion] = STATE(53),
    [sym_command_substitution] = STATE(53),
    [aux_sym_quoted_argument_repeat1] = STATE(493),
    [anon_sym_DQUOTE] = ACTIONS(1523),
    [sym__quoted_chars] = ACTIONS(159),
    [anon_sym_DOLLAR] = ACTIONS(161),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(163),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(165),
    [sym_comment] = ACTIONS(155),
  },
  [437] = {
    [sym_file_descriptor] = ACTIONS(639),
    [anon_sym_SEMI_SEMI] = ACTIONS(641),
    [anon_sym_RBRACE] = ACTIONS(1317),
    [anon_sym_COLON] = ACTIONS(641),
    [anon_sym_PIPE] = ACTIONS(641),
    [anon_sym_PIPE_AMP] = ACTIONS(641),
    [anon_sym_AMP_AMP] = ACTIONS(641),
    [anon_sym_PIPE_PIPE] = ACTIONS(641),
    [anon_sym_DQUOTE] = ACTIONS(641),
    [sym_single_quoted_argument] = ACTIONS(641),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(641),
    [anon_sym_LT] = ACTIONS(641),
    [anon_sym_GT] = ACTIONS(641),
    [anon_sym_GT_GT] = ACTIONS(641),
    [anon_sym_AMP_GT] = ACTIONS(641),
    [anon_sym_AMP_GT_GT] = ACTIONS(641),
    [anon_sym_LT_AMP] = ACTIONS(641),
    [anon_sym_GT_AMP] = ACTIONS(641),
    [sym_leading_word] = ACTIONS(641),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(641),
    [anon_sym_LF] = ACTIONS(641),
    [anon_sym_AMP] = ACTIONS(641),
  },
  [438] = {
    [anon_sym_DOLLAR] = ACTIONS(1525),
    [sym_word] = ACTIONS(1527),
    [sym_comment] = ACTIONS(75),
  },
  [439] = {
    [sym_leading_word] = ACTIONS(1529),
    [sym_comment] = ACTIONS(75),
  },
  [440] = {
    [sym_command] = STATE(497),
    [sym_environment_variable_assignment] = STATE(20),
    [sym_quoted_argument] = STATE(58),
    [sym_command_substitution] = STATE(58),
    [sym_file_redirect] = STATE(20),
    [aux_sym_command_repeat1] = STATE(63),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [sym_single_quoted_argument] = ACTIONS(171),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(173),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(175),
    [sym_comment] = ACTIONS(75),
  },
  [441] = {
    [sym_file_descriptor] = ACTIONS(651),
    [anon_sym_SEMI_SEMI] = ACTIONS(653),
    [anon_sym_RBRACE] = ACTIONS(1531),
    [anon_sym_COLON] = ACTIONS(653),
    [anon_sym_PIPE] = ACTIONS(653),
    [anon_sym_PIPE_AMP] = ACTIONS(653),
    [anon_sym_AMP_AMP] = ACTIONS(653),
    [anon_sym_PIPE_PIPE] = ACTIONS(653),
    [anon_sym_DQUOTE] = ACTIONS(653),
    [sym_single_quoted_argument] = ACTIONS(653),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(653),
    [anon_sym_LT] = ACTIONS(653),
    [anon_sym_GT] = ACTIONS(653),
    [anon_sym_GT_GT] = ACTIONS(653),
    [anon_sym_AMP_GT] = ACTIONS(653),
    [anon_sym_AMP_GT_GT] = ACTIONS(653),
    [anon_sym_LT_AMP] = ACTIONS(653),
    [anon_sym_GT_AMP] = ACTIONS(653),
    [sym_leading_word] = ACTIONS(653),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(653),
    [anon_sym_LF] = ACTIONS(653),
    [anon_sym_AMP] = ACTIONS(653),
  },
  [442] = {
    [sym_file_descriptor] = ACTIONS(323),
    [anon_sym_in] = ACTIONS(325),
    [anon_sym_RPAREN] = ACTIONS(325),
    [anon_sym_SEMI_SEMI] = ACTIONS(325),
    [anon_sym_RBRACE] = ACTIONS(325),
    [anon_sym_RBRACK] = ACTIONS(325),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(325),
    [anon_sym_COLON] = ACTIONS(325),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(325),
    [anon_sym_PIPE] = ACTIONS(325),
    [anon_sym_PIPE_AMP] = ACTIONS(325),
    [anon_sym_AMP_AMP] = ACTIONS(325),
    [anon_sym_PIPE_PIPE] = ACTIONS(325),
    [anon_sym_DQUOTE] = ACTIONS(325),
    [sym_single_quoted_argument] = ACTIONS(325),
    [anon_sym_DOLLAR] = ACTIONS(325),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(325),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(325),
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
    [sym_word] = ACTIONS(325),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(325),
    [anon_sym_LF] = ACTIONS(325),
    [anon_sym_AMP] = ACTIONS(325),
  },
  [443] = {
    [sym__heredoc_middle] = ACTIONS(477),
    [sym__heredoc_end] = ACTIONS(477),
    [sym_file_descriptor] = ACTIONS(477),
    [anon_sym_in] = ACTIONS(453),
    [anon_sym_RPAREN] = ACTIONS(453),
    [anon_sym_SEMI_SEMI] = ACTIONS(453),
    [anon_sym_RBRACE] = ACTIONS(453),
    [anon_sym_RBRACK] = ACTIONS(453),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(453),
    [anon_sym_COLON] = ACTIONS(453),
    [anon_sym_PIPE] = ACTIONS(453),
    [anon_sym_PIPE_AMP] = ACTIONS(453),
    [anon_sym_AMP_AMP] = ACTIONS(453),
    [anon_sym_PIPE_PIPE] = ACTIONS(453),
    [anon_sym_DQUOTE] = ACTIONS(453),
    [sym__quoted_chars] = ACTIONS(453),
    [sym_single_quoted_argument] = ACTIONS(453),
    [anon_sym_DOLLAR] = ACTIONS(453),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(453),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(453),
    [anon_sym_LT] = ACTIONS(453),
    [anon_sym_GT] = ACTIONS(453),
    [anon_sym_GT_GT] = ACTIONS(453),
    [anon_sym_AMP_GT] = ACTIONS(453),
    [anon_sym_AMP_GT_GT] = ACTIONS(453),
    [anon_sym_LT_AMP] = ACTIONS(453),
    [anon_sym_GT_AMP] = ACTIONS(453),
    [anon_sym_LT_LT] = ACTIONS(453),
    [anon_sym_LT_LT_DASH] = ACTIONS(453),
    [sym_leading_word] = ACTIONS(453),
    [sym_word] = ACTIONS(453),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(453),
    [anon_sym_LF] = ACTIONS(453),
    [anon_sym_AMP] = ACTIONS(453),
  },
  [444] = {
    [sym__heredoc_middle] = ACTIONS(481),
    [sym__heredoc_end] = ACTIONS(481),
    [sym_file_descriptor] = ACTIONS(481),
    [anon_sym_in] = ACTIONS(455),
    [anon_sym_RPAREN] = ACTIONS(455),
    [anon_sym_SEMI_SEMI] = ACTIONS(455),
    [anon_sym_RBRACE] = ACTIONS(455),
    [anon_sym_RBRACK] = ACTIONS(455),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(455),
    [anon_sym_COLON] = ACTIONS(455),
    [anon_sym_PIPE] = ACTIONS(455),
    [anon_sym_PIPE_AMP] = ACTIONS(455),
    [anon_sym_AMP_AMP] = ACTIONS(455),
    [anon_sym_PIPE_PIPE] = ACTIONS(455),
    [anon_sym_DQUOTE] = ACTIONS(455),
    [sym__quoted_chars] = ACTIONS(455),
    [sym_single_quoted_argument] = ACTIONS(455),
    [anon_sym_DOLLAR] = ACTIONS(455),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(455),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(455),
    [anon_sym_LT] = ACTIONS(455),
    [anon_sym_GT] = ACTIONS(455),
    [anon_sym_GT_GT] = ACTIONS(455),
    [anon_sym_AMP_GT] = ACTIONS(455),
    [anon_sym_AMP_GT_GT] = ACTIONS(455),
    [anon_sym_LT_AMP] = ACTIONS(455),
    [anon_sym_GT_AMP] = ACTIONS(455),
    [anon_sym_LT_LT] = ACTIONS(455),
    [anon_sym_LT_LT_DASH] = ACTIONS(455),
    [sym_leading_word] = ACTIONS(455),
    [sym_word] = ACTIONS(455),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(455),
    [anon_sym_LF] = ACTIONS(455),
    [anon_sym_AMP] = ACTIONS(455),
  },
  [445] = {
    [sym_expansion] = STATE(53),
    [sym_operator_expansion] = STATE(53),
    [sym_command_substitution] = STATE(53),
    [aux_sym_quoted_argument_repeat1] = STATE(499),
    [anon_sym_DQUOTE] = ACTIONS(1533),
    [sym__quoted_chars] = ACTIONS(159),
    [anon_sym_DOLLAR] = ACTIONS(161),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(163),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(165),
    [sym_comment] = ACTIONS(155),
  },
  [446] = {
    [sym_file_descriptor] = ACTIONS(1535),
    [anon_sym_RPAREN] = ACTIONS(1538),
    [anon_sym_SEMI_SEMI] = ACTIONS(1538),
    [anon_sym_COLON] = ACTIONS(1538),
    [anon_sym_PIPE] = ACTIONS(1538),
    [anon_sym_PIPE_AMP] = ACTIONS(1538),
    [anon_sym_AMP_AMP] = ACTIONS(1538),
    [anon_sym_PIPE_PIPE] = ACTIONS(1538),
    [anon_sym_DQUOTE] = ACTIONS(1538),
    [sym_single_quoted_argument] = ACTIONS(1538),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1538),
    [anon_sym_LT] = ACTIONS(1538),
    [anon_sym_GT] = ACTIONS(1538),
    [anon_sym_GT_GT] = ACTIONS(1538),
    [anon_sym_AMP_GT] = ACTIONS(1538),
    [anon_sym_AMP_GT_GT] = ACTIONS(1538),
    [anon_sym_LT_AMP] = ACTIONS(1538),
    [anon_sym_GT_AMP] = ACTIONS(1538),
    [anon_sym_LT_LT] = ACTIONS(1538),
    [anon_sym_LT_LT_DASH] = ACTIONS(1538),
    [sym_leading_word] = ACTIONS(1538),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(1538),
    [anon_sym_LF] = ACTIONS(1538),
    [anon_sym_AMP] = ACTIONS(1538),
  },
  [447] = {
    [anon_sym_DOLLAR] = ACTIONS(1541),
    [sym_word] = ACTIONS(1543),
    [sym_comment] = ACTIONS(75),
  },
  [448] = {
    [sym_leading_word] = ACTIONS(1545),
    [sym_comment] = ACTIONS(75),
  },
  [449] = {
    [sym_command] = STATE(503),
    [sym_environment_variable_assignment] = STATE(20),
    [sym_quoted_argument] = STATE(58),
    [sym_command_substitution] = STATE(58),
    [sym_file_redirect] = STATE(20),
    [aux_sym_command_repeat1] = STATE(63),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [sym_single_quoted_argument] = ACTIONS(171),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(173),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(175),
    [sym_comment] = ACTIONS(75),
  },
  [450] = {
    [sym_file_descriptor] = ACTIONS(1547),
    [anon_sym_RPAREN] = ACTIONS(1550),
    [anon_sym_SEMI_SEMI] = ACTIONS(1550),
    [anon_sym_COLON] = ACTIONS(1550),
    [anon_sym_PIPE] = ACTIONS(1550),
    [anon_sym_PIPE_AMP] = ACTIONS(1550),
    [anon_sym_AMP_AMP] = ACTIONS(1550),
    [anon_sym_PIPE_PIPE] = ACTIONS(1550),
    [anon_sym_DQUOTE] = ACTIONS(1550),
    [sym_single_quoted_argument] = ACTIONS(1550),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1550),
    [anon_sym_LT] = ACTIONS(1550),
    [anon_sym_GT] = ACTIONS(1550),
    [anon_sym_GT_GT] = ACTIONS(1550),
    [anon_sym_AMP_GT] = ACTIONS(1550),
    [anon_sym_AMP_GT_GT] = ACTIONS(1550),
    [anon_sym_LT_AMP] = ACTIONS(1550),
    [anon_sym_GT_AMP] = ACTIONS(1550),
    [anon_sym_LT_LT] = ACTIONS(1550),
    [anon_sym_LT_LT_DASH] = ACTIONS(1550),
    [sym_leading_word] = ACTIONS(1550),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(1550),
    [anon_sym_LF] = ACTIONS(1550),
    [anon_sym_AMP] = ACTIONS(1550),
  },
  [451] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1553),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(1553),
    [anon_sym_LF] = ACTIONS(1553),
    [anon_sym_AMP] = ACTIONS(1553),
  },
  [452] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1555),
    [anon_sym_PIPE] = ACTIONS(1555),
    [anon_sym_PIPE_AMP] = ACTIONS(1555),
    [anon_sym_AMP_AMP] = ACTIONS(1555),
    [anon_sym_PIPE_PIPE] = ACTIONS(1555),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(1555),
    [anon_sym_LF] = ACTIONS(1555),
    [anon_sym_AMP] = ACTIONS(1555),
  },
  [453] = {
    [sym_file_descriptor] = ACTIONS(735),
    [anon_sym_RPAREN] = ACTIONS(737),
    [anon_sym_SEMI_SEMI] = ACTIONS(737),
    [anon_sym_PIPE] = ACTIONS(737),
    [anon_sym_PIPE_AMP] = ACTIONS(737),
    [anon_sym_AMP_AMP] = ACTIONS(737),
    [anon_sym_PIPE_PIPE] = ACTIONS(737),
    [anon_sym_LT] = ACTIONS(737),
    [anon_sym_GT] = ACTIONS(737),
    [anon_sym_GT_GT] = ACTIONS(737),
    [anon_sym_AMP_GT] = ACTIONS(737),
    [anon_sym_AMP_GT_GT] = ACTIONS(737),
    [anon_sym_LT_AMP] = ACTIONS(737),
    [anon_sym_GT_AMP] = ACTIONS(737),
    [anon_sym_LT_LT] = ACTIONS(737),
    [anon_sym_LT_LT_DASH] = ACTIONS(737),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(737),
    [anon_sym_LF] = ACTIONS(737),
    [anon_sym_AMP] = ACTIONS(737),
  },
  [454] = {
    [sym_quoted_argument] = STATE(505),
    [sym_expansion] = STATE(505),
    [sym_operator_expansion] = STATE(505),
    [sym_command_substitution] = STATE(505),
    [anon_sym_DQUOTE] = ACTIONS(1181),
    [sym_single_quoted_argument] = ACTIONS(1560),
    [anon_sym_DOLLAR] = ACTIONS(1185),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1187),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1189),
    [sym_word] = ACTIONS(1562),
    [sym_comment] = ACTIONS(75),
  },
  [455] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1564),
    [anon_sym_PIPE] = ACTIONS(1564),
    [anon_sym_PIPE_AMP] = ACTIONS(1564),
    [anon_sym_AMP_AMP] = ACTIONS(1564),
    [anon_sym_PIPE_PIPE] = ACTIONS(1564),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(1564),
    [anon_sym_LF] = ACTIONS(1564),
    [anon_sym_AMP] = ACTIONS(1564),
  },
  [456] = {
    [sym_file_descriptor] = ACTIONS(617),
    [anon_sym_in] = ACTIONS(619),
    [anon_sym_RPAREN] = ACTIONS(619),
    [anon_sym_SEMI_SEMI] = ACTIONS(619),
    [anon_sym_RBRACE] = ACTIONS(619),
    [anon_sym_RBRACK] = ACTIONS(619),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(619),
    [anon_sym_COLON] = ACTIONS(619),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(619),
    [anon_sym_PIPE] = ACTIONS(619),
    [anon_sym_PIPE_AMP] = ACTIONS(619),
    [anon_sym_AMP_AMP] = ACTIONS(619),
    [anon_sym_PIPE_PIPE] = ACTIONS(619),
    [anon_sym_DQUOTE] = ACTIONS(619),
    [sym__quoted_chars] = ACTIONS(619),
    [sym_single_quoted_argument] = ACTIONS(619),
    [anon_sym_DOLLAR] = ACTIONS(619),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(619),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(619),
    [anon_sym_GT] = ACTIONS(619),
    [anon_sym_GT_GT] = ACTIONS(619),
    [anon_sym_AMP_GT] = ACTIONS(619),
    [anon_sym_AMP_GT_GT] = ACTIONS(619),
    [anon_sym_LT_AMP] = ACTIONS(619),
    [anon_sym_GT_AMP] = ACTIONS(619),
    [anon_sym_LT_LT] = ACTIONS(619),
    [anon_sym_LT_LT_DASH] = ACTIONS(619),
    [sym_leading_word] = ACTIONS(619),
    [sym_word] = ACTIONS(619),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(619),
    [anon_sym_LF] = ACTIONS(619),
    [anon_sym_AMP] = ACTIONS(619),
  },
  [457] = {
    [sym__heredoc_middle] = ACTIONS(941),
    [sym__heredoc_end] = ACTIONS(941),
    [sym_file_descriptor] = ACTIONS(941),
    [anon_sym_in] = ACTIONS(933),
    [anon_sym_RPAREN] = ACTIONS(933),
    [anon_sym_SEMI_SEMI] = ACTIONS(933),
    [anon_sym_RBRACE] = ACTIONS(933),
    [anon_sym_RBRACK] = ACTIONS(933),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(933),
    [anon_sym_COLON] = ACTIONS(933),
    [anon_sym_PIPE] = ACTIONS(933),
    [anon_sym_PIPE_AMP] = ACTIONS(933),
    [anon_sym_AMP_AMP] = ACTIONS(933),
    [anon_sym_PIPE_PIPE] = ACTIONS(933),
    [anon_sym_DQUOTE] = ACTIONS(933),
    [sym__quoted_chars] = ACTIONS(933),
    [sym_single_quoted_argument] = ACTIONS(933),
    [anon_sym_DOLLAR] = ACTIONS(933),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(933),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(933),
    [anon_sym_LT] = ACTIONS(933),
    [anon_sym_GT] = ACTIONS(933),
    [anon_sym_GT_GT] = ACTIONS(933),
    [anon_sym_AMP_GT] = ACTIONS(933),
    [anon_sym_AMP_GT_GT] = ACTIONS(933),
    [anon_sym_LT_AMP] = ACTIONS(933),
    [anon_sym_GT_AMP] = ACTIONS(933),
    [anon_sym_LT_LT] = ACTIONS(933),
    [anon_sym_LT_LT_DASH] = ACTIONS(933),
    [sym_leading_word] = ACTIONS(933),
    [sym_word] = ACTIONS(933),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(933),
    [anon_sym_LF] = ACTIONS(933),
    [anon_sym_AMP] = ACTIONS(933),
  },
  [458] = {
    [anon_sym_esac] = ACTIONS(1568),
    [anon_sym_DQUOTE] = ACTIONS(1571),
    [sym_single_quoted_argument] = ACTIONS(1568),
    [anon_sym_DOLLAR] = ACTIONS(1568),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1571),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1571),
    [sym_word] = ACTIONS(1574),
    [sym_comment] = ACTIONS(75),
  },
  [459] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1577),
    [anon_sym_PIPE] = ACTIONS(1577),
    [anon_sym_PIPE_AMP] = ACTIONS(1577),
    [anon_sym_AMP_AMP] = ACTIONS(1577),
    [anon_sym_PIPE_PIPE] = ACTIONS(1577),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(1577),
    [anon_sym_LF] = ACTIONS(1577),
    [anon_sym_AMP] = ACTIONS(1577),
  },
  [460] = {
    [anon_sym_fi] = ACTIONS(1580),
    [sym_comment] = ACTIONS(75),
  },
  [461] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1582),
    [anon_sym_PIPE] = ACTIONS(1582),
    [anon_sym_PIPE_AMP] = ACTIONS(1582),
    [anon_sym_AMP_AMP] = ACTIONS(1582),
    [anon_sym_PIPE_PIPE] = ACTIONS(1582),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(1582),
    [anon_sym_LF] = ACTIONS(1582),
    [anon_sym_AMP] = ACTIONS(1582),
  },
  [462] = {
    [sym_expansion] = STATE(53),
    [sym_operator_expansion] = STATE(53),
    [sym_command_substitution] = STATE(53),
    [aux_sym_quoted_argument_repeat1] = STATE(509),
    [anon_sym_DQUOTE] = ACTIONS(1587),
    [sym__quoted_chars] = ACTIONS(159),
    [anon_sym_DOLLAR] = ACTIONS(161),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(163),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(165),
    [sym_comment] = ACTIONS(155),
  },
  [463] = {
    [sym_file_descriptor] = ACTIONS(497),
    [anon_sym_RPAREN] = ACTIONS(499),
    [anon_sym_SEMI_SEMI] = ACTIONS(499),
    [anon_sym_RBRACK] = ACTIONS(499),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(499),
    [anon_sym_PIPE] = ACTIONS(499),
    [anon_sym_PIPE_AMP] = ACTIONS(499),
    [anon_sym_AMP_AMP] = ACTIONS(499),
    [anon_sym_PIPE_PIPE] = ACTIONS(499),
    [anon_sym_DQUOTE] = ACTIONS(499),
    [sym_single_quoted_argument] = ACTIONS(499),
    [anon_sym_DOLLAR] = ACTIONS(499),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(499),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(499),
    [anon_sym_LT] = ACTIONS(499),
    [anon_sym_GT] = ACTIONS(499),
    [anon_sym_GT_GT] = ACTIONS(499),
    [anon_sym_AMP_GT] = ACTIONS(499),
    [anon_sym_AMP_GT_GT] = ACTIONS(499),
    [anon_sym_LT_AMP] = ACTIONS(499),
    [anon_sym_GT_AMP] = ACTIONS(499),
    [anon_sym_LT_LT] = ACTIONS(499),
    [anon_sym_LT_LT_DASH] = ACTIONS(499),
    [sym_word] = ACTIONS(499),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(499),
    [anon_sym_LF] = ACTIONS(499),
    [anon_sym_AMP] = ACTIONS(499),
  },
  [464] = {
    [anon_sym_DOLLAR] = ACTIONS(1589),
    [sym_word] = ACTIONS(1591),
    [sym_comment] = ACTIONS(75),
  },
  [465] = {
    [sym_leading_word] = ACTIONS(1593),
    [sym_comment] = ACTIONS(75),
  },
  [466] = {
    [sym_command] = STATE(513),
    [sym_environment_variable_assignment] = STATE(20),
    [sym_quoted_argument] = STATE(58),
    [sym_command_substitution] = STATE(58),
    [sym_file_redirect] = STATE(20),
    [aux_sym_command_repeat1] = STATE(63),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [sym_single_quoted_argument] = ACTIONS(171),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(173),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(175),
    [sym_comment] = ACTIONS(75),
  },
  [467] = {
    [sym_file_descriptor] = ACTIONS(503),
    [anon_sym_RPAREN] = ACTIONS(505),
    [anon_sym_SEMI_SEMI] = ACTIONS(505),
    [anon_sym_RBRACK] = ACTIONS(505),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(505),
    [anon_sym_PIPE] = ACTIONS(505),
    [anon_sym_PIPE_AMP] = ACTIONS(505),
    [anon_sym_AMP_AMP] = ACTIONS(505),
    [anon_sym_PIPE_PIPE] = ACTIONS(505),
    [anon_sym_DQUOTE] = ACTIONS(505),
    [sym_single_quoted_argument] = ACTIONS(505),
    [anon_sym_DOLLAR] = ACTIONS(505),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(505),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(505),
    [anon_sym_LT] = ACTIONS(505),
    [anon_sym_GT] = ACTIONS(505),
    [anon_sym_GT_GT] = ACTIONS(505),
    [anon_sym_AMP_GT] = ACTIONS(505),
    [anon_sym_AMP_GT_GT] = ACTIONS(505),
    [anon_sym_LT_AMP] = ACTIONS(505),
    [anon_sym_GT_AMP] = ACTIONS(505),
    [anon_sym_LT_LT] = ACTIONS(505),
    [anon_sym_LT_LT_DASH] = ACTIONS(505),
    [sym_word] = ACTIONS(505),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(505),
    [anon_sym_LF] = ACTIONS(505),
    [anon_sym_AMP] = ACTIONS(505),
  },
  [468] = {
    [sym_file_redirect] = STATE(473),
    [sym_heredoc_redirect] = STATE(473),
    [sym_file_descriptor] = ACTIONS(1116),
    [anon_sym_RPAREN] = ACTIONS(1595),
    [anon_sym_SEMI_SEMI] = ACTIONS(1595),
    [anon_sym_PIPE] = ACTIONS(1595),
    [anon_sym_PIPE_AMP] = ACTIONS(1595),
    [anon_sym_AMP_AMP] = ACTIONS(1595),
    [anon_sym_PIPE_PIPE] = ACTIONS(1595),
    [anon_sym_LT] = ACTIONS(1133),
    [anon_sym_GT] = ACTIONS(1133),
    [anon_sym_GT_GT] = ACTIONS(1133),
    [anon_sym_AMP_GT] = ACTIONS(1133),
    [anon_sym_AMP_GT_GT] = ACTIONS(1133),
    [anon_sym_LT_AMP] = ACTIONS(1133),
    [anon_sym_GT_AMP] = ACTIONS(1133),
    [anon_sym_LT_LT] = ACTIONS(1135),
    [anon_sym_LT_LT_DASH] = ACTIONS(1135),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(1595),
    [anon_sym_LF] = ACTIONS(1595),
    [anon_sym_AMP] = ACTIONS(1595),
  },
  [469] = {
    [sym_file_redirect] = STATE(434),
    [sym_heredoc_redirect] = STATE(434),
    [aux_sym_command_repeat2] = STATE(515),
    [sym_file_descriptor] = ACTIONS(1116),
    [anon_sym_RPAREN] = ACTIONS(289),
    [anon_sym_SEMI_SEMI] = ACTIONS(289),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(1600),
    [anon_sym_PIPE] = ACTIONS(289),
    [anon_sym_PIPE_AMP] = ACTIONS(289),
    [anon_sym_AMP_AMP] = ACTIONS(289),
    [anon_sym_PIPE_PIPE] = ACTIONS(289),
    [anon_sym_LT] = ACTIONS(1133),
    [anon_sym_GT] = ACTIONS(1133),
    [anon_sym_GT_GT] = ACTIONS(1133),
    [anon_sym_AMP_GT] = ACTIONS(1133),
    [anon_sym_AMP_GT_GT] = ACTIONS(1133),
    [anon_sym_LT_AMP] = ACTIONS(1133),
    [anon_sym_GT_AMP] = ACTIONS(1133),
    [anon_sym_LT_LT] = ACTIONS(1135),
    [anon_sym_LT_LT_DASH] = ACTIONS(1135),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(289),
    [anon_sym_LF] = ACTIONS(289),
    [anon_sym_AMP] = ACTIONS(289),
  },
  [470] = {
    [sym_expansion] = STATE(53),
    [sym_operator_expansion] = STATE(53),
    [sym_command_substitution] = STATE(53),
    [aux_sym_quoted_argument_repeat1] = STATE(517),
    [anon_sym_DQUOTE] = ACTIONS(1602),
    [sym__quoted_chars] = ACTIONS(159),
    [anon_sym_DOLLAR] = ACTIONS(161),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(163),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(165),
    [sym_comment] = ACTIONS(155),
  },
  [471] = {
    [sym_command] = STATE(518),
    [sym_environment_variable_assignment] = STATE(20),
    [sym_quoted_argument] = STATE(58),
    [sym_command_substitution] = STATE(58),
    [sym_file_redirect] = STATE(20),
    [aux_sym_command_repeat1] = STATE(63),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [sym_single_quoted_argument] = ACTIONS(171),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(173),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(175),
    [sym_comment] = ACTIONS(75),
  },
  [472] = {
    [sym_file_redirect] = STATE(434),
    [sym_heredoc_redirect] = STATE(434),
    [aux_sym_command_repeat2] = STATE(520),
    [sym_file_descriptor] = ACTIONS(1116),
    [anon_sym_RPAREN] = ACTIONS(415),
    [anon_sym_SEMI_SEMI] = ACTIONS(415),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(1604),
    [anon_sym_PIPE] = ACTIONS(415),
    [anon_sym_PIPE_AMP] = ACTIONS(415),
    [anon_sym_AMP_AMP] = ACTIONS(415),
    [anon_sym_PIPE_PIPE] = ACTIONS(415),
    [anon_sym_EQ] = ACTIONS(353),
    [anon_sym_LT] = ACTIONS(1133),
    [anon_sym_GT] = ACTIONS(1133),
    [anon_sym_GT_GT] = ACTIONS(1133),
    [anon_sym_AMP_GT] = ACTIONS(1133),
    [anon_sym_AMP_GT_GT] = ACTIONS(1133),
    [anon_sym_LT_AMP] = ACTIONS(1133),
    [anon_sym_GT_AMP] = ACTIONS(1133),
    [anon_sym_LT_LT] = ACTIONS(1135),
    [anon_sym_LT_LT_DASH] = ACTIONS(1135),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(415),
    [anon_sym_LF] = ACTIONS(415),
    [anon_sym_AMP] = ACTIONS(415),
  },
  [473] = {
    [sym_file_descriptor] = ACTIONS(549),
    [anon_sym_RPAREN] = ACTIONS(551),
    [anon_sym_SEMI_SEMI] = ACTIONS(551),
    [anon_sym_PIPE] = ACTIONS(551),
    [anon_sym_PIPE_AMP] = ACTIONS(551),
    [anon_sym_AMP_AMP] = ACTIONS(551),
    [anon_sym_PIPE_PIPE] = ACTIONS(551),
    [anon_sym_LT] = ACTIONS(551),
    [anon_sym_GT] = ACTIONS(551),
    [anon_sym_GT_GT] = ACTIONS(551),
    [anon_sym_AMP_GT] = ACTIONS(551),
    [anon_sym_AMP_GT_GT] = ACTIONS(551),
    [anon_sym_LT_AMP] = ACTIONS(551),
    [anon_sym_GT_AMP] = ACTIONS(551),
    [anon_sym_LT_LT] = ACTIONS(551),
    [anon_sym_LT_LT_DASH] = ACTIONS(551),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(551),
    [anon_sym_LF] = ACTIONS(551),
    [anon_sym_AMP] = ACTIONS(551),
  },
  [474] = {
    [sym_file_descriptor] = ACTIONS(561),
    [anon_sym_in] = ACTIONS(563),
    [anon_sym_RPAREN] = ACTIONS(563),
    [anon_sym_SEMI_SEMI] = ACTIONS(563),
    [anon_sym_RBRACE] = ACTIONS(563),
    [anon_sym_RBRACK] = ACTIONS(563),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(563),
    [anon_sym_COLON] = ACTIONS(563),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(563),
    [anon_sym_PIPE] = ACTIONS(563),
    [anon_sym_PIPE_AMP] = ACTIONS(563),
    [anon_sym_AMP_AMP] = ACTIONS(563),
    [anon_sym_PIPE_PIPE] = ACTIONS(563),
    [anon_sym_DQUOTE] = ACTIONS(563),
    [sym_single_quoted_argument] = ACTIONS(563),
    [anon_sym_DOLLAR] = ACTIONS(563),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(563),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(563),
    [anon_sym_LT] = ACTIONS(563),
    [anon_sym_GT] = ACTIONS(563),
    [anon_sym_GT_GT] = ACTIONS(563),
    [anon_sym_AMP_GT] = ACTIONS(563),
    [anon_sym_AMP_GT_GT] = ACTIONS(563),
    [anon_sym_LT_AMP] = ACTIONS(563),
    [anon_sym_GT_AMP] = ACTIONS(563),
    [anon_sym_LT_LT] = ACTIONS(563),
    [anon_sym_LT_LT_DASH] = ACTIONS(563),
    [sym_leading_word] = ACTIONS(563),
    [sym_word] = ACTIONS(563),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(563),
    [anon_sym_LF] = ACTIONS(563),
    [anon_sym_AMP] = ACTIONS(563),
  },
  [475] = {
    [sym_file_descriptor] = ACTIONS(869),
    [anon_sym_RPAREN] = ACTIONS(871),
    [anon_sym_SEMI_SEMI] = ACTIONS(871),
    [anon_sym_PIPE] = ACTIONS(871),
    [anon_sym_PIPE_AMP] = ACTIONS(871),
    [anon_sym_AMP_AMP] = ACTIONS(871),
    [anon_sym_PIPE_PIPE] = ACTIONS(871),
    [anon_sym_LT] = ACTIONS(871),
    [anon_sym_GT] = ACTIONS(871),
    [anon_sym_GT_GT] = ACTIONS(871),
    [anon_sym_AMP_GT] = ACTIONS(871),
    [anon_sym_AMP_GT_GT] = ACTIONS(871),
    [anon_sym_LT_AMP] = ACTIONS(871),
    [anon_sym_GT_AMP] = ACTIONS(871),
    [anon_sym_LT_LT] = ACTIONS(871),
    [anon_sym_LT_LT_DASH] = ACTIONS(871),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(871),
    [anon_sym_LF] = ACTIONS(871),
    [anon_sym_AMP] = ACTIONS(871),
  },
  [476] = {
    [sym_quoted_argument] = STATE(521),
    [sym_expansion] = STATE(521),
    [sym_operator_expansion] = STATE(521),
    [sym_command_substitution] = STATE(521),
    [anon_sym_DQUOTE] = ACTIONS(1509),
    [sym_single_quoted_argument] = ACTIONS(1606),
    [anon_sym_DOLLAR] = ACTIONS(1513),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1515),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1517),
    [sym_word] = ACTIONS(1608),
    [sym_comment] = ACTIONS(75),
  },
  [477] = {
    [sym_expansion] = STATE(53),
    [sym_operator_expansion] = STATE(53),
    [sym_command_substitution] = STATE(53),
    [aux_sym_quoted_argument_repeat1] = STATE(524),
    [anon_sym_DQUOTE] = ACTIONS(1610),
    [sym__quoted_chars] = ACTIONS(159),
    [anon_sym_DOLLAR] = ACTIONS(161),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(163),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(165),
    [sym_comment] = ACTIONS(155),
  },
  [478] = {
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
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(265),
    [anon_sym_LF] = ACTIONS(265),
    [anon_sym_AMP] = ACTIONS(265),
  },
  [479] = {
    [anon_sym_DOLLAR] = ACTIONS(1612),
    [sym_word] = ACTIONS(1614),
    [sym_comment] = ACTIONS(75),
  },
  [480] = {
    [sym_leading_word] = ACTIONS(1616),
    [sym_comment] = ACTIONS(75),
  },
  [481] = {
    [sym_command] = STATE(528),
    [sym_environment_variable_assignment] = STATE(20),
    [sym_quoted_argument] = STATE(58),
    [sym_command_substitution] = STATE(58),
    [sym_file_redirect] = STATE(20),
    [aux_sym_command_repeat1] = STATE(63),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [sym_single_quoted_argument] = ACTIONS(171),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(173),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(175),
    [sym_comment] = ACTIONS(75),
  },
  [482] = {
    [sym_file_descriptor] = ACTIONS(275),
    [anon_sym_RPAREN] = ACTIONS(277),
    [anon_sym_SEMI_SEMI] = ACTIONS(277),
    [anon_sym_PIPE] = ACTIONS(277),
    [anon_sym_PIPE_AMP] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_DQUOTE] = ACTIONS(277),
    [sym_single_quoted_argument] = ACTIONS(277),
    [anon_sym_DOLLAR] = ACTIONS(277),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(277),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(277),
    [anon_sym_LT] = ACTIONS(277),
    [anon_sym_GT] = ACTIONS(277),
    [anon_sym_GT_GT] = ACTIONS(277),
    [anon_sym_AMP_GT] = ACTIONS(277),
    [anon_sym_AMP_GT_GT] = ACTIONS(277),
    [anon_sym_LT_AMP] = ACTIONS(277),
    [anon_sym_GT_AMP] = ACTIONS(277),
    [anon_sym_LT_LT] = ACTIONS(277),
    [anon_sym_LT_LT_DASH] = ACTIONS(277),
    [sym_word] = ACTIONS(277),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(277),
    [anon_sym_LF] = ACTIONS(277),
    [anon_sym_AMP] = ACTIONS(277),
  },
  [483] = {
    [sym_quoted_argument] = STATE(529),
    [sym_expansion] = STATE(529),
    [sym_operator_expansion] = STATE(529),
    [sym_command_substitution] = STATE(529),
    [sym_file_redirect] = STATE(434),
    [sym_heredoc_redirect] = STATE(434),
    [aux_sym_command_repeat2] = STATE(531),
    [sym_file_descriptor] = ACTIONS(1116),
    [anon_sym_RPAREN] = ACTIONS(1618),
    [anon_sym_SEMI_SEMI] = ACTIONS(1618),
    [anon_sym_PIPE] = ACTIONS(1618),
    [anon_sym_PIPE_AMP] = ACTIONS(1618),
    [anon_sym_AMP_AMP] = ACTIONS(1618),
    [anon_sym_PIPE_PIPE] = ACTIONS(1618),
    [anon_sym_DQUOTE] = ACTIONS(1495),
    [sym_single_quoted_argument] = ACTIONS(1621),
    [anon_sym_DOLLAR] = ACTIONS(1499),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1501),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1503),
    [anon_sym_LT] = ACTIONS(1133),
    [anon_sym_GT] = ACTIONS(1133),
    [anon_sym_GT_GT] = ACTIONS(1133),
    [anon_sym_AMP_GT] = ACTIONS(1133),
    [anon_sym_AMP_GT_GT] = ACTIONS(1133),
    [anon_sym_LT_AMP] = ACTIONS(1133),
    [anon_sym_GT_AMP] = ACTIONS(1133),
    [anon_sym_LT_LT] = ACTIONS(1135),
    [anon_sym_LT_LT_DASH] = ACTIONS(1135),
    [sym_word] = ACTIONS(1623),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(1618),
    [anon_sym_LF] = ACTIONS(1618),
    [anon_sym_AMP] = ACTIONS(1618),
  },
  [484] = {
    [sym_file_redirect] = STATE(473),
    [sym_heredoc_redirect] = STATE(473),
    [sym_file_descriptor] = ACTIONS(1116),
    [anon_sym_RPAREN] = ACTIONS(1618),
    [anon_sym_SEMI_SEMI] = ACTIONS(1618),
    [anon_sym_PIPE] = ACTIONS(1618),
    [anon_sym_PIPE_AMP] = ACTIONS(1618),
    [anon_sym_AMP_AMP] = ACTIONS(1618),
    [anon_sym_PIPE_PIPE] = ACTIONS(1618),
    [anon_sym_LT] = ACTIONS(1133),
    [anon_sym_GT] = ACTIONS(1133),
    [anon_sym_GT_GT] = ACTIONS(1133),
    [anon_sym_AMP_GT] = ACTIONS(1133),
    [anon_sym_AMP_GT_GT] = ACTIONS(1133),
    [anon_sym_LT_AMP] = ACTIONS(1133),
    [anon_sym_GT_AMP] = ACTIONS(1133),
    [anon_sym_LT_LT] = ACTIONS(1135),
    [anon_sym_LT_LT_DASH] = ACTIONS(1135),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(1618),
    [anon_sym_LF] = ACTIONS(1618),
    [anon_sym_AMP] = ACTIONS(1618),
  },
  [485] = {
    [sym_expansion] = STATE(53),
    [sym_operator_expansion] = STATE(53),
    [sym_command_substitution] = STATE(53),
    [aux_sym_quoted_argument_repeat1] = STATE(533),
    [anon_sym_DQUOTE] = ACTIONS(1625),
    [sym__quoted_chars] = ACTIONS(159),
    [anon_sym_DOLLAR] = ACTIONS(161),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(163),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(165),
    [sym_comment] = ACTIONS(155),
  },
  [486] = {
    [sym_file_descriptor] = ACTIONS(365),
    [anon_sym_RPAREN] = ACTIONS(369),
    [anon_sym_SEMI_SEMI] = ACTIONS(369),
    [anon_sym_PIPE] = ACTIONS(369),
    [anon_sym_PIPE_AMP] = ACTIONS(369),
    [anon_sym_AMP_AMP] = ACTIONS(369),
    [anon_sym_PIPE_PIPE] = ACTIONS(369),
    [anon_sym_LT] = ACTIONS(369),
    [anon_sym_GT] = ACTIONS(369),
    [anon_sym_GT_GT] = ACTIONS(369),
    [anon_sym_AMP_GT] = ACTIONS(369),
    [anon_sym_AMP_GT_GT] = ACTIONS(369),
    [anon_sym_LT_AMP] = ACTIONS(369),
    [anon_sym_GT_AMP] = ACTIONS(369),
    [anon_sym_LT_LT] = ACTIONS(369),
    [anon_sym_LT_LT_DASH] = ACTIONS(369),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(369),
    [anon_sym_LF] = ACTIONS(369),
    [anon_sym_AMP] = ACTIONS(369),
  },
  [487] = {
    [anon_sym_DOLLAR] = ACTIONS(1627),
    [sym_word] = ACTIONS(1629),
    [sym_comment] = ACTIONS(75),
  },
  [488] = {
    [sym_leading_word] = ACTIONS(1631),
    [sym_comment] = ACTIONS(75),
  },
  [489] = {
    [sym_command] = STATE(537),
    [sym_environment_variable_assignment] = STATE(20),
    [sym_quoted_argument] = STATE(58),
    [sym_command_substitution] = STATE(58),
    [sym_file_redirect] = STATE(20),
    [aux_sym_command_repeat1] = STATE(63),
    [sym_file_descriptor] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [sym_single_quoted_argument] = ACTIONS(171),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(173),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_AMP_GT] = ACTIONS(107),
    [anon_sym_AMP_GT_GT] = ACTIONS(107),
    [anon_sym_LT_AMP] = ACTIONS(107),
    [anon_sym_GT_AMP] = ACTIONS(107),
    [sym_leading_word] = ACTIONS(175),
    [sym_comment] = ACTIONS(75),
  },
  [490] = {
    [sym_file_descriptor] = ACTIONS(377),
    [anon_sym_RPAREN] = ACTIONS(381),
    [anon_sym_SEMI_SEMI] = ACTIONS(381),
    [anon_sym_PIPE] = ACTIONS(381),
    [anon_sym_PIPE_AMP] = ACTIONS(381),
    [anon_sym_AMP_AMP] = ACTIONS(381),
    [anon_sym_PIPE_PIPE] = ACTIONS(381),
    [anon_sym_LT] = ACTIONS(381),
    [anon_sym_GT] = ACTIONS(381),
    [anon_sym_GT_GT] = ACTIONS(381),
    [anon_sym_AMP_GT] = ACTIONS(381),
    [anon_sym_AMP_GT_GT] = ACTIONS(381),
    [anon_sym_LT_AMP] = ACTIONS(381),
    [anon_sym_GT_AMP] = ACTIONS(381),
    [anon_sym_LT_LT] = ACTIONS(381),
    [anon_sym_LT_LT_DASH] = ACTIONS(381),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(381),
    [anon_sym_LF] = ACTIONS(381),
    [anon_sym_AMP] = ACTIONS(381),
  },
  [491] = {
    [sym__heredoc_middle] = ACTIONS(945),
    [sym__heredoc_end] = ACTIONS(945),
    [sym_file_descriptor] = ACTIONS(945),
    [anon_sym_in] = ACTIONS(935),
    [anon_sym_RPAREN] = ACTIONS(935),
    [anon_sym_SEMI_SEMI] = ACTIONS(935),
    [anon_sym_RBRACE] = ACTIONS(935),
    [anon_sym_RBRACK] = ACTIONS(935),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(935),
    [anon_sym_COLON] = ACTIONS(935),
    [anon_sym_PIPE] = ACTIONS(935),
    [anon_sym_PIPE_AMP] = ACTIONS(935),
    [anon_sym_AMP_AMP] = ACTIONS(935),
    [anon_sym_PIPE_PIPE] = ACTIONS(935),
    [anon_sym_DQUOTE] = ACTIONS(935),
    [sym__quoted_chars] = ACTIONS(935),
    [sym_single_quoted_argument] = ACTIONS(935),
    [anon_sym_DOLLAR] = ACTIONS(935),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(935),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(935),
    [anon_sym_LT] = ACTIONS(935),
    [anon_sym_GT] = ACTIONS(935),
    [anon_sym_GT_GT] = ACTIONS(935),
    [anon_sym_AMP_GT] = ACTIONS(935),
    [anon_sym_AMP_GT_GT] = ACTIONS(935),
    [anon_sym_LT_AMP] = ACTIONS(935),
    [anon_sym_GT_AMP] = ACTIONS(935),
    [anon_sym_LT_LT] = ACTIONS(935),
    [anon_sym_LT_LT_DASH] = ACTIONS(935),
    [sym_leading_word] = ACTIONS(935),
    [sym_word] = ACTIONS(935),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(935),
    [anon_sym_LF] = ACTIONS(935),
    [anon_sym_AMP] = ACTIONS(935),
  },
  [492] = {
    [sym_file_descriptor] = ACTIONS(323),
    [anon_sym_SEMI_SEMI] = ACTIONS(325),
    [anon_sym_RBRACE] = ACTIONS(325),
    [anon_sym_COLON] = ACTIONS(325),
    [anon_sym_PIPE] = ACTIONS(325),
    [anon_sym_PIPE_AMP] = ACTIONS(325),
    [anon_sym_AMP_AMP] = ACTIONS(325),
    [anon_sym_PIPE_PIPE] = ACTIONS(325),
    [anon_sym_DQUOTE] = ACTIONS(325),
    [sym_single_quoted_argument] = ACTIONS(325),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(325),
    [anon_sym_LT] = ACTIONS(325),
    [anon_sym_GT] = ACTIONS(325),
    [anon_sym_GT_GT] = ACTIONS(325),
    [anon_sym_AMP_GT] = ACTIONS(325),
    [anon_sym_AMP_GT_GT] = ACTIONS(325),
    [anon_sym_LT_AMP] = ACTIONS(325),
    [anon_sym_GT_AMP] = ACTIONS(325),
    [sym_leading_word] = ACTIONS(325),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(325),
    [anon_sym_LF] = ACTIONS(325),
    [anon_sym_AMP] = ACTIONS(325),
  },
  [493] = {
    [sym_expansion] = STATE(133),
    [sym_operator_expansion] = STATE(133),
    [sym_command_substitution] = STATE(133),
    [anon_sym_DQUOTE] = ACTIONS(1633),
    [sym__quoted_chars] = ACTIONS(339),
    [anon_sym_DOLLAR] = ACTIONS(161),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(163),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(165),
    [sym_comment] = ACTIONS(155),
  },
  [494] = {
    [sym_file_descriptor] = ACTIONS(477),
    [anon_sym_SEMI_SEMI] = ACTIONS(453),
    [anon_sym_RBRACE] = ACTIONS(453),
    [anon_sym_COLON] = ACTIONS(453),
    [anon_sym_PIPE] = ACTIONS(453),
    [anon_sym_PIPE_AMP] = ACTIONS(453),
    [anon_sym_AMP_AMP] = ACTIONS(453),
    [anon_sym_PIPE_PIPE] = ACTIONS(453),
    [anon_sym_DQUOTE] = ACTIONS(453),
    [sym_single_quoted_argument] = ACTIONS(453),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(453),
    [anon_sym_LT] = ACTIONS(453),
    [anon_sym_GT] = ACTIONS(453),
    [anon_sym_GT_GT] = ACTIONS(453),
    [anon_sym_AMP_GT] = ACTIONS(453),
    [anon_sym_AMP_GT_GT] = ACTIONS(453),
    [anon_sym_LT_AMP] = ACTIONS(453),
    [anon_sym_GT_AMP] = ACTIONS(453),
    [sym_leading_word] = ACTIONS(453),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(453),
    [anon_sym_LF] = ACTIONS(453),
    [anon_sym_AMP] = ACTIONS(453),
  },
  [495] = {
    [sym_file_descriptor] = ACTIONS(481),
    [anon_sym_SEMI_SEMI] = ACTIONS(455),
    [anon_sym_RBRACE] = ACTIONS(455),
    [anon_sym_COLON] = ACTIONS(455),
    [anon_sym_PIPE] = ACTIONS(455),
    [anon_sym_PIPE_AMP] = ACTIONS(455),
    [anon_sym_AMP_AMP] = ACTIONS(455),
    [anon_sym_PIPE_PIPE] = ACTIONS(455),
    [anon_sym_DQUOTE] = ACTIONS(455),
    [sym_single_quoted_argument] = ACTIONS(455),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(455),
    [anon_sym_LT] = ACTIONS(455),
    [anon_sym_GT] = ACTIONS(455),
    [anon_sym_GT_GT] = ACTIONS(455),
    [anon_sym_AMP_GT] = ACTIONS(455),
    [anon_sym_AMP_GT_GT] = ACTIONS(455),
    [anon_sym_LT_AMP] = ACTIONS(455),
    [anon_sym_GT_AMP] = ACTIONS(455),
    [sym_leading_word] = ACTIONS(455),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(455),
    [anon_sym_LF] = ACTIONS(455),
    [anon_sym_AMP] = ACTIONS(455),
  },
  [496] = {
    [anon_sym_RBRACE] = ACTIONS(1635),
    [anon_sym_COLON] = ACTIONS(1637),
    [anon_sym_EQ] = ACTIONS(1639),
    [anon_sym_COLON_QMARK] = ACTIONS(1639),
    [anon_sym_COLON_DASH] = ACTIONS(1639),
    [sym_comment] = ACTIONS(75),
  },
  [497] = {
    [anon_sym_RPAREN] = ACTIONS(1641),
    [sym_comment] = ACTIONS(75),
  },
  [498] = {
    [sym_file_descriptor] = ACTIONS(323),
    [anon_sym_RPAREN] = ACTIONS(325),
    [anon_sym_SEMI_SEMI] = ACTIONS(325),
    [anon_sym_COLON] = ACTIONS(325),
    [anon_sym_PIPE] = ACTIONS(325),
    [anon_sym_PIPE_AMP] = ACTIONS(325),
    [anon_sym_AMP_AMP] = ACTIONS(325),
    [anon_sym_PIPE_PIPE] = ACTIONS(325),
    [anon_sym_DQUOTE] = ACTIONS(325),
    [sym_single_quoted_argument] = ACTIONS(325),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(325),
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
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(325),
    [anon_sym_LF] = ACTIONS(325),
    [anon_sym_AMP] = ACTIONS(325),
  },
  [499] = {
    [sym_expansion] = STATE(133),
    [sym_operator_expansion] = STATE(133),
    [sym_command_substitution] = STATE(133),
    [anon_sym_DQUOTE] = ACTIONS(1643),
    [sym__quoted_chars] = ACTIONS(339),
    [anon_sym_DOLLAR] = ACTIONS(161),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(163),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(165),
    [sym_comment] = ACTIONS(155),
  },
  [500] = {
    [sym_file_descriptor] = ACTIONS(477),
    [anon_sym_RPAREN] = ACTIONS(453),
    [anon_sym_SEMI_SEMI] = ACTIONS(453),
    [anon_sym_COLON] = ACTIONS(453),
    [anon_sym_PIPE] = ACTIONS(453),
    [anon_sym_PIPE_AMP] = ACTIONS(453),
    [anon_sym_AMP_AMP] = ACTIONS(453),
    [anon_sym_PIPE_PIPE] = ACTIONS(453),
    [anon_sym_DQUOTE] = ACTIONS(453),
    [sym_single_quoted_argument] = ACTIONS(453),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(453),
    [anon_sym_LT] = ACTIONS(453),
    [anon_sym_GT] = ACTIONS(453),
    [anon_sym_GT_GT] = ACTIONS(453),
    [anon_sym_AMP_GT] = ACTIONS(453),
    [anon_sym_AMP_GT_GT] = ACTIONS(453),
    [anon_sym_LT_AMP] = ACTIONS(453),
    [anon_sym_GT_AMP] = ACTIONS(453),
    [anon_sym_LT_LT] = ACTIONS(453),
    [anon_sym_LT_LT_DASH] = ACTIONS(453),
    [sym_leading_word] = ACTIONS(453),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(453),
    [anon_sym_LF] = ACTIONS(453),
    [anon_sym_AMP] = ACTIONS(453),
  },
  [501] = {
    [sym_file_descriptor] = ACTIONS(481),
    [anon_sym_RPAREN] = ACTIONS(455),
    [anon_sym_SEMI_SEMI] = ACTIONS(455),
    [anon_sym_COLON] = ACTIONS(455),
    [anon_sym_PIPE] = ACTIONS(455),
    [anon_sym_PIPE_AMP] = ACTIONS(455),
    [anon_sym_AMP_AMP] = ACTIONS(455),
    [anon_sym_PIPE_PIPE] = ACTIONS(455),
    [anon_sym_DQUOTE] = ACTIONS(455),
    [sym_single_quoted_argument] = ACTIONS(455),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(455),
    [anon_sym_LT] = ACTIONS(455),
    [anon_sym_GT] = ACTIONS(455),
    [anon_sym_GT_GT] = ACTIONS(455),
    [anon_sym_AMP_GT] = ACTIONS(455),
    [anon_sym_AMP_GT_GT] = ACTIONS(455),
    [anon_sym_LT_AMP] = ACTIONS(455),
    [anon_sym_GT_AMP] = ACTIONS(455),
    [anon_sym_LT_LT] = ACTIONS(455),
    [anon_sym_LT_LT_DASH] = ACTIONS(455),
    [sym_leading_word] = ACTIONS(455),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(455),
    [anon_sym_LF] = ACTIONS(455),
    [anon_sym_AMP] = ACTIONS(455),
  },
  [502] = {
    [anon_sym_RBRACE] = ACTIONS(1645),
    [anon_sym_COLON] = ACTIONS(1647),
    [anon_sym_EQ] = ACTIONS(1649),
    [anon_sym_COLON_QMARK] = ACTIONS(1649),
    [anon_sym_COLON_DASH] = ACTIONS(1649),
    [sym_comment] = ACTIONS(75),
  },
  [503] = {
    [anon_sym_RPAREN] = ACTIONS(1651),
    [sym_comment] = ACTIONS(75),
  },
  [504] = {
    [sym_case_item] = STATE(270),
    [sym_quoted_argument] = STATE(268),
    [sym_expansion] = STATE(268),
    [sym_operator_expansion] = STATE(268),
    [sym_command_substitution] = STATE(268),
    [aux_sym_case_statement_repeat1] = STATE(547),
    [anon_sym_esac] = ACTIONS(1653),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [sym_single_quoted_argument] = ACTIONS(681),
    [anon_sym_DOLLAR] = ACTIONS(137),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(139),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(141),
    [sym_word] = ACTIONS(683),
    [sym_comment] = ACTIONS(75),
  },
  [505] = {
    [sym_file_descriptor] = ACTIONS(425),
    [anon_sym_RPAREN] = ACTIONS(429),
    [anon_sym_SEMI_SEMI] = ACTIONS(429),
    [anon_sym_COLON] = ACTIONS(429),
    [anon_sym_PIPE] = ACTIONS(429),
    [anon_sym_PIPE_AMP] = ACTIONS(429),
    [anon_sym_AMP_AMP] = ACTIONS(429),
    [anon_sym_PIPE_PIPE] = ACTIONS(429),
    [anon_sym_DQUOTE] = ACTIONS(429),
    [sym_single_quoted_argument] = ACTIONS(429),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(429),
    [anon_sym_LT] = ACTIONS(429),
    [anon_sym_GT] = ACTIONS(429),
    [anon_sym_GT_GT] = ACTIONS(429),
    [anon_sym_AMP_GT] = ACTIONS(429),
    [anon_sym_AMP_GT_GT] = ACTIONS(429),
    [anon_sym_LT_AMP] = ACTIONS(429),
    [anon_sym_GT_AMP] = ACTIONS(429),
    [anon_sym_LT_LT] = ACTIONS(429),
    [anon_sym_LT_LT_DASH] = ACTIONS(429),
    [sym_leading_word] = ACTIONS(429),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(429),
    [anon_sym_LF] = ACTIONS(429),
    [anon_sym_AMP] = ACTIONS(429),
  },
  [506] = {
    [sym_file_descriptor] = ACTIONS(431),
    [anon_sym_RPAREN] = ACTIONS(435),
    [anon_sym_SEMI_SEMI] = ACTIONS(435),
    [anon_sym_COLON] = ACTIONS(435),
    [anon_sym_PIPE] = ACTIONS(435),
    [anon_sym_PIPE_AMP] = ACTIONS(435),
    [anon_sym_AMP_AMP] = ACTIONS(435),
    [anon_sym_PIPE_PIPE] = ACTIONS(435),
    [anon_sym_DQUOTE] = ACTIONS(435),
    [sym_single_quoted_argument] = ACTIONS(435),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(435),
    [anon_sym_LT] = ACTIONS(435),
    [anon_sym_GT] = ACTIONS(435),
    [anon_sym_GT_GT] = ACTIONS(435),
    [anon_sym_AMP_GT] = ACTIONS(435),
    [anon_sym_AMP_GT_GT] = ACTIONS(435),
    [anon_sym_LT_AMP] = ACTIONS(435),
    [anon_sym_GT_AMP] = ACTIONS(435),
    [anon_sym_LT_LT] = ACTIONS(435),
    [anon_sym_LT_LT_DASH] = ACTIONS(435),
    [sym_leading_word] = ACTIONS(435),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(435),
    [anon_sym_LF] = ACTIONS(435),
    [anon_sym_AMP] = ACTIONS(435),
  },
  [507] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1655),
    [anon_sym_PIPE] = ACTIONS(1655),
    [anon_sym_PIPE_AMP] = ACTIONS(1655),
    [anon_sym_AMP_AMP] = ACTIONS(1655),
    [anon_sym_PIPE_PIPE] = ACTIONS(1655),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(1655),
    [anon_sym_LF] = ACTIONS(1655),
    [anon_sym_AMP] = ACTIONS(1655),
  },
  [508] = {
    [sym_file_descriptor] = ACTIONS(323),
    [anon_sym_RPAREN] = ACTIONS(325),
    [anon_sym_SEMI_SEMI] = ACTIONS(325),
    [anon_sym_RBRACK] = ACTIONS(325),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(325),
    [anon_sym_PIPE] = ACTIONS(325),
    [anon_sym_PIPE_AMP] = ACTIONS(325),
    [anon_sym_AMP_AMP] = ACTIONS(325),
    [anon_sym_PIPE_PIPE] = ACTIONS(325),
    [anon_sym_DQUOTE] = ACTIONS(325),
    [sym_single_quoted_argument] = ACTIONS(325),
    [anon_sym_DOLLAR] = ACTIONS(325),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(325),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(325),
    [anon_sym_LT] = ACTIONS(325),
    [anon_sym_GT] = ACTIONS(325),
    [anon_sym_GT_GT] = ACTIONS(325),
    [anon_sym_AMP_GT] = ACTIONS(325),
    [anon_sym_AMP_GT_GT] = ACTIONS(325),
    [anon_sym_LT_AMP] = ACTIONS(325),
    [anon_sym_GT_AMP] = ACTIONS(325),
    [anon_sym_LT_LT] = ACTIONS(325),
    [anon_sym_LT_LT_DASH] = ACTIONS(325),
    [sym_word] = ACTIONS(325),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(325),
    [anon_sym_LF] = ACTIONS(325),
    [anon_sym_AMP] = ACTIONS(325),
  },
  [509] = {
    [sym_expansion] = STATE(133),
    [sym_operator_expansion] = STATE(133),
    [sym_command_substitution] = STATE(133),
    [anon_sym_DQUOTE] = ACTIONS(1658),
    [sym__quoted_chars] = ACTIONS(339),
    [anon_sym_DOLLAR] = ACTIONS(161),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(163),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(165),
    [sym_comment] = ACTIONS(155),
  },
  [510] = {
    [sym_file_descriptor] = ACTIONS(477),
    [anon_sym_RPAREN] = ACTIONS(453),
    [anon_sym_SEMI_SEMI] = ACTIONS(453),
    [anon_sym_RBRACK] = ACTIONS(453),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(453),
    [anon_sym_PIPE] = ACTIONS(453),
    [anon_sym_PIPE_AMP] = ACTIONS(453),
    [anon_sym_AMP_AMP] = ACTIONS(453),
    [anon_sym_PIPE_PIPE] = ACTIONS(453),
    [anon_sym_DQUOTE] = ACTIONS(453),
    [sym_single_quoted_argument] = ACTIONS(453),
    [anon_sym_DOLLAR] = ACTIONS(453),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(453),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(453),
    [anon_sym_LT] = ACTIONS(453),
    [anon_sym_GT] = ACTIONS(453),
    [anon_sym_GT_GT] = ACTIONS(453),
    [anon_sym_AMP_GT] = ACTIONS(453),
    [anon_sym_AMP_GT_GT] = ACTIONS(453),
    [anon_sym_LT_AMP] = ACTIONS(453),
    [anon_sym_GT_AMP] = ACTIONS(453),
    [anon_sym_LT_LT] = ACTIONS(453),
    [anon_sym_LT_LT_DASH] = ACTIONS(453),
    [sym_word] = ACTIONS(453),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(453),
    [anon_sym_LF] = ACTIONS(453),
    [anon_sym_AMP] = ACTIONS(453),
  },
  [511] = {
    [sym_file_descriptor] = ACTIONS(481),
    [anon_sym_RPAREN] = ACTIONS(455),
    [anon_sym_SEMI_SEMI] = ACTIONS(455),
    [anon_sym_RBRACK] = ACTIONS(455),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(455),
    [anon_sym_PIPE] = ACTIONS(455),
    [anon_sym_PIPE_AMP] = ACTIONS(455),
    [anon_sym_AMP_AMP] = ACTIONS(455),
    [anon_sym_PIPE_PIPE] = ACTIONS(455),
    [anon_sym_DQUOTE] = ACTIONS(455),
    [sym_single_quoted_argument] = ACTIONS(455),
    [anon_sym_DOLLAR] = ACTIONS(455),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(455),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(455),
    [anon_sym_LT] = ACTIONS(455),
    [anon_sym_GT] = ACTIONS(455),
    [anon_sym_GT_GT] = ACTIONS(455),
    [anon_sym_AMP_GT] = ACTIONS(455),
    [anon_sym_AMP_GT_GT] = ACTIONS(455),
    [anon_sym_LT_AMP] = ACTIONS(455),
    [anon_sym_GT_AMP] = ACTIONS(455),
    [anon_sym_LT_LT] = ACTIONS(455),
    [anon_sym_LT_LT_DASH] = ACTIONS(455),
    [sym_word] = ACTIONS(455),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(455),
    [anon_sym_LF] = ACTIONS(455),
    [anon_sym_AMP] = ACTIONS(455),
  },
  [512] = {
    [anon_sym_RBRACE] = ACTIONS(1660),
    [anon_sym_COLON] = ACTIONS(1662),
    [anon_sym_EQ] = ACTIONS(1664),
    [anon_sym_COLON_QMARK] = ACTIONS(1664),
    [anon_sym_COLON_DASH] = ACTIONS(1664),
    [sym_comment] = ACTIONS(75),
  },
  [513] = {
    [anon_sym_RPAREN] = ACTIONS(1666),
    [sym_comment] = ACTIONS(75),
  },
  [514] = {
    [sym_quoted_argument] = STATE(478),
    [sym_expansion] = STATE(478),
    [sym_operator_expansion] = STATE(478),
    [sym_command_substitution] = STATE(478),
    [sym_file_redirect] = STATE(434),
    [sym_heredoc_redirect] = STATE(434),
    [aux_sym_bracket_command_repeat1] = STATE(552),
    [aux_sym_command_repeat2] = STATE(553),
    [sym_file_descriptor] = ACTIONS(1116),
    [anon_sym_RPAREN] = ACTIONS(519),
    [anon_sym_SEMI_SEMI] = ACTIONS(519),
    [anon_sym_PIPE] = ACTIONS(519),
    [anon_sym_PIPE_AMP] = ACTIONS(519),
    [anon_sym_AMP_AMP] = ACTIONS(519),
    [anon_sym_PIPE_PIPE] = ACTIONS(519),
    [anon_sym_DQUOTE] = ACTIONS(1495),
    [sym_single_quoted_argument] = ACTIONS(1497),
    [anon_sym_DOLLAR] = ACTIONS(1499),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1501),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1503),
    [anon_sym_LT] = ACTIONS(1133),
    [anon_sym_GT] = ACTIONS(1133),
    [anon_sym_GT_GT] = ACTIONS(1133),
    [anon_sym_AMP_GT] = ACTIONS(1133),
    [anon_sym_AMP_GT_GT] = ACTIONS(1133),
    [anon_sym_LT_AMP] = ACTIONS(1133),
    [anon_sym_GT_AMP] = ACTIONS(1133),
    [anon_sym_LT_LT] = ACTIONS(1135),
    [anon_sym_LT_LT_DASH] = ACTIONS(1135),
    [sym_word] = ACTIONS(1505),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(519),
    [anon_sym_LF] = ACTIONS(519),
    [anon_sym_AMP] = ACTIONS(519),
  },
  [515] = {
    [sym_file_redirect] = STATE(473),
    [sym_heredoc_redirect] = STATE(473),
    [sym_file_descriptor] = ACTIONS(1116),
    [anon_sym_RPAREN] = ACTIONS(519),
    [anon_sym_SEMI_SEMI] = ACTIONS(519),
    [anon_sym_PIPE] = ACTIONS(519),
    [anon_sym_PIPE_AMP] = ACTIONS(519),
    [anon_sym_AMP_AMP] = ACTIONS(519),
    [anon_sym_PIPE_PIPE] = ACTIONS(519),
    [anon_sym_LT] = ACTIONS(1133),
    [anon_sym_GT] = ACTIONS(1133),
    [anon_sym_GT_GT] = ACTIONS(1133),
    [anon_sym_AMP_GT] = ACTIONS(1133),
    [anon_sym_AMP_GT_GT] = ACTIONS(1133),
    [anon_sym_LT_AMP] = ACTIONS(1133),
    [anon_sym_GT_AMP] = ACTIONS(1133),
    [anon_sym_LT_LT] = ACTIONS(1135),
    [anon_sym_LT_LT_DASH] = ACTIONS(1135),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(519),
    [anon_sym_LF] = ACTIONS(519),
    [anon_sym_AMP] = ACTIONS(519),
  },
  [516] = {
    [sym_file_descriptor] = ACTIONS(323),
    [anon_sym_RPAREN] = ACTIONS(325),
    [anon_sym_SEMI_SEMI] = ACTIONS(325),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(325),
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
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(325),
    [anon_sym_LF] = ACTIONS(325),
    [anon_sym_AMP] = ACTIONS(325),
  },
  [517] = {
    [sym_expansion] = STATE(133),
    [sym_operator_expansion] = STATE(133),
    [sym_command_substitution] = STATE(133),
    [anon_sym_DQUOTE] = ACTIONS(1668),
    [sym__quoted_chars] = ACTIONS(339),
    [anon_sym_DOLLAR] = ACTIONS(161),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(163),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(165),
    [sym_comment] = ACTIONS(155),
  },
  [518] = {
    [anon_sym_RPAREN] = ACTIONS(1670),
    [sym_comment] = ACTIONS(75),
  },
  [519] = {
    [sym_quoted_argument] = STATE(478),
    [sym_expansion] = STATE(478),
    [sym_operator_expansion] = STATE(478),
    [sym_command_substitution] = STATE(478),
    [sym_file_redirect] = STATE(434),
    [sym_heredoc_redirect] = STATE(434),
    [aux_sym_bracket_command_repeat1] = STATE(556),
    [aux_sym_command_repeat2] = STATE(557),
    [sym_file_descriptor] = ACTIONS(1116),
    [anon_sym_RPAREN] = ACTIONS(659),
    [anon_sym_SEMI_SEMI] = ACTIONS(659),
    [anon_sym_PIPE] = ACTIONS(659),
    [anon_sym_PIPE_AMP] = ACTIONS(659),
    [anon_sym_AMP_AMP] = ACTIONS(659),
    [anon_sym_PIPE_PIPE] = ACTIONS(659),
    [anon_sym_DQUOTE] = ACTIONS(1495),
    [sym_single_quoted_argument] = ACTIONS(1497),
    [anon_sym_DOLLAR] = ACTIONS(1499),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1501),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1503),
    [anon_sym_LT] = ACTIONS(1133),
    [anon_sym_GT] = ACTIONS(1133),
    [anon_sym_GT_GT] = ACTIONS(1133),
    [anon_sym_AMP_GT] = ACTIONS(1133),
    [anon_sym_AMP_GT_GT] = ACTIONS(1133),
    [anon_sym_LT_AMP] = ACTIONS(1133),
    [anon_sym_GT_AMP] = ACTIONS(1133),
    [anon_sym_LT_LT] = ACTIONS(1135),
    [anon_sym_LT_LT_DASH] = ACTIONS(1135),
    [sym_word] = ACTIONS(1505),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(659),
    [anon_sym_LF] = ACTIONS(659),
    [anon_sym_AMP] = ACTIONS(659),
  },
  [520] = {
    [sym_file_redirect] = STATE(473),
    [sym_heredoc_redirect] = STATE(473),
    [sym_file_descriptor] = ACTIONS(1116),
    [anon_sym_RPAREN] = ACTIONS(659),
    [anon_sym_SEMI_SEMI] = ACTIONS(659),
    [anon_sym_PIPE] = ACTIONS(659),
    [anon_sym_PIPE_AMP] = ACTIONS(659),
    [anon_sym_AMP_AMP] = ACTIONS(659),
    [anon_sym_PIPE_PIPE] = ACTIONS(659),
    [anon_sym_LT] = ACTIONS(1133),
    [anon_sym_GT] = ACTIONS(1133),
    [anon_sym_GT_GT] = ACTIONS(1133),
    [anon_sym_AMP_GT] = ACTIONS(1133),
    [anon_sym_AMP_GT_GT] = ACTIONS(1133),
    [anon_sym_LT_AMP] = ACTIONS(1133),
    [anon_sym_GT_AMP] = ACTIONS(1133),
    [anon_sym_LT_LT] = ACTIONS(1135),
    [anon_sym_LT_LT_DASH] = ACTIONS(1135),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(659),
    [anon_sym_LF] = ACTIONS(659),
    [anon_sym_AMP] = ACTIONS(659),
  },
  [521] = {
    [sym_file_descriptor] = ACTIONS(425),
    [anon_sym_RPAREN] = ACTIONS(429),
    [anon_sym_SEMI_SEMI] = ACTIONS(429),
    [anon_sym_PIPE] = ACTIONS(429),
    [anon_sym_PIPE_AMP] = ACTIONS(429),
    [anon_sym_AMP_AMP] = ACTIONS(429),
    [anon_sym_PIPE_PIPE] = ACTIONS(429),
    [anon_sym_LT] = ACTIONS(429),
    [anon_sym_GT] = ACTIONS(429),
    [anon_sym_GT_GT] = ACTIONS(429),
    [anon_sym_AMP_GT] = ACTIONS(429),
    [anon_sym_AMP_GT_GT] = ACTIONS(429),
    [anon_sym_LT_AMP] = ACTIONS(429),
    [anon_sym_GT_AMP] = ACTIONS(429),
    [anon_sym_LT_LT] = ACTIONS(429),
    [anon_sym_LT_LT_DASH] = ACTIONS(429),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(429),
    [anon_sym_LF] = ACTIONS(429),
    [anon_sym_AMP] = ACTIONS(429),
  },
  [522] = {
    [sym_file_descriptor] = ACTIONS(431),
    [anon_sym_RPAREN] = ACTIONS(435),
    [anon_sym_SEMI_SEMI] = ACTIONS(435),
    [anon_sym_PIPE] = ACTIONS(435),
    [anon_sym_PIPE_AMP] = ACTIONS(435),
    [anon_sym_AMP_AMP] = ACTIONS(435),
    [anon_sym_PIPE_PIPE] = ACTIONS(435),
    [anon_sym_LT] = ACTIONS(435),
    [anon_sym_GT] = ACTIONS(435),
    [anon_sym_GT_GT] = ACTIONS(435),
    [anon_sym_AMP_GT] = ACTIONS(435),
    [anon_sym_AMP_GT_GT] = ACTIONS(435),
    [anon_sym_LT_AMP] = ACTIONS(435),
    [anon_sym_GT_AMP] = ACTIONS(435),
    [anon_sym_LT_LT] = ACTIONS(435),
    [anon_sym_LT_LT_DASH] = ACTIONS(435),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(435),
    [anon_sym_LF] = ACTIONS(435),
    [anon_sym_AMP] = ACTIONS(435),
  },
  [523] = {
    [sym_file_descriptor] = ACTIONS(323),
    [anon_sym_RPAREN] = ACTIONS(325),
    [anon_sym_SEMI_SEMI] = ACTIONS(325),
    [anon_sym_PIPE] = ACTIONS(325),
    [anon_sym_PIPE_AMP] = ACTIONS(325),
    [anon_sym_AMP_AMP] = ACTIONS(325),
    [anon_sym_PIPE_PIPE] = ACTIONS(325),
    [anon_sym_DQUOTE] = ACTIONS(325),
    [sym_single_quoted_argument] = ACTIONS(325),
    [anon_sym_DOLLAR] = ACTIONS(325),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(325),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(325),
    [anon_sym_LT] = ACTIONS(325),
    [anon_sym_GT] = ACTIONS(325),
    [anon_sym_GT_GT] = ACTIONS(325),
    [anon_sym_AMP_GT] = ACTIONS(325),
    [anon_sym_AMP_GT_GT] = ACTIONS(325),
    [anon_sym_LT_AMP] = ACTIONS(325),
    [anon_sym_GT_AMP] = ACTIONS(325),
    [anon_sym_LT_LT] = ACTIONS(325),
    [anon_sym_LT_LT_DASH] = ACTIONS(325),
    [sym_word] = ACTIONS(325),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(325),
    [anon_sym_LF] = ACTIONS(325),
    [anon_sym_AMP] = ACTIONS(325),
  },
  [524] = {
    [sym_expansion] = STATE(133),
    [sym_operator_expansion] = STATE(133),
    [sym_command_substitution] = STATE(133),
    [anon_sym_DQUOTE] = ACTIONS(1672),
    [sym__quoted_chars] = ACTIONS(339),
    [anon_sym_DOLLAR] = ACTIONS(161),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(163),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(165),
    [sym_comment] = ACTIONS(155),
  },
  [525] = {
    [sym_file_descriptor] = ACTIONS(477),
    [anon_sym_RPAREN] = ACTIONS(453),
    [anon_sym_SEMI_SEMI] = ACTIONS(453),
    [anon_sym_PIPE] = ACTIONS(453),
    [anon_sym_PIPE_AMP] = ACTIONS(453),
    [anon_sym_AMP_AMP] = ACTIONS(453),
    [anon_sym_PIPE_PIPE] = ACTIONS(453),
    [anon_sym_DQUOTE] = ACTIONS(453),
    [sym_single_quoted_argument] = ACTIONS(453),
    [anon_sym_DOLLAR] = ACTIONS(453),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(453),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(453),
    [anon_sym_LT] = ACTIONS(453),
    [anon_sym_GT] = ACTIONS(453),
    [anon_sym_GT_GT] = ACTIONS(453),
    [anon_sym_AMP_GT] = ACTIONS(453),
    [anon_sym_AMP_GT_GT] = ACTIONS(453),
    [anon_sym_LT_AMP] = ACTIONS(453),
    [anon_sym_GT_AMP] = ACTIONS(453),
    [anon_sym_LT_LT] = ACTIONS(453),
    [anon_sym_LT_LT_DASH] = ACTIONS(453),
    [sym_word] = ACTIONS(453),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(453),
    [anon_sym_LF] = ACTIONS(453),
    [anon_sym_AMP] = ACTIONS(453),
  },
  [526] = {
    [sym_file_descriptor] = ACTIONS(481),
    [anon_sym_RPAREN] = ACTIONS(455),
    [anon_sym_SEMI_SEMI] = ACTIONS(455),
    [anon_sym_PIPE] = ACTIONS(455),
    [anon_sym_PIPE_AMP] = ACTIONS(455),
    [anon_sym_AMP_AMP] = ACTIONS(455),
    [anon_sym_PIPE_PIPE] = ACTIONS(455),
    [anon_sym_DQUOTE] = ACTIONS(455),
    [sym_single_quoted_argument] = ACTIONS(455),
    [anon_sym_DOLLAR] = ACTIONS(455),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(455),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(455),
    [anon_sym_LT] = ACTIONS(455),
    [anon_sym_GT] = ACTIONS(455),
    [anon_sym_GT_GT] = ACTIONS(455),
    [anon_sym_AMP_GT] = ACTIONS(455),
    [anon_sym_AMP_GT_GT] = ACTIONS(455),
    [anon_sym_LT_AMP] = ACTIONS(455),
    [anon_sym_GT_AMP] = ACTIONS(455),
    [anon_sym_LT_LT] = ACTIONS(455),
    [anon_sym_LT_LT_DASH] = ACTIONS(455),
    [sym_word] = ACTIONS(455),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(455),
    [anon_sym_LF] = ACTIONS(455),
    [anon_sym_AMP] = ACTIONS(455),
  },
  [527] = {
    [anon_sym_RBRACE] = ACTIONS(1674),
    [anon_sym_COLON] = ACTIONS(1676),
    [anon_sym_EQ] = ACTIONS(1678),
    [anon_sym_COLON_QMARK] = ACTIONS(1678),
    [anon_sym_COLON_DASH] = ACTIONS(1678),
    [sym_comment] = ACTIONS(75),
  },
  [528] = {
    [anon_sym_RPAREN] = ACTIONS(1680),
    [sym_comment] = ACTIONS(75),
  },
  [529] = {
    [sym_file_descriptor] = ACTIONS(497),
    [anon_sym_RPAREN] = ACTIONS(499),
    [anon_sym_SEMI_SEMI] = ACTIONS(499),
    [anon_sym_PIPE] = ACTIONS(499),
    [anon_sym_PIPE_AMP] = ACTIONS(499),
    [anon_sym_AMP_AMP] = ACTIONS(499),
    [anon_sym_PIPE_PIPE] = ACTIONS(499),
    [anon_sym_DQUOTE] = ACTIONS(499),
    [sym_single_quoted_argument] = ACTIONS(499),
    [anon_sym_DOLLAR] = ACTIONS(499),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(499),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(499),
    [anon_sym_LT] = ACTIONS(499),
    [anon_sym_GT] = ACTIONS(499),
    [anon_sym_GT_GT] = ACTIONS(499),
    [anon_sym_AMP_GT] = ACTIONS(499),
    [anon_sym_AMP_GT_GT] = ACTIONS(499),
    [anon_sym_LT_AMP] = ACTIONS(499),
    [anon_sym_GT_AMP] = ACTIONS(499),
    [anon_sym_LT_LT] = ACTIONS(499),
    [anon_sym_LT_LT_DASH] = ACTIONS(499),
    [sym_word] = ACTIONS(499),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(499),
    [anon_sym_LF] = ACTIONS(499),
    [anon_sym_AMP] = ACTIONS(499),
  },
  [530] = {
    [sym_file_descriptor] = ACTIONS(503),
    [anon_sym_RPAREN] = ACTIONS(505),
    [anon_sym_SEMI_SEMI] = ACTIONS(505),
    [anon_sym_PIPE] = ACTIONS(505),
    [anon_sym_PIPE_AMP] = ACTIONS(505),
    [anon_sym_AMP_AMP] = ACTIONS(505),
    [anon_sym_PIPE_PIPE] = ACTIONS(505),
    [anon_sym_DQUOTE] = ACTIONS(505),
    [sym_single_quoted_argument] = ACTIONS(505),
    [anon_sym_DOLLAR] = ACTIONS(505),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(505),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(505),
    [anon_sym_LT] = ACTIONS(505),
    [anon_sym_GT] = ACTIONS(505),
    [anon_sym_GT_GT] = ACTIONS(505),
    [anon_sym_AMP_GT] = ACTIONS(505),
    [anon_sym_AMP_GT_GT] = ACTIONS(505),
    [anon_sym_LT_AMP] = ACTIONS(505),
    [anon_sym_GT_AMP] = ACTIONS(505),
    [anon_sym_LT_LT] = ACTIONS(505),
    [anon_sym_LT_LT_DASH] = ACTIONS(505),
    [sym_word] = ACTIONS(505),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(505),
    [anon_sym_LF] = ACTIONS(505),
    [anon_sym_AMP] = ACTIONS(505),
  },
  [531] = {
    [sym_file_redirect] = STATE(473),
    [sym_heredoc_redirect] = STATE(473),
    [sym_file_descriptor] = ACTIONS(1116),
    [anon_sym_RPAREN] = ACTIONS(1682),
    [anon_sym_SEMI_SEMI] = ACTIONS(1682),
    [anon_sym_PIPE] = ACTIONS(1682),
    [anon_sym_PIPE_AMP] = ACTIONS(1682),
    [anon_sym_AMP_AMP] = ACTIONS(1682),
    [anon_sym_PIPE_PIPE] = ACTIONS(1682),
    [anon_sym_LT] = ACTIONS(1133),
    [anon_sym_GT] = ACTIONS(1133),
    [anon_sym_GT_GT] = ACTIONS(1133),
    [anon_sym_AMP_GT] = ACTIONS(1133),
    [anon_sym_AMP_GT_GT] = ACTIONS(1133),
    [anon_sym_LT_AMP] = ACTIONS(1133),
    [anon_sym_GT_AMP] = ACTIONS(1133),
    [anon_sym_LT_LT] = ACTIONS(1135),
    [anon_sym_LT_LT_DASH] = ACTIONS(1135),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(1682),
    [anon_sym_LF] = ACTIONS(1682),
    [anon_sym_AMP] = ACTIONS(1682),
  },
  [532] = {
    [sym_file_descriptor] = ACTIONS(323),
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
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(325),
    [anon_sym_LF] = ACTIONS(325),
    [anon_sym_AMP] = ACTIONS(325),
  },
  [533] = {
    [sym_expansion] = STATE(133),
    [sym_operator_expansion] = STATE(133),
    [sym_command_substitution] = STATE(133),
    [anon_sym_DQUOTE] = ACTIONS(1685),
    [sym__quoted_chars] = ACTIONS(339),
    [anon_sym_DOLLAR] = ACTIONS(161),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(163),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(165),
    [sym_comment] = ACTIONS(155),
  },
  [534] = {
    [sym_file_descriptor] = ACTIONS(477),
    [anon_sym_RPAREN] = ACTIONS(453),
    [anon_sym_SEMI_SEMI] = ACTIONS(453),
    [anon_sym_PIPE] = ACTIONS(453),
    [anon_sym_PIPE_AMP] = ACTIONS(453),
    [anon_sym_AMP_AMP] = ACTIONS(453),
    [anon_sym_PIPE_PIPE] = ACTIONS(453),
    [anon_sym_LT] = ACTIONS(453),
    [anon_sym_GT] = ACTIONS(453),
    [anon_sym_GT_GT] = ACTIONS(453),
    [anon_sym_AMP_GT] = ACTIONS(453),
    [anon_sym_AMP_GT_GT] = ACTIONS(453),
    [anon_sym_LT_AMP] = ACTIONS(453),
    [anon_sym_GT_AMP] = ACTIONS(453),
    [anon_sym_LT_LT] = ACTIONS(453),
    [anon_sym_LT_LT_DASH] = ACTIONS(453),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(453),
    [anon_sym_LF] = ACTIONS(453),
    [anon_sym_AMP] = ACTIONS(453),
  },
  [535] = {
    [sym_file_descriptor] = ACTIONS(481),
    [anon_sym_RPAREN] = ACTIONS(455),
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
    [anon_sym_LT_LT] = ACTIONS(455),
    [anon_sym_LT_LT_DASH] = ACTIONS(455),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(455),
    [anon_sym_LF] = ACTIONS(455),
    [anon_sym_AMP] = ACTIONS(455),
  },
  [536] = {
    [anon_sym_RBRACE] = ACTIONS(1687),
    [anon_sym_COLON] = ACTIONS(1689),
    [anon_sym_EQ] = ACTIONS(1691),
    [anon_sym_COLON_QMARK] = ACTIONS(1691),
    [anon_sym_COLON_DASH] = ACTIONS(1691),
    [sym_comment] = ACTIONS(75),
  },
  [537] = {
    [anon_sym_RPAREN] = ACTIONS(1693),
    [sym_comment] = ACTIONS(75),
  },
  [538] = {
    [sym_file_descriptor] = ACTIONS(561),
    [anon_sym_SEMI_SEMI] = ACTIONS(563),
    [anon_sym_RBRACE] = ACTIONS(563),
    [anon_sym_COLON] = ACTIONS(563),
    [anon_sym_PIPE] = ACTIONS(563),
    [anon_sym_PIPE_AMP] = ACTIONS(563),
    [anon_sym_AMP_AMP] = ACTIONS(563),
    [anon_sym_PIPE_PIPE] = ACTIONS(563),
    [anon_sym_DQUOTE] = ACTIONS(563),
    [sym_single_quoted_argument] = ACTIONS(563),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(563),
    [anon_sym_LT] = ACTIONS(563),
    [anon_sym_GT] = ACTIONS(563),
    [anon_sym_GT_GT] = ACTIONS(563),
    [anon_sym_AMP_GT] = ACTIONS(563),
    [anon_sym_AMP_GT_GT] = ACTIONS(563),
    [anon_sym_LT_AMP] = ACTIONS(563),
    [anon_sym_GT_AMP] = ACTIONS(563),
    [sym_leading_word] = ACTIONS(563),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(563),
    [anon_sym_LF] = ACTIONS(563),
    [anon_sym_AMP] = ACTIONS(563),
  },
  [539] = {
    [sym_file_descriptor] = ACTIONS(699),
    [anon_sym_SEMI_SEMI] = ACTIONS(687),
    [anon_sym_RBRACE] = ACTIONS(687),
    [anon_sym_COLON] = ACTIONS(687),
    [anon_sym_PIPE] = ACTIONS(687),
    [anon_sym_PIPE_AMP] = ACTIONS(687),
    [anon_sym_AMP_AMP] = ACTIONS(687),
    [anon_sym_PIPE_PIPE] = ACTIONS(687),
    [anon_sym_DQUOTE] = ACTIONS(687),
    [sym_single_quoted_argument] = ACTIONS(687),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(687),
    [anon_sym_LT] = ACTIONS(687),
    [anon_sym_GT] = ACTIONS(687),
    [anon_sym_GT_GT] = ACTIONS(687),
    [anon_sym_AMP_GT] = ACTIONS(687),
    [anon_sym_AMP_GT_GT] = ACTIONS(687),
    [anon_sym_LT_AMP] = ACTIONS(687),
    [anon_sym_GT_AMP] = ACTIONS(687),
    [sym_leading_word] = ACTIONS(687),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(687),
    [anon_sym_LF] = ACTIONS(687),
    [anon_sym_AMP] = ACTIONS(687),
  },
  [540] = {
    [sym_quoted_argument] = STATE(566),
    [sym_expansion] = STATE(566),
    [sym_operator_expansion] = STATE(566),
    [sym_command_substitution] = STATE(566),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [sym_single_quoted_argument] = ACTIONS(1695),
    [anon_sym_DOLLAR] = ACTIONS(137),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(139),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(141),
    [sym_word] = ACTIONS(1697),
    [sym_comment] = ACTIONS(75),
  },
  [541] = {
    [sym_file_descriptor] = ACTIONS(617),
    [anon_sym_SEMI_SEMI] = ACTIONS(619),
    [anon_sym_RBRACE] = ACTIONS(619),
    [anon_sym_COLON] = ACTIONS(619),
    [anon_sym_PIPE] = ACTIONS(619),
    [anon_sym_PIPE_AMP] = ACTIONS(619),
    [anon_sym_AMP_AMP] = ACTIONS(619),
    [anon_sym_PIPE_PIPE] = ACTIONS(619),
    [anon_sym_DQUOTE] = ACTIONS(619),
    [sym_single_quoted_argument] = ACTIONS(619),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(619),
    [anon_sym_GT] = ACTIONS(619),
    [anon_sym_GT_GT] = ACTIONS(619),
    [anon_sym_AMP_GT] = ACTIONS(619),
    [anon_sym_AMP_GT_GT] = ACTIONS(619),
    [anon_sym_LT_AMP] = ACTIONS(619),
    [anon_sym_GT_AMP] = ACTIONS(619),
    [sym_leading_word] = ACTIONS(619),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(619),
    [anon_sym_LF] = ACTIONS(619),
    [anon_sym_AMP] = ACTIONS(619),
  },
  [542] = {
    [sym_file_descriptor] = ACTIONS(561),
    [anon_sym_RPAREN] = ACTIONS(563),
    [anon_sym_SEMI_SEMI] = ACTIONS(563),
    [anon_sym_COLON] = ACTIONS(563),
    [anon_sym_PIPE] = ACTIONS(563),
    [anon_sym_PIPE_AMP] = ACTIONS(563),
    [anon_sym_AMP_AMP] = ACTIONS(563),
    [anon_sym_PIPE_PIPE] = ACTIONS(563),
    [anon_sym_DQUOTE] = ACTIONS(563),
    [sym_single_quoted_argument] = ACTIONS(563),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(563),
    [anon_sym_LT] = ACTIONS(563),
    [anon_sym_GT] = ACTIONS(563),
    [anon_sym_GT_GT] = ACTIONS(563),
    [anon_sym_AMP_GT] = ACTIONS(563),
    [anon_sym_AMP_GT_GT] = ACTIONS(563),
    [anon_sym_LT_AMP] = ACTIONS(563),
    [anon_sym_GT_AMP] = ACTIONS(563),
    [anon_sym_LT_LT] = ACTIONS(563),
    [anon_sym_LT_LT_DASH] = ACTIONS(563),
    [sym_leading_word] = ACTIONS(563),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(563),
    [anon_sym_LF] = ACTIONS(563),
    [anon_sym_AMP] = ACTIONS(563),
  },
  [543] = {
    [sym_file_descriptor] = ACTIONS(699),
    [anon_sym_RPAREN] = ACTIONS(687),
    [anon_sym_SEMI_SEMI] = ACTIONS(687),
    [anon_sym_COLON] = ACTIONS(687),
    [anon_sym_PIPE] = ACTIONS(687),
    [anon_sym_PIPE_AMP] = ACTIONS(687),
    [anon_sym_AMP_AMP] = ACTIONS(687),
    [anon_sym_PIPE_PIPE] = ACTIONS(687),
    [anon_sym_DQUOTE] = ACTIONS(687),
    [sym_single_quoted_argument] = ACTIONS(687),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(687),
    [anon_sym_LT] = ACTIONS(687),
    [anon_sym_GT] = ACTIONS(687),
    [anon_sym_GT_GT] = ACTIONS(687),
    [anon_sym_AMP_GT] = ACTIONS(687),
    [anon_sym_AMP_GT_GT] = ACTIONS(687),
    [anon_sym_LT_AMP] = ACTIONS(687),
    [anon_sym_GT_AMP] = ACTIONS(687),
    [anon_sym_LT_LT] = ACTIONS(687),
    [anon_sym_LT_LT_DASH] = ACTIONS(687),
    [sym_leading_word] = ACTIONS(687),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(687),
    [anon_sym_LF] = ACTIONS(687),
    [anon_sym_AMP] = ACTIONS(687),
  },
  [544] = {
    [sym_quoted_argument] = STATE(568),
    [sym_expansion] = STATE(568),
    [sym_operator_expansion] = STATE(568),
    [sym_command_substitution] = STATE(568),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [sym_single_quoted_argument] = ACTIONS(1699),
    [anon_sym_DOLLAR] = ACTIONS(137),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(139),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(141),
    [sym_word] = ACTIONS(1701),
    [sym_comment] = ACTIONS(75),
  },
  [545] = {
    [sym_file_descriptor] = ACTIONS(617),
    [anon_sym_RPAREN] = ACTIONS(619),
    [anon_sym_SEMI_SEMI] = ACTIONS(619),
    [anon_sym_COLON] = ACTIONS(619),
    [anon_sym_PIPE] = ACTIONS(619),
    [anon_sym_PIPE_AMP] = ACTIONS(619),
    [anon_sym_AMP_AMP] = ACTIONS(619),
    [anon_sym_PIPE_PIPE] = ACTIONS(619),
    [anon_sym_DQUOTE] = ACTIONS(619),
    [sym_single_quoted_argument] = ACTIONS(619),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(619),
    [anon_sym_GT] = ACTIONS(619),
    [anon_sym_GT_GT] = ACTIONS(619),
    [anon_sym_AMP_GT] = ACTIONS(619),
    [anon_sym_AMP_GT_GT] = ACTIONS(619),
    [anon_sym_LT_AMP] = ACTIONS(619),
    [anon_sym_GT_AMP] = ACTIONS(619),
    [anon_sym_LT_LT] = ACTIONS(619),
    [anon_sym_LT_LT_DASH] = ACTIONS(619),
    [sym_leading_word] = ACTIONS(619),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(619),
    [anon_sym_LF] = ACTIONS(619),
    [anon_sym_AMP] = ACTIONS(619),
  },
  [546] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1703),
    [anon_sym_PIPE] = ACTIONS(1703),
    [anon_sym_PIPE_AMP] = ACTIONS(1703),
    [anon_sym_AMP_AMP] = ACTIONS(1703),
    [anon_sym_PIPE_PIPE] = ACTIONS(1703),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(1703),
    [anon_sym_LF] = ACTIONS(1703),
    [anon_sym_AMP] = ACTIONS(1703),
  },
  [547] = {
    [sym_case_item] = STATE(329),
    [sym_quoted_argument] = STATE(268),
    [sym_expansion] = STATE(268),
    [sym_operator_expansion] = STATE(268),
    [sym_command_substitution] = STATE(268),
    [anon_sym_esac] = ACTIONS(1706),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [sym_single_quoted_argument] = ACTIONS(681),
    [anon_sym_DOLLAR] = ACTIONS(137),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(139),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(141),
    [sym_word] = ACTIONS(683),
    [sym_comment] = ACTIONS(75),
  },
  [548] = {
    [sym_file_descriptor] = ACTIONS(561),
    [anon_sym_RPAREN] = ACTIONS(563),
    [anon_sym_SEMI_SEMI] = ACTIONS(563),
    [anon_sym_RBRACK] = ACTIONS(563),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(563),
    [anon_sym_PIPE] = ACTIONS(563),
    [anon_sym_PIPE_AMP] = ACTIONS(563),
    [anon_sym_AMP_AMP] = ACTIONS(563),
    [anon_sym_PIPE_PIPE] = ACTIONS(563),
    [anon_sym_DQUOTE] = ACTIONS(563),
    [sym_single_quoted_argument] = ACTIONS(563),
    [anon_sym_DOLLAR] = ACTIONS(563),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(563),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(563),
    [anon_sym_LT] = ACTIONS(563),
    [anon_sym_GT] = ACTIONS(563),
    [anon_sym_GT_GT] = ACTIONS(563),
    [anon_sym_AMP_GT] = ACTIONS(563),
    [anon_sym_AMP_GT_GT] = ACTIONS(563),
    [anon_sym_LT_AMP] = ACTIONS(563),
    [anon_sym_GT_AMP] = ACTIONS(563),
    [anon_sym_LT_LT] = ACTIONS(563),
    [anon_sym_LT_LT_DASH] = ACTIONS(563),
    [sym_word] = ACTIONS(563),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(563),
    [anon_sym_LF] = ACTIONS(563),
    [anon_sym_AMP] = ACTIONS(563),
  },
  [549] = {
    [sym_file_descriptor] = ACTIONS(699),
    [anon_sym_RPAREN] = ACTIONS(687),
    [anon_sym_SEMI_SEMI] = ACTIONS(687),
    [anon_sym_RBRACK] = ACTIONS(687),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(687),
    [anon_sym_PIPE] = ACTIONS(687),
    [anon_sym_PIPE_AMP] = ACTIONS(687),
    [anon_sym_AMP_AMP] = ACTIONS(687),
    [anon_sym_PIPE_PIPE] = ACTIONS(687),
    [anon_sym_DQUOTE] = ACTIONS(687),
    [sym_single_quoted_argument] = ACTIONS(687),
    [anon_sym_DOLLAR] = ACTIONS(687),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(687),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(687),
    [anon_sym_LT] = ACTIONS(687),
    [anon_sym_GT] = ACTIONS(687),
    [anon_sym_GT_GT] = ACTIONS(687),
    [anon_sym_AMP_GT] = ACTIONS(687),
    [anon_sym_AMP_GT_GT] = ACTIONS(687),
    [anon_sym_LT_AMP] = ACTIONS(687),
    [anon_sym_GT_AMP] = ACTIONS(687),
    [anon_sym_LT_LT] = ACTIONS(687),
    [anon_sym_LT_LT_DASH] = ACTIONS(687),
    [sym_word] = ACTIONS(687),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(687),
    [anon_sym_LF] = ACTIONS(687),
    [anon_sym_AMP] = ACTIONS(687),
  },
  [550] = {
    [sym_quoted_argument] = STATE(571),
    [sym_expansion] = STATE(571),
    [sym_operator_expansion] = STATE(571),
    [sym_command_substitution] = STATE(571),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [sym_single_quoted_argument] = ACTIONS(1708),
    [anon_sym_DOLLAR] = ACTIONS(137),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(139),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(141),
    [sym_word] = ACTIONS(1710),
    [sym_comment] = ACTIONS(75),
  },
  [551] = {
    [sym_file_descriptor] = ACTIONS(617),
    [anon_sym_RPAREN] = ACTIONS(619),
    [anon_sym_SEMI_SEMI] = ACTIONS(619),
    [anon_sym_RBRACK] = ACTIONS(619),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(619),
    [anon_sym_PIPE] = ACTIONS(619),
    [anon_sym_PIPE_AMP] = ACTIONS(619),
    [anon_sym_AMP_AMP] = ACTIONS(619),
    [anon_sym_PIPE_PIPE] = ACTIONS(619),
    [anon_sym_DQUOTE] = ACTIONS(619),
    [sym_single_quoted_argument] = ACTIONS(619),
    [anon_sym_DOLLAR] = ACTIONS(619),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(619),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(619),
    [anon_sym_GT] = ACTIONS(619),
    [anon_sym_GT_GT] = ACTIONS(619),
    [anon_sym_AMP_GT] = ACTIONS(619),
    [anon_sym_AMP_GT_GT] = ACTIONS(619),
    [anon_sym_LT_AMP] = ACTIONS(619),
    [anon_sym_GT_AMP] = ACTIONS(619),
    [anon_sym_LT_LT] = ACTIONS(619),
    [anon_sym_LT_LT_DASH] = ACTIONS(619),
    [sym_word] = ACTIONS(619),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(619),
    [anon_sym_LF] = ACTIONS(619),
    [anon_sym_AMP] = ACTIONS(619),
  },
  [552] = {
    [sym_quoted_argument] = STATE(529),
    [sym_expansion] = STATE(529),
    [sym_operator_expansion] = STATE(529),
    [sym_command_substitution] = STATE(529),
    [sym_file_redirect] = STATE(434),
    [sym_heredoc_redirect] = STATE(434),
    [aux_sym_command_repeat2] = STATE(573),
    [sym_file_descriptor] = ACTIONS(1116),
    [anon_sym_RPAREN] = ACTIONS(719),
    [anon_sym_SEMI_SEMI] = ACTIONS(719),
    [anon_sym_PIPE] = ACTIONS(719),
    [anon_sym_PIPE_AMP] = ACTIONS(719),
    [anon_sym_AMP_AMP] = ACTIONS(719),
    [anon_sym_PIPE_PIPE] = ACTIONS(719),
    [anon_sym_DQUOTE] = ACTIONS(1495),
    [sym_single_quoted_argument] = ACTIONS(1621),
    [anon_sym_DOLLAR] = ACTIONS(1499),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1501),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1503),
    [anon_sym_LT] = ACTIONS(1133),
    [anon_sym_GT] = ACTIONS(1133),
    [anon_sym_GT_GT] = ACTIONS(1133),
    [anon_sym_AMP_GT] = ACTIONS(1133),
    [anon_sym_AMP_GT_GT] = ACTIONS(1133),
    [anon_sym_LT_AMP] = ACTIONS(1133),
    [anon_sym_GT_AMP] = ACTIONS(1133),
    [anon_sym_LT_LT] = ACTIONS(1135),
    [anon_sym_LT_LT_DASH] = ACTIONS(1135),
    [sym_word] = ACTIONS(1623),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(719),
    [anon_sym_LF] = ACTIONS(719),
    [anon_sym_AMP] = ACTIONS(719),
  },
  [553] = {
    [sym_file_redirect] = STATE(473),
    [sym_heredoc_redirect] = STATE(473),
    [sym_file_descriptor] = ACTIONS(1116),
    [anon_sym_RPAREN] = ACTIONS(719),
    [anon_sym_SEMI_SEMI] = ACTIONS(719),
    [anon_sym_PIPE] = ACTIONS(719),
    [anon_sym_PIPE_AMP] = ACTIONS(719),
    [anon_sym_AMP_AMP] = ACTIONS(719),
    [anon_sym_PIPE_PIPE] = ACTIONS(719),
    [anon_sym_LT] = ACTIONS(1133),
    [anon_sym_GT] = ACTIONS(1133),
    [anon_sym_GT_GT] = ACTIONS(1133),
    [anon_sym_AMP_GT] = ACTIONS(1133),
    [anon_sym_AMP_GT_GT] = ACTIONS(1133),
    [anon_sym_LT_AMP] = ACTIONS(1133),
    [anon_sym_GT_AMP] = ACTIONS(1133),
    [anon_sym_LT_LT] = ACTIONS(1135),
    [anon_sym_LT_LT_DASH] = ACTIONS(1135),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(719),
    [anon_sym_LF] = ACTIONS(719),
    [anon_sym_AMP] = ACTIONS(719),
  },
  [554] = {
    [sym_file_descriptor] = ACTIONS(561),
    [anon_sym_RPAREN] = ACTIONS(563),
    [anon_sym_SEMI_SEMI] = ACTIONS(563),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(563),
    [anon_sym_PIPE] = ACTIONS(563),
    [anon_sym_PIPE_AMP] = ACTIONS(563),
    [anon_sym_AMP_AMP] = ACTIONS(563),
    [anon_sym_PIPE_PIPE] = ACTIONS(563),
    [anon_sym_LT] = ACTIONS(563),
    [anon_sym_GT] = ACTIONS(563),
    [anon_sym_GT_GT] = ACTIONS(563),
    [anon_sym_AMP_GT] = ACTIONS(563),
    [anon_sym_AMP_GT_GT] = ACTIONS(563),
    [anon_sym_LT_AMP] = ACTIONS(563),
    [anon_sym_GT_AMP] = ACTIONS(563),
    [anon_sym_LT_LT] = ACTIONS(563),
    [anon_sym_LT_LT_DASH] = ACTIONS(563),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(563),
    [anon_sym_LF] = ACTIONS(563),
    [anon_sym_AMP] = ACTIONS(563),
  },
  [555] = {
    [sym_file_descriptor] = ACTIONS(617),
    [anon_sym_RPAREN] = ACTIONS(619),
    [anon_sym_SEMI_SEMI] = ACTIONS(619),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(619),
    [anon_sym_PIPE] = ACTIONS(619),
    [anon_sym_PIPE_AMP] = ACTIONS(619),
    [anon_sym_AMP_AMP] = ACTIONS(619),
    [anon_sym_PIPE_PIPE] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(619),
    [anon_sym_GT] = ACTIONS(619),
    [anon_sym_GT_GT] = ACTIONS(619),
    [anon_sym_AMP_GT] = ACTIONS(619),
    [anon_sym_AMP_GT_GT] = ACTIONS(619),
    [anon_sym_LT_AMP] = ACTIONS(619),
    [anon_sym_GT_AMP] = ACTIONS(619),
    [anon_sym_LT_LT] = ACTIONS(619),
    [anon_sym_LT_LT_DASH] = ACTIONS(619),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(619),
    [anon_sym_LF] = ACTIONS(619),
    [anon_sym_AMP] = ACTIONS(619),
  },
  [556] = {
    [sym_quoted_argument] = STATE(529),
    [sym_expansion] = STATE(529),
    [sym_operator_expansion] = STATE(529),
    [sym_command_substitution] = STATE(529),
    [sym_file_redirect] = STATE(434),
    [sym_heredoc_redirect] = STATE(434),
    [aux_sym_command_repeat2] = STATE(574),
    [sym_file_descriptor] = ACTIONS(1116),
    [anon_sym_RPAREN] = ACTIONS(807),
    [anon_sym_SEMI_SEMI] = ACTIONS(807),
    [anon_sym_PIPE] = ACTIONS(807),
    [anon_sym_PIPE_AMP] = ACTIONS(807),
    [anon_sym_AMP_AMP] = ACTIONS(807),
    [anon_sym_PIPE_PIPE] = ACTIONS(807),
    [anon_sym_DQUOTE] = ACTIONS(1495),
    [sym_single_quoted_argument] = ACTIONS(1621),
    [anon_sym_DOLLAR] = ACTIONS(1499),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1501),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1503),
    [anon_sym_LT] = ACTIONS(1133),
    [anon_sym_GT] = ACTIONS(1133),
    [anon_sym_GT_GT] = ACTIONS(1133),
    [anon_sym_AMP_GT] = ACTIONS(1133),
    [anon_sym_AMP_GT_GT] = ACTIONS(1133),
    [anon_sym_LT_AMP] = ACTIONS(1133),
    [anon_sym_GT_AMP] = ACTIONS(1133),
    [anon_sym_LT_LT] = ACTIONS(1135),
    [anon_sym_LT_LT_DASH] = ACTIONS(1135),
    [sym_word] = ACTIONS(1623),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(807),
    [anon_sym_LF] = ACTIONS(807),
    [anon_sym_AMP] = ACTIONS(807),
  },
  [557] = {
    [sym_file_redirect] = STATE(473),
    [sym_heredoc_redirect] = STATE(473),
    [sym_file_descriptor] = ACTIONS(1116),
    [anon_sym_RPAREN] = ACTIONS(807),
    [anon_sym_SEMI_SEMI] = ACTIONS(807),
    [anon_sym_PIPE] = ACTIONS(807),
    [anon_sym_PIPE_AMP] = ACTIONS(807),
    [anon_sym_AMP_AMP] = ACTIONS(807),
    [anon_sym_PIPE_PIPE] = ACTIONS(807),
    [anon_sym_LT] = ACTIONS(1133),
    [anon_sym_GT] = ACTIONS(1133),
    [anon_sym_GT_GT] = ACTIONS(1133),
    [anon_sym_AMP_GT] = ACTIONS(1133),
    [anon_sym_AMP_GT_GT] = ACTIONS(1133),
    [anon_sym_LT_AMP] = ACTIONS(1133),
    [anon_sym_GT_AMP] = ACTIONS(1133),
    [anon_sym_LT_LT] = ACTIONS(1135),
    [anon_sym_LT_LT_DASH] = ACTIONS(1135),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(807),
    [anon_sym_LF] = ACTIONS(807),
    [anon_sym_AMP] = ACTIONS(807),
  },
  [558] = {
    [sym_file_descriptor] = ACTIONS(561),
    [anon_sym_RPAREN] = ACTIONS(563),
    [anon_sym_SEMI_SEMI] = ACTIONS(563),
    [anon_sym_PIPE] = ACTIONS(563),
    [anon_sym_PIPE_AMP] = ACTIONS(563),
    [anon_sym_AMP_AMP] = ACTIONS(563),
    [anon_sym_PIPE_PIPE] = ACTIONS(563),
    [anon_sym_DQUOTE] = ACTIONS(563),
    [sym_single_quoted_argument] = ACTIONS(563),
    [anon_sym_DOLLAR] = ACTIONS(563),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(563),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(563),
    [anon_sym_LT] = ACTIONS(563),
    [anon_sym_GT] = ACTIONS(563),
    [anon_sym_GT_GT] = ACTIONS(563),
    [anon_sym_AMP_GT] = ACTIONS(563),
    [anon_sym_AMP_GT_GT] = ACTIONS(563),
    [anon_sym_LT_AMP] = ACTIONS(563),
    [anon_sym_GT_AMP] = ACTIONS(563),
    [anon_sym_LT_LT] = ACTIONS(563),
    [anon_sym_LT_LT_DASH] = ACTIONS(563),
    [sym_word] = ACTIONS(563),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(563),
    [anon_sym_LF] = ACTIONS(563),
    [anon_sym_AMP] = ACTIONS(563),
  },
  [559] = {
    [sym_file_descriptor] = ACTIONS(699),
    [anon_sym_RPAREN] = ACTIONS(687),
    [anon_sym_SEMI_SEMI] = ACTIONS(687),
    [anon_sym_PIPE] = ACTIONS(687),
    [anon_sym_PIPE_AMP] = ACTIONS(687),
    [anon_sym_AMP_AMP] = ACTIONS(687),
    [anon_sym_PIPE_PIPE] = ACTIONS(687),
    [anon_sym_DQUOTE] = ACTIONS(687),
    [sym_single_quoted_argument] = ACTIONS(687),
    [anon_sym_DOLLAR] = ACTIONS(687),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(687),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(687),
    [anon_sym_LT] = ACTIONS(687),
    [anon_sym_GT] = ACTIONS(687),
    [anon_sym_GT_GT] = ACTIONS(687),
    [anon_sym_AMP_GT] = ACTIONS(687),
    [anon_sym_AMP_GT_GT] = ACTIONS(687),
    [anon_sym_LT_AMP] = ACTIONS(687),
    [anon_sym_GT_AMP] = ACTIONS(687),
    [anon_sym_LT_LT] = ACTIONS(687),
    [anon_sym_LT_LT_DASH] = ACTIONS(687),
    [sym_word] = ACTIONS(687),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(687),
    [anon_sym_LF] = ACTIONS(687),
    [anon_sym_AMP] = ACTIONS(687),
  },
  [560] = {
    [sym_quoted_argument] = STATE(575),
    [sym_expansion] = STATE(575),
    [sym_operator_expansion] = STATE(575),
    [sym_command_substitution] = STATE(575),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [sym_single_quoted_argument] = ACTIONS(1712),
    [anon_sym_DOLLAR] = ACTIONS(137),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(139),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(141),
    [sym_word] = ACTIONS(1714),
    [sym_comment] = ACTIONS(75),
  },
  [561] = {
    [sym_file_descriptor] = ACTIONS(617),
    [anon_sym_RPAREN] = ACTIONS(619),
    [anon_sym_SEMI_SEMI] = ACTIONS(619),
    [anon_sym_PIPE] = ACTIONS(619),
    [anon_sym_PIPE_AMP] = ACTIONS(619),
    [anon_sym_AMP_AMP] = ACTIONS(619),
    [anon_sym_PIPE_PIPE] = ACTIONS(619),
    [anon_sym_DQUOTE] = ACTIONS(619),
    [sym_single_quoted_argument] = ACTIONS(619),
    [anon_sym_DOLLAR] = ACTIONS(619),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(619),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(619),
    [anon_sym_GT] = ACTIONS(619),
    [anon_sym_GT_GT] = ACTIONS(619),
    [anon_sym_AMP_GT] = ACTIONS(619),
    [anon_sym_AMP_GT_GT] = ACTIONS(619),
    [anon_sym_LT_AMP] = ACTIONS(619),
    [anon_sym_GT_AMP] = ACTIONS(619),
    [anon_sym_LT_LT] = ACTIONS(619),
    [anon_sym_LT_LT_DASH] = ACTIONS(619),
    [sym_word] = ACTIONS(619),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(619),
    [anon_sym_LF] = ACTIONS(619),
    [anon_sym_AMP] = ACTIONS(619),
  },
  [562] = {
    [sym_file_descriptor] = ACTIONS(561),
    [anon_sym_RPAREN] = ACTIONS(563),
    [anon_sym_SEMI_SEMI] = ACTIONS(563),
    [anon_sym_PIPE] = ACTIONS(563),
    [anon_sym_PIPE_AMP] = ACTIONS(563),
    [anon_sym_AMP_AMP] = ACTIONS(563),
    [anon_sym_PIPE_PIPE] = ACTIONS(563),
    [anon_sym_LT] = ACTIONS(563),
    [anon_sym_GT] = ACTIONS(563),
    [anon_sym_GT_GT] = ACTIONS(563),
    [anon_sym_AMP_GT] = ACTIONS(563),
    [anon_sym_AMP_GT_GT] = ACTIONS(563),
    [anon_sym_LT_AMP] = ACTIONS(563),
    [anon_sym_GT_AMP] = ACTIONS(563),
    [anon_sym_LT_LT] = ACTIONS(563),
    [anon_sym_LT_LT_DASH] = ACTIONS(563),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(563),
    [anon_sym_LF] = ACTIONS(563),
    [anon_sym_AMP] = ACTIONS(563),
  },
  [563] = {
    [sym_file_descriptor] = ACTIONS(699),
    [anon_sym_RPAREN] = ACTIONS(687),
    [anon_sym_SEMI_SEMI] = ACTIONS(687),
    [anon_sym_PIPE] = ACTIONS(687),
    [anon_sym_PIPE_AMP] = ACTIONS(687),
    [anon_sym_AMP_AMP] = ACTIONS(687),
    [anon_sym_PIPE_PIPE] = ACTIONS(687),
    [anon_sym_LT] = ACTIONS(687),
    [anon_sym_GT] = ACTIONS(687),
    [anon_sym_GT_GT] = ACTIONS(687),
    [anon_sym_AMP_GT] = ACTIONS(687),
    [anon_sym_AMP_GT_GT] = ACTIONS(687),
    [anon_sym_LT_AMP] = ACTIONS(687),
    [anon_sym_GT_AMP] = ACTIONS(687),
    [anon_sym_LT_LT] = ACTIONS(687),
    [anon_sym_LT_LT_DASH] = ACTIONS(687),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(687),
    [anon_sym_LF] = ACTIONS(687),
    [anon_sym_AMP] = ACTIONS(687),
  },
  [564] = {
    [sym_quoted_argument] = STATE(577),
    [sym_expansion] = STATE(577),
    [sym_operator_expansion] = STATE(577),
    [sym_command_substitution] = STATE(577),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [sym_single_quoted_argument] = ACTIONS(1716),
    [anon_sym_DOLLAR] = ACTIONS(137),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(139),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(141),
    [sym_word] = ACTIONS(1718),
    [sym_comment] = ACTIONS(75),
  },
  [565] = {
    [sym_file_descriptor] = ACTIONS(617),
    [anon_sym_RPAREN] = ACTIONS(619),
    [anon_sym_SEMI_SEMI] = ACTIONS(619),
    [anon_sym_PIPE] = ACTIONS(619),
    [anon_sym_PIPE_AMP] = ACTIONS(619),
    [anon_sym_AMP_AMP] = ACTIONS(619),
    [anon_sym_PIPE_PIPE] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(619),
    [anon_sym_GT] = ACTIONS(619),
    [anon_sym_GT_GT] = ACTIONS(619),
    [anon_sym_AMP_GT] = ACTIONS(619),
    [anon_sym_AMP_GT_GT] = ACTIONS(619),
    [anon_sym_LT_AMP] = ACTIONS(619),
    [anon_sym_GT_AMP] = ACTIONS(619),
    [anon_sym_LT_LT] = ACTIONS(619),
    [anon_sym_LT_LT_DASH] = ACTIONS(619),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(619),
    [anon_sym_LF] = ACTIONS(619),
    [anon_sym_AMP] = ACTIONS(619),
  },
  [566] = {
    [anon_sym_RBRACE] = ACTIONS(1720),
    [sym_comment] = ACTIONS(75),
  },
  [567] = {
    [anon_sym_RBRACE] = ACTIONS(1722),
    [sym_comment] = ACTIONS(75),
  },
  [568] = {
    [anon_sym_RBRACE] = ACTIONS(1724),
    [sym_comment] = ACTIONS(75),
  },
  [569] = {
    [anon_sym_RBRACE] = ACTIONS(1726),
    [sym_comment] = ACTIONS(75),
  },
  [570] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1728),
    [anon_sym_PIPE] = ACTIONS(1728),
    [anon_sym_PIPE_AMP] = ACTIONS(1728),
    [anon_sym_AMP_AMP] = ACTIONS(1728),
    [anon_sym_PIPE_PIPE] = ACTIONS(1728),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(1728),
    [anon_sym_LF] = ACTIONS(1728),
    [anon_sym_AMP] = ACTIONS(1728),
  },
  [571] = {
    [anon_sym_RBRACE] = ACTIONS(1731),
    [sym_comment] = ACTIONS(75),
  },
  [572] = {
    [anon_sym_RBRACE] = ACTIONS(1733),
    [sym_comment] = ACTIONS(75),
  },
  [573] = {
    [sym_file_redirect] = STATE(473),
    [sym_heredoc_redirect] = STATE(473),
    [sym_file_descriptor] = ACTIONS(1116),
    [anon_sym_RPAREN] = ACTIONS(909),
    [anon_sym_SEMI_SEMI] = ACTIONS(909),
    [anon_sym_PIPE] = ACTIONS(909),
    [anon_sym_PIPE_AMP] = ACTIONS(909),
    [anon_sym_AMP_AMP] = ACTIONS(909),
    [anon_sym_PIPE_PIPE] = ACTIONS(909),
    [anon_sym_LT] = ACTIONS(1133),
    [anon_sym_GT] = ACTIONS(1133),
    [anon_sym_GT_GT] = ACTIONS(1133),
    [anon_sym_AMP_GT] = ACTIONS(1133),
    [anon_sym_AMP_GT_GT] = ACTIONS(1133),
    [anon_sym_LT_AMP] = ACTIONS(1133),
    [anon_sym_GT_AMP] = ACTIONS(1133),
    [anon_sym_LT_LT] = ACTIONS(1135),
    [anon_sym_LT_LT_DASH] = ACTIONS(1135),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(909),
    [anon_sym_LF] = ACTIONS(909),
    [anon_sym_AMP] = ACTIONS(909),
  },
  [574] = {
    [sym_file_redirect] = STATE(473),
    [sym_heredoc_redirect] = STATE(473),
    [sym_file_descriptor] = ACTIONS(1116),
    [anon_sym_RPAREN] = ACTIONS(911),
    [anon_sym_SEMI_SEMI] = ACTIONS(911),
    [anon_sym_PIPE] = ACTIONS(911),
    [anon_sym_PIPE_AMP] = ACTIONS(911),
    [anon_sym_AMP_AMP] = ACTIONS(911),
    [anon_sym_PIPE_PIPE] = ACTIONS(911),
    [anon_sym_LT] = ACTIONS(1133),
    [anon_sym_GT] = ACTIONS(1133),
    [anon_sym_GT_GT] = ACTIONS(1133),
    [anon_sym_AMP_GT] = ACTIONS(1133),
    [anon_sym_AMP_GT_GT] = ACTIONS(1133),
    [anon_sym_LT_AMP] = ACTIONS(1133),
    [anon_sym_GT_AMP] = ACTIONS(1133),
    [anon_sym_LT_LT] = ACTIONS(1135),
    [anon_sym_LT_LT_DASH] = ACTIONS(1135),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(911),
    [anon_sym_LF] = ACTIONS(911),
    [anon_sym_AMP] = ACTIONS(911),
  },
  [575] = {
    [anon_sym_RBRACE] = ACTIONS(1735),
    [sym_comment] = ACTIONS(75),
  },
  [576] = {
    [anon_sym_RBRACE] = ACTIONS(1737),
    [sym_comment] = ACTIONS(75),
  },
  [577] = {
    [anon_sym_RBRACE] = ACTIONS(1739),
    [sym_comment] = ACTIONS(75),
  },
  [578] = {
    [anon_sym_RBRACE] = ACTIONS(1741),
    [sym_comment] = ACTIONS(75),
  },
  [579] = {
    [sym_file_descriptor] = ACTIONS(941),
    [anon_sym_SEMI_SEMI] = ACTIONS(933),
    [anon_sym_RBRACE] = ACTIONS(933),
    [anon_sym_COLON] = ACTIONS(933),
    [anon_sym_PIPE] = ACTIONS(933),
    [anon_sym_PIPE_AMP] = ACTIONS(933),
    [anon_sym_AMP_AMP] = ACTIONS(933),
    [anon_sym_PIPE_PIPE] = ACTIONS(933),
    [anon_sym_DQUOTE] = ACTIONS(933),
    [sym_single_quoted_argument] = ACTIONS(933),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(933),
    [anon_sym_LT] = ACTIONS(933),
    [anon_sym_GT] = ACTIONS(933),
    [anon_sym_GT_GT] = ACTIONS(933),
    [anon_sym_AMP_GT] = ACTIONS(933),
    [anon_sym_AMP_GT_GT] = ACTIONS(933),
    [anon_sym_LT_AMP] = ACTIONS(933),
    [anon_sym_GT_AMP] = ACTIONS(933),
    [sym_leading_word] = ACTIONS(933),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(933),
    [anon_sym_LF] = ACTIONS(933),
    [anon_sym_AMP] = ACTIONS(933),
  },
  [580] = {
    [sym_file_descriptor] = ACTIONS(945),
    [anon_sym_SEMI_SEMI] = ACTIONS(935),
    [anon_sym_RBRACE] = ACTIONS(935),
    [anon_sym_COLON] = ACTIONS(935),
    [anon_sym_PIPE] = ACTIONS(935),
    [anon_sym_PIPE_AMP] = ACTIONS(935),
    [anon_sym_AMP_AMP] = ACTIONS(935),
    [anon_sym_PIPE_PIPE] = ACTIONS(935),
    [anon_sym_DQUOTE] = ACTIONS(935),
    [sym_single_quoted_argument] = ACTIONS(935),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(935),
    [anon_sym_LT] = ACTIONS(935),
    [anon_sym_GT] = ACTIONS(935),
    [anon_sym_GT_GT] = ACTIONS(935),
    [anon_sym_AMP_GT] = ACTIONS(935),
    [anon_sym_AMP_GT_GT] = ACTIONS(935),
    [anon_sym_LT_AMP] = ACTIONS(935),
    [anon_sym_GT_AMP] = ACTIONS(935),
    [sym_leading_word] = ACTIONS(935),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(935),
    [anon_sym_LF] = ACTIONS(935),
    [anon_sym_AMP] = ACTIONS(935),
  },
  [581] = {
    [sym_file_descriptor] = ACTIONS(941),
    [anon_sym_RPAREN] = ACTIONS(933),
    [anon_sym_SEMI_SEMI] = ACTIONS(933),
    [anon_sym_COLON] = ACTIONS(933),
    [anon_sym_PIPE] = ACTIONS(933),
    [anon_sym_PIPE_AMP] = ACTIONS(933),
    [anon_sym_AMP_AMP] = ACTIONS(933),
    [anon_sym_PIPE_PIPE] = ACTIONS(933),
    [anon_sym_DQUOTE] = ACTIONS(933),
    [sym_single_quoted_argument] = ACTIONS(933),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(933),
    [anon_sym_LT] = ACTIONS(933),
    [anon_sym_GT] = ACTIONS(933),
    [anon_sym_GT_GT] = ACTIONS(933),
    [anon_sym_AMP_GT] = ACTIONS(933),
    [anon_sym_AMP_GT_GT] = ACTIONS(933),
    [anon_sym_LT_AMP] = ACTIONS(933),
    [anon_sym_GT_AMP] = ACTIONS(933),
    [anon_sym_LT_LT] = ACTIONS(933),
    [anon_sym_LT_LT_DASH] = ACTIONS(933),
    [sym_leading_word] = ACTIONS(933),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(933),
    [anon_sym_LF] = ACTIONS(933),
    [anon_sym_AMP] = ACTIONS(933),
  },
  [582] = {
    [sym_file_descriptor] = ACTIONS(945),
    [anon_sym_RPAREN] = ACTIONS(935),
    [anon_sym_SEMI_SEMI] = ACTIONS(935),
    [anon_sym_COLON] = ACTIONS(935),
    [anon_sym_PIPE] = ACTIONS(935),
    [anon_sym_PIPE_AMP] = ACTIONS(935),
    [anon_sym_AMP_AMP] = ACTIONS(935),
    [anon_sym_PIPE_PIPE] = ACTIONS(935),
    [anon_sym_DQUOTE] = ACTIONS(935),
    [sym_single_quoted_argument] = ACTIONS(935),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(935),
    [anon_sym_LT] = ACTIONS(935),
    [anon_sym_GT] = ACTIONS(935),
    [anon_sym_GT_GT] = ACTIONS(935),
    [anon_sym_AMP_GT] = ACTIONS(935),
    [anon_sym_AMP_GT_GT] = ACTIONS(935),
    [anon_sym_LT_AMP] = ACTIONS(935),
    [anon_sym_GT_AMP] = ACTIONS(935),
    [anon_sym_LT_LT] = ACTIONS(935),
    [anon_sym_LT_LT_DASH] = ACTIONS(935),
    [sym_leading_word] = ACTIONS(935),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(935),
    [anon_sym_LF] = ACTIONS(935),
    [anon_sym_AMP] = ACTIONS(935),
  },
  [583] = {
    [sym_file_descriptor] = ACTIONS(941),
    [anon_sym_RPAREN] = ACTIONS(933),
    [anon_sym_SEMI_SEMI] = ACTIONS(933),
    [anon_sym_RBRACK] = ACTIONS(933),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(933),
    [anon_sym_PIPE] = ACTIONS(933),
    [anon_sym_PIPE_AMP] = ACTIONS(933),
    [anon_sym_AMP_AMP] = ACTIONS(933),
    [anon_sym_PIPE_PIPE] = ACTIONS(933),
    [anon_sym_DQUOTE] = ACTIONS(933),
    [sym_single_quoted_argument] = ACTIONS(933),
    [anon_sym_DOLLAR] = ACTIONS(933),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(933),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(933),
    [anon_sym_LT] = ACTIONS(933),
    [anon_sym_GT] = ACTIONS(933),
    [anon_sym_GT_GT] = ACTIONS(933),
    [anon_sym_AMP_GT] = ACTIONS(933),
    [anon_sym_AMP_GT_GT] = ACTIONS(933),
    [anon_sym_LT_AMP] = ACTIONS(933),
    [anon_sym_GT_AMP] = ACTIONS(933),
    [anon_sym_LT_LT] = ACTIONS(933),
    [anon_sym_LT_LT_DASH] = ACTIONS(933),
    [sym_word] = ACTIONS(933),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(933),
    [anon_sym_LF] = ACTIONS(933),
    [anon_sym_AMP] = ACTIONS(933),
  },
  [584] = {
    [sym_file_descriptor] = ACTIONS(945),
    [anon_sym_RPAREN] = ACTIONS(935),
    [anon_sym_SEMI_SEMI] = ACTIONS(935),
    [anon_sym_RBRACK] = ACTIONS(935),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(935),
    [anon_sym_PIPE] = ACTIONS(935),
    [anon_sym_PIPE_AMP] = ACTIONS(935),
    [anon_sym_AMP_AMP] = ACTIONS(935),
    [anon_sym_PIPE_PIPE] = ACTIONS(935),
    [anon_sym_DQUOTE] = ACTIONS(935),
    [sym_single_quoted_argument] = ACTIONS(935),
    [anon_sym_DOLLAR] = ACTIONS(935),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(935),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(935),
    [anon_sym_LT] = ACTIONS(935),
    [anon_sym_GT] = ACTIONS(935),
    [anon_sym_GT_GT] = ACTIONS(935),
    [anon_sym_AMP_GT] = ACTIONS(935),
    [anon_sym_AMP_GT_GT] = ACTIONS(935),
    [anon_sym_LT_AMP] = ACTIONS(935),
    [anon_sym_GT_AMP] = ACTIONS(935),
    [anon_sym_LT_LT] = ACTIONS(935),
    [anon_sym_LT_LT_DASH] = ACTIONS(935),
    [sym_word] = ACTIONS(935),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(935),
    [anon_sym_LF] = ACTIONS(935),
    [anon_sym_AMP] = ACTIONS(935),
  },
  [585] = {
    [sym_file_descriptor] = ACTIONS(941),
    [anon_sym_RPAREN] = ACTIONS(933),
    [anon_sym_SEMI_SEMI] = ACTIONS(933),
    [anon_sym_PIPE] = ACTIONS(933),
    [anon_sym_PIPE_AMP] = ACTIONS(933),
    [anon_sym_AMP_AMP] = ACTIONS(933),
    [anon_sym_PIPE_PIPE] = ACTIONS(933),
    [anon_sym_DQUOTE] = ACTIONS(933),
    [sym_single_quoted_argument] = ACTIONS(933),
    [anon_sym_DOLLAR] = ACTIONS(933),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(933),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(933),
    [anon_sym_LT] = ACTIONS(933),
    [anon_sym_GT] = ACTIONS(933),
    [anon_sym_GT_GT] = ACTIONS(933),
    [anon_sym_AMP_GT] = ACTIONS(933),
    [anon_sym_AMP_GT_GT] = ACTIONS(933),
    [anon_sym_LT_AMP] = ACTIONS(933),
    [anon_sym_GT_AMP] = ACTIONS(933),
    [anon_sym_LT_LT] = ACTIONS(933),
    [anon_sym_LT_LT_DASH] = ACTIONS(933),
    [sym_word] = ACTIONS(933),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(933),
    [anon_sym_LF] = ACTIONS(933),
    [anon_sym_AMP] = ACTIONS(933),
  },
  [586] = {
    [sym_file_descriptor] = ACTIONS(945),
    [anon_sym_RPAREN] = ACTIONS(935),
    [anon_sym_SEMI_SEMI] = ACTIONS(935),
    [anon_sym_PIPE] = ACTIONS(935),
    [anon_sym_PIPE_AMP] = ACTIONS(935),
    [anon_sym_AMP_AMP] = ACTIONS(935),
    [anon_sym_PIPE_PIPE] = ACTIONS(935),
    [anon_sym_DQUOTE] = ACTIONS(935),
    [sym_single_quoted_argument] = ACTIONS(935),
    [anon_sym_DOLLAR] = ACTIONS(935),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(935),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(935),
    [anon_sym_LT] = ACTIONS(935),
    [anon_sym_GT] = ACTIONS(935),
    [anon_sym_GT_GT] = ACTIONS(935),
    [anon_sym_AMP_GT] = ACTIONS(935),
    [anon_sym_AMP_GT_GT] = ACTIONS(935),
    [anon_sym_LT_AMP] = ACTIONS(935),
    [anon_sym_GT_AMP] = ACTIONS(935),
    [anon_sym_LT_LT] = ACTIONS(935),
    [anon_sym_LT_LT_DASH] = ACTIONS(935),
    [sym_word] = ACTIONS(935),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(935),
    [anon_sym_LF] = ACTIONS(935),
    [anon_sym_AMP] = ACTIONS(935),
  },
  [587] = {
    [sym_file_descriptor] = ACTIONS(941),
    [anon_sym_RPAREN] = ACTIONS(933),
    [anon_sym_SEMI_SEMI] = ACTIONS(933),
    [anon_sym_PIPE] = ACTIONS(933),
    [anon_sym_PIPE_AMP] = ACTIONS(933),
    [anon_sym_AMP_AMP] = ACTIONS(933),
    [anon_sym_PIPE_PIPE] = ACTIONS(933),
    [anon_sym_LT] = ACTIONS(933),
    [anon_sym_GT] = ACTIONS(933),
    [anon_sym_GT_GT] = ACTIONS(933),
    [anon_sym_AMP_GT] = ACTIONS(933),
    [anon_sym_AMP_GT_GT] = ACTIONS(933),
    [anon_sym_LT_AMP] = ACTIONS(933),
    [anon_sym_GT_AMP] = ACTIONS(933),
    [anon_sym_LT_LT] = ACTIONS(933),
    [anon_sym_LT_LT_DASH] = ACTIONS(933),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(933),
    [anon_sym_LF] = ACTIONS(933),
    [anon_sym_AMP] = ACTIONS(933),
  },
  [588] = {
    [sym_file_descriptor] = ACTIONS(945),
    [anon_sym_RPAREN] = ACTIONS(935),
    [anon_sym_SEMI_SEMI] = ACTIONS(935),
    [anon_sym_PIPE] = ACTIONS(935),
    [anon_sym_PIPE_AMP] = ACTIONS(935),
    [anon_sym_AMP_AMP] = ACTIONS(935),
    [anon_sym_PIPE_PIPE] = ACTIONS(935),
    [anon_sym_LT] = ACTIONS(935),
    [anon_sym_GT] = ACTIONS(935),
    [anon_sym_GT_GT] = ACTIONS(935),
    [anon_sym_AMP_GT] = ACTIONS(935),
    [anon_sym_AMP_GT_GT] = ACTIONS(935),
    [anon_sym_LT_AMP] = ACTIONS(935),
    [anon_sym_GT_AMP] = ACTIONS(935),
    [anon_sym_LT_LT] = ACTIONS(935),
    [anon_sym_LT_LT_DASH] = ACTIONS(935),
    [sym_comment] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(935),
    [anon_sym_LF] = ACTIONS(935),
    [anon_sym_AMP] = ACTIONS(935),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(396),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(397),
  [5] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(398),
  [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(399),
  [9] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(400),
  [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(158),
  [13] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
  [15] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(3),
  [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(381),
  [19] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(4),
  [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(84),
  [23] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(382),
  [25] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(5),
  [27] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(383),
  [29] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(384),
  [31] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(175),
  [33] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(176),
  [35] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(6),
  [37] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(385),
  [39] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(386),
  [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(7),
  [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(387),
  [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(247),
  [47] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(388),
  [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(9),
  [51] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(106),
  [53] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(106),
  [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(389),
  [57] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(75),
  [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(76),
  [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(390),
  [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(391),
  [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(392),
  [67] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(393),
  [69] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(393),
  [71] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(394),
  [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(394),
  [75] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(395),
  [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
  [81] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 0),
  [83] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
  [85] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
  [87] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
  [89] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
  [91] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
  [93] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(8),
  [95] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(9),
  [97] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(10),
  [99] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(11),
  [101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
  [103] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(11),
  [105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(13),
  [107] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(14),
  [109] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(15),
  [111] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(23),
  [113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(23),
  [115] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(24),
  [117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
  [119] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(30),
  [121] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(31),
  [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(32),
  [125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
  [127] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(34),
  [129] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(35),
  [131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
  [133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
  [135] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(39),
  [137] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(40),
  [139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
  [141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
  [143] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(46),
  [147] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 1),
  [149] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(47),
  [151] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(48),
  [153] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(49),
  [155] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [157] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(52),
  [159] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(53),
  [161] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(54),
  [163] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(55),
  [165] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(56),
  [167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
  [169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
  [171] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(58),
  [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(60),
  [175] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(61),
  [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
  [179] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(65),
  [181] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(66),
  [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(67),
  [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(68),
  [187] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(69),
  [189] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 1, .rename_sequence_id = 1),
  [191] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(70),
  [193] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(71),
  [195] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(72),
  [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [201] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [203] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [205] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(74),
  [207] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(75),
  [209] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(76),
  [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1),
  [213] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_command_repeat1, 1),
  [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(78),
  [221] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(78),
  [223] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(79),
  [225] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(81),
  [227] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(82),
  [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
  [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
  [233] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(86),
  [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
  [237] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(88),
  [239] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(90),
  [241] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(91),
  [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
  [245] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(93),
  [247] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(94),
  [249] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(96),
  [251] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(97),
  [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
  [255] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subshell, 2),
  [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
  [259] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(100),
  [261] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_bracket_command_repeat1, 1),
  [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1),
  [265] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
  [269] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(103),
  [271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(104),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_bracket_command_repeat1, 1, .rename_sequence_id = 2),
  [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1, .rename_sequence_id = 2),
  [277] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1, .rename_sequence_id = 2),
  [279] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(106),
  [281] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(107),
  [283] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(108),
  [285] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(109),
  [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(109),
  [289] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2),
  [291] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(110),
  [293] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(111),
  [295] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(112),
  [297] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(113),
  [299] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(114),
  [301] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(115),
  [303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
  [305] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(119),
  [307] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(120),
  [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(121),
  [311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(122),
  [313] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(123),
  [315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
  [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(125),
  [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 1),
  [321] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 1),
  [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2),
  [325] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2),
  [327] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_quoted_argument_repeat1, 1),
  [329] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_quoted_argument_repeat1, 1),
  [331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(128),
  [333] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(129),
  [335] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(130),
  [337] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(132),
  [339] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(133),
  [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(134),
  [343] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(135),
  [345] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(136),
  [347] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(137),
  [349] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(140),
  [351] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(143),
  [353] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(144),
  [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(146),
  [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
  [359] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(147),
  [361] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(148),
  [363] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(149),
  [365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2),
  [367] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 2),
  [369] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2),
  [371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(151),
  [373] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(152),
  [375] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(153),
  [377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 3),
  [379] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 3),
  [381] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 3),
  [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(155),
  [385] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2, .rename_sequence_id = 4),
  [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(158),
  [389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(159),
  [391] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(158),
  [393] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(160),
  [395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(161),
  [397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(162),
  [399] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(163),
  [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__terminated_statement, 2),
  [403] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__terminated_statement, 2),
  [405] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__terminated_statement, 2),
  [407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [409] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [411] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [413] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(168),
  [415] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2, .rename_sequence_id = 5),
  [417] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(169),
  [419] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 2),
  [421] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_command_repeat1, 2),
  [423] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 2),
  [425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 3),
  [427] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 3),
  [429] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 3),
  [431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 3, .rename_sequence_id = 6),
  [433] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 3, .rename_sequence_id = 6),
  [435] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 3, .rename_sequence_id = 6),
  [437] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(172),
  [439] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 3),
  [441] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(174),
  [443] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(175),
  [445] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(176),
  [447] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(181),
  [449] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(182),
  [451] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(183),
  [453] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expansion, 2),
  [455] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expansion, 2, .rename_sequence_id = 7),
  [457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(184),
  [459] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(185),
  [461] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(185),
  [463] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(186),
  [465] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(187),
  [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(188),
  [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(189),
  [471] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subshell, 3),
  [473] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_quoted_argument, 2),
  [475] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(190),
  [477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expansion, 2),
  [479] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expansion, 2),
  [481] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expansion, 2, .rename_sequence_id = 7),
  [483] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expansion, 2, .rename_sequence_id = 7),
  [485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(191),
  [487] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(192),
  [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(192),
  [491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(193),
  [493] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_bracket_command, 3),
  [495] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_bracket_command_repeat1, 2),
  [497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 2),
  [499] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 2),
  [501] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_bracket_command_repeat1, 2, .rename_sequence_id = 3),
  [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 2, .rename_sequence_id = 3),
  [505] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 2, .rename_sequence_id = 3),
  [507] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(194),
  [509] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(195),
  [511] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(196),
  [513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(198),
  [515] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(199),
  [517] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(200),
  [519] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3),
  [521] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(202),
  [523] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(203),
  [525] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(205),
  [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(207),
  [529] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(208),
  [531] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(209),
  [533] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 1),
  [535] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 1),
  [537] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(211),
  [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(212),
  [541] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(213),
  [543] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(214),
  [545] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_heredoc_redirect, 2),
  [547] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc_redirect, 2),
  [549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 2),
  [551] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 2),
  [553] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(216),
  [555] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(217),
  [557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(217),
  [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(218),
  [561] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 3),
  [563] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 3),
  [565] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_quoted_argument_repeat1, 2),
  [567] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_quoted_argument_repeat1, 2),
  [569] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(219),
  [571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(219),
  [573] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 2),
  [575] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(220),
  [577] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(221),
  [579] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(222),
  [581] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(223),
  [583] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(224),
  [585] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(136),
  [587] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(136),
  [589] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(137),
  [591] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(137),
  [593] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(225),
  [595] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(228),
  [597] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(229),
  [599] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(230),
  [601] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(231),
  [603] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_command_repeat2, 1),
  [605] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(234),
  [607] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(235),
  [609] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 2, .rename_sequence_id = 4),
  [611] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(238),
  [613] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(238),
  [615] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(239),
  [617] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3),
  [619] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3),
  [621] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(240),
  [623] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(241),
  [625] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(243),
  [627] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(244),
  [629] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(245),
  [631] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(245),
  [633] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(246),
  [635] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(247),
  [637] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .rename_sequence_id = 8),
  [639] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9),
  [641] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9),
  [643] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(250),
  [645] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(252),
  [647] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(253),
  [649] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(254),
  [651] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 10),
  [653] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 10),
  [655] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3, .fragile = true),
  [657] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list, 3, .fragile = true),
  [659] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .rename_sequence_id = 11),
  [661] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_group, 2),
  [663] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(260),
  [665] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
  [667] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 1),
  [669] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
  [671] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(263),
  [673] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(263),
  [675] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
  [677] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(176),
  [679] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(267),
  [681] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(268),
  [683] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(269),
  [685] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(272),
  [687] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 12),
  [689] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(273),
  [691] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(274),
  [693] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(275),
  [695] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(277),
  [697] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_quoted_argument, 3),
  [699] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 12),
  [701] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 12),
  [703] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(279),
  [705] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(280),
  [707] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_command_substitution, 3),
  [709] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(281),
  [711] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(282),
  [713] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(283),
  [715] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(283),
  [717] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(284),
  [719] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 4),
  [721] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(285),
  [723] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(286),
  [725] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(287),
  [727] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(287),
  [729] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(288),
  [731] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_heredoc_repeat1, 1),
  [733] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_heredoc_repeat1, 1),
  [735] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 2),
  [737] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 2),
  [739] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(289),
  [741] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(290),
  [743] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(291),
  [745] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(292),
  [747] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(293),
  [749] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(294),
  [751] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(295),
  [753] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(296),
  [755] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(297),
  [757] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(298),
  [759] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(300),
  [761] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(301),
  [763] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(302),
  [765] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 3),
  [767] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(304),
  [769] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(305),
  [771] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_heredoc, 1),
  [773] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(307),
  [775] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_heredoc_redirect, 2),
  [777] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_command_repeat2, 2),
  [779] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .rename_sequence_id = 8),
  [781] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9),
  [783] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 10),
  [785] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .rename_sequence_id = 11),
  [787] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(313),
  [789] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(314),
  [791] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(315),
  [793] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 4, .rename_sequence_id = 13),
  [795] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 4, .rename_sequence_id = 13),
  [797] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(317),
  [799] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(318),
  [801] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(319),
  [803] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(319),
  [805] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(320),
  [807] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 4, .rename_sequence_id = 14),
  [809] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 5, .rename_sequence_id = 15),
  [811] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_group, 3),
  [813] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(323),
  [815] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 2),
  [817] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
  [819] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(324),
  [821] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [823] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 5),
  [825] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(326),
  [827] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(327),
  [829] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_case_statement_repeat1, 1),
  [831] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_case_statement_repeat1, 1),
  [833] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_case_statement_repeat1, 1),
  [835] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(328),
  [837] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(331),
  [839] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(332),
  [841] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 5, .rename_sequence_id = 15),
  [843] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(333),
  [845] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5, .rename_sequence_id = 16),
  [847] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(335),
  [849] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(336),
  [851] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(337),
  [853] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(338),
  [855] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(339),
  [857] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(340),
  [859] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(341),
  [861] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(342),
  [863] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(342),
  [865] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_heredoc_repeat1, 2),
  [867] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_heredoc_repeat1, 2),
  [869] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 3),
  [871] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 3),
  [873] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(343),
  [875] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(344),
  [877] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(345),
  [879] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(346),
  [881] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(347),
  [883] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(347),
  [885] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(348),
  [887] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 4),
  [889] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_heredoc, 2),
  [891] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(349),
  [893] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 4, .rename_sequence_id = 13),
  [895] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 4, .rename_sequence_id = 14),
  [897] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(352),
  [899] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(353),
  [901] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_compound_command, 2),
  [903] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(354),
  [905] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(355),
  [907] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(356),
  [909] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 5),
  [911] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 5, .rename_sequence_id = 16),
  [913] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 3),
  [915] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
  [917] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(358),
  [919] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(359),
  [921] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(361),
  [923] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 6),
  [925] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_case_statement_repeat1, 2),
  [927] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_case_statement_repeat1, 2),
  [929] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_case_statement_repeat1, 2),
  [931] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(363),
  [933] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 17),
  [935] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 18),
  [937] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 6, .rename_sequence_id = 19),
  [939] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(364),
  [941] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 17),
  [943] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 17),
  [945] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 18),
  [947] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 18),
  [949] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(365),
  [951] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(366),
  [953] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(367),
  [955] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(368),
  [957] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(369),
  [959] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(370),
  [961] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(371),
  [963] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(372),
  [965] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_heredoc, 3),
  [967] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 5),
  [969] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 5, .rename_sequence_id = 16),
  [971] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_compound_command, 3),
  [973] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(373),
  [975] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(374),
  [977] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4),
  [979] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 7),
  [981] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 3),
  [983] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_case_item, 3),
  [985] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 3),
  [987] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(375),
  [989] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 3, .rename_sequence_id = 20),
  [991] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_case_item, 3, .rename_sequence_id = 20),
  [993] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 3, .rename_sequence_id = 20),
  [995] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(376),
  [997] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 7),
  [999] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 7, .rename_sequence_id = 21),
  [1001] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(377),
  [1003] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(378),
  [1005] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(379),
  [1007] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(380),
  [1009] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 4),
  [1011] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_case_item, 4),
  [1013] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 4),
  [1015] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 4, .rename_sequence_id = 22),
  [1017] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_case_item, 4, .rename_sequence_id = 22),
  [1019] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 4, .rename_sequence_id = 22),
  [1021] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(3),
  [1023] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(4),
  [1025] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(5),
  [1027] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(6),
  [1029] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(424),
  [1031] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(7),
  [1033] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(8),
  [1035] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(9),
  [1037] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(10),
  [1039] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(11),
  [1041] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(12),
  [1043] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(13),
  [1045] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(14),
  [1047] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_group, 2), REDUCE(sym_do_group, 3),
  [1050] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 3), SHIFT(174),
  [1053] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 3), SHIFT(175),
  [1056] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 3), SHIFT(176),
  [1059] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_if_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_if_statement, 7),
  [1064] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 5), REDUCE(sym_case_statement, 5, .rename_sequence_id = 15), REDUCE(sym_case_statement, 6), REDUCE(sym_case_statement, 6, .rename_sequence_id = 19), REDUCE(sym_case_statement, 7), REDUCE(sym_case_statement, 7, .rename_sequence_id = 21),
  [1071] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3), SHIFT(2),
  [1074] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subshell, 2), REDUCE(sym_subshell, 3), REDUCE(sym_command_substitution, 3), SHIFT(426),
  [1079] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(247),
  [1081] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3), SHIFT(11),
  [1084] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subshell, 2), REDUCE(sym_subshell, 3), REDUCE(sym_command_substitution, 3),
  [1088] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3), SHIFT(12),
  [1091] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3), SHIFT(13),
  [1094] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3), SHIFT(14),
  [1097] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3), SHIFT(15),
  [1100] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(428),
  [1102] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 12), REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 17), REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 18),
  [1106] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 12), REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 17), REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 18),
  [1110] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_compound_command, 2), REDUCE(sym_compound_command, 3), REDUCE(sym_operator_expansion, 3, .rename_sequence_id = 12), REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 17), REDUCE(sym_operator_expansion, 5, .rename_sequence_id = 18),
  [1116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(429),
  [1118] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 1), REDUCE(sym_command, 2),
  [1121] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(430),
  [1123] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(38),
  [1125] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(431),
  [1127] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(40),
  [1129] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(41),
  [1131] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(42),
  [1133] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(432),
  [1135] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(394),
  [1137] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(433),
  [1139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(436),
  [1141] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(437),
  [1143] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(438),
  [1145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(439),
  [1147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(440),
  [1149] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(441),
  [1151] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2), REDUCE(sym_quoted_argument, 3),
  [1154] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2), REDUCE(sym_quoted_argument, 3),
  [1157] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2), REDUCE(sym_quoted_argument, 3), SHIFT(442),
  [1161] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(53),
  [1163] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2), REDUCE(sym_quoted_argument, 3), SHIFT(54),
  [1167] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2), REDUCE(sym_quoted_argument, 3), SHIFT(55),
  [1171] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_quoted_argument, 2), REDUCE(sym_quoted_argument, 3), SHIFT(56),
  [1175] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expansion, 2), SHIFT(443),
  [1178] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expansion, 2), SHIFT(444),
  [1181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(445),
  [1183] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(446),
  [1185] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(447),
  [1187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(448),
  [1189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(449),
  [1191] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(450),
  [1193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(396),
  [1195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(397),
  [1197] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(451),
  [1199] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(452),
  [1201] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__terminated_statement, 2), SHIFT(38),
  [1204] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__terminated_statement, 2), SHIFT(268),
  [1207] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__terminated_statement, 2), SHIFT(42),
  [1210] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(453),
  [1212] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_heredoc_repeat1, 1), REDUCE(aux_sym_heredoc_repeat1, 2),
  [1215] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_heredoc_repeat1, 1), REDUCE(aux_sym_heredoc_repeat1, 2),
  [1218] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 2), REDUCE(sym_heredoc, 3),
  [1221] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 2), REDUCE(sym_heredoc, 3),
  [1224] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(454),
  [1226] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(454),
  [1228] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [1231] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [1234] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(84),
  [1236] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(383),
  [1238] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [1241] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3, .fragile = true), REDUCE(sym_list, 3, .fragile = true), SHIFT(74),
  [1245] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3, .fragile = true), REDUCE(sym_list, 3, .fragile = true), SHIFT(75),
  [1249] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3, .fragile = true), REDUCE(sym_list, 3, .fragile = true), SHIFT(76),
  [1253] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 3), REDUCE(sym_for_statement, 5, .rename_sequence_id = 15),
  [1256] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
  [1259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(455),
  [1261] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_case_statement_repeat1, 1), REDUCE(aux_sym_case_statement_repeat1, 2),
  [1264] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_case_statement_repeat1, 1), REDUCE(aux_sym_case_statement_repeat1, 2),
  [1267] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_case_statement_repeat1, 1), REDUCE(aux_sym_case_statement_repeat1, 2),
  [1270] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 4, .rename_sequence_id = 13), REDUCE(sym_function_definition, 5, .rename_sequence_id = 16),
  [1273] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(456),
  [1275] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3), REDUCE(sym_list, 3), SHIFT(74),
  [1279] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3), REDUCE(sym_list, 3), SHIFT(75),
  [1283] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3), REDUCE(sym_list, 3), SHIFT(76),
  [1287] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1), REDUCE(aux_sym_command_repeat1, 2),
  [1290] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1), REDUCE(aux_sym_command_repeat1, 2),
  [1293] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9), REDUCE(sym_file_redirect, 3), SHIFT(429),
  [1300] = {.count = 7, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 1), REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_command, 2), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_file_redirect, 3), SHIFT(326),
  [1308] = {.count = 8, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 1), REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_command, 2), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9), REDUCE(sym_file_redirect, 3), SHIFT(91),
  [1317] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(457),
  [1319] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(aux_sym_bracket_command_repeat1, 2),
  [1322] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9), REDUCE(sym_file_redirect, 3),
  [1326] = {.count = 7, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 1), REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_command, 2), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9), REDUCE(sym_file_redirect, 3),
  [1334] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9), REDUCE(sym_file_redirect, 3),
  [1340] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9), REDUCE(sym_file_redirect, 3), SHIFT(432),
  [1347] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_file_redirect, 3), SHIFT(394),
  [1353] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9), REDUCE(sym_file_redirect, 3),
  [1359] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_file_redirect, 3), SHIFT(326),
  [1365] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9), REDUCE(sym_file_redirect, 3), SHIFT(91),
  [1372] = {.count = 7, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(aux_sym_quoted_argument_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(aux_sym_quoted_argument_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 9), REDUCE(sym_file_redirect, 3),
  [1380] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_quoted_argument_repeat1, 1), REDUCE(aux_sym_quoted_argument_repeat1, 2),
  [1383] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(aux_sym_quoted_argument_repeat1, 1), REDUCE(aux_sym_heredoc_repeat1, 1), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(aux_sym_quoted_argument_repeat1, 2), REDUCE(aux_sym_heredoc_repeat1, 2),
  [1390] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_file_redirect, 3),
  [1395] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(aux_sym_quoted_argument_repeat1, 1), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(aux_sym_quoted_argument_repeat1, 2),
  [1400] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1), REDUCE(aux_sym_command_repeat2, 1), REDUCE(aux_sym_command_repeat1, 2), REDUCE(aux_sym_command_repeat2, 2),
  [1405] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 1), REDUCE(aux_sym_command_repeat2, 2),
  [1408] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1), REDUCE(aux_sym_command_repeat2, 1), REDUCE(aux_sym_command_repeat1, 2), REDUCE(aux_sym_command_repeat2, 2),
  [1413] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 1), REDUCE(aux_sym_command_repeat2, 2),
  [1416] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 2), REDUCE(sym_elif_clause, 4), SHIFT(263),
  [1420] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(175),
  [1423] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(176),
  [1426] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(458),
  [1428] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(459),
  [1430] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(461),
  [1432] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3), REDUCE(sym_command, 3, .rename_sequence_id = 8), REDUCE(sym_command, 4), REDUCE(sym_command, 4, .rename_sequence_id = 14),
  [1437] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(106),
  [1439] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(462),
  [1441] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(463),
  [1443] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(464),
  [1445] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(465),
  [1447] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(466),
  [1449] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(467),
  [1451] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(469),
  [1453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(470),
  [1455] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(469),
  [1457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(471),
  [1459] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(472),
  [1461] = {.count = 10, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2), REDUCE(sym_command, 2, .rename_sequence_id = 4), REDUCE(sym_command, 3), REDUCE(sym_command, 3, .rename_sequence_id = 11), REDUCE(sym_command, 3, .rename_sequence_id = 8), REDUCE(sym_command, 4), REDUCE(sym_command, 4, .rename_sequence_id = 14), REDUCE(sym_command, 4, .rename_sequence_id = 13), REDUCE(sym_command, 5), REDUCE(sym_command, 5, .rename_sequence_id = 16),
  [1472] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(474),
  [1474] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(475),
  [1476] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(263),
  [1479] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 3), REDUCE(sym_case_item, 3, .rename_sequence_id = 20),
  [1482] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_case_item, 3), REDUCE(sym_case_item, 3, .rename_sequence_id = 20),
  [1485] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 3), REDUCE(sym_case_item, 3, .rename_sequence_id = 20),
  [1488] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(476),
  [1490] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(476),
  [1492] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2), REDUCE(sym_command, 3),
  [1495] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(477),
  [1497] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(478),
  [1499] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(479),
  [1501] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(480),
  [1503] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(481),
  [1505] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(482),
  [1507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(457),
  [1509] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(485),
  [1511] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(486),
  [1513] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(487),
  [1515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(488),
  [1517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(489),
  [1519] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(490),
  [1521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(491),
  [1523] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(492),
  [1525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(494),
  [1527] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(495),
  [1529] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(496),
  [1531] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(491),
  [1533] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(498),
  [1535] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2), REDUCE(sym_file_redirect, 3),
  [1538] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2), REDUCE(sym_file_redirect, 3),
  [1541] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(500),
  [1543] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(501),
  [1545] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(502),
  [1547] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 3), REDUCE(sym_file_redirect, 3, .rename_sequence_id = 6),
  [1550] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2, .rename_sequence_id = 3), REDUCE(sym_file_redirect, 3, .rename_sequence_id = 6),
  [1553] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(504),
  [1555] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 5), REDUCE(sym_case_statement, 5, .rename_sequence_id = 15), REDUCE(sym_case_statement, 6), REDUCE(sym_case_statement, 6, .rename_sequence_id = 19),
  [1560] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(505),
  [1562] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(506),
  [1564] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_if_statement, 7),
  [1568] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 4), REDUCE(sym_case_item, 4, .rename_sequence_id = 22),
  [1571] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_case_item, 4), REDUCE(sym_case_item, 4, .rename_sequence_id = 22),
  [1574] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 4), REDUCE(sym_case_item, 4, .rename_sequence_id = 22),
  [1577] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_if_statement, 6),
  [1580] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(507),
  [1582] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 6), REDUCE(sym_case_statement, 6, .rename_sequence_id = 19), REDUCE(sym_case_statement, 7), REDUCE(sym_case_statement, 7, .rename_sequence_id = 21),
  [1587] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(508),
  [1589] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(510),
  [1591] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(511),
  [1593] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(512),
  [1595] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 4), REDUCE(sym_command, 4, .rename_sequence_id = 13), REDUCE(sym_command, 5), REDUCE(sym_command, 5, .rename_sequence_id = 16),
  [1600] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(514),
  [1602] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(516),
  [1604] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(519),
  [1606] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(521),
  [1608] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(522),
  [1610] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(523),
  [1612] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(525),
  [1614] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(526),
  [1616] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(527),
  [1618] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3), REDUCE(sym_command, 4),
  [1621] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(529),
  [1623] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(530),
  [1625] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(532),
  [1627] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(534),
  [1629] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(535),
  [1631] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(536),
  [1633] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(538),
  [1635] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(539),
  [1637] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(540),
  [1639] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(540),
  [1641] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(541),
  [1643] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(542),
  [1645] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(543),
  [1647] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(544),
  [1649] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(544),
  [1651] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(545),
  [1653] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(546),
  [1655] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6), REDUCE(sym_if_statement, 7),
  [1658] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(548),
  [1660] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(549),
  [1662] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(550),
  [1664] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(550),
  [1666] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(551),
  [1668] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(554),
  [1670] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(555),
  [1672] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(558),
  [1674] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(559),
  [1676] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(560),
  [1678] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(560),
  [1680] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(561),
  [1682] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 4), REDUCE(sym_command, 5),
  [1685] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(562),
  [1687] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(563),
  [1689] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(564),
  [1691] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(564),
  [1693] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(565),
  [1695] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(566),
  [1697] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(567),
  [1699] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(568),
  [1701] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(569),
  [1703] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 6), REDUCE(sym_case_statement, 6, .rename_sequence_id = 19),
  [1706] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(570),
  [1708] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(571),
  [1710] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(572),
  [1712] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(575),
  [1714] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(576),
  [1716] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(577),
  [1718] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(578),
  [1720] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(579),
  [1722] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(580),
  [1724] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(581),
  [1726] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(582),
  [1728] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 7), REDUCE(sym_case_statement, 7, .rename_sequence_id = 21),
  [1731] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(583),
  [1733] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(584),
  [1735] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(585),
  [1737] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(586),
  [1739] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(587),
  [1741] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(588),
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
