#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 353
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 101
#define ALIAS_COUNT 6
#define TOKEN_COUNT 59
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 20

enum {
  sym_identifier = 1,
  sym_comment = 2,
  anon_sym_SEMI = 3,
  anon_sym_LF = 4,
  anon_sym_use = 5,
  anon_sym_PLUS = 6,
  anon_sym_DASH = 7,
  anon_sym_STAR = 8,
  anon_sym_SLASH = 9,
  anon_sym_PERCENT = 10,
  anon_sym_LT = 11,
  anon_sym_LT_EQ = 12,
  anon_sym_EQ_EQ = 13,
  anon_sym_BANG_EQ = 14,
  anon_sym_GT = 15,
  anon_sym_GT_EQ = 16,
  anon_sym_LTs = 17,
  anon_sym_LT_EQs = 18,
  anon_sym_EQ_EQs = 19,
  anon_sym_BANG_EQs = 20,
  anon_sym_GTs = 21,
  anon_sym_GT_EQs = 22,
  anon_sym_AMP = 23,
  anon_sym_PIPE = 24,
  anon_sym_GT_GT = 25,
  anon_sym_LT_GT = 26,
  aux_sym_redirection_token1 = 27,
  aux_sym_redirection_token2 = 28,
  anon_sym_var = 29,
  anon_sym_set = 30,
  anon_sym_tmp = 31,
  anon_sym_del = 32,
  anon_sym_AT = 33,
  anon_sym_LBRACK = 34,
  anon_sym_RBRACK = 35,
  anon_sym_EQ = 36,
  anon_sym_fn = 37,
  anon_sym_if = 38,
  anon_sym_LBRACE = 39,
  anon_sym_RBRACE = 40,
  anon_sym_elif = 41,
  anon_sym_else = 42,
  anon_sym_while = 43,
  anon_sym_for = 44,
  anon_sym_try = 45,
  anon_sym_catch = 46,
  anon_sym_finally = 47,
  aux_sym_lambda_token1 = 48,
  anon_sym_LPAREN = 49,
  anon_sym_RPAREN = 50,
  anon_sym_QMARK_LPAREN = 51,
  anon_sym_DOLLAR = 52,
  sym_number = 53,
  sym_string = 54,
  sym_bareword = 55,
  anon_sym_STAR_STAR = 56,
  anon_sym_QMARK = 57,
  anon_sym_LBRACK2 = 58,
  sym_source_file = 59,
  sym__statements = 60,
  sym_import = 61,
  sym_command = 62,
  sym_pipeline = 63,
  sym_redirection = 64,
  sym_variable_declaration = 65,
  sym_variable_assignment = 66,
  sym_temporary_assignment = 67,
  sym_variable_deletion = 68,
  sym__assignment = 69,
  sym_function_definition = 70,
  sym_if = 71,
  sym_elif = 72,
  sym_else = 73,
  sym_while = 74,
  sym_for = 75,
  sym_try = 76,
  sym_catch = 77,
  sym_finally = 78,
  sym_lambda = 79,
  sym_parameter_list = 80,
  sym_option = 81,
  sym_indexing = 82,
  sym_braced_list = 83,
  sym_output_capture = 84,
  sym_exception_capture = 85,
  sym_variable = 86,
  sym_wildcard = 87,
  sym_list = 88,
  sym_map = 89,
  sym_pair = 90,
  aux_sym__statements_repeat1 = 91,
  aux_sym_command_repeat1 = 92,
  aux_sym_pipeline_repeat1 = 93,
  aux_sym_variable_deletion_repeat1 = 94,
  aux_sym__assignment_repeat1 = 95,
  aux_sym__assignment_repeat2 = 96,
  aux_sym__assignment_repeat3 = 97,
  aux_sym_parameter_list_repeat1 = 98,
  aux_sym_wildcard_repeat1 = 99,
  aux_sym_map_repeat1 = 100,
  alias_sym_chunk = 101,
  alias_sym_file = 102,
  alias_sym_indices = 103,
  alias_sym_lhs = 104,
  alias_sym_modifier = 105,
  alias_sym_rhs = 106,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [anon_sym_SEMI] = ";",
  [anon_sym_LF] = "\n",
  [anon_sym_use] = "use",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LTs] = "<s",
  [anon_sym_LT_EQs] = "<=s",
  [anon_sym_EQ_EQs] = "==s",
  [anon_sym_BANG_EQs] = "!=s",
  [anon_sym_GTs] = ">s",
  [anon_sym_GT_EQs] = ">=s",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_LT_GT] = "<>",
  [aux_sym_redirection_token1] = "io_port",
  [aux_sym_redirection_token2] = "io_port",
  [anon_sym_var] = "var",
  [anon_sym_set] = "set",
  [anon_sym_tmp] = "tmp",
  [anon_sym_del] = "del",
  [anon_sym_AT] = "@",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
  [anon_sym_fn] = "fn",
  [anon_sym_if] = "if",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_elif] = "elif",
  [anon_sym_else] = "else",
  [anon_sym_while] = "while",
  [anon_sym_for] = "for",
  [anon_sym_try] = "try",
  [anon_sym_catch] = "catch",
  [anon_sym_finally] = "finally",
  [aux_sym_lambda_token1] = "lambda_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_QMARK_LPAREN] = "\?(",
  [anon_sym_DOLLAR] = "$",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_bareword] = "bareword",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_QMARK] = "\?",
  [anon_sym_LBRACK2] = "[",
  [sym_source_file] = "source_file",
  [sym__statements] = "_statements",
  [sym_import] = "import",
  [sym_command] = "command",
  [sym_pipeline] = "pipeline",
  [sym_redirection] = "redirection",
  [sym_variable_declaration] = "variable_declaration",
  [sym_variable_assignment] = "variable_assignment",
  [sym_temporary_assignment] = "temporary_assignment",
  [sym_variable_deletion] = "variable_deletion",
  [sym__assignment] = "_assignment",
  [sym_function_definition] = "function_definition",
  [sym_if] = "if",
  [sym_elif] = "elif",
  [sym_else] = "else",
  [sym_while] = "while",
  [sym_for] = "for",
  [sym_try] = "try",
  [sym_catch] = "catch",
  [sym_finally] = "finally",
  [sym_lambda] = "lambda",
  [sym_parameter_list] = "parameter_list",
  [sym_option] = "option",
  [sym_indexing] = "indexing",
  [sym_braced_list] = "braced_list",
  [sym_output_capture] = "output_capture",
  [sym_exception_capture] = "exception_capture",
  [sym_variable] = "variable",
  [sym_wildcard] = "wildcard",
  [sym_list] = "list",
  [sym_map] = "map",
  [sym_pair] = "pair",
  [aux_sym__statements_repeat1] = "_statements_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_pipeline_repeat1] = "pipeline_repeat1",
  [aux_sym_variable_deletion_repeat1] = "variable_deletion_repeat1",
  [aux_sym__assignment_repeat1] = "_assignment_repeat1",
  [aux_sym__assignment_repeat2] = "_assignment_repeat2",
  [aux_sym__assignment_repeat3] = "_assignment_repeat3",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_wildcard_repeat1] = "wildcard_repeat1",
  [aux_sym_map_repeat1] = "map_repeat1",
  [alias_sym_chunk] = "chunk",
  [alias_sym_file] = "file",
  [alias_sym_indices] = "indices",
  [alias_sym_lhs] = "lhs",
  [alias_sym_modifier] = "modifier",
  [alias_sym_rhs] = "rhs",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LTs] = anon_sym_LTs,
  [anon_sym_LT_EQs] = anon_sym_LT_EQs,
  [anon_sym_EQ_EQs] = anon_sym_EQ_EQs,
  [anon_sym_BANG_EQs] = anon_sym_BANG_EQs,
  [anon_sym_GTs] = anon_sym_GTs,
  [anon_sym_GT_EQs] = anon_sym_GT_EQs,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [aux_sym_redirection_token1] = aux_sym_redirection_token1,
  [aux_sym_redirection_token2] = aux_sym_redirection_token1,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_tmp] = anon_sym_tmp,
  [anon_sym_del] = anon_sym_del,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_elif] = anon_sym_elif,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_try] = anon_sym_try,
  [anon_sym_catch] = anon_sym_catch,
  [anon_sym_finally] = anon_sym_finally,
  [aux_sym_lambda_token1] = aux_sym_lambda_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_QMARK_LPAREN] = anon_sym_QMARK_LPAREN,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_bareword] = sym_bareword,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_LBRACK2] = anon_sym_LBRACK,
  [sym_source_file] = sym_source_file,
  [sym__statements] = sym__statements,
  [sym_import] = sym_import,
  [sym_command] = sym_command,
  [sym_pipeline] = sym_pipeline,
  [sym_redirection] = sym_redirection,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_variable_assignment] = sym_variable_assignment,
  [sym_temporary_assignment] = sym_temporary_assignment,
  [sym_variable_deletion] = sym_variable_deletion,
  [sym__assignment] = sym__assignment,
  [sym_function_definition] = sym_function_definition,
  [sym_if] = sym_if,
  [sym_elif] = sym_elif,
  [sym_else] = sym_else,
  [sym_while] = sym_while,
  [sym_for] = sym_for,
  [sym_try] = sym_try,
  [sym_catch] = sym_catch,
  [sym_finally] = sym_finally,
  [sym_lambda] = sym_lambda,
  [sym_parameter_list] = sym_parameter_list,
  [sym_option] = sym_option,
  [sym_indexing] = sym_indexing,
  [sym_braced_list] = sym_braced_list,
  [sym_output_capture] = sym_output_capture,
  [sym_exception_capture] = sym_exception_capture,
  [sym_variable] = sym_variable,
  [sym_wildcard] = sym_wildcard,
  [sym_list] = sym_list,
  [sym_map] = sym_map,
  [sym_pair] = sym_pair,
  [aux_sym__statements_repeat1] = aux_sym__statements_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_pipeline_repeat1] = aux_sym_pipeline_repeat1,
  [aux_sym_variable_deletion_repeat1] = aux_sym_variable_deletion_repeat1,
  [aux_sym__assignment_repeat1] = aux_sym__assignment_repeat1,
  [aux_sym__assignment_repeat2] = aux_sym__assignment_repeat2,
  [aux_sym__assignment_repeat3] = aux_sym__assignment_repeat3,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_wildcard_repeat1] = aux_sym_wildcard_repeat1,
  [aux_sym_map_repeat1] = aux_sym_map_repeat1,
  [alias_sym_chunk] = alias_sym_chunk,
  [alias_sym_file] = alias_sym_file,
  [alias_sym_indices] = alias_sym_indices,
  [alias_sym_lhs] = alias_sym_lhs,
  [alias_sym_modifier] = alias_sym_modifier,
  [alias_sym_rhs] = alias_sym_rhs,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GTs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_redirection_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_redirection_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tmp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_del] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_try] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_catch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_finally] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_lambda_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_bareword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK2] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statements] = {
    .visible = false,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_pipeline] = {
    .visible = true,
    .named = true,
  },
  [sym_redirection] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_temporary_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_deletion] = {
    .visible = true,
    .named = true,
  },
  [sym__assignment] = {
    .visible = false,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_if] = {
    .visible = true,
    .named = true,
  },
  [sym_elif] = {
    .visible = true,
    .named = true,
  },
  [sym_else] = {
    .visible = true,
    .named = true,
  },
  [sym_while] = {
    .visible = true,
    .named = true,
  },
  [sym_for] = {
    .visible = true,
    .named = true,
  },
  [sym_try] = {
    .visible = true,
    .named = true,
  },
  [sym_catch] = {
    .visible = true,
    .named = true,
  },
  [sym_finally] = {
    .visible = true,
    .named = true,
  },
  [sym_lambda] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym_indexing] = {
    .visible = true,
    .named = true,
  },
  [sym_braced_list] = {
    .visible = true,
    .named = true,
  },
  [sym_output_capture] = {
    .visible = true,
    .named = true,
  },
  [sym_exception_capture] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_wildcard] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_map] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statements_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pipeline_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_deletion_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__assignment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__assignment_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__assignment_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_wildcard_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_map_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_chunk] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_file] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_indices] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_lhs] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_modifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_rhs] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_argument = 1,
  field_condition = 2,
  field_container = 3,
  field_exception = 4,
  field_head = 5,
  field_key = 6,
  field_parameter = 7,
  field_value = 8,
  field_var = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_condition] = "condition",
  [field_container] = "container",
  [field_exception] = "exception",
  [field_head] = "head",
  [field_key] = "key",
  [field_parameter] = "parameter",
  [field_value] = "value",
  [field_var] = "var",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [6] = {.index = 4, .length = 2},
  [7] = {.index = 6, .length = 1},
  [10] = {.index = 7, .length = 2},
  [11] = {.index = 9, .length = 1},
  [12] = {.index = 10, .length = 2},
  [16] = {.index = 12, .length = 1},
  [17] = {.index = 13, .length = 2},
  [18] = {.index = 15, .length = 2},
  [19] = {.index = 17, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_head, 0},
  [1] =
    {field_argument, 0},
  [2] =
    {field_argument, 1, .inherited = true},
    {field_head, 0},
  [4] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [6] =
    {field_parameter, 0},
  [7] =
    {field_parameter, 0},
    {field_parameter, 1},
  [9] =
    {field_parameter, 1, .inherited = true},
  [10] =
    {field_parameter, 0, .inherited = true},
    {field_parameter, 1, .inherited = true},
  [12] =
    {field_condition, 1},
  [13] =
    {field_key, 1},
    {field_value, 3},
  [15] =
    {field_container, 2},
    {field_var, 1},
  [17] =
    {field_exception, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [4] = {
    [0] = alias_sym_lhs,
  },
  [5] = {
    [1] = alias_sym_file,
  },
  [8] = {
    [1] = alias_sym_chunk,
  },
  [9] = {
    [0] = alias_sym_lhs,
    [2] = alias_sym_rhs,
  },
  [13] = {
    [2] = alias_sym_chunk,
  },
  [14] = {
    [1] = alias_sym_modifier,
  },
  [15] = {
    [1] = alias_sym_indices,
  },
  [16] = {
    [3] = alias_sym_chunk,
  },
  [18] = {
    [4] = alias_sym_chunk,
  },
  [19] = {
    [3] = alias_sym_chunk,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__statements, 2,
    sym__statements,
    alias_sym_chunk,
  aux_sym__assignment_repeat1, 3,
    aux_sym__assignment_repeat1,
    alias_sym_indices,
    alias_sym_rhs,
  aux_sym__assignment_repeat3, 2,
    aux_sym__assignment_repeat3,
    alias_sym_lhs,
  0,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 6688
    ? (c < 3077
      ? (c < 2406
        ? (c < 1488
          ? (c < 750
            ? (c < 188
              ? (c < 170
                ? (c < '_'
                  ? (c >= '0' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= '~')))
                : (c <= 170 || (c < 181
                  ? (c >= 178 && c <= 179)
                  : (c <= 181 || (c >= 185 && c <= 186)))))
              : (c <= 190 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 910
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : (c <= 906 || c == 908))))
              : (c <= 929 || (c < 1329
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : (c <= 1153 || (c >= 1162 && c <= 1327)))
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 2036
            ? (c < 1774
              ? (c < 1646
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1632 && c <= 1641)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : (c <= 1749 || (c >= 1765 && c <= 1766)))))
              : (c <= 1788 || (c < 1869
                ? (c < 1808
                  ? c == 1791
                  : (c <= 1808 || (c >= 1810 && c <= 1839)))
                : (c <= 1957 || (c < 1984
                  ? c == 1969
                  : c <= 2026)))))
            : (c <= 2037 || (c < 2160
              ? (c < 2084
                ? (c < 2048
                  ? c == 2042
                  : (c <= 2069 || c == 2074))
                : (c <= 2084 || (c < 2112
                  ? c == 2088
                  : (c <= 2136 || (c >= 2144 && c <= 2154)))))
              : (c <= 2183 || (c < 2365
                ? (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : (c <= 2249 || (c >= 2308 && c <= 2361)))
                : (c <= 2365 || (c < 2392
                  ? c == 2384
                  : c <= 2401)))))))))
        : (c <= 2415 || (c < 2738
          ? (c < 2565
            ? (c < 2493
              ? (c < 2451
                ? (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : (c <= 2444 || (c >= 2447 && c <= 2448)))
                : (c <= 2472 || (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))))
              : (c <= 2493 || (c < 2534
                ? (c < 2524
                  ? c == 2510
                  : (c <= 2525 || (c >= 2527 && c <= 2529)))
                : (c <= 2545 || (c < 2556
                  ? (c >= 2548 && c <= 2553)
                  : c <= 2556)))))
            : (c <= 2570 || (c < 2654
              ? (c < 2610
                ? (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : (c <= 2600 || (c >= 2602 && c <= 2608)))
                : (c <= 2611 || (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : (c <= 2617 || (c >= 2649 && c <= 2652)))))
              : (c <= 2654 || (c < 2703
                ? (c < 2674
                  ? (c >= 2662 && c <= 2671)
                  : (c <= 2676 || (c >= 2693 && c <= 2701)))
                : (c <= 2705 || (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : c <= 2736)))))))
          : (c <= 2739 || (c < 2911
            ? (c < 2831
              ? (c < 2784
                ? (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : (c <= 2749 || c == 2768))
                : (c <= 2785 || (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))))
              : (c <= 2832 || (c < 2869
                ? (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : (c <= 2864 || (c >= 2866 && c <= 2867)))
                : (c <= 2873 || (c < 2908
                  ? c == 2877
                  : c <= 2909)))))
            : (c <= 2913 || (c < 2972
              ? (c < 2949
                ? (c < 2929
                  ? (c >= 2918 && c <= 2927)
                  : (c <= 2935 || c == 2947))
                : (c <= 2954 || (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))))
              : (c <= 2972 || (c < 2990
                ? (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))
                : (c <= 3001 || (c < 3046
                  ? c == 3024
                  : c <= 3058)))))))))))
      : (c <= 3084 || (c < 4186
        ? (c < 3461
          ? (c < 3253
            ? (c < 3174
              ? (c < 3133
                ? (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))
                : (c <= 3133 || (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))))
              : (c <= 3183 || (c < 3214
                ? (c < 3200
                  ? (c >= 3192 && c <= 3198)
                  : (c <= 3200 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : c <= 3251)))))
            : (c <= 3257 || (c < 3346
              ? (c < 3302
                ? (c < 3293
                  ? c == 3261
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))
                : (c <= 3311 || (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))))
              : (c <= 3386 || (c < 3416
                ? (c < 3406
                  ? c == 3389
                  : (c <= 3406 || (c >= 3412 && c <= 3414)))
                : (c <= 3425 || (c < 3450
                  ? (c >= 3430 && c <= 3448)
                  : c <= 3455)))))))
          : (c <= 3478 || (c < 3751
            ? (c < 3648
              ? (c < 3520
                ? (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))
                : (c <= 3526 || (c < 3585
                  ? (c >= 3558 && c <= 3567)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))))
              : (c <= 3654 || (c < 3718
                ? (c < 3713
                  ? (c >= 3664 && c <= 3673)
                  : (c <= 3714 || c == 3716))
                : (c <= 3722 || (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : c <= 3749)))))
            : (c <= 3760 || (c < 3872
              ? (c < 3782
                ? (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))
                : (c <= 3782 || (c < 3804
                  ? (c >= 3792 && c <= 3801)
                  : (c <= 3807 || c == 3840))))
              : (c <= 3891 || (c < 4096
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4176
                  ? (c >= 4159 && c <= 4169)
                  : c <= 4181)))))))))
        : (c <= 4189 || (c < 5112
          ? (c < 4698
            ? (c < 4295
              ? (c < 4213
                ? (c < 4197
                  ? c == 4193
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))
                : (c <= 4225 || (c < 4240
                  ? c == 4238
                  : (c <= 4249 || (c >= 4256 && c <= 4293)))))
              : (c <= 4295 || (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))))
            : (c <= 4701 || (c < 4808
              ? (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))
              : (c <= 4822 || (c < 4969
                ? (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))
                : (c <= 4988 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))))))
          : (c <= 5117 || (c < 6128
            ? (c < 5952
              ? (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5870 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))))
              : (c <= 5969 || (c < 6103
                ? (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : (c <= 6000 || (c >= 6016 && c <= 6067)))
                : (c <= 6103 || (c < 6112
                  ? c == 6108
                  : c <= 6121)))))
            : (c <= 6137 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6576
                ? (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6656
                  ? (c >= 6608 && c <= 6618)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43138
      ? (c < 11264
        ? (c < 8118
          ? (c < 7401
            ? (c < 7086
              ? (c < 6917
                ? (c < 6800
                  ? (c >= 6784 && c <= 6793)
                  : (c <= 6809 || c == 6823))
                : (c <= 6963 || (c < 6992
                  ? (c >= 6981 && c <= 6988)
                  : (c <= 7001 || (c >= 7043 && c <= 7072)))))
              : (c <= 7141 || (c < 7296
                ? (c < 7232
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 8008
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8029
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8064
                  ? (c >= 8031 && c <= 8061)
                  : c <= 8116)))))))
          : (c <= 8124 || (c < 8458
            ? (c < 8182
              ? (c < 8144
                ? (c < 8130
                  ? c == 8126
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))
                : (c <= 8147 || (c < 8160
                  ? (c >= 8150 && c <= 8155)
                  : (c <= 8172 || (c >= 8178 && c <= 8180)))))
              : (c <= 8188 || (c < 8336
                ? (c < 8308
                  ? (c >= 8304 && c <= 8305)
                  : (c <= 8313 || (c >= 8319 && c <= 8329)))
                : (c <= 8348 || (c < 8455
                  ? c == 8450
                  : c <= 8455)))))
            : (c <= 8467 || (c < 8508
              ? (c < 8486
                ? (c < 8473
                  ? c == 8469
                  : (c <= 8477 || c == 8484))
                : (c <= 8486 || (c < 8490
                  ? c == 8488
                  : (c <= 8493 || (c >= 8495 && c <= 8505)))))
              : (c <= 8511 || (c < 9312
                ? (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : (c <= 8526 || (c >= 8528 && c <= 8585)))
                : (c <= 9371 || (c < 10102
                  ? (c >= 9450 && c <= 9471)
                  : c <= 10131)))))))))
        : (c <= 11492 || (c < 12704
          ? (c < 11720
            ? (c < 11631
              ? (c < 11520
                ? (c < 11506
                  ? (c >= 11499 && c <= 11502)
                  : (c <= 11507 || c == 11517))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))))
              : (c <= 11631 || (c < 11696
                ? (c < 11680
                  ? (c >= 11648 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : c <= 11718)))))
            : (c <= 11726 || (c < 12353
              ? (c < 12293
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || c == 11823))
                : (c <= 12295 || (c < 12337
                  ? (c >= 12321 && c <= 12329)
                  : (c <= 12341 || (c >= 12344 && c <= 12348)))))
              : (c <= 12438 || (c < 12549
                ? (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : (c <= 12538 || (c >= 12540 && c <= 12543)))
                : (c <= 12591 || (c < 12690
                  ? (c >= 12593 && c <= 12686)
                  : c <= 12693)))))))
          : (c <= 12735 || (c < 42623
            ? (c < 19903
              ? (c < 12881
                ? (c < 12832
                  ? (c >= 12784 && c <= 12799)
                  : (c <= 12841 || (c >= 12872 && c <= 12879)))
                : (c <= 12895 || (c < 12977
                  ? (c >= 12928 && c <= 12937)
                  : (c <= 12991 || c == 13312))))
              : (c <= 19903 || (c < 42240
                ? (c < 40959
                  ? c == 19968
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 42965
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43072
                  ? (c >= 43056 && c <= 43061)
                  : c <= 43123)))))))))))
      : (c <= 43187 || (c < 65345
        ? (c < 43808
          ? (c < 43600
            ? (c < 43396
              ? (c < 43261
                ? (c < 43250
                  ? (c >= 43216 && c <= 43225)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43312
                  ? (c >= 43264 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))))
              : (c <= 43442 || (c < 43520
                ? (c < 43488
                  ? (c >= 43471 && c <= 43481)
                  : (c <= 43492 || (c >= 43494 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43609 || (c < 43714
              ? (c < 43697
                ? (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))
                : (c <= 43697 || (c < 43705
                  ? (c >= 43701 && c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : (c <= 44032 || c == 55203))))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64848
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64829)))))
              : (c <= 64911 || (c < 65142
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : (c <= 65019 || (c >= 65136 && c <= 65140)))
                : (c <= 65276 || (c < 65313
                  ? (c >= 65296 && c <= 65305)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66816
          ? (c < 65930
            ? (c < 65576
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))))
              : (c <= 65594 || (c < 65664
                ? (c < 65599
                  ? (c >= 65596 && c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))
                : (c <= 65786 || (c < 65856
                  ? (c >= 65799 && c <= 65843)
                  : c <= 65912)))))
            : (c <= 65931 || (c < 66464
              ? (c < 66304
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66273 && c <= 66299)))
                : (c <= 66339 || (c < 66384
                  ? (c >= 66349 && c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66720
                ? (c < 66513
                  ? (c >= 66504 && c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67506
            ? (c < 66995
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : (c <= 66977 || (c >= 66979 && c <= 66993)))))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67672
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 6608
    ? (c < 2990
      ? (c < 2365
        ? (c < 1329
          ? (c < 710
            ? (c < 178
              ? (c < '_'
                ? (c < '0'
                  ? c == '-'
                  : (c <= ':' || (c >= 'A' && c <= 'Z')))
                : (c <= '_' || (c < '~'
                  ? (c >= 'a' && c <= 'z')
                  : (c <= '~' || c == 170))))
              : (c <= 179 || (c < 192
                ? (c < 185
                  ? c == 181
                  : (c <= 186 || (c >= 188 && c <= 190)))
                : (c <= 214 || (c < 248
                  ? (c >= 216 && c <= 246)
                  : c <= 705)))))
            : (c <= 721 || (c < 902
              ? (c < 880
                ? (c < 748
                  ? (c >= 736 && c <= 740)
                  : (c <= 748 || c == 750))
                : (c <= 884 || (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1869
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1632
                  ? (c >= 1568 && c <= 1610)
                  : (c <= 1641 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2088
              ? (c < 2042
                ? (c < 1984
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : (c <= 2074 || c == 2084))))
              : (c <= 2088 || (c < 2185
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2534
            ? (c < 2474
              ? (c < 2417
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2406 && c <= 2415)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2548 && c <= 2553)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : (c <= 2608 || (c >= 2610 && c <= 2611)))))
              : (c <= 2614 || (c < 2662
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2671 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2869
            ? (c < 2790
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : (c <= 2768 || (c >= 2784 && c <= 2785)))))
              : (c <= 2799 || (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2958
              ? (c < 2918
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2927 || (c < 2947
                  ? (c >= 2929 && c <= 2935)
                  : (c <= 2947 || (c >= 2949 && c <= 2954)))))
              : (c <= 2960 || (c < 2974
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : (c <= 2970 || c == 2972))
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))))))))))
      : (c <= 3001 || (c < 4096
        ? (c < 3416
          ? (c < 3214
            ? (c < 3160
              ? (c < 3086
                ? (c < 3046
                  ? c == 3024
                  : (c <= 3058 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || c == 3133))))
              : (c <= 3162 || (c < 3192
                ? (c < 3168
                  ? c == 3165
                  : (c <= 3169 || (c >= 3174 && c <= 3183)))
                : (c <= 3198 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : (c <= 3297 || (c >= 3302 && c <= 3311)))))
              : (c <= 3314 || (c < 3389
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3386)))
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3718
            ? (c < 3558
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3430 && c <= 3448)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))))
              : (c <= 3567 || (c < 3664
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3673 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3792
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))))
              : (c <= 3801 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : (c <= 3840 || (c >= 3872 && c <= 3891)))
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4969
          ? (c < 4682
            ? (c < 4238
              ? (c < 4193
                ? (c < 4176
                  ? (c >= 4159 && c <= 4169)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))))
              : (c <= 4238 || (c < 4301
                ? (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4792
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))))
              : (c <= 4798 || (c < 4824
                ? (c < 4802
                  ? c == 4800
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 4988 || (c < 6103
            ? (c < 5870
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))))
              : (c <= 5880 || (c < 5984
                ? (c < 5919
                  ? (c >= 5888 && c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6314
              ? (c < 6160
                ? (c < 6112
                  ? c == 6108
                  : (c <= 6121 || (c >= 6128 && c <= 6137)))
                : (c <= 6169 || (c < 6272
                  ? (c >= 6176 && c <= 6264)
                  : (c <= 6276 || (c >= 6279 && c <= 6312)))))
              : (c <= 6314 || (c < 6512
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : (c <= 6430 || (c >= 6470 && c <= 6509)))
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6618 || (c < 43072
      ? (c < 9450
        ? (c < 8031
          ? (c < 7312
            ? (c < 6992
              ? (c < 6800
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || (c >= 6784 && c <= 6793)))
                : (c <= 6809 || (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6988)))))
              : (c <= 7001 || (c < 7232
                ? (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : (c <= 7141 || (c >= 7168 && c <= 7203)))
                : (c <= 7241 || (c < 7296
                  ? (c >= 7245 && c <= 7293)
                  : c <= 7304)))))
            : (c <= 7354 || (c < 7960
              ? (c < 7413
                ? (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : (c <= 7404 || (c >= 7406 && c <= 7411)))
                : (c <= 7414 || (c < 7424
                  ? c == 7418
                  : (c <= 7615 || (c >= 7680 && c <= 7957)))))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8160
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : (c <= 8147 || (c >= 8150 && c <= 8155)))))
              : (c <= 8172 || (c < 8308
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || (c >= 8304 && c <= 8305)))
                : (c <= 8313 || (c < 8336
                  ? (c >= 8319 && c <= 8329)
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8490
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : (c <= 8486 || c == 8488))))
              : (c <= 8493 || (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 9312
                  ? (c >= 8528 && c <= 8585)
                  : c <= 9371)))))))))
        : (c <= 9471 || (c < 12593
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11264
                  ? (c >= 10102 && c <= 10131)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11520
                  ? c == 11517
                  : (c <= 11557 || c == 11559))))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))
              : (c <= 12341 || (c < 12449
                ? (c < 12353
                  ? (c >= 12344 && c <= 12348)
                  : (c <= 12438 || (c >= 12445 && c <= 12447)))
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42512
            ? (c < 12977
              ? (c < 12832
                ? (c < 12704
                  ? (c >= 12690 && c <= 12693)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 12841 || (c < 12881
                  ? (c >= 12872 && c <= 12879)
                  : (c <= 12895 || (c >= 12928 && c <= 12937)))))
              : (c <= 12991 || (c < 40959
                ? (c < 19903
                  ? c == 13312
                  : (c <= 19903 || c == 19968))
                : (c <= 42124 || (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : c <= 42508)))))
            : (c <= 42539 || (c < 42963
              ? (c < 42775
                ? (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : (c <= 42653 || (c >= 42656 && c <= 42735)))
                : (c <= 42783 || (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))))
              : (c <= 42963 || (c < 43015
                ? (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))
                : (c <= 43018 || (c < 43056
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43061)))))))))))
      : (c <= 43123 || (c < 65313
        ? (c < 43793
          ? (c < 43588
            ? (c < 43360
              ? (c < 43259
                ? (c < 43216
                  ? (c >= 43138 && c <= 43187)
                  : (c <= 43225 || (c >= 43250 && c <= 43255)))
                : (c <= 43259 || (c < 43264
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))))
              : (c <= 43388 || (c < 43494
                ? (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : (c <= 43481 || (c >= 43488 && c <= 43492)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43560)
                  : c <= 43586)))))
            : (c <= 43595 || (c < 43712
              ? (c < 43646
                ? (c < 43616
                  ? (c >= 43600 && c <= 43609)
                  : (c <= 43638 || c == 43642))
                : (c <= 43695 || (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))))
              : (c <= 43712 || (c < 43762
                ? (c < 43739
                  ? c == 43714
                  : (c <= 43741 || (c >= 43744 && c <= 43754)))
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c >= 43888 && c <= 44002)
                  : (c <= 44025 || c == 44032))))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64467
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : (c <= 64324 || (c >= 64326 && c <= 64433)))))
              : (c <= 64829 || (c < 65136
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65019)))
                : (c <= 65140 || (c < 65296
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65305)))))))))
        : (c <= 65338 || (c < 66776
          ? (c < 65856
            ? (c < 65549
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 65799
                  ? (c >= 65664 && c <= 65786)
                  : c <= 65843)))))
            : (c <= 65912 || (c < 66432
              ? (c < 66273
                ? (c < 66176
                  ? (c >= 65930 && c <= 65931)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))
                : (c <= 66299 || (c < 66349
                  ? (c >= 66304 && c <= 66339)
                  : (c <= 66378 || (c >= 66384 && c <= 66421)))))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))
                : (c <= 66717 || (c < 66736
                  ? (c >= 66720 && c <= 66729)
                  : c <= 66771)))))))
          : (c <= 66811 || (c < 67463
            ? (c < 66979
              ? (c < 66940
                ? (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : (c <= 66915 || (c >= 66928 && c <= 66938)))
                : (c <= 66954 || (c < 66964
                  ? (c >= 66956 && c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67672
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 6656
    ? (c < 3024
      ? (c < 2384
        ? (c < 1369
          ? (c < 736
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= ':')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'z' || (c < 170
                  ? c == '~'
                  : (c <= 170 || (c >= 178 && c <= 179)))))
              : (c <= 181 || (c < 216
                ? (c < 188
                  ? (c >= 185 && c <= 186)
                  : (c <= 190 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 904
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1969
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1646
                  ? (c >= 1632 && c <= 1641)
                  : (c <= 1647 || (c >= 1649 && c <= 1747)))))
              : (c <= 1749 || (c < 1808
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2112
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1984 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : (c <= 2084 || c == 2088))))
              : (c <= 2136 || (c < 2208
                ? (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))
                : (c <= 2249 || (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : c <= 2365)))))))))
        : (c <= 2384 || (c < 2707
          ? (c < 2548
            ? (c < 2482
              ? (c < 2437
                ? (c < 2406
                  ? (c >= 2392 && c <= 2401)
                  : (c <= 2415 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))
              : (c <= 2482 || (c < 2524
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2534
                  ? (c >= 2527 && c <= 2529)
                  : c <= 2545)))))
            : (c <= 2553 || (c < 2616
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))))
              : (c <= 2617 || (c < 2674
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : (c <= 2654 || (c >= 2662 && c <= 2671)))
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))))))
          : (c <= 2728 || (c < 2877
            ? (c < 2809
              ? (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : (c <= 2785 || (c >= 2790 && c <= 2799)))))
              : (c <= 2809 || (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : c <= 2873)))))
            : (c <= 2877 || (c < 2962
              ? (c < 2929
                ? (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : (c <= 2913 || (c >= 2918 && c <= 2927)))
                : (c <= 2935 || (c < 2949
                  ? c == 2947
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))
              : (c <= 2965 || (c < 2979
                ? (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : (c <= 2972 || (c >= 2974 && c <= 2975)))
                : (c <= 2980 || (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : c <= 3001)))))))))))
      : (c <= 3024 || (c < 4159
        ? (c < 3430
          ? (c < 3218
            ? (c < 3165
              ? (c < 3090
                ? (c < 3077
                  ? (c >= 3046 && c <= 3058)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))
                : (c <= 3112 || (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))))
              : (c <= 3165 || (c < 3200
                ? (c < 3174
                  ? (c >= 3168 && c <= 3169)
                  : (c <= 3183 || (c >= 3192 && c <= 3198)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3293
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3302
                  ? (c >= 3296 && c <= 3297)
                  : (c <= 3311 || (c >= 3313 && c <= 3314)))))
              : (c <= 3340 || (c < 3406
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : (c <= 3386 || c == 3389))
                : (c <= 3406 || (c < 3416
                  ? (c >= 3412 && c <= 3414)
                  : c <= 3425)))))))
          : (c <= 3448 || (c < 3724
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : (c <= 3526 || (c >= 3558 && c <= 3567)))))
              : (c <= 3632 || (c < 3713
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3664 && c <= 3673)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : (c <= 3782 || (c >= 3792 && c <= 3801)))))
              : (c <= 3807 || (c < 3913
                ? (c < 3872
                  ? c == 3840
                  : (c <= 3891 || (c >= 3904 && c <= 3911)))
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4169 || (c < 4992
          ? (c < 4688
            ? (c < 4240
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : (c <= 4225 || c == 4238))))
              : (c <= 4249 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4800
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : (c <= 4789 || (c >= 4792 && c <= 4798)))))
              : (c <= 4800 || (c < 4882
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : (c <= 4822 || (c >= 4824 && c <= 4880)))
                : (c <= 4885 || (c < 4969
                  ? (c >= 4888 && c <= 4954)
                  : c <= 4988)))))))
          : (c <= 5007 || (c < 6108
            ? (c < 5888
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : (c <= 5866 || (c >= 5870 && c <= 5880)))))
              : (c <= 5905 || (c < 5998
                ? (c < 5952
                  ? (c >= 5919 && c <= 5937)
                  : (c <= 5969 || (c >= 5984 && c <= 5996)))
                : (c <= 6000 || (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : c <= 6103)))))
            : (c <= 6108 || (c < 6320
              ? (c < 6176
                ? (c < 6128
                  ? (c >= 6112 && c <= 6121)
                  : (c <= 6137 || (c >= 6160 && c <= 6169)))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : (c <= 6312 || c == 6314))))
              : (c <= 6389 || (c < 6528
                ? (c < 6470
                  ? (c >= 6400 && c <= 6430)
                  : (c <= 6509 || (c >= 6512 && c <= 6516)))
                : (c <= 6571 || (c < 6608
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6618)))))))))))))
    : (c <= 6678 || (c < 43138
      ? (c < 10102
        ? (c < 8064
          ? (c < 7357
            ? (c < 7043
              ? (c < 6823
                ? (c < 6784
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6793 || (c >= 6800 && c <= 6809)))
                : (c <= 6823 || (c < 6981
                  ? (c >= 6917 && c <= 6963)
                  : (c <= 6988 || (c >= 6992 && c <= 7001)))))
              : (c <= 7072 || (c < 7245
                ? (c < 7168
                  ? (c >= 7086 && c <= 7141)
                  : (c <= 7203 || (c >= 7232 && c <= 7241)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7968
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))))
              : (c <= 8005 || (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8178
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : (c <= 8155 || (c >= 8160 && c <= 8172)))))
              : (c <= 8180 || (c < 8319
                ? (c < 8304
                  ? (c >= 8182 && c <= 8188)
                  : (c <= 8305 || (c >= 8308 && c <= 8313)))
                : (c <= 8329 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8495
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : (c <= 8488 || (c >= 8490 && c <= 8493)))))
              : (c <= 8505 || (c < 8528
                ? (c < 8517
                  ? (c >= 8508 && c <= 8511)
                  : (c <= 8521 || c == 8526))
                : (c <= 8585 || (c < 9450
                  ? (c >= 9312 && c <= 9371)
                  : c <= 9471)))))))))
        : (c <= 10131 || (c < 12690
          ? (c < 11712
            ? (c < 11568
              ? (c < 11517
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11517 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12344
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12321
                  ? (c >= 12293 && c <= 12295)
                  : (c <= 12329 || (c >= 12337 && c <= 12341)))))
              : (c <= 12348 || (c < 12540
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : (c <= 12447 || (c >= 12449 && c <= 12538)))
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)))))))
          : (c <= 12693 || (c < 42560
            ? (c < 13312
              ? (c < 12872
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || (c >= 12832 && c <= 12841)))
                : (c <= 12879 || (c < 12928
                  ? (c >= 12881 && c <= 12895)
                  : (c <= 12937 || (c >= 12977 && c <= 12991)))))
              : (c <= 13312 || (c < 42192
                ? (c < 19968
                  ? c == 19903
                  : (c <= 19968 || (c >= 40959 && c <= 42124)))
                : (c <= 42237 || (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42965
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42735 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42960
                  ? (c >= 42891 && c <= 42954)
                  : (c <= 42961 || c == 42963))))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43072
                  ? (c >= 43056 && c <= 43061)
                  : c <= 43123)))))))))))
      : (c <= 43187 || (c < 65345
        ? (c < 43808
          ? (c < 43600
            ? (c < 43396
              ? (c < 43261
                ? (c < 43250
                  ? (c >= 43216 && c <= 43225)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43312
                  ? (c >= 43264 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))))
              : (c <= 43442 || (c < 43520
                ? (c < 43488
                  ? (c >= 43471 && c <= 43481)
                  : (c <= 43492 || (c >= 43494 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43609 || (c < 43714
              ? (c < 43697
                ? (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))
                : (c <= 43697 || (c < 43705
                  ? (c >= 43701 && c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : (c <= 44032 || c == 55203))))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64848
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64829)))))
              : (c <= 64911 || (c < 65142
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : (c <= 65019 || (c >= 65136 && c <= 65140)))
                : (c <= 65276 || (c < 65313
                  ? (c >= 65296 && c <= 65305)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66816
          ? (c < 65930
            ? (c < 65576
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))))
              : (c <= 65594 || (c < 65664
                ? (c < 65599
                  ? (c >= 65596 && c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))
                : (c <= 65786 || (c < 65856
                  ? (c >= 65799 && c <= 65843)
                  : c <= 65912)))))
            : (c <= 65931 || (c < 66464
              ? (c < 66304
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66273 && c <= 66299)))
                : (c <= 66339 || (c < 66384
                  ? (c >= 66349 && c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66720
                ? (c < 66513
                  ? (c >= 66504 && c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67506
            ? (c < 66995
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : (c <= 66977 || (c >= 66979 && c <= 66993)))))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67672
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_bareword_character_set_1(int32_t c) {
  return (c < 6608
    ? (c < 2990
      ? (c < 2365
        ? (c < 1329
          ? (c < 710
            ? (c < 178
              ? (c < '_'
                ? (c < ','
                  ? (c >= '!' && c <= '%')
                  : (c <= ':' || (c >= '=' && c <= '\\')))
                : (c <= '_' || (c < '~'
                  ? (c >= 'a' && c <= 'z')
                  : (c <= '~' || c == 170))))
              : (c <= 179 || (c < 192
                ? (c < 185
                  ? c == 181
                  : (c <= 186 || (c >= 188 && c <= 190)))
                : (c <= 214 || (c < 248
                  ? (c >= 216 && c <= 246)
                  : c <= 705)))))
            : (c <= 721 || (c < 902
              ? (c < 880
                ? (c < 748
                  ? (c >= 736 && c <= 740)
                  : (c <= 748 || c == 750))
                : (c <= 884 || (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1869
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1632
                  ? (c >= 1568 && c <= 1610)
                  : (c <= 1641 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2088
              ? (c < 2042
                ? (c < 1984
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : (c <= 2074 || c == 2084))))
              : (c <= 2088 || (c < 2185
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2534
            ? (c < 2474
              ? (c < 2417
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2406 && c <= 2415)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2548 && c <= 2553)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : (c <= 2608 || (c >= 2610 && c <= 2611)))))
              : (c <= 2614 || (c < 2662
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2671 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2869
            ? (c < 2790
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : (c <= 2768 || (c >= 2784 && c <= 2785)))))
              : (c <= 2799 || (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2958
              ? (c < 2918
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2927 || (c < 2947
                  ? (c >= 2929 && c <= 2935)
                  : (c <= 2947 || (c >= 2949 && c <= 2954)))))
              : (c <= 2960 || (c < 2974
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : (c <= 2970 || c == 2972))
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))))))))))
      : (c <= 3001 || (c < 4096
        ? (c < 3416
          ? (c < 3214
            ? (c < 3160
              ? (c < 3086
                ? (c < 3046
                  ? c == 3024
                  : (c <= 3058 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || c == 3133))))
              : (c <= 3162 || (c < 3192
                ? (c < 3168
                  ? c == 3165
                  : (c <= 3169 || (c >= 3174 && c <= 3183)))
                : (c <= 3198 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : (c <= 3297 || (c >= 3302 && c <= 3311)))))
              : (c <= 3314 || (c < 3389
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3386)))
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3718
            ? (c < 3558
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3430 && c <= 3448)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))))
              : (c <= 3567 || (c < 3664
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3673 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3792
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))))
              : (c <= 3801 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : (c <= 3840 || (c >= 3872 && c <= 3891)))
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4969
          ? (c < 4682
            ? (c < 4238
              ? (c < 4193
                ? (c < 4176
                  ? (c >= 4159 && c <= 4169)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))))
              : (c <= 4238 || (c < 4301
                ? (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4792
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))))
              : (c <= 4798 || (c < 4824
                ? (c < 4802
                  ? c == 4800
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 4988 || (c < 6103
            ? (c < 5870
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))))
              : (c <= 5880 || (c < 5984
                ? (c < 5919
                  ? (c >= 5888 && c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6314
              ? (c < 6160
                ? (c < 6112
                  ? c == 6108
                  : (c <= 6121 || (c >= 6128 && c <= 6137)))
                : (c <= 6169 || (c < 6272
                  ? (c >= 6176 && c <= 6264)
                  : (c <= 6276 || (c >= 6279 && c <= 6312)))))
              : (c <= 6314 || (c < 6512
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : (c <= 6430 || (c >= 6470 && c <= 6509)))
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6618 || (c < 43072
      ? (c < 9450
        ? (c < 8031
          ? (c < 7312
            ? (c < 6992
              ? (c < 6800
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || (c >= 6784 && c <= 6793)))
                : (c <= 6809 || (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6988)))))
              : (c <= 7001 || (c < 7232
                ? (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : (c <= 7141 || (c >= 7168 && c <= 7203)))
                : (c <= 7241 || (c < 7296
                  ? (c >= 7245 && c <= 7293)
                  : c <= 7304)))))
            : (c <= 7354 || (c < 7960
              ? (c < 7413
                ? (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : (c <= 7404 || (c >= 7406 && c <= 7411)))
                : (c <= 7414 || (c < 7424
                  ? c == 7418
                  : (c <= 7615 || (c >= 7680 && c <= 7957)))))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8160
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : (c <= 8147 || (c >= 8150 && c <= 8155)))))
              : (c <= 8172 || (c < 8308
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || (c >= 8304 && c <= 8305)))
                : (c <= 8313 || (c < 8336
                  ? (c >= 8319 && c <= 8329)
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8490
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : (c <= 8486 || c == 8488))))
              : (c <= 8493 || (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 9312
                  ? (c >= 8528 && c <= 8585)
                  : c <= 9371)))))))))
        : (c <= 9471 || (c < 12593
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11264
                  ? (c >= 10102 && c <= 10131)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11520
                  ? c == 11517
                  : (c <= 11557 || c == 11559))))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))
              : (c <= 12341 || (c < 12449
                ? (c < 12353
                  ? (c >= 12344 && c <= 12348)
                  : (c <= 12438 || (c >= 12445 && c <= 12447)))
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42512
            ? (c < 12977
              ? (c < 12832
                ? (c < 12704
                  ? (c >= 12690 && c <= 12693)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 12841 || (c < 12881
                  ? (c >= 12872 && c <= 12879)
                  : (c <= 12895 || (c >= 12928 && c <= 12937)))))
              : (c <= 12991 || (c < 40959
                ? (c < 19903
                  ? c == 13312
                  : (c <= 19903 || c == 19968))
                : (c <= 42124 || (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : c <= 42508)))))
            : (c <= 42539 || (c < 42963
              ? (c < 42775
                ? (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : (c <= 42653 || (c >= 42656 && c <= 42735)))
                : (c <= 42783 || (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))))
              : (c <= 42963 || (c < 43015
                ? (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))
                : (c <= 43018 || (c < 43056
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43061)))))))))))
      : (c <= 43123 || (c < 65313
        ? (c < 43793
          ? (c < 43588
            ? (c < 43360
              ? (c < 43259
                ? (c < 43216
                  ? (c >= 43138 && c <= 43187)
                  : (c <= 43225 || (c >= 43250 && c <= 43255)))
                : (c <= 43259 || (c < 43264
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))))
              : (c <= 43388 || (c < 43494
                ? (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : (c <= 43481 || (c >= 43488 && c <= 43492)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43560)
                  : c <= 43586)))))
            : (c <= 43595 || (c < 43712
              ? (c < 43646
                ? (c < 43616
                  ? (c >= 43600 && c <= 43609)
                  : (c <= 43638 || c == 43642))
                : (c <= 43695 || (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))))
              : (c <= 43712 || (c < 43762
                ? (c < 43739
                  ? c == 43714
                  : (c <= 43741 || (c >= 43744 && c <= 43754)))
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c >= 43888 && c <= 44002)
                  : (c <= 44025 || c == 44032))))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64467
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : (c <= 64324 || (c >= 64326 && c <= 64433)))))
              : (c <= 64829 || (c < 65136
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65019)))
                : (c <= 65140 || (c < 65296
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65305)))))))))
        : (c <= 65338 || (c < 66776
          ? (c < 65856
            ? (c < 65549
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 65799
                  ? (c >= 65664 && c <= 65786)
                  : c <= 65843)))))
            : (c <= 65912 || (c < 66432
              ? (c < 66273
                ? (c < 66176
                  ? (c >= 65930 && c <= 65931)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))
                : (c <= 66299 || (c < 66349
                  ? (c >= 66304 && c <= 66339)
                  : (c <= 66378 || (c >= 66384 && c <= 66421)))))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))
                : (c <= 66717 || (c < 66736
                  ? (c >= 66720 && c <= 66729)
                  : c <= 66771)))))))
          : (c <= 66811 || (c < 67463
            ? (c < 66979
              ? (c < 66940
                ? (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : (c <= 66915 || (c >= 66928 && c <= 66938)))
                : (c <= 66954 || (c < 66964
                  ? (c >= 66956 && c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67672
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_bareword_character_set_2(int32_t c) {
  return (c < 6608
    ? (c < 2990
      ? (c < 2365
        ? (c < 1329
          ? (c < 710
            ? (c < 170
              ? (c < '@'
                ? (c < ','
                  ? (c >= '!' && c <= '%')
                  : (c <= ':' || c == '='))
                : (c <= '\\' || (c < 'a'
                  ? c == '_'
                  : (c <= 'z' || c == '~'))))
              : (c <= 170 || (c < 188
                ? (c < 181
                  ? (c >= 178 && c <= 179)
                  : (c <= 181 || (c >= 185 && c <= 186)))
                : (c <= 190 || (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))))))
            : (c <= 721 || (c < 902
              ? (c < 880
                ? (c < 748
                  ? (c >= 736 && c <= 740)
                  : (c <= 748 || c == 750))
                : (c <= 884 || (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1869
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1632
                  ? (c >= 1568 && c <= 1610)
                  : (c <= 1641 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2088
              ? (c < 2042
                ? (c < 1984
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : (c <= 2074 || c == 2084))))
              : (c <= 2088 || (c < 2185
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2534
            ? (c < 2474
              ? (c < 2417
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2406 && c <= 2415)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2548 && c <= 2553)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : (c <= 2608 || (c >= 2610 && c <= 2611)))))
              : (c <= 2614 || (c < 2662
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2671 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2869
            ? (c < 2790
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : (c <= 2768 || (c >= 2784 && c <= 2785)))))
              : (c <= 2799 || (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2958
              ? (c < 2918
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2927 || (c < 2947
                  ? (c >= 2929 && c <= 2935)
                  : (c <= 2947 || (c >= 2949 && c <= 2954)))))
              : (c <= 2960 || (c < 2974
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : (c <= 2970 || c == 2972))
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))))))))))
      : (c <= 3001 || (c < 4096
        ? (c < 3416
          ? (c < 3214
            ? (c < 3160
              ? (c < 3086
                ? (c < 3046
                  ? c == 3024
                  : (c <= 3058 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || c == 3133))))
              : (c <= 3162 || (c < 3192
                ? (c < 3168
                  ? c == 3165
                  : (c <= 3169 || (c >= 3174 && c <= 3183)))
                : (c <= 3198 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : (c <= 3297 || (c >= 3302 && c <= 3311)))))
              : (c <= 3314 || (c < 3389
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3386)))
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3718
            ? (c < 3558
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3430 && c <= 3448)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))))
              : (c <= 3567 || (c < 3664
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3673 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3792
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))))
              : (c <= 3801 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : (c <= 3840 || (c >= 3872 && c <= 3891)))
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4969
          ? (c < 4682
            ? (c < 4238
              ? (c < 4193
                ? (c < 4176
                  ? (c >= 4159 && c <= 4169)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))))
              : (c <= 4238 || (c < 4301
                ? (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4792
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))))
              : (c <= 4798 || (c < 4824
                ? (c < 4802
                  ? c == 4800
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 4988 || (c < 6103
            ? (c < 5870
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))))
              : (c <= 5880 || (c < 5984
                ? (c < 5919
                  ? (c >= 5888 && c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6314
              ? (c < 6160
                ? (c < 6112
                  ? c == 6108
                  : (c <= 6121 || (c >= 6128 && c <= 6137)))
                : (c <= 6169 || (c < 6272
                  ? (c >= 6176 && c <= 6264)
                  : (c <= 6276 || (c >= 6279 && c <= 6312)))))
              : (c <= 6314 || (c < 6512
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : (c <= 6430 || (c >= 6470 && c <= 6509)))
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6618 || (c < 43072
      ? (c < 9450
        ? (c < 8031
          ? (c < 7312
            ? (c < 6992
              ? (c < 6800
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || (c >= 6784 && c <= 6793)))
                : (c <= 6809 || (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6988)))))
              : (c <= 7001 || (c < 7232
                ? (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : (c <= 7141 || (c >= 7168 && c <= 7203)))
                : (c <= 7241 || (c < 7296
                  ? (c >= 7245 && c <= 7293)
                  : c <= 7304)))))
            : (c <= 7354 || (c < 7960
              ? (c < 7413
                ? (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : (c <= 7404 || (c >= 7406 && c <= 7411)))
                : (c <= 7414 || (c < 7424
                  ? c == 7418
                  : (c <= 7615 || (c >= 7680 && c <= 7957)))))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8160
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : (c <= 8147 || (c >= 8150 && c <= 8155)))))
              : (c <= 8172 || (c < 8308
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || (c >= 8304 && c <= 8305)))
                : (c <= 8313 || (c < 8336
                  ? (c >= 8319 && c <= 8329)
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8490
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : (c <= 8486 || c == 8488))))
              : (c <= 8493 || (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 9312
                  ? (c >= 8528 && c <= 8585)
                  : c <= 9371)))))))))
        : (c <= 9471 || (c < 12593
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11264
                  ? (c >= 10102 && c <= 10131)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11520
                  ? c == 11517
                  : (c <= 11557 || c == 11559))))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))
              : (c <= 12341 || (c < 12449
                ? (c < 12353
                  ? (c >= 12344 && c <= 12348)
                  : (c <= 12438 || (c >= 12445 && c <= 12447)))
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42512
            ? (c < 12977
              ? (c < 12832
                ? (c < 12704
                  ? (c >= 12690 && c <= 12693)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 12841 || (c < 12881
                  ? (c >= 12872 && c <= 12879)
                  : (c <= 12895 || (c >= 12928 && c <= 12937)))))
              : (c <= 12991 || (c < 40959
                ? (c < 19903
                  ? c == 13312
                  : (c <= 19903 || c == 19968))
                : (c <= 42124 || (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : c <= 42508)))))
            : (c <= 42539 || (c < 42963
              ? (c < 42775
                ? (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : (c <= 42653 || (c >= 42656 && c <= 42735)))
                : (c <= 42783 || (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))))
              : (c <= 42963 || (c < 43015
                ? (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))
                : (c <= 43018 || (c < 43056
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43061)))))))))))
      : (c <= 43123 || (c < 65313
        ? (c < 43793
          ? (c < 43588
            ? (c < 43360
              ? (c < 43259
                ? (c < 43216
                  ? (c >= 43138 && c <= 43187)
                  : (c <= 43225 || (c >= 43250 && c <= 43255)))
                : (c <= 43259 || (c < 43264
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))))
              : (c <= 43388 || (c < 43494
                ? (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : (c <= 43481 || (c >= 43488 && c <= 43492)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43560)
                  : c <= 43586)))))
            : (c <= 43595 || (c < 43712
              ? (c < 43646
                ? (c < 43616
                  ? (c >= 43600 && c <= 43609)
                  : (c <= 43638 || c == 43642))
                : (c <= 43695 || (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))))
              : (c <= 43712 || (c < 43762
                ? (c < 43739
                  ? c == 43714
                  : (c <= 43741 || (c >= 43744 && c <= 43754)))
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c >= 43888 && c <= 44002)
                  : (c <= 44025 || c == 44032))))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64467
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : (c <= 64324 || (c >= 64326 && c <= 64433)))))
              : (c <= 64829 || (c < 65136
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65019)))
                : (c <= 65140 || (c < 65296
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65305)))))))))
        : (c <= 65338 || (c < 66776
          ? (c < 65856
            ? (c < 65549
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 65799
                  ? (c >= 65664 && c <= 65786)
                  : c <= 65843)))))
            : (c <= 65912 || (c < 66432
              ? (c < 66273
                ? (c < 66176
                  ? (c >= 65930 && c <= 65931)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))
                : (c <= 66299 || (c < 66349
                  ? (c >= 66304 && c <= 66339)
                  : (c <= 66378 || (c >= 66384 && c <= 66421)))))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))
                : (c <= 66717 || (c < 66736
                  ? (c >= 66720 && c <= 66729)
                  : c <= 66771)))))))
          : (c <= 66811 || (c < 67463
            ? (c < 66979
              ? (c < 66940
                ? (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : (c <= 66915 || (c >= 66928 && c <= 66938)))
                : (c <= 66954 || (c < 66964
                  ? (c >= 66956 && c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67672
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_bareword_character_set_3(int32_t c) {
  return (c < 6608
    ? (c < 2990
      ? (c < 2365
        ? (c < 1329
          ? (c < 710
            ? (c < 178
              ? (c < '@'
                ? (c < ','
                  ? (c >= '!' && c <= '%')
                  : (c <= ':' || c == '='))
                : (c <= '\\' || (c < 'a'
                  ? c == '_'
                  : (c <= '~' || c == 170))))
              : (c <= 179 || (c < 192
                ? (c < 185
                  ? c == 181
                  : (c <= 186 || (c >= 188 && c <= 190)))
                : (c <= 214 || (c < 248
                  ? (c >= 216 && c <= 246)
                  : c <= 705)))))
            : (c <= 721 || (c < 902
              ? (c < 880
                ? (c < 748
                  ? (c >= 736 && c <= 740)
                  : (c <= 748 || c == 750))
                : (c <= 884 || (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1869
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1632
                  ? (c >= 1568 && c <= 1610)
                  : (c <= 1641 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2088
              ? (c < 2042
                ? (c < 1984
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : (c <= 2074 || c == 2084))))
              : (c <= 2088 || (c < 2185
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2534
            ? (c < 2474
              ? (c < 2417
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2406 && c <= 2415)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2548 && c <= 2553)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : (c <= 2608 || (c >= 2610 && c <= 2611)))))
              : (c <= 2614 || (c < 2662
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2671 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2869
            ? (c < 2790
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : (c <= 2768 || (c >= 2784 && c <= 2785)))))
              : (c <= 2799 || (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2958
              ? (c < 2918
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2927 || (c < 2947
                  ? (c >= 2929 && c <= 2935)
                  : (c <= 2947 || (c >= 2949 && c <= 2954)))))
              : (c <= 2960 || (c < 2974
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : (c <= 2970 || c == 2972))
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))))))))))
      : (c <= 3001 || (c < 4096
        ? (c < 3416
          ? (c < 3214
            ? (c < 3160
              ? (c < 3086
                ? (c < 3046
                  ? c == 3024
                  : (c <= 3058 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || c == 3133))))
              : (c <= 3162 || (c < 3192
                ? (c < 3168
                  ? c == 3165
                  : (c <= 3169 || (c >= 3174 && c <= 3183)))
                : (c <= 3198 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : (c <= 3297 || (c >= 3302 && c <= 3311)))))
              : (c <= 3314 || (c < 3389
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3386)))
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3718
            ? (c < 3558
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3430 && c <= 3448)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))))
              : (c <= 3567 || (c < 3664
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3673 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3792
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))))
              : (c <= 3801 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : (c <= 3840 || (c >= 3872 && c <= 3891)))
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4969
          ? (c < 4682
            ? (c < 4238
              ? (c < 4193
                ? (c < 4176
                  ? (c >= 4159 && c <= 4169)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))))
              : (c <= 4238 || (c < 4301
                ? (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4792
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))))
              : (c <= 4798 || (c < 4824
                ? (c < 4802
                  ? c == 4800
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 4988 || (c < 6103
            ? (c < 5870
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))))
              : (c <= 5880 || (c < 5984
                ? (c < 5919
                  ? (c >= 5888 && c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6314
              ? (c < 6160
                ? (c < 6112
                  ? c == 6108
                  : (c <= 6121 || (c >= 6128 && c <= 6137)))
                : (c <= 6169 || (c < 6272
                  ? (c >= 6176 && c <= 6264)
                  : (c <= 6276 || (c >= 6279 && c <= 6312)))))
              : (c <= 6314 || (c < 6512
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : (c <= 6430 || (c >= 6470 && c <= 6509)))
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6618 || (c < 43072
      ? (c < 9450
        ? (c < 8031
          ? (c < 7312
            ? (c < 6992
              ? (c < 6800
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || (c >= 6784 && c <= 6793)))
                : (c <= 6809 || (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6988)))))
              : (c <= 7001 || (c < 7232
                ? (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : (c <= 7141 || (c >= 7168 && c <= 7203)))
                : (c <= 7241 || (c < 7296
                  ? (c >= 7245 && c <= 7293)
                  : c <= 7304)))))
            : (c <= 7354 || (c < 7960
              ? (c < 7413
                ? (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : (c <= 7404 || (c >= 7406 && c <= 7411)))
                : (c <= 7414 || (c < 7424
                  ? c == 7418
                  : (c <= 7615 || (c >= 7680 && c <= 7957)))))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8160
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : (c <= 8147 || (c >= 8150 && c <= 8155)))))
              : (c <= 8172 || (c < 8308
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || (c >= 8304 && c <= 8305)))
                : (c <= 8313 || (c < 8336
                  ? (c >= 8319 && c <= 8329)
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8490
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : (c <= 8486 || c == 8488))))
              : (c <= 8493 || (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 9312
                  ? (c >= 8528 && c <= 8585)
                  : c <= 9371)))))))))
        : (c <= 9471 || (c < 12593
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11264
                  ? (c >= 10102 && c <= 10131)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11520
                  ? c == 11517
                  : (c <= 11557 || c == 11559))))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))
              : (c <= 12341 || (c < 12449
                ? (c < 12353
                  ? (c >= 12344 && c <= 12348)
                  : (c <= 12438 || (c >= 12445 && c <= 12447)))
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42512
            ? (c < 12977
              ? (c < 12832
                ? (c < 12704
                  ? (c >= 12690 && c <= 12693)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 12841 || (c < 12881
                  ? (c >= 12872 && c <= 12879)
                  : (c <= 12895 || (c >= 12928 && c <= 12937)))))
              : (c <= 12991 || (c < 40959
                ? (c < 19903
                  ? c == 13312
                  : (c <= 19903 || c == 19968))
                : (c <= 42124 || (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : c <= 42508)))))
            : (c <= 42539 || (c < 42963
              ? (c < 42775
                ? (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : (c <= 42653 || (c >= 42656 && c <= 42735)))
                : (c <= 42783 || (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))))
              : (c <= 42963 || (c < 43015
                ? (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))
                : (c <= 43018 || (c < 43056
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43061)))))))))))
      : (c <= 43123 || (c < 65313
        ? (c < 43793
          ? (c < 43588
            ? (c < 43360
              ? (c < 43259
                ? (c < 43216
                  ? (c >= 43138 && c <= 43187)
                  : (c <= 43225 || (c >= 43250 && c <= 43255)))
                : (c <= 43259 || (c < 43264
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))))
              : (c <= 43388 || (c < 43494
                ? (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : (c <= 43481 || (c >= 43488 && c <= 43492)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43560)
                  : c <= 43586)))))
            : (c <= 43595 || (c < 43712
              ? (c < 43646
                ? (c < 43616
                  ? (c >= 43600 && c <= 43609)
                  : (c <= 43638 || c == 43642))
                : (c <= 43695 || (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))))
              : (c <= 43712 || (c < 43762
                ? (c < 43739
                  ? c == 43714
                  : (c <= 43741 || (c >= 43744 && c <= 43754)))
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c >= 43888 && c <= 44002)
                  : (c <= 44025 || c == 44032))))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64467
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : (c <= 64324 || (c >= 64326 && c <= 64433)))))
              : (c <= 64829 || (c < 65136
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65019)))
                : (c <= 65140 || (c < 65296
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65305)))))))))
        : (c <= 65338 || (c < 66776
          ? (c < 65856
            ? (c < 65549
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 65799
                  ? (c >= 65664 && c <= 65786)
                  : c <= 65843)))))
            : (c <= 65912 || (c < 66432
              ? (c < 66273
                ? (c < 66176
                  ? (c >= 65930 && c <= 65931)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))
                : (c <= 66299 || (c < 66349
                  ? (c >= 66304 && c <= 66339)
                  : (c <= 66378 || (c >= 66384 && c <= 66421)))))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))
                : (c <= 66717 || (c < 66736
                  ? (c >= 66720 && c <= 66729)
                  : c <= 66771)))))))
          : (c <= 66811 || (c < 67463
            ? (c < 66979
              ? (c < 66940
                ? (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : (c <= 66915 || (c >= 66928 && c <= 66938)))
                : (c <= 66954 || (c < 66964
                  ? (c >= 66956 && c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67672
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_bareword_character_set_4(int32_t c) {
  return (c < 6576
    ? (c < 2979
      ? (c < 2208
        ? (c < 1015
          ? (c < 216
            ? (c < 'a'
              ? (c < '='
                ? (c < '%'
                  ? c == '!'
                  : (c <= '%' || (c >= '+' && c <= ':')))
                : (c <= '=' || (c < '\\'
                  ? (c >= '@' && c <= 'Z')
                  : (c <= '\\' || c == '_'))))
              : (c <= 'z' || (c < 181
                ? (c < 170
                  ? c == '~'
                  : (c <= 170 || (c >= 178 && c <= 179)))
                : (c <= 181 || (c < 188
                  ? (c >= 185 && c <= 186)
                  : (c <= 190 || (c >= 192 && c <= 214)))))))
            : (c <= 246 || (c < 890
              ? (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))))
              : (c <= 893 || (c < 908
                ? (c < 902
                  ? c == 895
                  : (c <= 902 || (c >= 904 && c <= 906)))
                : (c <= 908 || (c < 931
                  ? (c >= 910 && c <= 929)
                  : c <= 1013)))))))
          : (c <= 1153 || (c < 1808
            ? (c < 1632
              ? (c < 1376
                ? (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))))
              : (c <= 1641 || (c < 1765
                ? (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : (c <= 1747 || c == 1749))
                : (c <= 1766 || (c < 1791
                  ? (c >= 1774 && c <= 1788)
                  : c <= 1791)))))
            : (c <= 1808 || (c < 2074
              ? (c < 1984
                ? (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : (c <= 1957 || c == 1969))
                : (c <= 2026 || (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))))
              : (c <= 2074 || (c < 2144
                ? (c < 2088
                  ? c == 2084
                  : (c <= 2088 || (c >= 2112 && c <= 2136)))
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2417
                  ? (c >= 2406 && c <= 2415)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2556
                ? (c < 2534
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || (c >= 2548 && c <= 2553)))
                : (c <= 2556 || (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))))
              : (c <= 2608 || (c < 2649
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2662
                  ? c == 2654
                  : c <= 2671)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2768
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : (c <= 2745 || c == 2749))))
              : (c <= 2768 || (c < 2821
                ? (c < 2790
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2799 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2918
                  ? (c >= 2911 && c <= 2913)
                  : (c <= 2927 || (c >= 2929 && c <= 2935)))))
              : (c <= 2947 || (c < 2969
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 3976
        ? (c < 3412
          ? (c < 3205
            ? (c < 3114
              ? (c < 3046
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3058 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3192
                  ? (c >= 3174 && c <= 3183)
                  : (c <= 3198 || c == 3200))))))
            : (c <= 3212 || (c < 3302
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))))
              : (c <= 3311 || (c < 3346
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3716
            ? (c < 3520
              ? (c < 3461
                ? (c < 3430
                  ? (c >= 3416 && c <= 3425)
                  : (c <= 3448 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))))
              : (c <= 3526 || (c < 3648
                ? (c < 3585
                  ? (c >= 3558 && c <= 3567)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3713
                  ? (c >= 3664 && c <= 3673)
                  : c <= 3714)))))
            : (c <= 3716 || (c < 3782
              ? (c < 3751
                ? (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3760 || (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3872
                ? (c < 3804
                  ? (c >= 3792 && c <= 3801)
                  : (c <= 3807 || c == 3840))
                : (c <= 3891 || (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)))))))))
        : (c <= 3980 || (c < 4888
          ? (c < 4348
            ? (c < 4213
              ? (c < 4186
                ? (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : (c <= 4169 || (c >= 4176 && c <= 4181)))
                : (c <= 4189 || (c < 4197
                  ? c == 4193
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))))
              : (c <= 4225 || (c < 4295
                ? (c < 4240
                  ? c == 4238
                  : (c <= 4249 || (c >= 4256 && c <= 4293)))
                : (c <= 4295 || (c < 4304
                  ? c == 4301
                  : c <= 4346)))))
            : (c <= 4680 || (c < 4786
              ? (c < 4698
                ? (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : (c <= 4694 || c == 4696))
                : (c <= 4701 || (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))))
              : (c <= 4789 || (c < 4808
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4969 && c <= 4988)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5870 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6279
              ? (c < 6128
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6112 && c <= 6121)))
                : (c <= 6137 || (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))))
              : (c <= 6312 || (c < 6470
                ? (c < 6320
                  ? c == 6314
                  : (c <= 6389 || (c >= 6400 && c <= 6430)))
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43072
      ? (c < 9450
        ? (c < 8031
          ? (c < 7312
            ? (c < 6981
              ? (c < 6784
                ? (c < 6656
                  ? (c >= 6608 && c <= 6618)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))
                : (c <= 6793 || (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))))
              : (c <= 6988 || (c < 7168
                ? (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : (c <= 7072 || (c >= 7086 && c <= 7141)))
                : (c <= 7203 || (c < 7245
                  ? (c >= 7232 && c <= 7241)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 7960
              ? (c < 7413
                ? (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : (c <= 7404 || (c >= 7406 && c <= 7411)))
                : (c <= 7414 || (c < 7424
                  ? c == 7418
                  : (c <= 7615 || (c >= 7680 && c <= 7957)))))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8160
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : (c <= 8147 || (c >= 8150 && c <= 8155)))))
              : (c <= 8172 || (c < 8308
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || (c >= 8304 && c <= 8305)))
                : (c <= 8313 || (c < 8336
                  ? (c >= 8319 && c <= 8329)
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8490
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : (c <= 8486 || c == 8488))))
              : (c <= 8493 || (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 9312
                  ? (c >= 8528 && c <= 8585)
                  : c <= 9371)))))))))
        : (c <= 9471 || (c < 12593
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11264
                  ? (c >= 10102 && c <= 10131)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11520
                  ? c == 11517
                  : (c <= 11557 || c == 11559))))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))
              : (c <= 12341 || (c < 12449
                ? (c < 12353
                  ? (c >= 12344 && c <= 12348)
                  : (c <= 12438 || (c >= 12445 && c <= 12447)))
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42512
            ? (c < 12977
              ? (c < 12832
                ? (c < 12704
                  ? (c >= 12690 && c <= 12693)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 12841 || (c < 12881
                  ? (c >= 12872 && c <= 12879)
                  : (c <= 12895 || (c >= 12928 && c <= 12937)))))
              : (c <= 12991 || (c < 40959
                ? (c < 19903
                  ? c == 13312
                  : (c <= 19903 || c == 19968))
                : (c <= 42124 || (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : c <= 42508)))))
            : (c <= 42539 || (c < 42963
              ? (c < 42775
                ? (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : (c <= 42653 || (c >= 42656 && c <= 42735)))
                : (c <= 42783 || (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))))
              : (c <= 42963 || (c < 43015
                ? (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))
                : (c <= 43018 || (c < 43056
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43061)))))))))))
      : (c <= 43123 || (c < 65313
        ? (c < 43793
          ? (c < 43588
            ? (c < 43360
              ? (c < 43259
                ? (c < 43216
                  ? (c >= 43138 && c <= 43187)
                  : (c <= 43225 || (c >= 43250 && c <= 43255)))
                : (c <= 43259 || (c < 43264
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))))
              : (c <= 43388 || (c < 43494
                ? (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : (c <= 43481 || (c >= 43488 && c <= 43492)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43560)
                  : c <= 43586)))))
            : (c <= 43595 || (c < 43712
              ? (c < 43646
                ? (c < 43616
                  ? (c >= 43600 && c <= 43609)
                  : (c <= 43638 || c == 43642))
                : (c <= 43695 || (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))))
              : (c <= 43712 || (c < 43762
                ? (c < 43739
                  ? c == 43714
                  : (c <= 43741 || (c >= 43744 && c <= 43754)))
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c >= 43888 && c <= 44002)
                  : (c <= 44025 || c == 44032))))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64467
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : (c <= 64324 || (c >= 64326 && c <= 64433)))))
              : (c <= 64829 || (c < 65136
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65019)))
                : (c <= 65140 || (c < 65296
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65305)))))))))
        : (c <= 65338 || (c < 66776
          ? (c < 65856
            ? (c < 65549
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 65799
                  ? (c >= 65664 && c <= 65786)
                  : c <= 65843)))))
            : (c <= 65912 || (c < 66432
              ? (c < 66273
                ? (c < 66176
                  ? (c >= 65930 && c <= 65931)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))
                : (c <= 66299 || (c < 66349
                  ? (c >= 66304 && c <= 66339)
                  : (c <= 66378 || (c >= 66384 && c <= 66421)))))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))
                : (c <= 66717 || (c < 66736
                  ? (c >= 66720 && c <= 66729)
                  : c <= 66771)))))))
          : (c <= 66811 || (c < 67463
            ? (c < 66979
              ? (c < 66940
                ? (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : (c <= 66915 || (c >= 66928 && c <= 66938)))
                : (c <= 66954 || (c < 66964
                  ? (c >= 66956 && c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67672
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_bareword_character_set_5(int32_t c) {
  return (c < 6688
    ? (c < 3077
      ? (c < 2406
        ? (c < 1488
          ? (c < 750
            ? (c < 188
              ? (c < 170
                ? (c < '_'
                  ? (c >= '!' && c <= '\\')
                  : (c <= '_' || (c >= 'a' && c <= '~')))
                : (c <= 170 || (c < 181
                  ? (c >= 178 && c <= 179)
                  : (c <= 181 || (c >= 185 && c <= 186)))))
              : (c <= 190 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 910
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : (c <= 906 || c == 908))))
              : (c <= 929 || (c < 1329
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : (c <= 1153 || (c >= 1162 && c <= 1327)))
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 2036
            ? (c < 1774
              ? (c < 1646
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1632 && c <= 1641)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : (c <= 1749 || (c >= 1765 && c <= 1766)))))
              : (c <= 1788 || (c < 1869
                ? (c < 1808
                  ? c == 1791
                  : (c <= 1808 || (c >= 1810 && c <= 1839)))
                : (c <= 1957 || (c < 1984
                  ? c == 1969
                  : c <= 2026)))))
            : (c <= 2037 || (c < 2160
              ? (c < 2084
                ? (c < 2048
                  ? c == 2042
                  : (c <= 2069 || c == 2074))
                : (c <= 2084 || (c < 2112
                  ? c == 2088
                  : (c <= 2136 || (c >= 2144 && c <= 2154)))))
              : (c <= 2183 || (c < 2365
                ? (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : (c <= 2249 || (c >= 2308 && c <= 2361)))
                : (c <= 2365 || (c < 2392
                  ? c == 2384
                  : c <= 2401)))))))))
        : (c <= 2415 || (c < 2738
          ? (c < 2565
            ? (c < 2493
              ? (c < 2451
                ? (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : (c <= 2444 || (c >= 2447 && c <= 2448)))
                : (c <= 2472 || (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))))
              : (c <= 2493 || (c < 2534
                ? (c < 2524
                  ? c == 2510
                  : (c <= 2525 || (c >= 2527 && c <= 2529)))
                : (c <= 2545 || (c < 2556
                  ? (c >= 2548 && c <= 2553)
                  : c <= 2556)))))
            : (c <= 2570 || (c < 2654
              ? (c < 2610
                ? (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : (c <= 2600 || (c >= 2602 && c <= 2608)))
                : (c <= 2611 || (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : (c <= 2617 || (c >= 2649 && c <= 2652)))))
              : (c <= 2654 || (c < 2703
                ? (c < 2674
                  ? (c >= 2662 && c <= 2671)
                  : (c <= 2676 || (c >= 2693 && c <= 2701)))
                : (c <= 2705 || (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : c <= 2736)))))))
          : (c <= 2739 || (c < 2911
            ? (c < 2831
              ? (c < 2784
                ? (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : (c <= 2749 || c == 2768))
                : (c <= 2785 || (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))))
              : (c <= 2832 || (c < 2869
                ? (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : (c <= 2864 || (c >= 2866 && c <= 2867)))
                : (c <= 2873 || (c < 2908
                  ? c == 2877
                  : c <= 2909)))))
            : (c <= 2913 || (c < 2972
              ? (c < 2949
                ? (c < 2929
                  ? (c >= 2918 && c <= 2927)
                  : (c <= 2935 || c == 2947))
                : (c <= 2954 || (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))))
              : (c <= 2972 || (c < 2990
                ? (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))
                : (c <= 3001 || (c < 3046
                  ? c == 3024
                  : c <= 3058)))))))))))
      : (c <= 3084 || (c < 4186
        ? (c < 3461
          ? (c < 3253
            ? (c < 3174
              ? (c < 3133
                ? (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))
                : (c <= 3133 || (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))))
              : (c <= 3183 || (c < 3214
                ? (c < 3200
                  ? (c >= 3192 && c <= 3198)
                  : (c <= 3200 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : c <= 3251)))))
            : (c <= 3257 || (c < 3346
              ? (c < 3302
                ? (c < 3293
                  ? c == 3261
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))
                : (c <= 3311 || (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))))
              : (c <= 3386 || (c < 3416
                ? (c < 3406
                  ? c == 3389
                  : (c <= 3406 || (c >= 3412 && c <= 3414)))
                : (c <= 3425 || (c < 3450
                  ? (c >= 3430 && c <= 3448)
                  : c <= 3455)))))))
          : (c <= 3478 || (c < 3751
            ? (c < 3648
              ? (c < 3520
                ? (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))
                : (c <= 3526 || (c < 3585
                  ? (c >= 3558 && c <= 3567)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))))
              : (c <= 3654 || (c < 3718
                ? (c < 3713
                  ? (c >= 3664 && c <= 3673)
                  : (c <= 3714 || c == 3716))
                : (c <= 3722 || (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : c <= 3749)))))
            : (c <= 3760 || (c < 3872
              ? (c < 3782
                ? (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))
                : (c <= 3782 || (c < 3804
                  ? (c >= 3792 && c <= 3801)
                  : (c <= 3807 || c == 3840))))
              : (c <= 3891 || (c < 4096
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4176
                  ? (c >= 4159 && c <= 4169)
                  : c <= 4181)))))))))
        : (c <= 4189 || (c < 5112
          ? (c < 4698
            ? (c < 4295
              ? (c < 4213
                ? (c < 4197
                  ? c == 4193
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))
                : (c <= 4225 || (c < 4240
                  ? c == 4238
                  : (c <= 4249 || (c >= 4256 && c <= 4293)))))
              : (c <= 4295 || (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))))
            : (c <= 4701 || (c < 4808
              ? (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))
              : (c <= 4822 || (c < 4969
                ? (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))
                : (c <= 4988 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))))))
          : (c <= 5117 || (c < 6128
            ? (c < 5952
              ? (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5870 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))))
              : (c <= 5969 || (c < 6103
                ? (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : (c <= 6000 || (c >= 6016 && c <= 6067)))
                : (c <= 6103 || (c < 6112
                  ? c == 6108
                  : c <= 6121)))))
            : (c <= 6137 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6576
                ? (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6656
                  ? (c >= 6608 && c <= 6618)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43138
      ? (c < 11264
        ? (c < 8118
          ? (c < 7401
            ? (c < 7086
              ? (c < 6917
                ? (c < 6800
                  ? (c >= 6784 && c <= 6793)
                  : (c <= 6809 || c == 6823))
                : (c <= 6963 || (c < 6992
                  ? (c >= 6981 && c <= 6988)
                  : (c <= 7001 || (c >= 7043 && c <= 7072)))))
              : (c <= 7141 || (c < 7296
                ? (c < 7232
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 8008
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8029
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8064
                  ? (c >= 8031 && c <= 8061)
                  : c <= 8116)))))))
          : (c <= 8124 || (c < 8458
            ? (c < 8182
              ? (c < 8144
                ? (c < 8130
                  ? c == 8126
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))
                : (c <= 8147 || (c < 8160
                  ? (c >= 8150 && c <= 8155)
                  : (c <= 8172 || (c >= 8178 && c <= 8180)))))
              : (c <= 8188 || (c < 8336
                ? (c < 8308
                  ? (c >= 8304 && c <= 8305)
                  : (c <= 8313 || (c >= 8319 && c <= 8329)))
                : (c <= 8348 || (c < 8455
                  ? c == 8450
                  : c <= 8455)))))
            : (c <= 8467 || (c < 8508
              ? (c < 8486
                ? (c < 8473
                  ? c == 8469
                  : (c <= 8477 || c == 8484))
                : (c <= 8486 || (c < 8490
                  ? c == 8488
                  : (c <= 8493 || (c >= 8495 && c <= 8505)))))
              : (c <= 8511 || (c < 9312
                ? (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : (c <= 8526 || (c >= 8528 && c <= 8585)))
                : (c <= 9371 || (c < 10102
                  ? (c >= 9450 && c <= 9471)
                  : c <= 10131)))))))))
        : (c <= 11492 || (c < 12704
          ? (c < 11720
            ? (c < 11631
              ? (c < 11520
                ? (c < 11506
                  ? (c >= 11499 && c <= 11502)
                  : (c <= 11507 || c == 11517))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))))
              : (c <= 11631 || (c < 11696
                ? (c < 11680
                  ? (c >= 11648 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : c <= 11718)))))
            : (c <= 11726 || (c < 12353
              ? (c < 12293
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || c == 11823))
                : (c <= 12295 || (c < 12337
                  ? (c >= 12321 && c <= 12329)
                  : (c <= 12341 || (c >= 12344 && c <= 12348)))))
              : (c <= 12438 || (c < 12549
                ? (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : (c <= 12538 || (c >= 12540 && c <= 12543)))
                : (c <= 12591 || (c < 12690
                  ? (c >= 12593 && c <= 12686)
                  : c <= 12693)))))))
          : (c <= 12735 || (c < 42623
            ? (c < 19903
              ? (c < 12881
                ? (c < 12832
                  ? (c >= 12784 && c <= 12799)
                  : (c <= 12841 || (c >= 12872 && c <= 12879)))
                : (c <= 12895 || (c < 12977
                  ? (c >= 12928 && c <= 12937)
                  : (c <= 12991 || c == 13312))))
              : (c <= 19903 || (c < 42240
                ? (c < 40959
                  ? c == 19968
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 42965
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43072
                  ? (c >= 43056 && c <= 43061)
                  : c <= 43123)))))))))))
      : (c <= 43187 || (c < 65345
        ? (c < 43808
          ? (c < 43600
            ? (c < 43396
              ? (c < 43261
                ? (c < 43250
                  ? (c >= 43216 && c <= 43225)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43312
                  ? (c >= 43264 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))))
              : (c <= 43442 || (c < 43520
                ? (c < 43488
                  ? (c >= 43471 && c <= 43481)
                  : (c <= 43492 || (c >= 43494 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43609 || (c < 43714
              ? (c < 43697
                ? (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))
                : (c <= 43697 || (c < 43705
                  ? (c >= 43701 && c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : (c <= 44032 || c == 55203))))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64848
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64829)))))
              : (c <= 64911 || (c < 65142
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : (c <= 65019 || (c >= 65136 && c <= 65140)))
                : (c <= 65276 || (c < 65313
                  ? (c >= 65296 && c <= 65305)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66816
          ? (c < 65930
            ? (c < 65576
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))))
              : (c <= 65594 || (c < 65664
                ? (c < 65599
                  ? (c >= 65596 && c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))
                : (c <= 65786 || (c < 65856
                  ? (c >= 65799 && c <= 65843)
                  : c <= 65912)))))
            : (c <= 65931 || (c < 66464
              ? (c < 66304
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66273 && c <= 66299)))
                : (c <= 66339 || (c < 66384
                  ? (c >= 66349 && c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66720
                ? (c < 66513
                  ? (c >= 66504 && c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67506
            ? (c < 66995
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : (c <= 66977 || (c >= 66979 && c <= 66993)))))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67672
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_bareword_character_set_6(int32_t c) {
  return (c < 6576
    ? (c < 2984
      ? (c < 2308
        ? (c < 1162
          ? (c < 248
            ? (c < '~'
              ? (c < '='
                ? (c < '%'
                  ? c == '!'
                  : (c <= '%' || (c >= '+' && c <= ':')))
                : (c <= '=' || (c < '\\'
                  ? (c >= '@' && c <= 'Z')
                  : (c <= '\\' || (c >= 'a' && c <= 'z')))))
              : (c <= '~' || (c < 185
                ? (c < 178
                  ? c == 170
                  : (c <= 179 || c == 181))
                : (c <= 186 || (c < 192
                  ? (c >= 188 && c <= 190)
                  : (c <= 214 || (c >= 216 && c <= 246)))))))
            : (c <= 705 || (c < 895
              ? (c < 750
                ? (c < 736
                  ? (c >= 710 && c <= 721)
                  : (c <= 740 || c == 748))
                : (c <= 750 || (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))))
              : (c <= 895 || (c < 910
                ? (c < 904
                  ? c == 902
                  : (c <= 906 || c == 908))
                : (c <= 929 || (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : c <= 1153)))))))
          : (c <= 1327 || (c < 1810
            ? (c < 1646
              ? (c < 1488
                ? (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : (c <= 1369 || (c >= 1376 && c <= 1416)))
                : (c <= 1514 || (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1632 && c <= 1641)))))
              : (c <= 1647 || (c < 1774
                ? (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : (c <= 1749 || (c >= 1765 && c <= 1766)))
                : (c <= 1788 || (c < 1808
                  ? c == 1791
                  : c <= 1808)))))
            : (c <= 1839 || (c < 2084
              ? (c < 2036
                ? (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : (c <= 1969 || (c >= 1984 && c <= 2026)))
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : (c <= 2069 || c == 2074))))
              : (c <= 2084 || (c < 2160
                ? (c < 2112
                  ? c == 2088
                  : (c <= 2136 || (c >= 2144 && c <= 2154)))
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2406
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2415 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : (c <= 2444 || (c >= 2447 && c <= 2448)))))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2565
                ? (c < 2548
                  ? (c >= 2534 && c <= 2545)
                  : (c <= 2553 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : (c <= 2600 || (c >= 2602 && c <= 2608)))))
              : (c <= 2611 || (c < 2654
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : (c <= 2617 || (c >= 2649 && c <= 2652)))
                : (c <= 2654 || (c < 2674
                  ? (c >= 2662 && c <= 2671)
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2784
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : (c <= 2749 || c == 2768))))
              : (c <= 2785 || (c < 2831
                ? (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2929
                  ? (c >= 2918 && c <= 2927)
                  : (c <= 2935 || c == 2947))))
              : (c <= 2954 || (c < 2972
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 3976
        ? (c < 3412
          ? (c < 3205
            ? (c < 3133
              ? (c < 3077
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3046 && c <= 3058)))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))))
              : (c <= 3133 || (c < 3174
                ? (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3183 || (c < 3200
                  ? (c >= 3192 && c <= 3198)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3302
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))))
              : (c <= 3311 || (c < 3346
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3716
            ? (c < 3520
              ? (c < 3461
                ? (c < 3430
                  ? (c >= 3416 && c <= 3425)
                  : (c <= 3448 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))))
              : (c <= 3526 || (c < 3648
                ? (c < 3585
                  ? (c >= 3558 && c <= 3567)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3713
                  ? (c >= 3664 && c <= 3673)
                  : c <= 3714)))))
            : (c <= 3716 || (c < 3782
              ? (c < 3751
                ? (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3760 || (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3872
                ? (c < 3804
                  ? (c >= 3792 && c <= 3801)
                  : (c <= 3807 || c == 3840))
                : (c <= 3891 || (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)))))))))
        : (c <= 3980 || (c < 4888
          ? (c < 4348
            ? (c < 4213
              ? (c < 4186
                ? (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : (c <= 4169 || (c >= 4176 && c <= 4181)))
                : (c <= 4189 || (c < 4197
                  ? c == 4193
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))))
              : (c <= 4225 || (c < 4295
                ? (c < 4240
                  ? c == 4238
                  : (c <= 4249 || (c >= 4256 && c <= 4293)))
                : (c <= 4295 || (c < 4304
                  ? c == 4301
                  : c <= 4346)))))
            : (c <= 4680 || (c < 4786
              ? (c < 4698
                ? (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : (c <= 4694 || c == 4696))
                : (c <= 4701 || (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))))
              : (c <= 4789 || (c < 4808
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4969 && c <= 4988)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5870 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6279
              ? (c < 6128
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6112 && c <= 6121)))
                : (c <= 6137 || (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))))
              : (c <= 6312 || (c < 6470
                ? (c < 6320
                  ? c == 6314
                  : (c <= 6389 || (c >= 6400 && c <= 6430)))
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43072
      ? (c < 9450
        ? (c < 8031
          ? (c < 7312
            ? (c < 6981
              ? (c < 6784
                ? (c < 6656
                  ? (c >= 6608 && c <= 6618)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))
                : (c <= 6793 || (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))))
              : (c <= 6988 || (c < 7168
                ? (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : (c <= 7072 || (c >= 7086 && c <= 7141)))
                : (c <= 7203 || (c < 7245
                  ? (c >= 7232 && c <= 7241)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 7960
              ? (c < 7413
                ? (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : (c <= 7404 || (c >= 7406 && c <= 7411)))
                : (c <= 7414 || (c < 7424
                  ? c == 7418
                  : (c <= 7615 || (c >= 7680 && c <= 7957)))))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8160
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : (c <= 8147 || (c >= 8150 && c <= 8155)))))
              : (c <= 8172 || (c < 8308
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || (c >= 8304 && c <= 8305)))
                : (c <= 8313 || (c < 8336
                  ? (c >= 8319 && c <= 8329)
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8490
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : (c <= 8486 || c == 8488))))
              : (c <= 8493 || (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 9312
                  ? (c >= 8528 && c <= 8585)
                  : c <= 9371)))))))))
        : (c <= 9471 || (c < 12593
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11264
                  ? (c >= 10102 && c <= 10131)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11520
                  ? c == 11517
                  : (c <= 11557 || c == 11559))))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))
              : (c <= 12341 || (c < 12449
                ? (c < 12353
                  ? (c >= 12344 && c <= 12348)
                  : (c <= 12438 || (c >= 12445 && c <= 12447)))
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42512
            ? (c < 12977
              ? (c < 12832
                ? (c < 12704
                  ? (c >= 12690 && c <= 12693)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 12841 || (c < 12881
                  ? (c >= 12872 && c <= 12879)
                  : (c <= 12895 || (c >= 12928 && c <= 12937)))))
              : (c <= 12991 || (c < 40959
                ? (c < 19903
                  ? c == 13312
                  : (c <= 19903 || c == 19968))
                : (c <= 42124 || (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : c <= 42508)))))
            : (c <= 42539 || (c < 42963
              ? (c < 42775
                ? (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : (c <= 42653 || (c >= 42656 && c <= 42735)))
                : (c <= 42783 || (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))))
              : (c <= 42963 || (c < 43015
                ? (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))
                : (c <= 43018 || (c < 43056
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43061)))))))))))
      : (c <= 43123 || (c < 65313
        ? (c < 43793
          ? (c < 43588
            ? (c < 43360
              ? (c < 43259
                ? (c < 43216
                  ? (c >= 43138 && c <= 43187)
                  : (c <= 43225 || (c >= 43250 && c <= 43255)))
                : (c <= 43259 || (c < 43264
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))))
              : (c <= 43388 || (c < 43494
                ? (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : (c <= 43481 || (c >= 43488 && c <= 43492)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43560)
                  : c <= 43586)))))
            : (c <= 43595 || (c < 43712
              ? (c < 43646
                ? (c < 43616
                  ? (c >= 43600 && c <= 43609)
                  : (c <= 43638 || c == 43642))
                : (c <= 43695 || (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))))
              : (c <= 43712 || (c < 43762
                ? (c < 43739
                  ? c == 43714
                  : (c <= 43741 || (c >= 43744 && c <= 43754)))
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c >= 43888 && c <= 44002)
                  : (c <= 44025 || c == 44032))))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64467
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : (c <= 64324 || (c >= 64326 && c <= 64433)))))
              : (c <= 64829 || (c < 65136
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65019)))
                : (c <= 65140 || (c < 65296
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65305)))))))))
        : (c <= 65338 || (c < 66776
          ? (c < 65856
            ? (c < 65549
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 65799
                  ? (c >= 65664 && c <= 65786)
                  : c <= 65843)))))
            : (c <= 65912 || (c < 66432
              ? (c < 66273
                ? (c < 66176
                  ? (c >= 65930 && c <= 65931)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))
                : (c <= 66299 || (c < 66349
                  ? (c >= 66304 && c <= 66339)
                  : (c <= 66378 || (c >= 66384 && c <= 66421)))))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))
                : (c <= 66717 || (c < 66736
                  ? (c >= 66720 && c <= 66729)
                  : c <= 66771)))))))
          : (c <= 66811 || (c < 67463
            ? (c < 66979
              ? (c < 66940
                ? (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : (c <= 66915 || (c >= 66928 && c <= 66938)))
                : (c <= 66954 || (c < 66964
                  ? (c >= 66956 && c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67672
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_bareword_character_set_7(int32_t c) {
  return (c < 6576
    ? (c < 2984
      ? (c < 2308
        ? (c < 1162
          ? (c < 248
            ? (c < '~'
              ? (c < '='
                ? (c < '%'
                  ? c == '!'
                  : (c <= '%' || (c >= '+' && c <= ':')))
                : (c <= '=' || (c < '\\'
                  ? (c >= '@' && c <= 'Z')
                  : (c <= '\\' || (c >= 'g' && c <= 'z')))))
              : (c <= '~' || (c < 185
                ? (c < 178
                  ? c == 170
                  : (c <= 179 || c == 181))
                : (c <= 186 || (c < 192
                  ? (c >= 188 && c <= 190)
                  : (c <= 214 || (c >= 216 && c <= 246)))))))
            : (c <= 705 || (c < 895
              ? (c < 750
                ? (c < 736
                  ? (c >= 710 && c <= 721)
                  : (c <= 740 || c == 748))
                : (c <= 750 || (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))))
              : (c <= 895 || (c < 910
                ? (c < 904
                  ? c == 902
                  : (c <= 906 || c == 908))
                : (c <= 929 || (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : c <= 1153)))))))
          : (c <= 1327 || (c < 1810
            ? (c < 1646
              ? (c < 1488
                ? (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : (c <= 1369 || (c >= 1376 && c <= 1416)))
                : (c <= 1514 || (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1632 && c <= 1641)))))
              : (c <= 1647 || (c < 1774
                ? (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : (c <= 1749 || (c >= 1765 && c <= 1766)))
                : (c <= 1788 || (c < 1808
                  ? c == 1791
                  : c <= 1808)))))
            : (c <= 1839 || (c < 2084
              ? (c < 2036
                ? (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : (c <= 1969 || (c >= 1984 && c <= 2026)))
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : (c <= 2069 || c == 2074))))
              : (c <= 2084 || (c < 2160
                ? (c < 2112
                  ? c == 2088
                  : (c <= 2136 || (c >= 2144 && c <= 2154)))
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2406
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2415 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : (c <= 2444 || (c >= 2447 && c <= 2448)))))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2565
                ? (c < 2548
                  ? (c >= 2534 && c <= 2545)
                  : (c <= 2553 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : (c <= 2600 || (c >= 2602 && c <= 2608)))))
              : (c <= 2611 || (c < 2654
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : (c <= 2617 || (c >= 2649 && c <= 2652)))
                : (c <= 2654 || (c < 2674
                  ? (c >= 2662 && c <= 2671)
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2784
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : (c <= 2749 || c == 2768))))
              : (c <= 2785 || (c < 2831
                ? (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2929
                  ? (c >= 2918 && c <= 2927)
                  : (c <= 2935 || c == 2947))))
              : (c <= 2954 || (c < 2972
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 3976
        ? (c < 3412
          ? (c < 3205
            ? (c < 3133
              ? (c < 3077
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3046 && c <= 3058)))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))))
              : (c <= 3133 || (c < 3174
                ? (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3183 || (c < 3200
                  ? (c >= 3192 && c <= 3198)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3302
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))))
              : (c <= 3311 || (c < 3346
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3716
            ? (c < 3520
              ? (c < 3461
                ? (c < 3430
                  ? (c >= 3416 && c <= 3425)
                  : (c <= 3448 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))))
              : (c <= 3526 || (c < 3648
                ? (c < 3585
                  ? (c >= 3558 && c <= 3567)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3713
                  ? (c >= 3664 && c <= 3673)
                  : c <= 3714)))))
            : (c <= 3716 || (c < 3782
              ? (c < 3751
                ? (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3760 || (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3872
                ? (c < 3804
                  ? (c >= 3792 && c <= 3801)
                  : (c <= 3807 || c == 3840))
                : (c <= 3891 || (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)))))))))
        : (c <= 3980 || (c < 4888
          ? (c < 4348
            ? (c < 4213
              ? (c < 4186
                ? (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : (c <= 4169 || (c >= 4176 && c <= 4181)))
                : (c <= 4189 || (c < 4197
                  ? c == 4193
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))))
              : (c <= 4225 || (c < 4295
                ? (c < 4240
                  ? c == 4238
                  : (c <= 4249 || (c >= 4256 && c <= 4293)))
                : (c <= 4295 || (c < 4304
                  ? c == 4301
                  : c <= 4346)))))
            : (c <= 4680 || (c < 4786
              ? (c < 4698
                ? (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : (c <= 4694 || c == 4696))
                : (c <= 4701 || (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))))
              : (c <= 4789 || (c < 4808
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4969 && c <= 4988)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5870 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6279
              ? (c < 6128
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6112 && c <= 6121)))
                : (c <= 6137 || (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))))
              : (c <= 6312 || (c < 6470
                ? (c < 6320
                  ? c == 6314
                  : (c <= 6389 || (c >= 6400 && c <= 6430)))
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43072
      ? (c < 9450
        ? (c < 8031
          ? (c < 7312
            ? (c < 6981
              ? (c < 6784
                ? (c < 6656
                  ? (c >= 6608 && c <= 6618)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))
                : (c <= 6793 || (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))))
              : (c <= 6988 || (c < 7168
                ? (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : (c <= 7072 || (c >= 7086 && c <= 7141)))
                : (c <= 7203 || (c < 7245
                  ? (c >= 7232 && c <= 7241)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 7960
              ? (c < 7413
                ? (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : (c <= 7404 || (c >= 7406 && c <= 7411)))
                : (c <= 7414 || (c < 7424
                  ? c == 7418
                  : (c <= 7615 || (c >= 7680 && c <= 7957)))))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8160
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : (c <= 8147 || (c >= 8150 && c <= 8155)))))
              : (c <= 8172 || (c < 8308
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || (c >= 8304 && c <= 8305)))
                : (c <= 8313 || (c < 8336
                  ? (c >= 8319 && c <= 8329)
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8490
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : (c <= 8486 || c == 8488))))
              : (c <= 8493 || (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 9312
                  ? (c >= 8528 && c <= 8585)
                  : c <= 9371)))))))))
        : (c <= 9471 || (c < 12593
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11264
                  ? (c >= 10102 && c <= 10131)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11520
                  ? c == 11517
                  : (c <= 11557 || c == 11559))))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))
              : (c <= 12341 || (c < 12449
                ? (c < 12353
                  ? (c >= 12344 && c <= 12348)
                  : (c <= 12438 || (c >= 12445 && c <= 12447)))
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42512
            ? (c < 12977
              ? (c < 12832
                ? (c < 12704
                  ? (c >= 12690 && c <= 12693)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 12841 || (c < 12881
                  ? (c >= 12872 && c <= 12879)
                  : (c <= 12895 || (c >= 12928 && c <= 12937)))))
              : (c <= 12991 || (c < 40959
                ? (c < 19903
                  ? c == 13312
                  : (c <= 19903 || c == 19968))
                : (c <= 42124 || (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : c <= 42508)))))
            : (c <= 42539 || (c < 42963
              ? (c < 42775
                ? (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : (c <= 42653 || (c >= 42656 && c <= 42735)))
                : (c <= 42783 || (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))))
              : (c <= 42963 || (c < 43015
                ? (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))
                : (c <= 43018 || (c < 43056
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43061)))))))))))
      : (c <= 43123 || (c < 65313
        ? (c < 43793
          ? (c < 43588
            ? (c < 43360
              ? (c < 43259
                ? (c < 43216
                  ? (c >= 43138 && c <= 43187)
                  : (c <= 43225 || (c >= 43250 && c <= 43255)))
                : (c <= 43259 || (c < 43264
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))))
              : (c <= 43388 || (c < 43494
                ? (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : (c <= 43481 || (c >= 43488 && c <= 43492)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43560)
                  : c <= 43586)))))
            : (c <= 43595 || (c < 43712
              ? (c < 43646
                ? (c < 43616
                  ? (c >= 43600 && c <= 43609)
                  : (c <= 43638 || c == 43642))
                : (c <= 43695 || (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))))
              : (c <= 43712 || (c < 43762
                ? (c < 43739
                  ? c == 43714
                  : (c <= 43741 || (c >= 43744 && c <= 43754)))
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c >= 43888 && c <= 44002)
                  : (c <= 44025 || c == 44032))))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64467
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : (c <= 64324 || (c >= 64326 && c <= 64433)))))
              : (c <= 64829 || (c < 65136
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65019)))
                : (c <= 65140 || (c < 65296
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65305)))))))))
        : (c <= 65338 || (c < 66776
          ? (c < 65856
            ? (c < 65549
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 65799
                  ? (c >= 65664 && c <= 65786)
                  : c <= 65843)))))
            : (c <= 65912 || (c < 66432
              ? (c < 66273
                ? (c < 66176
                  ? (c >= 65930 && c <= 65931)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))
                : (c <= 66299 || (c < 66349
                  ? (c >= 66304 && c <= 66339)
                  : (c <= 66378 || (c >= 66384 && c <= 66421)))))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))
                : (c <= 66717 || (c < 66736
                  ? (c >= 66720 && c <= 66729)
                  : c <= 66771)))))))
          : (c <= 66811 || (c < 67463
            ? (c < 66979
              ? (c < 66940
                ? (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : (c <= 66915 || (c >= 66928 && c <= 66938)))
                : (c <= 66954 || (c < 66964
                  ? (c >= 66956 && c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67672
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_bareword_character_set_8(int32_t c) {
  return (c < 6576
    ? (c < 2979
      ? (c < 2208
        ? (c < 1015
          ? (c < 216
            ? (c < 'b'
              ? (c < '='
                ? (c < '%'
                  ? c == '!'
                  : (c <= '%' || (c >= '+' && c <= ':')))
                : (c <= '=' || (c < '\\'
                  ? (c >= '@' && c <= 'Z')
                  : (c <= '\\' || c == '_'))))
              : (c <= 'z' || (c < 181
                ? (c < 170
                  ? c == '~'
                  : (c <= 170 || (c >= 178 && c <= 179)))
                : (c <= 181 || (c < 188
                  ? (c >= 185 && c <= 186)
                  : (c <= 190 || (c >= 192 && c <= 214)))))))
            : (c <= 246 || (c < 890
              ? (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))))
              : (c <= 893 || (c < 908
                ? (c < 902
                  ? c == 895
                  : (c <= 902 || (c >= 904 && c <= 906)))
                : (c <= 908 || (c < 931
                  ? (c >= 910 && c <= 929)
                  : c <= 1013)))))))
          : (c <= 1153 || (c < 1808
            ? (c < 1632
              ? (c < 1376
                ? (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))))
              : (c <= 1641 || (c < 1765
                ? (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : (c <= 1747 || c == 1749))
                : (c <= 1766 || (c < 1791
                  ? (c >= 1774 && c <= 1788)
                  : c <= 1791)))))
            : (c <= 1808 || (c < 2074
              ? (c < 1984
                ? (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : (c <= 1957 || c == 1969))
                : (c <= 2026 || (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))))
              : (c <= 2074 || (c < 2144
                ? (c < 2088
                  ? c == 2084
                  : (c <= 2088 || (c >= 2112 && c <= 2136)))
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2417
                  ? (c >= 2406 && c <= 2415)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2556
                ? (c < 2534
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || (c >= 2548 && c <= 2553)))
                : (c <= 2556 || (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))))
              : (c <= 2608 || (c < 2649
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2662
                  ? c == 2654
                  : c <= 2671)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2768
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : (c <= 2745 || c == 2749))))
              : (c <= 2768 || (c < 2821
                ? (c < 2790
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2799 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2918
                  ? (c >= 2911 && c <= 2913)
                  : (c <= 2927 || (c >= 2929 && c <= 2935)))))
              : (c <= 2947 || (c < 2969
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 3976
        ? (c < 3412
          ? (c < 3205
            ? (c < 3114
              ? (c < 3046
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3058 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3192
                  ? (c >= 3174 && c <= 3183)
                  : (c <= 3198 || c == 3200))))))
            : (c <= 3212 || (c < 3302
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))))
              : (c <= 3311 || (c < 3346
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3716
            ? (c < 3520
              ? (c < 3461
                ? (c < 3430
                  ? (c >= 3416 && c <= 3425)
                  : (c <= 3448 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))))
              : (c <= 3526 || (c < 3648
                ? (c < 3585
                  ? (c >= 3558 && c <= 3567)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3713
                  ? (c >= 3664 && c <= 3673)
                  : c <= 3714)))))
            : (c <= 3716 || (c < 3782
              ? (c < 3751
                ? (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3760 || (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3872
                ? (c < 3804
                  ? (c >= 3792 && c <= 3801)
                  : (c <= 3807 || c == 3840))
                : (c <= 3891 || (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)))))))))
        : (c <= 3980 || (c < 4888
          ? (c < 4348
            ? (c < 4213
              ? (c < 4186
                ? (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : (c <= 4169 || (c >= 4176 && c <= 4181)))
                : (c <= 4189 || (c < 4197
                  ? c == 4193
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))))
              : (c <= 4225 || (c < 4295
                ? (c < 4240
                  ? c == 4238
                  : (c <= 4249 || (c >= 4256 && c <= 4293)))
                : (c <= 4295 || (c < 4304
                  ? c == 4301
                  : c <= 4346)))))
            : (c <= 4680 || (c < 4786
              ? (c < 4698
                ? (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : (c <= 4694 || c == 4696))
                : (c <= 4701 || (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))))
              : (c <= 4789 || (c < 4808
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4969 && c <= 4988)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5870 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6279
              ? (c < 6128
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6112 && c <= 6121)))
                : (c <= 6137 || (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))))
              : (c <= 6312 || (c < 6470
                ? (c < 6320
                  ? c == 6314
                  : (c <= 6389 || (c >= 6400 && c <= 6430)))
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43072
      ? (c < 9450
        ? (c < 8031
          ? (c < 7312
            ? (c < 6981
              ? (c < 6784
                ? (c < 6656
                  ? (c >= 6608 && c <= 6618)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))
                : (c <= 6793 || (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))))
              : (c <= 6988 || (c < 7168
                ? (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : (c <= 7072 || (c >= 7086 && c <= 7141)))
                : (c <= 7203 || (c < 7245
                  ? (c >= 7232 && c <= 7241)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 7960
              ? (c < 7413
                ? (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : (c <= 7404 || (c >= 7406 && c <= 7411)))
                : (c <= 7414 || (c < 7424
                  ? c == 7418
                  : (c <= 7615 || (c >= 7680 && c <= 7957)))))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8160
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : (c <= 8147 || (c >= 8150 && c <= 8155)))))
              : (c <= 8172 || (c < 8308
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || (c >= 8304 && c <= 8305)))
                : (c <= 8313 || (c < 8336
                  ? (c >= 8319 && c <= 8329)
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8490
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : (c <= 8486 || c == 8488))))
              : (c <= 8493 || (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 9312
                  ? (c >= 8528 && c <= 8585)
                  : c <= 9371)))))))))
        : (c <= 9471 || (c < 12593
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11264
                  ? (c >= 10102 && c <= 10131)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11520
                  ? c == 11517
                  : (c <= 11557 || c == 11559))))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))
              : (c <= 12341 || (c < 12449
                ? (c < 12353
                  ? (c >= 12344 && c <= 12348)
                  : (c <= 12438 || (c >= 12445 && c <= 12447)))
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42512
            ? (c < 12977
              ? (c < 12832
                ? (c < 12704
                  ? (c >= 12690 && c <= 12693)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 12841 || (c < 12881
                  ? (c >= 12872 && c <= 12879)
                  : (c <= 12895 || (c >= 12928 && c <= 12937)))))
              : (c <= 12991 || (c < 40959
                ? (c < 19903
                  ? c == 13312
                  : (c <= 19903 || c == 19968))
                : (c <= 42124 || (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : c <= 42508)))))
            : (c <= 42539 || (c < 42963
              ? (c < 42775
                ? (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : (c <= 42653 || (c >= 42656 && c <= 42735)))
                : (c <= 42783 || (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))))
              : (c <= 42963 || (c < 43015
                ? (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))
                : (c <= 43018 || (c < 43056
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43061)))))))))))
      : (c <= 43123 || (c < 65313
        ? (c < 43793
          ? (c < 43588
            ? (c < 43360
              ? (c < 43259
                ? (c < 43216
                  ? (c >= 43138 && c <= 43187)
                  : (c <= 43225 || (c >= 43250 && c <= 43255)))
                : (c <= 43259 || (c < 43264
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))))
              : (c <= 43388 || (c < 43494
                ? (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : (c <= 43481 || (c >= 43488 && c <= 43492)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43560)
                  : c <= 43586)))))
            : (c <= 43595 || (c < 43712
              ? (c < 43646
                ? (c < 43616
                  ? (c >= 43600 && c <= 43609)
                  : (c <= 43638 || c == 43642))
                : (c <= 43695 || (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))))
              : (c <= 43712 || (c < 43762
                ? (c < 43739
                  ? c == 43714
                  : (c <= 43741 || (c >= 43744 && c <= 43754)))
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c >= 43888 && c <= 44002)
                  : (c <= 44025 || c == 44032))))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64467
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : (c <= 64324 || (c >= 64326 && c <= 64433)))))
              : (c <= 64829 || (c < 65136
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65019)))
                : (c <= 65140 || (c < 65296
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65305)))))))))
        : (c <= 65338 || (c < 66776
          ? (c < 65856
            ? (c < 65549
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 65799
                  ? (c >= 65664 && c <= 65786)
                  : c <= 65843)))))
            : (c <= 65912 || (c < 66432
              ? (c < 66273
                ? (c < 66176
                  ? (c >= 65930 && c <= 65931)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))
                : (c <= 66299 || (c < 66349
                  ? (c >= 66304 && c <= 66339)
                  : (c <= 66378 || (c >= 66384 && c <= 66421)))))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))
                : (c <= 66717 || (c < 66736
                  ? (c >= 66720 && c <= 66729)
                  : c <= 66771)))))))
          : (c <= 66811 || (c < 67463
            ? (c < 66979
              ? (c < 66940
                ? (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : (c <= 66915 || (c >= 66928 && c <= 66938)))
                : (c <= 66954 || (c < 66964
                  ? (c >= 66956 && c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67672
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_bareword_character_set_9(int32_t c) {
  return (c < 6576
    ? (c < 2979
      ? (c < 2208
        ? (c < 1015
          ? (c < 216
            ? (c < 'a'
              ? (c < '='
                ? (c < '%'
                  ? c == '!'
                  : (c <= '%' || (c >= ',' && c <= ':')))
                : (c <= '=' || (c < '\\'
                  ? (c >= '@' && c <= 'Z')
                  : (c <= '\\' || c == '_'))))
              : (c <= 'z' || (c < 181
                ? (c < 170
                  ? c == '~'
                  : (c <= 170 || (c >= 178 && c <= 179)))
                : (c <= 181 || (c < 188
                  ? (c >= 185 && c <= 186)
                  : (c <= 190 || (c >= 192 && c <= 214)))))))
            : (c <= 246 || (c < 890
              ? (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))))
              : (c <= 893 || (c < 908
                ? (c < 902
                  ? c == 895
                  : (c <= 902 || (c >= 904 && c <= 906)))
                : (c <= 908 || (c < 931
                  ? (c >= 910 && c <= 929)
                  : c <= 1013)))))))
          : (c <= 1153 || (c < 1808
            ? (c < 1632
              ? (c < 1376
                ? (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))))
              : (c <= 1641 || (c < 1765
                ? (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : (c <= 1747 || c == 1749))
                : (c <= 1766 || (c < 1791
                  ? (c >= 1774 && c <= 1788)
                  : c <= 1791)))))
            : (c <= 1808 || (c < 2074
              ? (c < 1984
                ? (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : (c <= 1957 || c == 1969))
                : (c <= 2026 || (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))))
              : (c <= 2074 || (c < 2144
                ? (c < 2088
                  ? c == 2084
                  : (c <= 2088 || (c >= 2112 && c <= 2136)))
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2417
                  ? (c >= 2406 && c <= 2415)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2556
                ? (c < 2534
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || (c >= 2548 && c <= 2553)))
                : (c <= 2556 || (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))))
              : (c <= 2608 || (c < 2649
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2662
                  ? c == 2654
                  : c <= 2671)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2768
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : (c <= 2745 || c == 2749))))
              : (c <= 2768 || (c < 2821
                ? (c < 2790
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2799 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2918
                  ? (c >= 2911 && c <= 2913)
                  : (c <= 2927 || (c >= 2929 && c <= 2935)))))
              : (c <= 2947 || (c < 2969
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 3976
        ? (c < 3412
          ? (c < 3205
            ? (c < 3114
              ? (c < 3046
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3058 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3192
                  ? (c >= 3174 && c <= 3183)
                  : (c <= 3198 || c == 3200))))))
            : (c <= 3212 || (c < 3302
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))))
              : (c <= 3311 || (c < 3346
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3716
            ? (c < 3520
              ? (c < 3461
                ? (c < 3430
                  ? (c >= 3416 && c <= 3425)
                  : (c <= 3448 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))))
              : (c <= 3526 || (c < 3648
                ? (c < 3585
                  ? (c >= 3558 && c <= 3567)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3713
                  ? (c >= 3664 && c <= 3673)
                  : c <= 3714)))))
            : (c <= 3716 || (c < 3782
              ? (c < 3751
                ? (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3760 || (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3872
                ? (c < 3804
                  ? (c >= 3792 && c <= 3801)
                  : (c <= 3807 || c == 3840))
                : (c <= 3891 || (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)))))))))
        : (c <= 3980 || (c < 4888
          ? (c < 4348
            ? (c < 4213
              ? (c < 4186
                ? (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : (c <= 4169 || (c >= 4176 && c <= 4181)))
                : (c <= 4189 || (c < 4197
                  ? c == 4193
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))))
              : (c <= 4225 || (c < 4295
                ? (c < 4240
                  ? c == 4238
                  : (c <= 4249 || (c >= 4256 && c <= 4293)))
                : (c <= 4295 || (c < 4304
                  ? c == 4301
                  : c <= 4346)))))
            : (c <= 4680 || (c < 4786
              ? (c < 4698
                ? (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : (c <= 4694 || c == 4696))
                : (c <= 4701 || (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))))
              : (c <= 4789 || (c < 4808
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4969 && c <= 4988)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5870 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6279
              ? (c < 6128
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6112 && c <= 6121)))
                : (c <= 6137 || (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))))
              : (c <= 6312 || (c < 6470
                ? (c < 6320
                  ? c == 6314
                  : (c <= 6389 || (c >= 6400 && c <= 6430)))
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43072
      ? (c < 9450
        ? (c < 8031
          ? (c < 7312
            ? (c < 6981
              ? (c < 6784
                ? (c < 6656
                  ? (c >= 6608 && c <= 6618)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))
                : (c <= 6793 || (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))))
              : (c <= 6988 || (c < 7168
                ? (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : (c <= 7072 || (c >= 7086 && c <= 7141)))
                : (c <= 7203 || (c < 7245
                  ? (c >= 7232 && c <= 7241)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 7960
              ? (c < 7413
                ? (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : (c <= 7404 || (c >= 7406 && c <= 7411)))
                : (c <= 7414 || (c < 7424
                  ? c == 7418
                  : (c <= 7615 || (c >= 7680 && c <= 7957)))))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8160
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : (c <= 8147 || (c >= 8150 && c <= 8155)))))
              : (c <= 8172 || (c < 8308
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || (c >= 8304 && c <= 8305)))
                : (c <= 8313 || (c < 8336
                  ? (c >= 8319 && c <= 8329)
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8490
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : (c <= 8486 || c == 8488))))
              : (c <= 8493 || (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 9312
                  ? (c >= 8528 && c <= 8585)
                  : c <= 9371)))))))))
        : (c <= 9471 || (c < 12593
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11264
                  ? (c >= 10102 && c <= 10131)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11520
                  ? c == 11517
                  : (c <= 11557 || c == 11559))))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))
              : (c <= 12341 || (c < 12449
                ? (c < 12353
                  ? (c >= 12344 && c <= 12348)
                  : (c <= 12438 || (c >= 12445 && c <= 12447)))
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42512
            ? (c < 12977
              ? (c < 12832
                ? (c < 12704
                  ? (c >= 12690 && c <= 12693)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 12841 || (c < 12881
                  ? (c >= 12872 && c <= 12879)
                  : (c <= 12895 || (c >= 12928 && c <= 12937)))))
              : (c <= 12991 || (c < 40959
                ? (c < 19903
                  ? c == 13312
                  : (c <= 19903 || c == 19968))
                : (c <= 42124 || (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : c <= 42508)))))
            : (c <= 42539 || (c < 42963
              ? (c < 42775
                ? (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : (c <= 42653 || (c >= 42656 && c <= 42735)))
                : (c <= 42783 || (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))))
              : (c <= 42963 || (c < 43015
                ? (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))
                : (c <= 43018 || (c < 43056
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43061)))))))))))
      : (c <= 43123 || (c < 65313
        ? (c < 43793
          ? (c < 43588
            ? (c < 43360
              ? (c < 43259
                ? (c < 43216
                  ? (c >= 43138 && c <= 43187)
                  : (c <= 43225 || (c >= 43250 && c <= 43255)))
                : (c <= 43259 || (c < 43264
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))))
              : (c <= 43388 || (c < 43494
                ? (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : (c <= 43481 || (c >= 43488 && c <= 43492)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43560)
                  : c <= 43586)))))
            : (c <= 43595 || (c < 43712
              ? (c < 43646
                ? (c < 43616
                  ? (c >= 43600 && c <= 43609)
                  : (c <= 43638 || c == 43642))
                : (c <= 43695 || (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))))
              : (c <= 43712 || (c < 43762
                ? (c < 43739
                  ? c == 43714
                  : (c <= 43741 || (c >= 43744 && c <= 43754)))
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c >= 43888 && c <= 44002)
                  : (c <= 44025 || c == 44032))))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64467
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : (c <= 64324 || (c >= 64326 && c <= 64433)))))
              : (c <= 64829 || (c < 65136
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65019)))
                : (c <= 65140 || (c < 65296
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65305)))))))))
        : (c <= 65338 || (c < 66776
          ? (c < 65856
            ? (c < 65549
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 65799
                  ? (c >= 65664 && c <= 65786)
                  : c <= 65843)))))
            : (c <= 65912 || (c < 66432
              ? (c < 66273
                ? (c < 66176
                  ? (c >= 65930 && c <= 65931)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))
                : (c <= 66299 || (c < 66349
                  ? (c >= 66304 && c <= 66339)
                  : (c <= 66378 || (c >= 66384 && c <= 66421)))))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))
                : (c <= 66717 || (c < 66736
                  ? (c >= 66720 && c <= 66729)
                  : c <= 66771)))))))
          : (c <= 66811 || (c < 67463
            ? (c < 66979
              ? (c < 66940
                ? (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : (c <= 66915 || (c >= 66928 && c <= 66938)))
                : (c <= 66954 || (c < 66964
                  ? (c >= 66956 && c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67672
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_bareword_character_set_10(int32_t c) {
  return (c < 6576
    ? (c < 2979
      ? (c < 2208
        ? (c < 1015
          ? (c < 216
            ? (c < 'g'
              ? (c < '='
                ? (c < '%'
                  ? c == '!'
                  : (c <= '%' || (c >= '+' && c <= ':')))
                : (c <= '=' || (c < '\\'
                  ? (c >= '@' && c <= 'Z')
                  : (c <= '\\' || c == '_'))))
              : (c <= 'z' || (c < 181
                ? (c < 170
                  ? c == '~'
                  : (c <= 170 || (c >= 178 && c <= 179)))
                : (c <= 181 || (c < 188
                  ? (c >= 185 && c <= 186)
                  : (c <= 190 || (c >= 192 && c <= 214)))))))
            : (c <= 246 || (c < 890
              ? (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))))
              : (c <= 893 || (c < 908
                ? (c < 902
                  ? c == 895
                  : (c <= 902 || (c >= 904 && c <= 906)))
                : (c <= 908 || (c < 931
                  ? (c >= 910 && c <= 929)
                  : c <= 1013)))))))
          : (c <= 1153 || (c < 1808
            ? (c < 1632
              ? (c < 1376
                ? (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))))
              : (c <= 1641 || (c < 1765
                ? (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : (c <= 1747 || c == 1749))
                : (c <= 1766 || (c < 1791
                  ? (c >= 1774 && c <= 1788)
                  : c <= 1791)))))
            : (c <= 1808 || (c < 2074
              ? (c < 1984
                ? (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : (c <= 1957 || c == 1969))
                : (c <= 2026 || (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))))
              : (c <= 2074 || (c < 2144
                ? (c < 2088
                  ? c == 2084
                  : (c <= 2088 || (c >= 2112 && c <= 2136)))
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2417
                  ? (c >= 2406 && c <= 2415)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2556
                ? (c < 2534
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || (c >= 2548 && c <= 2553)))
                : (c <= 2556 || (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))))
              : (c <= 2608 || (c < 2649
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2662
                  ? c == 2654
                  : c <= 2671)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2768
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : (c <= 2745 || c == 2749))))
              : (c <= 2768 || (c < 2821
                ? (c < 2790
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2799 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2918
                  ? (c >= 2911 && c <= 2913)
                  : (c <= 2927 || (c >= 2929 && c <= 2935)))))
              : (c <= 2947 || (c < 2969
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 3976
        ? (c < 3412
          ? (c < 3205
            ? (c < 3114
              ? (c < 3046
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3058 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3192
                  ? (c >= 3174 && c <= 3183)
                  : (c <= 3198 || c == 3200))))))
            : (c <= 3212 || (c < 3302
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))))
              : (c <= 3311 || (c < 3346
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3716
            ? (c < 3520
              ? (c < 3461
                ? (c < 3430
                  ? (c >= 3416 && c <= 3425)
                  : (c <= 3448 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))))
              : (c <= 3526 || (c < 3648
                ? (c < 3585
                  ? (c >= 3558 && c <= 3567)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3713
                  ? (c >= 3664 && c <= 3673)
                  : c <= 3714)))))
            : (c <= 3716 || (c < 3782
              ? (c < 3751
                ? (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3760 || (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3872
                ? (c < 3804
                  ? (c >= 3792 && c <= 3801)
                  : (c <= 3807 || c == 3840))
                : (c <= 3891 || (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)))))))))
        : (c <= 3980 || (c < 4888
          ? (c < 4348
            ? (c < 4213
              ? (c < 4186
                ? (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : (c <= 4169 || (c >= 4176 && c <= 4181)))
                : (c <= 4189 || (c < 4197
                  ? c == 4193
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))))
              : (c <= 4225 || (c < 4295
                ? (c < 4240
                  ? c == 4238
                  : (c <= 4249 || (c >= 4256 && c <= 4293)))
                : (c <= 4295 || (c < 4304
                  ? c == 4301
                  : c <= 4346)))))
            : (c <= 4680 || (c < 4786
              ? (c < 4698
                ? (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : (c <= 4694 || c == 4696))
                : (c <= 4701 || (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))))
              : (c <= 4789 || (c < 4808
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4969 && c <= 4988)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5870 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6279
              ? (c < 6128
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6112 && c <= 6121)))
                : (c <= 6137 || (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))))
              : (c <= 6312 || (c < 6470
                ? (c < 6320
                  ? c == 6314
                  : (c <= 6389 || (c >= 6400 && c <= 6430)))
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43072
      ? (c < 9450
        ? (c < 8031
          ? (c < 7312
            ? (c < 6981
              ? (c < 6784
                ? (c < 6656
                  ? (c >= 6608 && c <= 6618)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))
                : (c <= 6793 || (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))))
              : (c <= 6988 || (c < 7168
                ? (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : (c <= 7072 || (c >= 7086 && c <= 7141)))
                : (c <= 7203 || (c < 7245
                  ? (c >= 7232 && c <= 7241)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 7960
              ? (c < 7413
                ? (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : (c <= 7404 || (c >= 7406 && c <= 7411)))
                : (c <= 7414 || (c < 7424
                  ? c == 7418
                  : (c <= 7615 || (c >= 7680 && c <= 7957)))))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8160
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : (c <= 8147 || (c >= 8150 && c <= 8155)))))
              : (c <= 8172 || (c < 8308
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || (c >= 8304 && c <= 8305)))
                : (c <= 8313 || (c < 8336
                  ? (c >= 8319 && c <= 8329)
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8490
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : (c <= 8486 || c == 8488))))
              : (c <= 8493 || (c < 8526
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))
                : (c <= 8526 || (c < 9312
                  ? (c >= 8528 && c <= 8585)
                  : c <= 9371)))))))))
        : (c <= 9471 || (c < 12593
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11264
                  ? (c >= 10102 && c <= 10131)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11520
                  ? c == 11517
                  : (c <= 11557 || c == 11559))))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))
              : (c <= 12341 || (c < 12449
                ? (c < 12353
                  ? (c >= 12344 && c <= 12348)
                  : (c <= 12438 || (c >= 12445 && c <= 12447)))
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42512
            ? (c < 12977
              ? (c < 12832
                ? (c < 12704
                  ? (c >= 12690 && c <= 12693)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 12841 || (c < 12881
                  ? (c >= 12872 && c <= 12879)
                  : (c <= 12895 || (c >= 12928 && c <= 12937)))))
              : (c <= 12991 || (c < 40959
                ? (c < 19903
                  ? c == 13312
                  : (c <= 19903 || c == 19968))
                : (c <= 42124 || (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : c <= 42508)))))
            : (c <= 42539 || (c < 42963
              ? (c < 42775
                ? (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : (c <= 42653 || (c >= 42656 && c <= 42735)))
                : (c <= 42783 || (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))))
              : (c <= 42963 || (c < 43015
                ? (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : (c <= 43009 || (c >= 43011 && c <= 43013)))
                : (c <= 43018 || (c < 43056
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43061)))))))))))
      : (c <= 43123 || (c < 65313
        ? (c < 43793
          ? (c < 43588
            ? (c < 43360
              ? (c < 43259
                ? (c < 43216
                  ? (c >= 43138 && c <= 43187)
                  : (c <= 43225 || (c >= 43250 && c <= 43255)))
                : (c <= 43259 || (c < 43264
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))))
              : (c <= 43388 || (c < 43494
                ? (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : (c <= 43481 || (c >= 43488 && c <= 43492)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43560)
                  : c <= 43586)))))
            : (c <= 43595 || (c < 43712
              ? (c < 43646
                ? (c < 43616
                  ? (c >= 43600 && c <= 43609)
                  : (c <= 43638 || c == 43642))
                : (c <= 43695 || (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))))
              : (c <= 43712 || (c < 43762
                ? (c < 43739
                  ? c == 43714
                  : (c <= 43741 || (c >= 43744 && c <= 43754)))
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44016
                  ? (c >= 43888 && c <= 44002)
                  : (c <= 44025 || c == 44032))))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64467
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : (c <= 64324 || (c >= 64326 && c <= 64433)))))
              : (c <= 64829 || (c < 65136
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : (c <= 64967 || (c >= 65008 && c <= 65019)))
                : (c <= 65140 || (c < 65296
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65305)))))))))
        : (c <= 65338 || (c < 66776
          ? (c < 65856
            ? (c < 65549
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : (c <= 65500 || (c >= 65536 && c <= 65547)))))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 65799
                  ? (c >= 65664 && c <= 65786)
                  : c <= 65843)))))
            : (c <= 65912 || (c < 66432
              ? (c < 66273
                ? (c < 66176
                  ? (c >= 65930 && c <= 65931)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))
                : (c <= 66299 || (c < 66349
                  ? (c >= 66304 && c <= 66339)
                  : (c <= 66378 || (c >= 66384 && c <= 66421)))))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))
                : (c <= 66717 || (c < 66736
                  ? (c >= 66720 && c <= 66729)
                  : c <= 66771)))))))
          : (c <= 66811 || (c < 67463
            ? (c < 66979
              ? (c < 66940
                ? (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : (c <= 66915 || (c >= 66928 && c <= 66938)))
                : (c <= 66954 || (c < 66964
                  ? (c >= 66956 && c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))))
              : (c <= 66993 || (c < 67392
                ? (c < 67003
                  ? (c >= 66995 && c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))
                : (c <= 67413 || (c < 67456
                  ? (c >= 67424 && c <= 67431)
                  : c <= 67461)))))
            : (c <= 67504 || (c < 67672
              ? (c < 67594
                ? (c < 67584
                  ? (c >= 67506 && c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(33);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == '%') ADVANCE(43);
      if (lookahead == '&') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '<') ADVANCE(44);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == '>') ADVANCE(50);
      if (lookahead == '?') ADVANCE(134);
      if (lookahead == '@') ADVANCE(69);
      if (lookahead == '[') ADVANCE(70);
      if (lookahead == ']') ADVANCE(71);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '|') ADVANCE(61);
      if (lookahead == '}') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(37);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == '&') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '+') ADVANCE(99);
      if (lookahead == '-') ADVANCE(98);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '0') ADVANCE(81);
      if (lookahead == '<') ADVANCE(46);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == '?') ADVANCE(134);
      if (lookahead == 'I') ADVANCE(109);
      if (lookahead == 'N') ADVANCE(103);
      if (lookahead == '[') ADVANCE(70);
      if (lookahead == 's') ADVANCE(116);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '|') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (sym_bareword_character_set_1(lookahead)) ADVANCE(132);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == '&') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '+') ADVANCE(99);
      if (lookahead == '-') ADVANCE(98);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '0') ADVANCE(81);
      if (lookahead == '<') ADVANCE(46);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == '?') ADVANCE(134);
      if (lookahead == 'I') ADVANCE(109);
      if (lookahead == 'N') ADVANCE(103);
      if (lookahead == '[') ADVANCE(135);
      if (lookahead == 's') ADVANCE(116);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '|') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (sym_bareword_character_set_1(lookahead)) ADVANCE(132);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == '&') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == '?') ADVANCE(134);
      if (lookahead == 'I') ADVANCE(109);
      if (lookahead == 'N') ADVANCE(103);
      if (lookahead == '[') ADVANCE(70);
      if (lookahead == ']') ADVANCE(71);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '}') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (sym_bareword_character_set_2(lookahead)) ADVANCE(132);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == '&') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == '?') ADVANCE(134);
      if (lookahead == 'I') ADVANCE(109);
      if (lookahead == 'N') ADVANCE(103);
      if (lookahead == '[') ADVANCE(135);
      if (lookahead == ']') ADVANCE(71);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '}') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (sym_bareword_character_set_2(lookahead)) ADVANCE(132);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == '?') ADVANCE(134);
      if (lookahead == 'I') ADVANCE(109);
      if (lookahead == 'N') ADVANCE(103);
      if (lookahead == '[') ADVANCE(135);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '|') ADVANCE(61);
      if (lookahead == '}') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (sym_bareword_character_set_3(lookahead)) ADVANCE(132);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(132);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(95);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '&') ADVANCE(60);
      if (lookahead == '@') ADVANCE(69);
      if (lookahead == '[') ADVANCE(70);
      if (lookahead == '|') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(37);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '&') ADVANCE(60);
      if (lookahead == '@') ADVANCE(69);
      if (lookahead == '|') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(37);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == 's') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(132);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(97);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == 's') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(48);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 24:
      if (eof) ADVANCE(33);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == '&') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '+') ADVANCE(99);
      if (lookahead == '-') ADVANCE(98);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '0') ADVANCE(81);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '<') ADVANCE(46);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == '?') ADVANCE(134);
      if (lookahead == 'I') ADVANCE(109);
      if (lookahead == 'N') ADVANCE(103);
      if (lookahead == '[') ADVANCE(70);
      if (lookahead == 's') ADVANCE(116);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '|') ADVANCE(61);
      if (lookahead == '}') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (sym_bareword_character_set_5(lookahead)) ADVANCE(132);
      END_STATE();
    case 25:
      if (eof) ADVANCE(33);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == '&') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '+') ADVANCE(99);
      if (lookahead == '-') ADVANCE(98);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '0') ADVANCE(81);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '<') ADVANCE(46);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == '?') ADVANCE(134);
      if (lookahead == 'I') ADVANCE(109);
      if (lookahead == 'N') ADVANCE(103);
      if (lookahead == '[') ADVANCE(135);
      if (lookahead == 's') ADVANCE(116);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '|') ADVANCE(61);
      if (lookahead == '}') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (sym_bareword_character_set_5(lookahead)) ADVANCE(132);
      END_STATE();
    case 26:
      if (eof) ADVANCE(33);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '?') ADVANCE(134);
      if (lookahead == 'I') ADVANCE(109);
      if (lookahead == 'N') ADVANCE(103);
      if (lookahead == '[') ADVANCE(70);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '}') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (sym_bareword_character_set_2(lookahead)) ADVANCE(132);
      END_STATE();
    case 27:
      if (eof) ADVANCE(33);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '?') ADVANCE(134);
      if (lookahead == 'I') ADVANCE(109);
      if (lookahead == 'N') ADVANCE(103);
      if (lookahead == '[') ADVANCE(135);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '}') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (sym_bareword_character_set_2(lookahead)) ADVANCE(132);
      END_STATE();
    case 28:
      if (eof) ADVANCE(33);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '}') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(132);
      END_STATE();
    case 29:
      if (eof) ADVANCE(33);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == '@') ADVANCE(69);
      if (lookahead == '[') ADVANCE(70);
      if (lookahead == '|') ADVANCE(61);
      if (lookahead == '}') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(37);
      END_STATE();
    case 30:
      if (eof) ADVANCE(33);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == '@') ADVANCE(69);
      if (lookahead == '|') ADVANCE(61);
      if (lookahead == '}') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(37);
      END_STATE();
    case 31:
      if (eof) ADVANCE(33);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == '%') ADVANCE(43);
      if (lookahead == '&') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '<') ADVANCE(44);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == '>') ADVANCE(50);
      if (lookahead == '?') ADVANCE(134);
      if (lookahead == '@') ADVANCE(69);
      if (lookahead == '[') ADVANCE(135);
      if (lookahead == ']') ADVANCE(71);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '|') ADVANCE(61);
      if (lookahead == '}') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(37);
      END_STATE();
    case 32:
      if (eof) ADVANCE(33);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == '%') ADVANCE(43);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == '*') ADVANCE(40);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(51);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '}') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(37);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(37);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(133);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(47);
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(47);
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '>') ADVANCE(63);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(62);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LTs);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LT_EQs);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_EQ_EQs);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_BANG_EQs);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_GTs);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_GT_EQs);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_redirection_token1);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_redirection_token2);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_redirection_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(132);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_redirection_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_redirection_token2);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(132);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_lambda_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_QMARK_LPAREN);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == '>') ADVANCE(64);
      if (lookahead == '_') ADVANCE(127);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (sym_bareword_character_set_6(lookahead)) ADVANCE(132);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == '>') ADVANCE(64);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(123);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(125);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(130);
      if (lookahead == '_') ADVANCE(127);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (sym_bareword_character_set_6(lookahead)) ADVANCE(132);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == '_') ADVANCE(127);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (sym_bareword_character_set_6(lookahead)) ADVANCE(132);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(123);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(125);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(130);
      if (lookahead == '_') ADVANCE(127);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (sym_bareword_character_set_6(lookahead)) ADVANCE(132);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == '_') ADVANCE(123);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(84);
      if (sym_bareword_character_set_6(lookahead)) ADVANCE(132);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == '_') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(85);
      if (sym_bareword_character_set_6(lookahead)) ADVANCE(132);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == '_') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      if (sym_bareword_character_set_7(lookahead)) ADVANCE(132);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(128);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (sym_bareword_character_set_6(lookahead)) ADVANCE(132);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(124);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(88);
      if (sym_bareword_character_set_6(lookahead)) ADVANCE(132);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(89);
      if (sym_bareword_character_set_6(lookahead)) ADVANCE(132);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      if (sym_bareword_character_set_7(lookahead)) ADVANCE(132);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (sym_bareword_character_set_6(lookahead)) ADVANCE(132);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(124);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(126);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(131);
      if (lookahead == '_') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (sym_bareword_character_set_6(lookahead)) ADVANCE(132);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(132);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_number);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(132);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(95);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\'') ADVANCE(12);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == '>') ADVANCE(64);
      if (lookahead == 'I') ADVANCE(109);
      if (lookahead == 'N') ADVANCE(103);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(132);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '0') ADVANCE(83);
      if (lookahead == 'I') ADVANCE(109);
      if (lookahead == 'N') ADVANCE(103);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(132);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == '0') ADVANCE(92);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(132);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == '>') ADVANCE(64);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(132);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == 'N') ADVANCE(94);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(132);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == 'a') ADVANCE(102);
      if (sym_bareword_character_set_8(lookahead)) ADVANCE(132);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == 'd') ADVANCE(106);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(132);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == 'd') ADVANCE(107);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(132);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == 'o') ADVANCE(120);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(132);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(121);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(132);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == 'f') ADVANCE(94);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(132);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == 'n') ADVANCE(108);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(132);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == 'n') ADVANCE(101);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(132);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == 'n') ADVANCE(68);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(132);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == 'r') ADVANCE(101);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(132);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == 'r') ADVANCE(68);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(132);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == 'r') ADVANCE(112);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(132);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == 'r') ADVANCE(113);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(132);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == 't') ADVANCE(104);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(132);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == 't') ADVANCE(101);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(132);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == 't') ADVANCE(68);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(132);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == 't') ADVANCE(105);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(132);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == 'u') ADVANCE(117);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(132);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == 'u') ADVANCE(118);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(132);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (sym_bareword_character_set_9(lookahead)) ADVANCE(132);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(84);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(132);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_bareword);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(88);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(132);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_bareword);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(85);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(132);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_bareword);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(89);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(132);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_bareword);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(132);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_bareword);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(132);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_bareword);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(132);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_bareword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      if (sym_bareword_character_set_10(lookahead)) ADVANCE(132);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_bareword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      if (sym_bareword_character_set_10(lookahead)) ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_bareword);
      if (sym_bareword_character_set_4(lookahead)) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '(') ADVANCE(78);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'c') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(2);
      if (lookahead == 'e') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 's') ADVANCE(6);
      if (lookahead == 't') ADVANCE(7);
      if (lookahead == 'u') ADVANCE(8);
      if (lookahead == 'v') ADVANCE(9);
      if (lookahead == 'w') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == 'f') ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == 'm') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 8:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 10:
      if (lookahead == 'h') ADVANCE(23);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 20:
      if (lookahead == 'y') ADVANCE(32);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_del);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(37);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_tmp);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_try);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 36:
      if (lookahead == 'h') ADVANCE(41);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_catch);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 44:
      if (lookahead == 'y') ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_finally);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 32},
  [2] = {.lex_state = 32},
  [3] = {.lex_state = 32},
  [4] = {.lex_state = 32},
  [5] = {.lex_state = 32},
  [6] = {.lex_state = 32},
  [7] = {.lex_state = 32},
  [8] = {.lex_state = 32},
  [9] = {.lex_state = 32},
  [10] = {.lex_state = 32},
  [11] = {.lex_state = 32},
  [12] = {.lex_state = 32},
  [13] = {.lex_state = 32},
  [14] = {.lex_state = 32},
  [15] = {.lex_state = 32},
  [16] = {.lex_state = 32},
  [17] = {.lex_state = 32},
  [18] = {.lex_state = 32},
  [19] = {.lex_state = 32},
  [20] = {.lex_state = 32},
  [21] = {.lex_state = 32},
  [22] = {.lex_state = 32},
  [23] = {.lex_state = 32},
  [24] = {.lex_state = 32},
  [25] = {.lex_state = 32},
  [26] = {.lex_state = 32},
  [27] = {.lex_state = 32},
  [28] = {.lex_state = 32},
  [29] = {.lex_state = 25},
  [30] = {.lex_state = 25},
  [31] = {.lex_state = 25},
  [32] = {.lex_state = 32},
  [33] = {.lex_state = 32},
  [34] = {.lex_state = 32},
  [35] = {.lex_state = 32},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 27},
  [40] = {.lex_state = 27},
  [41] = {.lex_state = 24},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 24},
  [47] = {.lex_state = 24},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 24},
  [51] = {.lex_state = 24},
  [52] = {.lex_state = 24},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 24},
  [58] = {.lex_state = 24},
  [59] = {.lex_state = 24},
  [60] = {.lex_state = 32},
  [61] = {.lex_state = 24},
  [62] = {.lex_state = 24},
  [63] = {.lex_state = 24},
  [64] = {.lex_state = 32},
  [65] = {.lex_state = 24},
  [66] = {.lex_state = 24},
  [67] = {.lex_state = 24},
  [68] = {.lex_state = 25},
  [69] = {.lex_state = 25},
  [70] = {.lex_state = 25},
  [71] = {.lex_state = 25},
  [72] = {.lex_state = 25},
  [73] = {.lex_state = 25},
  [74] = {.lex_state = 25},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 25},
  [77] = {.lex_state = 25},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 32},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 26},
  [131] = {.lex_state = 26},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 26},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 26},
  [137] = {.lex_state = 26},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 26},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 26},
  [146] = {.lex_state = 26},
  [147] = {.lex_state = 26},
  [148] = {.lex_state = 26},
  [149] = {.lex_state = 26},
  [150] = {.lex_state = 26},
  [151] = {.lex_state = 26},
  [152] = {.lex_state = 26},
  [153] = {.lex_state = 27},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 27},
  [156] = {.lex_state = 27},
  [157] = {.lex_state = 3},
  [158] = {.lex_state = 3},
  [159] = {.lex_state = 27},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 3},
  [162] = {.lex_state = 27},
  [163] = {.lex_state = 3},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 3},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 3},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 3},
  [172] = {.lex_state = 4},
  [173] = {.lex_state = 4},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 29},
  [178] = {.lex_state = 29},
  [179] = {.lex_state = 29},
  [180] = {.lex_state = 29},
  [181] = {.lex_state = 29},
  [182] = {.lex_state = 29},
  [183] = {.lex_state = 29},
  [184] = {.lex_state = 29},
  [185] = {.lex_state = 29},
  [186] = {.lex_state = 29},
  [187] = {.lex_state = 29},
  [188] = {.lex_state = 29},
  [189] = {.lex_state = 29},
  [190] = {.lex_state = 25},
  [191] = {.lex_state = 29},
  [192] = {.lex_state = 29},
  [193] = {.lex_state = 29},
  [194] = {.lex_state = 25},
  [195] = {.lex_state = 25},
  [196] = {.lex_state = 29},
  [197] = {.lex_state = 25},
  [198] = {.lex_state = 29},
  [199] = {.lex_state = 28},
  [200] = {.lex_state = 29},
  [201] = {.lex_state = 29},
  [202] = {.lex_state = 29},
  [203] = {.lex_state = 9},
  [204] = {.lex_state = 25},
  [205] = {.lex_state = 25},
  [206] = {.lex_state = 9},
  [207] = {.lex_state = 9},
  [208] = {.lex_state = 29},
  [209] = {.lex_state = 9},
  [210] = {.lex_state = 9},
  [211] = {.lex_state = 9},
  [212] = {.lex_state = 9},
  [213] = {.lex_state = 9},
  [214] = {.lex_state = 29},
  [215] = {.lex_state = 25},
  [216] = {.lex_state = 25},
  [217] = {.lex_state = 25},
  [218] = {.lex_state = 9},
  [219] = {.lex_state = 25},
  [220] = {.lex_state = 25},
  [221] = {.lex_state = 25},
  [222] = {.lex_state = 25},
  [223] = {.lex_state = 9},
  [224] = {.lex_state = 9},
  [225] = {.lex_state = 9},
  [226] = {.lex_state = 9},
  [227] = {.lex_state = 9},
  [228] = {.lex_state = 9},
  [229] = {.lex_state = 9},
  [230] = {.lex_state = 25},
  [231] = {.lex_state = 25},
  [232] = {.lex_state = 25},
  [233] = {.lex_state = 25},
  [234] = {.lex_state = 25},
  [235] = {.lex_state = 25},
  [236] = {.lex_state = 25},
  [237] = {.lex_state = 9},
  [238] = {.lex_state = 25},
  [239] = {.lex_state = 25},
  [240] = {.lex_state = 25},
  [241] = {.lex_state = 25},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 9},
  [247] = {.lex_state = 9},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 9},
  [250] = {.lex_state = 9},
  [251] = {.lex_state = 9},
  [252] = {.lex_state = 9},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 9},
  [255] = {.lex_state = 9},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 9},
  [258] = {.lex_state = 9},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 5},
  [263] = {.lex_state = 25},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 9},
  [271] = {.lex_state = 9},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 11},
  [274] = {.lex_state = 6},
  [275] = {.lex_state = 9},
  [276] = {.lex_state = 9},
  [277] = {.lex_state = 9},
  [278] = {.lex_state = 11},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 25},
  [282] = {.lex_state = 9},
  [283] = {.lex_state = 9},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 9},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 9},
  [288] = {.lex_state = 9},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 9},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 9},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 9},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 9},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 9},
  [310] = {.lex_state = 9},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 9},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 9},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 9},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 9},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 9},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 9},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 9},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 9},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 9},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 9},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LTs] = ACTIONS(1),
    [anon_sym_LT_EQs] = ACTIONS(1),
    [anon_sym_BANG_EQs] = ACTIONS(1),
    [anon_sym_GTs] = ACTIONS(1),
    [anon_sym_GT_EQs] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_tmp] = ACTIONS(1),
    [anon_sym_del] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_elif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_try] = ACTIONS(1),
    [anon_sym_catch] = ACTIONS(1),
    [anon_sym_finally] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_QMARK_LPAREN] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_LBRACK2] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(343),
    [sym__statements] = STATE(342),
    [sym_import] = STATE(234),
    [sym_command] = STATE(217),
    [sym_pipeline] = STATE(234),
    [sym_variable_declaration] = STATE(234),
    [sym_variable_assignment] = STATE(234),
    [sym_temporary_assignment] = STATE(234),
    [sym_variable_deletion] = STATE(234),
    [sym_function_definition] = STATE(234),
    [sym_if] = STATE(234),
    [sym_while] = STATE(234),
    [sym_for] = STATE(234),
    [sym_try] = STATE(234),
    [sym_lambda] = STATE(234),
    [sym_output_capture] = STATE(30),
    [sym_variable] = STATE(30),
    [aux_sym__statements_repeat1] = STATE(28),
    [aux_sym_pipeline_repeat1] = STATE(64),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_use] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_SLASH] = ACTIONS(11),
    [anon_sym_PERCENT] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(7),
    [anon_sym_LT_EQ] = ACTIONS(7),
    [anon_sym_EQ_EQ] = ACTIONS(7),
    [anon_sym_BANG_EQ] = ACTIONS(7),
    [anon_sym_GT] = ACTIONS(7),
    [anon_sym_GT_EQ] = ACTIONS(7),
    [anon_sym_LTs] = ACTIONS(11),
    [anon_sym_LT_EQs] = ACTIONS(11),
    [anon_sym_EQ_EQs] = ACTIONS(11),
    [anon_sym_BANG_EQs] = ACTIONS(11),
    [anon_sym_GTs] = ACTIONS(11),
    [anon_sym_GT_EQs] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(13),
    [anon_sym_set] = ACTIONS(15),
    [anon_sym_tmp] = ACTIONS(17),
    [anon_sym_del] = ACTIONS(19),
    [anon_sym_fn] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_while] = ACTIONS(27),
    [anon_sym_for] = ACTIONS(29),
    [anon_sym_try] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_DOLLAR] = ACTIONS(35),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(28), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(217), 1,
      sym_command,
    STATE(317), 1,
      sym__statements,
    STATE(30), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(234), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [95] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(28), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(217), 1,
      sym_command,
    STATE(312), 1,
      sym__statements,
    STATE(30), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(234), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [190] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(28), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(217), 1,
      sym_command,
    STATE(351), 1,
      sym__statements,
    STATE(30), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(234), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [285] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(28), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(217), 1,
      sym_command,
    STATE(323), 1,
      sym__statements,
    STATE(30), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(234), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [380] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(28), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(217), 1,
      sym_command,
    STATE(304), 1,
      sym__statements,
    STATE(30), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(234), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [475] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(28), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(217), 1,
      sym_command,
    STATE(329), 1,
      sym__statements,
    STATE(30), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(234), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [570] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(28), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(217), 1,
      sym_command,
    STATE(318), 1,
      sym__statements,
    STATE(30), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(234), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [665] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(28), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(217), 1,
      sym_command,
    STATE(294), 1,
      sym__statements,
    STATE(30), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(234), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [760] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(28), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(217), 1,
      sym_command,
    STATE(315), 1,
      sym__statements,
    STATE(30), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(234), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [855] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(28), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(217), 1,
      sym_command,
    STATE(308), 1,
      sym__statements,
    STATE(30), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(234), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [950] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(28), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(217), 1,
      sym_command,
    STATE(291), 1,
      sym__statements,
    STATE(30), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(234), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [1045] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(28), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(217), 1,
      sym_command,
    STATE(335), 1,
      sym__statements,
    STATE(30), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(234), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [1140] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(28), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(217), 1,
      sym_command,
    STATE(325), 1,
      sym__statements,
    STATE(30), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(234), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [1235] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(28), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(217), 1,
      sym_command,
    STATE(344), 1,
      sym__statements,
    STATE(30), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(234), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [1330] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(28), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(217), 1,
      sym_command,
    STATE(305), 1,
      sym__statements,
    STATE(30), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(234), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [1425] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(28), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(217), 1,
      sym_command,
    STATE(302), 1,
      sym__statements,
    STATE(30), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(234), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [1520] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(28), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(217), 1,
      sym_command,
    STATE(299), 1,
      sym__statements,
    STATE(30), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(234), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [1615] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(28), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(217), 1,
      sym_command,
    STATE(292), 1,
      sym__statements,
    STATE(30), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(234), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [1710] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(28), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(217), 1,
      sym_command,
    STATE(347), 1,
      sym__statements,
    STATE(30), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(234), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [1805] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(28), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(217), 1,
      sym_command,
    STATE(349), 1,
      sym__statements,
    STATE(30), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(234), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [1900] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(28), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(217), 1,
      sym_command,
    STATE(350), 1,
      sym__statements,
    STATE(30), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(234), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [1995] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(28), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(217), 1,
      sym_command,
    STATE(332), 1,
      sym__statements,
    STATE(30), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(234), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [2090] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(28), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(217), 1,
      sym_command,
    STATE(327), 1,
      sym__statements,
    STATE(30), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(234), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [2185] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(28), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(217), 1,
      sym_command,
    STATE(290), 1,
      sym__statements,
    STATE(30), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(234), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [2280] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(28), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(217), 1,
      sym_command,
    STATE(311), 1,
      sym__statements,
    STATE(30), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(234), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [2375] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      anon_sym_use,
    ACTIONS(46), 1,
      anon_sym_var,
    ACTIONS(49), 1,
      anon_sym_set,
    ACTIONS(52), 1,
      anon_sym_tmp,
    ACTIONS(55), 1,
      anon_sym_del,
    ACTIONS(58), 1,
      anon_sym_fn,
    ACTIONS(61), 1,
      anon_sym_if,
    ACTIONS(64), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_while,
    ACTIONS(70), 1,
      anon_sym_for,
    ACTIONS(73), 1,
      anon_sym_try,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_DOLLAR,
    STATE(27), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(263), 1,
      sym_command,
    STATE(30), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(37), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(43), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(281), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [2467] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_use,
    ACTIONS(13), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      anon_sym_set,
    ACTIONS(17), 1,
      anon_sym_tmp,
    ACTIONS(19), 1,
      anon_sym_del,
    ACTIONS(21), 1,
      anon_sym_fn,
    ACTIONS(23), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(29), 1,
      anon_sym_for,
    ACTIONS(31), 1,
      anon_sym_try,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(27), 1,
      aux_sym__statements_repeat1,
    STATE(64), 1,
      aux_sym_pipeline_repeat1,
    STATE(215), 1,
      sym_command,
    STATE(30), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
    STATE(222), 12,
      sym_import,
      sym_pipeline,
      sym_variable_declaration,
      sym_variable_assignment,
      sym_temporary_assignment,
      sym_variable_deletion,
      sym_function_definition,
      sym_if,
      sym_while,
      sym_for,
      sym_try,
      sym_lambda,
  [2559] = 16,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_AMP,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(100), 1,
      anon_sym_DOLLAR,
    ACTIONS(104), 1,
      anon_sym_LBRACK2,
    STATE(31), 1,
      aux_sym_command_repeat1,
    STATE(195), 1,
      sym_redirection,
    ACTIONS(82), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(88), 3,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
    ACTIONS(102), 3,
      sym_number,
      sym_string,
      sym_bareword,
    ACTIONS(86), 4,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    STATE(52), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    ACTIONS(90), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
    STATE(73), 6,
      sym_lambda,
      sym_option,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [2628] = 16,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(100), 1,
      anon_sym_DOLLAR,
    ACTIONS(104), 1,
      anon_sym_LBRACK2,
    ACTIONS(110), 1,
      anon_sym_AMP,
    STATE(29), 1,
      aux_sym_command_repeat1,
    STATE(197), 1,
      sym_redirection,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(88), 3,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
    ACTIONS(102), 3,
      sym_number,
      sym_string,
      sym_bareword,
    ACTIONS(108), 4,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    STATE(52), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    ACTIONS(90), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
    STATE(73), 6,
      sym_lambda,
      sym_option,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [2697] = 14,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_AMP,
    ACTIONS(122), 1,
      anon_sym_LBRACE,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(131), 1,
      anon_sym_DOLLAR,
    ACTIONS(137), 1,
      anon_sym_LBRACK2,
    STATE(31), 1,
      aux_sym_command_repeat1,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(116), 3,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
    ACTIONS(134), 3,
      sym_number,
      sym_string,
      sym_bareword,
    STATE(52), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(73), 6,
      sym_lambda,
      sym_option,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
    ACTIONS(114), 9,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [2761] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(144), 13,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
    ACTIONS(142), 18,
      sym_identifier,
      anon_sym_use,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_var,
      anon_sym_set,
      anon_sym_tmp,
      anon_sym_del,
      anon_sym_fn,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_try,
  [2805] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(144), 13,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
    ACTIONS(142), 18,
      sym_identifier,
      anon_sym_use,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_var,
      anon_sym_set,
      anon_sym_tmp,
      anon_sym_del,
      anon_sym_fn,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_try,
  [2849] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 13,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
    ACTIONS(148), 18,
      sym_identifier,
      anon_sym_use,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_var,
      anon_sym_set,
      anon_sym_tmp,
      anon_sym_del,
      anon_sym_fn,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_try,
  [2888] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 13,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
    ACTIONS(142), 18,
      sym_identifier,
      anon_sym_use,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_var,
      anon_sym_set,
      anon_sym_tmp,
      anon_sym_del,
      anon_sym_fn,
      anon_sym_if,
      anon_sym_while,
      anon_sym_for,
      anon_sym_try,
  [2927] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_PIPE,
    ACTIONS(156), 1,
      anon_sym_AMP,
    ACTIONS(160), 1,
      anon_sym_LBRACE,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(166), 1,
      anon_sym_DOLLAR,
    ACTIONS(170), 1,
      sym_string,
    ACTIONS(172), 1,
      anon_sym_STAR_STAR,
    ACTIONS(174), 1,
      anon_sym_LBRACK2,
    STATE(38), 1,
      aux_sym_command_repeat1,
    STATE(280), 1,
      sym_redirection,
    ACTIONS(152), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(154), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(168), 2,
      sym_number,
      sym_bareword,
    ACTIONS(158), 3,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
    STATE(112), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(135), 6,
      sym_lambda,
      sym_option,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [2995] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_PIPE,
    ACTIONS(160), 1,
      anon_sym_LBRACE,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(166), 1,
      anon_sym_DOLLAR,
    ACTIONS(170), 1,
      sym_string,
    ACTIONS(172), 1,
      anon_sym_STAR_STAR,
    ACTIONS(174), 1,
      anon_sym_LBRACK2,
    ACTIONS(176), 1,
      anon_sym_AMP,
    STATE(36), 1,
      aux_sym_command_repeat1,
    STATE(289), 1,
      sym_redirection,
    ACTIONS(152), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(154), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(168), 2,
      sym_number,
      sym_bareword,
    ACTIONS(158), 3,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
    STATE(112), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(135), 6,
      sym_lambda,
      sym_option,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [3063] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_AMP,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DOLLAR,
    ACTIONS(199), 1,
      sym_string,
    ACTIONS(202), 1,
      anon_sym_STAR_STAR,
    ACTIONS(205), 1,
      anon_sym_LBRACK2,
    STATE(38), 1,
      aux_sym_command_repeat1,
    ACTIONS(114), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(178), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(196), 2,
      sym_number,
      sym_bareword,
    ACTIONS(112), 4,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
    STATE(112), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(135), 6,
      sym_lambda,
      sym_option,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [3126] = 13,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(220), 1,
      anon_sym_DOLLAR,
    ACTIONS(224), 1,
      anon_sym_LBRACK2,
    STATE(40), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(208), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(210), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(212), 3,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
    ACTIONS(222), 3,
      sym_number,
      sym_string,
      sym_bareword,
    STATE(133), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(156), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [3180] = 13,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_LBRACE,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(242), 1,
      anon_sym_DOLLAR,
    ACTIONS(248), 1,
      anon_sym_LBRACK2,
    STATE(40), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(226), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(228), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(230), 3,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
    ACTIONS(245), 3,
      sym_number,
      sym_string,
      sym_bareword,
    STATE(133), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(156), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [3234] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_LBRACK,
    STATE(46), 1,
      aux_sym_wildcard_repeat1,
    ACTIONS(251), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(253), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [3271] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_AMP,
    ACTIONS(261), 1,
      anon_sym_RBRACK,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(269), 1,
      anon_sym_DOLLAR,
    ACTIONS(273), 1,
      sym_string,
    ACTIONS(275), 1,
      anon_sym_STAR_STAR,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    STATE(86), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(271), 2,
      sym_number,
      sym_bareword,
    STATE(242), 2,
      sym_pair,
      aux_sym_map_repeat1,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [3330] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_AMP,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(269), 1,
      anon_sym_DOLLAR,
    ACTIONS(273), 1,
      sym_string,
    ACTIONS(275), 1,
      anon_sym_STAR_STAR,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    ACTIONS(279), 1,
      anon_sym_RBRACK,
    STATE(93), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(271), 2,
      sym_number,
      sym_bareword,
    STATE(256), 2,
      sym_pair,
      aux_sym_map_repeat1,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [3389] = 15,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(283), 1,
      anon_sym_LBRACE,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    ACTIONS(287), 1,
      aux_sym_lambda_token1,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(293), 1,
      anon_sym_DOLLAR,
    ACTIONS(295), 1,
      anon_sym_LBRACK2,
    STATE(19), 1,
      sym_parameter_list,
    STATE(91), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(257), 3,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
    ACTIONS(271), 3,
      sym_number,
      sym_string,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [3446] = 15,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(283), 1,
      anon_sym_LBRACE,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(293), 1,
      anon_sym_DOLLAR,
    ACTIONS(295), 1,
      anon_sym_LBRACK2,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
    ACTIONS(299), 1,
      aux_sym_lambda_token1,
    STATE(9), 1,
      sym_parameter_list,
    STATE(79), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(257), 3,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
    ACTIONS(271), 3,
      sym_number,
      sym_string,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [3503] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_LBRACK,
    STATE(51), 1,
      aux_sym_wildcard_repeat1,
    ACTIONS(301), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(303), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [3540] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_LBRACK,
    STATE(50), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(305), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(307), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [3577] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_AMP,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(269), 1,
      anon_sym_DOLLAR,
    ACTIONS(273), 1,
      sym_string,
    ACTIONS(275), 1,
      anon_sym_STAR_STAR,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    ACTIONS(311), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(271), 2,
      sym_number,
      sym_bareword,
    STATE(253), 2,
      sym_pair,
      aux_sym_map_repeat1,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [3636] = 15,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(283), 1,
      anon_sym_LBRACE,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(293), 1,
      anon_sym_DOLLAR,
    ACTIONS(295), 1,
      anon_sym_LBRACK2,
    ACTIONS(313), 1,
      anon_sym_RBRACE,
    ACTIONS(315), 1,
      aux_sym_lambda_token1,
    STATE(8), 1,
      sym_parameter_list,
    STATE(85), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(257), 3,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
    ACTIONS(271), 3,
      sym_number,
      sym_string,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [3693] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_LBRACK,
    STATE(50), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(317), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(319), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [3730] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    STATE(51), 1,
      aux_sym_wildcard_repeat1,
    ACTIONS(324), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(326), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [3767] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(331), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(333), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [3804] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_AMP,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(269), 1,
      anon_sym_DOLLAR,
    ACTIONS(273), 1,
      sym_string,
    ACTIONS(275), 1,
      anon_sym_STAR_STAR,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    ACTIONS(335), 1,
      anon_sym_RBRACK,
    STATE(90), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(271), 2,
      sym_number,
      sym_bareword,
    STATE(243), 2,
      sym_pair,
      aux_sym_map_repeat1,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [3863] = 15,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(283), 1,
      anon_sym_LBRACE,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(293), 1,
      anon_sym_DOLLAR,
    ACTIONS(295), 1,
      anon_sym_LBRACK2,
    ACTIONS(337), 1,
      anon_sym_RBRACE,
    ACTIONS(339), 1,
      aux_sym_lambda_token1,
    STATE(11), 1,
      sym_parameter_list,
    STATE(81), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(257), 3,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
    ACTIONS(271), 3,
      sym_number,
      sym_string,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [3920] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_AMP,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(269), 1,
      anon_sym_DOLLAR,
    ACTIONS(273), 1,
      sym_string,
    ACTIONS(275), 1,
      anon_sym_STAR_STAR,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    ACTIONS(341), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(271), 2,
      sym_number,
      sym_bareword,
    STATE(244), 2,
      sym_pair,
      aux_sym_map_repeat1,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [3979] = 15,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(283), 1,
      anon_sym_LBRACE,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(293), 1,
      anon_sym_DOLLAR,
    ACTIONS(295), 1,
      anon_sym_LBRACK2,
    ACTIONS(343), 1,
      anon_sym_RBRACE,
    ACTIONS(345), 1,
      aux_sym_lambda_token1,
    STATE(16), 1,
      sym_parameter_list,
    STATE(78), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(257), 3,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
    ACTIONS(271), 3,
      sym_number,
      sym_string,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [4036] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(347), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(349), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [4073] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(351), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK,
    ACTIONS(353), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [4105] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(355), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK,
    ACTIONS(357), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [4137] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(368), 1,
      anon_sym_DOLLAR,
    STATE(60), 1,
      aux_sym_pipeline_repeat1,
    STATE(316), 1,
      sym_command,
    STATE(37), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(359), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(362), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
  [4179] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(371), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK,
    ACTIONS(373), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [4211] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(375), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK,
    ACTIONS(377), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [4243] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(379), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK,
    ACTIONS(381), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [4275] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(60), 1,
      aux_sym_pipeline_repeat1,
    STATE(216), 1,
      sym_command,
    STATE(30), 2,
      sym_output_capture,
      sym_variable,
    ACTIONS(7), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(11), 10,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
  [4317] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(383), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK,
    ACTIONS(385), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [4349] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(387), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK,
    ACTIONS(389), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [4381] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(391), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK,
    ACTIONS(393), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [4413] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(395), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(397), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [4444] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(371), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(373), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [4475] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(375), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(377), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [4506] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(399), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(401), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [4537] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(379), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(381), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [4568] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(331), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(333), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [4599] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(403), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(405), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [4630] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_LBRACE,
    ACTIONS(413), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(419), 1,
      anon_sym_DOLLAR,
    ACTIONS(425), 1,
      sym_string,
    ACTIONS(428), 1,
      anon_sym_STAR_STAR,
    ACTIONS(431), 1,
      anon_sym_LBRACK2,
    STATE(75), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(226), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    ACTIONS(407), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(422), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [4683] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(434), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(436), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [4714] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(347), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(349), 21,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [4745] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(269), 1,
      anon_sym_DOLLAR,
    ACTIONS(273), 1,
      sym_string,
    ACTIONS(275), 1,
      anon_sym_STAR_STAR,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    ACTIONS(438), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(271), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [4797] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(269), 1,
      anon_sym_DOLLAR,
    ACTIONS(273), 1,
      sym_string,
    ACTIONS(275), 1,
      anon_sym_STAR_STAR,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    ACTIONS(440), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(271), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [4849] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(269), 1,
      anon_sym_DOLLAR,
    ACTIONS(273), 1,
      sym_string,
    ACTIONS(275), 1,
      anon_sym_STAR_STAR,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    ACTIONS(442), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(271), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [4901] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(269), 1,
      anon_sym_DOLLAR,
    ACTIONS(273), 1,
      sym_string,
    ACTIONS(275), 1,
      anon_sym_STAR_STAR,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    ACTIONS(444), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(271), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [4953] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(269), 1,
      anon_sym_DOLLAR,
    ACTIONS(273), 1,
      sym_string,
    ACTIONS(275), 1,
      anon_sym_STAR_STAR,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    ACTIONS(446), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(271), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [5005] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(269), 1,
      anon_sym_DOLLAR,
    ACTIONS(273), 1,
      sym_string,
    ACTIONS(275), 1,
      anon_sym_STAR_STAR,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    ACTIONS(448), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(271), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [5057] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(269), 1,
      anon_sym_DOLLAR,
    ACTIONS(273), 1,
      sym_string,
    ACTIONS(275), 1,
      anon_sym_STAR_STAR,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    ACTIONS(450), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(271), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [5109] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(269), 1,
      anon_sym_DOLLAR,
    ACTIONS(273), 1,
      sym_string,
    ACTIONS(275), 1,
      anon_sym_STAR_STAR,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    ACTIONS(452), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(271), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [5161] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(269), 1,
      anon_sym_DOLLAR,
    ACTIONS(273), 1,
      sym_string,
    ACTIONS(275), 1,
      anon_sym_STAR_STAR,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    ACTIONS(454), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(271), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [5213] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(269), 1,
      anon_sym_DOLLAR,
    ACTIONS(273), 1,
      sym_string,
    ACTIONS(275), 1,
      anon_sym_STAR_STAR,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    ACTIONS(456), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(271), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [5265] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(269), 1,
      anon_sym_DOLLAR,
    ACTIONS(273), 1,
      sym_string,
    ACTIONS(275), 1,
      anon_sym_STAR_STAR,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    ACTIONS(458), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(271), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [5317] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(269), 1,
      anon_sym_DOLLAR,
    ACTIONS(273), 1,
      sym_string,
    ACTIONS(275), 1,
      anon_sym_STAR_STAR,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    ACTIONS(460), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(271), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [5369] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(269), 1,
      anon_sym_DOLLAR,
    ACTIONS(273), 1,
      sym_string,
    ACTIONS(275), 1,
      anon_sym_STAR_STAR,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    ACTIONS(462), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(271), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [5421] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(269), 1,
      anon_sym_DOLLAR,
    ACTIONS(273), 1,
      sym_string,
    ACTIONS(275), 1,
      anon_sym_STAR_STAR,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    ACTIONS(464), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(271), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [5473] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(269), 1,
      anon_sym_DOLLAR,
    ACTIONS(273), 1,
      sym_string,
    ACTIONS(275), 1,
      anon_sym_STAR_STAR,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    ACTIONS(466), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(271), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [5525] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(269), 1,
      anon_sym_DOLLAR,
    ACTIONS(273), 1,
      sym_string,
    ACTIONS(275), 1,
      anon_sym_STAR_STAR,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    ACTIONS(468), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(271), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [5577] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(269), 1,
      anon_sym_DOLLAR,
    ACTIONS(273), 1,
      sym_string,
    ACTIONS(275), 1,
      anon_sym_STAR_STAR,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    STATE(92), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(271), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [5626] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(269), 1,
      anon_sym_DOLLAR,
    ACTIONS(273), 1,
      sym_string,
    ACTIONS(275), 1,
      anon_sym_STAR_STAR,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    STATE(88), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(271), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [5675] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(269), 1,
      anon_sym_DOLLAR,
    ACTIONS(273), 1,
      sym_string,
    ACTIONS(275), 1,
      anon_sym_STAR_STAR,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    STATE(80), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(271), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [5724] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(269), 1,
      anon_sym_DOLLAR,
    ACTIONS(273), 1,
      sym_string,
    ACTIONS(275), 1,
      anon_sym_STAR_STAR,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    STATE(87), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(271), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [5773] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(269), 1,
      anon_sym_DOLLAR,
    ACTIONS(273), 1,
      sym_string,
    ACTIONS(275), 1,
      anon_sym_STAR_STAR,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    STATE(83), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(271), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [5822] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(269), 1,
      anon_sym_DOLLAR,
    ACTIONS(273), 1,
      sym_string,
    ACTIONS(275), 1,
      anon_sym_STAR_STAR,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    STATE(84), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(271), 2,
      sym_number,
      sym_bareword,
    STATE(165), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(176), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [5871] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_LBRACE,
    ACTIONS(472), 1,
      anon_sym_LPAREN,
    ACTIONS(474), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(476), 1,
      anon_sym_DOLLAR,
    ACTIONS(478), 1,
      sym_string,
    ACTIONS(480), 1,
      anon_sym_STAR_STAR,
    ACTIONS(482), 1,
      anon_sym_LBRACK2,
    STATE(39), 1,
      aux_sym__assignment_repeat1,
    ACTIONS(212), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(222), 2,
      sym_number,
      sym_bareword,
    STATE(133), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(156), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [5920] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 8,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
    ACTIONS(486), 12,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LTs,
      anon_sym_LT_EQs,
      anon_sym_EQ_EQs,
      anon_sym_BANG_EQs,
      anon_sym_GTs,
      anon_sym_GT_EQs,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
  [5948] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(269), 1,
      anon_sym_DOLLAR,
    ACTIONS(275), 1,
      anon_sym_STAR_STAR,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    ACTIONS(490), 1,
      sym_string,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(488), 2,
      sym_number,
      sym_bareword,
    STATE(267), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(330), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [5994] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_LBRACE,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(166), 1,
      anon_sym_DOLLAR,
    ACTIONS(172), 1,
      anon_sym_STAR_STAR,
    ACTIONS(174), 1,
      anon_sym_LBRACK2,
    ACTIONS(494), 1,
      sym_string,
    ACTIONS(152), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(492), 2,
      sym_number,
      sym_bareword,
    STATE(110), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(142), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [6040] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_LBRACK,
    STATE(111), 1,
      aux_sym_wildcard_repeat1,
    ACTIONS(253), 7,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(251), 11,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [6072] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_LBRACE,
    ACTIONS(500), 1,
      anon_sym_LPAREN,
    ACTIONS(502), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(504), 1,
      anon_sym_DOLLAR,
    ACTIONS(508), 1,
      sym_string,
    ACTIONS(510), 1,
      anon_sym_STAR_STAR,
    ACTIONS(512), 1,
      anon_sym_LBRACK2,
    ACTIONS(88), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(506), 2,
      sym_number,
      sym_bareword,
    STATE(57), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(77), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [6118] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(269), 1,
      anon_sym_DOLLAR,
    ACTIONS(275), 1,
      anon_sym_STAR_STAR,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    ACTIONS(516), 1,
      sym_string,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(514), 2,
      sym_number,
      sym_bareword,
    STATE(261), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(333), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [6164] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_LBRACE,
    ACTIONS(522), 1,
      anon_sym_LPAREN,
    ACTIONS(524), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(526), 1,
      anon_sym_DOLLAR,
    ACTIONS(530), 1,
      sym_string,
    ACTIONS(532), 1,
      anon_sym_STAR_STAR,
    ACTIONS(534), 1,
      anon_sym_LBRACK2,
    ACTIONS(518), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(528), 2,
      sym_number,
      sym_bareword,
    STATE(209), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(247), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [6210] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(269), 1,
      anon_sym_DOLLAR,
    ACTIONS(275), 1,
      anon_sym_STAR_STAR,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    ACTIONS(538), 1,
      sym_string,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(536), 2,
      sym_number,
      sym_bareword,
    STATE(269), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(319), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [6256] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(269), 1,
      anon_sym_DOLLAR,
    ACTIONS(275), 1,
      anon_sym_STAR_STAR,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    ACTIONS(542), 1,
      sym_string,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(540), 2,
      sym_number,
      sym_bareword,
    STATE(265), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(306), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [6302] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_LBRACK,
    STATE(113), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(349), 7,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(347), 11,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [6334] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_LBRACK,
    STATE(114), 1,
      aux_sym_wildcard_repeat1,
    ACTIONS(303), 7,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(301), 11,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [6366] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_LBRACK,
    STATE(113), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(333), 7,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(331), 11,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [6398] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_LBRACK,
    STATE(117), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(307), 7,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(305), 11,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [6430] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_LBRACK,
    STATE(114), 1,
      aux_sym_wildcard_repeat1,
    ACTIONS(326), 7,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(324), 11,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [6462] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(269), 1,
      anon_sym_DOLLAR,
    ACTIONS(275), 1,
      anon_sym_STAR_STAR,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    ACTIONS(551), 1,
      sym_string,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(549), 2,
      sym_number,
      sym_bareword,
    STATE(260), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(293), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [6508] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(269), 1,
      anon_sym_DOLLAR,
    ACTIONS(275), 1,
      anon_sym_STAR_STAR,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    ACTIONS(555), 1,
      sym_string,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(553), 2,
      sym_number,
      sym_bareword,
    STATE(266), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(341), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [6554] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_LBRACK,
    STATE(117), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(319), 7,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(317), 11,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [6586] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(269), 1,
      anon_sym_DOLLAR,
    ACTIONS(275), 1,
      anon_sym_STAR_STAR,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    ACTIONS(562), 1,
      sym_string,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(560), 2,
      sym_number,
      sym_bareword,
    STATE(264), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(307), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [6632] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(269), 1,
      anon_sym_DOLLAR,
    ACTIONS(275), 1,
      anon_sym_STAR_STAR,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    ACTIONS(566), 1,
      sym_string,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(564), 2,
      sym_number,
      sym_bareword,
    STATE(245), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(279), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [6678] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(269), 1,
      anon_sym_DOLLAR,
    ACTIONS(275), 1,
      anon_sym_STAR_STAR,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    ACTIONS(570), 1,
      sym_string,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(568), 2,
      sym_number,
      sym_bareword,
    STATE(259), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(298), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [6724] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      anon_sym_QMARK_LPAREN,
    ACTIONS(269), 1,
      anon_sym_DOLLAR,
    ACTIONS(275), 1,
      anon_sym_STAR_STAR,
    ACTIONS(277), 1,
      anon_sym_LBRACK2,
    ACTIONS(574), 1,
      sym_string,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_QMARK,
    ACTIONS(572), 2,
      sym_number,
      sym_bareword,
    STATE(268), 4,
      sym_output_capture,
      sym_variable,
      sym_list,
      sym_map,
    STATE(320), 5,
      sym_lambda,
      sym_indexing,
      sym_braced_list,
      sym_exception_capture,
      sym_wildcard,
  [6770] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 7,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(375), 12,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [6797] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 7,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(379), 12,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [6824] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 7,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(351), 12,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [6851] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 7,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(391), 12,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [6878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 7,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(355), 12,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [6905] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 7,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(383), 12,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [6932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 7,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(371), 12,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [6959] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 7,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(387), 12,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [6986] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_LBRACK,
    STATE(130), 1,
      aux_sym_wildcard_repeat1,
    ACTIONS(324), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(326), 14,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [7016] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_LBRACK,
    STATE(130), 1,
      aux_sym_wildcard_repeat1,
    ACTIONS(301), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(303), 14,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [7046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
    ACTIONS(375), 12,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
      anon_sym_LBRACK2,
  [7072] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_LBRACK,
    STATE(136), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(581), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(583), 14,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [7102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
    ACTIONS(399), 12,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
      anon_sym_LBRACK2,
  [7128] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
    ACTIONS(331), 12,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
      anon_sym_LBRACK2,
  [7154] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_LBRACK,
    STATE(137), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(305), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(307), 14,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [7184] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_LBRACK,
    STATE(137), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(317), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(319), 14,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [7214] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
    ACTIONS(395), 12,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
      anon_sym_LBRACK2,
  [7240] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
    ACTIONS(371), 12,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
      anon_sym_LBRACK2,
  [7266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
    ACTIONS(403), 12,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
      anon_sym_LBRACK2,
  [7292] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
    ACTIONS(434), 12,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
      anon_sym_LBRACK2,
  [7318] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
    ACTIONS(347), 12,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
      anon_sym_LBRACK2,
  [7344] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_LBRACK,
    STATE(131), 1,
      aux_sym_wildcard_repeat1,
    ACTIONS(251), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(253), 14,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [7374] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 6,
      anon_sym_STAR,
      anon_sym_LT,
      anon_sym_GT,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
    ACTIONS(379), 12,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_GT,
      aux_sym_redirection_token1,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
      anon_sym_LBRACK2,
  [7400] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(379), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK,
    ACTIONS(381), 14,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [7425] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(375), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK,
    ACTIONS(377), 14,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [7450] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(355), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK,
    ACTIONS(357), 14,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [7475] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(387), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK,
    ACTIONS(389), 14,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [7500] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(383), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK,
    ACTIONS(385), 14,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [7525] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(371), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK,
    ACTIONS(373), 14,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [7550] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(351), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK,
    ACTIONS(353), 14,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [7575] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(391), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK,
    ACTIONS(393), 14,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [7600] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(399), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(401), 14,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [7624] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
    STATE(154), 1,
      aux_sym_wildcard_repeat1,
    ACTIONS(326), 5,
      anon_sym_STAR,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(324), 9,
      anon_sym_AMP,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [7652] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(434), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(436), 14,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [7676] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(581), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(583), 14,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [7700] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_LBRACK,
    STATE(154), 1,
      aux_sym_wildcard_repeat1,
    ACTIONS(303), 5,
      anon_sym_STAR,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(301), 9,
      anon_sym_AMP,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [7728] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_LBRACK,
    STATE(161), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(307), 5,
      anon_sym_STAR,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(305), 9,
      anon_sym_AMP,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [7756] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(403), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(405), 14,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [7780] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_LBRACK,
    STATE(157), 1,
      aux_sym_wildcard_repeat1,
    ACTIONS(253), 5,
      anon_sym_STAR,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(251), 9,
      anon_sym_AMP,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [7808] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_LBRACK,
    STATE(161), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(319), 5,
      anon_sym_STAR,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(317), 9,
      anon_sym_AMP,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [7836] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(395), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(397), 14,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_number,
      sym_string,
      sym_bareword,
      anon_sym_STAR_STAR,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
  [7860] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 5,
      anon_sym_STAR,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(371), 10,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [7883] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 5,
      anon_sym_STAR,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(383), 10,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [7906] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_LBRACK,
    STATE(158), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(583), 5,
      anon_sym_STAR,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(581), 8,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [7933] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 5,
      anon_sym_STAR,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(375), 10,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [7956] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 5,
      anon_sym_STAR,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(387), 10,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [7979] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 5,
      anon_sym_STAR,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(351), 10,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [8002] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 5,
      anon_sym_STAR,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(391), 10,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [8025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 5,
      anon_sym_STAR,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(355), 10,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [8048] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 5,
      anon_sym_STAR,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
      anon_sym_LBRACK2,
    ACTIONS(379), 10,
      anon_sym_AMP,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
  [8071] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 4,
      anon_sym_STAR,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
    ACTIONS(434), 10,
      anon_sym_AMP,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
      anon_sym_LBRACK2,
  [8093] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 4,
      anon_sym_STAR,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
    ACTIONS(403), 10,
      anon_sym_AMP,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
      anon_sym_LBRACK2,
  [8115] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 4,
      anon_sym_STAR,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
    ACTIONS(395), 10,
      anon_sym_AMP,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
      anon_sym_LBRACK2,
  [8137] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 4,
      anon_sym_STAR,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
    ACTIONS(399), 10,
      anon_sym_AMP,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
      anon_sym_LBRACK2,
  [8159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 4,
      anon_sym_STAR,
      sym_number,
      sym_bareword,
      anon_sym_QMARK,
    ACTIONS(581), 9,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK_LPAREN,
      anon_sym_DOLLAR,
      sym_string,
      anon_sym_STAR_STAR,
      anon_sym_LBRACK2,
  [8180] = 9,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_else,
    ACTIONS(606), 1,
      anon_sym_catch,
    ACTIONS(608), 1,
      anon_sym_finally,
    STATE(184), 1,
      sym_catch,
    STATE(201), 1,
      sym_else,
    STATE(233), 1,
      sym_finally,
    ACTIONS(600), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(602), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8211] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_LBRACK,
    STATE(179), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(610), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(612), 6,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_AT,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8233] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_LBRACK,
    STATE(179), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(317), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(319), 6,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_AT,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8255] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_LBRACK,
    STATE(181), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(619), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(621), 6,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_AT,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8277] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_LBRACK,
    STATE(179), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(623), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(625), 6,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_AT,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8299] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_LBRACK,
    STATE(178), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(623), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(625), 6,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_AT,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8321] = 7,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(629), 1,
      sym_identifier,
    ACTIONS(633), 1,
      anon_sym_AT,
    ACTIONS(635), 1,
      anon_sym_EQ,
    STATE(187), 1,
      aux_sym__assignment_repeat3,
    ACTIONS(627), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(631), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8346] = 7,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_else,
    ACTIONS(608), 1,
      anon_sym_finally,
    STATE(191), 1,
      sym_else,
    STATE(239), 1,
      sym_finally,
    ACTIONS(637), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(639), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8371] = 7,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_else,
    ACTIONS(645), 1,
      anon_sym_elif,
    STATE(188), 1,
      sym_elif,
    STATE(238), 1,
      sym_else,
    ACTIONS(641), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(643), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8396] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(387), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_LBRACK,
    ACTIONS(389), 6,
      anon_sym_SEMI,
      sym_identifier,
      anon_sym_AT,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8413] = 6,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(647), 1,
      sym_identifier,
    ACTIONS(650), 1,
      anon_sym_AT,
    STATE(187), 1,
      aux_sym__assignment_repeat3,
    ACTIONS(623), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(625), 4,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8436] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_else,
    STATE(236), 1,
      sym_else,
    ACTIONS(653), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(655), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8455] = 4,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(659), 1,
      sym_identifier,
    ACTIONS(657), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(661), 4,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8472] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(663), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(665), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8487] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_finally,
    STATE(232), 1,
      sym_finally,
    ACTIONS(667), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(669), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8506] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(671), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(673), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_finally,
      anon_sym_RPAREN,
  [8521] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(677), 1,
      sym_identifier,
    STATE(193), 1,
      aux_sym_variable_deletion_repeat1,
    ACTIONS(675), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(680), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8540] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(682), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(684), 5,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8555] = 4,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_AMP,
    ACTIONS(686), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(688), 4,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8572] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym_identifier,
    STATE(193), 1,
      aux_sym_variable_deletion_repeat1,
    ACTIONS(692), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(696), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8591] = 4,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_AMP,
    ACTIONS(657), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(661), 4,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8608] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_else,
    STATE(241), 1,
      sym_else,
    ACTIONS(700), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(702), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8627] = 4,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(704), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(708), 2,
      sym_string,
      sym_bareword,
    ACTIONS(706), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8644] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_else,
    STATE(235), 1,
      sym_else,
    ACTIONS(710), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(712), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8663] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_finally,
    STATE(239), 1,
      sym_finally,
    ACTIONS(637), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(639), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8682] = 4,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(659), 1,
      sym_identifier,
    ACTIONS(686), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(688), 4,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8699] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      anon_sym_LBRACK,
    STATE(203), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(317), 4,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AT,
  [8715] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(717), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(719), 4,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8729] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(721), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(723), 4,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8743] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_LBRACK,
    STATE(210), 1,
      aux_sym_wildcard_repeat1,
    ACTIONS(301), 4,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AT,
  [8759] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      anon_sym_LBRACK,
    STATE(203), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(305), 4,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AT,
  [8775] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(729), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(731), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_RPAREN,
  [8789] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      anon_sym_LBRACK,
    STATE(207), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(347), 4,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AT,
  [8805] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      anon_sym_LBRACK,
    STATE(210), 1,
      aux_sym_wildcard_repeat1,
    ACTIONS(324), 4,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AT,
  [8821] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      sym_identifier,
    ACTIONS(739), 1,
      anon_sym_AMP,
    ACTIONS(742), 1,
      anon_sym_PIPE,
    ACTIONS(744), 1,
      anon_sym_AT,
    STATE(211), 1,
      aux_sym_parameter_list_repeat1,
    STATE(246), 1,
      sym_option,
  [8843] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_LBRACK,
    STATE(206), 1,
      aux_sym_wildcard_repeat1,
    ACTIONS(251), 4,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AT,
  [8859] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      sym_identifier,
    ACTIONS(749), 1,
      anon_sym_AMP,
    ACTIONS(751), 1,
      anon_sym_PIPE,
    ACTIONS(753), 1,
      anon_sym_AT,
    STATE(211), 1,
      aux_sym_parameter_list_repeat1,
    STATE(246), 1,
      sym_option,
  [8881] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(755), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(757), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_finally,
      anon_sym_RPAREN,
  [8895] = 6,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    ACTIONS(759), 1,
      anon_sym_SEMI,
    ACTIONS(761), 1,
      anon_sym_LF,
    ACTIONS(763), 1,
      anon_sym_PIPE,
    ACTIONS(765), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8915] = 4,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_PIPE,
    ACTIONS(767), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(769), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8931] = 6,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_PIPE,
    ACTIONS(771), 1,
      ts_builtin_sym_end,
    ACTIONS(773), 1,
      anon_sym_SEMI,
    ACTIONS(775), 1,
      anon_sym_LF,
    ACTIONS(777), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8951] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 5,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AT,
      anon_sym_LBRACK,
  [8962] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(779), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(781), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8975] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(783), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(785), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8988] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(787), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(789), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [9001] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    ACTIONS(759), 1,
      anon_sym_SEMI,
    ACTIONS(761), 1,
      anon_sym_LF,
    ACTIONS(765), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [9018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 5,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AT,
      anon_sym_LBRACK,
  [9029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 5,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AT,
      anon_sym_LBRACK,
  [9040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 5,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AT,
      anon_sym_LBRACK,
  [9051] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      sym_identifier,
    ACTIONS(749), 1,
      anon_sym_AMP,
    ACTIONS(753), 1,
      anon_sym_AT,
    STATE(213), 1,
      aux_sym_parameter_list_repeat1,
    STATE(246), 1,
      sym_option,
  [9070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 5,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AT,
      anon_sym_LBRACK,
  [9081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 5,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AT,
      anon_sym_LBRACK,
  [9092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 5,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AT,
      anon_sym_LBRACK,
  [9103] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(791), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(793), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [9116] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(795), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(797), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [9129] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(799), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(801), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [9142] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(637), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(639), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [9155] = 5,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(771), 1,
      ts_builtin_sym_end,
    ACTIONS(773), 1,
      anon_sym_SEMI,
    ACTIONS(775), 1,
      anon_sym_LF,
    ACTIONS(777), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [9172] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(803), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(805), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [9185] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(807), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(809), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [9198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 5,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AT,
      anon_sym_LBRACK,
  [9209] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(653), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(655), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [9222] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(667), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(669), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [9235] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(811), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(813), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [9248] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(815), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(817), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [9261] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_AMP,
    ACTIONS(819), 1,
      anon_sym_RBRACK,
    STATE(248), 2,
      sym_pair,
      aux_sym_map_repeat1,
  [9275] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_AMP,
    ACTIONS(821), 1,
      anon_sym_RBRACK,
    STATE(248), 2,
      sym_pair,
      aux_sym_map_repeat1,
  [9289] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_AMP,
    ACTIONS(823), 1,
      anon_sym_RBRACK,
    STATE(248), 2,
      sym_pair,
      aux_sym_map_repeat1,
  [9303] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_LBRACK,
    STATE(158), 1,
      aux_sym__assignment_repeat2,
    ACTIONS(825), 2,
      anon_sym_AMP,
      anon_sym_RBRACK,
  [9317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 4,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AT,
  [9327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 4,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AT,
  [9337] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_AMP,
    ACTIONS(832), 1,
      anon_sym_RBRACK,
    STATE(248), 2,
      sym_pair,
      aux_sym_map_repeat1,
  [9351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 4,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AT,
  [9361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 4,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AT,
  [9371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 4,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AT,
  [9381] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      sym_identifier,
    ACTIONS(836), 1,
      anon_sym_AT,
    STATE(183), 1,
      aux_sym__assignment_repeat3,
    STATE(219), 1,
      sym__assignment,
  [9397] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_AMP,
    ACTIONS(838), 1,
      anon_sym_RBRACK,
    STATE(248), 2,
      sym_pair,
      aux_sym_map_repeat1,
  [9411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 4,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AT,
  [9421] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      sym_identifier,
    ACTIONS(836), 1,
      anon_sym_AT,
    STATE(183), 1,
      aux_sym__assignment_repeat3,
    STATE(231), 1,
      sym__assignment,
  [9437] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_AMP,
    ACTIONS(840), 1,
      anon_sym_RBRACK,
    STATE(248), 2,
      sym_pair,
      aux_sym_map_repeat1,
  [9451] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      sym_identifier,
    ACTIONS(836), 1,
      anon_sym_AT,
    STATE(183), 1,
      aux_sym__assignment_repeat3,
    STATE(240), 1,
      sym__assignment,
  [9467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 4,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_AT,
  [9477] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_LBRACK,
    ACTIONS(844), 1,
      anon_sym_LBRACE,
    STATE(158), 1,
      aux_sym__assignment_repeat2,
  [9490] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_LBRACK,
    ACTIONS(846), 1,
      anon_sym_RBRACK,
    STATE(158), 1,
      aux_sym__assignment_repeat2,
  [9503] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_LBRACK,
    ACTIONS(848), 1,
      anon_sym_LBRACE,
    STATE(158), 1,
      aux_sym__assignment_repeat2,
  [9516] = 4,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(299), 1,
      aux_sym_lambda_token1,
    STATE(9), 1,
      sym_parameter_list,
  [9529] = 4,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_PIPE,
    ACTIONS(850), 1,
      anon_sym_SEMI,
    ACTIONS(852), 1,
      anon_sym_LF,
  [9542] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_LBRACK,
    ACTIONS(854), 1,
      anon_sym_RBRACK,
    STATE(158), 1,
      aux_sym__assignment_repeat2,
  [9555] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_LBRACK,
    ACTIONS(856), 1,
      anon_sym_RBRACK,
    STATE(158), 1,
      aux_sym__assignment_repeat2,
  [9568] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_LBRACK,
    ACTIONS(858), 1,
      anon_sym_LBRACE,
    STATE(158), 1,
      aux_sym__assignment_repeat2,
  [9581] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_LBRACK,
    ACTIONS(860), 1,
      anon_sym_LBRACE,
    STATE(158), 1,
      aux_sym__assignment_repeat2,
  [9594] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_LBRACK,
    ACTIONS(862), 1,
      anon_sym_RBRACK,
    STATE(158), 1,
      aux_sym__assignment_repeat2,
  [9607] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_LBRACK,
    ACTIONS(864), 1,
      anon_sym_RBRACK,
    STATE(158), 1,
      aux_sym__assignment_repeat2,
  [9620] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      sym_identifier,
    ACTIONS(868), 1,
      anon_sym_AT,
  [9630] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      sym_identifier,
    ACTIONS(872), 1,
      anon_sym_AT,
  [9640] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    STATE(220), 1,
      sym_lambda,
  [9650] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      aux_sym_redirection_token2,
    ACTIONS(876), 1,
      sym_bareword,
  [9660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 2,
      sym_string,
      sym_bareword,
  [9668] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      sym_identifier,
    ACTIONS(882), 1,
      anon_sym_AT,
  [9678] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      sym_identifier,
    STATE(196), 1,
      aux_sym_variable_deletion_repeat1,
  [9688] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_PIPE,
    ACTIONS(886), 1,
      sym_identifier,
  [9698] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      aux_sym_redirection_token2,
    ACTIONS(890), 1,
      sym_bareword,
  [9708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 2,
      anon_sym_AMP,
      anon_sym_RBRACK,
  [9716] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      anon_sym_PIPE,
    ACTIONS(892), 1,
      anon_sym_AMP,
  [9726] = 3,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_SEMI,
    ACTIONS(852), 1,
      anon_sym_LF,
  [9736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      sym_identifier,
    ACTIONS(896), 1,
      anon_sym_AT,
  [9746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      anon_sym_PIPE,
    ACTIONS(886), 1,
      sym_identifier,
  [9756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
  [9764] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      sym_identifier,
    ACTIONS(900), 1,
      anon_sym_AT,
  [9774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
  [9782] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      sym_identifier,
    ACTIONS(904), 1,
      anon_sym_AT,
  [9792] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      sym_identifier,
    ACTIONS(908), 1,
      anon_sym_AT,
  [9802] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_PIPE,
    ACTIONS(910), 1,
      anon_sym_AMP,
  [9812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 1,
      anon_sym_RPAREN,
  [9819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_RPAREN,
  [9826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      anon_sym_RBRACE,
  [9833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_RBRACK,
  [9840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(918), 1,
      anon_sym_RBRACE,
  [9847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      sym_identifier,
  [9854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_PIPE,
  [9861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(922), 1,
      sym_identifier,
  [9868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_LBRACE,
  [9875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 1,
      anon_sym_RPAREN,
  [9882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 1,
      sym_identifier,
  [9889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(928), 1,
      anon_sym_EQ,
  [9896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(930), 1,
      anon_sym_RPAREN,
  [9903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      sym_identifier,
  [9910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(934), 1,
      anon_sym_RBRACE,
  [9917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      anon_sym_RBRACE,
  [9924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_RBRACK,
  [9931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_RBRACK,
  [9938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_RBRACE,
  [9945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(940), 1,
      sym_identifier,
  [9952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(942), 1,
      sym_identifier,
  [9959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(944), 1,
      anon_sym_RPAREN,
  [9966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      anon_sym_RPAREN,
  [9973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(948), 1,
      sym_identifier,
  [9980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 1,
      anon_sym_EQ,
  [9987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(952), 1,
      anon_sym_RPAREN,
  [9994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 1,
      anon_sym_PIPE,
  [10001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(956), 1,
      anon_sym_RPAREN,
  [10008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(958), 1,
      anon_sym_RBRACE,
  [10015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_RBRACK,
  [10022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_RBRACK,
  [10029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(960), 1,
      sym_identifier,
  [10036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(962), 1,
      anon_sym_EQ,
  [10043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(964), 1,
      anon_sym_RPAREN,
  [10050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      sym_identifier,
  [10057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 1,
      anon_sym_RPAREN,
  [10064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(970), 1,
      sym_identifier,
  [10071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(972), 1,
      anon_sym_RPAREN,
  [10078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(974), 1,
      sym_identifier,
  [10085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(976), 1,
      anon_sym_RPAREN,
  [10092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_LBRACE,
  [10099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(978), 1,
      anon_sym_EQ,
  [10106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      anon_sym_RBRACE,
  [10113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      anon_sym_LBRACE,
  [10120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      sym_identifier,
  [10127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_RBRACE,
  [10134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(984), 1,
      anon_sym_LBRACE,
  [10141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(986), 1,
      sym_identifier,
  [10148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(988), 1,
      anon_sym_LBRACE,
  [10155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(990), 1,
      sym_identifier,
  [10162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 1,
      anon_sym_LBRACE,
  [10169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_LBRACE,
  [10176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(994), 1,
      ts_builtin_sym_end,
  [10183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(996), 1,
      ts_builtin_sym_end,
  [10190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(998), 1,
      anon_sym_RBRACE,
  [10197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1000), 1,
      anon_sym_LBRACE,
  [10204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      sym_identifier,
  [10211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1004), 1,
      anon_sym_RBRACE,
  [10218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1006), 1,
      sym_identifier,
  [10225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1008), 1,
      anon_sym_RBRACE,
  [10232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1010), 1,
      anon_sym_RBRACE,
  [10239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1012), 1,
      anon_sym_RBRACE,
  [10246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_PIPE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 95,
  [SMALL_STATE(4)] = 190,
  [SMALL_STATE(5)] = 285,
  [SMALL_STATE(6)] = 380,
  [SMALL_STATE(7)] = 475,
  [SMALL_STATE(8)] = 570,
  [SMALL_STATE(9)] = 665,
  [SMALL_STATE(10)] = 760,
  [SMALL_STATE(11)] = 855,
  [SMALL_STATE(12)] = 950,
  [SMALL_STATE(13)] = 1045,
  [SMALL_STATE(14)] = 1140,
  [SMALL_STATE(15)] = 1235,
  [SMALL_STATE(16)] = 1330,
  [SMALL_STATE(17)] = 1425,
  [SMALL_STATE(18)] = 1520,
  [SMALL_STATE(19)] = 1615,
  [SMALL_STATE(20)] = 1710,
  [SMALL_STATE(21)] = 1805,
  [SMALL_STATE(22)] = 1900,
  [SMALL_STATE(23)] = 1995,
  [SMALL_STATE(24)] = 2090,
  [SMALL_STATE(25)] = 2185,
  [SMALL_STATE(26)] = 2280,
  [SMALL_STATE(27)] = 2375,
  [SMALL_STATE(28)] = 2467,
  [SMALL_STATE(29)] = 2559,
  [SMALL_STATE(30)] = 2628,
  [SMALL_STATE(31)] = 2697,
  [SMALL_STATE(32)] = 2761,
  [SMALL_STATE(33)] = 2805,
  [SMALL_STATE(34)] = 2849,
  [SMALL_STATE(35)] = 2888,
  [SMALL_STATE(36)] = 2927,
  [SMALL_STATE(37)] = 2995,
  [SMALL_STATE(38)] = 3063,
  [SMALL_STATE(39)] = 3126,
  [SMALL_STATE(40)] = 3180,
  [SMALL_STATE(41)] = 3234,
  [SMALL_STATE(42)] = 3271,
  [SMALL_STATE(43)] = 3330,
  [SMALL_STATE(44)] = 3389,
  [SMALL_STATE(45)] = 3446,
  [SMALL_STATE(46)] = 3503,
  [SMALL_STATE(47)] = 3540,
  [SMALL_STATE(48)] = 3577,
  [SMALL_STATE(49)] = 3636,
  [SMALL_STATE(50)] = 3693,
  [SMALL_STATE(51)] = 3730,
  [SMALL_STATE(52)] = 3767,
  [SMALL_STATE(53)] = 3804,
  [SMALL_STATE(54)] = 3863,
  [SMALL_STATE(55)] = 3920,
  [SMALL_STATE(56)] = 3979,
  [SMALL_STATE(57)] = 4036,
  [SMALL_STATE(58)] = 4073,
  [SMALL_STATE(59)] = 4105,
  [SMALL_STATE(60)] = 4137,
  [SMALL_STATE(61)] = 4179,
  [SMALL_STATE(62)] = 4211,
  [SMALL_STATE(63)] = 4243,
  [SMALL_STATE(64)] = 4275,
  [SMALL_STATE(65)] = 4317,
  [SMALL_STATE(66)] = 4349,
  [SMALL_STATE(67)] = 4381,
  [SMALL_STATE(68)] = 4413,
  [SMALL_STATE(69)] = 4444,
  [SMALL_STATE(70)] = 4475,
  [SMALL_STATE(71)] = 4506,
  [SMALL_STATE(72)] = 4537,
  [SMALL_STATE(73)] = 4568,
  [SMALL_STATE(74)] = 4599,
  [SMALL_STATE(75)] = 4630,
  [SMALL_STATE(76)] = 4683,
  [SMALL_STATE(77)] = 4714,
  [SMALL_STATE(78)] = 4745,
  [SMALL_STATE(79)] = 4797,
  [SMALL_STATE(80)] = 4849,
  [SMALL_STATE(81)] = 4901,
  [SMALL_STATE(82)] = 4953,
  [SMALL_STATE(83)] = 5005,
  [SMALL_STATE(84)] = 5057,
  [SMALL_STATE(85)] = 5109,
  [SMALL_STATE(86)] = 5161,
  [SMALL_STATE(87)] = 5213,
  [SMALL_STATE(88)] = 5265,
  [SMALL_STATE(89)] = 5317,
  [SMALL_STATE(90)] = 5369,
  [SMALL_STATE(91)] = 5421,
  [SMALL_STATE(92)] = 5473,
  [SMALL_STATE(93)] = 5525,
  [SMALL_STATE(94)] = 5577,
  [SMALL_STATE(95)] = 5626,
  [SMALL_STATE(96)] = 5675,
  [SMALL_STATE(97)] = 5724,
  [SMALL_STATE(98)] = 5773,
  [SMALL_STATE(99)] = 5822,
  [SMALL_STATE(100)] = 5871,
  [SMALL_STATE(101)] = 5920,
  [SMALL_STATE(102)] = 5948,
  [SMALL_STATE(103)] = 5994,
  [SMALL_STATE(104)] = 6040,
  [SMALL_STATE(105)] = 6072,
  [SMALL_STATE(106)] = 6118,
  [SMALL_STATE(107)] = 6164,
  [SMALL_STATE(108)] = 6210,
  [SMALL_STATE(109)] = 6256,
  [SMALL_STATE(110)] = 6302,
  [SMALL_STATE(111)] = 6334,
  [SMALL_STATE(112)] = 6366,
  [SMALL_STATE(113)] = 6398,
  [SMALL_STATE(114)] = 6430,
  [SMALL_STATE(115)] = 6462,
  [SMALL_STATE(116)] = 6508,
  [SMALL_STATE(117)] = 6554,
  [SMALL_STATE(118)] = 6586,
  [SMALL_STATE(119)] = 6632,
  [SMALL_STATE(120)] = 6678,
  [SMALL_STATE(121)] = 6724,
  [SMALL_STATE(122)] = 6770,
  [SMALL_STATE(123)] = 6797,
  [SMALL_STATE(124)] = 6824,
  [SMALL_STATE(125)] = 6851,
  [SMALL_STATE(126)] = 6878,
  [SMALL_STATE(127)] = 6905,
  [SMALL_STATE(128)] = 6932,
  [SMALL_STATE(129)] = 6959,
  [SMALL_STATE(130)] = 6986,
  [SMALL_STATE(131)] = 7016,
  [SMALL_STATE(132)] = 7046,
  [SMALL_STATE(133)] = 7072,
  [SMALL_STATE(134)] = 7102,
  [SMALL_STATE(135)] = 7128,
  [SMALL_STATE(136)] = 7154,
  [SMALL_STATE(137)] = 7184,
  [SMALL_STATE(138)] = 7214,
  [SMALL_STATE(139)] = 7240,
  [SMALL_STATE(140)] = 7266,
  [SMALL_STATE(141)] = 7292,
  [SMALL_STATE(142)] = 7318,
  [SMALL_STATE(143)] = 7344,
  [SMALL_STATE(144)] = 7374,
  [SMALL_STATE(145)] = 7400,
  [SMALL_STATE(146)] = 7425,
  [SMALL_STATE(147)] = 7450,
  [SMALL_STATE(148)] = 7475,
  [SMALL_STATE(149)] = 7500,
  [SMALL_STATE(150)] = 7525,
  [SMALL_STATE(151)] = 7550,
  [SMALL_STATE(152)] = 7575,
  [SMALL_STATE(153)] = 7600,
  [SMALL_STATE(154)] = 7624,
  [SMALL_STATE(155)] = 7652,
  [SMALL_STATE(156)] = 7676,
  [SMALL_STATE(157)] = 7700,
  [SMALL_STATE(158)] = 7728,
  [SMALL_STATE(159)] = 7756,
  [SMALL_STATE(160)] = 7780,
  [SMALL_STATE(161)] = 7808,
  [SMALL_STATE(162)] = 7836,
  [SMALL_STATE(163)] = 7860,
  [SMALL_STATE(164)] = 7883,
  [SMALL_STATE(165)] = 7906,
  [SMALL_STATE(166)] = 7933,
  [SMALL_STATE(167)] = 7956,
  [SMALL_STATE(168)] = 7979,
  [SMALL_STATE(169)] = 8002,
  [SMALL_STATE(170)] = 8025,
  [SMALL_STATE(171)] = 8048,
  [SMALL_STATE(172)] = 8071,
  [SMALL_STATE(173)] = 8093,
  [SMALL_STATE(174)] = 8115,
  [SMALL_STATE(175)] = 8137,
  [SMALL_STATE(176)] = 8159,
  [SMALL_STATE(177)] = 8180,
  [SMALL_STATE(178)] = 8211,
  [SMALL_STATE(179)] = 8233,
  [SMALL_STATE(180)] = 8255,
  [SMALL_STATE(181)] = 8277,
  [SMALL_STATE(182)] = 8299,
  [SMALL_STATE(183)] = 8321,
  [SMALL_STATE(184)] = 8346,
  [SMALL_STATE(185)] = 8371,
  [SMALL_STATE(186)] = 8396,
  [SMALL_STATE(187)] = 8413,
  [SMALL_STATE(188)] = 8436,
  [SMALL_STATE(189)] = 8455,
  [SMALL_STATE(190)] = 8472,
  [SMALL_STATE(191)] = 8487,
  [SMALL_STATE(192)] = 8506,
  [SMALL_STATE(193)] = 8521,
  [SMALL_STATE(194)] = 8540,
  [SMALL_STATE(195)] = 8555,
  [SMALL_STATE(196)] = 8572,
  [SMALL_STATE(197)] = 8591,
  [SMALL_STATE(198)] = 8608,
  [SMALL_STATE(199)] = 8627,
  [SMALL_STATE(200)] = 8644,
  [SMALL_STATE(201)] = 8663,
  [SMALL_STATE(202)] = 8682,
  [SMALL_STATE(203)] = 8699,
  [SMALL_STATE(204)] = 8715,
  [SMALL_STATE(205)] = 8729,
  [SMALL_STATE(206)] = 8743,
  [SMALL_STATE(207)] = 8759,
  [SMALL_STATE(208)] = 8775,
  [SMALL_STATE(209)] = 8789,
  [SMALL_STATE(210)] = 8805,
  [SMALL_STATE(211)] = 8821,
  [SMALL_STATE(212)] = 8843,
  [SMALL_STATE(213)] = 8859,
  [SMALL_STATE(214)] = 8881,
  [SMALL_STATE(215)] = 8895,
  [SMALL_STATE(216)] = 8915,
  [SMALL_STATE(217)] = 8931,
  [SMALL_STATE(218)] = 8951,
  [SMALL_STATE(219)] = 8962,
  [SMALL_STATE(220)] = 8975,
  [SMALL_STATE(221)] = 8988,
  [SMALL_STATE(222)] = 9001,
  [SMALL_STATE(223)] = 9018,
  [SMALL_STATE(224)] = 9029,
  [SMALL_STATE(225)] = 9040,
  [SMALL_STATE(226)] = 9051,
  [SMALL_STATE(227)] = 9070,
  [SMALL_STATE(228)] = 9081,
  [SMALL_STATE(229)] = 9092,
  [SMALL_STATE(230)] = 9103,
  [SMALL_STATE(231)] = 9116,
  [SMALL_STATE(232)] = 9129,
  [SMALL_STATE(233)] = 9142,
  [SMALL_STATE(234)] = 9155,
  [SMALL_STATE(235)] = 9172,
  [SMALL_STATE(236)] = 9185,
  [SMALL_STATE(237)] = 9198,
  [SMALL_STATE(238)] = 9209,
  [SMALL_STATE(239)] = 9222,
  [SMALL_STATE(240)] = 9235,
  [SMALL_STATE(241)] = 9248,
  [SMALL_STATE(242)] = 9261,
  [SMALL_STATE(243)] = 9275,
  [SMALL_STATE(244)] = 9289,
  [SMALL_STATE(245)] = 9303,
  [SMALL_STATE(246)] = 9317,
  [SMALL_STATE(247)] = 9327,
  [SMALL_STATE(248)] = 9337,
  [SMALL_STATE(249)] = 9351,
  [SMALL_STATE(250)] = 9361,
  [SMALL_STATE(251)] = 9371,
  [SMALL_STATE(252)] = 9381,
  [SMALL_STATE(253)] = 9397,
  [SMALL_STATE(254)] = 9411,
  [SMALL_STATE(255)] = 9421,
  [SMALL_STATE(256)] = 9437,
  [SMALL_STATE(257)] = 9451,
  [SMALL_STATE(258)] = 9467,
  [SMALL_STATE(259)] = 9477,
  [SMALL_STATE(260)] = 9490,
  [SMALL_STATE(261)] = 9503,
  [SMALL_STATE(262)] = 9516,
  [SMALL_STATE(263)] = 9529,
  [SMALL_STATE(264)] = 9542,
  [SMALL_STATE(265)] = 9555,
  [SMALL_STATE(266)] = 9568,
  [SMALL_STATE(267)] = 9581,
  [SMALL_STATE(268)] = 9594,
  [SMALL_STATE(269)] = 9607,
  [SMALL_STATE(270)] = 9620,
  [SMALL_STATE(271)] = 9630,
  [SMALL_STATE(272)] = 9640,
  [SMALL_STATE(273)] = 9650,
  [SMALL_STATE(274)] = 9660,
  [SMALL_STATE(275)] = 9668,
  [SMALL_STATE(276)] = 9678,
  [SMALL_STATE(277)] = 9688,
  [SMALL_STATE(278)] = 9698,
  [SMALL_STATE(279)] = 9708,
  [SMALL_STATE(280)] = 9716,
  [SMALL_STATE(281)] = 9726,
  [SMALL_STATE(282)] = 9736,
  [SMALL_STATE(283)] = 9746,
  [SMALL_STATE(284)] = 9756,
  [SMALL_STATE(285)] = 9764,
  [SMALL_STATE(286)] = 9774,
  [SMALL_STATE(287)] = 9782,
  [SMALL_STATE(288)] = 9792,
  [SMALL_STATE(289)] = 9802,
  [SMALL_STATE(290)] = 9812,
  [SMALL_STATE(291)] = 9819,
  [SMALL_STATE(292)] = 9826,
  [SMALL_STATE(293)] = 9833,
  [SMALL_STATE(294)] = 9840,
  [SMALL_STATE(295)] = 9847,
  [SMALL_STATE(296)] = 9854,
  [SMALL_STATE(297)] = 9861,
  [SMALL_STATE(298)] = 9868,
  [SMALL_STATE(299)] = 9875,
  [SMALL_STATE(300)] = 9882,
  [SMALL_STATE(301)] = 9889,
  [SMALL_STATE(302)] = 9896,
  [SMALL_STATE(303)] = 9903,
  [SMALL_STATE(304)] = 9910,
  [SMALL_STATE(305)] = 9917,
  [SMALL_STATE(306)] = 9924,
  [SMALL_STATE(307)] = 9931,
  [SMALL_STATE(308)] = 9938,
  [SMALL_STATE(309)] = 9945,
  [SMALL_STATE(310)] = 9952,
  [SMALL_STATE(311)] = 9959,
  [SMALL_STATE(312)] = 9966,
  [SMALL_STATE(313)] = 9973,
  [SMALL_STATE(314)] = 9980,
  [SMALL_STATE(315)] = 9987,
  [SMALL_STATE(316)] = 9994,
  [SMALL_STATE(317)] = 10001,
  [SMALL_STATE(318)] = 10008,
  [SMALL_STATE(319)] = 10015,
  [SMALL_STATE(320)] = 10022,
  [SMALL_STATE(321)] = 10029,
  [SMALL_STATE(322)] = 10036,
  [SMALL_STATE(323)] = 10043,
  [SMALL_STATE(324)] = 10050,
  [SMALL_STATE(325)] = 10057,
  [SMALL_STATE(326)] = 10064,
  [SMALL_STATE(327)] = 10071,
  [SMALL_STATE(328)] = 10078,
  [SMALL_STATE(329)] = 10085,
  [SMALL_STATE(330)] = 10092,
  [SMALL_STATE(331)] = 10099,
  [SMALL_STATE(332)] = 10106,
  [SMALL_STATE(333)] = 10113,
  [SMALL_STATE(334)] = 10120,
  [SMALL_STATE(335)] = 10127,
  [SMALL_STATE(336)] = 10134,
  [SMALL_STATE(337)] = 10141,
  [SMALL_STATE(338)] = 10148,
  [SMALL_STATE(339)] = 10155,
  [SMALL_STATE(340)] = 10162,
  [SMALL_STATE(341)] = 10169,
  [SMALL_STATE(342)] = 10176,
  [SMALL_STATE(343)] = 10183,
  [SMALL_STATE(344)] = 10190,
  [SMALL_STATE(345)] = 10197,
  [SMALL_STATE(346)] = 10204,
  [SMALL_STATE(347)] = 10211,
  [SMALL_STATE(348)] = 10218,
  [SMALL_STATE(349)] = 10225,
  [SMALL_STATE(350)] = 10232,
  [SMALL_STATE(351)] = 10239,
  [SMALL_STATE(352)] = 10246,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(30),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(274),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(30),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(257),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(255),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(252),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(276),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(348),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(106),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(262),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(102),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(346),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(345),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(14),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(285),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, .production_id = 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2, .production_id = 3),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, .production_id = 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1, .production_id = 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6), SHIFT_REPEAT(41),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6), SHIFT_REPEAT(309),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6), SHIFT_REPEAT(45),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6), SHIFT_REPEAT(7),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6), SHIFT_REPEAT(26),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6), SHIFT_REPEAT(275),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6), SHIFT_REPEAT(73),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6), SHIFT_REPEAT(53),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 3),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3, .production_id = 11),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, .production_id = 11),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6), SHIFT_REPEAT(104),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6), SHIFT_REPEAT(334),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6), SHIFT_REPEAT(56),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6), SHIFT_REPEAT(5),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6), SHIFT_REPEAT(17),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6), SHIFT_REPEAT(270),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6), SHIFT_REPEAT(135),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6), SHIFT_REPEAT(135),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6), SHIFT_REPEAT(104),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 6), SHIFT_REPEAT(42),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assignment, 3, .production_id = 9),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__assignment, 3, .production_id = 9),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__assignment_repeat1, 2),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__assignment_repeat1, 2),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__assignment_repeat1, 2), SHIFT_REPEAT(143),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__assignment_repeat1, 2), SHIFT_REPEAT(44),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__assignment_repeat1, 2), SHIFT_REPEAT(3),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__assignment_repeat1, 2), SHIFT_REPEAT(12),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__assignment_repeat1, 2), SHIFT_REPEAT(287),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__assignment_repeat1, 2), SHIFT_REPEAT(156),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__assignment_repeat1, 2), SHIFT_REPEAT(55),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wildcard, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 2),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wildcard, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_indexing, 2),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_indexing, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__assignment_repeat2, 2),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__assignment_repeat2, 2),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__assignment_repeat2, 2), SHIFT_REPEAT(97),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_wildcard_repeat1, 2),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_wildcard_repeat1, 2),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_wildcard_repeat1, 2), SHIFT_REPEAT(121),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 1, .production_id = 2),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 1, .production_id = 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 4),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 4),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_wildcard_repeat1, 3, .production_id = 14),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_wildcard_repeat1, 3, .production_id = 14),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(37),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(37),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(18),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2), SHIFT_REPEAT(288),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_capture, 3, .production_id = 8),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_capture, 3, .production_id = 8),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__assignment_repeat2, 3, .production_id = 15),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__assignment_repeat2, 3, .production_id = 15),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 4, .production_id = 13),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 4, .production_id = 13),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_braced_list, 2),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_braced_list, 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_braced_list, 3),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_braced_list, 3),
  [407] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__assignment_repeat1, 2), SHIFT_REPEAT(160),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__assignment_repeat1, 2), SHIFT_REPEAT(54),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__assignment_repeat1, 2), SHIFT_REPEAT(25),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__assignment_repeat1, 2), SHIFT_REPEAT(2),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__assignment_repeat1, 2), SHIFT_REPEAT(282),
  [422] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__assignment_repeat1, 2), SHIFT_REPEAT(176),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__assignment_repeat1, 2), SHIFT_REPEAT(176),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__assignment_repeat1, 2), SHIFT_REPEAT(160),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__assignment_repeat1, 2), SHIFT_REPEAT(48),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exception_capture, 3, .production_id = 8),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exception_capture, 3, .production_id = 8),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pipeline_repeat1, 2),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pipeline_repeat1, 2),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_wildcard_repeat1, 2), SHIFT_REPEAT(109),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__assignment_repeat2, 2), SHIFT_REPEAT(98),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [576] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_wildcard_repeat1, 2), SHIFT_REPEAT(115),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__assignment_repeat1, 1),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__assignment_repeat1, 1),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__assignment_repeat2, 2), SHIFT_REPEAT(94),
  [590] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_wildcard_repeat1, 2), SHIFT_REPEAT(118),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__assignment_repeat2, 2), SHIFT_REPEAT(95),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try, 4, .production_id = 13),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try, 4, .production_id = 13),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__assignment_repeat3, 3),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__assignment_repeat3, 3),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [616] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__assignment_repeat2, 2), SHIFT_REPEAT(99),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__assignment_repeat3, 1),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__assignment_repeat3, 1),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__assignment_repeat3, 2),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__assignment_repeat3, 2),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assignment, 1, .production_id = 4),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__assignment, 1, .production_id = 4),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try, 5, .production_id = 13),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try, 5, .production_id = 13),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 5, .production_id = 16),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 5, .production_id = 16),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [647] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__assignment_repeat3, 2), SHIFT_REPEAT(180),
  [650] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__assignment_repeat3, 2), SHIFT_REPEAT(339),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 6, .production_id = 16),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 6, .production_id = 16),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, .production_id = 1),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2, .production_id = 1),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 2, .production_id = 5),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redirection, 2, .production_id = 5),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try, 6, .production_id = 13),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try, 6, .production_id = 13),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_catch, 5, .production_id = 19),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_catch, 5, .production_id = 19),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_deletion_repeat1, 2),
  [677] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_deletion_repeat1, 2), SHIFT_REPEAT(193),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_deletion_repeat1, 2),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redirection, 2),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redirection, 2),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 3),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3, .production_id = 3),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_deletion, 2),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_deletion, 2),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 5, .production_id = 16),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while, 5, .production_id = 16),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 2),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 6, .production_id = 18),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for, 6, .production_id = 18),
  [714] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__assignment_repeat2, 2), SHIFT_REPEAT(96),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 1),
  [719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3, .production_id = 1),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, .production_id = 3),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 4, .production_id = 3),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elif, 5, .production_id = 16),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elif, 5, .production_id = 16),
  [733] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_wildcard_repeat1, 2), SHIFT_REPEAT(108),
  [736] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, .production_id = 12), SHIFT_REPEAT(246),
  [739] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, .production_id = 12), SHIFT_REPEAT(297),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, .production_id = 12),
  [744] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, .production_id = 12), SHIFT_REPEAT(295),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else, 4, .production_id = 13),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else, 4, .production_id = 13),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statements, 2),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipeline, 2),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 1),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statements, 1),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_temporary_assignment, 2),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_temporary_assignment, 2),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3),
  [789] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 3),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_finally, 4, .production_id = 13),
  [793] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_finally, 4, .production_id = 13),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 2),
  [797] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 2),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try, 7, .production_id = 13),
  [801] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try, 7, .production_id = 13),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 7, .production_id = 18),
  [805] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for, 7, .production_id = 18),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 7, .production_id = 16),
  [809] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 7, .production_id = 16),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2),
  [813] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 2),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 6, .production_id = 16),
  [817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while, 6, .production_id = 16),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 4, .production_id = 17),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 1, .production_id = 7),
  [829] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(310),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, .production_id = 10),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [874] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [876] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [888] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [890] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [996] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_elvish(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
