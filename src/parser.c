#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 257
#define LARGE_STATE_COUNT 16
#define SYMBOL_COUNT 117
#define ALIAS_COUNT 0
#define TOKEN_COUNT 80
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  sym__escape_identity = 1,
  anon_sym_BSLASHt = 2,
  anon_sym_BSLASHr = 3,
  anon_sym_BSLASHn = 4,
  sym__escape_semicolon = 5,
  aux_sym_variable_token1 = 6,
  anon_sym_DOLLAR_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_DOLLARENV = 9,
  anon_sym_LBRACE = 10,
  anon_sym_DOLLARCACHE = 11,
  anon_sym_LBRACK = 12,
  anon_sym_EQ = 13,
  aux_sym_bracket_content_token1 = 14,
  anon_sym_RBRACK = 15,
  anon_sym_DQUOTE = 16,
  aux_sym_quoted_element_token1 = 17,
  anon_sym_BSLASH = 18,
  aux_sym_quoted_element_token2 = 19,
  aux_sym_unquoted_argument_token1 = 20,
  anon_sym_LPAREN = 21,
  aux_sym_if_command_token1 = 22,
  anon_sym_1 = 23,
  anon_sym_ON = 24,
  anon_sym_YES = 25,
  anon_sym_TRUE = 26,
  anon_sym_Y = 27,
  anon_sym_0 = 28,
  anon_sym_OFF = 29,
  anon_sym_NO = 30,
  anon_sym_FALSE = 31,
  anon_sym_N = 32,
  anon_sym_IGNORE = 33,
  anon_sym_NOTFOUND = 34,
  anon_sym_NOT = 35,
  anon_sym_AND = 36,
  anon_sym_OR = 37,
  anon_sym_COMMAND = 38,
  anon_sym_POLICY = 39,
  anon_sym_TARGET = 40,
  anon_sym_TEST = 41,
  anon_sym_DEFINED = 42,
  anon_sym_CACHE = 43,
  anon_sym_ENV = 44,
  anon_sym_IN_LIST = 45,
  anon_sym_EXISTS = 46,
  anon_sym_IS_NEWER_THAN = 47,
  anon_sym_IS_DIRECTORY = 48,
  anon_sym_IS_SYMLINK = 49,
  anon_sym_IS_ABSOLUTE = 50,
  anon_sym_MATCHES = 51,
  anon_sym_LESS = 52,
  anon_sym_GREATER = 53,
  anon_sym_EQUAL = 54,
  anon_sym_LESS_EQUAL = 55,
  anon_sym_GREATER_EQUAL = 56,
  anon_sym_STRLESS = 57,
  anon_sym_STRGREATER = 58,
  anon_sym_STREQUAL = 59,
  anon_sym_STRLESS_EQUAL = 60,
  anon_sym_STRGREATER_EQUAL = 61,
  anon_sym_VERSION_LESS = 62,
  anon_sym_VERSION_GREATER = 63,
  anon_sym_VERSION_EQUAL = 64,
  anon_sym_VERSION_LESS_EQUAL = 65,
  anon_sym_VERSION_GREATER_EQUAL = 66,
  anon_sym_RPAREN = 67,
  anon_sym_IN = 68,
  anon_sym_RANGE = 69,
  anon_sym_ZIP_LISTS = 70,
  anon_sym_LISTS = 71,
  anon_sym_ITEMS = 72,
  sym_if = 73,
  sym_elseif = 74,
  sym_else = 75,
  sym_endif = 76,
  sym_foreach = 77,
  sym_endforeach = 78,
  sym_identifier = 79,
  sym_source_file = 80,
  sym_escape_sequence = 81,
  sym__escape_encoded = 82,
  sym_variable = 83,
  sym_variable_ref = 84,
  sym_normal_var = 85,
  sym_env_var = 86,
  sym_cache_var = 87,
  sym_argument = 88,
  sym_bracket_argument = 89,
  sym__bracket_open = 90,
  sym_bracket_content = 91,
  sym__bracket_close = 92,
  sym_quoted_argument = 93,
  sym_quoted_element = 94,
  sym_unquoted_argument = 95,
  sym_if_command = 96,
  sym_elseif_command = 97,
  sym_else_command = 98,
  sym_endif_command = 99,
  sym_foreach_command = 100,
  sym_endforeach_command = 101,
  sym_normal_command = 102,
  sym_foreach_loop = 103,
  sym_if_condition = 104,
  sym__command_invocation = 105,
  aux_sym_source_file_repeat1 = 106,
  aux_sym_variable_repeat1 = 107,
  aux_sym__bracket_open_repeat1 = 108,
  aux_sym_bracket_content_repeat1 = 109,
  aux_sym_quoted_element_repeat1 = 110,
  aux_sym_unquoted_argument_repeat1 = 111,
  aux_sym_if_command_repeat1 = 112,
  aux_sym_if_command_repeat2 = 113,
  aux_sym_foreach_command_repeat1 = 114,
  aux_sym_normal_command_repeat1 = 115,
  aux_sym_if_condition_repeat1 = 116,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__escape_identity] = "_escape_identity",
  [anon_sym_BSLASHt] = "\\t",
  [anon_sym_BSLASHr] = "\\r",
  [anon_sym_BSLASHn] = "\\n",
  [sym__escape_semicolon] = "_escape_semicolon",
  [aux_sym_variable_token1] = "variable_token1",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOLLARENV] = "$ENV",
  [anon_sym_LBRACE] = "{",
  [anon_sym_DOLLARCACHE] = "$CACHE",
  [anon_sym_LBRACK] = "[",
  [anon_sym_EQ] = "=",
  [aux_sym_bracket_content_token1] = "bracket_content_token1",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_element_token1] = "quoted_element_token1",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_quoted_element_token2] = "quoted_element_token2",
  [aux_sym_unquoted_argument_token1] = "unquoted_argument_token1",
  [anon_sym_LPAREN] = "(",
  [aux_sym_if_command_token1] = "if_command_token1",
  [anon_sym_1] = "1",
  [anon_sym_ON] = "ON",
  [anon_sym_YES] = "YES",
  [anon_sym_TRUE] = "TRUE",
  [anon_sym_Y] = "Y",
  [anon_sym_0] = "0",
  [anon_sym_OFF] = "OFF",
  [anon_sym_NO] = "NO",
  [anon_sym_FALSE] = "FALSE",
  [anon_sym_N] = "N",
  [anon_sym_IGNORE] = "IGNORE",
  [anon_sym_NOTFOUND] = "NOTFOUND",
  [anon_sym_NOT] = "NOT",
  [anon_sym_AND] = "AND",
  [anon_sym_OR] = "OR",
  [anon_sym_COMMAND] = "COMMAND",
  [anon_sym_POLICY] = "POLICY",
  [anon_sym_TARGET] = "TARGET",
  [anon_sym_TEST] = "TEST",
  [anon_sym_DEFINED] = "DEFINED",
  [anon_sym_CACHE] = "CACHE",
  [anon_sym_ENV] = "ENV",
  [anon_sym_IN_LIST] = "IN_LIST",
  [anon_sym_EXISTS] = "EXISTS",
  [anon_sym_IS_NEWER_THAN] = "IS_NEWER_THAN",
  [anon_sym_IS_DIRECTORY] = "IS_DIRECTORY",
  [anon_sym_IS_SYMLINK] = "IS_SYMLINK",
  [anon_sym_IS_ABSOLUTE] = "IS_ABSOLUTE",
  [anon_sym_MATCHES] = "MATCHES",
  [anon_sym_LESS] = "LESS",
  [anon_sym_GREATER] = "GREATER",
  [anon_sym_EQUAL] = "EQUAL",
  [anon_sym_LESS_EQUAL] = "LESS_EQUAL",
  [anon_sym_GREATER_EQUAL] = "GREATER_EQUAL",
  [anon_sym_STRLESS] = "STRLESS",
  [anon_sym_STRGREATER] = "STRGREATER",
  [anon_sym_STREQUAL] = "STREQUAL",
  [anon_sym_STRLESS_EQUAL] = "STRLESS_EQUAL",
  [anon_sym_STRGREATER_EQUAL] = "STRGREATER_EQUAL",
  [anon_sym_VERSION_LESS] = "VERSION_LESS",
  [anon_sym_VERSION_GREATER] = "VERSION_GREATER",
  [anon_sym_VERSION_EQUAL] = "VERSION_EQUAL",
  [anon_sym_VERSION_LESS_EQUAL] = "VERSION_LESS_EQUAL",
  [anon_sym_VERSION_GREATER_EQUAL] = "VERSION_GREATER_EQUAL",
  [anon_sym_RPAREN] = ")",
  [anon_sym_IN] = "IN",
  [anon_sym_RANGE] = "RANGE",
  [anon_sym_ZIP_LISTS] = "ZIP_LISTS",
  [anon_sym_LISTS] = "LISTS",
  [anon_sym_ITEMS] = "ITEMS",
  [sym_if] = "if",
  [sym_elseif] = "elseif",
  [sym_else] = "else",
  [sym_endif] = "endif",
  [sym_foreach] = "foreach",
  [sym_endforeach] = "endforeach",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym_escape_sequence] = "escape_sequence",
  [sym__escape_encoded] = "_escape_encoded",
  [sym_variable] = "variable",
  [sym_variable_ref] = "variable_ref",
  [sym_normal_var] = "normal_var",
  [sym_env_var] = "env_var",
  [sym_cache_var] = "cache_var",
  [sym_argument] = "argument",
  [sym_bracket_argument] = "bracket_argument",
  [sym__bracket_open] = "_bracket_open",
  [sym_bracket_content] = "bracket_content",
  [sym__bracket_close] = "_bracket_close",
  [sym_quoted_argument] = "quoted_argument",
  [sym_quoted_element] = "quoted_element",
  [sym_unquoted_argument] = "unquoted_argument",
  [sym_if_command] = "if_command",
  [sym_elseif_command] = "elseif_command",
  [sym_else_command] = "else_command",
  [sym_endif_command] = "endif_command",
  [sym_foreach_command] = "foreach_command",
  [sym_endforeach_command] = "endforeach_command",
  [sym_normal_command] = "normal_command",
  [sym_foreach_loop] = "foreach_loop",
  [sym_if_condition] = "if_condition",
  [sym__command_invocation] = "_command_invocation",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_variable_repeat1] = "variable_repeat1",
  [aux_sym__bracket_open_repeat1] = "_bracket_open_repeat1",
  [aux_sym_bracket_content_repeat1] = "bracket_content_repeat1",
  [aux_sym_quoted_element_repeat1] = "quoted_element_repeat1",
  [aux_sym_unquoted_argument_repeat1] = "unquoted_argument_repeat1",
  [aux_sym_if_command_repeat1] = "if_command_repeat1",
  [aux_sym_if_command_repeat2] = "if_command_repeat2",
  [aux_sym_foreach_command_repeat1] = "foreach_command_repeat1",
  [aux_sym_normal_command_repeat1] = "normal_command_repeat1",
  [aux_sym_if_condition_repeat1] = "if_condition_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__escape_identity] = sym__escape_identity,
  [anon_sym_BSLASHt] = anon_sym_BSLASHt,
  [anon_sym_BSLASHr] = anon_sym_BSLASHr,
  [anon_sym_BSLASHn] = anon_sym_BSLASHn,
  [sym__escape_semicolon] = sym__escape_semicolon,
  [aux_sym_variable_token1] = aux_sym_variable_token1,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DOLLARENV] = anon_sym_DOLLARENV,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_DOLLARCACHE] = anon_sym_DOLLARCACHE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_bracket_content_token1] = aux_sym_bracket_content_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_element_token1] = aux_sym_quoted_element_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_quoted_element_token2] = aux_sym_quoted_element_token2,
  [aux_sym_unquoted_argument_token1] = aux_sym_unquoted_argument_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_if_command_token1] = aux_sym_if_command_token1,
  [anon_sym_1] = anon_sym_1,
  [anon_sym_ON] = anon_sym_ON,
  [anon_sym_YES] = anon_sym_YES,
  [anon_sym_TRUE] = anon_sym_TRUE,
  [anon_sym_Y] = anon_sym_Y,
  [anon_sym_0] = anon_sym_0,
  [anon_sym_OFF] = anon_sym_OFF,
  [anon_sym_NO] = anon_sym_NO,
  [anon_sym_FALSE] = anon_sym_FALSE,
  [anon_sym_N] = anon_sym_N,
  [anon_sym_IGNORE] = anon_sym_IGNORE,
  [anon_sym_NOTFOUND] = anon_sym_NOTFOUND,
  [anon_sym_NOT] = anon_sym_NOT,
  [anon_sym_AND] = anon_sym_AND,
  [anon_sym_OR] = anon_sym_OR,
  [anon_sym_COMMAND] = anon_sym_COMMAND,
  [anon_sym_POLICY] = anon_sym_POLICY,
  [anon_sym_TARGET] = anon_sym_TARGET,
  [anon_sym_TEST] = anon_sym_TEST,
  [anon_sym_DEFINED] = anon_sym_DEFINED,
  [anon_sym_CACHE] = anon_sym_CACHE,
  [anon_sym_ENV] = anon_sym_ENV,
  [anon_sym_IN_LIST] = anon_sym_IN_LIST,
  [anon_sym_EXISTS] = anon_sym_EXISTS,
  [anon_sym_IS_NEWER_THAN] = anon_sym_IS_NEWER_THAN,
  [anon_sym_IS_DIRECTORY] = anon_sym_IS_DIRECTORY,
  [anon_sym_IS_SYMLINK] = anon_sym_IS_SYMLINK,
  [anon_sym_IS_ABSOLUTE] = anon_sym_IS_ABSOLUTE,
  [anon_sym_MATCHES] = anon_sym_MATCHES,
  [anon_sym_LESS] = anon_sym_LESS,
  [anon_sym_GREATER] = anon_sym_GREATER,
  [anon_sym_EQUAL] = anon_sym_EQUAL,
  [anon_sym_LESS_EQUAL] = anon_sym_LESS_EQUAL,
  [anon_sym_GREATER_EQUAL] = anon_sym_GREATER_EQUAL,
  [anon_sym_STRLESS] = anon_sym_STRLESS,
  [anon_sym_STRGREATER] = anon_sym_STRGREATER,
  [anon_sym_STREQUAL] = anon_sym_STREQUAL,
  [anon_sym_STRLESS_EQUAL] = anon_sym_STRLESS_EQUAL,
  [anon_sym_STRGREATER_EQUAL] = anon_sym_STRGREATER_EQUAL,
  [anon_sym_VERSION_LESS] = anon_sym_VERSION_LESS,
  [anon_sym_VERSION_GREATER] = anon_sym_VERSION_GREATER,
  [anon_sym_VERSION_EQUAL] = anon_sym_VERSION_EQUAL,
  [anon_sym_VERSION_LESS_EQUAL] = anon_sym_VERSION_LESS_EQUAL,
  [anon_sym_VERSION_GREATER_EQUAL] = anon_sym_VERSION_GREATER_EQUAL,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_IN] = anon_sym_IN,
  [anon_sym_RANGE] = anon_sym_RANGE,
  [anon_sym_ZIP_LISTS] = anon_sym_ZIP_LISTS,
  [anon_sym_LISTS] = anon_sym_LISTS,
  [anon_sym_ITEMS] = anon_sym_ITEMS,
  [sym_if] = sym_if,
  [sym_elseif] = sym_elseif,
  [sym_else] = sym_else,
  [sym_endif] = sym_endif,
  [sym_foreach] = sym_foreach,
  [sym_endforeach] = sym_endforeach,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym__escape_encoded] = sym__escape_encoded,
  [sym_variable] = sym_variable,
  [sym_variable_ref] = sym_variable_ref,
  [sym_normal_var] = sym_normal_var,
  [sym_env_var] = sym_env_var,
  [sym_cache_var] = sym_cache_var,
  [sym_argument] = sym_argument,
  [sym_bracket_argument] = sym_bracket_argument,
  [sym__bracket_open] = sym__bracket_open,
  [sym_bracket_content] = sym_bracket_content,
  [sym__bracket_close] = sym__bracket_close,
  [sym_quoted_argument] = sym_quoted_argument,
  [sym_quoted_element] = sym_quoted_element,
  [sym_unquoted_argument] = sym_unquoted_argument,
  [sym_if_command] = sym_if_command,
  [sym_elseif_command] = sym_elseif_command,
  [sym_else_command] = sym_else_command,
  [sym_endif_command] = sym_endif_command,
  [sym_foreach_command] = sym_foreach_command,
  [sym_endforeach_command] = sym_endforeach_command,
  [sym_normal_command] = sym_normal_command,
  [sym_foreach_loop] = sym_foreach_loop,
  [sym_if_condition] = sym_if_condition,
  [sym__command_invocation] = sym__command_invocation,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_variable_repeat1] = aux_sym_variable_repeat1,
  [aux_sym__bracket_open_repeat1] = aux_sym__bracket_open_repeat1,
  [aux_sym_bracket_content_repeat1] = aux_sym_bracket_content_repeat1,
  [aux_sym_quoted_element_repeat1] = aux_sym_quoted_element_repeat1,
  [aux_sym_unquoted_argument_repeat1] = aux_sym_unquoted_argument_repeat1,
  [aux_sym_if_command_repeat1] = aux_sym_if_command_repeat1,
  [aux_sym_if_command_repeat2] = aux_sym_if_command_repeat2,
  [aux_sym_foreach_command_repeat1] = aux_sym_foreach_command_repeat1,
  [aux_sym_normal_command_repeat1] = aux_sym_normal_command_repeat1,
  [aux_sym_if_condition_repeat1] = aux_sym_if_condition_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__escape_identity] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BSLASHt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHn] = {
    .visible = true,
    .named = false,
  },
  [sym__escape_semicolon] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_variable_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARENV] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLARCACHE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_bracket_content_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_element_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_element_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_argument_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_if_command_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_YES] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TRUE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Y] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OFF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FALSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_N] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IGNORE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOTFOUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMAND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POLICY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TARGET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TEST] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEFINED] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CACHE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ENV] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IN_LIST] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EXISTS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IS_NEWER_THAN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IS_DIRECTORY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IS_SYMLINK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IS_ABSOLUTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MATCHES] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LESS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GREATER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQUAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LESS_EQUAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GREATER_EQUAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STRLESS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STRGREATER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STREQUAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STRLESS_EQUAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STRGREATER_EQUAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VERSION_LESS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VERSION_GREATER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VERSION_EQUAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VERSION_LESS_EQUAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VERSION_GREATER_EQUAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RANGE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ZIP_LISTS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LISTS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ITEMS] = {
    .visible = true,
    .named = false,
  },
  [sym_if] = {
    .visible = true,
    .named = true,
  },
  [sym_elseif] = {
    .visible = true,
    .named = true,
  },
  [sym_else] = {
    .visible = true,
    .named = true,
  },
  [sym_endif] = {
    .visible = true,
    .named = true,
  },
  [sym_foreach] = {
    .visible = true,
    .named = true,
  },
  [sym_endforeach] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym__escape_encoded] = {
    .visible = false,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_normal_var] = {
    .visible = true,
    .named = true,
  },
  [sym_env_var] = {
    .visible = true,
    .named = true,
  },
  [sym_cache_var] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_bracket_argument] = {
    .visible = true,
    .named = true,
  },
  [sym__bracket_open] = {
    .visible = false,
    .named = true,
  },
  [sym_bracket_content] = {
    .visible = true,
    .named = true,
  },
  [sym__bracket_close] = {
    .visible = false,
    .named = true,
  },
  [sym_quoted_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_element] = {
    .visible = true,
    .named = true,
  },
  [sym_unquoted_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_if_command] = {
    .visible = true,
    .named = true,
  },
  [sym_elseif_command] = {
    .visible = true,
    .named = true,
  },
  [sym_else_command] = {
    .visible = true,
    .named = true,
  },
  [sym_endif_command] = {
    .visible = true,
    .named = true,
  },
  [sym_foreach_command] = {
    .visible = true,
    .named = true,
  },
  [sym_endforeach_command] = {
    .visible = true,
    .named = true,
  },
  [sym_normal_command] = {
    .visible = true,
    .named = true,
  },
  [sym_foreach_loop] = {
    .visible = true,
    .named = true,
  },
  [sym_if_condition] = {
    .visible = true,
    .named = true,
  },
  [sym__command_invocation] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__bracket_open_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bracket_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_element_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_argument_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_command_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_foreach_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_normal_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_condition_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(199);
      if (lookahead == '"') ADVANCE(216);
      if (lookahead == '$') ADVANCE(27);
      if (lookahead == '(') ADVANCE(252);
      if (lookahead == ')') ADVANCE(304);
      if (lookahead == '0') ADVANCE(264);
      if (lookahead == '1') ADVANCE(258);
      if (lookahead == ';') ADVANCE(204);
      if (lookahead == '=') ADVANCE(212);
      if (lookahead == 'N') ADVANCE(268);
      if (lookahead == 'Y') ADVANCE(262);
      if (lookahead == '[') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(220);
      if (lookahead == ']') ADVANCE(215);
      if (lookahead == '{') ADVANCE(209);
      if (lookahead == '}') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(228);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '\r') ADVANCE(228);
      if (lookahead == ' ') ADVANCE(253);
      if (lookahead == '"') ADVANCE(216);
      if (lookahead == '$') ADVANCE(238);
      if (lookahead == ')') ADVANCE(304);
      if (lookahead == '0') ADVANCE(264);
      if (lookahead == '1') ADVANCE(258);
      if (lookahead == ';') ADVANCE(204);
      if (lookahead == 'A') ADVANCE(246);
      if (lookahead == 'C') ADVANCE(237);
      if (lookahead == 'D') ADVANCE(239);
      if (lookahead == 'E') ADVANCE(248);
      if (lookahead == 'F') ADVANCE(233);
      if (lookahead == 'G') ADVANCE(250);
      if (lookahead == 'I') ADVANCE(243);
      if (lookahead == 'L') ADVANCE(240);
      if (lookahead == 'M') ADVANCE(234);
      if (lookahead == 'N') ADVANCE(269);
      if (lookahead == 'O') ADVANCE(242);
      if (lookahead == 'P') ADVANCE(249);
      if (lookahead == 'S') ADVANCE(251);
      if (lookahead == 'T') ADVANCE(235);
      if (lookahead == 'V') ADVANCE(241);
      if (lookahead == 'Y') ADVANCE(263);
      if (lookahead == '[') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(') ADVANCE(227);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(229);
      if (lookahead == '\n') ADVANCE(222);
      if (lookahead == '\r') ADVANCE(229);
      if (lookahead == ' ') ADVANCE(254);
      if (lookahead == '"') ADVANCE(216);
      if (lookahead == '$') ADVANCE(238);
      if (lookahead == ')') ADVANCE(304);
      if (lookahead == ';') ADVANCE(204);
      if (lookahead == 'I') ADVANCE(247);
      if (lookahead == 'L') ADVANCE(245);
      if (lookahead == 'R') ADVANCE(236);
      if (lookahead == 'Z') ADVANCE(244);
      if (lookahead == '[') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(') ADVANCE(227);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(230);
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '\r') ADVANCE(230);
      if (lookahead == ' ') ADVANCE(255);
      if (lookahead == '"') ADVANCE(216);
      if (lookahead == '$') ADVANCE(238);
      if (lookahead == ')') ADVANCE(304);
      if (lookahead == ';') ADVANCE(204);
      if (lookahead == '[') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(') ADVANCE(227);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(231);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '\r') ADVANCE(231);
      if (lookahead == ' ') ADVANCE(256);
      if (lookahead == '$') ADVANCE(238);
      if (lookahead == ')') ADVANCE(304);
      if (lookahead == ';') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(') ADVANCE(227);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == '\r') SKIP(5)
      if (lookahead == ')') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(257);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == ' ') SKIP(7)
      if (lookahead == '$') ADVANCE(238);
      if (lookahead == ')') ADVANCE(304);
      if (lookahead == ';') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(') ADVANCE(227);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(216);
      if (lookahead == '$') ADVANCE(219);
      if (lookahead == ';') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(218);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 9:
      if (lookahead == ';') ADVANCE(204);
      if (lookahead == '\\') ADVANCE(195);
      if (lookahead == '}') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(28);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(26);
      if (lookahead == 'D') ADVANCE(80);
      if (lookahead == 'N') ADVANCE(42);
      if (lookahead == 'S') ADVANCE(188);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(107);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(84);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(163);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(85);
      END_STATE();
    case 16:
      if (lookahead == 'A') ADVANCE(106);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(86);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(87);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(88);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(89);
      END_STATE();
    case 21:
      if (lookahead == 'A') ADVANCE(90);
      END_STATE();
    case 22:
      if (lookahead == 'A') ADVANCE(91);
      END_STATE();
    case 23:
      if (lookahead == 'A') ADVANCE(92);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(166);
      END_STATE();
    case 25:
      if (lookahead == 'A') ADVANCE(168);
      END_STATE();
    case 26:
      if (lookahead == 'B') ADVANCE(149);
      END_STATE();
    case 27:
      if (lookahead == 'C') ADVANCE(10);
      if (lookahead == 'E') ADVANCE(103);
      if (lookahead == '{') ADVANCE(206);
      END_STATE();
    case 28:
      if (lookahead == 'C') ADVANCE(71);
      END_STATE();
    case 29:
      if (lookahead == 'C') ADVANCE(186);
      END_STATE();
    case 30:
      if (lookahead == 'C') ADVANCE(169);
      END_STATE();
    case 31:
      if (lookahead == 'C') ADVANCE(72);
      END_STATE();
    case 32:
      if (lookahead == 'C') ADVANCE(73);
      END_STATE();
    case 33:
      if (lookahead == 'D') ADVANCE(273);
      END_STATE();
    case 34:
      if (lookahead == 'D') ADVANCE(275);
      END_STATE();
    case 35:
      if (lookahead == 'D') ADVANCE(279);
      END_STATE();
    case 36:
      if (lookahead == 'D') ADVANCE(271);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(210);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(118);
      if (lookahead == 'G') ADVANCE(136);
      if (lookahead == 'L') ADVANCE(56);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(261);
      END_STATE();
    case 40:
      if (lookahead == 'E') ADVANCE(280);
      END_STATE();
    case 41:
      if (lookahead == 'E') ADVANCE(267);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(185);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(270);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(287);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(306);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(14);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(30);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(35);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(102);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(159);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(128);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(132);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(129);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(141);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(130);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(154);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(155);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(24);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(25);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(119);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(120);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(121);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(122);
      if (lookahead == 'G') ADVANCE(137);
      if (lookahead == 'L') ADVANCE(57);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(123);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(124);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(125);
      END_STATE();
    case 67:
      if (lookahead == 'F') ADVANCE(265);
      END_STATE();
    case 68:
      if (lookahead == 'F') ADVANCE(76);
      END_STATE();
    case 69:
      if (lookahead == 'G') ADVANCE(50);
      END_STATE();
    case 70:
      if (lookahead == 'G') ADVANCE(45);
      END_STATE();
    case 71:
      if (lookahead == 'H') ADVANCE(37);
      END_STATE();
    case 72:
      if (lookahead == 'H') ADVANCE(40);
      END_STATE();
    case 73:
      if (lookahead == 'H') ADVANCE(54);
      END_STATE();
    case 74:
      if (lookahead == 'H') ADVANCE(16);
      END_STATE();
    case 75:
      if (lookahead == 'I') ADVANCE(29);
      END_STATE();
    case 76:
      if (lookahead == 'I') ADVANCE(110);
      END_STATE();
    case 77:
      if (lookahead == 'I') ADVANCE(114);
      END_STATE();
    case 78:
      if (lookahead == 'I') ADVANCE(105);
      END_STATE();
    case 79:
      if (lookahead == 'I') ADVANCE(148);
      END_STATE();
    case 80:
      if (lookahead == 'I') ADVANCE(135);
      END_STATE();
    case 81:
      if (lookahead == 'I') ADVANCE(153);
      END_STATE();
    case 82:
      if (lookahead == 'I') ADVANCE(157);
      END_STATE();
    case 83:
      if (lookahead == 'K') ADVANCE(286);
      END_STATE();
    case 84:
      if (lookahead == 'L') ADVANCE(291);
      END_STATE();
    case 85:
      if (lookahead == 'L') ADVANCE(296);
      END_STATE();
    case 86:
      if (lookahead == 'L') ADVANCE(292);
      END_STATE();
    case 87:
      if (lookahead == 'L') ADVANCE(293);
      END_STATE();
    case 88:
      if (lookahead == 'L') ADVANCE(297);
      END_STATE();
    case 89:
      if (lookahead == 'L') ADVANCE(301);
      END_STATE();
    case 90:
      if (lookahead == 'L') ADVANCE(298);
      END_STATE();
    case 91:
      if (lookahead == 'L') ADVANCE(302);
      END_STATE();
    case 92:
      if (lookahead == 'L') ADVANCE(303);
      END_STATE();
    case 93:
      if (lookahead == 'L') ADVANCE(75);
      END_STATE();
    case 94:
      if (lookahead == 'L') ADVANCE(176);
      END_STATE();
    case 95:
      if (lookahead == 'L') ADVANCE(150);
      END_STATE();
    case 96:
      if (lookahead == 'L') ADVANCE(78);
      END_STATE();
    case 97:
      if (lookahead == 'L') ADVANCE(81);
      END_STATE();
    case 98:
      if (lookahead == 'L') ADVANCE(82);
      END_STATE();
    case 99:
      if (lookahead == 'M') ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == 'M') ADVANCE(12);
      END_STATE();
    case 101:
      if (lookahead == 'M') ADVANCE(96);
      END_STATE();
    case 102:
      if (lookahead == 'M') ADVANCE(144);
      END_STATE();
    case 103:
      if (lookahead == 'N') ADVANCE(183);
      END_STATE();
    case 104:
      if (lookahead == 'N') ADVANCE(113);
      END_STATE();
    case 105:
      if (lookahead == 'N') ADVANCE(83);
      END_STATE();
    case 106:
      if (lookahead == 'N') ADVANCE(284);
      END_STATE();
    case 107:
      if (lookahead == 'N') ADVANCE(34);
      END_STATE();
    case 108:
      if (lookahead == 'N') ADVANCE(193);
      END_STATE();
    case 109:
      if (lookahead == 'N') ADVANCE(36);
      END_STATE();
    case 110:
      if (lookahead == 'N') ADVANCE(48);
      END_STATE();
    case 111:
      if (lookahead == 'N') ADVANCE(70);
      END_STATE();
    case 112:
      if (lookahead == 'O') ADVANCE(173);
      END_STATE();
    case 113:
      if (lookahead == 'O') ADVANCE(134);
      END_STATE();
    case 114:
      if (lookahead == 'O') ADVANCE(108);
      END_STATE();
    case 115:
      if (lookahead == 'O') ADVANCE(94);
      END_STATE();
    case 116:
      if (lookahead == 'O') ADVANCE(131);
      END_STATE();
    case 117:
      if (lookahead == 'P') ADVANCE(194);
      END_STATE();
    case 118:
      if (lookahead == 'Q') ADVANCE(174);
      END_STATE();
    case 119:
      if (lookahead == 'Q') ADVANCE(175);
      END_STATE();
    case 120:
      if (lookahead == 'Q') ADVANCE(177);
      END_STATE();
    case 121:
      if (lookahead == 'Q') ADVANCE(178);
      END_STATE();
    case 122:
      if (lookahead == 'Q') ADVANCE(179);
      END_STATE();
    case 123:
      if (lookahead == 'Q') ADVANCE(180);
      END_STATE();
    case 124:
      if (lookahead == 'Q') ADVANCE(181);
      END_STATE();
    case 125:
      if (lookahead == 'Q') ADVANCE(182);
      END_STATE();
    case 126:
      if (lookahead == 'R') ADVANCE(38);
      END_STATE();
    case 127:
      if (lookahead == 'R') ADVANCE(69);
      END_STATE();
    case 128:
      if (lookahead == 'R') ADVANCE(290);
      END_STATE();
    case 129:
      if (lookahead == 'R') ADVANCE(295);
      END_STATE();
    case 130:
      if (lookahead == 'R') ADVANCE(300);
      END_STATE();
    case 131:
      if (lookahead == 'R') ADVANCE(187);
      END_STATE();
    case 132:
      if (lookahead == 'R') ADVANCE(192);
      END_STATE();
    case 133:
      if (lookahead == 'R') ADVANCE(151);
      END_STATE();
    case 134:
      if (lookahead == 'R') ADVANCE(43);
      END_STATE();
    case 135:
      if (lookahead == 'R') ADVANCE(47);
      END_STATE();
    case 136:
      if (lookahead == 'R') ADVANCE(58);
      END_STATE();
    case 137:
      if (lookahead == 'R') ADVANCE(59);
      END_STATE();
    case 138:
      if (lookahead == 'S') ADVANCE(260);
      END_STATE();
    case 139:
      if (lookahead == 'S') ADVANCE(289);
      END_STATE();
    case 140:
      if (lookahead == 'S') ADVANCE(283);
      END_STATE();
    case 141:
      if (lookahead == 'S') ADVANCE(288);
      END_STATE();
    case 142:
      if (lookahead == 'S') ADVANCE(294);
      END_STATE();
    case 143:
      if (lookahead == 'S') ADVANCE(299);
      END_STATE();
    case 144:
      if (lookahead == 'S') ADVANCE(309);
      END_STATE();
    case 145:
      if (lookahead == 'S') ADVANCE(308);
      END_STATE();
    case 146:
      if (lookahead == 'S') ADVANCE(307);
      END_STATE();
    case 147:
      if (lookahead == 'S') ADVANCE(158);
      END_STATE();
    case 148:
      if (lookahead == 'S') ADVANCE(162);
      END_STATE();
    case 149:
      if (lookahead == 'S') ADVANCE(115);
      END_STATE();
    case 150:
      if (lookahead == 'S') ADVANCE(41);
      END_STATE();
    case 151:
      if (lookahead == 'S') ADVANCE(77);
      END_STATE();
    case 152:
      if (lookahead == 'S') ADVANCE(139);
      END_STATE();
    case 153:
      if (lookahead == 'S') ADVANCE(160);
      END_STATE();
    case 154:
      if (lookahead == 'S') ADVANCE(142);
      END_STATE();
    case 155:
      if (lookahead == 'S') ADVANCE(143);
      END_STATE();
    case 156:
      if (lookahead == 'S') ADVANCE(164);
      END_STATE();
    case 157:
      if (lookahead == 'S') ADVANCE(165);
      END_STATE();
    case 158:
      if (lookahead == 'T') ADVANCE(278);
      END_STATE();
    case 159:
      if (lookahead == 'T') ADVANCE(277);
      END_STATE();
    case 160:
      if (lookahead == 'T') ADVANCE(282);
      END_STATE();
    case 161:
      if (lookahead == 'T') ADVANCE(74);
      END_STATE();
    case 162:
      if (lookahead == 'T') ADVANCE(140);
      END_STATE();
    case 163:
      if (lookahead == 'T') ADVANCE(51);
      END_STATE();
    case 164:
      if (lookahead == 'T') ADVANCE(145);
      END_STATE();
    case 165:
      if (lookahead == 'T') ADVANCE(146);
      END_STATE();
    case 166:
      if (lookahead == 'T') ADVANCE(53);
      END_STATE();
    case 167:
      if (lookahead == 'T') ADVANCE(44);
      END_STATE();
    case 168:
      if (lookahead == 'T') ADVANCE(55);
      END_STATE();
    case 169:
      if (lookahead == 'T') ADVANCE(116);
      END_STATE();
    case 170:
      if (lookahead == 'T') ADVANCE(32);
      END_STATE();
    case 171:
      if (lookahead == 'U') ADVANCE(13);
      END_STATE();
    case 172:
      if (lookahead == 'U') ADVANCE(39);
      END_STATE();
    case 173:
      if (lookahead == 'U') ADVANCE(109);
      END_STATE();
    case 174:
      if (lookahead == 'U') ADVANCE(15);
      END_STATE();
    case 175:
      if (lookahead == 'U') ADVANCE(17);
      END_STATE();
    case 176:
      if (lookahead == 'U') ADVANCE(167);
      END_STATE();
    case 177:
      if (lookahead == 'U') ADVANCE(18);
      END_STATE();
    case 178:
      if (lookahead == 'U') ADVANCE(19);
      END_STATE();
    case 179:
      if (lookahead == 'U') ADVANCE(20);
      END_STATE();
    case 180:
      if (lookahead == 'U') ADVANCE(21);
      END_STATE();
    case 181:
      if (lookahead == 'U') ADVANCE(22);
      END_STATE();
    case 182:
      if (lookahead == 'U') ADVANCE(23);
      END_STATE();
    case 183:
      if (lookahead == 'V') ADVANCE(208);
      END_STATE();
    case 184:
      if (lookahead == 'V') ADVANCE(281);
      END_STATE();
    case 185:
      if (lookahead == 'W') ADVANCE(52);
      END_STATE();
    case 186:
      if (lookahead == 'Y') ADVANCE(276);
      END_STATE();
    case 187:
      if (lookahead == 'Y') ADVANCE(285);
      END_STATE();
    case 188:
      if (lookahead == 'Y') ADVANCE(101);
      END_STATE();
    case 189:
      if (lookahead == ']') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(214);
      if (lookahead != 0) ADVANCE(213);
      END_STATE();
    case 190:
      if (lookahead == '_') ADVANCE(11);
      END_STATE();
    case 191:
      if (lookahead == '_') ADVANCE(97);
      END_STATE();
    case 192:
      if (lookahead == '_') ADVANCE(161);
      END_STATE();
    case 193:
      if (lookahead == '_') ADVANCE(63);
      END_STATE();
    case 194:
      if (lookahead == '_') ADVANCE(98);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(203);
      if (lookahead == 'r') ADVANCE(202);
      if (lookahead == 't') ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != ';' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(200);
      END_STATE();
    case 196:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(332);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(334);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(325);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(196)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 197:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(333);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(334);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(325);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(197)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 198:
      if (eof) ADVANCE(199);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(334);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(325);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(198)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__escape_identity);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__escape_semicolon);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_DOLLARENV);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_DOLLARCACHE);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_bracket_content_token1);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_bracket_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(213);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_quoted_element_token1);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_quoted_element_token1);
      if (lookahead == '$') ADVANCE(219);
      if (lookahead == ';') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(217);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_quoted_element_token1);
      if (lookahead == 'C') ADVANCE(10);
      if (lookahead == 'E') ADVANCE(103);
      if (lookahead == '{') ADVANCE(206);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'n') ADVANCE(203);
      if (lookahead == 'r') ADVANCE(202);
      if (lookahead == 't') ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != ';' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(200);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_quoted_element_token2);
      if (lookahead == '\t') ADVANCE(228);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '\r') ADVANCE(228);
      if (lookahead == ' ') ADVANCE(253);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_quoted_element_token2);
      if (lookahead == '\t') ADVANCE(229);
      if (lookahead == '\n') ADVANCE(222);
      if (lookahead == '\r') ADVANCE(229);
      if (lookahead == ' ') ADVANCE(254);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_quoted_element_token2);
      if (lookahead == '\t') ADVANCE(230);
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '\r') ADVANCE(230);
      if (lookahead == ' ') ADVANCE(255);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_quoted_element_token2);
      if (lookahead == '\t') ADVANCE(231);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '\r') ADVANCE(231);
      if (lookahead == ' ') ADVANCE(256);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_quoted_element_token2);
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(257);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_quoted_element_token2);
      if (lookahead == '\n') ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == '\t') ADVANCE(228);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '\r') ADVANCE(228);
      if (lookahead == ' ') ADVANCE(253);
      if (lookahead == '$') ADVANCE(238);
      if (lookahead == '0') ADVANCE(264);
      if (lookahead == '1') ADVANCE(258);
      if (lookahead == ';') ADVANCE(204);
      if (lookahead == 'A') ADVANCE(246);
      if (lookahead == 'C') ADVANCE(237);
      if (lookahead == 'D') ADVANCE(239);
      if (lookahead == 'E') ADVANCE(248);
      if (lookahead == 'F') ADVANCE(233);
      if (lookahead == 'G') ADVANCE(250);
      if (lookahead == 'I') ADVANCE(243);
      if (lookahead == 'L') ADVANCE(240);
      if (lookahead == 'M') ADVANCE(234);
      if (lookahead == 'N') ADVANCE(269);
      if (lookahead == 'O') ADVANCE(242);
      if (lookahead == 'P') ADVANCE(249);
      if (lookahead == 'S') ADVANCE(251);
      if (lookahead == 'T') ADVANCE(235);
      if (lookahead == 'V') ADVANCE(241);
      if (lookahead == 'Y') ADVANCE(263);
      if (lookahead == '[') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(227);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == '\t') ADVANCE(229);
      if (lookahead == '\n') ADVANCE(222);
      if (lookahead == '\r') ADVANCE(229);
      if (lookahead == ' ') ADVANCE(254);
      if (lookahead == '$') ADVANCE(238);
      if (lookahead == ';') ADVANCE(204);
      if (lookahead == 'I') ADVANCE(247);
      if (lookahead == 'L') ADVANCE(245);
      if (lookahead == 'R') ADVANCE(236);
      if (lookahead == 'Z') ADVANCE(244);
      if (lookahead == '[') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(227);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == '\t') ADVANCE(230);
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '\r') ADVANCE(230);
      if (lookahead == ' ') ADVANCE(255);
      if (lookahead == '$') ADVANCE(238);
      if (lookahead == ';') ADVANCE(204);
      if (lookahead == '[') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(227);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == '\t') ADVANCE(231);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '\r') ADVANCE(231);
      if (lookahead == ' ') ADVANCE(256);
      if (lookahead == '$') ADVANCE(238);
      if (lookahead == ';') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(227);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == '$') ADVANCE(238);
      if (lookahead == ';') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(227);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'A') ADVANCE(95);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'A') ADVANCE(170);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'A') ADVANCE(127);
      if (lookahead == 'E') ADVANCE(147);
      if (lookahead == 'R') ADVANCE(172);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'A') ADVANCE(111);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'A') ADVANCE(31);
      if (lookahead == 'O') ADVANCE(99);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'C') ADVANCE(10);
      if (lookahead == 'E') ADVANCE(103);
      if (lookahead == '{') ADVANCE(206);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'E') ADVANCE(68);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'E') ADVANCE(152);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'E') ADVANCE(133);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'F') ADVANCE(67);
      if (lookahead == 'N') ADVANCE(259);
      if (lookahead == 'R') ADVANCE(274);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'G') ADVANCE(104);
      if (lookahead == 'N') ADVANCE(191);
      if (lookahead == 'S') ADVANCE(190);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'I') ADVANCE(117);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'I') ADVANCE(156);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'N') ADVANCE(33);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'N') ADVANCE(305);
      if (lookahead == 'T') ADVANCE(49);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'N') ADVANCE(184);
      if (lookahead == 'Q') ADVANCE(171);
      if (lookahead == 'X') ADVANCE(79);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'O') ADVANCE(93);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'R') ADVANCE(46);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'T') ADVANCE(126);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_if_command_token1);
      if (lookahead == '\t') ADVANCE(228);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '\r') ADVANCE(228);
      if (lookahead == ' ') ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_if_command_token1);
      if (lookahead == '\t') ADVANCE(229);
      if (lookahead == '\n') ADVANCE(222);
      if (lookahead == '\r') ADVANCE(229);
      if (lookahead == ' ') ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_if_command_token1);
      if (lookahead == '\t') ADVANCE(230);
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '\r') ADVANCE(230);
      if (lookahead == ' ') ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_if_command_token1);
      if (lookahead == '\t') ADVANCE(231);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '\r') ADVANCE(231);
      if (lookahead == ' ') ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_if_command_token1);
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_ON);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_YES);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_TRUE);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead == 'E') ADVANCE(138);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_OFF);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_NO);
      if (lookahead == 'T') ADVANCE(272);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_FALSE);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_N);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_N);
      if (lookahead == 'O') ADVANCE(266);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_IGNORE);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_NOTFOUND);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_NOT);
      if (lookahead == 'F') ADVANCE(112);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_COMMAND);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_POLICY);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_TARGET);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_TEST);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_DEFINED);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_CACHE);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_ENV);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_IN_LIST);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_EXISTS);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_IS_NEWER_THAN);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_IS_DIRECTORY);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_IS_SYMLINK);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_IS_ABSOLUTE);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_MATCHES);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_LESS);
      if (lookahead == '_') ADVANCE(60);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_GREATER);
      if (lookahead == '_') ADVANCE(61);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_EQUAL);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_LESS_EQUAL);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_GREATER_EQUAL);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_STRLESS);
      if (lookahead == '_') ADVANCE(62);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_STRGREATER);
      if (lookahead == '_') ADVANCE(64);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_STREQUAL);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_STRLESS_EQUAL);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_STRGREATER_EQUAL);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_VERSION_LESS);
      if (lookahead == '_') ADVANCE(65);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_VERSION_GREATER);
      if (lookahead == '_') ADVANCE(66);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_VERSION_EQUAL);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_VERSION_LESS_EQUAL);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_VERSION_GREATER_EQUAL);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_RANGE);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_ZIP_LISTS);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_LISTS);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_ITEMS);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_elseif);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_else);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_endif);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_foreach);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_endforeach);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(338);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 198},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 196},
  [42] = {.lex_state = 196},
  [43] = {.lex_state = 196},
  [44] = {.lex_state = 196},
  [45] = {.lex_state = 196},
  [46] = {.lex_state = 196},
  [47] = {.lex_state = 196},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 197},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 197},
  [53] = {.lex_state = 197},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 197},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 197},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 197},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 198},
  [63] = {.lex_state = 197},
  [64] = {.lex_state = 198},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 9},
  [74] = {.lex_state = 9},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 9},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 196},
  [87] = {.lex_state = 196},
  [88] = {.lex_state = 196},
  [89] = {.lex_state = 196},
  [90] = {.lex_state = 196},
  [91] = {.lex_state = 196},
  [92] = {.lex_state = 196},
  [93] = {.lex_state = 196},
  [94] = {.lex_state = 196},
  [95] = {.lex_state = 196},
  [96] = {.lex_state = 196},
  [97] = {.lex_state = 196},
  [98] = {.lex_state = 196},
  [99] = {.lex_state = 196},
  [100] = {.lex_state = 196},
  [101] = {.lex_state = 196},
  [102] = {.lex_state = 196},
  [103] = {.lex_state = 196},
  [104] = {.lex_state = 196},
  [105] = {.lex_state = 196},
  [106] = {.lex_state = 196},
  [107] = {.lex_state = 196},
  [108] = {.lex_state = 196},
  [109] = {.lex_state = 196},
  [110] = {.lex_state = 196},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 189},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 5},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 5},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 189},
  [149] = {.lex_state = 5},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 5},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 5},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 5},
  [156] = {.lex_state = 197},
  [157] = {.lex_state = 198},
  [158] = {.lex_state = 198},
  [159] = {.lex_state = 197},
  [160] = {.lex_state = 198},
  [161] = {.lex_state = 198},
  [162] = {.lex_state = 198},
  [163] = {.lex_state = 198},
  [164] = {.lex_state = 198},
  [165] = {.lex_state = 198},
  [166] = {.lex_state = 198},
  [167] = {.lex_state = 198},
  [168] = {.lex_state = 198},
  [169] = {.lex_state = 197},
  [170] = {.lex_state = 197},
  [171] = {.lex_state = 197},
  [172] = {.lex_state = 197},
  [173] = {.lex_state = 197},
  [174] = {.lex_state = 197},
  [175] = {.lex_state = 197},
  [176] = {.lex_state = 197},
  [177] = {.lex_state = 197},
  [178] = {.lex_state = 197},
  [179] = {.lex_state = 197},
  [180] = {.lex_state = 197},
  [181] = {.lex_state = 197},
  [182] = {.lex_state = 198},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 197},
  [185] = {.lex_state = 198},
  [186] = {.lex_state = 197},
  [187] = {.lex_state = 197},
  [188] = {.lex_state = 198},
  [189] = {.lex_state = 198},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 5},
  [192] = {.lex_state = 5},
  [193] = {.lex_state = 5},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 5},
  [196] = {.lex_state = 5},
  [197] = {.lex_state = 5},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 189},
  [200] = {.lex_state = 5},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 5},
  [204] = {.lex_state = 189},
  [205] = {.lex_state = 5},
  [206] = {.lex_state = 5},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 189},
  [211] = {.lex_state = 189},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 6},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__escape_identity] = ACTIONS(1),
    [anon_sym_BSLASHt] = ACTIONS(1),
    [anon_sym_BSLASHr] = ACTIONS(1),
    [anon_sym_BSLASHn] = ACTIONS(1),
    [sym__escape_semicolon] = ACTIONS(1),
    [aux_sym_variable_token1] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOLLARENV] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_DOLLARCACHE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_Y] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_N] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(250),
    [sym_if_command] = STATE(46),
    [sym_foreach_command] = STATE(59),
    [sym_normal_command] = STATE(62),
    [sym_foreach_loop] = STATE(62),
    [sym_if_condition] = STATE(62),
    [sym__command_invocation] = STATE(62),
    [aux_sym_source_file_repeat1] = STATE(62),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_if] = ACTIONS(5),
    [sym_foreach] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
  },
  [2] = {
    [sym_escape_sequence] = STATE(36),
    [sym__escape_encoded] = STATE(54),
    [sym_variable_ref] = STATE(36),
    [sym_normal_var] = STATE(49),
    [sym_env_var] = STATE(49),
    [sym_cache_var] = STATE(49),
    [sym_argument] = STATE(153),
    [sym_bracket_argument] = STATE(191),
    [sym__bracket_open] = STATE(133),
    [sym_quoted_argument] = STATE(191),
    [sym_unquoted_argument] = STATE(191),
    [aux_sym_unquoted_argument_repeat1] = STATE(36),
    [aux_sym_if_command_repeat1] = STATE(5),
    [sym__escape_identity] = ACTIONS(11),
    [anon_sym_BSLASHt] = ACTIONS(11),
    [anon_sym_BSLASHr] = ACTIONS(11),
    [anon_sym_BSLASHn] = ACTIONS(11),
    [sym__escape_semicolon] = ACTIONS(11),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(13),
    [anon_sym_DOLLARENV] = ACTIONS(15),
    [anon_sym_DOLLARCACHE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_quoted_element_token2] = ACTIONS(23),
    [aux_sym_unquoted_argument_token1] = ACTIONS(25),
    [aux_sym_if_command_token1] = ACTIONS(23),
    [anon_sym_1] = ACTIONS(27),
    [anon_sym_ON] = ACTIONS(27),
    [anon_sym_YES] = ACTIONS(27),
    [anon_sym_TRUE] = ACTIONS(27),
    [anon_sym_Y] = ACTIONS(27),
    [anon_sym_0] = ACTIONS(27),
    [anon_sym_OFF] = ACTIONS(27),
    [anon_sym_NO] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [anon_sym_N] = ACTIONS(27),
    [anon_sym_IGNORE] = ACTIONS(27),
    [anon_sym_NOTFOUND] = ACTIONS(27),
    [anon_sym_NOT] = ACTIONS(27),
    [anon_sym_AND] = ACTIONS(27),
    [anon_sym_OR] = ACTIONS(27),
    [anon_sym_COMMAND] = ACTIONS(27),
    [anon_sym_POLICY] = ACTIONS(27),
    [anon_sym_TARGET] = ACTIONS(27),
    [anon_sym_TEST] = ACTIONS(27),
    [anon_sym_DEFINED] = ACTIONS(27),
    [anon_sym_CACHE] = ACTIONS(27),
    [anon_sym_ENV] = ACTIONS(27),
    [anon_sym_IN_LIST] = ACTIONS(27),
    [anon_sym_EXISTS] = ACTIONS(27),
    [anon_sym_IS_NEWER_THAN] = ACTIONS(27),
    [anon_sym_IS_DIRECTORY] = ACTIONS(27),
    [anon_sym_IS_SYMLINK] = ACTIONS(27),
    [anon_sym_IS_ABSOLUTE] = ACTIONS(27),
    [anon_sym_MATCHES] = ACTIONS(27),
    [anon_sym_LESS] = ACTIONS(27),
    [anon_sym_GREATER] = ACTIONS(27),
    [anon_sym_EQUAL] = ACTIONS(27),
    [anon_sym_LESS_EQUAL] = ACTIONS(27),
    [anon_sym_GREATER_EQUAL] = ACTIONS(27),
    [anon_sym_STRLESS] = ACTIONS(27),
    [anon_sym_STRGREATER] = ACTIONS(27),
    [anon_sym_STREQUAL] = ACTIONS(27),
    [anon_sym_STRLESS_EQUAL] = ACTIONS(27),
    [anon_sym_STRGREATER_EQUAL] = ACTIONS(27),
    [anon_sym_VERSION_LESS] = ACTIONS(27),
    [anon_sym_VERSION_GREATER] = ACTIONS(27),
    [anon_sym_VERSION_EQUAL] = ACTIONS(27),
    [anon_sym_VERSION_LESS_EQUAL] = ACTIONS(27),
    [anon_sym_VERSION_GREATER_EQUAL] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(29),
  },
  [3] = {
    [sym_escape_sequence] = STATE(36),
    [sym__escape_encoded] = STATE(54),
    [sym_variable_ref] = STATE(36),
    [sym_normal_var] = STATE(49),
    [sym_env_var] = STATE(49),
    [sym_cache_var] = STATE(49),
    [sym_argument] = STATE(154),
    [sym_bracket_argument] = STATE(191),
    [sym__bracket_open] = STATE(133),
    [sym_quoted_argument] = STATE(191),
    [sym_unquoted_argument] = STATE(191),
    [aux_sym_unquoted_argument_repeat1] = STATE(36),
    [aux_sym_if_command_repeat1] = STATE(6),
    [sym__escape_identity] = ACTIONS(11),
    [anon_sym_BSLASHt] = ACTIONS(11),
    [anon_sym_BSLASHr] = ACTIONS(11),
    [anon_sym_BSLASHn] = ACTIONS(11),
    [sym__escape_semicolon] = ACTIONS(11),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(13),
    [anon_sym_DOLLARENV] = ACTIONS(15),
    [anon_sym_DOLLARCACHE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_quoted_element_token2] = ACTIONS(31),
    [aux_sym_unquoted_argument_token1] = ACTIONS(25),
    [aux_sym_if_command_token1] = ACTIONS(31),
    [anon_sym_1] = ACTIONS(33),
    [anon_sym_ON] = ACTIONS(33),
    [anon_sym_YES] = ACTIONS(33),
    [anon_sym_TRUE] = ACTIONS(33),
    [anon_sym_Y] = ACTIONS(33),
    [anon_sym_0] = ACTIONS(33),
    [anon_sym_OFF] = ACTIONS(33),
    [anon_sym_NO] = ACTIONS(33),
    [anon_sym_FALSE] = ACTIONS(33),
    [anon_sym_N] = ACTIONS(33),
    [anon_sym_IGNORE] = ACTIONS(33),
    [anon_sym_NOTFOUND] = ACTIONS(33),
    [anon_sym_NOT] = ACTIONS(33),
    [anon_sym_AND] = ACTIONS(33),
    [anon_sym_OR] = ACTIONS(33),
    [anon_sym_COMMAND] = ACTIONS(33),
    [anon_sym_POLICY] = ACTIONS(33),
    [anon_sym_TARGET] = ACTIONS(33),
    [anon_sym_TEST] = ACTIONS(33),
    [anon_sym_DEFINED] = ACTIONS(33),
    [anon_sym_CACHE] = ACTIONS(33),
    [anon_sym_ENV] = ACTIONS(33),
    [anon_sym_IN_LIST] = ACTIONS(33),
    [anon_sym_EXISTS] = ACTIONS(33),
    [anon_sym_IS_NEWER_THAN] = ACTIONS(33),
    [anon_sym_IS_DIRECTORY] = ACTIONS(33),
    [anon_sym_IS_SYMLINK] = ACTIONS(33),
    [anon_sym_IS_ABSOLUTE] = ACTIONS(33),
    [anon_sym_MATCHES] = ACTIONS(33),
    [anon_sym_LESS] = ACTIONS(33),
    [anon_sym_GREATER] = ACTIONS(33),
    [anon_sym_EQUAL] = ACTIONS(33),
    [anon_sym_LESS_EQUAL] = ACTIONS(33),
    [anon_sym_GREATER_EQUAL] = ACTIONS(33),
    [anon_sym_STRLESS] = ACTIONS(33),
    [anon_sym_STRGREATER] = ACTIONS(33),
    [anon_sym_STREQUAL] = ACTIONS(33),
    [anon_sym_STRLESS_EQUAL] = ACTIONS(33),
    [anon_sym_STRGREATER_EQUAL] = ACTIONS(33),
    [anon_sym_VERSION_LESS] = ACTIONS(33),
    [anon_sym_VERSION_GREATER] = ACTIONS(33),
    [anon_sym_VERSION_EQUAL] = ACTIONS(33),
    [anon_sym_VERSION_LESS_EQUAL] = ACTIONS(33),
    [anon_sym_VERSION_GREATER_EQUAL] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(35),
  },
  [4] = {
    [sym_escape_sequence] = STATE(36),
    [sym__escape_encoded] = STATE(54),
    [sym_variable_ref] = STATE(36),
    [sym_normal_var] = STATE(49),
    [sym_env_var] = STATE(49),
    [sym_cache_var] = STATE(49),
    [sym_argument] = STATE(138),
    [sym_bracket_argument] = STATE(191),
    [sym__bracket_open] = STATE(133),
    [sym_quoted_argument] = STATE(191),
    [sym_unquoted_argument] = STATE(191),
    [aux_sym_unquoted_argument_repeat1] = STATE(36),
    [aux_sym_if_command_repeat1] = STATE(15),
    [sym__escape_identity] = ACTIONS(11),
    [anon_sym_BSLASHt] = ACTIONS(11),
    [anon_sym_BSLASHr] = ACTIONS(11),
    [anon_sym_BSLASHn] = ACTIONS(11),
    [sym__escape_semicolon] = ACTIONS(11),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(13),
    [anon_sym_DOLLARENV] = ACTIONS(15),
    [anon_sym_DOLLARCACHE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_quoted_element_token2] = ACTIONS(37),
    [aux_sym_unquoted_argument_token1] = ACTIONS(25),
    [aux_sym_if_command_token1] = ACTIONS(37),
    [anon_sym_1] = ACTIONS(39),
    [anon_sym_ON] = ACTIONS(39),
    [anon_sym_YES] = ACTIONS(39),
    [anon_sym_TRUE] = ACTIONS(39),
    [anon_sym_Y] = ACTIONS(39),
    [anon_sym_0] = ACTIONS(39),
    [anon_sym_OFF] = ACTIONS(39),
    [anon_sym_NO] = ACTIONS(39),
    [anon_sym_FALSE] = ACTIONS(39),
    [anon_sym_N] = ACTIONS(39),
    [anon_sym_IGNORE] = ACTIONS(39),
    [anon_sym_NOTFOUND] = ACTIONS(39),
    [anon_sym_NOT] = ACTIONS(39),
    [anon_sym_AND] = ACTIONS(39),
    [anon_sym_OR] = ACTIONS(39),
    [anon_sym_COMMAND] = ACTIONS(39),
    [anon_sym_POLICY] = ACTIONS(39),
    [anon_sym_TARGET] = ACTIONS(39),
    [anon_sym_TEST] = ACTIONS(39),
    [anon_sym_DEFINED] = ACTIONS(39),
    [anon_sym_CACHE] = ACTIONS(39),
    [anon_sym_ENV] = ACTIONS(39),
    [anon_sym_IN_LIST] = ACTIONS(39),
    [anon_sym_EXISTS] = ACTIONS(39),
    [anon_sym_IS_NEWER_THAN] = ACTIONS(39),
    [anon_sym_IS_DIRECTORY] = ACTIONS(39),
    [anon_sym_IS_SYMLINK] = ACTIONS(39),
    [anon_sym_IS_ABSOLUTE] = ACTIONS(39),
    [anon_sym_MATCHES] = ACTIONS(39),
    [anon_sym_LESS] = ACTIONS(39),
    [anon_sym_GREATER] = ACTIONS(39),
    [anon_sym_EQUAL] = ACTIONS(39),
    [anon_sym_LESS_EQUAL] = ACTIONS(39),
    [anon_sym_GREATER_EQUAL] = ACTIONS(39),
    [anon_sym_STRLESS] = ACTIONS(39),
    [anon_sym_STRGREATER] = ACTIONS(39),
    [anon_sym_STREQUAL] = ACTIONS(39),
    [anon_sym_STRLESS_EQUAL] = ACTIONS(39),
    [anon_sym_STRGREATER_EQUAL] = ACTIONS(39),
    [anon_sym_VERSION_LESS] = ACTIONS(39),
    [anon_sym_VERSION_GREATER] = ACTIONS(39),
    [anon_sym_VERSION_EQUAL] = ACTIONS(39),
    [anon_sym_VERSION_LESS_EQUAL] = ACTIONS(39),
    [anon_sym_VERSION_GREATER_EQUAL] = ACTIONS(39),
    [anon_sym_RPAREN] = ACTIONS(41),
  },
  [5] = {
    [sym_escape_sequence] = STATE(36),
    [sym__escape_encoded] = STATE(54),
    [sym_variable_ref] = STATE(36),
    [sym_normal_var] = STATE(49),
    [sym_env_var] = STATE(49),
    [sym_cache_var] = STATE(49),
    [sym_argument] = STATE(121),
    [sym_bracket_argument] = STATE(191),
    [sym__bracket_open] = STATE(133),
    [sym_quoted_argument] = STATE(191),
    [sym_unquoted_argument] = STATE(191),
    [aux_sym_unquoted_argument_repeat1] = STATE(36),
    [aux_sym_if_command_repeat1] = STATE(15),
    [sym__escape_identity] = ACTIONS(11),
    [anon_sym_BSLASHt] = ACTIONS(11),
    [anon_sym_BSLASHr] = ACTIONS(11),
    [anon_sym_BSLASHn] = ACTIONS(11),
    [sym__escape_semicolon] = ACTIONS(11),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(13),
    [anon_sym_DOLLARENV] = ACTIONS(15),
    [anon_sym_DOLLARCACHE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_quoted_element_token2] = ACTIONS(37),
    [aux_sym_unquoted_argument_token1] = ACTIONS(25),
    [aux_sym_if_command_token1] = ACTIONS(37),
    [anon_sym_1] = ACTIONS(43),
    [anon_sym_ON] = ACTIONS(43),
    [anon_sym_YES] = ACTIONS(43),
    [anon_sym_TRUE] = ACTIONS(43),
    [anon_sym_Y] = ACTIONS(43),
    [anon_sym_0] = ACTIONS(43),
    [anon_sym_OFF] = ACTIONS(43),
    [anon_sym_NO] = ACTIONS(43),
    [anon_sym_FALSE] = ACTIONS(43),
    [anon_sym_N] = ACTIONS(43),
    [anon_sym_IGNORE] = ACTIONS(43),
    [anon_sym_NOTFOUND] = ACTIONS(43),
    [anon_sym_NOT] = ACTIONS(43),
    [anon_sym_AND] = ACTIONS(43),
    [anon_sym_OR] = ACTIONS(43),
    [anon_sym_COMMAND] = ACTIONS(43),
    [anon_sym_POLICY] = ACTIONS(43),
    [anon_sym_TARGET] = ACTIONS(43),
    [anon_sym_TEST] = ACTIONS(43),
    [anon_sym_DEFINED] = ACTIONS(43),
    [anon_sym_CACHE] = ACTIONS(43),
    [anon_sym_ENV] = ACTIONS(43),
    [anon_sym_IN_LIST] = ACTIONS(43),
    [anon_sym_EXISTS] = ACTIONS(43),
    [anon_sym_IS_NEWER_THAN] = ACTIONS(43),
    [anon_sym_IS_DIRECTORY] = ACTIONS(43),
    [anon_sym_IS_SYMLINK] = ACTIONS(43),
    [anon_sym_IS_ABSOLUTE] = ACTIONS(43),
    [anon_sym_MATCHES] = ACTIONS(43),
    [anon_sym_LESS] = ACTIONS(43),
    [anon_sym_GREATER] = ACTIONS(43),
    [anon_sym_EQUAL] = ACTIONS(43),
    [anon_sym_LESS_EQUAL] = ACTIONS(43),
    [anon_sym_GREATER_EQUAL] = ACTIONS(43),
    [anon_sym_STRLESS] = ACTIONS(43),
    [anon_sym_STRGREATER] = ACTIONS(43),
    [anon_sym_STREQUAL] = ACTIONS(43),
    [anon_sym_STRLESS_EQUAL] = ACTIONS(43),
    [anon_sym_STRGREATER_EQUAL] = ACTIONS(43),
    [anon_sym_VERSION_LESS] = ACTIONS(43),
    [anon_sym_VERSION_GREATER] = ACTIONS(43),
    [anon_sym_VERSION_EQUAL] = ACTIONS(43),
    [anon_sym_VERSION_LESS_EQUAL] = ACTIONS(43),
    [anon_sym_VERSION_GREATER_EQUAL] = ACTIONS(43),
    [anon_sym_RPAREN] = ACTIONS(45),
  },
  [6] = {
    [sym_escape_sequence] = STATE(36),
    [sym__escape_encoded] = STATE(54),
    [sym_variable_ref] = STATE(36),
    [sym_normal_var] = STATE(49),
    [sym_env_var] = STATE(49),
    [sym_cache_var] = STATE(49),
    [sym_argument] = STATE(118),
    [sym_bracket_argument] = STATE(191),
    [sym__bracket_open] = STATE(133),
    [sym_quoted_argument] = STATE(191),
    [sym_unquoted_argument] = STATE(191),
    [aux_sym_unquoted_argument_repeat1] = STATE(36),
    [aux_sym_if_command_repeat1] = STATE(15),
    [sym__escape_identity] = ACTIONS(11),
    [anon_sym_BSLASHt] = ACTIONS(11),
    [anon_sym_BSLASHr] = ACTIONS(11),
    [anon_sym_BSLASHn] = ACTIONS(11),
    [sym__escape_semicolon] = ACTIONS(11),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(13),
    [anon_sym_DOLLARENV] = ACTIONS(15),
    [anon_sym_DOLLARCACHE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_quoted_element_token2] = ACTIONS(37),
    [aux_sym_unquoted_argument_token1] = ACTIONS(25),
    [aux_sym_if_command_token1] = ACTIONS(37),
    [anon_sym_1] = ACTIONS(47),
    [anon_sym_ON] = ACTIONS(47),
    [anon_sym_YES] = ACTIONS(47),
    [anon_sym_TRUE] = ACTIONS(47),
    [anon_sym_Y] = ACTIONS(47),
    [anon_sym_0] = ACTIONS(47),
    [anon_sym_OFF] = ACTIONS(47),
    [anon_sym_NO] = ACTIONS(47),
    [anon_sym_FALSE] = ACTIONS(47),
    [anon_sym_N] = ACTIONS(47),
    [anon_sym_IGNORE] = ACTIONS(47),
    [anon_sym_NOTFOUND] = ACTIONS(47),
    [anon_sym_NOT] = ACTIONS(47),
    [anon_sym_AND] = ACTIONS(47),
    [anon_sym_OR] = ACTIONS(47),
    [anon_sym_COMMAND] = ACTIONS(47),
    [anon_sym_POLICY] = ACTIONS(47),
    [anon_sym_TARGET] = ACTIONS(47),
    [anon_sym_TEST] = ACTIONS(47),
    [anon_sym_DEFINED] = ACTIONS(47),
    [anon_sym_CACHE] = ACTIONS(47),
    [anon_sym_ENV] = ACTIONS(47),
    [anon_sym_IN_LIST] = ACTIONS(47),
    [anon_sym_EXISTS] = ACTIONS(47),
    [anon_sym_IS_NEWER_THAN] = ACTIONS(47),
    [anon_sym_IS_DIRECTORY] = ACTIONS(47),
    [anon_sym_IS_SYMLINK] = ACTIONS(47),
    [anon_sym_IS_ABSOLUTE] = ACTIONS(47),
    [anon_sym_MATCHES] = ACTIONS(47),
    [anon_sym_LESS] = ACTIONS(47),
    [anon_sym_GREATER] = ACTIONS(47),
    [anon_sym_EQUAL] = ACTIONS(47),
    [anon_sym_LESS_EQUAL] = ACTIONS(47),
    [anon_sym_GREATER_EQUAL] = ACTIONS(47),
    [anon_sym_STRLESS] = ACTIONS(47),
    [anon_sym_STRGREATER] = ACTIONS(47),
    [anon_sym_STREQUAL] = ACTIONS(47),
    [anon_sym_STRLESS_EQUAL] = ACTIONS(47),
    [anon_sym_STRGREATER_EQUAL] = ACTIONS(47),
    [anon_sym_VERSION_LESS] = ACTIONS(47),
    [anon_sym_VERSION_GREATER] = ACTIONS(47),
    [anon_sym_VERSION_EQUAL] = ACTIONS(47),
    [anon_sym_VERSION_LESS_EQUAL] = ACTIONS(47),
    [anon_sym_VERSION_GREATER_EQUAL] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(49),
  },
  [7] = {
    [sym_escape_sequence] = STATE(36),
    [sym__escape_encoded] = STATE(54),
    [sym_variable_ref] = STATE(36),
    [sym_normal_var] = STATE(49),
    [sym_env_var] = STATE(49),
    [sym_cache_var] = STATE(49),
    [sym_argument] = STATE(143),
    [sym_bracket_argument] = STATE(191),
    [sym__bracket_open] = STATE(133),
    [sym_quoted_argument] = STATE(191),
    [sym_unquoted_argument] = STATE(191),
    [aux_sym_unquoted_argument_repeat1] = STATE(36),
    [aux_sym_if_command_repeat1] = STATE(4),
    [sym__escape_identity] = ACTIONS(11),
    [anon_sym_BSLASHt] = ACTIONS(11),
    [anon_sym_BSLASHr] = ACTIONS(11),
    [anon_sym_BSLASHn] = ACTIONS(11),
    [sym__escape_semicolon] = ACTIONS(11),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(13),
    [anon_sym_DOLLARENV] = ACTIONS(15),
    [anon_sym_DOLLARCACHE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_quoted_element_token2] = ACTIONS(51),
    [aux_sym_unquoted_argument_token1] = ACTIONS(25),
    [aux_sym_if_command_token1] = ACTIONS(51),
    [anon_sym_1] = ACTIONS(53),
    [anon_sym_ON] = ACTIONS(53),
    [anon_sym_YES] = ACTIONS(53),
    [anon_sym_TRUE] = ACTIONS(53),
    [anon_sym_Y] = ACTIONS(53),
    [anon_sym_0] = ACTIONS(53),
    [anon_sym_OFF] = ACTIONS(53),
    [anon_sym_NO] = ACTIONS(53),
    [anon_sym_FALSE] = ACTIONS(53),
    [anon_sym_N] = ACTIONS(53),
    [anon_sym_IGNORE] = ACTIONS(53),
    [anon_sym_NOTFOUND] = ACTIONS(53),
    [anon_sym_NOT] = ACTIONS(53),
    [anon_sym_AND] = ACTIONS(53),
    [anon_sym_OR] = ACTIONS(53),
    [anon_sym_COMMAND] = ACTIONS(53),
    [anon_sym_POLICY] = ACTIONS(53),
    [anon_sym_TARGET] = ACTIONS(53),
    [anon_sym_TEST] = ACTIONS(53),
    [anon_sym_DEFINED] = ACTIONS(53),
    [anon_sym_CACHE] = ACTIONS(53),
    [anon_sym_ENV] = ACTIONS(53),
    [anon_sym_IN_LIST] = ACTIONS(53),
    [anon_sym_EXISTS] = ACTIONS(53),
    [anon_sym_IS_NEWER_THAN] = ACTIONS(53),
    [anon_sym_IS_DIRECTORY] = ACTIONS(53),
    [anon_sym_IS_SYMLINK] = ACTIONS(53),
    [anon_sym_IS_ABSOLUTE] = ACTIONS(53),
    [anon_sym_MATCHES] = ACTIONS(53),
    [anon_sym_LESS] = ACTIONS(53),
    [anon_sym_GREATER] = ACTIONS(53),
    [anon_sym_EQUAL] = ACTIONS(53),
    [anon_sym_LESS_EQUAL] = ACTIONS(53),
    [anon_sym_GREATER_EQUAL] = ACTIONS(53),
    [anon_sym_STRLESS] = ACTIONS(53),
    [anon_sym_STRGREATER] = ACTIONS(53),
    [anon_sym_STREQUAL] = ACTIONS(53),
    [anon_sym_STRLESS_EQUAL] = ACTIONS(53),
    [anon_sym_STRGREATER_EQUAL] = ACTIONS(53),
    [anon_sym_VERSION_LESS] = ACTIONS(53),
    [anon_sym_VERSION_GREATER] = ACTIONS(53),
    [anon_sym_VERSION_EQUAL] = ACTIONS(53),
    [anon_sym_VERSION_LESS_EQUAL] = ACTIONS(53),
    [anon_sym_VERSION_GREATER_EQUAL] = ACTIONS(53),
    [anon_sym_RPAREN] = ACTIONS(55),
  },
  [8] = {
    [sym_escape_sequence] = STATE(36),
    [sym__escape_encoded] = STATE(54),
    [sym_variable_ref] = STATE(36),
    [sym_normal_var] = STATE(49),
    [sym_env_var] = STATE(49),
    [sym_cache_var] = STATE(49),
    [sym_argument] = STATE(197),
    [sym_bracket_argument] = STATE(191),
    [sym__bracket_open] = STATE(133),
    [sym_quoted_argument] = STATE(191),
    [sym_unquoted_argument] = STATE(191),
    [aux_sym_unquoted_argument_repeat1] = STATE(36),
    [aux_sym_if_command_repeat1] = STATE(15),
    [sym__escape_identity] = ACTIONS(11),
    [anon_sym_BSLASHt] = ACTIONS(11),
    [anon_sym_BSLASHr] = ACTIONS(11),
    [anon_sym_BSLASHn] = ACTIONS(11),
    [sym__escape_semicolon] = ACTIONS(11),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(13),
    [anon_sym_DOLLARENV] = ACTIONS(15),
    [anon_sym_DOLLARCACHE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_quoted_element_token2] = ACTIONS(57),
    [aux_sym_unquoted_argument_token1] = ACTIONS(25),
    [aux_sym_if_command_token1] = ACTIONS(57),
    [anon_sym_1] = ACTIONS(59),
    [anon_sym_ON] = ACTIONS(59),
    [anon_sym_YES] = ACTIONS(59),
    [anon_sym_TRUE] = ACTIONS(59),
    [anon_sym_Y] = ACTIONS(59),
    [anon_sym_0] = ACTIONS(59),
    [anon_sym_OFF] = ACTIONS(59),
    [anon_sym_NO] = ACTIONS(59),
    [anon_sym_FALSE] = ACTIONS(59),
    [anon_sym_N] = ACTIONS(59),
    [anon_sym_IGNORE] = ACTIONS(59),
    [anon_sym_NOTFOUND] = ACTIONS(59),
    [anon_sym_NOT] = ACTIONS(59),
    [anon_sym_AND] = ACTIONS(59),
    [anon_sym_OR] = ACTIONS(59),
    [anon_sym_COMMAND] = ACTIONS(59),
    [anon_sym_POLICY] = ACTIONS(59),
    [anon_sym_TARGET] = ACTIONS(59),
    [anon_sym_TEST] = ACTIONS(59),
    [anon_sym_DEFINED] = ACTIONS(59),
    [anon_sym_CACHE] = ACTIONS(59),
    [anon_sym_ENV] = ACTIONS(59),
    [anon_sym_IN_LIST] = ACTIONS(59),
    [anon_sym_EXISTS] = ACTIONS(59),
    [anon_sym_IS_NEWER_THAN] = ACTIONS(59),
    [anon_sym_IS_DIRECTORY] = ACTIONS(59),
    [anon_sym_IS_SYMLINK] = ACTIONS(59),
    [anon_sym_IS_ABSOLUTE] = ACTIONS(59),
    [anon_sym_MATCHES] = ACTIONS(59),
    [anon_sym_LESS] = ACTIONS(59),
    [anon_sym_GREATER] = ACTIONS(59),
    [anon_sym_EQUAL] = ACTIONS(59),
    [anon_sym_LESS_EQUAL] = ACTIONS(59),
    [anon_sym_GREATER_EQUAL] = ACTIONS(59),
    [anon_sym_STRLESS] = ACTIONS(59),
    [anon_sym_STRGREATER] = ACTIONS(59),
    [anon_sym_STREQUAL] = ACTIONS(59),
    [anon_sym_STRLESS_EQUAL] = ACTIONS(59),
    [anon_sym_STRGREATER_EQUAL] = ACTIONS(59),
    [anon_sym_VERSION_LESS] = ACTIONS(59),
    [anon_sym_VERSION_GREATER] = ACTIONS(59),
    [anon_sym_VERSION_EQUAL] = ACTIONS(59),
    [anon_sym_VERSION_LESS_EQUAL] = ACTIONS(59),
    [anon_sym_VERSION_GREATER_EQUAL] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(57),
  },
  [9] = {
    [sym_escape_sequence] = STATE(36),
    [sym__escape_encoded] = STATE(54),
    [sym_variable_ref] = STATE(36),
    [sym_normal_var] = STATE(49),
    [sym_env_var] = STATE(49),
    [sym_cache_var] = STATE(49),
    [sym_argument] = STATE(125),
    [sym_bracket_argument] = STATE(191),
    [sym__bracket_open] = STATE(133),
    [sym_quoted_argument] = STATE(191),
    [sym_unquoted_argument] = STATE(191),
    [aux_sym_unquoted_argument_repeat1] = STATE(36),
    [aux_sym_if_command_repeat1] = STATE(10),
    [sym__escape_identity] = ACTIONS(11),
    [anon_sym_BSLASHt] = ACTIONS(11),
    [anon_sym_BSLASHr] = ACTIONS(11),
    [anon_sym_BSLASHn] = ACTIONS(11),
    [sym__escape_semicolon] = ACTIONS(11),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(13),
    [anon_sym_DOLLARENV] = ACTIONS(15),
    [anon_sym_DOLLARCACHE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_quoted_element_token2] = ACTIONS(61),
    [aux_sym_unquoted_argument_token1] = ACTIONS(25),
    [aux_sym_if_command_token1] = ACTIONS(61),
    [anon_sym_1] = ACTIONS(63),
    [anon_sym_ON] = ACTIONS(63),
    [anon_sym_YES] = ACTIONS(63),
    [anon_sym_TRUE] = ACTIONS(63),
    [anon_sym_Y] = ACTIONS(63),
    [anon_sym_0] = ACTIONS(63),
    [anon_sym_OFF] = ACTIONS(63),
    [anon_sym_NO] = ACTIONS(63),
    [anon_sym_FALSE] = ACTIONS(63),
    [anon_sym_N] = ACTIONS(63),
    [anon_sym_IGNORE] = ACTIONS(63),
    [anon_sym_NOTFOUND] = ACTIONS(63),
    [anon_sym_NOT] = ACTIONS(63),
    [anon_sym_AND] = ACTIONS(63),
    [anon_sym_OR] = ACTIONS(63),
    [anon_sym_COMMAND] = ACTIONS(63),
    [anon_sym_POLICY] = ACTIONS(63),
    [anon_sym_TARGET] = ACTIONS(63),
    [anon_sym_TEST] = ACTIONS(63),
    [anon_sym_DEFINED] = ACTIONS(63),
    [anon_sym_CACHE] = ACTIONS(63),
    [anon_sym_ENV] = ACTIONS(63),
    [anon_sym_IN_LIST] = ACTIONS(63),
    [anon_sym_EXISTS] = ACTIONS(63),
    [anon_sym_IS_NEWER_THAN] = ACTIONS(63),
    [anon_sym_IS_DIRECTORY] = ACTIONS(63),
    [anon_sym_IS_SYMLINK] = ACTIONS(63),
    [anon_sym_IS_ABSOLUTE] = ACTIONS(63),
    [anon_sym_MATCHES] = ACTIONS(63),
    [anon_sym_LESS] = ACTIONS(63),
    [anon_sym_GREATER] = ACTIONS(63),
    [anon_sym_EQUAL] = ACTIONS(63),
    [anon_sym_LESS_EQUAL] = ACTIONS(63),
    [anon_sym_GREATER_EQUAL] = ACTIONS(63),
    [anon_sym_STRLESS] = ACTIONS(63),
    [anon_sym_STRGREATER] = ACTIONS(63),
    [anon_sym_STREQUAL] = ACTIONS(63),
    [anon_sym_STRLESS_EQUAL] = ACTIONS(63),
    [anon_sym_STRGREATER_EQUAL] = ACTIONS(63),
    [anon_sym_VERSION_LESS] = ACTIONS(63),
    [anon_sym_VERSION_GREATER] = ACTIONS(63),
    [anon_sym_VERSION_EQUAL] = ACTIONS(63),
    [anon_sym_VERSION_LESS_EQUAL] = ACTIONS(63),
    [anon_sym_VERSION_GREATER_EQUAL] = ACTIONS(63),
    [anon_sym_RPAREN] = ACTIONS(65),
  },
  [10] = {
    [sym_escape_sequence] = STATE(36),
    [sym__escape_encoded] = STATE(54),
    [sym_variable_ref] = STATE(36),
    [sym_normal_var] = STATE(49),
    [sym_env_var] = STATE(49),
    [sym_cache_var] = STATE(49),
    [sym_argument] = STATE(122),
    [sym_bracket_argument] = STATE(191),
    [sym__bracket_open] = STATE(133),
    [sym_quoted_argument] = STATE(191),
    [sym_unquoted_argument] = STATE(191),
    [aux_sym_unquoted_argument_repeat1] = STATE(36),
    [aux_sym_if_command_repeat1] = STATE(15),
    [sym__escape_identity] = ACTIONS(11),
    [anon_sym_BSLASHt] = ACTIONS(11),
    [anon_sym_BSLASHr] = ACTIONS(11),
    [anon_sym_BSLASHn] = ACTIONS(11),
    [sym__escape_semicolon] = ACTIONS(11),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(13),
    [anon_sym_DOLLARENV] = ACTIONS(15),
    [anon_sym_DOLLARCACHE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_quoted_element_token2] = ACTIONS(37),
    [aux_sym_unquoted_argument_token1] = ACTIONS(25),
    [aux_sym_if_command_token1] = ACTIONS(37),
    [anon_sym_1] = ACTIONS(67),
    [anon_sym_ON] = ACTIONS(67),
    [anon_sym_YES] = ACTIONS(67),
    [anon_sym_TRUE] = ACTIONS(67),
    [anon_sym_Y] = ACTIONS(67),
    [anon_sym_0] = ACTIONS(67),
    [anon_sym_OFF] = ACTIONS(67),
    [anon_sym_NO] = ACTIONS(67),
    [anon_sym_FALSE] = ACTIONS(67),
    [anon_sym_N] = ACTIONS(67),
    [anon_sym_IGNORE] = ACTIONS(67),
    [anon_sym_NOTFOUND] = ACTIONS(67),
    [anon_sym_NOT] = ACTIONS(67),
    [anon_sym_AND] = ACTIONS(67),
    [anon_sym_OR] = ACTIONS(67),
    [anon_sym_COMMAND] = ACTIONS(67),
    [anon_sym_POLICY] = ACTIONS(67),
    [anon_sym_TARGET] = ACTIONS(67),
    [anon_sym_TEST] = ACTIONS(67),
    [anon_sym_DEFINED] = ACTIONS(67),
    [anon_sym_CACHE] = ACTIONS(67),
    [anon_sym_ENV] = ACTIONS(67),
    [anon_sym_IN_LIST] = ACTIONS(67),
    [anon_sym_EXISTS] = ACTIONS(67),
    [anon_sym_IS_NEWER_THAN] = ACTIONS(67),
    [anon_sym_IS_DIRECTORY] = ACTIONS(67),
    [anon_sym_IS_SYMLINK] = ACTIONS(67),
    [anon_sym_IS_ABSOLUTE] = ACTIONS(67),
    [anon_sym_MATCHES] = ACTIONS(67),
    [anon_sym_LESS] = ACTIONS(67),
    [anon_sym_GREATER] = ACTIONS(67),
    [anon_sym_EQUAL] = ACTIONS(67),
    [anon_sym_LESS_EQUAL] = ACTIONS(67),
    [anon_sym_GREATER_EQUAL] = ACTIONS(67),
    [anon_sym_STRLESS] = ACTIONS(67),
    [anon_sym_STRGREATER] = ACTIONS(67),
    [anon_sym_STREQUAL] = ACTIONS(67),
    [anon_sym_STRLESS_EQUAL] = ACTIONS(67),
    [anon_sym_STRGREATER_EQUAL] = ACTIONS(67),
    [anon_sym_VERSION_LESS] = ACTIONS(67),
    [anon_sym_VERSION_GREATER] = ACTIONS(67),
    [anon_sym_VERSION_EQUAL] = ACTIONS(67),
    [anon_sym_VERSION_LESS_EQUAL] = ACTIONS(67),
    [anon_sym_VERSION_GREATER_EQUAL] = ACTIONS(67),
    [anon_sym_RPAREN] = ACTIONS(69),
  },
  [11] = {
    [sym_escape_sequence] = STATE(36),
    [sym__escape_encoded] = STATE(54),
    [sym_variable_ref] = STATE(36),
    [sym_normal_var] = STATE(49),
    [sym_env_var] = STATE(49),
    [sym_cache_var] = STATE(49),
    [sym_argument] = STATE(112),
    [sym_bracket_argument] = STATE(191),
    [sym__bracket_open] = STATE(133),
    [sym_quoted_argument] = STATE(191),
    [sym_unquoted_argument] = STATE(191),
    [aux_sym_unquoted_argument_repeat1] = STATE(36),
    [aux_sym_if_command_repeat1] = STATE(14),
    [sym__escape_identity] = ACTIONS(11),
    [anon_sym_BSLASHt] = ACTIONS(11),
    [anon_sym_BSLASHr] = ACTIONS(11),
    [anon_sym_BSLASHn] = ACTIONS(11),
    [sym__escape_semicolon] = ACTIONS(11),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(13),
    [anon_sym_DOLLARENV] = ACTIONS(15),
    [anon_sym_DOLLARCACHE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_quoted_element_token2] = ACTIONS(71),
    [aux_sym_unquoted_argument_token1] = ACTIONS(25),
    [aux_sym_if_command_token1] = ACTIONS(71),
    [anon_sym_1] = ACTIONS(73),
    [anon_sym_ON] = ACTIONS(73),
    [anon_sym_YES] = ACTIONS(73),
    [anon_sym_TRUE] = ACTIONS(73),
    [anon_sym_Y] = ACTIONS(73),
    [anon_sym_0] = ACTIONS(73),
    [anon_sym_OFF] = ACTIONS(73),
    [anon_sym_NO] = ACTIONS(73),
    [anon_sym_FALSE] = ACTIONS(73),
    [anon_sym_N] = ACTIONS(73),
    [anon_sym_IGNORE] = ACTIONS(73),
    [anon_sym_NOTFOUND] = ACTIONS(73),
    [anon_sym_NOT] = ACTIONS(73),
    [anon_sym_AND] = ACTIONS(73),
    [anon_sym_OR] = ACTIONS(73),
    [anon_sym_COMMAND] = ACTIONS(73),
    [anon_sym_POLICY] = ACTIONS(73),
    [anon_sym_TARGET] = ACTIONS(73),
    [anon_sym_TEST] = ACTIONS(73),
    [anon_sym_DEFINED] = ACTIONS(73),
    [anon_sym_CACHE] = ACTIONS(73),
    [anon_sym_ENV] = ACTIONS(73),
    [anon_sym_IN_LIST] = ACTIONS(73),
    [anon_sym_EXISTS] = ACTIONS(73),
    [anon_sym_IS_NEWER_THAN] = ACTIONS(73),
    [anon_sym_IS_DIRECTORY] = ACTIONS(73),
    [anon_sym_IS_SYMLINK] = ACTIONS(73),
    [anon_sym_IS_ABSOLUTE] = ACTIONS(73),
    [anon_sym_MATCHES] = ACTIONS(73),
    [anon_sym_LESS] = ACTIONS(73),
    [anon_sym_GREATER] = ACTIONS(73),
    [anon_sym_EQUAL] = ACTIONS(73),
    [anon_sym_LESS_EQUAL] = ACTIONS(73),
    [anon_sym_GREATER_EQUAL] = ACTIONS(73),
    [anon_sym_STRLESS] = ACTIONS(73),
    [anon_sym_STRGREATER] = ACTIONS(73),
    [anon_sym_STREQUAL] = ACTIONS(73),
    [anon_sym_STRLESS_EQUAL] = ACTIONS(73),
    [anon_sym_STRGREATER_EQUAL] = ACTIONS(73),
    [anon_sym_VERSION_LESS] = ACTIONS(73),
    [anon_sym_VERSION_GREATER] = ACTIONS(73),
    [anon_sym_VERSION_EQUAL] = ACTIONS(73),
    [anon_sym_VERSION_LESS_EQUAL] = ACTIONS(73),
    [anon_sym_VERSION_GREATER_EQUAL] = ACTIONS(73),
  },
  [12] = {
    [sym_escape_sequence] = STATE(36),
    [sym__escape_encoded] = STATE(54),
    [sym_variable_ref] = STATE(36),
    [sym_normal_var] = STATE(49),
    [sym_env_var] = STATE(49),
    [sym_cache_var] = STATE(49),
    [sym_argument] = STATE(111),
    [sym_bracket_argument] = STATE(191),
    [sym__bracket_open] = STATE(133),
    [sym_quoted_argument] = STATE(191),
    [sym_unquoted_argument] = STATE(191),
    [aux_sym_unquoted_argument_repeat1] = STATE(36),
    [aux_sym_if_command_repeat1] = STATE(15),
    [sym__escape_identity] = ACTIONS(11),
    [anon_sym_BSLASHt] = ACTIONS(11),
    [anon_sym_BSLASHr] = ACTIONS(11),
    [anon_sym_BSLASHn] = ACTIONS(11),
    [sym__escape_semicolon] = ACTIONS(11),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(13),
    [anon_sym_DOLLARENV] = ACTIONS(15),
    [anon_sym_DOLLARCACHE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_quoted_element_token2] = ACTIONS(37),
    [aux_sym_unquoted_argument_token1] = ACTIONS(25),
    [aux_sym_if_command_token1] = ACTIONS(37),
    [anon_sym_1] = ACTIONS(75),
    [anon_sym_ON] = ACTIONS(75),
    [anon_sym_YES] = ACTIONS(75),
    [anon_sym_TRUE] = ACTIONS(75),
    [anon_sym_Y] = ACTIONS(75),
    [anon_sym_0] = ACTIONS(75),
    [anon_sym_OFF] = ACTIONS(75),
    [anon_sym_NO] = ACTIONS(75),
    [anon_sym_FALSE] = ACTIONS(75),
    [anon_sym_N] = ACTIONS(75),
    [anon_sym_IGNORE] = ACTIONS(75),
    [anon_sym_NOTFOUND] = ACTIONS(75),
    [anon_sym_NOT] = ACTIONS(75),
    [anon_sym_AND] = ACTIONS(75),
    [anon_sym_OR] = ACTIONS(75),
    [anon_sym_COMMAND] = ACTIONS(75),
    [anon_sym_POLICY] = ACTIONS(75),
    [anon_sym_TARGET] = ACTIONS(75),
    [anon_sym_TEST] = ACTIONS(75),
    [anon_sym_DEFINED] = ACTIONS(75),
    [anon_sym_CACHE] = ACTIONS(75),
    [anon_sym_ENV] = ACTIONS(75),
    [anon_sym_IN_LIST] = ACTIONS(75),
    [anon_sym_EXISTS] = ACTIONS(75),
    [anon_sym_IS_NEWER_THAN] = ACTIONS(75),
    [anon_sym_IS_DIRECTORY] = ACTIONS(75),
    [anon_sym_IS_SYMLINK] = ACTIONS(75),
    [anon_sym_IS_ABSOLUTE] = ACTIONS(75),
    [anon_sym_MATCHES] = ACTIONS(75),
    [anon_sym_LESS] = ACTIONS(75),
    [anon_sym_GREATER] = ACTIONS(75),
    [anon_sym_EQUAL] = ACTIONS(75),
    [anon_sym_LESS_EQUAL] = ACTIONS(75),
    [anon_sym_GREATER_EQUAL] = ACTIONS(75),
    [anon_sym_STRLESS] = ACTIONS(75),
    [anon_sym_STRGREATER] = ACTIONS(75),
    [anon_sym_STREQUAL] = ACTIONS(75),
    [anon_sym_STRLESS_EQUAL] = ACTIONS(75),
    [anon_sym_STRGREATER_EQUAL] = ACTIONS(75),
    [anon_sym_VERSION_LESS] = ACTIONS(75),
    [anon_sym_VERSION_GREATER] = ACTIONS(75),
    [anon_sym_VERSION_EQUAL] = ACTIONS(75),
    [anon_sym_VERSION_LESS_EQUAL] = ACTIONS(75),
    [anon_sym_VERSION_GREATER_EQUAL] = ACTIONS(75),
  },
  [13] = {
    [sym_escape_sequence] = STATE(36),
    [sym__escape_encoded] = STATE(54),
    [sym_variable_ref] = STATE(36),
    [sym_normal_var] = STATE(49),
    [sym_env_var] = STATE(49),
    [sym_cache_var] = STATE(49),
    [sym_argument] = STATE(132),
    [sym_bracket_argument] = STATE(191),
    [sym__bracket_open] = STATE(133),
    [sym_quoted_argument] = STATE(191),
    [sym_unquoted_argument] = STATE(191),
    [aux_sym_unquoted_argument_repeat1] = STATE(36),
    [aux_sym_if_command_repeat1] = STATE(12),
    [sym__escape_identity] = ACTIONS(11),
    [anon_sym_BSLASHt] = ACTIONS(11),
    [anon_sym_BSLASHr] = ACTIONS(11),
    [anon_sym_BSLASHn] = ACTIONS(11),
    [sym__escape_semicolon] = ACTIONS(11),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(13),
    [anon_sym_DOLLARENV] = ACTIONS(15),
    [anon_sym_DOLLARCACHE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_quoted_element_token2] = ACTIONS(77),
    [aux_sym_unquoted_argument_token1] = ACTIONS(25),
    [aux_sym_if_command_token1] = ACTIONS(77),
    [anon_sym_1] = ACTIONS(79),
    [anon_sym_ON] = ACTIONS(79),
    [anon_sym_YES] = ACTIONS(79),
    [anon_sym_TRUE] = ACTIONS(79),
    [anon_sym_Y] = ACTIONS(79),
    [anon_sym_0] = ACTIONS(79),
    [anon_sym_OFF] = ACTIONS(79),
    [anon_sym_NO] = ACTIONS(79),
    [anon_sym_FALSE] = ACTIONS(79),
    [anon_sym_N] = ACTIONS(79),
    [anon_sym_IGNORE] = ACTIONS(79),
    [anon_sym_NOTFOUND] = ACTIONS(79),
    [anon_sym_NOT] = ACTIONS(79),
    [anon_sym_AND] = ACTIONS(79),
    [anon_sym_OR] = ACTIONS(79),
    [anon_sym_COMMAND] = ACTIONS(79),
    [anon_sym_POLICY] = ACTIONS(79),
    [anon_sym_TARGET] = ACTIONS(79),
    [anon_sym_TEST] = ACTIONS(79),
    [anon_sym_DEFINED] = ACTIONS(79),
    [anon_sym_CACHE] = ACTIONS(79),
    [anon_sym_ENV] = ACTIONS(79),
    [anon_sym_IN_LIST] = ACTIONS(79),
    [anon_sym_EXISTS] = ACTIONS(79),
    [anon_sym_IS_NEWER_THAN] = ACTIONS(79),
    [anon_sym_IS_DIRECTORY] = ACTIONS(79),
    [anon_sym_IS_SYMLINK] = ACTIONS(79),
    [anon_sym_IS_ABSOLUTE] = ACTIONS(79),
    [anon_sym_MATCHES] = ACTIONS(79),
    [anon_sym_LESS] = ACTIONS(79),
    [anon_sym_GREATER] = ACTIONS(79),
    [anon_sym_EQUAL] = ACTIONS(79),
    [anon_sym_LESS_EQUAL] = ACTIONS(79),
    [anon_sym_GREATER_EQUAL] = ACTIONS(79),
    [anon_sym_STRLESS] = ACTIONS(79),
    [anon_sym_STRGREATER] = ACTIONS(79),
    [anon_sym_STREQUAL] = ACTIONS(79),
    [anon_sym_STRLESS_EQUAL] = ACTIONS(79),
    [anon_sym_STRGREATER_EQUAL] = ACTIONS(79),
    [anon_sym_VERSION_LESS] = ACTIONS(79),
    [anon_sym_VERSION_GREATER] = ACTIONS(79),
    [anon_sym_VERSION_EQUAL] = ACTIONS(79),
    [anon_sym_VERSION_LESS_EQUAL] = ACTIONS(79),
    [anon_sym_VERSION_GREATER_EQUAL] = ACTIONS(79),
  },
  [14] = {
    [sym_escape_sequence] = STATE(36),
    [sym__escape_encoded] = STATE(54),
    [sym_variable_ref] = STATE(36),
    [sym_normal_var] = STATE(49),
    [sym_env_var] = STATE(49),
    [sym_cache_var] = STATE(49),
    [sym_argument] = STATE(116),
    [sym_bracket_argument] = STATE(191),
    [sym__bracket_open] = STATE(133),
    [sym_quoted_argument] = STATE(191),
    [sym_unquoted_argument] = STATE(191),
    [aux_sym_unquoted_argument_repeat1] = STATE(36),
    [aux_sym_if_command_repeat1] = STATE(15),
    [sym__escape_identity] = ACTIONS(11),
    [anon_sym_BSLASHt] = ACTIONS(11),
    [anon_sym_BSLASHr] = ACTIONS(11),
    [anon_sym_BSLASHn] = ACTIONS(11),
    [sym__escape_semicolon] = ACTIONS(11),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(13),
    [anon_sym_DOLLARENV] = ACTIONS(15),
    [anon_sym_DOLLARCACHE] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_quoted_element_token2] = ACTIONS(37),
    [aux_sym_unquoted_argument_token1] = ACTIONS(25),
    [aux_sym_if_command_token1] = ACTIONS(37),
    [anon_sym_1] = ACTIONS(81),
    [anon_sym_ON] = ACTIONS(81),
    [anon_sym_YES] = ACTIONS(81),
    [anon_sym_TRUE] = ACTIONS(81),
    [anon_sym_Y] = ACTIONS(81),
    [anon_sym_0] = ACTIONS(81),
    [anon_sym_OFF] = ACTIONS(81),
    [anon_sym_NO] = ACTIONS(81),
    [anon_sym_FALSE] = ACTIONS(81),
    [anon_sym_N] = ACTIONS(81),
    [anon_sym_IGNORE] = ACTIONS(81),
    [anon_sym_NOTFOUND] = ACTIONS(81),
    [anon_sym_NOT] = ACTIONS(81),
    [anon_sym_AND] = ACTIONS(81),
    [anon_sym_OR] = ACTIONS(81),
    [anon_sym_COMMAND] = ACTIONS(81),
    [anon_sym_POLICY] = ACTIONS(81),
    [anon_sym_TARGET] = ACTIONS(81),
    [anon_sym_TEST] = ACTIONS(81),
    [anon_sym_DEFINED] = ACTIONS(81),
    [anon_sym_CACHE] = ACTIONS(81),
    [anon_sym_ENV] = ACTIONS(81),
    [anon_sym_IN_LIST] = ACTIONS(81),
    [anon_sym_EXISTS] = ACTIONS(81),
    [anon_sym_IS_NEWER_THAN] = ACTIONS(81),
    [anon_sym_IS_DIRECTORY] = ACTIONS(81),
    [anon_sym_IS_SYMLINK] = ACTIONS(81),
    [anon_sym_IS_ABSOLUTE] = ACTIONS(81),
    [anon_sym_MATCHES] = ACTIONS(81),
    [anon_sym_LESS] = ACTIONS(81),
    [anon_sym_GREATER] = ACTIONS(81),
    [anon_sym_EQUAL] = ACTIONS(81),
    [anon_sym_LESS_EQUAL] = ACTIONS(81),
    [anon_sym_GREATER_EQUAL] = ACTIONS(81),
    [anon_sym_STRLESS] = ACTIONS(81),
    [anon_sym_STRGREATER] = ACTIONS(81),
    [anon_sym_STREQUAL] = ACTIONS(81),
    [anon_sym_STRLESS_EQUAL] = ACTIONS(81),
    [anon_sym_STRGREATER_EQUAL] = ACTIONS(81),
    [anon_sym_VERSION_LESS] = ACTIONS(81),
    [anon_sym_VERSION_GREATER] = ACTIONS(81),
    [anon_sym_VERSION_EQUAL] = ACTIONS(81),
    [anon_sym_VERSION_LESS_EQUAL] = ACTIONS(81),
    [anon_sym_VERSION_GREATER_EQUAL] = ACTIONS(81),
  },
  [15] = {
    [aux_sym_if_command_repeat1] = STATE(15),
    [sym__escape_identity] = ACTIONS(83),
    [anon_sym_BSLASHt] = ACTIONS(83),
    [anon_sym_BSLASHr] = ACTIONS(83),
    [anon_sym_BSLASHn] = ACTIONS(83),
    [sym__escape_semicolon] = ACTIONS(83),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(83),
    [anon_sym_DOLLARENV] = ACTIONS(83),
    [anon_sym_DOLLARCACHE] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [aux_sym_quoted_element_token2] = ACTIONS(85),
    [aux_sym_unquoted_argument_token1] = ACTIONS(83),
    [aux_sym_if_command_token1] = ACTIONS(85),
    [anon_sym_1] = ACTIONS(83),
    [anon_sym_ON] = ACTIONS(83),
    [anon_sym_YES] = ACTIONS(83),
    [anon_sym_TRUE] = ACTIONS(83),
    [anon_sym_Y] = ACTIONS(83),
    [anon_sym_0] = ACTIONS(83),
    [anon_sym_OFF] = ACTIONS(83),
    [anon_sym_NO] = ACTIONS(83),
    [anon_sym_FALSE] = ACTIONS(83),
    [anon_sym_N] = ACTIONS(83),
    [anon_sym_IGNORE] = ACTIONS(83),
    [anon_sym_NOTFOUND] = ACTIONS(83),
    [anon_sym_NOT] = ACTIONS(83),
    [anon_sym_AND] = ACTIONS(83),
    [anon_sym_OR] = ACTIONS(83),
    [anon_sym_COMMAND] = ACTIONS(83),
    [anon_sym_POLICY] = ACTIONS(83),
    [anon_sym_TARGET] = ACTIONS(83),
    [anon_sym_TEST] = ACTIONS(83),
    [anon_sym_DEFINED] = ACTIONS(83),
    [anon_sym_CACHE] = ACTIONS(83),
    [anon_sym_ENV] = ACTIONS(83),
    [anon_sym_IN_LIST] = ACTIONS(83),
    [anon_sym_EXISTS] = ACTIONS(83),
    [anon_sym_IS_NEWER_THAN] = ACTIONS(83),
    [anon_sym_IS_DIRECTORY] = ACTIONS(83),
    [anon_sym_IS_SYMLINK] = ACTIONS(83),
    [anon_sym_IS_ABSOLUTE] = ACTIONS(83),
    [anon_sym_MATCHES] = ACTIONS(83),
    [anon_sym_LESS] = ACTIONS(83),
    [anon_sym_GREATER] = ACTIONS(83),
    [anon_sym_EQUAL] = ACTIONS(83),
    [anon_sym_LESS_EQUAL] = ACTIONS(83),
    [anon_sym_GREATER_EQUAL] = ACTIONS(83),
    [anon_sym_STRLESS] = ACTIONS(83),
    [anon_sym_STRGREATER] = ACTIONS(83),
    [anon_sym_STREQUAL] = ACTIONS(83),
    [anon_sym_STRLESS_EQUAL] = ACTIONS(83),
    [anon_sym_STRGREATER_EQUAL] = ACTIONS(83),
    [anon_sym_VERSION_LESS] = ACTIONS(83),
    [anon_sym_VERSION_GREATER] = ACTIONS(83),
    [anon_sym_VERSION_EQUAL] = ACTIONS(83),
    [anon_sym_VERSION_LESS_EQUAL] = ACTIONS(83),
    [anon_sym_VERSION_GREATER_EQUAL] = ACTIONS(83),
    [anon_sym_RPAREN] = ACTIONS(83),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(13), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(15), 1,
      anon_sym_DOLLARENV,
    ACTIONS(17), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      aux_sym_unquoted_argument_token1,
    STATE(32), 1,
      aux_sym_if_command_repeat1,
    STATE(54), 1,
      sym__escape_encoded,
    STATE(133), 1,
      sym__bracket_open,
    STATE(203), 1,
      sym_argument,
    ACTIONS(88), 3,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
      anon_sym_RPAREN,
    STATE(36), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(49), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(191), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(11), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
    ACTIONS(90), 5,
      anon_sym_IN,
      anon_sym_RANGE,
      anon_sym_ZIP_LISTS,
      anon_sym_LISTS,
      anon_sym_ITEMS,
  [65] = 16,
    ACTIONS(13), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(15), 1,
      anon_sym_DOLLARENV,
    ACTIONS(17), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      aux_sym_unquoted_argument_token1,
    STATE(18), 1,
      aux_sym_if_command_repeat1,
    STATE(54), 1,
      sym__escape_encoded,
    STATE(133), 1,
      sym__bracket_open,
    STATE(135), 1,
      sym_argument,
    ACTIONS(92), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
    STATE(36), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(49), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(191), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(11), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
    ACTIONS(94), 5,
      anon_sym_IN,
      anon_sym_RANGE,
      anon_sym_ZIP_LISTS,
      anon_sym_LISTS,
      anon_sym_ITEMS,
  [129] = 16,
    ACTIONS(13), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(15), 1,
      anon_sym_DOLLARENV,
    ACTIONS(17), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      aux_sym_unquoted_argument_token1,
    STATE(32), 1,
      aux_sym_if_command_repeat1,
    STATE(54), 1,
      sym__escape_encoded,
    STATE(133), 1,
      sym__bracket_open,
    STATE(155), 1,
      sym_argument,
    ACTIONS(96), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
    STATE(36), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(49), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(191), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(11), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
    ACTIONS(98), 5,
      anon_sym_IN,
      anon_sym_RANGE,
      anon_sym_ZIP_LISTS,
      anon_sym_LISTS,
      anon_sym_ITEMS,
  [193] = 16,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(102), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(104), 1,
      anon_sym_DOLLARENV,
    ACTIONS(106), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(112), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(114), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      aux_sym_if_command_repeat1,
    STATE(79), 1,
      sym__escape_encoded,
    STATE(148), 1,
      sym__bracket_open,
    STATE(216), 1,
      sym_argument,
    ACTIONS(110), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
    STATE(40), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(72), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(214), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(100), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [253] = 16,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(102), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(104), 1,
      anon_sym_DOLLARENV,
    ACTIONS(106), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(112), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(116), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      aux_sym_if_command_repeat1,
    STATE(79), 1,
      sym__escape_encoded,
    STATE(148), 1,
      sym__bracket_open,
    STATE(238), 1,
      sym_argument,
    ACTIONS(110), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
    STATE(40), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(72), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(214), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(100), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [313] = 16,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(102), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(104), 1,
      anon_sym_DOLLARENV,
    ACTIONS(106), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(112), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(120), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      aux_sym_if_command_repeat1,
    STATE(79), 1,
      sym__escape_encoded,
    STATE(148), 1,
      sym__bracket_open,
    STATE(226), 1,
      sym_argument,
    ACTIONS(118), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
    STATE(40), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(72), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(214), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(100), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [373] = 16,
    ACTIONS(13), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(15), 1,
      anon_sym_DOLLARENV,
    ACTIONS(17), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      aux_sym_if_command_repeat1,
    STATE(54), 1,
      sym__escape_encoded,
    STATE(133), 1,
      sym__bracket_open,
    STATE(150), 1,
      sym_argument,
    ACTIONS(110), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
    STATE(36), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(49), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(191), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(11), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [433] = 16,
    ACTIONS(13), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(15), 1,
      anon_sym_DOLLARENV,
    ACTIONS(17), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      aux_sym_if_command_repeat1,
    STATE(54), 1,
      sym__escape_encoded,
    STATE(126), 1,
      sym_argument,
    STATE(133), 1,
      sym__bracket_open,
    ACTIONS(110), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
    STATE(36), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(49), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(191), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(11), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [493] = 16,
    ACTIONS(13), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(15), 1,
      anon_sym_DOLLARENV,
    ACTIONS(17), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(126), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      aux_sym_if_command_repeat1,
    STATE(54), 1,
      sym__escape_encoded,
    STATE(133), 1,
      sym__bracket_open,
    STATE(144), 1,
      sym_argument,
    ACTIONS(110), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
    STATE(36), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(49), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(191), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(11), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [553] = 16,
    ACTIONS(13), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(15), 1,
      anon_sym_DOLLARENV,
    ACTIONS(17), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(130), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      aux_sym_if_command_repeat1,
    STATE(54), 1,
      sym__escape_encoded,
    STATE(133), 1,
      sym__bracket_open,
    STATE(147), 1,
      sym_argument,
    ACTIONS(128), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
    STATE(36), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(49), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(191), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(11), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [613] = 16,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(102), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(104), 1,
      anon_sym_DOLLARENV,
    ACTIONS(106), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(112), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(134), 1,
      anon_sym_RPAREN,
    STATE(19), 1,
      aux_sym_if_command_repeat1,
    STATE(79), 1,
      sym__escape_encoded,
    STATE(148), 1,
      sym__bracket_open,
    STATE(218), 1,
      sym_argument,
    ACTIONS(132), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
    STATE(40), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(72), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(214), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(100), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [673] = 16,
    ACTIONS(13), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(15), 1,
      anon_sym_DOLLARENV,
    ACTIONS(17), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(138), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      aux_sym_if_command_repeat1,
    STATE(54), 1,
      sym__escape_encoded,
    STATE(130), 1,
      sym_argument,
    STATE(133), 1,
      sym__bracket_open,
    ACTIONS(136), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
    STATE(36), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(49), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(191), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(11), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [733] = 16,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(102), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(104), 1,
      anon_sym_DOLLARENV,
    ACTIONS(106), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(112), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      aux_sym_if_command_repeat1,
    STATE(79), 1,
      sym__escape_encoded,
    STATE(148), 1,
      sym__bracket_open,
    STATE(232), 1,
      sym_argument,
    ACTIONS(140), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
    STATE(40), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(72), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(214), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(100), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [793] = 16,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(102), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(104), 1,
      anon_sym_DOLLARENV,
    ACTIONS(106), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(112), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      aux_sym_if_command_repeat1,
    STATE(79), 1,
      sym__escape_encoded,
    STATE(148), 1,
      sym__bracket_open,
    STATE(239), 1,
      sym_argument,
    ACTIONS(110), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
    STATE(40), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(72), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(214), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(100), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [853] = 15,
    ACTIONS(13), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(15), 1,
      anon_sym_DOLLARENV,
    ACTIONS(17), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      aux_sym_unquoted_argument_token1,
    STATE(48), 1,
      aux_sym_if_command_repeat1,
    STATE(54), 1,
      sym__escape_encoded,
    STATE(133), 1,
      sym__bracket_open,
    STATE(200), 1,
      sym_argument,
    ACTIONS(146), 3,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
      anon_sym_RPAREN,
    STATE(36), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(49), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(191), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(11), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [911] = 16,
    ACTIONS(13), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(15), 1,
      anon_sym_DOLLARENV,
    ACTIONS(17), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(150), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      aux_sym_if_command_repeat1,
    STATE(54), 1,
      sym__escape_encoded,
    STATE(133), 1,
      sym__bracket_open,
    STATE(142), 1,
      sym_argument,
    ACTIONS(148), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
    STATE(36), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(49), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(191), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(11), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [971] = 3,
    STATE(32), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(152), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
    ACTIONS(83), 17,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV,
      anon_sym_DOLLARCACHE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      aux_sym_unquoted_argument_token1,
      anon_sym_RPAREN,
      anon_sym_IN,
      anon_sym_RANGE,
      anon_sym_ZIP_LISTS,
      anon_sym_LISTS,
      anon_sym_ITEMS,
  [998] = 9,
    ACTIONS(158), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(161), 1,
      anon_sym_DOLLARENV,
    ACTIONS(164), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(169), 1,
      aux_sym_unquoted_argument_token1,
    STATE(54), 1,
      sym__escape_encoded,
    ACTIONS(167), 3,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
      anon_sym_RPAREN,
    STATE(33), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(49), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(155), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1036] = 11,
    ACTIONS(174), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(176), 1,
      anon_sym_DOLLARENV,
    ACTIONS(178), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      aux_sym_quoted_element_token1,
    ACTIONS(184), 1,
      anon_sym_BSLASH,
    STATE(67), 1,
      sym__escape_encoded,
    STATE(221), 1,
      sym_quoted_element,
    STATE(37), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_quoted_element_repeat1,
    STATE(60), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(172), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1078] = 11,
    ACTIONS(174), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(176), 1,
      anon_sym_DOLLARENV,
    ACTIONS(178), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(182), 1,
      aux_sym_quoted_element_token1,
    ACTIONS(184), 1,
      anon_sym_BSLASH,
    ACTIONS(186), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      sym__escape_encoded,
    STATE(223), 1,
      sym_quoted_element,
    STATE(37), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_quoted_element_repeat1,
    STATE(60), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(172), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1120] = 9,
    ACTIONS(13), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(15), 1,
      anon_sym_DOLLARENV,
    ACTIONS(17), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(190), 1,
      aux_sym_unquoted_argument_token1,
    STATE(54), 1,
      sym__escape_encoded,
    ACTIONS(188), 3,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
      anon_sym_RPAREN,
    STATE(33), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(49), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(11), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1158] = 10,
    ACTIONS(174), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(176), 1,
      anon_sym_DOLLARENV,
    ACTIONS(178), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(184), 1,
      anon_sym_BSLASH,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      aux_sym_quoted_element_token1,
    STATE(67), 1,
      sym__escape_encoded,
    STATE(38), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_quoted_element_repeat1,
    STATE(60), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(172), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1197] = 10,
    ACTIONS(199), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(202), 1,
      anon_sym_DOLLARENV,
    ACTIONS(205), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      aux_sym_quoted_element_token1,
    ACTIONS(213), 1,
      anon_sym_BSLASH,
    STATE(67), 1,
      sym__escape_encoded,
    STATE(38), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_quoted_element_repeat1,
    STATE(60), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(196), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1236] = 9,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    ACTIONS(219), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(222), 1,
      anon_sym_DOLLARENV,
    ACTIONS(225), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(228), 1,
      aux_sym_unquoted_argument_token1,
    STATE(79), 1,
      sym__escape_encoded,
    STATE(39), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(72), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(216), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1272] = 9,
    ACTIONS(102), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(104), 1,
      anon_sym_DOLLARENV,
    ACTIONS(106), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(188), 1,
      anon_sym_RPAREN,
    ACTIONS(231), 1,
      aux_sym_unquoted_argument_token1,
    STATE(79), 1,
      sym__escape_encoded,
    STATE(39), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(72), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(100), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1308] = 10,
    ACTIONS(5), 1,
      sym_if,
    ACTIONS(7), 1,
      sym_foreach,
    ACTIONS(233), 1,
      sym_elseif,
    ACTIONS(235), 1,
      sym_else,
    ACTIONS(237), 1,
      sym_endif,
    ACTIONS(239), 1,
      sym_identifier,
    STATE(41), 1,
      sym_if_command,
    STATE(55), 1,
      sym_foreach_command,
    STATE(102), 1,
      sym_endif_command,
    STATE(44), 7,
      sym_elseif_command,
      sym_else_command,
      sym_normal_command,
      sym_foreach_loop,
      sym_if_condition,
      sym__command_invocation,
      aux_sym_if_condition_repeat1,
  [1345] = 10,
    ACTIONS(5), 1,
      sym_if,
    ACTIONS(7), 1,
      sym_foreach,
    ACTIONS(233), 1,
      sym_elseif,
    ACTIONS(235), 1,
      sym_else,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(241), 1,
      sym_endif,
    STATE(41), 1,
      sym_if_command,
    STATE(55), 1,
      sym_foreach_command,
    STATE(169), 1,
      sym_endif_command,
    STATE(45), 7,
      sym_elseif_command,
      sym_else_command,
      sym_normal_command,
      sym_foreach_loop,
      sym_if_condition,
      sym__command_invocation,
      aux_sym_if_condition_repeat1,
  [1382] = 10,
    ACTIONS(5), 1,
      sym_if,
    ACTIONS(7), 1,
      sym_foreach,
    ACTIONS(233), 1,
      sym_elseif,
    ACTIONS(235), 1,
      sym_else,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(243), 1,
      sym_endif,
    STATE(41), 1,
      sym_if_command,
    STATE(55), 1,
      sym_foreach_command,
    STATE(188), 1,
      sym_endif_command,
    STATE(47), 7,
      sym_elseif_command,
      sym_else_command,
      sym_normal_command,
      sym_foreach_loop,
      sym_if_condition,
      sym__command_invocation,
      aux_sym_if_condition_repeat1,
  [1419] = 10,
    ACTIONS(5), 1,
      sym_if,
    ACTIONS(7), 1,
      sym_foreach,
    ACTIONS(233), 1,
      sym_elseif,
    ACTIONS(235), 1,
      sym_else,
    ACTIONS(237), 1,
      sym_endif,
    ACTIONS(239), 1,
      sym_identifier,
    STATE(41), 1,
      sym_if_command,
    STATE(55), 1,
      sym_foreach_command,
    STATE(100), 1,
      sym_endif_command,
    STATE(47), 7,
      sym_elseif_command,
      sym_else_command,
      sym_normal_command,
      sym_foreach_loop,
      sym_if_condition,
      sym__command_invocation,
      aux_sym_if_condition_repeat1,
  [1456] = 10,
    ACTIONS(5), 1,
      sym_if,
    ACTIONS(7), 1,
      sym_foreach,
    ACTIONS(233), 1,
      sym_elseif,
    ACTIONS(235), 1,
      sym_else,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(241), 1,
      sym_endif,
    STATE(41), 1,
      sym_if_command,
    STATE(55), 1,
      sym_foreach_command,
    STATE(172), 1,
      sym_endif_command,
    STATE(47), 7,
      sym_elseif_command,
      sym_else_command,
      sym_normal_command,
      sym_foreach_loop,
      sym_if_condition,
      sym__command_invocation,
      aux_sym_if_condition_repeat1,
  [1493] = 10,
    ACTIONS(5), 1,
      sym_if,
    ACTIONS(7), 1,
      sym_foreach,
    ACTIONS(233), 1,
      sym_elseif,
    ACTIONS(235), 1,
      sym_else,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(243), 1,
      sym_endif,
    STATE(41), 1,
      sym_if_command,
    STATE(55), 1,
      sym_foreach_command,
    STATE(160), 1,
      sym_endif_command,
    STATE(43), 7,
      sym_elseif_command,
      sym_else_command,
      sym_normal_command,
      sym_foreach_loop,
      sym_if_condition,
      sym__command_invocation,
      aux_sym_if_condition_repeat1,
  [1530] = 9,
    ACTIONS(245), 1,
      sym_if,
    ACTIONS(248), 1,
      sym_elseif,
    ACTIONS(251), 1,
      sym_else,
    ACTIONS(254), 1,
      sym_endif,
    ACTIONS(256), 1,
      sym_foreach,
    ACTIONS(259), 1,
      sym_identifier,
    STATE(41), 1,
      sym_if_command,
    STATE(55), 1,
      sym_foreach_command,
    STATE(47), 7,
      sym_elseif_command,
      sym_else_command,
      sym_normal_command,
      sym_foreach_loop,
      sym_if_condition,
      sym__command_invocation,
      aux_sym_if_condition_repeat1,
  [1564] = 3,
    STATE(48), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(262), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
    ACTIONS(83), 12,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV,
      anon_sym_DOLLARCACHE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      aux_sym_unquoted_argument_token1,
      anon_sym_RPAREN,
  [1586] = 1,
    ACTIONS(265), 12,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV,
      anon_sym_DOLLARCACHE,
      aux_sym_quoted_element_token2,
      aux_sym_unquoted_argument_token1,
      aux_sym_if_command_token1,
      anon_sym_RPAREN,
  [1601] = 8,
    ACTIONS(5), 1,
      sym_if,
    ACTIONS(7), 1,
      sym_foreach,
    ACTIONS(267), 1,
      sym_endforeach,
    ACTIONS(269), 1,
      sym_identifier,
    STATE(42), 1,
      sym_if_command,
    STATE(50), 1,
      sym_foreach_command,
    STATE(170), 1,
      sym_endforeach_command,
    STATE(57), 5,
      sym_normal_command,
      sym_foreach_loop,
      sym_if_condition,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [1630] = 1,
    ACTIONS(271), 12,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV,
      anon_sym_DOLLARCACHE,
      aux_sym_quoted_element_token2,
      aux_sym_unquoted_argument_token1,
      aux_sym_if_command_token1,
      anon_sym_RPAREN,
  [1645] = 8,
    ACTIONS(5), 1,
      sym_if,
    ACTIONS(7), 1,
      sym_foreach,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(273), 1,
      sym_endforeach,
    STATE(42), 1,
      sym_if_command,
    STATE(50), 1,
      sym_foreach_command,
    STATE(157), 1,
      sym_endforeach_command,
    STATE(63), 5,
      sym_normal_command,
      sym_foreach_loop,
      sym_if_condition,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [1674] = 8,
    ACTIONS(5), 1,
      sym_if,
    ACTIONS(7), 1,
      sym_foreach,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(275), 1,
      sym_endforeach,
    STATE(42), 1,
      sym_if_command,
    STATE(50), 1,
      sym_foreach_command,
    STATE(93), 1,
      sym_endforeach_command,
    STATE(63), 5,
      sym_normal_command,
      sym_foreach_loop,
      sym_if_condition,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [1703] = 1,
    ACTIONS(277), 12,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV,
      anon_sym_DOLLARCACHE,
      aux_sym_quoted_element_token2,
      aux_sym_unquoted_argument_token1,
      aux_sym_if_command_token1,
      anon_sym_RPAREN,
  [1718] = 8,
    ACTIONS(5), 1,
      sym_if,
    ACTIONS(7), 1,
      sym_foreach,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(275), 1,
      sym_endforeach,
    STATE(42), 1,
      sym_if_command,
    STATE(50), 1,
      sym_foreach_command,
    STATE(101), 1,
      sym_endforeach_command,
    STATE(53), 5,
      sym_normal_command,
      sym_foreach_loop,
      sym_if_condition,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [1747] = 1,
    ACTIONS(279), 12,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV,
      anon_sym_DOLLARCACHE,
      aux_sym_quoted_element_token2,
      aux_sym_unquoted_argument_token1,
      aux_sym_if_command_token1,
      anon_sym_RPAREN,
  [1762] = 8,
    ACTIONS(5), 1,
      sym_if,
    ACTIONS(7), 1,
      sym_foreach,
    ACTIONS(267), 1,
      sym_endforeach,
    ACTIONS(269), 1,
      sym_identifier,
    STATE(42), 1,
      sym_if_command,
    STATE(50), 1,
      sym_foreach_command,
    STATE(173), 1,
      sym_endforeach_command,
    STATE(63), 5,
      sym_normal_command,
      sym_foreach_loop,
      sym_if_condition,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [1791] = 1,
    ACTIONS(281), 12,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV,
      anon_sym_DOLLARCACHE,
      aux_sym_quoted_element_token2,
      aux_sym_unquoted_argument_token1,
      aux_sym_if_command_token1,
      anon_sym_RPAREN,
  [1806] = 8,
    ACTIONS(5), 1,
      sym_if,
    ACTIONS(7), 1,
      sym_foreach,
    ACTIONS(269), 1,
      sym_identifier,
    ACTIONS(273), 1,
      sym_endforeach,
    STATE(42), 1,
      sym_if_command,
    STATE(50), 1,
      sym_foreach_command,
    STATE(163), 1,
      sym_endforeach_command,
    STATE(52), 5,
      sym_normal_command,
      sym_foreach_loop,
      sym_if_condition,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [1835] = 1,
    ACTIONS(265), 11,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV,
      anon_sym_DOLLARCACHE,
      anon_sym_DQUOTE,
      aux_sym_quoted_element_token1,
      anon_sym_BSLASH,
  [1849] = 1,
    ACTIONS(281), 11,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV,
      anon_sym_DOLLARCACHE,
      anon_sym_DQUOTE,
      aux_sym_quoted_element_token1,
      anon_sym_BSLASH,
  [1863] = 7,
    ACTIONS(5), 1,
      sym_if,
    ACTIONS(7), 1,
      sym_foreach,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
    STATE(46), 1,
      sym_if_command,
    STATE(59), 1,
      sym_foreach_command,
    STATE(64), 5,
      sym_normal_command,
      sym_foreach_loop,
      sym_if_condition,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [1889] = 7,
    ACTIONS(285), 1,
      sym_if,
    ACTIONS(288), 1,
      sym_foreach,
    ACTIONS(291), 1,
      sym_endforeach,
    ACTIONS(293), 1,
      sym_identifier,
    STATE(42), 1,
      sym_if_command,
    STATE(50), 1,
      sym_foreach_command,
    STATE(63), 5,
      sym_normal_command,
      sym_foreach_loop,
      sym_if_condition,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [1915] = 7,
    ACTIONS(285), 1,
      sym_if,
    ACTIONS(288), 1,
      sym_foreach,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    ACTIONS(298), 1,
      sym_identifier,
    STATE(46), 1,
      sym_if_command,
    STATE(59), 1,
      sym_foreach_command,
    STATE(64), 5,
      sym_normal_command,
      sym_foreach_loop,
      sym_if_condition,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [1941] = 1,
    ACTIONS(208), 11,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV,
      anon_sym_DOLLARCACHE,
      anon_sym_DQUOTE,
      aux_sym_quoted_element_token1,
      anon_sym_BSLASH,
  [1955] = 1,
    ACTIONS(279), 11,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV,
      anon_sym_DOLLARCACHE,
      anon_sym_DQUOTE,
      aux_sym_quoted_element_token1,
      anon_sym_BSLASH,
  [1969] = 1,
    ACTIONS(277), 11,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV,
      anon_sym_DOLLARCACHE,
      anon_sym_DQUOTE,
      aux_sym_quoted_element_token1,
      anon_sym_BSLASH,
  [1983] = 1,
    ACTIONS(271), 11,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV,
      anon_sym_DOLLARCACHE,
      anon_sym_DQUOTE,
      aux_sym_quoted_element_token1,
      anon_sym_BSLASH,
  [1997] = 5,
    ACTIONS(303), 1,
      aux_sym_variable_token1,
    STATE(85), 1,
      sym__escape_encoded,
    STATE(217), 1,
      sym_variable,
    STATE(77), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(301), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [2018] = 5,
    ACTIONS(303), 1,
      aux_sym_variable_token1,
    STATE(85), 1,
      sym__escape_encoded,
    STATE(240), 1,
      sym_variable,
    STATE(77), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(301), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [2039] = 5,
    ACTIONS(303), 1,
      aux_sym_variable_token1,
    STATE(85), 1,
      sym__escape_encoded,
    STATE(236), 1,
      sym_variable,
    STATE(77), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(301), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [2060] = 1,
    ACTIONS(265), 10,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV,
      anon_sym_DOLLARCACHE,
      aux_sym_unquoted_argument_token1,
      anon_sym_RPAREN,
  [2073] = 5,
    ACTIONS(303), 1,
      aux_sym_variable_token1,
    STATE(85), 1,
      sym__escape_encoded,
    STATE(213), 1,
      sym_variable,
    STATE(77), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(301), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [2094] = 5,
    ACTIONS(303), 1,
      aux_sym_variable_token1,
    STATE(85), 1,
      sym__escape_encoded,
    STATE(234), 1,
      sym_variable,
    STATE(77), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(301), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [2115] = 5,
    ACTIONS(303), 1,
      aux_sym_variable_token1,
    STATE(85), 1,
      sym__escape_encoded,
    STATE(222), 1,
      sym_variable,
    STATE(77), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(301), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [2136] = 5,
    ACTIONS(303), 1,
      aux_sym_variable_token1,
    STATE(85), 1,
      sym__escape_encoded,
    STATE(227), 1,
      sym_variable,
    STATE(77), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(301), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [2157] = 5,
    ACTIONS(305), 1,
      aux_sym_variable_token1,
    ACTIONS(307), 1,
      anon_sym_RBRACE,
    STATE(85), 1,
      sym__escape_encoded,
    STATE(81), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(301), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [2178] = 5,
    ACTIONS(303), 1,
      aux_sym_variable_token1,
    STATE(85), 1,
      sym__escape_encoded,
    STATE(235), 1,
      sym_variable,
    STATE(77), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(301), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [2199] = 1,
    ACTIONS(277), 10,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV,
      anon_sym_DOLLARCACHE,
      aux_sym_unquoted_argument_token1,
      anon_sym_RPAREN,
  [2212] = 5,
    ACTIONS(303), 1,
      aux_sym_variable_token1,
    STATE(85), 1,
      sym__escape_encoded,
    STATE(237), 1,
      sym_variable,
    STATE(77), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(301), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [2233] = 5,
    ACTIONS(312), 1,
      aux_sym_variable_token1,
    ACTIONS(315), 1,
      anon_sym_RBRACE,
    STATE(85), 1,
      sym__escape_encoded,
    STATE(81), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(309), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [2254] = 1,
    ACTIONS(281), 10,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV,
      anon_sym_DOLLARCACHE,
      aux_sym_unquoted_argument_token1,
      anon_sym_RPAREN,
  [2267] = 1,
    ACTIONS(279), 10,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV,
      anon_sym_DOLLARCACHE,
      aux_sym_unquoted_argument_token1,
      anon_sym_RPAREN,
  [2280] = 1,
    ACTIONS(271), 10,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLARENV,
      anon_sym_DOLLARCACHE,
      aux_sym_unquoted_argument_token1,
      anon_sym_RPAREN,
  [2293] = 1,
    ACTIONS(317), 7,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      aux_sym_variable_token1,
      anon_sym_RBRACE,
  [2303] = 1,
    ACTIONS(319), 6,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_identifier,
  [2312] = 1,
    ACTIONS(321), 6,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_identifier,
  [2321] = 1,
    ACTIONS(323), 6,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_identifier,
  [2330] = 1,
    ACTIONS(325), 6,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_identifier,
  [2339] = 1,
    ACTIONS(327), 6,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_identifier,
  [2348] = 1,
    ACTIONS(329), 6,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_identifier,
  [2357] = 1,
    ACTIONS(331), 6,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_identifier,
  [2366] = 1,
    ACTIONS(333), 6,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_identifier,
  [2375] = 1,
    ACTIONS(335), 6,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_identifier,
  [2384] = 1,
    ACTIONS(337), 6,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_identifier,
  [2393] = 1,
    ACTIONS(339), 6,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_identifier,
  [2402] = 1,
    ACTIONS(341), 6,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_identifier,
  [2411] = 1,
    ACTIONS(343), 6,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_identifier,
  [2420] = 1,
    ACTIONS(345), 6,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_identifier,
  [2429] = 1,
    ACTIONS(347), 6,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_identifier,
  [2438] = 1,
    ACTIONS(349), 6,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_identifier,
  [2447] = 1,
    ACTIONS(351), 6,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_identifier,
  [2456] = 1,
    ACTIONS(353), 6,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_identifier,
  [2465] = 1,
    ACTIONS(355), 6,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_identifier,
  [2474] = 1,
    ACTIONS(357), 6,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_identifier,
  [2483] = 1,
    ACTIONS(359), 6,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_identifier,
  [2492] = 1,
    ACTIONS(361), 6,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_identifier,
  [2501] = 1,
    ACTIONS(363), 6,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_identifier,
  [2510] = 1,
    ACTIONS(365), 6,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_identifier,
  [2519] = 1,
    ACTIONS(367), 6,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_identifier,
  [2528] = 4,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      aux_sym_if_command_repeat1,
    STATE(139), 1,
      aux_sym_if_command_repeat2,
    ACTIONS(369), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [2542] = 4,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      aux_sym_if_command_repeat1,
    STATE(115), 1,
      aux_sym_if_command_repeat2,
    ACTIONS(369), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [2556] = 4,
    ACTIONS(378), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      aux_sym_if_command_repeat1,
    STATE(113), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(375), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [2570] = 4,
    ACTIONS(382), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      aux_sym_if_command_repeat1,
    STATE(113), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(380), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [2584] = 4,
    ACTIONS(384), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      aux_sym_if_command_repeat1,
    STATE(145), 1,
      aux_sym_if_command_repeat2,
    ACTIONS(369), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [2598] = 4,
    ACTIONS(384), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      aux_sym_if_command_repeat1,
    STATE(127), 1,
      aux_sym_if_command_repeat2,
    ACTIONS(369), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [2612] = 4,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      aux_sym_if_command_repeat1,
    STATE(145), 1,
      aux_sym_if_command_repeat2,
    ACTIONS(369), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [2626] = 4,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      aux_sym_if_command_repeat1,
    STATE(129), 1,
      aux_sym_if_command_repeat2,
    ACTIONS(369), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [2640] = 4,
    ACTIONS(388), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      aux_sym_if_command_repeat1,
    STATE(145), 1,
      aux_sym_if_command_repeat2,
    ACTIONS(369), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [2654] = 4,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      aux_sym_if_command_repeat1,
    STATE(145), 1,
      aux_sym_if_command_repeat2,
    ACTIONS(369), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [2668] = 4,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      aux_sym_if_command_repeat1,
    STATE(131), 1,
      aux_sym_if_command_repeat2,
    ACTIONS(369), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [2682] = 4,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      aux_sym_if_command_repeat1,
    STATE(119), 1,
      aux_sym_if_command_repeat2,
    ACTIONS(369), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [2696] = 4,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      aux_sym_if_command_repeat1,
    STATE(145), 1,
      aux_sym_if_command_repeat2,
    ACTIONS(369), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [2710] = 4,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      aux_sym_if_command_repeat1,
    STATE(113), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(380), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [2724] = 4,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      aux_sym_if_command_repeat1,
    STATE(123), 1,
      aux_sym_if_command_repeat2,
    ACTIONS(369), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [2738] = 4,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      aux_sym_if_command_repeat1,
    STATE(124), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(380), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [2752] = 4,
    ACTIONS(398), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      aux_sym_if_command_repeat1,
    STATE(145), 1,
      aux_sym_if_command_repeat2,
    ACTIONS(369), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [2766] = 4,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      aux_sym_if_command_repeat1,
    STATE(113), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(380), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [2780] = 4,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      aux_sym_if_command_repeat1,
    STATE(145), 1,
      aux_sym_if_command_repeat2,
    ACTIONS(369), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [2794] = 4,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      aux_sym_if_command_repeat1,
    STATE(128), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(380), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [2808] = 4,
    ACTIONS(402), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      aux_sym_if_command_repeat1,
    STATE(145), 1,
      aux_sym_if_command_repeat2,
    ACTIONS(369), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [2822] = 4,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      aux_sym_if_command_repeat1,
    STATE(149), 1,
      aux_sym_if_command_repeat2,
    ACTIONS(369), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [2836] = 5,
    ACTIONS(406), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(408), 1,
      anon_sym_RBRACK,
    STATE(204), 1,
      aux_sym_bracket_content_repeat1,
    STATE(205), 1,
      sym__bracket_close,
    STATE(209), 1,
      sym_bracket_content,
  [2852] = 4,
    ACTIONS(412), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      aux_sym_if_command_repeat1,
    STATE(136), 1,
      aux_sym_foreach_command_repeat1,
    ACTIONS(410), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [2866] = 4,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      aux_sym_if_command_repeat1,
    STATE(152), 1,
      aux_sym_foreach_command_repeat1,
    ACTIONS(410), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [2880] = 4,
    ACTIONS(419), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      aux_sym_if_command_repeat1,
    STATE(136), 1,
      aux_sym_foreach_command_repeat1,
    ACTIONS(416), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [2894] = 4,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      aux_sym_if_command_repeat1,
    STATE(145), 1,
      aux_sym_if_command_repeat2,
    ACTIONS(369), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [2908] = 4,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      aux_sym_if_command_repeat1,
    STATE(137), 1,
      aux_sym_if_command_repeat2,
    ACTIONS(369), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [2922] = 4,
    ACTIONS(425), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      aux_sym_if_command_repeat1,
    STATE(145), 1,
      aux_sym_if_command_repeat2,
    ACTIONS(369), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [2936] = 4,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      aux_sym_if_command_repeat1,
    STATE(145), 1,
      aux_sym_if_command_repeat2,
    ACTIONS(369), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [2950] = 4,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      aux_sym_if_command_repeat1,
    STATE(113), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(380), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [2964] = 4,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      aux_sym_if_command_repeat1,
    STATE(151), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(380), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [2978] = 4,
    ACTIONS(41), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      aux_sym_if_command_repeat1,
    STATE(140), 1,
      aux_sym_if_command_repeat2,
    ACTIONS(369), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [2992] = 4,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      aux_sym_if_command_repeat1,
    STATE(141), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(380), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [3006] = 4,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      aux_sym_if_command_repeat1,
    STATE(145), 1,
      aux_sym_if_command_repeat2,
    ACTIONS(431), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [3020] = 4,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      aux_sym_if_command_repeat1,
    STATE(113), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(380), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [3034] = 4,
    ACTIONS(126), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      aux_sym_if_command_repeat1,
    STATE(146), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(380), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [3048] = 5,
    ACTIONS(406), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(436), 1,
      anon_sym_RBRACK,
    STATE(204), 1,
      aux_sym_bracket_content_repeat1,
    STATE(208), 1,
      sym_bracket_content,
    STATE(220), 1,
      sym__bracket_close,
  [3064] = 4,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      aux_sym_if_command_repeat1,
    STATE(145), 1,
      aux_sym_if_command_repeat2,
    ACTIONS(369), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [3078] = 4,
    ACTIONS(438), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      aux_sym_if_command_repeat1,
    STATE(114), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(380), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [3092] = 4,
    ACTIONS(438), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      aux_sym_if_command_repeat1,
    STATE(113), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(380), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [3106] = 4,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      aux_sym_if_command_repeat1,
    STATE(136), 1,
      aux_sym_foreach_command_repeat1,
    ACTIONS(410), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [3120] = 4,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      aux_sym_if_command_repeat1,
    STATE(120), 1,
      aux_sym_if_command_repeat2,
    ACTIONS(369), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [3134] = 4,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      aux_sym_if_command_repeat1,
    STATE(117), 1,
      aux_sym_if_command_repeat2,
    ACTIONS(369), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [3148] = 4,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      aux_sym_if_command_repeat1,
    STATE(134), 1,
      aux_sym_foreach_command_repeat1,
    ACTIONS(410), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [3162] = 1,
    ACTIONS(327), 4,
      sym_if,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [3169] = 2,
    ACTIONS(442), 1,
      ts_builtin_sym_end,
    ACTIONS(333), 3,
      sym_if,
      sym_foreach,
      sym_identifier,
  [3178] = 2,
    ACTIONS(444), 1,
      ts_builtin_sym_end,
    ACTIONS(329), 3,
      sym_if,
      sym_foreach,
      sym_identifier,
  [3187] = 1,
    ACTIONS(446), 4,
      sym_if,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [3194] = 2,
    ACTIONS(448), 1,
      ts_builtin_sym_end,
    ACTIONS(351), 3,
      sym_if,
      sym_foreach,
      sym_identifier,
  [3203] = 2,
    ACTIONS(450), 1,
      ts_builtin_sym_end,
    ACTIONS(319), 3,
      sym_if,
      sym_foreach,
      sym_identifier,
  [3212] = 2,
    ACTIONS(452), 1,
      ts_builtin_sym_end,
    ACTIONS(327), 3,
      sym_if,
      sym_foreach,
      sym_identifier,
  [3221] = 2,
    ACTIONS(454), 1,
      ts_builtin_sym_end,
    ACTIONS(349), 3,
      sym_if,
      sym_foreach,
      sym_identifier,
  [3230] = 2,
    ACTIONS(456), 1,
      ts_builtin_sym_end,
    ACTIONS(337), 3,
      sym_if,
      sym_foreach,
      sym_identifier,
  [3239] = 2,
    ACTIONS(458), 1,
      ts_builtin_sym_end,
    ACTIONS(345), 3,
      sym_if,
      sym_foreach,
      sym_identifier,
  [3248] = 2,
    ACTIONS(460), 1,
      ts_builtin_sym_end,
    ACTIONS(321), 3,
      sym_if,
      sym_foreach,
      sym_identifier,
  [3257] = 2,
    ACTIONS(462), 1,
      ts_builtin_sym_end,
    ACTIONS(361), 3,
      sym_if,
      sym_foreach,
      sym_identifier,
  [3266] = 2,
    ACTIONS(464), 1,
      ts_builtin_sym_end,
    ACTIONS(323), 3,
      sym_if,
      sym_foreach,
      sym_identifier,
  [3275] = 1,
    ACTIONS(351), 4,
      sym_if,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [3282] = 1,
    ACTIONS(349), 4,
      sym_if,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [3289] = 1,
    ACTIONS(339), 4,
      sym_if,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [3296] = 1,
    ACTIONS(347), 4,
      sym_if,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [3303] = 1,
    ACTIONS(333), 4,
      sym_if,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [3310] = 1,
    ACTIONS(466), 4,
      sym_if,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [3317] = 1,
    ACTIONS(323), 4,
      sym_if,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [3324] = 1,
    ACTIONS(321), 4,
      sym_if,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [3331] = 1,
    ACTIONS(345), 4,
      sym_if,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [3338] = 1,
    ACTIONS(468), 4,
      sym_if,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [3345] = 1,
    ACTIONS(341), 4,
      sym_if,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [3352] = 1,
    ACTIONS(325), 4,
      sym_if,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [3359] = 1,
    ACTIONS(329), 4,
      sym_if,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [3366] = 2,
    ACTIONS(470), 1,
      ts_builtin_sym_end,
    ACTIONS(339), 3,
      sym_if,
      sym_foreach,
      sym_identifier,
  [3375] = 3,
    ACTIONS(474), 1,
      anon_sym_EQ,
    STATE(183), 1,
      aux_sym__bracket_open_repeat1,
    ACTIONS(472), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [3386] = 1,
    ACTIONS(319), 4,
      sym_if,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [3393] = 2,
    ACTIONS(477), 1,
      ts_builtin_sym_end,
    ACTIONS(341), 3,
      sym_if,
      sym_foreach,
      sym_identifier,
  [3402] = 1,
    ACTIONS(337), 4,
      sym_if,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [3409] = 1,
    ACTIONS(361), 4,
      sym_if,
      sym_foreach,
      sym_endforeach,
      sym_identifier,
  [3416] = 2,
    ACTIONS(479), 1,
      ts_builtin_sym_end,
    ACTIONS(347), 3,
      sym_if,
      sym_foreach,
      sym_identifier,
  [3425] = 2,
    ACTIONS(481), 1,
      ts_builtin_sym_end,
    ACTIONS(325), 3,
      sym_if,
      sym_foreach,
      sym_identifier,
  [3434] = 3,
    ACTIONS(483), 1,
      anon_sym_EQ,
    ACTIONS(485), 1,
      anon_sym_RBRACK,
    STATE(183), 1,
      aux_sym__bracket_open_repeat1,
  [3444] = 1,
    ACTIONS(487), 3,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
      anon_sym_RPAREN,
  [3450] = 1,
    ACTIONS(489), 3,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
      anon_sym_RPAREN,
  [3456] = 1,
    ACTIONS(491), 3,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
      anon_sym_RPAREN,
  [3462] = 3,
    ACTIONS(483), 1,
      anon_sym_EQ,
    ACTIONS(493), 1,
      anon_sym_LBRACK,
    STATE(183), 1,
      aux_sym__bracket_open_repeat1,
  [3472] = 1,
    ACTIONS(495), 3,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
      anon_sym_RPAREN,
  [3478] = 1,
    ACTIONS(497), 3,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
      anon_sym_RPAREN,
  [3484] = 1,
    ACTIONS(434), 3,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
      anon_sym_RPAREN,
  [3490] = 3,
    ACTIONS(499), 1,
      anon_sym_LBRACK,
    ACTIONS(501), 1,
      anon_sym_EQ,
    STATE(194), 1,
      aux_sym__bracket_open_repeat1,
  [3500] = 3,
    ACTIONS(503), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(506), 1,
      anon_sym_RBRACK,
    STATE(199), 1,
      aux_sym_bracket_content_repeat1,
  [3510] = 1,
    ACTIONS(378), 3,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
      anon_sym_RPAREN,
  [3516] = 3,
    ACTIONS(483), 1,
      anon_sym_EQ,
    ACTIONS(508), 1,
      anon_sym_RBRACK,
    STATE(183), 1,
      aux_sym__bracket_open_repeat1,
  [3526] = 3,
    ACTIONS(510), 1,
      anon_sym_EQ,
    ACTIONS(512), 1,
      anon_sym_RBRACK,
    STATE(201), 1,
      aux_sym__bracket_open_repeat1,
  [3536] = 1,
    ACTIONS(419), 3,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
      anon_sym_RPAREN,
  [3542] = 3,
    ACTIONS(514), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(516), 1,
      anon_sym_RBRACK,
    STATE(199), 1,
      aux_sym_bracket_content_repeat1,
  [3552] = 1,
    ACTIONS(518), 3,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
      anon_sym_RPAREN,
  [3558] = 1,
    ACTIONS(520), 3,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
      anon_sym_RPAREN,
  [3564] = 3,
    ACTIONS(522), 1,
      anon_sym_EQ,
    ACTIONS(524), 1,
      anon_sym_RBRACK,
    STATE(190), 1,
      aux_sym__bracket_open_repeat1,
  [3574] = 2,
    ACTIONS(526), 1,
      anon_sym_RBRACK,
    STATE(228), 1,
      sym__bracket_close,
  [3581] = 2,
    ACTIONS(528), 1,
      anon_sym_RBRACK,
    STATE(195), 1,
      sym__bracket_close,
  [3588] = 2,
    ACTIONS(530), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(532), 1,
      anon_sym_RBRACK,
  [3595] = 2,
    ACTIONS(534), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(536), 1,
      anon_sym_RBRACK,
  [3602] = 1,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
  [3606] = 1,
    ACTIONS(540), 1,
      anon_sym_RBRACE,
  [3610] = 1,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
  [3614] = 1,
    ACTIONS(544), 1,
      aux_sym_quoted_element_token2,
  [3618] = 1,
    ACTIONS(546), 1,
      anon_sym_RPAREN,
  [3622] = 1,
    ACTIONS(548), 1,
      anon_sym_RBRACE,
  [3626] = 1,
    ACTIONS(550), 1,
      anon_sym_RPAREN,
  [3630] = 1,
    ACTIONS(552), 1,
      anon_sym_RPAREN,
  [3634] = 1,
    ACTIONS(554), 1,
      anon_sym_RPAREN,
  [3638] = 1,
    ACTIONS(556), 1,
      anon_sym_DQUOTE,
  [3642] = 1,
    ACTIONS(558), 1,
      anon_sym_RBRACE,
  [3646] = 1,
    ACTIONS(560), 1,
      anon_sym_DQUOTE,
  [3650] = 1,
    ACTIONS(562), 1,
      anon_sym_LBRACE,
  [3654] = 1,
    ACTIONS(564), 1,
      anon_sym_LBRACE,
  [3658] = 1,
    ACTIONS(566), 1,
      anon_sym_RPAREN,
  [3662] = 1,
    ACTIONS(568), 1,
      anon_sym_RBRACE,
  [3666] = 1,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
  [3670] = 1,
    ACTIONS(572), 1,
      anon_sym_LPAREN,
  [3674] = 1,
    ACTIONS(574), 1,
      anon_sym_RPAREN,
  [3678] = 1,
    ACTIONS(576), 1,
      anon_sym_LPAREN,
  [3682] = 1,
    ACTIONS(578), 1,
      anon_sym_RPAREN,
  [3686] = 1,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
  [3690] = 1,
    ACTIONS(582), 1,
      anon_sym_RBRACE,
  [3694] = 1,
    ACTIONS(584), 1,
      anon_sym_RBRACE,
  [3698] = 1,
    ACTIONS(586), 1,
      anon_sym_RBRACE,
  [3702] = 1,
    ACTIONS(588), 1,
      anon_sym_RBRACE,
  [3706] = 1,
    ACTIONS(590), 1,
      anon_sym_RPAREN,
  [3710] = 1,
    ACTIONS(592), 1,
      anon_sym_RPAREN,
  [3714] = 1,
    ACTIONS(594), 1,
      anon_sym_RBRACE,
  [3718] = 1,
    ACTIONS(596), 1,
      anon_sym_LPAREN,
  [3722] = 1,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
  [3726] = 1,
    ACTIONS(600), 1,
      anon_sym_LPAREN,
  [3730] = 1,
    ACTIONS(602), 1,
      anon_sym_LPAREN,
  [3734] = 1,
    ACTIONS(604), 1,
      anon_sym_LPAREN,
  [3738] = 1,
    ACTIONS(606), 1,
      anon_sym_LPAREN,
  [3742] = 1,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
  [3746] = 1,
    ACTIONS(610), 1,
      anon_sym_LPAREN,
  [3750] = 1,
    ACTIONS(612), 1,
      anon_sym_LPAREN,
  [3754] = 1,
    ACTIONS(614), 1,
      ts_builtin_sym_end,
  [3758] = 1,
    ACTIONS(616), 1,
      anon_sym_LPAREN,
  [3762] = 1,
    ACTIONS(618), 1,
      anon_sym_LPAREN,
  [3766] = 1,
    ACTIONS(620), 1,
      anon_sym_LBRACE,
  [3770] = 1,
    ACTIONS(622), 1,
      anon_sym_LBRACE,
  [3774] = 1,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
  [3778] = 1,
    ACTIONS(626), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(16)] = 0,
  [SMALL_STATE(17)] = 65,
  [SMALL_STATE(18)] = 129,
  [SMALL_STATE(19)] = 193,
  [SMALL_STATE(20)] = 253,
  [SMALL_STATE(21)] = 313,
  [SMALL_STATE(22)] = 373,
  [SMALL_STATE(23)] = 433,
  [SMALL_STATE(24)] = 493,
  [SMALL_STATE(25)] = 553,
  [SMALL_STATE(26)] = 613,
  [SMALL_STATE(27)] = 673,
  [SMALL_STATE(28)] = 733,
  [SMALL_STATE(29)] = 793,
  [SMALL_STATE(30)] = 853,
  [SMALL_STATE(31)] = 911,
  [SMALL_STATE(32)] = 971,
  [SMALL_STATE(33)] = 998,
  [SMALL_STATE(34)] = 1036,
  [SMALL_STATE(35)] = 1078,
  [SMALL_STATE(36)] = 1120,
  [SMALL_STATE(37)] = 1158,
  [SMALL_STATE(38)] = 1197,
  [SMALL_STATE(39)] = 1236,
  [SMALL_STATE(40)] = 1272,
  [SMALL_STATE(41)] = 1308,
  [SMALL_STATE(42)] = 1345,
  [SMALL_STATE(43)] = 1382,
  [SMALL_STATE(44)] = 1419,
  [SMALL_STATE(45)] = 1456,
  [SMALL_STATE(46)] = 1493,
  [SMALL_STATE(47)] = 1530,
  [SMALL_STATE(48)] = 1564,
  [SMALL_STATE(49)] = 1586,
  [SMALL_STATE(50)] = 1601,
  [SMALL_STATE(51)] = 1630,
  [SMALL_STATE(52)] = 1645,
  [SMALL_STATE(53)] = 1674,
  [SMALL_STATE(54)] = 1703,
  [SMALL_STATE(55)] = 1718,
  [SMALL_STATE(56)] = 1747,
  [SMALL_STATE(57)] = 1762,
  [SMALL_STATE(58)] = 1791,
  [SMALL_STATE(59)] = 1806,
  [SMALL_STATE(60)] = 1835,
  [SMALL_STATE(61)] = 1849,
  [SMALL_STATE(62)] = 1863,
  [SMALL_STATE(63)] = 1889,
  [SMALL_STATE(64)] = 1915,
  [SMALL_STATE(65)] = 1941,
  [SMALL_STATE(66)] = 1955,
  [SMALL_STATE(67)] = 1969,
  [SMALL_STATE(68)] = 1983,
  [SMALL_STATE(69)] = 1997,
  [SMALL_STATE(70)] = 2018,
  [SMALL_STATE(71)] = 2039,
  [SMALL_STATE(72)] = 2060,
  [SMALL_STATE(73)] = 2073,
  [SMALL_STATE(74)] = 2094,
  [SMALL_STATE(75)] = 2115,
  [SMALL_STATE(76)] = 2136,
  [SMALL_STATE(77)] = 2157,
  [SMALL_STATE(78)] = 2178,
  [SMALL_STATE(79)] = 2199,
  [SMALL_STATE(80)] = 2212,
  [SMALL_STATE(81)] = 2233,
  [SMALL_STATE(82)] = 2254,
  [SMALL_STATE(83)] = 2267,
  [SMALL_STATE(84)] = 2280,
  [SMALL_STATE(85)] = 2293,
  [SMALL_STATE(86)] = 2303,
  [SMALL_STATE(87)] = 2312,
  [SMALL_STATE(88)] = 2321,
  [SMALL_STATE(89)] = 2330,
  [SMALL_STATE(90)] = 2339,
  [SMALL_STATE(91)] = 2348,
  [SMALL_STATE(92)] = 2357,
  [SMALL_STATE(93)] = 2366,
  [SMALL_STATE(94)] = 2375,
  [SMALL_STATE(95)] = 2384,
  [SMALL_STATE(96)] = 2393,
  [SMALL_STATE(97)] = 2402,
  [SMALL_STATE(98)] = 2411,
  [SMALL_STATE(99)] = 2420,
  [SMALL_STATE(100)] = 2429,
  [SMALL_STATE(101)] = 2438,
  [SMALL_STATE(102)] = 2447,
  [SMALL_STATE(103)] = 2456,
  [SMALL_STATE(104)] = 2465,
  [SMALL_STATE(105)] = 2474,
  [SMALL_STATE(106)] = 2483,
  [SMALL_STATE(107)] = 2492,
  [SMALL_STATE(108)] = 2501,
  [SMALL_STATE(109)] = 2510,
  [SMALL_STATE(110)] = 2519,
  [SMALL_STATE(111)] = 2528,
  [SMALL_STATE(112)] = 2542,
  [SMALL_STATE(113)] = 2556,
  [SMALL_STATE(114)] = 2570,
  [SMALL_STATE(115)] = 2584,
  [SMALL_STATE(116)] = 2598,
  [SMALL_STATE(117)] = 2612,
  [SMALL_STATE(118)] = 2626,
  [SMALL_STATE(119)] = 2640,
  [SMALL_STATE(120)] = 2654,
  [SMALL_STATE(121)] = 2668,
  [SMALL_STATE(122)] = 2682,
  [SMALL_STATE(123)] = 2696,
  [SMALL_STATE(124)] = 2710,
  [SMALL_STATE(125)] = 2724,
  [SMALL_STATE(126)] = 2738,
  [SMALL_STATE(127)] = 2752,
  [SMALL_STATE(128)] = 2766,
  [SMALL_STATE(129)] = 2780,
  [SMALL_STATE(130)] = 2794,
  [SMALL_STATE(131)] = 2808,
  [SMALL_STATE(132)] = 2822,
  [SMALL_STATE(133)] = 2836,
  [SMALL_STATE(134)] = 2852,
  [SMALL_STATE(135)] = 2866,
  [SMALL_STATE(136)] = 2880,
  [SMALL_STATE(137)] = 2894,
  [SMALL_STATE(138)] = 2908,
  [SMALL_STATE(139)] = 2922,
  [SMALL_STATE(140)] = 2936,
  [SMALL_STATE(141)] = 2950,
  [SMALL_STATE(142)] = 2964,
  [SMALL_STATE(143)] = 2978,
  [SMALL_STATE(144)] = 2992,
  [SMALL_STATE(145)] = 3006,
  [SMALL_STATE(146)] = 3020,
  [SMALL_STATE(147)] = 3034,
  [SMALL_STATE(148)] = 3048,
  [SMALL_STATE(149)] = 3064,
  [SMALL_STATE(150)] = 3078,
  [SMALL_STATE(151)] = 3092,
  [SMALL_STATE(152)] = 3106,
  [SMALL_STATE(153)] = 3120,
  [SMALL_STATE(154)] = 3134,
  [SMALL_STATE(155)] = 3148,
  [SMALL_STATE(156)] = 3162,
  [SMALL_STATE(157)] = 3169,
  [SMALL_STATE(158)] = 3178,
  [SMALL_STATE(159)] = 3187,
  [SMALL_STATE(160)] = 3194,
  [SMALL_STATE(161)] = 3203,
  [SMALL_STATE(162)] = 3212,
  [SMALL_STATE(163)] = 3221,
  [SMALL_STATE(164)] = 3230,
  [SMALL_STATE(165)] = 3239,
  [SMALL_STATE(166)] = 3248,
  [SMALL_STATE(167)] = 3257,
  [SMALL_STATE(168)] = 3266,
  [SMALL_STATE(169)] = 3275,
  [SMALL_STATE(170)] = 3282,
  [SMALL_STATE(171)] = 3289,
  [SMALL_STATE(172)] = 3296,
  [SMALL_STATE(173)] = 3303,
  [SMALL_STATE(174)] = 3310,
  [SMALL_STATE(175)] = 3317,
  [SMALL_STATE(176)] = 3324,
  [SMALL_STATE(177)] = 3331,
  [SMALL_STATE(178)] = 3338,
  [SMALL_STATE(179)] = 3345,
  [SMALL_STATE(180)] = 3352,
  [SMALL_STATE(181)] = 3359,
  [SMALL_STATE(182)] = 3366,
  [SMALL_STATE(183)] = 3375,
  [SMALL_STATE(184)] = 3386,
  [SMALL_STATE(185)] = 3393,
  [SMALL_STATE(186)] = 3402,
  [SMALL_STATE(187)] = 3409,
  [SMALL_STATE(188)] = 3416,
  [SMALL_STATE(189)] = 3425,
  [SMALL_STATE(190)] = 3434,
  [SMALL_STATE(191)] = 3444,
  [SMALL_STATE(192)] = 3450,
  [SMALL_STATE(193)] = 3456,
  [SMALL_STATE(194)] = 3462,
  [SMALL_STATE(195)] = 3472,
  [SMALL_STATE(196)] = 3478,
  [SMALL_STATE(197)] = 3484,
  [SMALL_STATE(198)] = 3490,
  [SMALL_STATE(199)] = 3500,
  [SMALL_STATE(200)] = 3510,
  [SMALL_STATE(201)] = 3516,
  [SMALL_STATE(202)] = 3526,
  [SMALL_STATE(203)] = 3536,
  [SMALL_STATE(204)] = 3542,
  [SMALL_STATE(205)] = 3552,
  [SMALL_STATE(206)] = 3558,
  [SMALL_STATE(207)] = 3564,
  [SMALL_STATE(208)] = 3574,
  [SMALL_STATE(209)] = 3581,
  [SMALL_STATE(210)] = 3588,
  [SMALL_STATE(211)] = 3595,
  [SMALL_STATE(212)] = 3602,
  [SMALL_STATE(213)] = 3606,
  [SMALL_STATE(214)] = 3610,
  [SMALL_STATE(215)] = 3614,
  [SMALL_STATE(216)] = 3618,
  [SMALL_STATE(217)] = 3622,
  [SMALL_STATE(218)] = 3626,
  [SMALL_STATE(219)] = 3630,
  [SMALL_STATE(220)] = 3634,
  [SMALL_STATE(221)] = 3638,
  [SMALL_STATE(222)] = 3642,
  [SMALL_STATE(223)] = 3646,
  [SMALL_STATE(224)] = 3650,
  [SMALL_STATE(225)] = 3654,
  [SMALL_STATE(226)] = 3658,
  [SMALL_STATE(227)] = 3662,
  [SMALL_STATE(228)] = 3666,
  [SMALL_STATE(229)] = 3670,
  [SMALL_STATE(230)] = 3674,
  [SMALL_STATE(231)] = 3678,
  [SMALL_STATE(232)] = 3682,
  [SMALL_STATE(233)] = 3686,
  [SMALL_STATE(234)] = 3690,
  [SMALL_STATE(235)] = 3694,
  [SMALL_STATE(236)] = 3698,
  [SMALL_STATE(237)] = 3702,
  [SMALL_STATE(238)] = 3706,
  [SMALL_STATE(239)] = 3710,
  [SMALL_STATE(240)] = 3714,
  [SMALL_STATE(241)] = 3718,
  [SMALL_STATE(242)] = 3722,
  [SMALL_STATE(243)] = 3726,
  [SMALL_STATE(244)] = 3730,
  [SMALL_STATE(245)] = 3734,
  [SMALL_STATE(246)] = 3738,
  [SMALL_STATE(247)] = 3742,
  [SMALL_STATE(248)] = 3746,
  [SMALL_STATE(249)] = 3750,
  [SMALL_STATE(250)] = 3754,
  [SMALL_STATE(251)] = 3758,
  [SMALL_STATE(252)] = 3762,
  [SMALL_STATE(253)] = 3766,
  [SMALL_STATE(254)] = 3770,
  [SMALL_STATE(255)] = 3774,
  [SMALL_STATE(256)] = 3778,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_command_repeat2, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_command_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_command_repeat1, 2), SHIFT_REPEAT(15),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_foreach_command_repeat1, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_command_repeat1, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_command_repeat1, 2), SHIFT_REPEAT(32),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(54),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(80),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(225),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(224),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(33),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_argument, 1),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_element, 1),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(67),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(75),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(253),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(254),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(38),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(215),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(79),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(76),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(255),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(256),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(39),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_condition_repeat1, 2), SHIFT_REPEAT(229),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_condition_repeat1, 2), SHIFT_REPEAT(246),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_condition_repeat1, 2), SHIFT_REPEAT(245),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_condition_repeat1, 2),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_condition_repeat1, 2), SHIFT_REPEAT(252),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_condition_repeat1, 2), SHIFT_REPEAT(241),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_command_repeat1, 2), SHIFT_REPEAT(48),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_ref, 1),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_var, 4),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_var, 4),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_var, 3),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(229),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(252),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(247),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(251),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(85),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(81),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_command, 6),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endif_command, 3),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_command, 4),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endif_command, 4),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endif_command, 5),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endforeach_command, 4),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_command, 3),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_loop, 3),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 5),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endforeach_command, 5),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_command, 3),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_command, 5),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 4),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endforeach_command, 3),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_condition, 3),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_loop, 2),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_condition, 2),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_command, 6),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elseif_command, 6),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_command, 5),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_command, 4),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endif_command, 6),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elseif_command, 5),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elseif_command, 4),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 6),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [375] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_normal_command_repeat1, 2), SHIFT_REPEAT(30),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_command_repeat1, 2),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_foreach_command_repeat1, 2), SHIFT_REPEAT(16),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_foreach_command_repeat1, 2),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [431] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_command_repeat2, 2), SHIFT_REPEAT(8),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_command_repeat2, 2),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach_loop, 3),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endforeach_command, 4),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_command, 6),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition, 2),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 6),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endif_command, 5),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach_loop, 2),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endforeach_command, 5),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endforeach_command, 3),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endif_command, 3),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endif_command, 6),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 4),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_command, 4),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_command, 5),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 3),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bracket_open_repeat1, 2),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bracket_open_repeat1, 2), SHIFT_REPEAT(183),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 5),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition, 3),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endif_command, 4),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_close, 3),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_argument, 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_argument, 3),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_argument, 3),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bracket_content_repeat1, 2), SHIFT_REPEAT(199),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bracket_content_repeat1, 2),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_content, 1),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_argument, 2),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_close, 2),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_open, 3),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_open, 3),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_open, 2),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_open, 2),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_close, 3),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_argument, 2),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_argument, 2),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_argument, 3),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_close, 2),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_argument, 3),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [614] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_cmake(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
