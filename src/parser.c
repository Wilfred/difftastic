#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define LANGUAGE_VERSION 3
#define STATE_COUNT 653
#define SYMBOL_COUNT 103
#define TOKEN_COUNT 69
#define EXTERNAL_TOKEN_COUNT 6
#define MAX_RENAME_SEQUENCE_LENGTH 5

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
  sym_raw_string = 38,
  anon_sym_DOLLAR = 39,
  anon_sym_DOLLAR_LBRACE = 40,
  anon_sym_COLON_QMARK = 41,
  anon_sym_COLON_DASH = 42,
  anon_sym_DOLLAR_LPAREN = 43,
  anon_sym_BQUOTE = 44,
  anon_sym_LT = 45,
  anon_sym_GT = 46,
  anon_sym_GT_GT = 47,
  anon_sym_AMP_GT = 48,
  anon_sym_AMP_GT_GT = 49,
  anon_sym_LT_AMP = 50,
  anon_sym_GT_AMP = 51,
  anon_sym_LT_LT = 52,
  anon_sym_LT_LT_DASH = 53,
  sym_leading_word = 54,
  sym_word = 55,
  sym_comment = 56,
  sym_simple_variable_name = 57,
  anon_sym_STAR = 58,
  anon_sym_AT = 59,
  anon_sym_POUND = 60,
  anon_sym_QMARK = 61,
  anon_sym_DASH = 62,
  anon_sym_BANG = 63,
  anon_sym_0 = 64,
  anon_sym__ = 65,
  anon_sym_SEMI = 66,
  anon_sym_LF = 67,
  anon_sym_AMP = 68,
  sym_program = 69,
  sym__terminated_statement = 70,
  sym_for_statement = 71,
  sym_while_statement = 72,
  sym_do_group = 73,
  sym_if_statement = 74,
  sym_elif_clause = 75,
  sym_else_clause = 76,
  sym_case_statement = 77,
  sym_case_item = 78,
  sym_function_definition = 79,
  sym_compound_statement = 80,
  sym_bracket_command = 81,
  sym_command = 82,
  sym_pipeline = 83,
  sym_list = 84,
  sym_subshell = 85,
  sym_environment_variable_assignment = 86,
  sym_string = 87,
  sym_simple_expansion = 88,
  sym_expansion = 89,
  sym_command_substitution = 90,
  sym_file_redirect = 91,
  sym_heredoc_redirect = 92,
  sym_heredoc = 93,
  sym_special_variable_name = 94,
  aux_sym_program_repeat1 = 95,
  aux_sym_if_statement_repeat1 = 96,
  aux_sym_case_statement_repeat1 = 97,
  aux_sym_bracket_command_repeat1 = 98,
  aux_sym_command_repeat1 = 99,
  aux_sym_command_repeat2 = 100,
  aux_sym_string_repeat1 = 101,
  aux_sym_heredoc_repeat1 = 102,
  rename_sym_1 = 103,
  rename_sym_command_name = 104,
  rename_sym_variable_name = 105,
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
  [sym_raw_string] = "raw_string",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_COLON_QMARK] = ":?",
  [anon_sym_COLON_DASH] = ":-",
  [anon_sym_DOLLAR_LPAREN] = "$(",
  [anon_sym_BQUOTE] = "`",
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
  [sym_simple_variable_name] = "simple_variable_name",
  [anon_sym_STAR] = "*",
  [anon_sym_AT] = "@",
  [anon_sym_POUND] = "#",
  [anon_sym_QMARK] = "?",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_0] = "0",
  [anon_sym__] = "_",
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
  [sym_compound_statement] = "compound_statement",
  [sym_bracket_command] = "bracket_command",
  [sym_command] = "command",
  [sym_pipeline] = "pipeline",
  [sym_list] = "list",
  [sym_subshell] = "subshell",
  [sym_environment_variable_assignment] = "environment_variable_assignment",
  [sym_string] = "string",
  [sym_simple_expansion] = "simple_expansion",
  [sym_expansion] = "expansion",
  [sym_command_substitution] = "command_substitution",
  [sym_file_redirect] = "file_redirect",
  [sym_heredoc_redirect] = "heredoc_redirect",
  [sym_heredoc] = "heredoc",
  [sym_special_variable_name] = "special_variable_name",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
  [aux_sym_case_statement_repeat1] = "case_statement_repeat1",
  [aux_sym_bracket_command_repeat1] = "bracket_command_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_command_repeat2] = "command_repeat2",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_heredoc_repeat1] = "heredoc_repeat1",
  [rename_sym_1] = "",
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
  [sym_raw_string] = {
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
  [anon_sym_BQUOTE] = {
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
  [sym_simple_variable_name] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym__] = {
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
  [sym_compound_statement] = {
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
  [sym_string] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_simple_expansion] = {
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
  [sym_special_variable_name] = {
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
  [aux_sym_string_repeat1] = {
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

static TSSymbol ts_rename_sequences[13][MAX_RENAME_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = rename_sym_command_name,
  },
  [2] = {
    [0] = rename_sym_command_name,
  },
  [3] = {
    [1] = rename_sym_command_name,
  },
  [4] = {
    [1] = rename_sym_variable_name,
  },
  [5] = {
    [0] = rename_sym_command_name,
  },
  [6] = {
    [0] = rename_sym_variable_name,
  },
  [7] = {
    [1] = rename_sym_command_name,
  },
  [8] = {
    [1] = rename_sym_variable_name,
  },
  [9] = {
    [0] = rename_sym_command_name,
  },
  [10] = {
    [1] = rename_sym_command_name,
  },
  [11] = {
    [1] = rename_sym_command_name,
  },
  [12] = {
    [1] = rename_sym_variable_name,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '$')
        ADVANCE(6);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(11);
      if (lookahead == '0')
        ADVANCE(12);
      if (lookahead == ':')
        ADVANCE(13);
      if (lookahead == ';')
        ADVANCE(14);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(19);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '?')
        ADVANCE(23);
      if (lookahead == '@')
        ADVANCE(24);
      if (lookahead == '[')
        ADVANCE(25);
      if (lookahead == '\\')
        SKIP(26);
      if (lookahead == ']')
        ADVANCE(27);
      if (lookahead == '_')
        ADVANCE(29);
      if (lookahead == '`')
        ADVANCE(30);
      if (lookahead == 'c')
        ADVANCE(31);
      if (lookahead == 'd')
        ADVANCE(35);
      if (lookahead == 'e')
        ADVANCE(39);
      if (lookahead == 'f')
        ADVANCE(48);
      if (lookahead == 'i')
        ADVANCE(59);
      if (lookahead == 't')
        ADVANCE(62);
      if (lookahead == 'w')
        ADVANCE(66);
      if (lookahead == '{')
        ADVANCE(71);
      if (lookahead == '|')
        ADVANCE(72);
      if (lookahead == '}')
        ADVANCE(74);
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
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(5);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_COLON);
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
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 26:
      if (lookahead == '\n')
        SKIP(0);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']')
        ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 31:
      if (lookahead == 'a')
        ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 's')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'e')
        ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 35:
      if (lookahead == 'o')
        ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == 'n')
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'e')
        ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_done);
      END_STATE();
    case 39:
      if (lookahead == 'l')
        ADVANCE(40);
      if (lookahead == 's')
        ADVANCE(45);
      END_STATE();
    case 40:
      if (lookahead == 'i')
        ADVANCE(41);
      if (lookahead == 's')
        ADVANCE(43);
      END_STATE();
    case 41:
      if (lookahead == 'f')
        ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 43:
      if (lookahead == 'e')
        ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 45:
      if (lookahead == 'a')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'c')
        ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_esac);
      END_STATE();
    case 48:
      if (lookahead == 'i')
        ADVANCE(49);
      if (lookahead == 'o')
        ADVANCE(50);
      if (lookahead == 'u')
        ADVANCE(52);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_fi);
      END_STATE();
    case 50:
      if (lookahead == 'r')
        ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 52:
      if (lookahead == 'n')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'c')
        ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 't')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'i')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'o')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'n')
        ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 59:
      if (lookahead == 'f')
        ADVANCE(60);
      if (lookahead == 'n')
        ADVANCE(61);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 62:
      if (lookahead == 'h')
        ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'e')
        ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == 'n')
        ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 66:
      if (lookahead == 'h')
        ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == 'i')
        ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == 'l')
        ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == 'e')
        ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|')
        ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 75:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(76);
      if (lookahead == '&')
        ADVANCE(79);
      if (lookahead == '\'')
        ADVANCE(82);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == ':')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(86);
      if (lookahead == '>')
        ADVANCE(88);
      if (lookahead == '[')
        ADVANCE(91);
      if (lookahead == '\\')
        SKIP(93);
      if (lookahead == '`')
        ADVANCE(30);
      if (lookahead == 'c')
        ADVANCE(94);
      if (lookahead == 'f')
        ADVANCE(98);
      if (lookahead == 'i')
        ADVANCE(108);
      if (lookahead == 'w')
        ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(75);
      if ((lookahead < '&' || lookahead > ')') &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == '(')
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      END_STATE();
    case 78:
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == '>')
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
          lookahead != '>' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_AMP_GT);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 81:
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == '\'')
        ADVANCE(83);
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
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(84);
      if (lookahead != 0)
        ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_raw_string);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 84:
      if (lookahead == '\'')
        ADVANCE(85);
      if (lookahead != 0)
        ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_raw_string);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&')
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 87:
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '&')
        ADVANCE(89);
      if (lookahead == '>')
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
          lookahead != '>' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 89:
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 90:
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[')
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
          lookahead != '[' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 92:
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 93:
      if (lookahead == '\n')
        SKIP(75);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'a')
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
          lookahead != '`' &&
          lookahead != 'a' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 's')
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 97:
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'o')
        ADVANCE(99);
      if (lookahead == 'u')
        ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'r')
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 100:
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'n')
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'c')
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 't')
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'o')
        ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'n')
        ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 107:
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'f')
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 109:
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'h')
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'l')
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 114:
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 115:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(116);
      if (lookahead == '<')
        ADVANCE(119);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '\\')
        SKIP(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(115);
      END_STATE();
    case 116:
      if (lookahead == '>')
        ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_AMP_GT);
      if (lookahead == '>')
        ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_AMP_GT_GT);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&')
        ADVANCE(16);
      END_STATE();
    case 120:
      if (lookahead == '\n')
        SKIP(115);
      END_STATE();
    case 121:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '\\')
        SKIP(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(121);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$') &&
          lookahead != '&' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(123);
      END_STATE();
    case 122:
      if (lookahead == '\n')
        SKIP(121);
      END_STATE();
    case 123:
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
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(123);
      END_STATE();
    case 124:
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(76);
      if (lookahead == '&')
        ADVANCE(79);
      if (lookahead == '\'')
        ADVANCE(82);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == ':')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(86);
      if (lookahead == '>')
        ADVANCE(88);
      if (lookahead == '[')
        ADVANCE(91);
      if (lookahead == '\\')
        SKIP(125);
      if (lookahead == '`')
        ADVANCE(30);
      if (lookahead == 'c')
        ADVANCE(94);
      if (lookahead == 'f')
        ADVANCE(98);
      if (lookahead == 'i')
        ADVANCE(108);
      if (lookahead == 'w')
        ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(124);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 125:
      if (lookahead == '\n')
        SKIP(124);
      END_STATE();
    case 126:
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(127);
      if (lookahead == '\'')
        ADVANCE(129);
      if (lookahead == '\\')
        SKIP(131);
      if (lookahead == '`')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(126);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(123);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '(')
        ADVANCE(77);
      if (lookahead == '{')
        ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\'')
        ADVANCE(130);
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
          lookahead == '`' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(84);
      if (lookahead != 0)
        ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_raw_string);
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
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(123);
      END_STATE();
    case 131:
      if (lookahead == '\n')
        SKIP(126);
      END_STATE();
    case 132:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '\\')
        SKIP(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(132);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 133:
      if (lookahead == '\n')
        SKIP(132);
      END_STATE();
    case 134:
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(76);
      if (lookahead == '&')
        ADVANCE(79);
      if (lookahead == '\'')
        ADVANCE(82);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == ':')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(86);
      if (lookahead == '>')
        ADVANCE(88);
      if (lookahead == '[')
        ADVANCE(91);
      if (lookahead == '\\')
        SKIP(135);
      if (lookahead == '`')
        ADVANCE(30);
      if (lookahead == 'c')
        ADVANCE(94);
      if (lookahead == 'f')
        ADVANCE(98);
      if (lookahead == 'i')
        ADVANCE(108);
      if (lookahead == 'w')
        ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(134);
      if (lookahead != 0 &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 135:
      if (lookahead == '\n')
        SKIP(134);
      END_STATE();
    case 136:
      if (lookahead == '\n')
        ADVANCE(137);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(139);
      if (lookahead == ';')
        ADVANCE(141);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '\\')
        SKIP(143);
      if (lookahead == '|')
        ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(138);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&')
        ADVANCE(140);
      if (lookahead == '>')
        ADVANCE(117);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == ';')
        ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_SEMI_SEMI);
      END_STATE();
    case 143:
      if (lookahead == '\n')
        SKIP(136);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '&')
        ADVANCE(145);
      if (lookahead == '|')
        ADVANCE(73);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_PIPE_AMP);
      END_STATE();
    case 146:
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(147);
      if (lookahead == '$')
        ADVANCE(127);
      if (lookahead == '\\')
        ADVANCE(149);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(150);
      if (lookahead != 0)
        ADVANCE(148);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(148);
      if (lookahead == '\"' ||
          lookahead == '$')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(148);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '#')
        ADVANCE(147);
      if (lookahead == '\\')
        ADVANCE(149);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(150);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(148);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(148);
      END_STATE();
    case 152:
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(76);
      if (lookahead == '&')
        ADVANCE(79);
      if (lookahead == '\'')
        ADVANCE(82);
      if (lookahead == ':')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(86);
      if (lookahead == '>')
        ADVANCE(88);
      if (lookahead == '\\')
        SKIP(153);
      if (lookahead == '`')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(152);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 153:
      if (lookahead == '\n')
        SKIP(152);
      END_STATE();
    case 154:
      if (lookahead == '\n')
        ADVANCE(155);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(139);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == ';')
        ADVANCE(141);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(19);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '\\')
        SKIP(157);
      if (lookahead == '|')
        ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(156);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(156);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(156);
      END_STATE();
    case 157:
      if (lookahead == '\n')
        SKIP(154);
      END_STATE();
    case 158:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '\\')
        SKIP(159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(158);
      END_STATE();
    case 159:
      if (lookahead == '\n')
        SKIP(158);
      END_STATE();
    case 160:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(76);
      if (lookahead == '&')
        ADVANCE(79);
      if (lookahead == '\'')
        ADVANCE(82);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == ':')
        ADVANCE(13);
      if (lookahead == ';')
        ADVANCE(161);
      if (lookahead == '<')
        ADVANCE(86);
      if (lookahead == '>')
        ADVANCE(88);
      if (lookahead == '[')
        ADVANCE(91);
      if (lookahead == '\\')
        SKIP(162);
      if (lookahead == '`')
        ADVANCE(30);
      if (lookahead == 'c')
        ADVANCE(94);
      if (lookahead == 'd')
        ADVANCE(163);
      if (lookahead == 'e')
        ADVANCE(167);
      if (lookahead == 'f')
        ADVANCE(173);
      if (lookahead == 'i')
        ADVANCE(108);
      if (lookahead == 'w')
        ADVANCE(110);
      if (lookahead == '}')
        ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(160);
      if ((lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 161:
      if (lookahead == ';')
        ADVANCE(142);
      END_STATE();
    case 162:
      if (lookahead == '\n')
        SKIP(160);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'o')
        ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'n')
        ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 166:
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'l')
        ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(169);
      if (lookahead == 's')
        ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'f')
        ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 170:
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 172:
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(174);
      if (lookahead == 'o')
        ADVANCE(99);
      if (lookahead == 'u')
        ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 174:
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 175:
      if (lookahead == '\n')
        ADVANCE(176);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(177);
      if (lookahead == ';')
        ADVANCE(141);
      if (lookahead == '\\')
        SKIP(178);
      if (lookahead == '|')
        ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&')
        ADVANCE(140);
      END_STATE();
    case 178:
      if (lookahead == '\n')
        SKIP(175);
      END_STATE();
    case 179:
      if (lookahead == '\n')
        ADVANCE(176);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(76);
      if (lookahead == '&')
        ADVANCE(180);
      if (lookahead == '\'')
        ADVANCE(82);
      if (lookahead == ':')
        ADVANCE(13);
      if (lookahead == ';')
        ADVANCE(141);
      if (lookahead == '<')
        ADVANCE(86);
      if (lookahead == '>')
        ADVANCE(88);
      if (lookahead == '\\')
        SKIP(182);
      if (lookahead == '`')
        ADVANCE(30);
      if (lookahead == '|')
        ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(179);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&')
        ADVANCE(181);
      if (lookahead == '>')
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
          lookahead != '>' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 181:
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 182:
      if (lookahead == '\n')
        SKIP(179);
      END_STATE();
    case 183:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '\\')
        SKIP(184);
      if (lookahead == 'i')
        ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(183);
      END_STATE();
    case 184:
      if (lookahead == '\n')
        SKIP(183);
      END_STATE();
    case 185:
      if (lookahead == 'n')
        ADVANCE(61);
      END_STATE();
    case 186:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '\\')
        SKIP(187);
      if (lookahead == 'd')
        ADVANCE(188);
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
      if (lookahead == 'o')
        ADVANCE(189);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 190:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '\\')
        SKIP(191);
      if (lookahead == 't')
        ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(190);
      END_STATE();
    case 191:
      if (lookahead == '\n')
        SKIP(190);
      END_STATE();
    case 192:
      if (lookahead == '\n')
        ADVANCE(176);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(141);
      if (lookahead == '\\')
        SKIP(193);
      if (lookahead == 'i')
        ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(192);
      END_STATE();
    case 193:
      if (lookahead == '\n')
        SKIP(192);
      END_STATE();
    case 194:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '$')
        ADVANCE(6);
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(11);
      if (lookahead == '0')
        ADVANCE(195);
      if (lookahead == '?')
        ADVANCE(23);
      if (lookahead == '@')
        ADVANCE(24);
      if (lookahead == '\\')
        SKIP(197);
      if (lookahead == '_')
        ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(194);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_simple_variable_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      END_STATE();
    case 197:
      if (lookahead == '\n')
        SKIP(194);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      END_STATE();
    case 199:
      if (lookahead == '!')
        ADVANCE(200);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '$')
        ADVANCE(201);
      if (lookahead == '*')
        ADVANCE(202);
      if (lookahead == '-')
        ADVANCE(203);
      if (lookahead == '0')
        ADVANCE(204);
      if (lookahead == '?')
        ADVANCE(205);
      if (lookahead == '@')
        ADVANCE(206);
      if (lookahead == '\\')
        SKIP(207);
      if (lookahead == '_')
        ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(199);
      if (lookahead != 0 &&
          (lookahead < ' ' || lookahead > '$') &&
          (lookahead < '(' || lookahead > '*') &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '_' &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 207:
      if (lookahead == '\n')
        SKIP(199);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 209:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == '\\')
        SKIP(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(209);
      END_STATE();
    case 210:
      if (lookahead == '\n')
        SKIP(209);
      END_STATE();
    case 211:
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(127);
      if (lookahead == '\'')
        ADVANCE(129);
      if (lookahead == '\\')
        SKIP(212);
      if (lookahead == ']')
        ADVANCE(213);
      if (lookahead == '`')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(211);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(123);
      END_STATE();
    case 212:
      if (lookahead == '\n')
        SKIP(211);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']')
        ADVANCE(214);
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
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(123);
      END_STATE();
    case 214:
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
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(123);
      END_STATE();
    case 215:
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(127);
      if (lookahead == '\'')
        ADVANCE(129);
      if (lookahead == '\\')
        SKIP(216);
      if (lookahead == ']')
        ADVANCE(217);
      if (lookahead == '`')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(215);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(123);
      END_STATE();
    case 216:
      if (lookahead == '\n')
        SKIP(215);
      END_STATE();
    case 217:
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
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(123);
      END_STATE();
    case 218:
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(127);
      if (lookahead == '\'')
        ADVANCE(129);
      if (lookahead == '\\')
        SKIP(219);
      if (lookahead == ']')
        ADVANCE(220);
      if (lookahead == '`')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(218);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(123);
      END_STATE();
    case 219:
      if (lookahead == '\n')
        SKIP(218);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ']')
        ADVANCE(214);
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
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(123);
      END_STATE();
    case 221:
      if (lookahead == '\n')
        ADVANCE(176);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(127);
      if (lookahead == '&')
        ADVANCE(139);
      if (lookahead == '\'')
        ADVANCE(129);
      if (lookahead == ';')
        ADVANCE(141);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '\\')
        SKIP(222);
      if (lookahead == '`')
        ADVANCE(30);
      if (lookahead == '|')
        ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(221);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(123);
      END_STATE();
    case 222:
      if (lookahead == '\n')
        SKIP(221);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '&')
        ADVANCE(145);
      if (lookahead == '|')
        ADVANCE(224);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(123);
      END_STATE();
    case 224:
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
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(123);
      END_STATE();
    case 225:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '\\')
        SKIP(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(225);
      END_STATE();
    case 226:
      if (lookahead == '\n')
        SKIP(225);
      END_STATE();
    case 227:
      if (lookahead == '\n')
        ADVANCE(176);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(139);
      if (lookahead == ';')
        ADVANCE(141);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '\\')
        SKIP(228);
      if (lookahead == '|')
        ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(227);
      END_STATE();
    case 228:
      if (lookahead == '\n')
        SKIP(227);
      END_STATE();
    case 229:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(116);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '>')
        ADVANCE(20);
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
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(116);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(19);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '\\')
        SKIP(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(234);
      END_STATE();
    case 233:
      if (lookahead == '\n')
        SKIP(232);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(234);
      END_STATE();
    case 235:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '\\')
        SKIP(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(235);
      END_STATE();
    case 236:
      if (lookahead == '\n')
        SKIP(235);
      END_STATE();
    case 237:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(116);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '\\')
        SKIP(238);
      if (lookahead == '`')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(239);
      END_STATE();
    case 238:
      if (lookahead == '\n')
        SKIP(237);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(239);
      END_STATE();
    case 240:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(116);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(19);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '\\')
        SKIP(241);
      if (lookahead == '`')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(242);
      END_STATE();
    case 241:
      if (lookahead == '\n')
        SKIP(240);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(242);
      END_STATE();
    case 243:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '\\')
        SKIP(244);
      if (lookahead == '`')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(243);
      END_STATE();
    case 244:
      if (lookahead == '\n')
        SKIP(243);
      END_STATE();
    case 245:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(76);
      if (lookahead == '&')
        ADVANCE(79);
      if (lookahead == '\'')
        ADVANCE(82);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == ':')
        ADVANCE(13);
      if (lookahead == ';')
        ADVANCE(161);
      if (lookahead == '<')
        ADVANCE(86);
      if (lookahead == '>')
        ADVANCE(88);
      if (lookahead == '[')
        ADVANCE(91);
      if (lookahead == '\\')
        SKIP(246);
      if (lookahead == '`')
        ADVANCE(30);
      if (lookahead == 'c')
        ADVANCE(94);
      if (lookahead == 'd')
        ADVANCE(247);
      if (lookahead == 'e')
        ADVANCE(167);
      if (lookahead == 'f')
        ADVANCE(173);
      if (lookahead == 'i')
        ADVANCE(108);
      if (lookahead == 't')
        ADVANCE(249);
      if (lookahead == 'w')
        ADVANCE(110);
      if (lookahead == '}')
        ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(245);
      if ((lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 246:
      if (lookahead == '\n')
        SKIP(245);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'o')
        ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == 'n')
        ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'h')
        ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'n')
        ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 252:
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 253:
      if (lookahead == '\n')
        ADVANCE(254);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(139);
      if (lookahead == ';')
        ADVANCE(141);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(19);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '\\')
        SKIP(256);
      if (lookahead == '|')
        ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(255);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(255);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(255);
      END_STATE();
    case 256:
      if (lookahead == '\n')
        SKIP(253);
      END_STATE();
    case 257:
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(76);
      if (lookahead == '&')
        ADVANCE(79);
      if (lookahead == '\'')
        ADVANCE(82);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == ':')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(86);
      if (lookahead == '>')
        ADVANCE(88);
      if (lookahead == '[')
        ADVANCE(91);
      if (lookahead == '\\')
        SKIP(258);
      if (lookahead == '`')
        ADVANCE(30);
      if (lookahead == 'c')
        ADVANCE(94);
      if (lookahead == 'd')
        ADVANCE(163);
      if (lookahead == 'f')
        ADVANCE(98);
      if (lookahead == 'i')
        ADVANCE(108);
      if (lookahead == 'w')
        ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(257);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 258:
      if (lookahead == '\n')
        SKIP(257);
      END_STATE();
    case 259:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '\\')
        SKIP(260);
      if (lookahead == 'd')
        ADVANCE(188);
      if (lookahead == 't')
        ADVANCE(62);
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
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(76);
      if (lookahead == '&')
        ADVANCE(79);
      if (lookahead == '\'')
        ADVANCE(82);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == ':')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(86);
      if (lookahead == '>')
        ADVANCE(88);
      if (lookahead == '[')
        ADVANCE(91);
      if (lookahead == '\\')
        SKIP(262);
      if (lookahead == '`')
        ADVANCE(30);
      if (lookahead == 'c')
        ADVANCE(94);
      if (lookahead == 'e')
        ADVANCE(167);
      if (lookahead == 'f')
        ADVANCE(173);
      if (lookahead == 'i')
        ADVANCE(108);
      if (lookahead == 'w')
        ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(261);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 262:
      if (lookahead == '\n')
        SKIP(261);
      END_STATE();
    case 263:
      if (lookahead == '\n')
        ADVANCE(176);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(141);
      if (lookahead == '\\')
        SKIP(264);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(263);
      END_STATE();
    case 264:
      if (lookahead == '\n')
        SKIP(263);
      END_STATE();
    case 265:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == ':')
        ADVANCE(266);
      if (lookahead == '=')
        ADVANCE(19);
      if (lookahead == '\\')
        SKIP(269);
      if (lookahead == '}')
        ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-')
        ADVANCE(267);
      if (lookahead == '?')
        ADVANCE(268);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_COLON_QMARK);
      END_STATE();
    case 269:
      if (lookahead == '\n')
        SKIP(265);
      END_STATE();
    case 270:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == ':')
        ADVANCE(266);
      if (lookahead == '=')
        ADVANCE(19);
      if (lookahead == '\\')
        SKIP(271);
      if (lookahead == '}')
        ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(270);
      END_STATE();
    case 271:
      if (lookahead == '\n')
        SKIP(270);
      END_STATE();
    case 272:
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(127);
      if (lookahead == '\'')
        ADVANCE(129);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '\\')
        SKIP(273);
      if (lookahead == ']')
        ADVANCE(213);
      if (lookahead == '`')
        ADVANCE(30);
      if (lookahead == '}')
        ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(272);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{')
        ADVANCE(123);
      END_STATE();
    case 273:
      if (lookahead == '\n')
        SKIP(272);
      END_STATE();
    case 274:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(275);
      if (lookahead == '\\')
        SKIP(276);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{')
        ADVANCE(128);
      END_STATE();
    case 276:
      if (lookahead == '\n')
        SKIP(274);
      END_STATE();
    case 277:
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(127);
      if (lookahead == '&')
        ADVANCE(116);
      if (lookahead == '\'')
        ADVANCE(129);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '\\')
        SKIP(278);
      if (lookahead == '`')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(277);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(123);
      END_STATE();
    case 278:
      if (lookahead == '\n')
        SKIP(277);
      END_STATE();
    case 279:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(116);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '\\')
        SKIP(280);
      if (lookahead == '`')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(279);
      END_STATE();
    case 280:
      if (lookahead == '\n')
        SKIP(279);
      END_STATE();
    case 281:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(116);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '\\')
        SKIP(282);
      if (lookahead == '`')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(283);
      END_STATE();
    case 282:
      if (lookahead == '\n')
        SKIP(281);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(283);
      END_STATE();
    case 284:
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(127);
      if (lookahead == '&')
        ADVANCE(116);
      if (lookahead == '\'')
        ADVANCE(129);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '\\')
        SKIP(285);
      if (lookahead == '`')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(284);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(123);
      END_STATE();
    case 285:
      if (lookahead == '\n')
        SKIP(284);
      END_STATE();
    case 286:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '\\')
        SKIP(287);
      if (lookahead == '{')
        ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(286);
      END_STATE();
    case 287:
      if (lookahead == '\n')
        SKIP(286);
      END_STATE();
    case 288:
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(76);
      if (lookahead == '&')
        ADVANCE(79);
      if (lookahead == '\'')
        ADVANCE(82);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == ':')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(86);
      if (lookahead == '>')
        ADVANCE(88);
      if (lookahead == '[')
        ADVANCE(91);
      if (lookahead == '\\')
        SKIP(289);
      if (lookahead == '`')
        ADVANCE(30);
      if (lookahead == 'c')
        ADVANCE(94);
      if (lookahead == 'f')
        ADVANCE(173);
      if (lookahead == 'i')
        ADVANCE(108);
      if (lookahead == 'w')
        ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(288);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 289:
      if (lookahead == '\n')
        SKIP(288);
      END_STATE();
    case 290:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '\\')
        SKIP(291);
      if (lookahead == 'e')
        ADVANCE(292);
      if (lookahead == 'f')
        ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(290);
      END_STATE();
    case 291:
      if (lookahead == '\n')
        SKIP(290);
      END_STATE();
    case 292:
      if (lookahead == 'l')
        ADVANCE(40);
      END_STATE();
    case 293:
      if (lookahead == 'i')
        ADVANCE(49);
      END_STATE();
    case 294:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '\\')
        SKIP(295);
      if (lookahead == 'f')
        ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(294);
      END_STATE();
    case 295:
      if (lookahead == '\n')
        SKIP(294);
      END_STATE();
    case 296:
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(127);
      if (lookahead == '\'')
        ADVANCE(129);
      if (lookahead == '\\')
        SKIP(297);
      if (lookahead == '`')
        ADVANCE(30);
      if (lookahead == 'e')
        ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(296);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          lookahead != ';' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(123);
      END_STATE();
    case 297:
      if (lookahead == '\n')
        SKIP(296);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's')
        ADVANCE(299);
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
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(123);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a')
        ADVANCE(300);
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
          lookahead != '`' &&
          lookahead != 'a' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(123);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c')
        ADVANCE(301);
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
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(123);
      END_STATE();
    case 301:
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
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(123);
      END_STATE();
    case 302:
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(76);
      if (lookahead == '&')
        ADVANCE(79);
      if (lookahead == '\'')
        ADVANCE(82);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == ':')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(86);
      if (lookahead == '>')
        ADVANCE(88);
      if (lookahead == '[')
        ADVANCE(91);
      if (lookahead == '\\')
        SKIP(303);
      if (lookahead == '`')
        ADVANCE(30);
      if (lookahead == 'c')
        ADVANCE(94);
      if (lookahead == 'f')
        ADVANCE(98);
      if (lookahead == 'i')
        ADVANCE(108);
      if (lookahead == 'w')
        ADVANCE(110);
      if (lookahead == '}')
        ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(302);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 303:
      if (lookahead == '\n')
        SKIP(302);
      END_STATE();
    case 304:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '\\')
        SKIP(305);
      if (lookahead == '}')
        ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(304);
      END_STATE();
    case 305:
      if (lookahead == '\n')
        SKIP(304);
      END_STATE();
    case 306:
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(76);
      if (lookahead == '&')
        ADVANCE(79);
      if (lookahead == '\'')
        ADVANCE(82);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == ':')
        ADVANCE(13);
      if (lookahead == ';')
        ADVANCE(161);
      if (lookahead == '<')
        ADVANCE(86);
      if (lookahead == '>')
        ADVANCE(88);
      if (lookahead == '[')
        ADVANCE(91);
      if (lookahead == '\\')
        SKIP(307);
      if (lookahead == '`')
        ADVANCE(30);
      if (lookahead == 'c')
        ADVANCE(94);
      if (lookahead == 'f')
        ADVANCE(98);
      if (lookahead == 'i')
        ADVANCE(108);
      if (lookahead == 'w')
        ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(306);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 307:
      if (lookahead == '\n')
        SKIP(306);
      END_STATE();
    case 308:
      if (lookahead == '\n')
        ADVANCE(176);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(76);
      if (lookahead == '&')
        ADVANCE(309);
      if (lookahead == '\'')
        ADVANCE(82);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == ':')
        ADVANCE(13);
      if (lookahead == ';')
        ADVANCE(141);
      if (lookahead == '<')
        ADVANCE(86);
      if (lookahead == '>')
        ADVANCE(88);
      if (lookahead == '[')
        ADVANCE(91);
      if (lookahead == '\\')
        SKIP(310);
      if (lookahead == '`')
        ADVANCE(30);
      if (lookahead == 'c')
        ADVANCE(94);
      if (lookahead == 'f')
        ADVANCE(98);
      if (lookahead == 'i')
        ADVANCE(108);
      if (lookahead == 'w')
        ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(308);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '>')
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
          lookahead != '>' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 310:
      if (lookahead == '\n')
        SKIP(308);
      END_STATE();
    case 311:
      if (lookahead == '\n')
        ADVANCE(312);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(147);
      if (lookahead == '$')
        ADVANCE(370);
      if (lookahead == '&')
        ADVANCE(313);
      if (lookahead == '\'')
        ADVANCE(318);
      if (lookahead == '(')
        ADVANCE(324);
      if (lookahead == ')')
        ADVANCE(325);
      if (lookahead == ':')
        ADVANCE(326);
      if (lookahead == ';')
        ADVANCE(327);
      if (lookahead == '<')
        ADVANCE(329);
      if (lookahead == '=')
        ADVANCE(320);
      if (lookahead == '>')
        ADVANCE(333);
      if (lookahead == '[')
        ADVANCE(336);
      if (lookahead == '\\')
        ADVANCE(338);
      if (lookahead == ']')
        ADVANCE(340);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'c')
        ADVANCE(342);
      if (lookahead == 'f')
        ADVANCE(346);
      if (lookahead == 'i')
        ADVANCE(356);
      if (lookahead == 'w')
        ADVANCE(359);
      if (lookahead == '{')
        ADVANCE(364);
      if (lookahead == '|')
        ADVANCE(365);
      if (lookahead == '}')
        ADVANCE(368);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(319);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(312);
      if (lookahead == '#')
        ADVANCE(147);
      if (lookahead == '&')
        ADVANCE(313);
      if (lookahead == '\'')
        ADVANCE(318);
      if (lookahead == '(')
        ADVANCE(324);
      if (lookahead == ')')
        ADVANCE(325);
      if (lookahead == ':')
        ADVANCE(326);
      if (lookahead == ';')
        ADVANCE(327);
      if (lookahead == '<')
        ADVANCE(329);
      if (lookahead == '=')
        ADVANCE(320);
      if (lookahead == '>')
        ADVANCE(333);
      if (lookahead == '[')
        ADVANCE(336);
      if (lookahead == '\\')
        ADVANCE(338);
      if (lookahead == ']')
        ADVANCE(340);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'c')
        ADVANCE(342);
      if (lookahead == 'f')
        ADVANCE(346);
      if (lookahead == 'i')
        ADVANCE(356);
      if (lookahead == 'w')
        ADVANCE(359);
      if (lookahead == '{')
        ADVANCE(364);
      if (lookahead == '|')
        ADVANCE(365);
      if (lookahead == '}')
        ADVANCE(368);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(369);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '$')
        ADVANCE(78);
      if (lookahead == '&')
        ADVANCE(314);
      if (lookahead == '>')
        ADVANCE(316);
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
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(315);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      if (lookahead == '$')
        ADVANCE(78);
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
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(315);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(78);
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
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_AMP_GT);
      if (lookahead == '$')
        ADVANCE(78);
      if (lookahead == '>')
        ADVANCE(317);
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
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(315);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_AMP_GT_GT);
      if (lookahead == '$')
        ADVANCE(78);
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
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(315);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\"')
        ADVANCE(84);
      if (lookahead == '$')
        ADVANCE(82);
      if (lookahead == '\'')
        ADVANCE(319);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(321);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(323);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(322);
      if (lookahead != 0)
        ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(78);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(315);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 320:
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
          lookahead == '`' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(320);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\"')
        ADVANCE(84);
      if (lookahead == '$')
        ADVANCE(82);
      if (lookahead == '\'')
        ADVANCE(315);
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
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(322);
      if (lookahead != 0)
        ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\'')
        ADVANCE(148);
      if (lookahead == '\"' ||
          lookahead == '$')
        ADVANCE(84);
      if (lookahead != 0)
        ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\'')
        ADVANCE(320);
      if (lookahead == '\"' ||
          lookahead == '$')
        ADVANCE(84);
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
          lookahead == '`' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(322);
      if (lookahead != 0)
        ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(148);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(148);
      END_STATE();
    case 326:
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
          lookahead == '`' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(320);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == ';')
        ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(148);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_SEMI_SEMI);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(148);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '$')
        ADVANCE(78);
      if (lookahead == '&')
        ADVANCE(330);
      if (lookahead == '<')
        ADVANCE(331);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          (':' <= lookahead && lookahead <= '=') ||
          lookahead == '\\' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(315);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_LT_AMP);
      if (lookahead == '$')
        ADVANCE(78);
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
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(315);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '$')
        ADVANCE(78);
      if (lookahead == '-')
        ADVANCE(332);
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
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(315);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH);
      if (lookahead == '$')
        ADVANCE(78);
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
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(315);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '$')
        ADVANCE(78);
      if (lookahead == '&')
        ADVANCE(334);
      if (lookahead == '>')
        ADVANCE(335);
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
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(315);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_GT_AMP);
      if (lookahead == '$')
        ADVANCE(78);
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
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(315);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '$')
        ADVANCE(78);
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
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(315);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '$')
        ADVANCE(78);
      if (lookahead == '[')
        ADVANCE(337);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(315);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      if (lookahead == '$')
        ADVANCE(78);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(315);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(148);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(312);
      if (lookahead == '#')
        ADVANCE(147);
      if (lookahead == '&')
        ADVANCE(313);
      if (lookahead == '\'')
        ADVANCE(318);
      if (lookahead == '(')
        ADVANCE(324);
      if (lookahead == ')')
        ADVANCE(325);
      if (lookahead == ':')
        ADVANCE(326);
      if (lookahead == ';')
        ADVANCE(327);
      if (lookahead == '<')
        ADVANCE(329);
      if (lookahead == '=')
        ADVANCE(320);
      if (lookahead == '>')
        ADVANCE(333);
      if (lookahead == '[')
        ADVANCE(336);
      if (lookahead == '\\')
        ADVANCE(338);
      if (lookahead == ']')
        ADVANCE(340);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'c')
        ADVANCE(342);
      if (lookahead == 'f')
        ADVANCE(346);
      if (lookahead == 'i')
        ADVANCE(356);
      if (lookahead == 'w')
        ADVANCE(359);
      if (lookahead == '{')
        ADVANCE(364);
      if (lookahead == '|')
        ADVANCE(365);
      if (lookahead == '}')
        ADVANCE(368);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(369);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '$')
        ADVANCE(78);
      if (lookahead == ']')
        ADVANCE(341);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(315);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      if (lookahead == '$')
        ADVANCE(78);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(315);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(78);
      if (lookahead == 'a')
        ADVANCE(343);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(315);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(78);
      if (lookahead == 's')
        ADVANCE(344);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(315);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(78);
      if (lookahead == 'e')
        ADVANCE(345);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(315);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '$')
        ADVANCE(78);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(315);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(78);
      if (lookahead == 'o')
        ADVANCE(347);
      if (lookahead == 'u')
        ADVANCE(349);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(315);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(78);
      if (lookahead == 'r')
        ADVANCE(348);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(315);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '$')
        ADVANCE(78);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(315);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(78);
      if (lookahead == 'n')
        ADVANCE(350);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(315);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(78);
      if (lookahead == 'c')
        ADVANCE(351);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(315);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(78);
      if (lookahead == 't')
        ADVANCE(352);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(315);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(78);
      if (lookahead == 'i')
        ADVANCE(353);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(315);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(78);
      if (lookahead == 'o')
        ADVANCE(354);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(315);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(78);
      if (lookahead == 'n')
        ADVANCE(355);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(315);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead == '$')
        ADVANCE(78);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(315);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(78);
      if (lookahead == 'f')
        ADVANCE(357);
      if (lookahead == 'n')
        ADVANCE(358);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(315);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '$')
        ADVANCE(78);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(315);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '$')
        ADVANCE(78);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(315);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(78);
      if (lookahead == 'h')
        ADVANCE(360);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(315);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(78);
      if (lookahead == 'i')
        ADVANCE(361);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(315);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(78);
      if (lookahead == 'l')
        ADVANCE(362);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(315);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(78);
      if (lookahead == 'e')
        ADVANCE(363);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(315);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '$')
        ADVANCE(78);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(315);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(148);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '&')
        ADVANCE(366);
      if (lookahead == '|')
        ADVANCE(367);
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
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(320);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_PIPE_AMP);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(148);
      END_STATE();
    case 367:
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
          lookahead == '`' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(320);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(148);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(312);
      if (lookahead == '#')
        ADVANCE(147);
      if (lookahead == '&')
        ADVANCE(313);
      if (lookahead == '\'')
        ADVANCE(318);
      if (lookahead == '(')
        ADVANCE(324);
      if (lookahead == ')')
        ADVANCE(325);
      if (lookahead == ':')
        ADVANCE(326);
      if (lookahead == ';')
        ADVANCE(327);
      if (lookahead == '<')
        ADVANCE(329);
      if (lookahead == '=')
        ADVANCE(320);
      if (lookahead == '>')
        ADVANCE(333);
      if (lookahead == '[')
        ADVANCE(336);
      if (lookahead == '\\')
        ADVANCE(338);
      if (lookahead == ']')
        ADVANCE(340);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'c')
        ADVANCE(342);
      if (lookahead == 'f')
        ADVANCE(346);
      if (lookahead == 'i')
        ADVANCE(356);
      if (lookahead == 'w')
        ADVANCE(359);
      if (lookahead == '{')
        ADVANCE(364);
      if (lookahead == '|')
        ADVANCE(365);
      if (lookahead == '}')
        ADVANCE(368);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(369);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '(')
        ADVANCE(77);
      if (lookahead == '{')
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 371:
      if (lookahead == '\n')
        ADVANCE(372);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(147);
      if (lookahead == '$')
        ADVANCE(370);
      if (lookahead == '&')
        ADVANCE(313);
      if (lookahead == '\'')
        ADVANCE(318);
      if (lookahead == ')')
        ADVANCE(325);
      if (lookahead == ':')
        ADVANCE(326);
      if (lookahead == ';')
        ADVANCE(327);
      if (lookahead == '<')
        ADVANCE(329);
      if (lookahead == '=')
        ADVANCE(320);
      if (lookahead == '>')
        ADVANCE(333);
      if (lookahead == '\\')
        ADVANCE(373);
      if (lookahead == ']')
        ADVANCE(340);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'i')
        ADVANCE(375);
      if (lookahead == '|')
        ADVANCE(365);
      if (lookahead == '}')
        ADVANCE(368);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(374);
      if (lookahead != 0)
        ADVANCE(319);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(372);
      if (lookahead == '#')
        ADVANCE(147);
      if (lookahead == '&')
        ADVANCE(313);
      if (lookahead == '\'')
        ADVANCE(318);
      if (lookahead == ')')
        ADVANCE(325);
      if (lookahead == ':')
        ADVANCE(326);
      if (lookahead == ';')
        ADVANCE(327);
      if (lookahead == '<')
        ADVANCE(329);
      if (lookahead == '=')
        ADVANCE(320);
      if (lookahead == '>')
        ADVANCE(333);
      if (lookahead == '\\')
        ADVANCE(373);
      if (lookahead == ']')
        ADVANCE(340);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'i')
        ADVANCE(375);
      if (lookahead == '|')
        ADVANCE(365);
      if (lookahead == '}')
        ADVANCE(368);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(374);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(148);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(372);
      if (lookahead == '#')
        ADVANCE(147);
      if (lookahead == '&')
        ADVANCE(313);
      if (lookahead == '\'')
        ADVANCE(318);
      if (lookahead == ')')
        ADVANCE(325);
      if (lookahead == ':')
        ADVANCE(326);
      if (lookahead == ';')
        ADVANCE(327);
      if (lookahead == '<')
        ADVANCE(329);
      if (lookahead == '=')
        ADVANCE(320);
      if (lookahead == '>')
        ADVANCE(333);
      if (lookahead == '\\')
        ADVANCE(373);
      if (lookahead == ']')
        ADVANCE(340);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'i')
        ADVANCE(375);
      if (lookahead == '|')
        ADVANCE(365);
      if (lookahead == '}')
        ADVANCE(368);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(374);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(78);
      if (lookahead == 'n')
        ADVANCE(358);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(315);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 376:
      if (lookahead == '\n')
        ADVANCE(377);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(127);
      if (lookahead == '&')
        ADVANCE(139);
      if (lookahead == '\'')
        ADVANCE(129);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == ';')
        ADVANCE(141);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '\\')
        SKIP(379);
      if (lookahead == '`')
        ADVANCE(30);
      if (lookahead == '|')
        ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(378);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(123);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(378);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(378);
      END_STATE();
    case 379:
      if (lookahead == '\n')
        SKIP(376);
      END_STATE();
    case 380:
      if (lookahead == '\n')
        ADVANCE(381);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(147);
      if (lookahead == '$')
        ADVANCE(370);
      if (lookahead == '&')
        ADVANCE(313);
      if (lookahead == '\'')
        ADVANCE(318);
      if (lookahead == ')')
        ADVANCE(325);
      if (lookahead == ':')
        ADVANCE(326);
      if (lookahead == ';')
        ADVANCE(327);
      if (lookahead == '<')
        ADVANCE(329);
      if (lookahead == '=')
        ADVANCE(320);
      if (lookahead == '>')
        ADVANCE(333);
      if (lookahead == '\\')
        ADVANCE(382);
      if (lookahead == ']')
        ADVANCE(340);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'i')
        ADVANCE(375);
      if (lookahead == '|')
        ADVANCE(365);
      if (lookahead == '}')
        ADVANCE(368);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(384);
      if (lookahead != 0)
        ADVANCE(319);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(381);
      if (lookahead == '#')
        ADVANCE(147);
      if (lookahead == '&')
        ADVANCE(313);
      if (lookahead == '\'')
        ADVANCE(318);
      if (lookahead == ')')
        ADVANCE(325);
      if (lookahead == ':')
        ADVANCE(326);
      if (lookahead == ';')
        ADVANCE(327);
      if (lookahead == '<')
        ADVANCE(329);
      if (lookahead == '=')
        ADVANCE(320);
      if (lookahead == '>')
        ADVANCE(333);
      if (lookahead == '\\')
        ADVANCE(382);
      if (lookahead == ']')
        ADVANCE(340);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'i')
        ADVANCE(375);
      if (lookahead == '|')
        ADVANCE(365);
      if (lookahead == '}')
        ADVANCE(368);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(384);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(148);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(381);
      if (lookahead == '#')
        ADVANCE(147);
      if (lookahead == '&')
        ADVANCE(313);
      if (lookahead == '\'')
        ADVANCE(318);
      if (lookahead == ')')
        ADVANCE(325);
      if (lookahead == ':')
        ADVANCE(326);
      if (lookahead == ';')
        ADVANCE(327);
      if (lookahead == '<')
        ADVANCE(329);
      if (lookahead == '=')
        ADVANCE(320);
      if (lookahead == '>')
        ADVANCE(333);
      if (lookahead == '\\')
        ADVANCE(382);
      if (lookahead == ']')
        ADVANCE(340);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'i')
        ADVANCE(375);
      if (lookahead == '|')
        ADVANCE(365);
      if (lookahead == '}')
        ADVANCE(368);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(384);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(381);
      if (lookahead == '#')
        ADVANCE(147);
      if (lookahead == '&')
        ADVANCE(313);
      if (lookahead == '\'')
        ADVANCE(318);
      if (lookahead == ')')
        ADVANCE(325);
      if (lookahead == ':')
        ADVANCE(326);
      if (lookahead == ';')
        ADVANCE(327);
      if (lookahead == '<')
        ADVANCE(329);
      if (lookahead == '=')
        ADVANCE(320);
      if (lookahead == '>')
        ADVANCE(333);
      if (lookahead == '\\')
        ADVANCE(382);
      if (lookahead == ']')
        ADVANCE(340);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'i')
        ADVANCE(375);
      if (lookahead == '|')
        ADVANCE(365);
      if (lookahead == '}')
        ADVANCE(368);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(384);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 385:
      if (lookahead == '\n')
        ADVANCE(386);
      if (lookahead == '!')
        ADVANCE(387);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(388);
      if (lookahead == '$')
        ADVANCE(370);
      if (lookahead == '&')
        ADVANCE(313);
      if (lookahead == '\'')
        ADVANCE(318);
      if (lookahead == ')')
        ADVANCE(325);
      if (lookahead == '*')
        ADVANCE(389);
      if (lookahead == '-')
        ADVANCE(390);
      if (lookahead == '0')
        ADVANCE(391);
      if (lookahead == ':')
        ADVANCE(393);
      if (lookahead == ';')
        ADVANCE(327);
      if (lookahead == '<')
        ADVANCE(329);
      if (lookahead == '=')
        ADVANCE(396);
      if (lookahead == '>')
        ADVANCE(333);
      if (lookahead == '?')
        ADVANCE(397);
      if (lookahead == '@')
        ADVANCE(398);
      if (lookahead == '\\')
        ADVANCE(399);
      if (lookahead == ']')
        ADVANCE(340);
      if (lookahead == '_')
        ADVANCE(401);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'i')
        ADVANCE(402);
      if (lookahead == '|')
        ADVANCE(365);
      if (lookahead == '}')
        ADVANCE(368);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(400);
      if (('1' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(392);
      if (lookahead != 0)
        ADVANCE(319);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(386);
      if (lookahead == '!')
        ADVANCE(387);
      if (lookahead == '#')
        ADVANCE(388);
      if (lookahead == '&')
        ADVANCE(313);
      if (lookahead == '\'')
        ADVANCE(318);
      if (lookahead == ')')
        ADVANCE(325);
      if (lookahead == '*')
        ADVANCE(389);
      if (lookahead == '-')
        ADVANCE(390);
      if (lookahead == '0')
        ADVANCE(391);
      if (lookahead == ':')
        ADVANCE(393);
      if (lookahead == ';')
        ADVANCE(327);
      if (lookahead == '<')
        ADVANCE(329);
      if (lookahead == '=')
        ADVANCE(396);
      if (lookahead == '>')
        ADVANCE(333);
      if (lookahead == '?')
        ADVANCE(397);
      if (lookahead == '@')
        ADVANCE(398);
      if (lookahead == '\\')
        ADVANCE(399);
      if (lookahead == ']')
        ADVANCE(340);
      if (lookahead == '_')
        ADVANCE(401);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'i')
        ADVANCE(402);
      if (lookahead == '|')
        ADVANCE(365);
      if (lookahead == '}')
        ADVANCE(368);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(400);
      if (('1' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(392);
      if (lookahead != 0 &&
          (lookahead < ' ' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '$')
        ADVANCE(78);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(315);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\n')
        ADVANCE(148);
      if (lookahead == '\"' ||
          lookahead == '$')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(147);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '$')
        ADVANCE(78);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(315);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '$')
        ADVANCE(78);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(315);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '$')
        ADVANCE(78);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(315);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(392);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(78);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(315);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(392);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead == '?')
        ADVANCE(395);
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
          lookahead == '`' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(320);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
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
          lookahead == '`' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(320);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_COLON_QMARK);
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
          lookahead == '`' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(320);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_EQ);
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
          lookahead == '`' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(320);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '$')
        ADVANCE(78);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(315);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '$')
        ADVANCE(78);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(315);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(148);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(386);
      if (lookahead == '!')
        ADVANCE(387);
      if (lookahead == '#')
        ADVANCE(388);
      if (lookahead == '&')
        ADVANCE(313);
      if (lookahead == '\'')
        ADVANCE(318);
      if (lookahead == ')')
        ADVANCE(325);
      if (lookahead == '*')
        ADVANCE(389);
      if (lookahead == '-')
        ADVANCE(390);
      if (lookahead == '0')
        ADVANCE(391);
      if (lookahead == ':')
        ADVANCE(393);
      if (lookahead == ';')
        ADVANCE(327);
      if (lookahead == '<')
        ADVANCE(329);
      if (lookahead == '=')
        ADVANCE(396);
      if (lookahead == '>')
        ADVANCE(333);
      if (lookahead == '?')
        ADVANCE(397);
      if (lookahead == '@')
        ADVANCE(398);
      if (lookahead == '\\')
        ADVANCE(399);
      if (lookahead == ']')
        ADVANCE(340);
      if (lookahead == '_')
        ADVANCE(401);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'i')
        ADVANCE(402);
      if (lookahead == '|')
        ADVANCE(365);
      if (lookahead == '}')
        ADVANCE(368);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(400);
      if (('1' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(392);
      if (lookahead != 0 &&
          (lookahead < ' ' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '$')
        ADVANCE(78);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(315);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(392);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '$')
        ADVANCE(78);
      if (lookahead == 'n')
        ADVANCE(403);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(315);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(392);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '$')
        ADVANCE(78);
      if (lookahead == '&' ||
          lookahead == '<' ||
          lookahead == '>')
        ADVANCE(315);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(392);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 404:
      if (lookahead == '\n')
        ADVANCE(405);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(147);
      if (lookahead == '$')
        ADVANCE(370);
      if (lookahead == '&')
        ADVANCE(313);
      if (lookahead == '\'')
        ADVANCE(318);
      if (lookahead == ')')
        ADVANCE(325);
      if (lookahead == ':')
        ADVANCE(393);
      if (lookahead == ';')
        ADVANCE(327);
      if (lookahead == '<')
        ADVANCE(329);
      if (lookahead == '=')
        ADVANCE(396);
      if (lookahead == '>')
        ADVANCE(333);
      if (lookahead == '\\')
        ADVANCE(406);
      if (lookahead == ']')
        ADVANCE(340);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'i')
        ADVANCE(375);
      if (lookahead == '|')
        ADVANCE(365);
      if (lookahead == '}')
        ADVANCE(368);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(407);
      if (lookahead != 0)
        ADVANCE(319);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(405);
      if (lookahead == '#')
        ADVANCE(147);
      if (lookahead == '&')
        ADVANCE(313);
      if (lookahead == '\'')
        ADVANCE(318);
      if (lookahead == ')')
        ADVANCE(325);
      if (lookahead == ':')
        ADVANCE(393);
      if (lookahead == ';')
        ADVANCE(327);
      if (lookahead == '<')
        ADVANCE(329);
      if (lookahead == '=')
        ADVANCE(396);
      if (lookahead == '>')
        ADVANCE(333);
      if (lookahead == '\\')
        ADVANCE(406);
      if (lookahead == ']')
        ADVANCE(340);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'i')
        ADVANCE(375);
      if (lookahead == '|')
        ADVANCE(365);
      if (lookahead == '}')
        ADVANCE(368);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(407);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '$')
        ADVANCE(148);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__quoted_chars);
      if (lookahead == '\n')
        ADVANCE(405);
      if (lookahead == '#')
        ADVANCE(147);
      if (lookahead == '&')
        ADVANCE(313);
      if (lookahead == '\'')
        ADVANCE(318);
      if (lookahead == ')')
        ADVANCE(325);
      if (lookahead == ':')
        ADVANCE(393);
      if (lookahead == ';')
        ADVANCE(327);
      if (lookahead == '<')
        ADVANCE(329);
      if (lookahead == '=')
        ADVANCE(396);
      if (lookahead == '>')
        ADVANCE(333);
      if (lookahead == '\\')
        ADVANCE(406);
      if (lookahead == ']')
        ADVANCE(340);
      if (lookahead == '`')
        ADVANCE(151);
      if (lookahead == 'i')
        ADVANCE(375);
      if (lookahead == '|')
        ADVANCE(365);
      if (lookahead == '}')
        ADVANCE(368);
      if (lookahead == '(' ||
          lookahead == '{')
        ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(407);
      if (lookahead != 0 &&
          (lookahead < '\"' || lookahead > '$'))
        ADVANCE(319);
      END_STATE();
    case 408:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(370);
      if (lookahead == '&')
        ADVANCE(79);
      if (lookahead == '\'')
        ADVANCE(409);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == ':')
        ADVANCE(412);
      if (lookahead == ';')
        ADVANCE(161);
      if (lookahead == '<')
        ADVANCE(86);
      if (lookahead == '>')
        ADVANCE(88);
      if (lookahead == '[')
        ADVANCE(413);
      if (lookahead == '\\')
        SKIP(415);
      if (lookahead == '`')
        ADVANCE(30);
      if (lookahead == 'c')
        ADVANCE(416);
      if (lookahead == 'd')
        ADVANCE(420);
      if (lookahead == 'e')
        ADVANCE(424);
      if (lookahead == 'f')
        ADVANCE(433);
      if (lookahead == 'i')
        ADVANCE(444);
      if (lookahead == 't')
        ADVANCE(447);
      if (lookahead == 'w')
        ADVANCE(451);
      if (lookahead == '}')
        ADVANCE(74);
      if (lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(408);
      if ((lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == '\'')
        ADVANCE(410);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(129);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(82);
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
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '}'))
        ADVANCE(84);
      if (lookahead != 0)
        ADVANCE(409);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_raw_string);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 412:
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
          lookahead != '`' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(123);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[')
        ADVANCE(414);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 415:
      if (lookahead == '\n')
        SKIP(408);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'a')
        ADVANCE(417);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          lookahead != 'a' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 's')
        ADVANCE(418);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(419);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'o')
        ADVANCE(421);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == 'n')
        ADVANCE(422);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(423);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_done);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'l')
        ADVANCE(425);
      if (lookahead == 's')
        ADVANCE(430);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(426);
      if (lookahead == 's')
        ADVANCE(428);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'f')
        ADVANCE(427);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_elif);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(429);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'a')
        ADVANCE(431);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          lookahead != 'a' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'c')
        ADVANCE(432);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_esac);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(434);
      if (lookahead == 'o')
        ADVANCE(435);
      if (lookahead == 'u')
        ADVANCE(437);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_fi);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'r')
        ADVANCE(436);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'n')
        ADVANCE(438);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'c')
        ADVANCE(439);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 't')
        ADVANCE(440);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(441);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'o')
        ADVANCE(442);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'n')
        ADVANCE(443);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'f')
        ADVANCE(445);
      if (lookahead == 'n')
        ADVANCE(446);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'h')
        ADVANCE(448);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(449);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'n')
        ADVANCE(450);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_then);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'h')
        ADVANCE(452);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'i')
        ADVANCE(453);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'l')
        ADVANCE(454);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'e')
        ADVANCE(455);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 456:
      if (lookahead == '\n')
        ADVANCE(176);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(139);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == ';')
        ADVANCE(141);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '\\')
        SKIP(457);
      if (lookahead == '`')
        ADVANCE(30);
      if (lookahead == '|')
        ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(456);
      END_STATE();
    case 457:
      if (lookahead == '\n')
        SKIP(456);
      END_STATE();
    case 458:
      if (lookahead == '\n')
        ADVANCE(176);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(177);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == ';')
        ADVANCE(141);
      if (lookahead == '\\')
        SKIP(459);
      if (lookahead == '`')
        ADVANCE(30);
      if (lookahead == '|')
        ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(458);
      END_STATE();
    case 459:
      if (lookahead == '\n')
        SKIP(458);
      END_STATE();
    case 460:
      if (lookahead == '\n')
        ADVANCE(461);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(370);
      if (lookahead == '&')
        ADVANCE(180);
      if (lookahead == '\'')
        ADVANCE(409);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == ':')
        ADVANCE(412);
      if (lookahead == ';')
        ADVANCE(141);
      if (lookahead == '<')
        ADVANCE(463);
      if (lookahead == '=')
        ADVANCE(123);
      if (lookahead == '>')
        ADVANCE(88);
      if (lookahead == '\\')
        SKIP(466);
      if (lookahead == ']')
        ADVANCE(467);
      if (lookahead == '`')
        ADVANCE(30);
      if (lookahead == 'i')
        ADVANCE(469);
      if (lookahead == '|')
        ADVANCE(223);
      if (lookahead == '}')
        ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(462);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(461);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(462);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(461);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(462);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '&')
        ADVANCE(87);
      if (lookahead == '<')
        ADVANCE(464);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '-')
        ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 465:
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 466:
      if (lookahead == '\n')
        SKIP(460);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']')
        ADVANCE(468);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_leading_word);
      if (lookahead == 'n')
        ADVANCE(446);
      if (lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '|')
        ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '&' ||
          ('<' <= lookahead && lookahead <= '>'))
        ADVANCE(78);
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
          lookahead != '`' &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(411);
      END_STATE();
    case 470:
      if (lookahead == '\n')
        ADVANCE(176);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(76);
      if (lookahead == '&')
        ADVANCE(180);
      if (lookahead == '\'')
        ADVANCE(82);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == ':')
        ADVANCE(13);
      if (lookahead == ';')
        ADVANCE(141);
      if (lookahead == '<')
        ADVANCE(463);
      if (lookahead == '>')
        ADVANCE(88);
      if (lookahead == '\\')
        SKIP(471);
      if (lookahead == '`')
        ADVANCE(30);
      if (lookahead == '|')
        ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(470);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 471:
      if (lookahead == '\n')
        SKIP(470);
      END_STATE();
    case 472:
      if (lookahead == '\n')
        ADVANCE(176);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(127);
      if (lookahead == '&')
        ADVANCE(139);
      if (lookahead == '\'')
        ADVANCE(129);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == ';')
        ADVANCE(141);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '\\')
        SKIP(473);
      if (lookahead == ']')
        ADVANCE(213);
      if (lookahead == '`')
        ADVANCE(30);
      if (lookahead == '|')
        ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(472);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(123);
      END_STATE();
    case 473:
      if (lookahead == '\n')
        SKIP(472);
      END_STATE();
    case 474:
      if (lookahead == '\n')
        ADVANCE(176);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(177);
      if (lookahead == ';')
        ADVANCE(141);
      if (lookahead == '\\')
        SKIP(475);
      if (lookahead == '{')
        ADVANCE(71);
      if (lookahead == '|')
        ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(474);
      END_STATE();
    case 475:
      if (lookahead == '\n')
        SKIP(474);
      END_STATE();
    case 476:
      if (lookahead == '\n')
        ADVANCE(176);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(127);
      if (lookahead == '&')
        ADVANCE(139);
      if (lookahead == '\'')
        ADVANCE(129);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == ';')
        ADVANCE(141);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '\\')
        SKIP(477);
      if (lookahead == '`')
        ADVANCE(30);
      if (lookahead == '|')
        ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(476);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(123);
      END_STATE();
    case 477:
      if (lookahead == '\n')
        SKIP(476);
      END_STATE();
    case 478:
      if (lookahead == '\n')
        ADVANCE(176);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(76);
      if (lookahead == '&')
        ADVANCE(180);
      if (lookahead == '\'')
        ADVANCE(82);
      if (lookahead == ':')
        ADVANCE(13);
      if (lookahead == ';')
        ADVANCE(141);
      if (lookahead == '<')
        ADVANCE(86);
      if (lookahead == '>')
        ADVANCE(88);
      if (lookahead == '\\')
        SKIP(479);
      if (lookahead == '`')
        ADVANCE(30);
      if (lookahead == '|')
        ADVANCE(144);
      if (lookahead == '}')
        ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(478);
      if (lookahead != 0 &&
          (lookahead < '&' || lookahead > ')') &&
          (lookahead < ':' || lookahead > '>') &&
          (lookahead < '{' || lookahead > '}'))
        ADVANCE(78);
      END_STATE();
    case 479:
      if (lookahead == '\n')
        SKIP(478);
      END_STATE();
    case 480:
      if (lookahead == '\n')
        ADVANCE(481);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(139);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == ';')
        ADVANCE(141);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '\\')
        SKIP(483);
      if (lookahead == '`')
        ADVANCE(30);
      if (lookahead == '|')
        ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(482);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(482);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(482);
      END_STATE();
    case 483:
      if (lookahead == '\n')
        SKIP(480);
      END_STATE();
    case 484:
      if (lookahead == '\n')
        ADVANCE(485);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(139);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == ';')
        ADVANCE(141);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(19);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '\\')
        SKIP(487);
      if (lookahead == '`')
        ADVANCE(30);
      if (lookahead == '|')
        ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(486);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(485);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(486);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\n')
        ADVANCE(485);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(486);
      END_STATE();
    case 487:
      if (lookahead == '\n')
        SKIP(484);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 75, .external_lex_state = 2},
  [2] = {.lex_state = 115},
  [3] = {.lex_state = 121},
  [4] = {.lex_state = 124, .external_lex_state = 2},
  [5] = {.lex_state = 124, .external_lex_state = 2},
  [6] = {.lex_state = 126},
  [7] = {.lex_state = 132},
  [8] = {.lex_state = 134, .external_lex_state = 2},
  [9] = {.lex_state = 126},
  [10] = {.lex_state = 126},
  [11] = {.lex_state = 136, .external_lex_state = 2},
  [12] = {.lex_state = 146},
  [13] = {.lex_state = 152, .external_lex_state = 2},
  [14] = {.lex_state = 152, .external_lex_state = 2},
  [15] = {.lex_state = 126},
  [16] = {.lex_state = 154, .external_lex_state = 2},
  [17] = {.lex_state = 158},
  [18] = {.lex_state = 160, .external_lex_state = 2},
  [19] = {.lex_state = 175},
  [20] = {.lex_state = 179, .external_lex_state = 2},
  [21] = {.lex_state = 152, .external_lex_state = 2},
  [22] = {.lex_state = 75, .external_lex_state = 2},
  [23] = {.lex_state = 152, .external_lex_state = 2},
  [24] = {.lex_state = 126},
  [25] = {.lex_state = 183},
  [26] = {.lex_state = 186},
  [27] = {.lex_state = 175},
  [28] = {.lex_state = 179, .external_lex_state = 2},
  [29] = {.lex_state = 190},
  [30] = {.lex_state = 146},
  [31] = {.lex_state = 192},
  [32] = {.lex_state = 194},
  [33] = {.lex_state = 199},
  [34] = {.lex_state = 152, .external_lex_state = 2},
  [35] = {.lex_state = 152, .external_lex_state = 2},
  [36] = {.lex_state = 209},
  [37] = {.lex_state = 175},
  [38] = {.lex_state = 134, .external_lex_state = 2},
  [39] = {.lex_state = 146},
  [40] = {.lex_state = 211},
  [41] = {.lex_state = 194},
  [42] = {.lex_state = 199},
  [43] = {.lex_state = 152, .external_lex_state = 2},
  [44] = {.lex_state = 152, .external_lex_state = 2},
  [45] = {.lex_state = 215},
  [46] = {.lex_state = 218},
  [47] = {.lex_state = 115},
  [48] = {.lex_state = 221, .external_lex_state = 2},
  [49] = {.lex_state = 126},
  [50] = {.lex_state = 225, .external_lex_state = 3},
  [51] = {.lex_state = 227, .external_lex_state = 2},
  [52] = {.lex_state = 227, .external_lex_state = 2},
  [53] = {.lex_state = 136, .external_lex_state = 2},
  [54] = {.lex_state = 146},
  [55] = {.lex_state = 194},
  [56] = {.lex_state = 199},
  [57] = {.lex_state = 152, .external_lex_state = 2},
  [58] = {.lex_state = 152, .external_lex_state = 2},
  [59] = {.lex_state = 146},
  [60] = {.lex_state = 229, .external_lex_state = 2},
  [61] = {.lex_state = 146},
  [62] = {.lex_state = 152, .external_lex_state = 2},
  [63] = {.lex_state = 152, .external_lex_state = 2},
  [64] = {.lex_state = 232, .external_lex_state = 2},
  [65] = {.lex_state = 235},
  [66] = {.lex_state = 152, .external_lex_state = 2},
  [67] = {.lex_state = 237, .external_lex_state = 2},
  [68] = {.lex_state = 240, .external_lex_state = 2},
  [69] = {.lex_state = 243},
  [70] = {.lex_state = 152, .external_lex_state = 2},
  [71] = {.lex_state = 146},
  [72] = {.lex_state = 152, .external_lex_state = 2},
  [73] = {.lex_state = 194},
  [74] = {.lex_state = 199},
  [75] = {.lex_state = 152, .external_lex_state = 2},
  [76] = {.lex_state = 152, .external_lex_state = 2},
  [77] = {.lex_state = 235},
  [78] = {.lex_state = 221, .external_lex_state = 2},
  [79] = {.lex_state = 126, .external_lex_state = 4},
  [80] = {.lex_state = 227, .external_lex_state = 2},
  [81] = {.lex_state = 245, .external_lex_state = 2},
  [82] = {.lex_state = 124, .external_lex_state = 2},
  [83] = {.lex_state = 124, .external_lex_state = 2},
  [84] = {.lex_state = 160, .external_lex_state = 2},
  [85] = {.lex_state = 136, .external_lex_state = 2},
  [86] = {.lex_state = 253, .external_lex_state = 2},
  [87] = {.lex_state = 152, .external_lex_state = 2},
  [88] = {.lex_state = 152, .external_lex_state = 2},
  [89] = {.lex_state = 124, .external_lex_state = 2},
  [90] = {.lex_state = 257, .external_lex_state = 2},
  [91] = {.lex_state = 175},
  [92] = {.lex_state = 259},
  [93] = {.lex_state = 261, .external_lex_state = 2},
  [94] = {.lex_state = 192},
  [95] = {.lex_state = 146},
  [96] = {.lex_state = 263},
  [97] = {.lex_state = 183},
  [98] = {.lex_state = 192},
  [99] = {.lex_state = 192},
  [100] = {.lex_state = 192},
  [101] = {.lex_state = 265},
  [102] = {.lex_state = 270},
  [103] = {.lex_state = 270},
  [104] = {.lex_state = 235},
  [105] = {.lex_state = 243},
  [106] = {.lex_state = 235},
  [107] = {.lex_state = 175},
  [108] = {.lex_state = 272},
  [109] = {.lex_state = 146},
  [110] = {.lex_state = 211},
  [111] = {.lex_state = 272},
  [112] = {.lex_state = 272},
  [113] = {.lex_state = 270},
  [114] = {.lex_state = 270},
  [115] = {.lex_state = 235},
  [116] = {.lex_state = 243},
  [117] = {.lex_state = 175},
  [118] = {.lex_state = 211},
  [119] = {.lex_state = 126},
  [120] = {.lex_state = 146},
  [121] = {.lex_state = 221, .external_lex_state = 2},
  [122] = {.lex_state = 194},
  [123] = {.lex_state = 199},
  [124] = {.lex_state = 152, .external_lex_state = 2},
  [125] = {.lex_state = 152, .external_lex_state = 2},
  [126] = {.lex_state = 221, .external_lex_state = 2},
  [127] = {.lex_state = 227, .external_lex_state = 2},
  [128] = {.lex_state = 146},
  [129] = {.lex_state = 227, .external_lex_state = 2},
  [130] = {.lex_state = 194},
  [131] = {.lex_state = 199},
  [132] = {.lex_state = 152, .external_lex_state = 2},
  [133] = {.lex_state = 152, .external_lex_state = 2},
  [134] = {.lex_state = 227, .external_lex_state = 2},
  [135] = {.lex_state = 274, .external_lex_state = 5},
  [136] = {.lex_state = 227, .external_lex_state = 2},
  [137] = {.lex_state = 227, .external_lex_state = 2},
  [138] = {.lex_state = 146},
  [139] = {.lex_state = 146},
  [140] = {.lex_state = 146},
  [141] = {.lex_state = 270},
  [142] = {.lex_state = 270},
  [143] = {.lex_state = 235},
  [144] = {.lex_state = 243},
  [145] = {.lex_state = 136, .external_lex_state = 2},
  [146] = {.lex_state = 146},
  [147] = {.lex_state = 115},
  [148] = {.lex_state = 277, .external_lex_state = 2},
  [149] = {.lex_state = 126},
  [150] = {.lex_state = 225, .external_lex_state = 3},
  [151] = {.lex_state = 279, .external_lex_state = 2},
  [152] = {.lex_state = 279, .external_lex_state = 2},
  [153] = {.lex_state = 281, .external_lex_state = 2},
  [154] = {.lex_state = 146},
  [155] = {.lex_state = 235},
  [156] = {.lex_state = 243},
  [157] = {.lex_state = 277, .external_lex_state = 2},
  [158] = {.lex_state = 126, .external_lex_state = 4},
  [159] = {.lex_state = 279, .external_lex_state = 2},
  [160] = {.lex_state = 136, .external_lex_state = 2},
  [161] = {.lex_state = 229, .external_lex_state = 2},
  [162] = {.lex_state = 232, .external_lex_state = 2},
  [163] = {.lex_state = 284, .external_lex_state = 2},
  [164] = {.lex_state = 284, .external_lex_state = 2},
  [165] = {.lex_state = 237, .external_lex_state = 2},
  [166] = {.lex_state = 240, .external_lex_state = 2},
  [167] = {.lex_state = 152, .external_lex_state = 2},
  [168] = {.lex_state = 146},
  [169] = {.lex_state = 152, .external_lex_state = 2},
  [170] = {.lex_state = 152, .external_lex_state = 2},
  [171] = {.lex_state = 152, .external_lex_state = 2},
  [172] = {.lex_state = 270},
  [173] = {.lex_state = 270},
  [174] = {.lex_state = 235},
  [175] = {.lex_state = 243},
  [176] = {.lex_state = 286},
  [177] = {.lex_state = 221, .external_lex_state = 2},
  [178] = {.lex_state = 227, .external_lex_state = 2},
  [179] = {.lex_state = 179, .external_lex_state = 2},
  [180] = {.lex_state = 146},
  [181] = {.lex_state = 194},
  [182] = {.lex_state = 199},
  [183] = {.lex_state = 152, .external_lex_state = 2},
  [184] = {.lex_state = 152, .external_lex_state = 2},
  [185] = {.lex_state = 175},
  [186] = {.lex_state = 179, .external_lex_state = 2},
  [187] = {.lex_state = 175},
  [188] = {.lex_state = 179, .external_lex_state = 2},
  [189] = {.lex_state = 221, .external_lex_state = 2},
  [190] = {.lex_state = 221, .external_lex_state = 2},
  [191] = {.lex_state = 227, .external_lex_state = 2},
  [192] = {.lex_state = 186},
  [193] = {.lex_state = 175},
  [194] = {.lex_state = 257, .external_lex_state = 2},
  [195] = {.lex_state = 175},
  [196] = {.lex_state = 124, .external_lex_state = 2},
  [197] = {.lex_state = 288, .external_lex_state = 2},
  [198] = {.lex_state = 290},
  [199] = {.lex_state = 294},
  [200] = {.lex_state = 261, .external_lex_state = 2},
  [201] = {.lex_state = 290},
  [202] = {.lex_state = 192},
  [203] = {.lex_state = 296},
  [204] = {.lex_state = 263},
  [205] = {.lex_state = 192},
  [206] = {.lex_state = 126},
  [207] = {.lex_state = 192},
  [208] = {.lex_state = 126},
  [209] = {.lex_state = 192},
  [210] = {.lex_state = 286},
  [211] = {.lex_state = 272},
  [212] = {.lex_state = 272},
  [213] = {.lex_state = 126},
  [214] = {.lex_state = 272},
  [215] = {.lex_state = 126},
  [216] = {.lex_state = 272},
  [217] = {.lex_state = 227, .external_lex_state = 2},
  [218] = {.lex_state = 221, .external_lex_state = 2},
  [219] = {.lex_state = 146},
  [220] = {.lex_state = 221, .external_lex_state = 2},
  [221] = {.lex_state = 221, .external_lex_state = 2},
  [222] = {.lex_state = 221, .external_lex_state = 2},
  [223] = {.lex_state = 270},
  [224] = {.lex_state = 270},
  [225] = {.lex_state = 235},
  [226] = {.lex_state = 243},
  [227] = {.lex_state = 221, .external_lex_state = 2},
  [228] = {.lex_state = 227, .external_lex_state = 2},
  [229] = {.lex_state = 227, .external_lex_state = 2},
  [230] = {.lex_state = 146},
  [231] = {.lex_state = 227, .external_lex_state = 2},
  [232] = {.lex_state = 227, .external_lex_state = 2},
  [233] = {.lex_state = 227, .external_lex_state = 2},
  [234] = {.lex_state = 270},
  [235] = {.lex_state = 270},
  [236] = {.lex_state = 235},
  [237] = {.lex_state = 243},
  [238] = {.lex_state = 274, .external_lex_state = 5},
  [239] = {.lex_state = 227, .external_lex_state = 2},
  [240] = {.lex_state = 194},
  [241] = {.lex_state = 199},
  [242] = {.lex_state = 274, .external_lex_state = 5},
  [243] = {.lex_state = 146},
  [244] = {.lex_state = 126},
  [245] = {.lex_state = 146},
  [246] = {.lex_state = 126},
  [247] = {.lex_state = 146},
  [248] = {.lex_state = 126},
  [249] = {.lex_state = 146},
  [250] = {.lex_state = 277, .external_lex_state = 2},
  [251] = {.lex_state = 194},
  [252] = {.lex_state = 199},
  [253] = {.lex_state = 152, .external_lex_state = 2},
  [254] = {.lex_state = 152, .external_lex_state = 2},
  [255] = {.lex_state = 277, .external_lex_state = 2},
  [256] = {.lex_state = 279, .external_lex_state = 2},
  [257] = {.lex_state = 279, .external_lex_state = 2},
  [258] = {.lex_state = 279, .external_lex_state = 2},
  [259] = {.lex_state = 274, .external_lex_state = 5},
  [260] = {.lex_state = 279, .external_lex_state = 2},
  [261] = {.lex_state = 279, .external_lex_state = 2},
  [262] = {.lex_state = 281, .external_lex_state = 2},
  [263] = {.lex_state = 281, .external_lex_state = 2},
  [264] = {.lex_state = 277, .external_lex_state = 2},
  [265] = {.lex_state = 279, .external_lex_state = 2},
  [266] = {.lex_state = 152, .external_lex_state = 2},
  [267] = {.lex_state = 277, .external_lex_state = 2},
  [268] = {.lex_state = 277, .external_lex_state = 2},
  [269] = {.lex_state = 279, .external_lex_state = 2},
  [270] = {.lex_state = 284, .external_lex_state = 2},
  [271] = {.lex_state = 284, .external_lex_state = 2},
  [272] = {.lex_state = 284, .external_lex_state = 2},
  [273] = {.lex_state = 284, .external_lex_state = 2},
  [274] = {.lex_state = 152, .external_lex_state = 2},
  [275] = {.lex_state = 152, .external_lex_state = 2},
  [276] = {.lex_state = 126},
  [277] = {.lex_state = 152, .external_lex_state = 2},
  [278] = {.lex_state = 126},
  [279] = {.lex_state = 152, .external_lex_state = 2},
  [280] = {.lex_state = 302, .external_lex_state = 2},
  [281] = {.lex_state = 175},
  [282] = {.lex_state = 227, .external_lex_state = 2},
  [283] = {.lex_state = 179, .external_lex_state = 2},
  [284] = {.lex_state = 146},
  [285] = {.lex_state = 179, .external_lex_state = 2},
  [286] = {.lex_state = 179, .external_lex_state = 2},
  [287] = {.lex_state = 179, .external_lex_state = 2},
  [288] = {.lex_state = 270},
  [289] = {.lex_state = 270},
  [290] = {.lex_state = 235},
  [291] = {.lex_state = 243},
  [292] = {.lex_state = 221, .external_lex_state = 2},
  [293] = {.lex_state = 221, .external_lex_state = 2},
  [294] = {.lex_state = 227, .external_lex_state = 2},
  [295] = {.lex_state = 175},
  [296] = {.lex_state = 175},
  [297] = {.lex_state = 190},
  [298] = {.lex_state = 288, .external_lex_state = 2},
  [299] = {.lex_state = 175},
  [300] = {.lex_state = 294},
  [301] = {.lex_state = 290},
  [302] = {.lex_state = 290},
  [303] = {.lex_state = 175},
  [304] = {.lex_state = 235},
  [305] = {.lex_state = 194},
  [306] = {.lex_state = 296},
  [307] = {.lex_state = 296},
  [308] = {.lex_state = 296},
  [309] = {.lex_state = 304},
  [310] = {.lex_state = 304},
  [311] = {.lex_state = 175},
  [312] = {.lex_state = 304},
  [313] = {.lex_state = 304},
  [314] = {.lex_state = 221, .external_lex_state = 2},
  [315] = {.lex_state = 221, .external_lex_state = 2},
  [316] = {.lex_state = 126},
  [317] = {.lex_state = 221, .external_lex_state = 2},
  [318] = {.lex_state = 126},
  [319] = {.lex_state = 221, .external_lex_state = 2},
  [320] = {.lex_state = 227, .external_lex_state = 2},
  [321] = {.lex_state = 227, .external_lex_state = 2},
  [322] = {.lex_state = 126},
  [323] = {.lex_state = 227, .external_lex_state = 2},
  [324] = {.lex_state = 126},
  [325] = {.lex_state = 227, .external_lex_state = 2},
  [326] = {.lex_state = 274, .external_lex_state = 5},
  [327] = {.lex_state = 274, .external_lex_state = 5},
  [328] = {.lex_state = 274, .external_lex_state = 5},
  [329] = {.lex_state = 270},
  [330] = {.lex_state = 270},
  [331] = {.lex_state = 274, .external_lex_state = 5},
  [332] = {.lex_state = 227, .external_lex_state = 2},
  [333] = {.lex_state = 304},
  [334] = {.lex_state = 304},
  [335] = {.lex_state = 279, .external_lex_state = 2},
  [336] = {.lex_state = 277, .external_lex_state = 2},
  [337] = {.lex_state = 146},
  [338] = {.lex_state = 277, .external_lex_state = 2},
  [339] = {.lex_state = 277, .external_lex_state = 2},
  [340] = {.lex_state = 277, .external_lex_state = 2},
  [341] = {.lex_state = 270},
  [342] = {.lex_state = 270},
  [343] = {.lex_state = 235},
  [344] = {.lex_state = 243},
  [345] = {.lex_state = 277, .external_lex_state = 2},
  [346] = {.lex_state = 279, .external_lex_state = 2},
  [347] = {.lex_state = 279, .external_lex_state = 2},
  [348] = {.lex_state = 274, .external_lex_state = 5},
  [349] = {.lex_state = 279, .external_lex_state = 2},
  [350] = {.lex_state = 277, .external_lex_state = 2},
  [351] = {.lex_state = 277, .external_lex_state = 2},
  [352] = {.lex_state = 279, .external_lex_state = 2},
  [353] = {.lex_state = 284, .external_lex_state = 2},
  [354] = {.lex_state = 284, .external_lex_state = 2},
  [355] = {.lex_state = 304},
  [356] = {.lex_state = 304},
  [357] = {.lex_state = 175},
  [358] = {.lex_state = 302, .external_lex_state = 2},
  [359] = {.lex_state = 179, .external_lex_state = 2},
  [360] = {.lex_state = 179, .external_lex_state = 2},
  [361] = {.lex_state = 126},
  [362] = {.lex_state = 179, .external_lex_state = 2},
  [363] = {.lex_state = 126},
  [364] = {.lex_state = 179, .external_lex_state = 2},
  [365] = {.lex_state = 227, .external_lex_state = 2},
  [366] = {.lex_state = 227, .external_lex_state = 2},
  [367] = {.lex_state = 261, .external_lex_state = 2},
  [368] = {.lex_state = 175},
  [369] = {.lex_state = 294},
  [370] = {.lex_state = 306, .external_lex_state = 2},
  [371] = {.lex_state = 175},
  [372] = {.lex_state = 296},
  [373] = {.lex_state = 296},
  [374] = {.lex_state = 192},
  [375] = {.lex_state = 192},
  [376] = {.lex_state = 272},
  [377] = {.lex_state = 272},
  [378] = {.lex_state = 304},
  [379] = {.lex_state = 304},
  [380] = {.lex_state = 304},
  [381] = {.lex_state = 304},
  [382] = {.lex_state = 274, .external_lex_state = 5},
  [383] = {.lex_state = 126},
  [384] = {.lex_state = 274, .external_lex_state = 5},
  [385] = {.lex_state = 126},
  [386] = {.lex_state = 146},
  [387] = {.lex_state = 146},
  [388] = {.lex_state = 277, .external_lex_state = 2},
  [389] = {.lex_state = 277, .external_lex_state = 2},
  [390] = {.lex_state = 126},
  [391] = {.lex_state = 277, .external_lex_state = 2},
  [392] = {.lex_state = 126},
  [393] = {.lex_state = 277, .external_lex_state = 2},
  [394] = {.lex_state = 279, .external_lex_state = 2},
  [395] = {.lex_state = 279, .external_lex_state = 2},
  [396] = {.lex_state = 279, .external_lex_state = 2},
  [397] = {.lex_state = 152, .external_lex_state = 2},
  [398] = {.lex_state = 152, .external_lex_state = 2},
  [399] = {.lex_state = 175},
  [400] = {.lex_state = 304},
  [401] = {.lex_state = 304},
  [402] = {.lex_state = 261, .external_lex_state = 2},
  [403] = {.lex_state = 175},
  [404] = {.lex_state = 296},
  [405] = {.lex_state = 306, .external_lex_state = 2},
  [406] = {.lex_state = 175},
  [407] = {.lex_state = 221, .external_lex_state = 2},
  [408] = {.lex_state = 221, .external_lex_state = 2},
  [409] = {.lex_state = 227, .external_lex_state = 2},
  [410] = {.lex_state = 227, .external_lex_state = 2},
  [411] = {.lex_state = 304},
  [412] = {.lex_state = 304},
  [413] = {.lex_state = 304},
  [414] = {.lex_state = 304},
  [415] = {.lex_state = 179, .external_lex_state = 2},
  [416] = {.lex_state = 179, .external_lex_state = 2},
  [417] = {.lex_state = 296},
  [418] = {.lex_state = 274, .external_lex_state = 5},
  [419] = {.lex_state = 274, .external_lex_state = 5},
  [420] = {.lex_state = 277, .external_lex_state = 2},
  [421] = {.lex_state = 277, .external_lex_state = 2},
  [422] = {.lex_state = 308, .external_lex_state = 2},
  [423] = {.lex_state = 175},
  [424] = {.lex_state = 261, .external_lex_state = 2},
  [425] = {.lex_state = 175},
  [426] = {.lex_state = 175},
  [427] = {.lex_state = 311, .external_lex_state = 2},
  [428] = {.lex_state = 134, .external_lex_state = 2},
  [429] = {.lex_state = 371, .external_lex_state = 6},
  [430] = {.lex_state = 376, .external_lex_state = 2},
  [431] = {.lex_state = 126, .external_lex_state = 4},
  [432] = {.lex_state = 380, .external_lex_state = 2},
  [433] = {.lex_state = 385, .external_lex_state = 6},
  [434] = {.lex_state = 380, .external_lex_state = 2},
  [435] = {.lex_state = 126},
  [436] = {.lex_state = 225, .external_lex_state = 3},
  [437] = {.lex_state = 404, .external_lex_state = 6},
  [438] = {.lex_state = 408, .external_lex_state = 2},
  [439] = {.lex_state = 456, .external_lex_state = 2},
  [440] = {.lex_state = 274, .external_lex_state = 5},
  [441] = {.lex_state = 274, .external_lex_state = 5},
  [442] = {.lex_state = 456, .external_lex_state = 2},
  [443] = {.lex_state = 115},
  [444] = {.lex_state = 245, .external_lex_state = 2},
  [445] = {.lex_state = 175},
  [446] = {.lex_state = 175},
  [447] = {.lex_state = 290},
  [448] = {.lex_state = 294},
  [449] = {.lex_state = 296},
  [450] = {.lex_state = 175},
  [451] = {.lex_state = 458},
  [452] = {.lex_state = 179, .external_lex_state = 2},
  [453] = {.lex_state = 460, .external_lex_state = 2},
  [454] = {.lex_state = 371, .external_lex_state = 6},
  [455] = {.lex_state = 380, .external_lex_state = 2},
  [456] = {.lex_state = 470, .external_lex_state = 2},
  [457] = {.lex_state = 456, .external_lex_state = 2},
  [458] = {.lex_state = 456, .external_lex_state = 2},
  [459] = {.lex_state = 404, .external_lex_state = 6},
  [460] = {.lex_state = 160, .external_lex_state = 2},
  [461] = {.lex_state = 290},
  [462] = {.lex_state = 296},
  [463] = {.lex_state = 472, .external_lex_state = 2},
  [464] = {.lex_state = 152, .external_lex_state = 2},
  [465] = {.lex_state = 456, .external_lex_state = 2},
  [466] = {.lex_state = 146},
  [467] = {.lex_state = 274, .external_lex_state = 5},
  [468] = {.lex_state = 296},
  [469] = {.lex_state = 261, .external_lex_state = 2},
  [470] = {.lex_state = 474},
  [471] = {.lex_state = 115},
  [472] = {.lex_state = 476, .external_lex_state = 2},
  [473] = {.lex_state = 304},
  [474] = {.lex_state = 126},
  [475] = {.lex_state = 456, .external_lex_state = 2},
  [476] = {.lex_state = 456, .external_lex_state = 2},
  [477] = {.lex_state = 146},
  [478] = {.lex_state = 478, .external_lex_state = 2},
  [479] = {.lex_state = 194},
  [480] = {.lex_state = 199},
  [481] = {.lex_state = 152, .external_lex_state = 2},
  [482] = {.lex_state = 152, .external_lex_state = 2},
  [483] = {.lex_state = 460, .external_lex_state = 2},
  [484] = {.lex_state = 371, .external_lex_state = 6},
  [485] = {.lex_state = 371, .external_lex_state = 6},
  [486] = {.lex_state = 371, .external_lex_state = 6},
  [487] = {.lex_state = 243},
  [488] = {.lex_state = 146},
  [489] = {.lex_state = 470, .external_lex_state = 2},
  [490] = {.lex_state = 194},
  [491] = {.lex_state = 199},
  [492] = {.lex_state = 152, .external_lex_state = 2},
  [493] = {.lex_state = 152, .external_lex_state = 2},
  [494] = {.lex_state = 175},
  [495] = {.lex_state = 456, .external_lex_state = 2},
  [496] = {.lex_state = 126},
  [497] = {.lex_state = 175},
  [498] = {.lex_state = 380, .external_lex_state = 2},
  [499] = {.lex_state = 371, .external_lex_state = 6},
  [500] = {.lex_state = 371, .external_lex_state = 6},
  [501] = {.lex_state = 126},
  [502] = {.lex_state = 175},
  [503] = {.lex_state = 294},
  [504] = {.lex_state = 175},
  [505] = {.lex_state = 146},
  [506] = {.lex_state = 472, .external_lex_state = 2},
  [507] = {.lex_state = 194},
  [508] = {.lex_state = 199},
  [509] = {.lex_state = 152, .external_lex_state = 2},
  [510] = {.lex_state = 152, .external_lex_state = 2},
  [511] = {.lex_state = 456, .external_lex_state = 2},
  [512] = {.lex_state = 480, .external_lex_state = 2},
  [513] = {.lex_state = 146},
  [514] = {.lex_state = 152, .external_lex_state = 2},
  [515] = {.lex_state = 152, .external_lex_state = 2},
  [516] = {.lex_state = 484, .external_lex_state = 2},
  [517] = {.lex_state = 456, .external_lex_state = 2},
  [518] = {.lex_state = 460, .external_lex_state = 2},
  [519] = {.lex_state = 456, .external_lex_state = 2},
  [520] = {.lex_state = 126},
  [521] = {.lex_state = 146},
  [522] = {.lex_state = 476, .external_lex_state = 2},
  [523] = {.lex_state = 194},
  [524] = {.lex_state = 199},
  [525] = {.lex_state = 152, .external_lex_state = 2},
  [526] = {.lex_state = 152, .external_lex_state = 2},
  [527] = {.lex_state = 476, .external_lex_state = 2},
  [528] = {.lex_state = 456, .external_lex_state = 2},
  [529] = {.lex_state = 146},
  [530] = {.lex_state = 456, .external_lex_state = 2},
  [531] = {.lex_state = 194},
  [532] = {.lex_state = 199},
  [533] = {.lex_state = 152, .external_lex_state = 2},
  [534] = {.lex_state = 152, .external_lex_state = 2},
  [535] = {.lex_state = 478, .external_lex_state = 2},
  [536] = {.lex_state = 146},
  [537] = {.lex_state = 478, .external_lex_state = 2},
  [538] = {.lex_state = 478, .external_lex_state = 2},
  [539] = {.lex_state = 478, .external_lex_state = 2},
  [540] = {.lex_state = 270},
  [541] = {.lex_state = 270},
  [542] = {.lex_state = 235},
  [543] = {.lex_state = 243},
  [544] = {.lex_state = 470, .external_lex_state = 2},
  [545] = {.lex_state = 146},
  [546] = {.lex_state = 470, .external_lex_state = 2},
  [547] = {.lex_state = 470, .external_lex_state = 2},
  [548] = {.lex_state = 470, .external_lex_state = 2},
  [549] = {.lex_state = 270},
  [550] = {.lex_state = 270},
  [551] = {.lex_state = 235},
  [552] = {.lex_state = 243},
  [553] = {.lex_state = 470, .external_lex_state = 2},
  [554] = {.lex_state = 304},
  [555] = {.lex_state = 175},
  [556] = {.lex_state = 472, .external_lex_state = 2},
  [557] = {.lex_state = 146},
  [558] = {.lex_state = 472, .external_lex_state = 2},
  [559] = {.lex_state = 472, .external_lex_state = 2},
  [560] = {.lex_state = 472, .external_lex_state = 2},
  [561] = {.lex_state = 270},
  [562] = {.lex_state = 270},
  [563] = {.lex_state = 235},
  [564] = {.lex_state = 243},
  [565] = {.lex_state = 476, .external_lex_state = 2},
  [566] = {.lex_state = 456, .external_lex_state = 2},
  [567] = {.lex_state = 480, .external_lex_state = 2},
  [568] = {.lex_state = 146},
  [569] = {.lex_state = 235},
  [570] = {.lex_state = 243},
  [571] = {.lex_state = 476, .external_lex_state = 2},
  [572] = {.lex_state = 456, .external_lex_state = 2},
  [573] = {.lex_state = 456, .external_lex_state = 2},
  [574] = {.lex_state = 476, .external_lex_state = 2},
  [575] = {.lex_state = 146},
  [576] = {.lex_state = 476, .external_lex_state = 2},
  [577] = {.lex_state = 476, .external_lex_state = 2},
  [578] = {.lex_state = 476, .external_lex_state = 2},
  [579] = {.lex_state = 270},
  [580] = {.lex_state = 270},
  [581] = {.lex_state = 235},
  [582] = {.lex_state = 243},
  [583] = {.lex_state = 476, .external_lex_state = 2},
  [584] = {.lex_state = 456, .external_lex_state = 2},
  [585] = {.lex_state = 456, .external_lex_state = 2},
  [586] = {.lex_state = 146},
  [587] = {.lex_state = 456, .external_lex_state = 2},
  [588] = {.lex_state = 456, .external_lex_state = 2},
  [589] = {.lex_state = 456, .external_lex_state = 2},
  [590] = {.lex_state = 270},
  [591] = {.lex_state = 270},
  [592] = {.lex_state = 235},
  [593] = {.lex_state = 243},
  [594] = {.lex_state = 478, .external_lex_state = 2},
  [595] = {.lex_state = 478, .external_lex_state = 2},
  [596] = {.lex_state = 126},
  [597] = {.lex_state = 478, .external_lex_state = 2},
  [598] = {.lex_state = 126},
  [599] = {.lex_state = 478, .external_lex_state = 2},
  [600] = {.lex_state = 470, .external_lex_state = 2},
  [601] = {.lex_state = 470, .external_lex_state = 2},
  [602] = {.lex_state = 126},
  [603] = {.lex_state = 470, .external_lex_state = 2},
  [604] = {.lex_state = 126},
  [605] = {.lex_state = 470, .external_lex_state = 2},
  [606] = {.lex_state = 371, .external_lex_state = 6},
  [607] = {.lex_state = 472, .external_lex_state = 2},
  [608] = {.lex_state = 472, .external_lex_state = 2},
  [609] = {.lex_state = 126},
  [610] = {.lex_state = 472, .external_lex_state = 2},
  [611] = {.lex_state = 126},
  [612] = {.lex_state = 472, .external_lex_state = 2},
  [613] = {.lex_state = 476, .external_lex_state = 2},
  [614] = {.lex_state = 456, .external_lex_state = 2},
  [615] = {.lex_state = 480, .external_lex_state = 2},
  [616] = {.lex_state = 480, .external_lex_state = 2},
  [617] = {.lex_state = 476, .external_lex_state = 2},
  [618] = {.lex_state = 456, .external_lex_state = 2},
  [619] = {.lex_state = 476, .external_lex_state = 2},
  [620] = {.lex_state = 476, .external_lex_state = 2},
  [621] = {.lex_state = 126},
  [622] = {.lex_state = 476, .external_lex_state = 2},
  [623] = {.lex_state = 126},
  [624] = {.lex_state = 476, .external_lex_state = 2},
  [625] = {.lex_state = 456, .external_lex_state = 2},
  [626] = {.lex_state = 456, .external_lex_state = 2},
  [627] = {.lex_state = 126},
  [628] = {.lex_state = 456, .external_lex_state = 2},
  [629] = {.lex_state = 126},
  [630] = {.lex_state = 456, .external_lex_state = 2},
  [631] = {.lex_state = 304},
  [632] = {.lex_state = 304},
  [633] = {.lex_state = 304},
  [634] = {.lex_state = 304},
  [635] = {.lex_state = 304},
  [636] = {.lex_state = 304},
  [637] = {.lex_state = 456, .external_lex_state = 2},
  [638] = {.lex_state = 456, .external_lex_state = 2},
  [639] = {.lex_state = 304},
  [640] = {.lex_state = 304},
  [641] = {.lex_state = 304},
  [642] = {.lex_state = 304},
  [643] = {.lex_state = 478, .external_lex_state = 2},
  [644] = {.lex_state = 478, .external_lex_state = 2},
  [645] = {.lex_state = 470, .external_lex_state = 2},
  [646] = {.lex_state = 470, .external_lex_state = 2},
  [647] = {.lex_state = 472, .external_lex_state = 2},
  [648] = {.lex_state = 472, .external_lex_state = 2},
  [649] = {.lex_state = 476, .external_lex_state = 2},
  [650] = {.lex_state = 476, .external_lex_state = 2},
  [651] = {.lex_state = 456, .external_lex_state = 2},
  [652] = {.lex_state = 456, .external_lex_state = 2},
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
    [sym_program] = STATE(17),
    [sym__terminated_statement] = STATE(444),
    [sym_for_statement] = STATE(445),
    [sym_while_statement] = STATE(445),
    [sym_do_group] = STATE(446),
    [sym_if_statement] = STATE(445),
    [sym_elif_clause] = STATE(447),
    [sym_else_clause] = STATE(448),
    [sym_case_statement] = STATE(445),
    [sym_case_item] = STATE(449),
    [sym_function_definition] = STATE(445),
    [sym_compound_statement] = STATE(450),
    [sym_bracket_command] = STATE(445),
    [sym_command] = STATE(451),
    [sym_pipeline] = STATE(445),
    [sym_list] = STATE(445),
    [sym_subshell] = STATE(445),
    [sym_environment_variable_assignment] = STATE(452),
    [sym_string] = STATE(453),
    [sym_simple_expansion] = STATE(454),
    [sym_expansion] = STATE(454),
    [sym_command_substitution] = STATE(455),
    [sym_file_redirect] = STATE(456),
    [sym_heredoc_redirect] = STATE(457),
    [sym_heredoc] = STATE(458),
    [sym_special_variable_name] = STATE(459),
    [aux_sym_program_repeat1] = STATE(460),
    [aux_sym_if_statement_repeat1] = STATE(461),
    [aux_sym_case_statement_repeat1] = STATE(462),
    [aux_sym_bracket_command_repeat1] = STATE(463),
    [aux_sym_command_repeat1] = STATE(464),
    [aux_sym_command_repeat2] = STATE(465),
    [aux_sym_string_repeat1] = STATE(466),
    [aux_sym_heredoc_repeat1] = STATE(467),
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
    [anon_sym_BQUOTE] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(69),
    [anon_sym_GT] = ACTIONS(69),
    [anon_sym_GT_GT] = ACTIONS(71),
    [anon_sym_LT_AMP] = ACTIONS(71),
    [anon_sym_GT_AMP] = ACTIONS(71),
    [anon_sym_LT_LT] = ACTIONS(73),
    [anon_sym_LT_LT_DASH] = ACTIONS(75),
    [sym_comment] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_AT] = ACTIONS(79),
    [anon_sym_POUND] = ACTIONS(81),
    [anon_sym_QMARK] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_BANG] = ACTIONS(79),
    [anon_sym_0] = ACTIONS(79),
    [anon_sym__] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(83),
    [anon_sym_AMP] = ACTIONS(83),
  },
  [1] = {
    [sym_program] = STATE(17),
    [sym__terminated_statement] = STATE(18),
    [sym_for_statement] = STATE(19),
    [sym_while_statement] = STATE(19),
    [sym_if_statement] = STATE(19),
    [sym_case_statement] = STATE(19),
    [sym_function_definition] = STATE(19),
    [sym_bracket_command] = STATE(19),
    [sym_command] = STATE(19),
    [sym_pipeline] = STATE(19),
    [sym_list] = STATE(19),
    [sym_subshell] = STATE(19),
    [sym_environment_variable_assignment] = STATE(20),
    [sym_string] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(21),
    [aux_sym_program_repeat1] = STATE(22),
    [aux_sym_command_repeat1] = STATE(23),
    [sym_file_descriptor] = ACTIONS(85),
    [ts_builtin_sym_end] = ACTIONS(87),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_case] = ACTIONS(95),
    [anon_sym_function] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(103),
    [anon_sym_COLON] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_raw_string] = ACTIONS(109),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(117),
    [sym_comment] = ACTIONS(119),
  },
  [2] = {
    [anon_sym_LT] = ACTIONS(121),
    [anon_sym_GT] = ACTIONS(121),
    [anon_sym_GT_GT] = ACTIONS(123),
    [anon_sym_AMP_GT] = ACTIONS(121),
    [anon_sym_AMP_GT_GT] = ACTIONS(123),
    [anon_sym_LT_AMP] = ACTIONS(123),
    [anon_sym_GT_AMP] = ACTIONS(123),
    [sym_comment] = ACTIONS(119),
  },
  [3] = {
    [sym_word] = ACTIONS(125),
    [sym_comment] = ACTIONS(119),
  },
  [4] = {
    [sym__terminated_statement] = STATE(26),
    [sym_for_statement] = STATE(27),
    [sym_while_statement] = STATE(27),
    [sym_if_statement] = STATE(27),
    [sym_case_statement] = STATE(27),
    [sym_function_definition] = STATE(27),
    [sym_bracket_command] = STATE(27),
    [sym_command] = STATE(27),
    [sym_pipeline] = STATE(27),
    [sym_list] = STATE(27),
    [sym_subshell] = STATE(27),
    [sym_environment_variable_assignment] = STATE(28),
    [sym_string] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(23),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_case] = ACTIONS(95),
    [anon_sym_function] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(103),
    [anon_sym_COLON] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_raw_string] = ACTIONS(109),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(117),
    [sym_comment] = ACTIONS(119),
  },
  [5] = {
    [sym__terminated_statement] = STATE(29),
    [sym_for_statement] = STATE(27),
    [sym_while_statement] = STATE(27),
    [sym_if_statement] = STATE(27),
    [sym_case_statement] = STATE(27),
    [sym_function_definition] = STATE(27),
    [sym_bracket_command] = STATE(27),
    [sym_command] = STATE(27),
    [sym_pipeline] = STATE(27),
    [sym_list] = STATE(27),
    [sym_subshell] = STATE(27),
    [sym_environment_variable_assignment] = STATE(28),
    [sym_string] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(23),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_case] = ACTIONS(95),
    [anon_sym_function] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(103),
    [anon_sym_COLON] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_raw_string] = ACTIONS(109),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(117),
    [sym_comment] = ACTIONS(119),
  },
  [6] = {
    [sym_string] = STATE(31),
    [sym_simple_expansion] = STATE(31),
    [sym_expansion] = STATE(31),
    [sym_command_substitution] = STATE(31),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [sym_raw_string] = ACTIONS(129),
    [anon_sym_DOLLAR] = ACTIONS(131),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(133),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(135),
    [anon_sym_BQUOTE] = ACTIONS(137),
    [sym_word] = ACTIONS(139),
    [sym_comment] = ACTIONS(119),
  },
  [7] = {
    [sym_leading_word] = ACTIONS(141),
    [sym_comment] = ACTIONS(119),
  },
  [8] = {
    [sym__terminated_statement] = STATE(18),
    [sym_for_statement] = STATE(19),
    [sym_while_statement] = STATE(19),
    [sym_if_statement] = STATE(19),
    [sym_case_statement] = STATE(19),
    [sym_function_definition] = STATE(19),
    [sym_bracket_command] = STATE(19),
    [sym_command] = STATE(19),
    [sym_pipeline] = STATE(19),
    [sym_list] = STATE(19),
    [sym_subshell] = STATE(19),
    [sym_environment_variable_assignment] = STATE(20),
    [sym_string] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(21),
    [aux_sym_program_repeat1] = STATE(38),
    [aux_sym_command_repeat1] = STATE(23),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_case] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(143),
    [anon_sym_function] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(103),
    [anon_sym_COLON] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_raw_string] = ACTIONS(109),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(117),
    [sym_comment] = ACTIONS(119),
  },
  [9] = {
    [sym_string] = STATE(40),
    [sym_simple_expansion] = STATE(40),
    [sym_expansion] = STATE(40),
    [sym_command_substitution] = STATE(40),
    [aux_sym_bracket_command_repeat1] = STATE(45),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_raw_string] = ACTIONS(147),
    [anon_sym_DOLLAR] = ACTIONS(149),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(153),
    [anon_sym_BQUOTE] = ACTIONS(155),
    [sym_word] = ACTIONS(157),
    [sym_comment] = ACTIONS(119),
  },
  [10] = {
    [sym_string] = STATE(40),
    [sym_simple_expansion] = STATE(40),
    [sym_expansion] = STATE(40),
    [sym_command_substitution] = STATE(40),
    [aux_sym_bracket_command_repeat1] = STATE(46),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_raw_string] = ACTIONS(147),
    [anon_sym_DOLLAR] = ACTIONS(149),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(153),
    [anon_sym_BQUOTE] = ACTIONS(155),
    [sym_word] = ACTIONS(157),
    [sym_comment] = ACTIONS(119),
  },
  [11] = {
    [sym_file_redirect] = STATE(51),
    [sym_heredoc_redirect] = STATE(51),
    [aux_sym_command_repeat2] = STATE(52),
    [sym_file_descriptor] = ACTIONS(159),
    [anon_sym_SEMI_SEMI] = ACTIONS(161),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(163),
    [anon_sym_PIPE] = ACTIONS(161),
    [anon_sym_PIPE_AMP] = ACTIONS(161),
    [anon_sym_AMP_AMP] = ACTIONS(161),
    [anon_sym_PIPE_PIPE] = ACTIONS(161),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_GT_GT] = ACTIONS(165),
    [anon_sym_AMP_GT] = ACTIONS(165),
    [anon_sym_AMP_GT_GT] = ACTIONS(165),
    [anon_sym_LT_AMP] = ACTIONS(165),
    [anon_sym_GT_AMP] = ACTIONS(165),
    [anon_sym_LT_LT] = ACTIONS(167),
    [anon_sym_LT_LT_DASH] = ACTIONS(167),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(161),
    [anon_sym_LF] = ACTIONS(161),
    [anon_sym_AMP] = ACTIONS(161),
  },
  [12] = {
    [sym_simple_expansion] = STATE(54),
    [sym_expansion] = STATE(54),
    [sym_command_substitution] = STATE(54),
    [aux_sym_string_repeat1] = STATE(59),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [sym__quoted_chars] = ACTIONS(171),
    [anon_sym_DOLLAR] = ACTIONS(173),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(175),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [sym_comment] = ACTIONS(77),
  },
  [13] = {
    [sym_command] = STATE(65),
    [sym_environment_variable_assignment] = STATE(21),
    [sym_string] = STATE(60),
    [sym_command_substitution] = STATE(60),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(66),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(181),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_raw_string] = ACTIONS(185),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(187),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(191),
    [sym_comment] = ACTIONS(119),
  },
  [14] = {
    [sym_command] = STATE(69),
    [sym_environment_variable_assignment] = STATE(21),
    [sym_string] = STATE(67),
    [sym_command_substitution] = STATE(67),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(70),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_raw_string] = ACTIONS(195),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(187),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(197),
    [sym_comment] = ACTIONS(119),
  },
  [15] = {
    [sym_string] = STATE(72),
    [sym_simple_expansion] = STATE(72),
    [sym_expansion] = STATE(72),
    [sym_command_substitution] = STATE(72),
    [anon_sym_DQUOTE] = ACTIONS(199),
    [sym_raw_string] = ACTIONS(201),
    [anon_sym_DOLLAR] = ACTIONS(203),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(205),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(207),
    [anon_sym_BQUOTE] = ACTIONS(209),
    [sym_word] = ACTIONS(211),
    [sym_comment] = ACTIONS(119),
  },
  [16] = {
    [sym_file_redirect] = STATE(51),
    [sym_heredoc_redirect] = STATE(51),
    [aux_sym_command_repeat2] = STATE(80),
    [sym_file_descriptor] = ACTIONS(159),
    [anon_sym_SEMI_SEMI] = ACTIONS(213),
    [anon_sym_LPAREN] = ACTIONS(215),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(217),
    [anon_sym_PIPE] = ACTIONS(213),
    [anon_sym_PIPE_AMP] = ACTIONS(213),
    [anon_sym_AMP_AMP] = ACTIONS(213),
    [anon_sym_PIPE_PIPE] = ACTIONS(213),
    [anon_sym_EQ] = ACTIONS(219),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_GT_GT] = ACTIONS(165),
    [anon_sym_AMP_GT] = ACTIONS(165),
    [anon_sym_AMP_GT_GT] = ACTIONS(165),
    [anon_sym_LT_AMP] = ACTIONS(165),
    [anon_sym_GT_AMP] = ACTIONS(165),
    [anon_sym_LT_LT] = ACTIONS(167),
    [anon_sym_LT_LT_DASH] = ACTIONS(167),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(213),
    [anon_sym_LF] = ACTIONS(213),
    [anon_sym_AMP] = ACTIONS(213),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(221),
    [sym_comment] = ACTIONS(119),
  },
  [18] = {
    [sym_file_descriptor] = ACTIONS(223),
    [ts_builtin_sym_end] = ACTIONS(223),
    [anon_sym_for] = ACTIONS(225),
    [anon_sym_while] = ACTIONS(225),
    [anon_sym_done] = ACTIONS(225),
    [anon_sym_if] = ACTIONS(225),
    [anon_sym_fi] = ACTIONS(225),
    [anon_sym_elif] = ACTIONS(225),
    [anon_sym_else] = ACTIONS(225),
    [anon_sym_case] = ACTIONS(225),
    [anon_sym_RPAREN] = ACTIONS(223),
    [anon_sym_SEMI_SEMI] = ACTIONS(223),
    [anon_sym_function] = ACTIONS(225),
    [anon_sym_LPAREN] = ACTIONS(223),
    [anon_sym_RBRACE] = ACTIONS(223),
    [anon_sym_LBRACK] = ACTIONS(225),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(225),
    [anon_sym_COLON] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(223),
    [sym_raw_string] = ACTIONS(225),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(223),
    [anon_sym_BQUOTE] = ACTIONS(223),
    [anon_sym_LT] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(225),
    [anon_sym_GT_GT] = ACTIONS(225),
    [anon_sym_AMP_GT] = ACTIONS(225),
    [anon_sym_AMP_GT_GT] = ACTIONS(225),
    [anon_sym_LT_AMP] = ACTIONS(225),
    [anon_sym_GT_AMP] = ACTIONS(225),
    [sym_leading_word] = ACTIONS(227),
    [sym_comment] = ACTIONS(119),
  },
  [19] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(229),
    [anon_sym_PIPE] = ACTIONS(231),
    [anon_sym_PIPE_AMP] = ACTIONS(231),
    [anon_sym_AMP_AMP] = ACTIONS(233),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(229),
    [anon_sym_LF] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(229),
  },
  [20] = {
    [sym_file_descriptor] = ACTIONS(235),
    [anon_sym_SEMI_SEMI] = ACTIONS(229),
    [anon_sym_COLON] = ACTIONS(237),
    [anon_sym_PIPE] = ACTIONS(231),
    [anon_sym_PIPE_AMP] = ACTIONS(231),
    [anon_sym_AMP_AMP] = ACTIONS(233),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_DQUOTE] = ACTIONS(237),
    [sym_raw_string] = ACTIONS(237),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(237),
    [anon_sym_BQUOTE] = ACTIONS(237),
    [anon_sym_LT] = ACTIONS(237),
    [anon_sym_GT] = ACTIONS(237),
    [anon_sym_GT_GT] = ACTIONS(237),
    [anon_sym_AMP_GT] = ACTIONS(237),
    [anon_sym_AMP_GT_GT] = ACTIONS(237),
    [anon_sym_LT_AMP] = ACTIONS(237),
    [anon_sym_GT_AMP] = ACTIONS(237),
    [sym_leading_word] = ACTIONS(237),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(229),
    [anon_sym_LF] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(229),
  },
  [21] = {
    [sym_file_descriptor] = ACTIONS(235),
    [anon_sym_COLON] = ACTIONS(235),
    [anon_sym_DQUOTE] = ACTIONS(235),
    [sym_raw_string] = ACTIONS(239),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(235),
    [anon_sym_BQUOTE] = ACTIONS(235),
    [anon_sym_LT] = ACTIONS(239),
    [anon_sym_GT] = ACTIONS(239),
    [anon_sym_GT_GT] = ACTIONS(239),
    [anon_sym_AMP_GT] = ACTIONS(239),
    [anon_sym_AMP_GT_GT] = ACTIONS(239),
    [anon_sym_LT_AMP] = ACTIONS(239),
    [anon_sym_GT_AMP] = ACTIONS(239),
    [sym_leading_word] = ACTIONS(237),
    [sym_comment] = ACTIONS(119),
  },
  [22] = {
    [sym__terminated_statement] = STATE(84),
    [sym_for_statement] = STATE(19),
    [sym_while_statement] = STATE(19),
    [sym_if_statement] = STATE(19),
    [sym_case_statement] = STATE(19),
    [sym_function_definition] = STATE(19),
    [sym_bracket_command] = STATE(19),
    [sym_command] = STATE(19),
    [sym_pipeline] = STATE(19),
    [sym_list] = STATE(19),
    [sym_subshell] = STATE(19),
    [sym_environment_variable_assignment] = STATE(20),
    [sym_string] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(23),
    [sym_file_descriptor] = ACTIONS(85),
    [ts_builtin_sym_end] = ACTIONS(241),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_case] = ACTIONS(95),
    [anon_sym_function] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(103),
    [anon_sym_COLON] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_raw_string] = ACTIONS(109),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(117),
    [sym_comment] = ACTIONS(119),
  },
  [23] = {
    [sym_environment_variable_assignment] = STATE(87),
    [sym_string] = STATE(85),
    [sym_command_substitution] = STATE(85),
    [sym_file_redirect] = STATE(87),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(243),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_raw_string] = ACTIONS(245),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(247),
    [sym_comment] = ACTIONS(119),
  },
  [24] = {
    [sym_string] = STATE(88),
    [sym_simple_expansion] = STATE(88),
    [sym_expansion] = STATE(88),
    [sym_command_substitution] = STATE(88),
    [anon_sym_DQUOTE] = ACTIONS(199),
    [sym_raw_string] = ACTIONS(249),
    [anon_sym_DOLLAR] = ACTIONS(203),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(205),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(207),
    [anon_sym_BQUOTE] = ACTIONS(209),
    [sym_word] = ACTIONS(251),
    [sym_comment] = ACTIONS(119),
  },
  [25] = {
    [anon_sym_in] = ACTIONS(253),
    [sym_comment] = ACTIONS(119),
  },
  [26] = {
    [sym_do_group] = STATE(91),
    [anon_sym_do] = ACTIONS(255),
    [sym_comment] = ACTIONS(119),
  },
  [27] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(257),
    [anon_sym_PIPE] = ACTIONS(231),
    [anon_sym_PIPE_AMP] = ACTIONS(231),
    [anon_sym_AMP_AMP] = ACTIONS(233),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(257),
    [anon_sym_LF] = ACTIONS(257),
    [anon_sym_AMP] = ACTIONS(257),
  },
  [28] = {
    [sym_file_descriptor] = ACTIONS(235),
    [anon_sym_SEMI_SEMI] = ACTIONS(257),
    [anon_sym_COLON] = ACTIONS(237),
    [anon_sym_PIPE] = ACTIONS(231),
    [anon_sym_PIPE_AMP] = ACTIONS(231),
    [anon_sym_AMP_AMP] = ACTIONS(233),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_DQUOTE] = ACTIONS(237),
    [sym_raw_string] = ACTIONS(237),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(237),
    [anon_sym_BQUOTE] = ACTIONS(237),
    [anon_sym_LT] = ACTIONS(237),
    [anon_sym_GT] = ACTIONS(237),
    [anon_sym_GT_GT] = ACTIONS(237),
    [anon_sym_AMP_GT] = ACTIONS(237),
    [anon_sym_AMP_GT_GT] = ACTIONS(237),
    [anon_sym_LT_AMP] = ACTIONS(237),
    [anon_sym_GT_AMP] = ACTIONS(237),
    [sym_leading_word] = ACTIONS(237),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(257),
    [anon_sym_LF] = ACTIONS(257),
    [anon_sym_AMP] = ACTIONS(257),
  },
  [29] = {
    [anon_sym_then] = ACTIONS(259),
    [sym_comment] = ACTIONS(119),
  },
  [30] = {
    [sym_simple_expansion] = STATE(54),
    [sym_expansion] = STATE(54),
    [sym_command_substitution] = STATE(54),
    [aux_sym_string_repeat1] = STATE(95),
    [anon_sym_DQUOTE] = ACTIONS(261),
    [sym__quoted_chars] = ACTIONS(171),
    [anon_sym_DOLLAR] = ACTIONS(173),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(175),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [sym_comment] = ACTIONS(77),
  },
  [31] = {
    [anon_sym_in] = ACTIONS(263),
    [anon_sym_SEMI_SEMI] = ACTIONS(265),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(265),
    [anon_sym_LF] = ACTIONS(265),
    [anon_sym_AMP] = ACTIONS(265),
  },
  [32] = {
    [sym_special_variable_name] = STATE(100),
    [anon_sym_DOLLAR] = ACTIONS(267),
    [sym_comment] = ACTIONS(77),
    [sym_simple_variable_name] = ACTIONS(269),
    [anon_sym_STAR] = ACTIONS(267),
    [anon_sym_AT] = ACTIONS(267),
    [anon_sym_POUND] = ACTIONS(271),
    [anon_sym_QMARK] = ACTIONS(267),
    [anon_sym_DASH] = ACTIONS(267),
    [anon_sym_BANG] = ACTIONS(267),
    [anon_sym_0] = ACTIONS(271),
    [anon_sym__] = ACTIONS(271),
  },
  [33] = {
    [sym_special_variable_name] = STATE(103),
    [anon_sym_DOLLAR] = ACTIONS(273),
    [sym_leading_word] = ACTIONS(275),
    [sym_comment] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(273),
    [anon_sym_AT] = ACTIONS(273),
    [anon_sym_POUND] = ACTIONS(273),
    [anon_sym_QMARK] = ACTIONS(273),
    [anon_sym_DASH] = ACTIONS(273),
    [anon_sym_BANG] = ACTIONS(273),
    [anon_sym_0] = ACTIONS(273),
    [anon_sym__] = ACTIONS(273),
  },
  [34] = {
    [sym_command] = STATE(104),
    [sym_environment_variable_assignment] = STATE(21),
    [sym_string] = STATE(60),
    [sym_command_substitution] = STATE(60),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(66),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(181),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_raw_string] = ACTIONS(185),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(187),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(191),
    [sym_comment] = ACTIONS(119),
  },
  [35] = {
    [sym_command] = STATE(105),
    [sym_environment_variable_assignment] = STATE(21),
    [sym_string] = STATE(67),
    [sym_command_substitution] = STATE(67),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(70),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_raw_string] = ACTIONS(195),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(187),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(197),
    [sym_comment] = ACTIONS(119),
  },
  [36] = {
    [anon_sym_LPAREN] = ACTIONS(277),
    [sym_comment] = ACTIONS(119),
  },
  [37] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(279),
    [anon_sym_PIPE] = ACTIONS(279),
    [anon_sym_PIPE_AMP] = ACTIONS(279),
    [anon_sym_AMP_AMP] = ACTIONS(279),
    [anon_sym_PIPE_PIPE] = ACTIONS(279),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(279),
    [anon_sym_LF] = ACTIONS(279),
    [anon_sym_AMP] = ACTIONS(279),
  },
  [38] = {
    [sym__terminated_statement] = STATE(84),
    [sym_for_statement] = STATE(19),
    [sym_while_statement] = STATE(19),
    [sym_if_statement] = STATE(19),
    [sym_case_statement] = STATE(19),
    [sym_function_definition] = STATE(19),
    [sym_bracket_command] = STATE(19),
    [sym_command] = STATE(19),
    [sym_pipeline] = STATE(19),
    [sym_list] = STATE(19),
    [sym_subshell] = STATE(19),
    [sym_environment_variable_assignment] = STATE(20),
    [sym_string] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(23),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_case] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(281),
    [anon_sym_function] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(103),
    [anon_sym_COLON] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_raw_string] = ACTIONS(109),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(117),
    [sym_comment] = ACTIONS(119),
  },
  [39] = {
    [sym_simple_expansion] = STATE(54),
    [sym_expansion] = STATE(54),
    [sym_command_substitution] = STATE(54),
    [aux_sym_string_repeat1] = STATE(109),
    [anon_sym_DQUOTE] = ACTIONS(283),
    [sym__quoted_chars] = ACTIONS(171),
    [anon_sym_DOLLAR] = ACTIONS(173),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(175),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [sym_comment] = ACTIONS(77),
  },
  [40] = {
    [anon_sym_RBRACK] = ACTIONS(285),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(285),
    [anon_sym_DQUOTE] = ACTIONS(287),
    [sym_raw_string] = ACTIONS(285),
    [anon_sym_DOLLAR] = ACTIONS(285),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(287),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(287),
    [anon_sym_BQUOTE] = ACTIONS(287),
    [sym_word] = ACTIONS(289),
    [sym_comment] = ACTIONS(119),
  },
  [41] = {
    [sym_special_variable_name] = STATE(112),
    [anon_sym_DOLLAR] = ACTIONS(291),
    [sym_comment] = ACTIONS(77),
    [sym_simple_variable_name] = ACTIONS(293),
    [anon_sym_STAR] = ACTIONS(291),
    [anon_sym_AT] = ACTIONS(291),
    [anon_sym_POUND] = ACTIONS(295),
    [anon_sym_QMARK] = ACTIONS(291),
    [anon_sym_DASH] = ACTIONS(291),
    [anon_sym_BANG] = ACTIONS(291),
    [anon_sym_0] = ACTIONS(295),
    [anon_sym__] = ACTIONS(295),
  },
  [42] = {
    [sym_special_variable_name] = STATE(114),
    [anon_sym_DOLLAR] = ACTIONS(273),
    [sym_leading_word] = ACTIONS(297),
    [sym_comment] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(273),
    [anon_sym_AT] = ACTIONS(273),
    [anon_sym_POUND] = ACTIONS(273),
    [anon_sym_QMARK] = ACTIONS(273),
    [anon_sym_DASH] = ACTIONS(273),
    [anon_sym_BANG] = ACTIONS(273),
    [anon_sym_0] = ACTIONS(273),
    [anon_sym__] = ACTIONS(273),
  },
  [43] = {
    [sym_command] = STATE(115),
    [sym_environment_variable_assignment] = STATE(21),
    [sym_string] = STATE(60),
    [sym_command_substitution] = STATE(60),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(66),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(181),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_raw_string] = ACTIONS(185),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(187),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(191),
    [sym_comment] = ACTIONS(119),
  },
  [44] = {
    [sym_command] = STATE(116),
    [sym_environment_variable_assignment] = STATE(21),
    [sym_string] = STATE(67),
    [sym_command_substitution] = STATE(67),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(70),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_raw_string] = ACTIONS(195),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(187),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(197),
    [sym_comment] = ACTIONS(119),
  },
  [45] = {
    [sym_string] = STATE(118),
    [sym_simple_expansion] = STATE(118),
    [sym_expansion] = STATE(118),
    [sym_command_substitution] = STATE(118),
    [anon_sym_RBRACK] = ACTIONS(299),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_raw_string] = ACTIONS(301),
    [anon_sym_DOLLAR] = ACTIONS(149),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(153),
    [anon_sym_BQUOTE] = ACTIONS(155),
    [sym_word] = ACTIONS(303),
    [sym_comment] = ACTIONS(119),
  },
  [46] = {
    [sym_string] = STATE(118),
    [sym_simple_expansion] = STATE(118),
    [sym_expansion] = STATE(118),
    [sym_command_substitution] = STATE(118),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(299),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_raw_string] = ACTIONS(301),
    [anon_sym_DOLLAR] = ACTIONS(149),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(153),
    [anon_sym_BQUOTE] = ACTIONS(155),
    [sym_word] = ACTIONS(303),
    [sym_comment] = ACTIONS(119),
  },
  [47] = {
    [anon_sym_LT] = ACTIONS(305),
    [anon_sym_GT] = ACTIONS(305),
    [anon_sym_GT_GT] = ACTIONS(307),
    [anon_sym_AMP_GT] = ACTIONS(305),
    [anon_sym_AMP_GT_GT] = ACTIONS(307),
    [anon_sym_LT_AMP] = ACTIONS(307),
    [anon_sym_GT_AMP] = ACTIONS(307),
    [sym_comment] = ACTIONS(119),
  },
  [48] = {
    [sym_string] = STATE(121),
    [sym_simple_expansion] = STATE(121),
    [sym_expansion] = STATE(121),
    [sym_command_substitution] = STATE(121),
    [sym_file_redirect] = STATE(51),
    [sym_heredoc_redirect] = STATE(51),
    [aux_sym_bracket_command_repeat1] = STATE(126),
    [aux_sym_command_repeat2] = STATE(127),
    [sym_file_descriptor] = ACTIONS(159),
    [anon_sym_SEMI_SEMI] = ACTIONS(309),
    [anon_sym_PIPE] = ACTIONS(309),
    [anon_sym_PIPE_AMP] = ACTIONS(309),
    [anon_sym_AMP_AMP] = ACTIONS(309),
    [anon_sym_PIPE_PIPE] = ACTIONS(309),
    [anon_sym_DQUOTE] = ACTIONS(311),
    [sym_raw_string] = ACTIONS(313),
    [anon_sym_DOLLAR] = ACTIONS(315),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(317),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(319),
    [anon_sym_BQUOTE] = ACTIONS(321),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_GT_GT] = ACTIONS(165),
    [anon_sym_AMP_GT] = ACTIONS(165),
    [anon_sym_AMP_GT_GT] = ACTIONS(165),
    [anon_sym_LT_AMP] = ACTIONS(165),
    [anon_sym_GT_AMP] = ACTIONS(165),
    [anon_sym_LT_LT] = ACTIONS(167),
    [anon_sym_LT_LT_DASH] = ACTIONS(167),
    [sym_word] = ACTIONS(313),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(309),
    [anon_sym_LF] = ACTIONS(309),
    [anon_sym_AMP] = ACTIONS(309),
  },
  [49] = {
    [sym_string] = STATE(129),
    [sym_simple_expansion] = STATE(129),
    [sym_expansion] = STATE(129),
    [sym_command_substitution] = STATE(129),
    [anon_sym_DQUOTE] = ACTIONS(323),
    [sym_raw_string] = ACTIONS(325),
    [anon_sym_DOLLAR] = ACTIONS(327),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(329),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(331),
    [anon_sym_BQUOTE] = ACTIONS(333),
    [sym_word] = ACTIONS(335),
    [sym_comment] = ACTIONS(119),
  },
  [50] = {
    [sym_heredoc] = STATE(136),
    [sym__simple_heredoc] = ACTIONS(337),
    [sym__heredoc_beginning] = ACTIONS(339),
    [sym_comment] = ACTIONS(119),
  },
  [51] = {
    [sym_file_descriptor] = ACTIONS(341),
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
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(343),
    [anon_sym_LF] = ACTIONS(343),
    [anon_sym_AMP] = ACTIONS(343),
  },
  [52] = {
    [sym_file_redirect] = STATE(137),
    [sym_heredoc_redirect] = STATE(137),
    [sym_file_descriptor] = ACTIONS(159),
    [anon_sym_SEMI_SEMI] = ACTIONS(345),
    [anon_sym_PIPE] = ACTIONS(345),
    [anon_sym_PIPE_AMP] = ACTIONS(345),
    [anon_sym_AMP_AMP] = ACTIONS(345),
    [anon_sym_PIPE_PIPE] = ACTIONS(345),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_GT_GT] = ACTIONS(165),
    [anon_sym_AMP_GT] = ACTIONS(165),
    [anon_sym_AMP_GT_GT] = ACTIONS(165),
    [anon_sym_LT_AMP] = ACTIONS(165),
    [anon_sym_GT_AMP] = ACTIONS(165),
    [anon_sym_LT_LT] = ACTIONS(167),
    [anon_sym_LT_LT_DASH] = ACTIONS(167),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(345),
    [anon_sym_LF] = ACTIONS(345),
    [anon_sym_AMP] = ACTIONS(345),
  },
  [53] = {
    [sym_file_descriptor] = ACTIONS(347),
    [anon_sym_SEMI_SEMI] = ACTIONS(349),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(349),
    [anon_sym_PIPE] = ACTIONS(349),
    [anon_sym_PIPE_AMP] = ACTIONS(349),
    [anon_sym_AMP_AMP] = ACTIONS(349),
    [anon_sym_PIPE_PIPE] = ACTIONS(349),
    [anon_sym_LT] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(349),
    [anon_sym_GT_GT] = ACTIONS(349),
    [anon_sym_AMP_GT] = ACTIONS(349),
    [anon_sym_AMP_GT_GT] = ACTIONS(349),
    [anon_sym_LT_AMP] = ACTIONS(349),
    [anon_sym_GT_AMP] = ACTIONS(349),
    [anon_sym_LT_LT] = ACTIONS(349),
    [anon_sym_LT_LT_DASH] = ACTIONS(349),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(349),
    [anon_sym_LF] = ACTIONS(349),
    [anon_sym_AMP] = ACTIONS(349),
  },
  [54] = {
    [anon_sym_DQUOTE] = ACTIONS(351),
    [sym__quoted_chars] = ACTIONS(351),
    [anon_sym_DOLLAR] = ACTIONS(351),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(351),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(351),
    [anon_sym_BQUOTE] = ACTIONS(353),
    [sym_comment] = ACTIONS(77),
  },
  [55] = {
    [sym_special_variable_name] = STATE(140),
    [anon_sym_DOLLAR] = ACTIONS(355),
    [sym_comment] = ACTIONS(77),
    [sym_simple_variable_name] = ACTIONS(357),
    [anon_sym_STAR] = ACTIONS(355),
    [anon_sym_AT] = ACTIONS(355),
    [anon_sym_POUND] = ACTIONS(359),
    [anon_sym_QMARK] = ACTIONS(355),
    [anon_sym_DASH] = ACTIONS(355),
    [anon_sym_BANG] = ACTIONS(355),
    [anon_sym_0] = ACTIONS(359),
    [anon_sym__] = ACTIONS(359),
  },
  [56] = {
    [sym_special_variable_name] = STATE(142),
    [anon_sym_DOLLAR] = ACTIONS(273),
    [sym_leading_word] = ACTIONS(361),
    [sym_comment] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(273),
    [anon_sym_AT] = ACTIONS(273),
    [anon_sym_POUND] = ACTIONS(273),
    [anon_sym_QMARK] = ACTIONS(273),
    [anon_sym_DASH] = ACTIONS(273),
    [anon_sym_BANG] = ACTIONS(273),
    [anon_sym_0] = ACTIONS(273),
    [anon_sym__] = ACTIONS(273),
  },
  [57] = {
    [sym_command] = STATE(143),
    [sym_environment_variable_assignment] = STATE(21),
    [sym_string] = STATE(60),
    [sym_command_substitution] = STATE(60),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(66),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(181),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_raw_string] = ACTIONS(185),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(187),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(191),
    [sym_comment] = ACTIONS(119),
  },
  [58] = {
    [sym_command] = STATE(144),
    [sym_environment_variable_assignment] = STATE(21),
    [sym_string] = STATE(67),
    [sym_command_substitution] = STATE(67),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(70),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_raw_string] = ACTIONS(195),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(187),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(197),
    [sym_comment] = ACTIONS(119),
  },
  [59] = {
    [sym_simple_expansion] = STATE(146),
    [sym_expansion] = STATE(146),
    [sym_command_substitution] = STATE(146),
    [anon_sym_DQUOTE] = ACTIONS(363),
    [sym__quoted_chars] = ACTIONS(365),
    [anon_sym_DOLLAR] = ACTIONS(173),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(175),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [sym_comment] = ACTIONS(77),
  },
  [60] = {
    [sym_file_redirect] = STATE(151),
    [sym_heredoc_redirect] = STATE(151),
    [aux_sym_command_repeat2] = STATE(152),
    [sym_file_descriptor] = ACTIONS(367),
    [anon_sym_RPAREN] = ACTIONS(161),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(369),
    [anon_sym_LT] = ACTIONS(371),
    [anon_sym_GT] = ACTIONS(371),
    [anon_sym_GT_GT] = ACTIONS(371),
    [anon_sym_AMP_GT] = ACTIONS(371),
    [anon_sym_AMP_GT_GT] = ACTIONS(371),
    [anon_sym_LT_AMP] = ACTIONS(371),
    [anon_sym_GT_AMP] = ACTIONS(371),
    [anon_sym_LT_LT] = ACTIONS(373),
    [anon_sym_LT_LT_DASH] = ACTIONS(373),
    [sym_comment] = ACTIONS(77),
  },
  [61] = {
    [sym_simple_expansion] = STATE(54),
    [sym_expansion] = STATE(54),
    [sym_command_substitution] = STATE(54),
    [aux_sym_string_repeat1] = STATE(154),
    [anon_sym_DQUOTE] = ACTIONS(375),
    [sym__quoted_chars] = ACTIONS(171),
    [anon_sym_DOLLAR] = ACTIONS(173),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(175),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [sym_comment] = ACTIONS(77),
  },
  [62] = {
    [sym_command] = STATE(155),
    [sym_environment_variable_assignment] = STATE(21),
    [sym_string] = STATE(60),
    [sym_command_substitution] = STATE(60),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(66),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(181),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_raw_string] = ACTIONS(185),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(187),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(191),
    [sym_comment] = ACTIONS(119),
  },
  [63] = {
    [sym_command] = STATE(156),
    [sym_environment_variable_assignment] = STATE(21),
    [sym_string] = STATE(67),
    [sym_command_substitution] = STATE(67),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(70),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_raw_string] = ACTIONS(195),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(187),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(197),
    [sym_comment] = ACTIONS(119),
  },
  [64] = {
    [sym_file_redirect] = STATE(151),
    [sym_heredoc_redirect] = STATE(151),
    [aux_sym_command_repeat2] = STATE(159),
    [sym_file_descriptor] = ACTIONS(367),
    [anon_sym_RPAREN] = ACTIONS(213),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(377),
    [anon_sym_EQ] = ACTIONS(379),
    [anon_sym_LT] = ACTIONS(371),
    [anon_sym_GT] = ACTIONS(371),
    [anon_sym_GT_GT] = ACTIONS(371),
    [anon_sym_AMP_GT] = ACTIONS(371),
    [anon_sym_AMP_GT_GT] = ACTIONS(371),
    [anon_sym_LT_AMP] = ACTIONS(371),
    [anon_sym_GT_AMP] = ACTIONS(371),
    [anon_sym_LT_LT] = ACTIONS(373),
    [anon_sym_LT_LT_DASH] = ACTIONS(373),
    [sym_comment] = ACTIONS(77),
  },
  [65] = {
    [anon_sym_RPAREN] = ACTIONS(381),
    [sym_comment] = ACTIONS(119),
  },
  [66] = {
    [sym_environment_variable_assignment] = STATE(87),
    [sym_string] = STATE(161),
    [sym_command_substitution] = STATE(161),
    [sym_file_redirect] = STATE(87),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(383),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_raw_string] = ACTIONS(385),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(187),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(387),
    [sym_comment] = ACTIONS(119),
  },
  [67] = {
    [sym_file_redirect] = STATE(151),
    [sym_heredoc_redirect] = STATE(151),
    [aux_sym_command_repeat2] = STATE(152),
    [sym_file_descriptor] = ACTIONS(367),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(389),
    [anon_sym_BQUOTE] = ACTIONS(161),
    [anon_sym_LT] = ACTIONS(371),
    [anon_sym_GT] = ACTIONS(371),
    [anon_sym_GT_GT] = ACTIONS(371),
    [anon_sym_AMP_GT] = ACTIONS(371),
    [anon_sym_AMP_GT_GT] = ACTIONS(371),
    [anon_sym_LT_AMP] = ACTIONS(371),
    [anon_sym_GT_AMP] = ACTIONS(371),
    [anon_sym_LT_LT] = ACTIONS(373),
    [anon_sym_LT_LT_DASH] = ACTIONS(373),
    [sym_comment] = ACTIONS(77),
  },
  [68] = {
    [sym_file_redirect] = STATE(151),
    [sym_heredoc_redirect] = STATE(151),
    [aux_sym_command_repeat2] = STATE(159),
    [sym_file_descriptor] = ACTIONS(367),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(391),
    [anon_sym_EQ] = ACTIONS(379),
    [anon_sym_BQUOTE] = ACTIONS(213),
    [anon_sym_LT] = ACTIONS(371),
    [anon_sym_GT] = ACTIONS(371),
    [anon_sym_GT_GT] = ACTIONS(371),
    [anon_sym_AMP_GT] = ACTIONS(371),
    [anon_sym_AMP_GT_GT] = ACTIONS(371),
    [anon_sym_LT_AMP] = ACTIONS(371),
    [anon_sym_GT_AMP] = ACTIONS(371),
    [anon_sym_LT_LT] = ACTIONS(373),
    [anon_sym_LT_LT_DASH] = ACTIONS(373),
    [sym_comment] = ACTIONS(77),
  },
  [69] = {
    [anon_sym_BQUOTE] = ACTIONS(381),
    [sym_comment] = ACTIONS(119),
  },
  [70] = {
    [sym_environment_variable_assignment] = STATE(87),
    [sym_string] = STATE(165),
    [sym_command_substitution] = STATE(165),
    [sym_file_redirect] = STATE(87),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(393),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_raw_string] = ACTIONS(395),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(187),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(397),
    [sym_comment] = ACTIONS(119),
  },
  [71] = {
    [sym_simple_expansion] = STATE(54),
    [sym_expansion] = STATE(54),
    [sym_command_substitution] = STATE(54),
    [aux_sym_string_repeat1] = STATE(168),
    [anon_sym_DQUOTE] = ACTIONS(399),
    [sym__quoted_chars] = ACTIONS(171),
    [anon_sym_DOLLAR] = ACTIONS(173),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(175),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [sym_comment] = ACTIONS(77),
  },
  [72] = {
    [sym_file_descriptor] = ACTIONS(401),
    [anon_sym_COLON] = ACTIONS(401),
    [anon_sym_DQUOTE] = ACTIONS(401),
    [sym_raw_string] = ACTIONS(403),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(401),
    [anon_sym_BQUOTE] = ACTIONS(401),
    [anon_sym_LT] = ACTIONS(403),
    [anon_sym_GT] = ACTIONS(403),
    [anon_sym_GT_GT] = ACTIONS(403),
    [anon_sym_AMP_GT] = ACTIONS(403),
    [anon_sym_AMP_GT_GT] = ACTIONS(403),
    [anon_sym_LT_AMP] = ACTIONS(403),
    [anon_sym_GT_AMP] = ACTIONS(403),
    [sym_leading_word] = ACTIONS(405),
    [sym_comment] = ACTIONS(119),
  },
  [73] = {
    [sym_special_variable_name] = STATE(171),
    [anon_sym_DOLLAR] = ACTIONS(407),
    [sym_comment] = ACTIONS(77),
    [sym_simple_variable_name] = ACTIONS(409),
    [anon_sym_STAR] = ACTIONS(407),
    [anon_sym_AT] = ACTIONS(407),
    [anon_sym_POUND] = ACTIONS(411),
    [anon_sym_QMARK] = ACTIONS(407),
    [anon_sym_DASH] = ACTIONS(407),
    [anon_sym_BANG] = ACTIONS(407),
    [anon_sym_0] = ACTIONS(411),
    [anon_sym__] = ACTIONS(411),
  },
  [74] = {
    [sym_special_variable_name] = STATE(173),
    [anon_sym_DOLLAR] = ACTIONS(273),
    [sym_leading_word] = ACTIONS(413),
    [sym_comment] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(273),
    [anon_sym_AT] = ACTIONS(273),
    [anon_sym_POUND] = ACTIONS(273),
    [anon_sym_QMARK] = ACTIONS(273),
    [anon_sym_DASH] = ACTIONS(273),
    [anon_sym_BANG] = ACTIONS(273),
    [anon_sym_0] = ACTIONS(273),
    [anon_sym__] = ACTIONS(273),
  },
  [75] = {
    [sym_command] = STATE(174),
    [sym_environment_variable_assignment] = STATE(21),
    [sym_string] = STATE(60),
    [sym_command_substitution] = STATE(60),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(66),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(181),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_raw_string] = ACTIONS(185),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(187),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(191),
    [sym_comment] = ACTIONS(119),
  },
  [76] = {
    [sym_command] = STATE(175),
    [sym_environment_variable_assignment] = STATE(21),
    [sym_string] = STATE(67),
    [sym_command_substitution] = STATE(67),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(70),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_raw_string] = ACTIONS(195),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(187),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(197),
    [sym_comment] = ACTIONS(119),
  },
  [77] = {
    [anon_sym_RPAREN] = ACTIONS(415),
    [sym_comment] = ACTIONS(119),
  },
  [78] = {
    [sym_string] = STATE(121),
    [sym_simple_expansion] = STATE(121),
    [sym_expansion] = STATE(121),
    [sym_command_substitution] = STATE(121),
    [sym_file_redirect] = STATE(51),
    [sym_heredoc_redirect] = STATE(51),
    [aux_sym_bracket_command_repeat1] = STATE(177),
    [aux_sym_command_repeat2] = STATE(178),
    [sym_file_descriptor] = ACTIONS(159),
    [anon_sym_SEMI_SEMI] = ACTIONS(417),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_PIPE_AMP] = ACTIONS(417),
    [anon_sym_AMP_AMP] = ACTIONS(417),
    [anon_sym_PIPE_PIPE] = ACTIONS(417),
    [anon_sym_DQUOTE] = ACTIONS(311),
    [sym_raw_string] = ACTIONS(313),
    [anon_sym_DOLLAR] = ACTIONS(315),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(317),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(319),
    [anon_sym_BQUOTE] = ACTIONS(321),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_GT_GT] = ACTIONS(165),
    [anon_sym_AMP_GT] = ACTIONS(165),
    [anon_sym_AMP_GT_GT] = ACTIONS(165),
    [anon_sym_LT_AMP] = ACTIONS(165),
    [anon_sym_GT_AMP] = ACTIONS(165),
    [anon_sym_LT_LT] = ACTIONS(167),
    [anon_sym_LT_LT_DASH] = ACTIONS(167),
    [sym_word] = ACTIONS(313),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(417),
    [anon_sym_LF] = ACTIONS(417),
    [anon_sym_AMP] = ACTIONS(417),
  },
  [79] = {
    [sym_string] = STATE(179),
    [sym_simple_expansion] = STATE(179),
    [sym_expansion] = STATE(179),
    [sym_command_substitution] = STATE(179),
    [sym__empty_value] = ACTIONS(419),
    [anon_sym_DQUOTE] = ACTIONS(421),
    [sym_raw_string] = ACTIONS(423),
    [anon_sym_DOLLAR] = ACTIONS(425),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(427),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(429),
    [anon_sym_BQUOTE] = ACTIONS(431),
    [sym_word] = ACTIONS(433),
    [sym_comment] = ACTIONS(119),
  },
  [80] = {
    [sym_file_redirect] = STATE(137),
    [sym_heredoc_redirect] = STATE(137),
    [sym_file_descriptor] = ACTIONS(159),
    [anon_sym_SEMI_SEMI] = ACTIONS(435),
    [anon_sym_PIPE] = ACTIONS(435),
    [anon_sym_PIPE_AMP] = ACTIONS(435),
    [anon_sym_AMP_AMP] = ACTIONS(435),
    [anon_sym_PIPE_PIPE] = ACTIONS(435),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_GT_GT] = ACTIONS(165),
    [anon_sym_AMP_GT] = ACTIONS(165),
    [anon_sym_AMP_GT_GT] = ACTIONS(165),
    [anon_sym_LT_AMP] = ACTIONS(165),
    [anon_sym_GT_AMP] = ACTIONS(165),
    [anon_sym_LT_LT] = ACTIONS(167),
    [anon_sym_LT_LT_DASH] = ACTIONS(167),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(435),
    [anon_sym_LF] = ACTIONS(435),
    [anon_sym_AMP] = ACTIONS(435),
  },
  [81] = {
    [sym_file_descriptor] = ACTIONS(437),
    [ts_builtin_sym_end] = ACTIONS(437),
    [anon_sym_for] = ACTIONS(439),
    [anon_sym_while] = ACTIONS(439),
    [anon_sym_do] = ACTIONS(439),
    [anon_sym_done] = ACTIONS(439),
    [anon_sym_if] = ACTIONS(439),
    [anon_sym_then] = ACTIONS(439),
    [anon_sym_fi] = ACTIONS(439),
    [anon_sym_elif] = ACTIONS(439),
    [anon_sym_else] = ACTIONS(439),
    [anon_sym_case] = ACTIONS(439),
    [anon_sym_RPAREN] = ACTIONS(437),
    [anon_sym_SEMI_SEMI] = ACTIONS(437),
    [anon_sym_function] = ACTIONS(439),
    [anon_sym_LPAREN] = ACTIONS(437),
    [anon_sym_RBRACE] = ACTIONS(437),
    [anon_sym_LBRACK] = ACTIONS(439),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(439),
    [anon_sym_COLON] = ACTIONS(437),
    [anon_sym_DQUOTE] = ACTIONS(437),
    [sym_raw_string] = ACTIONS(439),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(437),
    [anon_sym_BQUOTE] = ACTIONS(437),
    [anon_sym_LT] = ACTIONS(439),
    [anon_sym_GT] = ACTIONS(439),
    [anon_sym_GT_GT] = ACTIONS(439),
    [anon_sym_AMP_GT] = ACTIONS(439),
    [anon_sym_AMP_GT_GT] = ACTIONS(439),
    [anon_sym_LT_AMP] = ACTIONS(439),
    [anon_sym_GT_AMP] = ACTIONS(439),
    [sym_leading_word] = ACTIONS(441),
    [sym_comment] = ACTIONS(119),
  },
  [82] = {
    [sym_for_statement] = STATE(185),
    [sym_while_statement] = STATE(185),
    [sym_if_statement] = STATE(185),
    [sym_case_statement] = STATE(185),
    [sym_function_definition] = STATE(185),
    [sym_bracket_command] = STATE(185),
    [sym_command] = STATE(185),
    [sym_pipeline] = STATE(185),
    [sym_list] = STATE(185),
    [sym_subshell] = STATE(185),
    [sym_environment_variable_assignment] = STATE(186),
    [sym_string] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(23),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_case] = ACTIONS(95),
    [anon_sym_function] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(103),
    [anon_sym_COLON] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_raw_string] = ACTIONS(109),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(117),
    [sym_comment] = ACTIONS(119),
  },
  [83] = {
    [sym_for_statement] = STATE(187),
    [sym_while_statement] = STATE(187),
    [sym_if_statement] = STATE(187),
    [sym_case_statement] = STATE(187),
    [sym_function_definition] = STATE(187),
    [sym_bracket_command] = STATE(187),
    [sym_command] = STATE(187),
    [sym_pipeline] = STATE(187),
    [sym_list] = STATE(187),
    [sym_subshell] = STATE(187),
    [sym_environment_variable_assignment] = STATE(188),
    [sym_string] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(23),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_case] = ACTIONS(95),
    [anon_sym_function] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(103),
    [anon_sym_COLON] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_raw_string] = ACTIONS(109),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(117),
    [sym_comment] = ACTIONS(119),
  },
  [84] = {
    [sym_file_descriptor] = ACTIONS(443),
    [ts_builtin_sym_end] = ACTIONS(443),
    [anon_sym_for] = ACTIONS(445),
    [anon_sym_while] = ACTIONS(445),
    [anon_sym_done] = ACTIONS(445),
    [anon_sym_if] = ACTIONS(445),
    [anon_sym_fi] = ACTIONS(445),
    [anon_sym_elif] = ACTIONS(445),
    [anon_sym_else] = ACTIONS(445),
    [anon_sym_case] = ACTIONS(445),
    [anon_sym_RPAREN] = ACTIONS(443),
    [anon_sym_SEMI_SEMI] = ACTIONS(443),
    [anon_sym_function] = ACTIONS(445),
    [anon_sym_LPAREN] = ACTIONS(443),
    [anon_sym_RBRACE] = ACTIONS(443),
    [anon_sym_LBRACK] = ACTIONS(445),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(445),
    [anon_sym_COLON] = ACTIONS(443),
    [anon_sym_DQUOTE] = ACTIONS(443),
    [sym_raw_string] = ACTIONS(445),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(443),
    [anon_sym_BQUOTE] = ACTIONS(443),
    [anon_sym_LT] = ACTIONS(445),
    [anon_sym_GT] = ACTIONS(445),
    [anon_sym_GT_GT] = ACTIONS(445),
    [anon_sym_AMP_GT] = ACTIONS(445),
    [anon_sym_AMP_GT_GT] = ACTIONS(445),
    [anon_sym_LT_AMP] = ACTIONS(445),
    [anon_sym_GT_AMP] = ACTIONS(445),
    [sym_leading_word] = ACTIONS(447),
    [sym_comment] = ACTIONS(119),
  },
  [85] = {
    [sym_file_redirect] = STATE(51),
    [sym_heredoc_redirect] = STATE(51),
    [aux_sym_command_repeat2] = STATE(127),
    [sym_file_descriptor] = ACTIONS(159),
    [anon_sym_SEMI_SEMI] = ACTIONS(345),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(449),
    [anon_sym_PIPE] = ACTIONS(345),
    [anon_sym_PIPE_AMP] = ACTIONS(345),
    [anon_sym_AMP_AMP] = ACTIONS(345),
    [anon_sym_PIPE_PIPE] = ACTIONS(345),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_GT_GT] = ACTIONS(165),
    [anon_sym_AMP_GT] = ACTIONS(165),
    [anon_sym_AMP_GT_GT] = ACTIONS(165),
    [anon_sym_LT_AMP] = ACTIONS(165),
    [anon_sym_GT_AMP] = ACTIONS(165),
    [anon_sym_LT_LT] = ACTIONS(167),
    [anon_sym_LT_LT_DASH] = ACTIONS(167),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(345),
    [anon_sym_LF] = ACTIONS(345),
    [anon_sym_AMP] = ACTIONS(345),
  },
  [86] = {
    [sym_file_redirect] = STATE(51),
    [sym_heredoc_redirect] = STATE(51),
    [aux_sym_command_repeat2] = STATE(191),
    [sym_file_descriptor] = ACTIONS(159),
    [anon_sym_SEMI_SEMI] = ACTIONS(451),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(453),
    [anon_sym_PIPE] = ACTIONS(451),
    [anon_sym_PIPE_AMP] = ACTIONS(451),
    [anon_sym_AMP_AMP] = ACTIONS(451),
    [anon_sym_PIPE_PIPE] = ACTIONS(451),
    [anon_sym_EQ] = ACTIONS(379),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_GT_GT] = ACTIONS(165),
    [anon_sym_AMP_GT] = ACTIONS(165),
    [anon_sym_AMP_GT_GT] = ACTIONS(165),
    [anon_sym_LT_AMP] = ACTIONS(165),
    [anon_sym_GT_AMP] = ACTIONS(165),
    [anon_sym_LT_LT] = ACTIONS(167),
    [anon_sym_LT_LT_DASH] = ACTIONS(167),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(451),
    [anon_sym_LF] = ACTIONS(451),
    [anon_sym_AMP] = ACTIONS(451),
  },
  [87] = {
    [sym_file_descriptor] = ACTIONS(455),
    [anon_sym_COLON] = ACTIONS(455),
    [anon_sym_DQUOTE] = ACTIONS(455),
    [sym_raw_string] = ACTIONS(457),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(455),
    [anon_sym_BQUOTE] = ACTIONS(455),
    [anon_sym_LT] = ACTIONS(457),
    [anon_sym_GT] = ACTIONS(457),
    [anon_sym_GT_GT] = ACTIONS(457),
    [anon_sym_AMP_GT] = ACTIONS(457),
    [anon_sym_AMP_GT_GT] = ACTIONS(457),
    [anon_sym_LT_AMP] = ACTIONS(457),
    [anon_sym_GT_AMP] = ACTIONS(457),
    [sym_leading_word] = ACTIONS(459),
    [sym_comment] = ACTIONS(119),
  },
  [88] = {
    [sym_file_descriptor] = ACTIONS(461),
    [anon_sym_COLON] = ACTIONS(461),
    [anon_sym_DQUOTE] = ACTIONS(461),
    [sym_raw_string] = ACTIONS(463),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(461),
    [anon_sym_BQUOTE] = ACTIONS(461),
    [anon_sym_LT] = ACTIONS(463),
    [anon_sym_GT] = ACTIONS(463),
    [anon_sym_GT_GT] = ACTIONS(463),
    [anon_sym_AMP_GT] = ACTIONS(463),
    [anon_sym_AMP_GT_GT] = ACTIONS(463),
    [anon_sym_LT_AMP] = ACTIONS(463),
    [anon_sym_GT_AMP] = ACTIONS(463),
    [sym_leading_word] = ACTIONS(465),
    [sym_comment] = ACTIONS(119),
  },
  [89] = {
    [sym__terminated_statement] = STATE(192),
    [sym_for_statement] = STATE(27),
    [sym_while_statement] = STATE(27),
    [sym_if_statement] = STATE(27),
    [sym_case_statement] = STATE(27),
    [sym_function_definition] = STATE(27),
    [sym_bracket_command] = STATE(27),
    [sym_command] = STATE(27),
    [sym_pipeline] = STATE(27),
    [sym_list] = STATE(27),
    [sym_subshell] = STATE(27),
    [sym_environment_variable_assignment] = STATE(28),
    [sym_string] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(23),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_case] = ACTIONS(95),
    [anon_sym_function] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(103),
    [anon_sym_COLON] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_raw_string] = ACTIONS(109),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(117),
    [sym_comment] = ACTIONS(119),
  },
  [90] = {
    [sym__terminated_statement] = STATE(18),
    [sym_for_statement] = STATE(19),
    [sym_while_statement] = STATE(19),
    [sym_if_statement] = STATE(19),
    [sym_case_statement] = STATE(19),
    [sym_function_definition] = STATE(19),
    [sym_bracket_command] = STATE(19),
    [sym_command] = STATE(19),
    [sym_pipeline] = STATE(19),
    [sym_list] = STATE(19),
    [sym_subshell] = STATE(19),
    [sym_environment_variable_assignment] = STATE(20),
    [sym_string] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(21),
    [aux_sym_program_repeat1] = STATE(194),
    [aux_sym_command_repeat1] = STATE(23),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(91),
    [anon_sym_done] = ACTIONS(467),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_case] = ACTIONS(95),
    [anon_sym_function] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(103),
    [anon_sym_COLON] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_raw_string] = ACTIONS(109),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(117),
    [sym_comment] = ACTIONS(119),
  },
  [91] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(469),
    [anon_sym_PIPE] = ACTIONS(469),
    [anon_sym_PIPE_AMP] = ACTIONS(469),
    [anon_sym_AMP_AMP] = ACTIONS(469),
    [anon_sym_PIPE_PIPE] = ACTIONS(469),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(469),
    [anon_sym_LF] = ACTIONS(469),
    [anon_sym_AMP] = ACTIONS(469),
  },
  [92] = {
    [anon_sym_do] = ACTIONS(437),
    [anon_sym_then] = ACTIONS(437),
    [sym_comment] = ACTIONS(119),
  },
  [93] = {
    [sym__terminated_statement] = STATE(18),
    [sym_for_statement] = STATE(19),
    [sym_while_statement] = STATE(19),
    [sym_if_statement] = STATE(19),
    [sym_elif_clause] = STATE(198),
    [sym_else_clause] = STATE(199),
    [sym_case_statement] = STATE(19),
    [sym_function_definition] = STATE(19),
    [sym_bracket_command] = STATE(19),
    [sym_command] = STATE(19),
    [sym_pipeline] = STATE(19),
    [sym_list] = STATE(19),
    [sym_subshell] = STATE(19),
    [sym_environment_variable_assignment] = STATE(20),
    [sym_string] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(21),
    [aux_sym_program_repeat1] = STATE(200),
    [aux_sym_if_statement_repeat1] = STATE(201),
    [aux_sym_command_repeat1] = STATE(23),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_fi] = ACTIONS(471),
    [anon_sym_elif] = ACTIONS(473),
    [anon_sym_else] = ACTIONS(475),
    [anon_sym_case] = ACTIONS(95),
    [anon_sym_function] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(103),
    [anon_sym_COLON] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_raw_string] = ACTIONS(109),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(117),
    [sym_comment] = ACTIONS(119),
  },
  [94] = {
    [anon_sym_in] = ACTIONS(349),
    [anon_sym_SEMI_SEMI] = ACTIONS(349),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(349),
    [anon_sym_LF] = ACTIONS(349),
    [anon_sym_AMP] = ACTIONS(349),
  },
  [95] = {
    [sym_simple_expansion] = STATE(146),
    [sym_expansion] = STATE(146),
    [sym_command_substitution] = STATE(146),
    [anon_sym_DQUOTE] = ACTIONS(477),
    [sym__quoted_chars] = ACTIONS(365),
    [anon_sym_DOLLAR] = ACTIONS(173),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(175),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [sym_comment] = ACTIONS(77),
  },
  [96] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(479),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(479),
    [anon_sym_LF] = ACTIONS(479),
    [anon_sym_AMP] = ACTIONS(479),
  },
  [97] = {
    [anon_sym_in] = ACTIONS(481),
    [sym_comment] = ACTIONS(119),
  },
  [98] = {
    [anon_sym_in] = ACTIONS(483),
    [anon_sym_SEMI_SEMI] = ACTIONS(483),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(483),
    [anon_sym_LF] = ACTIONS(483),
    [anon_sym_AMP] = ACTIONS(483),
  },
  [99] = {
    [anon_sym_in] = ACTIONS(485),
    [anon_sym_SEMI_SEMI] = ACTIONS(485),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(485),
    [anon_sym_LF] = ACTIONS(485),
    [anon_sym_AMP] = ACTIONS(485),
  },
  [100] = {
    [anon_sym_in] = ACTIONS(487),
    [anon_sym_SEMI_SEMI] = ACTIONS(487),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_LF] = ACTIONS(487),
    [anon_sym_AMP] = ACTIONS(487),
  },
  [101] = {
    [anon_sym_RPAREN] = ACTIONS(489),
    [anon_sym_RBRACE] = ACTIONS(489),
    [anon_sym_COLON] = ACTIONS(491),
    [anon_sym_EQ] = ACTIONS(489),
    [anon_sym_COLON_QMARK] = ACTIONS(489),
    [anon_sym_COLON_DASH] = ACTIONS(489),
    [sym_comment] = ACTIONS(119),
  },
  [102] = {
    [anon_sym_RBRACE] = ACTIONS(493),
    [anon_sym_COLON] = ACTIONS(495),
    [anon_sym_EQ] = ACTIONS(497),
    [anon_sym_COLON_QMARK] = ACTIONS(497),
    [anon_sym_COLON_DASH] = ACTIONS(497),
    [sym_comment] = ACTIONS(119),
  },
  [103] = {
    [anon_sym_RBRACE] = ACTIONS(499),
    [anon_sym_COLON] = ACTIONS(501),
    [anon_sym_EQ] = ACTIONS(503),
    [anon_sym_COLON_QMARK] = ACTIONS(503),
    [anon_sym_COLON_DASH] = ACTIONS(503),
    [sym_comment] = ACTIONS(119),
  },
  [104] = {
    [anon_sym_RPAREN] = ACTIONS(505),
    [sym_comment] = ACTIONS(119),
  },
  [105] = {
    [anon_sym_BQUOTE] = ACTIONS(505),
    [sym_comment] = ACTIONS(119),
  },
  [106] = {
    [anon_sym_RPAREN] = ACTIONS(507),
    [sym_comment] = ACTIONS(119),
  },
  [107] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(509),
    [anon_sym_PIPE] = ACTIONS(509),
    [anon_sym_PIPE_AMP] = ACTIONS(509),
    [anon_sym_AMP_AMP] = ACTIONS(509),
    [anon_sym_PIPE_PIPE] = ACTIONS(509),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(509),
    [anon_sym_LF] = ACTIONS(509),
    [anon_sym_AMP] = ACTIONS(509),
  },
  [108] = {
    [anon_sym_RPAREN] = ACTIONS(347),
    [anon_sym_RBRACE] = ACTIONS(347),
    [anon_sym_RBRACK] = ACTIONS(511),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(511),
    [anon_sym_DQUOTE] = ACTIONS(347),
    [sym_raw_string] = ACTIONS(511),
    [anon_sym_DOLLAR] = ACTIONS(511),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(347),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(347),
    [anon_sym_BQUOTE] = ACTIONS(347),
    [sym_word] = ACTIONS(349),
    [sym_comment] = ACTIONS(119),
  },
  [109] = {
    [sym_simple_expansion] = STATE(146),
    [sym_expansion] = STATE(146),
    [sym_command_substitution] = STATE(146),
    [anon_sym_DQUOTE] = ACTIONS(513),
    [sym__quoted_chars] = ACTIONS(365),
    [anon_sym_DOLLAR] = ACTIONS(173),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(175),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [sym_comment] = ACTIONS(77),
  },
  [110] = {
    [anon_sym_RBRACK] = ACTIONS(491),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(491),
    [anon_sym_DQUOTE] = ACTIONS(489),
    [sym_raw_string] = ACTIONS(491),
    [anon_sym_DOLLAR] = ACTIONS(491),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(489),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(489),
    [anon_sym_BQUOTE] = ACTIONS(489),
    [sym_word] = ACTIONS(483),
    [sym_comment] = ACTIONS(119),
  },
  [111] = {
    [anon_sym_RPAREN] = ACTIONS(515),
    [anon_sym_RBRACE] = ACTIONS(515),
    [anon_sym_RBRACK] = ACTIONS(517),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(517),
    [anon_sym_DQUOTE] = ACTIONS(515),
    [sym_raw_string] = ACTIONS(517),
    [anon_sym_DOLLAR] = ACTIONS(517),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(515),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(515),
    [anon_sym_BQUOTE] = ACTIONS(515),
    [sym_word] = ACTIONS(485),
    [sym_comment] = ACTIONS(119),
  },
  [112] = {
    [anon_sym_RPAREN] = ACTIONS(519),
    [anon_sym_RBRACE] = ACTIONS(519),
    [anon_sym_RBRACK] = ACTIONS(521),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(521),
    [anon_sym_DQUOTE] = ACTIONS(519),
    [sym_raw_string] = ACTIONS(521),
    [anon_sym_DOLLAR] = ACTIONS(521),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(519),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(519),
    [anon_sym_BQUOTE] = ACTIONS(519),
    [sym_word] = ACTIONS(487),
    [sym_comment] = ACTIONS(119),
  },
  [113] = {
    [anon_sym_RBRACE] = ACTIONS(523),
    [anon_sym_COLON] = ACTIONS(525),
    [anon_sym_EQ] = ACTIONS(527),
    [anon_sym_COLON_QMARK] = ACTIONS(527),
    [anon_sym_COLON_DASH] = ACTIONS(527),
    [sym_comment] = ACTIONS(119),
  },
  [114] = {
    [anon_sym_RBRACE] = ACTIONS(529),
    [anon_sym_COLON] = ACTIONS(531),
    [anon_sym_EQ] = ACTIONS(533),
    [anon_sym_COLON_QMARK] = ACTIONS(533),
    [anon_sym_COLON_DASH] = ACTIONS(533),
    [sym_comment] = ACTIONS(119),
  },
  [115] = {
    [anon_sym_RPAREN] = ACTIONS(535),
    [sym_comment] = ACTIONS(119),
  },
  [116] = {
    [anon_sym_BQUOTE] = ACTIONS(535),
    [sym_comment] = ACTIONS(119),
  },
  [117] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(537),
    [anon_sym_PIPE] = ACTIONS(537),
    [anon_sym_PIPE_AMP] = ACTIONS(537),
    [anon_sym_AMP_AMP] = ACTIONS(537),
    [anon_sym_PIPE_PIPE] = ACTIONS(537),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(537),
    [anon_sym_LF] = ACTIONS(537),
    [anon_sym_AMP] = ACTIONS(537),
  },
  [118] = {
    [anon_sym_RBRACK] = ACTIONS(539),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(539),
    [anon_sym_DQUOTE] = ACTIONS(541),
    [sym_raw_string] = ACTIONS(539),
    [anon_sym_DOLLAR] = ACTIONS(539),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(541),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(541),
    [anon_sym_BQUOTE] = ACTIONS(541),
    [sym_word] = ACTIONS(543),
    [sym_comment] = ACTIONS(119),
  },
  [119] = {
    [sym_string] = STATE(217),
    [sym_simple_expansion] = STATE(217),
    [sym_expansion] = STATE(217),
    [sym_command_substitution] = STATE(217),
    [anon_sym_DQUOTE] = ACTIONS(323),
    [sym_raw_string] = ACTIONS(545),
    [anon_sym_DOLLAR] = ACTIONS(327),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(329),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(331),
    [anon_sym_BQUOTE] = ACTIONS(333),
    [sym_word] = ACTIONS(547),
    [sym_comment] = ACTIONS(119),
  },
  [120] = {
    [sym_simple_expansion] = STATE(54),
    [sym_expansion] = STATE(54),
    [sym_command_substitution] = STATE(54),
    [aux_sym_string_repeat1] = STATE(219),
    [anon_sym_DQUOTE] = ACTIONS(549),
    [sym__quoted_chars] = ACTIONS(171),
    [anon_sym_DOLLAR] = ACTIONS(173),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(175),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [sym_comment] = ACTIONS(77),
  },
  [121] = {
    [sym_file_descriptor] = ACTIONS(287),
    [anon_sym_SEMI_SEMI] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(289),
    [anon_sym_PIPE_AMP] = ACTIONS(289),
    [anon_sym_AMP_AMP] = ACTIONS(289),
    [anon_sym_PIPE_PIPE] = ACTIONS(289),
    [anon_sym_DQUOTE] = ACTIONS(289),
    [sym_raw_string] = ACTIONS(289),
    [anon_sym_DOLLAR] = ACTIONS(289),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(289),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(289),
    [anon_sym_BQUOTE] = ACTIONS(289),
    [anon_sym_LT] = ACTIONS(289),
    [anon_sym_GT] = ACTIONS(289),
    [anon_sym_GT_GT] = ACTIONS(289),
    [anon_sym_AMP_GT] = ACTIONS(289),
    [anon_sym_AMP_GT_GT] = ACTIONS(289),
    [anon_sym_LT_AMP] = ACTIONS(289),
    [anon_sym_GT_AMP] = ACTIONS(289),
    [anon_sym_LT_LT] = ACTIONS(289),
    [anon_sym_LT_LT_DASH] = ACTIONS(289),
    [sym_word] = ACTIONS(289),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(289),
    [anon_sym_LF] = ACTIONS(289),
    [anon_sym_AMP] = ACTIONS(289),
  },
  [122] = {
    [sym_special_variable_name] = STATE(222),
    [anon_sym_DOLLAR] = ACTIONS(551),
    [sym_comment] = ACTIONS(77),
    [sym_simple_variable_name] = ACTIONS(553),
    [anon_sym_STAR] = ACTIONS(551),
    [anon_sym_AT] = ACTIONS(551),
    [anon_sym_POUND] = ACTIONS(555),
    [anon_sym_QMARK] = ACTIONS(551),
    [anon_sym_DASH] = ACTIONS(551),
    [anon_sym_BANG] = ACTIONS(551),
    [anon_sym_0] = ACTIONS(555),
    [anon_sym__] = ACTIONS(555),
  },
  [123] = {
    [sym_special_variable_name] = STATE(224),
    [anon_sym_DOLLAR] = ACTIONS(273),
    [sym_leading_word] = ACTIONS(557),
    [sym_comment] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(273),
    [anon_sym_AT] = ACTIONS(273),
    [anon_sym_POUND] = ACTIONS(273),
    [anon_sym_QMARK] = ACTIONS(273),
    [anon_sym_DASH] = ACTIONS(273),
    [anon_sym_BANG] = ACTIONS(273),
    [anon_sym_0] = ACTIONS(273),
    [anon_sym__] = ACTIONS(273),
  },
  [124] = {
    [sym_command] = STATE(225),
    [sym_environment_variable_assignment] = STATE(21),
    [sym_string] = STATE(60),
    [sym_command_substitution] = STATE(60),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(66),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(181),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_raw_string] = ACTIONS(185),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(187),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(191),
    [sym_comment] = ACTIONS(119),
  },
  [125] = {
    [sym_command] = STATE(226),
    [sym_environment_variable_assignment] = STATE(21),
    [sym_string] = STATE(67),
    [sym_command_substitution] = STATE(67),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(70),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_raw_string] = ACTIONS(195),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(187),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(197),
    [sym_comment] = ACTIONS(119),
  },
  [126] = {
    [sym_string] = STATE(227),
    [sym_simple_expansion] = STATE(227),
    [sym_expansion] = STATE(227),
    [sym_command_substitution] = STATE(227),
    [sym_file_redirect] = STATE(51),
    [sym_heredoc_redirect] = STATE(51),
    [aux_sym_command_repeat2] = STATE(228),
    [sym_file_descriptor] = ACTIONS(159),
    [anon_sym_SEMI_SEMI] = ACTIONS(559),
    [anon_sym_PIPE] = ACTIONS(559),
    [anon_sym_PIPE_AMP] = ACTIONS(559),
    [anon_sym_AMP_AMP] = ACTIONS(559),
    [anon_sym_PIPE_PIPE] = ACTIONS(559),
    [anon_sym_DQUOTE] = ACTIONS(311),
    [sym_raw_string] = ACTIONS(561),
    [anon_sym_DOLLAR] = ACTIONS(315),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(317),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(319),
    [anon_sym_BQUOTE] = ACTIONS(321),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_GT_GT] = ACTIONS(165),
    [anon_sym_AMP_GT] = ACTIONS(165),
    [anon_sym_AMP_GT_GT] = ACTIONS(165),
    [anon_sym_LT_AMP] = ACTIONS(165),
    [anon_sym_GT_AMP] = ACTIONS(165),
    [anon_sym_LT_LT] = ACTIONS(167),
    [anon_sym_LT_LT_DASH] = ACTIONS(167),
    [sym_word] = ACTIONS(561),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(559),
    [anon_sym_LF] = ACTIONS(559),
    [anon_sym_AMP] = ACTIONS(559),
  },
  [127] = {
    [sym_file_redirect] = STATE(137),
    [sym_heredoc_redirect] = STATE(137),
    [sym_file_descriptor] = ACTIONS(159),
    [anon_sym_SEMI_SEMI] = ACTIONS(563),
    [anon_sym_PIPE] = ACTIONS(563),
    [anon_sym_PIPE_AMP] = ACTIONS(563),
    [anon_sym_AMP_AMP] = ACTIONS(563),
    [anon_sym_PIPE_PIPE] = ACTIONS(563),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_GT_GT] = ACTIONS(165),
    [anon_sym_AMP_GT] = ACTIONS(165),
    [anon_sym_AMP_GT_GT] = ACTIONS(165),
    [anon_sym_LT_AMP] = ACTIONS(165),
    [anon_sym_GT_AMP] = ACTIONS(165),
    [anon_sym_LT_LT] = ACTIONS(167),
    [anon_sym_LT_LT_DASH] = ACTIONS(167),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(563),
    [anon_sym_LF] = ACTIONS(563),
    [anon_sym_AMP] = ACTIONS(563),
  },
  [128] = {
    [sym_simple_expansion] = STATE(54),
    [sym_expansion] = STATE(54),
    [sym_command_substitution] = STATE(54),
    [aux_sym_string_repeat1] = STATE(230),
    [anon_sym_DQUOTE] = ACTIONS(565),
    [sym__quoted_chars] = ACTIONS(171),
    [anon_sym_DOLLAR] = ACTIONS(173),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(175),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [sym_comment] = ACTIONS(77),
  },
  [129] = {
    [sym_file_descriptor] = ACTIONS(401),
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
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(405),
    [anon_sym_LF] = ACTIONS(405),
    [anon_sym_AMP] = ACTIONS(405),
  },
  [130] = {
    [sym_special_variable_name] = STATE(233),
    [anon_sym_DOLLAR] = ACTIONS(567),
    [sym_comment] = ACTIONS(77),
    [sym_simple_variable_name] = ACTIONS(569),
    [anon_sym_STAR] = ACTIONS(567),
    [anon_sym_AT] = ACTIONS(567),
    [anon_sym_POUND] = ACTIONS(571),
    [anon_sym_QMARK] = ACTIONS(567),
    [anon_sym_DASH] = ACTIONS(567),
    [anon_sym_BANG] = ACTIONS(567),
    [anon_sym_0] = ACTIONS(571),
    [anon_sym__] = ACTIONS(571),
  },
  [131] = {
    [sym_special_variable_name] = STATE(235),
    [anon_sym_DOLLAR] = ACTIONS(273),
    [sym_leading_word] = ACTIONS(573),
    [sym_comment] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(273),
    [anon_sym_AT] = ACTIONS(273),
    [anon_sym_POUND] = ACTIONS(273),
    [anon_sym_QMARK] = ACTIONS(273),
    [anon_sym_DASH] = ACTIONS(273),
    [anon_sym_BANG] = ACTIONS(273),
    [anon_sym_0] = ACTIONS(273),
    [anon_sym__] = ACTIONS(273),
  },
  [132] = {
    [sym_command] = STATE(236),
    [sym_environment_variable_assignment] = STATE(21),
    [sym_string] = STATE(60),
    [sym_command_substitution] = STATE(60),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(66),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(181),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_raw_string] = ACTIONS(185),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(187),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(191),
    [sym_comment] = ACTIONS(119),
  },
  [133] = {
    [sym_command] = STATE(237),
    [sym_environment_variable_assignment] = STATE(21),
    [sym_string] = STATE(67),
    [sym_command_substitution] = STATE(67),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(70),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_raw_string] = ACTIONS(195),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(187),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(197),
    [sym_comment] = ACTIONS(119),
  },
  [134] = {
    [sym_file_descriptor] = ACTIONS(575),
    [anon_sym_SEMI_SEMI] = ACTIONS(577),
    [anon_sym_PIPE] = ACTIONS(577),
    [anon_sym_PIPE_AMP] = ACTIONS(577),
    [anon_sym_AMP_AMP] = ACTIONS(577),
    [anon_sym_PIPE_PIPE] = ACTIONS(577),
    [anon_sym_LT] = ACTIONS(577),
    [anon_sym_GT] = ACTIONS(577),
    [anon_sym_GT_GT] = ACTIONS(577),
    [anon_sym_AMP_GT] = ACTIONS(577),
    [anon_sym_AMP_GT_GT] = ACTIONS(577),
    [anon_sym_LT_AMP] = ACTIONS(577),
    [anon_sym_GT_AMP] = ACTIONS(577),
    [anon_sym_LT_LT] = ACTIONS(577),
    [anon_sym_LT_LT_DASH] = ACTIONS(577),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(577),
    [anon_sym_LF] = ACTIONS(577),
    [anon_sym_AMP] = ACTIONS(577),
  },
  [135] = {
    [sym_simple_expansion] = STATE(238),
    [sym_expansion] = STATE(238),
    [aux_sym_heredoc_repeat1] = STATE(242),
    [sym__heredoc_middle] = ACTIONS(579),
    [sym__heredoc_end] = ACTIONS(581),
    [anon_sym_DOLLAR] = ACTIONS(583),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(585),
    [sym_comment] = ACTIONS(119),
  },
  [136] = {
    [sym_file_descriptor] = ACTIONS(587),
    [anon_sym_SEMI_SEMI] = ACTIONS(589),
    [anon_sym_PIPE] = ACTIONS(589),
    [anon_sym_PIPE_AMP] = ACTIONS(589),
    [anon_sym_AMP_AMP] = ACTIONS(589),
    [anon_sym_PIPE_PIPE] = ACTIONS(589),
    [anon_sym_LT] = ACTIONS(589),
    [anon_sym_GT] = ACTIONS(589),
    [anon_sym_GT_GT] = ACTIONS(589),
    [anon_sym_AMP_GT] = ACTIONS(589),
    [anon_sym_AMP_GT_GT] = ACTIONS(589),
    [anon_sym_LT_AMP] = ACTIONS(589),
    [anon_sym_GT_AMP] = ACTIONS(589),
    [anon_sym_LT_LT] = ACTIONS(589),
    [anon_sym_LT_LT_DASH] = ACTIONS(589),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(589),
    [anon_sym_LF] = ACTIONS(589),
    [anon_sym_AMP] = ACTIONS(589),
  },
  [137] = {
    [sym_file_descriptor] = ACTIONS(591),
    [anon_sym_SEMI_SEMI] = ACTIONS(593),
    [anon_sym_PIPE] = ACTIONS(593),
    [anon_sym_PIPE_AMP] = ACTIONS(593),
    [anon_sym_AMP_AMP] = ACTIONS(593),
    [anon_sym_PIPE_PIPE] = ACTIONS(593),
    [anon_sym_LT] = ACTIONS(593),
    [anon_sym_GT] = ACTIONS(593),
    [anon_sym_GT_GT] = ACTIONS(593),
    [anon_sym_AMP_GT] = ACTIONS(593),
    [anon_sym_AMP_GT_GT] = ACTIONS(593),
    [anon_sym_LT_AMP] = ACTIONS(593),
    [anon_sym_GT_AMP] = ACTIONS(593),
    [anon_sym_LT_LT] = ACTIONS(593),
    [anon_sym_LT_LT_DASH] = ACTIONS(593),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(593),
    [anon_sym_LF] = ACTIONS(593),
    [anon_sym_AMP] = ACTIONS(593),
  },
  [138] = {
    [anon_sym_DQUOTE] = ACTIONS(483),
    [sym__quoted_chars] = ACTIONS(483),
    [anon_sym_DOLLAR] = ACTIONS(483),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(483),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(483),
    [anon_sym_BQUOTE] = ACTIONS(491),
    [sym_comment] = ACTIONS(77),
  },
  [139] = {
    [anon_sym_DQUOTE] = ACTIONS(485),
    [sym__quoted_chars] = ACTIONS(485),
    [anon_sym_DOLLAR] = ACTIONS(485),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(485),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(485),
    [anon_sym_BQUOTE] = ACTIONS(517),
    [sym_comment] = ACTIONS(77),
  },
  [140] = {
    [anon_sym_DQUOTE] = ACTIONS(487),
    [sym__quoted_chars] = ACTIONS(487),
    [anon_sym_DOLLAR] = ACTIONS(487),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(487),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(487),
    [anon_sym_BQUOTE] = ACTIONS(521),
    [sym_comment] = ACTIONS(77),
  },
  [141] = {
    [anon_sym_RBRACE] = ACTIONS(595),
    [anon_sym_COLON] = ACTIONS(597),
    [anon_sym_EQ] = ACTIONS(599),
    [anon_sym_COLON_QMARK] = ACTIONS(599),
    [anon_sym_COLON_DASH] = ACTIONS(599),
    [sym_comment] = ACTIONS(119),
  },
  [142] = {
    [anon_sym_RBRACE] = ACTIONS(601),
    [anon_sym_COLON] = ACTIONS(603),
    [anon_sym_EQ] = ACTIONS(605),
    [anon_sym_COLON_QMARK] = ACTIONS(605),
    [anon_sym_COLON_DASH] = ACTIONS(605),
    [sym_comment] = ACTIONS(119),
  },
  [143] = {
    [anon_sym_RPAREN] = ACTIONS(607),
    [sym_comment] = ACTIONS(119),
  },
  [144] = {
    [anon_sym_BQUOTE] = ACTIONS(607),
    [sym_comment] = ACTIONS(119),
  },
  [145] = {
    [sym_file_descriptor] = ACTIONS(609),
    [anon_sym_SEMI_SEMI] = ACTIONS(611),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(611),
    [anon_sym_PIPE] = ACTIONS(611),
    [anon_sym_PIPE_AMP] = ACTIONS(611),
    [anon_sym_AMP_AMP] = ACTIONS(611),
    [anon_sym_PIPE_PIPE] = ACTIONS(611),
    [anon_sym_LT] = ACTIONS(611),
    [anon_sym_GT] = ACTIONS(611),
    [anon_sym_GT_GT] = ACTIONS(611),
    [anon_sym_AMP_GT] = ACTIONS(611),
    [anon_sym_AMP_GT_GT] = ACTIONS(611),
    [anon_sym_LT_AMP] = ACTIONS(611),
    [anon_sym_GT_AMP] = ACTIONS(611),
    [anon_sym_LT_LT] = ACTIONS(611),
    [anon_sym_LT_LT_DASH] = ACTIONS(611),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(611),
    [anon_sym_LF] = ACTIONS(611),
    [anon_sym_AMP] = ACTIONS(611),
  },
  [146] = {
    [anon_sym_DQUOTE] = ACTIONS(613),
    [sym__quoted_chars] = ACTIONS(613),
    [anon_sym_DOLLAR] = ACTIONS(613),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(613),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(613),
    [anon_sym_BQUOTE] = ACTIONS(615),
    [sym_comment] = ACTIONS(77),
  },
  [147] = {
    [anon_sym_LT] = ACTIONS(617),
    [anon_sym_GT] = ACTIONS(617),
    [anon_sym_GT_GT] = ACTIONS(619),
    [anon_sym_AMP_GT] = ACTIONS(617),
    [anon_sym_AMP_GT_GT] = ACTIONS(619),
    [anon_sym_LT_AMP] = ACTIONS(619),
    [anon_sym_GT_AMP] = ACTIONS(619),
    [sym_comment] = ACTIONS(119),
  },
  [148] = {
    [sym_string] = STATE(250),
    [sym_simple_expansion] = STATE(250),
    [sym_expansion] = STATE(250),
    [sym_command_substitution] = STATE(250),
    [sym_file_redirect] = STATE(151),
    [sym_heredoc_redirect] = STATE(151),
    [aux_sym_bracket_command_repeat1] = STATE(255),
    [aux_sym_command_repeat2] = STATE(256),
    [sym_file_descriptor] = ACTIONS(367),
    [anon_sym_RPAREN] = ACTIONS(621),
    [anon_sym_DQUOTE] = ACTIONS(623),
    [sym_raw_string] = ACTIONS(625),
    [anon_sym_DOLLAR] = ACTIONS(627),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(629),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(631),
    [anon_sym_BQUOTE] = ACTIONS(633),
    [anon_sym_LT] = ACTIONS(635),
    [anon_sym_GT] = ACTIONS(635),
    [anon_sym_GT_GT] = ACTIONS(637),
    [anon_sym_AMP_GT] = ACTIONS(635),
    [anon_sym_AMP_GT_GT] = ACTIONS(637),
    [anon_sym_LT_AMP] = ACTIONS(637),
    [anon_sym_GT_AMP] = ACTIONS(637),
    [anon_sym_LT_LT] = ACTIONS(639),
    [anon_sym_LT_LT_DASH] = ACTIONS(641),
    [sym_word] = ACTIONS(643),
    [sym_comment] = ACTIONS(119),
  },
  [149] = {
    [sym_string] = STATE(257),
    [sym_simple_expansion] = STATE(257),
    [sym_expansion] = STATE(257),
    [sym_command_substitution] = STATE(257),
    [anon_sym_DQUOTE] = ACTIONS(623),
    [sym_raw_string] = ACTIONS(645),
    [anon_sym_DOLLAR] = ACTIONS(627),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(629),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(631),
    [anon_sym_BQUOTE] = ACTIONS(633),
    [sym_word] = ACTIONS(647),
    [sym_comment] = ACTIONS(119),
  },
  [150] = {
    [sym_heredoc] = STATE(260),
    [sym__simple_heredoc] = ACTIONS(649),
    [sym__heredoc_beginning] = ACTIONS(651),
    [sym_comment] = ACTIONS(119),
  },
  [151] = {
    [sym_file_descriptor] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(341),
    [anon_sym_BQUOTE] = ACTIONS(341),
    [anon_sym_LT] = ACTIONS(653),
    [anon_sym_GT] = ACTIONS(653),
    [anon_sym_GT_GT] = ACTIONS(341),
    [anon_sym_AMP_GT] = ACTIONS(653),
    [anon_sym_AMP_GT_GT] = ACTIONS(341),
    [anon_sym_LT_AMP] = ACTIONS(341),
    [anon_sym_GT_AMP] = ACTIONS(341),
    [anon_sym_LT_LT] = ACTIONS(653),
    [anon_sym_LT_LT_DASH] = ACTIONS(341),
    [sym_comment] = ACTIONS(119),
  },
  [152] = {
    [sym_file_redirect] = STATE(261),
    [sym_heredoc_redirect] = STATE(261),
    [sym_file_descriptor] = ACTIONS(367),
    [anon_sym_RPAREN] = ACTIONS(655),
    [anon_sym_BQUOTE] = ACTIONS(655),
    [anon_sym_LT] = ACTIONS(635),
    [anon_sym_GT] = ACTIONS(635),
    [anon_sym_GT_GT] = ACTIONS(637),
    [anon_sym_AMP_GT] = ACTIONS(635),
    [anon_sym_AMP_GT_GT] = ACTIONS(637),
    [anon_sym_LT_AMP] = ACTIONS(637),
    [anon_sym_GT_AMP] = ACTIONS(637),
    [anon_sym_LT_LT] = ACTIONS(639),
    [anon_sym_LT_LT_DASH] = ACTIONS(641),
    [sym_comment] = ACTIONS(119),
  },
  [153] = {
    [sym_file_descriptor] = ACTIONS(347),
    [anon_sym_RPAREN] = ACTIONS(349),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(349),
    [anon_sym_BQUOTE] = ACTIONS(349),
    [anon_sym_LT] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(349),
    [anon_sym_GT_GT] = ACTIONS(349),
    [anon_sym_AMP_GT] = ACTIONS(349),
    [anon_sym_AMP_GT_GT] = ACTIONS(349),
    [anon_sym_LT_AMP] = ACTIONS(349),
    [anon_sym_GT_AMP] = ACTIONS(349),
    [anon_sym_LT_LT] = ACTIONS(349),
    [anon_sym_LT_LT_DASH] = ACTIONS(349),
    [sym_comment] = ACTIONS(77),
  },
  [154] = {
    [sym_simple_expansion] = STATE(146),
    [sym_expansion] = STATE(146),
    [sym_command_substitution] = STATE(146),
    [anon_sym_DQUOTE] = ACTIONS(657),
    [sym__quoted_chars] = ACTIONS(365),
    [anon_sym_DOLLAR] = ACTIONS(173),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(175),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [sym_comment] = ACTIONS(77),
  },
  [155] = {
    [anon_sym_RPAREN] = ACTIONS(659),
    [sym_comment] = ACTIONS(119),
  },
  [156] = {
    [anon_sym_BQUOTE] = ACTIONS(659),
    [sym_comment] = ACTIONS(119),
  },
  [157] = {
    [sym_string] = STATE(250),
    [sym_simple_expansion] = STATE(250),
    [sym_expansion] = STATE(250),
    [sym_command_substitution] = STATE(250),
    [sym_file_redirect] = STATE(151),
    [sym_heredoc_redirect] = STATE(151),
    [aux_sym_bracket_command_repeat1] = STATE(264),
    [aux_sym_command_repeat2] = STATE(265),
    [sym_file_descriptor] = ACTIONS(367),
    [anon_sym_RPAREN] = ACTIONS(661),
    [anon_sym_DQUOTE] = ACTIONS(623),
    [sym_raw_string] = ACTIONS(625),
    [anon_sym_DOLLAR] = ACTIONS(627),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(629),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(631),
    [anon_sym_BQUOTE] = ACTIONS(633),
    [anon_sym_LT] = ACTIONS(635),
    [anon_sym_GT] = ACTIONS(635),
    [anon_sym_GT_GT] = ACTIONS(637),
    [anon_sym_AMP_GT] = ACTIONS(635),
    [anon_sym_AMP_GT_GT] = ACTIONS(637),
    [anon_sym_LT_AMP] = ACTIONS(637),
    [anon_sym_GT_AMP] = ACTIONS(637),
    [anon_sym_LT_LT] = ACTIONS(639),
    [anon_sym_LT_LT_DASH] = ACTIONS(641),
    [sym_word] = ACTIONS(643),
    [sym_comment] = ACTIONS(119),
  },
  [158] = {
    [sym_string] = STATE(266),
    [sym_simple_expansion] = STATE(266),
    [sym_expansion] = STATE(266),
    [sym_command_substitution] = STATE(266),
    [sym__empty_value] = ACTIONS(663),
    [anon_sym_DQUOTE] = ACTIONS(199),
    [sym_raw_string] = ACTIONS(665),
    [anon_sym_DOLLAR] = ACTIONS(203),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(205),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(207),
    [anon_sym_BQUOTE] = ACTIONS(209),
    [sym_word] = ACTIONS(667),
    [sym_comment] = ACTIONS(119),
  },
  [159] = {
    [sym_file_redirect] = STATE(261),
    [sym_heredoc_redirect] = STATE(261),
    [sym_file_descriptor] = ACTIONS(367),
    [anon_sym_RPAREN] = ACTIONS(669),
    [anon_sym_BQUOTE] = ACTIONS(669),
    [anon_sym_LT] = ACTIONS(635),
    [anon_sym_GT] = ACTIONS(635),
    [anon_sym_GT_GT] = ACTIONS(637),
    [anon_sym_AMP_GT] = ACTIONS(635),
    [anon_sym_AMP_GT_GT] = ACTIONS(637),
    [anon_sym_LT_AMP] = ACTIONS(637),
    [anon_sym_GT_AMP] = ACTIONS(637),
    [anon_sym_LT_LT] = ACTIONS(639),
    [anon_sym_LT_LT_DASH] = ACTIONS(641),
    [sym_comment] = ACTIONS(119),
  },
  [160] = {
    [sym_file_descriptor] = ACTIONS(671),
    [anon_sym_SEMI_SEMI] = ACTIONS(673),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(673),
    [anon_sym_PIPE] = ACTIONS(673),
    [anon_sym_PIPE_AMP] = ACTIONS(673),
    [anon_sym_AMP_AMP] = ACTIONS(673),
    [anon_sym_PIPE_PIPE] = ACTIONS(673),
    [anon_sym_LT] = ACTIONS(673),
    [anon_sym_GT] = ACTIONS(673),
    [anon_sym_GT_GT] = ACTIONS(673),
    [anon_sym_AMP_GT] = ACTIONS(673),
    [anon_sym_AMP_GT_GT] = ACTIONS(673),
    [anon_sym_LT_AMP] = ACTIONS(673),
    [anon_sym_GT_AMP] = ACTIONS(673),
    [anon_sym_LT_LT] = ACTIONS(673),
    [anon_sym_LT_LT_DASH] = ACTIONS(673),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(673),
    [anon_sym_LF] = ACTIONS(673),
    [anon_sym_AMP] = ACTIONS(673),
  },
  [161] = {
    [sym_file_redirect] = STATE(151),
    [sym_heredoc_redirect] = STATE(151),
    [aux_sym_command_repeat2] = STATE(256),
    [sym_file_descriptor] = ACTIONS(367),
    [anon_sym_RPAREN] = ACTIONS(345),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(675),
    [anon_sym_LT] = ACTIONS(371),
    [anon_sym_GT] = ACTIONS(371),
    [anon_sym_GT_GT] = ACTIONS(371),
    [anon_sym_AMP_GT] = ACTIONS(371),
    [anon_sym_AMP_GT_GT] = ACTIONS(371),
    [anon_sym_LT_AMP] = ACTIONS(371),
    [anon_sym_GT_AMP] = ACTIONS(371),
    [anon_sym_LT_LT] = ACTIONS(373),
    [anon_sym_LT_LT_DASH] = ACTIONS(373),
    [sym_comment] = ACTIONS(77),
  },
  [162] = {
    [sym_file_redirect] = STATE(151),
    [sym_heredoc_redirect] = STATE(151),
    [aux_sym_command_repeat2] = STATE(269),
    [sym_file_descriptor] = ACTIONS(367),
    [anon_sym_RPAREN] = ACTIONS(451),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(677),
    [anon_sym_EQ] = ACTIONS(379),
    [anon_sym_LT] = ACTIONS(371),
    [anon_sym_GT] = ACTIONS(371),
    [anon_sym_GT_GT] = ACTIONS(371),
    [anon_sym_AMP_GT] = ACTIONS(371),
    [anon_sym_AMP_GT_GT] = ACTIONS(371),
    [anon_sym_LT_AMP] = ACTIONS(371),
    [anon_sym_GT_AMP] = ACTIONS(371),
    [anon_sym_LT_LT] = ACTIONS(373),
    [anon_sym_LT_LT_DASH] = ACTIONS(373),
    [sym_comment] = ACTIONS(77),
  },
  [163] = {
    [sym_string] = STATE(250),
    [sym_simple_expansion] = STATE(250),
    [sym_expansion] = STATE(250),
    [sym_command_substitution] = STATE(250),
    [sym_file_redirect] = STATE(151),
    [sym_heredoc_redirect] = STATE(151),
    [aux_sym_bracket_command_repeat1] = STATE(270),
    [aux_sym_command_repeat2] = STATE(256),
    [sym_file_descriptor] = ACTIONS(367),
    [anon_sym_DQUOTE] = ACTIONS(623),
    [sym_raw_string] = ACTIONS(625),
    [anon_sym_DOLLAR] = ACTIONS(627),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(629),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(631),
    [anon_sym_BQUOTE] = ACTIONS(621),
    [anon_sym_LT] = ACTIONS(635),
    [anon_sym_GT] = ACTIONS(635),
    [anon_sym_GT_GT] = ACTIONS(637),
    [anon_sym_AMP_GT] = ACTIONS(635),
    [anon_sym_AMP_GT_GT] = ACTIONS(637),
    [anon_sym_LT_AMP] = ACTIONS(637),
    [anon_sym_GT_AMP] = ACTIONS(637),
    [anon_sym_LT_LT] = ACTIONS(639),
    [anon_sym_LT_LT_DASH] = ACTIONS(641),
    [sym_word] = ACTIONS(643),
    [sym_comment] = ACTIONS(119),
  },
  [164] = {
    [sym_string] = STATE(250),
    [sym_simple_expansion] = STATE(250),
    [sym_expansion] = STATE(250),
    [sym_command_substitution] = STATE(250),
    [sym_file_redirect] = STATE(151),
    [sym_heredoc_redirect] = STATE(151),
    [aux_sym_bracket_command_repeat1] = STATE(271),
    [aux_sym_command_repeat2] = STATE(265),
    [sym_file_descriptor] = ACTIONS(367),
    [anon_sym_DQUOTE] = ACTIONS(623),
    [sym_raw_string] = ACTIONS(625),
    [anon_sym_DOLLAR] = ACTIONS(627),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(629),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(631),
    [anon_sym_BQUOTE] = ACTIONS(661),
    [anon_sym_LT] = ACTIONS(635),
    [anon_sym_GT] = ACTIONS(635),
    [anon_sym_GT_GT] = ACTIONS(637),
    [anon_sym_AMP_GT] = ACTIONS(635),
    [anon_sym_AMP_GT_GT] = ACTIONS(637),
    [anon_sym_LT_AMP] = ACTIONS(637),
    [anon_sym_GT_AMP] = ACTIONS(637),
    [anon_sym_LT_LT] = ACTIONS(639),
    [anon_sym_LT_LT_DASH] = ACTIONS(641),
    [sym_word] = ACTIONS(643),
    [sym_comment] = ACTIONS(119),
  },
  [165] = {
    [sym_file_redirect] = STATE(151),
    [sym_heredoc_redirect] = STATE(151),
    [aux_sym_command_repeat2] = STATE(256),
    [sym_file_descriptor] = ACTIONS(367),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(679),
    [anon_sym_BQUOTE] = ACTIONS(345),
    [anon_sym_LT] = ACTIONS(371),
    [anon_sym_GT] = ACTIONS(371),
    [anon_sym_GT_GT] = ACTIONS(371),
    [anon_sym_AMP_GT] = ACTIONS(371),
    [anon_sym_AMP_GT_GT] = ACTIONS(371),
    [anon_sym_LT_AMP] = ACTIONS(371),
    [anon_sym_GT_AMP] = ACTIONS(371),
    [anon_sym_LT_LT] = ACTIONS(373),
    [anon_sym_LT_LT_DASH] = ACTIONS(373),
    [sym_comment] = ACTIONS(77),
  },
  [166] = {
    [sym_file_redirect] = STATE(151),
    [sym_heredoc_redirect] = STATE(151),
    [aux_sym_command_repeat2] = STATE(269),
    [sym_file_descriptor] = ACTIONS(367),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(681),
    [anon_sym_EQ] = ACTIONS(379),
    [anon_sym_BQUOTE] = ACTIONS(451),
    [anon_sym_LT] = ACTIONS(371),
    [anon_sym_GT] = ACTIONS(371),
    [anon_sym_GT_GT] = ACTIONS(371),
    [anon_sym_AMP_GT] = ACTIONS(371),
    [anon_sym_AMP_GT_GT] = ACTIONS(371),
    [anon_sym_LT_AMP] = ACTIONS(371),
    [anon_sym_GT_AMP] = ACTIONS(371),
    [anon_sym_LT_LT] = ACTIONS(373),
    [anon_sym_LT_LT_DASH] = ACTIONS(373),
    [sym_comment] = ACTIONS(77),
  },
  [167] = {
    [sym_file_descriptor] = ACTIONS(347),
    [anon_sym_COLON] = ACTIONS(347),
    [anon_sym_DQUOTE] = ACTIONS(347),
    [sym_raw_string] = ACTIONS(511),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(347),
    [anon_sym_BQUOTE] = ACTIONS(347),
    [anon_sym_LT] = ACTIONS(511),
    [anon_sym_GT] = ACTIONS(511),
    [anon_sym_GT_GT] = ACTIONS(511),
    [anon_sym_AMP_GT] = ACTIONS(511),
    [anon_sym_AMP_GT_GT] = ACTIONS(511),
    [anon_sym_LT_AMP] = ACTIONS(511),
    [anon_sym_GT_AMP] = ACTIONS(511),
    [sym_leading_word] = ACTIONS(349),
    [sym_comment] = ACTIONS(119),
  },
  [168] = {
    [sym_simple_expansion] = STATE(146),
    [sym_expansion] = STATE(146),
    [sym_command_substitution] = STATE(146),
    [anon_sym_DQUOTE] = ACTIONS(683),
    [sym__quoted_chars] = ACTIONS(365),
    [anon_sym_DOLLAR] = ACTIONS(173),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(175),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [sym_comment] = ACTIONS(77),
  },
  [169] = {
    [sym_file_descriptor] = ACTIONS(489),
    [anon_sym_COLON] = ACTIONS(489),
    [anon_sym_DQUOTE] = ACTIONS(489),
    [sym_raw_string] = ACTIONS(491),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(489),
    [anon_sym_BQUOTE] = ACTIONS(489),
    [anon_sym_LT] = ACTIONS(491),
    [anon_sym_GT] = ACTIONS(491),
    [anon_sym_GT_GT] = ACTIONS(491),
    [anon_sym_AMP_GT] = ACTIONS(491),
    [anon_sym_AMP_GT_GT] = ACTIONS(491),
    [anon_sym_LT_AMP] = ACTIONS(491),
    [anon_sym_GT_AMP] = ACTIONS(491),
    [sym_leading_word] = ACTIONS(483),
    [sym_comment] = ACTIONS(119),
  },
  [170] = {
    [sym_file_descriptor] = ACTIONS(515),
    [anon_sym_COLON] = ACTIONS(515),
    [anon_sym_DQUOTE] = ACTIONS(515),
    [sym_raw_string] = ACTIONS(517),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(515),
    [anon_sym_BQUOTE] = ACTIONS(515),
    [anon_sym_LT] = ACTIONS(517),
    [anon_sym_GT] = ACTIONS(517),
    [anon_sym_GT_GT] = ACTIONS(517),
    [anon_sym_AMP_GT] = ACTIONS(517),
    [anon_sym_AMP_GT_GT] = ACTIONS(517),
    [anon_sym_LT_AMP] = ACTIONS(517),
    [anon_sym_GT_AMP] = ACTIONS(517),
    [sym_leading_word] = ACTIONS(485),
    [sym_comment] = ACTIONS(119),
  },
  [171] = {
    [sym_file_descriptor] = ACTIONS(519),
    [anon_sym_COLON] = ACTIONS(519),
    [anon_sym_DQUOTE] = ACTIONS(519),
    [sym_raw_string] = ACTIONS(521),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(519),
    [anon_sym_BQUOTE] = ACTIONS(519),
    [anon_sym_LT] = ACTIONS(521),
    [anon_sym_GT] = ACTIONS(521),
    [anon_sym_GT_GT] = ACTIONS(521),
    [anon_sym_AMP_GT] = ACTIONS(521),
    [anon_sym_AMP_GT_GT] = ACTIONS(521),
    [anon_sym_LT_AMP] = ACTIONS(521),
    [anon_sym_GT_AMP] = ACTIONS(521),
    [sym_leading_word] = ACTIONS(487),
    [sym_comment] = ACTIONS(119),
  },
  [172] = {
    [anon_sym_RBRACE] = ACTIONS(685),
    [anon_sym_COLON] = ACTIONS(687),
    [anon_sym_EQ] = ACTIONS(689),
    [anon_sym_COLON_QMARK] = ACTIONS(689),
    [anon_sym_COLON_DASH] = ACTIONS(689),
    [sym_comment] = ACTIONS(119),
  },
  [173] = {
    [anon_sym_RBRACE] = ACTIONS(691),
    [anon_sym_COLON] = ACTIONS(693),
    [anon_sym_EQ] = ACTIONS(695),
    [anon_sym_COLON_QMARK] = ACTIONS(695),
    [anon_sym_COLON_DASH] = ACTIONS(695),
    [sym_comment] = ACTIONS(119),
  },
  [174] = {
    [anon_sym_RPAREN] = ACTIONS(697),
    [sym_comment] = ACTIONS(119),
  },
  [175] = {
    [anon_sym_BQUOTE] = ACTIONS(697),
    [sym_comment] = ACTIONS(119),
  },
  [176] = {
    [sym_compound_statement] = STATE(281),
    [anon_sym_LBRACE] = ACTIONS(699),
    [sym_comment] = ACTIONS(119),
  },
  [177] = {
    [sym_string] = STATE(227),
    [sym_simple_expansion] = STATE(227),
    [sym_expansion] = STATE(227),
    [sym_command_substitution] = STATE(227),
    [sym_file_redirect] = STATE(51),
    [sym_heredoc_redirect] = STATE(51),
    [aux_sym_command_repeat2] = STATE(282),
    [sym_file_descriptor] = ACTIONS(159),
    [anon_sym_SEMI_SEMI] = ACTIONS(701),
    [anon_sym_PIPE] = ACTIONS(701),
    [anon_sym_PIPE_AMP] = ACTIONS(701),
    [anon_sym_AMP_AMP] = ACTIONS(701),
    [anon_sym_PIPE_PIPE] = ACTIONS(701),
    [anon_sym_DQUOTE] = ACTIONS(311),
    [sym_raw_string] = ACTIONS(561),
    [anon_sym_DOLLAR] = ACTIONS(315),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(317),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(319),
    [anon_sym_BQUOTE] = ACTIONS(321),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_GT_GT] = ACTIONS(165),
    [anon_sym_AMP_GT] = ACTIONS(165),
    [anon_sym_AMP_GT_GT] = ACTIONS(165),
    [anon_sym_LT_AMP] = ACTIONS(165),
    [anon_sym_GT_AMP] = ACTIONS(165),
    [anon_sym_LT_LT] = ACTIONS(167),
    [anon_sym_LT_LT_DASH] = ACTIONS(167),
    [sym_word] = ACTIONS(561),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(701),
    [anon_sym_LF] = ACTIONS(701),
    [anon_sym_AMP] = ACTIONS(701),
  },
  [178] = {
    [sym_file_redirect] = STATE(137),
    [sym_heredoc_redirect] = STATE(137),
    [sym_file_descriptor] = ACTIONS(159),
    [anon_sym_SEMI_SEMI] = ACTIONS(703),
    [anon_sym_PIPE] = ACTIONS(703),
    [anon_sym_PIPE_AMP] = ACTIONS(703),
    [anon_sym_AMP_AMP] = ACTIONS(703),
    [anon_sym_PIPE_PIPE] = ACTIONS(703),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_GT_GT] = ACTIONS(165),
    [anon_sym_AMP_GT] = ACTIONS(165),
    [anon_sym_AMP_GT_GT] = ACTIONS(165),
    [anon_sym_LT_AMP] = ACTIONS(165),
    [anon_sym_GT_AMP] = ACTIONS(165),
    [anon_sym_LT_LT] = ACTIONS(167),
    [anon_sym_LT_LT_DASH] = ACTIONS(167),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(703),
    [anon_sym_LF] = ACTIONS(703),
    [anon_sym_AMP] = ACTIONS(703),
  },
  [179] = {
    [sym_file_descriptor] = ACTIONS(705),
    [anon_sym_SEMI_SEMI] = ACTIONS(707),
    [anon_sym_COLON] = ACTIONS(707),
    [anon_sym_PIPE] = ACTIONS(707),
    [anon_sym_PIPE_AMP] = ACTIONS(707),
    [anon_sym_AMP_AMP] = ACTIONS(707),
    [anon_sym_PIPE_PIPE] = ACTIONS(707),
    [anon_sym_DQUOTE] = ACTIONS(707),
    [sym_raw_string] = ACTIONS(707),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(707),
    [anon_sym_BQUOTE] = ACTIONS(707),
    [anon_sym_LT] = ACTIONS(707),
    [anon_sym_GT] = ACTIONS(707),
    [anon_sym_GT_GT] = ACTIONS(707),
    [anon_sym_AMP_GT] = ACTIONS(707),
    [anon_sym_AMP_GT_GT] = ACTIONS(707),
    [anon_sym_LT_AMP] = ACTIONS(707),
    [anon_sym_GT_AMP] = ACTIONS(707),
    [sym_leading_word] = ACTIONS(707),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(707),
    [anon_sym_LF] = ACTIONS(707),
    [anon_sym_AMP] = ACTIONS(707),
  },
  [180] = {
    [sym_simple_expansion] = STATE(54),
    [sym_expansion] = STATE(54),
    [sym_command_substitution] = STATE(54),
    [aux_sym_string_repeat1] = STATE(284),
    [anon_sym_DQUOTE] = ACTIONS(709),
    [sym__quoted_chars] = ACTIONS(171),
    [anon_sym_DOLLAR] = ACTIONS(173),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(175),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [sym_comment] = ACTIONS(77),
  },
  [181] = {
    [sym_special_variable_name] = STATE(287),
    [anon_sym_DOLLAR] = ACTIONS(711),
    [sym_comment] = ACTIONS(77),
    [sym_simple_variable_name] = ACTIONS(713),
    [anon_sym_STAR] = ACTIONS(711),
    [anon_sym_AT] = ACTIONS(711),
    [anon_sym_POUND] = ACTIONS(715),
    [anon_sym_QMARK] = ACTIONS(711),
    [anon_sym_DASH] = ACTIONS(711),
    [anon_sym_BANG] = ACTIONS(711),
    [anon_sym_0] = ACTIONS(715),
    [anon_sym__] = ACTIONS(715),
  },
  [182] = {
    [sym_special_variable_name] = STATE(289),
    [anon_sym_DOLLAR] = ACTIONS(273),
    [sym_leading_word] = ACTIONS(717),
    [sym_comment] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(273),
    [anon_sym_AT] = ACTIONS(273),
    [anon_sym_POUND] = ACTIONS(273),
    [anon_sym_QMARK] = ACTIONS(273),
    [anon_sym_DASH] = ACTIONS(273),
    [anon_sym_BANG] = ACTIONS(273),
    [anon_sym_0] = ACTIONS(273),
    [anon_sym__] = ACTIONS(273),
  },
  [183] = {
    [sym_command] = STATE(290),
    [sym_environment_variable_assignment] = STATE(21),
    [sym_string] = STATE(60),
    [sym_command_substitution] = STATE(60),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(66),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(181),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_raw_string] = ACTIONS(185),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(187),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(191),
    [sym_comment] = ACTIONS(119),
  },
  [184] = {
    [sym_command] = STATE(291),
    [sym_environment_variable_assignment] = STATE(21),
    [sym_string] = STATE(67),
    [sym_command_substitution] = STATE(67),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(70),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_raw_string] = ACTIONS(195),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(187),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(197),
    [sym_comment] = ACTIONS(119),
  },
  [185] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(719),
    [anon_sym_PIPE] = ACTIONS(719),
    [anon_sym_PIPE_AMP] = ACTIONS(719),
    [anon_sym_AMP_AMP] = ACTIONS(719),
    [anon_sym_PIPE_PIPE] = ACTIONS(719),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(719),
    [anon_sym_LF] = ACTIONS(719),
    [anon_sym_AMP] = ACTIONS(719),
  },
  [186] = {
    [sym_file_descriptor] = ACTIONS(235),
    [anon_sym_SEMI_SEMI] = ACTIONS(719),
    [anon_sym_COLON] = ACTIONS(237),
    [anon_sym_PIPE] = ACTIONS(719),
    [anon_sym_PIPE_AMP] = ACTIONS(719),
    [anon_sym_AMP_AMP] = ACTIONS(719),
    [anon_sym_PIPE_PIPE] = ACTIONS(719),
    [anon_sym_DQUOTE] = ACTIONS(237),
    [sym_raw_string] = ACTIONS(237),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(237),
    [anon_sym_BQUOTE] = ACTIONS(237),
    [anon_sym_LT] = ACTIONS(237),
    [anon_sym_GT] = ACTIONS(237),
    [anon_sym_GT_GT] = ACTIONS(237),
    [anon_sym_AMP_GT] = ACTIONS(237),
    [anon_sym_AMP_GT_GT] = ACTIONS(237),
    [anon_sym_LT_AMP] = ACTIONS(237),
    [anon_sym_GT_AMP] = ACTIONS(237),
    [sym_leading_word] = ACTIONS(237),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(719),
    [anon_sym_LF] = ACTIONS(719),
    [anon_sym_AMP] = ACTIONS(719),
  },
  [187] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(721),
    [anon_sym_PIPE] = ACTIONS(231),
    [anon_sym_PIPE_AMP] = ACTIONS(231),
    [anon_sym_AMP_AMP] = ACTIONS(721),
    [anon_sym_PIPE_PIPE] = ACTIONS(721),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(721),
    [anon_sym_LF] = ACTIONS(721),
    [anon_sym_AMP] = ACTIONS(721),
  },
  [188] = {
    [sym_file_descriptor] = ACTIONS(235),
    [anon_sym_SEMI_SEMI] = ACTIONS(721),
    [anon_sym_COLON] = ACTIONS(237),
    [anon_sym_PIPE] = ACTIONS(231),
    [anon_sym_PIPE_AMP] = ACTIONS(231),
    [anon_sym_AMP_AMP] = ACTIONS(721),
    [anon_sym_PIPE_PIPE] = ACTIONS(721),
    [anon_sym_DQUOTE] = ACTIONS(237),
    [sym_raw_string] = ACTIONS(237),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(237),
    [anon_sym_BQUOTE] = ACTIONS(237),
    [anon_sym_LT] = ACTIONS(237),
    [anon_sym_GT] = ACTIONS(237),
    [anon_sym_GT_GT] = ACTIONS(237),
    [anon_sym_AMP_GT] = ACTIONS(237),
    [anon_sym_AMP_GT_GT] = ACTIONS(237),
    [anon_sym_LT_AMP] = ACTIONS(237),
    [anon_sym_GT_AMP] = ACTIONS(237),
    [sym_leading_word] = ACTIONS(237),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(721),
    [anon_sym_LF] = ACTIONS(721),
    [anon_sym_AMP] = ACTIONS(721),
  },
  [189] = {
    [sym_string] = STATE(121),
    [sym_simple_expansion] = STATE(121),
    [sym_expansion] = STATE(121),
    [sym_command_substitution] = STATE(121),
    [sym_file_redirect] = STATE(51),
    [sym_heredoc_redirect] = STATE(51),
    [aux_sym_bracket_command_repeat1] = STATE(292),
    [aux_sym_command_repeat2] = STATE(228),
    [sym_file_descriptor] = ACTIONS(159),
    [anon_sym_SEMI_SEMI] = ACTIONS(559),
    [anon_sym_PIPE] = ACTIONS(559),
    [anon_sym_PIPE_AMP] = ACTIONS(559),
    [anon_sym_AMP_AMP] = ACTIONS(559),
    [anon_sym_PIPE_PIPE] = ACTIONS(559),
    [anon_sym_DQUOTE] = ACTIONS(311),
    [sym_raw_string] = ACTIONS(313),
    [anon_sym_DOLLAR] = ACTIONS(315),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(317),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(319),
    [anon_sym_BQUOTE] = ACTIONS(321),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_GT_GT] = ACTIONS(165),
    [anon_sym_AMP_GT] = ACTIONS(165),
    [anon_sym_AMP_GT_GT] = ACTIONS(165),
    [anon_sym_LT_AMP] = ACTIONS(165),
    [anon_sym_GT_AMP] = ACTIONS(165),
    [anon_sym_LT_LT] = ACTIONS(167),
    [anon_sym_LT_LT_DASH] = ACTIONS(167),
    [sym_word] = ACTIONS(313),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(559),
    [anon_sym_LF] = ACTIONS(559),
    [anon_sym_AMP] = ACTIONS(559),
  },
  [190] = {
    [sym_string] = STATE(121),
    [sym_simple_expansion] = STATE(121),
    [sym_expansion] = STATE(121),
    [sym_command_substitution] = STATE(121),
    [sym_file_redirect] = STATE(51),
    [sym_heredoc_redirect] = STATE(51),
    [aux_sym_bracket_command_repeat1] = STATE(293),
    [aux_sym_command_repeat2] = STATE(294),
    [sym_file_descriptor] = ACTIONS(159),
    [anon_sym_SEMI_SEMI] = ACTIONS(723),
    [anon_sym_PIPE] = ACTIONS(723),
    [anon_sym_PIPE_AMP] = ACTIONS(723),
    [anon_sym_AMP_AMP] = ACTIONS(723),
    [anon_sym_PIPE_PIPE] = ACTIONS(723),
    [anon_sym_DQUOTE] = ACTIONS(311),
    [sym_raw_string] = ACTIONS(313),
    [anon_sym_DOLLAR] = ACTIONS(315),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(317),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(319),
    [anon_sym_BQUOTE] = ACTIONS(321),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_GT_GT] = ACTIONS(165),
    [anon_sym_AMP_GT] = ACTIONS(165),
    [anon_sym_AMP_GT_GT] = ACTIONS(165),
    [anon_sym_LT_AMP] = ACTIONS(165),
    [anon_sym_GT_AMP] = ACTIONS(165),
    [anon_sym_LT_LT] = ACTIONS(167),
    [anon_sym_LT_LT_DASH] = ACTIONS(167),
    [sym_word] = ACTIONS(313),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(723),
    [anon_sym_LF] = ACTIONS(723),
    [anon_sym_AMP] = ACTIONS(723),
  },
  [191] = {
    [sym_file_redirect] = STATE(137),
    [sym_heredoc_redirect] = STATE(137),
    [sym_file_descriptor] = ACTIONS(159),
    [anon_sym_SEMI_SEMI] = ACTIONS(725),
    [anon_sym_PIPE] = ACTIONS(725),
    [anon_sym_PIPE_AMP] = ACTIONS(725),
    [anon_sym_AMP_AMP] = ACTIONS(725),
    [anon_sym_PIPE_PIPE] = ACTIONS(725),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_GT_GT] = ACTIONS(165),
    [anon_sym_AMP_GT] = ACTIONS(165),
    [anon_sym_AMP_GT_GT] = ACTIONS(165),
    [anon_sym_LT_AMP] = ACTIONS(165),
    [anon_sym_GT_AMP] = ACTIONS(165),
    [anon_sym_LT_LT] = ACTIONS(167),
    [anon_sym_LT_LT_DASH] = ACTIONS(167),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(725),
    [anon_sym_LF] = ACTIONS(725),
    [anon_sym_AMP] = ACTIONS(725),
  },
  [192] = {
    [sym_do_group] = STATE(295),
    [anon_sym_do] = ACTIONS(255),
    [sym_comment] = ACTIONS(119),
  },
  [193] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(727),
    [anon_sym_PIPE] = ACTIONS(727),
    [anon_sym_PIPE_AMP] = ACTIONS(727),
    [anon_sym_AMP_AMP] = ACTIONS(727),
    [anon_sym_PIPE_PIPE] = ACTIONS(727),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(727),
    [anon_sym_LF] = ACTIONS(727),
    [anon_sym_AMP] = ACTIONS(727),
  },
  [194] = {
    [sym__terminated_statement] = STATE(84),
    [sym_for_statement] = STATE(19),
    [sym_while_statement] = STATE(19),
    [sym_if_statement] = STATE(19),
    [sym_case_statement] = STATE(19),
    [sym_function_definition] = STATE(19),
    [sym_bracket_command] = STATE(19),
    [sym_command] = STATE(19),
    [sym_pipeline] = STATE(19),
    [sym_list] = STATE(19),
    [sym_subshell] = STATE(19),
    [sym_environment_variable_assignment] = STATE(20),
    [sym_string] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(23),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(91),
    [anon_sym_done] = ACTIONS(729),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_case] = ACTIONS(95),
    [anon_sym_function] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(103),
    [anon_sym_COLON] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_raw_string] = ACTIONS(109),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(117),
    [sym_comment] = ACTIONS(119),
  },
  [195] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(731),
    [anon_sym_PIPE] = ACTIONS(731),
    [anon_sym_PIPE_AMP] = ACTIONS(731),
    [anon_sym_AMP_AMP] = ACTIONS(731),
    [anon_sym_PIPE_PIPE] = ACTIONS(731),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(731),
    [anon_sym_LF] = ACTIONS(731),
    [anon_sym_AMP] = ACTIONS(731),
  },
  [196] = {
    [sym__terminated_statement] = STATE(297),
    [sym_for_statement] = STATE(27),
    [sym_while_statement] = STATE(27),
    [sym_if_statement] = STATE(27),
    [sym_case_statement] = STATE(27),
    [sym_function_definition] = STATE(27),
    [sym_bracket_command] = STATE(27),
    [sym_command] = STATE(27),
    [sym_pipeline] = STATE(27),
    [sym_list] = STATE(27),
    [sym_subshell] = STATE(27),
    [sym_environment_variable_assignment] = STATE(28),
    [sym_string] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(23),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_case] = ACTIONS(95),
    [anon_sym_function] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(103),
    [anon_sym_COLON] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_raw_string] = ACTIONS(109),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(117),
    [sym_comment] = ACTIONS(119),
  },
  [197] = {
    [sym__terminated_statement] = STATE(18),
    [sym_for_statement] = STATE(19),
    [sym_while_statement] = STATE(19),
    [sym_if_statement] = STATE(19),
    [sym_case_statement] = STATE(19),
    [sym_function_definition] = STATE(19),
    [sym_bracket_command] = STATE(19),
    [sym_command] = STATE(19),
    [sym_pipeline] = STATE(19),
    [sym_list] = STATE(19),
    [sym_subshell] = STATE(19),
    [sym_environment_variable_assignment] = STATE(20),
    [sym_string] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(21),
    [aux_sym_program_repeat1] = STATE(298),
    [aux_sym_command_repeat1] = STATE(23),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_fi] = ACTIONS(733),
    [anon_sym_case] = ACTIONS(95),
    [anon_sym_function] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(103),
    [anon_sym_COLON] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_raw_string] = ACTIONS(109),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(117),
    [sym_comment] = ACTIONS(119),
  },
  [198] = {
    [anon_sym_fi] = ACTIONS(735),
    [anon_sym_elif] = ACTIONS(735),
    [anon_sym_else] = ACTIONS(735),
    [sym_comment] = ACTIONS(119),
  },
  [199] = {
    [anon_sym_fi] = ACTIONS(737),
    [sym_comment] = ACTIONS(119),
  },
  [200] = {
    [sym__terminated_statement] = STATE(84),
    [sym_for_statement] = STATE(19),
    [sym_while_statement] = STATE(19),
    [sym_if_statement] = STATE(19),
    [sym_elif_clause] = STATE(198),
    [sym_else_clause] = STATE(300),
    [sym_case_statement] = STATE(19),
    [sym_function_definition] = STATE(19),
    [sym_bracket_command] = STATE(19),
    [sym_command] = STATE(19),
    [sym_pipeline] = STATE(19),
    [sym_list] = STATE(19),
    [sym_subshell] = STATE(19),
    [sym_environment_variable_assignment] = STATE(20),
    [sym_string] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(21),
    [aux_sym_if_statement_repeat1] = STATE(301),
    [aux_sym_command_repeat1] = STATE(23),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_fi] = ACTIONS(739),
    [anon_sym_elif] = ACTIONS(473),
    [anon_sym_else] = ACTIONS(475),
    [anon_sym_case] = ACTIONS(95),
    [anon_sym_function] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(103),
    [anon_sym_COLON] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_raw_string] = ACTIONS(109),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(117),
    [sym_comment] = ACTIONS(119),
  },
  [201] = {
    [sym_elif_clause] = STATE(302),
    [sym_else_clause] = STATE(300),
    [anon_sym_fi] = ACTIONS(737),
    [anon_sym_elif] = ACTIONS(741),
    [anon_sym_else] = ACTIONS(743),
    [sym_comment] = ACTIONS(119),
  },
  [202] = {
    [anon_sym_in] = ACTIONS(611),
    [anon_sym_SEMI_SEMI] = ACTIONS(611),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(611),
    [anon_sym_LF] = ACTIONS(611),
    [anon_sym_AMP] = ACTIONS(611),
  },
  [203] = {
    [sym_case_item] = STATE(306),
    [sym_string] = STATE(304),
    [sym_simple_expansion] = STATE(304),
    [sym_expansion] = STATE(304),
    [sym_command_substitution] = STATE(304),
    [aux_sym_case_statement_repeat1] = STATE(307),
    [anon_sym_esac] = ACTIONS(745),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_raw_string] = ACTIONS(747),
    [anon_sym_DOLLAR] = ACTIONS(749),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(153),
    [anon_sym_BQUOTE] = ACTIONS(155),
    [sym_word] = ACTIONS(751),
    [sym_comment] = ACTIONS(119),
  },
  [204] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(753),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(753),
    [anon_sym_LF] = ACTIONS(753),
    [anon_sym_AMP] = ACTIONS(753),
  },
  [205] = {
    [anon_sym_in] = ACTIONS(755),
    [anon_sym_SEMI_SEMI] = ACTIONS(755),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(755),
    [anon_sym_LF] = ACTIONS(755),
    [anon_sym_AMP] = ACTIONS(755),
  },
  [206] = {
    [sym_string] = STATE(309),
    [sym_simple_expansion] = STATE(309),
    [sym_expansion] = STATE(309),
    [sym_command_substitution] = STATE(309),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_raw_string] = ACTIONS(757),
    [anon_sym_DOLLAR] = ACTIONS(749),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(153),
    [anon_sym_BQUOTE] = ACTIONS(155),
    [sym_word] = ACTIONS(759),
    [sym_comment] = ACTIONS(119),
  },
  [207] = {
    [anon_sym_in] = ACTIONS(761),
    [anon_sym_SEMI_SEMI] = ACTIONS(761),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(761),
    [anon_sym_LF] = ACTIONS(761),
    [anon_sym_AMP] = ACTIONS(761),
  },
  [208] = {
    [sym_string] = STATE(310),
    [sym_simple_expansion] = STATE(310),
    [sym_expansion] = STATE(310),
    [sym_command_substitution] = STATE(310),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_raw_string] = ACTIONS(763),
    [anon_sym_DOLLAR] = ACTIONS(749),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(153),
    [anon_sym_BQUOTE] = ACTIONS(155),
    [sym_word] = ACTIONS(765),
    [sym_comment] = ACTIONS(119),
  },
  [209] = {
    [anon_sym_in] = ACTIONS(673),
    [anon_sym_SEMI_SEMI] = ACTIONS(673),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(673),
    [anon_sym_LF] = ACTIONS(673),
    [anon_sym_AMP] = ACTIONS(673),
  },
  [210] = {
    [sym_compound_statement] = STATE(311),
    [anon_sym_LBRACE] = ACTIONS(699),
    [sym_comment] = ACTIONS(119),
  },
  [211] = {
    [anon_sym_RPAREN] = ACTIONS(609),
    [anon_sym_RBRACE] = ACTIONS(609),
    [anon_sym_RBRACK] = ACTIONS(767),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(767),
    [anon_sym_DQUOTE] = ACTIONS(609),
    [sym_raw_string] = ACTIONS(767),
    [anon_sym_DOLLAR] = ACTIONS(767),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(609),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(609),
    [anon_sym_BQUOTE] = ACTIONS(609),
    [sym_word] = ACTIONS(611),
    [sym_comment] = ACTIONS(119),
  },
  [212] = {
    [anon_sym_RPAREN] = ACTIONS(769),
    [anon_sym_RBRACE] = ACTIONS(769),
    [anon_sym_RBRACK] = ACTIONS(771),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(771),
    [anon_sym_DQUOTE] = ACTIONS(769),
    [sym_raw_string] = ACTIONS(771),
    [anon_sym_DOLLAR] = ACTIONS(771),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(769),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(769),
    [anon_sym_BQUOTE] = ACTIONS(769),
    [sym_word] = ACTIONS(755),
    [sym_comment] = ACTIONS(119),
  },
  [213] = {
    [sym_string] = STATE(312),
    [sym_simple_expansion] = STATE(312),
    [sym_expansion] = STATE(312),
    [sym_command_substitution] = STATE(312),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_raw_string] = ACTIONS(773),
    [anon_sym_DOLLAR] = ACTIONS(749),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(153),
    [anon_sym_BQUOTE] = ACTIONS(155),
    [sym_word] = ACTIONS(775),
    [sym_comment] = ACTIONS(119),
  },
  [214] = {
    [anon_sym_RPAREN] = ACTIONS(777),
    [anon_sym_RBRACE] = ACTIONS(777),
    [anon_sym_RBRACK] = ACTIONS(779),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(779),
    [anon_sym_DQUOTE] = ACTIONS(777),
    [sym_raw_string] = ACTIONS(779),
    [anon_sym_DOLLAR] = ACTIONS(779),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(777),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(777),
    [anon_sym_BQUOTE] = ACTIONS(777),
    [sym_word] = ACTIONS(761),
    [sym_comment] = ACTIONS(119),
  },
  [215] = {
    [sym_string] = STATE(313),
    [sym_simple_expansion] = STATE(313),
    [sym_expansion] = STATE(313),
    [sym_command_substitution] = STATE(313),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_raw_string] = ACTIONS(781),
    [anon_sym_DOLLAR] = ACTIONS(749),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(153),
    [anon_sym_BQUOTE] = ACTIONS(155),
    [sym_word] = ACTIONS(783),
    [sym_comment] = ACTIONS(119),
  },
  [216] = {
    [anon_sym_RPAREN] = ACTIONS(671),
    [anon_sym_RBRACE] = ACTIONS(671),
    [anon_sym_RBRACK] = ACTIONS(785),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(785),
    [anon_sym_DQUOTE] = ACTIONS(671),
    [sym_raw_string] = ACTIONS(785),
    [anon_sym_DOLLAR] = ACTIONS(785),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(671),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(671),
    [anon_sym_BQUOTE] = ACTIONS(671),
    [sym_word] = ACTIONS(673),
    [sym_comment] = ACTIONS(119),
  },
  [217] = {
    [sym_file_descriptor] = ACTIONS(461),
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
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(465),
    [anon_sym_LF] = ACTIONS(465),
    [anon_sym_AMP] = ACTIONS(465),
  },
  [218] = {
    [sym_file_descriptor] = ACTIONS(347),
    [anon_sym_SEMI_SEMI] = ACTIONS(349),
    [anon_sym_PIPE] = ACTIONS(349),
    [anon_sym_PIPE_AMP] = ACTIONS(349),
    [anon_sym_AMP_AMP] = ACTIONS(349),
    [anon_sym_PIPE_PIPE] = ACTIONS(349),
    [anon_sym_DQUOTE] = ACTIONS(349),
    [sym_raw_string] = ACTIONS(349),
    [anon_sym_DOLLAR] = ACTIONS(349),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(349),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(349),
    [anon_sym_BQUOTE] = ACTIONS(349),
    [anon_sym_LT] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(349),
    [anon_sym_GT_GT] = ACTIONS(349),
    [anon_sym_AMP_GT] = ACTIONS(349),
    [anon_sym_AMP_GT_GT] = ACTIONS(349),
    [anon_sym_LT_AMP] = ACTIONS(349),
    [anon_sym_GT_AMP] = ACTIONS(349),
    [anon_sym_LT_LT] = ACTIONS(349),
    [anon_sym_LT_LT_DASH] = ACTIONS(349),
    [sym_word] = ACTIONS(349),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(349),
    [anon_sym_LF] = ACTIONS(349),
    [anon_sym_AMP] = ACTIONS(349),
  },
  [219] = {
    [sym_simple_expansion] = STATE(146),
    [sym_expansion] = STATE(146),
    [sym_command_substitution] = STATE(146),
    [anon_sym_DQUOTE] = ACTIONS(787),
    [sym__quoted_chars] = ACTIONS(365),
    [anon_sym_DOLLAR] = ACTIONS(173),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(175),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [sym_comment] = ACTIONS(77),
  },
  [220] = {
    [sym_file_descriptor] = ACTIONS(489),
    [anon_sym_SEMI_SEMI] = ACTIONS(483),
    [anon_sym_PIPE] = ACTIONS(483),
    [anon_sym_PIPE_AMP] = ACTIONS(483),
    [anon_sym_AMP_AMP] = ACTIONS(483),
    [anon_sym_PIPE_PIPE] = ACTIONS(483),
    [anon_sym_DQUOTE] = ACTIONS(483),
    [sym_raw_string] = ACTIONS(483),
    [anon_sym_DOLLAR] = ACTIONS(483),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(483),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(483),
    [anon_sym_BQUOTE] = ACTIONS(483),
    [anon_sym_LT] = ACTIONS(483),
    [anon_sym_GT] = ACTIONS(483),
    [anon_sym_GT_GT] = ACTIONS(483),
    [anon_sym_AMP_GT] = ACTIONS(483),
    [anon_sym_AMP_GT_GT] = ACTIONS(483),
    [anon_sym_LT_AMP] = ACTIONS(483),
    [anon_sym_GT_AMP] = ACTIONS(483),
    [anon_sym_LT_LT] = ACTIONS(483),
    [anon_sym_LT_LT_DASH] = ACTIONS(483),
    [sym_word] = ACTIONS(483),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(483),
    [anon_sym_LF] = ACTIONS(483),
    [anon_sym_AMP] = ACTIONS(483),
  },
  [221] = {
    [sym_file_descriptor] = ACTIONS(515),
    [anon_sym_SEMI_SEMI] = ACTIONS(485),
    [anon_sym_PIPE] = ACTIONS(485),
    [anon_sym_PIPE_AMP] = ACTIONS(485),
    [anon_sym_AMP_AMP] = ACTIONS(485),
    [anon_sym_PIPE_PIPE] = ACTIONS(485),
    [anon_sym_DQUOTE] = ACTIONS(485),
    [sym_raw_string] = ACTIONS(485),
    [anon_sym_DOLLAR] = ACTIONS(485),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(485),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(485),
    [anon_sym_BQUOTE] = ACTIONS(485),
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
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(485),
    [anon_sym_LF] = ACTIONS(485),
    [anon_sym_AMP] = ACTIONS(485),
  },
  [222] = {
    [sym_file_descriptor] = ACTIONS(519),
    [anon_sym_SEMI_SEMI] = ACTIONS(487),
    [anon_sym_PIPE] = ACTIONS(487),
    [anon_sym_PIPE_AMP] = ACTIONS(487),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [anon_sym_PIPE_PIPE] = ACTIONS(487),
    [anon_sym_DQUOTE] = ACTIONS(487),
    [sym_raw_string] = ACTIONS(487),
    [anon_sym_DOLLAR] = ACTIONS(487),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(487),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(487),
    [anon_sym_BQUOTE] = ACTIONS(487),
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
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_LF] = ACTIONS(487),
    [anon_sym_AMP] = ACTIONS(487),
  },
  [223] = {
    [anon_sym_RBRACE] = ACTIONS(789),
    [anon_sym_COLON] = ACTIONS(791),
    [anon_sym_EQ] = ACTIONS(793),
    [anon_sym_COLON_QMARK] = ACTIONS(793),
    [anon_sym_COLON_DASH] = ACTIONS(793),
    [sym_comment] = ACTIONS(119),
  },
  [224] = {
    [anon_sym_RBRACE] = ACTIONS(795),
    [anon_sym_COLON] = ACTIONS(797),
    [anon_sym_EQ] = ACTIONS(799),
    [anon_sym_COLON_QMARK] = ACTIONS(799),
    [anon_sym_COLON_DASH] = ACTIONS(799),
    [sym_comment] = ACTIONS(119),
  },
  [225] = {
    [anon_sym_RPAREN] = ACTIONS(801),
    [sym_comment] = ACTIONS(119),
  },
  [226] = {
    [anon_sym_BQUOTE] = ACTIONS(801),
    [sym_comment] = ACTIONS(119),
  },
  [227] = {
    [sym_file_descriptor] = ACTIONS(541),
    [anon_sym_SEMI_SEMI] = ACTIONS(543),
    [anon_sym_PIPE] = ACTIONS(543),
    [anon_sym_PIPE_AMP] = ACTIONS(543),
    [anon_sym_AMP_AMP] = ACTIONS(543),
    [anon_sym_PIPE_PIPE] = ACTIONS(543),
    [anon_sym_DQUOTE] = ACTIONS(543),
    [sym_raw_string] = ACTIONS(543),
    [anon_sym_DOLLAR] = ACTIONS(543),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(543),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(543),
    [anon_sym_BQUOTE] = ACTIONS(543),
    [anon_sym_LT] = ACTIONS(543),
    [anon_sym_GT] = ACTIONS(543),
    [anon_sym_GT_GT] = ACTIONS(543),
    [anon_sym_AMP_GT] = ACTIONS(543),
    [anon_sym_AMP_GT_GT] = ACTIONS(543),
    [anon_sym_LT_AMP] = ACTIONS(543),
    [anon_sym_GT_AMP] = ACTIONS(543),
    [anon_sym_LT_LT] = ACTIONS(543),
    [anon_sym_LT_LT_DASH] = ACTIONS(543),
    [sym_word] = ACTIONS(543),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(543),
    [anon_sym_LF] = ACTIONS(543),
    [anon_sym_AMP] = ACTIONS(543),
  },
  [228] = {
    [sym_file_redirect] = STATE(137),
    [sym_heredoc_redirect] = STATE(137),
    [sym_file_descriptor] = ACTIONS(159),
    [anon_sym_SEMI_SEMI] = ACTIONS(803),
    [anon_sym_PIPE] = ACTIONS(803),
    [anon_sym_PIPE_AMP] = ACTIONS(803),
    [anon_sym_AMP_AMP] = ACTIONS(803),
    [anon_sym_PIPE_PIPE] = ACTIONS(803),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_GT_GT] = ACTIONS(165),
    [anon_sym_AMP_GT] = ACTIONS(165),
    [anon_sym_AMP_GT_GT] = ACTIONS(165),
    [anon_sym_LT_AMP] = ACTIONS(165),
    [anon_sym_GT_AMP] = ACTIONS(165),
    [anon_sym_LT_LT] = ACTIONS(167),
    [anon_sym_LT_LT_DASH] = ACTIONS(167),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(803),
    [anon_sym_LF] = ACTIONS(803),
    [anon_sym_AMP] = ACTIONS(803),
  },
  [229] = {
    [sym_file_descriptor] = ACTIONS(347),
    [anon_sym_SEMI_SEMI] = ACTIONS(349),
    [anon_sym_PIPE] = ACTIONS(349),
    [anon_sym_PIPE_AMP] = ACTIONS(349),
    [anon_sym_AMP_AMP] = ACTIONS(349),
    [anon_sym_PIPE_PIPE] = ACTIONS(349),
    [anon_sym_LT] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(349),
    [anon_sym_GT_GT] = ACTIONS(349),
    [anon_sym_AMP_GT] = ACTIONS(349),
    [anon_sym_AMP_GT_GT] = ACTIONS(349),
    [anon_sym_LT_AMP] = ACTIONS(349),
    [anon_sym_GT_AMP] = ACTIONS(349),
    [anon_sym_LT_LT] = ACTIONS(349),
    [anon_sym_LT_LT_DASH] = ACTIONS(349),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(349),
    [anon_sym_LF] = ACTIONS(349),
    [anon_sym_AMP] = ACTIONS(349),
  },
  [230] = {
    [sym_simple_expansion] = STATE(146),
    [sym_expansion] = STATE(146),
    [sym_command_substitution] = STATE(146),
    [anon_sym_DQUOTE] = ACTIONS(805),
    [sym__quoted_chars] = ACTIONS(365),
    [anon_sym_DOLLAR] = ACTIONS(173),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(175),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [sym_comment] = ACTIONS(77),
  },
  [231] = {
    [sym_file_descriptor] = ACTIONS(489),
    [anon_sym_SEMI_SEMI] = ACTIONS(483),
    [anon_sym_PIPE] = ACTIONS(483),
    [anon_sym_PIPE_AMP] = ACTIONS(483),
    [anon_sym_AMP_AMP] = ACTIONS(483),
    [anon_sym_PIPE_PIPE] = ACTIONS(483),
    [anon_sym_LT] = ACTIONS(483),
    [anon_sym_GT] = ACTIONS(483),
    [anon_sym_GT_GT] = ACTIONS(483),
    [anon_sym_AMP_GT] = ACTIONS(483),
    [anon_sym_AMP_GT_GT] = ACTIONS(483),
    [anon_sym_LT_AMP] = ACTIONS(483),
    [anon_sym_GT_AMP] = ACTIONS(483),
    [anon_sym_LT_LT] = ACTIONS(483),
    [anon_sym_LT_LT_DASH] = ACTIONS(483),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(483),
    [anon_sym_LF] = ACTIONS(483),
    [anon_sym_AMP] = ACTIONS(483),
  },
  [232] = {
    [sym_file_descriptor] = ACTIONS(515),
    [anon_sym_SEMI_SEMI] = ACTIONS(485),
    [anon_sym_PIPE] = ACTIONS(485),
    [anon_sym_PIPE_AMP] = ACTIONS(485),
    [anon_sym_AMP_AMP] = ACTIONS(485),
    [anon_sym_PIPE_PIPE] = ACTIONS(485),
    [anon_sym_LT] = ACTIONS(485),
    [anon_sym_GT] = ACTIONS(485),
    [anon_sym_GT_GT] = ACTIONS(485),
    [anon_sym_AMP_GT] = ACTIONS(485),
    [anon_sym_AMP_GT_GT] = ACTIONS(485),
    [anon_sym_LT_AMP] = ACTIONS(485),
    [anon_sym_GT_AMP] = ACTIONS(485),
    [anon_sym_LT_LT] = ACTIONS(485),
    [anon_sym_LT_LT_DASH] = ACTIONS(485),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(485),
    [anon_sym_LF] = ACTIONS(485),
    [anon_sym_AMP] = ACTIONS(485),
  },
  [233] = {
    [sym_file_descriptor] = ACTIONS(519),
    [anon_sym_SEMI_SEMI] = ACTIONS(487),
    [anon_sym_PIPE] = ACTIONS(487),
    [anon_sym_PIPE_AMP] = ACTIONS(487),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [anon_sym_PIPE_PIPE] = ACTIONS(487),
    [anon_sym_LT] = ACTIONS(487),
    [anon_sym_GT] = ACTIONS(487),
    [anon_sym_GT_GT] = ACTIONS(487),
    [anon_sym_AMP_GT] = ACTIONS(487),
    [anon_sym_AMP_GT_GT] = ACTIONS(487),
    [anon_sym_LT_AMP] = ACTIONS(487),
    [anon_sym_GT_AMP] = ACTIONS(487),
    [anon_sym_LT_LT] = ACTIONS(487),
    [anon_sym_LT_LT_DASH] = ACTIONS(487),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_LF] = ACTIONS(487),
    [anon_sym_AMP] = ACTIONS(487),
  },
  [234] = {
    [anon_sym_RBRACE] = ACTIONS(807),
    [anon_sym_COLON] = ACTIONS(809),
    [anon_sym_EQ] = ACTIONS(811),
    [anon_sym_COLON_QMARK] = ACTIONS(811),
    [anon_sym_COLON_DASH] = ACTIONS(811),
    [sym_comment] = ACTIONS(119),
  },
  [235] = {
    [anon_sym_RBRACE] = ACTIONS(813),
    [anon_sym_COLON] = ACTIONS(815),
    [anon_sym_EQ] = ACTIONS(817),
    [anon_sym_COLON_QMARK] = ACTIONS(817),
    [anon_sym_COLON_DASH] = ACTIONS(817),
    [sym_comment] = ACTIONS(119),
  },
  [236] = {
    [anon_sym_RPAREN] = ACTIONS(819),
    [sym_comment] = ACTIONS(119),
  },
  [237] = {
    [anon_sym_BQUOTE] = ACTIONS(819),
    [sym_comment] = ACTIONS(119),
  },
  [238] = {
    [sym__heredoc_middle] = ACTIONS(821),
    [sym__heredoc_end] = ACTIONS(821),
    [anon_sym_DOLLAR] = ACTIONS(823),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(821),
    [sym_comment] = ACTIONS(119),
  },
  [239] = {
    [sym_file_descriptor] = ACTIONS(825),
    [anon_sym_SEMI_SEMI] = ACTIONS(827),
    [anon_sym_PIPE] = ACTIONS(827),
    [anon_sym_PIPE_AMP] = ACTIONS(827),
    [anon_sym_AMP_AMP] = ACTIONS(827),
    [anon_sym_PIPE_PIPE] = ACTIONS(827),
    [anon_sym_LT] = ACTIONS(827),
    [anon_sym_GT] = ACTIONS(827),
    [anon_sym_GT_GT] = ACTIONS(827),
    [anon_sym_AMP_GT] = ACTIONS(827),
    [anon_sym_AMP_GT_GT] = ACTIONS(827),
    [anon_sym_LT_AMP] = ACTIONS(827),
    [anon_sym_GT_AMP] = ACTIONS(827),
    [anon_sym_LT_LT] = ACTIONS(827),
    [anon_sym_LT_LT_DASH] = ACTIONS(827),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(827),
    [anon_sym_LF] = ACTIONS(827),
    [anon_sym_AMP] = ACTIONS(827),
  },
  [240] = {
    [sym_special_variable_name] = STATE(328),
    [anon_sym_DOLLAR] = ACTIONS(829),
    [sym_comment] = ACTIONS(77),
    [sym_simple_variable_name] = ACTIONS(831),
    [anon_sym_STAR] = ACTIONS(829),
    [anon_sym_AT] = ACTIONS(829),
    [anon_sym_POUND] = ACTIONS(833),
    [anon_sym_QMARK] = ACTIONS(829),
    [anon_sym_DASH] = ACTIONS(829),
    [anon_sym_BANG] = ACTIONS(829),
    [anon_sym_0] = ACTIONS(833),
    [anon_sym__] = ACTIONS(833),
  },
  [241] = {
    [sym_special_variable_name] = STATE(330),
    [anon_sym_DOLLAR] = ACTIONS(273),
    [sym_leading_word] = ACTIONS(835),
    [sym_comment] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(273),
    [anon_sym_AT] = ACTIONS(273),
    [anon_sym_POUND] = ACTIONS(273),
    [anon_sym_QMARK] = ACTIONS(273),
    [anon_sym_DASH] = ACTIONS(273),
    [anon_sym_BANG] = ACTIONS(273),
    [anon_sym_0] = ACTIONS(273),
    [anon_sym__] = ACTIONS(273),
  },
  [242] = {
    [sym_simple_expansion] = STATE(331),
    [sym_expansion] = STATE(331),
    [sym__heredoc_middle] = ACTIONS(837),
    [sym__heredoc_end] = ACTIONS(839),
    [anon_sym_DOLLAR] = ACTIONS(583),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(585),
    [sym_comment] = ACTIONS(119),
  },
  [243] = {
    [anon_sym_DQUOTE] = ACTIONS(755),
    [sym__quoted_chars] = ACTIONS(755),
    [anon_sym_DOLLAR] = ACTIONS(755),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(755),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(755),
    [anon_sym_BQUOTE] = ACTIONS(771),
    [sym_comment] = ACTIONS(77),
  },
  [244] = {
    [sym_string] = STATE(333),
    [sym_simple_expansion] = STATE(333),
    [sym_expansion] = STATE(333),
    [sym_command_substitution] = STATE(333),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_raw_string] = ACTIONS(841),
    [anon_sym_DOLLAR] = ACTIONS(749),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(153),
    [anon_sym_BQUOTE] = ACTIONS(155),
    [sym_word] = ACTIONS(843),
    [sym_comment] = ACTIONS(119),
  },
  [245] = {
    [anon_sym_DQUOTE] = ACTIONS(761),
    [sym__quoted_chars] = ACTIONS(761),
    [anon_sym_DOLLAR] = ACTIONS(761),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(761),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(761),
    [anon_sym_BQUOTE] = ACTIONS(779),
    [sym_comment] = ACTIONS(77),
  },
  [246] = {
    [sym_string] = STATE(334),
    [sym_simple_expansion] = STATE(334),
    [sym_expansion] = STATE(334),
    [sym_command_substitution] = STATE(334),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_raw_string] = ACTIONS(845),
    [anon_sym_DOLLAR] = ACTIONS(749),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(153),
    [anon_sym_BQUOTE] = ACTIONS(155),
    [sym_word] = ACTIONS(847),
    [sym_comment] = ACTIONS(119),
  },
  [247] = {
    [anon_sym_DQUOTE] = ACTIONS(673),
    [sym__quoted_chars] = ACTIONS(673),
    [anon_sym_DOLLAR] = ACTIONS(673),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(673),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(673),
    [anon_sym_BQUOTE] = ACTIONS(785),
    [sym_comment] = ACTIONS(77),
  },
  [248] = {
    [sym_string] = STATE(335),
    [sym_simple_expansion] = STATE(335),
    [sym_expansion] = STATE(335),
    [sym_command_substitution] = STATE(335),
    [anon_sym_DQUOTE] = ACTIONS(623),
    [sym_raw_string] = ACTIONS(849),
    [anon_sym_DOLLAR] = ACTIONS(627),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(629),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(631),
    [anon_sym_BQUOTE] = ACTIONS(633),
    [sym_word] = ACTIONS(851),
    [sym_comment] = ACTIONS(119),
  },
  [249] = {
    [sym_simple_expansion] = STATE(54),
    [sym_expansion] = STATE(54),
    [sym_command_substitution] = STATE(54),
    [aux_sym_string_repeat1] = STATE(337),
    [anon_sym_DQUOTE] = ACTIONS(853),
    [sym__quoted_chars] = ACTIONS(171),
    [anon_sym_DOLLAR] = ACTIONS(173),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(175),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [sym_comment] = ACTIONS(77),
  },
  [250] = {
    [sym_file_descriptor] = ACTIONS(287),
    [anon_sym_RPAREN] = ACTIONS(287),
    [anon_sym_DQUOTE] = ACTIONS(287),
    [sym_raw_string] = ACTIONS(285),
    [anon_sym_DOLLAR] = ACTIONS(285),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(287),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(287),
    [anon_sym_BQUOTE] = ACTIONS(287),
    [anon_sym_LT] = ACTIONS(285),
    [anon_sym_GT] = ACTIONS(285),
    [anon_sym_GT_GT] = ACTIONS(287),
    [anon_sym_AMP_GT] = ACTIONS(285),
    [anon_sym_AMP_GT_GT] = ACTIONS(287),
    [anon_sym_LT_AMP] = ACTIONS(287),
    [anon_sym_GT_AMP] = ACTIONS(287),
    [anon_sym_LT_LT] = ACTIONS(285),
    [anon_sym_LT_LT_DASH] = ACTIONS(287),
    [sym_word] = ACTIONS(289),
    [sym_comment] = ACTIONS(119),
  },
  [251] = {
    [sym_special_variable_name] = STATE(340),
    [anon_sym_DOLLAR] = ACTIONS(855),
    [sym_comment] = ACTIONS(77),
    [sym_simple_variable_name] = ACTIONS(857),
    [anon_sym_STAR] = ACTIONS(855),
    [anon_sym_AT] = ACTIONS(855),
    [anon_sym_POUND] = ACTIONS(859),
    [anon_sym_QMARK] = ACTIONS(855),
    [anon_sym_DASH] = ACTIONS(855),
    [anon_sym_BANG] = ACTIONS(855),
    [anon_sym_0] = ACTIONS(859),
    [anon_sym__] = ACTIONS(859),
  },
  [252] = {
    [sym_special_variable_name] = STATE(342),
    [anon_sym_DOLLAR] = ACTIONS(273),
    [sym_leading_word] = ACTIONS(861),
    [sym_comment] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(273),
    [anon_sym_AT] = ACTIONS(273),
    [anon_sym_POUND] = ACTIONS(273),
    [anon_sym_QMARK] = ACTIONS(273),
    [anon_sym_DASH] = ACTIONS(273),
    [anon_sym_BANG] = ACTIONS(273),
    [anon_sym_0] = ACTIONS(273),
    [anon_sym__] = ACTIONS(273),
  },
  [253] = {
    [sym_command] = STATE(343),
    [sym_environment_variable_assignment] = STATE(21),
    [sym_string] = STATE(60),
    [sym_command_substitution] = STATE(60),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(66),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(181),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_raw_string] = ACTIONS(185),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(187),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(191),
    [sym_comment] = ACTIONS(119),
  },
  [254] = {
    [sym_command] = STATE(344),
    [sym_environment_variable_assignment] = STATE(21),
    [sym_string] = STATE(67),
    [sym_command_substitution] = STATE(67),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(70),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_raw_string] = ACTIONS(195),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(187),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(197),
    [sym_comment] = ACTIONS(119),
  },
  [255] = {
    [sym_string] = STATE(345),
    [sym_simple_expansion] = STATE(345),
    [sym_expansion] = STATE(345),
    [sym_command_substitution] = STATE(345),
    [sym_file_redirect] = STATE(151),
    [sym_heredoc_redirect] = STATE(151),
    [aux_sym_command_repeat2] = STATE(346),
    [sym_file_descriptor] = ACTIONS(367),
    [anon_sym_RPAREN] = ACTIONS(863),
    [anon_sym_DQUOTE] = ACTIONS(623),
    [sym_raw_string] = ACTIONS(865),
    [anon_sym_DOLLAR] = ACTIONS(627),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(629),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(631),
    [anon_sym_BQUOTE] = ACTIONS(633),
    [anon_sym_LT] = ACTIONS(635),
    [anon_sym_GT] = ACTIONS(635),
    [anon_sym_GT_GT] = ACTIONS(637),
    [anon_sym_AMP_GT] = ACTIONS(635),
    [anon_sym_AMP_GT_GT] = ACTIONS(637),
    [anon_sym_LT_AMP] = ACTIONS(637),
    [anon_sym_GT_AMP] = ACTIONS(637),
    [anon_sym_LT_LT] = ACTIONS(639),
    [anon_sym_LT_LT_DASH] = ACTIONS(641),
    [sym_word] = ACTIONS(867),
    [sym_comment] = ACTIONS(119),
  },
  [256] = {
    [sym_file_redirect] = STATE(261),
    [sym_heredoc_redirect] = STATE(261),
    [sym_file_descriptor] = ACTIONS(367),
    [anon_sym_RPAREN] = ACTIONS(869),
    [anon_sym_BQUOTE] = ACTIONS(869),
    [anon_sym_LT] = ACTIONS(635),
    [anon_sym_GT] = ACTIONS(635),
    [anon_sym_GT_GT] = ACTIONS(637),
    [anon_sym_AMP_GT] = ACTIONS(635),
    [anon_sym_AMP_GT_GT] = ACTIONS(637),
    [anon_sym_LT_AMP] = ACTIONS(637),
    [anon_sym_GT_AMP] = ACTIONS(637),
    [anon_sym_LT_LT] = ACTIONS(639),
    [anon_sym_LT_LT_DASH] = ACTIONS(641),
    [sym_comment] = ACTIONS(119),
  },
  [257] = {
    [sym_file_descriptor] = ACTIONS(401),
    [anon_sym_RPAREN] = ACTIONS(401),
    [anon_sym_BQUOTE] = ACTIONS(401),
    [anon_sym_LT] = ACTIONS(403),
    [anon_sym_GT] = ACTIONS(403),
    [anon_sym_GT_GT] = ACTIONS(401),
    [anon_sym_AMP_GT] = ACTIONS(403),
    [anon_sym_AMP_GT_GT] = ACTIONS(401),
    [anon_sym_LT_AMP] = ACTIONS(401),
    [anon_sym_GT_AMP] = ACTIONS(401),
    [anon_sym_LT_LT] = ACTIONS(403),
    [anon_sym_LT_LT_DASH] = ACTIONS(401),
    [sym_comment] = ACTIONS(119),
  },
  [258] = {
    [sym_file_descriptor] = ACTIONS(575),
    [anon_sym_RPAREN] = ACTIONS(575),
    [anon_sym_BQUOTE] = ACTIONS(575),
    [anon_sym_LT] = ACTIONS(871),
    [anon_sym_GT] = ACTIONS(871),
    [anon_sym_GT_GT] = ACTIONS(575),
    [anon_sym_AMP_GT] = ACTIONS(871),
    [anon_sym_AMP_GT_GT] = ACTIONS(575),
    [anon_sym_LT_AMP] = ACTIONS(575),
    [anon_sym_GT_AMP] = ACTIONS(575),
    [anon_sym_LT_LT] = ACTIONS(871),
    [anon_sym_LT_LT_DASH] = ACTIONS(575),
    [sym_comment] = ACTIONS(119),
  },
  [259] = {
    [sym_simple_expansion] = STATE(238),
    [sym_expansion] = STATE(238),
    [aux_sym_heredoc_repeat1] = STATE(348),
    [sym__heredoc_middle] = ACTIONS(579),
    [sym__heredoc_end] = ACTIONS(873),
    [anon_sym_DOLLAR] = ACTIONS(583),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(585),
    [sym_comment] = ACTIONS(119),
  },
  [260] = {
    [sym_file_descriptor] = ACTIONS(587),
    [anon_sym_RPAREN] = ACTIONS(587),
    [anon_sym_BQUOTE] = ACTIONS(587),
    [anon_sym_LT] = ACTIONS(875),
    [anon_sym_GT] = ACTIONS(875),
    [anon_sym_GT_GT] = ACTIONS(587),
    [anon_sym_AMP_GT] = ACTIONS(875),
    [anon_sym_AMP_GT_GT] = ACTIONS(587),
    [anon_sym_LT_AMP] = ACTIONS(587),
    [anon_sym_GT_AMP] = ACTIONS(587),
    [anon_sym_LT_LT] = ACTIONS(875),
    [anon_sym_LT_LT_DASH] = ACTIONS(587),
    [sym_comment] = ACTIONS(119),
  },
  [261] = {
    [sym_file_descriptor] = ACTIONS(591),
    [anon_sym_RPAREN] = ACTIONS(591),
    [anon_sym_BQUOTE] = ACTIONS(591),
    [anon_sym_LT] = ACTIONS(877),
    [anon_sym_GT] = ACTIONS(877),
    [anon_sym_GT_GT] = ACTIONS(591),
    [anon_sym_AMP_GT] = ACTIONS(877),
    [anon_sym_AMP_GT_GT] = ACTIONS(591),
    [anon_sym_LT_AMP] = ACTIONS(591),
    [anon_sym_GT_AMP] = ACTIONS(591),
    [anon_sym_LT_LT] = ACTIONS(877),
    [anon_sym_LT_LT_DASH] = ACTIONS(591),
    [sym_comment] = ACTIONS(119),
  },
  [262] = {
    [sym_file_descriptor] = ACTIONS(609),
    [anon_sym_RPAREN] = ACTIONS(611),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(611),
    [anon_sym_BQUOTE] = ACTIONS(611),
    [anon_sym_LT] = ACTIONS(611),
    [anon_sym_GT] = ACTIONS(611),
    [anon_sym_GT_GT] = ACTIONS(611),
    [anon_sym_AMP_GT] = ACTIONS(611),
    [anon_sym_AMP_GT_GT] = ACTIONS(611),
    [anon_sym_LT_AMP] = ACTIONS(611),
    [anon_sym_GT_AMP] = ACTIONS(611),
    [anon_sym_LT_LT] = ACTIONS(611),
    [anon_sym_LT_LT_DASH] = ACTIONS(611),
    [sym_comment] = ACTIONS(77),
  },
  [263] = {
    [sym_file_descriptor] = ACTIONS(671),
    [anon_sym_RPAREN] = ACTIONS(673),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(673),
    [anon_sym_BQUOTE] = ACTIONS(673),
    [anon_sym_LT] = ACTIONS(673),
    [anon_sym_GT] = ACTIONS(673),
    [anon_sym_GT_GT] = ACTIONS(673),
    [anon_sym_AMP_GT] = ACTIONS(673),
    [anon_sym_AMP_GT_GT] = ACTIONS(673),
    [anon_sym_LT_AMP] = ACTIONS(673),
    [anon_sym_GT_AMP] = ACTIONS(673),
    [anon_sym_LT_LT] = ACTIONS(673),
    [anon_sym_LT_LT_DASH] = ACTIONS(673),
    [sym_comment] = ACTIONS(77),
  },
  [264] = {
    [sym_string] = STATE(345),
    [sym_simple_expansion] = STATE(345),
    [sym_expansion] = STATE(345),
    [sym_command_substitution] = STATE(345),
    [sym_file_redirect] = STATE(151),
    [sym_heredoc_redirect] = STATE(151),
    [aux_sym_command_repeat2] = STATE(349),
    [sym_file_descriptor] = ACTIONS(367),
    [anon_sym_RPAREN] = ACTIONS(879),
    [anon_sym_DQUOTE] = ACTIONS(623),
    [sym_raw_string] = ACTIONS(865),
    [anon_sym_DOLLAR] = ACTIONS(627),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(629),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(631),
    [anon_sym_BQUOTE] = ACTIONS(633),
    [anon_sym_LT] = ACTIONS(635),
    [anon_sym_GT] = ACTIONS(635),
    [anon_sym_GT_GT] = ACTIONS(637),
    [anon_sym_AMP_GT] = ACTIONS(635),
    [anon_sym_AMP_GT_GT] = ACTIONS(637),
    [anon_sym_LT_AMP] = ACTIONS(637),
    [anon_sym_GT_AMP] = ACTIONS(637),
    [anon_sym_LT_LT] = ACTIONS(639),
    [anon_sym_LT_LT_DASH] = ACTIONS(641),
    [sym_word] = ACTIONS(867),
    [sym_comment] = ACTIONS(119),
  },
  [265] = {
    [sym_file_redirect] = STATE(261),
    [sym_heredoc_redirect] = STATE(261),
    [sym_file_descriptor] = ACTIONS(367),
    [anon_sym_RPAREN] = ACTIONS(881),
    [anon_sym_BQUOTE] = ACTIONS(881),
    [anon_sym_LT] = ACTIONS(635),
    [anon_sym_GT] = ACTIONS(635),
    [anon_sym_GT_GT] = ACTIONS(637),
    [anon_sym_AMP_GT] = ACTIONS(635),
    [anon_sym_AMP_GT_GT] = ACTIONS(637),
    [anon_sym_LT_AMP] = ACTIONS(637),
    [anon_sym_GT_AMP] = ACTIONS(637),
    [anon_sym_LT_LT] = ACTIONS(639),
    [anon_sym_LT_LT_DASH] = ACTIONS(641),
    [sym_comment] = ACTIONS(119),
  },
  [266] = {
    [sym_file_descriptor] = ACTIONS(705),
    [anon_sym_COLON] = ACTIONS(705),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [sym_raw_string] = ACTIONS(883),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(705),
    [anon_sym_BQUOTE] = ACTIONS(705),
    [anon_sym_LT] = ACTIONS(883),
    [anon_sym_GT] = ACTIONS(883),
    [anon_sym_GT_GT] = ACTIONS(883),
    [anon_sym_AMP_GT] = ACTIONS(883),
    [anon_sym_AMP_GT_GT] = ACTIONS(883),
    [anon_sym_LT_AMP] = ACTIONS(883),
    [anon_sym_GT_AMP] = ACTIONS(883),
    [sym_leading_word] = ACTIONS(707),
    [sym_comment] = ACTIONS(119),
  },
  [267] = {
    [sym_string] = STATE(250),
    [sym_simple_expansion] = STATE(250),
    [sym_expansion] = STATE(250),
    [sym_command_substitution] = STATE(250),
    [sym_file_redirect] = STATE(151),
    [sym_heredoc_redirect] = STATE(151),
    [aux_sym_bracket_command_repeat1] = STATE(350),
    [aux_sym_command_repeat2] = STATE(346),
    [sym_file_descriptor] = ACTIONS(367),
    [anon_sym_RPAREN] = ACTIONS(863),
    [anon_sym_DQUOTE] = ACTIONS(623),
    [sym_raw_string] = ACTIONS(625),
    [anon_sym_DOLLAR] = ACTIONS(627),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(629),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(631),
    [anon_sym_BQUOTE] = ACTIONS(633),
    [anon_sym_LT] = ACTIONS(635),
    [anon_sym_GT] = ACTIONS(635),
    [anon_sym_GT_GT] = ACTIONS(637),
    [anon_sym_AMP_GT] = ACTIONS(635),
    [anon_sym_AMP_GT_GT] = ACTIONS(637),
    [anon_sym_LT_AMP] = ACTIONS(637),
    [anon_sym_GT_AMP] = ACTIONS(637),
    [anon_sym_LT_LT] = ACTIONS(639),
    [anon_sym_LT_LT_DASH] = ACTIONS(641),
    [sym_word] = ACTIONS(643),
    [sym_comment] = ACTIONS(119),
  },
  [268] = {
    [sym_string] = STATE(250),
    [sym_simple_expansion] = STATE(250),
    [sym_expansion] = STATE(250),
    [sym_command_substitution] = STATE(250),
    [sym_file_redirect] = STATE(151),
    [sym_heredoc_redirect] = STATE(151),
    [aux_sym_bracket_command_repeat1] = STATE(351),
    [aux_sym_command_repeat2] = STATE(352),
    [sym_file_descriptor] = ACTIONS(367),
    [anon_sym_RPAREN] = ACTIONS(885),
    [anon_sym_DQUOTE] = ACTIONS(623),
    [sym_raw_string] = ACTIONS(625),
    [anon_sym_DOLLAR] = ACTIONS(627),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(629),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(631),
    [anon_sym_BQUOTE] = ACTIONS(633),
    [anon_sym_LT] = ACTIONS(635),
    [anon_sym_GT] = ACTIONS(635),
    [anon_sym_GT_GT] = ACTIONS(637),
    [anon_sym_AMP_GT] = ACTIONS(635),
    [anon_sym_AMP_GT_GT] = ACTIONS(637),
    [anon_sym_LT_AMP] = ACTIONS(637),
    [anon_sym_GT_AMP] = ACTIONS(637),
    [anon_sym_LT_LT] = ACTIONS(639),
    [anon_sym_LT_LT_DASH] = ACTIONS(641),
    [sym_word] = ACTIONS(643),
    [sym_comment] = ACTIONS(119),
  },
  [269] = {
    [sym_file_redirect] = STATE(261),
    [sym_heredoc_redirect] = STATE(261),
    [sym_file_descriptor] = ACTIONS(367),
    [anon_sym_RPAREN] = ACTIONS(887),
    [anon_sym_BQUOTE] = ACTIONS(887),
    [anon_sym_LT] = ACTIONS(635),
    [anon_sym_GT] = ACTIONS(635),
    [anon_sym_GT_GT] = ACTIONS(637),
    [anon_sym_AMP_GT] = ACTIONS(635),
    [anon_sym_AMP_GT_GT] = ACTIONS(637),
    [anon_sym_LT_AMP] = ACTIONS(637),
    [anon_sym_GT_AMP] = ACTIONS(637),
    [anon_sym_LT_LT] = ACTIONS(639),
    [anon_sym_LT_LT_DASH] = ACTIONS(641),
    [sym_comment] = ACTIONS(119),
  },
  [270] = {
    [sym_string] = STATE(345),
    [sym_simple_expansion] = STATE(345),
    [sym_expansion] = STATE(345),
    [sym_command_substitution] = STATE(345),
    [sym_file_redirect] = STATE(151),
    [sym_heredoc_redirect] = STATE(151),
    [aux_sym_command_repeat2] = STATE(346),
    [sym_file_descriptor] = ACTIONS(367),
    [anon_sym_DQUOTE] = ACTIONS(623),
    [sym_raw_string] = ACTIONS(865),
    [anon_sym_DOLLAR] = ACTIONS(627),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(629),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(631),
    [anon_sym_BQUOTE] = ACTIONS(863),
    [anon_sym_LT] = ACTIONS(635),
    [anon_sym_GT] = ACTIONS(635),
    [anon_sym_GT_GT] = ACTIONS(637),
    [anon_sym_AMP_GT] = ACTIONS(635),
    [anon_sym_AMP_GT_GT] = ACTIONS(637),
    [anon_sym_LT_AMP] = ACTIONS(637),
    [anon_sym_GT_AMP] = ACTIONS(637),
    [anon_sym_LT_LT] = ACTIONS(639),
    [anon_sym_LT_LT_DASH] = ACTIONS(641),
    [sym_word] = ACTIONS(867),
    [sym_comment] = ACTIONS(119),
  },
  [271] = {
    [sym_string] = STATE(345),
    [sym_simple_expansion] = STATE(345),
    [sym_expansion] = STATE(345),
    [sym_command_substitution] = STATE(345),
    [sym_file_redirect] = STATE(151),
    [sym_heredoc_redirect] = STATE(151),
    [aux_sym_command_repeat2] = STATE(349),
    [sym_file_descriptor] = ACTIONS(367),
    [anon_sym_DQUOTE] = ACTIONS(623),
    [sym_raw_string] = ACTIONS(865),
    [anon_sym_DOLLAR] = ACTIONS(627),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(629),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(631),
    [anon_sym_BQUOTE] = ACTIONS(879),
    [anon_sym_LT] = ACTIONS(635),
    [anon_sym_GT] = ACTIONS(635),
    [anon_sym_GT_GT] = ACTIONS(637),
    [anon_sym_AMP_GT] = ACTIONS(635),
    [anon_sym_AMP_GT_GT] = ACTIONS(637),
    [anon_sym_LT_AMP] = ACTIONS(637),
    [anon_sym_GT_AMP] = ACTIONS(637),
    [anon_sym_LT_LT] = ACTIONS(639),
    [anon_sym_LT_LT_DASH] = ACTIONS(641),
    [sym_word] = ACTIONS(867),
    [sym_comment] = ACTIONS(119),
  },
  [272] = {
    [sym_string] = STATE(250),
    [sym_simple_expansion] = STATE(250),
    [sym_expansion] = STATE(250),
    [sym_command_substitution] = STATE(250),
    [sym_file_redirect] = STATE(151),
    [sym_heredoc_redirect] = STATE(151),
    [aux_sym_bracket_command_repeat1] = STATE(353),
    [aux_sym_command_repeat2] = STATE(346),
    [sym_file_descriptor] = ACTIONS(367),
    [anon_sym_DQUOTE] = ACTIONS(623),
    [sym_raw_string] = ACTIONS(625),
    [anon_sym_DOLLAR] = ACTIONS(627),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(629),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(631),
    [anon_sym_BQUOTE] = ACTIONS(863),
    [anon_sym_LT] = ACTIONS(635),
    [anon_sym_GT] = ACTIONS(635),
    [anon_sym_GT_GT] = ACTIONS(637),
    [anon_sym_AMP_GT] = ACTIONS(635),
    [anon_sym_AMP_GT_GT] = ACTIONS(637),
    [anon_sym_LT_AMP] = ACTIONS(637),
    [anon_sym_GT_AMP] = ACTIONS(637),
    [anon_sym_LT_LT] = ACTIONS(639),
    [anon_sym_LT_LT_DASH] = ACTIONS(641),
    [sym_word] = ACTIONS(643),
    [sym_comment] = ACTIONS(119),
  },
  [273] = {
    [sym_string] = STATE(250),
    [sym_simple_expansion] = STATE(250),
    [sym_expansion] = STATE(250),
    [sym_command_substitution] = STATE(250),
    [sym_file_redirect] = STATE(151),
    [sym_heredoc_redirect] = STATE(151),
    [aux_sym_bracket_command_repeat1] = STATE(354),
    [aux_sym_command_repeat2] = STATE(352),
    [sym_file_descriptor] = ACTIONS(367),
    [anon_sym_DQUOTE] = ACTIONS(623),
    [sym_raw_string] = ACTIONS(625),
    [anon_sym_DOLLAR] = ACTIONS(627),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(629),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(631),
    [anon_sym_BQUOTE] = ACTIONS(885),
    [anon_sym_LT] = ACTIONS(635),
    [anon_sym_GT] = ACTIONS(635),
    [anon_sym_GT_GT] = ACTIONS(637),
    [anon_sym_AMP_GT] = ACTIONS(635),
    [anon_sym_AMP_GT_GT] = ACTIONS(637),
    [anon_sym_LT_AMP] = ACTIONS(637),
    [anon_sym_GT_AMP] = ACTIONS(637),
    [anon_sym_LT_LT] = ACTIONS(639),
    [anon_sym_LT_LT_DASH] = ACTIONS(641),
    [sym_word] = ACTIONS(643),
    [sym_comment] = ACTIONS(119),
  },
  [274] = {
    [sym_file_descriptor] = ACTIONS(609),
    [anon_sym_COLON] = ACTIONS(609),
    [anon_sym_DQUOTE] = ACTIONS(609),
    [sym_raw_string] = ACTIONS(767),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(609),
    [anon_sym_BQUOTE] = ACTIONS(609),
    [anon_sym_LT] = ACTIONS(767),
    [anon_sym_GT] = ACTIONS(767),
    [anon_sym_GT_GT] = ACTIONS(767),
    [anon_sym_AMP_GT] = ACTIONS(767),
    [anon_sym_AMP_GT_GT] = ACTIONS(767),
    [anon_sym_LT_AMP] = ACTIONS(767),
    [anon_sym_GT_AMP] = ACTIONS(767),
    [sym_leading_word] = ACTIONS(611),
    [sym_comment] = ACTIONS(119),
  },
  [275] = {
    [sym_file_descriptor] = ACTIONS(769),
    [anon_sym_COLON] = ACTIONS(769),
    [anon_sym_DQUOTE] = ACTIONS(769),
    [sym_raw_string] = ACTIONS(771),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(769),
    [anon_sym_BQUOTE] = ACTIONS(769),
    [anon_sym_LT] = ACTIONS(771),
    [anon_sym_GT] = ACTIONS(771),
    [anon_sym_GT_GT] = ACTIONS(771),
    [anon_sym_AMP_GT] = ACTIONS(771),
    [anon_sym_AMP_GT_GT] = ACTIONS(771),
    [anon_sym_LT_AMP] = ACTIONS(771),
    [anon_sym_GT_AMP] = ACTIONS(771),
    [sym_leading_word] = ACTIONS(755),
    [sym_comment] = ACTIONS(119),
  },
  [276] = {
    [sym_string] = STATE(355),
    [sym_simple_expansion] = STATE(355),
    [sym_expansion] = STATE(355),
    [sym_command_substitution] = STATE(355),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_raw_string] = ACTIONS(889),
    [anon_sym_DOLLAR] = ACTIONS(749),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(153),
    [anon_sym_BQUOTE] = ACTIONS(155),
    [sym_word] = ACTIONS(891),
    [sym_comment] = ACTIONS(119),
  },
  [277] = {
    [sym_file_descriptor] = ACTIONS(777),
    [anon_sym_COLON] = ACTIONS(777),
    [anon_sym_DQUOTE] = ACTIONS(777),
    [sym_raw_string] = ACTIONS(779),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(777),
    [anon_sym_BQUOTE] = ACTIONS(777),
    [anon_sym_LT] = ACTIONS(779),
    [anon_sym_GT] = ACTIONS(779),
    [anon_sym_GT_GT] = ACTIONS(779),
    [anon_sym_AMP_GT] = ACTIONS(779),
    [anon_sym_AMP_GT_GT] = ACTIONS(779),
    [anon_sym_LT_AMP] = ACTIONS(779),
    [anon_sym_GT_AMP] = ACTIONS(779),
    [sym_leading_word] = ACTIONS(761),
    [sym_comment] = ACTIONS(119),
  },
  [278] = {
    [sym_string] = STATE(356),
    [sym_simple_expansion] = STATE(356),
    [sym_expansion] = STATE(356),
    [sym_command_substitution] = STATE(356),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_raw_string] = ACTIONS(893),
    [anon_sym_DOLLAR] = ACTIONS(749),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(153),
    [anon_sym_BQUOTE] = ACTIONS(155),
    [sym_word] = ACTIONS(895),
    [sym_comment] = ACTIONS(119),
  },
  [279] = {
    [sym_file_descriptor] = ACTIONS(671),
    [anon_sym_COLON] = ACTIONS(671),
    [anon_sym_DQUOTE] = ACTIONS(671),
    [sym_raw_string] = ACTIONS(785),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(671),
    [anon_sym_BQUOTE] = ACTIONS(671),
    [anon_sym_LT] = ACTIONS(785),
    [anon_sym_GT] = ACTIONS(785),
    [anon_sym_GT_GT] = ACTIONS(785),
    [anon_sym_AMP_GT] = ACTIONS(785),
    [anon_sym_AMP_GT_GT] = ACTIONS(785),
    [anon_sym_LT_AMP] = ACTIONS(785),
    [anon_sym_GT_AMP] = ACTIONS(785),
    [sym_leading_word] = ACTIONS(673),
    [sym_comment] = ACTIONS(119),
  },
  [280] = {
    [sym__terminated_statement] = STATE(18),
    [sym_for_statement] = STATE(19),
    [sym_while_statement] = STATE(19),
    [sym_if_statement] = STATE(19),
    [sym_case_statement] = STATE(19),
    [sym_function_definition] = STATE(19),
    [sym_bracket_command] = STATE(19),
    [sym_command] = STATE(19),
    [sym_pipeline] = STATE(19),
    [sym_list] = STATE(19),
    [sym_subshell] = STATE(19),
    [sym_environment_variable_assignment] = STATE(20),
    [sym_string] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(21),
    [aux_sym_program_repeat1] = STATE(358),
    [aux_sym_command_repeat1] = STATE(23),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_case] = ACTIONS(95),
    [anon_sym_function] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(897),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(103),
    [anon_sym_COLON] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_raw_string] = ACTIONS(109),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(117),
    [sym_comment] = ACTIONS(119),
  },
  [281] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(899),
    [anon_sym_PIPE] = ACTIONS(899),
    [anon_sym_PIPE_AMP] = ACTIONS(899),
    [anon_sym_AMP_AMP] = ACTIONS(899),
    [anon_sym_PIPE_PIPE] = ACTIONS(899),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(899),
    [anon_sym_LF] = ACTIONS(899),
    [anon_sym_AMP] = ACTIONS(899),
  },
  [282] = {
    [sym_file_redirect] = STATE(137),
    [sym_heredoc_redirect] = STATE(137),
    [sym_file_descriptor] = ACTIONS(159),
    [anon_sym_SEMI_SEMI] = ACTIONS(901),
    [anon_sym_PIPE] = ACTIONS(901),
    [anon_sym_PIPE_AMP] = ACTIONS(901),
    [anon_sym_AMP_AMP] = ACTIONS(901),
    [anon_sym_PIPE_PIPE] = ACTIONS(901),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_GT_GT] = ACTIONS(165),
    [anon_sym_AMP_GT] = ACTIONS(165),
    [anon_sym_AMP_GT_GT] = ACTIONS(165),
    [anon_sym_LT_AMP] = ACTIONS(165),
    [anon_sym_GT_AMP] = ACTIONS(165),
    [anon_sym_LT_LT] = ACTIONS(167),
    [anon_sym_LT_LT_DASH] = ACTIONS(167),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(901),
    [anon_sym_LF] = ACTIONS(901),
    [anon_sym_AMP] = ACTIONS(901),
  },
  [283] = {
    [sym_file_descriptor] = ACTIONS(347),
    [anon_sym_SEMI_SEMI] = ACTIONS(349),
    [anon_sym_COLON] = ACTIONS(349),
    [anon_sym_PIPE] = ACTIONS(349),
    [anon_sym_PIPE_AMP] = ACTIONS(349),
    [anon_sym_AMP_AMP] = ACTIONS(349),
    [anon_sym_PIPE_PIPE] = ACTIONS(349),
    [anon_sym_DQUOTE] = ACTIONS(349),
    [sym_raw_string] = ACTIONS(349),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(349),
    [anon_sym_BQUOTE] = ACTIONS(349),
    [anon_sym_LT] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(349),
    [anon_sym_GT_GT] = ACTIONS(349),
    [anon_sym_AMP_GT] = ACTIONS(349),
    [anon_sym_AMP_GT_GT] = ACTIONS(349),
    [anon_sym_LT_AMP] = ACTIONS(349),
    [anon_sym_GT_AMP] = ACTIONS(349),
    [sym_leading_word] = ACTIONS(349),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(349),
    [anon_sym_LF] = ACTIONS(349),
    [anon_sym_AMP] = ACTIONS(349),
  },
  [284] = {
    [sym_simple_expansion] = STATE(146),
    [sym_expansion] = STATE(146),
    [sym_command_substitution] = STATE(146),
    [anon_sym_DQUOTE] = ACTIONS(903),
    [sym__quoted_chars] = ACTIONS(365),
    [anon_sym_DOLLAR] = ACTIONS(173),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(175),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [sym_comment] = ACTIONS(77),
  },
  [285] = {
    [sym_file_descriptor] = ACTIONS(489),
    [anon_sym_SEMI_SEMI] = ACTIONS(483),
    [anon_sym_COLON] = ACTIONS(483),
    [anon_sym_PIPE] = ACTIONS(483),
    [anon_sym_PIPE_AMP] = ACTIONS(483),
    [anon_sym_AMP_AMP] = ACTIONS(483),
    [anon_sym_PIPE_PIPE] = ACTIONS(483),
    [anon_sym_DQUOTE] = ACTIONS(483),
    [sym_raw_string] = ACTIONS(483),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(483),
    [anon_sym_BQUOTE] = ACTIONS(483),
    [anon_sym_LT] = ACTIONS(483),
    [anon_sym_GT] = ACTIONS(483),
    [anon_sym_GT_GT] = ACTIONS(483),
    [anon_sym_AMP_GT] = ACTIONS(483),
    [anon_sym_AMP_GT_GT] = ACTIONS(483),
    [anon_sym_LT_AMP] = ACTIONS(483),
    [anon_sym_GT_AMP] = ACTIONS(483),
    [sym_leading_word] = ACTIONS(483),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(483),
    [anon_sym_LF] = ACTIONS(483),
    [anon_sym_AMP] = ACTIONS(483),
  },
  [286] = {
    [sym_file_descriptor] = ACTIONS(515),
    [anon_sym_SEMI_SEMI] = ACTIONS(485),
    [anon_sym_COLON] = ACTIONS(485),
    [anon_sym_PIPE] = ACTIONS(485),
    [anon_sym_PIPE_AMP] = ACTIONS(485),
    [anon_sym_AMP_AMP] = ACTIONS(485),
    [anon_sym_PIPE_PIPE] = ACTIONS(485),
    [anon_sym_DQUOTE] = ACTIONS(485),
    [sym_raw_string] = ACTIONS(485),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(485),
    [anon_sym_BQUOTE] = ACTIONS(485),
    [anon_sym_LT] = ACTIONS(485),
    [anon_sym_GT] = ACTIONS(485),
    [anon_sym_GT_GT] = ACTIONS(485),
    [anon_sym_AMP_GT] = ACTIONS(485),
    [anon_sym_AMP_GT_GT] = ACTIONS(485),
    [anon_sym_LT_AMP] = ACTIONS(485),
    [anon_sym_GT_AMP] = ACTIONS(485),
    [sym_leading_word] = ACTIONS(485),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(485),
    [anon_sym_LF] = ACTIONS(485),
    [anon_sym_AMP] = ACTIONS(485),
  },
  [287] = {
    [sym_file_descriptor] = ACTIONS(519),
    [anon_sym_SEMI_SEMI] = ACTIONS(487),
    [anon_sym_COLON] = ACTIONS(487),
    [anon_sym_PIPE] = ACTIONS(487),
    [anon_sym_PIPE_AMP] = ACTIONS(487),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [anon_sym_PIPE_PIPE] = ACTIONS(487),
    [anon_sym_DQUOTE] = ACTIONS(487),
    [sym_raw_string] = ACTIONS(487),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(487),
    [anon_sym_BQUOTE] = ACTIONS(487),
    [anon_sym_LT] = ACTIONS(487),
    [anon_sym_GT] = ACTIONS(487),
    [anon_sym_GT_GT] = ACTIONS(487),
    [anon_sym_AMP_GT] = ACTIONS(487),
    [anon_sym_AMP_GT_GT] = ACTIONS(487),
    [anon_sym_LT_AMP] = ACTIONS(487),
    [anon_sym_GT_AMP] = ACTIONS(487),
    [sym_leading_word] = ACTIONS(487),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_LF] = ACTIONS(487),
    [anon_sym_AMP] = ACTIONS(487),
  },
  [288] = {
    [anon_sym_RBRACE] = ACTIONS(905),
    [anon_sym_COLON] = ACTIONS(907),
    [anon_sym_EQ] = ACTIONS(909),
    [anon_sym_COLON_QMARK] = ACTIONS(909),
    [anon_sym_COLON_DASH] = ACTIONS(909),
    [sym_comment] = ACTIONS(119),
  },
  [289] = {
    [anon_sym_RBRACE] = ACTIONS(911),
    [anon_sym_COLON] = ACTIONS(913),
    [anon_sym_EQ] = ACTIONS(915),
    [anon_sym_COLON_QMARK] = ACTIONS(915),
    [anon_sym_COLON_DASH] = ACTIONS(915),
    [sym_comment] = ACTIONS(119),
  },
  [290] = {
    [anon_sym_RPAREN] = ACTIONS(917),
    [sym_comment] = ACTIONS(119),
  },
  [291] = {
    [anon_sym_BQUOTE] = ACTIONS(917),
    [sym_comment] = ACTIONS(119),
  },
  [292] = {
    [sym_string] = STATE(227),
    [sym_simple_expansion] = STATE(227),
    [sym_expansion] = STATE(227),
    [sym_command_substitution] = STATE(227),
    [sym_file_redirect] = STATE(51),
    [sym_heredoc_redirect] = STATE(51),
    [aux_sym_command_repeat2] = STATE(365),
    [sym_file_descriptor] = ACTIONS(159),
    [anon_sym_SEMI_SEMI] = ACTIONS(919),
    [anon_sym_PIPE] = ACTIONS(919),
    [anon_sym_PIPE_AMP] = ACTIONS(919),
    [anon_sym_AMP_AMP] = ACTIONS(919),
    [anon_sym_PIPE_PIPE] = ACTIONS(919),
    [anon_sym_DQUOTE] = ACTIONS(311),
    [sym_raw_string] = ACTIONS(561),
    [anon_sym_DOLLAR] = ACTIONS(315),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(317),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(319),
    [anon_sym_BQUOTE] = ACTIONS(321),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_GT_GT] = ACTIONS(165),
    [anon_sym_AMP_GT] = ACTIONS(165),
    [anon_sym_AMP_GT_GT] = ACTIONS(165),
    [anon_sym_LT_AMP] = ACTIONS(165),
    [anon_sym_GT_AMP] = ACTIONS(165),
    [anon_sym_LT_LT] = ACTIONS(167),
    [anon_sym_LT_LT_DASH] = ACTIONS(167),
    [sym_word] = ACTIONS(561),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(919),
    [anon_sym_LF] = ACTIONS(919),
    [anon_sym_AMP] = ACTIONS(919),
  },
  [293] = {
    [sym_string] = STATE(227),
    [sym_simple_expansion] = STATE(227),
    [sym_expansion] = STATE(227),
    [sym_command_substitution] = STATE(227),
    [sym_file_redirect] = STATE(51),
    [sym_heredoc_redirect] = STATE(51),
    [aux_sym_command_repeat2] = STATE(366),
    [sym_file_descriptor] = ACTIONS(159),
    [anon_sym_SEMI_SEMI] = ACTIONS(921),
    [anon_sym_PIPE] = ACTIONS(921),
    [anon_sym_PIPE_AMP] = ACTIONS(921),
    [anon_sym_AMP_AMP] = ACTIONS(921),
    [anon_sym_PIPE_PIPE] = ACTIONS(921),
    [anon_sym_DQUOTE] = ACTIONS(311),
    [sym_raw_string] = ACTIONS(561),
    [anon_sym_DOLLAR] = ACTIONS(315),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(317),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(319),
    [anon_sym_BQUOTE] = ACTIONS(321),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_GT_GT] = ACTIONS(165),
    [anon_sym_AMP_GT] = ACTIONS(165),
    [anon_sym_AMP_GT_GT] = ACTIONS(165),
    [anon_sym_LT_AMP] = ACTIONS(165),
    [anon_sym_GT_AMP] = ACTIONS(165),
    [anon_sym_LT_LT] = ACTIONS(167),
    [anon_sym_LT_LT_DASH] = ACTIONS(167),
    [sym_word] = ACTIONS(561),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(921),
    [anon_sym_LF] = ACTIONS(921),
    [anon_sym_AMP] = ACTIONS(921),
  },
  [294] = {
    [sym_file_redirect] = STATE(137),
    [sym_heredoc_redirect] = STATE(137),
    [sym_file_descriptor] = ACTIONS(159),
    [anon_sym_SEMI_SEMI] = ACTIONS(923),
    [anon_sym_PIPE] = ACTIONS(923),
    [anon_sym_PIPE_AMP] = ACTIONS(923),
    [anon_sym_AMP_AMP] = ACTIONS(923),
    [anon_sym_PIPE_PIPE] = ACTIONS(923),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_GT_GT] = ACTIONS(165),
    [anon_sym_AMP_GT] = ACTIONS(165),
    [anon_sym_AMP_GT_GT] = ACTIONS(165),
    [anon_sym_LT_AMP] = ACTIONS(165),
    [anon_sym_GT_AMP] = ACTIONS(165),
    [anon_sym_LT_LT] = ACTIONS(167),
    [anon_sym_LT_LT_DASH] = ACTIONS(167),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(923),
    [anon_sym_LF] = ACTIONS(923),
    [anon_sym_AMP] = ACTIONS(923),
  },
  [295] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(925),
    [anon_sym_PIPE] = ACTIONS(925),
    [anon_sym_PIPE_AMP] = ACTIONS(925),
    [anon_sym_AMP_AMP] = ACTIONS(925),
    [anon_sym_PIPE_PIPE] = ACTIONS(925),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(925),
    [anon_sym_LF] = ACTIONS(925),
    [anon_sym_AMP] = ACTIONS(925),
  },
  [296] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(927),
    [anon_sym_PIPE] = ACTIONS(927),
    [anon_sym_PIPE_AMP] = ACTIONS(927),
    [anon_sym_AMP_AMP] = ACTIONS(927),
    [anon_sym_PIPE_PIPE] = ACTIONS(927),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(927),
    [anon_sym_LF] = ACTIONS(927),
    [anon_sym_AMP] = ACTIONS(927),
  },
  [297] = {
    [anon_sym_then] = ACTIONS(929),
    [sym_comment] = ACTIONS(119),
  },
  [298] = {
    [sym__terminated_statement] = STATE(84),
    [sym_for_statement] = STATE(19),
    [sym_while_statement] = STATE(19),
    [sym_if_statement] = STATE(19),
    [sym_case_statement] = STATE(19),
    [sym_function_definition] = STATE(19),
    [sym_bracket_command] = STATE(19),
    [sym_command] = STATE(19),
    [sym_pipeline] = STATE(19),
    [sym_list] = STATE(19),
    [sym_subshell] = STATE(19),
    [sym_environment_variable_assignment] = STATE(20),
    [sym_string] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(23),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_fi] = ACTIONS(931),
    [anon_sym_case] = ACTIONS(95),
    [anon_sym_function] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(103),
    [anon_sym_COLON] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_raw_string] = ACTIONS(109),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(117),
    [sym_comment] = ACTIONS(119),
  },
  [299] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(933),
    [anon_sym_PIPE] = ACTIONS(933),
    [anon_sym_PIPE_AMP] = ACTIONS(933),
    [anon_sym_AMP_AMP] = ACTIONS(933),
    [anon_sym_PIPE_PIPE] = ACTIONS(933),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(933),
    [anon_sym_LF] = ACTIONS(933),
    [anon_sym_AMP] = ACTIONS(933),
  },
  [300] = {
    [anon_sym_fi] = ACTIONS(935),
    [sym_comment] = ACTIONS(119),
  },
  [301] = {
    [sym_elif_clause] = STATE(302),
    [sym_else_clause] = STATE(369),
    [anon_sym_fi] = ACTIONS(935),
    [anon_sym_elif] = ACTIONS(741),
    [anon_sym_else] = ACTIONS(743),
    [sym_comment] = ACTIONS(119),
  },
  [302] = {
    [anon_sym_fi] = ACTIONS(937),
    [anon_sym_elif] = ACTIONS(937),
    [anon_sym_else] = ACTIONS(937),
    [sym_comment] = ACTIONS(119),
  },
  [303] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(939),
    [anon_sym_PIPE] = ACTIONS(939),
    [anon_sym_PIPE_AMP] = ACTIONS(939),
    [anon_sym_AMP_AMP] = ACTIONS(939),
    [anon_sym_PIPE_PIPE] = ACTIONS(939),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(939),
    [anon_sym_LF] = ACTIONS(939),
    [anon_sym_AMP] = ACTIONS(939),
  },
  [304] = {
    [anon_sym_RPAREN] = ACTIONS(941),
    [sym_comment] = ACTIONS(119),
  },
  [305] = {
    [sym_special_variable_name] = STATE(112),
    [anon_sym_DOLLAR] = ACTIONS(943),
    [sym_comment] = ACTIONS(77),
    [sym_simple_variable_name] = ACTIONS(293),
    [anon_sym_STAR] = ACTIONS(943),
    [anon_sym_AT] = ACTIONS(943),
    [anon_sym_POUND] = ACTIONS(273),
    [anon_sym_QMARK] = ACTIONS(943),
    [anon_sym_DASH] = ACTIONS(943),
    [anon_sym_BANG] = ACTIONS(943),
    [anon_sym_0] = ACTIONS(273),
    [anon_sym__] = ACTIONS(273),
  },
  [306] = {
    [anon_sym_esac] = ACTIONS(945),
    [anon_sym_DQUOTE] = ACTIONS(947),
    [sym_raw_string] = ACTIONS(945),
    [anon_sym_DOLLAR] = ACTIONS(945),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(947),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(947),
    [anon_sym_BQUOTE] = ACTIONS(947),
    [sym_word] = ACTIONS(949),
    [sym_comment] = ACTIONS(119),
  },
  [307] = {
    [sym_case_item] = STATE(372),
    [sym_string] = STATE(304),
    [sym_simple_expansion] = STATE(304),
    [sym_expansion] = STATE(304),
    [sym_command_substitution] = STATE(304),
    [anon_sym_esac] = ACTIONS(951),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_raw_string] = ACTIONS(747),
    [anon_sym_DOLLAR] = ACTIONS(749),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(153),
    [anon_sym_BQUOTE] = ACTIONS(155),
    [sym_word] = ACTIONS(751),
    [sym_comment] = ACTIONS(119),
  },
  [308] = {
    [sym_case_item] = STATE(306),
    [sym_string] = STATE(304),
    [sym_simple_expansion] = STATE(304),
    [sym_expansion] = STATE(304),
    [sym_command_substitution] = STATE(304),
    [aux_sym_case_statement_repeat1] = STATE(373),
    [anon_sym_esac] = ACTIONS(951),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_raw_string] = ACTIONS(747),
    [anon_sym_DOLLAR] = ACTIONS(749),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(153),
    [anon_sym_BQUOTE] = ACTIONS(155),
    [sym_word] = ACTIONS(751),
    [sym_comment] = ACTIONS(119),
  },
  [309] = {
    [anon_sym_RBRACE] = ACTIONS(953),
    [sym_comment] = ACTIONS(119),
  },
  [310] = {
    [anon_sym_RBRACE] = ACTIONS(955),
    [sym_comment] = ACTIONS(119),
  },
  [311] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(957),
    [anon_sym_PIPE] = ACTIONS(957),
    [anon_sym_PIPE_AMP] = ACTIONS(957),
    [anon_sym_AMP_AMP] = ACTIONS(957),
    [anon_sym_PIPE_PIPE] = ACTIONS(957),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(957),
    [anon_sym_LF] = ACTIONS(957),
    [anon_sym_AMP] = ACTIONS(957),
  },
  [312] = {
    [anon_sym_RBRACE] = ACTIONS(959),
    [sym_comment] = ACTIONS(119),
  },
  [313] = {
    [anon_sym_RBRACE] = ACTIONS(961),
    [sym_comment] = ACTIONS(119),
  },
  [314] = {
    [sym_file_descriptor] = ACTIONS(609),
    [anon_sym_SEMI_SEMI] = ACTIONS(611),
    [anon_sym_PIPE] = ACTIONS(611),
    [anon_sym_PIPE_AMP] = ACTIONS(611),
    [anon_sym_AMP_AMP] = ACTIONS(611),
    [anon_sym_PIPE_PIPE] = ACTIONS(611),
    [anon_sym_DQUOTE] = ACTIONS(611),
    [sym_raw_string] = ACTIONS(611),
    [anon_sym_DOLLAR] = ACTIONS(611),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(611),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(611),
    [anon_sym_BQUOTE] = ACTIONS(611),
    [anon_sym_LT] = ACTIONS(611),
    [anon_sym_GT] = ACTIONS(611),
    [anon_sym_GT_GT] = ACTIONS(611),
    [anon_sym_AMP_GT] = ACTIONS(611),
    [anon_sym_AMP_GT_GT] = ACTIONS(611),
    [anon_sym_LT_AMP] = ACTIONS(611),
    [anon_sym_GT_AMP] = ACTIONS(611),
    [anon_sym_LT_LT] = ACTIONS(611),
    [anon_sym_LT_LT_DASH] = ACTIONS(611),
    [sym_word] = ACTIONS(611),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(611),
    [anon_sym_LF] = ACTIONS(611),
    [anon_sym_AMP] = ACTIONS(611),
  },
  [315] = {
    [sym_file_descriptor] = ACTIONS(769),
    [anon_sym_SEMI_SEMI] = ACTIONS(755),
    [anon_sym_PIPE] = ACTIONS(755),
    [anon_sym_PIPE_AMP] = ACTIONS(755),
    [anon_sym_AMP_AMP] = ACTIONS(755),
    [anon_sym_PIPE_PIPE] = ACTIONS(755),
    [anon_sym_DQUOTE] = ACTIONS(755),
    [sym_raw_string] = ACTIONS(755),
    [anon_sym_DOLLAR] = ACTIONS(755),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(755),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(755),
    [anon_sym_BQUOTE] = ACTIONS(755),
    [anon_sym_LT] = ACTIONS(755),
    [anon_sym_GT] = ACTIONS(755),
    [anon_sym_GT_GT] = ACTIONS(755),
    [anon_sym_AMP_GT] = ACTIONS(755),
    [anon_sym_AMP_GT_GT] = ACTIONS(755),
    [anon_sym_LT_AMP] = ACTIONS(755),
    [anon_sym_GT_AMP] = ACTIONS(755),
    [anon_sym_LT_LT] = ACTIONS(755),
    [anon_sym_LT_LT_DASH] = ACTIONS(755),
    [sym_word] = ACTIONS(755),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(755),
    [anon_sym_LF] = ACTIONS(755),
    [anon_sym_AMP] = ACTIONS(755),
  },
  [316] = {
    [sym_string] = STATE(378),
    [sym_simple_expansion] = STATE(378),
    [sym_expansion] = STATE(378),
    [sym_command_substitution] = STATE(378),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_raw_string] = ACTIONS(963),
    [anon_sym_DOLLAR] = ACTIONS(749),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(153),
    [anon_sym_BQUOTE] = ACTIONS(155),
    [sym_word] = ACTIONS(965),
    [sym_comment] = ACTIONS(119),
  },
  [317] = {
    [sym_file_descriptor] = ACTIONS(777),
    [anon_sym_SEMI_SEMI] = ACTIONS(761),
    [anon_sym_PIPE] = ACTIONS(761),
    [anon_sym_PIPE_AMP] = ACTIONS(761),
    [anon_sym_AMP_AMP] = ACTIONS(761),
    [anon_sym_PIPE_PIPE] = ACTIONS(761),
    [anon_sym_DQUOTE] = ACTIONS(761),
    [sym_raw_string] = ACTIONS(761),
    [anon_sym_DOLLAR] = ACTIONS(761),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(761),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(761),
    [anon_sym_BQUOTE] = ACTIONS(761),
    [anon_sym_LT] = ACTIONS(761),
    [anon_sym_GT] = ACTIONS(761),
    [anon_sym_GT_GT] = ACTIONS(761),
    [anon_sym_AMP_GT] = ACTIONS(761),
    [anon_sym_AMP_GT_GT] = ACTIONS(761),
    [anon_sym_LT_AMP] = ACTIONS(761),
    [anon_sym_GT_AMP] = ACTIONS(761),
    [anon_sym_LT_LT] = ACTIONS(761),
    [anon_sym_LT_LT_DASH] = ACTIONS(761),
    [sym_word] = ACTIONS(761),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(761),
    [anon_sym_LF] = ACTIONS(761),
    [anon_sym_AMP] = ACTIONS(761),
  },
  [318] = {
    [sym_string] = STATE(379),
    [sym_simple_expansion] = STATE(379),
    [sym_expansion] = STATE(379),
    [sym_command_substitution] = STATE(379),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_raw_string] = ACTIONS(967),
    [anon_sym_DOLLAR] = ACTIONS(749),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(153),
    [anon_sym_BQUOTE] = ACTIONS(155),
    [sym_word] = ACTIONS(969),
    [sym_comment] = ACTIONS(119),
  },
  [319] = {
    [sym_file_descriptor] = ACTIONS(671),
    [anon_sym_SEMI_SEMI] = ACTIONS(673),
    [anon_sym_PIPE] = ACTIONS(673),
    [anon_sym_PIPE_AMP] = ACTIONS(673),
    [anon_sym_AMP_AMP] = ACTIONS(673),
    [anon_sym_PIPE_PIPE] = ACTIONS(673),
    [anon_sym_DQUOTE] = ACTIONS(673),
    [sym_raw_string] = ACTIONS(673),
    [anon_sym_DOLLAR] = ACTIONS(673),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(673),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(673),
    [anon_sym_BQUOTE] = ACTIONS(673),
    [anon_sym_LT] = ACTIONS(673),
    [anon_sym_GT] = ACTIONS(673),
    [anon_sym_GT_GT] = ACTIONS(673),
    [anon_sym_AMP_GT] = ACTIONS(673),
    [anon_sym_AMP_GT_GT] = ACTIONS(673),
    [anon_sym_LT_AMP] = ACTIONS(673),
    [anon_sym_GT_AMP] = ACTIONS(673),
    [anon_sym_LT_LT] = ACTIONS(673),
    [anon_sym_LT_LT_DASH] = ACTIONS(673),
    [sym_word] = ACTIONS(673),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(673),
    [anon_sym_LF] = ACTIONS(673),
    [anon_sym_AMP] = ACTIONS(673),
  },
  [320] = {
    [sym_file_descriptor] = ACTIONS(609),
    [anon_sym_SEMI_SEMI] = ACTIONS(611),
    [anon_sym_PIPE] = ACTIONS(611),
    [anon_sym_PIPE_AMP] = ACTIONS(611),
    [anon_sym_AMP_AMP] = ACTIONS(611),
    [anon_sym_PIPE_PIPE] = ACTIONS(611),
    [anon_sym_LT] = ACTIONS(611),
    [anon_sym_GT] = ACTIONS(611),
    [anon_sym_GT_GT] = ACTIONS(611),
    [anon_sym_AMP_GT] = ACTIONS(611),
    [anon_sym_AMP_GT_GT] = ACTIONS(611),
    [anon_sym_LT_AMP] = ACTIONS(611),
    [anon_sym_GT_AMP] = ACTIONS(611),
    [anon_sym_LT_LT] = ACTIONS(611),
    [anon_sym_LT_LT_DASH] = ACTIONS(611),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(611),
    [anon_sym_LF] = ACTIONS(611),
    [anon_sym_AMP] = ACTIONS(611),
  },
  [321] = {
    [sym_file_descriptor] = ACTIONS(769),
    [anon_sym_SEMI_SEMI] = ACTIONS(755),
    [anon_sym_PIPE] = ACTIONS(755),
    [anon_sym_PIPE_AMP] = ACTIONS(755),
    [anon_sym_AMP_AMP] = ACTIONS(755),
    [anon_sym_PIPE_PIPE] = ACTIONS(755),
    [anon_sym_LT] = ACTIONS(755),
    [anon_sym_GT] = ACTIONS(755),
    [anon_sym_GT_GT] = ACTIONS(755),
    [anon_sym_AMP_GT] = ACTIONS(755),
    [anon_sym_AMP_GT_GT] = ACTIONS(755),
    [anon_sym_LT_AMP] = ACTIONS(755),
    [anon_sym_GT_AMP] = ACTIONS(755),
    [anon_sym_LT_LT] = ACTIONS(755),
    [anon_sym_LT_LT_DASH] = ACTIONS(755),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(755),
    [anon_sym_LF] = ACTIONS(755),
    [anon_sym_AMP] = ACTIONS(755),
  },
  [322] = {
    [sym_string] = STATE(380),
    [sym_simple_expansion] = STATE(380),
    [sym_expansion] = STATE(380),
    [sym_command_substitution] = STATE(380),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_raw_string] = ACTIONS(971),
    [anon_sym_DOLLAR] = ACTIONS(749),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(153),
    [anon_sym_BQUOTE] = ACTIONS(155),
    [sym_word] = ACTIONS(973),
    [sym_comment] = ACTIONS(119),
  },
  [323] = {
    [sym_file_descriptor] = ACTIONS(777),
    [anon_sym_SEMI_SEMI] = ACTIONS(761),
    [anon_sym_PIPE] = ACTIONS(761),
    [anon_sym_PIPE_AMP] = ACTIONS(761),
    [anon_sym_AMP_AMP] = ACTIONS(761),
    [anon_sym_PIPE_PIPE] = ACTIONS(761),
    [anon_sym_LT] = ACTIONS(761),
    [anon_sym_GT] = ACTIONS(761),
    [anon_sym_GT_GT] = ACTIONS(761),
    [anon_sym_AMP_GT] = ACTIONS(761),
    [anon_sym_AMP_GT_GT] = ACTIONS(761),
    [anon_sym_LT_AMP] = ACTIONS(761),
    [anon_sym_GT_AMP] = ACTIONS(761),
    [anon_sym_LT_LT] = ACTIONS(761),
    [anon_sym_LT_LT_DASH] = ACTIONS(761),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(761),
    [anon_sym_LF] = ACTIONS(761),
    [anon_sym_AMP] = ACTIONS(761),
  },
  [324] = {
    [sym_string] = STATE(381),
    [sym_simple_expansion] = STATE(381),
    [sym_expansion] = STATE(381),
    [sym_command_substitution] = STATE(381),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_raw_string] = ACTIONS(975),
    [anon_sym_DOLLAR] = ACTIONS(749),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(153),
    [anon_sym_BQUOTE] = ACTIONS(155),
    [sym_word] = ACTIONS(977),
    [sym_comment] = ACTIONS(119),
  },
  [325] = {
    [sym_file_descriptor] = ACTIONS(671),
    [anon_sym_SEMI_SEMI] = ACTIONS(673),
    [anon_sym_PIPE] = ACTIONS(673),
    [anon_sym_PIPE_AMP] = ACTIONS(673),
    [anon_sym_AMP_AMP] = ACTIONS(673),
    [anon_sym_PIPE_PIPE] = ACTIONS(673),
    [anon_sym_LT] = ACTIONS(673),
    [anon_sym_GT] = ACTIONS(673),
    [anon_sym_GT_GT] = ACTIONS(673),
    [anon_sym_AMP_GT] = ACTIONS(673),
    [anon_sym_AMP_GT_GT] = ACTIONS(673),
    [anon_sym_LT_AMP] = ACTIONS(673),
    [anon_sym_GT_AMP] = ACTIONS(673),
    [anon_sym_LT_LT] = ACTIONS(673),
    [anon_sym_LT_LT_DASH] = ACTIONS(673),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(673),
    [anon_sym_LF] = ACTIONS(673),
    [anon_sym_AMP] = ACTIONS(673),
  },
  [326] = {
    [sym__heredoc_middle] = ACTIONS(489),
    [sym__heredoc_end] = ACTIONS(489),
    [anon_sym_DOLLAR] = ACTIONS(491),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(489),
    [sym_comment] = ACTIONS(119),
  },
  [327] = {
    [sym__heredoc_middle] = ACTIONS(515),
    [sym__heredoc_end] = ACTIONS(515),
    [anon_sym_DOLLAR] = ACTIONS(517),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(515),
    [sym_comment] = ACTIONS(119),
  },
  [328] = {
    [sym__heredoc_middle] = ACTIONS(519),
    [sym__heredoc_end] = ACTIONS(519),
    [anon_sym_DOLLAR] = ACTIONS(521),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(519),
    [sym_comment] = ACTIONS(119),
  },
  [329] = {
    [anon_sym_RBRACE] = ACTIONS(979),
    [anon_sym_COLON] = ACTIONS(981),
    [anon_sym_EQ] = ACTIONS(983),
    [anon_sym_COLON_QMARK] = ACTIONS(983),
    [anon_sym_COLON_DASH] = ACTIONS(983),
    [sym_comment] = ACTIONS(119),
  },
  [330] = {
    [anon_sym_RBRACE] = ACTIONS(985),
    [anon_sym_COLON] = ACTIONS(987),
    [anon_sym_EQ] = ACTIONS(989),
    [anon_sym_COLON_QMARK] = ACTIONS(989),
    [anon_sym_COLON_DASH] = ACTIONS(989),
    [sym_comment] = ACTIONS(119),
  },
  [331] = {
    [sym__heredoc_middle] = ACTIONS(991),
    [sym__heredoc_end] = ACTIONS(991),
    [anon_sym_DOLLAR] = ACTIONS(993),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(991),
    [sym_comment] = ACTIONS(119),
  },
  [332] = {
    [sym_file_descriptor] = ACTIONS(995),
    [anon_sym_SEMI_SEMI] = ACTIONS(997),
    [anon_sym_PIPE] = ACTIONS(997),
    [anon_sym_PIPE_AMP] = ACTIONS(997),
    [anon_sym_AMP_AMP] = ACTIONS(997),
    [anon_sym_PIPE_PIPE] = ACTIONS(997),
    [anon_sym_LT] = ACTIONS(997),
    [anon_sym_GT] = ACTIONS(997),
    [anon_sym_GT_GT] = ACTIONS(997),
    [anon_sym_AMP_GT] = ACTIONS(997),
    [anon_sym_AMP_GT_GT] = ACTIONS(997),
    [anon_sym_LT_AMP] = ACTIONS(997),
    [anon_sym_GT_AMP] = ACTIONS(997),
    [anon_sym_LT_LT] = ACTIONS(997),
    [anon_sym_LT_LT_DASH] = ACTIONS(997),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(997),
    [anon_sym_LF] = ACTIONS(997),
    [anon_sym_AMP] = ACTIONS(997),
  },
  [333] = {
    [anon_sym_RBRACE] = ACTIONS(999),
    [sym_comment] = ACTIONS(119),
  },
  [334] = {
    [anon_sym_RBRACE] = ACTIONS(1001),
    [sym_comment] = ACTIONS(119),
  },
  [335] = {
    [sym_file_descriptor] = ACTIONS(461),
    [anon_sym_RPAREN] = ACTIONS(461),
    [anon_sym_BQUOTE] = ACTIONS(461),
    [anon_sym_LT] = ACTIONS(463),
    [anon_sym_GT] = ACTIONS(463),
    [anon_sym_GT_GT] = ACTIONS(461),
    [anon_sym_AMP_GT] = ACTIONS(463),
    [anon_sym_AMP_GT_GT] = ACTIONS(461),
    [anon_sym_LT_AMP] = ACTIONS(461),
    [anon_sym_GT_AMP] = ACTIONS(461),
    [anon_sym_LT_LT] = ACTIONS(463),
    [anon_sym_LT_LT_DASH] = ACTIONS(461),
    [sym_comment] = ACTIONS(119),
  },
  [336] = {
    [sym_file_descriptor] = ACTIONS(347),
    [anon_sym_RPAREN] = ACTIONS(347),
    [anon_sym_DQUOTE] = ACTIONS(347),
    [sym_raw_string] = ACTIONS(511),
    [anon_sym_DOLLAR] = ACTIONS(511),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(347),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(347),
    [anon_sym_BQUOTE] = ACTIONS(347),
    [anon_sym_LT] = ACTIONS(511),
    [anon_sym_GT] = ACTIONS(511),
    [anon_sym_GT_GT] = ACTIONS(347),
    [anon_sym_AMP_GT] = ACTIONS(511),
    [anon_sym_AMP_GT_GT] = ACTIONS(347),
    [anon_sym_LT_AMP] = ACTIONS(347),
    [anon_sym_GT_AMP] = ACTIONS(347),
    [anon_sym_LT_LT] = ACTIONS(511),
    [anon_sym_LT_LT_DASH] = ACTIONS(347),
    [sym_word] = ACTIONS(349),
    [sym_comment] = ACTIONS(119),
  },
  [337] = {
    [sym_simple_expansion] = STATE(146),
    [sym_expansion] = STATE(146),
    [sym_command_substitution] = STATE(146),
    [anon_sym_DQUOTE] = ACTIONS(1003),
    [sym__quoted_chars] = ACTIONS(365),
    [anon_sym_DOLLAR] = ACTIONS(173),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(175),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [sym_comment] = ACTIONS(77),
  },
  [338] = {
    [sym_file_descriptor] = ACTIONS(489),
    [anon_sym_RPAREN] = ACTIONS(489),
    [anon_sym_DQUOTE] = ACTIONS(489),
    [sym_raw_string] = ACTIONS(491),
    [anon_sym_DOLLAR] = ACTIONS(491),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(489),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(489),
    [anon_sym_BQUOTE] = ACTIONS(489),
    [anon_sym_LT] = ACTIONS(491),
    [anon_sym_GT] = ACTIONS(491),
    [anon_sym_GT_GT] = ACTIONS(489),
    [anon_sym_AMP_GT] = ACTIONS(491),
    [anon_sym_AMP_GT_GT] = ACTIONS(489),
    [anon_sym_LT_AMP] = ACTIONS(489),
    [anon_sym_GT_AMP] = ACTIONS(489),
    [anon_sym_LT_LT] = ACTIONS(491),
    [anon_sym_LT_LT_DASH] = ACTIONS(489),
    [sym_word] = ACTIONS(483),
    [sym_comment] = ACTIONS(119),
  },
  [339] = {
    [sym_file_descriptor] = ACTIONS(515),
    [anon_sym_RPAREN] = ACTIONS(515),
    [anon_sym_DQUOTE] = ACTIONS(515),
    [sym_raw_string] = ACTIONS(517),
    [anon_sym_DOLLAR] = ACTIONS(517),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(515),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(515),
    [anon_sym_BQUOTE] = ACTIONS(515),
    [anon_sym_LT] = ACTIONS(517),
    [anon_sym_GT] = ACTIONS(517),
    [anon_sym_GT_GT] = ACTIONS(515),
    [anon_sym_AMP_GT] = ACTIONS(517),
    [anon_sym_AMP_GT_GT] = ACTIONS(515),
    [anon_sym_LT_AMP] = ACTIONS(515),
    [anon_sym_GT_AMP] = ACTIONS(515),
    [anon_sym_LT_LT] = ACTIONS(517),
    [anon_sym_LT_LT_DASH] = ACTIONS(515),
    [sym_word] = ACTIONS(485),
    [sym_comment] = ACTIONS(119),
  },
  [340] = {
    [sym_file_descriptor] = ACTIONS(519),
    [anon_sym_RPAREN] = ACTIONS(519),
    [anon_sym_DQUOTE] = ACTIONS(519),
    [sym_raw_string] = ACTIONS(521),
    [anon_sym_DOLLAR] = ACTIONS(521),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(519),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(519),
    [anon_sym_BQUOTE] = ACTIONS(519),
    [anon_sym_LT] = ACTIONS(521),
    [anon_sym_GT] = ACTIONS(521),
    [anon_sym_GT_GT] = ACTIONS(519),
    [anon_sym_AMP_GT] = ACTIONS(521),
    [anon_sym_AMP_GT_GT] = ACTIONS(519),
    [anon_sym_LT_AMP] = ACTIONS(519),
    [anon_sym_GT_AMP] = ACTIONS(519),
    [anon_sym_LT_LT] = ACTIONS(521),
    [anon_sym_LT_LT_DASH] = ACTIONS(519),
    [sym_word] = ACTIONS(487),
    [sym_comment] = ACTIONS(119),
  },
  [341] = {
    [anon_sym_RBRACE] = ACTIONS(1005),
    [anon_sym_COLON] = ACTIONS(1007),
    [anon_sym_EQ] = ACTIONS(1009),
    [anon_sym_COLON_QMARK] = ACTIONS(1009),
    [anon_sym_COLON_DASH] = ACTIONS(1009),
    [sym_comment] = ACTIONS(119),
  },
  [342] = {
    [anon_sym_RBRACE] = ACTIONS(1011),
    [anon_sym_COLON] = ACTIONS(1013),
    [anon_sym_EQ] = ACTIONS(1015),
    [anon_sym_COLON_QMARK] = ACTIONS(1015),
    [anon_sym_COLON_DASH] = ACTIONS(1015),
    [sym_comment] = ACTIONS(119),
  },
  [343] = {
    [anon_sym_RPAREN] = ACTIONS(1017),
    [sym_comment] = ACTIONS(119),
  },
  [344] = {
    [anon_sym_BQUOTE] = ACTIONS(1017),
    [sym_comment] = ACTIONS(119),
  },
  [345] = {
    [sym_file_descriptor] = ACTIONS(541),
    [anon_sym_RPAREN] = ACTIONS(541),
    [anon_sym_DQUOTE] = ACTIONS(541),
    [sym_raw_string] = ACTIONS(539),
    [anon_sym_DOLLAR] = ACTIONS(539),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(541),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(541),
    [anon_sym_BQUOTE] = ACTIONS(541),
    [anon_sym_LT] = ACTIONS(539),
    [anon_sym_GT] = ACTIONS(539),
    [anon_sym_GT_GT] = ACTIONS(541),
    [anon_sym_AMP_GT] = ACTIONS(539),
    [anon_sym_AMP_GT_GT] = ACTIONS(541),
    [anon_sym_LT_AMP] = ACTIONS(541),
    [anon_sym_GT_AMP] = ACTIONS(541),
    [anon_sym_LT_LT] = ACTIONS(539),
    [anon_sym_LT_LT_DASH] = ACTIONS(541),
    [sym_word] = ACTIONS(543),
    [sym_comment] = ACTIONS(119),
  },
  [346] = {
    [sym_file_redirect] = STATE(261),
    [sym_heredoc_redirect] = STATE(261),
    [sym_file_descriptor] = ACTIONS(367),
    [anon_sym_RPAREN] = ACTIONS(1019),
    [anon_sym_BQUOTE] = ACTIONS(1019),
    [anon_sym_LT] = ACTIONS(635),
    [anon_sym_GT] = ACTIONS(635),
    [anon_sym_GT_GT] = ACTIONS(637),
    [anon_sym_AMP_GT] = ACTIONS(635),
    [anon_sym_AMP_GT_GT] = ACTIONS(637),
    [anon_sym_LT_AMP] = ACTIONS(637),
    [anon_sym_GT_AMP] = ACTIONS(637),
    [anon_sym_LT_LT] = ACTIONS(639),
    [anon_sym_LT_LT_DASH] = ACTIONS(641),
    [sym_comment] = ACTIONS(119),
  },
  [347] = {
    [sym_file_descriptor] = ACTIONS(825),
    [anon_sym_RPAREN] = ACTIONS(825),
    [anon_sym_BQUOTE] = ACTIONS(825),
    [anon_sym_LT] = ACTIONS(1021),
    [anon_sym_GT] = ACTIONS(1021),
    [anon_sym_GT_GT] = ACTIONS(825),
    [anon_sym_AMP_GT] = ACTIONS(1021),
    [anon_sym_AMP_GT_GT] = ACTIONS(825),
    [anon_sym_LT_AMP] = ACTIONS(825),
    [anon_sym_GT_AMP] = ACTIONS(825),
    [anon_sym_LT_LT] = ACTIONS(1021),
    [anon_sym_LT_LT_DASH] = ACTIONS(825),
    [sym_comment] = ACTIONS(119),
  },
  [348] = {
    [sym_simple_expansion] = STATE(331),
    [sym_expansion] = STATE(331),
    [sym__heredoc_middle] = ACTIONS(837),
    [sym__heredoc_end] = ACTIONS(1023),
    [anon_sym_DOLLAR] = ACTIONS(583),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(585),
    [sym_comment] = ACTIONS(119),
  },
  [349] = {
    [sym_file_redirect] = STATE(261),
    [sym_heredoc_redirect] = STATE(261),
    [sym_file_descriptor] = ACTIONS(367),
    [anon_sym_RPAREN] = ACTIONS(1025),
    [anon_sym_BQUOTE] = ACTIONS(1025),
    [anon_sym_LT] = ACTIONS(635),
    [anon_sym_GT] = ACTIONS(635),
    [anon_sym_GT_GT] = ACTIONS(637),
    [anon_sym_AMP_GT] = ACTIONS(635),
    [anon_sym_AMP_GT_GT] = ACTIONS(637),
    [anon_sym_LT_AMP] = ACTIONS(637),
    [anon_sym_GT_AMP] = ACTIONS(637),
    [anon_sym_LT_LT] = ACTIONS(639),
    [anon_sym_LT_LT_DASH] = ACTIONS(641),
    [sym_comment] = ACTIONS(119),
  },
  [350] = {
    [sym_string] = STATE(345),
    [sym_simple_expansion] = STATE(345),
    [sym_expansion] = STATE(345),
    [sym_command_substitution] = STATE(345),
    [sym_file_redirect] = STATE(151),
    [sym_heredoc_redirect] = STATE(151),
    [aux_sym_command_repeat2] = STATE(395),
    [sym_file_descriptor] = ACTIONS(367),
    [anon_sym_RPAREN] = ACTIONS(1027),
    [anon_sym_DQUOTE] = ACTIONS(623),
    [sym_raw_string] = ACTIONS(865),
    [anon_sym_DOLLAR] = ACTIONS(627),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(629),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(631),
    [anon_sym_BQUOTE] = ACTIONS(633),
    [anon_sym_LT] = ACTIONS(635),
    [anon_sym_GT] = ACTIONS(635),
    [anon_sym_GT_GT] = ACTIONS(637),
    [anon_sym_AMP_GT] = ACTIONS(635),
    [anon_sym_AMP_GT_GT] = ACTIONS(637),
    [anon_sym_LT_AMP] = ACTIONS(637),
    [anon_sym_GT_AMP] = ACTIONS(637),
    [anon_sym_LT_LT] = ACTIONS(639),
    [anon_sym_LT_LT_DASH] = ACTIONS(641),
    [sym_word] = ACTIONS(867),
    [sym_comment] = ACTIONS(119),
  },
  [351] = {
    [sym_string] = STATE(345),
    [sym_simple_expansion] = STATE(345),
    [sym_expansion] = STATE(345),
    [sym_command_substitution] = STATE(345),
    [sym_file_redirect] = STATE(151),
    [sym_heredoc_redirect] = STATE(151),
    [aux_sym_command_repeat2] = STATE(396),
    [sym_file_descriptor] = ACTIONS(367),
    [anon_sym_RPAREN] = ACTIONS(1029),
    [anon_sym_DQUOTE] = ACTIONS(623),
    [sym_raw_string] = ACTIONS(865),
    [anon_sym_DOLLAR] = ACTIONS(627),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(629),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(631),
    [anon_sym_BQUOTE] = ACTIONS(633),
    [anon_sym_LT] = ACTIONS(635),
    [anon_sym_GT] = ACTIONS(635),
    [anon_sym_GT_GT] = ACTIONS(637),
    [anon_sym_AMP_GT] = ACTIONS(635),
    [anon_sym_AMP_GT_GT] = ACTIONS(637),
    [anon_sym_LT_AMP] = ACTIONS(637),
    [anon_sym_GT_AMP] = ACTIONS(637),
    [anon_sym_LT_LT] = ACTIONS(639),
    [anon_sym_LT_LT_DASH] = ACTIONS(641),
    [sym_word] = ACTIONS(867),
    [sym_comment] = ACTIONS(119),
  },
  [352] = {
    [sym_file_redirect] = STATE(261),
    [sym_heredoc_redirect] = STATE(261),
    [sym_file_descriptor] = ACTIONS(367),
    [anon_sym_RPAREN] = ACTIONS(1031),
    [anon_sym_BQUOTE] = ACTIONS(1031),
    [anon_sym_LT] = ACTIONS(635),
    [anon_sym_GT] = ACTIONS(635),
    [anon_sym_GT_GT] = ACTIONS(637),
    [anon_sym_AMP_GT] = ACTIONS(635),
    [anon_sym_AMP_GT_GT] = ACTIONS(637),
    [anon_sym_LT_AMP] = ACTIONS(637),
    [anon_sym_GT_AMP] = ACTIONS(637),
    [anon_sym_LT_LT] = ACTIONS(639),
    [anon_sym_LT_LT_DASH] = ACTIONS(641),
    [sym_comment] = ACTIONS(119),
  },
  [353] = {
    [sym_string] = STATE(345),
    [sym_simple_expansion] = STATE(345),
    [sym_expansion] = STATE(345),
    [sym_command_substitution] = STATE(345),
    [sym_file_redirect] = STATE(151),
    [sym_heredoc_redirect] = STATE(151),
    [aux_sym_command_repeat2] = STATE(395),
    [sym_file_descriptor] = ACTIONS(367),
    [anon_sym_DQUOTE] = ACTIONS(623),
    [sym_raw_string] = ACTIONS(865),
    [anon_sym_DOLLAR] = ACTIONS(627),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(629),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(631),
    [anon_sym_BQUOTE] = ACTIONS(1027),
    [anon_sym_LT] = ACTIONS(635),
    [anon_sym_GT] = ACTIONS(635),
    [anon_sym_GT_GT] = ACTIONS(637),
    [anon_sym_AMP_GT] = ACTIONS(635),
    [anon_sym_AMP_GT_GT] = ACTIONS(637),
    [anon_sym_LT_AMP] = ACTIONS(637),
    [anon_sym_GT_AMP] = ACTIONS(637),
    [anon_sym_LT_LT] = ACTIONS(639),
    [anon_sym_LT_LT_DASH] = ACTIONS(641),
    [sym_word] = ACTIONS(867),
    [sym_comment] = ACTIONS(119),
  },
  [354] = {
    [sym_string] = STATE(345),
    [sym_simple_expansion] = STATE(345),
    [sym_expansion] = STATE(345),
    [sym_command_substitution] = STATE(345),
    [sym_file_redirect] = STATE(151),
    [sym_heredoc_redirect] = STATE(151),
    [aux_sym_command_repeat2] = STATE(396),
    [sym_file_descriptor] = ACTIONS(367),
    [anon_sym_DQUOTE] = ACTIONS(623),
    [sym_raw_string] = ACTIONS(865),
    [anon_sym_DOLLAR] = ACTIONS(627),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(629),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(631),
    [anon_sym_BQUOTE] = ACTIONS(1029),
    [anon_sym_LT] = ACTIONS(635),
    [anon_sym_GT] = ACTIONS(635),
    [anon_sym_GT_GT] = ACTIONS(637),
    [anon_sym_AMP_GT] = ACTIONS(635),
    [anon_sym_AMP_GT_GT] = ACTIONS(637),
    [anon_sym_LT_AMP] = ACTIONS(637),
    [anon_sym_GT_AMP] = ACTIONS(637),
    [anon_sym_LT_LT] = ACTIONS(639),
    [anon_sym_LT_LT_DASH] = ACTIONS(641),
    [sym_word] = ACTIONS(867),
    [sym_comment] = ACTIONS(119),
  },
  [355] = {
    [anon_sym_RBRACE] = ACTIONS(1033),
    [sym_comment] = ACTIONS(119),
  },
  [356] = {
    [anon_sym_RBRACE] = ACTIONS(1035),
    [sym_comment] = ACTIONS(119),
  },
  [357] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1037),
    [anon_sym_PIPE] = ACTIONS(1037),
    [anon_sym_PIPE_AMP] = ACTIONS(1037),
    [anon_sym_AMP_AMP] = ACTIONS(1037),
    [anon_sym_PIPE_PIPE] = ACTIONS(1037),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1037),
    [anon_sym_LF] = ACTIONS(1037),
    [anon_sym_AMP] = ACTIONS(1037),
  },
  [358] = {
    [sym__terminated_statement] = STATE(84),
    [sym_for_statement] = STATE(19),
    [sym_while_statement] = STATE(19),
    [sym_if_statement] = STATE(19),
    [sym_case_statement] = STATE(19),
    [sym_function_definition] = STATE(19),
    [sym_bracket_command] = STATE(19),
    [sym_command] = STATE(19),
    [sym_pipeline] = STATE(19),
    [sym_list] = STATE(19),
    [sym_subshell] = STATE(19),
    [sym_environment_variable_assignment] = STATE(20),
    [sym_string] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(23),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_case] = ACTIONS(95),
    [anon_sym_function] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(1039),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(103),
    [anon_sym_COLON] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_raw_string] = ACTIONS(109),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(117),
    [sym_comment] = ACTIONS(119),
  },
  [359] = {
    [sym_file_descriptor] = ACTIONS(609),
    [anon_sym_SEMI_SEMI] = ACTIONS(611),
    [anon_sym_COLON] = ACTIONS(611),
    [anon_sym_PIPE] = ACTIONS(611),
    [anon_sym_PIPE_AMP] = ACTIONS(611),
    [anon_sym_AMP_AMP] = ACTIONS(611),
    [anon_sym_PIPE_PIPE] = ACTIONS(611),
    [anon_sym_DQUOTE] = ACTIONS(611),
    [sym_raw_string] = ACTIONS(611),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(611),
    [anon_sym_BQUOTE] = ACTIONS(611),
    [anon_sym_LT] = ACTIONS(611),
    [anon_sym_GT] = ACTIONS(611),
    [anon_sym_GT_GT] = ACTIONS(611),
    [anon_sym_AMP_GT] = ACTIONS(611),
    [anon_sym_AMP_GT_GT] = ACTIONS(611),
    [anon_sym_LT_AMP] = ACTIONS(611),
    [anon_sym_GT_AMP] = ACTIONS(611),
    [sym_leading_word] = ACTIONS(611),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(611),
    [anon_sym_LF] = ACTIONS(611),
    [anon_sym_AMP] = ACTIONS(611),
  },
  [360] = {
    [sym_file_descriptor] = ACTIONS(769),
    [anon_sym_SEMI_SEMI] = ACTIONS(755),
    [anon_sym_COLON] = ACTIONS(755),
    [anon_sym_PIPE] = ACTIONS(755),
    [anon_sym_PIPE_AMP] = ACTIONS(755),
    [anon_sym_AMP_AMP] = ACTIONS(755),
    [anon_sym_PIPE_PIPE] = ACTIONS(755),
    [anon_sym_DQUOTE] = ACTIONS(755),
    [sym_raw_string] = ACTIONS(755),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(755),
    [anon_sym_BQUOTE] = ACTIONS(755),
    [anon_sym_LT] = ACTIONS(755),
    [anon_sym_GT] = ACTIONS(755),
    [anon_sym_GT_GT] = ACTIONS(755),
    [anon_sym_AMP_GT] = ACTIONS(755),
    [anon_sym_AMP_GT_GT] = ACTIONS(755),
    [anon_sym_LT_AMP] = ACTIONS(755),
    [anon_sym_GT_AMP] = ACTIONS(755),
    [sym_leading_word] = ACTIONS(755),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(755),
    [anon_sym_LF] = ACTIONS(755),
    [anon_sym_AMP] = ACTIONS(755),
  },
  [361] = {
    [sym_string] = STATE(400),
    [sym_simple_expansion] = STATE(400),
    [sym_expansion] = STATE(400),
    [sym_command_substitution] = STATE(400),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_raw_string] = ACTIONS(1041),
    [anon_sym_DOLLAR] = ACTIONS(749),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(153),
    [anon_sym_BQUOTE] = ACTIONS(155),
    [sym_word] = ACTIONS(1043),
    [sym_comment] = ACTIONS(119),
  },
  [362] = {
    [sym_file_descriptor] = ACTIONS(777),
    [anon_sym_SEMI_SEMI] = ACTIONS(761),
    [anon_sym_COLON] = ACTIONS(761),
    [anon_sym_PIPE] = ACTIONS(761),
    [anon_sym_PIPE_AMP] = ACTIONS(761),
    [anon_sym_AMP_AMP] = ACTIONS(761),
    [anon_sym_PIPE_PIPE] = ACTIONS(761),
    [anon_sym_DQUOTE] = ACTIONS(761),
    [sym_raw_string] = ACTIONS(761),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(761),
    [anon_sym_BQUOTE] = ACTIONS(761),
    [anon_sym_LT] = ACTIONS(761),
    [anon_sym_GT] = ACTIONS(761),
    [anon_sym_GT_GT] = ACTIONS(761),
    [anon_sym_AMP_GT] = ACTIONS(761),
    [anon_sym_AMP_GT_GT] = ACTIONS(761),
    [anon_sym_LT_AMP] = ACTIONS(761),
    [anon_sym_GT_AMP] = ACTIONS(761),
    [sym_leading_word] = ACTIONS(761),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(761),
    [anon_sym_LF] = ACTIONS(761),
    [anon_sym_AMP] = ACTIONS(761),
  },
  [363] = {
    [sym_string] = STATE(401),
    [sym_simple_expansion] = STATE(401),
    [sym_expansion] = STATE(401),
    [sym_command_substitution] = STATE(401),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_raw_string] = ACTIONS(1045),
    [anon_sym_DOLLAR] = ACTIONS(749),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(153),
    [anon_sym_BQUOTE] = ACTIONS(155),
    [sym_word] = ACTIONS(1047),
    [sym_comment] = ACTIONS(119),
  },
  [364] = {
    [sym_file_descriptor] = ACTIONS(671),
    [anon_sym_SEMI_SEMI] = ACTIONS(673),
    [anon_sym_COLON] = ACTIONS(673),
    [anon_sym_PIPE] = ACTIONS(673),
    [anon_sym_PIPE_AMP] = ACTIONS(673),
    [anon_sym_AMP_AMP] = ACTIONS(673),
    [anon_sym_PIPE_PIPE] = ACTIONS(673),
    [anon_sym_DQUOTE] = ACTIONS(673),
    [sym_raw_string] = ACTIONS(673),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(673),
    [anon_sym_BQUOTE] = ACTIONS(673),
    [anon_sym_LT] = ACTIONS(673),
    [anon_sym_GT] = ACTIONS(673),
    [anon_sym_GT_GT] = ACTIONS(673),
    [anon_sym_AMP_GT] = ACTIONS(673),
    [anon_sym_AMP_GT_GT] = ACTIONS(673),
    [anon_sym_LT_AMP] = ACTIONS(673),
    [anon_sym_GT_AMP] = ACTIONS(673),
    [sym_leading_word] = ACTIONS(673),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(673),
    [anon_sym_LF] = ACTIONS(673),
    [anon_sym_AMP] = ACTIONS(673),
  },
  [365] = {
    [sym_file_redirect] = STATE(137),
    [sym_heredoc_redirect] = STATE(137),
    [sym_file_descriptor] = ACTIONS(159),
    [anon_sym_SEMI_SEMI] = ACTIONS(1049),
    [anon_sym_PIPE] = ACTIONS(1049),
    [anon_sym_PIPE_AMP] = ACTIONS(1049),
    [anon_sym_AMP_AMP] = ACTIONS(1049),
    [anon_sym_PIPE_PIPE] = ACTIONS(1049),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_GT_GT] = ACTIONS(165),
    [anon_sym_AMP_GT] = ACTIONS(165),
    [anon_sym_AMP_GT_GT] = ACTIONS(165),
    [anon_sym_LT_AMP] = ACTIONS(165),
    [anon_sym_GT_AMP] = ACTIONS(165),
    [anon_sym_LT_LT] = ACTIONS(167),
    [anon_sym_LT_LT_DASH] = ACTIONS(167),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1049),
    [anon_sym_LF] = ACTIONS(1049),
    [anon_sym_AMP] = ACTIONS(1049),
  },
  [366] = {
    [sym_file_redirect] = STATE(137),
    [sym_heredoc_redirect] = STATE(137),
    [sym_file_descriptor] = ACTIONS(159),
    [anon_sym_SEMI_SEMI] = ACTIONS(1051),
    [anon_sym_PIPE] = ACTIONS(1051),
    [anon_sym_PIPE_AMP] = ACTIONS(1051),
    [anon_sym_AMP_AMP] = ACTIONS(1051),
    [anon_sym_PIPE_PIPE] = ACTIONS(1051),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_GT_GT] = ACTIONS(165),
    [anon_sym_AMP_GT] = ACTIONS(165),
    [anon_sym_AMP_GT_GT] = ACTIONS(165),
    [anon_sym_LT_AMP] = ACTIONS(165),
    [anon_sym_GT_AMP] = ACTIONS(165),
    [anon_sym_LT_LT] = ACTIONS(167),
    [anon_sym_LT_LT_DASH] = ACTIONS(167),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1051),
    [anon_sym_LF] = ACTIONS(1051),
    [anon_sym_AMP] = ACTIONS(1051),
  },
  [367] = {
    [sym__terminated_statement] = STATE(18),
    [sym_for_statement] = STATE(19),
    [sym_while_statement] = STATE(19),
    [sym_if_statement] = STATE(19),
    [sym_case_statement] = STATE(19),
    [sym_function_definition] = STATE(19),
    [sym_bracket_command] = STATE(19),
    [sym_command] = STATE(19),
    [sym_pipeline] = STATE(19),
    [sym_list] = STATE(19),
    [sym_subshell] = STATE(19),
    [sym_environment_variable_assignment] = STATE(20),
    [sym_string] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(21),
    [aux_sym_program_repeat1] = STATE(402),
    [aux_sym_command_repeat1] = STATE(23),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_fi] = ACTIONS(1053),
    [anon_sym_elif] = ACTIONS(1053),
    [anon_sym_else] = ACTIONS(1053),
    [anon_sym_case] = ACTIONS(95),
    [anon_sym_function] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(103),
    [anon_sym_COLON] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_raw_string] = ACTIONS(109),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(117),
    [sym_comment] = ACTIONS(119),
  },
  [368] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1055),
    [anon_sym_PIPE] = ACTIONS(1055),
    [anon_sym_PIPE_AMP] = ACTIONS(1055),
    [anon_sym_AMP_AMP] = ACTIONS(1055),
    [anon_sym_PIPE_PIPE] = ACTIONS(1055),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1055),
    [anon_sym_LF] = ACTIONS(1055),
    [anon_sym_AMP] = ACTIONS(1055),
  },
  [369] = {
    [anon_sym_fi] = ACTIONS(1057),
    [sym_comment] = ACTIONS(119),
  },
  [370] = {
    [sym__terminated_statement] = STATE(18),
    [sym_for_statement] = STATE(19),
    [sym_while_statement] = STATE(19),
    [sym_if_statement] = STATE(19),
    [sym_case_statement] = STATE(19),
    [sym_function_definition] = STATE(19),
    [sym_bracket_command] = STATE(19),
    [sym_command] = STATE(19),
    [sym_pipeline] = STATE(19),
    [sym_list] = STATE(19),
    [sym_subshell] = STATE(19),
    [sym_environment_variable_assignment] = STATE(20),
    [sym_string] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(21),
    [aux_sym_program_repeat1] = STATE(405),
    [aux_sym_command_repeat1] = STATE(23),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_case] = ACTIONS(95),
    [anon_sym_SEMI_SEMI] = ACTIONS(1059),
    [anon_sym_function] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(103),
    [anon_sym_COLON] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_raw_string] = ACTIONS(109),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(117),
    [sym_comment] = ACTIONS(119),
  },
  [371] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1061),
    [anon_sym_PIPE] = ACTIONS(1061),
    [anon_sym_PIPE_AMP] = ACTIONS(1061),
    [anon_sym_AMP_AMP] = ACTIONS(1061),
    [anon_sym_PIPE_PIPE] = ACTIONS(1061),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1061),
    [anon_sym_LF] = ACTIONS(1061),
    [anon_sym_AMP] = ACTIONS(1061),
  },
  [372] = {
    [anon_sym_esac] = ACTIONS(1063),
    [anon_sym_DQUOTE] = ACTIONS(1065),
    [sym_raw_string] = ACTIONS(1063),
    [anon_sym_DOLLAR] = ACTIONS(1063),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1065),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1065),
    [anon_sym_BQUOTE] = ACTIONS(1065),
    [sym_word] = ACTIONS(1067),
    [sym_comment] = ACTIONS(119),
  },
  [373] = {
    [sym_case_item] = STATE(372),
    [sym_string] = STATE(304),
    [sym_simple_expansion] = STATE(304),
    [sym_expansion] = STATE(304),
    [sym_command_substitution] = STATE(304),
    [anon_sym_esac] = ACTIONS(1069),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_raw_string] = ACTIONS(747),
    [anon_sym_DOLLAR] = ACTIONS(749),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(153),
    [anon_sym_BQUOTE] = ACTIONS(155),
    [sym_word] = ACTIONS(751),
    [sym_comment] = ACTIONS(119),
  },
  [374] = {
    [anon_sym_in] = ACTIONS(1071),
    [anon_sym_SEMI_SEMI] = ACTIONS(1071),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1071),
    [anon_sym_LF] = ACTIONS(1071),
    [anon_sym_AMP] = ACTIONS(1071),
  },
  [375] = {
    [anon_sym_in] = ACTIONS(1073),
    [anon_sym_SEMI_SEMI] = ACTIONS(1073),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1073),
    [anon_sym_LF] = ACTIONS(1073),
    [anon_sym_AMP] = ACTIONS(1073),
  },
  [376] = {
    [anon_sym_RPAREN] = ACTIONS(1075),
    [anon_sym_RBRACE] = ACTIONS(1075),
    [anon_sym_RBRACK] = ACTIONS(1077),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1077),
    [anon_sym_DQUOTE] = ACTIONS(1075),
    [sym_raw_string] = ACTIONS(1077),
    [anon_sym_DOLLAR] = ACTIONS(1077),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1075),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1075),
    [anon_sym_BQUOTE] = ACTIONS(1075),
    [sym_word] = ACTIONS(1071),
    [sym_comment] = ACTIONS(119),
  },
  [377] = {
    [anon_sym_RPAREN] = ACTIONS(1079),
    [anon_sym_RBRACE] = ACTIONS(1079),
    [anon_sym_RBRACK] = ACTIONS(1081),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1081),
    [anon_sym_DQUOTE] = ACTIONS(1079),
    [sym_raw_string] = ACTIONS(1081),
    [anon_sym_DOLLAR] = ACTIONS(1081),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1079),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1079),
    [anon_sym_BQUOTE] = ACTIONS(1079),
    [sym_word] = ACTIONS(1073),
    [sym_comment] = ACTIONS(119),
  },
  [378] = {
    [anon_sym_RBRACE] = ACTIONS(1083),
    [sym_comment] = ACTIONS(119),
  },
  [379] = {
    [anon_sym_RBRACE] = ACTIONS(1085),
    [sym_comment] = ACTIONS(119),
  },
  [380] = {
    [anon_sym_RBRACE] = ACTIONS(1087),
    [sym_comment] = ACTIONS(119),
  },
  [381] = {
    [anon_sym_RBRACE] = ACTIONS(1089),
    [sym_comment] = ACTIONS(119),
  },
  [382] = {
    [sym__heredoc_middle] = ACTIONS(769),
    [sym__heredoc_end] = ACTIONS(769),
    [anon_sym_DOLLAR] = ACTIONS(771),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(769),
    [sym_comment] = ACTIONS(119),
  },
  [383] = {
    [sym_string] = STATE(411),
    [sym_simple_expansion] = STATE(411),
    [sym_expansion] = STATE(411),
    [sym_command_substitution] = STATE(411),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_raw_string] = ACTIONS(1091),
    [anon_sym_DOLLAR] = ACTIONS(749),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(153),
    [anon_sym_BQUOTE] = ACTIONS(155),
    [sym_word] = ACTIONS(1093),
    [sym_comment] = ACTIONS(119),
  },
  [384] = {
    [sym__heredoc_middle] = ACTIONS(777),
    [sym__heredoc_end] = ACTIONS(777),
    [anon_sym_DOLLAR] = ACTIONS(779),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(777),
    [sym_comment] = ACTIONS(119),
  },
  [385] = {
    [sym_string] = STATE(412),
    [sym_simple_expansion] = STATE(412),
    [sym_expansion] = STATE(412),
    [sym_command_substitution] = STATE(412),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_raw_string] = ACTIONS(1095),
    [anon_sym_DOLLAR] = ACTIONS(749),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(153),
    [anon_sym_BQUOTE] = ACTIONS(155),
    [sym_word] = ACTIONS(1097),
    [sym_comment] = ACTIONS(119),
  },
  [386] = {
    [anon_sym_DQUOTE] = ACTIONS(1071),
    [sym__quoted_chars] = ACTIONS(1071),
    [anon_sym_DOLLAR] = ACTIONS(1071),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1071),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1071),
    [anon_sym_BQUOTE] = ACTIONS(1077),
    [sym_comment] = ACTIONS(77),
  },
  [387] = {
    [anon_sym_DQUOTE] = ACTIONS(1073),
    [sym__quoted_chars] = ACTIONS(1073),
    [anon_sym_DOLLAR] = ACTIONS(1073),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1073),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1073),
    [anon_sym_BQUOTE] = ACTIONS(1081),
    [sym_comment] = ACTIONS(77),
  },
  [388] = {
    [sym_file_descriptor] = ACTIONS(609),
    [anon_sym_RPAREN] = ACTIONS(609),
    [anon_sym_DQUOTE] = ACTIONS(609),
    [sym_raw_string] = ACTIONS(767),
    [anon_sym_DOLLAR] = ACTIONS(767),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(609),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(609),
    [anon_sym_BQUOTE] = ACTIONS(609),
    [anon_sym_LT] = ACTIONS(767),
    [anon_sym_GT] = ACTIONS(767),
    [anon_sym_GT_GT] = ACTIONS(609),
    [anon_sym_AMP_GT] = ACTIONS(767),
    [anon_sym_AMP_GT_GT] = ACTIONS(609),
    [anon_sym_LT_AMP] = ACTIONS(609),
    [anon_sym_GT_AMP] = ACTIONS(609),
    [anon_sym_LT_LT] = ACTIONS(767),
    [anon_sym_LT_LT_DASH] = ACTIONS(609),
    [sym_word] = ACTIONS(611),
    [sym_comment] = ACTIONS(119),
  },
  [389] = {
    [sym_file_descriptor] = ACTIONS(769),
    [anon_sym_RPAREN] = ACTIONS(769),
    [anon_sym_DQUOTE] = ACTIONS(769),
    [sym_raw_string] = ACTIONS(771),
    [anon_sym_DOLLAR] = ACTIONS(771),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(769),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(769),
    [anon_sym_BQUOTE] = ACTIONS(769),
    [anon_sym_LT] = ACTIONS(771),
    [anon_sym_GT] = ACTIONS(771),
    [anon_sym_GT_GT] = ACTIONS(769),
    [anon_sym_AMP_GT] = ACTIONS(771),
    [anon_sym_AMP_GT_GT] = ACTIONS(769),
    [anon_sym_LT_AMP] = ACTIONS(769),
    [anon_sym_GT_AMP] = ACTIONS(769),
    [anon_sym_LT_LT] = ACTIONS(771),
    [anon_sym_LT_LT_DASH] = ACTIONS(769),
    [sym_word] = ACTIONS(755),
    [sym_comment] = ACTIONS(119),
  },
  [390] = {
    [sym_string] = STATE(413),
    [sym_simple_expansion] = STATE(413),
    [sym_expansion] = STATE(413),
    [sym_command_substitution] = STATE(413),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_raw_string] = ACTIONS(1099),
    [anon_sym_DOLLAR] = ACTIONS(749),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(153),
    [anon_sym_BQUOTE] = ACTIONS(155),
    [sym_word] = ACTIONS(1101),
    [sym_comment] = ACTIONS(119),
  },
  [391] = {
    [sym_file_descriptor] = ACTIONS(777),
    [anon_sym_RPAREN] = ACTIONS(777),
    [anon_sym_DQUOTE] = ACTIONS(777),
    [sym_raw_string] = ACTIONS(779),
    [anon_sym_DOLLAR] = ACTIONS(779),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(777),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(777),
    [anon_sym_BQUOTE] = ACTIONS(777),
    [anon_sym_LT] = ACTIONS(779),
    [anon_sym_GT] = ACTIONS(779),
    [anon_sym_GT_GT] = ACTIONS(777),
    [anon_sym_AMP_GT] = ACTIONS(779),
    [anon_sym_AMP_GT_GT] = ACTIONS(777),
    [anon_sym_LT_AMP] = ACTIONS(777),
    [anon_sym_GT_AMP] = ACTIONS(777),
    [anon_sym_LT_LT] = ACTIONS(779),
    [anon_sym_LT_LT_DASH] = ACTIONS(777),
    [sym_word] = ACTIONS(761),
    [sym_comment] = ACTIONS(119),
  },
  [392] = {
    [sym_string] = STATE(414),
    [sym_simple_expansion] = STATE(414),
    [sym_expansion] = STATE(414),
    [sym_command_substitution] = STATE(414),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_raw_string] = ACTIONS(1103),
    [anon_sym_DOLLAR] = ACTIONS(749),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(153),
    [anon_sym_BQUOTE] = ACTIONS(155),
    [sym_word] = ACTIONS(1105),
    [sym_comment] = ACTIONS(119),
  },
  [393] = {
    [sym_file_descriptor] = ACTIONS(671),
    [anon_sym_RPAREN] = ACTIONS(671),
    [anon_sym_DQUOTE] = ACTIONS(671),
    [sym_raw_string] = ACTIONS(785),
    [anon_sym_DOLLAR] = ACTIONS(785),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(671),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(671),
    [anon_sym_BQUOTE] = ACTIONS(671),
    [anon_sym_LT] = ACTIONS(785),
    [anon_sym_GT] = ACTIONS(785),
    [anon_sym_GT_GT] = ACTIONS(671),
    [anon_sym_AMP_GT] = ACTIONS(785),
    [anon_sym_AMP_GT_GT] = ACTIONS(671),
    [anon_sym_LT_AMP] = ACTIONS(671),
    [anon_sym_GT_AMP] = ACTIONS(671),
    [anon_sym_LT_LT] = ACTIONS(785),
    [anon_sym_LT_LT_DASH] = ACTIONS(671),
    [sym_word] = ACTIONS(673),
    [sym_comment] = ACTIONS(119),
  },
  [394] = {
    [sym_file_descriptor] = ACTIONS(995),
    [anon_sym_RPAREN] = ACTIONS(995),
    [anon_sym_BQUOTE] = ACTIONS(995),
    [anon_sym_LT] = ACTIONS(1107),
    [anon_sym_GT] = ACTIONS(1107),
    [anon_sym_GT_GT] = ACTIONS(995),
    [anon_sym_AMP_GT] = ACTIONS(1107),
    [anon_sym_AMP_GT_GT] = ACTIONS(995),
    [anon_sym_LT_AMP] = ACTIONS(995),
    [anon_sym_GT_AMP] = ACTIONS(995),
    [anon_sym_LT_LT] = ACTIONS(1107),
    [anon_sym_LT_LT_DASH] = ACTIONS(995),
    [sym_comment] = ACTIONS(119),
  },
  [395] = {
    [sym_file_redirect] = STATE(261),
    [sym_heredoc_redirect] = STATE(261),
    [sym_file_descriptor] = ACTIONS(367),
    [anon_sym_RPAREN] = ACTIONS(1109),
    [anon_sym_BQUOTE] = ACTIONS(1109),
    [anon_sym_LT] = ACTIONS(635),
    [anon_sym_GT] = ACTIONS(635),
    [anon_sym_GT_GT] = ACTIONS(637),
    [anon_sym_AMP_GT] = ACTIONS(635),
    [anon_sym_AMP_GT_GT] = ACTIONS(637),
    [anon_sym_LT_AMP] = ACTIONS(637),
    [anon_sym_GT_AMP] = ACTIONS(637),
    [anon_sym_LT_LT] = ACTIONS(639),
    [anon_sym_LT_LT_DASH] = ACTIONS(641),
    [sym_comment] = ACTIONS(119),
  },
  [396] = {
    [sym_file_redirect] = STATE(261),
    [sym_heredoc_redirect] = STATE(261),
    [sym_file_descriptor] = ACTIONS(367),
    [anon_sym_RPAREN] = ACTIONS(1111),
    [anon_sym_BQUOTE] = ACTIONS(1111),
    [anon_sym_LT] = ACTIONS(635),
    [anon_sym_GT] = ACTIONS(635),
    [anon_sym_GT_GT] = ACTIONS(637),
    [anon_sym_AMP_GT] = ACTIONS(635),
    [anon_sym_AMP_GT_GT] = ACTIONS(637),
    [anon_sym_LT_AMP] = ACTIONS(637),
    [anon_sym_GT_AMP] = ACTIONS(637),
    [anon_sym_LT_LT] = ACTIONS(639),
    [anon_sym_LT_LT_DASH] = ACTIONS(641),
    [sym_comment] = ACTIONS(119),
  },
  [397] = {
    [sym_file_descriptor] = ACTIONS(1075),
    [anon_sym_COLON] = ACTIONS(1075),
    [anon_sym_DQUOTE] = ACTIONS(1075),
    [sym_raw_string] = ACTIONS(1077),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1075),
    [anon_sym_BQUOTE] = ACTIONS(1075),
    [anon_sym_LT] = ACTIONS(1077),
    [anon_sym_GT] = ACTIONS(1077),
    [anon_sym_GT_GT] = ACTIONS(1077),
    [anon_sym_AMP_GT] = ACTIONS(1077),
    [anon_sym_AMP_GT_GT] = ACTIONS(1077),
    [anon_sym_LT_AMP] = ACTIONS(1077),
    [anon_sym_GT_AMP] = ACTIONS(1077),
    [sym_leading_word] = ACTIONS(1071),
    [sym_comment] = ACTIONS(119),
  },
  [398] = {
    [sym_file_descriptor] = ACTIONS(1079),
    [anon_sym_COLON] = ACTIONS(1079),
    [anon_sym_DQUOTE] = ACTIONS(1079),
    [sym_raw_string] = ACTIONS(1081),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1079),
    [anon_sym_BQUOTE] = ACTIONS(1079),
    [anon_sym_LT] = ACTIONS(1081),
    [anon_sym_GT] = ACTIONS(1081),
    [anon_sym_GT_GT] = ACTIONS(1081),
    [anon_sym_AMP_GT] = ACTIONS(1081),
    [anon_sym_AMP_GT_GT] = ACTIONS(1081),
    [anon_sym_LT_AMP] = ACTIONS(1081),
    [anon_sym_GT_AMP] = ACTIONS(1081),
    [sym_leading_word] = ACTIONS(1073),
    [sym_comment] = ACTIONS(119),
  },
  [399] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1113),
    [anon_sym_PIPE] = ACTIONS(1113),
    [anon_sym_PIPE_AMP] = ACTIONS(1113),
    [anon_sym_AMP_AMP] = ACTIONS(1113),
    [anon_sym_PIPE_PIPE] = ACTIONS(1113),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1113),
    [anon_sym_LF] = ACTIONS(1113),
    [anon_sym_AMP] = ACTIONS(1113),
  },
  [400] = {
    [anon_sym_RBRACE] = ACTIONS(1115),
    [sym_comment] = ACTIONS(119),
  },
  [401] = {
    [anon_sym_RBRACE] = ACTIONS(1117),
    [sym_comment] = ACTIONS(119),
  },
  [402] = {
    [sym__terminated_statement] = STATE(84),
    [sym_for_statement] = STATE(19),
    [sym_while_statement] = STATE(19),
    [sym_if_statement] = STATE(19),
    [sym_case_statement] = STATE(19),
    [sym_function_definition] = STATE(19),
    [sym_bracket_command] = STATE(19),
    [sym_command] = STATE(19),
    [sym_pipeline] = STATE(19),
    [sym_list] = STATE(19),
    [sym_subshell] = STATE(19),
    [sym_environment_variable_assignment] = STATE(20),
    [sym_string] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(23),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_fi] = ACTIONS(1119),
    [anon_sym_elif] = ACTIONS(1119),
    [anon_sym_else] = ACTIONS(1119),
    [anon_sym_case] = ACTIONS(95),
    [anon_sym_function] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(103),
    [anon_sym_COLON] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_raw_string] = ACTIONS(109),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(117),
    [sym_comment] = ACTIONS(119),
  },
  [403] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1121),
    [anon_sym_PIPE] = ACTIONS(1121),
    [anon_sym_PIPE_AMP] = ACTIONS(1121),
    [anon_sym_AMP_AMP] = ACTIONS(1121),
    [anon_sym_PIPE_PIPE] = ACTIONS(1121),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1121),
    [anon_sym_LF] = ACTIONS(1121),
    [anon_sym_AMP] = ACTIONS(1121),
  },
  [404] = {
    [anon_sym_esac] = ACTIONS(1123),
    [anon_sym_DQUOTE] = ACTIONS(1125),
    [sym_raw_string] = ACTIONS(1123),
    [anon_sym_DOLLAR] = ACTIONS(1123),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1125),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1125),
    [anon_sym_BQUOTE] = ACTIONS(1125),
    [sym_word] = ACTIONS(1127),
    [sym_comment] = ACTIONS(119),
  },
  [405] = {
    [sym__terminated_statement] = STATE(84),
    [sym_for_statement] = STATE(19),
    [sym_while_statement] = STATE(19),
    [sym_if_statement] = STATE(19),
    [sym_case_statement] = STATE(19),
    [sym_function_definition] = STATE(19),
    [sym_bracket_command] = STATE(19),
    [sym_command] = STATE(19),
    [sym_pipeline] = STATE(19),
    [sym_list] = STATE(19),
    [sym_subshell] = STATE(19),
    [sym_environment_variable_assignment] = STATE(20),
    [sym_string] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(23),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_case] = ACTIONS(95),
    [anon_sym_SEMI_SEMI] = ACTIONS(1129),
    [anon_sym_function] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(103),
    [anon_sym_COLON] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_raw_string] = ACTIONS(109),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(117),
    [sym_comment] = ACTIONS(119),
  },
  [406] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1131),
    [anon_sym_PIPE] = ACTIONS(1131),
    [anon_sym_PIPE_AMP] = ACTIONS(1131),
    [anon_sym_AMP_AMP] = ACTIONS(1131),
    [anon_sym_PIPE_PIPE] = ACTIONS(1131),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1131),
    [anon_sym_LF] = ACTIONS(1131),
    [anon_sym_AMP] = ACTIONS(1131),
  },
  [407] = {
    [sym_file_descriptor] = ACTIONS(1075),
    [anon_sym_SEMI_SEMI] = ACTIONS(1071),
    [anon_sym_PIPE] = ACTIONS(1071),
    [anon_sym_PIPE_AMP] = ACTIONS(1071),
    [anon_sym_AMP_AMP] = ACTIONS(1071),
    [anon_sym_PIPE_PIPE] = ACTIONS(1071),
    [anon_sym_DQUOTE] = ACTIONS(1071),
    [sym_raw_string] = ACTIONS(1071),
    [anon_sym_DOLLAR] = ACTIONS(1071),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1071),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1071),
    [anon_sym_BQUOTE] = ACTIONS(1071),
    [anon_sym_LT] = ACTIONS(1071),
    [anon_sym_GT] = ACTIONS(1071),
    [anon_sym_GT_GT] = ACTIONS(1071),
    [anon_sym_AMP_GT] = ACTIONS(1071),
    [anon_sym_AMP_GT_GT] = ACTIONS(1071),
    [anon_sym_LT_AMP] = ACTIONS(1071),
    [anon_sym_GT_AMP] = ACTIONS(1071),
    [anon_sym_LT_LT] = ACTIONS(1071),
    [anon_sym_LT_LT_DASH] = ACTIONS(1071),
    [sym_word] = ACTIONS(1071),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1071),
    [anon_sym_LF] = ACTIONS(1071),
    [anon_sym_AMP] = ACTIONS(1071),
  },
  [408] = {
    [sym_file_descriptor] = ACTIONS(1079),
    [anon_sym_SEMI_SEMI] = ACTIONS(1073),
    [anon_sym_PIPE] = ACTIONS(1073),
    [anon_sym_PIPE_AMP] = ACTIONS(1073),
    [anon_sym_AMP_AMP] = ACTIONS(1073),
    [anon_sym_PIPE_PIPE] = ACTIONS(1073),
    [anon_sym_DQUOTE] = ACTIONS(1073),
    [sym_raw_string] = ACTIONS(1073),
    [anon_sym_DOLLAR] = ACTIONS(1073),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1073),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1073),
    [anon_sym_BQUOTE] = ACTIONS(1073),
    [anon_sym_LT] = ACTIONS(1073),
    [anon_sym_GT] = ACTIONS(1073),
    [anon_sym_GT_GT] = ACTIONS(1073),
    [anon_sym_AMP_GT] = ACTIONS(1073),
    [anon_sym_AMP_GT_GT] = ACTIONS(1073),
    [anon_sym_LT_AMP] = ACTIONS(1073),
    [anon_sym_GT_AMP] = ACTIONS(1073),
    [anon_sym_LT_LT] = ACTIONS(1073),
    [anon_sym_LT_LT_DASH] = ACTIONS(1073),
    [sym_word] = ACTIONS(1073),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1073),
    [anon_sym_LF] = ACTIONS(1073),
    [anon_sym_AMP] = ACTIONS(1073),
  },
  [409] = {
    [sym_file_descriptor] = ACTIONS(1075),
    [anon_sym_SEMI_SEMI] = ACTIONS(1071),
    [anon_sym_PIPE] = ACTIONS(1071),
    [anon_sym_PIPE_AMP] = ACTIONS(1071),
    [anon_sym_AMP_AMP] = ACTIONS(1071),
    [anon_sym_PIPE_PIPE] = ACTIONS(1071),
    [anon_sym_LT] = ACTIONS(1071),
    [anon_sym_GT] = ACTIONS(1071),
    [anon_sym_GT_GT] = ACTIONS(1071),
    [anon_sym_AMP_GT] = ACTIONS(1071),
    [anon_sym_AMP_GT_GT] = ACTIONS(1071),
    [anon_sym_LT_AMP] = ACTIONS(1071),
    [anon_sym_GT_AMP] = ACTIONS(1071),
    [anon_sym_LT_LT] = ACTIONS(1071),
    [anon_sym_LT_LT_DASH] = ACTIONS(1071),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1071),
    [anon_sym_LF] = ACTIONS(1071),
    [anon_sym_AMP] = ACTIONS(1071),
  },
  [410] = {
    [sym_file_descriptor] = ACTIONS(1079),
    [anon_sym_SEMI_SEMI] = ACTIONS(1073),
    [anon_sym_PIPE] = ACTIONS(1073),
    [anon_sym_PIPE_AMP] = ACTIONS(1073),
    [anon_sym_AMP_AMP] = ACTIONS(1073),
    [anon_sym_PIPE_PIPE] = ACTIONS(1073),
    [anon_sym_LT] = ACTIONS(1073),
    [anon_sym_GT] = ACTIONS(1073),
    [anon_sym_GT_GT] = ACTIONS(1073),
    [anon_sym_AMP_GT] = ACTIONS(1073),
    [anon_sym_AMP_GT_GT] = ACTIONS(1073),
    [anon_sym_LT_AMP] = ACTIONS(1073),
    [anon_sym_GT_AMP] = ACTIONS(1073),
    [anon_sym_LT_LT] = ACTIONS(1073),
    [anon_sym_LT_LT_DASH] = ACTIONS(1073),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1073),
    [anon_sym_LF] = ACTIONS(1073),
    [anon_sym_AMP] = ACTIONS(1073),
  },
  [411] = {
    [anon_sym_RBRACE] = ACTIONS(1133),
    [sym_comment] = ACTIONS(119),
  },
  [412] = {
    [anon_sym_RBRACE] = ACTIONS(1135),
    [sym_comment] = ACTIONS(119),
  },
  [413] = {
    [anon_sym_RBRACE] = ACTIONS(1137),
    [sym_comment] = ACTIONS(119),
  },
  [414] = {
    [anon_sym_RBRACE] = ACTIONS(1139),
    [sym_comment] = ACTIONS(119),
  },
  [415] = {
    [sym_file_descriptor] = ACTIONS(1075),
    [anon_sym_SEMI_SEMI] = ACTIONS(1071),
    [anon_sym_COLON] = ACTIONS(1071),
    [anon_sym_PIPE] = ACTIONS(1071),
    [anon_sym_PIPE_AMP] = ACTIONS(1071),
    [anon_sym_AMP_AMP] = ACTIONS(1071),
    [anon_sym_PIPE_PIPE] = ACTIONS(1071),
    [anon_sym_DQUOTE] = ACTIONS(1071),
    [sym_raw_string] = ACTIONS(1071),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1071),
    [anon_sym_BQUOTE] = ACTIONS(1071),
    [anon_sym_LT] = ACTIONS(1071),
    [anon_sym_GT] = ACTIONS(1071),
    [anon_sym_GT_GT] = ACTIONS(1071),
    [anon_sym_AMP_GT] = ACTIONS(1071),
    [anon_sym_AMP_GT_GT] = ACTIONS(1071),
    [anon_sym_LT_AMP] = ACTIONS(1071),
    [anon_sym_GT_AMP] = ACTIONS(1071),
    [sym_leading_word] = ACTIONS(1071),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1071),
    [anon_sym_LF] = ACTIONS(1071),
    [anon_sym_AMP] = ACTIONS(1071),
  },
  [416] = {
    [sym_file_descriptor] = ACTIONS(1079),
    [anon_sym_SEMI_SEMI] = ACTIONS(1073),
    [anon_sym_COLON] = ACTIONS(1073),
    [anon_sym_PIPE] = ACTIONS(1073),
    [anon_sym_PIPE_AMP] = ACTIONS(1073),
    [anon_sym_AMP_AMP] = ACTIONS(1073),
    [anon_sym_PIPE_PIPE] = ACTIONS(1073),
    [anon_sym_DQUOTE] = ACTIONS(1073),
    [sym_raw_string] = ACTIONS(1073),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1073),
    [anon_sym_BQUOTE] = ACTIONS(1073),
    [anon_sym_LT] = ACTIONS(1073),
    [anon_sym_GT] = ACTIONS(1073),
    [anon_sym_GT_GT] = ACTIONS(1073),
    [anon_sym_AMP_GT] = ACTIONS(1073),
    [anon_sym_AMP_GT_GT] = ACTIONS(1073),
    [anon_sym_LT_AMP] = ACTIONS(1073),
    [anon_sym_GT_AMP] = ACTIONS(1073),
    [sym_leading_word] = ACTIONS(1073),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1073),
    [anon_sym_LF] = ACTIONS(1073),
    [anon_sym_AMP] = ACTIONS(1073),
  },
  [417] = {
    [anon_sym_esac] = ACTIONS(1141),
    [anon_sym_DQUOTE] = ACTIONS(1143),
    [sym_raw_string] = ACTIONS(1141),
    [anon_sym_DOLLAR] = ACTIONS(1141),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1143),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1143),
    [anon_sym_BQUOTE] = ACTIONS(1143),
    [sym_word] = ACTIONS(1145),
    [sym_comment] = ACTIONS(119),
  },
  [418] = {
    [sym__heredoc_middle] = ACTIONS(1075),
    [sym__heredoc_end] = ACTIONS(1075),
    [anon_sym_DOLLAR] = ACTIONS(1077),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1075),
    [sym_comment] = ACTIONS(119),
  },
  [419] = {
    [sym__heredoc_middle] = ACTIONS(1079),
    [sym__heredoc_end] = ACTIONS(1079),
    [anon_sym_DOLLAR] = ACTIONS(1081),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1079),
    [sym_comment] = ACTIONS(119),
  },
  [420] = {
    [sym_file_descriptor] = ACTIONS(1075),
    [anon_sym_RPAREN] = ACTIONS(1075),
    [anon_sym_DQUOTE] = ACTIONS(1075),
    [sym_raw_string] = ACTIONS(1077),
    [anon_sym_DOLLAR] = ACTIONS(1077),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1075),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1075),
    [anon_sym_BQUOTE] = ACTIONS(1075),
    [anon_sym_LT] = ACTIONS(1077),
    [anon_sym_GT] = ACTIONS(1077),
    [anon_sym_GT_GT] = ACTIONS(1075),
    [anon_sym_AMP_GT] = ACTIONS(1077),
    [anon_sym_AMP_GT_GT] = ACTIONS(1075),
    [anon_sym_LT_AMP] = ACTIONS(1075),
    [anon_sym_GT_AMP] = ACTIONS(1075),
    [anon_sym_LT_LT] = ACTIONS(1077),
    [anon_sym_LT_LT_DASH] = ACTIONS(1075),
    [sym_word] = ACTIONS(1071),
    [sym_comment] = ACTIONS(119),
  },
  [421] = {
    [sym_file_descriptor] = ACTIONS(1079),
    [anon_sym_RPAREN] = ACTIONS(1079),
    [anon_sym_DQUOTE] = ACTIONS(1079),
    [sym_raw_string] = ACTIONS(1081),
    [anon_sym_DOLLAR] = ACTIONS(1081),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1079),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1079),
    [anon_sym_BQUOTE] = ACTIONS(1079),
    [anon_sym_LT] = ACTIONS(1081),
    [anon_sym_GT] = ACTIONS(1081),
    [anon_sym_GT_GT] = ACTIONS(1079),
    [anon_sym_AMP_GT] = ACTIONS(1081),
    [anon_sym_AMP_GT_GT] = ACTIONS(1079),
    [anon_sym_LT_AMP] = ACTIONS(1079),
    [anon_sym_GT_AMP] = ACTIONS(1079),
    [anon_sym_LT_LT] = ACTIONS(1081),
    [anon_sym_LT_LT_DASH] = ACTIONS(1079),
    [sym_word] = ACTIONS(1073),
    [sym_comment] = ACTIONS(119),
  },
  [422] = {
    [sym__terminated_statement] = STATE(192),
    [sym_for_statement] = STATE(27),
    [sym_while_statement] = STATE(27),
    [sym_if_statement] = STATE(27),
    [sym_case_statement] = STATE(27),
    [sym_function_definition] = STATE(27),
    [sym_bracket_command] = STATE(27),
    [sym_command] = STATE(27),
    [sym_pipeline] = STATE(27),
    [sym_list] = STATE(27),
    [sym_subshell] = STATE(27),
    [sym_environment_variable_assignment] = STATE(28),
    [sym_string] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(23),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_for] = ACTIONS(1147),
    [anon_sym_while] = ACTIONS(1149),
    [anon_sym_if] = ACTIONS(1151),
    [anon_sym_case] = ACTIONS(1153),
    [anon_sym_SEMI_SEMI] = ACTIONS(1155),
    [anon_sym_function] = ACTIONS(1157),
    [anon_sym_LPAREN] = ACTIONS(1159),
    [anon_sym_LBRACK] = ACTIONS(1161),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1163),
    [anon_sym_COLON] = ACTIONS(1165),
    [anon_sym_DQUOTE] = ACTIONS(1167),
    [sym_raw_string] = ACTIONS(1165),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1169),
    [anon_sym_BQUOTE] = ACTIONS(1171),
    [anon_sym_LT] = ACTIONS(1173),
    [anon_sym_GT] = ACTIONS(1173),
    [anon_sym_GT_GT] = ACTIONS(1173),
    [anon_sym_AMP_GT] = ACTIONS(1173),
    [anon_sym_AMP_GT_GT] = ACTIONS(1173),
    [anon_sym_LT_AMP] = ACTIONS(1173),
    [anon_sym_GT_AMP] = ACTIONS(1173),
    [sym_leading_word] = ACTIONS(117),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1155),
    [anon_sym_LF] = ACTIONS(1155),
    [anon_sym_AMP] = ACTIONS(1155),
  },
  [423] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1175),
    [anon_sym_PIPE] = ACTIONS(1175),
    [anon_sym_PIPE_AMP] = ACTIONS(1175),
    [anon_sym_AMP_AMP] = ACTIONS(1175),
    [anon_sym_PIPE_PIPE] = ACTIONS(1175),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1175),
    [anon_sym_LF] = ACTIONS(1175),
    [anon_sym_AMP] = ACTIONS(1175),
  },
  [424] = {
    [sym__terminated_statement] = STATE(18),
    [sym_for_statement] = STATE(19),
    [sym_while_statement] = STATE(19),
    [sym_if_statement] = STATE(19),
    [sym_elif_clause] = STATE(198),
    [sym_else_clause] = STATE(199),
    [sym_case_statement] = STATE(19),
    [sym_function_definition] = STATE(19),
    [sym_bracket_command] = STATE(19),
    [sym_command] = STATE(19),
    [sym_pipeline] = STATE(19),
    [sym_list] = STATE(19),
    [sym_subshell] = STATE(19),
    [sym_environment_variable_assignment] = STATE(20),
    [sym_string] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(21),
    [aux_sym_program_repeat1] = STATE(469),
    [aux_sym_if_statement_repeat1] = STATE(201),
    [aux_sym_command_repeat1] = STATE(23),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_fi] = ACTIONS(1178),
    [anon_sym_elif] = ACTIONS(1181),
    [anon_sym_else] = ACTIONS(1184),
    [anon_sym_case] = ACTIONS(95),
    [anon_sym_function] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(103),
    [anon_sym_COLON] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_raw_string] = ACTIONS(109),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(117),
    [sym_comment] = ACTIONS(119),
  },
  [425] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1187),
    [anon_sym_PIPE] = ACTIONS(1187),
    [anon_sym_PIPE_AMP] = ACTIONS(1187),
    [anon_sym_AMP_AMP] = ACTIONS(1187),
    [anon_sym_PIPE_PIPE] = ACTIONS(1187),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1187),
    [anon_sym_LF] = ACTIONS(1187),
    [anon_sym_AMP] = ACTIONS(1187),
  },
  [426] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1192),
    [anon_sym_PIPE] = ACTIONS(1192),
    [anon_sym_PIPE_AMP] = ACTIONS(1192),
    [anon_sym_AMP_AMP] = ACTIONS(1192),
    [anon_sym_PIPE_PIPE] = ACTIONS(1192),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1192),
    [anon_sym_LF] = ACTIONS(1192),
    [anon_sym_AMP] = ACTIONS(1192),
  },
  [427] = {
    [sym__terminated_statement] = STATE(18),
    [sym_for_statement] = STATE(19),
    [sym_while_statement] = STATE(19),
    [sym_if_statement] = STATE(19),
    [sym_case_statement] = STATE(19),
    [sym_function_definition] = STATE(19),
    [sym_compound_statement] = STATE(450),
    [sym_bracket_command] = STATE(19),
    [sym_command] = STATE(19),
    [sym_pipeline] = STATE(19),
    [sym_list] = STATE(19),
    [sym_subshell] = STATE(19),
    [sym_environment_variable_assignment] = STATE(20),
    [sym_string] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(21),
    [aux_sym_program_repeat1] = STATE(405),
    [aux_sym_command_repeat1] = STATE(23),
    [sym_file_descriptor] = ACTIONS(1196),
    [anon_sym_for] = ACTIONS(1147),
    [anon_sym_in] = ACTIONS(673),
    [anon_sym_while] = ACTIONS(1149),
    [anon_sym_if] = ACTIONS(1151),
    [anon_sym_case] = ACTIONS(1153),
    [anon_sym_RPAREN] = ACTIONS(673),
    [anon_sym_SEMI_SEMI] = ACTIONS(1199),
    [anon_sym_function] = ACTIONS(1157),
    [anon_sym_LPAREN] = ACTIONS(1159),
    [anon_sym_LBRACE] = ACTIONS(1204),
    [anon_sym_RBRACE] = ACTIONS(673),
    [anon_sym_LBRACK] = ACTIONS(1161),
    [anon_sym_RBRACK] = ACTIONS(673),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1163),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(673),
    [anon_sym_COLON] = ACTIONS(1206),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(673),
    [anon_sym_PIPE] = ACTIONS(1209),
    [anon_sym_PIPE_AMP] = ACTIONS(1209),
    [anon_sym_AMP_AMP] = ACTIONS(1209),
    [anon_sym_PIPE_PIPE] = ACTIONS(1209),
    [anon_sym_DQUOTE] = ACTIONS(1213),
    [sym__quoted_chars] = ACTIONS(673),
    [sym_raw_string] = ACTIONS(1206),
    [anon_sym_DOLLAR] = ACTIONS(673),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(673),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1216),
    [anon_sym_BQUOTE] = ACTIONS(1219),
    [anon_sym_LT] = ACTIONS(1222),
    [anon_sym_GT] = ACTIONS(1222),
    [anon_sym_GT_GT] = ACTIONS(1222),
    [anon_sym_AMP_GT] = ACTIONS(1222),
    [anon_sym_AMP_GT_GT] = ACTIONS(1222),
    [anon_sym_LT_AMP] = ACTIONS(1222),
    [anon_sym_GT_AMP] = ACTIONS(1222),
    [anon_sym_LT_LT] = ACTIONS(673),
    [anon_sym_LT_LT_DASH] = ACTIONS(673),
    [sym_leading_word] = ACTIONS(1225),
    [sym_word] = ACTIONS(673),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1209),
    [anon_sym_LF] = ACTIONS(1209),
    [anon_sym_AMP] = ACTIONS(1209),
  },
  [428] = {
    [sym__terminated_statement] = STATE(18),
    [sym_for_statement] = STATE(19),
    [sym_while_statement] = STATE(19),
    [sym_if_statement] = STATE(19),
    [sym_case_statement] = STATE(19),
    [sym_function_definition] = STATE(19),
    [sym_bracket_command] = STATE(19),
    [sym_command] = STATE(19),
    [sym_pipeline] = STATE(19),
    [sym_list] = STATE(19),
    [sym_subshell] = STATE(19),
    [sym_environment_variable_assignment] = STATE(20),
    [sym_string] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(21),
    [aux_sym_program_repeat1] = STATE(38),
    [aux_sym_command_repeat1] = STATE(23),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_case] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(1228),
    [anon_sym_function] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(103),
    [anon_sym_COLON] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_raw_string] = ACTIONS(109),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(117),
    [sym_comment] = ACTIONS(119),
  },
  [429] = {
    [sym__heredoc_middle] = ACTIONS(1230),
    [sym__heredoc_end] = ACTIONS(1230),
    [sym_file_descriptor] = ACTIONS(1230),
    [anon_sym_in] = ACTIONS(1235),
    [anon_sym_RPAREN] = ACTIONS(1235),
    [anon_sym_SEMI_SEMI] = ACTIONS(1240),
    [anon_sym_RBRACE] = ACTIONS(1235),
    [anon_sym_RBRACK] = ACTIONS(1235),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1235),
    [anon_sym_COLON] = ACTIONS(1235),
    [anon_sym_PIPE] = ACTIONS(1240),
    [anon_sym_PIPE_AMP] = ACTIONS(1240),
    [anon_sym_AMP_AMP] = ACTIONS(1240),
    [anon_sym_PIPE_PIPE] = ACTIONS(1240),
    [anon_sym_DQUOTE] = ACTIONS(1235),
    [sym__quoted_chars] = ACTIONS(1235),
    [sym_raw_string] = ACTIONS(1235),
    [anon_sym_DOLLAR] = ACTIONS(1235),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1235),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1235),
    [anon_sym_BQUOTE] = ACTIONS(1235),
    [anon_sym_LT] = ACTIONS(1235),
    [anon_sym_GT] = ACTIONS(1235),
    [anon_sym_GT_GT] = ACTIONS(1235),
    [anon_sym_AMP_GT] = ACTIONS(1235),
    [anon_sym_AMP_GT_GT] = ACTIONS(1235),
    [anon_sym_LT_AMP] = ACTIONS(1235),
    [anon_sym_GT_AMP] = ACTIONS(1235),
    [anon_sym_LT_LT] = ACTIONS(1235),
    [anon_sym_LT_LT_DASH] = ACTIONS(1235),
    [sym_leading_word] = ACTIONS(1235),
    [sym_word] = ACTIONS(1235),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1240),
    [anon_sym_LF] = ACTIONS(1240),
    [anon_sym_AMP] = ACTIONS(1240),
  },
  [430] = {
    [sym_string] = STATE(473),
    [sym_simple_expansion] = STATE(473),
    [sym_expansion] = STATE(473),
    [sym_command_substitution] = STATE(473),
    [sym_file_redirect] = STATE(475),
    [sym_heredoc_redirect] = STATE(475),
    [aux_sym_command_repeat2] = STATE(476),
    [sym_file_descriptor] = ACTIONS(1247),
    [anon_sym_RPAREN] = ACTIONS(1249),
    [anon_sym_SEMI_SEMI] = ACTIONS(1249),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(1252),
    [anon_sym_PIPE] = ACTIONS(1249),
    [anon_sym_PIPE_AMP] = ACTIONS(1249),
    [anon_sym_AMP_AMP] = ACTIONS(1249),
    [anon_sym_PIPE_PIPE] = ACTIONS(1249),
    [anon_sym_DQUOTE] = ACTIONS(1254),
    [sym_raw_string] = ACTIONS(1256),
    [anon_sym_DOLLAR] = ACTIONS(1258),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1260),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1262),
    [anon_sym_BQUOTE] = ACTIONS(1264),
    [anon_sym_LT] = ACTIONS(1268),
    [anon_sym_GT] = ACTIONS(1268),
    [anon_sym_GT_GT] = ACTIONS(1268),
    [anon_sym_AMP_GT] = ACTIONS(1268),
    [anon_sym_AMP_GT_GT] = ACTIONS(1268),
    [anon_sym_LT_AMP] = ACTIONS(1268),
    [anon_sym_GT_AMP] = ACTIONS(1268),
    [anon_sym_LT_LT] = ACTIONS(1270),
    [anon_sym_LT_LT_DASH] = ACTIONS(1270),
    [sym_word] = ACTIONS(1256),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1249),
    [anon_sym_LF] = ACTIONS(1249),
    [anon_sym_AMP] = ACTIONS(1249),
  },
  [431] = {
    [sym_string] = STATE(478),
    [sym_simple_expansion] = STATE(478),
    [sym_expansion] = STATE(478),
    [sym_command_substitution] = STATE(478),
    [sym__empty_value] = ACTIONS(419),
    [anon_sym_DQUOTE] = ACTIONS(1272),
    [sym_raw_string] = ACTIONS(1274),
    [anon_sym_DOLLAR] = ACTIONS(1276),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1278),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1280),
    [anon_sym_BQUOTE] = ACTIONS(1282),
    [sym_word] = ACTIONS(1284),
    [sym_comment] = ACTIONS(119),
  },
  [432] = {
    [sym_simple_expansion] = STATE(54),
    [sym_expansion] = STATE(54),
    [sym_command_substitution] = STATE(54),
    [aux_sym_string_repeat1] = STATE(466),
    [sym_file_descriptor] = ACTIONS(1286),
    [anon_sym_in] = ACTIONS(1289),
    [anon_sym_RPAREN] = ACTIONS(1289),
    [anon_sym_SEMI_SEMI] = ACTIONS(1289),
    [anon_sym_RBRACE] = ACTIONS(1289),
    [anon_sym_RBRACK] = ACTIONS(1289),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1289),
    [anon_sym_COLON] = ACTIONS(1289),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(1289),
    [anon_sym_PIPE] = ACTIONS(1289),
    [anon_sym_PIPE_AMP] = ACTIONS(1289),
    [anon_sym_AMP_AMP] = ACTIONS(1289),
    [anon_sym_PIPE_PIPE] = ACTIONS(1289),
    [anon_sym_DQUOTE] = ACTIONS(1292),
    [sym__quoted_chars] = ACTIONS(171),
    [sym_raw_string] = ACTIONS(1289),
    [anon_sym_DOLLAR] = ACTIONS(1296),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1300),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1304),
    [anon_sym_BQUOTE] = ACTIONS(1308),
    [anon_sym_LT] = ACTIONS(1289),
    [anon_sym_GT] = ACTIONS(1289),
    [anon_sym_GT_GT] = ACTIONS(1289),
    [anon_sym_AMP_GT] = ACTIONS(1289),
    [anon_sym_AMP_GT_GT] = ACTIONS(1289),
    [anon_sym_LT_AMP] = ACTIONS(1289),
    [anon_sym_GT_AMP] = ACTIONS(1289),
    [anon_sym_LT_LT] = ACTIONS(1289),
    [anon_sym_LT_LT_DASH] = ACTIONS(1289),
    [sym_leading_word] = ACTIONS(1289),
    [sym_word] = ACTIONS(1289),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1289),
    [anon_sym_LF] = ACTIONS(1289),
    [anon_sym_AMP] = ACTIONS(1289),
  },
  [433] = {
    [sym_special_variable_name] = STATE(486),
    [sym__heredoc_middle] = ACTIONS(489),
    [sym__heredoc_end] = ACTIONS(489),
    [sym_file_descriptor] = ACTIONS(489),
    [anon_sym_in] = ACTIONS(483),
    [anon_sym_RPAREN] = ACTIONS(483),
    [anon_sym_SEMI_SEMI] = ACTIONS(483),
    [anon_sym_RBRACE] = ACTIONS(483),
    [anon_sym_RBRACK] = ACTIONS(483),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(483),
    [anon_sym_COLON] = ACTIONS(483),
    [anon_sym_PIPE] = ACTIONS(483),
    [anon_sym_PIPE_AMP] = ACTIONS(483),
    [anon_sym_AMP_AMP] = ACTIONS(483),
    [anon_sym_PIPE_PIPE] = ACTIONS(483),
    [anon_sym_EQ] = ACTIONS(483),
    [anon_sym_DQUOTE] = ACTIONS(483),
    [sym__quoted_chars] = ACTIONS(483),
    [sym_raw_string] = ACTIONS(483),
    [anon_sym_DOLLAR] = ACTIONS(1312),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(483),
    [anon_sym_COLON_QMARK] = ACTIONS(491),
    [anon_sym_COLON_DASH] = ACTIONS(491),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(483),
    [anon_sym_BQUOTE] = ACTIONS(483),
    [anon_sym_LT] = ACTIONS(483),
    [anon_sym_GT] = ACTIONS(483),
    [anon_sym_GT_GT] = ACTIONS(483),
    [anon_sym_AMP_GT] = ACTIONS(483),
    [anon_sym_AMP_GT_GT] = ACTIONS(483),
    [anon_sym_LT_AMP] = ACTIONS(483),
    [anon_sym_GT_AMP] = ACTIONS(483),
    [anon_sym_LT_LT] = ACTIONS(483),
    [anon_sym_LT_LT_DASH] = ACTIONS(483),
    [sym_leading_word] = ACTIONS(483),
    [sym_word] = ACTIONS(483),
    [sym_comment] = ACTIONS(77),
    [sym_simple_variable_name] = ACTIONS(1315),
    [anon_sym_STAR] = ACTIONS(1317),
    [anon_sym_AT] = ACTIONS(1317),
    [anon_sym_POUND] = ACTIONS(1317),
    [anon_sym_QMARK] = ACTIONS(1317),
    [anon_sym_DASH] = ACTIONS(1317),
    [anon_sym_BANG] = ACTIONS(1317),
    [anon_sym_0] = ACTIONS(1317),
    [anon_sym__] = ACTIONS(1317),
    [anon_sym_SEMI] = ACTIONS(483),
    [anon_sym_LF] = ACTIONS(483),
    [anon_sym_AMP] = ACTIONS(483),
  },
  [434] = {
    [sym_command] = STATE(487),
    [sym_environment_variable_assignment] = STATE(21),
    [sym_string] = STATE(67),
    [sym_command_substitution] = STATE(67),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(70),
    [sym_file_descriptor] = ACTIONS(1196),
    [anon_sym_in] = ACTIONS(673),
    [anon_sym_RPAREN] = ACTIONS(673),
    [anon_sym_SEMI_SEMI] = ACTIONS(673),
    [anon_sym_RBRACE] = ACTIONS(673),
    [anon_sym_RBRACK] = ACTIONS(673),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(673),
    [anon_sym_COLON] = ACTIONS(1319),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(673),
    [anon_sym_PIPE] = ACTIONS(673),
    [anon_sym_PIPE_AMP] = ACTIONS(673),
    [anon_sym_AMP_AMP] = ACTIONS(673),
    [anon_sym_PIPE_PIPE] = ACTIONS(673),
    [anon_sym_DQUOTE] = ACTIONS(1322),
    [sym__quoted_chars] = ACTIONS(673),
    [sym_raw_string] = ACTIONS(1319),
    [anon_sym_DOLLAR] = ACTIONS(673),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(673),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1325),
    [anon_sym_BQUOTE] = ACTIONS(1328),
    [anon_sym_LT] = ACTIONS(1222),
    [anon_sym_GT] = ACTIONS(1222),
    [anon_sym_GT_GT] = ACTIONS(1222),
    [anon_sym_AMP_GT] = ACTIONS(1222),
    [anon_sym_AMP_GT_GT] = ACTIONS(1222),
    [anon_sym_LT_AMP] = ACTIONS(1222),
    [anon_sym_GT_AMP] = ACTIONS(1222),
    [anon_sym_LT_LT] = ACTIONS(673),
    [anon_sym_LT_LT_DASH] = ACTIONS(673),
    [sym_leading_word] = ACTIONS(1331),
    [sym_word] = ACTIONS(673),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(673),
    [anon_sym_LF] = ACTIONS(673),
    [anon_sym_AMP] = ACTIONS(673),
  },
  [435] = {
    [sym_string] = STATE(489),
    [sym_simple_expansion] = STATE(489),
    [sym_expansion] = STATE(489),
    [sym_command_substitution] = STATE(489),
    [anon_sym_DQUOTE] = ACTIONS(1334),
    [sym_raw_string] = ACTIONS(1336),
    [anon_sym_DOLLAR] = ACTIONS(1338),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1340),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1342),
    [anon_sym_BQUOTE] = ACTIONS(1344),
    [sym_word] = ACTIONS(1346),
    [sym_comment] = ACTIONS(119),
  },
  [436] = {
    [sym_heredoc] = STATE(458),
    [sym__simple_heredoc] = ACTIONS(1348),
    [sym__heredoc_beginning] = ACTIONS(1350),
    [sym_comment] = ACTIONS(119),
  },
  [437] = {
    [sym__heredoc_middle] = ACTIONS(489),
    [sym__heredoc_end] = ACTIONS(489),
    [sym_file_descriptor] = ACTIONS(489),
    [anon_sym_in] = ACTIONS(483),
    [anon_sym_RPAREN] = ACTIONS(483),
    [anon_sym_SEMI_SEMI] = ACTIONS(483),
    [anon_sym_RBRACE] = ACTIONS(483),
    [anon_sym_RBRACK] = ACTIONS(483),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(483),
    [anon_sym_COLON] = ACTIONS(483),
    [anon_sym_PIPE] = ACTIONS(483),
    [anon_sym_PIPE_AMP] = ACTIONS(483),
    [anon_sym_AMP_AMP] = ACTIONS(483),
    [anon_sym_PIPE_PIPE] = ACTIONS(483),
    [anon_sym_EQ] = ACTIONS(483),
    [anon_sym_DQUOTE] = ACTIONS(483),
    [sym__quoted_chars] = ACTIONS(483),
    [sym_raw_string] = ACTIONS(483),
    [anon_sym_DOLLAR] = ACTIONS(483),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(483),
    [anon_sym_COLON_QMARK] = ACTIONS(491),
    [anon_sym_COLON_DASH] = ACTIONS(491),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(483),
    [anon_sym_BQUOTE] = ACTIONS(483),
    [anon_sym_LT] = ACTIONS(483),
    [anon_sym_GT] = ACTIONS(483),
    [anon_sym_GT_GT] = ACTIONS(483),
    [anon_sym_AMP_GT] = ACTIONS(483),
    [anon_sym_AMP_GT_GT] = ACTIONS(483),
    [anon_sym_LT_AMP] = ACTIONS(483),
    [anon_sym_GT_AMP] = ACTIONS(483),
    [anon_sym_LT_LT] = ACTIONS(483),
    [anon_sym_LT_LT_DASH] = ACTIONS(483),
    [sym_leading_word] = ACTIONS(483),
    [sym_word] = ACTIONS(483),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(483),
    [anon_sym_LF] = ACTIONS(483),
    [anon_sym_AMP] = ACTIONS(483),
  },
  [438] = {
    [sym_case_item] = STATE(306),
    [sym_string] = STATE(304),
    [sym_simple_expansion] = STATE(304),
    [sym_expansion] = STATE(304),
    [sym_command_substitution] = STATE(304),
    [aux_sym_case_statement_repeat1] = STATE(462),
    [sym_file_descriptor] = ACTIONS(437),
    [ts_builtin_sym_end] = ACTIONS(437),
    [anon_sym_for] = ACTIONS(439),
    [anon_sym_in] = ACTIONS(1352),
    [anon_sym_while] = ACTIONS(439),
    [anon_sym_do] = ACTIONS(439),
    [anon_sym_done] = ACTIONS(439),
    [anon_sym_if] = ACTIONS(439),
    [anon_sym_then] = ACTIONS(439),
    [anon_sym_fi] = ACTIONS(439),
    [anon_sym_elif] = ACTIONS(439),
    [anon_sym_else] = ACTIONS(439),
    [anon_sym_case] = ACTIONS(439),
    [anon_sym_esac] = ACTIONS(1354),
    [anon_sym_RPAREN] = ACTIONS(437),
    [anon_sym_SEMI_SEMI] = ACTIONS(437),
    [anon_sym_function] = ACTIONS(439),
    [anon_sym_LPAREN] = ACTIONS(437),
    [anon_sym_RBRACE] = ACTIONS(437),
    [anon_sym_LBRACK] = ACTIONS(439),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(439),
    [anon_sym_COLON] = ACTIONS(439),
    [anon_sym_DQUOTE] = ACTIONS(1356),
    [sym_raw_string] = ACTIONS(1359),
    [anon_sym_DOLLAR] = ACTIONS(749),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1362),
    [anon_sym_BQUOTE] = ACTIONS(1365),
    [anon_sym_LT] = ACTIONS(439),
    [anon_sym_GT] = ACTIONS(439),
    [anon_sym_GT_GT] = ACTIONS(439),
    [anon_sym_AMP_GT] = ACTIONS(439),
    [anon_sym_AMP_GT_GT] = ACTIONS(439),
    [anon_sym_LT_AMP] = ACTIONS(439),
    [anon_sym_GT_AMP] = ACTIONS(439),
    [sym_leading_word] = ACTIONS(441),
    [sym_word] = ACTIONS(751),
    [sym_comment] = ACTIONS(119),
  },
  [439] = {
    [sym_file_descriptor] = ACTIONS(575),
    [anon_sym_RPAREN] = ACTIONS(577),
    [anon_sym_SEMI_SEMI] = ACTIONS(577),
    [anon_sym_PIPE] = ACTIONS(577),
    [anon_sym_PIPE_AMP] = ACTIONS(577),
    [anon_sym_AMP_AMP] = ACTIONS(577),
    [anon_sym_PIPE_PIPE] = ACTIONS(577),
    [anon_sym_BQUOTE] = ACTIONS(577),
    [anon_sym_LT] = ACTIONS(577),
    [anon_sym_GT] = ACTIONS(577),
    [anon_sym_GT_GT] = ACTIONS(577),
    [anon_sym_AMP_GT] = ACTIONS(577),
    [anon_sym_AMP_GT_GT] = ACTIONS(577),
    [anon_sym_LT_AMP] = ACTIONS(577),
    [anon_sym_GT_AMP] = ACTIONS(577),
    [anon_sym_LT_LT] = ACTIONS(577),
    [anon_sym_LT_LT_DASH] = ACTIONS(577),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(577),
    [anon_sym_LF] = ACTIONS(577),
    [anon_sym_AMP] = ACTIONS(577),
  },
  [440] = {
    [sym_simple_expansion] = STATE(238),
    [sym_expansion] = STATE(238),
    [aux_sym_heredoc_repeat1] = STATE(467),
    [sym__heredoc_middle] = ACTIONS(579),
    [sym__heredoc_end] = ACTIONS(1368),
    [anon_sym_DOLLAR] = ACTIONS(583),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(585),
    [sym_comment] = ACTIONS(119),
  },
  [441] = {
    [sym__heredoc_middle] = ACTIONS(1370),
    [sym__heredoc_end] = ACTIONS(1370),
    [anon_sym_DOLLAR] = ACTIONS(1373),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1370),
    [sym_comment] = ACTIONS(119),
  },
  [442] = {
    [sym_file_descriptor] = ACTIONS(1376),
    [anon_sym_RPAREN] = ACTIONS(1379),
    [anon_sym_SEMI_SEMI] = ACTIONS(1379),
    [anon_sym_PIPE] = ACTIONS(1379),
    [anon_sym_PIPE_AMP] = ACTIONS(1379),
    [anon_sym_AMP_AMP] = ACTIONS(1379),
    [anon_sym_PIPE_PIPE] = ACTIONS(1379),
    [anon_sym_BQUOTE] = ACTIONS(1379),
    [anon_sym_LT] = ACTIONS(1379),
    [anon_sym_GT] = ACTIONS(1379),
    [anon_sym_GT_GT] = ACTIONS(1379),
    [anon_sym_AMP_GT] = ACTIONS(1379),
    [anon_sym_AMP_GT_GT] = ACTIONS(1379),
    [anon_sym_LT_AMP] = ACTIONS(1379),
    [anon_sym_GT_AMP] = ACTIONS(1379),
    [anon_sym_LT_LT] = ACTIONS(1379),
    [anon_sym_LT_LT_DASH] = ACTIONS(1379),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1379),
    [anon_sym_LF] = ACTIONS(1379),
    [anon_sym_AMP] = ACTIONS(1379),
  },
  [443] = {
    [anon_sym_LT] = ACTIONS(1382),
    [anon_sym_GT] = ACTIONS(1382),
    [anon_sym_GT_GT] = ACTIONS(1384),
    [anon_sym_AMP_GT] = ACTIONS(1382),
    [anon_sym_AMP_GT_GT] = ACTIONS(1384),
    [anon_sym_LT_AMP] = ACTIONS(1384),
    [anon_sym_GT_AMP] = ACTIONS(1384),
    [sym_comment] = ACTIONS(119),
  },
  [444] = {
    [sym_do_group] = STATE(446),
    [sym_file_descriptor] = ACTIONS(1386),
    [ts_builtin_sym_end] = ACTIONS(1386),
    [anon_sym_for] = ACTIONS(1389),
    [anon_sym_while] = ACTIONS(1389),
    [anon_sym_do] = ACTIONS(1392),
    [anon_sym_done] = ACTIONS(1389),
    [anon_sym_if] = ACTIONS(1389),
    [anon_sym_then] = ACTIONS(1394),
    [anon_sym_fi] = ACTIONS(1389),
    [anon_sym_elif] = ACTIONS(1389),
    [anon_sym_else] = ACTIONS(1389),
    [anon_sym_case] = ACTIONS(1389),
    [anon_sym_RPAREN] = ACTIONS(1386),
    [anon_sym_SEMI_SEMI] = ACTIONS(1386),
    [anon_sym_function] = ACTIONS(1389),
    [anon_sym_LPAREN] = ACTIONS(1386),
    [anon_sym_RBRACE] = ACTIONS(1386),
    [anon_sym_LBRACK] = ACTIONS(1389),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1389),
    [anon_sym_COLON] = ACTIONS(1386),
    [anon_sym_DQUOTE] = ACTIONS(1386),
    [sym_raw_string] = ACTIONS(1389),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1386),
    [anon_sym_BQUOTE] = ACTIONS(1386),
    [anon_sym_LT] = ACTIONS(1389),
    [anon_sym_GT] = ACTIONS(1389),
    [anon_sym_GT_GT] = ACTIONS(1389),
    [anon_sym_AMP_GT] = ACTIONS(1389),
    [anon_sym_AMP_GT_GT] = ACTIONS(1389),
    [anon_sym_LT_AMP] = ACTIONS(1389),
    [anon_sym_GT_AMP] = ACTIONS(1389),
    [sym_leading_word] = ACTIONS(1396),
    [sym_comment] = ACTIONS(119),
  },
  [445] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1399),
    [anon_sym_PIPE] = ACTIONS(1403),
    [anon_sym_PIPE_AMP] = ACTIONS(1403),
    [anon_sym_AMP_AMP] = ACTIONS(1407),
    [anon_sym_PIPE_PIPE] = ACTIONS(1407),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1399),
    [anon_sym_LF] = ACTIONS(1399),
    [anon_sym_AMP] = ACTIONS(1399),
  },
  [446] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1411),
    [anon_sym_PIPE] = ACTIONS(1411),
    [anon_sym_PIPE_AMP] = ACTIONS(1411),
    [anon_sym_AMP_AMP] = ACTIONS(1411),
    [anon_sym_PIPE_PIPE] = ACTIONS(1411),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1411),
    [anon_sym_LF] = ACTIONS(1411),
    [anon_sym_AMP] = ACTIONS(1411),
  },
  [447] = {
    [anon_sym_fi] = ACTIONS(1414),
    [anon_sym_elif] = ACTIONS(1414),
    [anon_sym_else] = ACTIONS(1414),
    [sym_comment] = ACTIONS(119),
  },
  [448] = {
    [anon_sym_fi] = ACTIONS(1417),
    [sym_comment] = ACTIONS(119),
  },
  [449] = {
    [anon_sym_esac] = ACTIONS(1419),
    [anon_sym_DQUOTE] = ACTIONS(1422),
    [sym_raw_string] = ACTIONS(1419),
    [anon_sym_DOLLAR] = ACTIONS(1419),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1422),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1422),
    [anon_sym_BQUOTE] = ACTIONS(1422),
    [sym_word] = ACTIONS(1425),
    [sym_comment] = ACTIONS(119),
  },
  [450] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1428),
    [anon_sym_PIPE] = ACTIONS(1428),
    [anon_sym_PIPE_AMP] = ACTIONS(1428),
    [anon_sym_AMP_AMP] = ACTIONS(1428),
    [anon_sym_PIPE_PIPE] = ACTIONS(1428),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1428),
    [anon_sym_LF] = ACTIONS(1428),
    [anon_sym_AMP] = ACTIONS(1428),
  },
  [451] = {
    [anon_sym_RPAREN] = ACTIONS(1431),
    [anon_sym_SEMI_SEMI] = ACTIONS(1433),
    [anon_sym_PIPE] = ACTIONS(1437),
    [anon_sym_PIPE_AMP] = ACTIONS(1437),
    [anon_sym_AMP_AMP] = ACTIONS(1441),
    [anon_sym_PIPE_PIPE] = ACTIONS(1441),
    [anon_sym_BQUOTE] = ACTIONS(1431),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1433),
    [anon_sym_LF] = ACTIONS(1433),
    [anon_sym_AMP] = ACTIONS(1433),
  },
  [452] = {
    [sym_file_descriptor] = ACTIONS(1445),
    [anon_sym_SEMI_SEMI] = ACTIONS(1399),
    [anon_sym_COLON] = ACTIONS(1448),
    [anon_sym_PIPE] = ACTIONS(1403),
    [anon_sym_PIPE_AMP] = ACTIONS(1403),
    [anon_sym_AMP_AMP] = ACTIONS(1407),
    [anon_sym_PIPE_PIPE] = ACTIONS(1407),
    [anon_sym_DQUOTE] = ACTIONS(1448),
    [sym_raw_string] = ACTIONS(1448),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1448),
    [anon_sym_BQUOTE] = ACTIONS(1448),
    [anon_sym_LT] = ACTIONS(1448),
    [anon_sym_GT] = ACTIONS(1448),
    [anon_sym_GT_GT] = ACTIONS(1448),
    [anon_sym_AMP_GT] = ACTIONS(1448),
    [anon_sym_AMP_GT_GT] = ACTIONS(1448),
    [anon_sym_LT_AMP] = ACTIONS(1448),
    [anon_sym_GT_AMP] = ACTIONS(1448),
    [sym_leading_word] = ACTIONS(1448),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1399),
    [anon_sym_LF] = ACTIONS(1399),
    [anon_sym_AMP] = ACTIONS(1399),
  },
  [453] = {
    [sym_file_redirect] = STATE(475),
    [sym_heredoc_redirect] = STATE(475),
    [aux_sym_command_repeat2] = STATE(476),
    [sym_file_descriptor] = ACTIONS(1451),
    [anon_sym_in] = ACTIONS(263),
    [anon_sym_RPAREN] = ACTIONS(1458),
    [anon_sym_SEMI_SEMI] = ACTIONS(1466),
    [anon_sym_RBRACE] = ACTIONS(1475),
    [anon_sym_RBRACK] = ACTIONS(1477),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1477),
    [anon_sym_COLON] = ACTIONS(1480),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(1252),
    [anon_sym_PIPE] = ACTIONS(1484),
    [anon_sym_PIPE_AMP] = ACTIONS(1484),
    [anon_sym_AMP_AMP] = ACTIONS(1484),
    [anon_sym_PIPE_PIPE] = ACTIONS(1484),
    [anon_sym_DQUOTE] = ACTIONS(1492),
    [sym_raw_string] = ACTIONS(1492),
    [anon_sym_DOLLAR] = ACTIONS(1477),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1477),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1492),
    [anon_sym_BQUOTE] = ACTIONS(1484),
    [anon_sym_LT] = ACTIONS(1498),
    [anon_sym_GT] = ACTIONS(1498),
    [anon_sym_GT_GT] = ACTIONS(1498),
    [anon_sym_AMP_GT] = ACTIONS(1498),
    [anon_sym_AMP_GT_GT] = ACTIONS(1498),
    [anon_sym_LT_AMP] = ACTIONS(1498),
    [anon_sym_GT_AMP] = ACTIONS(1498),
    [anon_sym_LT_LT] = ACTIONS(1505),
    [anon_sym_LT_LT_DASH] = ACTIONS(1505),
    [sym_leading_word] = ACTIONS(1480),
    [sym_word] = ACTIONS(1477),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1466),
    [anon_sym_LF] = ACTIONS(1466),
    [anon_sym_AMP] = ACTIONS(1466),
  },
  [454] = {
    [sym__heredoc_middle] = ACTIONS(1370),
    [sym__heredoc_end] = ACTIONS(1370),
    [sym_file_descriptor] = ACTIONS(1511),
    [anon_sym_in] = ACTIONS(263),
    [anon_sym_RPAREN] = ACTIONS(1517),
    [anon_sym_SEMI_SEMI] = ACTIONS(1523),
    [anon_sym_RBRACE] = ACTIONS(1475),
    [anon_sym_RBRACK] = ACTIONS(1477),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1477),
    [anon_sym_COLON] = ACTIONS(1480),
    [anon_sym_PIPE] = ACTIONS(1492),
    [anon_sym_PIPE_AMP] = ACTIONS(1492),
    [anon_sym_AMP_AMP] = ACTIONS(1492),
    [anon_sym_PIPE_PIPE] = ACTIONS(1492),
    [anon_sym_DQUOTE] = ACTIONS(1530),
    [sym__quoted_chars] = ACTIONS(1538),
    [sym_raw_string] = ACTIONS(1492),
    [anon_sym_DOLLAR] = ACTIONS(1541),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1541),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1530),
    [anon_sym_BQUOTE] = ACTIONS(1530),
    [anon_sym_LT] = ACTIONS(1492),
    [anon_sym_GT] = ACTIONS(1492),
    [anon_sym_GT_GT] = ACTIONS(1492),
    [anon_sym_AMP_GT] = ACTIONS(1492),
    [anon_sym_AMP_GT_GT] = ACTIONS(1492),
    [anon_sym_LT_AMP] = ACTIONS(1492),
    [anon_sym_GT_AMP] = ACTIONS(1492),
    [anon_sym_LT_LT] = ACTIONS(1548),
    [anon_sym_LT_LT_DASH] = ACTIONS(1548),
    [sym_leading_word] = ACTIONS(1480),
    [sym_word] = ACTIONS(1477),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1523),
    [anon_sym_LF] = ACTIONS(1523),
    [anon_sym_AMP] = ACTIONS(1523),
  },
  [455] = {
    [sym_file_redirect] = STATE(475),
    [sym_heredoc_redirect] = STATE(475),
    [aux_sym_command_repeat2] = STATE(476),
    [sym_file_descriptor] = ACTIONS(1451),
    [anon_sym_in] = ACTIONS(263),
    [anon_sym_RPAREN] = ACTIONS(1458),
    [anon_sym_SEMI_SEMI] = ACTIONS(1466),
    [anon_sym_RBRACE] = ACTIONS(1475),
    [anon_sym_RBRACK] = ACTIONS(1477),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1477),
    [anon_sym_COLON] = ACTIONS(1480),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(1252),
    [anon_sym_PIPE] = ACTIONS(1484),
    [anon_sym_PIPE_AMP] = ACTIONS(1484),
    [anon_sym_AMP_AMP] = ACTIONS(1484),
    [anon_sym_PIPE_PIPE] = ACTIONS(1484),
    [anon_sym_DQUOTE] = ACTIONS(1530),
    [sym__quoted_chars] = ACTIONS(1538),
    [sym_raw_string] = ACTIONS(1492),
    [anon_sym_DOLLAR] = ACTIONS(1553),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1553),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1530),
    [anon_sym_BQUOTE] = ACTIONS(1558),
    [anon_sym_LT] = ACTIONS(1498),
    [anon_sym_GT] = ACTIONS(1498),
    [anon_sym_GT_GT] = ACTIONS(1498),
    [anon_sym_AMP_GT] = ACTIONS(1498),
    [anon_sym_AMP_GT_GT] = ACTIONS(1498),
    [anon_sym_LT_AMP] = ACTIONS(1498),
    [anon_sym_GT_AMP] = ACTIONS(1498),
    [anon_sym_LT_LT] = ACTIONS(1505),
    [anon_sym_LT_LT_DASH] = ACTIONS(1505),
    [sym_leading_word] = ACTIONS(1480),
    [sym_word] = ACTIONS(1477),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1466),
    [anon_sym_LF] = ACTIONS(1466),
    [anon_sym_AMP] = ACTIONS(1466),
  },
  [456] = {
    [sym_file_descriptor] = ACTIONS(1568),
    [anon_sym_RPAREN] = ACTIONS(1573),
    [anon_sym_SEMI_SEMI] = ACTIONS(1573),
    [anon_sym_COLON] = ACTIONS(1448),
    [anon_sym_PIPE] = ACTIONS(1573),
    [anon_sym_PIPE_AMP] = ACTIONS(1573),
    [anon_sym_AMP_AMP] = ACTIONS(1573),
    [anon_sym_PIPE_PIPE] = ACTIONS(1573),
    [anon_sym_DQUOTE] = ACTIONS(1448),
    [sym_raw_string] = ACTIONS(1448),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1448),
    [anon_sym_BQUOTE] = ACTIONS(1576),
    [anon_sym_LT] = ACTIONS(1576),
    [anon_sym_GT] = ACTIONS(1576),
    [anon_sym_GT_GT] = ACTIONS(1576),
    [anon_sym_AMP_GT] = ACTIONS(1576),
    [anon_sym_AMP_GT_GT] = ACTIONS(1576),
    [anon_sym_LT_AMP] = ACTIONS(1576),
    [anon_sym_GT_AMP] = ACTIONS(1576),
    [anon_sym_LT_LT] = ACTIONS(1573),
    [anon_sym_LT_LT_DASH] = ACTIONS(1573),
    [sym_leading_word] = ACTIONS(1448),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1573),
    [anon_sym_LF] = ACTIONS(1573),
    [anon_sym_AMP] = ACTIONS(1573),
  },
  [457] = {
    [sym_file_descriptor] = ACTIONS(1581),
    [anon_sym_RPAREN] = ACTIONS(1573),
    [anon_sym_SEMI_SEMI] = ACTIONS(1573),
    [anon_sym_PIPE] = ACTIONS(1573),
    [anon_sym_PIPE_AMP] = ACTIONS(1573),
    [anon_sym_AMP_AMP] = ACTIONS(1573),
    [anon_sym_PIPE_PIPE] = ACTIONS(1573),
    [anon_sym_BQUOTE] = ACTIONS(1573),
    [anon_sym_LT] = ACTIONS(1573),
    [anon_sym_GT] = ACTIONS(1573),
    [anon_sym_GT_GT] = ACTIONS(1573),
    [anon_sym_AMP_GT] = ACTIONS(1573),
    [anon_sym_AMP_GT_GT] = ACTIONS(1573),
    [anon_sym_LT_AMP] = ACTIONS(1573),
    [anon_sym_GT_AMP] = ACTIONS(1573),
    [anon_sym_LT_LT] = ACTIONS(1573),
    [anon_sym_LT_LT_DASH] = ACTIONS(1573),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1573),
    [anon_sym_LF] = ACTIONS(1573),
    [anon_sym_AMP] = ACTIONS(1573),
  },
  [458] = {
    [sym_file_descriptor] = ACTIONS(587),
    [anon_sym_RPAREN] = ACTIONS(589),
    [anon_sym_SEMI_SEMI] = ACTIONS(589),
    [anon_sym_PIPE] = ACTIONS(589),
    [anon_sym_PIPE_AMP] = ACTIONS(589),
    [anon_sym_AMP_AMP] = ACTIONS(589),
    [anon_sym_PIPE_PIPE] = ACTIONS(589),
    [anon_sym_BQUOTE] = ACTIONS(589),
    [anon_sym_LT] = ACTIONS(589),
    [anon_sym_GT] = ACTIONS(589),
    [anon_sym_GT_GT] = ACTIONS(589),
    [anon_sym_AMP_GT] = ACTIONS(589),
    [anon_sym_AMP_GT_GT] = ACTIONS(589),
    [anon_sym_LT_AMP] = ACTIONS(589),
    [anon_sym_GT_AMP] = ACTIONS(589),
    [anon_sym_LT_LT] = ACTIONS(589),
    [anon_sym_LT_LT_DASH] = ACTIONS(589),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(589),
    [anon_sym_LF] = ACTIONS(589),
    [anon_sym_AMP] = ACTIONS(589),
  },
  [459] = {
    [sym__heredoc_middle] = ACTIONS(519),
    [sym__heredoc_end] = ACTIONS(519),
    [sym_file_descriptor] = ACTIONS(519),
    [anon_sym_in] = ACTIONS(487),
    [anon_sym_RPAREN] = ACTIONS(487),
    [anon_sym_SEMI_SEMI] = ACTIONS(487),
    [anon_sym_RBRACE] = ACTIONS(1584),
    [anon_sym_RBRACK] = ACTIONS(487),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(487),
    [anon_sym_COLON] = ACTIONS(1587),
    [anon_sym_PIPE] = ACTIONS(487),
    [anon_sym_PIPE_AMP] = ACTIONS(487),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [anon_sym_PIPE_PIPE] = ACTIONS(487),
    [anon_sym_EQ] = ACTIONS(1590),
    [anon_sym_DQUOTE] = ACTIONS(487),
    [sym__quoted_chars] = ACTIONS(487),
    [sym_raw_string] = ACTIONS(487),
    [anon_sym_DOLLAR] = ACTIONS(487),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(487),
    [anon_sym_COLON_QMARK] = ACTIONS(1592),
    [anon_sym_COLON_DASH] = ACTIONS(1592),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(487),
    [anon_sym_BQUOTE] = ACTIONS(487),
    [anon_sym_LT] = ACTIONS(487),
    [anon_sym_GT] = ACTIONS(487),
    [anon_sym_GT_GT] = ACTIONS(487),
    [anon_sym_AMP_GT] = ACTIONS(487),
    [anon_sym_AMP_GT_GT] = ACTIONS(487),
    [anon_sym_LT_AMP] = ACTIONS(487),
    [anon_sym_GT_AMP] = ACTIONS(487),
    [anon_sym_LT_LT] = ACTIONS(487),
    [anon_sym_LT_LT_DASH] = ACTIONS(487),
    [sym_leading_word] = ACTIONS(487),
    [sym_word] = ACTIONS(487),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_LF] = ACTIONS(487),
    [anon_sym_AMP] = ACTIONS(487),
  },
  [460] = {
    [sym__terminated_statement] = STATE(84),
    [sym_for_statement] = STATE(19),
    [sym_while_statement] = STATE(19),
    [sym_if_statement] = STATE(19),
    [sym_elif_clause] = STATE(198),
    [sym_else_clause] = STATE(300),
    [sym_case_statement] = STATE(19),
    [sym_function_definition] = STATE(19),
    [sym_bracket_command] = STATE(19),
    [sym_command] = STATE(19),
    [sym_pipeline] = STATE(19),
    [sym_list] = STATE(19),
    [sym_subshell] = STATE(19),
    [sym_environment_variable_assignment] = STATE(20),
    [sym_string] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(21),
    [aux_sym_if_statement_repeat1] = STATE(301),
    [aux_sym_command_repeat1] = STATE(23),
    [sym_file_descriptor] = ACTIONS(85),
    [ts_builtin_sym_end] = ACTIONS(241),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(91),
    [anon_sym_done] = ACTIONS(729),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_fi] = ACTIONS(1594),
    [anon_sym_elif] = ACTIONS(1598),
    [anon_sym_else] = ACTIONS(1601),
    [anon_sym_case] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(281),
    [anon_sym_SEMI_SEMI] = ACTIONS(1129),
    [anon_sym_function] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(1039),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(103),
    [anon_sym_COLON] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_raw_string] = ACTIONS(109),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(117),
    [sym_comment] = ACTIONS(119),
  },
  [461] = {
    [sym_elif_clause] = STATE(302),
    [sym_else_clause] = STATE(503),
    [anon_sym_fi] = ACTIONS(1604),
    [anon_sym_elif] = ACTIONS(741),
    [anon_sym_else] = ACTIONS(743),
    [sym_comment] = ACTIONS(119),
  },
  [462] = {
    [sym_case_item] = STATE(372),
    [sym_string] = STATE(304),
    [sym_simple_expansion] = STATE(304),
    [sym_expansion] = STATE(304),
    [sym_command_substitution] = STATE(304),
    [anon_sym_esac] = ACTIONS(1606),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_raw_string] = ACTIONS(747),
    [anon_sym_DOLLAR] = ACTIONS(749),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(153),
    [anon_sym_BQUOTE] = ACTIONS(155),
    [sym_word] = ACTIONS(751),
    [sym_comment] = ACTIONS(119),
  },
  [463] = {
    [sym_string] = STATE(506),
    [sym_simple_expansion] = STATE(506),
    [sym_expansion] = STATE(506),
    [sym_command_substitution] = STATE(506),
    [sym_file_redirect] = STATE(475),
    [sym_heredoc_redirect] = STATE(475),
    [aux_sym_command_repeat2] = STATE(511),
    [sym_file_descriptor] = ACTIONS(1247),
    [anon_sym_RPAREN] = ACTIONS(1608),
    [anon_sym_SEMI_SEMI] = ACTIONS(1608),
    [anon_sym_RBRACK] = ACTIONS(1613),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1613),
    [anon_sym_PIPE] = ACTIONS(1608),
    [anon_sym_PIPE_AMP] = ACTIONS(1608),
    [anon_sym_AMP_AMP] = ACTIONS(1608),
    [anon_sym_PIPE_PIPE] = ACTIONS(1608),
    [anon_sym_DQUOTE] = ACTIONS(1615),
    [sym_raw_string] = ACTIONS(1617),
    [anon_sym_DOLLAR] = ACTIONS(1619),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1621),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1623),
    [anon_sym_BQUOTE] = ACTIONS(1625),
    [anon_sym_LT] = ACTIONS(1268),
    [anon_sym_GT] = ACTIONS(1268),
    [anon_sym_GT_GT] = ACTIONS(1268),
    [anon_sym_AMP_GT] = ACTIONS(1268),
    [anon_sym_AMP_GT_GT] = ACTIONS(1268),
    [anon_sym_LT_AMP] = ACTIONS(1268),
    [anon_sym_GT_AMP] = ACTIONS(1268),
    [anon_sym_LT_LT] = ACTIONS(1270),
    [anon_sym_LT_LT_DASH] = ACTIONS(1270),
    [sym_word] = ACTIONS(1617),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1608),
    [anon_sym_LF] = ACTIONS(1608),
    [anon_sym_AMP] = ACTIONS(1608),
  },
  [464] = {
    [sym_environment_variable_assignment] = STATE(87),
    [sym_string] = STATE(512),
    [sym_command_substitution] = STATE(512),
    [sym_file_redirect] = STATE(87),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(1631),
    [anon_sym_DQUOTE] = ACTIONS(1633),
    [sym_raw_string] = ACTIONS(1635),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1637),
    [anon_sym_BQUOTE] = ACTIONS(1639),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(1641),
    [sym_comment] = ACTIONS(119),
  },
  [465] = {
    [sym_file_redirect] = STATE(517),
    [sym_heredoc_redirect] = STATE(517),
    [sym_file_descriptor] = ACTIONS(1247),
    [anon_sym_RPAREN] = ACTIONS(1643),
    [anon_sym_SEMI_SEMI] = ACTIONS(1643),
    [anon_sym_PIPE] = ACTIONS(1643),
    [anon_sym_PIPE_AMP] = ACTIONS(1643),
    [anon_sym_AMP_AMP] = ACTIONS(1643),
    [anon_sym_PIPE_PIPE] = ACTIONS(1643),
    [anon_sym_BQUOTE] = ACTIONS(1643),
    [anon_sym_LT] = ACTIONS(1268),
    [anon_sym_GT] = ACTIONS(1268),
    [anon_sym_GT_GT] = ACTIONS(1268),
    [anon_sym_AMP_GT] = ACTIONS(1268),
    [anon_sym_AMP_GT_GT] = ACTIONS(1268),
    [anon_sym_LT_AMP] = ACTIONS(1268),
    [anon_sym_GT_AMP] = ACTIONS(1268),
    [anon_sym_LT_LT] = ACTIONS(1270),
    [anon_sym_LT_LT_DASH] = ACTIONS(1270),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1643),
    [anon_sym_LF] = ACTIONS(1643),
    [anon_sym_AMP] = ACTIONS(1643),
  },
  [466] = {
    [sym_simple_expansion] = STATE(146),
    [sym_expansion] = STATE(146),
    [sym_command_substitution] = STATE(146),
    [anon_sym_DQUOTE] = ACTIONS(1654),
    [sym__quoted_chars] = ACTIONS(365),
    [anon_sym_DOLLAR] = ACTIONS(173),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(175),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [sym_comment] = ACTIONS(77),
  },
  [467] = {
    [sym_simple_expansion] = STATE(331),
    [sym_expansion] = STATE(331),
    [sym__heredoc_middle] = ACTIONS(837),
    [sym__heredoc_end] = ACTIONS(1656),
    [anon_sym_DOLLAR] = ACTIONS(583),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(585),
    [sym_comment] = ACTIONS(119),
  },
  [468] = {
    [sym_case_item] = STATE(306),
    [sym_string] = STATE(304),
    [sym_simple_expansion] = STATE(304),
    [sym_expansion] = STATE(304),
    [sym_command_substitution] = STATE(304),
    [aux_sym_case_statement_repeat1] = STATE(462),
    [anon_sym_esac] = ACTIONS(1354),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_raw_string] = ACTIONS(747),
    [anon_sym_DOLLAR] = ACTIONS(749),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(153),
    [anon_sym_BQUOTE] = ACTIONS(155),
    [sym_word] = ACTIONS(751),
    [sym_comment] = ACTIONS(119),
  },
  [469] = {
    [sym__terminated_statement] = STATE(84),
    [sym_for_statement] = STATE(19),
    [sym_while_statement] = STATE(19),
    [sym_if_statement] = STATE(19),
    [sym_elif_clause] = STATE(198),
    [sym_else_clause] = STATE(300),
    [sym_case_statement] = STATE(19),
    [sym_function_definition] = STATE(19),
    [sym_bracket_command] = STATE(19),
    [sym_command] = STATE(19),
    [sym_pipeline] = STATE(19),
    [sym_list] = STATE(19),
    [sym_subshell] = STATE(19),
    [sym_environment_variable_assignment] = STATE(20),
    [sym_string] = STATE(11),
    [sym_command_substitution] = STATE(11),
    [sym_file_redirect] = STATE(21),
    [aux_sym_if_statement_repeat1] = STATE(301),
    [aux_sym_command_repeat1] = STATE(23),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(91),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_fi] = ACTIONS(1658),
    [anon_sym_elif] = ACTIONS(1598),
    [anon_sym_else] = ACTIONS(1601),
    [anon_sym_case] = ACTIONS(95),
    [anon_sym_function] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(103),
    [anon_sym_COLON] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_raw_string] = ACTIONS(109),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(117),
    [sym_comment] = ACTIONS(119),
  },
  [470] = {
    [sym_compound_statement] = STATE(450),
    [anon_sym_SEMI_SEMI] = ACTIONS(279),
    [anon_sym_LBRACE] = ACTIONS(1204),
    [anon_sym_PIPE] = ACTIONS(279),
    [anon_sym_PIPE_AMP] = ACTIONS(279),
    [anon_sym_AMP_AMP] = ACTIONS(279),
    [anon_sym_PIPE_PIPE] = ACTIONS(279),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(279),
    [anon_sym_LF] = ACTIONS(279),
    [anon_sym_AMP] = ACTIONS(279),
  },
  [471] = {
    [anon_sym_LT] = ACTIONS(1661),
    [anon_sym_GT] = ACTIONS(1661),
    [anon_sym_GT_GT] = ACTIONS(1663),
    [anon_sym_AMP_GT] = ACTIONS(1661),
    [anon_sym_AMP_GT_GT] = ACTIONS(1663),
    [anon_sym_LT_AMP] = ACTIONS(1663),
    [anon_sym_GT_AMP] = ACTIONS(1663),
    [sym_comment] = ACTIONS(119),
  },
  [472] = {
    [sym_string] = STATE(522),
    [sym_simple_expansion] = STATE(522),
    [sym_expansion] = STATE(522),
    [sym_command_substitution] = STATE(522),
    [sym_file_redirect] = STATE(475),
    [sym_heredoc_redirect] = STATE(475),
    [aux_sym_bracket_command_repeat1] = STATE(527),
    [aux_sym_command_repeat2] = STATE(528),
    [sym_file_descriptor] = ACTIONS(1247),
    [anon_sym_RPAREN] = ACTIONS(1665),
    [anon_sym_SEMI_SEMI] = ACTIONS(1665),
    [anon_sym_PIPE] = ACTIONS(1665),
    [anon_sym_PIPE_AMP] = ACTIONS(1665),
    [anon_sym_AMP_AMP] = ACTIONS(1665),
    [anon_sym_PIPE_PIPE] = ACTIONS(1665),
    [anon_sym_DQUOTE] = ACTIONS(1668),
    [sym_raw_string] = ACTIONS(1670),
    [anon_sym_DOLLAR] = ACTIONS(1672),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1674),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1676),
    [anon_sym_BQUOTE] = ACTIONS(1678),
    [anon_sym_LT] = ACTIONS(1268),
    [anon_sym_GT] = ACTIONS(1268),
    [anon_sym_GT_GT] = ACTIONS(1268),
    [anon_sym_AMP_GT] = ACTIONS(1268),
    [anon_sym_AMP_GT_GT] = ACTIONS(1268),
    [anon_sym_LT_AMP] = ACTIONS(1268),
    [anon_sym_GT_AMP] = ACTIONS(1268),
    [anon_sym_LT_LT] = ACTIONS(1270),
    [anon_sym_LT_LT_DASH] = ACTIONS(1270),
    [sym_word] = ACTIONS(1670),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1665),
    [anon_sym_LF] = ACTIONS(1665),
    [anon_sym_AMP] = ACTIONS(1665),
  },
  [473] = {
    [anon_sym_RBRACE] = ACTIONS(1682),
    [sym_comment] = ACTIONS(119),
  },
  [474] = {
    [sym_string] = STATE(530),
    [sym_simple_expansion] = STATE(530),
    [sym_expansion] = STATE(530),
    [sym_command_substitution] = STATE(530),
    [anon_sym_DQUOTE] = ACTIONS(1684),
    [sym_raw_string] = ACTIONS(1686),
    [anon_sym_DOLLAR] = ACTIONS(1688),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1690),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1692),
    [anon_sym_BQUOTE] = ACTIONS(1694),
    [sym_word] = ACTIONS(1696),
    [sym_comment] = ACTIONS(119),
  },
  [475] = {
    [sym_file_descriptor] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(343),
    [anon_sym_SEMI_SEMI] = ACTIONS(343),
    [anon_sym_PIPE] = ACTIONS(343),
    [anon_sym_PIPE_AMP] = ACTIONS(343),
    [anon_sym_AMP_AMP] = ACTIONS(343),
    [anon_sym_PIPE_PIPE] = ACTIONS(343),
    [anon_sym_BQUOTE] = ACTIONS(343),
    [anon_sym_LT] = ACTIONS(343),
    [anon_sym_GT] = ACTIONS(343),
    [anon_sym_GT_GT] = ACTIONS(343),
    [anon_sym_AMP_GT] = ACTIONS(343),
    [anon_sym_AMP_GT_GT] = ACTIONS(343),
    [anon_sym_LT_AMP] = ACTIONS(343),
    [anon_sym_GT_AMP] = ACTIONS(343),
    [anon_sym_LT_LT] = ACTIONS(343),
    [anon_sym_LT_LT_DASH] = ACTIONS(343),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(343),
    [anon_sym_LF] = ACTIONS(343),
    [anon_sym_AMP] = ACTIONS(343),
  },
  [476] = {
    [sym_file_redirect] = STATE(517),
    [sym_heredoc_redirect] = STATE(517),
    [sym_file_descriptor] = ACTIONS(1247),
    [anon_sym_RPAREN] = ACTIONS(1698),
    [anon_sym_SEMI_SEMI] = ACTIONS(1698),
    [anon_sym_PIPE] = ACTIONS(1698),
    [anon_sym_PIPE_AMP] = ACTIONS(1698),
    [anon_sym_AMP_AMP] = ACTIONS(1698),
    [anon_sym_PIPE_PIPE] = ACTIONS(1698),
    [anon_sym_BQUOTE] = ACTIONS(1698),
    [anon_sym_LT] = ACTIONS(1268),
    [anon_sym_GT] = ACTIONS(1268),
    [anon_sym_GT_GT] = ACTIONS(1268),
    [anon_sym_AMP_GT] = ACTIONS(1268),
    [anon_sym_AMP_GT_GT] = ACTIONS(1268),
    [anon_sym_LT_AMP] = ACTIONS(1268),
    [anon_sym_GT_AMP] = ACTIONS(1268),
    [anon_sym_LT_LT] = ACTIONS(1270),
    [anon_sym_LT_LT_DASH] = ACTIONS(1270),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1698),
    [anon_sym_LF] = ACTIONS(1698),
    [anon_sym_AMP] = ACTIONS(1698),
  },
  [477] = {
    [sym_simple_expansion] = STATE(54),
    [sym_expansion] = STATE(54),
    [sym_command_substitution] = STATE(54),
    [aux_sym_string_repeat1] = STATE(536),
    [anon_sym_DQUOTE] = ACTIONS(1701),
    [sym__quoted_chars] = ACTIONS(171),
    [anon_sym_DOLLAR] = ACTIONS(173),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(175),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [sym_comment] = ACTIONS(77),
  },
  [478] = {
    [sym_file_descriptor] = ACTIONS(705),
    [anon_sym_SEMI_SEMI] = ACTIONS(707),
    [anon_sym_RBRACE] = ACTIONS(1475),
    [anon_sym_COLON] = ACTIONS(707),
    [anon_sym_PIPE] = ACTIONS(707),
    [anon_sym_PIPE_AMP] = ACTIONS(707),
    [anon_sym_AMP_AMP] = ACTIONS(707),
    [anon_sym_PIPE_PIPE] = ACTIONS(707),
    [anon_sym_DQUOTE] = ACTIONS(707),
    [sym_raw_string] = ACTIONS(707),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(707),
    [anon_sym_BQUOTE] = ACTIONS(707),
    [anon_sym_LT] = ACTIONS(707),
    [anon_sym_GT] = ACTIONS(707),
    [anon_sym_GT_GT] = ACTIONS(707),
    [anon_sym_AMP_GT] = ACTIONS(707),
    [anon_sym_AMP_GT_GT] = ACTIONS(707),
    [anon_sym_LT_AMP] = ACTIONS(707),
    [anon_sym_GT_AMP] = ACTIONS(707),
    [sym_leading_word] = ACTIONS(707),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(707),
    [anon_sym_LF] = ACTIONS(707),
    [anon_sym_AMP] = ACTIONS(707),
  },
  [479] = {
    [sym_special_variable_name] = STATE(539),
    [anon_sym_DOLLAR] = ACTIONS(1703),
    [sym_comment] = ACTIONS(77),
    [sym_simple_variable_name] = ACTIONS(1705),
    [anon_sym_STAR] = ACTIONS(1703),
    [anon_sym_AT] = ACTIONS(1703),
    [anon_sym_POUND] = ACTIONS(1707),
    [anon_sym_QMARK] = ACTIONS(1703),
    [anon_sym_DASH] = ACTIONS(1703),
    [anon_sym_BANG] = ACTIONS(1703),
    [anon_sym_0] = ACTIONS(1707),
    [anon_sym__] = ACTIONS(1707),
  },
  [480] = {
    [sym_special_variable_name] = STATE(541),
    [anon_sym_DOLLAR] = ACTIONS(273),
    [sym_leading_word] = ACTIONS(1709),
    [sym_comment] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(273),
    [anon_sym_AT] = ACTIONS(273),
    [anon_sym_POUND] = ACTIONS(273),
    [anon_sym_QMARK] = ACTIONS(273),
    [anon_sym_DASH] = ACTIONS(273),
    [anon_sym_BANG] = ACTIONS(273),
    [anon_sym_0] = ACTIONS(273),
    [anon_sym__] = ACTIONS(273),
  },
  [481] = {
    [sym_command] = STATE(542),
    [sym_environment_variable_assignment] = STATE(21),
    [sym_string] = STATE(60),
    [sym_command_substitution] = STATE(60),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(66),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(181),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_raw_string] = ACTIONS(185),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(187),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(191),
    [sym_comment] = ACTIONS(119),
  },
  [482] = {
    [sym_command] = STATE(543),
    [sym_environment_variable_assignment] = STATE(21),
    [sym_string] = STATE(67),
    [sym_command_substitution] = STATE(67),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(70),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_raw_string] = ACTIONS(195),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(187),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(197),
    [sym_comment] = ACTIONS(119),
  },
  [483] = {
    [sym_file_descriptor] = ACTIONS(347),
    [anon_sym_in] = ACTIONS(349),
    [anon_sym_RPAREN] = ACTIONS(349),
    [anon_sym_SEMI_SEMI] = ACTIONS(349),
    [anon_sym_RBRACE] = ACTIONS(349),
    [anon_sym_RBRACK] = ACTIONS(349),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(349),
    [anon_sym_COLON] = ACTIONS(349),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(349),
    [anon_sym_PIPE] = ACTIONS(349),
    [anon_sym_PIPE_AMP] = ACTIONS(349),
    [anon_sym_AMP_AMP] = ACTIONS(349),
    [anon_sym_PIPE_PIPE] = ACTIONS(349),
    [anon_sym_DQUOTE] = ACTIONS(349),
    [sym_raw_string] = ACTIONS(349),
    [anon_sym_DOLLAR] = ACTIONS(349),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(349),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(349),
    [anon_sym_BQUOTE] = ACTIONS(349),
    [anon_sym_LT] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(349),
    [anon_sym_GT_GT] = ACTIONS(349),
    [anon_sym_AMP_GT] = ACTIONS(349),
    [anon_sym_AMP_GT_GT] = ACTIONS(349),
    [anon_sym_LT_AMP] = ACTIONS(349),
    [anon_sym_GT_AMP] = ACTIONS(349),
    [anon_sym_LT_LT] = ACTIONS(349),
    [anon_sym_LT_LT_DASH] = ACTIONS(349),
    [sym_leading_word] = ACTIONS(349),
    [sym_word] = ACTIONS(349),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(349),
    [anon_sym_LF] = ACTIONS(349),
    [anon_sym_AMP] = ACTIONS(349),
  },
  [484] = {
    [sym__heredoc_middle] = ACTIONS(489),
    [sym__heredoc_end] = ACTIONS(489),
    [sym_file_descriptor] = ACTIONS(489),
    [anon_sym_in] = ACTIONS(483),
    [anon_sym_RPAREN] = ACTIONS(483),
    [anon_sym_SEMI_SEMI] = ACTIONS(483),
    [anon_sym_RBRACE] = ACTIONS(483),
    [anon_sym_RBRACK] = ACTIONS(483),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(483),
    [anon_sym_COLON] = ACTIONS(483),
    [anon_sym_PIPE] = ACTIONS(483),
    [anon_sym_PIPE_AMP] = ACTIONS(483),
    [anon_sym_AMP_AMP] = ACTIONS(483),
    [anon_sym_PIPE_PIPE] = ACTIONS(483),
    [anon_sym_DQUOTE] = ACTIONS(483),
    [sym__quoted_chars] = ACTIONS(483),
    [sym_raw_string] = ACTIONS(483),
    [anon_sym_DOLLAR] = ACTIONS(483),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(483),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(483),
    [anon_sym_BQUOTE] = ACTIONS(483),
    [anon_sym_LT] = ACTIONS(483),
    [anon_sym_GT] = ACTIONS(483),
    [anon_sym_GT_GT] = ACTIONS(483),
    [anon_sym_AMP_GT] = ACTIONS(483),
    [anon_sym_AMP_GT_GT] = ACTIONS(483),
    [anon_sym_LT_AMP] = ACTIONS(483),
    [anon_sym_GT_AMP] = ACTIONS(483),
    [anon_sym_LT_LT] = ACTIONS(483),
    [anon_sym_LT_LT_DASH] = ACTIONS(483),
    [sym_leading_word] = ACTIONS(483),
    [sym_word] = ACTIONS(483),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(483),
    [anon_sym_LF] = ACTIONS(483),
    [anon_sym_AMP] = ACTIONS(483),
  },
  [485] = {
    [sym__heredoc_middle] = ACTIONS(515),
    [sym__heredoc_end] = ACTIONS(515),
    [sym_file_descriptor] = ACTIONS(515),
    [anon_sym_in] = ACTIONS(485),
    [anon_sym_RPAREN] = ACTIONS(485),
    [anon_sym_SEMI_SEMI] = ACTIONS(485),
    [anon_sym_RBRACE] = ACTIONS(485),
    [anon_sym_RBRACK] = ACTIONS(485),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(485),
    [anon_sym_COLON] = ACTIONS(485),
    [anon_sym_PIPE] = ACTIONS(485),
    [anon_sym_PIPE_AMP] = ACTIONS(485),
    [anon_sym_AMP_AMP] = ACTIONS(485),
    [anon_sym_PIPE_PIPE] = ACTIONS(485),
    [anon_sym_DQUOTE] = ACTIONS(485),
    [sym__quoted_chars] = ACTIONS(485),
    [sym_raw_string] = ACTIONS(485),
    [anon_sym_DOLLAR] = ACTIONS(485),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(485),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(485),
    [anon_sym_BQUOTE] = ACTIONS(485),
    [anon_sym_LT] = ACTIONS(485),
    [anon_sym_GT] = ACTIONS(485),
    [anon_sym_GT_GT] = ACTIONS(485),
    [anon_sym_AMP_GT] = ACTIONS(485),
    [anon_sym_AMP_GT_GT] = ACTIONS(485),
    [anon_sym_LT_AMP] = ACTIONS(485),
    [anon_sym_GT_AMP] = ACTIONS(485),
    [anon_sym_LT_LT] = ACTIONS(485),
    [anon_sym_LT_LT_DASH] = ACTIONS(485),
    [sym_leading_word] = ACTIONS(485),
    [sym_word] = ACTIONS(485),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(485),
    [anon_sym_LF] = ACTIONS(485),
    [anon_sym_AMP] = ACTIONS(485),
  },
  [486] = {
    [sym__heredoc_middle] = ACTIONS(519),
    [sym__heredoc_end] = ACTIONS(519),
    [sym_file_descriptor] = ACTIONS(519),
    [anon_sym_in] = ACTIONS(487),
    [anon_sym_RPAREN] = ACTIONS(487),
    [anon_sym_SEMI_SEMI] = ACTIONS(487),
    [anon_sym_RBRACE] = ACTIONS(487),
    [anon_sym_RBRACK] = ACTIONS(487),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(487),
    [anon_sym_COLON] = ACTIONS(487),
    [anon_sym_PIPE] = ACTIONS(487),
    [anon_sym_PIPE_AMP] = ACTIONS(487),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [anon_sym_PIPE_PIPE] = ACTIONS(487),
    [anon_sym_DQUOTE] = ACTIONS(487),
    [sym__quoted_chars] = ACTIONS(487),
    [sym_raw_string] = ACTIONS(487),
    [anon_sym_DOLLAR] = ACTIONS(487),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(487),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(487),
    [anon_sym_BQUOTE] = ACTIONS(487),
    [anon_sym_LT] = ACTIONS(487),
    [anon_sym_GT] = ACTIONS(487),
    [anon_sym_GT_GT] = ACTIONS(487),
    [anon_sym_AMP_GT] = ACTIONS(487),
    [anon_sym_AMP_GT_GT] = ACTIONS(487),
    [anon_sym_LT_AMP] = ACTIONS(487),
    [anon_sym_GT_AMP] = ACTIONS(487),
    [anon_sym_LT_LT] = ACTIONS(487),
    [anon_sym_LT_LT_DASH] = ACTIONS(487),
    [sym_leading_word] = ACTIONS(487),
    [sym_word] = ACTIONS(487),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_LF] = ACTIONS(487),
    [anon_sym_AMP] = ACTIONS(487),
  },
  [487] = {
    [anon_sym_BQUOTE] = ACTIONS(1711),
    [sym_comment] = ACTIONS(119),
  },
  [488] = {
    [sym_simple_expansion] = STATE(54),
    [sym_expansion] = STATE(54),
    [sym_command_substitution] = STATE(54),
    [aux_sym_string_repeat1] = STATE(545),
    [anon_sym_DQUOTE] = ACTIONS(1713),
    [sym__quoted_chars] = ACTIONS(171),
    [anon_sym_DOLLAR] = ACTIONS(173),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(175),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [sym_comment] = ACTIONS(77),
  },
  [489] = {
    [sym_file_descriptor] = ACTIONS(1715),
    [anon_sym_RPAREN] = ACTIONS(1718),
    [anon_sym_SEMI_SEMI] = ACTIONS(1718),
    [anon_sym_COLON] = ACTIONS(1718),
    [anon_sym_PIPE] = ACTIONS(1718),
    [anon_sym_PIPE_AMP] = ACTIONS(1718),
    [anon_sym_AMP_AMP] = ACTIONS(1718),
    [anon_sym_PIPE_PIPE] = ACTIONS(1718),
    [anon_sym_DQUOTE] = ACTIONS(1718),
    [sym_raw_string] = ACTIONS(1718),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1718),
    [anon_sym_BQUOTE] = ACTIONS(1718),
    [anon_sym_LT] = ACTIONS(1718),
    [anon_sym_GT] = ACTIONS(1718),
    [anon_sym_GT_GT] = ACTIONS(1718),
    [anon_sym_AMP_GT] = ACTIONS(1718),
    [anon_sym_AMP_GT_GT] = ACTIONS(1718),
    [anon_sym_LT_AMP] = ACTIONS(1718),
    [anon_sym_GT_AMP] = ACTIONS(1718),
    [anon_sym_LT_LT] = ACTIONS(1718),
    [anon_sym_LT_LT_DASH] = ACTIONS(1718),
    [sym_leading_word] = ACTIONS(1718),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1718),
    [anon_sym_LF] = ACTIONS(1718),
    [anon_sym_AMP] = ACTIONS(1718),
  },
  [490] = {
    [sym_special_variable_name] = STATE(548),
    [anon_sym_DOLLAR] = ACTIONS(1721),
    [sym_comment] = ACTIONS(77),
    [sym_simple_variable_name] = ACTIONS(1723),
    [anon_sym_STAR] = ACTIONS(1721),
    [anon_sym_AT] = ACTIONS(1721),
    [anon_sym_POUND] = ACTIONS(1725),
    [anon_sym_QMARK] = ACTIONS(1721),
    [anon_sym_DASH] = ACTIONS(1721),
    [anon_sym_BANG] = ACTIONS(1721),
    [anon_sym_0] = ACTIONS(1725),
    [anon_sym__] = ACTIONS(1725),
  },
  [491] = {
    [sym_special_variable_name] = STATE(550),
    [anon_sym_DOLLAR] = ACTIONS(273),
    [sym_leading_word] = ACTIONS(1727),
    [sym_comment] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(273),
    [anon_sym_AT] = ACTIONS(273),
    [anon_sym_POUND] = ACTIONS(273),
    [anon_sym_QMARK] = ACTIONS(273),
    [anon_sym_DASH] = ACTIONS(273),
    [anon_sym_BANG] = ACTIONS(273),
    [anon_sym_0] = ACTIONS(273),
    [anon_sym__] = ACTIONS(273),
  },
  [492] = {
    [sym_command] = STATE(551),
    [sym_environment_variable_assignment] = STATE(21),
    [sym_string] = STATE(60),
    [sym_command_substitution] = STATE(60),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(66),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(181),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_raw_string] = ACTIONS(185),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(187),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(191),
    [sym_comment] = ACTIONS(119),
  },
  [493] = {
    [sym_command] = STATE(552),
    [sym_environment_variable_assignment] = STATE(21),
    [sym_string] = STATE(67),
    [sym_command_substitution] = STATE(67),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(70),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_raw_string] = ACTIONS(195),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(187),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(197),
    [sym_comment] = ACTIONS(119),
  },
  [494] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1729),
    [anon_sym_PIPE] = ACTIONS(1729),
    [anon_sym_PIPE_AMP] = ACTIONS(1729),
    [anon_sym_AMP_AMP] = ACTIONS(1729),
    [anon_sym_PIPE_PIPE] = ACTIONS(1729),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1729),
    [anon_sym_LF] = ACTIONS(1729),
    [anon_sym_AMP] = ACTIONS(1729),
  },
  [495] = {
    [sym_file_descriptor] = ACTIONS(825),
    [anon_sym_RPAREN] = ACTIONS(827),
    [anon_sym_SEMI_SEMI] = ACTIONS(827),
    [anon_sym_PIPE] = ACTIONS(827),
    [anon_sym_PIPE_AMP] = ACTIONS(827),
    [anon_sym_AMP_AMP] = ACTIONS(827),
    [anon_sym_PIPE_PIPE] = ACTIONS(827),
    [anon_sym_BQUOTE] = ACTIONS(827),
    [anon_sym_LT] = ACTIONS(827),
    [anon_sym_GT] = ACTIONS(827),
    [anon_sym_GT_GT] = ACTIONS(827),
    [anon_sym_AMP_GT] = ACTIONS(827),
    [anon_sym_AMP_GT_GT] = ACTIONS(827),
    [anon_sym_LT_AMP] = ACTIONS(827),
    [anon_sym_GT_AMP] = ACTIONS(827),
    [anon_sym_LT_LT] = ACTIONS(827),
    [anon_sym_LT_LT_DASH] = ACTIONS(827),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(827),
    [anon_sym_LF] = ACTIONS(827),
    [anon_sym_AMP] = ACTIONS(827),
  },
  [496] = {
    [sym_string] = STATE(553),
    [sym_simple_expansion] = STATE(553),
    [sym_expansion] = STATE(553),
    [sym_command_substitution] = STATE(553),
    [anon_sym_DQUOTE] = ACTIONS(1334),
    [sym_raw_string] = ACTIONS(1732),
    [anon_sym_DOLLAR] = ACTIONS(1338),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1340),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1342),
    [anon_sym_BQUOTE] = ACTIONS(1344),
    [sym_word] = ACTIONS(1734),
    [sym_comment] = ACTIONS(119),
  },
  [497] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1736),
    [anon_sym_PIPE] = ACTIONS(1736),
    [anon_sym_PIPE_AMP] = ACTIONS(1736),
    [anon_sym_AMP_AMP] = ACTIONS(1736),
    [anon_sym_PIPE_PIPE] = ACTIONS(1736),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1736),
    [anon_sym_LF] = ACTIONS(1736),
    [anon_sym_AMP] = ACTIONS(1736),
  },
  [498] = {
    [sym_file_descriptor] = ACTIONS(671),
    [anon_sym_in] = ACTIONS(673),
    [anon_sym_RPAREN] = ACTIONS(673),
    [anon_sym_SEMI_SEMI] = ACTIONS(673),
    [anon_sym_RBRACE] = ACTIONS(673),
    [anon_sym_RBRACK] = ACTIONS(673),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(673),
    [anon_sym_COLON] = ACTIONS(673),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(673),
    [anon_sym_PIPE] = ACTIONS(673),
    [anon_sym_PIPE_AMP] = ACTIONS(673),
    [anon_sym_AMP_AMP] = ACTIONS(673),
    [anon_sym_PIPE_PIPE] = ACTIONS(673),
    [anon_sym_DQUOTE] = ACTIONS(673),
    [sym__quoted_chars] = ACTIONS(673),
    [sym_raw_string] = ACTIONS(673),
    [anon_sym_DOLLAR] = ACTIONS(673),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(673),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(673),
    [anon_sym_BQUOTE] = ACTIONS(673),
    [anon_sym_LT] = ACTIONS(673),
    [anon_sym_GT] = ACTIONS(673),
    [anon_sym_GT_GT] = ACTIONS(673),
    [anon_sym_AMP_GT] = ACTIONS(673),
    [anon_sym_AMP_GT_GT] = ACTIONS(673),
    [anon_sym_LT_AMP] = ACTIONS(673),
    [anon_sym_GT_AMP] = ACTIONS(673),
    [anon_sym_LT_LT] = ACTIONS(673),
    [anon_sym_LT_LT_DASH] = ACTIONS(673),
    [sym_leading_word] = ACTIONS(673),
    [sym_word] = ACTIONS(673),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(673),
    [anon_sym_LF] = ACTIONS(673),
    [anon_sym_AMP] = ACTIONS(673),
  },
  [499] = {
    [sym__heredoc_middle] = ACTIONS(1740),
    [sym__heredoc_end] = ACTIONS(1740),
    [sym_file_descriptor] = ACTIONS(1740),
    [anon_sym_in] = ACTIONS(1743),
    [anon_sym_RPAREN] = ACTIONS(1743),
    [anon_sym_SEMI_SEMI] = ACTIONS(1743),
    [anon_sym_RBRACE] = ACTIONS(1743),
    [anon_sym_RBRACK] = ACTIONS(1743),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1743),
    [anon_sym_COLON] = ACTIONS(1743),
    [anon_sym_PIPE] = ACTIONS(1743),
    [anon_sym_PIPE_AMP] = ACTIONS(1743),
    [anon_sym_AMP_AMP] = ACTIONS(1743),
    [anon_sym_PIPE_PIPE] = ACTIONS(1743),
    [anon_sym_DQUOTE] = ACTIONS(1743),
    [sym__quoted_chars] = ACTIONS(1743),
    [sym_raw_string] = ACTIONS(1743),
    [anon_sym_DOLLAR] = ACTIONS(1743),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1743),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1743),
    [anon_sym_BQUOTE] = ACTIONS(1743),
    [anon_sym_LT] = ACTIONS(1743),
    [anon_sym_GT] = ACTIONS(1743),
    [anon_sym_GT_GT] = ACTIONS(1743),
    [anon_sym_AMP_GT] = ACTIONS(1743),
    [anon_sym_AMP_GT_GT] = ACTIONS(1743),
    [anon_sym_LT_AMP] = ACTIONS(1743),
    [anon_sym_GT_AMP] = ACTIONS(1743),
    [anon_sym_LT_LT] = ACTIONS(1743),
    [anon_sym_LT_LT_DASH] = ACTIONS(1743),
    [sym_leading_word] = ACTIONS(1743),
    [sym_word] = ACTIONS(1743),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1743),
    [anon_sym_LF] = ACTIONS(1743),
    [anon_sym_AMP] = ACTIONS(1743),
  },
  [500] = {
    [sym__heredoc_middle] = ACTIONS(777),
    [sym__heredoc_end] = ACTIONS(777),
    [sym_file_descriptor] = ACTIONS(777),
    [anon_sym_in] = ACTIONS(761),
    [anon_sym_RPAREN] = ACTIONS(761),
    [anon_sym_SEMI_SEMI] = ACTIONS(761),
    [anon_sym_RBRACE] = ACTIONS(761),
    [anon_sym_RBRACK] = ACTIONS(761),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(761),
    [anon_sym_COLON] = ACTIONS(761),
    [anon_sym_PIPE] = ACTIONS(761),
    [anon_sym_PIPE_AMP] = ACTIONS(761),
    [anon_sym_AMP_AMP] = ACTIONS(761),
    [anon_sym_PIPE_PIPE] = ACTIONS(761),
    [anon_sym_DQUOTE] = ACTIONS(761),
    [sym__quoted_chars] = ACTIONS(761),
    [sym_raw_string] = ACTIONS(761),
    [anon_sym_DOLLAR] = ACTIONS(761),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(761),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(761),
    [anon_sym_BQUOTE] = ACTIONS(761),
    [anon_sym_LT] = ACTIONS(761),
    [anon_sym_GT] = ACTIONS(761),
    [anon_sym_GT_GT] = ACTIONS(761),
    [anon_sym_AMP_GT] = ACTIONS(761),
    [anon_sym_AMP_GT_GT] = ACTIONS(761),
    [anon_sym_LT_AMP] = ACTIONS(761),
    [anon_sym_GT_AMP] = ACTIONS(761),
    [anon_sym_LT_LT] = ACTIONS(761),
    [anon_sym_LT_LT_DASH] = ACTIONS(761),
    [sym_leading_word] = ACTIONS(761),
    [sym_word] = ACTIONS(761),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(761),
    [anon_sym_LF] = ACTIONS(761),
    [anon_sym_AMP] = ACTIONS(761),
  },
  [501] = {
    [sym_string] = STATE(554),
    [sym_simple_expansion] = STATE(554),
    [sym_expansion] = STATE(554),
    [sym_command_substitution] = STATE(554),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_raw_string] = ACTIONS(1746),
    [anon_sym_DOLLAR] = ACTIONS(749),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(153),
    [anon_sym_BQUOTE] = ACTIONS(155),
    [sym_word] = ACTIONS(1748),
    [sym_comment] = ACTIONS(119),
  },
  [502] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1750),
    [anon_sym_PIPE] = ACTIONS(1750),
    [anon_sym_PIPE_AMP] = ACTIONS(1750),
    [anon_sym_AMP_AMP] = ACTIONS(1750),
    [anon_sym_PIPE_PIPE] = ACTIONS(1750),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1750),
    [anon_sym_LF] = ACTIONS(1750),
    [anon_sym_AMP] = ACTIONS(1750),
  },
  [503] = {
    [anon_sym_fi] = ACTIONS(1753),
    [sym_comment] = ACTIONS(119),
  },
  [504] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1755),
    [anon_sym_PIPE] = ACTIONS(1755),
    [anon_sym_PIPE_AMP] = ACTIONS(1755),
    [anon_sym_AMP_AMP] = ACTIONS(1755),
    [anon_sym_PIPE_PIPE] = ACTIONS(1755),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1755),
    [anon_sym_LF] = ACTIONS(1755),
    [anon_sym_AMP] = ACTIONS(1755),
  },
  [505] = {
    [sym_simple_expansion] = STATE(54),
    [sym_expansion] = STATE(54),
    [sym_command_substitution] = STATE(54),
    [aux_sym_string_repeat1] = STATE(557),
    [anon_sym_DQUOTE] = ACTIONS(1758),
    [sym__quoted_chars] = ACTIONS(171),
    [anon_sym_DOLLAR] = ACTIONS(173),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(175),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [sym_comment] = ACTIONS(77),
  },
  [506] = {
    [sym_file_descriptor] = ACTIONS(541),
    [anon_sym_RPAREN] = ACTIONS(543),
    [anon_sym_SEMI_SEMI] = ACTIONS(543),
    [anon_sym_RBRACK] = ACTIONS(543),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(543),
    [anon_sym_PIPE] = ACTIONS(543),
    [anon_sym_PIPE_AMP] = ACTIONS(543),
    [anon_sym_AMP_AMP] = ACTIONS(543),
    [anon_sym_PIPE_PIPE] = ACTIONS(543),
    [anon_sym_DQUOTE] = ACTIONS(543),
    [sym_raw_string] = ACTIONS(543),
    [anon_sym_DOLLAR] = ACTIONS(543),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(543),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(543),
    [anon_sym_BQUOTE] = ACTIONS(543),
    [anon_sym_LT] = ACTIONS(543),
    [anon_sym_GT] = ACTIONS(543),
    [anon_sym_GT_GT] = ACTIONS(543),
    [anon_sym_AMP_GT] = ACTIONS(543),
    [anon_sym_AMP_GT_GT] = ACTIONS(543),
    [anon_sym_LT_AMP] = ACTIONS(543),
    [anon_sym_GT_AMP] = ACTIONS(543),
    [anon_sym_LT_LT] = ACTIONS(543),
    [anon_sym_LT_LT_DASH] = ACTIONS(543),
    [sym_word] = ACTIONS(543),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(543),
    [anon_sym_LF] = ACTIONS(543),
    [anon_sym_AMP] = ACTIONS(543),
  },
  [507] = {
    [sym_special_variable_name] = STATE(560),
    [anon_sym_DOLLAR] = ACTIONS(1760),
    [sym_comment] = ACTIONS(77),
    [sym_simple_variable_name] = ACTIONS(1762),
    [anon_sym_STAR] = ACTIONS(1760),
    [anon_sym_AT] = ACTIONS(1760),
    [anon_sym_POUND] = ACTIONS(1764),
    [anon_sym_QMARK] = ACTIONS(1760),
    [anon_sym_DASH] = ACTIONS(1760),
    [anon_sym_BANG] = ACTIONS(1760),
    [anon_sym_0] = ACTIONS(1764),
    [anon_sym__] = ACTIONS(1764),
  },
  [508] = {
    [sym_special_variable_name] = STATE(562),
    [anon_sym_DOLLAR] = ACTIONS(273),
    [sym_leading_word] = ACTIONS(1766),
    [sym_comment] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(273),
    [anon_sym_AT] = ACTIONS(273),
    [anon_sym_POUND] = ACTIONS(273),
    [anon_sym_QMARK] = ACTIONS(273),
    [anon_sym_DASH] = ACTIONS(273),
    [anon_sym_BANG] = ACTIONS(273),
    [anon_sym_0] = ACTIONS(273),
    [anon_sym__] = ACTIONS(273),
  },
  [509] = {
    [sym_command] = STATE(563),
    [sym_environment_variable_assignment] = STATE(21),
    [sym_string] = STATE(60),
    [sym_command_substitution] = STATE(60),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(66),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(181),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_raw_string] = ACTIONS(185),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(187),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(191),
    [sym_comment] = ACTIONS(119),
  },
  [510] = {
    [sym_command] = STATE(564),
    [sym_environment_variable_assignment] = STATE(21),
    [sym_string] = STATE(67),
    [sym_command_substitution] = STATE(67),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(70),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_raw_string] = ACTIONS(195),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(187),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(197),
    [sym_comment] = ACTIONS(119),
  },
  [511] = {
    [sym_file_redirect] = STATE(517),
    [sym_heredoc_redirect] = STATE(517),
    [sym_file_descriptor] = ACTIONS(1247),
    [anon_sym_RPAREN] = ACTIONS(1768),
    [anon_sym_SEMI_SEMI] = ACTIONS(1768),
    [anon_sym_PIPE] = ACTIONS(1768),
    [anon_sym_PIPE_AMP] = ACTIONS(1768),
    [anon_sym_AMP_AMP] = ACTIONS(1768),
    [anon_sym_PIPE_PIPE] = ACTIONS(1768),
    [anon_sym_BQUOTE] = ACTIONS(1768),
    [anon_sym_LT] = ACTIONS(1268),
    [anon_sym_GT] = ACTIONS(1268),
    [anon_sym_GT_GT] = ACTIONS(1268),
    [anon_sym_AMP_GT] = ACTIONS(1268),
    [anon_sym_AMP_GT_GT] = ACTIONS(1268),
    [anon_sym_LT_AMP] = ACTIONS(1268),
    [anon_sym_GT_AMP] = ACTIONS(1268),
    [anon_sym_LT_LT] = ACTIONS(1270),
    [anon_sym_LT_LT_DASH] = ACTIONS(1270),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1768),
    [anon_sym_LF] = ACTIONS(1768),
    [anon_sym_AMP] = ACTIONS(1768),
  },
  [512] = {
    [sym_file_redirect] = STATE(475),
    [sym_heredoc_redirect] = STATE(475),
    [aux_sym_command_repeat2] = STATE(566),
    [sym_file_descriptor] = ACTIONS(1247),
    [anon_sym_RPAREN] = ACTIONS(345),
    [anon_sym_SEMI_SEMI] = ACTIONS(345),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(1773),
    [anon_sym_PIPE] = ACTIONS(345),
    [anon_sym_PIPE_AMP] = ACTIONS(345),
    [anon_sym_AMP_AMP] = ACTIONS(345),
    [anon_sym_PIPE_PIPE] = ACTIONS(345),
    [anon_sym_BQUOTE] = ACTIONS(345),
    [anon_sym_LT] = ACTIONS(1268),
    [anon_sym_GT] = ACTIONS(1268),
    [anon_sym_GT_GT] = ACTIONS(1268),
    [anon_sym_AMP_GT] = ACTIONS(1268),
    [anon_sym_AMP_GT_GT] = ACTIONS(1268),
    [anon_sym_LT_AMP] = ACTIONS(1268),
    [anon_sym_GT_AMP] = ACTIONS(1268),
    [anon_sym_LT_LT] = ACTIONS(1270),
    [anon_sym_LT_LT_DASH] = ACTIONS(1270),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(345),
    [anon_sym_LF] = ACTIONS(345),
    [anon_sym_AMP] = ACTIONS(345),
  },
  [513] = {
    [sym_simple_expansion] = STATE(54),
    [sym_expansion] = STATE(54),
    [sym_command_substitution] = STATE(54),
    [aux_sym_string_repeat1] = STATE(568),
    [anon_sym_DQUOTE] = ACTIONS(1775),
    [sym__quoted_chars] = ACTIONS(171),
    [anon_sym_DOLLAR] = ACTIONS(173),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(175),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [sym_comment] = ACTIONS(77),
  },
  [514] = {
    [sym_command] = STATE(569),
    [sym_environment_variable_assignment] = STATE(21),
    [sym_string] = STATE(60),
    [sym_command_substitution] = STATE(60),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(66),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(181),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_raw_string] = ACTIONS(185),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(187),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(191),
    [sym_comment] = ACTIONS(119),
  },
  [515] = {
    [sym_command] = STATE(570),
    [sym_environment_variable_assignment] = STATE(21),
    [sym_string] = STATE(67),
    [sym_command_substitution] = STATE(67),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(70),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_raw_string] = ACTIONS(195),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(187),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(197),
    [sym_comment] = ACTIONS(119),
  },
  [516] = {
    [sym_file_redirect] = STATE(475),
    [sym_heredoc_redirect] = STATE(475),
    [aux_sym_command_repeat2] = STATE(572),
    [sym_file_descriptor] = ACTIONS(1247),
    [anon_sym_RPAREN] = ACTIONS(451),
    [anon_sym_SEMI_SEMI] = ACTIONS(451),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(1777),
    [anon_sym_PIPE] = ACTIONS(451),
    [anon_sym_PIPE_AMP] = ACTIONS(451),
    [anon_sym_AMP_AMP] = ACTIONS(451),
    [anon_sym_PIPE_PIPE] = ACTIONS(451),
    [anon_sym_EQ] = ACTIONS(379),
    [anon_sym_BQUOTE] = ACTIONS(451),
    [anon_sym_LT] = ACTIONS(1268),
    [anon_sym_GT] = ACTIONS(1268),
    [anon_sym_GT_GT] = ACTIONS(1268),
    [anon_sym_AMP_GT] = ACTIONS(1268),
    [anon_sym_AMP_GT_GT] = ACTIONS(1268),
    [anon_sym_LT_AMP] = ACTIONS(1268),
    [anon_sym_GT_AMP] = ACTIONS(1268),
    [anon_sym_LT_LT] = ACTIONS(1270),
    [anon_sym_LT_LT_DASH] = ACTIONS(1270),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(451),
    [anon_sym_LF] = ACTIONS(451),
    [anon_sym_AMP] = ACTIONS(451),
  },
  [517] = {
    [sym_file_descriptor] = ACTIONS(591),
    [anon_sym_RPAREN] = ACTIONS(593),
    [anon_sym_SEMI_SEMI] = ACTIONS(593),
    [anon_sym_PIPE] = ACTIONS(593),
    [anon_sym_PIPE_AMP] = ACTIONS(593),
    [anon_sym_AMP_AMP] = ACTIONS(593),
    [anon_sym_PIPE_PIPE] = ACTIONS(593),
    [anon_sym_BQUOTE] = ACTIONS(593),
    [anon_sym_LT] = ACTIONS(593),
    [anon_sym_GT] = ACTIONS(593),
    [anon_sym_GT_GT] = ACTIONS(593),
    [anon_sym_AMP_GT] = ACTIONS(593),
    [anon_sym_AMP_GT_GT] = ACTIONS(593),
    [anon_sym_LT_AMP] = ACTIONS(593),
    [anon_sym_GT_AMP] = ACTIONS(593),
    [anon_sym_LT_LT] = ACTIONS(593),
    [anon_sym_LT_LT_DASH] = ACTIONS(593),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(593),
    [anon_sym_LF] = ACTIONS(593),
    [anon_sym_AMP] = ACTIONS(593),
  },
  [518] = {
    [sym_file_descriptor] = ACTIONS(609),
    [anon_sym_in] = ACTIONS(611),
    [anon_sym_RPAREN] = ACTIONS(611),
    [anon_sym_SEMI_SEMI] = ACTIONS(611),
    [anon_sym_RBRACE] = ACTIONS(611),
    [anon_sym_RBRACK] = ACTIONS(611),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(611),
    [anon_sym_COLON] = ACTIONS(611),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(611),
    [anon_sym_PIPE] = ACTIONS(611),
    [anon_sym_PIPE_AMP] = ACTIONS(611),
    [anon_sym_AMP_AMP] = ACTIONS(611),
    [anon_sym_PIPE_PIPE] = ACTIONS(611),
    [anon_sym_DQUOTE] = ACTIONS(611),
    [sym_raw_string] = ACTIONS(611),
    [anon_sym_DOLLAR] = ACTIONS(611),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(611),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(611),
    [anon_sym_BQUOTE] = ACTIONS(611),
    [anon_sym_LT] = ACTIONS(611),
    [anon_sym_GT] = ACTIONS(611),
    [anon_sym_GT_GT] = ACTIONS(611),
    [anon_sym_AMP_GT] = ACTIONS(611),
    [anon_sym_AMP_GT_GT] = ACTIONS(611),
    [anon_sym_LT_AMP] = ACTIONS(611),
    [anon_sym_GT_AMP] = ACTIONS(611),
    [anon_sym_LT_LT] = ACTIONS(611),
    [anon_sym_LT_LT_DASH] = ACTIONS(611),
    [sym_leading_word] = ACTIONS(611),
    [sym_word] = ACTIONS(611),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(611),
    [anon_sym_LF] = ACTIONS(611),
    [anon_sym_AMP] = ACTIONS(611),
  },
  [519] = {
    [sym_file_descriptor] = ACTIONS(995),
    [anon_sym_RPAREN] = ACTIONS(997),
    [anon_sym_SEMI_SEMI] = ACTIONS(997),
    [anon_sym_PIPE] = ACTIONS(997),
    [anon_sym_PIPE_AMP] = ACTIONS(997),
    [anon_sym_AMP_AMP] = ACTIONS(997),
    [anon_sym_PIPE_PIPE] = ACTIONS(997),
    [anon_sym_BQUOTE] = ACTIONS(997),
    [anon_sym_LT] = ACTIONS(997),
    [anon_sym_GT] = ACTIONS(997),
    [anon_sym_GT_GT] = ACTIONS(997),
    [anon_sym_AMP_GT] = ACTIONS(997),
    [anon_sym_AMP_GT_GT] = ACTIONS(997),
    [anon_sym_LT_AMP] = ACTIONS(997),
    [anon_sym_GT_AMP] = ACTIONS(997),
    [anon_sym_LT_LT] = ACTIONS(997),
    [anon_sym_LT_LT_DASH] = ACTIONS(997),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(997),
    [anon_sym_LF] = ACTIONS(997),
    [anon_sym_AMP] = ACTIONS(997),
  },
  [520] = {
    [sym_string] = STATE(573),
    [sym_simple_expansion] = STATE(573),
    [sym_expansion] = STATE(573),
    [sym_command_substitution] = STATE(573),
    [anon_sym_DQUOTE] = ACTIONS(1684),
    [sym_raw_string] = ACTIONS(1779),
    [anon_sym_DOLLAR] = ACTIONS(1688),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1690),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1692),
    [anon_sym_BQUOTE] = ACTIONS(1694),
    [sym_word] = ACTIONS(1781),
    [sym_comment] = ACTIONS(119),
  },
  [521] = {
    [sym_simple_expansion] = STATE(54),
    [sym_expansion] = STATE(54),
    [sym_command_substitution] = STATE(54),
    [aux_sym_string_repeat1] = STATE(575),
    [anon_sym_DQUOTE] = ACTIONS(1783),
    [sym__quoted_chars] = ACTIONS(171),
    [anon_sym_DOLLAR] = ACTIONS(173),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(175),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [sym_comment] = ACTIONS(77),
  },
  [522] = {
    [sym_file_descriptor] = ACTIONS(287),
    [anon_sym_RPAREN] = ACTIONS(289),
    [anon_sym_SEMI_SEMI] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(289),
    [anon_sym_PIPE_AMP] = ACTIONS(289),
    [anon_sym_AMP_AMP] = ACTIONS(289),
    [anon_sym_PIPE_PIPE] = ACTIONS(289),
    [anon_sym_DQUOTE] = ACTIONS(289),
    [sym_raw_string] = ACTIONS(289),
    [anon_sym_DOLLAR] = ACTIONS(289),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(289),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(289),
    [anon_sym_BQUOTE] = ACTIONS(289),
    [anon_sym_LT] = ACTIONS(289),
    [anon_sym_GT] = ACTIONS(289),
    [anon_sym_GT_GT] = ACTIONS(289),
    [anon_sym_AMP_GT] = ACTIONS(289),
    [anon_sym_AMP_GT_GT] = ACTIONS(289),
    [anon_sym_LT_AMP] = ACTIONS(289),
    [anon_sym_GT_AMP] = ACTIONS(289),
    [anon_sym_LT_LT] = ACTIONS(289),
    [anon_sym_LT_LT_DASH] = ACTIONS(289),
    [sym_word] = ACTIONS(289),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(289),
    [anon_sym_LF] = ACTIONS(289),
    [anon_sym_AMP] = ACTIONS(289),
  },
  [523] = {
    [sym_special_variable_name] = STATE(578),
    [anon_sym_DOLLAR] = ACTIONS(1785),
    [sym_comment] = ACTIONS(77),
    [sym_simple_variable_name] = ACTIONS(1787),
    [anon_sym_STAR] = ACTIONS(1785),
    [anon_sym_AT] = ACTIONS(1785),
    [anon_sym_POUND] = ACTIONS(1789),
    [anon_sym_QMARK] = ACTIONS(1785),
    [anon_sym_DASH] = ACTIONS(1785),
    [anon_sym_BANG] = ACTIONS(1785),
    [anon_sym_0] = ACTIONS(1789),
    [anon_sym__] = ACTIONS(1789),
  },
  [524] = {
    [sym_special_variable_name] = STATE(580),
    [anon_sym_DOLLAR] = ACTIONS(273),
    [sym_leading_word] = ACTIONS(1791),
    [sym_comment] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(273),
    [anon_sym_AT] = ACTIONS(273),
    [anon_sym_POUND] = ACTIONS(273),
    [anon_sym_QMARK] = ACTIONS(273),
    [anon_sym_DASH] = ACTIONS(273),
    [anon_sym_BANG] = ACTIONS(273),
    [anon_sym_0] = ACTIONS(273),
    [anon_sym__] = ACTIONS(273),
  },
  [525] = {
    [sym_command] = STATE(581),
    [sym_environment_variable_assignment] = STATE(21),
    [sym_string] = STATE(60),
    [sym_command_substitution] = STATE(60),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(66),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(181),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_raw_string] = ACTIONS(185),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(187),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(191),
    [sym_comment] = ACTIONS(119),
  },
  [526] = {
    [sym_command] = STATE(582),
    [sym_environment_variable_assignment] = STATE(21),
    [sym_string] = STATE(67),
    [sym_command_substitution] = STATE(67),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(70),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_raw_string] = ACTIONS(195),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(187),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(197),
    [sym_comment] = ACTIONS(119),
  },
  [527] = {
    [sym_string] = STATE(583),
    [sym_simple_expansion] = STATE(583),
    [sym_expansion] = STATE(583),
    [sym_command_substitution] = STATE(583),
    [sym_file_redirect] = STATE(475),
    [sym_heredoc_redirect] = STATE(475),
    [aux_sym_command_repeat2] = STATE(584),
    [sym_file_descriptor] = ACTIONS(1247),
    [anon_sym_RPAREN] = ACTIONS(1793),
    [anon_sym_SEMI_SEMI] = ACTIONS(1793),
    [anon_sym_PIPE] = ACTIONS(1793),
    [anon_sym_PIPE_AMP] = ACTIONS(1793),
    [anon_sym_AMP_AMP] = ACTIONS(1793),
    [anon_sym_PIPE_PIPE] = ACTIONS(1793),
    [anon_sym_DQUOTE] = ACTIONS(1668),
    [sym_raw_string] = ACTIONS(1796),
    [anon_sym_DOLLAR] = ACTIONS(1672),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1674),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1676),
    [anon_sym_BQUOTE] = ACTIONS(1798),
    [anon_sym_LT] = ACTIONS(1268),
    [anon_sym_GT] = ACTIONS(1268),
    [anon_sym_GT_GT] = ACTIONS(1268),
    [anon_sym_AMP_GT] = ACTIONS(1268),
    [anon_sym_AMP_GT_GT] = ACTIONS(1268),
    [anon_sym_LT_AMP] = ACTIONS(1268),
    [anon_sym_GT_AMP] = ACTIONS(1268),
    [anon_sym_LT_LT] = ACTIONS(1270),
    [anon_sym_LT_LT_DASH] = ACTIONS(1270),
    [sym_word] = ACTIONS(1796),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1793),
    [anon_sym_LF] = ACTIONS(1793),
    [anon_sym_AMP] = ACTIONS(1793),
  },
  [528] = {
    [sym_file_redirect] = STATE(517),
    [sym_heredoc_redirect] = STATE(517),
    [sym_file_descriptor] = ACTIONS(1247),
    [anon_sym_RPAREN] = ACTIONS(1802),
    [anon_sym_SEMI_SEMI] = ACTIONS(1802),
    [anon_sym_PIPE] = ACTIONS(1802),
    [anon_sym_PIPE_AMP] = ACTIONS(1802),
    [anon_sym_AMP_AMP] = ACTIONS(1802),
    [anon_sym_PIPE_PIPE] = ACTIONS(1802),
    [anon_sym_BQUOTE] = ACTIONS(1802),
    [anon_sym_LT] = ACTIONS(1268),
    [anon_sym_GT] = ACTIONS(1268),
    [anon_sym_GT_GT] = ACTIONS(1268),
    [anon_sym_AMP_GT] = ACTIONS(1268),
    [anon_sym_AMP_GT_GT] = ACTIONS(1268),
    [anon_sym_LT_AMP] = ACTIONS(1268),
    [anon_sym_GT_AMP] = ACTIONS(1268),
    [anon_sym_LT_LT] = ACTIONS(1270),
    [anon_sym_LT_LT_DASH] = ACTIONS(1270),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1802),
    [anon_sym_LF] = ACTIONS(1802),
    [anon_sym_AMP] = ACTIONS(1802),
  },
  [529] = {
    [sym_simple_expansion] = STATE(54),
    [sym_expansion] = STATE(54),
    [sym_command_substitution] = STATE(54),
    [aux_sym_string_repeat1] = STATE(586),
    [anon_sym_DQUOTE] = ACTIONS(1805),
    [sym__quoted_chars] = ACTIONS(171),
    [anon_sym_DOLLAR] = ACTIONS(173),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(175),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [sym_comment] = ACTIONS(77),
  },
  [530] = {
    [sym_file_descriptor] = ACTIONS(401),
    [anon_sym_RPAREN] = ACTIONS(405),
    [anon_sym_SEMI_SEMI] = ACTIONS(405),
    [anon_sym_PIPE] = ACTIONS(405),
    [anon_sym_PIPE_AMP] = ACTIONS(405),
    [anon_sym_AMP_AMP] = ACTIONS(405),
    [anon_sym_PIPE_PIPE] = ACTIONS(405),
    [anon_sym_BQUOTE] = ACTIONS(405),
    [anon_sym_LT] = ACTIONS(405),
    [anon_sym_GT] = ACTIONS(405),
    [anon_sym_GT_GT] = ACTIONS(405),
    [anon_sym_AMP_GT] = ACTIONS(405),
    [anon_sym_AMP_GT_GT] = ACTIONS(405),
    [anon_sym_LT_AMP] = ACTIONS(405),
    [anon_sym_GT_AMP] = ACTIONS(405),
    [anon_sym_LT_LT] = ACTIONS(405),
    [anon_sym_LT_LT_DASH] = ACTIONS(405),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(405),
    [anon_sym_LF] = ACTIONS(405),
    [anon_sym_AMP] = ACTIONS(405),
  },
  [531] = {
    [sym_special_variable_name] = STATE(589),
    [anon_sym_DOLLAR] = ACTIONS(1807),
    [sym_comment] = ACTIONS(77),
    [sym_simple_variable_name] = ACTIONS(1809),
    [anon_sym_STAR] = ACTIONS(1807),
    [anon_sym_AT] = ACTIONS(1807),
    [anon_sym_POUND] = ACTIONS(1811),
    [anon_sym_QMARK] = ACTIONS(1807),
    [anon_sym_DASH] = ACTIONS(1807),
    [anon_sym_BANG] = ACTIONS(1807),
    [anon_sym_0] = ACTIONS(1811),
    [anon_sym__] = ACTIONS(1811),
  },
  [532] = {
    [sym_special_variable_name] = STATE(591),
    [anon_sym_DOLLAR] = ACTIONS(273),
    [sym_leading_word] = ACTIONS(1813),
    [sym_comment] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(273),
    [anon_sym_AT] = ACTIONS(273),
    [anon_sym_POUND] = ACTIONS(273),
    [anon_sym_QMARK] = ACTIONS(273),
    [anon_sym_DASH] = ACTIONS(273),
    [anon_sym_BANG] = ACTIONS(273),
    [anon_sym_0] = ACTIONS(273),
    [anon_sym__] = ACTIONS(273),
  },
  [533] = {
    [sym_command] = STATE(592),
    [sym_environment_variable_assignment] = STATE(21),
    [sym_string] = STATE(60),
    [sym_command_substitution] = STATE(60),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(66),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(181),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_raw_string] = ACTIONS(185),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(187),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(191),
    [sym_comment] = ACTIONS(119),
  },
  [534] = {
    [sym_command] = STATE(593),
    [sym_environment_variable_assignment] = STATE(21),
    [sym_string] = STATE(67),
    [sym_command_substitution] = STATE(67),
    [sym_file_redirect] = STATE(21),
    [aux_sym_command_repeat1] = STATE(70),
    [sym_file_descriptor] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_raw_string] = ACTIONS(195),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(187),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_AMP_GT] = ACTIONS(115),
    [anon_sym_AMP_GT_GT] = ACTIONS(115),
    [anon_sym_LT_AMP] = ACTIONS(115),
    [anon_sym_GT_AMP] = ACTIONS(115),
    [sym_leading_word] = ACTIONS(197),
    [sym_comment] = ACTIONS(119),
  },
  [535] = {
    [sym_file_descriptor] = ACTIONS(347),
    [anon_sym_SEMI_SEMI] = ACTIONS(349),
    [anon_sym_RBRACE] = ACTIONS(349),
    [anon_sym_COLON] = ACTIONS(349),
    [anon_sym_PIPE] = ACTIONS(349),
    [anon_sym_PIPE_AMP] = ACTIONS(349),
    [anon_sym_AMP_AMP] = ACTIONS(349),
    [anon_sym_PIPE_PIPE] = ACTIONS(349),
    [anon_sym_DQUOTE] = ACTIONS(349),
    [sym_raw_string] = ACTIONS(349),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(349),
    [anon_sym_BQUOTE] = ACTIONS(349),
    [anon_sym_LT] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(349),
    [anon_sym_GT_GT] = ACTIONS(349),
    [anon_sym_AMP_GT] = ACTIONS(349),
    [anon_sym_AMP_GT_GT] = ACTIONS(349),
    [anon_sym_LT_AMP] = ACTIONS(349),
    [anon_sym_GT_AMP] = ACTIONS(349),
    [sym_leading_word] = ACTIONS(349),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(349),
    [anon_sym_LF] = ACTIONS(349),
    [anon_sym_AMP] = ACTIONS(349),
  },
  [536] = {
    [sym_simple_expansion] = STATE(146),
    [sym_expansion] = STATE(146),
    [sym_command_substitution] = STATE(146),
    [anon_sym_DQUOTE] = ACTIONS(1815),
    [sym__quoted_chars] = ACTIONS(365),
    [anon_sym_DOLLAR] = ACTIONS(173),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(175),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [sym_comment] = ACTIONS(77),
  },
  [537] = {
    [sym_file_descriptor] = ACTIONS(489),
    [anon_sym_SEMI_SEMI] = ACTIONS(483),
    [anon_sym_RBRACE] = ACTIONS(483),
    [anon_sym_COLON] = ACTIONS(483),
    [anon_sym_PIPE] = ACTIONS(483),
    [anon_sym_PIPE_AMP] = ACTIONS(483),
    [anon_sym_AMP_AMP] = ACTIONS(483),
    [anon_sym_PIPE_PIPE] = ACTIONS(483),
    [anon_sym_DQUOTE] = ACTIONS(483),
    [sym_raw_string] = ACTIONS(483),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(483),
    [anon_sym_BQUOTE] = ACTIONS(483),
    [anon_sym_LT] = ACTIONS(483),
    [anon_sym_GT] = ACTIONS(483),
    [anon_sym_GT_GT] = ACTIONS(483),
    [anon_sym_AMP_GT] = ACTIONS(483),
    [anon_sym_AMP_GT_GT] = ACTIONS(483),
    [anon_sym_LT_AMP] = ACTIONS(483),
    [anon_sym_GT_AMP] = ACTIONS(483),
    [sym_leading_word] = ACTIONS(483),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(483),
    [anon_sym_LF] = ACTIONS(483),
    [anon_sym_AMP] = ACTIONS(483),
  },
  [538] = {
    [sym_file_descriptor] = ACTIONS(515),
    [anon_sym_SEMI_SEMI] = ACTIONS(485),
    [anon_sym_RBRACE] = ACTIONS(485),
    [anon_sym_COLON] = ACTIONS(485),
    [anon_sym_PIPE] = ACTIONS(485),
    [anon_sym_PIPE_AMP] = ACTIONS(485),
    [anon_sym_AMP_AMP] = ACTIONS(485),
    [anon_sym_PIPE_PIPE] = ACTIONS(485),
    [anon_sym_DQUOTE] = ACTIONS(485),
    [sym_raw_string] = ACTIONS(485),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(485),
    [anon_sym_BQUOTE] = ACTIONS(485),
    [anon_sym_LT] = ACTIONS(485),
    [anon_sym_GT] = ACTIONS(485),
    [anon_sym_GT_GT] = ACTIONS(485),
    [anon_sym_AMP_GT] = ACTIONS(485),
    [anon_sym_AMP_GT_GT] = ACTIONS(485),
    [anon_sym_LT_AMP] = ACTIONS(485),
    [anon_sym_GT_AMP] = ACTIONS(485),
    [sym_leading_word] = ACTIONS(485),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(485),
    [anon_sym_LF] = ACTIONS(485),
    [anon_sym_AMP] = ACTIONS(485),
  },
  [539] = {
    [sym_file_descriptor] = ACTIONS(519),
    [anon_sym_SEMI_SEMI] = ACTIONS(487),
    [anon_sym_RBRACE] = ACTIONS(487),
    [anon_sym_COLON] = ACTIONS(487),
    [anon_sym_PIPE] = ACTIONS(487),
    [anon_sym_PIPE_AMP] = ACTIONS(487),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [anon_sym_PIPE_PIPE] = ACTIONS(487),
    [anon_sym_DQUOTE] = ACTIONS(487),
    [sym_raw_string] = ACTIONS(487),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(487),
    [anon_sym_BQUOTE] = ACTIONS(487),
    [anon_sym_LT] = ACTIONS(487),
    [anon_sym_GT] = ACTIONS(487),
    [anon_sym_GT_GT] = ACTIONS(487),
    [anon_sym_AMP_GT] = ACTIONS(487),
    [anon_sym_AMP_GT_GT] = ACTIONS(487),
    [anon_sym_LT_AMP] = ACTIONS(487),
    [anon_sym_GT_AMP] = ACTIONS(487),
    [sym_leading_word] = ACTIONS(487),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_LF] = ACTIONS(487),
    [anon_sym_AMP] = ACTIONS(487),
  },
  [540] = {
    [anon_sym_RBRACE] = ACTIONS(1817),
    [anon_sym_COLON] = ACTIONS(1819),
    [anon_sym_EQ] = ACTIONS(1821),
    [anon_sym_COLON_QMARK] = ACTIONS(1821),
    [anon_sym_COLON_DASH] = ACTIONS(1821),
    [sym_comment] = ACTIONS(119),
  },
  [541] = {
    [anon_sym_RBRACE] = ACTIONS(1823),
    [anon_sym_COLON] = ACTIONS(1825),
    [anon_sym_EQ] = ACTIONS(1827),
    [anon_sym_COLON_QMARK] = ACTIONS(1827),
    [anon_sym_COLON_DASH] = ACTIONS(1827),
    [sym_comment] = ACTIONS(119),
  },
  [542] = {
    [anon_sym_RPAREN] = ACTIONS(1829),
    [sym_comment] = ACTIONS(119),
  },
  [543] = {
    [anon_sym_BQUOTE] = ACTIONS(1829),
    [sym_comment] = ACTIONS(119),
  },
  [544] = {
    [sym_file_descriptor] = ACTIONS(347),
    [anon_sym_RPAREN] = ACTIONS(349),
    [anon_sym_SEMI_SEMI] = ACTIONS(349),
    [anon_sym_COLON] = ACTIONS(349),
    [anon_sym_PIPE] = ACTIONS(349),
    [anon_sym_PIPE_AMP] = ACTIONS(349),
    [anon_sym_AMP_AMP] = ACTIONS(349),
    [anon_sym_PIPE_PIPE] = ACTIONS(349),
    [anon_sym_DQUOTE] = ACTIONS(349),
    [sym_raw_string] = ACTIONS(349),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(349),
    [anon_sym_BQUOTE] = ACTIONS(349),
    [anon_sym_LT] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(349),
    [anon_sym_GT_GT] = ACTIONS(349),
    [anon_sym_AMP_GT] = ACTIONS(349),
    [anon_sym_AMP_GT_GT] = ACTIONS(349),
    [anon_sym_LT_AMP] = ACTIONS(349),
    [anon_sym_GT_AMP] = ACTIONS(349),
    [anon_sym_LT_LT] = ACTIONS(349),
    [anon_sym_LT_LT_DASH] = ACTIONS(349),
    [sym_leading_word] = ACTIONS(349),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(349),
    [anon_sym_LF] = ACTIONS(349),
    [anon_sym_AMP] = ACTIONS(349),
  },
  [545] = {
    [sym_simple_expansion] = STATE(146),
    [sym_expansion] = STATE(146),
    [sym_command_substitution] = STATE(146),
    [anon_sym_DQUOTE] = ACTIONS(1831),
    [sym__quoted_chars] = ACTIONS(365),
    [anon_sym_DOLLAR] = ACTIONS(173),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(175),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [sym_comment] = ACTIONS(77),
  },
  [546] = {
    [sym_file_descriptor] = ACTIONS(489),
    [anon_sym_RPAREN] = ACTIONS(483),
    [anon_sym_SEMI_SEMI] = ACTIONS(483),
    [anon_sym_COLON] = ACTIONS(483),
    [anon_sym_PIPE] = ACTIONS(483),
    [anon_sym_PIPE_AMP] = ACTIONS(483),
    [anon_sym_AMP_AMP] = ACTIONS(483),
    [anon_sym_PIPE_PIPE] = ACTIONS(483),
    [anon_sym_DQUOTE] = ACTIONS(483),
    [sym_raw_string] = ACTIONS(483),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(483),
    [anon_sym_BQUOTE] = ACTIONS(483),
    [anon_sym_LT] = ACTIONS(483),
    [anon_sym_GT] = ACTIONS(483),
    [anon_sym_GT_GT] = ACTIONS(483),
    [anon_sym_AMP_GT] = ACTIONS(483),
    [anon_sym_AMP_GT_GT] = ACTIONS(483),
    [anon_sym_LT_AMP] = ACTIONS(483),
    [anon_sym_GT_AMP] = ACTIONS(483),
    [anon_sym_LT_LT] = ACTIONS(483),
    [anon_sym_LT_LT_DASH] = ACTIONS(483),
    [sym_leading_word] = ACTIONS(483),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(483),
    [anon_sym_LF] = ACTIONS(483),
    [anon_sym_AMP] = ACTIONS(483),
  },
  [547] = {
    [sym_file_descriptor] = ACTIONS(515),
    [anon_sym_RPAREN] = ACTIONS(485),
    [anon_sym_SEMI_SEMI] = ACTIONS(485),
    [anon_sym_COLON] = ACTIONS(485),
    [anon_sym_PIPE] = ACTIONS(485),
    [anon_sym_PIPE_AMP] = ACTIONS(485),
    [anon_sym_AMP_AMP] = ACTIONS(485),
    [anon_sym_PIPE_PIPE] = ACTIONS(485),
    [anon_sym_DQUOTE] = ACTIONS(485),
    [sym_raw_string] = ACTIONS(485),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(485),
    [anon_sym_BQUOTE] = ACTIONS(485),
    [anon_sym_LT] = ACTIONS(485),
    [anon_sym_GT] = ACTIONS(485),
    [anon_sym_GT_GT] = ACTIONS(485),
    [anon_sym_AMP_GT] = ACTIONS(485),
    [anon_sym_AMP_GT_GT] = ACTIONS(485),
    [anon_sym_LT_AMP] = ACTIONS(485),
    [anon_sym_GT_AMP] = ACTIONS(485),
    [anon_sym_LT_LT] = ACTIONS(485),
    [anon_sym_LT_LT_DASH] = ACTIONS(485),
    [sym_leading_word] = ACTIONS(485),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(485),
    [anon_sym_LF] = ACTIONS(485),
    [anon_sym_AMP] = ACTIONS(485),
  },
  [548] = {
    [sym_file_descriptor] = ACTIONS(519),
    [anon_sym_RPAREN] = ACTIONS(487),
    [anon_sym_SEMI_SEMI] = ACTIONS(487),
    [anon_sym_COLON] = ACTIONS(487),
    [anon_sym_PIPE] = ACTIONS(487),
    [anon_sym_PIPE_AMP] = ACTIONS(487),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [anon_sym_PIPE_PIPE] = ACTIONS(487),
    [anon_sym_DQUOTE] = ACTIONS(487),
    [sym_raw_string] = ACTIONS(487),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(487),
    [anon_sym_BQUOTE] = ACTIONS(487),
    [anon_sym_LT] = ACTIONS(487),
    [anon_sym_GT] = ACTIONS(487),
    [anon_sym_GT_GT] = ACTIONS(487),
    [anon_sym_AMP_GT] = ACTIONS(487),
    [anon_sym_AMP_GT_GT] = ACTIONS(487),
    [anon_sym_LT_AMP] = ACTIONS(487),
    [anon_sym_GT_AMP] = ACTIONS(487),
    [anon_sym_LT_LT] = ACTIONS(487),
    [anon_sym_LT_LT_DASH] = ACTIONS(487),
    [sym_leading_word] = ACTIONS(487),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_LF] = ACTIONS(487),
    [anon_sym_AMP] = ACTIONS(487),
  },
  [549] = {
    [anon_sym_RBRACE] = ACTIONS(1833),
    [anon_sym_COLON] = ACTIONS(1835),
    [anon_sym_EQ] = ACTIONS(1837),
    [anon_sym_COLON_QMARK] = ACTIONS(1837),
    [anon_sym_COLON_DASH] = ACTIONS(1837),
    [sym_comment] = ACTIONS(119),
  },
  [550] = {
    [anon_sym_RBRACE] = ACTIONS(1839),
    [anon_sym_COLON] = ACTIONS(1841),
    [anon_sym_EQ] = ACTIONS(1843),
    [anon_sym_COLON_QMARK] = ACTIONS(1843),
    [anon_sym_COLON_DASH] = ACTIONS(1843),
    [sym_comment] = ACTIONS(119),
  },
  [551] = {
    [anon_sym_RPAREN] = ACTIONS(1845),
    [sym_comment] = ACTIONS(119),
  },
  [552] = {
    [anon_sym_BQUOTE] = ACTIONS(1845),
    [sym_comment] = ACTIONS(119),
  },
  [553] = {
    [sym_file_descriptor] = ACTIONS(461),
    [anon_sym_RPAREN] = ACTIONS(465),
    [anon_sym_SEMI_SEMI] = ACTIONS(465),
    [anon_sym_COLON] = ACTIONS(465),
    [anon_sym_PIPE] = ACTIONS(465),
    [anon_sym_PIPE_AMP] = ACTIONS(465),
    [anon_sym_AMP_AMP] = ACTIONS(465),
    [anon_sym_PIPE_PIPE] = ACTIONS(465),
    [anon_sym_DQUOTE] = ACTIONS(465),
    [sym_raw_string] = ACTIONS(465),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(465),
    [anon_sym_BQUOTE] = ACTIONS(465),
    [anon_sym_LT] = ACTIONS(465),
    [anon_sym_GT] = ACTIONS(465),
    [anon_sym_GT_GT] = ACTIONS(465),
    [anon_sym_AMP_GT] = ACTIONS(465),
    [anon_sym_AMP_GT_GT] = ACTIONS(465),
    [anon_sym_LT_AMP] = ACTIONS(465),
    [anon_sym_GT_AMP] = ACTIONS(465),
    [anon_sym_LT_LT] = ACTIONS(465),
    [anon_sym_LT_LT_DASH] = ACTIONS(465),
    [sym_leading_word] = ACTIONS(465),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(465),
    [anon_sym_LF] = ACTIONS(465),
    [anon_sym_AMP] = ACTIONS(465),
  },
  [554] = {
    [anon_sym_RBRACE] = ACTIONS(1847),
    [sym_comment] = ACTIONS(119),
  },
  [555] = {
    [anon_sym_SEMI_SEMI] = ACTIONS(1849),
    [anon_sym_PIPE] = ACTIONS(1849),
    [anon_sym_PIPE_AMP] = ACTIONS(1849),
    [anon_sym_AMP_AMP] = ACTIONS(1849),
    [anon_sym_PIPE_PIPE] = ACTIONS(1849),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1849),
    [anon_sym_LF] = ACTIONS(1849),
    [anon_sym_AMP] = ACTIONS(1849),
  },
  [556] = {
    [sym_file_descriptor] = ACTIONS(347),
    [anon_sym_RPAREN] = ACTIONS(349),
    [anon_sym_SEMI_SEMI] = ACTIONS(349),
    [anon_sym_RBRACK] = ACTIONS(349),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(349),
    [anon_sym_PIPE] = ACTIONS(349),
    [anon_sym_PIPE_AMP] = ACTIONS(349),
    [anon_sym_AMP_AMP] = ACTIONS(349),
    [anon_sym_PIPE_PIPE] = ACTIONS(349),
    [anon_sym_DQUOTE] = ACTIONS(349),
    [sym_raw_string] = ACTIONS(349),
    [anon_sym_DOLLAR] = ACTIONS(349),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(349),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(349),
    [anon_sym_BQUOTE] = ACTIONS(349),
    [anon_sym_LT] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(349),
    [anon_sym_GT_GT] = ACTIONS(349),
    [anon_sym_AMP_GT] = ACTIONS(349),
    [anon_sym_AMP_GT_GT] = ACTIONS(349),
    [anon_sym_LT_AMP] = ACTIONS(349),
    [anon_sym_GT_AMP] = ACTIONS(349),
    [anon_sym_LT_LT] = ACTIONS(349),
    [anon_sym_LT_LT_DASH] = ACTIONS(349),
    [sym_word] = ACTIONS(349),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(349),
    [anon_sym_LF] = ACTIONS(349),
    [anon_sym_AMP] = ACTIONS(349),
  },
  [557] = {
    [sym_simple_expansion] = STATE(146),
    [sym_expansion] = STATE(146),
    [sym_command_substitution] = STATE(146),
    [anon_sym_DQUOTE] = ACTIONS(1852),
    [sym__quoted_chars] = ACTIONS(365),
    [anon_sym_DOLLAR] = ACTIONS(173),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(175),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [sym_comment] = ACTIONS(77),
  },
  [558] = {
    [sym_file_descriptor] = ACTIONS(489),
    [anon_sym_RPAREN] = ACTIONS(483),
    [anon_sym_SEMI_SEMI] = ACTIONS(483),
    [anon_sym_RBRACK] = ACTIONS(483),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(483),
    [anon_sym_PIPE] = ACTIONS(483),
    [anon_sym_PIPE_AMP] = ACTIONS(483),
    [anon_sym_AMP_AMP] = ACTIONS(483),
    [anon_sym_PIPE_PIPE] = ACTIONS(483),
    [anon_sym_DQUOTE] = ACTIONS(483),
    [sym_raw_string] = ACTIONS(483),
    [anon_sym_DOLLAR] = ACTIONS(483),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(483),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(483),
    [anon_sym_BQUOTE] = ACTIONS(483),
    [anon_sym_LT] = ACTIONS(483),
    [anon_sym_GT] = ACTIONS(483),
    [anon_sym_GT_GT] = ACTIONS(483),
    [anon_sym_AMP_GT] = ACTIONS(483),
    [anon_sym_AMP_GT_GT] = ACTIONS(483),
    [anon_sym_LT_AMP] = ACTIONS(483),
    [anon_sym_GT_AMP] = ACTIONS(483),
    [anon_sym_LT_LT] = ACTIONS(483),
    [anon_sym_LT_LT_DASH] = ACTIONS(483),
    [sym_word] = ACTIONS(483),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(483),
    [anon_sym_LF] = ACTIONS(483),
    [anon_sym_AMP] = ACTIONS(483),
  },
  [559] = {
    [sym_file_descriptor] = ACTIONS(515),
    [anon_sym_RPAREN] = ACTIONS(485),
    [anon_sym_SEMI_SEMI] = ACTIONS(485),
    [anon_sym_RBRACK] = ACTIONS(485),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(485),
    [anon_sym_PIPE] = ACTIONS(485),
    [anon_sym_PIPE_AMP] = ACTIONS(485),
    [anon_sym_AMP_AMP] = ACTIONS(485),
    [anon_sym_PIPE_PIPE] = ACTIONS(485),
    [anon_sym_DQUOTE] = ACTIONS(485),
    [sym_raw_string] = ACTIONS(485),
    [anon_sym_DOLLAR] = ACTIONS(485),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(485),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(485),
    [anon_sym_BQUOTE] = ACTIONS(485),
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
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(485),
    [anon_sym_LF] = ACTIONS(485),
    [anon_sym_AMP] = ACTIONS(485),
  },
  [560] = {
    [sym_file_descriptor] = ACTIONS(519),
    [anon_sym_RPAREN] = ACTIONS(487),
    [anon_sym_SEMI_SEMI] = ACTIONS(487),
    [anon_sym_RBRACK] = ACTIONS(487),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(487),
    [anon_sym_PIPE] = ACTIONS(487),
    [anon_sym_PIPE_AMP] = ACTIONS(487),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [anon_sym_PIPE_PIPE] = ACTIONS(487),
    [anon_sym_DQUOTE] = ACTIONS(487),
    [sym_raw_string] = ACTIONS(487),
    [anon_sym_DOLLAR] = ACTIONS(487),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(487),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(487),
    [anon_sym_BQUOTE] = ACTIONS(487),
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
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_LF] = ACTIONS(487),
    [anon_sym_AMP] = ACTIONS(487),
  },
  [561] = {
    [anon_sym_RBRACE] = ACTIONS(1854),
    [anon_sym_COLON] = ACTIONS(1856),
    [anon_sym_EQ] = ACTIONS(1858),
    [anon_sym_COLON_QMARK] = ACTIONS(1858),
    [anon_sym_COLON_DASH] = ACTIONS(1858),
    [sym_comment] = ACTIONS(119),
  },
  [562] = {
    [anon_sym_RBRACE] = ACTIONS(1860),
    [anon_sym_COLON] = ACTIONS(1862),
    [anon_sym_EQ] = ACTIONS(1864),
    [anon_sym_COLON_QMARK] = ACTIONS(1864),
    [anon_sym_COLON_DASH] = ACTIONS(1864),
    [sym_comment] = ACTIONS(119),
  },
  [563] = {
    [anon_sym_RPAREN] = ACTIONS(1866),
    [sym_comment] = ACTIONS(119),
  },
  [564] = {
    [anon_sym_BQUOTE] = ACTIONS(1866),
    [sym_comment] = ACTIONS(119),
  },
  [565] = {
    [sym_string] = STATE(522),
    [sym_simple_expansion] = STATE(522),
    [sym_expansion] = STATE(522),
    [sym_command_substitution] = STATE(522),
    [sym_file_redirect] = STATE(475),
    [sym_heredoc_redirect] = STATE(475),
    [aux_sym_bracket_command_repeat1] = STATE(613),
    [aux_sym_command_repeat2] = STATE(614),
    [sym_file_descriptor] = ACTIONS(1247),
    [anon_sym_RPAREN] = ACTIONS(559),
    [anon_sym_SEMI_SEMI] = ACTIONS(559),
    [anon_sym_PIPE] = ACTIONS(559),
    [anon_sym_PIPE_AMP] = ACTIONS(559),
    [anon_sym_AMP_AMP] = ACTIONS(559),
    [anon_sym_PIPE_PIPE] = ACTIONS(559),
    [anon_sym_DQUOTE] = ACTIONS(1668),
    [sym_raw_string] = ACTIONS(1670),
    [anon_sym_DOLLAR] = ACTIONS(1672),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1674),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1676),
    [anon_sym_BQUOTE] = ACTIONS(1868),
    [anon_sym_LT] = ACTIONS(1268),
    [anon_sym_GT] = ACTIONS(1268),
    [anon_sym_GT_GT] = ACTIONS(1268),
    [anon_sym_AMP_GT] = ACTIONS(1268),
    [anon_sym_AMP_GT_GT] = ACTIONS(1268),
    [anon_sym_LT_AMP] = ACTIONS(1268),
    [anon_sym_GT_AMP] = ACTIONS(1268),
    [anon_sym_LT_LT] = ACTIONS(1270),
    [anon_sym_LT_LT_DASH] = ACTIONS(1270),
    [sym_word] = ACTIONS(1670),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(559),
    [anon_sym_LF] = ACTIONS(559),
    [anon_sym_AMP] = ACTIONS(559),
  },
  [566] = {
    [sym_file_redirect] = STATE(517),
    [sym_heredoc_redirect] = STATE(517),
    [sym_file_descriptor] = ACTIONS(1247),
    [anon_sym_RPAREN] = ACTIONS(563),
    [anon_sym_SEMI_SEMI] = ACTIONS(563),
    [anon_sym_PIPE] = ACTIONS(563),
    [anon_sym_PIPE_AMP] = ACTIONS(563),
    [anon_sym_AMP_AMP] = ACTIONS(563),
    [anon_sym_PIPE_PIPE] = ACTIONS(563),
    [anon_sym_BQUOTE] = ACTIONS(563),
    [anon_sym_LT] = ACTIONS(1268),
    [anon_sym_GT] = ACTIONS(1268),
    [anon_sym_GT_GT] = ACTIONS(1268),
    [anon_sym_AMP_GT] = ACTIONS(1268),
    [anon_sym_AMP_GT_GT] = ACTIONS(1268),
    [anon_sym_LT_AMP] = ACTIONS(1268),
    [anon_sym_GT_AMP] = ACTIONS(1268),
    [anon_sym_LT_LT] = ACTIONS(1270),
    [anon_sym_LT_LT_DASH] = ACTIONS(1270),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(563),
    [anon_sym_LF] = ACTIONS(563),
    [anon_sym_AMP] = ACTIONS(563),
  },
  [567] = {
    [sym_file_descriptor] = ACTIONS(347),
    [anon_sym_RPAREN] = ACTIONS(349),
    [anon_sym_SEMI_SEMI] = ACTIONS(349),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(349),
    [anon_sym_PIPE] = ACTIONS(349),
    [anon_sym_PIPE_AMP] = ACTIONS(349),
    [anon_sym_AMP_AMP] = ACTIONS(349),
    [anon_sym_PIPE_PIPE] = ACTIONS(349),
    [anon_sym_BQUOTE] = ACTIONS(349),
    [anon_sym_LT] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(349),
    [anon_sym_GT_GT] = ACTIONS(349),
    [anon_sym_AMP_GT] = ACTIONS(349),
    [anon_sym_AMP_GT_GT] = ACTIONS(349),
    [anon_sym_LT_AMP] = ACTIONS(349),
    [anon_sym_GT_AMP] = ACTIONS(349),
    [anon_sym_LT_LT] = ACTIONS(349),
    [anon_sym_LT_LT_DASH] = ACTIONS(349),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(349),
    [anon_sym_LF] = ACTIONS(349),
    [anon_sym_AMP] = ACTIONS(349),
  },
  [568] = {
    [sym_simple_expansion] = STATE(146),
    [sym_expansion] = STATE(146),
    [sym_command_substitution] = STATE(146),
    [anon_sym_DQUOTE] = ACTIONS(1871),
    [sym__quoted_chars] = ACTIONS(365),
    [anon_sym_DOLLAR] = ACTIONS(173),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(175),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [sym_comment] = ACTIONS(77),
  },
  [569] = {
    [anon_sym_RPAREN] = ACTIONS(1873),
    [sym_comment] = ACTIONS(119),
  },
  [570] = {
    [anon_sym_BQUOTE] = ACTIONS(1873),
    [sym_comment] = ACTIONS(119),
  },
  [571] = {
    [sym_string] = STATE(522),
    [sym_simple_expansion] = STATE(522),
    [sym_expansion] = STATE(522),
    [sym_command_substitution] = STATE(522),
    [sym_file_redirect] = STATE(475),
    [sym_heredoc_redirect] = STATE(475),
    [aux_sym_bracket_command_repeat1] = STATE(617),
    [aux_sym_command_repeat2] = STATE(618),
    [sym_file_descriptor] = ACTIONS(1247),
    [anon_sym_RPAREN] = ACTIONS(723),
    [anon_sym_SEMI_SEMI] = ACTIONS(723),
    [anon_sym_PIPE] = ACTIONS(723),
    [anon_sym_PIPE_AMP] = ACTIONS(723),
    [anon_sym_AMP_AMP] = ACTIONS(723),
    [anon_sym_PIPE_PIPE] = ACTIONS(723),
    [anon_sym_DQUOTE] = ACTIONS(1668),
    [sym_raw_string] = ACTIONS(1670),
    [anon_sym_DOLLAR] = ACTIONS(1672),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1674),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1676),
    [anon_sym_BQUOTE] = ACTIONS(1875),
    [anon_sym_LT] = ACTIONS(1268),
    [anon_sym_GT] = ACTIONS(1268),
    [anon_sym_GT_GT] = ACTIONS(1268),
    [anon_sym_AMP_GT] = ACTIONS(1268),
    [anon_sym_AMP_GT_GT] = ACTIONS(1268),
    [anon_sym_LT_AMP] = ACTIONS(1268),
    [anon_sym_GT_AMP] = ACTIONS(1268),
    [anon_sym_LT_LT] = ACTIONS(1270),
    [anon_sym_LT_LT_DASH] = ACTIONS(1270),
    [sym_word] = ACTIONS(1670),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(723),
    [anon_sym_LF] = ACTIONS(723),
    [anon_sym_AMP] = ACTIONS(723),
  },
  [572] = {
    [sym_file_redirect] = STATE(517),
    [sym_heredoc_redirect] = STATE(517),
    [sym_file_descriptor] = ACTIONS(1247),
    [anon_sym_RPAREN] = ACTIONS(725),
    [anon_sym_SEMI_SEMI] = ACTIONS(725),
    [anon_sym_PIPE] = ACTIONS(725),
    [anon_sym_PIPE_AMP] = ACTIONS(725),
    [anon_sym_AMP_AMP] = ACTIONS(725),
    [anon_sym_PIPE_PIPE] = ACTIONS(725),
    [anon_sym_BQUOTE] = ACTIONS(725),
    [anon_sym_LT] = ACTIONS(1268),
    [anon_sym_GT] = ACTIONS(1268),
    [anon_sym_GT_GT] = ACTIONS(1268),
    [anon_sym_AMP_GT] = ACTIONS(1268),
    [anon_sym_AMP_GT_GT] = ACTIONS(1268),
    [anon_sym_LT_AMP] = ACTIONS(1268),
    [anon_sym_GT_AMP] = ACTIONS(1268),
    [anon_sym_LT_LT] = ACTIONS(1270),
    [anon_sym_LT_LT_DASH] = ACTIONS(1270),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(725),
    [anon_sym_LF] = ACTIONS(725),
    [anon_sym_AMP] = ACTIONS(725),
  },
  [573] = {
    [sym_file_descriptor] = ACTIONS(461),
    [anon_sym_RPAREN] = ACTIONS(465),
    [anon_sym_SEMI_SEMI] = ACTIONS(465),
    [anon_sym_PIPE] = ACTIONS(465),
    [anon_sym_PIPE_AMP] = ACTIONS(465),
    [anon_sym_AMP_AMP] = ACTIONS(465),
    [anon_sym_PIPE_PIPE] = ACTIONS(465),
    [anon_sym_BQUOTE] = ACTIONS(465),
    [anon_sym_LT] = ACTIONS(465),
    [anon_sym_GT] = ACTIONS(465),
    [anon_sym_GT_GT] = ACTIONS(465),
    [anon_sym_AMP_GT] = ACTIONS(465),
    [anon_sym_AMP_GT_GT] = ACTIONS(465),
    [anon_sym_LT_AMP] = ACTIONS(465),
    [anon_sym_GT_AMP] = ACTIONS(465),
    [anon_sym_LT_LT] = ACTIONS(465),
    [anon_sym_LT_LT_DASH] = ACTIONS(465),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(465),
    [anon_sym_LF] = ACTIONS(465),
    [anon_sym_AMP] = ACTIONS(465),
  },
  [574] = {
    [sym_file_descriptor] = ACTIONS(347),
    [anon_sym_RPAREN] = ACTIONS(349),
    [anon_sym_SEMI_SEMI] = ACTIONS(349),
    [anon_sym_PIPE] = ACTIONS(349),
    [anon_sym_PIPE_AMP] = ACTIONS(349),
    [anon_sym_AMP_AMP] = ACTIONS(349),
    [anon_sym_PIPE_PIPE] = ACTIONS(349),
    [anon_sym_DQUOTE] = ACTIONS(349),
    [sym_raw_string] = ACTIONS(349),
    [anon_sym_DOLLAR] = ACTIONS(349),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(349),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(349),
    [anon_sym_BQUOTE] = ACTIONS(349),
    [anon_sym_LT] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(349),
    [anon_sym_GT_GT] = ACTIONS(349),
    [anon_sym_AMP_GT] = ACTIONS(349),
    [anon_sym_AMP_GT_GT] = ACTIONS(349),
    [anon_sym_LT_AMP] = ACTIONS(349),
    [anon_sym_GT_AMP] = ACTIONS(349),
    [anon_sym_LT_LT] = ACTIONS(349),
    [anon_sym_LT_LT_DASH] = ACTIONS(349),
    [sym_word] = ACTIONS(349),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(349),
    [anon_sym_LF] = ACTIONS(349),
    [anon_sym_AMP] = ACTIONS(349),
  },
  [575] = {
    [sym_simple_expansion] = STATE(146),
    [sym_expansion] = STATE(146),
    [sym_command_substitution] = STATE(146),
    [anon_sym_DQUOTE] = ACTIONS(1878),
    [sym__quoted_chars] = ACTIONS(365),
    [anon_sym_DOLLAR] = ACTIONS(173),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(175),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [sym_comment] = ACTIONS(77),
  },
  [576] = {
    [sym_file_descriptor] = ACTIONS(489),
    [anon_sym_RPAREN] = ACTIONS(483),
    [anon_sym_SEMI_SEMI] = ACTIONS(483),
    [anon_sym_PIPE] = ACTIONS(483),
    [anon_sym_PIPE_AMP] = ACTIONS(483),
    [anon_sym_AMP_AMP] = ACTIONS(483),
    [anon_sym_PIPE_PIPE] = ACTIONS(483),
    [anon_sym_DQUOTE] = ACTIONS(483),
    [sym_raw_string] = ACTIONS(483),
    [anon_sym_DOLLAR] = ACTIONS(483),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(483),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(483),
    [anon_sym_BQUOTE] = ACTIONS(483),
    [anon_sym_LT] = ACTIONS(483),
    [anon_sym_GT] = ACTIONS(483),
    [anon_sym_GT_GT] = ACTIONS(483),
    [anon_sym_AMP_GT] = ACTIONS(483),
    [anon_sym_AMP_GT_GT] = ACTIONS(483),
    [anon_sym_LT_AMP] = ACTIONS(483),
    [anon_sym_GT_AMP] = ACTIONS(483),
    [anon_sym_LT_LT] = ACTIONS(483),
    [anon_sym_LT_LT_DASH] = ACTIONS(483),
    [sym_word] = ACTIONS(483),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(483),
    [anon_sym_LF] = ACTIONS(483),
    [anon_sym_AMP] = ACTIONS(483),
  },
  [577] = {
    [sym_file_descriptor] = ACTIONS(515),
    [anon_sym_RPAREN] = ACTIONS(485),
    [anon_sym_SEMI_SEMI] = ACTIONS(485),
    [anon_sym_PIPE] = ACTIONS(485),
    [anon_sym_PIPE_AMP] = ACTIONS(485),
    [anon_sym_AMP_AMP] = ACTIONS(485),
    [anon_sym_PIPE_PIPE] = ACTIONS(485),
    [anon_sym_DQUOTE] = ACTIONS(485),
    [sym_raw_string] = ACTIONS(485),
    [anon_sym_DOLLAR] = ACTIONS(485),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(485),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(485),
    [anon_sym_BQUOTE] = ACTIONS(485),
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
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(485),
    [anon_sym_LF] = ACTIONS(485),
    [anon_sym_AMP] = ACTIONS(485),
  },
  [578] = {
    [sym_file_descriptor] = ACTIONS(519),
    [anon_sym_RPAREN] = ACTIONS(487),
    [anon_sym_SEMI_SEMI] = ACTIONS(487),
    [anon_sym_PIPE] = ACTIONS(487),
    [anon_sym_PIPE_AMP] = ACTIONS(487),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [anon_sym_PIPE_PIPE] = ACTIONS(487),
    [anon_sym_DQUOTE] = ACTIONS(487),
    [sym_raw_string] = ACTIONS(487),
    [anon_sym_DOLLAR] = ACTIONS(487),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(487),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(487),
    [anon_sym_BQUOTE] = ACTIONS(487),
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
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_LF] = ACTIONS(487),
    [anon_sym_AMP] = ACTIONS(487),
  },
  [579] = {
    [anon_sym_RBRACE] = ACTIONS(1880),
    [anon_sym_COLON] = ACTIONS(1882),
    [anon_sym_EQ] = ACTIONS(1884),
    [anon_sym_COLON_QMARK] = ACTIONS(1884),
    [anon_sym_COLON_DASH] = ACTIONS(1884),
    [sym_comment] = ACTIONS(119),
  },
  [580] = {
    [anon_sym_RBRACE] = ACTIONS(1886),
    [anon_sym_COLON] = ACTIONS(1888),
    [anon_sym_EQ] = ACTIONS(1890),
    [anon_sym_COLON_QMARK] = ACTIONS(1890),
    [anon_sym_COLON_DASH] = ACTIONS(1890),
    [sym_comment] = ACTIONS(119),
  },
  [581] = {
    [anon_sym_RPAREN] = ACTIONS(1892),
    [sym_comment] = ACTIONS(119),
  },
  [582] = {
    [anon_sym_BQUOTE] = ACTIONS(1892),
    [sym_comment] = ACTIONS(119),
  },
  [583] = {
    [sym_file_descriptor] = ACTIONS(541),
    [anon_sym_RPAREN] = ACTIONS(543),
    [anon_sym_SEMI_SEMI] = ACTIONS(543),
    [anon_sym_PIPE] = ACTIONS(543),
    [anon_sym_PIPE_AMP] = ACTIONS(543),
    [anon_sym_AMP_AMP] = ACTIONS(543),
    [anon_sym_PIPE_PIPE] = ACTIONS(543),
    [anon_sym_DQUOTE] = ACTIONS(543),
    [sym_raw_string] = ACTIONS(543),
    [anon_sym_DOLLAR] = ACTIONS(543),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(543),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(543),
    [anon_sym_BQUOTE] = ACTIONS(543),
    [anon_sym_LT] = ACTIONS(543),
    [anon_sym_GT] = ACTIONS(543),
    [anon_sym_GT_GT] = ACTIONS(543),
    [anon_sym_AMP_GT] = ACTIONS(543),
    [anon_sym_AMP_GT_GT] = ACTIONS(543),
    [anon_sym_LT_AMP] = ACTIONS(543),
    [anon_sym_GT_AMP] = ACTIONS(543),
    [anon_sym_LT_LT] = ACTIONS(543),
    [anon_sym_LT_LT_DASH] = ACTIONS(543),
    [sym_word] = ACTIONS(543),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(543),
    [anon_sym_LF] = ACTIONS(543),
    [anon_sym_AMP] = ACTIONS(543),
  },
  [584] = {
    [sym_file_redirect] = STATE(517),
    [sym_heredoc_redirect] = STATE(517),
    [sym_file_descriptor] = ACTIONS(1247),
    [anon_sym_RPAREN] = ACTIONS(1894),
    [anon_sym_SEMI_SEMI] = ACTIONS(1894),
    [anon_sym_PIPE] = ACTIONS(1894),
    [anon_sym_PIPE_AMP] = ACTIONS(1894),
    [anon_sym_AMP_AMP] = ACTIONS(1894),
    [anon_sym_PIPE_PIPE] = ACTIONS(1894),
    [anon_sym_BQUOTE] = ACTIONS(1894),
    [anon_sym_LT] = ACTIONS(1268),
    [anon_sym_GT] = ACTIONS(1268),
    [anon_sym_GT_GT] = ACTIONS(1268),
    [anon_sym_AMP_GT] = ACTIONS(1268),
    [anon_sym_AMP_GT_GT] = ACTIONS(1268),
    [anon_sym_LT_AMP] = ACTIONS(1268),
    [anon_sym_GT_AMP] = ACTIONS(1268),
    [anon_sym_LT_LT] = ACTIONS(1270),
    [anon_sym_LT_LT_DASH] = ACTIONS(1270),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1894),
    [anon_sym_LF] = ACTIONS(1894),
    [anon_sym_AMP] = ACTIONS(1894),
  },
  [585] = {
    [sym_file_descriptor] = ACTIONS(347),
    [anon_sym_RPAREN] = ACTIONS(349),
    [anon_sym_SEMI_SEMI] = ACTIONS(349),
    [anon_sym_PIPE] = ACTIONS(349),
    [anon_sym_PIPE_AMP] = ACTIONS(349),
    [anon_sym_AMP_AMP] = ACTIONS(349),
    [anon_sym_PIPE_PIPE] = ACTIONS(349),
    [anon_sym_BQUOTE] = ACTIONS(349),
    [anon_sym_LT] = ACTIONS(349),
    [anon_sym_GT] = ACTIONS(349),
    [anon_sym_GT_GT] = ACTIONS(349),
    [anon_sym_AMP_GT] = ACTIONS(349),
    [anon_sym_AMP_GT_GT] = ACTIONS(349),
    [anon_sym_LT_AMP] = ACTIONS(349),
    [anon_sym_GT_AMP] = ACTIONS(349),
    [anon_sym_LT_LT] = ACTIONS(349),
    [anon_sym_LT_LT_DASH] = ACTIONS(349),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(349),
    [anon_sym_LF] = ACTIONS(349),
    [anon_sym_AMP] = ACTIONS(349),
  },
  [586] = {
    [sym_simple_expansion] = STATE(146),
    [sym_expansion] = STATE(146),
    [sym_command_substitution] = STATE(146),
    [anon_sym_DQUOTE] = ACTIONS(1897),
    [sym__quoted_chars] = ACTIONS(365),
    [anon_sym_DOLLAR] = ACTIONS(173),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(175),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [sym_comment] = ACTIONS(77),
  },
  [587] = {
    [sym_file_descriptor] = ACTIONS(489),
    [anon_sym_RPAREN] = ACTIONS(483),
    [anon_sym_SEMI_SEMI] = ACTIONS(483),
    [anon_sym_PIPE] = ACTIONS(483),
    [anon_sym_PIPE_AMP] = ACTIONS(483),
    [anon_sym_AMP_AMP] = ACTIONS(483),
    [anon_sym_PIPE_PIPE] = ACTIONS(483),
    [anon_sym_BQUOTE] = ACTIONS(483),
    [anon_sym_LT] = ACTIONS(483),
    [anon_sym_GT] = ACTIONS(483),
    [anon_sym_GT_GT] = ACTIONS(483),
    [anon_sym_AMP_GT] = ACTIONS(483),
    [anon_sym_AMP_GT_GT] = ACTIONS(483),
    [anon_sym_LT_AMP] = ACTIONS(483),
    [anon_sym_GT_AMP] = ACTIONS(483),
    [anon_sym_LT_LT] = ACTIONS(483),
    [anon_sym_LT_LT_DASH] = ACTIONS(483),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(483),
    [anon_sym_LF] = ACTIONS(483),
    [anon_sym_AMP] = ACTIONS(483),
  },
  [588] = {
    [sym_file_descriptor] = ACTIONS(515),
    [anon_sym_RPAREN] = ACTIONS(485),
    [anon_sym_SEMI_SEMI] = ACTIONS(485),
    [anon_sym_PIPE] = ACTIONS(485),
    [anon_sym_PIPE_AMP] = ACTIONS(485),
    [anon_sym_AMP_AMP] = ACTIONS(485),
    [anon_sym_PIPE_PIPE] = ACTIONS(485),
    [anon_sym_BQUOTE] = ACTIONS(485),
    [anon_sym_LT] = ACTIONS(485),
    [anon_sym_GT] = ACTIONS(485),
    [anon_sym_GT_GT] = ACTIONS(485),
    [anon_sym_AMP_GT] = ACTIONS(485),
    [anon_sym_AMP_GT_GT] = ACTIONS(485),
    [anon_sym_LT_AMP] = ACTIONS(485),
    [anon_sym_GT_AMP] = ACTIONS(485),
    [anon_sym_LT_LT] = ACTIONS(485),
    [anon_sym_LT_LT_DASH] = ACTIONS(485),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(485),
    [anon_sym_LF] = ACTIONS(485),
    [anon_sym_AMP] = ACTIONS(485),
  },
  [589] = {
    [sym_file_descriptor] = ACTIONS(519),
    [anon_sym_RPAREN] = ACTIONS(487),
    [anon_sym_SEMI_SEMI] = ACTIONS(487),
    [anon_sym_PIPE] = ACTIONS(487),
    [anon_sym_PIPE_AMP] = ACTIONS(487),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [anon_sym_PIPE_PIPE] = ACTIONS(487),
    [anon_sym_BQUOTE] = ACTIONS(487),
    [anon_sym_LT] = ACTIONS(487),
    [anon_sym_GT] = ACTIONS(487),
    [anon_sym_GT_GT] = ACTIONS(487),
    [anon_sym_AMP_GT] = ACTIONS(487),
    [anon_sym_AMP_GT_GT] = ACTIONS(487),
    [anon_sym_LT_AMP] = ACTIONS(487),
    [anon_sym_GT_AMP] = ACTIONS(487),
    [anon_sym_LT_LT] = ACTIONS(487),
    [anon_sym_LT_LT_DASH] = ACTIONS(487),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_LF] = ACTIONS(487),
    [anon_sym_AMP] = ACTIONS(487),
  },
  [590] = {
    [anon_sym_RBRACE] = ACTIONS(1899),
    [anon_sym_COLON] = ACTIONS(1901),
    [anon_sym_EQ] = ACTIONS(1903),
    [anon_sym_COLON_QMARK] = ACTIONS(1903),
    [anon_sym_COLON_DASH] = ACTIONS(1903),
    [sym_comment] = ACTIONS(119),
  },
  [591] = {
    [anon_sym_RBRACE] = ACTIONS(1905),
    [anon_sym_COLON] = ACTIONS(1907),
    [anon_sym_EQ] = ACTIONS(1909),
    [anon_sym_COLON_QMARK] = ACTIONS(1909),
    [anon_sym_COLON_DASH] = ACTIONS(1909),
    [sym_comment] = ACTIONS(119),
  },
  [592] = {
    [anon_sym_RPAREN] = ACTIONS(1911),
    [sym_comment] = ACTIONS(119),
  },
  [593] = {
    [anon_sym_BQUOTE] = ACTIONS(1911),
    [sym_comment] = ACTIONS(119),
  },
  [594] = {
    [sym_file_descriptor] = ACTIONS(609),
    [anon_sym_SEMI_SEMI] = ACTIONS(611),
    [anon_sym_RBRACE] = ACTIONS(611),
    [anon_sym_COLON] = ACTIONS(611),
    [anon_sym_PIPE] = ACTIONS(611),
    [anon_sym_PIPE_AMP] = ACTIONS(611),
    [anon_sym_AMP_AMP] = ACTIONS(611),
    [anon_sym_PIPE_PIPE] = ACTIONS(611),
    [anon_sym_DQUOTE] = ACTIONS(611),
    [sym_raw_string] = ACTIONS(611),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(611),
    [anon_sym_BQUOTE] = ACTIONS(611),
    [anon_sym_LT] = ACTIONS(611),
    [anon_sym_GT] = ACTIONS(611),
    [anon_sym_GT_GT] = ACTIONS(611),
    [anon_sym_AMP_GT] = ACTIONS(611),
    [anon_sym_AMP_GT_GT] = ACTIONS(611),
    [anon_sym_LT_AMP] = ACTIONS(611),
    [anon_sym_GT_AMP] = ACTIONS(611),
    [sym_leading_word] = ACTIONS(611),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(611),
    [anon_sym_LF] = ACTIONS(611),
    [anon_sym_AMP] = ACTIONS(611),
  },
  [595] = {
    [sym_file_descriptor] = ACTIONS(769),
    [anon_sym_SEMI_SEMI] = ACTIONS(755),
    [anon_sym_RBRACE] = ACTIONS(755),
    [anon_sym_COLON] = ACTIONS(755),
    [anon_sym_PIPE] = ACTIONS(755),
    [anon_sym_PIPE_AMP] = ACTIONS(755),
    [anon_sym_AMP_AMP] = ACTIONS(755),
    [anon_sym_PIPE_PIPE] = ACTIONS(755),
    [anon_sym_DQUOTE] = ACTIONS(755),
    [sym_raw_string] = ACTIONS(755),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(755),
    [anon_sym_BQUOTE] = ACTIONS(755),
    [anon_sym_LT] = ACTIONS(755),
    [anon_sym_GT] = ACTIONS(755),
    [anon_sym_GT_GT] = ACTIONS(755),
    [anon_sym_AMP_GT] = ACTIONS(755),
    [anon_sym_AMP_GT_GT] = ACTIONS(755),
    [anon_sym_LT_AMP] = ACTIONS(755),
    [anon_sym_GT_AMP] = ACTIONS(755),
    [sym_leading_word] = ACTIONS(755),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(755),
    [anon_sym_LF] = ACTIONS(755),
    [anon_sym_AMP] = ACTIONS(755),
  },
  [596] = {
    [sym_string] = STATE(631),
    [sym_simple_expansion] = STATE(631),
    [sym_expansion] = STATE(631),
    [sym_command_substitution] = STATE(631),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_raw_string] = ACTIONS(1913),
    [anon_sym_DOLLAR] = ACTIONS(749),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(153),
    [anon_sym_BQUOTE] = ACTIONS(155),
    [sym_word] = ACTIONS(1915),
    [sym_comment] = ACTIONS(119),
  },
  [597] = {
    [sym_file_descriptor] = ACTIONS(777),
    [anon_sym_SEMI_SEMI] = ACTIONS(761),
    [anon_sym_RBRACE] = ACTIONS(761),
    [anon_sym_COLON] = ACTIONS(761),
    [anon_sym_PIPE] = ACTIONS(761),
    [anon_sym_PIPE_AMP] = ACTIONS(761),
    [anon_sym_AMP_AMP] = ACTIONS(761),
    [anon_sym_PIPE_PIPE] = ACTIONS(761),
    [anon_sym_DQUOTE] = ACTIONS(761),
    [sym_raw_string] = ACTIONS(761),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(761),
    [anon_sym_BQUOTE] = ACTIONS(761),
    [anon_sym_LT] = ACTIONS(761),
    [anon_sym_GT] = ACTIONS(761),
    [anon_sym_GT_GT] = ACTIONS(761),
    [anon_sym_AMP_GT] = ACTIONS(761),
    [anon_sym_AMP_GT_GT] = ACTIONS(761),
    [anon_sym_LT_AMP] = ACTIONS(761),
    [anon_sym_GT_AMP] = ACTIONS(761),
    [sym_leading_word] = ACTIONS(761),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(761),
    [anon_sym_LF] = ACTIONS(761),
    [anon_sym_AMP] = ACTIONS(761),
  },
  [598] = {
    [sym_string] = STATE(632),
    [sym_simple_expansion] = STATE(632),
    [sym_expansion] = STATE(632),
    [sym_command_substitution] = STATE(632),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_raw_string] = ACTIONS(1917),
    [anon_sym_DOLLAR] = ACTIONS(749),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(153),
    [anon_sym_BQUOTE] = ACTIONS(155),
    [sym_word] = ACTIONS(1919),
    [sym_comment] = ACTIONS(119),
  },
  [599] = {
    [sym_file_descriptor] = ACTIONS(671),
    [anon_sym_SEMI_SEMI] = ACTIONS(673),
    [anon_sym_RBRACE] = ACTIONS(673),
    [anon_sym_COLON] = ACTIONS(673),
    [anon_sym_PIPE] = ACTIONS(673),
    [anon_sym_PIPE_AMP] = ACTIONS(673),
    [anon_sym_AMP_AMP] = ACTIONS(673),
    [anon_sym_PIPE_PIPE] = ACTIONS(673),
    [anon_sym_DQUOTE] = ACTIONS(673),
    [sym_raw_string] = ACTIONS(673),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(673),
    [anon_sym_BQUOTE] = ACTIONS(673),
    [anon_sym_LT] = ACTIONS(673),
    [anon_sym_GT] = ACTIONS(673),
    [anon_sym_GT_GT] = ACTIONS(673),
    [anon_sym_AMP_GT] = ACTIONS(673),
    [anon_sym_AMP_GT_GT] = ACTIONS(673),
    [anon_sym_LT_AMP] = ACTIONS(673),
    [anon_sym_GT_AMP] = ACTIONS(673),
    [sym_leading_word] = ACTIONS(673),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(673),
    [anon_sym_LF] = ACTIONS(673),
    [anon_sym_AMP] = ACTIONS(673),
  },
  [600] = {
    [sym_file_descriptor] = ACTIONS(609),
    [anon_sym_RPAREN] = ACTIONS(611),
    [anon_sym_SEMI_SEMI] = ACTIONS(611),
    [anon_sym_COLON] = ACTIONS(611),
    [anon_sym_PIPE] = ACTIONS(611),
    [anon_sym_PIPE_AMP] = ACTIONS(611),
    [anon_sym_AMP_AMP] = ACTIONS(611),
    [anon_sym_PIPE_PIPE] = ACTIONS(611),
    [anon_sym_DQUOTE] = ACTIONS(611),
    [sym_raw_string] = ACTIONS(611),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(611),
    [anon_sym_BQUOTE] = ACTIONS(611),
    [anon_sym_LT] = ACTIONS(611),
    [anon_sym_GT] = ACTIONS(611),
    [anon_sym_GT_GT] = ACTIONS(611),
    [anon_sym_AMP_GT] = ACTIONS(611),
    [anon_sym_AMP_GT_GT] = ACTIONS(611),
    [anon_sym_LT_AMP] = ACTIONS(611),
    [anon_sym_GT_AMP] = ACTIONS(611),
    [anon_sym_LT_LT] = ACTIONS(611),
    [anon_sym_LT_LT_DASH] = ACTIONS(611),
    [sym_leading_word] = ACTIONS(611),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(611),
    [anon_sym_LF] = ACTIONS(611),
    [anon_sym_AMP] = ACTIONS(611),
  },
  [601] = {
    [sym_file_descriptor] = ACTIONS(769),
    [anon_sym_RPAREN] = ACTIONS(755),
    [anon_sym_SEMI_SEMI] = ACTIONS(755),
    [anon_sym_COLON] = ACTIONS(755),
    [anon_sym_PIPE] = ACTIONS(755),
    [anon_sym_PIPE_AMP] = ACTIONS(755),
    [anon_sym_AMP_AMP] = ACTIONS(755),
    [anon_sym_PIPE_PIPE] = ACTIONS(755),
    [anon_sym_DQUOTE] = ACTIONS(755),
    [sym_raw_string] = ACTIONS(755),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(755),
    [anon_sym_BQUOTE] = ACTIONS(755),
    [anon_sym_LT] = ACTIONS(755),
    [anon_sym_GT] = ACTIONS(755),
    [anon_sym_GT_GT] = ACTIONS(755),
    [anon_sym_AMP_GT] = ACTIONS(755),
    [anon_sym_AMP_GT_GT] = ACTIONS(755),
    [anon_sym_LT_AMP] = ACTIONS(755),
    [anon_sym_GT_AMP] = ACTIONS(755),
    [anon_sym_LT_LT] = ACTIONS(755),
    [anon_sym_LT_LT_DASH] = ACTIONS(755),
    [sym_leading_word] = ACTIONS(755),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(755),
    [anon_sym_LF] = ACTIONS(755),
    [anon_sym_AMP] = ACTIONS(755),
  },
  [602] = {
    [sym_string] = STATE(633),
    [sym_simple_expansion] = STATE(633),
    [sym_expansion] = STATE(633),
    [sym_command_substitution] = STATE(633),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_raw_string] = ACTIONS(1921),
    [anon_sym_DOLLAR] = ACTIONS(749),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(153),
    [anon_sym_BQUOTE] = ACTIONS(155),
    [sym_word] = ACTIONS(1923),
    [sym_comment] = ACTIONS(119),
  },
  [603] = {
    [sym_file_descriptor] = ACTIONS(777),
    [anon_sym_RPAREN] = ACTIONS(761),
    [anon_sym_SEMI_SEMI] = ACTIONS(761),
    [anon_sym_COLON] = ACTIONS(761),
    [anon_sym_PIPE] = ACTIONS(761),
    [anon_sym_PIPE_AMP] = ACTIONS(761),
    [anon_sym_AMP_AMP] = ACTIONS(761),
    [anon_sym_PIPE_PIPE] = ACTIONS(761),
    [anon_sym_DQUOTE] = ACTIONS(761),
    [sym_raw_string] = ACTIONS(761),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(761),
    [anon_sym_BQUOTE] = ACTIONS(761),
    [anon_sym_LT] = ACTIONS(761),
    [anon_sym_GT] = ACTIONS(761),
    [anon_sym_GT_GT] = ACTIONS(761),
    [anon_sym_AMP_GT] = ACTIONS(761),
    [anon_sym_AMP_GT_GT] = ACTIONS(761),
    [anon_sym_LT_AMP] = ACTIONS(761),
    [anon_sym_GT_AMP] = ACTIONS(761),
    [anon_sym_LT_LT] = ACTIONS(761),
    [anon_sym_LT_LT_DASH] = ACTIONS(761),
    [sym_leading_word] = ACTIONS(761),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(761),
    [anon_sym_LF] = ACTIONS(761),
    [anon_sym_AMP] = ACTIONS(761),
  },
  [604] = {
    [sym_string] = STATE(634),
    [sym_simple_expansion] = STATE(634),
    [sym_expansion] = STATE(634),
    [sym_command_substitution] = STATE(634),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_raw_string] = ACTIONS(1925),
    [anon_sym_DOLLAR] = ACTIONS(749),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(153),
    [anon_sym_BQUOTE] = ACTIONS(155),
    [sym_word] = ACTIONS(1927),
    [sym_comment] = ACTIONS(119),
  },
  [605] = {
    [sym_file_descriptor] = ACTIONS(671),
    [anon_sym_RPAREN] = ACTIONS(673),
    [anon_sym_SEMI_SEMI] = ACTIONS(673),
    [anon_sym_COLON] = ACTIONS(673),
    [anon_sym_PIPE] = ACTIONS(673),
    [anon_sym_PIPE_AMP] = ACTIONS(673),
    [anon_sym_AMP_AMP] = ACTIONS(673),
    [anon_sym_PIPE_PIPE] = ACTIONS(673),
    [anon_sym_DQUOTE] = ACTIONS(673),
    [sym_raw_string] = ACTIONS(673),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(673),
    [anon_sym_BQUOTE] = ACTIONS(673),
    [anon_sym_LT] = ACTIONS(673),
    [anon_sym_GT] = ACTIONS(673),
    [anon_sym_GT_GT] = ACTIONS(673),
    [anon_sym_AMP_GT] = ACTIONS(673),
    [anon_sym_AMP_GT_GT] = ACTIONS(673),
    [anon_sym_LT_AMP] = ACTIONS(673),
    [anon_sym_GT_AMP] = ACTIONS(673),
    [anon_sym_LT_LT] = ACTIONS(673),
    [anon_sym_LT_LT_DASH] = ACTIONS(673),
    [sym_leading_word] = ACTIONS(673),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(673),
    [anon_sym_LF] = ACTIONS(673),
    [anon_sym_AMP] = ACTIONS(673),
  },
  [606] = {
    [sym__heredoc_middle] = ACTIONS(1079),
    [sym__heredoc_end] = ACTIONS(1079),
    [sym_file_descriptor] = ACTIONS(1079),
    [anon_sym_in] = ACTIONS(1073),
    [anon_sym_RPAREN] = ACTIONS(1073),
    [anon_sym_SEMI_SEMI] = ACTIONS(1073),
    [anon_sym_RBRACE] = ACTIONS(1073),
    [anon_sym_RBRACK] = ACTIONS(1073),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1073),
    [anon_sym_COLON] = ACTIONS(1073),
    [anon_sym_PIPE] = ACTIONS(1073),
    [anon_sym_PIPE_AMP] = ACTIONS(1073),
    [anon_sym_AMP_AMP] = ACTIONS(1073),
    [anon_sym_PIPE_PIPE] = ACTIONS(1073),
    [anon_sym_DQUOTE] = ACTIONS(1073),
    [sym__quoted_chars] = ACTIONS(1073),
    [sym_raw_string] = ACTIONS(1073),
    [anon_sym_DOLLAR] = ACTIONS(1073),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1073),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1073),
    [anon_sym_BQUOTE] = ACTIONS(1073),
    [anon_sym_LT] = ACTIONS(1073),
    [anon_sym_GT] = ACTIONS(1073),
    [anon_sym_GT_GT] = ACTIONS(1073),
    [anon_sym_AMP_GT] = ACTIONS(1073),
    [anon_sym_AMP_GT_GT] = ACTIONS(1073),
    [anon_sym_LT_AMP] = ACTIONS(1073),
    [anon_sym_GT_AMP] = ACTIONS(1073),
    [anon_sym_LT_LT] = ACTIONS(1073),
    [anon_sym_LT_LT_DASH] = ACTIONS(1073),
    [sym_leading_word] = ACTIONS(1073),
    [sym_word] = ACTIONS(1073),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1073),
    [anon_sym_LF] = ACTIONS(1073),
    [anon_sym_AMP] = ACTIONS(1073),
  },
  [607] = {
    [sym_file_descriptor] = ACTIONS(609),
    [anon_sym_RPAREN] = ACTIONS(611),
    [anon_sym_SEMI_SEMI] = ACTIONS(611),
    [anon_sym_RBRACK] = ACTIONS(611),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(611),
    [anon_sym_PIPE] = ACTIONS(611),
    [anon_sym_PIPE_AMP] = ACTIONS(611),
    [anon_sym_AMP_AMP] = ACTIONS(611),
    [anon_sym_PIPE_PIPE] = ACTIONS(611),
    [anon_sym_DQUOTE] = ACTIONS(611),
    [sym_raw_string] = ACTIONS(611),
    [anon_sym_DOLLAR] = ACTIONS(611),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(611),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(611),
    [anon_sym_BQUOTE] = ACTIONS(611),
    [anon_sym_LT] = ACTIONS(611),
    [anon_sym_GT] = ACTIONS(611),
    [anon_sym_GT_GT] = ACTIONS(611),
    [anon_sym_AMP_GT] = ACTIONS(611),
    [anon_sym_AMP_GT_GT] = ACTIONS(611),
    [anon_sym_LT_AMP] = ACTIONS(611),
    [anon_sym_GT_AMP] = ACTIONS(611),
    [anon_sym_LT_LT] = ACTIONS(611),
    [anon_sym_LT_LT_DASH] = ACTIONS(611),
    [sym_word] = ACTIONS(611),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(611),
    [anon_sym_LF] = ACTIONS(611),
    [anon_sym_AMP] = ACTIONS(611),
  },
  [608] = {
    [sym_file_descriptor] = ACTIONS(769),
    [anon_sym_RPAREN] = ACTIONS(755),
    [anon_sym_SEMI_SEMI] = ACTIONS(755),
    [anon_sym_RBRACK] = ACTIONS(755),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(755),
    [anon_sym_PIPE] = ACTIONS(755),
    [anon_sym_PIPE_AMP] = ACTIONS(755),
    [anon_sym_AMP_AMP] = ACTIONS(755),
    [anon_sym_PIPE_PIPE] = ACTIONS(755),
    [anon_sym_DQUOTE] = ACTIONS(755),
    [sym_raw_string] = ACTIONS(755),
    [anon_sym_DOLLAR] = ACTIONS(755),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(755),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(755),
    [anon_sym_BQUOTE] = ACTIONS(755),
    [anon_sym_LT] = ACTIONS(755),
    [anon_sym_GT] = ACTIONS(755),
    [anon_sym_GT_GT] = ACTIONS(755),
    [anon_sym_AMP_GT] = ACTIONS(755),
    [anon_sym_AMP_GT_GT] = ACTIONS(755),
    [anon_sym_LT_AMP] = ACTIONS(755),
    [anon_sym_GT_AMP] = ACTIONS(755),
    [anon_sym_LT_LT] = ACTIONS(755),
    [anon_sym_LT_LT_DASH] = ACTIONS(755),
    [sym_word] = ACTIONS(755),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(755),
    [anon_sym_LF] = ACTIONS(755),
    [anon_sym_AMP] = ACTIONS(755),
  },
  [609] = {
    [sym_string] = STATE(635),
    [sym_simple_expansion] = STATE(635),
    [sym_expansion] = STATE(635),
    [sym_command_substitution] = STATE(635),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_raw_string] = ACTIONS(1929),
    [anon_sym_DOLLAR] = ACTIONS(749),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(153),
    [anon_sym_BQUOTE] = ACTIONS(155),
    [sym_word] = ACTIONS(1931),
    [sym_comment] = ACTIONS(119),
  },
  [610] = {
    [sym_file_descriptor] = ACTIONS(777),
    [anon_sym_RPAREN] = ACTIONS(761),
    [anon_sym_SEMI_SEMI] = ACTIONS(761),
    [anon_sym_RBRACK] = ACTIONS(761),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(761),
    [anon_sym_PIPE] = ACTIONS(761),
    [anon_sym_PIPE_AMP] = ACTIONS(761),
    [anon_sym_AMP_AMP] = ACTIONS(761),
    [anon_sym_PIPE_PIPE] = ACTIONS(761),
    [anon_sym_DQUOTE] = ACTIONS(761),
    [sym_raw_string] = ACTIONS(761),
    [anon_sym_DOLLAR] = ACTIONS(761),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(761),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(761),
    [anon_sym_BQUOTE] = ACTIONS(761),
    [anon_sym_LT] = ACTIONS(761),
    [anon_sym_GT] = ACTIONS(761),
    [anon_sym_GT_GT] = ACTIONS(761),
    [anon_sym_AMP_GT] = ACTIONS(761),
    [anon_sym_AMP_GT_GT] = ACTIONS(761),
    [anon_sym_LT_AMP] = ACTIONS(761),
    [anon_sym_GT_AMP] = ACTIONS(761),
    [anon_sym_LT_LT] = ACTIONS(761),
    [anon_sym_LT_LT_DASH] = ACTIONS(761),
    [sym_word] = ACTIONS(761),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(761),
    [anon_sym_LF] = ACTIONS(761),
    [anon_sym_AMP] = ACTIONS(761),
  },
  [611] = {
    [sym_string] = STATE(636),
    [sym_simple_expansion] = STATE(636),
    [sym_expansion] = STATE(636),
    [sym_command_substitution] = STATE(636),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_raw_string] = ACTIONS(1933),
    [anon_sym_DOLLAR] = ACTIONS(749),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(153),
    [anon_sym_BQUOTE] = ACTIONS(155),
    [sym_word] = ACTIONS(1935),
    [sym_comment] = ACTIONS(119),
  },
  [612] = {
    [sym_file_descriptor] = ACTIONS(671),
    [anon_sym_RPAREN] = ACTIONS(673),
    [anon_sym_SEMI_SEMI] = ACTIONS(673),
    [anon_sym_RBRACK] = ACTIONS(673),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(673),
    [anon_sym_PIPE] = ACTIONS(673),
    [anon_sym_PIPE_AMP] = ACTIONS(673),
    [anon_sym_AMP_AMP] = ACTIONS(673),
    [anon_sym_PIPE_PIPE] = ACTIONS(673),
    [anon_sym_DQUOTE] = ACTIONS(673),
    [sym_raw_string] = ACTIONS(673),
    [anon_sym_DOLLAR] = ACTIONS(673),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(673),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(673),
    [anon_sym_BQUOTE] = ACTIONS(673),
    [anon_sym_LT] = ACTIONS(673),
    [anon_sym_GT] = ACTIONS(673),
    [anon_sym_GT_GT] = ACTIONS(673),
    [anon_sym_AMP_GT] = ACTIONS(673),
    [anon_sym_AMP_GT_GT] = ACTIONS(673),
    [anon_sym_LT_AMP] = ACTIONS(673),
    [anon_sym_GT_AMP] = ACTIONS(673),
    [anon_sym_LT_LT] = ACTIONS(673),
    [anon_sym_LT_LT_DASH] = ACTIONS(673),
    [sym_word] = ACTIONS(673),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(673),
    [anon_sym_LF] = ACTIONS(673),
    [anon_sym_AMP] = ACTIONS(673),
  },
  [613] = {
    [sym_string] = STATE(583),
    [sym_simple_expansion] = STATE(583),
    [sym_expansion] = STATE(583),
    [sym_command_substitution] = STATE(583),
    [sym_file_redirect] = STATE(475),
    [sym_heredoc_redirect] = STATE(475),
    [aux_sym_command_repeat2] = STATE(637),
    [sym_file_descriptor] = ACTIONS(1247),
    [anon_sym_RPAREN] = ACTIONS(919),
    [anon_sym_SEMI_SEMI] = ACTIONS(919),
    [anon_sym_PIPE] = ACTIONS(919),
    [anon_sym_PIPE_AMP] = ACTIONS(919),
    [anon_sym_AMP_AMP] = ACTIONS(919),
    [anon_sym_PIPE_PIPE] = ACTIONS(919),
    [anon_sym_DQUOTE] = ACTIONS(1668),
    [sym_raw_string] = ACTIONS(1796),
    [anon_sym_DOLLAR] = ACTIONS(1672),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1674),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1676),
    [anon_sym_BQUOTE] = ACTIONS(1937),
    [anon_sym_LT] = ACTIONS(1268),
    [anon_sym_GT] = ACTIONS(1268),
    [anon_sym_GT_GT] = ACTIONS(1268),
    [anon_sym_AMP_GT] = ACTIONS(1268),
    [anon_sym_AMP_GT_GT] = ACTIONS(1268),
    [anon_sym_LT_AMP] = ACTIONS(1268),
    [anon_sym_GT_AMP] = ACTIONS(1268),
    [anon_sym_LT_LT] = ACTIONS(1270),
    [anon_sym_LT_LT_DASH] = ACTIONS(1270),
    [sym_word] = ACTIONS(1796),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(919),
    [anon_sym_LF] = ACTIONS(919),
    [anon_sym_AMP] = ACTIONS(919),
  },
  [614] = {
    [sym_file_redirect] = STATE(517),
    [sym_heredoc_redirect] = STATE(517),
    [sym_file_descriptor] = ACTIONS(1247),
    [anon_sym_RPAREN] = ACTIONS(803),
    [anon_sym_SEMI_SEMI] = ACTIONS(803),
    [anon_sym_PIPE] = ACTIONS(803),
    [anon_sym_PIPE_AMP] = ACTIONS(803),
    [anon_sym_AMP_AMP] = ACTIONS(803),
    [anon_sym_PIPE_PIPE] = ACTIONS(803),
    [anon_sym_BQUOTE] = ACTIONS(803),
    [anon_sym_LT] = ACTIONS(1268),
    [anon_sym_GT] = ACTIONS(1268),
    [anon_sym_GT_GT] = ACTIONS(1268),
    [anon_sym_AMP_GT] = ACTIONS(1268),
    [anon_sym_AMP_GT_GT] = ACTIONS(1268),
    [anon_sym_LT_AMP] = ACTIONS(1268),
    [anon_sym_GT_AMP] = ACTIONS(1268),
    [anon_sym_LT_LT] = ACTIONS(1270),
    [anon_sym_LT_LT_DASH] = ACTIONS(1270),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(803),
    [anon_sym_LF] = ACTIONS(803),
    [anon_sym_AMP] = ACTIONS(803),
  },
  [615] = {
    [sym_file_descriptor] = ACTIONS(609),
    [anon_sym_RPAREN] = ACTIONS(611),
    [anon_sym_SEMI_SEMI] = ACTIONS(611),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(611),
    [anon_sym_PIPE] = ACTIONS(611),
    [anon_sym_PIPE_AMP] = ACTIONS(611),
    [anon_sym_AMP_AMP] = ACTIONS(611),
    [anon_sym_PIPE_PIPE] = ACTIONS(611),
    [anon_sym_BQUOTE] = ACTIONS(611),
    [anon_sym_LT] = ACTIONS(611),
    [anon_sym_GT] = ACTIONS(611),
    [anon_sym_GT_GT] = ACTIONS(611),
    [anon_sym_AMP_GT] = ACTIONS(611),
    [anon_sym_AMP_GT_GT] = ACTIONS(611),
    [anon_sym_LT_AMP] = ACTIONS(611),
    [anon_sym_GT_AMP] = ACTIONS(611),
    [anon_sym_LT_LT] = ACTIONS(611),
    [anon_sym_LT_LT_DASH] = ACTIONS(611),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(611),
    [anon_sym_LF] = ACTIONS(611),
    [anon_sym_AMP] = ACTIONS(611),
  },
  [616] = {
    [sym_file_descriptor] = ACTIONS(671),
    [anon_sym_RPAREN] = ACTIONS(673),
    [anon_sym_SEMI_SEMI] = ACTIONS(673),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(673),
    [anon_sym_PIPE] = ACTIONS(673),
    [anon_sym_PIPE_AMP] = ACTIONS(673),
    [anon_sym_AMP_AMP] = ACTIONS(673),
    [anon_sym_PIPE_PIPE] = ACTIONS(673),
    [anon_sym_BQUOTE] = ACTIONS(673),
    [anon_sym_LT] = ACTIONS(673),
    [anon_sym_GT] = ACTIONS(673),
    [anon_sym_GT_GT] = ACTIONS(673),
    [anon_sym_AMP_GT] = ACTIONS(673),
    [anon_sym_AMP_GT_GT] = ACTIONS(673),
    [anon_sym_LT_AMP] = ACTIONS(673),
    [anon_sym_GT_AMP] = ACTIONS(673),
    [anon_sym_LT_LT] = ACTIONS(673),
    [anon_sym_LT_LT_DASH] = ACTIONS(673),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(673),
    [anon_sym_LF] = ACTIONS(673),
    [anon_sym_AMP] = ACTIONS(673),
  },
  [617] = {
    [sym_string] = STATE(583),
    [sym_simple_expansion] = STATE(583),
    [sym_expansion] = STATE(583),
    [sym_command_substitution] = STATE(583),
    [sym_file_redirect] = STATE(475),
    [sym_heredoc_redirect] = STATE(475),
    [aux_sym_command_repeat2] = STATE(638),
    [sym_file_descriptor] = ACTIONS(1247),
    [anon_sym_RPAREN] = ACTIONS(921),
    [anon_sym_SEMI_SEMI] = ACTIONS(921),
    [anon_sym_PIPE] = ACTIONS(921),
    [anon_sym_PIPE_AMP] = ACTIONS(921),
    [anon_sym_AMP_AMP] = ACTIONS(921),
    [anon_sym_PIPE_PIPE] = ACTIONS(921),
    [anon_sym_DQUOTE] = ACTIONS(1668),
    [sym_raw_string] = ACTIONS(1796),
    [anon_sym_DOLLAR] = ACTIONS(1672),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1674),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1676),
    [anon_sym_BQUOTE] = ACTIONS(1940),
    [anon_sym_LT] = ACTIONS(1268),
    [anon_sym_GT] = ACTIONS(1268),
    [anon_sym_GT_GT] = ACTIONS(1268),
    [anon_sym_AMP_GT] = ACTIONS(1268),
    [anon_sym_AMP_GT_GT] = ACTIONS(1268),
    [anon_sym_LT_AMP] = ACTIONS(1268),
    [anon_sym_GT_AMP] = ACTIONS(1268),
    [anon_sym_LT_LT] = ACTIONS(1270),
    [anon_sym_LT_LT_DASH] = ACTIONS(1270),
    [sym_word] = ACTIONS(1796),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(921),
    [anon_sym_LF] = ACTIONS(921),
    [anon_sym_AMP] = ACTIONS(921),
  },
  [618] = {
    [sym_file_redirect] = STATE(517),
    [sym_heredoc_redirect] = STATE(517),
    [sym_file_descriptor] = ACTIONS(1247),
    [anon_sym_RPAREN] = ACTIONS(923),
    [anon_sym_SEMI_SEMI] = ACTIONS(923),
    [anon_sym_PIPE] = ACTIONS(923),
    [anon_sym_PIPE_AMP] = ACTIONS(923),
    [anon_sym_AMP_AMP] = ACTIONS(923),
    [anon_sym_PIPE_PIPE] = ACTIONS(923),
    [anon_sym_BQUOTE] = ACTIONS(923),
    [anon_sym_LT] = ACTIONS(1268),
    [anon_sym_GT] = ACTIONS(1268),
    [anon_sym_GT_GT] = ACTIONS(1268),
    [anon_sym_AMP_GT] = ACTIONS(1268),
    [anon_sym_AMP_GT_GT] = ACTIONS(1268),
    [anon_sym_LT_AMP] = ACTIONS(1268),
    [anon_sym_GT_AMP] = ACTIONS(1268),
    [anon_sym_LT_LT] = ACTIONS(1270),
    [anon_sym_LT_LT_DASH] = ACTIONS(1270),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(923),
    [anon_sym_LF] = ACTIONS(923),
    [anon_sym_AMP] = ACTIONS(923),
  },
  [619] = {
    [sym_file_descriptor] = ACTIONS(609),
    [anon_sym_RPAREN] = ACTIONS(611),
    [anon_sym_SEMI_SEMI] = ACTIONS(611),
    [anon_sym_PIPE] = ACTIONS(611),
    [anon_sym_PIPE_AMP] = ACTIONS(611),
    [anon_sym_AMP_AMP] = ACTIONS(611),
    [anon_sym_PIPE_PIPE] = ACTIONS(611),
    [anon_sym_DQUOTE] = ACTIONS(611),
    [sym_raw_string] = ACTIONS(611),
    [anon_sym_DOLLAR] = ACTIONS(611),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(611),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(611),
    [anon_sym_BQUOTE] = ACTIONS(611),
    [anon_sym_LT] = ACTIONS(611),
    [anon_sym_GT] = ACTIONS(611),
    [anon_sym_GT_GT] = ACTIONS(611),
    [anon_sym_AMP_GT] = ACTIONS(611),
    [anon_sym_AMP_GT_GT] = ACTIONS(611),
    [anon_sym_LT_AMP] = ACTIONS(611),
    [anon_sym_GT_AMP] = ACTIONS(611),
    [anon_sym_LT_LT] = ACTIONS(611),
    [anon_sym_LT_LT_DASH] = ACTIONS(611),
    [sym_word] = ACTIONS(611),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(611),
    [anon_sym_LF] = ACTIONS(611),
    [anon_sym_AMP] = ACTIONS(611),
  },
  [620] = {
    [sym_file_descriptor] = ACTIONS(769),
    [anon_sym_RPAREN] = ACTIONS(755),
    [anon_sym_SEMI_SEMI] = ACTIONS(755),
    [anon_sym_PIPE] = ACTIONS(755),
    [anon_sym_PIPE_AMP] = ACTIONS(755),
    [anon_sym_AMP_AMP] = ACTIONS(755),
    [anon_sym_PIPE_PIPE] = ACTIONS(755),
    [anon_sym_DQUOTE] = ACTIONS(755),
    [sym_raw_string] = ACTIONS(755),
    [anon_sym_DOLLAR] = ACTIONS(755),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(755),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(755),
    [anon_sym_BQUOTE] = ACTIONS(755),
    [anon_sym_LT] = ACTIONS(755),
    [anon_sym_GT] = ACTIONS(755),
    [anon_sym_GT_GT] = ACTIONS(755),
    [anon_sym_AMP_GT] = ACTIONS(755),
    [anon_sym_AMP_GT_GT] = ACTIONS(755),
    [anon_sym_LT_AMP] = ACTIONS(755),
    [anon_sym_GT_AMP] = ACTIONS(755),
    [anon_sym_LT_LT] = ACTIONS(755),
    [anon_sym_LT_LT_DASH] = ACTIONS(755),
    [sym_word] = ACTIONS(755),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(755),
    [anon_sym_LF] = ACTIONS(755),
    [anon_sym_AMP] = ACTIONS(755),
  },
  [621] = {
    [sym_string] = STATE(639),
    [sym_simple_expansion] = STATE(639),
    [sym_expansion] = STATE(639),
    [sym_command_substitution] = STATE(639),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_raw_string] = ACTIONS(1943),
    [anon_sym_DOLLAR] = ACTIONS(749),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(153),
    [anon_sym_BQUOTE] = ACTIONS(155),
    [sym_word] = ACTIONS(1945),
    [sym_comment] = ACTIONS(119),
  },
  [622] = {
    [sym_file_descriptor] = ACTIONS(777),
    [anon_sym_RPAREN] = ACTIONS(761),
    [anon_sym_SEMI_SEMI] = ACTIONS(761),
    [anon_sym_PIPE] = ACTIONS(761),
    [anon_sym_PIPE_AMP] = ACTIONS(761),
    [anon_sym_AMP_AMP] = ACTIONS(761),
    [anon_sym_PIPE_PIPE] = ACTIONS(761),
    [anon_sym_DQUOTE] = ACTIONS(761),
    [sym_raw_string] = ACTIONS(761),
    [anon_sym_DOLLAR] = ACTIONS(761),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(761),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(761),
    [anon_sym_BQUOTE] = ACTIONS(761),
    [anon_sym_LT] = ACTIONS(761),
    [anon_sym_GT] = ACTIONS(761),
    [anon_sym_GT_GT] = ACTIONS(761),
    [anon_sym_AMP_GT] = ACTIONS(761),
    [anon_sym_AMP_GT_GT] = ACTIONS(761),
    [anon_sym_LT_AMP] = ACTIONS(761),
    [anon_sym_GT_AMP] = ACTIONS(761),
    [anon_sym_LT_LT] = ACTIONS(761),
    [anon_sym_LT_LT_DASH] = ACTIONS(761),
    [sym_word] = ACTIONS(761),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(761),
    [anon_sym_LF] = ACTIONS(761),
    [anon_sym_AMP] = ACTIONS(761),
  },
  [623] = {
    [sym_string] = STATE(640),
    [sym_simple_expansion] = STATE(640),
    [sym_expansion] = STATE(640),
    [sym_command_substitution] = STATE(640),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_raw_string] = ACTIONS(1947),
    [anon_sym_DOLLAR] = ACTIONS(749),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(153),
    [anon_sym_BQUOTE] = ACTIONS(155),
    [sym_word] = ACTIONS(1949),
    [sym_comment] = ACTIONS(119),
  },
  [624] = {
    [sym_file_descriptor] = ACTIONS(671),
    [anon_sym_RPAREN] = ACTIONS(673),
    [anon_sym_SEMI_SEMI] = ACTIONS(673),
    [anon_sym_PIPE] = ACTIONS(673),
    [anon_sym_PIPE_AMP] = ACTIONS(673),
    [anon_sym_AMP_AMP] = ACTIONS(673),
    [anon_sym_PIPE_PIPE] = ACTIONS(673),
    [anon_sym_DQUOTE] = ACTIONS(673),
    [sym_raw_string] = ACTIONS(673),
    [anon_sym_DOLLAR] = ACTIONS(673),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(673),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(673),
    [anon_sym_BQUOTE] = ACTIONS(673),
    [anon_sym_LT] = ACTIONS(673),
    [anon_sym_GT] = ACTIONS(673),
    [anon_sym_GT_GT] = ACTIONS(673),
    [anon_sym_AMP_GT] = ACTIONS(673),
    [anon_sym_AMP_GT_GT] = ACTIONS(673),
    [anon_sym_LT_AMP] = ACTIONS(673),
    [anon_sym_GT_AMP] = ACTIONS(673),
    [anon_sym_LT_LT] = ACTIONS(673),
    [anon_sym_LT_LT_DASH] = ACTIONS(673),
    [sym_word] = ACTIONS(673),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(673),
    [anon_sym_LF] = ACTIONS(673),
    [anon_sym_AMP] = ACTIONS(673),
  },
  [625] = {
    [sym_file_descriptor] = ACTIONS(609),
    [anon_sym_RPAREN] = ACTIONS(611),
    [anon_sym_SEMI_SEMI] = ACTIONS(611),
    [anon_sym_PIPE] = ACTIONS(611),
    [anon_sym_PIPE_AMP] = ACTIONS(611),
    [anon_sym_AMP_AMP] = ACTIONS(611),
    [anon_sym_PIPE_PIPE] = ACTIONS(611),
    [anon_sym_BQUOTE] = ACTIONS(611),
    [anon_sym_LT] = ACTIONS(611),
    [anon_sym_GT] = ACTIONS(611),
    [anon_sym_GT_GT] = ACTIONS(611),
    [anon_sym_AMP_GT] = ACTIONS(611),
    [anon_sym_AMP_GT_GT] = ACTIONS(611),
    [anon_sym_LT_AMP] = ACTIONS(611),
    [anon_sym_GT_AMP] = ACTIONS(611),
    [anon_sym_LT_LT] = ACTIONS(611),
    [anon_sym_LT_LT_DASH] = ACTIONS(611),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(611),
    [anon_sym_LF] = ACTIONS(611),
    [anon_sym_AMP] = ACTIONS(611),
  },
  [626] = {
    [sym_file_descriptor] = ACTIONS(769),
    [anon_sym_RPAREN] = ACTIONS(755),
    [anon_sym_SEMI_SEMI] = ACTIONS(755),
    [anon_sym_PIPE] = ACTIONS(755),
    [anon_sym_PIPE_AMP] = ACTIONS(755),
    [anon_sym_AMP_AMP] = ACTIONS(755),
    [anon_sym_PIPE_PIPE] = ACTIONS(755),
    [anon_sym_BQUOTE] = ACTIONS(755),
    [anon_sym_LT] = ACTIONS(755),
    [anon_sym_GT] = ACTIONS(755),
    [anon_sym_GT_GT] = ACTIONS(755),
    [anon_sym_AMP_GT] = ACTIONS(755),
    [anon_sym_AMP_GT_GT] = ACTIONS(755),
    [anon_sym_LT_AMP] = ACTIONS(755),
    [anon_sym_GT_AMP] = ACTIONS(755),
    [anon_sym_LT_LT] = ACTIONS(755),
    [anon_sym_LT_LT_DASH] = ACTIONS(755),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(755),
    [anon_sym_LF] = ACTIONS(755),
    [anon_sym_AMP] = ACTIONS(755),
  },
  [627] = {
    [sym_string] = STATE(641),
    [sym_simple_expansion] = STATE(641),
    [sym_expansion] = STATE(641),
    [sym_command_substitution] = STATE(641),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_raw_string] = ACTIONS(1951),
    [anon_sym_DOLLAR] = ACTIONS(749),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(153),
    [anon_sym_BQUOTE] = ACTIONS(155),
    [sym_word] = ACTIONS(1953),
    [sym_comment] = ACTIONS(119),
  },
  [628] = {
    [sym_file_descriptor] = ACTIONS(777),
    [anon_sym_RPAREN] = ACTIONS(761),
    [anon_sym_SEMI_SEMI] = ACTIONS(761),
    [anon_sym_PIPE] = ACTIONS(761),
    [anon_sym_PIPE_AMP] = ACTIONS(761),
    [anon_sym_AMP_AMP] = ACTIONS(761),
    [anon_sym_PIPE_PIPE] = ACTIONS(761),
    [anon_sym_BQUOTE] = ACTIONS(761),
    [anon_sym_LT] = ACTIONS(761),
    [anon_sym_GT] = ACTIONS(761),
    [anon_sym_GT_GT] = ACTIONS(761),
    [anon_sym_AMP_GT] = ACTIONS(761),
    [anon_sym_AMP_GT_GT] = ACTIONS(761),
    [anon_sym_LT_AMP] = ACTIONS(761),
    [anon_sym_GT_AMP] = ACTIONS(761),
    [anon_sym_LT_LT] = ACTIONS(761),
    [anon_sym_LT_LT_DASH] = ACTIONS(761),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(761),
    [anon_sym_LF] = ACTIONS(761),
    [anon_sym_AMP] = ACTIONS(761),
  },
  [629] = {
    [sym_string] = STATE(642),
    [sym_simple_expansion] = STATE(642),
    [sym_expansion] = STATE(642),
    [sym_command_substitution] = STATE(642),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_raw_string] = ACTIONS(1955),
    [anon_sym_DOLLAR] = ACTIONS(749),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(151),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(153),
    [anon_sym_BQUOTE] = ACTIONS(155),
    [sym_word] = ACTIONS(1957),
    [sym_comment] = ACTIONS(119),
  },
  [630] = {
    [sym_file_descriptor] = ACTIONS(671),
    [anon_sym_RPAREN] = ACTIONS(673),
    [anon_sym_SEMI_SEMI] = ACTIONS(673),
    [anon_sym_PIPE] = ACTIONS(673),
    [anon_sym_PIPE_AMP] = ACTIONS(673),
    [anon_sym_AMP_AMP] = ACTIONS(673),
    [anon_sym_PIPE_PIPE] = ACTIONS(673),
    [anon_sym_BQUOTE] = ACTIONS(673),
    [anon_sym_LT] = ACTIONS(673),
    [anon_sym_GT] = ACTIONS(673),
    [anon_sym_GT_GT] = ACTIONS(673),
    [anon_sym_AMP_GT] = ACTIONS(673),
    [anon_sym_AMP_GT_GT] = ACTIONS(673),
    [anon_sym_LT_AMP] = ACTIONS(673),
    [anon_sym_GT_AMP] = ACTIONS(673),
    [anon_sym_LT_LT] = ACTIONS(673),
    [anon_sym_LT_LT_DASH] = ACTIONS(673),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(673),
    [anon_sym_LF] = ACTIONS(673),
    [anon_sym_AMP] = ACTIONS(673),
  },
  [631] = {
    [anon_sym_RBRACE] = ACTIONS(1959),
    [sym_comment] = ACTIONS(119),
  },
  [632] = {
    [anon_sym_RBRACE] = ACTIONS(1961),
    [sym_comment] = ACTIONS(119),
  },
  [633] = {
    [anon_sym_RBRACE] = ACTIONS(1963),
    [sym_comment] = ACTIONS(119),
  },
  [634] = {
    [anon_sym_RBRACE] = ACTIONS(1965),
    [sym_comment] = ACTIONS(119),
  },
  [635] = {
    [anon_sym_RBRACE] = ACTIONS(1967),
    [sym_comment] = ACTIONS(119),
  },
  [636] = {
    [anon_sym_RBRACE] = ACTIONS(1969),
    [sym_comment] = ACTIONS(119),
  },
  [637] = {
    [sym_file_redirect] = STATE(517),
    [sym_heredoc_redirect] = STATE(517),
    [sym_file_descriptor] = ACTIONS(1247),
    [anon_sym_RPAREN] = ACTIONS(1049),
    [anon_sym_SEMI_SEMI] = ACTIONS(1049),
    [anon_sym_PIPE] = ACTIONS(1049),
    [anon_sym_PIPE_AMP] = ACTIONS(1049),
    [anon_sym_AMP_AMP] = ACTIONS(1049),
    [anon_sym_PIPE_PIPE] = ACTIONS(1049),
    [anon_sym_BQUOTE] = ACTIONS(1049),
    [anon_sym_LT] = ACTIONS(1268),
    [anon_sym_GT] = ACTIONS(1268),
    [anon_sym_GT_GT] = ACTIONS(1268),
    [anon_sym_AMP_GT] = ACTIONS(1268),
    [anon_sym_AMP_GT_GT] = ACTIONS(1268),
    [anon_sym_LT_AMP] = ACTIONS(1268),
    [anon_sym_GT_AMP] = ACTIONS(1268),
    [anon_sym_LT_LT] = ACTIONS(1270),
    [anon_sym_LT_LT_DASH] = ACTIONS(1270),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1049),
    [anon_sym_LF] = ACTIONS(1049),
    [anon_sym_AMP] = ACTIONS(1049),
  },
  [638] = {
    [sym_file_redirect] = STATE(517),
    [sym_heredoc_redirect] = STATE(517),
    [sym_file_descriptor] = ACTIONS(1247),
    [anon_sym_RPAREN] = ACTIONS(1051),
    [anon_sym_SEMI_SEMI] = ACTIONS(1051),
    [anon_sym_PIPE] = ACTIONS(1051),
    [anon_sym_PIPE_AMP] = ACTIONS(1051),
    [anon_sym_AMP_AMP] = ACTIONS(1051),
    [anon_sym_PIPE_PIPE] = ACTIONS(1051),
    [anon_sym_BQUOTE] = ACTIONS(1051),
    [anon_sym_LT] = ACTIONS(1268),
    [anon_sym_GT] = ACTIONS(1268),
    [anon_sym_GT_GT] = ACTIONS(1268),
    [anon_sym_AMP_GT] = ACTIONS(1268),
    [anon_sym_AMP_GT_GT] = ACTIONS(1268),
    [anon_sym_LT_AMP] = ACTIONS(1268),
    [anon_sym_GT_AMP] = ACTIONS(1268),
    [anon_sym_LT_LT] = ACTIONS(1270),
    [anon_sym_LT_LT_DASH] = ACTIONS(1270),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1051),
    [anon_sym_LF] = ACTIONS(1051),
    [anon_sym_AMP] = ACTIONS(1051),
  },
  [639] = {
    [anon_sym_RBRACE] = ACTIONS(1971),
    [sym_comment] = ACTIONS(119),
  },
  [640] = {
    [anon_sym_RBRACE] = ACTIONS(1973),
    [sym_comment] = ACTIONS(119),
  },
  [641] = {
    [anon_sym_RBRACE] = ACTIONS(1975),
    [sym_comment] = ACTIONS(119),
  },
  [642] = {
    [anon_sym_RBRACE] = ACTIONS(1977),
    [sym_comment] = ACTIONS(119),
  },
  [643] = {
    [sym_file_descriptor] = ACTIONS(1075),
    [anon_sym_SEMI_SEMI] = ACTIONS(1071),
    [anon_sym_RBRACE] = ACTIONS(1071),
    [anon_sym_COLON] = ACTIONS(1071),
    [anon_sym_PIPE] = ACTIONS(1071),
    [anon_sym_PIPE_AMP] = ACTIONS(1071),
    [anon_sym_AMP_AMP] = ACTIONS(1071),
    [anon_sym_PIPE_PIPE] = ACTIONS(1071),
    [anon_sym_DQUOTE] = ACTIONS(1071),
    [sym_raw_string] = ACTIONS(1071),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1071),
    [anon_sym_BQUOTE] = ACTIONS(1071),
    [anon_sym_LT] = ACTIONS(1071),
    [anon_sym_GT] = ACTIONS(1071),
    [anon_sym_GT_GT] = ACTIONS(1071),
    [anon_sym_AMP_GT] = ACTIONS(1071),
    [anon_sym_AMP_GT_GT] = ACTIONS(1071),
    [anon_sym_LT_AMP] = ACTIONS(1071),
    [anon_sym_GT_AMP] = ACTIONS(1071),
    [sym_leading_word] = ACTIONS(1071),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1071),
    [anon_sym_LF] = ACTIONS(1071),
    [anon_sym_AMP] = ACTIONS(1071),
  },
  [644] = {
    [sym_file_descriptor] = ACTIONS(1079),
    [anon_sym_SEMI_SEMI] = ACTIONS(1073),
    [anon_sym_RBRACE] = ACTIONS(1073),
    [anon_sym_COLON] = ACTIONS(1073),
    [anon_sym_PIPE] = ACTIONS(1073),
    [anon_sym_PIPE_AMP] = ACTIONS(1073),
    [anon_sym_AMP_AMP] = ACTIONS(1073),
    [anon_sym_PIPE_PIPE] = ACTIONS(1073),
    [anon_sym_DQUOTE] = ACTIONS(1073),
    [sym_raw_string] = ACTIONS(1073),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1073),
    [anon_sym_BQUOTE] = ACTIONS(1073),
    [anon_sym_LT] = ACTIONS(1073),
    [anon_sym_GT] = ACTIONS(1073),
    [anon_sym_GT_GT] = ACTIONS(1073),
    [anon_sym_AMP_GT] = ACTIONS(1073),
    [anon_sym_AMP_GT_GT] = ACTIONS(1073),
    [anon_sym_LT_AMP] = ACTIONS(1073),
    [anon_sym_GT_AMP] = ACTIONS(1073),
    [sym_leading_word] = ACTIONS(1073),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1073),
    [anon_sym_LF] = ACTIONS(1073),
    [anon_sym_AMP] = ACTIONS(1073),
  },
  [645] = {
    [sym_file_descriptor] = ACTIONS(1075),
    [anon_sym_RPAREN] = ACTIONS(1071),
    [anon_sym_SEMI_SEMI] = ACTIONS(1071),
    [anon_sym_COLON] = ACTIONS(1071),
    [anon_sym_PIPE] = ACTIONS(1071),
    [anon_sym_PIPE_AMP] = ACTIONS(1071),
    [anon_sym_AMP_AMP] = ACTIONS(1071),
    [anon_sym_PIPE_PIPE] = ACTIONS(1071),
    [anon_sym_DQUOTE] = ACTIONS(1071),
    [sym_raw_string] = ACTIONS(1071),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1071),
    [anon_sym_BQUOTE] = ACTIONS(1071),
    [anon_sym_LT] = ACTIONS(1071),
    [anon_sym_GT] = ACTIONS(1071),
    [anon_sym_GT_GT] = ACTIONS(1071),
    [anon_sym_AMP_GT] = ACTIONS(1071),
    [anon_sym_AMP_GT_GT] = ACTIONS(1071),
    [anon_sym_LT_AMP] = ACTIONS(1071),
    [anon_sym_GT_AMP] = ACTIONS(1071),
    [anon_sym_LT_LT] = ACTIONS(1071),
    [anon_sym_LT_LT_DASH] = ACTIONS(1071),
    [sym_leading_word] = ACTIONS(1071),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1071),
    [anon_sym_LF] = ACTIONS(1071),
    [anon_sym_AMP] = ACTIONS(1071),
  },
  [646] = {
    [sym_file_descriptor] = ACTIONS(1079),
    [anon_sym_RPAREN] = ACTIONS(1073),
    [anon_sym_SEMI_SEMI] = ACTIONS(1073),
    [anon_sym_COLON] = ACTIONS(1073),
    [anon_sym_PIPE] = ACTIONS(1073),
    [anon_sym_PIPE_AMP] = ACTIONS(1073),
    [anon_sym_AMP_AMP] = ACTIONS(1073),
    [anon_sym_PIPE_PIPE] = ACTIONS(1073),
    [anon_sym_DQUOTE] = ACTIONS(1073),
    [sym_raw_string] = ACTIONS(1073),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1073),
    [anon_sym_BQUOTE] = ACTIONS(1073),
    [anon_sym_LT] = ACTIONS(1073),
    [anon_sym_GT] = ACTIONS(1073),
    [anon_sym_GT_GT] = ACTIONS(1073),
    [anon_sym_AMP_GT] = ACTIONS(1073),
    [anon_sym_AMP_GT_GT] = ACTIONS(1073),
    [anon_sym_LT_AMP] = ACTIONS(1073),
    [anon_sym_GT_AMP] = ACTIONS(1073),
    [anon_sym_LT_LT] = ACTIONS(1073),
    [anon_sym_LT_LT_DASH] = ACTIONS(1073),
    [sym_leading_word] = ACTIONS(1073),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1073),
    [anon_sym_LF] = ACTIONS(1073),
    [anon_sym_AMP] = ACTIONS(1073),
  },
  [647] = {
    [sym_file_descriptor] = ACTIONS(1075),
    [anon_sym_RPAREN] = ACTIONS(1071),
    [anon_sym_SEMI_SEMI] = ACTIONS(1071),
    [anon_sym_RBRACK] = ACTIONS(1071),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1071),
    [anon_sym_PIPE] = ACTIONS(1071),
    [anon_sym_PIPE_AMP] = ACTIONS(1071),
    [anon_sym_AMP_AMP] = ACTIONS(1071),
    [anon_sym_PIPE_PIPE] = ACTIONS(1071),
    [anon_sym_DQUOTE] = ACTIONS(1071),
    [sym_raw_string] = ACTIONS(1071),
    [anon_sym_DOLLAR] = ACTIONS(1071),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1071),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1071),
    [anon_sym_BQUOTE] = ACTIONS(1071),
    [anon_sym_LT] = ACTIONS(1071),
    [anon_sym_GT] = ACTIONS(1071),
    [anon_sym_GT_GT] = ACTIONS(1071),
    [anon_sym_AMP_GT] = ACTIONS(1071),
    [anon_sym_AMP_GT_GT] = ACTIONS(1071),
    [anon_sym_LT_AMP] = ACTIONS(1071),
    [anon_sym_GT_AMP] = ACTIONS(1071),
    [anon_sym_LT_LT] = ACTIONS(1071),
    [anon_sym_LT_LT_DASH] = ACTIONS(1071),
    [sym_word] = ACTIONS(1071),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1071),
    [anon_sym_LF] = ACTIONS(1071),
    [anon_sym_AMP] = ACTIONS(1071),
  },
  [648] = {
    [sym_file_descriptor] = ACTIONS(1079),
    [anon_sym_RPAREN] = ACTIONS(1073),
    [anon_sym_SEMI_SEMI] = ACTIONS(1073),
    [anon_sym_RBRACK] = ACTIONS(1073),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1073),
    [anon_sym_PIPE] = ACTIONS(1073),
    [anon_sym_PIPE_AMP] = ACTIONS(1073),
    [anon_sym_AMP_AMP] = ACTIONS(1073),
    [anon_sym_PIPE_PIPE] = ACTIONS(1073),
    [anon_sym_DQUOTE] = ACTIONS(1073),
    [sym_raw_string] = ACTIONS(1073),
    [anon_sym_DOLLAR] = ACTIONS(1073),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1073),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1073),
    [anon_sym_BQUOTE] = ACTIONS(1073),
    [anon_sym_LT] = ACTIONS(1073),
    [anon_sym_GT] = ACTIONS(1073),
    [anon_sym_GT_GT] = ACTIONS(1073),
    [anon_sym_AMP_GT] = ACTIONS(1073),
    [anon_sym_AMP_GT_GT] = ACTIONS(1073),
    [anon_sym_LT_AMP] = ACTIONS(1073),
    [anon_sym_GT_AMP] = ACTIONS(1073),
    [anon_sym_LT_LT] = ACTIONS(1073),
    [anon_sym_LT_LT_DASH] = ACTIONS(1073),
    [sym_word] = ACTIONS(1073),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1073),
    [anon_sym_LF] = ACTIONS(1073),
    [anon_sym_AMP] = ACTIONS(1073),
  },
  [649] = {
    [sym_file_descriptor] = ACTIONS(1075),
    [anon_sym_RPAREN] = ACTIONS(1071),
    [anon_sym_SEMI_SEMI] = ACTIONS(1071),
    [anon_sym_PIPE] = ACTIONS(1071),
    [anon_sym_PIPE_AMP] = ACTIONS(1071),
    [anon_sym_AMP_AMP] = ACTIONS(1071),
    [anon_sym_PIPE_PIPE] = ACTIONS(1071),
    [anon_sym_DQUOTE] = ACTIONS(1071),
    [sym_raw_string] = ACTIONS(1071),
    [anon_sym_DOLLAR] = ACTIONS(1071),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1071),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1071),
    [anon_sym_BQUOTE] = ACTIONS(1071),
    [anon_sym_LT] = ACTIONS(1071),
    [anon_sym_GT] = ACTIONS(1071),
    [anon_sym_GT_GT] = ACTIONS(1071),
    [anon_sym_AMP_GT] = ACTIONS(1071),
    [anon_sym_AMP_GT_GT] = ACTIONS(1071),
    [anon_sym_LT_AMP] = ACTIONS(1071),
    [anon_sym_GT_AMP] = ACTIONS(1071),
    [anon_sym_LT_LT] = ACTIONS(1071),
    [anon_sym_LT_LT_DASH] = ACTIONS(1071),
    [sym_word] = ACTIONS(1071),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1071),
    [anon_sym_LF] = ACTIONS(1071),
    [anon_sym_AMP] = ACTIONS(1071),
  },
  [650] = {
    [sym_file_descriptor] = ACTIONS(1079),
    [anon_sym_RPAREN] = ACTIONS(1073),
    [anon_sym_SEMI_SEMI] = ACTIONS(1073),
    [anon_sym_PIPE] = ACTIONS(1073),
    [anon_sym_PIPE_AMP] = ACTIONS(1073),
    [anon_sym_AMP_AMP] = ACTIONS(1073),
    [anon_sym_PIPE_PIPE] = ACTIONS(1073),
    [anon_sym_DQUOTE] = ACTIONS(1073),
    [sym_raw_string] = ACTIONS(1073),
    [anon_sym_DOLLAR] = ACTIONS(1073),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1073),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1073),
    [anon_sym_BQUOTE] = ACTIONS(1073),
    [anon_sym_LT] = ACTIONS(1073),
    [anon_sym_GT] = ACTIONS(1073),
    [anon_sym_GT_GT] = ACTIONS(1073),
    [anon_sym_AMP_GT] = ACTIONS(1073),
    [anon_sym_AMP_GT_GT] = ACTIONS(1073),
    [anon_sym_LT_AMP] = ACTIONS(1073),
    [anon_sym_GT_AMP] = ACTIONS(1073),
    [anon_sym_LT_LT] = ACTIONS(1073),
    [anon_sym_LT_LT_DASH] = ACTIONS(1073),
    [sym_word] = ACTIONS(1073),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1073),
    [anon_sym_LF] = ACTIONS(1073),
    [anon_sym_AMP] = ACTIONS(1073),
  },
  [651] = {
    [sym_file_descriptor] = ACTIONS(1075),
    [anon_sym_RPAREN] = ACTIONS(1071),
    [anon_sym_SEMI_SEMI] = ACTIONS(1071),
    [anon_sym_PIPE] = ACTIONS(1071),
    [anon_sym_PIPE_AMP] = ACTIONS(1071),
    [anon_sym_AMP_AMP] = ACTIONS(1071),
    [anon_sym_PIPE_PIPE] = ACTIONS(1071),
    [anon_sym_BQUOTE] = ACTIONS(1071),
    [anon_sym_LT] = ACTIONS(1071),
    [anon_sym_GT] = ACTIONS(1071),
    [anon_sym_GT_GT] = ACTIONS(1071),
    [anon_sym_AMP_GT] = ACTIONS(1071),
    [anon_sym_AMP_GT_GT] = ACTIONS(1071),
    [anon_sym_LT_AMP] = ACTIONS(1071),
    [anon_sym_GT_AMP] = ACTIONS(1071),
    [anon_sym_LT_LT] = ACTIONS(1071),
    [anon_sym_LT_LT_DASH] = ACTIONS(1071),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1071),
    [anon_sym_LF] = ACTIONS(1071),
    [anon_sym_AMP] = ACTIONS(1071),
  },
  [652] = {
    [sym_file_descriptor] = ACTIONS(1079),
    [anon_sym_RPAREN] = ACTIONS(1073),
    [anon_sym_SEMI_SEMI] = ACTIONS(1073),
    [anon_sym_PIPE] = ACTIONS(1073),
    [anon_sym_PIPE_AMP] = ACTIONS(1073),
    [anon_sym_AMP_AMP] = ACTIONS(1073),
    [anon_sym_PIPE_PIPE] = ACTIONS(1073),
    [anon_sym_BQUOTE] = ACTIONS(1073),
    [anon_sym_LT] = ACTIONS(1073),
    [anon_sym_GT] = ACTIONS(1073),
    [anon_sym_GT_GT] = ACTIONS(1073),
    [anon_sym_AMP_GT] = ACTIONS(1073),
    [anon_sym_AMP_GT_GT] = ACTIONS(1073),
    [anon_sym_LT_AMP] = ACTIONS(1073),
    [anon_sym_GT_AMP] = ACTIONS(1073),
    [anon_sym_LT_LT] = ACTIONS(1073),
    [anon_sym_LT_LT_DASH] = ACTIONS(1073),
    [sym_comment] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(1073),
    [anon_sym_LF] = ACTIONS(1073),
    [anon_sym_AMP] = ACTIONS(1073),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(439),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(440),
  [5] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(441),
  [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(442),
  [9] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(443),
  [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(179),
  [13] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
  [15] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(3),
  [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(422),
  [19] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(4),
  [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(90),
  [23] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(423),
  [25] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(5),
  [27] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(424),
  [29] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(425),
  [31] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(196),
  [33] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(197),
  [35] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(6),
  [37] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(426),
  [39] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(427),
  [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(7),
  [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(428),
  [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(280),
  [47] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(429),
  [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(9),
  [51] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(117),
  [53] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(117),
  [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(430),
  [57] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(82),
  [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(83),
  [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(431),
  [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(432),
  [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(433),
  [67] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(434),
  [69] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(435),
  [71] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(435),
  [73] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(436),
  [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(436),
  [77] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(437),
  [81] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(437),
  [83] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(438),
  [85] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
  [87] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 0),
  [89] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
  [91] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
  [93] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
  [95] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
  [97] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
  [99] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(8),
  [101] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(9),
  [103] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(10),
  [105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(11),
  [107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
  [109] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(11),
  [111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(13),
  [113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(14),
  [115] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(15),
  [117] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(16),
  [119] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [121] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(24),
  [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(24),
  [125] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(25),
  [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
  [129] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(31),
  [131] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(32),
  [133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
  [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
  [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
  [139] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(31),
  [141] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(36),
  [143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
  [145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
  [147] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(40),
  [149] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(41),
  [151] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
  [153] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
  [155] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(44),
  [157] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(40),
  [159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(47),
  [161] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 1),
  [163] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(48),
  [165] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(49),
  [167] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(50),
  [169] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(53),
  [171] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(54),
  [173] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(55),
  [175] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(56),
  [177] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(57),
  [179] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(58),
  [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(60),
  [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
  [185] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(60),
  [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(62),
  [189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(63),
  [191] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(64),
  [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(67),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(67),
  [197] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(68),
  [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(71),
  [201] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(72),
  [203] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(73),
  [205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(74),
  [207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
  [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
  [211] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(72),
  [213] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 1, .rename_sequence_id = 1),
  [215] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(77),
  [217] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(78),
  [219] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(79),
  [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [225] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [227] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [229] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(81),
  [231] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(82),
  [233] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(83),
  [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1),
  [237] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1),
  [239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_command_repeat1, 1),
  [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(85),
  [245] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(85),
  [247] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(86),
  [249] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(88),
  [251] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(88),
  [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(89),
  [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(90),
  [257] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(92),
  [259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
  [261] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(94),
  [263] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(96),
  [265] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(97),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
  [269] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(99),
  [271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(98),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(101),
  [275] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(102),
  [277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
  [279] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subshell, 2),
  [281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(107),
  [283] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(108),
  [285] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_bracket_command_repeat1, 1),
  [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1),
  [289] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1),
  [291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(110),
  [293] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(111),
  [295] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(110),
  [297] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(113),
  [299] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(117),
  [301] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(118),
  [303] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(118),
  [305] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(119),
  [307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(119),
  [309] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2, .fragile = true),
  [311] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(120),
  [313] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(121),
  [315] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(122),
  [317] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(123),
  [319] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(124),
  [321] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(125),
  [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(128),
  [325] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(129),
  [327] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(130),
  [329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(131),
  [331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
  [333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
  [335] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(129),
  [337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(134),
  [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(135),
  [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 1),
  [343] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 1),
  [345] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2),
  [347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [349] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [351] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [353] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_string_repeat1, 1),
  [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(138),
  [357] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(139),
  [359] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(138),
  [361] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(141),
  [363] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(145),
  [365] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(146),
  [367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
  [369] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(148),
  [371] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(149),
  [373] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(150),
  [375] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(153),
  [377] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(157),
  [379] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(158),
  [381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(160),
  [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(161),
  [385] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(161),
  [387] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(162),
  [389] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(163),
  [391] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(164),
  [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
  [395] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(165),
  [397] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(166),
  [399] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(167),
  [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2),
  [403] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 2),
  [405] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2),
  [407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(169),
  [409] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(170),
  [411] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(169),
  [413] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(172),
  [415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(176),
  [417] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2, .fragile = true, .rename_sequence_id = 2),
  [419] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(179),
  [421] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(180),
  [423] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(179),
  [425] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(181),
  [427] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(182),
  [429] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(183),
  [431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(184),
  [433] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(179),
  [435] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2, .rename_sequence_id = 2),
  [437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__terminated_statement, 2),
  [439] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__terminated_statement, 2),
  [441] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__terminated_statement, 2),
  [443] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [445] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [447] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [449] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(189),
  [451] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2, .rename_sequence_id = 3),
  [453] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(190),
  [455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 2),
  [457] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_command_repeat1, 2),
  [459] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 2),
  [461] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 3),
  [463] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_file_redirect, 3),
  [465] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 3),
  [467] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(193),
  [469] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 3),
  [471] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(195),
  [473] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(196),
  [475] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(197),
  [477] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(202),
  [479] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(203),
  [481] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(204),
  [483] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_special_variable_name, 1),
  [485] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_expansion, 2, .rename_sequence_id = 4),
  [487] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_expansion, 2),
  [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_special_variable_name, 1),
  [491] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_special_variable_name, 1),
  [493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(205),
  [495] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(206),
  [497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(206),
  [499] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(207),
  [501] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(208),
  [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(208),
  [505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(209),
  [507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(210),
  [509] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subshell, 3),
  [511] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [513] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(211),
  [515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_expansion, 2, .rename_sequence_id = 4),
  [517] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_expansion, 2, .rename_sequence_id = 4),
  [519] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_expansion, 2),
  [521] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_expansion, 2),
  [523] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(212),
  [525] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(213),
  [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(213),
  [529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(214),
  [531] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(215),
  [533] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(215),
  [535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(216),
  [537] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_bracket_command, 3),
  [539] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_bracket_command_repeat1, 2),
  [541] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 2),
  [543] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 2),
  [545] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(217),
  [547] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(217),
  [549] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(218),
  [551] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(220),
  [553] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(221),
  [555] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(220),
  [557] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(223),
  [559] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .fragile = true),
  [561] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(227),
  [563] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3),
  [565] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(229),
  [567] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(231),
  [569] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(232),
  [571] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(231),
  [573] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(234),
  [575] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 1),
  [577] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 1),
  [579] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(238),
  [581] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(239),
  [583] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(240),
  [585] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(241),
  [587] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_heredoc_redirect, 2),
  [589] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc_redirect, 2),
  [591] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 2),
  [593] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 2),
  [595] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(243),
  [597] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(244),
  [599] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(244),
  [601] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(245),
  [603] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(246),
  [605] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(246),
  [607] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(247),
  [609] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [611] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [613] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [615] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_string_repeat1, 2),
  [617] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(248),
  [619] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(248),
  [621] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 2, .fragile = true),
  [623] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(249),
  [625] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(250),
  [627] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(251),
  [629] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(252),
  [631] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(253),
  [633] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(254),
  [635] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(149),
  [637] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(149),
  [639] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(150),
  [641] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(150),
  [643] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(250),
  [645] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(257),
  [647] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(257),
  [649] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(258),
  [651] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(259),
  [653] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_command_repeat2, 1),
  [655] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 2),
  [657] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(262),
  [659] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(263),
  [661] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 2, .fragile = true, .rename_sequence_id = 2),
  [663] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(266),
  [665] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(266),
  [667] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(266),
  [669] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 2, .rename_sequence_id = 2),
  [671] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3),
  [673] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3),
  [675] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(267),
  [677] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(268),
  [679] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(272),
  [681] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(273),
  [683] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(274),
  [685] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(275),
  [687] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(276),
  [689] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(276),
  [691] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(277),
  [693] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(278),
  [695] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(278),
  [697] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(279),
  [699] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(280),
  [701] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .fragile = true, .rename_sequence_id = 5),
  [703] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .rename_sequence_id = 5),
  [705] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 6),
  [707] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 6),
  [709] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(283),
  [711] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(285),
  [713] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(286),
  [715] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(285),
  [717] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(288),
  [719] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3, .fragile = true),
  [721] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list, 3, .fragile = true),
  [723] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .fragile = true, .rename_sequence_id = 7),
  [725] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .rename_sequence_id = 7),
  [727] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_group, 2),
  [729] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(296),
  [731] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4),
  [733] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 1),
  [735] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1),
  [737] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(299),
  [739] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(299),
  [741] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(196),
  [743] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(197),
  [745] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(303),
  [747] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(304),
  [749] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(305),
  [751] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(304),
  [753] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(308),
  [755] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expansion, 3, .rename_sequence_id = 8),
  [757] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(309),
  [759] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(309),
  [761] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expansion, 3),
  [763] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(310),
  [765] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(310),
  [767] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [769] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expansion, 3, .rename_sequence_id = 8),
  [771] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expansion, 3, .rename_sequence_id = 8),
  [773] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(312),
  [775] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(312),
  [777] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expansion, 3),
  [779] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expansion, 3),
  [781] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(313),
  [783] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(313),
  [785] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_command_substitution, 3),
  [787] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(314),
  [789] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(315),
  [791] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(316),
  [793] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(316),
  [795] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(317),
  [797] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(318),
  [799] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(318),
  [801] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(319),
  [803] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 4),
  [805] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(320),
  [807] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(321),
  [809] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(322),
  [811] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(322),
  [813] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(323),
  [815] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(324),
  [817] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(324),
  [819] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(325),
  [821] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_heredoc_repeat1, 1),
  [823] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_heredoc_repeat1, 1),
  [825] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 2),
  [827] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 2),
  [829] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(326),
  [831] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(327),
  [833] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(326),
  [835] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(329),
  [837] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(331),
  [839] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(332),
  [841] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(333),
  [843] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(333),
  [845] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(334),
  [847] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(334),
  [849] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(335),
  [851] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(335),
  [853] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(336),
  [855] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(338),
  [857] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(339),
  [859] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(338),
  [861] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(341),
  [863] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .fragile = true),
  [865] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(345),
  [867] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(345),
  [869] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 3),
  [871] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_heredoc, 1),
  [873] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(347),
  [875] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_heredoc_redirect, 2),
  [877] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_command_repeat2, 2),
  [879] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .fragile = true, .rename_sequence_id = 5),
  [881] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .rename_sequence_id = 5),
  [883] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 6),
  [885] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .fragile = true, .rename_sequence_id = 7),
  [887] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .rename_sequence_id = 7),
  [889] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(355),
  [891] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(355),
  [893] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(356),
  [895] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(356),
  [897] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(357),
  [899] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 4, .rename_sequence_id = 9),
  [901] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 4, .rename_sequence_id = 9),
  [903] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(359),
  [905] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(360),
  [907] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(361),
  [909] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(361),
  [911] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(362),
  [913] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(363),
  [915] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(363),
  [917] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(364),
  [919] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 4, .fragile = true),
  [921] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 4, .fragile = true, .rename_sequence_id = 10),
  [923] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 4, .rename_sequence_id = 10),
  [925] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_for_statement, 5),
  [927] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_group, 3),
  [929] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(367),
  [931] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 2),
  [933] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5),
  [935] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(368),
  [937] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [939] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 5),
  [941] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(370),
  [943] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
  [945] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_case_statement_repeat1, 1),
  [947] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_case_statement_repeat1, 1),
  [949] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_case_statement_repeat1, 1),
  [951] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(371),
  [953] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(374),
  [955] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(375),
  [957] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 5, .rename_sequence_id = 11),
  [959] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(376),
  [961] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(377),
  [963] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(378),
  [965] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(378),
  [967] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(379),
  [969] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(379),
  [971] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(380),
  [973] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(380),
  [975] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(381),
  [977] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(381),
  [979] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(382),
  [981] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(383),
  [983] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(383),
  [985] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(384),
  [987] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(385),
  [989] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(385),
  [991] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_heredoc_repeat1, 2),
  [993] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_heredoc_repeat1, 2),
  [995] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 3),
  [997] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 3),
  [999] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(386),
  [1001] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(387),
  [1003] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(388),
  [1005] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(389),
  [1007] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(390),
  [1009] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(390),
  [1011] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(391),
  [1013] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(392),
  [1015] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(392),
  [1017] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(393),
  [1019] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 4),
  [1021] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_heredoc, 2),
  [1023] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(394),
  [1025] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 4, .rename_sequence_id = 9),
  [1027] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 4, .fragile = true),
  [1029] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 4, .fragile = true, .rename_sequence_id = 10),
  [1031] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 4, .rename_sequence_id = 10),
  [1033] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(397),
  [1035] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(398),
  [1037] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_compound_statement, 2),
  [1039] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(399),
  [1041] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(400),
  [1043] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(400),
  [1045] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(401),
  [1047] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(401),
  [1049] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 5),
  [1051] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 5, .rename_sequence_id = 11),
  [1053] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 3),
  [1055] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6),
  [1057] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(403),
  [1059] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(404),
  [1061] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 6),
  [1063] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_case_statement_repeat1, 2),
  [1065] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_case_statement_repeat1, 2),
  [1067] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_case_statement_repeat1, 2),
  [1069] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(406),
  [1071] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expansion, 5, .rename_sequence_id = 12),
  [1073] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expansion, 5),
  [1075] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expansion, 5, .rename_sequence_id = 12),
  [1077] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expansion, 5, .rename_sequence_id = 12),
  [1079] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expansion, 5),
  [1081] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_expansion, 5),
  [1083] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(407),
  [1085] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(408),
  [1087] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(409),
  [1089] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(410),
  [1091] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(411),
  [1093] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(411),
  [1095] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(412),
  [1097] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(412),
  [1099] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(413),
  [1101] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(413),
  [1103] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(414),
  [1105] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(414),
  [1107] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_heredoc, 3),
  [1109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 5),
  [1111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 5, .rename_sequence_id = 11),
  [1113] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_compound_statement, 3),
  [1115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(415),
  [1117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(416),
  [1119] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4),
  [1121] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 7),
  [1123] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 3),
  [1125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_case_item, 3),
  [1127] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 3),
  [1129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(417),
  [1131] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 7),
  [1133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(418),
  [1135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(419),
  [1137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(420),
  [1139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(421),
  [1141] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_case_item, 4),
  [1143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_case_item, 4),
  [1145] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_item, 4),
  [1147] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(3),
  [1149] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(4),
  [1151] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(5),
  [1153] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(6),
  [1155] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(468),
  [1157] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(7),
  [1159] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(8),
  [1161] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(9),
  [1163] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(10),
  [1165] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(11),
  [1167] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(12),
  [1169] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(13),
  [1171] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(14),
  [1173] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(15),
  [1175] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_group, 2), REDUCE(sym_do_group, 3),
  [1178] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 3), SHIFT(195),
  [1181] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 3), SHIFT(196),
  [1184] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 3), SHIFT(197),
  [1187] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 4), REDUCE(sym_if_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_if_statement, 7),
  [1192] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 5), REDUCE(sym_case_statement, 6), REDUCE(sym_case_statement, 7),
  [1196] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3), SHIFT(2),
  [1199] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subshell, 2), REDUCE(sym_subshell, 3), REDUCE(sym_command_substitution, 3), SHIFT(404),
  [1204] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(280),
  [1206] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3), SHIFT(11),
  [1209] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subshell, 2), REDUCE(sym_subshell, 3), REDUCE(sym_command_substitution, 3),
  [1213] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3), SHIFT(12),
  [1216] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3), SHIFT(13),
  [1219] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3), SHIFT(14),
  [1222] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3), SHIFT(15),
  [1225] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3), SHIFT(16),
  [1228] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(470),
  [1230] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expansion, 3), REDUCE(sym_expansion, 3, .rename_sequence_id = 8), REDUCE(sym_expansion, 5), REDUCE(sym_expansion, 5, .rename_sequence_id = 12),
  [1235] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expansion, 3), REDUCE(sym_expansion, 3, .rename_sequence_id = 8), REDUCE(sym_expansion, 5), REDUCE(sym_expansion, 5, .rename_sequence_id = 12),
  [1240] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_compound_statement, 2), REDUCE(sym_compound_statement, 3), REDUCE(sym_expansion, 3), REDUCE(sym_expansion, 3, .rename_sequence_id = 8), REDUCE(sym_expansion, 5), REDUCE(sym_expansion, 5, .rename_sequence_id = 12),
  [1247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(471),
  [1249] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 1), REDUCE(sym_command, 2),
  [1252] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(472),
  [1254] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(39),
  [1256] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(473),
  [1258] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(305),
  [1260] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(42),
  [1262] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [1264] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 1), REDUCE(sym_command, 2), SHIFT(44),
  [1268] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(474),
  [1270] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(436),
  [1272] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(477),
  [1274] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(478),
  [1276] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(479),
  [1278] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(480),
  [1280] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(481),
  [1282] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(482),
  [1284] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(478),
  [1286] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2), REDUCE(sym_string, 3),
  [1289] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2), REDUCE(sym_string, 3),
  [1292] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2), REDUCE(sym_string, 3), SHIFT(483),
  [1296] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2), REDUCE(sym_string, 3), SHIFT(55),
  [1300] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2), REDUCE(sym_string, 3), SHIFT(56),
  [1304] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2), REDUCE(sym_string, 3), SHIFT(57),
  [1308] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2), REDUCE(sym_string, 3), SHIFT(58),
  [1312] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_special_variable_name, 1), SHIFT(484),
  [1315] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(485),
  [1317] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(484),
  [1319] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3), SHIFT(67),
  [1322] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3), SHIFT(61),
  [1325] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3), SHIFT(62),
  [1328] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3), SHIFT(63),
  [1331] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command_substitution, 3), SHIFT(68),
  [1334] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(488),
  [1336] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(489),
  [1338] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(490),
  [1340] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(491),
  [1342] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(492),
  [1344] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(493),
  [1346] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(489),
  [1348] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(439),
  [1350] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(440),
  [1352] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(204),
  [1354] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(494),
  [1356] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__terminated_statement, 2), SHIFT(39),
  [1359] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__terminated_statement, 2), SHIFT(304),
  [1362] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__terminated_statement, 2), SHIFT(43),
  [1365] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__terminated_statement, 2), SHIFT(44),
  [1368] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(495),
  [1370] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_heredoc_repeat1, 1), REDUCE(aux_sym_heredoc_repeat1, 2),
  [1373] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_heredoc_repeat1, 1), REDUCE(aux_sym_heredoc_repeat1, 2),
  [1376] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 2), REDUCE(sym_heredoc, 3),
  [1379] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_heredoc, 2), REDUCE(sym_heredoc, 3),
  [1382] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(496),
  [1384] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(496),
  [1386] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [1389] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [1392] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(90),
  [1394] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(424),
  [1396] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1), REDUCE(aux_sym_program_repeat1, 2),
  [1399] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3, .fragile = true), REDUCE(sym_list, 3, .fragile = true), SHIFT(81),
  [1403] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3, .fragile = true), REDUCE(sym_list, 3, .fragile = true), SHIFT(82),
  [1407] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3, .fragile = true), REDUCE(sym_list, 3, .fragile = true), SHIFT(83),
  [1411] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_while_statement, 3), REDUCE(sym_for_statement, 5),
  [1414] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_if_statement_repeat1, 1), REDUCE(aux_sym_if_statement_repeat1, 2),
  [1417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(497),
  [1419] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_case_statement_repeat1, 1), REDUCE(aux_sym_case_statement_repeat1, 2),
  [1422] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_case_statement_repeat1, 1), REDUCE(aux_sym_case_statement_repeat1, 2),
  [1425] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_case_statement_repeat1, 1), REDUCE(aux_sym_case_statement_repeat1, 2),
  [1428] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_definition, 4, .rename_sequence_id = 9), REDUCE(sym_function_definition, 5, .rename_sequence_id = 11),
  [1431] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(498),
  [1433] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3), REDUCE(sym_list, 3), SHIFT(81),
  [1437] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3), REDUCE(sym_list, 3), SHIFT(82),
  [1441] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pipeline, 3), REDUCE(sym_list, 3), SHIFT(83),
  [1445] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1), REDUCE(aux_sym_command_repeat1, 2),
  [1448] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1), REDUCE(aux_sym_command_repeat1, 2),
  [1451] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 6), REDUCE(sym_file_redirect, 3), SHIFT(471),
  [1458] = {.count = 7, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 1), REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_command, 2), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_file_redirect, 3), SHIFT(370),
  [1466] = {.count = 8, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 1), REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_command, 2), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 6), REDUCE(sym_file_redirect, 3), SHIFT(97),
  [1475] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(499),
  [1477] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(aux_sym_bracket_command_repeat1, 2),
  [1480] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 6), REDUCE(sym_file_redirect, 3),
  [1484] = {.count = 7, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 1), REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_command, 2), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 6), REDUCE(sym_file_redirect, 3),
  [1492] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 6), REDUCE(sym_file_redirect, 3),
  [1498] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 6), REDUCE(sym_file_redirect, 3), SHIFT(474),
  [1505] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_file_redirect, 3), SHIFT(436),
  [1511] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 6), REDUCE(sym_file_redirect, 3),
  [1517] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_file_redirect, 3), SHIFT(370),
  [1523] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 6), REDUCE(sym_file_redirect, 3), SHIFT(97),
  [1530] = {.count = 7, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(aux_sym_string_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(aux_sym_string_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 6), REDUCE(sym_file_redirect, 3),
  [1538] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1), REDUCE(aux_sym_string_repeat1, 2),
  [1541] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(aux_sym_string_repeat1, 1), REDUCE(aux_sym_heredoc_repeat1, 1), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(aux_sym_string_repeat1, 2), REDUCE(aux_sym_heredoc_repeat1, 2),
  [1548] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(sym_file_redirect, 3),
  [1553] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(aux_sym_string_repeat1, 1), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(aux_sym_string_repeat1, 2),
  [1558] = {.count = 9, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 1), REDUCE(aux_sym_bracket_command_repeat1, 1), REDUCE(aux_sym_string_repeat1, 1), REDUCE(sym_command, 2), REDUCE(sym_file_redirect, 2), REDUCE(aux_sym_bracket_command_repeat1, 2), REDUCE(aux_sym_string_repeat1, 2), REDUCE(sym_environment_variable_assignment, 3, .rename_sequence_id = 6), REDUCE(sym_file_redirect, 3),
  [1568] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1), REDUCE(aux_sym_command_repeat2, 1), REDUCE(aux_sym_command_repeat1, 2), REDUCE(aux_sym_command_repeat2, 2),
  [1573] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 1), REDUCE(aux_sym_command_repeat2, 2),
  [1576] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1), REDUCE(aux_sym_command_repeat2, 1), REDUCE(aux_sym_command_repeat1, 2), REDUCE(aux_sym_command_repeat2, 2),
  [1581] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat2, 1), REDUCE(aux_sym_command_repeat2, 2),
  [1584] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_expansion, 2), SHIFT(500),
  [1587] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_expansion, 2), SHIFT(501),
  [1590] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(501),
  [1592] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(501),
  [1594] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 2), REDUCE(sym_elif_clause, 4), SHIFT(299),
  [1598] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(196),
  [1601] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(197),
  [1604] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(502),
  [1606] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(504),
  [1608] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .fragile = true), REDUCE(sym_command, 3, .fragile = true, .rename_sequence_id = 5), REDUCE(sym_command, 4, .fragile = true), REDUCE(sym_command, 4, .fragile = true, .rename_sequence_id = 10),
  [1613] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(117),
  [1615] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(505),
  [1617] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(506),
  [1619] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(507),
  [1621] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(508),
  [1623] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(509),
  [1625] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .fragile = true), REDUCE(sym_command, 3, .fragile = true, .rename_sequence_id = 5), REDUCE(sym_command, 4, .fragile = true), REDUCE(sym_command, 4, .fragile = true, .rename_sequence_id = 10), SHIFT(510),
  [1631] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(512),
  [1633] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(513),
  [1635] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(512),
  [1637] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(514),
  [1639] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(515),
  [1641] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(516),
  [1643] = {.count = 10, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2), REDUCE(sym_command, 2, .rename_sequence_id = 2), REDUCE(sym_command, 3), REDUCE(sym_command, 3, .rename_sequence_id = 7), REDUCE(sym_command, 3, .rename_sequence_id = 5), REDUCE(sym_command, 4), REDUCE(sym_command, 4, .rename_sequence_id = 10), REDUCE(sym_command, 4, .rename_sequence_id = 9), REDUCE(sym_command, 5), REDUCE(sym_command, 5, .rename_sequence_id = 11),
  [1654] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(518),
  [1656] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(519),
  [1658] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elif_clause, 4), SHIFT(299),
  [1661] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(520),
  [1663] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(520),
  [1665] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2, .fragile = true), REDUCE(sym_command, 3, .fragile = true),
  [1668] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(521),
  [1670] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(522),
  [1672] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(523),
  [1674] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(524),
  [1676] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(525),
  [1678] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2, .fragile = true), REDUCE(sym_command, 3, .fragile = true), SHIFT(526),
  [1682] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(499),
  [1684] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(529),
  [1686] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(530),
  [1688] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(531),
  [1690] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(532),
  [1692] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(533),
  [1694] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(534),
  [1696] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(530),
  [1698] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 2), REDUCE(sym_command, 3),
  [1701] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(535),
  [1703] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(537),
  [1705] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(538),
  [1707] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(537),
  [1709] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(540),
  [1711] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(498),
  [1713] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(544),
  [1715] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2), REDUCE(sym_file_redirect, 3),
  [1718] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_file_redirect, 2), REDUCE(sym_file_redirect, 3),
  [1721] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(546),
  [1723] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(547),
  [1725] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(546),
  [1727] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(549),
  [1729] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 5), REDUCE(sym_case_statement, 6),
  [1732] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(553),
  [1734] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(553),
  [1736] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_if_statement, 6), REDUCE(sym_if_statement, 7),
  [1740] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_expansion, 5), REDUCE(sym_expansion, 5, .rename_sequence_id = 12),
  [1743] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expansion, 5), REDUCE(sym_expansion, 5, .rename_sequence_id = 12),
  [1746] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(554),
  [1748] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(554),
  [1750] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 5), REDUCE(sym_if_statement, 6),
  [1753] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(555),
  [1755] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_case_statement, 6), REDUCE(sym_case_statement, 7),
  [1758] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(556),
  [1760] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(558),
  [1762] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(559),
  [1764] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(558),
  [1766] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(561),
  [1768] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 4), REDUCE(sym_command, 4, .rename_sequence_id = 9), REDUCE(sym_command, 5), REDUCE(sym_command, 5, .rename_sequence_id = 11),
  [1773] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(565),
  [1775] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(567),
  [1777] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(571),
  [1779] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(573),
  [1781] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(573),
  [1783] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(574),
  [1785] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(576),
  [1787] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(577),
  [1789] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(576),
  [1791] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(579),
  [1793] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .fragile = true), REDUCE(sym_command, 4, .fragile = true),
  [1796] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(583),
  [1798] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .fragile = true), REDUCE(sym_command, 4, .fragile = true), SHIFT(526),
  [1802] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3), REDUCE(sym_command, 4),
  [1805] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(585),
  [1807] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(587),
  [1809] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(588),
  [1811] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(587),
  [1813] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(590),
  [1815] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(594),
  [1817] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(595),
  [1819] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(596),
  [1821] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(596),
  [1823] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(597),
  [1825] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(598),
  [1827] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(598),
  [1829] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(599),
  [1831] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(600),
  [1833] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(601),
  [1835] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(602),
  [1837] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(602),
  [1839] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(603),
  [1841] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(604),
  [1843] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(604),
  [1845] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(605),
  [1847] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(606),
  [1849] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 6), REDUCE(sym_if_statement, 7),
  [1852] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(607),
  [1854] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(608),
  [1856] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(609),
  [1858] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(609),
  [1860] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(610),
  [1862] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(611),
  [1864] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(611),
  [1866] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(612),
  [1868] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .fragile = true), SHIFT(526),
  [1871] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(615),
  [1873] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(616),
  [1875] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 3, .fragile = true, .rename_sequence_id = 7), SHIFT(526),
  [1878] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(619),
  [1880] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(620),
  [1882] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(621),
  [1884] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(621),
  [1886] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(622),
  [1888] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(623),
  [1890] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(623),
  [1892] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(624),
  [1894] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 4), REDUCE(sym_command, 5),
  [1897] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(625),
  [1899] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(626),
  [1901] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(627),
  [1903] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(627),
  [1905] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(628),
  [1907] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(629),
  [1909] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(629),
  [1911] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(630),
  [1913] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(631),
  [1915] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(631),
  [1917] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(632),
  [1919] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(632),
  [1921] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(633),
  [1923] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(633),
  [1925] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(634),
  [1927] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(634),
  [1929] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(635),
  [1931] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(635),
  [1933] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(636),
  [1935] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(636),
  [1937] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 4, .fragile = true), SHIFT(526),
  [1940] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 4, .fragile = true, .rename_sequence_id = 10), SHIFT(526),
  [1943] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(639),
  [1945] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(639),
  [1947] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(640),
  [1949] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(640),
  [1951] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(641),
  [1953] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(641),
  [1955] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(642),
  [1957] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(642),
  [1959] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(643),
  [1961] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(644),
  [1963] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(645),
  [1965] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(646),
  [1967] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(647),
  [1969] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(648),
  [1971] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(649),
  [1973] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(650),
  [1975] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(651),
  [1977] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(652),
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
