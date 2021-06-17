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
#define STATE_COUNT 339
#define LARGE_STATE_COUNT 27
#define SYMBOL_COUNT 122
#define ALIAS_COUNT 0
#define TOKEN_COUNT 82
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
  sym_while = 79,
  sym_endwhile = 80,
  sym_identifier = 81,
  sym_source_file = 82,
  sym_escape_sequence = 83,
  sym__escape_encoded = 84,
  sym_variable = 85,
  sym_variable_ref = 86,
  sym_normal_var = 87,
  sym_env_var = 88,
  sym_cache_var = 89,
  sym_argument = 90,
  sym_bracket_argument = 91,
  sym__bracket_open = 92,
  sym_bracket_content = 93,
  sym__bracket_close = 94,
  sym_quoted_argument = 95,
  sym_quoted_element = 96,
  sym_unquoted_argument = 97,
  sym_if_command = 98,
  sym_elseif_command = 99,
  sym_else_command = 100,
  sym_endif_command = 101,
  sym_if_condition = 102,
  sym_foreach_command = 103,
  sym_endforeach_command = 104,
  sym_foreach_loop = 105,
  sym_while_command = 106,
  sym_endwhile_command = 107,
  sym_while_loop = 108,
  sym_normal_command = 109,
  sym__command_invocation = 110,
  aux_sym_source_file_repeat1 = 111,
  aux_sym_variable_repeat1 = 112,
  aux_sym__bracket_open_repeat1 = 113,
  aux_sym_bracket_content_repeat1 = 114,
  aux_sym_quoted_element_repeat1 = 115,
  aux_sym_unquoted_argument_repeat1 = 116,
  aux_sym_if_command_repeat1 = 117,
  aux_sym_if_command_repeat2 = 118,
  aux_sym_if_condition_repeat1 = 119,
  aux_sym_foreach_command_repeat1 = 120,
  aux_sym_normal_command_repeat1 = 121,
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
  [sym_while] = "while",
  [sym_endwhile] = "endwhile",
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
  [sym_if_condition] = "if_condition",
  [sym_foreach_command] = "foreach_command",
  [sym_endforeach_command] = "endforeach_command",
  [sym_foreach_loop] = "foreach_loop",
  [sym_while_command] = "while_command",
  [sym_endwhile_command] = "endwhile_command",
  [sym_while_loop] = "while_loop",
  [sym_normal_command] = "normal_command",
  [sym__command_invocation] = "_command_invocation",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_variable_repeat1] = "variable_repeat1",
  [aux_sym__bracket_open_repeat1] = "_bracket_open_repeat1",
  [aux_sym_bracket_content_repeat1] = "bracket_content_repeat1",
  [aux_sym_quoted_element_repeat1] = "quoted_element_repeat1",
  [aux_sym_unquoted_argument_repeat1] = "unquoted_argument_repeat1",
  [aux_sym_if_command_repeat1] = "if_command_repeat1",
  [aux_sym_if_command_repeat2] = "if_command_repeat2",
  [aux_sym_if_condition_repeat1] = "if_condition_repeat1",
  [aux_sym_foreach_command_repeat1] = "foreach_command_repeat1",
  [aux_sym_normal_command_repeat1] = "normal_command_repeat1",
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
  [sym_while] = sym_while,
  [sym_endwhile] = sym_endwhile,
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
  [sym_if_condition] = sym_if_condition,
  [sym_foreach_command] = sym_foreach_command,
  [sym_endforeach_command] = sym_endforeach_command,
  [sym_foreach_loop] = sym_foreach_loop,
  [sym_while_command] = sym_while_command,
  [sym_endwhile_command] = sym_endwhile_command,
  [sym_while_loop] = sym_while_loop,
  [sym_normal_command] = sym_normal_command,
  [sym__command_invocation] = sym__command_invocation,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_variable_repeat1] = aux_sym_variable_repeat1,
  [aux_sym__bracket_open_repeat1] = aux_sym__bracket_open_repeat1,
  [aux_sym_bracket_content_repeat1] = aux_sym_bracket_content_repeat1,
  [aux_sym_quoted_element_repeat1] = aux_sym_quoted_element_repeat1,
  [aux_sym_unquoted_argument_repeat1] = aux_sym_unquoted_argument_repeat1,
  [aux_sym_if_command_repeat1] = aux_sym_if_command_repeat1,
  [aux_sym_if_command_repeat2] = aux_sym_if_command_repeat2,
  [aux_sym_if_condition_repeat1] = aux_sym_if_condition_repeat1,
  [aux_sym_foreach_command_repeat1] = aux_sym_foreach_command_repeat1,
  [aux_sym_normal_command_repeat1] = aux_sym_normal_command_repeat1,
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
  [sym_while] = {
    .visible = true,
    .named = true,
  },
  [sym_endwhile] = {
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
  [sym_if_condition] = {
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
  [sym_foreach_loop] = {
    .visible = true,
    .named = true,
  },
  [sym_while_command] = {
    .visible = true,
    .named = true,
  },
  [sym_endwhile_command] = {
    .visible = true,
    .named = true,
  },
  [sym_while_loop] = {
    .visible = true,
    .named = true,
  },
  [sym_normal_command] = {
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
  [aux_sym_if_condition_repeat1] = {
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
      if (eof) ADVANCE(200);
      if (lookahead == '"') ADVANCE(217);
      if (lookahead == '$') ADVANCE(27);
      if (lookahead == '(') ADVANCE(253);
      if (lookahead == ')') ADVANCE(305);
      if (lookahead == '0') ADVANCE(265);
      if (lookahead == '1') ADVANCE(259);
      if (lookahead == ';') ADVANCE(205);
      if (lookahead == '=') ADVANCE(213);
      if (lookahead == 'N') ADVANCE(269);
      if (lookahead == 'Y') ADVANCE(263);
      if (lookahead == '[') ADVANCE(212);
      if (lookahead == '\\') ADVANCE(221);
      if (lookahead == ']') ADVANCE(216);
      if (lookahead == '{') ADVANCE(210);
      if (lookahead == '}') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(229);
      if (lookahead == '\n') ADVANCE(222);
      if (lookahead == '\r') ADVANCE(229);
      if (lookahead == ' ') ADVANCE(254);
      if (lookahead == '"') ADVANCE(217);
      if (lookahead == '$') ADVANCE(239);
      if (lookahead == ')') ADVANCE(305);
      if (lookahead == '0') ADVANCE(265);
      if (lookahead == '1') ADVANCE(259);
      if (lookahead == ';') ADVANCE(205);
      if (lookahead == 'A') ADVANCE(247);
      if (lookahead == 'C') ADVANCE(238);
      if (lookahead == 'D') ADVANCE(240);
      if (lookahead == 'E') ADVANCE(249);
      if (lookahead == 'F') ADVANCE(234);
      if (lookahead == 'G') ADVANCE(251);
      if (lookahead == 'I') ADVANCE(244);
      if (lookahead == 'L') ADVANCE(241);
      if (lookahead == 'M') ADVANCE(235);
      if (lookahead == 'N') ADVANCE(270);
      if (lookahead == 'O') ADVANCE(243);
      if (lookahead == 'P') ADVANCE(250);
      if (lookahead == 'S') ADVANCE(252);
      if (lookahead == 'T') ADVANCE(236);
      if (lookahead == 'V') ADVANCE(242);
      if (lookahead == 'Y') ADVANCE(264);
      if (lookahead == '[') ADVANCE(212);
      if (lookahead == '\\') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(') ADVANCE(228);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(230);
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '\r') ADVANCE(230);
      if (lookahead == ' ') ADVANCE(255);
      if (lookahead == '"') ADVANCE(217);
      if (lookahead == '$') ADVANCE(239);
      if (lookahead == ')') ADVANCE(305);
      if (lookahead == ';') ADVANCE(205);
      if (lookahead == 'I') ADVANCE(248);
      if (lookahead == 'L') ADVANCE(246);
      if (lookahead == 'R') ADVANCE(237);
      if (lookahead == 'Z') ADVANCE(245);
      if (lookahead == '[') ADVANCE(212);
      if (lookahead == '\\') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(') ADVANCE(228);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(231);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '\r') ADVANCE(231);
      if (lookahead == ' ') ADVANCE(256);
      if (lookahead == '"') ADVANCE(217);
      if (lookahead == '$') ADVANCE(239);
      if (lookahead == ')') ADVANCE(305);
      if (lookahead == ';') ADVANCE(205);
      if (lookahead == '[') ADVANCE(212);
      if (lookahead == '\\') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '(') ADVANCE(228);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(232);
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == '\r') ADVANCE(232);
      if (lookahead == ' ') ADVANCE(257);
      if (lookahead == '$') ADVANCE(239);
      if (lookahead == ')') ADVANCE(305);
      if (lookahead == ';') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(') ADVANCE(228);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') SKIP(5)
      if (lookahead == ')') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(258);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == ' ') SKIP(7)
      if (lookahead == '$') ADVANCE(239);
      if (lookahead == ')') ADVANCE(305);
      if (lookahead == ';') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(') ADVANCE(228);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(217);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == ';') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (lookahead != 0) ADVANCE(218);
      END_STATE();
    case 9:
      if (lookahead == ';') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(195);
      if (lookahead == '}') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
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
      if (lookahead == '{') ADVANCE(207);
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
      if (lookahead == 'D') ADVANCE(274);
      END_STATE();
    case 34:
      if (lookahead == 'D') ADVANCE(276);
      END_STATE();
    case 35:
      if (lookahead == 'D') ADVANCE(280);
      END_STATE();
    case 36:
      if (lookahead == 'D') ADVANCE(272);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(211);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(118);
      if (lookahead == 'G') ADVANCE(136);
      if (lookahead == 'L') ADVANCE(56);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(262);
      END_STATE();
    case 40:
      if (lookahead == 'E') ADVANCE(281);
      END_STATE();
    case 41:
      if (lookahead == 'E') ADVANCE(268);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(185);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(271);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(288);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(307);
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
      if (lookahead == 'F') ADVANCE(266);
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
      if (lookahead == 'K') ADVANCE(287);
      END_STATE();
    case 84:
      if (lookahead == 'L') ADVANCE(292);
      END_STATE();
    case 85:
      if (lookahead == 'L') ADVANCE(297);
      END_STATE();
    case 86:
      if (lookahead == 'L') ADVANCE(293);
      END_STATE();
    case 87:
      if (lookahead == 'L') ADVANCE(294);
      END_STATE();
    case 88:
      if (lookahead == 'L') ADVANCE(298);
      END_STATE();
    case 89:
      if (lookahead == 'L') ADVANCE(302);
      END_STATE();
    case 90:
      if (lookahead == 'L') ADVANCE(299);
      END_STATE();
    case 91:
      if (lookahead == 'L') ADVANCE(303);
      END_STATE();
    case 92:
      if (lookahead == 'L') ADVANCE(304);
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
      if (lookahead == 'N') ADVANCE(285);
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
      if (lookahead == 'R') ADVANCE(291);
      END_STATE();
    case 129:
      if (lookahead == 'R') ADVANCE(296);
      END_STATE();
    case 130:
      if (lookahead == 'R') ADVANCE(301);
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
      if (lookahead == 'S') ADVANCE(261);
      END_STATE();
    case 139:
      if (lookahead == 'S') ADVANCE(290);
      END_STATE();
    case 140:
      if (lookahead == 'S') ADVANCE(284);
      END_STATE();
    case 141:
      if (lookahead == 'S') ADVANCE(289);
      END_STATE();
    case 142:
      if (lookahead == 'S') ADVANCE(295);
      END_STATE();
    case 143:
      if (lookahead == 'S') ADVANCE(300);
      END_STATE();
    case 144:
      if (lookahead == 'S') ADVANCE(310);
      END_STATE();
    case 145:
      if (lookahead == 'S') ADVANCE(309);
      END_STATE();
    case 146:
      if (lookahead == 'S') ADVANCE(308);
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
      if (lookahead == 'T') ADVANCE(279);
      END_STATE();
    case 159:
      if (lookahead == 'T') ADVANCE(278);
      END_STATE();
    case 160:
      if (lookahead == 'T') ADVANCE(283);
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
      if (lookahead == 'V') ADVANCE(209);
      END_STATE();
    case 184:
      if (lookahead == 'V') ADVANCE(282);
      END_STATE();
    case 185:
      if (lookahead == 'W') ADVANCE(52);
      END_STATE();
    case 186:
      if (lookahead == 'Y') ADVANCE(277);
      END_STATE();
    case 187:
      if (lookahead == 'Y') ADVANCE(286);
      END_STATE();
    case 188:
      if (lookahead == 'Y') ADVANCE(101);
      END_STATE();
    case 189:
      if (lookahead == ']') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(215);
      if (lookahead != 0) ADVANCE(214);
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
      if (lookahead == 'n') ADVANCE(204);
      if (lookahead == 'r') ADVANCE(203);
      if (lookahead == 't') ADVANCE(202);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != ';' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(201);
      END_STATE();
    case 196:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(342);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(347);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(331);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(196)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 197:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(345);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(347);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(331);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(197)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 198:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(346);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(347);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(331);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(198)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 199:
      if (eof) ADVANCE(200);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(347);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(331);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(199)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__escape_identity);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__escape_semicolon);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_DOLLARENV);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_DOLLARCACHE);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_bracket_content_token1);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_bracket_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(214);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_quoted_element_token1);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_quoted_element_token1);
      if (lookahead == '$') ADVANCE(220);
      if (lookahead == ';') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_quoted_element_token1);
      if (lookahead == 'C') ADVANCE(10);
      if (lookahead == 'E') ADVANCE(103);
      if (lookahead == '{') ADVANCE(207);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'n') ADVANCE(204);
      if (lookahead == 'r') ADVANCE(203);
      if (lookahead == 't') ADVANCE(202);
      if (lookahead != 0 &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != ';' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(201);
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
      if (lookahead == '\t') ADVANCE(232);
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == '\r') ADVANCE(232);
      if (lookahead == ' ') ADVANCE(257);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_quoted_element_token2);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(258);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_quoted_element_token2);
      if (lookahead == '\n') ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == '\t') ADVANCE(229);
      if (lookahead == '\n') ADVANCE(222);
      if (lookahead == '\r') ADVANCE(229);
      if (lookahead == ' ') ADVANCE(254);
      if (lookahead == '$') ADVANCE(239);
      if (lookahead == '0') ADVANCE(265);
      if (lookahead == '1') ADVANCE(259);
      if (lookahead == ';') ADVANCE(205);
      if (lookahead == 'A') ADVANCE(247);
      if (lookahead == 'C') ADVANCE(238);
      if (lookahead == 'D') ADVANCE(240);
      if (lookahead == 'E') ADVANCE(249);
      if (lookahead == 'F') ADVANCE(234);
      if (lookahead == 'G') ADVANCE(251);
      if (lookahead == 'I') ADVANCE(244);
      if (lookahead == 'L') ADVANCE(241);
      if (lookahead == 'M') ADVANCE(235);
      if (lookahead == 'N') ADVANCE(270);
      if (lookahead == 'O') ADVANCE(243);
      if (lookahead == 'P') ADVANCE(250);
      if (lookahead == 'S') ADVANCE(252);
      if (lookahead == 'T') ADVANCE(236);
      if (lookahead == 'V') ADVANCE(242);
      if (lookahead == 'Y') ADVANCE(264);
      if (lookahead == '[') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(228);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == '\t') ADVANCE(230);
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '\r') ADVANCE(230);
      if (lookahead == ' ') ADVANCE(255);
      if (lookahead == '$') ADVANCE(239);
      if (lookahead == ';') ADVANCE(205);
      if (lookahead == 'I') ADVANCE(248);
      if (lookahead == 'L') ADVANCE(246);
      if (lookahead == 'R') ADVANCE(237);
      if (lookahead == 'Z') ADVANCE(245);
      if (lookahead == '[') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(228);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == '\t') ADVANCE(231);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == '\r') ADVANCE(231);
      if (lookahead == ' ') ADVANCE(256);
      if (lookahead == '$') ADVANCE(239);
      if (lookahead == ';') ADVANCE(205);
      if (lookahead == '[') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(228);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == '\t') ADVANCE(232);
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == '\r') ADVANCE(232);
      if (lookahead == ' ') ADVANCE(257);
      if (lookahead == '$') ADVANCE(239);
      if (lookahead == ';') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(228);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == '$') ADVANCE(239);
      if (lookahead == ';') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(228);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'A') ADVANCE(95);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'A') ADVANCE(170);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'A') ADVANCE(127);
      if (lookahead == 'E') ADVANCE(147);
      if (lookahead == 'R') ADVANCE(172);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'A') ADVANCE(111);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'A') ADVANCE(31);
      if (lookahead == 'O') ADVANCE(99);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'C') ADVANCE(10);
      if (lookahead == 'E') ADVANCE(103);
      if (lookahead == '{') ADVANCE(207);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'E') ADVANCE(68);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'E') ADVANCE(152);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'E') ADVANCE(133);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'F') ADVANCE(67);
      if (lookahead == 'N') ADVANCE(260);
      if (lookahead == 'R') ADVANCE(275);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'G') ADVANCE(104);
      if (lookahead == 'N') ADVANCE(191);
      if (lookahead == 'S') ADVANCE(190);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'I') ADVANCE(117);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'I') ADVANCE(156);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'N') ADVANCE(33);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'N') ADVANCE(306);
      if (lookahead == 'T') ADVANCE(49);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'N') ADVANCE(184);
      if (lookahead == 'Q') ADVANCE(171);
      if (lookahead == 'X') ADVANCE(79);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'O') ADVANCE(93);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'R') ADVANCE(46);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_unquoted_argument_token1);
      if (lookahead == 'T') ADVANCE(126);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_LPAREN);
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
      if (lookahead == '\t') ADVANCE(232);
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == '\r') ADVANCE(232);
      if (lookahead == ' ') ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_if_command_token1);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_ON);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_YES);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_TRUE);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead == 'E') ADVANCE(138);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_OFF);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_NO);
      if (lookahead == 'T') ADVANCE(273);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_FALSE);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_N);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_N);
      if (lookahead == 'O') ADVANCE(267);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_IGNORE);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_NOTFOUND);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_NOT);
      if (lookahead == 'F') ADVANCE(112);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_COMMAND);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_POLICY);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_TARGET);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_TEST);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_DEFINED);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_CACHE);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_ENV);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_IN_LIST);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_EXISTS);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_IS_NEWER_THAN);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_IS_DIRECTORY);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_IS_SYMLINK);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_IS_ABSOLUTE);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_MATCHES);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_LESS);
      if (lookahead == '_') ADVANCE(60);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_GREATER);
      if (lookahead == '_') ADVANCE(61);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_EQUAL);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_LESS_EQUAL);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_GREATER_EQUAL);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_STRLESS);
      if (lookahead == '_') ADVANCE(62);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_STRGREATER);
      if (lookahead == '_') ADVANCE(64);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_STREQUAL);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_STRLESS_EQUAL);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_STRGREATER_EQUAL);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_VERSION_LESS);
      if (lookahead == '_') ADVANCE(65);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_VERSION_GREATER);
      if (lookahead == '_') ADVANCE(66);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_VERSION_EQUAL);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_VERSION_LESS_EQUAL);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_VERSION_GREATER_EQUAL);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_RANGE);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_ZIP_LISTS);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_LISTS);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_ITEMS);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_elseif);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_else);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_endif);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_foreach);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_endforeach);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_endwhile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(351);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 199},
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
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 196},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 196},
  [52] = {.lex_state = 196},
  [53] = {.lex_state = 196},
  [54] = {.lex_state = 196},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 196},
  [59] = {.lex_state = 196},
  [60] = {.lex_state = 196},
  [61] = {.lex_state = 196},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 197},
  [67] = {.lex_state = 198},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 198},
  [70] = {.lex_state = 197},
  [71] = {.lex_state = 197},
  [72] = {.lex_state = 198},
  [73] = {.lex_state = 197},
  [74] = {.lex_state = 197},
  [75] = {.lex_state = 198},
  [76] = {.lex_state = 198},
  [77] = {.lex_state = 197},
  [78] = {.lex_state = 197},
  [79] = {.lex_state = 198},
  [80] = {.lex_state = 198},
  [81] = {.lex_state = 197},
  [82] = {.lex_state = 198},
  [83] = {.lex_state = 199},
  [84] = {.lex_state = 198},
  [85] = {.lex_state = 197},
  [86] = {.lex_state = 199},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 8},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 9},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 9},
  [102] = {.lex_state = 9},
  [103] = {.lex_state = 7},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 9},
  [106] = {.lex_state = 9},
  [107] = {.lex_state = 9},
  [108] = {.lex_state = 9},
  [109] = {.lex_state = 9},
  [110] = {.lex_state = 9},
  [111] = {.lex_state = 9},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 196},
  [115] = {.lex_state = 196},
  [116] = {.lex_state = 196},
  [117] = {.lex_state = 196},
  [118] = {.lex_state = 196},
  [119] = {.lex_state = 196},
  [120] = {.lex_state = 196},
  [121] = {.lex_state = 196},
  [122] = {.lex_state = 196},
  [123] = {.lex_state = 196},
  [124] = {.lex_state = 196},
  [125] = {.lex_state = 196},
  [126] = {.lex_state = 196},
  [127] = {.lex_state = 196},
  [128] = {.lex_state = 196},
  [129] = {.lex_state = 196},
  [130] = {.lex_state = 196},
  [131] = {.lex_state = 196},
  [132] = {.lex_state = 196},
  [133] = {.lex_state = 196},
  [134] = {.lex_state = 196},
  [135] = {.lex_state = 196},
  [136] = {.lex_state = 196},
  [137] = {.lex_state = 196},
  [138] = {.lex_state = 196},
  [139] = {.lex_state = 196},
  [140] = {.lex_state = 196},
  [141] = {.lex_state = 9},
  [142] = {.lex_state = 196},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 199},
  [145] = {.lex_state = 199},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 199},
  [149] = {.lex_state = 199},
  [150] = {.lex_state = 199},
  [151] = {.lex_state = 199},
  [152] = {.lex_state = 199},
  [153] = {.lex_state = 5},
  [154] = {.lex_state = 199},
  [155] = {.lex_state = 5},
  [156] = {.lex_state = 5},
  [157] = {.lex_state = 197},
  [158] = {.lex_state = 199},
  [159] = {.lex_state = 198},
  [160] = {.lex_state = 199},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 5},
  [163] = {.lex_state = 5},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 5},
  [167] = {.lex_state = 199},
  [168] = {.lex_state = 199},
  [169] = {.lex_state = 5},
  [170] = {.lex_state = 198},
  [171] = {.lex_state = 5},
  [172] = {.lex_state = 5},
  [173] = {.lex_state = 5},
  [174] = {.lex_state = 199},
  [175] = {.lex_state = 189},
  [176] = {.lex_state = 197},
  [177] = {.lex_state = 5},
  [178] = {.lex_state = 5},
  [179] = {.lex_state = 5},
  [180] = {.lex_state = 5},
  [181] = {.lex_state = 5},
  [182] = {.lex_state = 5},
  [183] = {.lex_state = 5},
  [184] = {.lex_state = 5},
  [185] = {.lex_state = 5},
  [186] = {.lex_state = 197},
  [187] = {.lex_state = 197},
  [188] = {.lex_state = 197},
  [189] = {.lex_state = 197},
  [190] = {.lex_state = 5},
  [191] = {.lex_state = 199},
  [192] = {.lex_state = 5},
  [193] = {.lex_state = 197},
  [194] = {.lex_state = 197},
  [195] = {.lex_state = 197},
  [196] = {.lex_state = 197},
  [197] = {.lex_state = 5},
  [198] = {.lex_state = 197},
  [199] = {.lex_state = 197},
  [200] = {.lex_state = 197},
  [201] = {.lex_state = 197},
  [202] = {.lex_state = 199},
  [203] = {.lex_state = 197},
  [204] = {.lex_state = 197},
  [205] = {.lex_state = 197},
  [206] = {.lex_state = 197},
  [207] = {.lex_state = 199},
  [208] = {.lex_state = 5},
  [209] = {.lex_state = 197},
  [210] = {.lex_state = 197},
  [211] = {.lex_state = 197},
  [212] = {.lex_state = 197},
  [213] = {.lex_state = 198},
  [214] = {.lex_state = 198},
  [215] = {.lex_state = 198},
  [216] = {.lex_state = 199},
  [217] = {.lex_state = 198},
  [218] = {.lex_state = 198},
  [219] = {.lex_state = 198},
  [220] = {.lex_state = 198},
  [221] = {.lex_state = 198},
  [222] = {.lex_state = 198},
  [223] = {.lex_state = 198},
  [224] = {.lex_state = 198},
  [225] = {.lex_state = 198},
  [226] = {.lex_state = 198},
  [227] = {.lex_state = 198},
  [228] = {.lex_state = 198},
  [229] = {.lex_state = 198},
  [230] = {.lex_state = 198},
  [231] = {.lex_state = 198},
  [232] = {.lex_state = 198},
  [233] = {.lex_state = 199},
  [234] = {.lex_state = 5},
  [235] = {.lex_state = 5},
  [236] = {.lex_state = 199},
  [237] = {.lex_state = 5},
  [238] = {.lex_state = 5},
  [239] = {.lex_state = 189},
  [240] = {.lex_state = 5},
  [241] = {.lex_state = 198},
  [242] = {.lex_state = 5},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 5},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 5},
  [247] = {.lex_state = 5},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 189},
  [250] = {.lex_state = 5},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 5},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 189},
  [255] = {.lex_state = 5},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 5},
  [258] = {.lex_state = 5},
  [259] = {.lex_state = 5},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 5},
  [262] = {.lex_state = 189},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 189},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 6},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
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
    [sym_source_file] = STATE(323),
    [sym_if_command] = STATE(53),
    [sym_if_condition] = STATE(86),
    [sym_foreach_command] = STATE(77),
    [sym_foreach_loop] = STATE(86),
    [sym_while_command] = STATE(82),
    [sym_while_loop] = STATE(86),
    [sym_normal_command] = STATE(86),
    [sym__command_invocation] = STATE(86),
    [aux_sym_source_file_repeat1] = STATE(86),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_if] = ACTIONS(5),
    [sym_foreach] = ACTIONS(7),
    [sym_while] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
  },
  [2] = {
    [sym_escape_sequence] = STATE(65),
    [sym__escape_encoded] = STATE(113),
    [sym_variable_ref] = STATE(65),
    [sym_normal_var] = STATE(103),
    [sym_env_var] = STATE(103),
    [sym_cache_var] = STATE(103),
    [sym_argument] = STATE(310),
    [sym_bracket_argument] = STATE(305),
    [sym__bracket_open] = STATE(239),
    [sym_quoted_argument] = STATE(305),
    [sym_unquoted_argument] = STATE(305),
    [aux_sym_unquoted_argument_repeat1] = STATE(65),
    [aux_sym_if_command_repeat1] = STATE(27),
    [sym__escape_identity] = ACTIONS(13),
    [anon_sym_BSLASHt] = ACTIONS(13),
    [anon_sym_BSLASHr] = ACTIONS(13),
    [anon_sym_BSLASHn] = ACTIONS(13),
    [sym__escape_semicolon] = ACTIONS(13),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(15),
    [anon_sym_DOLLARENV] = ACTIONS(17),
    [anon_sym_DOLLARCACHE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [aux_sym_quoted_element_token2] = ACTIONS(25),
    [aux_sym_unquoted_argument_token1] = ACTIONS(27),
    [aux_sym_if_command_token1] = ACTIONS(25),
    [anon_sym_1] = ACTIONS(29),
    [anon_sym_ON] = ACTIONS(29),
    [anon_sym_YES] = ACTIONS(29),
    [anon_sym_TRUE] = ACTIONS(29),
    [anon_sym_Y] = ACTIONS(29),
    [anon_sym_0] = ACTIONS(29),
    [anon_sym_OFF] = ACTIONS(29),
    [anon_sym_NO] = ACTIONS(29),
    [anon_sym_FALSE] = ACTIONS(29),
    [anon_sym_N] = ACTIONS(29),
    [anon_sym_IGNORE] = ACTIONS(29),
    [anon_sym_NOTFOUND] = ACTIONS(29),
    [anon_sym_NOT] = ACTIONS(29),
    [anon_sym_AND] = ACTIONS(29),
    [anon_sym_OR] = ACTIONS(29),
    [anon_sym_COMMAND] = ACTIONS(29),
    [anon_sym_POLICY] = ACTIONS(29),
    [anon_sym_TARGET] = ACTIONS(29),
    [anon_sym_TEST] = ACTIONS(29),
    [anon_sym_DEFINED] = ACTIONS(29),
    [anon_sym_CACHE] = ACTIONS(29),
    [anon_sym_ENV] = ACTIONS(29),
    [anon_sym_IN_LIST] = ACTIONS(29),
    [anon_sym_EXISTS] = ACTIONS(29),
    [anon_sym_IS_NEWER_THAN] = ACTIONS(29),
    [anon_sym_IS_DIRECTORY] = ACTIONS(29),
    [anon_sym_IS_SYMLINK] = ACTIONS(29),
    [anon_sym_IS_ABSOLUTE] = ACTIONS(29),
    [anon_sym_MATCHES] = ACTIONS(29),
    [anon_sym_LESS] = ACTIONS(29),
    [anon_sym_GREATER] = ACTIONS(29),
    [anon_sym_EQUAL] = ACTIONS(29),
    [anon_sym_LESS_EQUAL] = ACTIONS(29),
    [anon_sym_GREATER_EQUAL] = ACTIONS(29),
    [anon_sym_STRLESS] = ACTIONS(29),
    [anon_sym_STRGREATER] = ACTIONS(29),
    [anon_sym_STREQUAL] = ACTIONS(29),
    [anon_sym_STRLESS_EQUAL] = ACTIONS(29),
    [anon_sym_STRGREATER_EQUAL] = ACTIONS(29),
    [anon_sym_VERSION_LESS] = ACTIONS(29),
    [anon_sym_VERSION_GREATER] = ACTIONS(29),
    [anon_sym_VERSION_EQUAL] = ACTIONS(29),
    [anon_sym_VERSION_LESS_EQUAL] = ACTIONS(29),
    [anon_sym_VERSION_GREATER_EQUAL] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(31),
  },
  [3] = {
    [sym_escape_sequence] = STATE(65),
    [sym__escape_encoded] = STATE(113),
    [sym_variable_ref] = STATE(65),
    [sym_normal_var] = STATE(103),
    [sym_env_var] = STATE(103),
    [sym_cache_var] = STATE(103),
    [sym_argument] = STATE(266),
    [sym_bracket_argument] = STATE(305),
    [sym__bracket_open] = STATE(239),
    [sym_quoted_argument] = STATE(305),
    [sym_unquoted_argument] = STATE(305),
    [aux_sym_unquoted_argument_repeat1] = STATE(65),
    [aux_sym_if_command_repeat1] = STATE(27),
    [sym__escape_identity] = ACTIONS(13),
    [anon_sym_BSLASHt] = ACTIONS(13),
    [anon_sym_BSLASHr] = ACTIONS(13),
    [anon_sym_BSLASHn] = ACTIONS(13),
    [sym__escape_semicolon] = ACTIONS(13),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(15),
    [anon_sym_DOLLARENV] = ACTIONS(17),
    [anon_sym_DOLLARCACHE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [aux_sym_quoted_element_token2] = ACTIONS(25),
    [aux_sym_unquoted_argument_token1] = ACTIONS(27),
    [aux_sym_if_command_token1] = ACTIONS(25),
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
    [sym_escape_sequence] = STATE(65),
    [sym__escape_encoded] = STATE(113),
    [sym_variable_ref] = STATE(65),
    [sym_normal_var] = STATE(103),
    [sym_env_var] = STATE(103),
    [sym_cache_var] = STATE(103),
    [sym_argument] = STATE(275),
    [sym_bracket_argument] = STATE(305),
    [sym__bracket_open] = STATE(239),
    [sym_quoted_argument] = STATE(305),
    [sym_unquoted_argument] = STATE(305),
    [aux_sym_unquoted_argument_repeat1] = STATE(65),
    [aux_sym_if_command_repeat1] = STATE(15),
    [sym__escape_identity] = ACTIONS(13),
    [anon_sym_BSLASHt] = ACTIONS(13),
    [anon_sym_BSLASHr] = ACTIONS(13),
    [anon_sym_BSLASHn] = ACTIONS(13),
    [sym__escape_semicolon] = ACTIONS(13),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(15),
    [anon_sym_DOLLARENV] = ACTIONS(17),
    [anon_sym_DOLLARCACHE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [aux_sym_quoted_element_token2] = ACTIONS(37),
    [aux_sym_unquoted_argument_token1] = ACTIONS(27),
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
    [sym_escape_sequence] = STATE(65),
    [sym__escape_encoded] = STATE(113),
    [sym_variable_ref] = STATE(65),
    [sym_normal_var] = STATE(103),
    [sym_env_var] = STATE(103),
    [sym_cache_var] = STATE(103),
    [sym_argument] = STATE(313),
    [sym_bracket_argument] = STATE(305),
    [sym__bracket_open] = STATE(239),
    [sym_quoted_argument] = STATE(305),
    [sym_unquoted_argument] = STATE(305),
    [aux_sym_unquoted_argument_repeat1] = STATE(65),
    [aux_sym_if_command_repeat1] = STATE(27),
    [sym__escape_identity] = ACTIONS(13),
    [anon_sym_BSLASHt] = ACTIONS(13),
    [anon_sym_BSLASHr] = ACTIONS(13),
    [anon_sym_BSLASHn] = ACTIONS(13),
    [sym__escape_semicolon] = ACTIONS(13),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(15),
    [anon_sym_DOLLARENV] = ACTIONS(17),
    [anon_sym_DOLLARCACHE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [aux_sym_quoted_element_token2] = ACTIONS(25),
    [aux_sym_unquoted_argument_token1] = ACTIONS(27),
    [aux_sym_if_command_token1] = ACTIONS(25),
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
    [sym_escape_sequence] = STATE(65),
    [sym__escape_encoded] = STATE(113),
    [sym_variable_ref] = STATE(65),
    [sym_normal_var] = STATE(103),
    [sym_env_var] = STATE(103),
    [sym_cache_var] = STATE(103),
    [sym_argument] = STATE(281),
    [sym_bracket_argument] = STATE(305),
    [sym__bracket_open] = STATE(239),
    [sym_quoted_argument] = STATE(305),
    [sym_unquoted_argument] = STATE(305),
    [aux_sym_unquoted_argument_repeat1] = STATE(65),
    [aux_sym_if_command_repeat1] = STATE(13),
    [sym__escape_identity] = ACTIONS(13),
    [anon_sym_BSLASHt] = ACTIONS(13),
    [anon_sym_BSLASHr] = ACTIONS(13),
    [anon_sym_BSLASHn] = ACTIONS(13),
    [sym__escape_semicolon] = ACTIONS(13),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(15),
    [anon_sym_DOLLARENV] = ACTIONS(17),
    [anon_sym_DOLLARCACHE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [aux_sym_quoted_element_token2] = ACTIONS(47),
    [aux_sym_unquoted_argument_token1] = ACTIONS(27),
    [aux_sym_if_command_token1] = ACTIONS(47),
    [anon_sym_1] = ACTIONS(49),
    [anon_sym_ON] = ACTIONS(49),
    [anon_sym_YES] = ACTIONS(49),
    [anon_sym_TRUE] = ACTIONS(49),
    [anon_sym_Y] = ACTIONS(49),
    [anon_sym_0] = ACTIONS(49),
    [anon_sym_OFF] = ACTIONS(49),
    [anon_sym_NO] = ACTIONS(49),
    [anon_sym_FALSE] = ACTIONS(49),
    [anon_sym_N] = ACTIONS(49),
    [anon_sym_IGNORE] = ACTIONS(49),
    [anon_sym_NOTFOUND] = ACTIONS(49),
    [anon_sym_NOT] = ACTIONS(49),
    [anon_sym_AND] = ACTIONS(49),
    [anon_sym_OR] = ACTIONS(49),
    [anon_sym_COMMAND] = ACTIONS(49),
    [anon_sym_POLICY] = ACTIONS(49),
    [anon_sym_TARGET] = ACTIONS(49),
    [anon_sym_TEST] = ACTIONS(49),
    [anon_sym_DEFINED] = ACTIONS(49),
    [anon_sym_CACHE] = ACTIONS(49),
    [anon_sym_ENV] = ACTIONS(49),
    [anon_sym_IN_LIST] = ACTIONS(49),
    [anon_sym_EXISTS] = ACTIONS(49),
    [anon_sym_IS_NEWER_THAN] = ACTIONS(49),
    [anon_sym_IS_DIRECTORY] = ACTIONS(49),
    [anon_sym_IS_SYMLINK] = ACTIONS(49),
    [anon_sym_IS_ABSOLUTE] = ACTIONS(49),
    [anon_sym_MATCHES] = ACTIONS(49),
    [anon_sym_LESS] = ACTIONS(49),
    [anon_sym_GREATER] = ACTIONS(49),
    [anon_sym_EQUAL] = ACTIONS(49),
    [anon_sym_LESS_EQUAL] = ACTIONS(49),
    [anon_sym_GREATER_EQUAL] = ACTIONS(49),
    [anon_sym_STRLESS] = ACTIONS(49),
    [anon_sym_STRGREATER] = ACTIONS(49),
    [anon_sym_STREQUAL] = ACTIONS(49),
    [anon_sym_STRLESS_EQUAL] = ACTIONS(49),
    [anon_sym_STRGREATER_EQUAL] = ACTIONS(49),
    [anon_sym_VERSION_LESS] = ACTIONS(49),
    [anon_sym_VERSION_GREATER] = ACTIONS(49),
    [anon_sym_VERSION_EQUAL] = ACTIONS(49),
    [anon_sym_VERSION_LESS_EQUAL] = ACTIONS(49),
    [anon_sym_VERSION_GREATER_EQUAL] = ACTIONS(49),
    [anon_sym_RPAREN] = ACTIONS(51),
  },
  [7] = {
    [sym_escape_sequence] = STATE(65),
    [sym__escape_encoded] = STATE(113),
    [sym_variable_ref] = STATE(65),
    [sym_normal_var] = STATE(103),
    [sym_env_var] = STATE(103),
    [sym_cache_var] = STATE(103),
    [sym_argument] = STATE(304),
    [sym_bracket_argument] = STATE(305),
    [sym__bracket_open] = STATE(239),
    [sym_quoted_argument] = STATE(305),
    [sym_unquoted_argument] = STATE(305),
    [aux_sym_unquoted_argument_repeat1] = STATE(65),
    [aux_sym_if_command_repeat1] = STATE(5),
    [sym__escape_identity] = ACTIONS(13),
    [anon_sym_BSLASHt] = ACTIONS(13),
    [anon_sym_BSLASHr] = ACTIONS(13),
    [anon_sym_BSLASHn] = ACTIONS(13),
    [sym__escape_semicolon] = ACTIONS(13),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(15),
    [anon_sym_DOLLARENV] = ACTIONS(17),
    [anon_sym_DOLLARCACHE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [aux_sym_quoted_element_token2] = ACTIONS(53),
    [aux_sym_unquoted_argument_token1] = ACTIONS(27),
    [aux_sym_if_command_token1] = ACTIONS(53),
    [anon_sym_1] = ACTIONS(55),
    [anon_sym_ON] = ACTIONS(55),
    [anon_sym_YES] = ACTIONS(55),
    [anon_sym_TRUE] = ACTIONS(55),
    [anon_sym_Y] = ACTIONS(55),
    [anon_sym_0] = ACTIONS(55),
    [anon_sym_OFF] = ACTIONS(55),
    [anon_sym_NO] = ACTIONS(55),
    [anon_sym_FALSE] = ACTIONS(55),
    [anon_sym_N] = ACTIONS(55),
    [anon_sym_IGNORE] = ACTIONS(55),
    [anon_sym_NOTFOUND] = ACTIONS(55),
    [anon_sym_NOT] = ACTIONS(55),
    [anon_sym_AND] = ACTIONS(55),
    [anon_sym_OR] = ACTIONS(55),
    [anon_sym_COMMAND] = ACTIONS(55),
    [anon_sym_POLICY] = ACTIONS(55),
    [anon_sym_TARGET] = ACTIONS(55),
    [anon_sym_TEST] = ACTIONS(55),
    [anon_sym_DEFINED] = ACTIONS(55),
    [anon_sym_CACHE] = ACTIONS(55),
    [anon_sym_ENV] = ACTIONS(55),
    [anon_sym_IN_LIST] = ACTIONS(55),
    [anon_sym_EXISTS] = ACTIONS(55),
    [anon_sym_IS_NEWER_THAN] = ACTIONS(55),
    [anon_sym_IS_DIRECTORY] = ACTIONS(55),
    [anon_sym_IS_SYMLINK] = ACTIONS(55),
    [anon_sym_IS_ABSOLUTE] = ACTIONS(55),
    [anon_sym_MATCHES] = ACTIONS(55),
    [anon_sym_LESS] = ACTIONS(55),
    [anon_sym_GREATER] = ACTIONS(55),
    [anon_sym_EQUAL] = ACTIONS(55),
    [anon_sym_LESS_EQUAL] = ACTIONS(55),
    [anon_sym_GREATER_EQUAL] = ACTIONS(55),
    [anon_sym_STRLESS] = ACTIONS(55),
    [anon_sym_STRGREATER] = ACTIONS(55),
    [anon_sym_STREQUAL] = ACTIONS(55),
    [anon_sym_STRLESS_EQUAL] = ACTIONS(55),
    [anon_sym_STRGREATER_EQUAL] = ACTIONS(55),
    [anon_sym_VERSION_LESS] = ACTIONS(55),
    [anon_sym_VERSION_GREATER] = ACTIONS(55),
    [anon_sym_VERSION_EQUAL] = ACTIONS(55),
    [anon_sym_VERSION_LESS_EQUAL] = ACTIONS(55),
    [anon_sym_VERSION_GREATER_EQUAL] = ACTIONS(55),
    [anon_sym_RPAREN] = ACTIONS(57),
  },
  [8] = {
    [sym_escape_sequence] = STATE(65),
    [sym__escape_encoded] = STATE(113),
    [sym_variable_ref] = STATE(65),
    [sym_normal_var] = STATE(103),
    [sym_env_var] = STATE(103),
    [sym_cache_var] = STATE(103),
    [sym_argument] = STATE(306),
    [sym_bracket_argument] = STATE(305),
    [sym__bracket_open] = STATE(239),
    [sym_quoted_argument] = STATE(305),
    [sym_unquoted_argument] = STATE(305),
    [aux_sym_unquoted_argument_repeat1] = STATE(65),
    [aux_sym_if_command_repeat1] = STATE(27),
    [sym__escape_identity] = ACTIONS(13),
    [anon_sym_BSLASHt] = ACTIONS(13),
    [anon_sym_BSLASHr] = ACTIONS(13),
    [anon_sym_BSLASHn] = ACTIONS(13),
    [sym__escape_semicolon] = ACTIONS(13),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(15),
    [anon_sym_DOLLARENV] = ACTIONS(17),
    [anon_sym_DOLLARCACHE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [aux_sym_quoted_element_token2] = ACTIONS(25),
    [aux_sym_unquoted_argument_token1] = ACTIONS(27),
    [aux_sym_if_command_token1] = ACTIONS(25),
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
    [anon_sym_RPAREN] = ACTIONS(61),
  },
  [9] = {
    [sym_escape_sequence] = STATE(65),
    [sym__escape_encoded] = STATE(113),
    [sym_variable_ref] = STATE(65),
    [sym_normal_var] = STATE(103),
    [sym_env_var] = STATE(103),
    [sym_cache_var] = STATE(103),
    [sym_argument] = STATE(285),
    [sym_bracket_argument] = STATE(305),
    [sym__bracket_open] = STATE(239),
    [sym_quoted_argument] = STATE(305),
    [sym_unquoted_argument] = STATE(305),
    [aux_sym_unquoted_argument_repeat1] = STATE(65),
    [aux_sym_if_command_repeat1] = STATE(14),
    [sym__escape_identity] = ACTIONS(13),
    [anon_sym_BSLASHt] = ACTIONS(13),
    [anon_sym_BSLASHr] = ACTIONS(13),
    [anon_sym_BSLASHn] = ACTIONS(13),
    [sym__escape_semicolon] = ACTIONS(13),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(15),
    [anon_sym_DOLLARENV] = ACTIONS(17),
    [anon_sym_DOLLARCACHE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [aux_sym_quoted_element_token2] = ACTIONS(63),
    [aux_sym_unquoted_argument_token1] = ACTIONS(27),
    [aux_sym_if_command_token1] = ACTIONS(63),
    [anon_sym_1] = ACTIONS(65),
    [anon_sym_ON] = ACTIONS(65),
    [anon_sym_YES] = ACTIONS(65),
    [anon_sym_TRUE] = ACTIONS(65),
    [anon_sym_Y] = ACTIONS(65),
    [anon_sym_0] = ACTIONS(65),
    [anon_sym_OFF] = ACTIONS(65),
    [anon_sym_NO] = ACTIONS(65),
    [anon_sym_FALSE] = ACTIONS(65),
    [anon_sym_N] = ACTIONS(65),
    [anon_sym_IGNORE] = ACTIONS(65),
    [anon_sym_NOTFOUND] = ACTIONS(65),
    [anon_sym_NOT] = ACTIONS(65),
    [anon_sym_AND] = ACTIONS(65),
    [anon_sym_OR] = ACTIONS(65),
    [anon_sym_COMMAND] = ACTIONS(65),
    [anon_sym_POLICY] = ACTIONS(65),
    [anon_sym_TARGET] = ACTIONS(65),
    [anon_sym_TEST] = ACTIONS(65),
    [anon_sym_DEFINED] = ACTIONS(65),
    [anon_sym_CACHE] = ACTIONS(65),
    [anon_sym_ENV] = ACTIONS(65),
    [anon_sym_IN_LIST] = ACTIONS(65),
    [anon_sym_EXISTS] = ACTIONS(65),
    [anon_sym_IS_NEWER_THAN] = ACTIONS(65),
    [anon_sym_IS_DIRECTORY] = ACTIONS(65),
    [anon_sym_IS_SYMLINK] = ACTIONS(65),
    [anon_sym_IS_ABSOLUTE] = ACTIONS(65),
    [anon_sym_MATCHES] = ACTIONS(65),
    [anon_sym_LESS] = ACTIONS(65),
    [anon_sym_GREATER] = ACTIONS(65),
    [anon_sym_EQUAL] = ACTIONS(65),
    [anon_sym_LESS_EQUAL] = ACTIONS(65),
    [anon_sym_GREATER_EQUAL] = ACTIONS(65),
    [anon_sym_STRLESS] = ACTIONS(65),
    [anon_sym_STRGREATER] = ACTIONS(65),
    [anon_sym_STREQUAL] = ACTIONS(65),
    [anon_sym_STRLESS_EQUAL] = ACTIONS(65),
    [anon_sym_STRGREATER_EQUAL] = ACTIONS(65),
    [anon_sym_VERSION_LESS] = ACTIONS(65),
    [anon_sym_VERSION_GREATER] = ACTIONS(65),
    [anon_sym_VERSION_EQUAL] = ACTIONS(65),
    [anon_sym_VERSION_LESS_EQUAL] = ACTIONS(65),
    [anon_sym_VERSION_GREATER_EQUAL] = ACTIONS(65),
    [anon_sym_RPAREN] = ACTIONS(67),
  },
  [10] = {
    [sym_escape_sequence] = STATE(65),
    [sym__escape_encoded] = STATE(113),
    [sym_variable_ref] = STATE(65),
    [sym_normal_var] = STATE(103),
    [sym_env_var] = STATE(103),
    [sym_cache_var] = STATE(103),
    [sym_argument] = STATE(269),
    [sym_bracket_argument] = STATE(305),
    [sym__bracket_open] = STATE(239),
    [sym_quoted_argument] = STATE(305),
    [sym_unquoted_argument] = STATE(305),
    [aux_sym_unquoted_argument_repeat1] = STATE(65),
    [aux_sym_if_command_repeat1] = STATE(3),
    [sym__escape_identity] = ACTIONS(13),
    [anon_sym_BSLASHt] = ACTIONS(13),
    [anon_sym_BSLASHr] = ACTIONS(13),
    [anon_sym_BSLASHn] = ACTIONS(13),
    [sym__escape_semicolon] = ACTIONS(13),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(15),
    [anon_sym_DOLLARENV] = ACTIONS(17),
    [anon_sym_DOLLARCACHE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [aux_sym_quoted_element_token2] = ACTIONS(69),
    [aux_sym_unquoted_argument_token1] = ACTIONS(27),
    [aux_sym_if_command_token1] = ACTIONS(69),
    [anon_sym_1] = ACTIONS(71),
    [anon_sym_ON] = ACTIONS(71),
    [anon_sym_YES] = ACTIONS(71),
    [anon_sym_TRUE] = ACTIONS(71),
    [anon_sym_Y] = ACTIONS(71),
    [anon_sym_0] = ACTIONS(71),
    [anon_sym_OFF] = ACTIONS(71),
    [anon_sym_NO] = ACTIONS(71),
    [anon_sym_FALSE] = ACTIONS(71),
    [anon_sym_N] = ACTIONS(71),
    [anon_sym_IGNORE] = ACTIONS(71),
    [anon_sym_NOTFOUND] = ACTIONS(71),
    [anon_sym_NOT] = ACTIONS(71),
    [anon_sym_AND] = ACTIONS(71),
    [anon_sym_OR] = ACTIONS(71),
    [anon_sym_COMMAND] = ACTIONS(71),
    [anon_sym_POLICY] = ACTIONS(71),
    [anon_sym_TARGET] = ACTIONS(71),
    [anon_sym_TEST] = ACTIONS(71),
    [anon_sym_DEFINED] = ACTIONS(71),
    [anon_sym_CACHE] = ACTIONS(71),
    [anon_sym_ENV] = ACTIONS(71),
    [anon_sym_IN_LIST] = ACTIONS(71),
    [anon_sym_EXISTS] = ACTIONS(71),
    [anon_sym_IS_NEWER_THAN] = ACTIONS(71),
    [anon_sym_IS_DIRECTORY] = ACTIONS(71),
    [anon_sym_IS_SYMLINK] = ACTIONS(71),
    [anon_sym_IS_ABSOLUTE] = ACTIONS(71),
    [anon_sym_MATCHES] = ACTIONS(71),
    [anon_sym_LESS] = ACTIONS(71),
    [anon_sym_GREATER] = ACTIONS(71),
    [anon_sym_EQUAL] = ACTIONS(71),
    [anon_sym_LESS_EQUAL] = ACTIONS(71),
    [anon_sym_GREATER_EQUAL] = ACTIONS(71),
    [anon_sym_STRLESS] = ACTIONS(71),
    [anon_sym_STRGREATER] = ACTIONS(71),
    [anon_sym_STREQUAL] = ACTIONS(71),
    [anon_sym_STRLESS_EQUAL] = ACTIONS(71),
    [anon_sym_STRGREATER_EQUAL] = ACTIONS(71),
    [anon_sym_VERSION_LESS] = ACTIONS(71),
    [anon_sym_VERSION_GREATER] = ACTIONS(71),
    [anon_sym_VERSION_EQUAL] = ACTIONS(71),
    [anon_sym_VERSION_LESS_EQUAL] = ACTIONS(71),
    [anon_sym_VERSION_GREATER_EQUAL] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(73),
  },
  [11] = {
    [sym_escape_sequence] = STATE(65),
    [sym__escape_encoded] = STATE(113),
    [sym_variable_ref] = STATE(65),
    [sym_normal_var] = STATE(103),
    [sym_env_var] = STATE(103),
    [sym_cache_var] = STATE(103),
    [sym_argument] = STATE(280),
    [sym_bracket_argument] = STATE(305),
    [sym__bracket_open] = STATE(239),
    [sym_quoted_argument] = STATE(305),
    [sym_unquoted_argument] = STATE(305),
    [aux_sym_unquoted_argument_repeat1] = STATE(65),
    [aux_sym_if_command_repeat1] = STATE(8),
    [sym__escape_identity] = ACTIONS(13),
    [anon_sym_BSLASHt] = ACTIONS(13),
    [anon_sym_BSLASHr] = ACTIONS(13),
    [anon_sym_BSLASHn] = ACTIONS(13),
    [sym__escape_semicolon] = ACTIONS(13),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(15),
    [anon_sym_DOLLARENV] = ACTIONS(17),
    [anon_sym_DOLLARCACHE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [aux_sym_quoted_element_token2] = ACTIONS(75),
    [aux_sym_unquoted_argument_token1] = ACTIONS(27),
    [aux_sym_if_command_token1] = ACTIONS(75),
    [anon_sym_1] = ACTIONS(77),
    [anon_sym_ON] = ACTIONS(77),
    [anon_sym_YES] = ACTIONS(77),
    [anon_sym_TRUE] = ACTIONS(77),
    [anon_sym_Y] = ACTIONS(77),
    [anon_sym_0] = ACTIONS(77),
    [anon_sym_OFF] = ACTIONS(77),
    [anon_sym_NO] = ACTIONS(77),
    [anon_sym_FALSE] = ACTIONS(77),
    [anon_sym_N] = ACTIONS(77),
    [anon_sym_IGNORE] = ACTIONS(77),
    [anon_sym_NOTFOUND] = ACTIONS(77),
    [anon_sym_NOT] = ACTIONS(77),
    [anon_sym_AND] = ACTIONS(77),
    [anon_sym_OR] = ACTIONS(77),
    [anon_sym_COMMAND] = ACTIONS(77),
    [anon_sym_POLICY] = ACTIONS(77),
    [anon_sym_TARGET] = ACTIONS(77),
    [anon_sym_TEST] = ACTIONS(77),
    [anon_sym_DEFINED] = ACTIONS(77),
    [anon_sym_CACHE] = ACTIONS(77),
    [anon_sym_ENV] = ACTIONS(77),
    [anon_sym_IN_LIST] = ACTIONS(77),
    [anon_sym_EXISTS] = ACTIONS(77),
    [anon_sym_IS_NEWER_THAN] = ACTIONS(77),
    [anon_sym_IS_DIRECTORY] = ACTIONS(77),
    [anon_sym_IS_SYMLINK] = ACTIONS(77),
    [anon_sym_IS_ABSOLUTE] = ACTIONS(77),
    [anon_sym_MATCHES] = ACTIONS(77),
    [anon_sym_LESS] = ACTIONS(77),
    [anon_sym_GREATER] = ACTIONS(77),
    [anon_sym_EQUAL] = ACTIONS(77),
    [anon_sym_LESS_EQUAL] = ACTIONS(77),
    [anon_sym_GREATER_EQUAL] = ACTIONS(77),
    [anon_sym_STRLESS] = ACTIONS(77),
    [anon_sym_STRGREATER] = ACTIONS(77),
    [anon_sym_STREQUAL] = ACTIONS(77),
    [anon_sym_STRLESS_EQUAL] = ACTIONS(77),
    [anon_sym_STRGREATER_EQUAL] = ACTIONS(77),
    [anon_sym_VERSION_LESS] = ACTIONS(77),
    [anon_sym_VERSION_GREATER] = ACTIONS(77),
    [anon_sym_VERSION_EQUAL] = ACTIONS(77),
    [anon_sym_VERSION_LESS_EQUAL] = ACTIONS(77),
    [anon_sym_VERSION_GREATER_EQUAL] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(79),
  },
  [12] = {
    [sym_escape_sequence] = STATE(65),
    [sym__escape_encoded] = STATE(113),
    [sym_variable_ref] = STATE(65),
    [sym_normal_var] = STATE(103),
    [sym_env_var] = STATE(103),
    [sym_cache_var] = STATE(103),
    [sym_argument] = STATE(274),
    [sym_bracket_argument] = STATE(305),
    [sym__bracket_open] = STATE(239),
    [sym_quoted_argument] = STATE(305),
    [sym_unquoted_argument] = STATE(305),
    [aux_sym_unquoted_argument_repeat1] = STATE(65),
    [aux_sym_if_command_repeat1] = STATE(2),
    [sym__escape_identity] = ACTIONS(13),
    [anon_sym_BSLASHt] = ACTIONS(13),
    [anon_sym_BSLASHr] = ACTIONS(13),
    [anon_sym_BSLASHn] = ACTIONS(13),
    [sym__escape_semicolon] = ACTIONS(13),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(15),
    [anon_sym_DOLLARENV] = ACTIONS(17),
    [anon_sym_DOLLARCACHE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [aux_sym_quoted_element_token2] = ACTIONS(81),
    [aux_sym_unquoted_argument_token1] = ACTIONS(27),
    [aux_sym_if_command_token1] = ACTIONS(81),
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
    [anon_sym_RPAREN] = ACTIONS(85),
  },
  [13] = {
    [sym_escape_sequence] = STATE(65),
    [sym__escape_encoded] = STATE(113),
    [sym_variable_ref] = STATE(65),
    [sym_normal_var] = STATE(103),
    [sym_env_var] = STATE(103),
    [sym_cache_var] = STATE(103),
    [sym_argument] = STATE(290),
    [sym_bracket_argument] = STATE(305),
    [sym__bracket_open] = STATE(239),
    [sym_quoted_argument] = STATE(305),
    [sym_unquoted_argument] = STATE(305),
    [aux_sym_unquoted_argument_repeat1] = STATE(65),
    [aux_sym_if_command_repeat1] = STATE(27),
    [sym__escape_identity] = ACTIONS(13),
    [anon_sym_BSLASHt] = ACTIONS(13),
    [anon_sym_BSLASHr] = ACTIONS(13),
    [anon_sym_BSLASHn] = ACTIONS(13),
    [sym__escape_semicolon] = ACTIONS(13),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(15),
    [anon_sym_DOLLARENV] = ACTIONS(17),
    [anon_sym_DOLLARCACHE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [aux_sym_quoted_element_token2] = ACTIONS(25),
    [aux_sym_unquoted_argument_token1] = ACTIONS(27),
    [aux_sym_if_command_token1] = ACTIONS(25),
    [anon_sym_1] = ACTIONS(87),
    [anon_sym_ON] = ACTIONS(87),
    [anon_sym_YES] = ACTIONS(87),
    [anon_sym_TRUE] = ACTIONS(87),
    [anon_sym_Y] = ACTIONS(87),
    [anon_sym_0] = ACTIONS(87),
    [anon_sym_OFF] = ACTIONS(87),
    [anon_sym_NO] = ACTIONS(87),
    [anon_sym_FALSE] = ACTIONS(87),
    [anon_sym_N] = ACTIONS(87),
    [anon_sym_IGNORE] = ACTIONS(87),
    [anon_sym_NOTFOUND] = ACTIONS(87),
    [anon_sym_NOT] = ACTIONS(87),
    [anon_sym_AND] = ACTIONS(87),
    [anon_sym_OR] = ACTIONS(87),
    [anon_sym_COMMAND] = ACTIONS(87),
    [anon_sym_POLICY] = ACTIONS(87),
    [anon_sym_TARGET] = ACTIONS(87),
    [anon_sym_TEST] = ACTIONS(87),
    [anon_sym_DEFINED] = ACTIONS(87),
    [anon_sym_CACHE] = ACTIONS(87),
    [anon_sym_ENV] = ACTIONS(87),
    [anon_sym_IN_LIST] = ACTIONS(87),
    [anon_sym_EXISTS] = ACTIONS(87),
    [anon_sym_IS_NEWER_THAN] = ACTIONS(87),
    [anon_sym_IS_DIRECTORY] = ACTIONS(87),
    [anon_sym_IS_SYMLINK] = ACTIONS(87),
    [anon_sym_IS_ABSOLUTE] = ACTIONS(87),
    [anon_sym_MATCHES] = ACTIONS(87),
    [anon_sym_LESS] = ACTIONS(87),
    [anon_sym_GREATER] = ACTIONS(87),
    [anon_sym_EQUAL] = ACTIONS(87),
    [anon_sym_LESS_EQUAL] = ACTIONS(87),
    [anon_sym_GREATER_EQUAL] = ACTIONS(87),
    [anon_sym_STRLESS] = ACTIONS(87),
    [anon_sym_STRGREATER] = ACTIONS(87),
    [anon_sym_STREQUAL] = ACTIONS(87),
    [anon_sym_STRLESS_EQUAL] = ACTIONS(87),
    [anon_sym_STRGREATER_EQUAL] = ACTIONS(87),
    [anon_sym_VERSION_LESS] = ACTIONS(87),
    [anon_sym_VERSION_GREATER] = ACTIONS(87),
    [anon_sym_VERSION_EQUAL] = ACTIONS(87),
    [anon_sym_VERSION_LESS_EQUAL] = ACTIONS(87),
    [anon_sym_VERSION_GREATER_EQUAL] = ACTIONS(87),
    [anon_sym_RPAREN] = ACTIONS(89),
  },
  [14] = {
    [sym_escape_sequence] = STATE(65),
    [sym__escape_encoded] = STATE(113),
    [sym_variable_ref] = STATE(65),
    [sym_normal_var] = STATE(103),
    [sym_env_var] = STATE(103),
    [sym_cache_var] = STATE(103),
    [sym_argument] = STATE(292),
    [sym_bracket_argument] = STATE(305),
    [sym__bracket_open] = STATE(239),
    [sym_quoted_argument] = STATE(305),
    [sym_unquoted_argument] = STATE(305),
    [aux_sym_unquoted_argument_repeat1] = STATE(65),
    [aux_sym_if_command_repeat1] = STATE(27),
    [sym__escape_identity] = ACTIONS(13),
    [anon_sym_BSLASHt] = ACTIONS(13),
    [anon_sym_BSLASHr] = ACTIONS(13),
    [anon_sym_BSLASHn] = ACTIONS(13),
    [sym__escape_semicolon] = ACTIONS(13),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(15),
    [anon_sym_DOLLARENV] = ACTIONS(17),
    [anon_sym_DOLLARCACHE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [aux_sym_quoted_element_token2] = ACTIONS(25),
    [aux_sym_unquoted_argument_token1] = ACTIONS(27),
    [aux_sym_if_command_token1] = ACTIONS(25),
    [anon_sym_1] = ACTIONS(91),
    [anon_sym_ON] = ACTIONS(91),
    [anon_sym_YES] = ACTIONS(91),
    [anon_sym_TRUE] = ACTIONS(91),
    [anon_sym_Y] = ACTIONS(91),
    [anon_sym_0] = ACTIONS(91),
    [anon_sym_OFF] = ACTIONS(91),
    [anon_sym_NO] = ACTIONS(91),
    [anon_sym_FALSE] = ACTIONS(91),
    [anon_sym_N] = ACTIONS(91),
    [anon_sym_IGNORE] = ACTIONS(91),
    [anon_sym_NOTFOUND] = ACTIONS(91),
    [anon_sym_NOT] = ACTIONS(91),
    [anon_sym_AND] = ACTIONS(91),
    [anon_sym_OR] = ACTIONS(91),
    [anon_sym_COMMAND] = ACTIONS(91),
    [anon_sym_POLICY] = ACTIONS(91),
    [anon_sym_TARGET] = ACTIONS(91),
    [anon_sym_TEST] = ACTIONS(91),
    [anon_sym_DEFINED] = ACTIONS(91),
    [anon_sym_CACHE] = ACTIONS(91),
    [anon_sym_ENV] = ACTIONS(91),
    [anon_sym_IN_LIST] = ACTIONS(91),
    [anon_sym_EXISTS] = ACTIONS(91),
    [anon_sym_IS_NEWER_THAN] = ACTIONS(91),
    [anon_sym_IS_DIRECTORY] = ACTIONS(91),
    [anon_sym_IS_SYMLINK] = ACTIONS(91),
    [anon_sym_IS_ABSOLUTE] = ACTIONS(91),
    [anon_sym_MATCHES] = ACTIONS(91),
    [anon_sym_LESS] = ACTIONS(91),
    [anon_sym_GREATER] = ACTIONS(91),
    [anon_sym_EQUAL] = ACTIONS(91),
    [anon_sym_LESS_EQUAL] = ACTIONS(91),
    [anon_sym_GREATER_EQUAL] = ACTIONS(91),
    [anon_sym_STRLESS] = ACTIONS(91),
    [anon_sym_STRGREATER] = ACTIONS(91),
    [anon_sym_STREQUAL] = ACTIONS(91),
    [anon_sym_STRLESS_EQUAL] = ACTIONS(91),
    [anon_sym_STRGREATER_EQUAL] = ACTIONS(91),
    [anon_sym_VERSION_LESS] = ACTIONS(91),
    [anon_sym_VERSION_GREATER] = ACTIONS(91),
    [anon_sym_VERSION_EQUAL] = ACTIONS(91),
    [anon_sym_VERSION_LESS_EQUAL] = ACTIONS(91),
    [anon_sym_VERSION_GREATER_EQUAL] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(93),
  },
  [15] = {
    [sym_escape_sequence] = STATE(65),
    [sym__escape_encoded] = STATE(113),
    [sym_variable_ref] = STATE(65),
    [sym_normal_var] = STATE(103),
    [sym_env_var] = STATE(103),
    [sym_cache_var] = STATE(103),
    [sym_argument] = STATE(268),
    [sym_bracket_argument] = STATE(305),
    [sym__bracket_open] = STATE(239),
    [sym_quoted_argument] = STATE(305),
    [sym_unquoted_argument] = STATE(305),
    [aux_sym_unquoted_argument_repeat1] = STATE(65),
    [aux_sym_if_command_repeat1] = STATE(27),
    [sym__escape_identity] = ACTIONS(13),
    [anon_sym_BSLASHt] = ACTIONS(13),
    [anon_sym_BSLASHr] = ACTIONS(13),
    [anon_sym_BSLASHn] = ACTIONS(13),
    [sym__escape_semicolon] = ACTIONS(13),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(15),
    [anon_sym_DOLLARENV] = ACTIONS(17),
    [anon_sym_DOLLARCACHE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [aux_sym_quoted_element_token2] = ACTIONS(25),
    [aux_sym_unquoted_argument_token1] = ACTIONS(27),
    [aux_sym_if_command_token1] = ACTIONS(25),
    [anon_sym_1] = ACTIONS(95),
    [anon_sym_ON] = ACTIONS(95),
    [anon_sym_YES] = ACTIONS(95),
    [anon_sym_TRUE] = ACTIONS(95),
    [anon_sym_Y] = ACTIONS(95),
    [anon_sym_0] = ACTIONS(95),
    [anon_sym_OFF] = ACTIONS(95),
    [anon_sym_NO] = ACTIONS(95),
    [anon_sym_FALSE] = ACTIONS(95),
    [anon_sym_N] = ACTIONS(95),
    [anon_sym_IGNORE] = ACTIONS(95),
    [anon_sym_NOTFOUND] = ACTIONS(95),
    [anon_sym_NOT] = ACTIONS(95),
    [anon_sym_AND] = ACTIONS(95),
    [anon_sym_OR] = ACTIONS(95),
    [anon_sym_COMMAND] = ACTIONS(95),
    [anon_sym_POLICY] = ACTIONS(95),
    [anon_sym_TARGET] = ACTIONS(95),
    [anon_sym_TEST] = ACTIONS(95),
    [anon_sym_DEFINED] = ACTIONS(95),
    [anon_sym_CACHE] = ACTIONS(95),
    [anon_sym_ENV] = ACTIONS(95),
    [anon_sym_IN_LIST] = ACTIONS(95),
    [anon_sym_EXISTS] = ACTIONS(95),
    [anon_sym_IS_NEWER_THAN] = ACTIONS(95),
    [anon_sym_IS_DIRECTORY] = ACTIONS(95),
    [anon_sym_IS_SYMLINK] = ACTIONS(95),
    [anon_sym_IS_ABSOLUTE] = ACTIONS(95),
    [anon_sym_MATCHES] = ACTIONS(95),
    [anon_sym_LESS] = ACTIONS(95),
    [anon_sym_GREATER] = ACTIONS(95),
    [anon_sym_EQUAL] = ACTIONS(95),
    [anon_sym_LESS_EQUAL] = ACTIONS(95),
    [anon_sym_GREATER_EQUAL] = ACTIONS(95),
    [anon_sym_STRLESS] = ACTIONS(95),
    [anon_sym_STRGREATER] = ACTIONS(95),
    [anon_sym_STREQUAL] = ACTIONS(95),
    [anon_sym_STRLESS_EQUAL] = ACTIONS(95),
    [anon_sym_STRGREATER_EQUAL] = ACTIONS(95),
    [anon_sym_VERSION_LESS] = ACTIONS(95),
    [anon_sym_VERSION_GREATER] = ACTIONS(95),
    [anon_sym_VERSION_EQUAL] = ACTIONS(95),
    [anon_sym_VERSION_LESS_EQUAL] = ACTIONS(95),
    [anon_sym_VERSION_GREATER_EQUAL] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(97),
  },
  [16] = {
    [sym_escape_sequence] = STATE(65),
    [sym__escape_encoded] = STATE(113),
    [sym_variable_ref] = STATE(65),
    [sym_normal_var] = STATE(103),
    [sym_env_var] = STATE(103),
    [sym_cache_var] = STATE(103),
    [sym_argument] = STATE(316),
    [sym_bracket_argument] = STATE(305),
    [sym__bracket_open] = STATE(239),
    [sym_quoted_argument] = STATE(305),
    [sym_unquoted_argument] = STATE(305),
    [aux_sym_unquoted_argument_repeat1] = STATE(65),
    [aux_sym_if_command_repeat1] = STATE(27),
    [sym__escape_identity] = ACTIONS(13),
    [anon_sym_BSLASHt] = ACTIONS(13),
    [anon_sym_BSLASHr] = ACTIONS(13),
    [anon_sym_BSLASHn] = ACTIONS(13),
    [sym__escape_semicolon] = ACTIONS(13),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(15),
    [anon_sym_DOLLARENV] = ACTIONS(17),
    [anon_sym_DOLLARCACHE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [aux_sym_quoted_element_token2] = ACTIONS(25),
    [aux_sym_unquoted_argument_token1] = ACTIONS(27),
    [aux_sym_if_command_token1] = ACTIONS(25),
    [anon_sym_1] = ACTIONS(99),
    [anon_sym_ON] = ACTIONS(99),
    [anon_sym_YES] = ACTIONS(99),
    [anon_sym_TRUE] = ACTIONS(99),
    [anon_sym_Y] = ACTIONS(99),
    [anon_sym_0] = ACTIONS(99),
    [anon_sym_OFF] = ACTIONS(99),
    [anon_sym_NO] = ACTIONS(99),
    [anon_sym_FALSE] = ACTIONS(99),
    [anon_sym_N] = ACTIONS(99),
    [anon_sym_IGNORE] = ACTIONS(99),
    [anon_sym_NOTFOUND] = ACTIONS(99),
    [anon_sym_NOT] = ACTIONS(99),
    [anon_sym_AND] = ACTIONS(99),
    [anon_sym_OR] = ACTIONS(99),
    [anon_sym_COMMAND] = ACTIONS(99),
    [anon_sym_POLICY] = ACTIONS(99),
    [anon_sym_TARGET] = ACTIONS(99),
    [anon_sym_TEST] = ACTIONS(99),
    [anon_sym_DEFINED] = ACTIONS(99),
    [anon_sym_CACHE] = ACTIONS(99),
    [anon_sym_ENV] = ACTIONS(99),
    [anon_sym_IN_LIST] = ACTIONS(99),
    [anon_sym_EXISTS] = ACTIONS(99),
    [anon_sym_IS_NEWER_THAN] = ACTIONS(99),
    [anon_sym_IS_DIRECTORY] = ACTIONS(99),
    [anon_sym_IS_SYMLINK] = ACTIONS(99),
    [anon_sym_IS_ABSOLUTE] = ACTIONS(99),
    [anon_sym_MATCHES] = ACTIONS(99),
    [anon_sym_LESS] = ACTIONS(99),
    [anon_sym_GREATER] = ACTIONS(99),
    [anon_sym_EQUAL] = ACTIONS(99),
    [anon_sym_LESS_EQUAL] = ACTIONS(99),
    [anon_sym_GREATER_EQUAL] = ACTIONS(99),
    [anon_sym_STRLESS] = ACTIONS(99),
    [anon_sym_STRGREATER] = ACTIONS(99),
    [anon_sym_STREQUAL] = ACTIONS(99),
    [anon_sym_STRLESS_EQUAL] = ACTIONS(99),
    [anon_sym_STRGREATER_EQUAL] = ACTIONS(99),
    [anon_sym_VERSION_LESS] = ACTIONS(99),
    [anon_sym_VERSION_GREATER] = ACTIONS(99),
    [anon_sym_VERSION_EQUAL] = ACTIONS(99),
    [anon_sym_VERSION_LESS_EQUAL] = ACTIONS(99),
    [anon_sym_VERSION_GREATER_EQUAL] = ACTIONS(99),
    [anon_sym_RPAREN] = ACTIONS(101),
  },
  [17] = {
    [sym_escape_sequence] = STATE(55),
    [sym__escape_encoded] = STATE(87),
    [sym_variable_ref] = STATE(55),
    [sym_normal_var] = STATE(88),
    [sym_env_var] = STATE(88),
    [sym_cache_var] = STATE(88),
    [sym_argument] = STATE(246),
    [sym_bracket_argument] = STATE(258),
    [sym__bracket_open] = STATE(175),
    [sym_quoted_argument] = STATE(258),
    [sym_unquoted_argument] = STATE(258),
    [aux_sym_unquoted_argument_repeat1] = STATE(55),
    [aux_sym_if_command_repeat1] = STATE(27),
    [sym__escape_identity] = ACTIONS(103),
    [anon_sym_BSLASHt] = ACTIONS(103),
    [anon_sym_BSLASHr] = ACTIONS(103),
    [anon_sym_BSLASHn] = ACTIONS(103),
    [sym__escape_semicolon] = ACTIONS(103),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(105),
    [anon_sym_DOLLARENV] = ACTIONS(107),
    [anon_sym_DOLLARCACHE] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [aux_sym_quoted_element_token2] = ACTIONS(113),
    [aux_sym_unquoted_argument_token1] = ACTIONS(115),
    [aux_sym_if_command_token1] = ACTIONS(113),
    [anon_sym_1] = ACTIONS(117),
    [anon_sym_ON] = ACTIONS(117),
    [anon_sym_YES] = ACTIONS(117),
    [anon_sym_TRUE] = ACTIONS(117),
    [anon_sym_Y] = ACTIONS(117),
    [anon_sym_0] = ACTIONS(117),
    [anon_sym_OFF] = ACTIONS(117),
    [anon_sym_NO] = ACTIONS(117),
    [anon_sym_FALSE] = ACTIONS(117),
    [anon_sym_N] = ACTIONS(117),
    [anon_sym_IGNORE] = ACTIONS(117),
    [anon_sym_NOTFOUND] = ACTIONS(117),
    [anon_sym_NOT] = ACTIONS(117),
    [anon_sym_AND] = ACTIONS(117),
    [anon_sym_OR] = ACTIONS(117),
    [anon_sym_COMMAND] = ACTIONS(117),
    [anon_sym_POLICY] = ACTIONS(117),
    [anon_sym_TARGET] = ACTIONS(117),
    [anon_sym_TEST] = ACTIONS(117),
    [anon_sym_DEFINED] = ACTIONS(117),
    [anon_sym_CACHE] = ACTIONS(117),
    [anon_sym_ENV] = ACTIONS(117),
    [anon_sym_IN_LIST] = ACTIONS(117),
    [anon_sym_EXISTS] = ACTIONS(117),
    [anon_sym_IS_NEWER_THAN] = ACTIONS(117),
    [anon_sym_IS_DIRECTORY] = ACTIONS(117),
    [anon_sym_IS_SYMLINK] = ACTIONS(117),
    [anon_sym_IS_ABSOLUTE] = ACTIONS(117),
    [anon_sym_MATCHES] = ACTIONS(117),
    [anon_sym_LESS] = ACTIONS(117),
    [anon_sym_GREATER] = ACTIONS(117),
    [anon_sym_EQUAL] = ACTIONS(117),
    [anon_sym_LESS_EQUAL] = ACTIONS(117),
    [anon_sym_GREATER_EQUAL] = ACTIONS(117),
    [anon_sym_STRLESS] = ACTIONS(117),
    [anon_sym_STRGREATER] = ACTIONS(117),
    [anon_sym_STREQUAL] = ACTIONS(117),
    [anon_sym_STRLESS_EQUAL] = ACTIONS(117),
    [anon_sym_STRGREATER_EQUAL] = ACTIONS(117),
    [anon_sym_VERSION_LESS] = ACTIONS(117),
    [anon_sym_VERSION_GREATER] = ACTIONS(117),
    [anon_sym_VERSION_EQUAL] = ACTIONS(117),
    [anon_sym_VERSION_LESS_EQUAL] = ACTIONS(117),
    [anon_sym_VERSION_GREATER_EQUAL] = ACTIONS(117),
    [anon_sym_RPAREN] = ACTIONS(113),
  },
  [18] = {
    [sym_escape_sequence] = STATE(65),
    [sym__escape_encoded] = STATE(113),
    [sym_variable_ref] = STATE(65),
    [sym_normal_var] = STATE(103),
    [sym_env_var] = STATE(103),
    [sym_cache_var] = STATE(103),
    [sym_argument] = STATE(314),
    [sym_bracket_argument] = STATE(305),
    [sym__bracket_open] = STATE(239),
    [sym_quoted_argument] = STATE(305),
    [sym_unquoted_argument] = STATE(305),
    [aux_sym_unquoted_argument_repeat1] = STATE(65),
    [aux_sym_if_command_repeat1] = STATE(27),
    [sym__escape_identity] = ACTIONS(13),
    [anon_sym_BSLASHt] = ACTIONS(13),
    [anon_sym_BSLASHr] = ACTIONS(13),
    [anon_sym_BSLASHn] = ACTIONS(13),
    [sym__escape_semicolon] = ACTIONS(13),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(15),
    [anon_sym_DOLLARENV] = ACTIONS(17),
    [anon_sym_DOLLARCACHE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [aux_sym_quoted_element_token2] = ACTIONS(25),
    [aux_sym_unquoted_argument_token1] = ACTIONS(27),
    [aux_sym_if_command_token1] = ACTIONS(25),
    [anon_sym_1] = ACTIONS(119),
    [anon_sym_ON] = ACTIONS(119),
    [anon_sym_YES] = ACTIONS(119),
    [anon_sym_TRUE] = ACTIONS(119),
    [anon_sym_Y] = ACTIONS(119),
    [anon_sym_0] = ACTIONS(119),
    [anon_sym_OFF] = ACTIONS(119),
    [anon_sym_NO] = ACTIONS(119),
    [anon_sym_FALSE] = ACTIONS(119),
    [anon_sym_N] = ACTIONS(119),
    [anon_sym_IGNORE] = ACTIONS(119),
    [anon_sym_NOTFOUND] = ACTIONS(119),
    [anon_sym_NOT] = ACTIONS(119),
    [anon_sym_AND] = ACTIONS(119),
    [anon_sym_OR] = ACTIONS(119),
    [anon_sym_COMMAND] = ACTIONS(119),
    [anon_sym_POLICY] = ACTIONS(119),
    [anon_sym_TARGET] = ACTIONS(119),
    [anon_sym_TEST] = ACTIONS(119),
    [anon_sym_DEFINED] = ACTIONS(119),
    [anon_sym_CACHE] = ACTIONS(119),
    [anon_sym_ENV] = ACTIONS(119),
    [anon_sym_IN_LIST] = ACTIONS(119),
    [anon_sym_EXISTS] = ACTIONS(119),
    [anon_sym_IS_NEWER_THAN] = ACTIONS(119),
    [anon_sym_IS_DIRECTORY] = ACTIONS(119),
    [anon_sym_IS_SYMLINK] = ACTIONS(119),
    [anon_sym_IS_ABSOLUTE] = ACTIONS(119),
    [anon_sym_MATCHES] = ACTIONS(119),
    [anon_sym_LESS] = ACTIONS(119),
    [anon_sym_GREATER] = ACTIONS(119),
    [anon_sym_EQUAL] = ACTIONS(119),
    [anon_sym_LESS_EQUAL] = ACTIONS(119),
    [anon_sym_GREATER_EQUAL] = ACTIONS(119),
    [anon_sym_STRLESS] = ACTIONS(119),
    [anon_sym_STRGREATER] = ACTIONS(119),
    [anon_sym_STREQUAL] = ACTIONS(119),
    [anon_sym_STRLESS_EQUAL] = ACTIONS(119),
    [anon_sym_STRGREATER_EQUAL] = ACTIONS(119),
    [anon_sym_VERSION_LESS] = ACTIONS(119),
    [anon_sym_VERSION_GREATER] = ACTIONS(119),
    [anon_sym_VERSION_EQUAL] = ACTIONS(119),
    [anon_sym_VERSION_LESS_EQUAL] = ACTIONS(119),
    [anon_sym_VERSION_GREATER_EQUAL] = ACTIONS(119),
    [anon_sym_RPAREN] = ACTIONS(121),
  },
  [19] = {
    [sym_escape_sequence] = STATE(65),
    [sym__escape_encoded] = STATE(113),
    [sym_variable_ref] = STATE(65),
    [sym_normal_var] = STATE(103),
    [sym_env_var] = STATE(103),
    [sym_cache_var] = STATE(103),
    [sym_argument] = STATE(307),
    [sym_bracket_argument] = STATE(305),
    [sym__bracket_open] = STATE(239),
    [sym_quoted_argument] = STATE(305),
    [sym_unquoted_argument] = STATE(305),
    [aux_sym_unquoted_argument_repeat1] = STATE(65),
    [aux_sym_if_command_repeat1] = STATE(18),
    [sym__escape_identity] = ACTIONS(13),
    [anon_sym_BSLASHt] = ACTIONS(13),
    [anon_sym_BSLASHr] = ACTIONS(13),
    [anon_sym_BSLASHn] = ACTIONS(13),
    [sym__escape_semicolon] = ACTIONS(13),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(15),
    [anon_sym_DOLLARENV] = ACTIONS(17),
    [anon_sym_DOLLARCACHE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [aux_sym_quoted_element_token2] = ACTIONS(123),
    [aux_sym_unquoted_argument_token1] = ACTIONS(27),
    [aux_sym_if_command_token1] = ACTIONS(123),
    [anon_sym_1] = ACTIONS(125),
    [anon_sym_ON] = ACTIONS(125),
    [anon_sym_YES] = ACTIONS(125),
    [anon_sym_TRUE] = ACTIONS(125),
    [anon_sym_Y] = ACTIONS(125),
    [anon_sym_0] = ACTIONS(125),
    [anon_sym_OFF] = ACTIONS(125),
    [anon_sym_NO] = ACTIONS(125),
    [anon_sym_FALSE] = ACTIONS(125),
    [anon_sym_N] = ACTIONS(125),
    [anon_sym_IGNORE] = ACTIONS(125),
    [anon_sym_NOTFOUND] = ACTIONS(125),
    [anon_sym_NOT] = ACTIONS(125),
    [anon_sym_AND] = ACTIONS(125),
    [anon_sym_OR] = ACTIONS(125),
    [anon_sym_COMMAND] = ACTIONS(125),
    [anon_sym_POLICY] = ACTIONS(125),
    [anon_sym_TARGET] = ACTIONS(125),
    [anon_sym_TEST] = ACTIONS(125),
    [anon_sym_DEFINED] = ACTIONS(125),
    [anon_sym_CACHE] = ACTIONS(125),
    [anon_sym_ENV] = ACTIONS(125),
    [anon_sym_IN_LIST] = ACTIONS(125),
    [anon_sym_EXISTS] = ACTIONS(125),
    [anon_sym_IS_NEWER_THAN] = ACTIONS(125),
    [anon_sym_IS_DIRECTORY] = ACTIONS(125),
    [anon_sym_IS_SYMLINK] = ACTIONS(125),
    [anon_sym_IS_ABSOLUTE] = ACTIONS(125),
    [anon_sym_MATCHES] = ACTIONS(125),
    [anon_sym_LESS] = ACTIONS(125),
    [anon_sym_GREATER] = ACTIONS(125),
    [anon_sym_EQUAL] = ACTIONS(125),
    [anon_sym_LESS_EQUAL] = ACTIONS(125),
    [anon_sym_GREATER_EQUAL] = ACTIONS(125),
    [anon_sym_STRLESS] = ACTIONS(125),
    [anon_sym_STRGREATER] = ACTIONS(125),
    [anon_sym_STREQUAL] = ACTIONS(125),
    [anon_sym_STRLESS_EQUAL] = ACTIONS(125),
    [anon_sym_STRGREATER_EQUAL] = ACTIONS(125),
    [anon_sym_VERSION_LESS] = ACTIONS(125),
    [anon_sym_VERSION_GREATER] = ACTIONS(125),
    [anon_sym_VERSION_EQUAL] = ACTIONS(125),
    [anon_sym_VERSION_LESS_EQUAL] = ACTIONS(125),
    [anon_sym_VERSION_GREATER_EQUAL] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(127),
  },
  [20] = {
    [sym_escape_sequence] = STATE(65),
    [sym__escape_encoded] = STATE(113),
    [sym_variable_ref] = STATE(65),
    [sym_normal_var] = STATE(103),
    [sym_env_var] = STATE(103),
    [sym_cache_var] = STATE(103),
    [sym_argument] = STATE(311),
    [sym_bracket_argument] = STATE(305),
    [sym__bracket_open] = STATE(239),
    [sym_quoted_argument] = STATE(305),
    [sym_unquoted_argument] = STATE(305),
    [aux_sym_unquoted_argument_repeat1] = STATE(65),
    [aux_sym_if_command_repeat1] = STATE(16),
    [sym__escape_identity] = ACTIONS(13),
    [anon_sym_BSLASHt] = ACTIONS(13),
    [anon_sym_BSLASHr] = ACTIONS(13),
    [anon_sym_BSLASHn] = ACTIONS(13),
    [sym__escape_semicolon] = ACTIONS(13),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(15),
    [anon_sym_DOLLARENV] = ACTIONS(17),
    [anon_sym_DOLLARCACHE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [aux_sym_quoted_element_token2] = ACTIONS(129),
    [aux_sym_unquoted_argument_token1] = ACTIONS(27),
    [aux_sym_if_command_token1] = ACTIONS(129),
    [anon_sym_1] = ACTIONS(131),
    [anon_sym_ON] = ACTIONS(131),
    [anon_sym_YES] = ACTIONS(131),
    [anon_sym_TRUE] = ACTIONS(131),
    [anon_sym_Y] = ACTIONS(131),
    [anon_sym_0] = ACTIONS(131),
    [anon_sym_OFF] = ACTIONS(131),
    [anon_sym_NO] = ACTIONS(131),
    [anon_sym_FALSE] = ACTIONS(131),
    [anon_sym_N] = ACTIONS(131),
    [anon_sym_IGNORE] = ACTIONS(131),
    [anon_sym_NOTFOUND] = ACTIONS(131),
    [anon_sym_NOT] = ACTIONS(131),
    [anon_sym_AND] = ACTIONS(131),
    [anon_sym_OR] = ACTIONS(131),
    [anon_sym_COMMAND] = ACTIONS(131),
    [anon_sym_POLICY] = ACTIONS(131),
    [anon_sym_TARGET] = ACTIONS(131),
    [anon_sym_TEST] = ACTIONS(131),
    [anon_sym_DEFINED] = ACTIONS(131),
    [anon_sym_CACHE] = ACTIONS(131),
    [anon_sym_ENV] = ACTIONS(131),
    [anon_sym_IN_LIST] = ACTIONS(131),
    [anon_sym_EXISTS] = ACTIONS(131),
    [anon_sym_IS_NEWER_THAN] = ACTIONS(131),
    [anon_sym_IS_DIRECTORY] = ACTIONS(131),
    [anon_sym_IS_SYMLINK] = ACTIONS(131),
    [anon_sym_IS_ABSOLUTE] = ACTIONS(131),
    [anon_sym_MATCHES] = ACTIONS(131),
    [anon_sym_LESS] = ACTIONS(131),
    [anon_sym_GREATER] = ACTIONS(131),
    [anon_sym_EQUAL] = ACTIONS(131),
    [anon_sym_LESS_EQUAL] = ACTIONS(131),
    [anon_sym_GREATER_EQUAL] = ACTIONS(131),
    [anon_sym_STRLESS] = ACTIONS(131),
    [anon_sym_STRGREATER] = ACTIONS(131),
    [anon_sym_STREQUAL] = ACTIONS(131),
    [anon_sym_STRLESS_EQUAL] = ACTIONS(131),
    [anon_sym_STRGREATER_EQUAL] = ACTIONS(131),
    [anon_sym_VERSION_LESS] = ACTIONS(131),
    [anon_sym_VERSION_GREATER] = ACTIONS(131),
    [anon_sym_VERSION_EQUAL] = ACTIONS(131),
    [anon_sym_VERSION_LESS_EQUAL] = ACTIONS(131),
    [anon_sym_VERSION_GREATER_EQUAL] = ACTIONS(131),
    [anon_sym_RPAREN] = ACTIONS(133),
  },
  [21] = {
    [sym_escape_sequence] = STATE(55),
    [sym__escape_encoded] = STATE(87),
    [sym_variable_ref] = STATE(55),
    [sym_normal_var] = STATE(88),
    [sym_env_var] = STATE(88),
    [sym_cache_var] = STATE(88),
    [sym_argument] = STATE(161),
    [sym_bracket_argument] = STATE(258),
    [sym__bracket_open] = STATE(175),
    [sym_quoted_argument] = STATE(258),
    [sym_unquoted_argument] = STATE(258),
    [aux_sym_unquoted_argument_repeat1] = STATE(55),
    [aux_sym_if_command_repeat1] = STATE(27),
    [sym__escape_identity] = ACTIONS(103),
    [anon_sym_BSLASHt] = ACTIONS(103),
    [anon_sym_BSLASHr] = ACTIONS(103),
    [anon_sym_BSLASHn] = ACTIONS(103),
    [sym__escape_semicolon] = ACTIONS(103),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(105),
    [anon_sym_DOLLARENV] = ACTIONS(107),
    [anon_sym_DOLLARCACHE] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [aux_sym_quoted_element_token2] = ACTIONS(25),
    [aux_sym_unquoted_argument_token1] = ACTIONS(115),
    [aux_sym_if_command_token1] = ACTIONS(25),
    [anon_sym_1] = ACTIONS(135),
    [anon_sym_ON] = ACTIONS(135),
    [anon_sym_YES] = ACTIONS(135),
    [anon_sym_TRUE] = ACTIONS(135),
    [anon_sym_Y] = ACTIONS(135),
    [anon_sym_0] = ACTIONS(135),
    [anon_sym_OFF] = ACTIONS(135),
    [anon_sym_NO] = ACTIONS(135),
    [anon_sym_FALSE] = ACTIONS(135),
    [anon_sym_N] = ACTIONS(135),
    [anon_sym_IGNORE] = ACTIONS(135),
    [anon_sym_NOTFOUND] = ACTIONS(135),
    [anon_sym_NOT] = ACTIONS(135),
    [anon_sym_AND] = ACTIONS(135),
    [anon_sym_OR] = ACTIONS(135),
    [anon_sym_COMMAND] = ACTIONS(135),
    [anon_sym_POLICY] = ACTIONS(135),
    [anon_sym_TARGET] = ACTIONS(135),
    [anon_sym_TEST] = ACTIONS(135),
    [anon_sym_DEFINED] = ACTIONS(135),
    [anon_sym_CACHE] = ACTIONS(135),
    [anon_sym_ENV] = ACTIONS(135),
    [anon_sym_IN_LIST] = ACTIONS(135),
    [anon_sym_EXISTS] = ACTIONS(135),
    [anon_sym_IS_NEWER_THAN] = ACTIONS(135),
    [anon_sym_IS_DIRECTORY] = ACTIONS(135),
    [anon_sym_IS_SYMLINK] = ACTIONS(135),
    [anon_sym_IS_ABSOLUTE] = ACTIONS(135),
    [anon_sym_MATCHES] = ACTIONS(135),
    [anon_sym_LESS] = ACTIONS(135),
    [anon_sym_GREATER] = ACTIONS(135),
    [anon_sym_EQUAL] = ACTIONS(135),
    [anon_sym_LESS_EQUAL] = ACTIONS(135),
    [anon_sym_GREATER_EQUAL] = ACTIONS(135),
    [anon_sym_STRLESS] = ACTIONS(135),
    [anon_sym_STRGREATER] = ACTIONS(135),
    [anon_sym_STREQUAL] = ACTIONS(135),
    [anon_sym_STRLESS_EQUAL] = ACTIONS(135),
    [anon_sym_STRGREATER_EQUAL] = ACTIONS(135),
    [anon_sym_VERSION_LESS] = ACTIONS(135),
    [anon_sym_VERSION_GREATER] = ACTIONS(135),
    [anon_sym_VERSION_EQUAL] = ACTIONS(135),
    [anon_sym_VERSION_LESS_EQUAL] = ACTIONS(135),
    [anon_sym_VERSION_GREATER_EQUAL] = ACTIONS(135),
  },
  [22] = {
    [sym_escape_sequence] = STATE(55),
    [sym__escape_encoded] = STATE(87),
    [sym_variable_ref] = STATE(55),
    [sym_normal_var] = STATE(88),
    [sym_env_var] = STATE(88),
    [sym_cache_var] = STATE(88),
    [sym_argument] = STATE(181),
    [sym_bracket_argument] = STATE(258),
    [sym__bracket_open] = STATE(175),
    [sym_quoted_argument] = STATE(258),
    [sym_unquoted_argument] = STATE(258),
    [aux_sym_unquoted_argument_repeat1] = STATE(55),
    [aux_sym_if_command_repeat1] = STATE(27),
    [sym__escape_identity] = ACTIONS(103),
    [anon_sym_BSLASHt] = ACTIONS(103),
    [anon_sym_BSLASHr] = ACTIONS(103),
    [anon_sym_BSLASHn] = ACTIONS(103),
    [sym__escape_semicolon] = ACTIONS(103),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(105),
    [anon_sym_DOLLARENV] = ACTIONS(107),
    [anon_sym_DOLLARCACHE] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [aux_sym_quoted_element_token2] = ACTIONS(25),
    [aux_sym_unquoted_argument_token1] = ACTIONS(115),
    [aux_sym_if_command_token1] = ACTIONS(25),
    [anon_sym_1] = ACTIONS(137),
    [anon_sym_ON] = ACTIONS(137),
    [anon_sym_YES] = ACTIONS(137),
    [anon_sym_TRUE] = ACTIONS(137),
    [anon_sym_Y] = ACTIONS(137),
    [anon_sym_0] = ACTIONS(137),
    [anon_sym_OFF] = ACTIONS(137),
    [anon_sym_NO] = ACTIONS(137),
    [anon_sym_FALSE] = ACTIONS(137),
    [anon_sym_N] = ACTIONS(137),
    [anon_sym_IGNORE] = ACTIONS(137),
    [anon_sym_NOTFOUND] = ACTIONS(137),
    [anon_sym_NOT] = ACTIONS(137),
    [anon_sym_AND] = ACTIONS(137),
    [anon_sym_OR] = ACTIONS(137),
    [anon_sym_COMMAND] = ACTIONS(137),
    [anon_sym_POLICY] = ACTIONS(137),
    [anon_sym_TARGET] = ACTIONS(137),
    [anon_sym_TEST] = ACTIONS(137),
    [anon_sym_DEFINED] = ACTIONS(137),
    [anon_sym_CACHE] = ACTIONS(137),
    [anon_sym_ENV] = ACTIONS(137),
    [anon_sym_IN_LIST] = ACTIONS(137),
    [anon_sym_EXISTS] = ACTIONS(137),
    [anon_sym_IS_NEWER_THAN] = ACTIONS(137),
    [anon_sym_IS_DIRECTORY] = ACTIONS(137),
    [anon_sym_IS_SYMLINK] = ACTIONS(137),
    [anon_sym_IS_ABSOLUTE] = ACTIONS(137),
    [anon_sym_MATCHES] = ACTIONS(137),
    [anon_sym_LESS] = ACTIONS(137),
    [anon_sym_GREATER] = ACTIONS(137),
    [anon_sym_EQUAL] = ACTIONS(137),
    [anon_sym_LESS_EQUAL] = ACTIONS(137),
    [anon_sym_GREATER_EQUAL] = ACTIONS(137),
    [anon_sym_STRLESS] = ACTIONS(137),
    [anon_sym_STRGREATER] = ACTIONS(137),
    [anon_sym_STREQUAL] = ACTIONS(137),
    [anon_sym_STRLESS_EQUAL] = ACTIONS(137),
    [anon_sym_STRGREATER_EQUAL] = ACTIONS(137),
    [anon_sym_VERSION_LESS] = ACTIONS(137),
    [anon_sym_VERSION_GREATER] = ACTIONS(137),
    [anon_sym_VERSION_EQUAL] = ACTIONS(137),
    [anon_sym_VERSION_LESS_EQUAL] = ACTIONS(137),
    [anon_sym_VERSION_GREATER_EQUAL] = ACTIONS(137),
  },
  [23] = {
    [sym_escape_sequence] = STATE(55),
    [sym__escape_encoded] = STATE(87),
    [sym_variable_ref] = STATE(55),
    [sym_normal_var] = STATE(88),
    [sym_env_var] = STATE(88),
    [sym_cache_var] = STATE(88),
    [sym_argument] = STATE(173),
    [sym_bracket_argument] = STATE(258),
    [sym__bracket_open] = STATE(175),
    [sym_quoted_argument] = STATE(258),
    [sym_unquoted_argument] = STATE(258),
    [aux_sym_unquoted_argument_repeat1] = STATE(55),
    [aux_sym_if_command_repeat1] = STATE(22),
    [sym__escape_identity] = ACTIONS(103),
    [anon_sym_BSLASHt] = ACTIONS(103),
    [anon_sym_BSLASHr] = ACTIONS(103),
    [anon_sym_BSLASHn] = ACTIONS(103),
    [sym__escape_semicolon] = ACTIONS(103),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(105),
    [anon_sym_DOLLARENV] = ACTIONS(107),
    [anon_sym_DOLLARCACHE] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [aux_sym_quoted_element_token2] = ACTIONS(139),
    [aux_sym_unquoted_argument_token1] = ACTIONS(115),
    [aux_sym_if_command_token1] = ACTIONS(139),
    [anon_sym_1] = ACTIONS(141),
    [anon_sym_ON] = ACTIONS(141),
    [anon_sym_YES] = ACTIONS(141),
    [anon_sym_TRUE] = ACTIONS(141),
    [anon_sym_Y] = ACTIONS(141),
    [anon_sym_0] = ACTIONS(141),
    [anon_sym_OFF] = ACTIONS(141),
    [anon_sym_NO] = ACTIONS(141),
    [anon_sym_FALSE] = ACTIONS(141),
    [anon_sym_N] = ACTIONS(141),
    [anon_sym_IGNORE] = ACTIONS(141),
    [anon_sym_NOTFOUND] = ACTIONS(141),
    [anon_sym_NOT] = ACTIONS(141),
    [anon_sym_AND] = ACTIONS(141),
    [anon_sym_OR] = ACTIONS(141),
    [anon_sym_COMMAND] = ACTIONS(141),
    [anon_sym_POLICY] = ACTIONS(141),
    [anon_sym_TARGET] = ACTIONS(141),
    [anon_sym_TEST] = ACTIONS(141),
    [anon_sym_DEFINED] = ACTIONS(141),
    [anon_sym_CACHE] = ACTIONS(141),
    [anon_sym_ENV] = ACTIONS(141),
    [anon_sym_IN_LIST] = ACTIONS(141),
    [anon_sym_EXISTS] = ACTIONS(141),
    [anon_sym_IS_NEWER_THAN] = ACTIONS(141),
    [anon_sym_IS_DIRECTORY] = ACTIONS(141),
    [anon_sym_IS_SYMLINK] = ACTIONS(141),
    [anon_sym_IS_ABSOLUTE] = ACTIONS(141),
    [anon_sym_MATCHES] = ACTIONS(141),
    [anon_sym_LESS] = ACTIONS(141),
    [anon_sym_GREATER] = ACTIONS(141),
    [anon_sym_EQUAL] = ACTIONS(141),
    [anon_sym_LESS_EQUAL] = ACTIONS(141),
    [anon_sym_GREATER_EQUAL] = ACTIONS(141),
    [anon_sym_STRLESS] = ACTIONS(141),
    [anon_sym_STRGREATER] = ACTIONS(141),
    [anon_sym_STREQUAL] = ACTIONS(141),
    [anon_sym_STRLESS_EQUAL] = ACTIONS(141),
    [anon_sym_STRGREATER_EQUAL] = ACTIONS(141),
    [anon_sym_VERSION_LESS] = ACTIONS(141),
    [anon_sym_VERSION_GREATER] = ACTIONS(141),
    [anon_sym_VERSION_EQUAL] = ACTIONS(141),
    [anon_sym_VERSION_LESS_EQUAL] = ACTIONS(141),
    [anon_sym_VERSION_GREATER_EQUAL] = ACTIONS(141),
  },
  [24] = {
    [sym_escape_sequence] = STATE(55),
    [sym__escape_encoded] = STATE(87),
    [sym_variable_ref] = STATE(55),
    [sym_normal_var] = STATE(88),
    [sym_env_var] = STATE(88),
    [sym_cache_var] = STATE(88),
    [sym_argument] = STATE(192),
    [sym_bracket_argument] = STATE(258),
    [sym__bracket_open] = STATE(175),
    [sym_quoted_argument] = STATE(258),
    [sym_unquoted_argument] = STATE(258),
    [aux_sym_unquoted_argument_repeat1] = STATE(55),
    [aux_sym_if_command_repeat1] = STATE(26),
    [sym__escape_identity] = ACTIONS(103),
    [anon_sym_BSLASHt] = ACTIONS(103),
    [anon_sym_BSLASHr] = ACTIONS(103),
    [anon_sym_BSLASHn] = ACTIONS(103),
    [sym__escape_semicolon] = ACTIONS(103),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(105),
    [anon_sym_DOLLARENV] = ACTIONS(107),
    [anon_sym_DOLLARCACHE] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [aux_sym_quoted_element_token2] = ACTIONS(143),
    [aux_sym_unquoted_argument_token1] = ACTIONS(115),
    [aux_sym_if_command_token1] = ACTIONS(143),
    [anon_sym_1] = ACTIONS(145),
    [anon_sym_ON] = ACTIONS(145),
    [anon_sym_YES] = ACTIONS(145),
    [anon_sym_TRUE] = ACTIONS(145),
    [anon_sym_Y] = ACTIONS(145),
    [anon_sym_0] = ACTIONS(145),
    [anon_sym_OFF] = ACTIONS(145),
    [anon_sym_NO] = ACTIONS(145),
    [anon_sym_FALSE] = ACTIONS(145),
    [anon_sym_N] = ACTIONS(145),
    [anon_sym_IGNORE] = ACTIONS(145),
    [anon_sym_NOTFOUND] = ACTIONS(145),
    [anon_sym_NOT] = ACTIONS(145),
    [anon_sym_AND] = ACTIONS(145),
    [anon_sym_OR] = ACTIONS(145),
    [anon_sym_COMMAND] = ACTIONS(145),
    [anon_sym_POLICY] = ACTIONS(145),
    [anon_sym_TARGET] = ACTIONS(145),
    [anon_sym_TEST] = ACTIONS(145),
    [anon_sym_DEFINED] = ACTIONS(145),
    [anon_sym_CACHE] = ACTIONS(145),
    [anon_sym_ENV] = ACTIONS(145),
    [anon_sym_IN_LIST] = ACTIONS(145),
    [anon_sym_EXISTS] = ACTIONS(145),
    [anon_sym_IS_NEWER_THAN] = ACTIONS(145),
    [anon_sym_IS_DIRECTORY] = ACTIONS(145),
    [anon_sym_IS_SYMLINK] = ACTIONS(145),
    [anon_sym_IS_ABSOLUTE] = ACTIONS(145),
    [anon_sym_MATCHES] = ACTIONS(145),
    [anon_sym_LESS] = ACTIONS(145),
    [anon_sym_GREATER] = ACTIONS(145),
    [anon_sym_EQUAL] = ACTIONS(145),
    [anon_sym_LESS_EQUAL] = ACTIONS(145),
    [anon_sym_GREATER_EQUAL] = ACTIONS(145),
    [anon_sym_STRLESS] = ACTIONS(145),
    [anon_sym_STRGREATER] = ACTIONS(145),
    [anon_sym_STREQUAL] = ACTIONS(145),
    [anon_sym_STRLESS_EQUAL] = ACTIONS(145),
    [anon_sym_STRGREATER_EQUAL] = ACTIONS(145),
    [anon_sym_VERSION_LESS] = ACTIONS(145),
    [anon_sym_VERSION_GREATER] = ACTIONS(145),
    [anon_sym_VERSION_EQUAL] = ACTIONS(145),
    [anon_sym_VERSION_LESS_EQUAL] = ACTIONS(145),
    [anon_sym_VERSION_GREATER_EQUAL] = ACTIONS(145),
  },
  [25] = {
    [sym_escape_sequence] = STATE(55),
    [sym__escape_encoded] = STATE(87),
    [sym_variable_ref] = STATE(55),
    [sym_normal_var] = STATE(88),
    [sym_env_var] = STATE(88),
    [sym_cache_var] = STATE(88),
    [sym_argument] = STATE(234),
    [sym_bracket_argument] = STATE(258),
    [sym__bracket_open] = STATE(175),
    [sym_quoted_argument] = STATE(258),
    [sym_unquoted_argument] = STATE(258),
    [aux_sym_unquoted_argument_repeat1] = STATE(55),
    [aux_sym_if_command_repeat1] = STATE(21),
    [sym__escape_identity] = ACTIONS(103),
    [anon_sym_BSLASHt] = ACTIONS(103),
    [anon_sym_BSLASHr] = ACTIONS(103),
    [anon_sym_BSLASHn] = ACTIONS(103),
    [sym__escape_semicolon] = ACTIONS(103),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(105),
    [anon_sym_DOLLARENV] = ACTIONS(107),
    [anon_sym_DOLLARCACHE] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [aux_sym_quoted_element_token2] = ACTIONS(147),
    [aux_sym_unquoted_argument_token1] = ACTIONS(115),
    [aux_sym_if_command_token1] = ACTIONS(147),
    [anon_sym_1] = ACTIONS(149),
    [anon_sym_ON] = ACTIONS(149),
    [anon_sym_YES] = ACTIONS(149),
    [anon_sym_TRUE] = ACTIONS(149),
    [anon_sym_Y] = ACTIONS(149),
    [anon_sym_0] = ACTIONS(149),
    [anon_sym_OFF] = ACTIONS(149),
    [anon_sym_NO] = ACTIONS(149),
    [anon_sym_FALSE] = ACTIONS(149),
    [anon_sym_N] = ACTIONS(149),
    [anon_sym_IGNORE] = ACTIONS(149),
    [anon_sym_NOTFOUND] = ACTIONS(149),
    [anon_sym_NOT] = ACTIONS(149),
    [anon_sym_AND] = ACTIONS(149),
    [anon_sym_OR] = ACTIONS(149),
    [anon_sym_COMMAND] = ACTIONS(149),
    [anon_sym_POLICY] = ACTIONS(149),
    [anon_sym_TARGET] = ACTIONS(149),
    [anon_sym_TEST] = ACTIONS(149),
    [anon_sym_DEFINED] = ACTIONS(149),
    [anon_sym_CACHE] = ACTIONS(149),
    [anon_sym_ENV] = ACTIONS(149),
    [anon_sym_IN_LIST] = ACTIONS(149),
    [anon_sym_EXISTS] = ACTIONS(149),
    [anon_sym_IS_NEWER_THAN] = ACTIONS(149),
    [anon_sym_IS_DIRECTORY] = ACTIONS(149),
    [anon_sym_IS_SYMLINK] = ACTIONS(149),
    [anon_sym_IS_ABSOLUTE] = ACTIONS(149),
    [anon_sym_MATCHES] = ACTIONS(149),
    [anon_sym_LESS] = ACTIONS(149),
    [anon_sym_GREATER] = ACTIONS(149),
    [anon_sym_EQUAL] = ACTIONS(149),
    [anon_sym_LESS_EQUAL] = ACTIONS(149),
    [anon_sym_GREATER_EQUAL] = ACTIONS(149),
    [anon_sym_STRLESS] = ACTIONS(149),
    [anon_sym_STRGREATER] = ACTIONS(149),
    [anon_sym_STREQUAL] = ACTIONS(149),
    [anon_sym_STRLESS_EQUAL] = ACTIONS(149),
    [anon_sym_STRGREATER_EQUAL] = ACTIONS(149),
    [anon_sym_VERSION_LESS] = ACTIONS(149),
    [anon_sym_VERSION_GREATER] = ACTIONS(149),
    [anon_sym_VERSION_EQUAL] = ACTIONS(149),
    [anon_sym_VERSION_LESS_EQUAL] = ACTIONS(149),
    [anon_sym_VERSION_GREATER_EQUAL] = ACTIONS(149),
  },
  [26] = {
    [sym_escape_sequence] = STATE(55),
    [sym__escape_encoded] = STATE(87),
    [sym_variable_ref] = STATE(55),
    [sym_normal_var] = STATE(88),
    [sym_env_var] = STATE(88),
    [sym_cache_var] = STATE(88),
    [sym_argument] = STATE(237),
    [sym_bracket_argument] = STATE(258),
    [sym__bracket_open] = STATE(175),
    [sym_quoted_argument] = STATE(258),
    [sym_unquoted_argument] = STATE(258),
    [aux_sym_unquoted_argument_repeat1] = STATE(55),
    [aux_sym_if_command_repeat1] = STATE(27),
    [sym__escape_identity] = ACTIONS(103),
    [anon_sym_BSLASHt] = ACTIONS(103),
    [anon_sym_BSLASHr] = ACTIONS(103),
    [anon_sym_BSLASHn] = ACTIONS(103),
    [sym__escape_semicolon] = ACTIONS(103),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(105),
    [anon_sym_DOLLARENV] = ACTIONS(107),
    [anon_sym_DOLLARCACHE] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [aux_sym_quoted_element_token2] = ACTIONS(25),
    [aux_sym_unquoted_argument_token1] = ACTIONS(115),
    [aux_sym_if_command_token1] = ACTIONS(25),
    [anon_sym_1] = ACTIONS(151),
    [anon_sym_ON] = ACTIONS(151),
    [anon_sym_YES] = ACTIONS(151),
    [anon_sym_TRUE] = ACTIONS(151),
    [anon_sym_Y] = ACTIONS(151),
    [anon_sym_0] = ACTIONS(151),
    [anon_sym_OFF] = ACTIONS(151),
    [anon_sym_NO] = ACTIONS(151),
    [anon_sym_FALSE] = ACTIONS(151),
    [anon_sym_N] = ACTIONS(151),
    [anon_sym_IGNORE] = ACTIONS(151),
    [anon_sym_NOTFOUND] = ACTIONS(151),
    [anon_sym_NOT] = ACTIONS(151),
    [anon_sym_AND] = ACTIONS(151),
    [anon_sym_OR] = ACTIONS(151),
    [anon_sym_COMMAND] = ACTIONS(151),
    [anon_sym_POLICY] = ACTIONS(151),
    [anon_sym_TARGET] = ACTIONS(151),
    [anon_sym_TEST] = ACTIONS(151),
    [anon_sym_DEFINED] = ACTIONS(151),
    [anon_sym_CACHE] = ACTIONS(151),
    [anon_sym_ENV] = ACTIONS(151),
    [anon_sym_IN_LIST] = ACTIONS(151),
    [anon_sym_EXISTS] = ACTIONS(151),
    [anon_sym_IS_NEWER_THAN] = ACTIONS(151),
    [anon_sym_IS_DIRECTORY] = ACTIONS(151),
    [anon_sym_IS_SYMLINK] = ACTIONS(151),
    [anon_sym_IS_ABSOLUTE] = ACTIONS(151),
    [anon_sym_MATCHES] = ACTIONS(151),
    [anon_sym_LESS] = ACTIONS(151),
    [anon_sym_GREATER] = ACTIONS(151),
    [anon_sym_EQUAL] = ACTIONS(151),
    [anon_sym_LESS_EQUAL] = ACTIONS(151),
    [anon_sym_GREATER_EQUAL] = ACTIONS(151),
    [anon_sym_STRLESS] = ACTIONS(151),
    [anon_sym_STRGREATER] = ACTIONS(151),
    [anon_sym_STREQUAL] = ACTIONS(151),
    [anon_sym_STRLESS_EQUAL] = ACTIONS(151),
    [anon_sym_STRGREATER_EQUAL] = ACTIONS(151),
    [anon_sym_VERSION_LESS] = ACTIONS(151),
    [anon_sym_VERSION_GREATER] = ACTIONS(151),
    [anon_sym_VERSION_EQUAL] = ACTIONS(151),
    [anon_sym_VERSION_LESS_EQUAL] = ACTIONS(151),
    [anon_sym_VERSION_GREATER_EQUAL] = ACTIONS(151),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    STATE(27), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(155), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
    ACTIONS(153), 56,
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
      anon_sym_1,
      anon_sym_ON,
      anon_sym_YES,
      anon_sym_TRUE,
      anon_sym_Y,
      anon_sym_0,
      anon_sym_OFF,
      anon_sym_NO,
      anon_sym_FALSE,
      anon_sym_N,
      anon_sym_IGNORE,
      anon_sym_NOTFOUND,
      anon_sym_NOT,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_COMMAND,
      anon_sym_POLICY,
      anon_sym_TARGET,
      anon_sym_TEST,
      anon_sym_DEFINED,
      anon_sym_CACHE,
      anon_sym_ENV,
      anon_sym_IN_LIST,
      anon_sym_EXISTS,
      anon_sym_IS_NEWER_THAN,
      anon_sym_IS_DIRECTORY,
      anon_sym_IS_SYMLINK,
      anon_sym_IS_ABSOLUTE,
      anon_sym_MATCHES,
      anon_sym_LESS,
      anon_sym_GREATER,
      anon_sym_EQUAL,
      anon_sym_LESS_EQUAL,
      anon_sym_GREATER_EQUAL,
      anon_sym_STRLESS,
      anon_sym_STRGREATER,
      anon_sym_STREQUAL,
      anon_sym_STRLESS_EQUAL,
      anon_sym_STRGREATER_EQUAL,
      anon_sym_VERSION_LESS,
      anon_sym_VERSION_GREATER,
      anon_sym_VERSION_EQUAL,
      anon_sym_VERSION_LESS_EQUAL,
      anon_sym_VERSION_GREATER_EQUAL,
      anon_sym_RPAREN,
  [66] = 16,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(107), 1,
      anon_sym_DOLLARENV,
    ACTIONS(109), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      aux_sym_unquoted_argument_token1,
    STATE(48), 1,
      aux_sym_if_command_repeat1,
    STATE(87), 1,
      sym__escape_encoded,
    STATE(175), 1,
      sym__bracket_open,
    STATE(257), 1,
      sym_argument,
    ACTIONS(158), 3,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
      anon_sym_RPAREN,
    STATE(55), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(88), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(258), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(103), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
    ACTIONS(160), 5,
      anon_sym_IN,
      anon_sym_RANGE,
      anon_sym_ZIP_LISTS,
      anon_sym_LISTS,
      anon_sym_ITEMS,
  [131] = 16,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(107), 1,
      anon_sym_DOLLARENV,
    ACTIONS(109), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      aux_sym_unquoted_argument_token1,
    STATE(30), 1,
      aux_sym_if_command_repeat1,
    STATE(87), 1,
      sym__escape_encoded,
    STATE(175), 1,
      sym__bracket_open,
    STATE(182), 1,
      sym_argument,
    ACTIONS(162), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
    STATE(55), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(88), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(258), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(103), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
    ACTIONS(164), 5,
      anon_sym_IN,
      anon_sym_RANGE,
      anon_sym_ZIP_LISTS,
      anon_sym_LISTS,
      anon_sym_ITEMS,
  [195] = 16,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(107), 1,
      anon_sym_DOLLARENV,
    ACTIONS(109), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      aux_sym_unquoted_argument_token1,
    STATE(48), 1,
      aux_sym_if_command_repeat1,
    STATE(87), 1,
      sym__escape_encoded,
    STATE(175), 1,
      sym__bracket_open,
    STATE(242), 1,
      sym_argument,
    ACTIONS(166), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
    STATE(55), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(88), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(258), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(103), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
    ACTIONS(168), 5,
      anon_sym_IN,
      anon_sym_RANGE,
      anon_sym_ZIP_LISTS,
      anon_sym_LISTS,
      anon_sym_ITEMS,
  [259] = 16,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(107), 1,
      anon_sym_DOLLARENV,
    ACTIONS(109), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(172), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      aux_sym_if_command_repeat1,
    STATE(87), 1,
      sym__escape_encoded,
    STATE(175), 1,
      sym__bracket_open,
    STATE(208), 1,
      sym_argument,
    ACTIONS(170), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
    STATE(55), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(88), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(258), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(103), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [319] = 16,
    ACTIONS(15), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(17), 1,
      anon_sym_DOLLARENV,
    ACTIONS(19), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(176), 1,
      anon_sym_RPAREN,
    STATE(44), 1,
      aux_sym_if_command_repeat1,
    STATE(113), 1,
      sym__escape_encoded,
    STATE(239), 1,
      sym__bracket_open,
    STATE(309), 1,
      sym_argument,
    ACTIONS(174), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
    STATE(65), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(103), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(305), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(13), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [379] = 16,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(107), 1,
      anon_sym_DOLLARENV,
    ACTIONS(109), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(180), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      aux_sym_if_command_repeat1,
    STATE(87), 1,
      sym__escape_encoded,
    STATE(175), 1,
      sym__bracket_open,
    STATE(177), 1,
      sym_argument,
    ACTIONS(178), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
    STATE(55), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(88), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(258), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(103), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [439] = 16,
    ACTIONS(15), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(17), 1,
      anon_sym_DOLLARENV,
    ACTIONS(19), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(184), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      aux_sym_if_command_repeat1,
    STATE(113), 1,
      sym__escape_encoded,
    STATE(239), 1,
      sym__bracket_open,
    STATE(267), 1,
      sym_argument,
    ACTIONS(182), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
    STATE(65), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(103), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(305), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(13), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [499] = 16,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(107), 1,
      anon_sym_DOLLARENV,
    ACTIONS(109), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(188), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      aux_sym_if_command_repeat1,
    STATE(87), 1,
      sym__escape_encoded,
    STATE(164), 1,
      sym_argument,
    STATE(175), 1,
      sym__bracket_open,
    ACTIONS(186), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
    STATE(55), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(88), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(258), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(103), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [559] = 16,
    ACTIONS(15), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(17), 1,
      anon_sym_DOLLARENV,
    ACTIONS(19), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(192), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      aux_sym_if_command_repeat1,
    STATE(113), 1,
      sym__escape_encoded,
    STATE(239), 1,
      sym__bracket_open,
    STATE(273), 1,
      sym_argument,
    ACTIONS(190), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
    STATE(65), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(103), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(305), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(13), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [619] = 16,
    ACTIONS(15), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(17), 1,
      anon_sym_DOLLARENV,
    ACTIONS(19), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(194), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      aux_sym_if_command_repeat1,
    STATE(113), 1,
      sym__escape_encoded,
    STATE(239), 1,
      sym__bracket_open,
    STATE(284), 1,
      sym_argument,
    ACTIONS(182), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
    STATE(65), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(103), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(305), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(13), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [679] = 16,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(107), 1,
      anon_sym_DOLLARENV,
    ACTIONS(109), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(196), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      aux_sym_if_command_repeat1,
    STATE(87), 1,
      sym__escape_encoded,
    STATE(175), 1,
      sym__bracket_open,
    STATE(183), 1,
      sym_argument,
    ACTIONS(182), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
    STATE(55), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(88), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(258), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(103), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [739] = 16,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(107), 1,
      anon_sym_DOLLARENV,
    ACTIONS(109), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(198), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      aux_sym_if_command_repeat1,
    STATE(87), 1,
      sym__escape_encoded,
    STATE(155), 1,
      sym_argument,
    STATE(175), 1,
      sym__bracket_open,
    ACTIONS(182), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
    STATE(55), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(88), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(258), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(103), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [799] = 16,
    ACTIONS(15), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(17), 1,
      anon_sym_DOLLARENV,
    ACTIONS(19), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      aux_sym_if_command_repeat1,
    STATE(113), 1,
      sym__escape_encoded,
    STATE(239), 1,
      sym__bracket_open,
    STATE(283), 1,
      sym_argument,
    ACTIONS(200), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
    STATE(65), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(103), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(305), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(13), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [859] = 16,
    ACTIONS(15), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(17), 1,
      anon_sym_DOLLARENV,
    ACTIONS(19), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      aux_sym_if_command_repeat1,
    STATE(113), 1,
      sym__escape_encoded,
    STATE(239), 1,
      sym__bracket_open,
    STATE(286), 1,
      sym_argument,
    ACTIONS(204), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
    STATE(65), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(103), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(305), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(13), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [919] = 16,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(107), 1,
      anon_sym_DOLLARENV,
    ACTIONS(109), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      aux_sym_if_command_repeat1,
    STATE(87), 1,
      sym__escape_encoded,
    STATE(175), 1,
      sym__bracket_open,
    STATE(240), 1,
      sym_argument,
    ACTIONS(208), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
    STATE(55), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(88), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(258), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(103), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [979] = 16,
    ACTIONS(15), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(17), 1,
      anon_sym_DOLLARENV,
    ACTIONS(19), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      aux_sym_if_command_repeat1,
    STATE(113), 1,
      sym__escape_encoded,
    STATE(239), 1,
      sym__bracket_open,
    STATE(291), 1,
      sym_argument,
    ACTIONS(182), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
    STATE(65), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(103), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(305), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(13), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1039] = 16,
    ACTIONS(15), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(17), 1,
      anon_sym_DOLLARENV,
    ACTIONS(19), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      aux_sym_if_command_repeat1,
    STATE(113), 1,
      sym__escape_encoded,
    STATE(239), 1,
      sym__bracket_open,
    STATE(315), 1,
      sym_argument,
    ACTIONS(182), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
    STATE(65), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(103), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(305), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(13), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1099] = 16,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(107), 1,
      anon_sym_DOLLARENV,
    ACTIONS(109), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(216), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      aux_sym_if_command_repeat1,
    STATE(87), 1,
      sym__escape_encoded,
    STATE(175), 1,
      sym__bracket_open,
    STATE(235), 1,
      sym_argument,
    ACTIONS(182), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
    STATE(55), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(88), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(258), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(103), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1159] = 16,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(107), 1,
      anon_sym_DOLLARENV,
    ACTIONS(109), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      aux_sym_unquoted_argument_token1,
    ACTIONS(218), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      aux_sym_if_command_repeat1,
    STATE(87), 1,
      sym__escape_encoded,
    STATE(153), 1,
      sym_argument,
    STATE(175), 1,
      sym__bracket_open,
    ACTIONS(182), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
    STATE(55), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(88), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(258), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(103), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1219] = 15,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(107), 1,
      anon_sym_DOLLARENV,
    ACTIONS(109), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      aux_sym_unquoted_argument_token1,
    STATE(68), 1,
      aux_sym_if_command_repeat1,
    STATE(87), 1,
      sym__escape_encoded,
    STATE(175), 1,
      sym__bracket_open,
    STATE(259), 1,
      sym_argument,
    ACTIONS(220), 3,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
      anon_sym_RPAREN,
    STATE(55), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(88), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    STATE(258), 3,
      sym_bracket_argument,
      sym_quoted_argument,
      sym_unquoted_argument,
    ACTIONS(103), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1277] = 3,
    STATE(48), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(222), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
    ACTIONS(153), 17,
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
  [1304] = 12,
    ACTIONS(5), 1,
      sym_if,
    ACTIONS(7), 1,
      sym_foreach,
    ACTIONS(9), 1,
      sym_while,
    ACTIONS(225), 1,
      sym_elseif,
    ACTIONS(227), 1,
      sym_else,
    ACTIONS(229), 1,
      sym_endif,
    ACTIONS(231), 1,
      sym_identifier,
    STATE(52), 1,
      sym_if_command,
    STATE(70), 1,
      sym_foreach_command,
    STATE(75), 1,
      sym_while_command,
    STATE(128), 1,
      sym_endif_command,
    STATE(61), 8,
      sym_elseif_command,
      sym_else_command,
      sym_if_condition,
      sym_foreach_loop,
      sym_while_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_if_condition_repeat1,
  [1348] = 11,
    ACTIONS(235), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(237), 1,
      anon_sym_DOLLARENV,
    ACTIONS(239), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    ACTIONS(243), 1,
      aux_sym_quoted_element_token1,
    ACTIONS(245), 1,
      anon_sym_BSLASH,
    STATE(93), 1,
      sym__escape_encoded,
    STATE(270), 1,
      sym_quoted_element,
    STATE(63), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_quoted_element_repeat1,
    STATE(94), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(233), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1390] = 12,
    ACTIONS(5), 1,
      sym_if,
    ACTIONS(7), 1,
      sym_foreach,
    ACTIONS(9), 1,
      sym_while,
    ACTIONS(225), 1,
      sym_elseif,
    ACTIONS(227), 1,
      sym_else,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(247), 1,
      sym_endif,
    STATE(52), 1,
      sym_if_command,
    STATE(70), 1,
      sym_foreach_command,
    STATE(75), 1,
      sym_while_command,
    STATE(202), 1,
      sym_endif_command,
    STATE(61), 8,
      sym_elseif_command,
      sym_else_command,
      sym_if_condition,
      sym_foreach_loop,
      sym_while_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_if_condition_repeat1,
  [1434] = 12,
    ACTIONS(5), 1,
      sym_if,
    ACTIONS(7), 1,
      sym_foreach,
    ACTIONS(9), 1,
      sym_while,
    ACTIONS(225), 1,
      sym_elseif,
    ACTIONS(227), 1,
      sym_else,
    ACTIONS(229), 1,
      sym_endif,
    ACTIONS(231), 1,
      sym_identifier,
    STATE(52), 1,
      sym_if_command,
    STATE(70), 1,
      sym_foreach_command,
    STATE(75), 1,
      sym_while_command,
    STATE(137), 1,
      sym_endif_command,
    STATE(49), 8,
      sym_elseif_command,
      sym_else_command,
      sym_if_condition,
      sym_foreach_loop,
      sym_while_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_if_condition_repeat1,
  [1478] = 12,
    ACTIONS(5), 1,
      sym_if,
    ACTIONS(7), 1,
      sym_foreach,
    ACTIONS(9), 1,
      sym_while,
    ACTIONS(225), 1,
      sym_elseif,
    ACTIONS(227), 1,
      sym_else,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(247), 1,
      sym_endif,
    STATE(52), 1,
      sym_if_command,
    STATE(70), 1,
      sym_foreach_command,
    STATE(75), 1,
      sym_while_command,
    STATE(152), 1,
      sym_endif_command,
    STATE(51), 8,
      sym_elseif_command,
      sym_else_command,
      sym_if_condition,
      sym_foreach_loop,
      sym_while_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_if_condition_repeat1,
  [1522] = 12,
    ACTIONS(5), 1,
      sym_if,
    ACTIONS(7), 1,
      sym_foreach,
    ACTIONS(9), 1,
      sym_while,
    ACTIONS(225), 1,
      sym_elseif,
    ACTIONS(227), 1,
      sym_else,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(249), 1,
      sym_endif,
    STATE(52), 1,
      sym_if_command,
    STATE(70), 1,
      sym_foreach_command,
    STATE(75), 1,
      sym_while_command,
    STATE(213), 1,
      sym_endif_command,
    STATE(59), 8,
      sym_elseif_command,
      sym_else_command,
      sym_if_condition,
      sym_foreach_loop,
      sym_while_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_if_condition_repeat1,
  [1566] = 9,
    ACTIONS(105), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(107), 1,
      anon_sym_DOLLARENV,
    ACTIONS(109), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(253), 1,
      aux_sym_unquoted_argument_token1,
    STATE(87), 1,
      sym__escape_encoded,
    ACTIONS(251), 3,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
      anon_sym_RPAREN,
    STATE(56), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(88), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(103), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1604] = 9,
    ACTIONS(258), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(261), 1,
      anon_sym_DOLLARENV,
    ACTIONS(264), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(269), 1,
      aux_sym_unquoted_argument_token1,
    STATE(87), 1,
      sym__escape_encoded,
    ACTIONS(267), 3,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
      anon_sym_RPAREN,
    STATE(56), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(88), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(255), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1642] = 11,
    ACTIONS(235), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(237), 1,
      anon_sym_DOLLARENV,
    ACTIONS(239), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(243), 1,
      aux_sym_quoted_element_token1,
    ACTIONS(245), 1,
      anon_sym_BSLASH,
    ACTIONS(272), 1,
      anon_sym_DQUOTE,
    STATE(93), 1,
      sym__escape_encoded,
    STATE(271), 1,
      sym_quoted_element,
    STATE(63), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_quoted_element_repeat1,
    STATE(94), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(233), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1684] = 12,
    ACTIONS(5), 1,
      sym_if,
    ACTIONS(7), 1,
      sym_foreach,
    ACTIONS(9), 1,
      sym_while,
    ACTIONS(225), 1,
      sym_elseif,
    ACTIONS(227), 1,
      sym_else,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(274), 1,
      sym_endif,
    STATE(52), 1,
      sym_if_command,
    STATE(70), 1,
      sym_foreach_command,
    STATE(75), 1,
      sym_while_command,
    STATE(194), 1,
      sym_endif_command,
    STATE(61), 8,
      sym_elseif_command,
      sym_else_command,
      sym_if_condition,
      sym_foreach_loop,
      sym_while_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_if_condition_repeat1,
  [1728] = 12,
    ACTIONS(5), 1,
      sym_if,
    ACTIONS(7), 1,
      sym_foreach,
    ACTIONS(9), 1,
      sym_while,
    ACTIONS(225), 1,
      sym_elseif,
    ACTIONS(227), 1,
      sym_else,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(249), 1,
      sym_endif,
    STATE(52), 1,
      sym_if_command,
    STATE(70), 1,
      sym_foreach_command,
    STATE(75), 1,
      sym_while_command,
    STATE(218), 1,
      sym_endif_command,
    STATE(61), 8,
      sym_elseif_command,
      sym_else_command,
      sym_if_condition,
      sym_foreach_loop,
      sym_while_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_if_condition_repeat1,
  [1772] = 12,
    ACTIONS(5), 1,
      sym_if,
    ACTIONS(7), 1,
      sym_foreach,
    ACTIONS(9), 1,
      sym_while,
    ACTIONS(225), 1,
      sym_elseif,
    ACTIONS(227), 1,
      sym_else,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(274), 1,
      sym_endif,
    STATE(52), 1,
      sym_if_command,
    STATE(70), 1,
      sym_foreach_command,
    STATE(75), 1,
      sym_while_command,
    STATE(187), 1,
      sym_endif_command,
    STATE(58), 8,
      sym_elseif_command,
      sym_else_command,
      sym_if_condition,
      sym_foreach_loop,
      sym_while_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_if_condition_repeat1,
  [1816] = 11,
    ACTIONS(276), 1,
      sym_if,
    ACTIONS(279), 1,
      sym_elseif,
    ACTIONS(282), 1,
      sym_else,
    ACTIONS(285), 1,
      sym_endif,
    ACTIONS(287), 1,
      sym_foreach,
    ACTIONS(290), 1,
      sym_while,
    ACTIONS(293), 1,
      sym_identifier,
    STATE(52), 1,
      sym_if_command,
    STATE(70), 1,
      sym_foreach_command,
    STATE(75), 1,
      sym_while_command,
    STATE(61), 8,
      sym_elseif_command,
      sym_else_command,
      sym_if_condition,
      sym_foreach_loop,
      sym_while_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_if_condition_repeat1,
  [1857] = 10,
    ACTIONS(299), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(302), 1,
      anon_sym_DOLLARENV,
    ACTIONS(305), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    ACTIONS(310), 1,
      aux_sym_quoted_element_token1,
    ACTIONS(313), 1,
      anon_sym_BSLASH,
    STATE(93), 1,
      sym__escape_encoded,
    STATE(62), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_quoted_element_repeat1,
    STATE(94), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(296), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1896] = 10,
    ACTIONS(235), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(237), 1,
      anon_sym_DOLLARENV,
    ACTIONS(239), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(245), 1,
      anon_sym_BSLASH,
    ACTIONS(316), 1,
      anon_sym_DQUOTE,
    ACTIONS(318), 1,
      aux_sym_quoted_element_token1,
    STATE(93), 1,
      sym__escape_encoded,
    STATE(62), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_quoted_element_repeat1,
    STATE(94), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(233), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1935] = 9,
    ACTIONS(267), 1,
      anon_sym_RPAREN,
    ACTIONS(323), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(326), 1,
      anon_sym_DOLLARENV,
    ACTIONS(329), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(332), 1,
      aux_sym_unquoted_argument_token1,
    STATE(113), 1,
      sym__escape_encoded,
    STATE(64), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(103), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(320), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [1971] = 9,
    ACTIONS(15), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(17), 1,
      anon_sym_DOLLARENV,
    ACTIONS(19), 1,
      anon_sym_DOLLARCACHE,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    ACTIONS(335), 1,
      aux_sym_unquoted_argument_token1,
    STATE(113), 1,
      sym__escape_encoded,
    STATE(64), 3,
      sym_escape_sequence,
      sym_variable_ref,
      aux_sym_unquoted_argument_repeat1,
    STATE(103), 3,
      sym_normal_var,
      sym_env_var,
      sym_cache_var,
    ACTIONS(13), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [2007] = 10,
    ACTIONS(5), 1,
      sym_if,
    ACTIONS(7), 1,
      sym_foreach,
    ACTIONS(9), 1,
      sym_while,
    ACTIONS(337), 1,
      sym_endforeach,
    ACTIONS(339), 1,
      sym_identifier,
    STATE(60), 1,
      sym_if_command,
    STATE(69), 1,
      sym_while_command,
    STATE(74), 1,
      sym_foreach_command,
    STATE(214), 1,
      sym_endforeach_command,
    STATE(78), 6,
      sym_if_condition,
      sym_foreach_loop,
      sym_while_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [2043] = 10,
    ACTIONS(5), 1,
      sym_if,
    ACTIONS(7), 1,
      sym_foreach,
    ACTIONS(9), 1,
      sym_while,
    ACTIONS(341), 1,
      sym_endwhile,
    ACTIONS(343), 1,
      sym_identifier,
    STATE(54), 1,
      sym_if_command,
    STATE(66), 1,
      sym_foreach_command,
    STATE(76), 1,
      sym_while_command,
    STATE(174), 1,
      sym_endwhile_command,
    STATE(84), 6,
      sym_if_condition,
      sym_foreach_loop,
      sym_while_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [2079] = 3,
    STATE(68), 1,
      aux_sym_if_command_repeat1,
    ACTIONS(345), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
    ACTIONS(153), 12,
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
  [2101] = 10,
    ACTIONS(5), 1,
      sym_if,
    ACTIONS(7), 1,
      sym_foreach,
    ACTIONS(9), 1,
      sym_while,
    ACTIONS(343), 1,
      sym_identifier,
    ACTIONS(348), 1,
      sym_endwhile,
    STATE(54), 1,
      sym_if_command,
    STATE(66), 1,
      sym_foreach_command,
    STATE(76), 1,
      sym_while_command,
    STATE(189), 1,
      sym_endwhile_command,
    STATE(72), 6,
      sym_if_condition,
      sym_foreach_loop,
      sym_while_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [2137] = 10,
    ACTIONS(5), 1,
      sym_if,
    ACTIONS(7), 1,
      sym_foreach,
    ACTIONS(9), 1,
      sym_while,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(350), 1,
      sym_endforeach,
    STATE(60), 1,
      sym_if_command,
    STATE(69), 1,
      sym_while_command,
    STATE(74), 1,
      sym_foreach_command,
    STATE(138), 1,
      sym_endforeach_command,
    STATE(81), 6,
      sym_if_condition,
      sym_foreach_loop,
      sym_while_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [2173] = 10,
    ACTIONS(5), 1,
      sym_if,
    ACTIONS(7), 1,
      sym_foreach,
    ACTIONS(9), 1,
      sym_while,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(352), 1,
      sym_endforeach,
    STATE(60), 1,
      sym_if_command,
    STATE(69), 1,
      sym_while_command,
    STATE(74), 1,
      sym_foreach_command,
    STATE(195), 1,
      sym_endforeach_command,
    STATE(85), 6,
      sym_if_condition,
      sym_foreach_loop,
      sym_while_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [2209] = 10,
    ACTIONS(5), 1,
      sym_if,
    ACTIONS(7), 1,
      sym_foreach,
    ACTIONS(9), 1,
      sym_while,
    ACTIONS(343), 1,
      sym_identifier,
    ACTIONS(348), 1,
      sym_endwhile,
    STATE(54), 1,
      sym_if_command,
    STATE(66), 1,
      sym_foreach_command,
    STATE(76), 1,
      sym_while_command,
    STATE(196), 1,
      sym_endwhile_command,
    STATE(84), 6,
      sym_if_condition,
      sym_foreach_loop,
      sym_while_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [2245] = 10,
    ACTIONS(5), 1,
      sym_if,
    ACTIONS(7), 1,
      sym_foreach,
    ACTIONS(9), 1,
      sym_while,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(354), 1,
      sym_endforeach,
    STATE(60), 1,
      sym_if_command,
    STATE(69), 1,
      sym_while_command,
    STATE(74), 1,
      sym_foreach_command,
    STATE(168), 1,
      sym_endforeach_command,
    STATE(85), 6,
      sym_if_condition,
      sym_foreach_loop,
      sym_while_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [2281] = 10,
    ACTIONS(5), 1,
      sym_if,
    ACTIONS(7), 1,
      sym_foreach,
    ACTIONS(9), 1,
      sym_while,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(352), 1,
      sym_endforeach,
    STATE(60), 1,
      sym_if_command,
    STATE(69), 1,
      sym_while_command,
    STATE(74), 1,
      sym_foreach_command,
    STATE(188), 1,
      sym_endforeach_command,
    STATE(71), 6,
      sym_if_condition,
      sym_foreach_loop,
      sym_while_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [2317] = 10,
    ACTIONS(5), 1,
      sym_if,
    ACTIONS(7), 1,
      sym_foreach,
    ACTIONS(9), 1,
      sym_while,
    ACTIONS(343), 1,
      sym_identifier,
    ACTIONS(356), 1,
      sym_endwhile,
    STATE(54), 1,
      sym_if_command,
    STATE(66), 1,
      sym_foreach_command,
    STATE(76), 1,
      sym_while_command,
    STATE(139), 1,
      sym_endwhile_command,
    STATE(80), 6,
      sym_if_condition,
      sym_foreach_loop,
      sym_while_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [2353] = 10,
    ACTIONS(5), 1,
      sym_if,
    ACTIONS(7), 1,
      sym_foreach,
    ACTIONS(9), 1,
      sym_while,
    ACTIONS(343), 1,
      sym_identifier,
    ACTIONS(358), 1,
      sym_endwhile,
    STATE(54), 1,
      sym_if_command,
    STATE(66), 1,
      sym_foreach_command,
    STATE(76), 1,
      sym_while_command,
    STATE(215), 1,
      sym_endwhile_command,
    STATE(79), 6,
      sym_if_condition,
      sym_foreach_loop,
      sym_while_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [2389] = 10,
    ACTIONS(5), 1,
      sym_if,
    ACTIONS(7), 1,
      sym_foreach,
    ACTIONS(9), 1,
      sym_while,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(354), 1,
      sym_endforeach,
    STATE(60), 1,
      sym_if_command,
    STATE(69), 1,
      sym_while_command,
    STATE(74), 1,
      sym_foreach_command,
    STATE(158), 1,
      sym_endforeach_command,
    STATE(73), 6,
      sym_if_condition,
      sym_foreach_loop,
      sym_while_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [2425] = 10,
    ACTIONS(5), 1,
      sym_if,
    ACTIONS(7), 1,
      sym_foreach,
    ACTIONS(9), 1,
      sym_while,
    ACTIONS(337), 1,
      sym_endforeach,
    ACTIONS(339), 1,
      sym_identifier,
    STATE(60), 1,
      sym_if_command,
    STATE(69), 1,
      sym_while_command,
    STATE(74), 1,
      sym_foreach_command,
    STATE(219), 1,
      sym_endforeach_command,
    STATE(85), 6,
      sym_if_condition,
      sym_foreach_loop,
      sym_while_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [2461] = 10,
    ACTIONS(5), 1,
      sym_if,
    ACTIONS(7), 1,
      sym_foreach,
    ACTIONS(9), 1,
      sym_while,
    ACTIONS(343), 1,
      sym_identifier,
    ACTIONS(358), 1,
      sym_endwhile,
    STATE(54), 1,
      sym_if_command,
    STATE(66), 1,
      sym_foreach_command,
    STATE(76), 1,
      sym_while_command,
    STATE(220), 1,
      sym_endwhile_command,
    STATE(84), 6,
      sym_if_condition,
      sym_foreach_loop,
      sym_while_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [2497] = 10,
    ACTIONS(5), 1,
      sym_if,
    ACTIONS(7), 1,
      sym_foreach,
    ACTIONS(9), 1,
      sym_while,
    ACTIONS(343), 1,
      sym_identifier,
    ACTIONS(356), 1,
      sym_endwhile,
    STATE(54), 1,
      sym_if_command,
    STATE(66), 1,
      sym_foreach_command,
    STATE(76), 1,
      sym_while_command,
    STATE(125), 1,
      sym_endwhile_command,
    STATE(84), 6,
      sym_if_condition,
      sym_foreach_loop,
      sym_while_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [2533] = 10,
    ACTIONS(5), 1,
      sym_if,
    ACTIONS(7), 1,
      sym_foreach,
    ACTIONS(9), 1,
      sym_while,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(350), 1,
      sym_endforeach,
    STATE(60), 1,
      sym_if_command,
    STATE(69), 1,
      sym_while_command,
    STATE(74), 1,
      sym_foreach_command,
    STATE(126), 1,
      sym_endforeach_command,
    STATE(85), 6,
      sym_if_condition,
      sym_foreach_loop,
      sym_while_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [2569] = 10,
    ACTIONS(5), 1,
      sym_if,
    ACTIONS(7), 1,
      sym_foreach,
    ACTIONS(9), 1,
      sym_while,
    ACTIONS(341), 1,
      sym_endwhile,
    ACTIONS(343), 1,
      sym_identifier,
    STATE(54), 1,
      sym_if_command,
    STATE(66), 1,
      sym_foreach_command,
    STATE(76), 1,
      sym_while_command,
    STATE(160), 1,
      sym_endwhile_command,
    STATE(67), 6,
      sym_if_condition,
      sym_foreach_loop,
      sym_while_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [2605] = 9,
    ACTIONS(360), 1,
      ts_builtin_sym_end,
    ACTIONS(362), 1,
      sym_if,
    ACTIONS(365), 1,
      sym_foreach,
    ACTIONS(368), 1,
      sym_while,
    ACTIONS(371), 1,
      sym_identifier,
    STATE(53), 1,
      sym_if_command,
    STATE(77), 1,
      sym_foreach_command,
    STATE(82), 1,
      sym_while_command,
    STATE(83), 6,
      sym_if_condition,
      sym_foreach_loop,
      sym_while_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [2638] = 9,
    ACTIONS(362), 1,
      sym_if,
    ACTIONS(365), 1,
      sym_foreach,
    ACTIONS(368), 1,
      sym_while,
    ACTIONS(374), 1,
      sym_endwhile,
    ACTIONS(376), 1,
      sym_identifier,
    STATE(54), 1,
      sym_if_command,
    STATE(66), 1,
      sym_foreach_command,
    STATE(76), 1,
      sym_while_command,
    STATE(84), 6,
      sym_if_condition,
      sym_foreach_loop,
      sym_while_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [2671] = 9,
    ACTIONS(362), 1,
      sym_if,
    ACTIONS(365), 1,
      sym_foreach,
    ACTIONS(368), 1,
      sym_while,
    ACTIONS(374), 1,
      sym_endforeach,
    ACTIONS(379), 1,
      sym_identifier,
    STATE(60), 1,
      sym_if_command,
    STATE(69), 1,
      sym_while_command,
    STATE(74), 1,
      sym_foreach_command,
    STATE(85), 6,
      sym_if_condition,
      sym_foreach_loop,
      sym_while_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [2704] = 9,
    ACTIONS(5), 1,
      sym_if,
    ACTIONS(7), 1,
      sym_foreach,
    ACTIONS(9), 1,
      sym_while,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(382), 1,
      ts_builtin_sym_end,
    STATE(53), 1,
      sym_if_command,
    STATE(77), 1,
      sym_foreach_command,
    STATE(82), 1,
      sym_while_command,
    STATE(83), 6,
      sym_if_condition,
      sym_foreach_loop,
      sym_while_loop,
      sym_normal_command,
      sym__command_invocation,
      aux_sym_source_file_repeat1,
  [2737] = 1,
    ACTIONS(384), 12,
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
  [2752] = 1,
    ACTIONS(386), 12,
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
  [2767] = 1,
    ACTIONS(388), 12,
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
  [2782] = 1,
    ACTIONS(390), 12,
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
  [2797] = 1,
    ACTIONS(392), 12,
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
  [2812] = 1,
    ACTIONS(308), 11,
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
  [2826] = 1,
    ACTIONS(384), 11,
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
  [2840] = 1,
    ACTIONS(386), 11,
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
  [2854] = 1,
    ACTIONS(388), 11,
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
  [2868] = 1,
    ACTIONS(390), 11,
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
  [2882] = 1,
    ACTIONS(392), 11,
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
  [2896] = 1,
    ACTIONS(388), 10,
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
  [2909] = 5,
    ACTIONS(396), 1,
      aux_sym_variable_token1,
    STATE(141), 1,
      sym__escape_encoded,
    STATE(276), 1,
      sym_variable,
    STATE(106), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(394), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [2930] = 1,
    ACTIONS(392), 10,
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
  [2943] = 5,
    ACTIONS(396), 1,
      aux_sym_variable_token1,
    STATE(141), 1,
      sym__escape_encoded,
    STATE(277), 1,
      sym_variable,
    STATE(106), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(394), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [2964] = 5,
    ACTIONS(401), 1,
      aux_sym_variable_token1,
    ACTIONS(404), 1,
      anon_sym_RBRACE,
    STATE(141), 1,
      sym__escape_encoded,
    STATE(102), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(398), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [2985] = 1,
    ACTIONS(386), 10,
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
  [2998] = 5,
    ACTIONS(396), 1,
      aux_sym_variable_token1,
    STATE(141), 1,
      sym__escape_encoded,
    STATE(288), 1,
      sym_variable,
    STATE(106), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(394), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [3019] = 5,
    ACTIONS(396), 1,
      aux_sym_variable_token1,
    STATE(141), 1,
      sym__escape_encoded,
    STATE(294), 1,
      sym_variable,
    STATE(106), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(394), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [3040] = 5,
    ACTIONS(406), 1,
      aux_sym_variable_token1,
    ACTIONS(408), 1,
      anon_sym_RBRACE,
    STATE(141), 1,
      sym__escape_encoded,
    STATE(102), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(394), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [3061] = 5,
    ACTIONS(396), 1,
      aux_sym_variable_token1,
    STATE(141), 1,
      sym__escape_encoded,
    STATE(293), 1,
      sym_variable,
    STATE(106), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(394), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [3082] = 5,
    ACTIONS(396), 1,
      aux_sym_variable_token1,
    STATE(141), 1,
      sym__escape_encoded,
    STATE(279), 1,
      sym_variable,
    STATE(106), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(394), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [3103] = 5,
    ACTIONS(396), 1,
      aux_sym_variable_token1,
    STATE(141), 1,
      sym__escape_encoded,
    STATE(287), 1,
      sym_variable,
    STATE(106), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(394), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [3124] = 5,
    ACTIONS(396), 1,
      aux_sym_variable_token1,
    STATE(141), 1,
      sym__escape_encoded,
    STATE(278), 1,
      sym_variable,
    STATE(106), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(394), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [3145] = 5,
    ACTIONS(396), 1,
      aux_sym_variable_token1,
    STATE(141), 1,
      sym__escape_encoded,
    STATE(282), 1,
      sym_variable,
    STATE(106), 2,
      sym_escape_sequence,
      aux_sym_variable_repeat1,
    ACTIONS(394), 5,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
  [3166] = 1,
    ACTIONS(390), 10,
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
  [3179] = 1,
    ACTIONS(384), 10,
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
  [3192] = 1,
    ACTIONS(410), 7,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_while,
      sym_identifier,
  [3202] = 1,
    ACTIONS(412), 7,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_while,
      sym_identifier,
  [3212] = 1,
    ACTIONS(414), 7,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_while,
      sym_identifier,
  [3222] = 1,
    ACTIONS(416), 7,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_while,
      sym_identifier,
  [3232] = 1,
    ACTIONS(418), 7,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_while,
      sym_identifier,
  [3242] = 1,
    ACTIONS(420), 7,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_while,
      sym_identifier,
  [3252] = 1,
    ACTIONS(422), 7,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_while,
      sym_identifier,
  [3262] = 1,
    ACTIONS(424), 7,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_while,
      sym_identifier,
  [3272] = 1,
    ACTIONS(426), 7,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_while,
      sym_identifier,
  [3282] = 1,
    ACTIONS(428), 7,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_while,
      sym_identifier,
  [3292] = 1,
    ACTIONS(430), 7,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_while,
      sym_identifier,
  [3302] = 1,
    ACTIONS(432), 7,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_while,
      sym_identifier,
  [3312] = 1,
    ACTIONS(434), 7,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_while,
      sym_identifier,
  [3322] = 1,
    ACTIONS(436), 7,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_while,
      sym_identifier,
  [3332] = 1,
    ACTIONS(438), 7,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_while,
      sym_identifier,
  [3342] = 1,
    ACTIONS(440), 7,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_while,
      sym_identifier,
  [3352] = 1,
    ACTIONS(442), 7,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_while,
      sym_identifier,
  [3362] = 1,
    ACTIONS(444), 7,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_while,
      sym_identifier,
  [3372] = 1,
    ACTIONS(446), 7,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_while,
      sym_identifier,
  [3382] = 1,
    ACTIONS(448), 7,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_while,
      sym_identifier,
  [3392] = 1,
    ACTIONS(450), 7,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_while,
      sym_identifier,
  [3402] = 1,
    ACTIONS(452), 7,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_while,
      sym_identifier,
  [3412] = 1,
    ACTIONS(454), 7,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_while,
      sym_identifier,
  [3422] = 1,
    ACTIONS(456), 7,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_while,
      sym_identifier,
  [3432] = 1,
    ACTIONS(458), 7,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_while,
      sym_identifier,
  [3442] = 1,
    ACTIONS(460), 7,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_while,
      sym_identifier,
  [3452] = 1,
    ACTIONS(462), 7,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_while,
      sym_identifier,
  [3462] = 1,
    ACTIONS(464), 7,
      sym__escape_identity,
      anon_sym_BSLASHt,
      anon_sym_BSLASHr,
      anon_sym_BSLASHn,
      sym__escape_semicolon,
      aux_sym_variable_token1,
      anon_sym_RBRACE,
  [3472] = 1,
    ACTIONS(466), 7,
      sym_if,
      sym_elseif,
      sym_else,
      sym_endif,
      sym_foreach,
      sym_while,
      sym_identifier,
  [3482] = 4,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_if_command_repeat1,
    STATE(166), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(468), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [3496] = 2,
    ACTIONS(472), 1,
      ts_builtin_sym_end,
    ACTIONS(420), 4,
      sym_if,
      sym_foreach,
      sym_while,
      sym_identifier,
  [3506] = 2,
    ACTIONS(474), 1,
      ts_builtin_sym_end,
    ACTIONS(414), 4,
      sym_if,
      sym_foreach,
      sym_while,
      sym_identifier,
  [3516] = 4,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      aux_sym_if_command_repeat1,
    STATE(184), 1,
      aux_sym_if_command_repeat2,
    ACTIONS(476), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [3530] = 4,
    ACTIONS(480), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_if_command_repeat1,
    STATE(166), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(468), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [3544] = 2,
    ACTIONS(482), 1,
      ts_builtin_sym_end,
    ACTIONS(444), 4,
      sym_if,
      sym_foreach,
      sym_while,
      sym_identifier,
  [3554] = 2,
    ACTIONS(484), 1,
      ts_builtin_sym_end,
    ACTIONS(446), 4,
      sym_if,
      sym_foreach,
      sym_while,
      sym_identifier,
  [3564] = 2,
    ACTIONS(486), 1,
      ts_builtin_sym_end,
    ACTIONS(462), 4,
      sym_if,
      sym_foreach,
      sym_while,
      sym_identifier,
  [3574] = 2,
    ACTIONS(488), 1,
      ts_builtin_sym_end,
    ACTIONS(440), 4,
      sym_if,
      sym_foreach,
      sym_while,
      sym_identifier,
  [3584] = 2,
    ACTIONS(490), 1,
      ts_builtin_sym_end,
    ACTIONS(456), 4,
      sym_if,
      sym_foreach,
      sym_while,
      sym_identifier,
  [3594] = 4,
    ACTIONS(492), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_if_command_repeat1,
    STATE(147), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(468), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [3608] = 2,
    ACTIONS(494), 1,
      ts_builtin_sym_end,
    ACTIONS(410), 4,
      sym_if,
      sym_foreach,
      sym_while,
      sym_identifier,
  [3618] = 4,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_if_command_repeat1,
    STATE(197), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(468), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [3632] = 4,
    ACTIONS(492), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_if_command_repeat1,
    STATE(166), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(468), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [3646] = 1,
    ACTIONS(498), 5,
      sym_if,
      sym_foreach,
      sym_endforeach,
      sym_while,
      sym_identifier,
  [3654] = 2,
    ACTIONS(500), 1,
      ts_builtin_sym_end,
    ACTIONS(458), 4,
      sym_if,
      sym_foreach,
      sym_while,
      sym_identifier,
  [3664] = 1,
    ACTIONS(502), 5,
      sym_if,
      sym_foreach,
      sym_while,
      sym_endwhile,
      sym_identifier,
  [3672] = 2,
    ACTIONS(504), 1,
      ts_builtin_sym_end,
    ACTIONS(460), 4,
      sym_if,
      sym_foreach,
      sym_while,
      sym_identifier,
  [3682] = 4,
    ACTIONS(506), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      aux_sym_if_command_repeat1,
    STATE(146), 1,
      aux_sym_if_command_repeat2,
    ACTIONS(476), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [3696] = 4,
    ACTIONS(506), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      aux_sym_if_command_repeat1,
    STATE(184), 1,
      aux_sym_if_command_repeat2,
    ACTIONS(476), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [3710] = 4,
    ACTIONS(508), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_if_command_repeat1,
    STATE(166), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(468), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [3724] = 4,
    ACTIONS(218), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_if_command_repeat1,
    STATE(156), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(468), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [3738] = 4,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_if_command_repeat1,
    STATE(166), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(468), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [3752] = 4,
    ACTIONS(513), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_if_command_repeat1,
    STATE(166), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(510), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [3766] = 2,
    ACTIONS(515), 1,
      ts_builtin_sym_end,
    ACTIONS(416), 4,
      sym_if,
      sym_foreach,
      sym_while,
      sym_identifier,
  [3776] = 2,
    ACTIONS(517), 1,
      ts_builtin_sym_end,
    ACTIONS(434), 4,
      sym_if,
      sym_foreach,
      sym_while,
      sym_identifier,
  [3786] = 4,
    ACTIONS(519), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      aux_sym_if_command_repeat1,
    STATE(184), 1,
      aux_sym_if_command_repeat2,
    ACTIONS(476), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [3800] = 1,
    ACTIONS(521), 5,
      sym_if,
      sym_foreach,
      sym_while,
      sym_endwhile,
      sym_identifier,
  [3808] = 4,
    ACTIONS(525), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym_if_command_repeat1,
    STATE(172), 1,
      aux_sym_foreach_command_repeat1,
    ACTIONS(523), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [3822] = 4,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym_if_command_repeat1,
    STATE(172), 1,
      aux_sym_foreach_command_repeat1,
    ACTIONS(527), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [3836] = 4,
    ACTIONS(532), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      aux_sym_if_command_repeat1,
    STATE(179), 1,
      aux_sym_if_command_repeat2,
    ACTIONS(476), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [3850] = 2,
    ACTIONS(534), 1,
      ts_builtin_sym_end,
    ACTIONS(432), 4,
      sym_if,
      sym_foreach,
      sym_while,
      sym_identifier,
  [3860] = 5,
    ACTIONS(536), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(538), 1,
      anon_sym_RBRACK,
    STATE(249), 1,
      aux_sym_bracket_content_repeat1,
    STATE(250), 1,
      sym__bracket_close,
    STATE(263), 1,
      sym_bracket_content,
  [3876] = 1,
    ACTIONS(540), 5,
      sym_if,
      sym_foreach,
      sym_endforeach,
      sym_while,
      sym_identifier,
  [3884] = 4,
    ACTIONS(198), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_if_command_repeat1,
    STATE(165), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(468), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [3898] = 4,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      aux_sym_if_command_repeat1,
    STATE(184), 1,
      aux_sym_if_command_repeat2,
    ACTIONS(476), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [3912] = 4,
    ACTIONS(544), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      aux_sym_if_command_repeat1,
    STATE(184), 1,
      aux_sym_if_command_repeat2,
    ACTIONS(476), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [3926] = 4,
    ACTIONS(546), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_if_command_repeat1,
    STATE(166), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(468), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [3940] = 4,
    ACTIONS(544), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      aux_sym_if_command_repeat1,
    STATE(178), 1,
      aux_sym_if_command_repeat2,
    ACTIONS(476), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [3954] = 4,
    ACTIONS(548), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym_if_command_repeat1,
    STATE(190), 1,
      aux_sym_foreach_command_repeat1,
    ACTIONS(523), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [3968] = 4,
    ACTIONS(550), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_if_command_repeat1,
    STATE(180), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(468), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [3982] = 4,
    ACTIONS(555), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      aux_sym_if_command_repeat1,
    STATE(184), 1,
      aux_sym_if_command_repeat2,
    ACTIONS(552), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [3996] = 4,
    ACTIONS(550), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_if_command_repeat1,
    STATE(166), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(468), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [4010] = 1,
    ACTIONS(557), 5,
      sym_if,
      sym_foreach,
      sym_endforeach,
      sym_while,
      sym_identifier,
  [4018] = 1,
    ACTIONS(456), 5,
      sym_if,
      sym_foreach,
      sym_endforeach,
      sym_while,
      sym_identifier,
  [4026] = 1,
    ACTIONS(458), 5,
      sym_if,
      sym_foreach,
      sym_endforeach,
      sym_while,
      sym_identifier,
  [4034] = 1,
    ACTIONS(460), 5,
      sym_if,
      sym_foreach,
      sym_endforeach,
      sym_while,
      sym_identifier,
  [4042] = 4,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym_if_command_repeat1,
    STATE(172), 1,
      aux_sym_foreach_command_repeat1,
    ACTIONS(523), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [4056] = 2,
    ACTIONS(561), 1,
      ts_builtin_sym_end,
    ACTIONS(428), 4,
      sym_if,
      sym_foreach,
      sym_while,
      sym_identifier,
  [4066] = 4,
    ACTIONS(563), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      aux_sym_if_command_repeat1,
    STATE(238), 1,
      aux_sym_if_command_repeat2,
    ACTIONS(476), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [4080] = 1,
    ACTIONS(412), 5,
      sym_if,
      sym_foreach,
      sym_endforeach,
      sym_while,
      sym_identifier,
  [4088] = 1,
    ACTIONS(438), 5,
      sym_if,
      sym_foreach,
      sym_endforeach,
      sym_while,
      sym_identifier,
  [4096] = 1,
    ACTIONS(434), 5,
      sym_if,
      sym_foreach,
      sym_endforeach,
      sym_while,
      sym_identifier,
  [4104] = 1,
    ACTIONS(432), 5,
      sym_if,
      sym_foreach,
      sym_endforeach,
      sym_while,
      sym_identifier,
  [4112] = 4,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_if_command_repeat1,
    STATE(166), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(468), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [4126] = 1,
    ACTIONS(426), 5,
      sym_if,
      sym_foreach,
      sym_endforeach,
      sym_while,
      sym_identifier,
  [4134] = 1,
    ACTIONS(424), 5,
      sym_if,
      sym_foreach,
      sym_endforeach,
      sym_while,
      sym_identifier,
  [4142] = 1,
    ACTIONS(422), 5,
      sym_if,
      sym_foreach,
      sym_endforeach,
      sym_while,
      sym_identifier,
  [4150] = 1,
    ACTIONS(420), 5,
      sym_if,
      sym_foreach,
      sym_endforeach,
      sym_while,
      sym_identifier,
  [4158] = 2,
    ACTIONS(567), 1,
      ts_builtin_sym_end,
    ACTIONS(438), 4,
      sym_if,
      sym_foreach,
      sym_while,
      sym_identifier,
  [4168] = 1,
    ACTIONS(416), 5,
      sym_if,
      sym_foreach,
      sym_endforeach,
      sym_while,
      sym_identifier,
  [4176] = 1,
    ACTIONS(410), 5,
      sym_if,
      sym_foreach,
      sym_endforeach,
      sym_while,
      sym_identifier,
  [4184] = 1,
    ACTIONS(414), 5,
      sym_if,
      sym_foreach,
      sym_endforeach,
      sym_while,
      sym_identifier,
  [4192] = 1,
    ACTIONS(440), 5,
      sym_if,
      sym_foreach,
      sym_endforeach,
      sym_while,
      sym_identifier,
  [4200] = 2,
    ACTIONS(569), 1,
      ts_builtin_sym_end,
    ACTIONS(412), 4,
      sym_if,
      sym_foreach,
      sym_while,
      sym_identifier,
  [4210] = 4,
    ACTIONS(216), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_if_command_repeat1,
    STATE(143), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(468), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [4224] = 1,
    ACTIONS(428), 5,
      sym_if,
      sym_foreach,
      sym_endforeach,
      sym_while,
      sym_identifier,
  [4232] = 1,
    ACTIONS(444), 5,
      sym_if,
      sym_foreach,
      sym_endforeach,
      sym_while,
      sym_identifier,
  [4240] = 1,
    ACTIONS(446), 5,
      sym_if,
      sym_foreach,
      sym_endforeach,
      sym_while,
      sym_identifier,
  [4248] = 1,
    ACTIONS(462), 5,
      sym_if,
      sym_foreach,
      sym_endforeach,
      sym_while,
      sym_identifier,
  [4256] = 1,
    ACTIONS(456), 5,
      sym_if,
      sym_foreach,
      sym_while,
      sym_endwhile,
      sym_identifier,
  [4264] = 1,
    ACTIONS(458), 5,
      sym_if,
      sym_foreach,
      sym_while,
      sym_endwhile,
      sym_identifier,
  [4272] = 1,
    ACTIONS(460), 5,
      sym_if,
      sym_foreach,
      sym_while,
      sym_endwhile,
      sym_identifier,
  [4280] = 2,
    ACTIONS(571), 1,
      ts_builtin_sym_end,
    ACTIONS(422), 4,
      sym_if,
      sym_foreach,
      sym_while,
      sym_identifier,
  [4290] = 1,
    ACTIONS(412), 5,
      sym_if,
      sym_foreach,
      sym_while,
      sym_endwhile,
      sym_identifier,
  [4298] = 1,
    ACTIONS(438), 5,
      sym_if,
      sym_foreach,
      sym_while,
      sym_endwhile,
      sym_identifier,
  [4306] = 1,
    ACTIONS(434), 5,
      sym_if,
      sym_foreach,
      sym_while,
      sym_endwhile,
      sym_identifier,
  [4314] = 1,
    ACTIONS(432), 5,
      sym_if,
      sym_foreach,
      sym_while,
      sym_endwhile,
      sym_identifier,
  [4322] = 1,
    ACTIONS(426), 5,
      sym_if,
      sym_foreach,
      sym_while,
      sym_endwhile,
      sym_identifier,
  [4330] = 1,
    ACTIONS(424), 5,
      sym_if,
      sym_foreach,
      sym_while,
      sym_endwhile,
      sym_identifier,
  [4338] = 1,
    ACTIONS(422), 5,
      sym_if,
      sym_foreach,
      sym_while,
      sym_endwhile,
      sym_identifier,
  [4346] = 1,
    ACTIONS(420), 5,
      sym_if,
      sym_foreach,
      sym_while,
      sym_endwhile,
      sym_identifier,
  [4354] = 1,
    ACTIONS(416), 5,
      sym_if,
      sym_foreach,
      sym_while,
      sym_endwhile,
      sym_identifier,
  [4362] = 1,
    ACTIONS(410), 5,
      sym_if,
      sym_foreach,
      sym_while,
      sym_endwhile,
      sym_identifier,
  [4370] = 1,
    ACTIONS(414), 5,
      sym_if,
      sym_foreach,
      sym_while,
      sym_endwhile,
      sym_identifier,
  [4378] = 1,
    ACTIONS(440), 5,
      sym_if,
      sym_foreach,
      sym_while,
      sym_endwhile,
      sym_identifier,
  [4386] = 1,
    ACTIONS(428), 5,
      sym_if,
      sym_foreach,
      sym_while,
      sym_endwhile,
      sym_identifier,
  [4394] = 1,
    ACTIONS(444), 5,
      sym_if,
      sym_foreach,
      sym_while,
      sym_endwhile,
      sym_identifier,
  [4402] = 1,
    ACTIONS(446), 5,
      sym_if,
      sym_foreach,
      sym_while,
      sym_endwhile,
      sym_identifier,
  [4410] = 1,
    ACTIONS(462), 5,
      sym_if,
      sym_foreach,
      sym_while,
      sym_endwhile,
      sym_identifier,
  [4418] = 2,
    ACTIONS(573), 1,
      ts_builtin_sym_end,
    ACTIONS(424), 4,
      sym_if,
      sym_foreach,
      sym_while,
      sym_identifier,
  [4428] = 4,
    ACTIONS(575), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      aux_sym_if_command_repeat1,
    STATE(162), 1,
      aux_sym_if_command_repeat2,
    ACTIONS(476), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [4442] = 4,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_if_command_repeat1,
    STATE(163), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(468), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [4456] = 2,
    ACTIONS(577), 1,
      ts_builtin_sym_end,
    ACTIONS(426), 4,
      sym_if,
      sym_foreach,
      sym_while,
      sym_identifier,
  [4466] = 4,
    ACTIONS(579), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      aux_sym_if_command_repeat1,
    STATE(169), 1,
      aux_sym_if_command_repeat2,
    ACTIONS(476), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [4480] = 4,
    ACTIONS(579), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      aux_sym_if_command_repeat1,
    STATE(184), 1,
      aux_sym_if_command_repeat2,
    ACTIONS(476), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [4494] = 5,
    ACTIONS(536), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(581), 1,
      anon_sym_RBRACK,
    STATE(249), 1,
      aux_sym_bracket_content_repeat1,
    STATE(265), 1,
      sym_bracket_content,
    STATE(300), 1,
      sym__bracket_close,
  [4510] = 4,
    ACTIONS(196), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_if_command_repeat1,
    STATE(185), 1,
      aux_sym_normal_command_repeat1,
    ACTIONS(468), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [4524] = 1,
    ACTIONS(583), 5,
      sym_if,
      sym_foreach,
      sym_while,
      sym_endwhile,
      sym_identifier,
  [4532] = 4,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym_if_command_repeat1,
    STATE(171), 1,
      aux_sym_foreach_command_repeat1,
    ACTIONS(523), 2,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
  [4546] = 3,
    ACTIONS(587), 1,
      anon_sym_EQ,
    STATE(243), 1,
      aux_sym__bracket_open_repeat1,
    ACTIONS(585), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [4557] = 1,
    ACTIONS(590), 3,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
      anon_sym_RPAREN,
  [4563] = 3,
    ACTIONS(592), 1,
      anon_sym_EQ,
    ACTIONS(594), 1,
      anon_sym_RBRACK,
    STATE(251), 1,
      aux_sym__bracket_open_repeat1,
  [4573] = 1,
    ACTIONS(555), 3,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
      anon_sym_RPAREN,
  [4579] = 1,
    ACTIONS(596), 3,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
      anon_sym_RPAREN,
  [4585] = 3,
    ACTIONS(598), 1,
      anon_sym_EQ,
    ACTIONS(600), 1,
      anon_sym_RBRACK,
    STATE(243), 1,
      aux_sym__bracket_open_repeat1,
  [4595] = 3,
    ACTIONS(602), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(604), 1,
      anon_sym_RBRACK,
    STATE(254), 1,
      aux_sym_bracket_content_repeat1,
  [4605] = 1,
    ACTIONS(606), 3,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
      anon_sym_RPAREN,
  [4611] = 3,
    ACTIONS(598), 1,
      anon_sym_EQ,
    ACTIONS(608), 1,
      anon_sym_RBRACK,
    STATE(243), 1,
      aux_sym__bracket_open_repeat1,
  [4621] = 1,
    ACTIONS(610), 3,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
      anon_sym_RPAREN,
  [4627] = 3,
    ACTIONS(612), 1,
      anon_sym_EQ,
    ACTIONS(614), 1,
      anon_sym_RBRACK,
    STATE(248), 1,
      aux_sym__bracket_open_repeat1,
  [4637] = 3,
    ACTIONS(616), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(619), 1,
      anon_sym_RBRACK,
    STATE(254), 1,
      aux_sym_bracket_content_repeat1,
  [4647] = 1,
    ACTIONS(621), 3,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
      anon_sym_RPAREN,
  [4653] = 3,
    ACTIONS(598), 1,
      anon_sym_EQ,
    ACTIONS(623), 1,
      anon_sym_LBRACK,
    STATE(243), 1,
      aux_sym__bracket_open_repeat1,
  [4663] = 1,
    ACTIONS(530), 3,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
      anon_sym_RPAREN,
  [4669] = 1,
    ACTIONS(625), 3,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
      anon_sym_RPAREN,
  [4675] = 1,
    ACTIONS(513), 3,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
      anon_sym_RPAREN,
  [4681] = 3,
    ACTIONS(627), 1,
      anon_sym_LBRACK,
    ACTIONS(629), 1,
      anon_sym_EQ,
    STATE(256), 1,
      aux_sym__bracket_open_repeat1,
  [4691] = 1,
    ACTIONS(631), 3,
      aux_sym_quoted_element_token2,
      aux_sym_if_command_token1,
      anon_sym_RPAREN,
  [4697] = 2,
    ACTIONS(633), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(635), 1,
      anon_sym_RBRACK,
  [4704] = 2,
    ACTIONS(637), 1,
      anon_sym_RBRACK,
    STATE(252), 1,
      sym__bracket_close,
  [4711] = 2,
    ACTIONS(639), 1,
      aux_sym_bracket_content_token1,
    ACTIONS(641), 1,
      anon_sym_RBRACK,
  [4718] = 2,
    ACTIONS(643), 1,
      anon_sym_RBRACK,
    STATE(296), 1,
      sym__bracket_close,
  [4725] = 1,
    ACTIONS(645), 1,
      anon_sym_RPAREN,
  [4729] = 1,
    ACTIONS(647), 1,
      anon_sym_RPAREN,
  [4733] = 1,
    ACTIONS(649), 1,
      anon_sym_RPAREN,
  [4737] = 1,
    ACTIONS(651), 1,
      anon_sym_RPAREN,
  [4741] = 1,
    ACTIONS(653), 1,
      anon_sym_DQUOTE,
  [4745] = 1,
    ACTIONS(655), 1,
      anon_sym_DQUOTE,
  [4749] = 1,
    ACTIONS(657), 1,
      aux_sym_quoted_element_token2,
  [4753] = 1,
    ACTIONS(659), 1,
      anon_sym_RPAREN,
  [4757] = 1,
    ACTIONS(661), 1,
      anon_sym_RPAREN,
  [4761] = 1,
    ACTIONS(663), 1,
      anon_sym_RPAREN,
  [4765] = 1,
    ACTIONS(665), 1,
      anon_sym_RBRACE,
  [4769] = 1,
    ACTIONS(667), 1,
      anon_sym_RBRACE,
  [4773] = 1,
    ACTIONS(669), 1,
      anon_sym_RBRACE,
  [4777] = 1,
    ACTIONS(671), 1,
      anon_sym_RBRACE,
  [4781] = 1,
    ACTIONS(673), 1,
      anon_sym_RPAREN,
  [4785] = 1,
    ACTIONS(675), 1,
      anon_sym_RPAREN,
  [4789] = 1,
    ACTIONS(677), 1,
      anon_sym_RBRACE,
  [4793] = 1,
    ACTIONS(679), 1,
      anon_sym_RPAREN,
  [4797] = 1,
    ACTIONS(681), 1,
      anon_sym_RPAREN,
  [4801] = 1,
    ACTIONS(683), 1,
      anon_sym_RPAREN,
  [4805] = 1,
    ACTIONS(685), 1,
      anon_sym_RPAREN,
  [4809] = 1,
    ACTIONS(687), 1,
      anon_sym_RBRACE,
  [4813] = 1,
    ACTIONS(689), 1,
      anon_sym_RBRACE,
  [4817] = 1,
    ACTIONS(691), 1,
      anon_sym_LPAREN,
  [4821] = 1,
    ACTIONS(693), 1,
      anon_sym_RPAREN,
  [4825] = 1,
    ACTIONS(695), 1,
      anon_sym_RPAREN,
  [4829] = 1,
    ACTIONS(697), 1,
      anon_sym_RPAREN,
  [4833] = 1,
    ACTIONS(699), 1,
      anon_sym_RBRACE,
  [4837] = 1,
    ACTIONS(701), 1,
      anon_sym_RBRACE,
  [4841] = 1,
    ACTIONS(703), 1,
      anon_sym_RPAREN,
  [4845] = 1,
    ACTIONS(705), 1,
      anon_sym_RPAREN,
  [4849] = 1,
    ACTIONS(707), 1,
      anon_sym_RPAREN,
  [4853] = 1,
    ACTIONS(709), 1,
      anon_sym_RPAREN,
  [4857] = 1,
    ACTIONS(711), 1,
      anon_sym_LBRACE,
  [4861] = 1,
    ACTIONS(713), 1,
      anon_sym_RPAREN,
  [4865] = 1,
    ACTIONS(715), 1,
      anon_sym_LBRACE,
  [4869] = 1,
    ACTIONS(717), 1,
      anon_sym_RPAREN,
  [4873] = 1,
    ACTIONS(719), 1,
      anon_sym_LPAREN,
  [4877] = 1,
    ACTIONS(721), 1,
      anon_sym_RPAREN,
  [4881] = 1,
    ACTIONS(723), 1,
      anon_sym_RPAREN,
  [4885] = 1,
    ACTIONS(725), 1,
      anon_sym_RPAREN,
  [4889] = 1,
    ACTIONS(727), 1,
      anon_sym_RPAREN,
  [4893] = 1,
    ACTIONS(729), 1,
      anon_sym_LPAREN,
  [4897] = 1,
    ACTIONS(731), 1,
      anon_sym_RPAREN,
  [4901] = 1,
    ACTIONS(733), 1,
      anon_sym_RPAREN,
  [4905] = 1,
    ACTIONS(735), 1,
      anon_sym_RPAREN,
  [4909] = 1,
    ACTIONS(737), 1,
      anon_sym_LPAREN,
  [4913] = 1,
    ACTIONS(739), 1,
      anon_sym_RPAREN,
  [4917] = 1,
    ACTIONS(741), 1,
      anon_sym_RPAREN,
  [4921] = 1,
    ACTIONS(743), 1,
      anon_sym_RPAREN,
  [4925] = 1,
    ACTIONS(745), 1,
      anon_sym_RPAREN,
  [4929] = 1,
    ACTIONS(747), 1,
      anon_sym_LPAREN,
  [4933] = 1,
    ACTIONS(749), 1,
      anon_sym_LPAREN,
  [4937] = 1,
    ACTIONS(751), 1,
      anon_sym_LPAREN,
  [4941] = 1,
    ACTIONS(753), 1,
      anon_sym_LPAREN,
  [4945] = 1,
    ACTIONS(755), 1,
      anon_sym_LPAREN,
  [4949] = 1,
    ACTIONS(757), 1,
      anon_sym_LPAREN,
  [4953] = 1,
    ACTIONS(759), 1,
      ts_builtin_sym_end,
  [4957] = 1,
    ACTIONS(761), 1,
      anon_sym_LPAREN,
  [4961] = 1,
    ACTIONS(763), 1,
      anon_sym_LPAREN,
  [4965] = 1,
    ACTIONS(765), 1,
      anon_sym_LPAREN,
  [4969] = 1,
    ACTIONS(767), 1,
      anon_sym_LPAREN,
  [4973] = 1,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
  [4977] = 1,
    ACTIONS(771), 1,
      anon_sym_LPAREN,
  [4981] = 1,
    ACTIONS(773), 1,
      anon_sym_LPAREN,
  [4985] = 1,
    ACTIONS(775), 1,
      anon_sym_LPAREN,
  [4989] = 1,
    ACTIONS(777), 1,
      anon_sym_LPAREN,
  [4993] = 1,
    ACTIONS(779), 1,
      anon_sym_LPAREN,
  [4997] = 1,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
  [5001] = 1,
    ACTIONS(783), 1,
      anon_sym_LBRACE,
  [5005] = 1,
    ACTIONS(785), 1,
      anon_sym_LBRACE,
  [5009] = 1,
    ACTIONS(787), 1,
      anon_sym_LBRACE,
  [5013] = 1,
    ACTIONS(789), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(27)] = 0,
  [SMALL_STATE(28)] = 66,
  [SMALL_STATE(29)] = 131,
  [SMALL_STATE(30)] = 195,
  [SMALL_STATE(31)] = 259,
  [SMALL_STATE(32)] = 319,
  [SMALL_STATE(33)] = 379,
  [SMALL_STATE(34)] = 439,
  [SMALL_STATE(35)] = 499,
  [SMALL_STATE(36)] = 559,
  [SMALL_STATE(37)] = 619,
  [SMALL_STATE(38)] = 679,
  [SMALL_STATE(39)] = 739,
  [SMALL_STATE(40)] = 799,
  [SMALL_STATE(41)] = 859,
  [SMALL_STATE(42)] = 919,
  [SMALL_STATE(43)] = 979,
  [SMALL_STATE(44)] = 1039,
  [SMALL_STATE(45)] = 1099,
  [SMALL_STATE(46)] = 1159,
  [SMALL_STATE(47)] = 1219,
  [SMALL_STATE(48)] = 1277,
  [SMALL_STATE(49)] = 1304,
  [SMALL_STATE(50)] = 1348,
  [SMALL_STATE(51)] = 1390,
  [SMALL_STATE(52)] = 1434,
  [SMALL_STATE(53)] = 1478,
  [SMALL_STATE(54)] = 1522,
  [SMALL_STATE(55)] = 1566,
  [SMALL_STATE(56)] = 1604,
  [SMALL_STATE(57)] = 1642,
  [SMALL_STATE(58)] = 1684,
  [SMALL_STATE(59)] = 1728,
  [SMALL_STATE(60)] = 1772,
  [SMALL_STATE(61)] = 1816,
  [SMALL_STATE(62)] = 1857,
  [SMALL_STATE(63)] = 1896,
  [SMALL_STATE(64)] = 1935,
  [SMALL_STATE(65)] = 1971,
  [SMALL_STATE(66)] = 2007,
  [SMALL_STATE(67)] = 2043,
  [SMALL_STATE(68)] = 2079,
  [SMALL_STATE(69)] = 2101,
  [SMALL_STATE(70)] = 2137,
  [SMALL_STATE(71)] = 2173,
  [SMALL_STATE(72)] = 2209,
  [SMALL_STATE(73)] = 2245,
  [SMALL_STATE(74)] = 2281,
  [SMALL_STATE(75)] = 2317,
  [SMALL_STATE(76)] = 2353,
  [SMALL_STATE(77)] = 2389,
  [SMALL_STATE(78)] = 2425,
  [SMALL_STATE(79)] = 2461,
  [SMALL_STATE(80)] = 2497,
  [SMALL_STATE(81)] = 2533,
  [SMALL_STATE(82)] = 2569,
  [SMALL_STATE(83)] = 2605,
  [SMALL_STATE(84)] = 2638,
  [SMALL_STATE(85)] = 2671,
  [SMALL_STATE(86)] = 2704,
  [SMALL_STATE(87)] = 2737,
  [SMALL_STATE(88)] = 2752,
  [SMALL_STATE(89)] = 2767,
  [SMALL_STATE(90)] = 2782,
  [SMALL_STATE(91)] = 2797,
  [SMALL_STATE(92)] = 2812,
  [SMALL_STATE(93)] = 2826,
  [SMALL_STATE(94)] = 2840,
  [SMALL_STATE(95)] = 2854,
  [SMALL_STATE(96)] = 2868,
  [SMALL_STATE(97)] = 2882,
  [SMALL_STATE(98)] = 2896,
  [SMALL_STATE(99)] = 2909,
  [SMALL_STATE(100)] = 2930,
  [SMALL_STATE(101)] = 2943,
  [SMALL_STATE(102)] = 2964,
  [SMALL_STATE(103)] = 2985,
  [SMALL_STATE(104)] = 2998,
  [SMALL_STATE(105)] = 3019,
  [SMALL_STATE(106)] = 3040,
  [SMALL_STATE(107)] = 3061,
  [SMALL_STATE(108)] = 3082,
  [SMALL_STATE(109)] = 3103,
  [SMALL_STATE(110)] = 3124,
  [SMALL_STATE(111)] = 3145,
  [SMALL_STATE(112)] = 3166,
  [SMALL_STATE(113)] = 3179,
  [SMALL_STATE(114)] = 3192,
  [SMALL_STATE(115)] = 3202,
  [SMALL_STATE(116)] = 3212,
  [SMALL_STATE(117)] = 3222,
  [SMALL_STATE(118)] = 3232,
  [SMALL_STATE(119)] = 3242,
  [SMALL_STATE(120)] = 3252,
  [SMALL_STATE(121)] = 3262,
  [SMALL_STATE(122)] = 3272,
  [SMALL_STATE(123)] = 3282,
  [SMALL_STATE(124)] = 3292,
  [SMALL_STATE(125)] = 3302,
  [SMALL_STATE(126)] = 3312,
  [SMALL_STATE(127)] = 3322,
  [SMALL_STATE(128)] = 3332,
  [SMALL_STATE(129)] = 3342,
  [SMALL_STATE(130)] = 3352,
  [SMALL_STATE(131)] = 3362,
  [SMALL_STATE(132)] = 3372,
  [SMALL_STATE(133)] = 3382,
  [SMALL_STATE(134)] = 3392,
  [SMALL_STATE(135)] = 3402,
  [SMALL_STATE(136)] = 3412,
  [SMALL_STATE(137)] = 3422,
  [SMALL_STATE(138)] = 3432,
  [SMALL_STATE(139)] = 3442,
  [SMALL_STATE(140)] = 3452,
  [SMALL_STATE(141)] = 3462,
  [SMALL_STATE(142)] = 3472,
  [SMALL_STATE(143)] = 3482,
  [SMALL_STATE(144)] = 3496,
  [SMALL_STATE(145)] = 3506,
  [SMALL_STATE(146)] = 3516,
  [SMALL_STATE(147)] = 3530,
  [SMALL_STATE(148)] = 3544,
  [SMALL_STATE(149)] = 3554,
  [SMALL_STATE(150)] = 3564,
  [SMALL_STATE(151)] = 3574,
  [SMALL_STATE(152)] = 3584,
  [SMALL_STATE(153)] = 3594,
  [SMALL_STATE(154)] = 3608,
  [SMALL_STATE(155)] = 3618,
  [SMALL_STATE(156)] = 3632,
  [SMALL_STATE(157)] = 3646,
  [SMALL_STATE(158)] = 3654,
  [SMALL_STATE(159)] = 3664,
  [SMALL_STATE(160)] = 3672,
  [SMALL_STATE(161)] = 3682,
  [SMALL_STATE(162)] = 3696,
  [SMALL_STATE(163)] = 3710,
  [SMALL_STATE(164)] = 3724,
  [SMALL_STATE(165)] = 3738,
  [SMALL_STATE(166)] = 3752,
  [SMALL_STATE(167)] = 3766,
  [SMALL_STATE(168)] = 3776,
  [SMALL_STATE(169)] = 3786,
  [SMALL_STATE(170)] = 3800,
  [SMALL_STATE(171)] = 3808,
  [SMALL_STATE(172)] = 3822,
  [SMALL_STATE(173)] = 3836,
  [SMALL_STATE(174)] = 3850,
  [SMALL_STATE(175)] = 3860,
  [SMALL_STATE(176)] = 3876,
  [SMALL_STATE(177)] = 3884,
  [SMALL_STATE(178)] = 3898,
  [SMALL_STATE(179)] = 3912,
  [SMALL_STATE(180)] = 3926,
  [SMALL_STATE(181)] = 3940,
  [SMALL_STATE(182)] = 3954,
  [SMALL_STATE(183)] = 3968,
  [SMALL_STATE(184)] = 3982,
  [SMALL_STATE(185)] = 3996,
  [SMALL_STATE(186)] = 4010,
  [SMALL_STATE(187)] = 4018,
  [SMALL_STATE(188)] = 4026,
  [SMALL_STATE(189)] = 4034,
  [SMALL_STATE(190)] = 4042,
  [SMALL_STATE(191)] = 4056,
  [SMALL_STATE(192)] = 4066,
  [SMALL_STATE(193)] = 4080,
  [SMALL_STATE(194)] = 4088,
  [SMALL_STATE(195)] = 4096,
  [SMALL_STATE(196)] = 4104,
  [SMALL_STATE(197)] = 4112,
  [SMALL_STATE(198)] = 4126,
  [SMALL_STATE(199)] = 4134,
  [SMALL_STATE(200)] = 4142,
  [SMALL_STATE(201)] = 4150,
  [SMALL_STATE(202)] = 4158,
  [SMALL_STATE(203)] = 4168,
  [SMALL_STATE(204)] = 4176,
  [SMALL_STATE(205)] = 4184,
  [SMALL_STATE(206)] = 4192,
  [SMALL_STATE(207)] = 4200,
  [SMALL_STATE(208)] = 4210,
  [SMALL_STATE(209)] = 4224,
  [SMALL_STATE(210)] = 4232,
  [SMALL_STATE(211)] = 4240,
  [SMALL_STATE(212)] = 4248,
  [SMALL_STATE(213)] = 4256,
  [SMALL_STATE(214)] = 4264,
  [SMALL_STATE(215)] = 4272,
  [SMALL_STATE(216)] = 4280,
  [SMALL_STATE(217)] = 4290,
  [SMALL_STATE(218)] = 4298,
  [SMALL_STATE(219)] = 4306,
  [SMALL_STATE(220)] = 4314,
  [SMALL_STATE(221)] = 4322,
  [SMALL_STATE(222)] = 4330,
  [SMALL_STATE(223)] = 4338,
  [SMALL_STATE(224)] = 4346,
  [SMALL_STATE(225)] = 4354,
  [SMALL_STATE(226)] = 4362,
  [SMALL_STATE(227)] = 4370,
  [SMALL_STATE(228)] = 4378,
  [SMALL_STATE(229)] = 4386,
  [SMALL_STATE(230)] = 4394,
  [SMALL_STATE(231)] = 4402,
  [SMALL_STATE(232)] = 4410,
  [SMALL_STATE(233)] = 4418,
  [SMALL_STATE(234)] = 4428,
  [SMALL_STATE(235)] = 4442,
  [SMALL_STATE(236)] = 4456,
  [SMALL_STATE(237)] = 4466,
  [SMALL_STATE(238)] = 4480,
  [SMALL_STATE(239)] = 4494,
  [SMALL_STATE(240)] = 4510,
  [SMALL_STATE(241)] = 4524,
  [SMALL_STATE(242)] = 4532,
  [SMALL_STATE(243)] = 4546,
  [SMALL_STATE(244)] = 4557,
  [SMALL_STATE(245)] = 4563,
  [SMALL_STATE(246)] = 4573,
  [SMALL_STATE(247)] = 4579,
  [SMALL_STATE(248)] = 4585,
  [SMALL_STATE(249)] = 4595,
  [SMALL_STATE(250)] = 4605,
  [SMALL_STATE(251)] = 4611,
  [SMALL_STATE(252)] = 4621,
  [SMALL_STATE(253)] = 4627,
  [SMALL_STATE(254)] = 4637,
  [SMALL_STATE(255)] = 4647,
  [SMALL_STATE(256)] = 4653,
  [SMALL_STATE(257)] = 4663,
  [SMALL_STATE(258)] = 4669,
  [SMALL_STATE(259)] = 4675,
  [SMALL_STATE(260)] = 4681,
  [SMALL_STATE(261)] = 4691,
  [SMALL_STATE(262)] = 4697,
  [SMALL_STATE(263)] = 4704,
  [SMALL_STATE(264)] = 4711,
  [SMALL_STATE(265)] = 4718,
  [SMALL_STATE(266)] = 4725,
  [SMALL_STATE(267)] = 4729,
  [SMALL_STATE(268)] = 4733,
  [SMALL_STATE(269)] = 4737,
  [SMALL_STATE(270)] = 4741,
  [SMALL_STATE(271)] = 4745,
  [SMALL_STATE(272)] = 4749,
  [SMALL_STATE(273)] = 4753,
  [SMALL_STATE(274)] = 4757,
  [SMALL_STATE(275)] = 4761,
  [SMALL_STATE(276)] = 4765,
  [SMALL_STATE(277)] = 4769,
  [SMALL_STATE(278)] = 4773,
  [SMALL_STATE(279)] = 4777,
  [SMALL_STATE(280)] = 4781,
  [SMALL_STATE(281)] = 4785,
  [SMALL_STATE(282)] = 4789,
  [SMALL_STATE(283)] = 4793,
  [SMALL_STATE(284)] = 4797,
  [SMALL_STATE(285)] = 4801,
  [SMALL_STATE(286)] = 4805,
  [SMALL_STATE(287)] = 4809,
  [SMALL_STATE(288)] = 4813,
  [SMALL_STATE(289)] = 4817,
  [SMALL_STATE(290)] = 4821,
  [SMALL_STATE(291)] = 4825,
  [SMALL_STATE(292)] = 4829,
  [SMALL_STATE(293)] = 4833,
  [SMALL_STATE(294)] = 4837,
  [SMALL_STATE(295)] = 4841,
  [SMALL_STATE(296)] = 4845,
  [SMALL_STATE(297)] = 4849,
  [SMALL_STATE(298)] = 4853,
  [SMALL_STATE(299)] = 4857,
  [SMALL_STATE(300)] = 4861,
  [SMALL_STATE(301)] = 4865,
  [SMALL_STATE(302)] = 4869,
  [SMALL_STATE(303)] = 4873,
  [SMALL_STATE(304)] = 4877,
  [SMALL_STATE(305)] = 4881,
  [SMALL_STATE(306)] = 4885,
  [SMALL_STATE(307)] = 4889,
  [SMALL_STATE(308)] = 4893,
  [SMALL_STATE(309)] = 4897,
  [SMALL_STATE(310)] = 4901,
  [SMALL_STATE(311)] = 4905,
  [SMALL_STATE(312)] = 4909,
  [SMALL_STATE(313)] = 4913,
  [SMALL_STATE(314)] = 4917,
  [SMALL_STATE(315)] = 4921,
  [SMALL_STATE(316)] = 4925,
  [SMALL_STATE(317)] = 4929,
  [SMALL_STATE(318)] = 4933,
  [SMALL_STATE(319)] = 4937,
  [SMALL_STATE(320)] = 4941,
  [SMALL_STATE(321)] = 4945,
  [SMALL_STATE(322)] = 4949,
  [SMALL_STATE(323)] = 4953,
  [SMALL_STATE(324)] = 4957,
  [SMALL_STATE(325)] = 4961,
  [SMALL_STATE(326)] = 4965,
  [SMALL_STATE(327)] = 4969,
  [SMALL_STATE(328)] = 4973,
  [SMALL_STATE(329)] = 4977,
  [SMALL_STATE(330)] = 4981,
  [SMALL_STATE(331)] = 4985,
  [SMALL_STATE(332)] = 4989,
  [SMALL_STATE(333)] = 4993,
  [SMALL_STATE(334)] = 4997,
  [SMALL_STATE(335)] = 5001,
  [SMALL_STATE(336)] = 5005,
  [SMALL_STATE(337)] = 5009,
  [SMALL_STATE(338)] = 5013,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_command_repeat2, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_command_repeat1, 2),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_command_repeat1, 2), SHIFT_REPEAT(27),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_foreach_command_repeat1, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_command_repeat1, 1),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_command_repeat1, 2), SHIFT_REPEAT(48),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_argument, 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(87),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(99),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(301),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(299),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(56),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_condition_repeat1, 2), SHIFT_REPEAT(289),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_condition_repeat1, 2), SHIFT_REPEAT(322),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_condition_repeat1, 2), SHIFT_REPEAT(321),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_condition_repeat1, 2),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_condition_repeat1, 2), SHIFT_REPEAT(330),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_condition_repeat1, 2), SHIFT_REPEAT(329),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_condition_repeat1, 2), SHIFT_REPEAT(317),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(93),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(111),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(335),
  [305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(336),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(62),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_element_repeat1, 2), SHIFT_REPEAT(272),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_element, 1),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(113),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(110),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(337),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(338),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_argument_repeat1, 2), SHIFT_REPEAT(64),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_command_repeat1, 2), SHIFT_REPEAT(68),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(289),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(330),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(329),
  [371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(328),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [376] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(331),
  [379] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(324),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 1),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_ref, 1),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_var, 4),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_var, 4),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_var, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(141),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(102),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endif_command, 4),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_command, 3),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endforeach_command, 4),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_command, 5),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_command, 3),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endwhile_command, 3),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endforeach_command, 3),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endif_command, 3),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_command, 4),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_normal_command, 6),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 5),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_loop, 3),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_loop, 3),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elseif_command, 4),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_condition, 3),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endwhile_command, 4),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_command, 4),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endif_command, 5),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endforeach_command, 5),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 6),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elseif_command, 5),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_command, 5),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elseif_command, 6),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_condition, 2),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_loop, 2),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_loop, 2),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endwhile_command, 5),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 1),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_command, 4),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endwhile_command, 3),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endforeach_command, 4),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endif_command, 5),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endforeach_command, 5),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endwhile_command, 5),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endwhile_command, 4),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition, 2),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endif_command, 4),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_command, 6),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach_loop, 2),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_command, 6),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_loop, 2),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [510] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_normal_command_repeat1, 2), SHIFT_REPEAT(47),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_normal_command_repeat1, 2),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 5),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreach_loop, 3),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_command, 5),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [527] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_foreach_command_repeat1, 2), SHIFT_REPEAT(28),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_foreach_command_repeat1, 2),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_loop, 3),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_command, 5),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [552] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_command_repeat2, 2), SHIFT_REPEAT(17),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_command_repeat2, 2),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_foreach_command, 4),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 6),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition, 3),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 3),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endforeach_command, 3),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endif_command, 3),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_command, 4),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_command, 4),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bracket_open_repeat1, 2),
  [587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bracket_open_repeat1, 2), SHIFT_REPEAT(243),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_argument, 3),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_close, 2),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_content, 1),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_argument, 2),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_argument, 3),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [616] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bracket_content_repeat1, 2), SHIFT_REPEAT(254),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bracket_content_repeat1, 2),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_argument, 2),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_close, 3),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_open, 3),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_open, 3),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_open, 2),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bracket_open, 2),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_close, 3),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_argument, 3),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bracket_close, 2),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_argument, 3),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_argument, 2),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_argument, 2),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [759] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
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
