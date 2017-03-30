#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define LANGUAGE_VERSION 2
#define STATE_COUNT 769
#define SYMBOL_COUNT 92
#define TOKEN_COUNT 55
#define EXTERNAL_TOKEN_COUNT 0

enum {
  anon_sym_LF = 1,
  anon_sym_SEMI = 2,
  anon_sym_fn = 3,
  anon_sym_DASH_GT = 4,
  anon_sym_let = 5,
  anon_sym_COLON = 6,
  anon_sym_EQ = 7,
  anon_sym_LPAREN = 8,
  anon_sym_COMMA = 9,
  anon_sym_RPAREN = 10,
  anon_sym__ = 11,
  anon_sym_u8 = 12,
  anon_sym_i8 = 13,
  anon_sym_u16 = 14,
  anon_sym_i16 = 15,
  anon_sym_u32 = 16,
  anon_sym_i32 = 17,
  anon_sym_u64 = 18,
  anon_sym_i64 = 19,
  anon_sym_isize = 20,
  anon_sym_usize = 21,
  anon_sym_f32 = 22,
  anon_sym_f64 = 23,
  sym_mutable_specifier = 24,
  aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH = 25,
  aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH = 26,
  aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH = 27,
  aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH = 28,
  aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH = 29,
  anon_sym_AMP_AMP = 30,
  anon_sym_PIPE_PIPE = 31,
  anon_sym_return = 32,
  anon_sym_LBRACK = 33,
  anon_sym_RBRACK = 34,
  anon_sym_if = 35,
  anon_sym_else = 36,
  anon_sym_match = 37,
  anon_sym_LBRACE = 38,
  anon_sym_RBRACE = 39,
  anon_sym_EQ_GT = 40,
  anon_sym_PIPE = 41,
  sym_number_literal = 42,
  anon_sym_DQUOTE = 43,
  anon_sym_BSLASH_DQUOTE = 44,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH = 45,
  sym_raw_string_literal = 46,
  anon_sym_SQUOTE = 47,
  anon_sym_BSLASH_SQUOTE = 48,
  aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_RBRACK_SLASH = 49,
  sym_byte_escape = 50,
  sym_boolean_literal = 51,
  sym_line_comment = 52,
  sym_block_comment = 53,
  sym_identifier = 54,
  sym_source_file = 55,
  sym__statement_list = 56,
  sym__statement = 57,
  sym__declaration_statement = 58,
  sym__control_flow_statement = 59,
  sym__item = 60,
  sym_function_item = 61,
  sym_let_declaration = 62,
  sym__pattern = 63,
  sym_type_expression = 64,
  sym__expression_statement = 65,
  sym__expression = 66,
  sym_unary_expression = 67,
  sym_binary_expression = 68,
  sym_assignment_expression = 69,
  sym_return_expression = 70,
  sym_call_expression = 71,
  sym_arguments = 72,
  sym_array_expression = 73,
  sym_if_expression = 74,
  sym_if_let_expression = 75,
  sym_else_tail = 76,
  sym_match_expression = 77,
  sym_match_arm = 78,
  sym_match_pattern = 79,
  sym__literal = 80,
  sym_string_literal = 81,
  sym_char_literal = 82,
  sym_parameters = 83,
  sym_block = 84,
  sym_empty_statement = 85,
  aux_sym_source_file_repeat1 = 86,
  aux_sym__pattern_repeat1 = 87,
  aux_sym_match_expression_repeat1 = 88,
  aux_sym_match_pattern_repeat1 = 89,
  aux_sym_string_literal_repeat1 = 90,
  aux_sym_parameters_repeat1 = 91,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [anon_sym_fn] = "fn",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_let] = "let",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym__] = "_",
  [anon_sym_u8] = "u8",
  [anon_sym_i8] = "i8",
  [anon_sym_u16] = "u16",
  [anon_sym_i16] = "i16",
  [anon_sym_u32] = "u32",
  [anon_sym_i32] = "i32",
  [anon_sym_u64] = "u64",
  [anon_sym_i64] = "i64",
  [anon_sym_isize] = "isize",
  [anon_sym_usize] = "usize",
  [anon_sym_f32] = "f32",
  [anon_sym_f64] = "f64",
  [sym_mutable_specifier] = "mutable_specifier",
  [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = "/(-|*|!)/",
  [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = "/(*|/|%)/",
  [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = "/(+|-)/",
  [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = "/(==|!=|<|<=|>|>=)/",
  [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = "/(<<|>>)/",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_return] = "return",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_match] = "match",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_PIPE] = "|",
  [sym_number_literal] = "number_literal",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_BSLASH_DQUOTE] = "\\\"",
  [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = "/[^\"]/",
  [sym_raw_string_literal] = "raw_string_literal",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_BSLASH_SQUOTE] = "\\'",
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_RBRACK_SLASH] = "/[^\\\\']/",
  [sym_byte_escape] = "byte_escape",
  [sym_boolean_literal] = "boolean_literal",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym__statement_list] = "_statement_list",
  [sym__statement] = "_statement",
  [sym__declaration_statement] = "_declaration_statement",
  [sym__control_flow_statement] = "_control_flow_statement",
  [sym__item] = "_item",
  [sym_function_item] = "function_item",
  [sym_let_declaration] = "let_declaration",
  [sym__pattern] = "_pattern",
  [sym_type_expression] = "type_expression",
  [sym__expression_statement] = "_expression_statement",
  [sym__expression] = "_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_assignment_expression] = "assignment_expression",
  [sym_return_expression] = "return_expression",
  [sym_call_expression] = "call_expression",
  [sym_arguments] = "arguments",
  [sym_array_expression] = "array_expression",
  [sym_if_expression] = "if_expression",
  [sym_if_let_expression] = "if_let_expression",
  [sym_else_tail] = "else_tail",
  [sym_match_expression] = "match_expression",
  [sym_match_arm] = "match_arm",
  [sym_match_pattern] = "match_pattern",
  [sym__literal] = "_literal",
  [sym_string_literal] = "string_literal",
  [sym_char_literal] = "char_literal",
  [sym_parameters] = "parameters",
  [sym_block] = "block",
  [sym_empty_statement] = "empty_statement",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__pattern_repeat1] = "_pattern_repeat1",
  [aux_sym_match_expression_repeat1] = "match_expression_repeat1",
  [aux_sym_match_pattern_repeat1] = "match_pattern_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[SYMBOL_COUNT] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [anon_sym_LF] = {
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
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_let] = {
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
  [anon_sym_EQ] = {
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
  [anon_sym_COMMA] = {
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
  [anon_sym__] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_u8] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_i8] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_u16] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_i16] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_u32] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_i32] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_u64] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_i64] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_isize] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_usize] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_f32] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_f64] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [sym_mutable_specifier] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = {
    .visible = false,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = {
    .visible = false,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = {
    .visible = false,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = {
    .visible = false,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = {
    .visible = false,
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
  [anon_sym_return] = {
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
  [anon_sym_if] = {
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
  [anon_sym_match] = {
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
  [anon_sym_EQ_GT] = {
    .visible = true,
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
  [sym_number_literal] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_BSLASH_DQUOTE] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [sym_raw_string_literal] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_BSLASH_SQUOTE] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [sym_byte_escape] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
    .structural = false,
    .extra = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
    .structural = false,
    .extra = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym__statement_list] = {
    .visible = false,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym__declaration_statement] = {
    .visible = false,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym__control_flow_statement] = {
    .visible = false,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym__item] = {
    .visible = false,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_function_item] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_let_declaration] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym__pattern] = {
    .visible = false,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_type_expression] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym__expression_statement] = {
    .visible = false,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_assignment_expression] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_return_expression] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_array_expression] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_if_expression] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_if_let_expression] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_else_tail] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_match_expression] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_match_arm] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_match_pattern] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_char_literal] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_empty_statement] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [aux_sym__pattern_repeat1] = {
    .visible = false,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [aux_sym_match_expression_repeat1] = {
    .visible = false,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [aux_sym_match_pattern_repeat1] = {
    .visible = false,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
    .structural = true,
    .extra = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        ADVANCE(2);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          (lookahead == 'j') ||
          (lookahead == 'k') ||
          ('n' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('v' <= lookahead && lookahead <= 'z'))
        ADVANCE(6);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(17);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == '\\')
        ADVANCE(49);
      if (lookahead == ']')
        ADVANCE(55);
      if (lookahead == '_')
        ADVANCE(56);
      if (lookahead == 'e')
        ADVANCE(57);
      if (lookahead == 'f')
        ADVANCE(61);
      if (lookahead == 'i')
        ADVANCE(71);
      if (lookahead == 'l')
        ADVANCE(84);
      if (lookahead == 'm')
        ADVANCE(87);
      if (lookahead == 'r')
        ADVANCE(94);
      if (lookahead == 't')
        ADVANCE(115);
      if (lookahead == 'u')
        ADVANCE(117);
      if (lookahead == '{')
        ADVANCE(129);
      if (lookahead == '|')
        ADVANCE(130);
      if (lookahead == '}')
        ADVANCE(132);
      if (!((lookahead == 0) ||
          (lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (' ' <= lookahead && lookahead <= '\"') ||
          ('$' <= lookahead && lookahead <= '-') ||
          ('/' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= ']') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= '}')))
        ADVANCE(2);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH);
      if (lookahead == '=')
        ADVANCE(4);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '&')
        ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH);
      if (lookahead == '>')
        ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH);
      if (lookahead == '*')
        ADVANCE(20);
      if (lookahead == '/')
        ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == '*')
        ADVANCE(21);
      if (!((lookahead == 0) ||
          (lookahead == '*')))
        ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '*')
        ADVANCE(21);
      if (lookahead == '/')
        ADVANCE(22);
      if (!((lookahead == 0) ||
          (lookahead == '*') ||
          (lookahead == '/')))
        ADVANCE(20);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_line_comment);
      if (!((lookahead == 0) ||
          (lookahead == '\n')))
        ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(25);
      if ('0' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == 'E')
        ADVANCE(32);
      if (lookahead == '_')
        ADVANCE(31);
      if (lookahead == 'b')
        ADVANCE(38);
      if (lookahead == 'e')
        ADVANCE(32);
      if (lookahead == 'i')
        ADVANCE(33);
      if (lookahead == 'o')
        ADVANCE(39);
      if (lookahead == 'u')
        ADVANCE(33);
      if (lookahead == 'x')
        ADVANCE(40);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_number_literal);
      if ('0' <= lookahead && lookahead <= '9')
        ADVANCE(26);
      if (lookahead == 'f')
        ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_number_literal);
      if ('0' <= lookahead && lookahead <= '9')
        ADVANCE(26);
      if (lookahead == '_')
        ADVANCE(26);
      if (lookahead == 'f')
        ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == '3')
        ADVANCE(28);
      if (lookahead == '6')
        ADVANCE(30);
      END_STATE();
    case 28:
      if (lookahead == '2')
        ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_number_literal);
      END_STATE();
    case 30:
      if (lookahead == '4')
        ADVANCE(29);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(25);
      if ('0' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == 'E')
        ADVANCE(32);
      if (lookahead == '_')
        ADVANCE(31);
      if (lookahead == 'e')
        ADVANCE(32);
      if (lookahead == 'i')
        ADVANCE(33);
      if (lookahead == 'u')
        ADVANCE(33);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+')
        ADVANCE(26);
      if (lookahead == '-')
        ADVANCE(26);
      if ('0' <= lookahead && lookahead <= '9')
        ADVANCE(26);
      if (lookahead == '_')
        ADVANCE(26);
      if (lookahead == 'f')
        ADVANCE(27);
      END_STATE();
    case 33:
      if (lookahead == '1')
        ADVANCE(34);
      if (lookahead == '3')
        ADVANCE(28);
      if (lookahead == '6')
        ADVANCE(30);
      if (lookahead == '8')
        ADVANCE(29);
      if (lookahead == 's')
        ADVANCE(35);
      END_STATE();
    case 34:
      if (lookahead == '6')
        ADVANCE(29);
      END_STATE();
    case 35:
      if (lookahead == 'i')
        ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'z')
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'e')
        ADVANCE(29);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_number_literal);
      if ((lookahead == '0') ||
          (lookahead == '1'))
        ADVANCE(38);
      if (lookahead == '_')
        ADVANCE(38);
      if (lookahead == 'i')
        ADVANCE(33);
      if (lookahead == 'u')
        ADVANCE(33);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_number_literal);
      if ('0' <= lookahead && lookahead <= '7')
        ADVANCE(39);
      if (lookahead == '_')
        ADVANCE(39);
      if (lookahead == 'i')
        ADVANCE(33);
      if (lookahead == 'u')
        ADVANCE(33);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(40);
      if (lookahead == '_')
        ADVANCE(40);
      if (lookahead == 'i')
        ADVANCE(33);
      if (lookahead == 'u')
        ADVANCE(33);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH);
      if (lookahead == '<')
        ADVANCE(44);
      if (lookahead == '=')
        ADVANCE(4);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(4);
      if (lookahead == '>')
        ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH);
      if (lookahead == '=')
        ADVANCE(4);
      if (lookahead == '>')
        ADVANCE(44);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '\"')
        ADVANCE(50);
      if (lookahead == '\'')
        ADVANCE(51);
      if (lookahead == '0')
        ADVANCE(52);
      if (lookahead == '\\')
        ADVANCE(52);
      if (lookahead == 'n')
        ADVANCE(52);
      if (lookahead == 'r')
        ADVANCE(52);
      if (lookahead == 't')
        ADVANCE(52);
      if (lookahead == 'x')
        ADVANCE(53);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_BSLASH_SQUOTE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_byte_escape);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(54);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(52);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym__);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'l')
        ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 's')
        ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'e')
        ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_else);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '2') ||
          (lookahead == '4') ||
          (lookahead == '5') ||
          ('7' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('b' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '3')
        ADVANCE(62);
      if (lookahead == '6')
        ADVANCE(64);
      if (lookahead == 'a')
        ADVANCE(66);
      if (lookahead == 'n')
        ADVANCE(70);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          (lookahead == '0') ||
          (lookahead == '1') ||
          ('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '2')
        ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_f32);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '3') ||
          ('5' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '4')
        ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_f64);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'l')
        ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 's')
        ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'e')
        ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_boolean_literal);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_fn);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if ((lookahead == '$') ||
          (lookahead == '0') ||
          (lookahead == '2') ||
          (lookahead == '4') ||
          (lookahead == '5') ||
          (lookahead == '7') ||
          (lookahead == '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '1')
        ADVANCE(72);
      if (lookahead == '3')
        ADVANCE(74);
      if (lookahead == '6')
        ADVANCE(76);
      if (lookahead == '8')
        ADVANCE(78);
      if (lookahead == 'f')
        ADVANCE(79);
      if (lookahead == 's')
        ADVANCE(80);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '5') ||
          ('7' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '6')
        ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_i16);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          (lookahead == '0') ||
          (lookahead == '1') ||
          ('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '2')
        ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_i32);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '3') ||
          ('5' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '4')
        ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_i64);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_i8);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_if);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'i')
        ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(7);
      if (lookahead == 'z')
        ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'e')
        ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_isize);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'e')
        ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 't')
        ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_let);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('b' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'a')
        ADVANCE(88);
      if (lookahead == 'u')
        ADVANCE(92);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 't')
        ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          (lookahead == 'a') ||
          (lookahead == 'b') ||
          ('d' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'c')
        ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'g') ||
          ('i' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'h')
        ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_match);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 't')
        ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_mutable_specifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '#')
        ADVANCE(95);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'e')
        ADVANCE(110);
      END_STATE();
    case 95:
      if (lookahead == '\"')
        ADVANCE(96);
      if (lookahead == '#')
        ADVANCE(99);
      END_STATE();
    case 96:
      if (lookahead == '\"')
        ADVANCE(97);
      if (!((lookahead == 0) ||
          (lookahead == '\n') ||
          (lookahead == '\"')))
        ADVANCE(96);
      END_STATE();
    case 97:
      if (lookahead == '\"')
        ADVANCE(97);
      if (lookahead == '#')
        ADVANCE(98);
      if (!((lookahead == 0) ||
          (lookahead == '\n') ||
          (lookahead == '\"') ||
          (lookahead == '#')))
        ADVANCE(96);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_raw_string_literal);
      if (lookahead == '\"')
        ADVANCE(97);
      if (!((lookahead == 0) ||
          (lookahead == '\n') ||
          (lookahead == '\"')))
        ADVANCE(96);
      END_STATE();
    case 99:
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '#')
        ADVANCE(104);
      END_STATE();
    case 100:
      if (lookahead == '\"')
        ADVANCE(101);
      if (!((lookahead == 0) ||
          (lookahead == '\n') ||
          (lookahead == '\"')))
        ADVANCE(100);
      END_STATE();
    case 101:
      if (lookahead == '\"')
        ADVANCE(101);
      if (lookahead == '#')
        ADVANCE(102);
      if (!((lookahead == 0) ||
          (lookahead == '\n') ||
          (lookahead == '\"') ||
          (lookahead == '#')))
        ADVANCE(100);
      END_STATE();
    case 102:
      if (lookahead == '\"')
        ADVANCE(101);
      if (lookahead == '#')
        ADVANCE(103);
      if (!((lookahead == 0) ||
          (lookahead == '\n') ||
          (lookahead == '\"') ||
          (lookahead == '#')))
        ADVANCE(100);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_raw_string_literal);
      if (lookahead == '\"')
        ADVANCE(101);
      if (!((lookahead == 0) ||
          (lookahead == '\n') ||
          (lookahead == '\"')))
        ADVANCE(100);
      END_STATE();
    case 104:
      if (lookahead == '\"')
        ADVANCE(105);
      END_STATE();
    case 105:
      if (lookahead == '\"')
        ADVANCE(106);
      if (!((lookahead == 0) ||
          (lookahead == '\n') ||
          (lookahead == '\"')))
        ADVANCE(105);
      END_STATE();
    case 106:
      if (lookahead == '\"')
        ADVANCE(106);
      if (lookahead == '#')
        ADVANCE(107);
      if (!((lookahead == 0) ||
          (lookahead == '\n') ||
          (lookahead == '\"') ||
          (lookahead == '#')))
        ADVANCE(105);
      END_STATE();
    case 107:
      if (lookahead == '\"')
        ADVANCE(106);
      if (lookahead == '#')
        ADVANCE(108);
      if (!((lookahead == 0) ||
          (lookahead == '\n') ||
          (lookahead == '\"') ||
          (lookahead == '#')))
        ADVANCE(105);
      END_STATE();
    case 108:
      if (lookahead == '\"')
        ADVANCE(106);
      if (lookahead == '#')
        ADVANCE(109);
      if (!((lookahead == 0) ||
          (lookahead == '\n') ||
          (lookahead == '\"') ||
          (lookahead == '#')))
        ADVANCE(105);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_raw_string_literal);
      if (lookahead == '\"')
        ADVANCE(106);
      if (!((lookahead == 0) ||
          (lookahead == '\n') ||
          (lookahead == '\"')))
        ADVANCE(105);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 't')
        ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'u')
        ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'r')
        ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'n')
        ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_return);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'r')
        ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'u')
        ADVANCE(68);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if ((lookahead == '$') ||
          (lookahead == '0') ||
          (lookahead == '2') ||
          (lookahead == '4') ||
          (lookahead == '5') ||
          (lookahead == '7') ||
          (lookahead == '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '1')
        ADVANCE(118);
      if (lookahead == '3')
        ADVANCE(120);
      if (lookahead == '6')
        ADVANCE(122);
      if (lookahead == '8')
        ADVANCE(124);
      if (lookahead == 's')
        ADVANCE(125);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '5') ||
          ('7' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '6')
        ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_u16);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          (lookahead == '0') ||
          (lookahead == '1') ||
          ('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '2')
        ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_u32);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '3') ||
          ('5' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '4')
        ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_u64);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_u8);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'i')
        ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(7);
      if (lookahead == 'z')
        ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'e')
        ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_usize);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|')
        ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 133:
      if (lookahead == 0)
        ADVANCE(1);
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(133);
      if (lookahead == '!')
        ADVANCE(14);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          (lookahead == 'j') ||
          (lookahead == 'k') ||
          ('n' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(134);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == 'f')
        ADVANCE(135);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'l')
        ADVANCE(137);
      if (lookahead == 'm')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      END_STATE();
    case 134:
      if (lookahead == '*')
        ADVANCE(20);
      if (lookahead == '/')
        ADVANCE(23);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('b' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'a')
        ADVANCE(66);
      if (lookahead == 'n')
        ADVANCE(70);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'f')
        ADVANCE(79);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'e')
        ADVANCE(85);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'a')
        ADVANCE(88);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#')
        ADVANCE(95);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'e')
        ADVANCE(110);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'r')
        ADVANCE(116);
      END_STATE();
    case 141:
      if (lookahead == 0)
        ADVANCE(1);
      if ((lookahead == '\t') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(141);
      if (lookahead == '\n')
        ADVANCE(142);
      if (lookahead == '!')
        ADVANCE(14);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          (lookahead == 'j') ||
          (lookahead == 'k') ||
          ('n' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(134);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == 'f')
        ADVANCE(135);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'l')
        ADVANCE(137);
      if (lookahead == 'm')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      if (lookahead == '}')
        ADVANCE(132);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 143:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(143);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '/')
        ADVANCE(134);
      END_STATE();
    case 144:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(144);
      if (lookahead == '!')
        ADVANCE(14);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          ('j' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(134);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == '_')
        ADVANCE(56);
      if (lookahead == 'f')
        ADVANCE(145);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'm')
        ADVANCE(146);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'a')
        ADVANCE(66);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('b' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'a')
        ADVANCE(88);
      if (lookahead == 'u')
        ADVANCE(92);
      END_STATE();
    case 147:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(147);
      if (lookahead == '!')
        ADVANCE(14);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          ('j' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(134);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == 'f')
        ADVANCE(145);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'm')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      END_STATE();
    case 148:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(148);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          ('j' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == 'f')
        ADVANCE(145);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'm')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 149:
      if (lookahead == '&')
        ADVANCE(10);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(4);
      END_STATE();
    case 151:
      if (lookahead == '|')
        ADVANCE(131);
      END_STATE();
    case 152:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(152);
      if (lookahead == '!')
        ADVANCE(14);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          ('j' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(134);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == ']')
        ADVANCE(55);
      if (lookahead == 'f')
        ADVANCE(145);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'm')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      END_STATE();
    case 153:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(153);
      if (lookahead == '!')
        ADVANCE(14);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          (lookahead == 'j') ||
          (lookahead == 'k') ||
          ('n' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(134);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == 'f')
        ADVANCE(145);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'l')
        ADVANCE(137);
      if (lookahead == 'm')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      END_STATE();
    case 154:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(154);
      if (lookahead == '!')
        ADVANCE(155);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == ']')
        ADVANCE(55);
      if (lookahead == 'i')
        ADVANCE(156);
      if (lookahead == '{')
        ADVANCE(129);
      if (lookahead == '|')
        ADVANCE(130);
      if (lookahead == '}')
        ADVANCE(132);
      END_STATE();
    case 155:
      if (lookahead == '=')
        ADVANCE(4);
      END_STATE();
    case 156:
      if (lookahead == 'f')
        ADVANCE(157);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 158:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(159);
      if (lookahead == '\\')
        ADVANCE(160);
      if (!((lookahead == 0) ||
          (lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' ') ||
          (lookahead == '\"') ||
          (lookahead == '/') ||
          (lookahead == '\\')))
        ADVANCE(2);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(20);
      if (lookahead == '/')
        ADVANCE(23);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '\"')
        ADVANCE(50);
      if (lookahead == '0')
        ADVANCE(52);
      if (lookahead == '\\')
        ADVANCE(52);
      if (lookahead == 'n')
        ADVANCE(52);
      if (lookahead == 'r')
        ADVANCE(52);
      if (lookahead == 't')
        ADVANCE(52);
      if (lookahead == 'x')
        ADVANCE(53);
      END_STATE();
    case 161:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        ADVANCE(162);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(163);
      if (lookahead == '\\')
        ADVANCE(164);
      if (!((lookahead == 0) ||
          (lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' ') ||
          (lookahead == '\'') ||
          (lookahead == '/') ||
          (lookahead == '\\')))
        ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_RBRACK_SLASH);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(20);
      if (lookahead == '/')
        ADVANCE(23);
      END_STATE();
    case 164:
      if (lookahead == '\'')
        ADVANCE(51);
      if (lookahead == '0')
        ADVANCE(52);
      if (lookahead == '\\')
        ADVANCE(52);
      if (lookahead == 'n')
        ADVANCE(52);
      if (lookahead == 'r')
        ADVANCE(52);
      if (lookahead == 't')
        ADVANCE(52);
      if (lookahead == 'x')
        ADVANCE(53);
      END_STATE();
    case 165:
      if (lookahead == 0)
        ADVANCE(1);
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(165);
      if (lookahead == '/')
        ADVANCE(134);
      END_STATE();
    case 166:
      if (lookahead == 0)
        ADVANCE(1);
      if ((lookahead == '\t') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(166);
      if (lookahead == '\n')
        ADVANCE(142);
      if (lookahead == '!')
        ADVANCE(14);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          (lookahead == 'j') ||
          (lookahead == 'k') ||
          ('n' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(134);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == 'f')
        ADVANCE(135);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'l')
        ADVANCE(137);
      if (lookahead == 'm')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      END_STATE();
    case 167:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(167);
      if (lookahead == '!')
        ADVANCE(155);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 168:
      if (lookahead == 0)
        ADVANCE(1);
      if ((lookahead == '\t') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(168);
      if (lookahead == '\n')
        ADVANCE(142);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          (lookahead == 'j') ||
          (lookahead == 'k') ||
          ('n' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == 'f')
        ADVANCE(135);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'l')
        ADVANCE(137);
      if (lookahead == 'm')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      if (lookahead == '|')
        ADVANCE(151);
      if (lookahead == '}')
        ADVANCE(132);
      END_STATE();
    case 169:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(169);
      if (lookahead == '!')
        ADVANCE(14);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          ('j' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(134);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == 'f')
        ADVANCE(145);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'm')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      END_STATE();
    case 170:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(170);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          ('j' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == 'f')
        ADVANCE(145);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'm')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      if (lookahead == '{')
        ADVANCE(129);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 171:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(171);
      if (lookahead == '!')
        ADVANCE(155);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '{')
        ADVANCE(129);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 172:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(172);
      if (lookahead == '!')
        ADVANCE(14);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          ('j' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(134);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == '_')
        ADVANCE(56);
      if (lookahead == 'f')
        ADVANCE(145);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'm')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      if (lookahead == '}')
        ADVANCE(132);
      END_STATE();
    case 173:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(173);
      if (lookahead == '/')
        ADVANCE(134);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '=')
        ADVANCE(174);
      if (lookahead == 'i')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(175);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>')
        ADVANCE(46);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 176:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(176);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          ('j' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == 'f')
        ADVANCE(145);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'm')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      if (lookahead == '|')
        ADVANCE(130);
      END_STATE();
    case 177:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(177);
      if (lookahead == '/')
        ADVANCE(134);
      if (lookahead == '=')
        ADVANCE(178);
      if (lookahead == 'i')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(175);
      END_STATE();
    case 178:
      if (lookahead == '>')
        ADVANCE(46);
      END_STATE();
    case 179:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(179);
      if (lookahead == '!')
        ADVANCE(155);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == 'i')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(130);
      END_STATE();
    case 180:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(180);
      if (lookahead == '/')
        ADVANCE(134);
      if (lookahead == '=')
        ADVANCE(178);
      END_STATE();
    case 181:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(181);
      if (lookahead == '!')
        ADVANCE(14);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          ('j' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(134);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == 'f')
        ADVANCE(145);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'm')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      if (lookahead == '{')
        ADVANCE(129);
      END_STATE();
    case 182:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(182);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          ('j' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == 'f')
        ADVANCE(145);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'm')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 183:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(183);
      if (lookahead == '!')
        ADVANCE(14);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          (lookahead == 'j') ||
          (lookahead == 'k') ||
          ('n' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(134);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == 'f')
        ADVANCE(135);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'l')
        ADVANCE(137);
      if (lookahead == 'm')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      if (lookahead == '}')
        ADVANCE(132);
      END_STATE();
    case 184:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(184);
      if (lookahead == '!')
        ADVANCE(155);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 185:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(185);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          ('j' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == 'f')
        ADVANCE(145);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'm')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 186:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(186);
      if (lookahead == '!')
        ADVANCE(155);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 187:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(187);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '/')
        ADVANCE(134);
      END_STATE();
    case 188:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(188);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(134);
      END_STATE();
    case 189:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(189);
      if (lookahead == '!')
        ADVANCE(155);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == 'e')
        ADVANCE(190);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 190:
      if (lookahead == 'l')
        ADVANCE(191);
      END_STATE();
    case 191:
      if (lookahead == 's')
        ADVANCE(192);
      END_STATE();
    case 192:
      if (lookahead == 'e')
        ADVANCE(193);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 194:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(194);
      if (lookahead == '/')
        ADVANCE(134);
      if (lookahead == 'i')
        ADVANCE(156);
      if (lookahead == '{')
        ADVANCE(129);
      END_STATE();
    case 195:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(195);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          ('j' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == 'f')
        ADVANCE(145);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'm')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      if (lookahead == '|')
        ADVANCE(151);
      if (lookahead == '}')
        ADVANCE(132);
      END_STATE();
    case 196:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(196);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          ('j' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == ']')
        ADVANCE(55);
      if (lookahead == '_')
        ADVANCE(56);
      if (lookahead == 'e')
        ADVANCE(197);
      if (lookahead == 'f')
        ADVANCE(145);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'm')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      if (lookahead == '{')
        ADVANCE(129);
      if (lookahead == '|')
        ADVANCE(130);
      if (lookahead == '}')
        ADVANCE(132);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'l')
        ADVANCE(58);
      END_STATE();
    case 198:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(198);
      if (lookahead == '/')
        ADVANCE(134);
      if (lookahead == '}')
        ADVANCE(132);
      END_STATE();
    case 199:
      if ((lookahead == '\t') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(199);
      if (lookahead == '\n')
        ADVANCE(142);
      if (lookahead == '/')
        ADVANCE(134);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '}')
        ADVANCE(132);
      END_STATE();
    case 200:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(200);
      if (lookahead == '!')
        ADVANCE(155);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '|')
        ADVANCE(151);
      if (lookahead == '}')
        ADVANCE(132);
      END_STATE();
    case 201:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(201);
      if (lookahead == '!')
        ADVANCE(155);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == 'e')
        ADVANCE(190);
      if (lookahead == '|')
        ADVANCE(151);
      if (lookahead == '}')
        ADVANCE(132);
      END_STATE();
    case 202:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(202);
      if (lookahead == '!')
        ADVANCE(14);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          ('j' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(134);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == '_')
        ADVANCE(56);
      if (lookahead == 'f')
        ADVANCE(145);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'm')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      END_STATE();
    case 203:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(203);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          ('j' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == 'f')
        ADVANCE(145);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'm')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 204:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(204);
      if (lookahead == '/')
        ADVANCE(134);
      if (lookahead == '=')
        ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 206:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(206);
      if (lookahead == '!')
        ADVANCE(155);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 207:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(207);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          ('j' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == 'f')
        ADVANCE(145);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'm')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 208:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(208);
      if (lookahead == '!')
        ADVANCE(155);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 209:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(209);
      if (lookahead == '!')
        ADVANCE(155);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == 'e')
        ADVANCE(190);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 210:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(210);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          ('j' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == ']')
        ADVANCE(55);
      if (lookahead == 'f')
        ADVANCE(145);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'm')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 211:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(211);
      if (lookahead == '!')
        ADVANCE(155);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == ']')
        ADVANCE(55);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 212:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(212);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '/')
        ADVANCE(134);
      if (lookahead == ']')
        ADVANCE(55);
      END_STATE();
    case 213:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(213);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          ('j' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == ']')
        ADVANCE(55);
      if (lookahead == 'f')
        ADVANCE(145);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'm')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 214:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(214);
      if (lookahead == '!')
        ADVANCE(155);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == ']')
        ADVANCE(55);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 215:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(215);
      if (lookahead == '!')
        ADVANCE(155);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == ']')
        ADVANCE(55);
      if (lookahead == 'e')
        ADVANCE(190);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 216:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(216);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          ('j' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == ']')
        ADVANCE(55);
      if (lookahead == 'f')
        ADVANCE(145);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'm')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 217:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(217);
      if (lookahead == '!')
        ADVANCE(155);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == ']')
        ADVANCE(55);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 218:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(218);
      if (lookahead == '!')
        ADVANCE(155);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == ']')
        ADVANCE(55);
      if (lookahead == 'e')
        ADVANCE(190);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 219:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(219);
      if (lookahead == '!')
        ADVANCE(155);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == ']')
        ADVANCE(55);
      if (lookahead == 'e')
        ADVANCE(190);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 220:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(220);
      if (lookahead == '!')
        ADVANCE(155);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == 'e')
        ADVANCE(190);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 221:
      if (lookahead == 0)
        ADVANCE(1);
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(221);
      if (lookahead == '!')
        ADVANCE(14);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          (lookahead == 'j') ||
          (lookahead == 'k') ||
          ('n' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(134);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == 'f')
        ADVANCE(135);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'l')
        ADVANCE(137);
      if (lookahead == 'm')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      if (lookahead == '}')
        ADVANCE(132);
      END_STATE();
    case 222:
      if ((lookahead == '\t') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(222);
      if (lookahead == '\n')
        ADVANCE(142);
      if (lookahead == '!')
        ADVANCE(155);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '|')
        ADVANCE(151);
      if (lookahead == '}')
        ADVANCE(132);
      END_STATE();
    case 223:
      if (lookahead == 0)
        ADVANCE(1);
      if ((lookahead == '\t') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(223);
      if (lookahead == '\n')
        ADVANCE(142);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          (lookahead == 'j') ||
          (lookahead == 'k') ||
          ('n' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == ']')
        ADVANCE(55);
      if (lookahead == 'f')
        ADVANCE(135);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'l')
        ADVANCE(137);
      if (lookahead == 'm')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      if (lookahead == '{')
        ADVANCE(129);
      if (lookahead == '|')
        ADVANCE(130);
      if (lookahead == '}')
        ADVANCE(132);
      END_STATE();
    case 224:
      if ((lookahead == '\t') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(224);
      if (lookahead == '\n')
        ADVANCE(142);
      if (lookahead == '!')
        ADVANCE(155);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == 'e')
        ADVANCE(190);
      if (lookahead == '|')
        ADVANCE(151);
      if (lookahead == '}')
        ADVANCE(132);
      END_STATE();
    case 225:
      if (lookahead == 0)
        ADVANCE(1);
      if ((lookahead == '\t') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(225);
      if (lookahead == '\n')
        ADVANCE(142);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          (lookahead == 'j') ||
          (lookahead == 'k') ||
          ('n' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == ']')
        ADVANCE(55);
      if (lookahead == 'e')
        ADVANCE(197);
      if (lookahead == 'f')
        ADVANCE(135);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'l')
        ADVANCE(137);
      if (lookahead == 'm')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      if (lookahead == '{')
        ADVANCE(129);
      if (lookahead == '|')
        ADVANCE(130);
      if (lookahead == '}')
        ADVANCE(132);
      END_STATE();
    case 226:
      if (lookahead == 0)
        ADVANCE(1);
      if ((lookahead == '\t') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(226);
      if (lookahead == '\n')
        ADVANCE(142);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          (lookahead == 'j') ||
          (lookahead == 'k') ||
          ('n' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == ']')
        ADVANCE(55);
      if (lookahead == '_')
        ADVANCE(56);
      if (lookahead == 'e')
        ADVANCE(197);
      if (lookahead == 'f')
        ADVANCE(135);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'l')
        ADVANCE(137);
      if (lookahead == 'm')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      if (lookahead == '{')
        ADVANCE(129);
      if (lookahead == '|')
        ADVANCE(130);
      if (lookahead == '}')
        ADVANCE(132);
      END_STATE();
    case 227:
      if ((lookahead == '\t') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(227);
      if (lookahead == '\n')
        ADVANCE(142);
      if (lookahead == '/')
        ADVANCE(134);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == 'e')
        ADVANCE(190);
      if (lookahead == '}')
        ADVANCE(132);
      END_STATE();
    case 228:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(228);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          ('j' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == 'f')
        ADVANCE(145);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'm')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 229:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(229);
      if (lookahead == '/')
        ADVANCE(134);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '=')
        ADVANCE(205);
      END_STATE();
    case 230:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(230);
      if (lookahead == '!')
        ADVANCE(155);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 231:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(231);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          ('j' <= lookahead && lookahead <= 's') ||
          ('v' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '/')
        ADVANCE(134);
      if (lookahead == 'f')
        ADVANCE(232);
      if (lookahead == 'i')
        ADVANCE(233);
      if (lookahead == 't')
        ADVANCE(140);
      if (lookahead == 'u')
        ADVANCE(234);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '2') ||
          (lookahead == '4') ||
          (lookahead == '5') ||
          ('7' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '3')
        ADVANCE(62);
      if (lookahead == '6')
        ADVANCE(64);
      if (lookahead == 'a')
        ADVANCE(66);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          (lookahead == '0') ||
          (lookahead == '2') ||
          (lookahead == '4') ||
          (lookahead == '5') ||
          (lookahead == '7') ||
          (lookahead == '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '1')
        ADVANCE(72);
      if (lookahead == '3')
        ADVANCE(74);
      if (lookahead == '6')
        ADVANCE(76);
      if (lookahead == '8')
        ADVANCE(78);
      if (lookahead == 's')
        ADVANCE(80);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          (lookahead == '0') ||
          (lookahead == '2') ||
          (lookahead == '4') ||
          (lookahead == '5') ||
          (lookahead == '7') ||
          (lookahead == '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '1')
        ADVANCE(118);
      if (lookahead == '3')
        ADVANCE(120);
      if (lookahead == '6')
        ADVANCE(122);
      if (lookahead == '8')
        ADVANCE(124);
      if (lookahead == 's')
        ADVANCE(125);
      END_STATE();
    case 235:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(235);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '/')
        ADVANCE(134);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '=')
        ADVANCE(205);
      if (lookahead == '{')
        ADVANCE(129);
      END_STATE();
    case 236:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(236);
      if (lookahead == '/')
        ADVANCE(134);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '=')
        ADVANCE(205);
      END_STATE();
    case 237:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(237);
      if (lookahead == '!')
        ADVANCE(155);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == 'e')
        ADVANCE(190);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 238:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(238);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(134);
      END_STATE();
    case 239:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(239);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(134);
      END_STATE();
    case 240:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(240);
      if (lookahead == '-')
        ADVANCE(241);
      if (lookahead == '/')
        ADVANCE(134);
      if (lookahead == '{')
        ADVANCE(129);
      END_STATE();
    case 241:
      if (lookahead == '>')
        ADVANCE(18);
      END_STATE();
    case 242:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(242);
      if (lookahead == '/')
        ADVANCE(134);
      if (lookahead == '{')
        ADVANCE(129);
      END_STATE();
    case 243:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(243);
      if (lookahead == '/')
        ADVANCE(134);
      if (lookahead == ':')
        ADVANCE(41);
      END_STATE();
    case 244:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(244);
      if (lookahead == '!')
        ADVANCE(155);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == 'e')
        ADVANCE(190);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 245:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(245);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          ('j' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == 'f')
        ADVANCE(145);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'm')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 246:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(246);
      if (lookahead == '!')
        ADVANCE(155);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 247:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(247);
      if (lookahead == '!')
        ADVANCE(155);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == 'e')
        ADVANCE(190);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 248:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(248);
      if (lookahead == '!')
        ADVANCE(155);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == 'e')
        ADVANCE(190);
      if (lookahead == 'i')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(130);
      END_STATE();
    case 249:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(249);
      if (lookahead == '!')
        ADVANCE(155);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == 'e')
        ADVANCE(190);
      if (lookahead == '{')
        ADVANCE(129);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 250:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(250);
      if (lookahead == '!')
        ADVANCE(155);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == 'e')
        ADVANCE(190);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 251:
      if (lookahead == 0)
        ADVANCE(1);
      if ((lookahead == '\t') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(251);
      if (lookahead == '\n')
        ADVANCE(142);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          (lookahead == 'j') ||
          (lookahead == 'k') ||
          ('n' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == 'e')
        ADVANCE(197);
      if (lookahead == 'f')
        ADVANCE(135);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'l')
        ADVANCE(137);
      if (lookahead == 'm')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 252:
      if (lookahead == 0)
        ADVANCE(1);
      if ((lookahead == '\t') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(252);
      if (lookahead == '\n')
        ADVANCE(142);
      if (lookahead == '!')
        ADVANCE(14);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          (lookahead == 'j') ||
          (lookahead == 'k') ||
          ('n' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(134);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == 'e')
        ADVANCE(197);
      if (lookahead == 'f')
        ADVANCE(135);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'l')
        ADVANCE(137);
      if (lookahead == 'm')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      END_STATE();
    case 253:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(253);
      if (lookahead == '!')
        ADVANCE(155);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(254);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == ']')
        ADVANCE(55);
      if (lookahead == 'i')
        ADVANCE(156);
      if (lookahead == '{')
        ADVANCE(129);
      if (lookahead == '|')
        ADVANCE(130);
      if (lookahead == '}')
        ADVANCE(132);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH);
      if (lookahead == '>')
        ADVANCE(18);
      END_STATE();
    case 255:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(255);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          ('j' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == ']')
        ADVANCE(55);
      if (lookahead == 'f')
        ADVANCE(145);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'm')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      if (lookahead == '{')
        ADVANCE(129);
      if (lookahead == '|')
        ADVANCE(130);
      if (lookahead == '}')
        ADVANCE(132);
      END_STATE();
    case 256:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(256);
      if (lookahead == '!')
        ADVANCE(14);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          (lookahead == 'j') ||
          (lookahead == 'k') ||
          ('n' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(134);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == '_')
        ADVANCE(56);
      if (lookahead == 'f')
        ADVANCE(135);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'l')
        ADVANCE(137);
      if (lookahead == 'm')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      if (lookahead == '}')
        ADVANCE(132);
      END_STATE();
    case 257:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        ADVANCE(2);
      if (lookahead == '!')
        ADVANCE(258);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '\\')
        ADVANCE(160);
      if (lookahead == ']')
        ADVANCE(55);
      if (lookahead == 'i')
        ADVANCE(259);
      if (lookahead == '{')
        ADVANCE(129);
      if (lookahead == '|')
        ADVANCE(130);
      if (lookahead == '}')
        ADVANCE(132);
      if (!((lookahead == 0) ||
          (lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (' ' <= lookahead && lookahead <= '\"') ||
          (lookahead == '%') ||
          (lookahead == '&') ||
          ('(' <= lookahead && lookahead <= '-') ||
          (lookahead == '/') ||
          (':' <= lookahead && lookahead <= '>') ||
          (lookahead == '\\') ||
          (lookahead == ']') ||
          (lookahead == 'i') ||
          ('{' <= lookahead && lookahead <= '}')))
        ADVANCE(2);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '=')
        ADVANCE(4);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == 'f')
        ADVANCE(157);
      END_STATE();
    case 260:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        ADVANCE(162);
      if (lookahead == '!')
        ADVANCE(261);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(262);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '\\')
        ADVANCE(164);
      if (lookahead == ']')
        ADVANCE(55);
      if (lookahead == 'i')
        ADVANCE(263);
      if (lookahead == '{')
        ADVANCE(129);
      if (lookahead == '|')
        ADVANCE(130);
      if (lookahead == '}')
        ADVANCE(132);
      if (!((lookahead == 0) ||
          (lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' ') ||
          (lookahead == '!') ||
          ('%' <= lookahead && lookahead <= '-') ||
          (lookahead == '/') ||
          (':' <= lookahead && lookahead <= '>') ||
          (lookahead == '\\') ||
          (lookahead == ']') ||
          (lookahead == 'i') ||
          ('{' <= lookahead && lookahead <= '}')))
        ADVANCE(162);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_RBRACK_SLASH);
      if (lookahead == '=')
        ADVANCE(4);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_RBRACK_SLASH);
      if (lookahead == '&')
        ADVANCE(10);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_RBRACK_SLASH);
      if (lookahead == 'f')
        ADVANCE(157);
      END_STATE();
    case 264:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(159);
      if (lookahead == '\\')
        ADVANCE(160);
      if (!((lookahead == 0) ||
          (lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' ') ||
          (lookahead == '\"') ||
          (lookahead == '\'') ||
          (lookahead == '/') ||
          (lookahead == '\\')))
        ADVANCE(2);
      END_STATE();
    case 265:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(265);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '/')
        ADVANCE(134);
      if (lookahead == ']')
        ADVANCE(55);
      END_STATE();
    case 266:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(266);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          ('j' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == ']')
        ADVANCE(55);
      if (lookahead == 'f')
        ADVANCE(145);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'm')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 267:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(267);
      if (lookahead == '!')
        ADVANCE(155);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == ']')
        ADVANCE(55);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 268:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(268);
      if (lookahead == '!')
        ADVANCE(155);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == ']')
        ADVANCE(55);
      if (lookahead == 'e')
        ADVANCE(190);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 269:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(269);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          ('j' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == 'f')
        ADVANCE(145);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'm')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      if (lookahead == '|')
        ADVANCE(130);
      if (lookahead == '}')
        ADVANCE(132);
      END_STATE();
    case 270:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(270);
      if (lookahead == '!')
        ADVANCE(155);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == 'i')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(130);
      if (lookahead == '}')
        ADVANCE(132);
      END_STATE();
    case 271:
      if ((lookahead == '\t') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(271);
      if (lookahead == '\n')
        ADVANCE(142);
      if (lookahead == '!')
        ADVANCE(155);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == 'i')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(130);
      if (lookahead == '}')
        ADVANCE(132);
      END_STATE();
    case 272:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(272);
      if (lookahead == '!')
        ADVANCE(155);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == 'e')
        ADVANCE(190);
      if (lookahead == 'i')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(130);
      if (lookahead == '}')
        ADVANCE(132);
      END_STATE();
    case 273:
      if ((lookahead == '\t') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(273);
      if (lookahead == '\n')
        ADVANCE(142);
      if (lookahead == '!')
        ADVANCE(155);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == 'e')
        ADVANCE(190);
      if (lookahead == 'i')
        ADVANCE(156);
      if (lookahead == '|')
        ADVANCE(130);
      if (lookahead == '}')
        ADVANCE(132);
      END_STATE();
    case 274:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(274);
      if (lookahead == '!')
        ADVANCE(155);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == ']')
        ADVANCE(55);
      if (lookahead == 'e')
        ADVANCE(190);
      if (lookahead == 'i')
        ADVANCE(156);
      if (lookahead == '{')
        ADVANCE(129);
      if (lookahead == '|')
        ADVANCE(130);
      if (lookahead == '}')
        ADVANCE(132);
      END_STATE();
    case 275:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(275);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          ('j' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == 'f')
        ADVANCE(145);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'm')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      if (lookahead == '{')
        ADVANCE(129);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 276:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(276);
      if (lookahead == '!')
        ADVANCE(155);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '{')
        ADVANCE(129);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 277:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(277);
      if (lookahead == '!')
        ADVANCE(155);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == 'e')
        ADVANCE(190);
      if (lookahead == '{')
        ADVANCE(129);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 278:
      if (lookahead == 0)
        ADVANCE(1);
      if ((lookahead == '\t') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(278);
      if (lookahead == '\n')
        ADVANCE(142);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          (lookahead == 'j') ||
          (lookahead == 'k') ||
          ('n' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == ']')
        ADVANCE(55);
      if (lookahead == 'f')
        ADVANCE(135);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'l')
        ADVANCE(137);
      if (lookahead == 'm')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      if (lookahead == '|')
        ADVANCE(151);
      if (lookahead == '}')
        ADVANCE(132);
      END_STATE();
    case 279:
      if (lookahead == 0)
        ADVANCE(1);
      if ((lookahead == '\t') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(279);
      if (lookahead == '\n')
        ADVANCE(142);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          (lookahead == 'j') ||
          (lookahead == 'k') ||
          ('n' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == 'e')
        ADVANCE(197);
      if (lookahead == 'f')
        ADVANCE(135);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'l')
        ADVANCE(137);
      if (lookahead == 'm')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      if (lookahead == '|')
        ADVANCE(151);
      if (lookahead == '}')
        ADVANCE(132);
      END_STATE();
    case 280:
      if (lookahead == 0)
        ADVANCE(1);
      if ((lookahead == '\t') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(280);
      if (lookahead == '\n')
        ADVANCE(142);
      if (lookahead == '!')
        ADVANCE(14);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          (lookahead == 'j') ||
          (lookahead == 'k') ||
          ('n' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(134);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == 'e')
        ADVANCE(197);
      if (lookahead == 'f')
        ADVANCE(135);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'l')
        ADVANCE(137);
      if (lookahead == 'm')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      if (lookahead == '}')
        ADVANCE(132);
      END_STATE();
    case 281:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(281);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          ('j' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == 'f')
        ADVANCE(145);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'm')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      if (lookahead == '{')
        ADVANCE(129);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 282:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(282);
      if (lookahead == '!')
        ADVANCE(155);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '{')
        ADVANCE(129);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 283:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(283);
      if (lookahead == '!')
        ADVANCE(155);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == 'e')
        ADVANCE(190);
      if (lookahead == '{')
        ADVANCE(129);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 284:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(284);
      if (lookahead == '!')
        ADVANCE(155);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == ']')
        ADVANCE(55);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 285:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(285);
      if (lookahead == '!')
        ADVANCE(155);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 286:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(286);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '/')
        ADVANCE(134);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '=')
        ADVANCE(205);
      END_STATE();
    case 287:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(287);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          ('j' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == ']')
        ADVANCE(55);
      if (lookahead == 'f')
        ADVANCE(145);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'm')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 288:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(288);
      if (lookahead == '!')
        ADVANCE(155);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == ']')
        ADVANCE(55);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 289:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(289);
      if (lookahead == '!')
        ADVANCE(155);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == ']')
        ADVANCE(55);
      if (lookahead == 'e')
        ADVANCE(190);
      if (lookahead == '|')
        ADVANCE(151);
      END_STATE();
    case 290:
      if (lookahead == 0)
        ADVANCE(1);
      if ((lookahead == '\t') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(290);
      if (lookahead == '\n')
        ADVANCE(142);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          (lookahead == 'j') ||
          (lookahead == 'k') ||
          ('n' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(149);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(150);
      if (lookahead == '>')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(48);
      if (lookahead == ']')
        ADVANCE(55);
      if (lookahead == 'e')
        ADVANCE(197);
      if (lookahead == 'f')
        ADVANCE(135);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'l')
        ADVANCE(137);
      if (lookahead == 'm')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      if (lookahead == '|')
        ADVANCE(151);
      if (lookahead == '}')
        ADVANCE(132);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 133},
  [2] = {.lex_state = 141},
  [3] = {.lex_state = 143},
  [4] = {.lex_state = 144},
  [5] = {.lex_state = 147},
  [6] = {.lex_state = 147},
  [7] = {.lex_state = 148},
  [8] = {.lex_state = 152},
  [9] = {.lex_state = 153},
  [10] = {.lex_state = 147},
  [11] = {.lex_state = 154},
  [12] = {.lex_state = 158},
  [13] = {.lex_state = 161},
  [14] = {.lex_state = 154},
  [15] = {.lex_state = 165},
  [16] = {.lex_state = 133},
  [17] = {.lex_state = 166},
  [18] = {.lex_state = 141},
  [19] = {.lex_state = 141},
  [20] = {.lex_state = 141},
  [21] = {.lex_state = 167},
  [22] = {.lex_state = 154},
  [23] = {.lex_state = 168},
  [24] = {.lex_state = 141},
  [25] = {.lex_state = 133},
  [26] = {.lex_state = 133},
  [27] = {.lex_state = 141},
  [28] = {.lex_state = 147},
  [29] = {.lex_state = 169},
  [30] = {.lex_state = 147},
  [31] = {.lex_state = 147},
  [32] = {.lex_state = 147},
  [33] = {.lex_state = 147},
  [34] = {.lex_state = 147},
  [35] = {.lex_state = 147},
  [36] = {.lex_state = 154},
  [37] = {.lex_state = 147},
  [38] = {.lex_state = 147},
  [39] = {.lex_state = 167},
  [40] = {.lex_state = 147},
  [41] = {.lex_state = 170},
  [42] = {.lex_state = 147},
  [43] = {.lex_state = 171},
  [44] = {.lex_state = 147},
  [45] = {.lex_state = 147},
  [46] = {.lex_state = 147},
  [47] = {.lex_state = 147},
  [48] = {.lex_state = 147},
  [49] = {.lex_state = 147},
  [50] = {.lex_state = 147},
  [51] = {.lex_state = 172},
  [52] = {.lex_state = 169},
  [53] = {.lex_state = 173},
  [54] = {.lex_state = 147},
  [55] = {.lex_state = 176},
  [56] = {.lex_state = 147},
  [57] = {.lex_state = 154},
  [58] = {.lex_state = 177},
  [59] = {.lex_state = 179},
  [60] = {.lex_state = 172},
  [61] = {.lex_state = 180},
  [62] = {.lex_state = 172},
  [63] = {.lex_state = 154},
  [64] = {.lex_state = 172},
  [65] = {.lex_state = 181},
  [66] = {.lex_state = 147},
  [67] = {.lex_state = 182},
  [68] = {.lex_state = 147},
  [69] = {.lex_state = 183},
  [70] = {.lex_state = 184},
  [71] = {.lex_state = 172},
  [72] = {.lex_state = 147},
  [73] = {.lex_state = 172},
  [74] = {.lex_state = 147},
  [75] = {.lex_state = 147},
  [76] = {.lex_state = 147},
  [77] = {.lex_state = 147},
  [78] = {.lex_state = 147},
  [79] = {.lex_state = 147},
  [80] = {.lex_state = 184},
  [81] = {.lex_state = 184},
  [82] = {.lex_state = 184},
  [83] = {.lex_state = 184},
  [84] = {.lex_state = 184},
  [85] = {.lex_state = 154},
  [86] = {.lex_state = 154},
  [87] = {.lex_state = 147},
  [88] = {.lex_state = 185},
  [89] = {.lex_state = 147},
  [90] = {.lex_state = 186},
  [91] = {.lex_state = 147},
  [92] = {.lex_state = 147},
  [93] = {.lex_state = 154},
  [94] = {.lex_state = 147},
  [95] = {.lex_state = 147},
  [96] = {.lex_state = 147},
  [97] = {.lex_state = 147},
  [98] = {.lex_state = 147},
  [99] = {.lex_state = 147},
  [100] = {.lex_state = 187},
  [101] = {.lex_state = 147},
  [102] = {.lex_state = 154},
  [103] = {.lex_state = 186},
  [104] = {.lex_state = 186},
  [105] = {.lex_state = 186},
  [106] = {.lex_state = 186},
  [107] = {.lex_state = 186},
  [108] = {.lex_state = 186},
  [109] = {.lex_state = 186},
  [110] = {.lex_state = 186},
  [111] = {.lex_state = 154},
  [112] = {.lex_state = 188},
  [113] = {.lex_state = 154},
  [114] = {.lex_state = 154},
  [115] = {.lex_state = 158},
  [116] = {.lex_state = 158},
  [117] = {.lex_state = 154},
  [118] = {.lex_state = 158},
  [119] = {.lex_state = 171},
  [120] = {.lex_state = 189},
  [121] = {.lex_state = 194},
  [122] = {.lex_state = 154},
  [123] = {.lex_state = 153},
  [124] = {.lex_state = 154},
  [125] = {.lex_state = 147},
  [126] = {.lex_state = 195},
  [127] = {.lex_state = 153},
  [128] = {.lex_state = 196},
  [129] = {.lex_state = 198},
  [130] = {.lex_state = 199},
  [131] = {.lex_state = 200},
  [132] = {.lex_state = 147},
  [133] = {.lex_state = 147},
  [134] = {.lex_state = 147},
  [135] = {.lex_state = 147},
  [136] = {.lex_state = 147},
  [137] = {.lex_state = 147},
  [138] = {.lex_state = 147},
  [139] = {.lex_state = 196},
  [140] = {.lex_state = 147},
  [141] = {.lex_state = 200},
  [142] = {.lex_state = 171},
  [143] = {.lex_state = 201},
  [144] = {.lex_state = 194},
  [145] = {.lex_state = 153},
  [146] = {.lex_state = 202},
  [147] = {.lex_state = 147},
  [148] = {.lex_state = 203},
  [149] = {.lex_state = 147},
  [150] = {.lex_state = 204},
  [151] = {.lex_state = 206},
  [152] = {.lex_state = 147},
  [153] = {.lex_state = 147},
  [154] = {.lex_state = 147},
  [155] = {.lex_state = 147},
  [156] = {.lex_state = 147},
  [157] = {.lex_state = 147},
  [158] = {.lex_state = 147},
  [159] = {.lex_state = 206},
  [160] = {.lex_state = 147},
  [161] = {.lex_state = 207},
  [162] = {.lex_state = 147},
  [163] = {.lex_state = 208},
  [164] = {.lex_state = 147},
  [165] = {.lex_state = 154},
  [166] = {.lex_state = 147},
  [167] = {.lex_state = 147},
  [168] = {.lex_state = 147},
  [169] = {.lex_state = 147},
  [170] = {.lex_state = 147},
  [171] = {.lex_state = 147},
  [172] = {.lex_state = 208},
  [173] = {.lex_state = 208},
  [174] = {.lex_state = 208},
  [175] = {.lex_state = 208},
  [176] = {.lex_state = 208},
  [177] = {.lex_state = 208},
  [178] = {.lex_state = 171},
  [179] = {.lex_state = 209},
  [180] = {.lex_state = 194},
  [181] = {.lex_state = 153},
  [182] = {.lex_state = 202},
  [183] = {.lex_state = 204},
  [184] = {.lex_state = 147},
  [185] = {.lex_state = 171},
  [186] = {.lex_state = 209},
  [187] = {.lex_state = 154},
  [188] = {.lex_state = 147},
  [189] = {.lex_state = 210},
  [190] = {.lex_state = 154},
  [191] = {.lex_state = 147},
  [192] = {.lex_state = 211},
  [193] = {.lex_state = 147},
  [194] = {.lex_state = 147},
  [195] = {.lex_state = 147},
  [196] = {.lex_state = 147},
  [197] = {.lex_state = 147},
  [198] = {.lex_state = 147},
  [199] = {.lex_state = 147},
  [200] = {.lex_state = 147},
  [201] = {.lex_state = 147},
  [202] = {.lex_state = 154},
  [203] = {.lex_state = 212},
  [204] = {.lex_state = 147},
  [205] = {.lex_state = 154},
  [206] = {.lex_state = 147},
  [207] = {.lex_state = 213},
  [208] = {.lex_state = 147},
  [209] = {.lex_state = 214},
  [210] = {.lex_state = 147},
  [211] = {.lex_state = 147},
  [212] = {.lex_state = 147},
  [213] = {.lex_state = 147},
  [214] = {.lex_state = 147},
  [215] = {.lex_state = 147},
  [216] = {.lex_state = 147},
  [217] = {.lex_state = 214},
  [218] = {.lex_state = 214},
  [219] = {.lex_state = 214},
  [220] = {.lex_state = 214},
  [221] = {.lex_state = 214},
  [222] = {.lex_state = 214},
  [223] = {.lex_state = 171},
  [224] = {.lex_state = 215},
  [225] = {.lex_state = 194},
  [226] = {.lex_state = 153},
  [227] = {.lex_state = 202},
  [228] = {.lex_state = 204},
  [229] = {.lex_state = 147},
  [230] = {.lex_state = 171},
  [231] = {.lex_state = 215},
  [232] = {.lex_state = 147},
  [233] = {.lex_state = 216},
  [234] = {.lex_state = 147},
  [235] = {.lex_state = 217},
  [236] = {.lex_state = 147},
  [237] = {.lex_state = 147},
  [238] = {.lex_state = 147},
  [239] = {.lex_state = 147},
  [240] = {.lex_state = 147},
  [241] = {.lex_state = 147},
  [242] = {.lex_state = 147},
  [243] = {.lex_state = 154},
  [244] = {.lex_state = 217},
  [245] = {.lex_state = 217},
  [246] = {.lex_state = 217},
  [247] = {.lex_state = 217},
  [248] = {.lex_state = 217},
  [249] = {.lex_state = 217},
  [250] = {.lex_state = 171},
  [251] = {.lex_state = 218},
  [252] = {.lex_state = 194},
  [253] = {.lex_state = 153},
  [254] = {.lex_state = 202},
  [255] = {.lex_state = 204},
  [256] = {.lex_state = 147},
  [257] = {.lex_state = 171},
  [258] = {.lex_state = 218},
  [259] = {.lex_state = 217},
  [260] = {.lex_state = 154},
  [261] = {.lex_state = 214},
  [262] = {.lex_state = 211},
  [263] = {.lex_state = 211},
  [264] = {.lex_state = 211},
  [265] = {.lex_state = 211},
  [266] = {.lex_state = 211},
  [267] = {.lex_state = 214},
  [268] = {.lex_state = 211},
  [269] = {.lex_state = 171},
  [270] = {.lex_state = 219},
  [271] = {.lex_state = 194},
  [272] = {.lex_state = 153},
  [273] = {.lex_state = 202},
  [274] = {.lex_state = 204},
  [275] = {.lex_state = 147},
  [276] = {.lex_state = 171},
  [277] = {.lex_state = 219},
  [278] = {.lex_state = 211},
  [279] = {.lex_state = 208},
  [280] = {.lex_state = 206},
  [281] = {.lex_state = 206},
  [282] = {.lex_state = 206},
  [283] = {.lex_state = 206},
  [284] = {.lex_state = 206},
  [285] = {.lex_state = 147},
  [286] = {.lex_state = 171},
  [287] = {.lex_state = 201},
  [288] = {.lex_state = 171},
  [289] = {.lex_state = 220},
  [290] = {.lex_state = 194},
  [291] = {.lex_state = 153},
  [292] = {.lex_state = 202},
  [293] = {.lex_state = 204},
  [294] = {.lex_state = 147},
  [295] = {.lex_state = 171},
  [296] = {.lex_state = 220},
  [297] = {.lex_state = 206},
  [298] = {.lex_state = 173},
  [299] = {.lex_state = 186},
  [300] = {.lex_state = 187},
  [301] = {.lex_state = 173},
  [302] = {.lex_state = 200},
  [303] = {.lex_state = 200},
  [304] = {.lex_state = 200},
  [305] = {.lex_state = 200},
  [306] = {.lex_state = 200},
  [307] = {.lex_state = 183},
  [308] = {.lex_state = 221},
  [309] = {.lex_state = 222},
  [310] = {.lex_state = 171},
  [311] = {.lex_state = 172},
  [312] = {.lex_state = 223},
  [313] = {.lex_state = 172},
  [314] = {.lex_state = 223},
  [315] = {.lex_state = 202},
  [316] = {.lex_state = 171},
  [317] = {.lex_state = 183},
  [318] = {.lex_state = 224},
  [319] = {.lex_state = 194},
  [320] = {.lex_state = 223},
  [321] = {.lex_state = 153},
  [322] = {.lex_state = 223},
  [323] = {.lex_state = 225},
  [324] = {.lex_state = 198},
  [325] = {.lex_state = 200},
  [326] = {.lex_state = 226},
  [327] = {.lex_state = 202},
  [328] = {.lex_state = 204},
  [329] = {.lex_state = 147},
  [330] = {.lex_state = 171},
  [331] = {.lex_state = 224},
  [332] = {.lex_state = 223},
  [333] = {.lex_state = 204},
  [334] = {.lex_state = 147},
  [335] = {.lex_state = 171},
  [336] = {.lex_state = 227},
  [337] = {.lex_state = 194},
  [338] = {.lex_state = 153},
  [339] = {.lex_state = 171},
  [340] = {.lex_state = 227},
  [341] = {.lex_state = 200},
  [342] = {.lex_state = 202},
  [343] = {.lex_state = 147},
  [344] = {.lex_state = 228},
  [345] = {.lex_state = 147},
  [346] = {.lex_state = 229},
  [347] = {.lex_state = 230},
  [348] = {.lex_state = 147},
  [349] = {.lex_state = 147},
  [350] = {.lex_state = 147},
  [351] = {.lex_state = 147},
  [352] = {.lex_state = 147},
  [353] = {.lex_state = 147},
  [354] = {.lex_state = 147},
  [355] = {.lex_state = 230},
  [356] = {.lex_state = 230},
  [357] = {.lex_state = 230},
  [358] = {.lex_state = 230},
  [359] = {.lex_state = 230},
  [360] = {.lex_state = 230},
  [361] = {.lex_state = 141},
  [362] = {.lex_state = 231},
  [363] = {.lex_state = 147},
  [364] = {.lex_state = 167},
  [365] = {.lex_state = 141},
  [366] = {.lex_state = 235},
  [367] = {.lex_state = 236},
  [368] = {.lex_state = 147},
  [369] = {.lex_state = 167},
  [370] = {.lex_state = 141},
  [371] = {.lex_state = 171},
  [372] = {.lex_state = 237},
  [373] = {.lex_state = 194},
  [374] = {.lex_state = 153},
  [375] = {.lex_state = 202},
  [376] = {.lex_state = 204},
  [377] = {.lex_state = 147},
  [378] = {.lex_state = 171},
  [379] = {.lex_state = 237},
  [380] = {.lex_state = 230},
  [381] = {.lex_state = 229},
  [382] = {.lex_state = 141},
  [383] = {.lex_state = 231},
  [384] = {.lex_state = 147},
  [385] = {.lex_state = 167},
  [386] = {.lex_state = 141},
  [387] = {.lex_state = 236},
  [388] = {.lex_state = 147},
  [389] = {.lex_state = 167},
  [390] = {.lex_state = 141},
  [391] = {.lex_state = 238},
  [392] = {.lex_state = 239},
  [393] = {.lex_state = 240},
  [394] = {.lex_state = 231},
  [395] = {.lex_state = 141},
  [396] = {.lex_state = 242},
  [397] = {.lex_state = 141},
  [398] = {.lex_state = 240},
  [399] = {.lex_state = 243},
  [400] = {.lex_state = 231},
  [401] = {.lex_state = 187},
  [402] = {.lex_state = 143},
  [403] = {.lex_state = 240},
  [404] = {.lex_state = 187},
  [405] = {.lex_state = 143},
  [406] = {.lex_state = 240},
  [407] = {.lex_state = 243},
  [408] = {.lex_state = 231},
  [409] = {.lex_state = 187},
  [410] = {.lex_state = 243},
  [411] = {.lex_state = 231},
  [412] = {.lex_state = 187},
  [413] = {.lex_state = 202},
  [414] = {.lex_state = 204},
  [415] = {.lex_state = 147},
  [416] = {.lex_state = 171},
  [417] = {.lex_state = 189},
  [418] = {.lex_state = 186},
  [419] = {.lex_state = 184},
  [420] = {.lex_state = 171},
  [421] = {.lex_state = 244},
  [422] = {.lex_state = 194},
  [423] = {.lex_state = 153},
  [424] = {.lex_state = 202},
  [425] = {.lex_state = 204},
  [426] = {.lex_state = 147},
  [427] = {.lex_state = 171},
  [428] = {.lex_state = 244},
  [429] = {.lex_state = 184},
  [430] = {.lex_state = 147},
  [431] = {.lex_state = 147},
  [432] = {.lex_state = 147},
  [433] = {.lex_state = 147},
  [434] = {.lex_state = 147},
  [435] = {.lex_state = 147},
  [436] = {.lex_state = 147},
  [437] = {.lex_state = 179},
  [438] = {.lex_state = 179},
  [439] = {.lex_state = 179},
  [440] = {.lex_state = 179},
  [441] = {.lex_state = 179},
  [442] = {.lex_state = 179},
  [443] = {.lex_state = 147},
  [444] = {.lex_state = 202},
  [445] = {.lex_state = 177},
  [446] = {.lex_state = 147},
  [447] = {.lex_state = 202},
  [448] = {.lex_state = 177},
  [449] = {.lex_state = 147},
  [450] = {.lex_state = 245},
  [451] = {.lex_state = 147},
  [452] = {.lex_state = 246},
  [453] = {.lex_state = 147},
  [454] = {.lex_state = 147},
  [455] = {.lex_state = 147},
  [456] = {.lex_state = 147},
  [457] = {.lex_state = 147},
  [458] = {.lex_state = 147},
  [459] = {.lex_state = 147},
  [460] = {.lex_state = 246},
  [461] = {.lex_state = 246},
  [462] = {.lex_state = 246},
  [463] = {.lex_state = 246},
  [464] = {.lex_state = 246},
  [465] = {.lex_state = 246},
  [466] = {.lex_state = 171},
  [467] = {.lex_state = 247},
  [468] = {.lex_state = 194},
  [469] = {.lex_state = 153},
  [470] = {.lex_state = 202},
  [471] = {.lex_state = 204},
  [472] = {.lex_state = 147},
  [473] = {.lex_state = 171},
  [474] = {.lex_state = 247},
  [475] = {.lex_state = 246},
  [476] = {.lex_state = 177},
  [477] = {.lex_state = 246},
  [478] = {.lex_state = 171},
  [479] = {.lex_state = 248},
  [480] = {.lex_state = 194},
  [481] = {.lex_state = 153},
  [482] = {.lex_state = 202},
  [483] = {.lex_state = 204},
  [484] = {.lex_state = 147},
  [485] = {.lex_state = 171},
  [486] = {.lex_state = 248},
  [487] = {.lex_state = 179},
  [488] = {.lex_state = 171},
  [489] = {.lex_state = 171},
  [490] = {.lex_state = 171},
  [491] = {.lex_state = 171},
  [492] = {.lex_state = 171},
  [493] = {.lex_state = 171},
  [494] = {.lex_state = 171},
  [495] = {.lex_state = 249},
  [496] = {.lex_state = 194},
  [497] = {.lex_state = 153},
  [498] = {.lex_state = 202},
  [499] = {.lex_state = 204},
  [500] = {.lex_state = 147},
  [501] = {.lex_state = 171},
  [502] = {.lex_state = 249},
  [503] = {.lex_state = 171},
  [504] = {.lex_state = 171},
  [505] = {.lex_state = 250},
  [506] = {.lex_state = 194},
  [507] = {.lex_state = 153},
  [508] = {.lex_state = 202},
  [509] = {.lex_state = 204},
  [510] = {.lex_state = 147},
  [511] = {.lex_state = 171},
  [512] = {.lex_state = 250},
  [513] = {.lex_state = 167},
  [514] = {.lex_state = 167},
  [515] = {.lex_state = 167},
  [516] = {.lex_state = 167},
  [517] = {.lex_state = 167},
  [518] = {.lex_state = 133},
  [519] = {.lex_state = 202},
  [520] = {.lex_state = 171},
  [521] = {.lex_state = 251},
  [522] = {.lex_state = 194},
  [523] = {.lex_state = 153},
  [524] = {.lex_state = 202},
  [525] = {.lex_state = 204},
  [526] = {.lex_state = 147},
  [527] = {.lex_state = 171},
  [528] = {.lex_state = 251},
  [529] = {.lex_state = 204},
  [530] = {.lex_state = 147},
  [531] = {.lex_state = 171},
  [532] = {.lex_state = 252},
  [533] = {.lex_state = 194},
  [534] = {.lex_state = 153},
  [535] = {.lex_state = 171},
  [536] = {.lex_state = 252},
  [537] = {.lex_state = 167},
  [538] = {.lex_state = 141},
  [539] = {.lex_state = 144},
  [540] = {.lex_state = 231},
  [541] = {.lex_state = 147},
  [542] = {.lex_state = 169},
  [543] = {.lex_state = 172},
  [544] = {.lex_state = 253},
  [545] = {.lex_state = 147},
  [546] = {.lex_state = 147},
  [547] = {.lex_state = 255},
  [548] = {.lex_state = 154},
  [549] = {.lex_state = 153},
  [550] = {.lex_state = 194},
  [551] = {.lex_state = 256},
  [552] = {.lex_state = 226},
  [553] = {.lex_state = 202},
  [554] = {.lex_state = 257},
  [555] = {.lex_state = 158},
  [556] = {.lex_state = 260},
  [557] = {.lex_state = 264},
  [558] = {.lex_state = 154},
  [559] = {.lex_state = 154},
  [560] = {.lex_state = 221},
  [561] = {.lex_state = 141},
  [562] = {.lex_state = 173},
  [563] = {.lex_state = 235},
  [564] = {.lex_state = 154},
  [565] = {.lex_state = 223},
  [566] = {.lex_state = 223},
  [567] = {.lex_state = 223},
  [568] = {.lex_state = 223},
  [569] = {.lex_state = 172},
  [570] = {.lex_state = 226},
  [571] = {.lex_state = 265},
  [572] = {.lex_state = 147},
  [573] = {.lex_state = 154},
  [574] = {.lex_state = 147},
  [575] = {.lex_state = 266},
  [576] = {.lex_state = 147},
  [577] = {.lex_state = 267},
  [578] = {.lex_state = 147},
  [579] = {.lex_state = 147},
  [580] = {.lex_state = 267},
  [581] = {.lex_state = 267},
  [582] = {.lex_state = 171},
  [583] = {.lex_state = 268},
  [584] = {.lex_state = 194},
  [585] = {.lex_state = 153},
  [586] = {.lex_state = 202},
  [587] = {.lex_state = 204},
  [588] = {.lex_state = 147},
  [589] = {.lex_state = 171},
  [590] = {.lex_state = 268},
  [591] = {.lex_state = 267},
  [592] = {.lex_state = 267},
  [593] = {.lex_state = 141},
  [594] = {.lex_state = 147},
  [595] = {.lex_state = 172},
  [596] = {.lex_state = 154},
  [597] = {.lex_state = 154},
  [598] = {.lex_state = 225},
  [599] = {.lex_state = 169},
  [600] = {.lex_state = 147},
  [601] = {.lex_state = 269},
  [602] = {.lex_state = 153},
  [603] = {.lex_state = 226},
  [604] = {.lex_state = 270},
  [605] = {.lex_state = 271},
  [606] = {.lex_state = 147},
  [607] = {.lex_state = 147},
  [608] = {.lex_state = 147},
  [609] = {.lex_state = 270},
  [610] = {.lex_state = 171},
  [611] = {.lex_state = 272},
  [612] = {.lex_state = 194},
  [613] = {.lex_state = 153},
  [614] = {.lex_state = 202},
  [615] = {.lex_state = 204},
  [616] = {.lex_state = 147},
  [617] = {.lex_state = 171},
  [618] = {.lex_state = 272},
  [619] = {.lex_state = 270},
  [620] = {.lex_state = 171},
  [621] = {.lex_state = 273},
  [622] = {.lex_state = 194},
  [623] = {.lex_state = 153},
  [624] = {.lex_state = 202},
  [625] = {.lex_state = 204},
  [626] = {.lex_state = 147},
  [627] = {.lex_state = 171},
  [628] = {.lex_state = 273},
  [629] = {.lex_state = 270},
  [630] = {.lex_state = 270},
  [631] = {.lex_state = 186},
  [632] = {.lex_state = 270},
  [633] = {.lex_state = 267},
  [634] = {.lex_state = 147},
  [635] = {.lex_state = 154},
  [636] = {.lex_state = 171},
  [637] = {.lex_state = 274},
  [638] = {.lex_state = 194},
  [639] = {.lex_state = 153},
  [640] = {.lex_state = 202},
  [641] = {.lex_state = 204},
  [642] = {.lex_state = 147},
  [643] = {.lex_state = 171},
  [644] = {.lex_state = 274},
  [645] = {.lex_state = 141},
  [646] = {.lex_state = 147},
  [647] = {.lex_state = 167},
  [648] = {.lex_state = 141},
  [649] = {.lex_state = 141},
  [650] = {.lex_state = 231},
  [651] = {.lex_state = 147},
  [652] = {.lex_state = 147},
  [653] = {.lex_state = 275},
  [654] = {.lex_state = 147},
  [655] = {.lex_state = 276},
  [656] = {.lex_state = 147},
  [657] = {.lex_state = 147},
  [658] = {.lex_state = 225},
  [659] = {.lex_state = 276},
  [660] = {.lex_state = 276},
  [661] = {.lex_state = 171},
  [662] = {.lex_state = 277},
  [663] = {.lex_state = 194},
  [664] = {.lex_state = 153},
  [665] = {.lex_state = 202},
  [666] = {.lex_state = 204},
  [667] = {.lex_state = 147},
  [668] = {.lex_state = 171},
  [669] = {.lex_state = 277},
  [670] = {.lex_state = 276},
  [671] = {.lex_state = 276},
  [672] = {.lex_state = 236},
  [673] = {.lex_state = 221},
  [674] = {.lex_state = 153},
  [675] = {.lex_state = 278},
  [676] = {.lex_state = 202},
  [677] = {.lex_state = 171},
  [678] = {.lex_state = 279},
  [679] = {.lex_state = 194},
  [680] = {.lex_state = 153},
  [681] = {.lex_state = 202},
  [682] = {.lex_state = 204},
  [683] = {.lex_state = 147},
  [684] = {.lex_state = 171},
  [685] = {.lex_state = 279},
  [686] = {.lex_state = 204},
  [687] = {.lex_state = 147},
  [688] = {.lex_state = 171},
  [689] = {.lex_state = 280},
  [690] = {.lex_state = 194},
  [691] = {.lex_state = 153},
  [692] = {.lex_state = 171},
  [693] = {.lex_state = 280},
  [694] = {.lex_state = 231},
  [695] = {.lex_state = 187},
  [696] = {.lex_state = 177},
  [697] = {.lex_state = 153},
  [698] = {.lex_state = 202},
  [699] = {.lex_state = 171},
  [700] = {.lex_state = 225},
  [701] = {.lex_state = 204},
  [702] = {.lex_state = 147},
  [703] = {.lex_state = 171},
  [704] = {.lex_state = 147},
  [705] = {.lex_state = 281},
  [706] = {.lex_state = 147},
  [707] = {.lex_state = 282},
  [708] = {.lex_state = 147},
  [709] = {.lex_state = 147},
  [710] = {.lex_state = 282},
  [711] = {.lex_state = 282},
  [712] = {.lex_state = 171},
  [713] = {.lex_state = 283},
  [714] = {.lex_state = 194},
  [715] = {.lex_state = 153},
  [716] = {.lex_state = 202},
  [717] = {.lex_state = 204},
  [718] = {.lex_state = 147},
  [719] = {.lex_state = 171},
  [720] = {.lex_state = 283},
  [721] = {.lex_state = 282},
  [722] = {.lex_state = 282},
  [723] = {.lex_state = 154},
  [724] = {.lex_state = 154},
  [725] = {.lex_state = 154},
  [726] = {.lex_state = 284},
  [727] = {.lex_state = 267},
  [728] = {.lex_state = 231},
  [729] = {.lex_state = 187},
  [730] = {.lex_state = 253},
  [731] = {.lex_state = 285},
  [732] = {.lex_state = 186},
  [733] = {.lex_state = 187},
  [734] = {.lex_state = 154},
  [735] = {.lex_state = 141},
  [736] = {.lex_state = 286},
  [737] = {.lex_state = 229},
  [738] = {.lex_state = 147},
  [739] = {.lex_state = 276},
  [740] = {.lex_state = 147},
  [741] = {.lex_state = 287},
  [742] = {.lex_state = 153},
  [743] = {.lex_state = 288},
  [744] = {.lex_state = 147},
  [745] = {.lex_state = 147},
  [746] = {.lex_state = 147},
  [747] = {.lex_state = 288},
  [748] = {.lex_state = 171},
  [749] = {.lex_state = 289},
  [750] = {.lex_state = 194},
  [751] = {.lex_state = 153},
  [752] = {.lex_state = 202},
  [753] = {.lex_state = 204},
  [754] = {.lex_state = 147},
  [755] = {.lex_state = 171},
  [756] = {.lex_state = 289},
  [757] = {.lex_state = 288},
  [758] = {.lex_state = 171},
  [759] = {.lex_state = 290},
  [760] = {.lex_state = 194},
  [761] = {.lex_state = 153},
  [762] = {.lex_state = 202},
  [763] = {.lex_state = 204},
  [764] = {.lex_state = 147},
  [765] = {.lex_state = 171},
  [766] = {.lex_state = 290},
  [767] = {.lex_state = 288},
  [768] = {.lex_state = 288},
};

static unsigned short ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_source_file] = STATE(15),
    [sym__statement_list] = STATE(560),
    [sym__statement] = STATE(561),
    [sym__declaration_statement] = STATE(18),
    [sym__control_flow_statement] = STATE(18),
    [sym__item] = STATE(19),
    [sym_function_item] = STATE(20),
    [sym_let_declaration] = STATE(19),
    [sym__pattern] = STATE(562),
    [sym_type_expression] = STATE(563),
    [sym__expression_statement] = STATE(18),
    [sym__expression] = STATE(564),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_arguments] = STATE(36),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(565),
    [sym_if_let_expression] = STATE(566),
    [sym_else_tail] = STATE(567),
    [sym_match_expression] = STATE(568),
    [sym_match_arm] = STATE(569),
    [sym_match_pattern] = STATE(61),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [sym_parameters] = STATE(393),
    [sym_block] = STATE(570),
    [sym_empty_statement] = STATE(18),
    [aux_sym_source_file_repeat1] = STATE(25),
    [aux_sym__pattern_repeat1] = STATE(571),
    [aux_sym_match_expression_repeat1] = STATE(313),
    [aux_sym_match_pattern_repeat1] = STATE(445),
    [aux_sym_string_literal_repeat1] = STATE(116),
    [aux_sym_parameters_repeat1] = STATE(404),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_fn] = ACTIONS(5),
    [anon_sym_DASH_GT] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(11),
    [anon_sym_EQ] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(19),
    [anon_sym__] = ACTIONS(21),
    [anon_sym_u8] = ACTIONS(23),
    [anon_sym_i8] = ACTIONS(23),
    [anon_sym_u16] = ACTIONS(23),
    [anon_sym_i16] = ACTIONS(23),
    [anon_sym_u32] = ACTIONS(23),
    [anon_sym_i32] = ACTIONS(23),
    [anon_sym_u64] = ACTIONS(23),
    [anon_sym_i64] = ACTIONS(23),
    [anon_sym_isize] = ACTIONS(23),
    [anon_sym_usize] = ACTIONS(23),
    [anon_sym_f32] = ACTIONS(23),
    [anon_sym_f64] = ACTIONS(23),
    [sym_mutable_specifier] = ACTIONS(25),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(29),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(29),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(31),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(33),
    [anon_sym_AMP_AMP] = ACTIONS(33),
    [anon_sym_PIPE_PIPE] = ACTIONS(33),
    [anon_sym_return] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_RBRACK] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(41),
    [anon_sym_else] = ACTIONS(43),
    [anon_sym_match] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
    [anon_sym_RBRACE] = ACTIONS(49),
    [anon_sym_EQ_GT] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(53),
    [sym_number_literal] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(59),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(61),
    [sym_raw_string_literal] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(65),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_RBRACK_SLASH] = ACTIONS(67),
    [sym_byte_escape] = ACTIONS(69),
    [sym_boolean_literal] = ACTIONS(71),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(77),
  },
  [1] = {
    [sym_source_file] = STATE(15),
    [sym__statement_list] = STATE(16),
    [sym__statement] = STATE(17),
    [sym__declaration_statement] = STATE(18),
    [sym__control_flow_statement] = STATE(18),
    [sym__item] = STATE(19),
    [sym_function_item] = STATE(20),
    [sym_let_declaration] = STATE(19),
    [sym__expression_statement] = STATE(18),
    [sym__expression] = STATE(21),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(23),
    [sym_if_let_expression] = STATE(24),
    [sym_match_expression] = STATE(23),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [sym_empty_statement] = STATE(18),
    [aux_sym_source_file_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(81),
    [anon_sym_fn] = ACTIONS(83),
    [anon_sym_let] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(89),
    [anon_sym_return] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(95),
    [anon_sym_match] = ACTIONS(97),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_LF] = ACTIONS(107),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_fn] = ACTIONS(109),
    [anon_sym_let] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(107),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(107),
    [anon_sym_return] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_if] = ACTIONS(109),
    [anon_sym_match] = ACTIONS(109),
    [anon_sym_RBRACE] = ACTIONS(107),
    [sym_number_literal] = ACTIONS(109),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_raw_string_literal] = ACTIONS(109),
    [anon_sym_SQUOTE] = ACTIONS(107),
    [sym_boolean_literal] = ACTIONS(109),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(111),
  },
  [3] = {
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(113),
  },
  [4] = {
    [sym__pattern] = STATE(346),
    [sym__expression] = STATE(347),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym__] = ACTIONS(117),
    [sym_mutable_specifier] = ACTIONS(119),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(121),
    [anon_sym_return] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(125),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [5] = {
    [sym__expression] = STATE(163),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(129),
    [anon_sym_return] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(133),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [6] = {
    [sym__expression] = STATE(260),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(89),
    [anon_sym_return] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(135),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [7] = {
    [sym__expression] = STATE(537),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_SEMI] = ACTIONS(137),
    [anon_sym_EQ] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(137),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(141),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(143),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(143),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(139),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(137),
    [anon_sym_AMP_AMP] = ACTIONS(137),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
    [anon_sym_return] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(135),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [8] = {
    [sym__expression] = STATE(192),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(145),
    [anon_sym_return] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(149),
    [anon_sym_if] = ACTIONS(151),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [9] = {
    [sym__expression] = STATE(520),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_let] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [10] = {
    [sym__expression] = STATE(310),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [11] = {
    [anon_sym_SEMI] = ACTIONS(161),
    [anon_sym_COLON] = ACTIONS(161),
    [anon_sym_EQ] = ACTIONS(163),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_COMMA] = ACTIONS(161),
    [anon_sym_RPAREN] = ACTIONS(161),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(163),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(161),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(163),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(161),
    [anon_sym_AMP_AMP] = ACTIONS(161),
    [anon_sym_PIPE_PIPE] = ACTIONS(161),
    [anon_sym_RBRACK] = ACTIONS(161),
    [anon_sym_if] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(161),
    [anon_sym_RBRACE] = ACTIONS(161),
    [anon_sym_EQ_GT] = ACTIONS(161),
    [anon_sym_PIPE] = ACTIONS(163),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [12] = {
    [aux_sym_string_literal_repeat1] = STATE(116),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(167),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(169),
    [sym_byte_escape] = ACTIONS(167),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [13] = {
    [anon_sym_SQUOTE] = ACTIONS(171),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(173),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_RBRACK_SLASH] = ACTIONS(175),
    [sym_byte_escape] = ACTIONS(173),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [14] = {
    [anon_sym_SEMI] = ACTIONS(177),
    [anon_sym_COLON] = ACTIONS(177),
    [anon_sym_EQ] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_COMMA] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(177),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(179),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(177),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(179),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(177),
    [anon_sym_AMP_AMP] = ACTIONS(177),
    [anon_sym_PIPE_PIPE] = ACTIONS(177),
    [anon_sym_RBRACK] = ACTIONS(177),
    [anon_sym_if] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(177),
    [anon_sym_RBRACE] = ACTIONS(177),
    [anon_sym_EQ_GT] = ACTIONS(177),
    [anon_sym_PIPE] = ACTIONS(179),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(183),
    [anon_sym_SEMI] = ACTIONS(183),
    [anon_sym_fn] = ACTIONS(185),
    [anon_sym_let] = ACTIONS(185),
    [anon_sym_LPAREN] = ACTIONS(183),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(183),
    [anon_sym_return] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(183),
    [anon_sym_if] = ACTIONS(185),
    [anon_sym_match] = ACTIONS(185),
    [sym_number_literal] = ACTIONS(185),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_raw_string_literal] = ACTIONS(185),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [sym_boolean_literal] = ACTIONS(185),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(187),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(189),
    [anon_sym_LF] = ACTIONS(191),
    [anon_sym_SEMI] = ACTIONS(189),
    [anon_sym_fn] = ACTIONS(193),
    [anon_sym_let] = ACTIONS(193),
    [anon_sym_LPAREN] = ACTIONS(189),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(189),
    [anon_sym_return] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(189),
    [anon_sym_if] = ACTIONS(193),
    [anon_sym_match] = ACTIONS(193),
    [sym_number_literal] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(189),
    [sym_raw_string_literal] = ACTIONS(193),
    [anon_sym_SQUOTE] = ACTIONS(189),
    [sym_boolean_literal] = ACTIONS(193),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(195),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [anon_sym_LF] = ACTIONS(197),
    [anon_sym_SEMI] = ACTIONS(197),
    [anon_sym_fn] = ACTIONS(199),
    [anon_sym_let] = ACTIONS(199),
    [anon_sym_LPAREN] = ACTIONS(197),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(197),
    [anon_sym_return] = ACTIONS(199),
    [anon_sym_LBRACK] = ACTIONS(197),
    [anon_sym_if] = ACTIONS(199),
    [anon_sym_match] = ACTIONS(199),
    [anon_sym_RBRACE] = ACTIONS(197),
    [sym_number_literal] = ACTIONS(199),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [sym_raw_string_literal] = ACTIONS(199),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [sym_boolean_literal] = ACTIONS(199),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(201),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(203),
    [anon_sym_LF] = ACTIONS(203),
    [anon_sym_SEMI] = ACTIONS(203),
    [anon_sym_fn] = ACTIONS(205),
    [anon_sym_let] = ACTIONS(205),
    [anon_sym_LPAREN] = ACTIONS(203),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(203),
    [anon_sym_return] = ACTIONS(205),
    [anon_sym_LBRACK] = ACTIONS(203),
    [anon_sym_if] = ACTIONS(205),
    [anon_sym_match] = ACTIONS(205),
    [anon_sym_RBRACE] = ACTIONS(203),
    [sym_number_literal] = ACTIONS(205),
    [anon_sym_DQUOTE] = ACTIONS(203),
    [sym_raw_string_literal] = ACTIONS(205),
    [anon_sym_SQUOTE] = ACTIONS(203),
    [sym_boolean_literal] = ACTIONS(205),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(207),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [anon_sym_LF] = ACTIONS(209),
    [anon_sym_SEMI] = ACTIONS(209),
    [anon_sym_fn] = ACTIONS(211),
    [anon_sym_let] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(209),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(209),
    [anon_sym_return] = ACTIONS(211),
    [anon_sym_LBRACK] = ACTIONS(209),
    [anon_sym_if] = ACTIONS(211),
    [anon_sym_match] = ACTIONS(211),
    [anon_sym_RBRACE] = ACTIONS(209),
    [sym_number_literal] = ACTIONS(211),
    [anon_sym_DQUOTE] = ACTIONS(209),
    [sym_raw_string_literal] = ACTIONS(211),
    [anon_sym_SQUOTE] = ACTIONS(209),
    [sym_boolean_literal] = ACTIONS(211),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(213),
  },
  [21] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(215),
    [anon_sym_EQ] = ACTIONS(217),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(225),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(227),
    [anon_sym_AMP_AMP] = ACTIONS(229),
    [anon_sym_PIPE_PIPE] = ACTIONS(231),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [22] = {
    [anon_sym_SEMI] = ACTIONS(233),
    [anon_sym_COLON] = ACTIONS(233),
    [anon_sym_EQ] = ACTIONS(235),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_RPAREN] = ACTIONS(233),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(235),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(233),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(235),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(233),
    [anon_sym_AMP_AMP] = ACTIONS(233),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_RBRACK] = ACTIONS(233),
    [anon_sym_if] = ACTIONS(233),
    [anon_sym_LBRACE] = ACTIONS(233),
    [anon_sym_RBRACE] = ACTIONS(233),
    [anon_sym_EQ_GT] = ACTIONS(233),
    [anon_sym_PIPE] = ACTIONS(235),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(237),
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_SEMI] = ACTIONS(177),
    [anon_sym_fn] = ACTIONS(239),
    [anon_sym_let] = ACTIONS(239),
    [anon_sym_EQ] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(177),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(239),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(241),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(241),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(179),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(177),
    [anon_sym_AMP_AMP] = ACTIONS(177),
    [anon_sym_PIPE_PIPE] = ACTIONS(177),
    [anon_sym_return] = ACTIONS(239),
    [anon_sym_LBRACK] = ACTIONS(237),
    [anon_sym_if] = ACTIONS(239),
    [anon_sym_match] = ACTIONS(239),
    [anon_sym_RBRACE] = ACTIONS(177),
    [sym_number_literal] = ACTIONS(239),
    [anon_sym_DQUOTE] = ACTIONS(237),
    [sym_raw_string_literal] = ACTIONS(239),
    [anon_sym_SQUOTE] = ACTIONS(237),
    [sym_boolean_literal] = ACTIONS(239),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(243),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(245),
    [anon_sym_LF] = ACTIONS(245),
    [anon_sym_SEMI] = ACTIONS(245),
    [anon_sym_fn] = ACTIONS(247),
    [anon_sym_let] = ACTIONS(247),
    [anon_sym_LPAREN] = ACTIONS(245),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(245),
    [anon_sym_return] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(245),
    [anon_sym_if] = ACTIONS(247),
    [anon_sym_match] = ACTIONS(247),
    [anon_sym_RBRACE] = ACTIONS(245),
    [sym_number_literal] = ACTIONS(247),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [sym_raw_string_literal] = ACTIONS(247),
    [anon_sym_SQUOTE] = ACTIONS(245),
    [sym_boolean_literal] = ACTIONS(247),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(249),
  },
  [25] = {
    [sym__statement_list] = STATE(26),
    [sym__statement] = STATE(17),
    [sym__declaration_statement] = STATE(18),
    [sym__control_flow_statement] = STATE(18),
    [sym__item] = STATE(19),
    [sym_function_item] = STATE(20),
    [sym_let_declaration] = STATE(19),
    [sym__expression_statement] = STATE(18),
    [sym__expression] = STATE(21),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(23),
    [sym_if_let_expression] = STATE(24),
    [sym_match_expression] = STATE(23),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [sym_empty_statement] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(251),
    [anon_sym_SEMI] = ACTIONS(81),
    [anon_sym_fn] = ACTIONS(83),
    [anon_sym_let] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(89),
    [anon_sym_return] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(95),
    [anon_sym_match] = ACTIONS(97),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(253),
    [anon_sym_SEMI] = ACTIONS(253),
    [anon_sym_fn] = ACTIONS(255),
    [anon_sym_let] = ACTIONS(255),
    [anon_sym_LPAREN] = ACTIONS(253),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(253),
    [anon_sym_return] = ACTIONS(255),
    [anon_sym_LBRACK] = ACTIONS(253),
    [anon_sym_if] = ACTIONS(255),
    [anon_sym_match] = ACTIONS(255),
    [sym_number_literal] = ACTIONS(255),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [sym_raw_string_literal] = ACTIONS(255),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [sym_boolean_literal] = ACTIONS(255),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(257),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(259),
    [anon_sym_LF] = ACTIONS(259),
    [anon_sym_SEMI] = ACTIONS(259),
    [anon_sym_fn] = ACTIONS(261),
    [anon_sym_let] = ACTIONS(261),
    [anon_sym_LPAREN] = ACTIONS(259),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(259),
    [anon_sym_return] = ACTIONS(261),
    [anon_sym_LBRACK] = ACTIONS(259),
    [anon_sym_if] = ACTIONS(261),
    [anon_sym_match] = ACTIONS(261),
    [anon_sym_RBRACE] = ACTIONS(259),
    [sym_number_literal] = ACTIONS(261),
    [anon_sym_DQUOTE] = ACTIONS(259),
    [sym_raw_string_literal] = ACTIONS(261),
    [anon_sym_SQUOTE] = ACTIONS(259),
    [sym_boolean_literal] = ACTIONS(261),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(263),
  },
  [28] = {
    [sym__expression] = STATE(517),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(89),
    [anon_sym_return] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(135),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [29] = {
    [sym__expression] = STATE(90),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_RPAREN] = ACTIONS(265),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(267),
    [anon_sym_return] = ACTIONS(269),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(271),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [30] = {
    [sym__expression] = STATE(85),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(89),
    [anon_sym_return] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(135),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [31] = {
    [sym__expression] = STATE(516),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(89),
    [anon_sym_return] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(135),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [32] = {
    [sym__expression] = STATE(515),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(89),
    [anon_sym_return] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(135),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [33] = {
    [sym__expression] = STATE(514),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(89),
    [anon_sym_return] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(135),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [34] = {
    [sym__expression] = STATE(513),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(89),
    [anon_sym_return] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(135),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [35] = {
    [sym__expression] = STATE(39),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(89),
    [anon_sym_return] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(135),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [36] = {
    [anon_sym_SEMI] = ACTIONS(273),
    [anon_sym_COLON] = ACTIONS(273),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(273),
    [anon_sym_COMMA] = ACTIONS(273),
    [anon_sym_RPAREN] = ACTIONS(273),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(275),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(273),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(275),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(273),
    [anon_sym_AMP_AMP] = ACTIONS(273),
    [anon_sym_PIPE_PIPE] = ACTIONS(273),
    [anon_sym_RBRACK] = ACTIONS(273),
    [anon_sym_if] = ACTIONS(273),
    [anon_sym_LBRACE] = ACTIONS(273),
    [anon_sym_RBRACE] = ACTIONS(273),
    [anon_sym_EQ_GT] = ACTIONS(273),
    [anon_sym_PIPE] = ACTIONS(275),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [37] = {
    [sym__expression] = STATE(504),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [38] = {
    [sym__expression] = STATE(43),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [39] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(277),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(225),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(227),
    [anon_sym_AMP_AMP] = ACTIONS(229),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [40] = {
    [sym__expression] = STATE(260),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [41] = {
    [sym__expression] = STATE(503),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_EQ] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(137),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(143),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(143),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(139),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(137),
    [anon_sym_AMP_AMP] = ACTIONS(137),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(137),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [42] = {
    [sym__expression] = STATE(494),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [43] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(297),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [44] = {
    [sym__expression] = STATE(493),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [45] = {
    [sym__expression] = STATE(85),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [46] = {
    [sym__expression] = STATE(492),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [47] = {
    [sym__expression] = STATE(491),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [48] = {
    [sym__expression] = STATE(490),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [49] = {
    [sym__expression] = STATE(489),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [50] = {
    [sym__expression] = STATE(488),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [51] = {
    [sym__pattern] = STATE(58),
    [sym__expression] = STATE(59),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym_match_arm] = STATE(60),
    [sym_match_pattern] = STATE(61),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [aux_sym_match_expression_repeat1] = STATE(62),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym__] = ACTIONS(117),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(299),
    [anon_sym_return] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(303),
    [anon_sym_match] = ACTIONS(127),
    [anon_sym_RBRACE] = ACTIONS(305),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [52] = {
    [sym__expression] = STATE(299),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_RPAREN] = ACTIONS(307),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(267),
    [anon_sym_return] = ACTIONS(269),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(271),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [53] = {
    [anon_sym_SEMI] = ACTIONS(309),
    [anon_sym_COLON] = ACTIONS(309),
    [anon_sym_EQ] = ACTIONS(311),
    [anon_sym_if] = ACTIONS(309),
    [anon_sym_EQ_GT] = ACTIONS(309),
    [anon_sym_PIPE] = ACTIONS(309),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [54] = {
    [sym__expression] = STATE(260),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(299),
    [anon_sym_return] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(303),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [55] = {
    [sym__expression] = STATE(487),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_EQ] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(137),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(313),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(143),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(143),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(139),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(137),
    [anon_sym_AMP_AMP] = ACTIONS(137),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
    [anon_sym_return] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(139),
    [anon_sym_match] = ACTIONS(127),
    [anon_sym_EQ_GT] = ACTIONS(137),
    [anon_sym_PIPE] = ACTIONS(139),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [56] = {
    [sym__expression] = STATE(478),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [57] = {
    [anon_sym_SEMI] = ACTIONS(315),
    [anon_sym_COLON] = ACTIONS(315),
    [anon_sym_EQ] = ACTIONS(317),
    [anon_sym_LPAREN] = ACTIONS(315),
    [anon_sym_COMMA] = ACTIONS(315),
    [anon_sym_RPAREN] = ACTIONS(315),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(317),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(315),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(317),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(315),
    [anon_sym_AMP_AMP] = ACTIONS(315),
    [anon_sym_PIPE_PIPE] = ACTIONS(315),
    [anon_sym_RBRACK] = ACTIONS(315),
    [anon_sym_if] = ACTIONS(315),
    [anon_sym_LBRACE] = ACTIONS(315),
    [anon_sym_RBRACE] = ACTIONS(315),
    [anon_sym_EQ_GT] = ACTIONS(315),
    [anon_sym_PIPE] = ACTIONS(317),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [58] = {
    [aux_sym_match_pattern_repeat1] = STATE(445),
    [anon_sym_if] = ACTIONS(319),
    [anon_sym_EQ_GT] = ACTIONS(321),
    [anon_sym_PIPE] = ACTIONS(323),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [59] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(325),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(327),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(331),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(333),
    [anon_sym_AMP_AMP] = ACTIONS(335),
    [anon_sym_PIPE_PIPE] = ACTIONS(337),
    [anon_sym_if] = ACTIONS(339),
    [anon_sym_EQ_GT] = ACTIONS(339),
    [anon_sym_PIPE] = ACTIONS(341),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [60] = {
    [anon_sym_LPAREN] = ACTIONS(343),
    [anon_sym__] = ACTIONS(345),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(343),
    [anon_sym_return] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(343),
    [anon_sym_if] = ACTIONS(345),
    [anon_sym_match] = ACTIONS(345),
    [anon_sym_RBRACE] = ACTIONS(343),
    [sym_number_literal] = ACTIONS(345),
    [anon_sym_DQUOTE] = ACTIONS(343),
    [sym_raw_string_literal] = ACTIONS(345),
    [anon_sym_SQUOTE] = ACTIONS(343),
    [sym_boolean_literal] = ACTIONS(345),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(347),
  },
  [61] = {
    [anon_sym_EQ_GT] = ACTIONS(349),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [62] = {
    [sym__pattern] = STATE(58),
    [sym__expression] = STATE(59),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym_match_arm] = STATE(64),
    [sym_match_pattern] = STATE(61),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym__] = ACTIONS(117),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(299),
    [anon_sym_return] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(303),
    [anon_sym_match] = ACTIONS(127),
    [anon_sym_RBRACE] = ACTIONS(351),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [63] = {
    [anon_sym_SEMI] = ACTIONS(353),
    [anon_sym_COLON] = ACTIONS(353),
    [anon_sym_EQ] = ACTIONS(355),
    [anon_sym_LPAREN] = ACTIONS(353),
    [anon_sym_COMMA] = ACTIONS(353),
    [anon_sym_RPAREN] = ACTIONS(353),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(355),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(353),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(355),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(353),
    [anon_sym_AMP_AMP] = ACTIONS(353),
    [anon_sym_PIPE_PIPE] = ACTIONS(353),
    [anon_sym_RBRACK] = ACTIONS(353),
    [anon_sym_if] = ACTIONS(353),
    [anon_sym_LBRACE] = ACTIONS(353),
    [anon_sym_RBRACE] = ACTIONS(353),
    [anon_sym_EQ_GT] = ACTIONS(353),
    [anon_sym_PIPE] = ACTIONS(355),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [64] = {
    [anon_sym_LPAREN] = ACTIONS(357),
    [anon_sym__] = ACTIONS(359),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(357),
    [anon_sym_return] = ACTIONS(359),
    [anon_sym_LBRACK] = ACTIONS(357),
    [anon_sym_if] = ACTIONS(359),
    [anon_sym_match] = ACTIONS(359),
    [anon_sym_RBRACE] = ACTIONS(357),
    [sym_number_literal] = ACTIONS(359),
    [anon_sym_DQUOTE] = ACTIONS(357),
    [sym_raw_string_literal] = ACTIONS(359),
    [anon_sym_SQUOTE] = ACTIONS(357),
    [sym_boolean_literal] = ACTIONS(359),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(361),
  },
  [65] = {
    [sym__expression] = STATE(70),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [sym_block] = STATE(71),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(363),
    [anon_sym_return] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(367),
    [anon_sym_match] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [66] = {
    [sym__expression] = STATE(260),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(363),
    [anon_sym_return] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(367),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [67] = {
    [sym__expression] = STATE(429),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_EQ] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_COMMA] = ACTIONS(137),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(143),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(143),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(139),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(137),
    [anon_sym_AMP_AMP] = ACTIONS(137),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
    [anon_sym_return] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(367),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [68] = {
    [sym__expression] = STATE(420),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [69] = {
    [sym__statement_list] = STATE(129),
    [sym__statement] = STATE(130),
    [sym__declaration_statement] = STATE(18),
    [sym__control_flow_statement] = STATE(18),
    [sym__item] = STATE(19),
    [sym_function_item] = STATE(20),
    [sym_let_declaration] = STATE(19),
    [sym__expression_statement] = STATE(18),
    [sym__expression] = STATE(131),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(23),
    [sym_if_let_expression] = STATE(24),
    [sym_match_expression] = STATE(23),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [sym_empty_statement] = STATE(18),
    [anon_sym_SEMI] = ACTIONS(81),
    [anon_sym_fn] = ACTIONS(83),
    [anon_sym_let] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(373),
    [anon_sym_return] = ACTIONS(375),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(377),
    [anon_sym_match] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(379),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [70] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(381),
    [anon_sym_LPAREN] = ACTIONS(219),
    [anon_sym_COMMA] = ACTIONS(383),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(385),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(387),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(389),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(391),
    [anon_sym_AMP_AMP] = ACTIONS(393),
    [anon_sym_PIPE_PIPE] = ACTIONS(395),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [71] = {
    [anon_sym_LPAREN] = ACTIONS(397),
    [anon_sym__] = ACTIONS(399),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(397),
    [anon_sym_return] = ACTIONS(399),
    [anon_sym_LBRACK] = ACTIONS(397),
    [anon_sym_if] = ACTIONS(399),
    [anon_sym_match] = ACTIONS(399),
    [anon_sym_RBRACE] = ACTIONS(397),
    [sym_number_literal] = ACTIONS(399),
    [anon_sym_DQUOTE] = ACTIONS(397),
    [sym_raw_string_literal] = ACTIONS(399),
    [anon_sym_SQUOTE] = ACTIONS(397),
    [sym_boolean_literal] = ACTIONS(399),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(401),
  },
  [72] = {
    [sym__expression] = STATE(419),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(363),
    [anon_sym_return] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(367),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [73] = {
    [anon_sym_LPAREN] = ACTIONS(403),
    [anon_sym__] = ACTIONS(405),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(403),
    [anon_sym_return] = ACTIONS(405),
    [anon_sym_LBRACK] = ACTIONS(403),
    [anon_sym_if] = ACTIONS(405),
    [anon_sym_match] = ACTIONS(405),
    [anon_sym_RBRACE] = ACTIONS(403),
    [sym_number_literal] = ACTIONS(405),
    [anon_sym_DQUOTE] = ACTIONS(403),
    [sym_raw_string_literal] = ACTIONS(405),
    [anon_sym_SQUOTE] = ACTIONS(403),
    [sym_boolean_literal] = ACTIONS(405),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(407),
  },
  [74] = {
    [sym__expression] = STATE(85),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(363),
    [anon_sym_return] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(367),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [75] = {
    [sym__expression] = STATE(84),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(363),
    [anon_sym_return] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(367),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [76] = {
    [sym__expression] = STATE(83),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(363),
    [anon_sym_return] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(367),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [77] = {
    [sym__expression] = STATE(82),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(363),
    [anon_sym_return] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(367),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [78] = {
    [sym__expression] = STATE(81),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(363),
    [anon_sym_return] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(367),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [79] = {
    [sym__expression] = STATE(80),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(363),
    [anon_sym_return] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(367),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [80] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [anon_sym_COMMA] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(385),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(387),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(389),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(391),
    [anon_sym_AMP_AMP] = ACTIONS(393),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [81] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [anon_sym_COMMA] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(385),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(387),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(389),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(391),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [82] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [anon_sym_COMMA] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(385),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(387),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [83] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [anon_sym_COMMA] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(385),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(387),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(391),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [84] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [anon_sym_COMMA] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(385),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [85] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(277),
    [anon_sym_COLON] = ACTIONS(277),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [anon_sym_COMMA] = ACTIONS(277),
    [anon_sym_RPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_RBRACK] = ACTIONS(277),
    [anon_sym_if] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(277),
    [anon_sym_RBRACE] = ACTIONS(277),
    [anon_sym_EQ_GT] = ACTIONS(277),
    [anon_sym_PIPE] = ACTIONS(279),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [86] = {
    [anon_sym_SEMI] = ACTIONS(409),
    [anon_sym_COLON] = ACTIONS(409),
    [anon_sym_EQ] = ACTIONS(411),
    [anon_sym_LPAREN] = ACTIONS(409),
    [anon_sym_COMMA] = ACTIONS(409),
    [anon_sym_RPAREN] = ACTIONS(409),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(409),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(409),
    [anon_sym_AMP_AMP] = ACTIONS(409),
    [anon_sym_PIPE_PIPE] = ACTIONS(409),
    [anon_sym_RBRACK] = ACTIONS(409),
    [anon_sym_if] = ACTIONS(409),
    [anon_sym_LBRACE] = ACTIONS(409),
    [anon_sym_RBRACE] = ACTIONS(409),
    [anon_sym_EQ_GT] = ACTIONS(409),
    [anon_sym_PIPE] = ACTIONS(411),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [87] = {
    [sym__expression] = STATE(260),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(267),
    [anon_sym_return] = ACTIONS(269),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(271),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [88] = {
    [sym__expression] = STATE(418),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_EQ] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_COMMA] = ACTIONS(137),
    [anon_sym_RPAREN] = ACTIONS(137),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(413),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(143),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(143),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(139),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(137),
    [anon_sym_AMP_AMP] = ACTIONS(137),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
    [anon_sym_return] = ACTIONS(269),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(271),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [89] = {
    [sym__expression] = STATE(119),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [90] = {
    [sym_arguments] = STATE(36),
    [aux_sym__pattern_repeat1] = STATE(100),
    [anon_sym_EQ] = ACTIONS(415),
    [anon_sym_LPAREN] = ACTIONS(219),
    [anon_sym_COMMA] = ACTIONS(417),
    [anon_sym_RPAREN] = ACTIONS(419),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(425),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(427),
    [anon_sym_AMP_AMP] = ACTIONS(429),
    [anon_sym_PIPE_PIPE] = ACTIONS(431),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [91] = {
    [sym__expression] = STATE(110),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(267),
    [anon_sym_return] = ACTIONS(269),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(271),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [92] = {
    [sym__expression] = STATE(109),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(267),
    [anon_sym_return] = ACTIONS(269),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(271),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [93] = {
    [anon_sym_SEMI] = ACTIONS(433),
    [anon_sym_COLON] = ACTIONS(433),
    [anon_sym_EQ] = ACTIONS(435),
    [anon_sym_LPAREN] = ACTIONS(433),
    [anon_sym_COMMA] = ACTIONS(433),
    [anon_sym_RPAREN] = ACTIONS(433),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(433),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(433),
    [anon_sym_AMP_AMP] = ACTIONS(433),
    [anon_sym_PIPE_PIPE] = ACTIONS(433),
    [anon_sym_RBRACK] = ACTIONS(433),
    [anon_sym_if] = ACTIONS(433),
    [anon_sym_LBRACE] = ACTIONS(433),
    [anon_sym_RBRACE] = ACTIONS(433),
    [anon_sym_EQ_GT] = ACTIONS(433),
    [anon_sym_PIPE] = ACTIONS(435),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [94] = {
    [sym__expression] = STATE(85),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(267),
    [anon_sym_return] = ACTIONS(269),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(271),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [95] = {
    [sym__expression] = STATE(108),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(267),
    [anon_sym_return] = ACTIONS(269),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(271),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [96] = {
    [sym__expression] = STATE(107),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(267),
    [anon_sym_return] = ACTIONS(269),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(271),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [97] = {
    [sym__expression] = STATE(106),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(267),
    [anon_sym_return] = ACTIONS(269),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(271),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [98] = {
    [sym__expression] = STATE(105),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(267),
    [anon_sym_return] = ACTIONS(269),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(271),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [99] = {
    [sym__expression] = STATE(104),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(267),
    [anon_sym_return] = ACTIONS(269),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(271),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [100] = {
    [anon_sym_COMMA] = ACTIONS(437),
    [anon_sym_RPAREN] = ACTIONS(439),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [101] = {
    [sym__expression] = STATE(103),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(267),
    [anon_sym_return] = ACTIONS(269),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(271),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [102] = {
    [anon_sym_SEMI] = ACTIONS(441),
    [anon_sym_COLON] = ACTIONS(441),
    [anon_sym_EQ] = ACTIONS(443),
    [anon_sym_LPAREN] = ACTIONS(441),
    [anon_sym_COMMA] = ACTIONS(441),
    [anon_sym_RPAREN] = ACTIONS(441),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(443),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(443),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(441),
    [anon_sym_AMP_AMP] = ACTIONS(441),
    [anon_sym_PIPE_PIPE] = ACTIONS(441),
    [anon_sym_RBRACK] = ACTIONS(441),
    [anon_sym_if] = ACTIONS(441),
    [anon_sym_LBRACE] = ACTIONS(441),
    [anon_sym_RBRACE] = ACTIONS(441),
    [anon_sym_EQ_GT] = ACTIONS(441),
    [anon_sym_PIPE] = ACTIONS(443),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [103] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(415),
    [anon_sym_LPAREN] = ACTIONS(219),
    [anon_sym_COMMA] = ACTIONS(445),
    [anon_sym_RPAREN] = ACTIONS(445),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(425),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(427),
    [anon_sym_AMP_AMP] = ACTIONS(429),
    [anon_sym_PIPE_PIPE] = ACTIONS(431),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [104] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [anon_sym_COMMA] = ACTIONS(277),
    [anon_sym_RPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(425),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(427),
    [anon_sym_AMP_AMP] = ACTIONS(429),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [105] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [anon_sym_COMMA] = ACTIONS(277),
    [anon_sym_RPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(425),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(427),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [106] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [anon_sym_COMMA] = ACTIONS(277),
    [anon_sym_RPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [107] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [anon_sym_COMMA] = ACTIONS(277),
    [anon_sym_RPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(427),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [108] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [anon_sym_COMMA] = ACTIONS(277),
    [anon_sym_RPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [109] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(415),
    [anon_sym_LPAREN] = ACTIONS(219),
    [anon_sym_COMMA] = ACTIONS(447),
    [anon_sym_RPAREN] = ACTIONS(447),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(425),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(427),
    [anon_sym_AMP_AMP] = ACTIONS(429),
    [anon_sym_PIPE_PIPE] = ACTIONS(431),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [110] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(449),
    [anon_sym_LPAREN] = ACTIONS(451),
    [anon_sym_COMMA] = ACTIONS(451),
    [anon_sym_RPAREN] = ACTIONS(451),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(425),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(427),
    [anon_sym_AMP_AMP] = ACTIONS(429),
    [anon_sym_PIPE_PIPE] = ACTIONS(431),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [111] = {
    [anon_sym_SEMI] = ACTIONS(453),
    [anon_sym_COLON] = ACTIONS(453),
    [anon_sym_EQ] = ACTIONS(455),
    [anon_sym_LPAREN] = ACTIONS(453),
    [anon_sym_COMMA] = ACTIONS(453),
    [anon_sym_RPAREN] = ACTIONS(453),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(455),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(453),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(455),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(453),
    [anon_sym_AMP_AMP] = ACTIONS(453),
    [anon_sym_PIPE_PIPE] = ACTIONS(453),
    [anon_sym_RBRACK] = ACTIONS(453),
    [anon_sym_if] = ACTIONS(453),
    [anon_sym_LBRACE] = ACTIONS(453),
    [anon_sym_RBRACE] = ACTIONS(453),
    [anon_sym_EQ_GT] = ACTIONS(453),
    [anon_sym_PIPE] = ACTIONS(455),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [112] = {
    [anon_sym_SQUOTE] = ACTIONS(457),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [113] = {
    [anon_sym_SEMI] = ACTIONS(459),
    [anon_sym_COLON] = ACTIONS(459),
    [anon_sym_EQ] = ACTIONS(461),
    [anon_sym_LPAREN] = ACTIONS(459),
    [anon_sym_COMMA] = ACTIONS(459),
    [anon_sym_RPAREN] = ACTIONS(459),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(461),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(459),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(461),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(459),
    [anon_sym_AMP_AMP] = ACTIONS(459),
    [anon_sym_PIPE_PIPE] = ACTIONS(459),
    [anon_sym_RBRACK] = ACTIONS(459),
    [anon_sym_if] = ACTIONS(459),
    [anon_sym_LBRACE] = ACTIONS(459),
    [anon_sym_RBRACE] = ACTIONS(459),
    [anon_sym_EQ_GT] = ACTIONS(459),
    [anon_sym_PIPE] = ACTIONS(461),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [114] = {
    [anon_sym_SEMI] = ACTIONS(463),
    [anon_sym_COLON] = ACTIONS(463),
    [anon_sym_EQ] = ACTIONS(465),
    [anon_sym_LPAREN] = ACTIONS(463),
    [anon_sym_COMMA] = ACTIONS(463),
    [anon_sym_RPAREN] = ACTIONS(463),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(465),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(463),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(465),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(463),
    [anon_sym_AMP_AMP] = ACTIONS(463),
    [anon_sym_PIPE_PIPE] = ACTIONS(463),
    [anon_sym_RBRACK] = ACTIONS(463),
    [anon_sym_if] = ACTIONS(463),
    [anon_sym_LBRACE] = ACTIONS(463),
    [anon_sym_RBRACE] = ACTIONS(463),
    [anon_sym_EQ_GT] = ACTIONS(463),
    [anon_sym_PIPE] = ACTIONS(465),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [115] = {
    [anon_sym_DQUOTE] = ACTIONS(467),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(467),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(469),
    [sym_byte_escape] = ACTIONS(467),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [116] = {
    [anon_sym_DQUOTE] = ACTIONS(471),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(473),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(475),
    [sym_byte_escape] = ACTIONS(473),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [117] = {
    [anon_sym_SEMI] = ACTIONS(477),
    [anon_sym_COLON] = ACTIONS(477),
    [anon_sym_EQ] = ACTIONS(479),
    [anon_sym_LPAREN] = ACTIONS(477),
    [anon_sym_COMMA] = ACTIONS(477),
    [anon_sym_RPAREN] = ACTIONS(477),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(477),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(477),
    [anon_sym_AMP_AMP] = ACTIONS(477),
    [anon_sym_PIPE_PIPE] = ACTIONS(477),
    [anon_sym_RBRACK] = ACTIONS(477),
    [anon_sym_if] = ACTIONS(477),
    [anon_sym_LBRACE] = ACTIONS(477),
    [anon_sym_RBRACE] = ACTIONS(477),
    [anon_sym_EQ_GT] = ACTIONS(477),
    [anon_sym_PIPE] = ACTIONS(479),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [118] = {
    [anon_sym_DQUOTE] = ACTIONS(481),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(481),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(483),
    [sym_byte_escape] = ACTIONS(481),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [119] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(120),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [120] = {
    [sym_else_tail] = STATE(122),
    [anon_sym_EQ] = ACTIONS(485),
    [anon_sym_LPAREN] = ACTIONS(487),
    [anon_sym_COMMA] = ACTIONS(487),
    [anon_sym_RPAREN] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(487),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [anon_sym_PIPE_PIPE] = ACTIONS(487),
    [anon_sym_else] = ACTIONS(489),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [121] = {
    [sym_if_expression] = STATE(124),
    [sym_if_let_expression] = STATE(124),
    [sym_block] = STATE(124),
    [anon_sym_if] = ACTIONS(491),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [122] = {
    [anon_sym_SEMI] = ACTIONS(493),
    [anon_sym_COLON] = ACTIONS(493),
    [anon_sym_EQ] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(493),
    [anon_sym_COMMA] = ACTIONS(493),
    [anon_sym_RPAREN] = ACTIONS(493),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(493),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(493),
    [anon_sym_AMP_AMP] = ACTIONS(493),
    [anon_sym_PIPE_PIPE] = ACTIONS(493),
    [anon_sym_RBRACK] = ACTIONS(493),
    [anon_sym_if] = ACTIONS(493),
    [anon_sym_LBRACE] = ACTIONS(493),
    [anon_sym_RBRACE] = ACTIONS(493),
    [anon_sym_EQ_GT] = ACTIONS(493),
    [anon_sym_PIPE] = ACTIONS(495),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [123] = {
    [sym__expression] = STATE(119),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_let] = ACTIONS(497),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [124] = {
    [anon_sym_SEMI] = ACTIONS(499),
    [anon_sym_COLON] = ACTIONS(499),
    [anon_sym_EQ] = ACTIONS(501),
    [anon_sym_LPAREN] = ACTIONS(499),
    [anon_sym_COMMA] = ACTIONS(499),
    [anon_sym_RPAREN] = ACTIONS(499),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(499),
    [anon_sym_AMP_AMP] = ACTIONS(499),
    [anon_sym_PIPE_PIPE] = ACTIONS(499),
    [anon_sym_RBRACK] = ACTIONS(499),
    [anon_sym_if] = ACTIONS(499),
    [anon_sym_LBRACE] = ACTIONS(499),
    [anon_sym_RBRACE] = ACTIONS(499),
    [anon_sym_EQ_GT] = ACTIONS(499),
    [anon_sym_PIPE] = ACTIONS(501),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [125] = {
    [sym__expression] = STATE(260),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(373),
    [anon_sym_return] = ACTIONS(375),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(503),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [126] = {
    [sym__expression] = STATE(341),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_SEMI] = ACTIONS(137),
    [anon_sym_EQ] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(137),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(505),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(143),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(143),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(139),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(137),
    [anon_sym_AMP_AMP] = ACTIONS(137),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
    [anon_sym_return] = ACTIONS(375),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(503),
    [anon_sym_match] = ACTIONS(127),
    [anon_sym_RBRACE] = ACTIONS(137),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [127] = {
    [sym__expression] = STATE(316),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_let] = ACTIONS(507),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [128] = {
    [anon_sym_SEMI] = ACTIONS(509),
    [anon_sym_COLON] = ACTIONS(509),
    [anon_sym_EQ] = ACTIONS(511),
    [anon_sym_LPAREN] = ACTIONS(509),
    [anon_sym_COMMA] = ACTIONS(509),
    [anon_sym_RPAREN] = ACTIONS(509),
    [anon_sym__] = ACTIONS(511),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(511),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(513),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(513),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(511),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(509),
    [anon_sym_AMP_AMP] = ACTIONS(509),
    [anon_sym_PIPE_PIPE] = ACTIONS(509),
    [anon_sym_return] = ACTIONS(511),
    [anon_sym_LBRACK] = ACTIONS(509),
    [anon_sym_RBRACK] = ACTIONS(509),
    [anon_sym_if] = ACTIONS(511),
    [anon_sym_else] = ACTIONS(511),
    [anon_sym_match] = ACTIONS(511),
    [anon_sym_LBRACE] = ACTIONS(509),
    [anon_sym_RBRACE] = ACTIONS(509),
    [anon_sym_EQ_GT] = ACTIONS(509),
    [anon_sym_PIPE] = ACTIONS(511),
    [sym_number_literal] = ACTIONS(511),
    [anon_sym_DQUOTE] = ACTIONS(509),
    [sym_raw_string_literal] = ACTIONS(511),
    [anon_sym_SQUOTE] = ACTIONS(509),
    [sym_boolean_literal] = ACTIONS(511),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(513),
  },
  [129] = {
    [anon_sym_RBRACE] = ACTIONS(515),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [130] = {
    [anon_sym_LF] = ACTIONS(517),
    [anon_sym_SEMI] = ACTIONS(517),
    [anon_sym_RBRACE] = ACTIONS(189),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [131] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(215),
    [anon_sym_EQ] = ACTIONS(519),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(521),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(523),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(525),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(527),
    [anon_sym_AMP_AMP] = ACTIONS(529),
    [anon_sym_PIPE_PIPE] = ACTIONS(531),
    [anon_sym_RBRACE] = ACTIONS(515),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [132] = {
    [sym__expression] = STATE(306),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(373),
    [anon_sym_return] = ACTIONS(375),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(503),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [133] = {
    [sym__expression] = STATE(85),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(373),
    [anon_sym_return] = ACTIONS(375),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(503),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [134] = {
    [sym__expression] = STATE(305),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(373),
    [anon_sym_return] = ACTIONS(375),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(503),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [135] = {
    [sym__expression] = STATE(304),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(373),
    [anon_sym_return] = ACTIONS(375),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(503),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [136] = {
    [sym__expression] = STATE(303),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(373),
    [anon_sym_return] = ACTIONS(375),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(503),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [137] = {
    [sym__expression] = STATE(302),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(373),
    [anon_sym_return] = ACTIONS(375),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(503),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [138] = {
    [sym__expression] = STATE(141),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(373),
    [anon_sym_return] = ACTIONS(375),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(503),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [139] = {
    [anon_sym_SEMI] = ACTIONS(533),
    [anon_sym_COLON] = ACTIONS(533),
    [anon_sym_EQ] = ACTIONS(535),
    [anon_sym_LPAREN] = ACTIONS(533),
    [anon_sym_COMMA] = ACTIONS(533),
    [anon_sym_RPAREN] = ACTIONS(533),
    [anon_sym__] = ACTIONS(535),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(535),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(537),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(537),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(535),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(533),
    [anon_sym_AMP_AMP] = ACTIONS(533),
    [anon_sym_PIPE_PIPE] = ACTIONS(533),
    [anon_sym_return] = ACTIONS(535),
    [anon_sym_LBRACK] = ACTIONS(533),
    [anon_sym_RBRACK] = ACTIONS(533),
    [anon_sym_if] = ACTIONS(535),
    [anon_sym_else] = ACTIONS(535),
    [anon_sym_match] = ACTIONS(535),
    [anon_sym_LBRACE] = ACTIONS(533),
    [anon_sym_RBRACE] = ACTIONS(533),
    [anon_sym_EQ_GT] = ACTIONS(533),
    [anon_sym_PIPE] = ACTIONS(535),
    [sym_number_literal] = ACTIONS(535),
    [anon_sym_DQUOTE] = ACTIONS(533),
    [sym_raw_string_literal] = ACTIONS(535),
    [anon_sym_SQUOTE] = ACTIONS(533),
    [sym_boolean_literal] = ACTIONS(535),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(537),
  },
  [140] = {
    [sym__expression] = STATE(142),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [141] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(277),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(521),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(523),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(525),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(527),
    [anon_sym_AMP_AMP] = ACTIONS(529),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_RBRACE] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [142] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(143),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [143] = {
    [sym_else_tail] = STATE(122),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_EQ] = ACTIONS(485),
    [anon_sym_LPAREN] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(487),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [anon_sym_PIPE_PIPE] = ACTIONS(487),
    [anon_sym_else] = ACTIONS(539),
    [anon_sym_RBRACE] = ACTIONS(487),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [144] = {
    [sym_if_expression] = STATE(124),
    [sym_if_let_expression] = STATE(124),
    [sym_block] = STATE(124),
    [anon_sym_if] = ACTIONS(541),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [145] = {
    [sym__expression] = STATE(142),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_let] = ACTIONS(543),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [146] = {
    [sym__pattern] = STATE(150),
    [sym__expression] = STATE(151),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym__] = ACTIONS(117),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(545),
    [anon_sym_return] = ACTIONS(547),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [147] = {
    [sym__expression] = STATE(260),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(545),
    [anon_sym_return] = ACTIONS(547),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [148] = {
    [sym__expression] = STATE(297),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_EQ] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(137),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(551),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(143),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(143),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(139),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(137),
    [anon_sym_AMP_AMP] = ACTIONS(137),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
    [anon_sym_return] = ACTIONS(547),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [149] = {
    [sym__expression] = STATE(288),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [150] = {
    [anon_sym_EQ] = ACTIONS(553),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [151] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(341),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(555),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(559),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(561),
    [anon_sym_AMP_AMP] = ACTIONS(563),
    [anon_sym_PIPE_PIPE] = ACTIONS(565),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [152] = {
    [sym__expression] = STATE(284),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(545),
    [anon_sym_return] = ACTIONS(547),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [153] = {
    [sym__expression] = STATE(85),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(545),
    [anon_sym_return] = ACTIONS(547),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [154] = {
    [sym__expression] = STATE(283),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(545),
    [anon_sym_return] = ACTIONS(547),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [155] = {
    [sym__expression] = STATE(282),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(545),
    [anon_sym_return] = ACTIONS(547),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [156] = {
    [sym__expression] = STATE(281),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(545),
    [anon_sym_return] = ACTIONS(547),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [157] = {
    [sym__expression] = STATE(280),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(545),
    [anon_sym_return] = ACTIONS(547),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [158] = {
    [sym__expression] = STATE(159),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(545),
    [anon_sym_return] = ACTIONS(547),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [159] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(555),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(559),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(561),
    [anon_sym_AMP_AMP] = ACTIONS(563),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [160] = {
    [sym__expression] = STATE(260),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(129),
    [anon_sym_return] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(133),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [161] = {
    [sym__expression] = STATE(279),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_EQ] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_RPAREN] = ACTIONS(137),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(567),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(143),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(143),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(139),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(137),
    [anon_sym_AMP_AMP] = ACTIONS(137),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
    [anon_sym_return] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(133),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [162] = {
    [sym__expression] = STATE(178),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [163] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(569),
    [anon_sym_LPAREN] = ACTIONS(219),
    [anon_sym_RPAREN] = ACTIONS(571),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(575),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(577),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(579),
    [anon_sym_AMP_AMP] = ACTIONS(581),
    [anon_sym_PIPE_PIPE] = ACTIONS(583),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [164] = {
    [sym__expression] = STATE(177),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(129),
    [anon_sym_return] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(133),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [165] = {
    [anon_sym_SEMI] = ACTIONS(585),
    [anon_sym_COLON] = ACTIONS(585),
    [anon_sym_EQ] = ACTIONS(587),
    [anon_sym_LPAREN] = ACTIONS(585),
    [anon_sym_COMMA] = ACTIONS(585),
    [anon_sym_RPAREN] = ACTIONS(585),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(587),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(585),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(587),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(585),
    [anon_sym_AMP_AMP] = ACTIONS(585),
    [anon_sym_PIPE_PIPE] = ACTIONS(585),
    [anon_sym_RBRACK] = ACTIONS(585),
    [anon_sym_if] = ACTIONS(585),
    [anon_sym_LBRACE] = ACTIONS(585),
    [anon_sym_RBRACE] = ACTIONS(585),
    [anon_sym_EQ_GT] = ACTIONS(585),
    [anon_sym_PIPE] = ACTIONS(587),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [166] = {
    [sym__expression] = STATE(85),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(129),
    [anon_sym_return] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(133),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [167] = {
    [sym__expression] = STATE(176),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(129),
    [anon_sym_return] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(133),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [168] = {
    [sym__expression] = STATE(175),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(129),
    [anon_sym_return] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(133),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [169] = {
    [sym__expression] = STATE(174),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(129),
    [anon_sym_return] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(133),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [170] = {
    [sym__expression] = STATE(173),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(129),
    [anon_sym_return] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(133),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [171] = {
    [sym__expression] = STATE(172),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(129),
    [anon_sym_return] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(133),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [172] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [anon_sym_RPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(575),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(577),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(579),
    [anon_sym_AMP_AMP] = ACTIONS(581),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [173] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [anon_sym_RPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(575),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(577),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(579),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [174] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [anon_sym_RPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(575),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [175] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [anon_sym_RPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(575),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(579),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [176] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [anon_sym_RPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [177] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(449),
    [anon_sym_LPAREN] = ACTIONS(451),
    [anon_sym_RPAREN] = ACTIONS(451),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(575),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(577),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(579),
    [anon_sym_AMP_AMP] = ACTIONS(581),
    [anon_sym_PIPE_PIPE] = ACTIONS(583),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [178] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(179),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [179] = {
    [sym_else_tail] = STATE(122),
    [anon_sym_EQ] = ACTIONS(485),
    [anon_sym_LPAREN] = ACTIONS(487),
    [anon_sym_RPAREN] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(487),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [anon_sym_PIPE_PIPE] = ACTIONS(487),
    [anon_sym_else] = ACTIONS(589),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [180] = {
    [sym_if_expression] = STATE(124),
    [sym_if_let_expression] = STATE(124),
    [sym_block] = STATE(124),
    [anon_sym_if] = ACTIONS(591),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [181] = {
    [sym__expression] = STATE(178),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_let] = ACTIONS(593),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [182] = {
    [sym__pattern] = STATE(183),
    [sym__expression] = STATE(151),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym__] = ACTIONS(117),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(545),
    [anon_sym_return] = ACTIONS(547),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [183] = {
    [anon_sym_EQ] = ACTIONS(595),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [184] = {
    [sym__expression] = STATE(185),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [185] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(186),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [186] = {
    [sym_else_tail] = STATE(187),
    [anon_sym_EQ] = ACTIONS(597),
    [anon_sym_LPAREN] = ACTIONS(599),
    [anon_sym_RPAREN] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(599),
    [anon_sym_AMP_AMP] = ACTIONS(599),
    [anon_sym_PIPE_PIPE] = ACTIONS(599),
    [anon_sym_else] = ACTIONS(589),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [187] = {
    [anon_sym_SEMI] = ACTIONS(601),
    [anon_sym_COLON] = ACTIONS(601),
    [anon_sym_EQ] = ACTIONS(603),
    [anon_sym_LPAREN] = ACTIONS(601),
    [anon_sym_COMMA] = ACTIONS(601),
    [anon_sym_RPAREN] = ACTIONS(601),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(601),
    [anon_sym_AMP_AMP] = ACTIONS(601),
    [anon_sym_PIPE_PIPE] = ACTIONS(601),
    [anon_sym_RBRACK] = ACTIONS(601),
    [anon_sym_if] = ACTIONS(601),
    [anon_sym_LBRACE] = ACTIONS(601),
    [anon_sym_RBRACE] = ACTIONS(601),
    [anon_sym_EQ_GT] = ACTIONS(601),
    [anon_sym_PIPE] = ACTIONS(603),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [188] = {
    [sym__expression] = STATE(260),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(145),
    [anon_sym_return] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(151),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [189] = {
    [sym__expression] = STATE(278),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_SEMI] = ACTIONS(137),
    [anon_sym_EQ] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_COMMA] = ACTIONS(137),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(605),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(143),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(143),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(139),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(137),
    [anon_sym_AMP_AMP] = ACTIONS(137),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
    [anon_sym_return] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(137),
    [anon_sym_if] = ACTIONS(151),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [190] = {
    [anon_sym_SEMI] = ACTIONS(607),
    [anon_sym_COLON] = ACTIONS(607),
    [anon_sym_EQ] = ACTIONS(609),
    [anon_sym_LPAREN] = ACTIONS(607),
    [anon_sym_COMMA] = ACTIONS(607),
    [anon_sym_RPAREN] = ACTIONS(607),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(607),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(609),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(607),
    [anon_sym_AMP_AMP] = ACTIONS(607),
    [anon_sym_PIPE_PIPE] = ACTIONS(607),
    [anon_sym_RBRACK] = ACTIONS(607),
    [anon_sym_if] = ACTIONS(607),
    [anon_sym_LBRACE] = ACTIONS(607),
    [anon_sym_RBRACE] = ACTIONS(607),
    [anon_sym_EQ_GT] = ACTIONS(607),
    [anon_sym_PIPE] = ACTIONS(609),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [191] = {
    [sym__expression] = STATE(269),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [192] = {
    [sym_arguments] = STATE(36),
    [aux_sym__pattern_repeat1] = STATE(203),
    [anon_sym_SEMI] = ACTIONS(611),
    [anon_sym_EQ] = ACTIONS(613),
    [anon_sym_LPAREN] = ACTIONS(219),
    [anon_sym_COMMA] = ACTIONS(615),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(617),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(623),
    [anon_sym_AMP_AMP] = ACTIONS(625),
    [anon_sym_PIPE_PIPE] = ACTIONS(627),
    [anon_sym_RBRACK] = ACTIONS(629),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [193] = {
    [sym__expression] = STATE(235),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(631),
    [anon_sym_return] = ACTIONS(633),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(635),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [194] = {
    [sym__expression] = STATE(268),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(145),
    [anon_sym_return] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(151),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [195] = {
    [sym__expression] = STATE(267),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(637),
    [anon_sym_return] = ACTIONS(639),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(641),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [196] = {
    [sym__expression] = STATE(85),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(145),
    [anon_sym_return] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(151),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [197] = {
    [sym__expression] = STATE(266),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(145),
    [anon_sym_return] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(151),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [198] = {
    [sym__expression] = STATE(265),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(145),
    [anon_sym_return] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(151),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [199] = {
    [sym__expression] = STATE(264),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(145),
    [anon_sym_return] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(151),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [200] = {
    [sym__expression] = STATE(263),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(145),
    [anon_sym_return] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(151),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [201] = {
    [sym__expression] = STATE(262),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(145),
    [anon_sym_return] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(151),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [202] = {
    [anon_sym_SEMI] = ACTIONS(643),
    [anon_sym_COLON] = ACTIONS(643),
    [anon_sym_EQ] = ACTIONS(645),
    [anon_sym_LPAREN] = ACTIONS(643),
    [anon_sym_COMMA] = ACTIONS(643),
    [anon_sym_RPAREN] = ACTIONS(643),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(645),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(645),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(643),
    [anon_sym_AMP_AMP] = ACTIONS(643),
    [anon_sym_PIPE_PIPE] = ACTIONS(643),
    [anon_sym_RBRACK] = ACTIONS(643),
    [anon_sym_if] = ACTIONS(643),
    [anon_sym_LBRACE] = ACTIONS(643),
    [anon_sym_RBRACE] = ACTIONS(643),
    [anon_sym_EQ_GT] = ACTIONS(643),
    [anon_sym_PIPE] = ACTIONS(645),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [203] = {
    [anon_sym_COMMA] = ACTIONS(647),
    [anon_sym_RBRACK] = ACTIONS(649),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [204] = {
    [sym__expression] = STATE(209),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(637),
    [anon_sym_return] = ACTIONS(639),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(641),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [205] = {
    [anon_sym_SEMI] = ACTIONS(651),
    [anon_sym_COLON] = ACTIONS(651),
    [anon_sym_EQ] = ACTIONS(653),
    [anon_sym_LPAREN] = ACTIONS(651),
    [anon_sym_COMMA] = ACTIONS(651),
    [anon_sym_RPAREN] = ACTIONS(651),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(653),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(651),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(653),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(651),
    [anon_sym_AMP_AMP] = ACTIONS(651),
    [anon_sym_PIPE_PIPE] = ACTIONS(651),
    [anon_sym_RBRACK] = ACTIONS(651),
    [anon_sym_if] = ACTIONS(651),
    [anon_sym_LBRACE] = ACTIONS(651),
    [anon_sym_RBRACE] = ACTIONS(651),
    [anon_sym_EQ_GT] = ACTIONS(651),
    [anon_sym_PIPE] = ACTIONS(653),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [206] = {
    [sym__expression] = STATE(260),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(637),
    [anon_sym_return] = ACTIONS(639),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(641),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [207] = {
    [sym__expression] = STATE(261),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_EQ] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_COMMA] = ACTIONS(137),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(655),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(143),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(143),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(139),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(137),
    [anon_sym_AMP_AMP] = ACTIONS(137),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
    [anon_sym_return] = ACTIONS(639),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(137),
    [anon_sym_if] = ACTIONS(641),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [208] = {
    [sym__expression] = STATE(223),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [209] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(657),
    [anon_sym_LPAREN] = ACTIONS(219),
    [anon_sym_COMMA] = ACTIONS(445),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(665),
    [anon_sym_AMP_AMP] = ACTIONS(667),
    [anon_sym_PIPE_PIPE] = ACTIONS(669),
    [anon_sym_RBRACK] = ACTIONS(445),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [210] = {
    [sym__expression] = STATE(222),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(637),
    [anon_sym_return] = ACTIONS(639),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(641),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [211] = {
    [sym__expression] = STATE(85),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(637),
    [anon_sym_return] = ACTIONS(639),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(641),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [212] = {
    [sym__expression] = STATE(221),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(637),
    [anon_sym_return] = ACTIONS(639),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(641),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [213] = {
    [sym__expression] = STATE(220),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(637),
    [anon_sym_return] = ACTIONS(639),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(641),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [214] = {
    [sym__expression] = STATE(219),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(637),
    [anon_sym_return] = ACTIONS(639),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(641),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [215] = {
    [sym__expression] = STATE(218),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(637),
    [anon_sym_return] = ACTIONS(639),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(641),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [216] = {
    [sym__expression] = STATE(217),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(637),
    [anon_sym_return] = ACTIONS(639),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(641),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [217] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [anon_sym_COMMA] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(665),
    [anon_sym_AMP_AMP] = ACTIONS(667),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_RBRACK] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [218] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [anon_sym_COMMA] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(665),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_RBRACK] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [219] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [anon_sym_COMMA] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_RBRACK] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [220] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [anon_sym_COMMA] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(665),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_RBRACK] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [221] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [anon_sym_COMMA] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_RBRACK] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [222] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(449),
    [anon_sym_LPAREN] = ACTIONS(451),
    [anon_sym_COMMA] = ACTIONS(451),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(665),
    [anon_sym_AMP_AMP] = ACTIONS(667),
    [anon_sym_PIPE_PIPE] = ACTIONS(669),
    [anon_sym_RBRACK] = ACTIONS(451),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [223] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(224),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [224] = {
    [sym_else_tail] = STATE(122),
    [anon_sym_EQ] = ACTIONS(485),
    [anon_sym_LPAREN] = ACTIONS(487),
    [anon_sym_COMMA] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(487),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [anon_sym_PIPE_PIPE] = ACTIONS(487),
    [anon_sym_RBRACK] = ACTIONS(487),
    [anon_sym_else] = ACTIONS(671),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [225] = {
    [sym_if_expression] = STATE(124),
    [sym_if_let_expression] = STATE(124),
    [sym_block] = STATE(124),
    [anon_sym_if] = ACTIONS(673),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [226] = {
    [sym__expression] = STATE(223),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_let] = ACTIONS(675),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [227] = {
    [sym__pattern] = STATE(228),
    [sym__expression] = STATE(151),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym__] = ACTIONS(117),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(545),
    [anon_sym_return] = ACTIONS(547),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [228] = {
    [anon_sym_EQ] = ACTIONS(677),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [229] = {
    [sym__expression] = STATE(230),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [230] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(231),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [231] = {
    [sym_else_tail] = STATE(187),
    [anon_sym_EQ] = ACTIONS(597),
    [anon_sym_LPAREN] = ACTIONS(599),
    [anon_sym_COMMA] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(599),
    [anon_sym_AMP_AMP] = ACTIONS(599),
    [anon_sym_PIPE_PIPE] = ACTIONS(599),
    [anon_sym_RBRACK] = ACTIONS(599),
    [anon_sym_else] = ACTIONS(671),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [232] = {
    [sym__expression] = STATE(260),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(631),
    [anon_sym_return] = ACTIONS(633),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(635),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [233] = {
    [sym__expression] = STATE(259),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_EQ] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(137),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(679),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(143),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(143),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(139),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(137),
    [anon_sym_AMP_AMP] = ACTIONS(137),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
    [anon_sym_return] = ACTIONS(633),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(137),
    [anon_sym_if] = ACTIONS(635),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [234] = {
    [sym__expression] = STATE(250),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [235] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(681),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(683),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(685),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(687),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(689),
    [anon_sym_AMP_AMP] = ACTIONS(691),
    [anon_sym_PIPE_PIPE] = ACTIONS(693),
    [anon_sym_RBRACK] = ACTIONS(695),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [236] = {
    [sym__expression] = STATE(249),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(631),
    [anon_sym_return] = ACTIONS(633),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(635),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [237] = {
    [sym__expression] = STATE(85),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(631),
    [anon_sym_return] = ACTIONS(633),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(635),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [238] = {
    [sym__expression] = STATE(248),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(631),
    [anon_sym_return] = ACTIONS(633),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(635),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [239] = {
    [sym__expression] = STATE(247),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(631),
    [anon_sym_return] = ACTIONS(633),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(635),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [240] = {
    [sym__expression] = STATE(246),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(631),
    [anon_sym_return] = ACTIONS(633),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(635),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [241] = {
    [sym__expression] = STATE(245),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(631),
    [anon_sym_return] = ACTIONS(633),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(635),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [242] = {
    [sym__expression] = STATE(244),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(631),
    [anon_sym_return] = ACTIONS(633),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(635),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [243] = {
    [anon_sym_SEMI] = ACTIONS(697),
    [anon_sym_COLON] = ACTIONS(697),
    [anon_sym_EQ] = ACTIONS(699),
    [anon_sym_LPAREN] = ACTIONS(697),
    [anon_sym_COMMA] = ACTIONS(697),
    [anon_sym_RPAREN] = ACTIONS(697),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(699),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(697),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(699),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(697),
    [anon_sym_AMP_AMP] = ACTIONS(697),
    [anon_sym_PIPE_PIPE] = ACTIONS(697),
    [anon_sym_RBRACK] = ACTIONS(697),
    [anon_sym_if] = ACTIONS(697),
    [anon_sym_LBRACE] = ACTIONS(697),
    [anon_sym_RBRACE] = ACTIONS(697),
    [anon_sym_EQ_GT] = ACTIONS(697),
    [anon_sym_PIPE] = ACTIONS(699),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [244] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(683),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(685),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(687),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(689),
    [anon_sym_AMP_AMP] = ACTIONS(691),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_RBRACK] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [245] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(683),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(685),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(687),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(689),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_RBRACK] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [246] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(683),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(685),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_RBRACK] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [247] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(683),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(685),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(689),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_RBRACK] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [248] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(683),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_RBRACK] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [249] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(449),
    [anon_sym_LPAREN] = ACTIONS(451),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(683),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(685),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(687),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(689),
    [anon_sym_AMP_AMP] = ACTIONS(691),
    [anon_sym_PIPE_PIPE] = ACTIONS(693),
    [anon_sym_RBRACK] = ACTIONS(451),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [250] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(251),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [251] = {
    [sym_else_tail] = STATE(122),
    [anon_sym_EQ] = ACTIONS(485),
    [anon_sym_LPAREN] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(487),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [anon_sym_PIPE_PIPE] = ACTIONS(487),
    [anon_sym_RBRACK] = ACTIONS(487),
    [anon_sym_else] = ACTIONS(701),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [252] = {
    [sym_if_expression] = STATE(124),
    [sym_if_let_expression] = STATE(124),
    [sym_block] = STATE(124),
    [anon_sym_if] = ACTIONS(703),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [253] = {
    [sym__expression] = STATE(250),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_let] = ACTIONS(705),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [254] = {
    [sym__pattern] = STATE(255),
    [sym__expression] = STATE(151),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym__] = ACTIONS(117),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(545),
    [anon_sym_return] = ACTIONS(547),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [255] = {
    [anon_sym_EQ] = ACTIONS(707),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [256] = {
    [sym__expression] = STATE(257),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [257] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(258),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [258] = {
    [sym_else_tail] = STATE(187),
    [anon_sym_EQ] = ACTIONS(597),
    [anon_sym_LPAREN] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(599),
    [anon_sym_AMP_AMP] = ACTIONS(599),
    [anon_sym_PIPE_PIPE] = ACTIONS(599),
    [anon_sym_RBRACK] = ACTIONS(599),
    [anon_sym_else] = ACTIONS(701),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [259] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(709),
    [anon_sym_LPAREN] = ACTIONS(711),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(683),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(685),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(687),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(689),
    [anon_sym_AMP_AMP] = ACTIONS(691),
    [anon_sym_PIPE_PIPE] = ACTIONS(693),
    [anon_sym_RBRACK] = ACTIONS(711),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [260] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(713),
    [anon_sym_COLON] = ACTIONS(713),
    [anon_sym_EQ] = ACTIONS(715),
    [anon_sym_LPAREN] = ACTIONS(713),
    [anon_sym_COMMA] = ACTIONS(713),
    [anon_sym_RPAREN] = ACTIONS(713),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(715),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(713),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(715),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(713),
    [anon_sym_AMP_AMP] = ACTIONS(713),
    [anon_sym_PIPE_PIPE] = ACTIONS(713),
    [anon_sym_RBRACK] = ACTIONS(713),
    [anon_sym_if] = ACTIONS(713),
    [anon_sym_LBRACE] = ACTIONS(713),
    [anon_sym_RBRACE] = ACTIONS(713),
    [anon_sym_EQ_GT] = ACTIONS(713),
    [anon_sym_PIPE] = ACTIONS(715),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [261] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(709),
    [anon_sym_LPAREN] = ACTIONS(711),
    [anon_sym_COMMA] = ACTIONS(711),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(665),
    [anon_sym_AMP_AMP] = ACTIONS(667),
    [anon_sym_PIPE_PIPE] = ACTIONS(669),
    [anon_sym_RBRACK] = ACTIONS(711),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [262] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(277),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [anon_sym_COMMA] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(617),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(623),
    [anon_sym_AMP_AMP] = ACTIONS(625),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_RBRACK] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [263] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(277),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [anon_sym_COMMA] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(617),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(623),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_RBRACK] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [264] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(277),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [anon_sym_COMMA] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(617),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_RBRACK] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [265] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(277),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [anon_sym_COMMA] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(617),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(623),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_RBRACK] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [266] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(277),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [anon_sym_COMMA] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(617),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_RBRACK] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [267] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(657),
    [anon_sym_LPAREN] = ACTIONS(219),
    [anon_sym_COMMA] = ACTIONS(447),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(663),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(665),
    [anon_sym_AMP_AMP] = ACTIONS(667),
    [anon_sym_PIPE_PIPE] = ACTIONS(669),
    [anon_sym_RBRACK] = ACTIONS(447),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [268] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(451),
    [anon_sym_EQ] = ACTIONS(449),
    [anon_sym_LPAREN] = ACTIONS(451),
    [anon_sym_COMMA] = ACTIONS(451),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(617),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(623),
    [anon_sym_AMP_AMP] = ACTIONS(625),
    [anon_sym_PIPE_PIPE] = ACTIONS(627),
    [anon_sym_RBRACK] = ACTIONS(451),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [269] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(270),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [270] = {
    [sym_else_tail] = STATE(122),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_EQ] = ACTIONS(485),
    [anon_sym_LPAREN] = ACTIONS(487),
    [anon_sym_COMMA] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(487),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [anon_sym_PIPE_PIPE] = ACTIONS(487),
    [anon_sym_RBRACK] = ACTIONS(487),
    [anon_sym_else] = ACTIONS(717),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [271] = {
    [sym_if_expression] = STATE(124),
    [sym_if_let_expression] = STATE(124),
    [sym_block] = STATE(124),
    [anon_sym_if] = ACTIONS(719),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [272] = {
    [sym__expression] = STATE(269),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_let] = ACTIONS(721),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [273] = {
    [sym__pattern] = STATE(274),
    [sym__expression] = STATE(151),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym__] = ACTIONS(117),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(545),
    [anon_sym_return] = ACTIONS(547),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [274] = {
    [anon_sym_EQ] = ACTIONS(723),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [275] = {
    [sym__expression] = STATE(276),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [276] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(277),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [277] = {
    [sym_else_tail] = STATE(187),
    [anon_sym_SEMI] = ACTIONS(599),
    [anon_sym_EQ] = ACTIONS(597),
    [anon_sym_LPAREN] = ACTIONS(599),
    [anon_sym_COMMA] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(599),
    [anon_sym_AMP_AMP] = ACTIONS(599),
    [anon_sym_PIPE_PIPE] = ACTIONS(599),
    [anon_sym_RBRACK] = ACTIONS(599),
    [anon_sym_else] = ACTIONS(717),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [278] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(711),
    [anon_sym_EQ] = ACTIONS(709),
    [anon_sym_LPAREN] = ACTIONS(711),
    [anon_sym_COMMA] = ACTIONS(711),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(617),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(621),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(623),
    [anon_sym_AMP_AMP] = ACTIONS(625),
    [anon_sym_PIPE_PIPE] = ACTIONS(627),
    [anon_sym_RBRACK] = ACTIONS(711),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [279] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(709),
    [anon_sym_LPAREN] = ACTIONS(711),
    [anon_sym_RPAREN] = ACTIONS(711),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(575),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(577),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(579),
    [anon_sym_AMP_AMP] = ACTIONS(581),
    [anon_sym_PIPE_PIPE] = ACTIONS(583),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [280] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(555),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(559),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(561),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [281] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(555),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [282] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(555),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(561),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [283] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(555),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [284] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(449),
    [anon_sym_LPAREN] = ACTIONS(451),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(555),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(559),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(561),
    [anon_sym_AMP_AMP] = ACTIONS(563),
    [anon_sym_PIPE_PIPE] = ACTIONS(565),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [285] = {
    [sym__expression] = STATE(286),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [286] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(287),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [287] = {
    [sym_else_tail] = STATE(187),
    [anon_sym_SEMI] = ACTIONS(599),
    [anon_sym_EQ] = ACTIONS(597),
    [anon_sym_LPAREN] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(599),
    [anon_sym_AMP_AMP] = ACTIONS(599),
    [anon_sym_PIPE_PIPE] = ACTIONS(599),
    [anon_sym_else] = ACTIONS(539),
    [anon_sym_RBRACE] = ACTIONS(599),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [288] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(289),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [289] = {
    [sym_else_tail] = STATE(122),
    [anon_sym_EQ] = ACTIONS(485),
    [anon_sym_LPAREN] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(487),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [anon_sym_PIPE_PIPE] = ACTIONS(487),
    [anon_sym_else] = ACTIONS(725),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [290] = {
    [sym_if_expression] = STATE(124),
    [sym_if_let_expression] = STATE(124),
    [sym_block] = STATE(124),
    [anon_sym_if] = ACTIONS(727),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [291] = {
    [sym__expression] = STATE(288),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_let] = ACTIONS(729),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [292] = {
    [sym__pattern] = STATE(293),
    [sym__expression] = STATE(151),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym__] = ACTIONS(117),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(545),
    [anon_sym_return] = ACTIONS(547),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [293] = {
    [anon_sym_EQ] = ACTIONS(731),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [294] = {
    [sym__expression] = STATE(295),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [295] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(296),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [296] = {
    [sym_else_tail] = STATE(187),
    [anon_sym_EQ] = ACTIONS(597),
    [anon_sym_LPAREN] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(599),
    [anon_sym_AMP_AMP] = ACTIONS(599),
    [anon_sym_PIPE_PIPE] = ACTIONS(599),
    [anon_sym_else] = ACTIONS(725),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [297] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(709),
    [anon_sym_LPAREN] = ACTIONS(711),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(555),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(559),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(561),
    [anon_sym_AMP_AMP] = ACTIONS(563),
    [anon_sym_PIPE_PIPE] = ACTIONS(565),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [298] = {
    [anon_sym_SEMI] = ACTIONS(733),
    [anon_sym_COLON] = ACTIONS(733),
    [anon_sym_EQ] = ACTIONS(735),
    [anon_sym_if] = ACTIONS(733),
    [anon_sym_EQ_GT] = ACTIONS(733),
    [anon_sym_PIPE] = ACTIONS(733),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [299] = {
    [sym_arguments] = STATE(36),
    [aux_sym__pattern_repeat1] = STATE(300),
    [anon_sym_EQ] = ACTIONS(415),
    [anon_sym_LPAREN] = ACTIONS(219),
    [anon_sym_COMMA] = ACTIONS(417),
    [anon_sym_RPAREN] = ACTIONS(571),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(425),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(427),
    [anon_sym_AMP_AMP] = ACTIONS(429),
    [anon_sym_PIPE_PIPE] = ACTIONS(431),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [300] = {
    [anon_sym_COMMA] = ACTIONS(437),
    [anon_sym_RPAREN] = ACTIONS(737),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [301] = {
    [anon_sym_SEMI] = ACTIONS(739),
    [anon_sym_COLON] = ACTIONS(739),
    [anon_sym_EQ] = ACTIONS(741),
    [anon_sym_if] = ACTIONS(739),
    [anon_sym_EQ_GT] = ACTIONS(739),
    [anon_sym_PIPE] = ACTIONS(739),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [302] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(277),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(521),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(523),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(525),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(527),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_RBRACE] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [303] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(277),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(521),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(523),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_RBRACE] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [304] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(277),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(521),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(523),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(527),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_RBRACE] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [305] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(277),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(521),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_RBRACE] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [306] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(451),
    [anon_sym_EQ] = ACTIONS(449),
    [anon_sym_LPAREN] = ACTIONS(451),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(521),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(523),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(525),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(527),
    [anon_sym_AMP_AMP] = ACTIONS(529),
    [anon_sym_PIPE_PIPE] = ACTIONS(531),
    [anon_sym_RBRACE] = ACTIONS(451),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [307] = {
    [sym__statement_list] = STATE(308),
    [sym__statement] = STATE(130),
    [sym__declaration_statement] = STATE(18),
    [sym__control_flow_statement] = STATE(18),
    [sym__item] = STATE(19),
    [sym_function_item] = STATE(20),
    [sym_let_declaration] = STATE(19),
    [sym__expression_statement] = STATE(18),
    [sym__expression] = STATE(21),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(309),
    [sym_if_let_expression] = STATE(24),
    [sym_match_expression] = STATE(309),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [sym_empty_statement] = STATE(18),
    [anon_sym_SEMI] = ACTIONS(81),
    [anon_sym_fn] = ACTIONS(83),
    [anon_sym_let] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(89),
    [anon_sym_return] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(377),
    [anon_sym_match] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(743),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [308] = {
    [ts_builtin_sym_end] = ACTIONS(745),
    [anon_sym_SEMI] = ACTIONS(745),
    [anon_sym_fn] = ACTIONS(747),
    [anon_sym_let] = ACTIONS(747),
    [anon_sym_LPAREN] = ACTIONS(745),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(745),
    [anon_sym_return] = ACTIONS(747),
    [anon_sym_LBRACK] = ACTIONS(745),
    [anon_sym_if] = ACTIONS(747),
    [anon_sym_match] = ACTIONS(747),
    [anon_sym_RBRACE] = ACTIONS(745),
    [sym_number_literal] = ACTIONS(747),
    [anon_sym_DQUOTE] = ACTIONS(745),
    [sym_raw_string_literal] = ACTIONS(747),
    [anon_sym_SQUOTE] = ACTIONS(745),
    [sym_boolean_literal] = ACTIONS(747),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(749),
  },
  [309] = {
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_SEMI] = ACTIONS(177),
    [anon_sym_EQ] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(177),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(179),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(177),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(179),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(177),
    [anon_sym_AMP_AMP] = ACTIONS(177),
    [anon_sym_PIPE_PIPE] = ACTIONS(177),
    [anon_sym_RBRACE] = ACTIONS(237),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [310] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(751),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [311] = {
    [sym__pattern] = STATE(58),
    [sym__expression] = STATE(59),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym_match_arm] = STATE(60),
    [sym_match_pattern] = STATE(61),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [aux_sym_match_expression_repeat1] = STATE(313),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym__] = ACTIONS(117),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(299),
    [anon_sym_return] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(303),
    [anon_sym_match] = ACTIONS(127),
    [anon_sym_RBRACE] = ACTIONS(753),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [312] = {
    [ts_builtin_sym_end] = ACTIONS(315),
    [anon_sym_LF] = ACTIONS(315),
    [anon_sym_SEMI] = ACTIONS(315),
    [anon_sym_fn] = ACTIONS(317),
    [anon_sym_let] = ACTIONS(317),
    [anon_sym_COLON] = ACTIONS(315),
    [anon_sym_EQ] = ACTIONS(317),
    [anon_sym_LPAREN] = ACTIONS(315),
    [anon_sym_COMMA] = ACTIONS(315),
    [anon_sym_RPAREN] = ACTIONS(315),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(317),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(755),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(755),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(317),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(315),
    [anon_sym_AMP_AMP] = ACTIONS(315),
    [anon_sym_PIPE_PIPE] = ACTIONS(315),
    [anon_sym_return] = ACTIONS(317),
    [anon_sym_LBRACK] = ACTIONS(315),
    [anon_sym_RBRACK] = ACTIONS(315),
    [anon_sym_if] = ACTIONS(317),
    [anon_sym_match] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(315),
    [anon_sym_RBRACE] = ACTIONS(315),
    [anon_sym_EQ_GT] = ACTIONS(315),
    [anon_sym_PIPE] = ACTIONS(317),
    [sym_number_literal] = ACTIONS(317),
    [anon_sym_DQUOTE] = ACTIONS(315),
    [sym_raw_string_literal] = ACTIONS(317),
    [anon_sym_SQUOTE] = ACTIONS(315),
    [sym_boolean_literal] = ACTIONS(317),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(755),
  },
  [313] = {
    [sym__pattern] = STATE(58),
    [sym__expression] = STATE(59),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym_match_arm] = STATE(64),
    [sym_match_pattern] = STATE(61),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym__] = ACTIONS(117),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(299),
    [anon_sym_return] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(303),
    [anon_sym_match] = ACTIONS(127),
    [anon_sym_RBRACE] = ACTIONS(757),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [314] = {
    [ts_builtin_sym_end] = ACTIONS(353),
    [anon_sym_LF] = ACTIONS(353),
    [anon_sym_SEMI] = ACTIONS(353),
    [anon_sym_fn] = ACTIONS(355),
    [anon_sym_let] = ACTIONS(355),
    [anon_sym_COLON] = ACTIONS(353),
    [anon_sym_EQ] = ACTIONS(355),
    [anon_sym_LPAREN] = ACTIONS(353),
    [anon_sym_COMMA] = ACTIONS(353),
    [anon_sym_RPAREN] = ACTIONS(353),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(355),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(759),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(759),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(355),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(353),
    [anon_sym_AMP_AMP] = ACTIONS(353),
    [anon_sym_PIPE_PIPE] = ACTIONS(353),
    [anon_sym_return] = ACTIONS(355),
    [anon_sym_LBRACK] = ACTIONS(353),
    [anon_sym_RBRACK] = ACTIONS(353),
    [anon_sym_if] = ACTIONS(355),
    [anon_sym_match] = ACTIONS(355),
    [anon_sym_LBRACE] = ACTIONS(353),
    [anon_sym_RBRACE] = ACTIONS(353),
    [anon_sym_EQ_GT] = ACTIONS(353),
    [anon_sym_PIPE] = ACTIONS(355),
    [sym_number_literal] = ACTIONS(355),
    [anon_sym_DQUOTE] = ACTIONS(353),
    [sym_raw_string_literal] = ACTIONS(355),
    [anon_sym_SQUOTE] = ACTIONS(353),
    [sym_boolean_literal] = ACTIONS(355),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(759),
  },
  [315] = {
    [sym__pattern] = STATE(333),
    [sym__expression] = STATE(151),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym__] = ACTIONS(117),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(545),
    [anon_sym_return] = ACTIONS(547),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [316] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(318),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(761),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [317] = {
    [sym__statement_list] = STATE(324),
    [sym__statement] = STATE(130),
    [sym__declaration_statement] = STATE(18),
    [sym__control_flow_statement] = STATE(18),
    [sym__item] = STATE(19),
    [sym_function_item] = STATE(20),
    [sym_let_declaration] = STATE(19),
    [sym__expression_statement] = STATE(18),
    [sym__expression] = STATE(325),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(23),
    [sym_if_let_expression] = STATE(24),
    [sym_match_expression] = STATE(23),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [sym_empty_statement] = STATE(18),
    [anon_sym_SEMI] = ACTIONS(81),
    [anon_sym_fn] = ACTIONS(83),
    [anon_sym_let] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(373),
    [anon_sym_return] = ACTIONS(375),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(377),
    [anon_sym_match] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(763),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [318] = {
    [sym_else_tail] = STATE(320),
    [anon_sym_LF] = ACTIONS(487),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_EQ] = ACTIONS(485),
    [anon_sym_LPAREN] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(487),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [anon_sym_PIPE_PIPE] = ACTIONS(487),
    [anon_sym_else] = ACTIONS(765),
    [anon_sym_RBRACE] = ACTIONS(487),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [319] = {
    [sym_if_expression] = STATE(322),
    [sym_if_let_expression] = STATE(322),
    [sym_block] = STATE(322),
    [anon_sym_if] = ACTIONS(767),
    [anon_sym_LBRACE] = ACTIONS(761),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [320] = {
    [ts_builtin_sym_end] = ACTIONS(493),
    [anon_sym_LF] = ACTIONS(493),
    [anon_sym_SEMI] = ACTIONS(493),
    [anon_sym_fn] = ACTIONS(495),
    [anon_sym_let] = ACTIONS(495),
    [anon_sym_COLON] = ACTIONS(493),
    [anon_sym_EQ] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(493),
    [anon_sym_COMMA] = ACTIONS(493),
    [anon_sym_RPAREN] = ACTIONS(493),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(769),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(493),
    [anon_sym_AMP_AMP] = ACTIONS(493),
    [anon_sym_PIPE_PIPE] = ACTIONS(493),
    [anon_sym_return] = ACTIONS(495),
    [anon_sym_LBRACK] = ACTIONS(493),
    [anon_sym_RBRACK] = ACTIONS(493),
    [anon_sym_if] = ACTIONS(495),
    [anon_sym_match] = ACTIONS(495),
    [anon_sym_LBRACE] = ACTIONS(493),
    [anon_sym_RBRACE] = ACTIONS(493),
    [anon_sym_EQ_GT] = ACTIONS(493),
    [anon_sym_PIPE] = ACTIONS(495),
    [sym_number_literal] = ACTIONS(495),
    [anon_sym_DQUOTE] = ACTIONS(493),
    [sym_raw_string_literal] = ACTIONS(495),
    [anon_sym_SQUOTE] = ACTIONS(493),
    [sym_boolean_literal] = ACTIONS(495),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(769),
  },
  [321] = {
    [sym__expression] = STATE(316),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_let] = ACTIONS(771),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [322] = {
    [ts_builtin_sym_end] = ACTIONS(499),
    [anon_sym_LF] = ACTIONS(499),
    [anon_sym_SEMI] = ACTIONS(499),
    [anon_sym_fn] = ACTIONS(501),
    [anon_sym_let] = ACTIONS(501),
    [anon_sym_COLON] = ACTIONS(499),
    [anon_sym_EQ] = ACTIONS(501),
    [anon_sym_LPAREN] = ACTIONS(499),
    [anon_sym_COMMA] = ACTIONS(499),
    [anon_sym_RPAREN] = ACTIONS(499),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(773),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(773),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(499),
    [anon_sym_AMP_AMP] = ACTIONS(499),
    [anon_sym_PIPE_PIPE] = ACTIONS(499),
    [anon_sym_return] = ACTIONS(501),
    [anon_sym_LBRACK] = ACTIONS(499),
    [anon_sym_RBRACK] = ACTIONS(499),
    [anon_sym_if] = ACTIONS(501),
    [anon_sym_match] = ACTIONS(501),
    [anon_sym_LBRACE] = ACTIONS(499),
    [anon_sym_RBRACE] = ACTIONS(499),
    [anon_sym_EQ_GT] = ACTIONS(499),
    [anon_sym_PIPE] = ACTIONS(501),
    [sym_number_literal] = ACTIONS(501),
    [anon_sym_DQUOTE] = ACTIONS(499),
    [sym_raw_string_literal] = ACTIONS(501),
    [anon_sym_SQUOTE] = ACTIONS(499),
    [sym_boolean_literal] = ACTIONS(501),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(773),
  },
  [323] = {
    [ts_builtin_sym_end] = ACTIONS(509),
    [anon_sym_LF] = ACTIONS(509),
    [anon_sym_SEMI] = ACTIONS(509),
    [anon_sym_fn] = ACTIONS(511),
    [anon_sym_let] = ACTIONS(511),
    [anon_sym_COLON] = ACTIONS(509),
    [anon_sym_EQ] = ACTIONS(511),
    [anon_sym_LPAREN] = ACTIONS(509),
    [anon_sym_COMMA] = ACTIONS(509),
    [anon_sym_RPAREN] = ACTIONS(509),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(511),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(513),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(513),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(511),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(509),
    [anon_sym_AMP_AMP] = ACTIONS(509),
    [anon_sym_PIPE_PIPE] = ACTIONS(509),
    [anon_sym_return] = ACTIONS(511),
    [anon_sym_LBRACK] = ACTIONS(509),
    [anon_sym_RBRACK] = ACTIONS(509),
    [anon_sym_if] = ACTIONS(511),
    [anon_sym_else] = ACTIONS(511),
    [anon_sym_match] = ACTIONS(511),
    [anon_sym_LBRACE] = ACTIONS(509),
    [anon_sym_RBRACE] = ACTIONS(509),
    [anon_sym_EQ_GT] = ACTIONS(509),
    [anon_sym_PIPE] = ACTIONS(511),
    [sym_number_literal] = ACTIONS(511),
    [anon_sym_DQUOTE] = ACTIONS(509),
    [sym_raw_string_literal] = ACTIONS(511),
    [anon_sym_SQUOTE] = ACTIONS(509),
    [sym_boolean_literal] = ACTIONS(511),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(513),
  },
  [324] = {
    [anon_sym_RBRACE] = ACTIONS(775),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [325] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(215),
    [anon_sym_EQ] = ACTIONS(519),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(521),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(523),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(525),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(527),
    [anon_sym_AMP_AMP] = ACTIONS(529),
    [anon_sym_PIPE_PIPE] = ACTIONS(531),
    [anon_sym_RBRACE] = ACTIONS(775),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [326] = {
    [ts_builtin_sym_end] = ACTIONS(533),
    [anon_sym_LF] = ACTIONS(533),
    [anon_sym_SEMI] = ACTIONS(533),
    [anon_sym_fn] = ACTIONS(535),
    [anon_sym_let] = ACTIONS(535),
    [anon_sym_COLON] = ACTIONS(533),
    [anon_sym_EQ] = ACTIONS(535),
    [anon_sym_LPAREN] = ACTIONS(533),
    [anon_sym_COMMA] = ACTIONS(533),
    [anon_sym_RPAREN] = ACTIONS(533),
    [anon_sym__] = ACTIONS(535),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(535),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(537),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(537),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(535),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(533),
    [anon_sym_AMP_AMP] = ACTIONS(533),
    [anon_sym_PIPE_PIPE] = ACTIONS(533),
    [anon_sym_return] = ACTIONS(535),
    [anon_sym_LBRACK] = ACTIONS(533),
    [anon_sym_RBRACK] = ACTIONS(533),
    [anon_sym_if] = ACTIONS(535),
    [anon_sym_else] = ACTIONS(535),
    [anon_sym_match] = ACTIONS(535),
    [anon_sym_LBRACE] = ACTIONS(533),
    [anon_sym_RBRACE] = ACTIONS(533),
    [anon_sym_EQ_GT] = ACTIONS(533),
    [anon_sym_PIPE] = ACTIONS(535),
    [sym_number_literal] = ACTIONS(535),
    [anon_sym_DQUOTE] = ACTIONS(533),
    [sym_raw_string_literal] = ACTIONS(535),
    [anon_sym_SQUOTE] = ACTIONS(533),
    [sym_boolean_literal] = ACTIONS(535),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(537),
  },
  [327] = {
    [sym__pattern] = STATE(328),
    [sym__expression] = STATE(151),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym__] = ACTIONS(117),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(545),
    [anon_sym_return] = ACTIONS(547),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [328] = {
    [anon_sym_EQ] = ACTIONS(777),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [329] = {
    [sym__expression] = STATE(330),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [330] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(331),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(761),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [331] = {
    [sym_else_tail] = STATE(332),
    [anon_sym_LF] = ACTIONS(599),
    [anon_sym_SEMI] = ACTIONS(599),
    [anon_sym_EQ] = ACTIONS(597),
    [anon_sym_LPAREN] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(599),
    [anon_sym_AMP_AMP] = ACTIONS(599),
    [anon_sym_PIPE_PIPE] = ACTIONS(599),
    [anon_sym_else] = ACTIONS(765),
    [anon_sym_RBRACE] = ACTIONS(599),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [332] = {
    [ts_builtin_sym_end] = ACTIONS(601),
    [anon_sym_LF] = ACTIONS(601),
    [anon_sym_SEMI] = ACTIONS(601),
    [anon_sym_fn] = ACTIONS(603),
    [anon_sym_let] = ACTIONS(603),
    [anon_sym_COLON] = ACTIONS(601),
    [anon_sym_EQ] = ACTIONS(603),
    [anon_sym_LPAREN] = ACTIONS(601),
    [anon_sym_COMMA] = ACTIONS(601),
    [anon_sym_RPAREN] = ACTIONS(601),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(779),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(779),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(603),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(601),
    [anon_sym_AMP_AMP] = ACTIONS(601),
    [anon_sym_PIPE_PIPE] = ACTIONS(601),
    [anon_sym_return] = ACTIONS(603),
    [anon_sym_LBRACK] = ACTIONS(601),
    [anon_sym_RBRACK] = ACTIONS(601),
    [anon_sym_if] = ACTIONS(603),
    [anon_sym_match] = ACTIONS(603),
    [anon_sym_LBRACE] = ACTIONS(601),
    [anon_sym_RBRACE] = ACTIONS(601),
    [anon_sym_EQ_GT] = ACTIONS(601),
    [anon_sym_PIPE] = ACTIONS(603),
    [sym_number_literal] = ACTIONS(603),
    [anon_sym_DQUOTE] = ACTIONS(601),
    [sym_raw_string_literal] = ACTIONS(603),
    [anon_sym_SQUOTE] = ACTIONS(601),
    [sym_boolean_literal] = ACTIONS(603),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(779),
  },
  [333] = {
    [anon_sym_EQ] = ACTIONS(781),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [334] = {
    [sym__expression] = STATE(335),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [335] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(336),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(761),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [336] = {
    [sym_else_tail] = STATE(332),
    [anon_sym_LF] = ACTIONS(599),
    [anon_sym_SEMI] = ACTIONS(599),
    [anon_sym_else] = ACTIONS(783),
    [anon_sym_RBRACE] = ACTIONS(599),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [337] = {
    [sym_if_expression] = STATE(322),
    [sym_if_let_expression] = STATE(322),
    [sym_block] = STATE(322),
    [anon_sym_if] = ACTIONS(785),
    [anon_sym_LBRACE] = ACTIONS(761),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [338] = {
    [sym__expression] = STATE(339),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_let] = ACTIONS(507),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [339] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(340),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(761),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [340] = {
    [sym_else_tail] = STATE(320),
    [anon_sym_LF] = ACTIONS(487),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_else] = ACTIONS(783),
    [anon_sym_RBRACE] = ACTIONS(487),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [341] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(711),
    [anon_sym_EQ] = ACTIONS(709),
    [anon_sym_LPAREN] = ACTIONS(711),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(521),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(523),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(525),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(527),
    [anon_sym_AMP_AMP] = ACTIONS(529),
    [anon_sym_PIPE_PIPE] = ACTIONS(531),
    [anon_sym_RBRACE] = ACTIONS(711),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [342] = {
    [sym__pattern] = STATE(381),
    [sym__expression] = STATE(347),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym__] = ACTIONS(117),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(121),
    [anon_sym_return] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(125),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [343] = {
    [sym__expression] = STATE(260),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(121),
    [anon_sym_return] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(125),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [344] = {
    [sym__expression] = STATE(380),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_SEMI] = ACTIONS(137),
    [anon_sym_COLON] = ACTIONS(137),
    [anon_sym_EQ] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(137),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(787),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(143),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(143),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(139),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(137),
    [anon_sym_AMP_AMP] = ACTIONS(137),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
    [anon_sym_return] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(125),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [345] = {
    [sym__expression] = STATE(371),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [346] = {
    [anon_sym_SEMI] = ACTIONS(789),
    [anon_sym_COLON] = ACTIONS(791),
    [anon_sym_EQ] = ACTIONS(793),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [347] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(339),
    [anon_sym_COLON] = ACTIONS(339),
    [anon_sym_EQ] = ACTIONS(341),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(795),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(797),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(799),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(801),
    [anon_sym_AMP_AMP] = ACTIONS(803),
    [anon_sym_PIPE_PIPE] = ACTIONS(805),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [348] = {
    [sym__expression] = STATE(360),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(121),
    [anon_sym_return] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(125),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [349] = {
    [sym__expression] = STATE(85),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(121),
    [anon_sym_return] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(125),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [350] = {
    [sym__expression] = STATE(359),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(121),
    [anon_sym_return] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(125),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [351] = {
    [sym__expression] = STATE(358),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(121),
    [anon_sym_return] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(125),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [352] = {
    [sym__expression] = STATE(357),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(121),
    [anon_sym_return] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(125),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [353] = {
    [sym__expression] = STATE(356),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(121),
    [anon_sym_return] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(125),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [354] = {
    [sym__expression] = STATE(355),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(121),
    [anon_sym_return] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(125),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [355] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(277),
    [anon_sym_COLON] = ACTIONS(277),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(795),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(797),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(799),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(801),
    [anon_sym_AMP_AMP] = ACTIONS(803),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [356] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(277),
    [anon_sym_COLON] = ACTIONS(277),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(795),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(797),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(799),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(801),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [357] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(277),
    [anon_sym_COLON] = ACTIONS(277),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(795),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(797),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [358] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(277),
    [anon_sym_COLON] = ACTIONS(277),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(795),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(797),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(801),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [359] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(277),
    [anon_sym_COLON] = ACTIONS(277),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(795),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [360] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(451),
    [anon_sym_COLON] = ACTIONS(451),
    [anon_sym_EQ] = ACTIONS(449),
    [anon_sym_LPAREN] = ACTIONS(451),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(795),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(797),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(799),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(801),
    [anon_sym_AMP_AMP] = ACTIONS(803),
    [anon_sym_PIPE_PIPE] = ACTIONS(805),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [361] = {
    [ts_builtin_sym_end] = ACTIONS(807),
    [anon_sym_LF] = ACTIONS(807),
    [anon_sym_SEMI] = ACTIONS(807),
    [anon_sym_fn] = ACTIONS(809),
    [anon_sym_let] = ACTIONS(809),
    [anon_sym_LPAREN] = ACTIONS(807),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(807),
    [anon_sym_return] = ACTIONS(809),
    [anon_sym_LBRACK] = ACTIONS(807),
    [anon_sym_if] = ACTIONS(809),
    [anon_sym_match] = ACTIONS(809),
    [anon_sym_RBRACE] = ACTIONS(807),
    [sym_number_literal] = ACTIONS(809),
    [anon_sym_DQUOTE] = ACTIONS(807),
    [sym_raw_string_literal] = ACTIONS(809),
    [anon_sym_SQUOTE] = ACTIONS(807),
    [sym_boolean_literal] = ACTIONS(809),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(811),
  },
  [362] = {
    [sym_type_expression] = STATE(367),
    [anon_sym_u8] = ACTIONS(813),
    [anon_sym_i8] = ACTIONS(813),
    [anon_sym_u16] = ACTIONS(813),
    [anon_sym_i16] = ACTIONS(813),
    [anon_sym_u32] = ACTIONS(813),
    [anon_sym_i32] = ACTIONS(813),
    [anon_sym_u64] = ACTIONS(813),
    [anon_sym_i64] = ACTIONS(813),
    [anon_sym_isize] = ACTIONS(813),
    [anon_sym_usize] = ACTIONS(813),
    [anon_sym_f32] = ACTIONS(813),
    [anon_sym_f64] = ACTIONS(813),
    [sym_boolean_literal] = ACTIONS(813),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(815),
  },
  [363] = {
    [sym__expression] = STATE(364),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(89),
    [anon_sym_return] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(135),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [364] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(817),
    [anon_sym_EQ] = ACTIONS(217),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(225),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(227),
    [anon_sym_AMP_AMP] = ACTIONS(229),
    [anon_sym_PIPE_PIPE] = ACTIONS(231),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [365] = {
    [ts_builtin_sym_end] = ACTIONS(819),
    [anon_sym_LF] = ACTIONS(819),
    [anon_sym_SEMI] = ACTIONS(819),
    [anon_sym_fn] = ACTIONS(821),
    [anon_sym_let] = ACTIONS(821),
    [anon_sym_LPAREN] = ACTIONS(819),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(819),
    [anon_sym_return] = ACTIONS(821),
    [anon_sym_LBRACK] = ACTIONS(819),
    [anon_sym_if] = ACTIONS(821),
    [anon_sym_match] = ACTIONS(821),
    [anon_sym_RBRACE] = ACTIONS(819),
    [sym_number_literal] = ACTIONS(821),
    [anon_sym_DQUOTE] = ACTIONS(819),
    [sym_raw_string_literal] = ACTIONS(821),
    [anon_sym_SQUOTE] = ACTIONS(819),
    [sym_boolean_literal] = ACTIONS(821),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(823),
  },
  [366] = {
    [anon_sym_SEMI] = ACTIONS(825),
    [anon_sym_EQ] = ACTIONS(825),
    [anon_sym_COMMA] = ACTIONS(825),
    [anon_sym_RPAREN] = ACTIONS(825),
    [anon_sym_LBRACE] = ACTIONS(825),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [367] = {
    [anon_sym_SEMI] = ACTIONS(817),
    [anon_sym_EQ] = ACTIONS(827),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [368] = {
    [sym__expression] = STATE(369),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(89),
    [anon_sym_return] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(135),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [369] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(829),
    [anon_sym_EQ] = ACTIONS(217),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(225),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(227),
    [anon_sym_AMP_AMP] = ACTIONS(229),
    [anon_sym_PIPE_PIPE] = ACTIONS(231),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [370] = {
    [ts_builtin_sym_end] = ACTIONS(831),
    [anon_sym_LF] = ACTIONS(831),
    [anon_sym_SEMI] = ACTIONS(831),
    [anon_sym_fn] = ACTIONS(833),
    [anon_sym_let] = ACTIONS(833),
    [anon_sym_LPAREN] = ACTIONS(831),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(831),
    [anon_sym_return] = ACTIONS(833),
    [anon_sym_LBRACK] = ACTIONS(831),
    [anon_sym_if] = ACTIONS(833),
    [anon_sym_match] = ACTIONS(833),
    [anon_sym_RBRACE] = ACTIONS(831),
    [sym_number_literal] = ACTIONS(833),
    [anon_sym_DQUOTE] = ACTIONS(831),
    [sym_raw_string_literal] = ACTIONS(833),
    [anon_sym_SQUOTE] = ACTIONS(831),
    [sym_boolean_literal] = ACTIONS(833),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(835),
  },
  [371] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(372),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [372] = {
    [sym_else_tail] = STATE(122),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_COLON] = ACTIONS(487),
    [anon_sym_EQ] = ACTIONS(485),
    [anon_sym_LPAREN] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(487),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [anon_sym_PIPE_PIPE] = ACTIONS(487),
    [anon_sym_else] = ACTIONS(837),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [373] = {
    [sym_if_expression] = STATE(124),
    [sym_if_let_expression] = STATE(124),
    [sym_block] = STATE(124),
    [anon_sym_if] = ACTIONS(839),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [374] = {
    [sym__expression] = STATE(371),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_let] = ACTIONS(841),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [375] = {
    [sym__pattern] = STATE(376),
    [sym__expression] = STATE(151),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym__] = ACTIONS(117),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(545),
    [anon_sym_return] = ACTIONS(547),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [376] = {
    [anon_sym_EQ] = ACTIONS(843),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [377] = {
    [sym__expression] = STATE(378),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [378] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(379),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [379] = {
    [sym_else_tail] = STATE(187),
    [anon_sym_SEMI] = ACTIONS(599),
    [anon_sym_COLON] = ACTIONS(599),
    [anon_sym_EQ] = ACTIONS(597),
    [anon_sym_LPAREN] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(599),
    [anon_sym_AMP_AMP] = ACTIONS(599),
    [anon_sym_PIPE_PIPE] = ACTIONS(599),
    [anon_sym_else] = ACTIONS(837),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [380] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(711),
    [anon_sym_COLON] = ACTIONS(711),
    [anon_sym_EQ] = ACTIONS(709),
    [anon_sym_LPAREN] = ACTIONS(711),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(795),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(797),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(799),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(801),
    [anon_sym_AMP_AMP] = ACTIONS(803),
    [anon_sym_PIPE_PIPE] = ACTIONS(805),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [381] = {
    [anon_sym_SEMI] = ACTIONS(845),
    [anon_sym_COLON] = ACTIONS(847),
    [anon_sym_EQ] = ACTIONS(849),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [382] = {
    [ts_builtin_sym_end] = ACTIONS(851),
    [anon_sym_LF] = ACTIONS(851),
    [anon_sym_SEMI] = ACTIONS(851),
    [anon_sym_fn] = ACTIONS(853),
    [anon_sym_let] = ACTIONS(853),
    [anon_sym_LPAREN] = ACTIONS(851),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(851),
    [anon_sym_return] = ACTIONS(853),
    [anon_sym_LBRACK] = ACTIONS(851),
    [anon_sym_if] = ACTIONS(853),
    [anon_sym_match] = ACTIONS(853),
    [anon_sym_RBRACE] = ACTIONS(851),
    [sym_number_literal] = ACTIONS(853),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [sym_raw_string_literal] = ACTIONS(853),
    [anon_sym_SQUOTE] = ACTIONS(851),
    [sym_boolean_literal] = ACTIONS(853),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(855),
  },
  [383] = {
    [sym_type_expression] = STATE(387),
    [anon_sym_u8] = ACTIONS(813),
    [anon_sym_i8] = ACTIONS(813),
    [anon_sym_u16] = ACTIONS(813),
    [anon_sym_i16] = ACTIONS(813),
    [anon_sym_u32] = ACTIONS(813),
    [anon_sym_i32] = ACTIONS(813),
    [anon_sym_u64] = ACTIONS(813),
    [anon_sym_i64] = ACTIONS(813),
    [anon_sym_isize] = ACTIONS(813),
    [anon_sym_usize] = ACTIONS(813),
    [anon_sym_f32] = ACTIONS(813),
    [anon_sym_f64] = ACTIONS(813),
    [sym_boolean_literal] = ACTIONS(813),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(815),
  },
  [384] = {
    [sym__expression] = STATE(385),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(89),
    [anon_sym_return] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(135),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [385] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(857),
    [anon_sym_EQ] = ACTIONS(217),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(225),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(227),
    [anon_sym_AMP_AMP] = ACTIONS(229),
    [anon_sym_PIPE_PIPE] = ACTIONS(231),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [386] = {
    [ts_builtin_sym_end] = ACTIONS(859),
    [anon_sym_LF] = ACTIONS(859),
    [anon_sym_SEMI] = ACTIONS(859),
    [anon_sym_fn] = ACTIONS(861),
    [anon_sym_let] = ACTIONS(861),
    [anon_sym_LPAREN] = ACTIONS(859),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(859),
    [anon_sym_return] = ACTIONS(861),
    [anon_sym_LBRACK] = ACTIONS(859),
    [anon_sym_if] = ACTIONS(861),
    [anon_sym_match] = ACTIONS(861),
    [anon_sym_RBRACE] = ACTIONS(859),
    [sym_number_literal] = ACTIONS(861),
    [anon_sym_DQUOTE] = ACTIONS(859),
    [sym_raw_string_literal] = ACTIONS(861),
    [anon_sym_SQUOTE] = ACTIONS(859),
    [sym_boolean_literal] = ACTIONS(861),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(863),
  },
  [387] = {
    [anon_sym_SEMI] = ACTIONS(857),
    [anon_sym_EQ] = ACTIONS(865),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [388] = {
    [sym__expression] = STATE(389),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(89),
    [anon_sym_return] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(135),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [389] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(867),
    [anon_sym_EQ] = ACTIONS(217),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(225),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(227),
    [anon_sym_AMP_AMP] = ACTIONS(229),
    [anon_sym_PIPE_PIPE] = ACTIONS(231),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [390] = {
    [ts_builtin_sym_end] = ACTIONS(869),
    [anon_sym_LF] = ACTIONS(869),
    [anon_sym_SEMI] = ACTIONS(869),
    [anon_sym_fn] = ACTIONS(871),
    [anon_sym_let] = ACTIONS(871),
    [anon_sym_LPAREN] = ACTIONS(869),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(869),
    [anon_sym_return] = ACTIONS(871),
    [anon_sym_LBRACK] = ACTIONS(869),
    [anon_sym_if] = ACTIONS(871),
    [anon_sym_match] = ACTIONS(871),
    [anon_sym_RBRACE] = ACTIONS(869),
    [sym_number_literal] = ACTIONS(871),
    [anon_sym_DQUOTE] = ACTIONS(869),
    [sym_raw_string_literal] = ACTIONS(871),
    [anon_sym_SQUOTE] = ACTIONS(869),
    [sym_boolean_literal] = ACTIONS(871),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(873),
  },
  [391] = {
    [sym_parameters] = STATE(393),
    [anon_sym_LPAREN] = ACTIONS(875),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [392] = {
    [anon_sym_RPAREN] = ACTIONS(877),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(879),
  },
  [393] = {
    [sym_block] = STATE(395),
    [anon_sym_DASH_GT] = ACTIONS(881),
    [anon_sym_LBRACE] = ACTIONS(761),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [394] = {
    [sym_type_expression] = STATE(396),
    [anon_sym_u8] = ACTIONS(813),
    [anon_sym_i8] = ACTIONS(813),
    [anon_sym_u16] = ACTIONS(813),
    [anon_sym_i16] = ACTIONS(813),
    [anon_sym_u32] = ACTIONS(813),
    [anon_sym_i32] = ACTIONS(813),
    [anon_sym_u64] = ACTIONS(813),
    [anon_sym_i64] = ACTIONS(813),
    [anon_sym_isize] = ACTIONS(813),
    [anon_sym_usize] = ACTIONS(813),
    [anon_sym_f32] = ACTIONS(813),
    [anon_sym_f64] = ACTIONS(813),
    [sym_boolean_literal] = ACTIONS(813),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(815),
  },
  [395] = {
    [ts_builtin_sym_end] = ACTIONS(883),
    [anon_sym_LF] = ACTIONS(883),
    [anon_sym_SEMI] = ACTIONS(883),
    [anon_sym_fn] = ACTIONS(885),
    [anon_sym_let] = ACTIONS(885),
    [anon_sym_LPAREN] = ACTIONS(883),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(883),
    [anon_sym_return] = ACTIONS(885),
    [anon_sym_LBRACK] = ACTIONS(883),
    [anon_sym_if] = ACTIONS(885),
    [anon_sym_match] = ACTIONS(885),
    [anon_sym_RBRACE] = ACTIONS(883),
    [sym_number_literal] = ACTIONS(885),
    [anon_sym_DQUOTE] = ACTIONS(883),
    [sym_raw_string_literal] = ACTIONS(885),
    [anon_sym_SQUOTE] = ACTIONS(883),
    [sym_boolean_literal] = ACTIONS(885),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(887),
  },
  [396] = {
    [sym_block] = STATE(397),
    [anon_sym_LBRACE] = ACTIONS(761),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [397] = {
    [ts_builtin_sym_end] = ACTIONS(889),
    [anon_sym_LF] = ACTIONS(889),
    [anon_sym_SEMI] = ACTIONS(889),
    [anon_sym_fn] = ACTIONS(891),
    [anon_sym_let] = ACTIONS(891),
    [anon_sym_LPAREN] = ACTIONS(889),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(889),
    [anon_sym_return] = ACTIONS(891),
    [anon_sym_LBRACK] = ACTIONS(889),
    [anon_sym_if] = ACTIONS(891),
    [anon_sym_match] = ACTIONS(891),
    [anon_sym_RBRACE] = ACTIONS(889),
    [sym_number_literal] = ACTIONS(891),
    [anon_sym_DQUOTE] = ACTIONS(889),
    [sym_raw_string_literal] = ACTIONS(891),
    [anon_sym_SQUOTE] = ACTIONS(889),
    [sym_boolean_literal] = ACTIONS(891),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(893),
  },
  [398] = {
    [anon_sym_DASH_GT] = ACTIONS(895),
    [anon_sym_LBRACE] = ACTIONS(895),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [399] = {
    [anon_sym_COLON] = ACTIONS(897),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [400] = {
    [sym_type_expression] = STATE(401),
    [anon_sym_u8] = ACTIONS(813),
    [anon_sym_i8] = ACTIONS(813),
    [anon_sym_u16] = ACTIONS(813),
    [anon_sym_i16] = ACTIONS(813),
    [anon_sym_u32] = ACTIONS(813),
    [anon_sym_i32] = ACTIONS(813),
    [anon_sym_u64] = ACTIONS(813),
    [anon_sym_i64] = ACTIONS(813),
    [anon_sym_isize] = ACTIONS(813),
    [anon_sym_usize] = ACTIONS(813),
    [anon_sym_f32] = ACTIONS(813),
    [anon_sym_f64] = ACTIONS(813),
    [sym_boolean_literal] = ACTIONS(813),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(815),
  },
  [401] = {
    [aux_sym_parameters_repeat1] = STATE(404),
    [anon_sym_COMMA] = ACTIONS(899),
    [anon_sym_RPAREN] = ACTIONS(901),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [402] = {
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(903),
  },
  [403] = {
    [anon_sym_DASH_GT] = ACTIONS(905),
    [anon_sym_LBRACE] = ACTIONS(905),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [404] = {
    [anon_sym_COMMA] = ACTIONS(907),
    [anon_sym_RPAREN] = ACTIONS(909),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [405] = {
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(911),
  },
  [406] = {
    [anon_sym_DASH_GT] = ACTIONS(913),
    [anon_sym_LBRACE] = ACTIONS(913),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [407] = {
    [anon_sym_COLON] = ACTIONS(915),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [408] = {
    [sym_type_expression] = STATE(409),
    [anon_sym_u8] = ACTIONS(813),
    [anon_sym_i8] = ACTIONS(813),
    [anon_sym_u16] = ACTIONS(813),
    [anon_sym_i16] = ACTIONS(813),
    [anon_sym_u32] = ACTIONS(813),
    [anon_sym_i32] = ACTIONS(813),
    [anon_sym_u64] = ACTIONS(813),
    [anon_sym_i64] = ACTIONS(813),
    [anon_sym_isize] = ACTIONS(813),
    [anon_sym_usize] = ACTIONS(813),
    [anon_sym_f32] = ACTIONS(813),
    [anon_sym_f64] = ACTIONS(813),
    [sym_boolean_literal] = ACTIONS(813),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(815),
  },
  [409] = {
    [anon_sym_COMMA] = ACTIONS(917),
    [anon_sym_RPAREN] = ACTIONS(917),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [410] = {
    [anon_sym_COLON] = ACTIONS(919),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [411] = {
    [sym_type_expression] = STATE(412),
    [anon_sym_u8] = ACTIONS(813),
    [anon_sym_i8] = ACTIONS(813),
    [anon_sym_u16] = ACTIONS(813),
    [anon_sym_i16] = ACTIONS(813),
    [anon_sym_u32] = ACTIONS(813),
    [anon_sym_i32] = ACTIONS(813),
    [anon_sym_u64] = ACTIONS(813),
    [anon_sym_i64] = ACTIONS(813),
    [anon_sym_isize] = ACTIONS(813),
    [anon_sym_usize] = ACTIONS(813),
    [anon_sym_f32] = ACTIONS(813),
    [anon_sym_f64] = ACTIONS(813),
    [sym_boolean_literal] = ACTIONS(813),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(815),
  },
  [412] = {
    [anon_sym_COMMA] = ACTIONS(921),
    [anon_sym_RPAREN] = ACTIONS(921),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [413] = {
    [sym__pattern] = STATE(414),
    [sym__expression] = STATE(151),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym__] = ACTIONS(117),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(545),
    [anon_sym_return] = ACTIONS(547),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [414] = {
    [anon_sym_EQ] = ACTIONS(923),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [415] = {
    [sym__expression] = STATE(416),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [416] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(417),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [417] = {
    [sym_else_tail] = STATE(187),
    [anon_sym_EQ] = ACTIONS(597),
    [anon_sym_LPAREN] = ACTIONS(599),
    [anon_sym_COMMA] = ACTIONS(599),
    [anon_sym_RPAREN] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(599),
    [anon_sym_AMP_AMP] = ACTIONS(599),
    [anon_sym_PIPE_PIPE] = ACTIONS(599),
    [anon_sym_else] = ACTIONS(489),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [418] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(709),
    [anon_sym_LPAREN] = ACTIONS(711),
    [anon_sym_COMMA] = ACTIONS(711),
    [anon_sym_RPAREN] = ACTIONS(711),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(425),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(427),
    [anon_sym_AMP_AMP] = ACTIONS(429),
    [anon_sym_PIPE_PIPE] = ACTIONS(431),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [419] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(449),
    [anon_sym_LPAREN] = ACTIONS(451),
    [anon_sym_COMMA] = ACTIONS(451),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(385),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(387),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(389),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(391),
    [anon_sym_AMP_AMP] = ACTIONS(393),
    [anon_sym_PIPE_PIPE] = ACTIONS(395),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [420] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(421),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [421] = {
    [sym_else_tail] = STATE(122),
    [anon_sym_EQ] = ACTIONS(485),
    [anon_sym_LPAREN] = ACTIONS(487),
    [anon_sym_COMMA] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(487),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [anon_sym_PIPE_PIPE] = ACTIONS(487),
    [anon_sym_else] = ACTIONS(925),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [422] = {
    [sym_if_expression] = STATE(124),
    [sym_if_let_expression] = STATE(124),
    [sym_block] = STATE(124),
    [anon_sym_if] = ACTIONS(927),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [423] = {
    [sym__expression] = STATE(420),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_let] = ACTIONS(929),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [424] = {
    [sym__pattern] = STATE(425),
    [sym__expression] = STATE(151),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym__] = ACTIONS(117),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(545),
    [anon_sym_return] = ACTIONS(547),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [425] = {
    [anon_sym_EQ] = ACTIONS(931),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [426] = {
    [sym__expression] = STATE(427),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [427] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(428),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [428] = {
    [sym_else_tail] = STATE(187),
    [anon_sym_EQ] = ACTIONS(597),
    [anon_sym_LPAREN] = ACTIONS(599),
    [anon_sym_COMMA] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(599),
    [anon_sym_AMP_AMP] = ACTIONS(599),
    [anon_sym_PIPE_PIPE] = ACTIONS(599),
    [anon_sym_else] = ACTIONS(925),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [429] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(709),
    [anon_sym_LPAREN] = ACTIONS(711),
    [anon_sym_COMMA] = ACTIONS(711),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(385),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(387),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(389),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(391),
    [anon_sym_AMP_AMP] = ACTIONS(393),
    [anon_sym_PIPE_PIPE] = ACTIONS(395),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [430] = {
    [sym__expression] = STATE(442),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(299),
    [anon_sym_return] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(303),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [431] = {
    [sym__expression] = STATE(85),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(299),
    [anon_sym_return] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(303),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [432] = {
    [sym__expression] = STATE(441),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(299),
    [anon_sym_return] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(303),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [433] = {
    [sym__expression] = STATE(440),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(299),
    [anon_sym_return] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(303),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [434] = {
    [sym__expression] = STATE(439),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(299),
    [anon_sym_return] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(303),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [435] = {
    [sym__expression] = STATE(438),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(299),
    [anon_sym_return] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(303),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [436] = {
    [sym__expression] = STATE(437),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(299),
    [anon_sym_return] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(303),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [437] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(327),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(331),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(333),
    [anon_sym_AMP_AMP] = ACTIONS(335),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_if] = ACTIONS(277),
    [anon_sym_EQ_GT] = ACTIONS(277),
    [anon_sym_PIPE] = ACTIONS(279),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [438] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(327),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(331),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(333),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_if] = ACTIONS(277),
    [anon_sym_EQ_GT] = ACTIONS(277),
    [anon_sym_PIPE] = ACTIONS(279),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [439] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(327),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_if] = ACTIONS(277),
    [anon_sym_EQ_GT] = ACTIONS(277),
    [anon_sym_PIPE] = ACTIONS(279),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [440] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(327),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(333),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_if] = ACTIONS(277),
    [anon_sym_EQ_GT] = ACTIONS(277),
    [anon_sym_PIPE] = ACTIONS(279),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [441] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(327),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_if] = ACTIONS(277),
    [anon_sym_EQ_GT] = ACTIONS(277),
    [anon_sym_PIPE] = ACTIONS(279),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [442] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(449),
    [anon_sym_LPAREN] = ACTIONS(451),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(327),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(331),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(333),
    [anon_sym_AMP_AMP] = ACTIONS(335),
    [anon_sym_PIPE_PIPE] = ACTIONS(337),
    [anon_sym_if] = ACTIONS(451),
    [anon_sym_EQ_GT] = ACTIONS(451),
    [anon_sym_PIPE] = ACTIONS(449),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [443] = {
    [sym__expression] = STATE(477),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(933),
    [anon_sym_return] = ACTIONS(935),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(937),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [444] = {
    [sym__pattern] = STATE(476),
    [sym__expression] = STATE(59),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym__] = ACTIONS(117),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(299),
    [anon_sym_return] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(303),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [445] = {
    [anon_sym_if] = ACTIONS(939),
    [anon_sym_EQ_GT] = ACTIONS(941),
    [anon_sym_PIPE] = ACTIONS(943),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [446] = {
    [sym__expression] = STATE(452),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(933),
    [anon_sym_return] = ACTIONS(935),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(937),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [447] = {
    [sym__pattern] = STATE(448),
    [sym__expression] = STATE(59),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym__] = ACTIONS(117),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(299),
    [anon_sym_return] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(303),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [448] = {
    [anon_sym_if] = ACTIONS(945),
    [anon_sym_EQ_GT] = ACTIONS(945),
    [anon_sym_PIPE] = ACTIONS(945),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [449] = {
    [sym__expression] = STATE(260),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(933),
    [anon_sym_return] = ACTIONS(935),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(937),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [450] = {
    [sym__expression] = STATE(475),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_EQ] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(137),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(947),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(143),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(143),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(139),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(137),
    [anon_sym_AMP_AMP] = ACTIONS(137),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
    [anon_sym_return] = ACTIONS(935),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(937),
    [anon_sym_match] = ACTIONS(127),
    [anon_sym_EQ_GT] = ACTIONS(137),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [451] = {
    [sym__expression] = STATE(466),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [452] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(949),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(951),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(953),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(955),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(957),
    [anon_sym_AMP_AMP] = ACTIONS(959),
    [anon_sym_PIPE_PIPE] = ACTIONS(961),
    [anon_sym_EQ_GT] = ACTIONS(963),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [453] = {
    [sym__expression] = STATE(465),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(933),
    [anon_sym_return] = ACTIONS(935),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(937),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [454] = {
    [sym__expression] = STATE(85),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(933),
    [anon_sym_return] = ACTIONS(935),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(937),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [455] = {
    [sym__expression] = STATE(464),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(933),
    [anon_sym_return] = ACTIONS(935),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(937),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [456] = {
    [sym__expression] = STATE(463),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(933),
    [anon_sym_return] = ACTIONS(935),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(937),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [457] = {
    [sym__expression] = STATE(462),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(933),
    [anon_sym_return] = ACTIONS(935),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(937),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [458] = {
    [sym__expression] = STATE(461),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(933),
    [anon_sym_return] = ACTIONS(935),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(937),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [459] = {
    [sym__expression] = STATE(460),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(933),
    [anon_sym_return] = ACTIONS(935),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(937),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [460] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(951),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(953),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(955),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(957),
    [anon_sym_AMP_AMP] = ACTIONS(959),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_EQ_GT] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [461] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(951),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(953),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(955),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(957),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_EQ_GT] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [462] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(951),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(953),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_EQ_GT] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [463] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(951),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(953),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(957),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_EQ_GT] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [464] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(951),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_EQ_GT] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [465] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(449),
    [anon_sym_LPAREN] = ACTIONS(451),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(951),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(953),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(955),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(957),
    [anon_sym_AMP_AMP] = ACTIONS(959),
    [anon_sym_PIPE_PIPE] = ACTIONS(961),
    [anon_sym_EQ_GT] = ACTIONS(451),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [466] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(467),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [467] = {
    [sym_else_tail] = STATE(122),
    [anon_sym_EQ] = ACTIONS(485),
    [anon_sym_LPAREN] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(487),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [anon_sym_PIPE_PIPE] = ACTIONS(487),
    [anon_sym_else] = ACTIONS(965),
    [anon_sym_EQ_GT] = ACTIONS(487),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [468] = {
    [sym_if_expression] = STATE(124),
    [sym_if_let_expression] = STATE(124),
    [sym_block] = STATE(124),
    [anon_sym_if] = ACTIONS(967),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [469] = {
    [sym__expression] = STATE(466),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_let] = ACTIONS(969),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [470] = {
    [sym__pattern] = STATE(471),
    [sym__expression] = STATE(151),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym__] = ACTIONS(117),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(545),
    [anon_sym_return] = ACTIONS(547),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [471] = {
    [anon_sym_EQ] = ACTIONS(971),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [472] = {
    [sym__expression] = STATE(473),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [473] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(474),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [474] = {
    [sym_else_tail] = STATE(187),
    [anon_sym_EQ] = ACTIONS(597),
    [anon_sym_LPAREN] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(599),
    [anon_sym_AMP_AMP] = ACTIONS(599),
    [anon_sym_PIPE_PIPE] = ACTIONS(599),
    [anon_sym_else] = ACTIONS(965),
    [anon_sym_EQ_GT] = ACTIONS(599),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [475] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(709),
    [anon_sym_LPAREN] = ACTIONS(711),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(951),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(953),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(955),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(957),
    [anon_sym_AMP_AMP] = ACTIONS(959),
    [anon_sym_PIPE_PIPE] = ACTIONS(961),
    [anon_sym_EQ_GT] = ACTIONS(711),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [476] = {
    [anon_sym_if] = ACTIONS(973),
    [anon_sym_EQ_GT] = ACTIONS(973),
    [anon_sym_PIPE] = ACTIONS(973),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [477] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(949),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(951),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(953),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(955),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(957),
    [anon_sym_AMP_AMP] = ACTIONS(959),
    [anon_sym_PIPE_PIPE] = ACTIONS(961),
    [anon_sym_EQ_GT] = ACTIONS(975),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [478] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(479),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [479] = {
    [sym_else_tail] = STATE(122),
    [anon_sym_EQ] = ACTIONS(485),
    [anon_sym_LPAREN] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(487),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [anon_sym_PIPE_PIPE] = ACTIONS(487),
    [anon_sym_if] = ACTIONS(487),
    [anon_sym_else] = ACTIONS(977),
    [anon_sym_EQ_GT] = ACTIONS(487),
    [anon_sym_PIPE] = ACTIONS(485),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [480] = {
    [sym_if_expression] = STATE(124),
    [sym_if_let_expression] = STATE(124),
    [sym_block] = STATE(124),
    [anon_sym_if] = ACTIONS(979),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [481] = {
    [sym__expression] = STATE(478),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_let] = ACTIONS(981),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [482] = {
    [sym__pattern] = STATE(483),
    [sym__expression] = STATE(151),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym__] = ACTIONS(117),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(545),
    [anon_sym_return] = ACTIONS(547),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [483] = {
    [anon_sym_EQ] = ACTIONS(983),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [484] = {
    [sym__expression] = STATE(485),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [485] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(486),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [486] = {
    [sym_else_tail] = STATE(187),
    [anon_sym_EQ] = ACTIONS(597),
    [anon_sym_LPAREN] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(599),
    [anon_sym_AMP_AMP] = ACTIONS(599),
    [anon_sym_PIPE_PIPE] = ACTIONS(599),
    [anon_sym_if] = ACTIONS(599),
    [anon_sym_else] = ACTIONS(977),
    [anon_sym_EQ_GT] = ACTIONS(599),
    [anon_sym_PIPE] = ACTIONS(597),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [487] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(709),
    [anon_sym_LPAREN] = ACTIONS(711),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(327),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(331),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(333),
    [anon_sym_AMP_AMP] = ACTIONS(335),
    [anon_sym_PIPE_PIPE] = ACTIONS(337),
    [anon_sym_if] = ACTIONS(711),
    [anon_sym_EQ_GT] = ACTIONS(711),
    [anon_sym_PIPE] = ACTIONS(709),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [488] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [489] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [490] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [491] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [492] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [493] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(449),
    [anon_sym_LPAREN] = ACTIONS(451),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(451),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [494] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(495),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [495] = {
    [sym_else_tail] = STATE(122),
    [anon_sym_EQ] = ACTIONS(485),
    [anon_sym_LPAREN] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(487),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [anon_sym_PIPE_PIPE] = ACTIONS(487),
    [anon_sym_else] = ACTIONS(985),
    [anon_sym_LBRACE] = ACTIONS(487),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [496] = {
    [sym_if_expression] = STATE(124),
    [sym_if_let_expression] = STATE(124),
    [sym_block] = STATE(124),
    [anon_sym_if] = ACTIONS(987),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [497] = {
    [sym__expression] = STATE(494),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_let] = ACTIONS(989),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [498] = {
    [sym__pattern] = STATE(499),
    [sym__expression] = STATE(151),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym__] = ACTIONS(117),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(545),
    [anon_sym_return] = ACTIONS(547),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [499] = {
    [anon_sym_EQ] = ACTIONS(991),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [500] = {
    [sym__expression] = STATE(501),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [501] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(502),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [502] = {
    [sym_else_tail] = STATE(187),
    [anon_sym_EQ] = ACTIONS(597),
    [anon_sym_LPAREN] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(599),
    [anon_sym_AMP_AMP] = ACTIONS(599),
    [anon_sym_PIPE_PIPE] = ACTIONS(599),
    [anon_sym_else] = ACTIONS(985),
    [anon_sym_LBRACE] = ACTIONS(599),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [503] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(709),
    [anon_sym_LPAREN] = ACTIONS(711),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(711),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [504] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(505),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [505] = {
    [sym_else_tail] = STATE(122),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_EQ] = ACTIONS(485),
    [anon_sym_LPAREN] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(487),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [anon_sym_PIPE_PIPE] = ACTIONS(487),
    [anon_sym_else] = ACTIONS(993),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [506] = {
    [sym_if_expression] = STATE(124),
    [sym_if_let_expression] = STATE(124),
    [sym_block] = STATE(124),
    [anon_sym_if] = ACTIONS(995),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [507] = {
    [sym__expression] = STATE(504),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_let] = ACTIONS(997),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [508] = {
    [sym__pattern] = STATE(509),
    [sym__expression] = STATE(151),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym__] = ACTIONS(117),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(545),
    [anon_sym_return] = ACTIONS(547),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [509] = {
    [anon_sym_EQ] = ACTIONS(999),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [510] = {
    [sym__expression] = STATE(511),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [511] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(512),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [512] = {
    [sym_else_tail] = STATE(187),
    [anon_sym_SEMI] = ACTIONS(599),
    [anon_sym_EQ] = ACTIONS(597),
    [anon_sym_LPAREN] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(599),
    [anon_sym_AMP_AMP] = ACTIONS(599),
    [anon_sym_PIPE_PIPE] = ACTIONS(599),
    [anon_sym_else] = ACTIONS(993),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [513] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(277),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(225),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(227),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [514] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(277),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [515] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(277),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(227),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [516] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(277),
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(277),
    [anon_sym_PIPE_PIPE] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [517] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(451),
    [anon_sym_EQ] = ACTIONS(449),
    [anon_sym_LPAREN] = ACTIONS(451),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(225),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(227),
    [anon_sym_AMP_AMP] = ACTIONS(229),
    [anon_sym_PIPE_PIPE] = ACTIONS(231),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [518] = {
    [sym__statement_list] = STATE(308),
    [sym__statement] = STATE(17),
    [sym__declaration_statement] = STATE(18),
    [sym__control_flow_statement] = STATE(18),
    [sym__item] = STATE(19),
    [sym_function_item] = STATE(20),
    [sym_let_declaration] = STATE(19),
    [sym__expression_statement] = STATE(18),
    [sym__expression] = STATE(21),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(23),
    [sym_if_let_expression] = STATE(24),
    [sym_match_expression] = STATE(23),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [sym_empty_statement] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(743),
    [anon_sym_SEMI] = ACTIONS(743),
    [anon_sym_fn] = ACTIONS(1001),
    [anon_sym_let] = ACTIONS(1001),
    [anon_sym_LPAREN] = ACTIONS(743),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(743),
    [anon_sym_return] = ACTIONS(1001),
    [anon_sym_LBRACK] = ACTIONS(743),
    [anon_sym_if] = ACTIONS(1001),
    [anon_sym_match] = ACTIONS(1001),
    [sym_number_literal] = ACTIONS(1001),
    [anon_sym_DQUOTE] = ACTIONS(743),
    [sym_raw_string_literal] = ACTIONS(1001),
    [anon_sym_SQUOTE] = ACTIONS(743),
    [sym_boolean_literal] = ACTIONS(1001),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(1003),
  },
  [519] = {
    [sym__pattern] = STATE(529),
    [sym__expression] = STATE(151),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym__] = ACTIONS(117),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(545),
    [anon_sym_return] = ACTIONS(547),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [520] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(521),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(761),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [521] = {
    [sym_else_tail] = STATE(320),
    [ts_builtin_sym_end] = ACTIONS(487),
    [anon_sym_LF] = ACTIONS(487),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_fn] = ACTIONS(485),
    [anon_sym_let] = ACTIONS(485),
    [anon_sym_EQ] = ACTIONS(485),
    [anon_sym_LPAREN] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1005),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1005),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(487),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [anon_sym_PIPE_PIPE] = ACTIONS(487),
    [anon_sym_return] = ACTIONS(485),
    [anon_sym_LBRACK] = ACTIONS(487),
    [anon_sym_if] = ACTIONS(485),
    [anon_sym_else] = ACTIONS(1007),
    [anon_sym_match] = ACTIONS(485),
    [sym_number_literal] = ACTIONS(485),
    [anon_sym_DQUOTE] = ACTIONS(487),
    [sym_raw_string_literal] = ACTIONS(485),
    [anon_sym_SQUOTE] = ACTIONS(487),
    [sym_boolean_literal] = ACTIONS(485),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(1005),
  },
  [522] = {
    [sym_if_expression] = STATE(322),
    [sym_if_let_expression] = STATE(322),
    [sym_block] = STATE(322),
    [anon_sym_if] = ACTIONS(1009),
    [anon_sym_LBRACE] = ACTIONS(761),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [523] = {
    [sym__expression] = STATE(520),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_let] = ACTIONS(1011),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [524] = {
    [sym__pattern] = STATE(525),
    [sym__expression] = STATE(151),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym__] = ACTIONS(117),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(545),
    [anon_sym_return] = ACTIONS(547),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [525] = {
    [anon_sym_EQ] = ACTIONS(1013),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [526] = {
    [sym__expression] = STATE(527),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [527] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(528),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(761),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [528] = {
    [sym_else_tail] = STATE(332),
    [ts_builtin_sym_end] = ACTIONS(599),
    [anon_sym_LF] = ACTIONS(599),
    [anon_sym_SEMI] = ACTIONS(599),
    [anon_sym_fn] = ACTIONS(597),
    [anon_sym_let] = ACTIONS(597),
    [anon_sym_EQ] = ACTIONS(597),
    [anon_sym_LPAREN] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1015),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1015),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(599),
    [anon_sym_AMP_AMP] = ACTIONS(599),
    [anon_sym_PIPE_PIPE] = ACTIONS(599),
    [anon_sym_return] = ACTIONS(597),
    [anon_sym_LBRACK] = ACTIONS(599),
    [anon_sym_if] = ACTIONS(597),
    [anon_sym_else] = ACTIONS(1007),
    [anon_sym_match] = ACTIONS(597),
    [sym_number_literal] = ACTIONS(597),
    [anon_sym_DQUOTE] = ACTIONS(599),
    [sym_raw_string_literal] = ACTIONS(597),
    [anon_sym_SQUOTE] = ACTIONS(599),
    [sym_boolean_literal] = ACTIONS(597),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(1015),
  },
  [529] = {
    [anon_sym_EQ] = ACTIONS(1017),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [530] = {
    [sym__expression] = STATE(531),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [531] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(532),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(761),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [532] = {
    [sym_else_tail] = STATE(332),
    [ts_builtin_sym_end] = ACTIONS(599),
    [anon_sym_LF] = ACTIONS(599),
    [anon_sym_SEMI] = ACTIONS(599),
    [anon_sym_fn] = ACTIONS(597),
    [anon_sym_let] = ACTIONS(597),
    [anon_sym_LPAREN] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(599),
    [anon_sym_return] = ACTIONS(597),
    [anon_sym_LBRACK] = ACTIONS(599),
    [anon_sym_if] = ACTIONS(597),
    [anon_sym_else] = ACTIONS(1019),
    [anon_sym_match] = ACTIONS(597),
    [sym_number_literal] = ACTIONS(597),
    [anon_sym_DQUOTE] = ACTIONS(599),
    [sym_raw_string_literal] = ACTIONS(597),
    [anon_sym_SQUOTE] = ACTIONS(599),
    [sym_boolean_literal] = ACTIONS(597),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(1015),
  },
  [533] = {
    [sym_if_expression] = STATE(322),
    [sym_if_let_expression] = STATE(322),
    [sym_block] = STATE(322),
    [anon_sym_if] = ACTIONS(1021),
    [anon_sym_LBRACE] = ACTIONS(761),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [534] = {
    [sym__expression] = STATE(535),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_let] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [535] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(536),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(761),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [536] = {
    [sym_else_tail] = STATE(320),
    [ts_builtin_sym_end] = ACTIONS(487),
    [anon_sym_LF] = ACTIONS(487),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_fn] = ACTIONS(485),
    [anon_sym_let] = ACTIONS(485),
    [anon_sym_LPAREN] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(487),
    [anon_sym_return] = ACTIONS(485),
    [anon_sym_LBRACK] = ACTIONS(487),
    [anon_sym_if] = ACTIONS(485),
    [anon_sym_else] = ACTIONS(1019),
    [anon_sym_match] = ACTIONS(485),
    [sym_number_literal] = ACTIONS(485),
    [anon_sym_DQUOTE] = ACTIONS(487),
    [sym_raw_string_literal] = ACTIONS(485),
    [anon_sym_SQUOTE] = ACTIONS(487),
    [sym_boolean_literal] = ACTIONS(485),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(1005),
  },
  [537] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(711),
    [anon_sym_EQ] = ACTIONS(709),
    [anon_sym_LPAREN] = ACTIONS(711),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(225),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(227),
    [anon_sym_AMP_AMP] = ACTIONS(229),
    [anon_sym_PIPE_PIPE] = ACTIONS(231),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [538] = {
    [sym__statement_list] = STATE(308),
    [sym__statement] = STATE(561),
    [sym__declaration_statement] = STATE(18),
    [sym__control_flow_statement] = STATE(18),
    [sym__item] = STATE(19),
    [sym_function_item] = STATE(20),
    [sym_let_declaration] = STATE(19),
    [sym__expression_statement] = STATE(18),
    [sym__expression] = STATE(743),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(675),
    [sym_if_let_expression] = STATE(24),
    [sym_match_expression] = STATE(675),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [sym_empty_statement] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(1023),
    [anon_sym_LF] = ACTIONS(1033),
    [anon_sym_SEMI] = ACTIONS(1042),
    [anon_sym_fn] = ACTIONS(1053),
    [anon_sym_let] = ACTIONS(1064),
    [anon_sym_LPAREN] = ACTIONS(1075),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1086),
    [anon_sym_return] = ACTIONS(1097),
    [anon_sym_LBRACK] = ACTIONS(1108),
    [anon_sym_if] = ACTIONS(1119),
    [anon_sym_match] = ACTIONS(1130),
    [anon_sym_RBRACE] = ACTIONS(1023),
    [sym_number_literal] = ACTIONS(1141),
    [anon_sym_DQUOTE] = ACTIONS(1152),
    [sym_raw_string_literal] = ACTIONS(1141),
    [anon_sym_SQUOTE] = ACTIONS(1163),
    [sym_boolean_literal] = ACTIONS(1141),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(1174),
  },
  [539] = {
    [sym__pattern] = STATE(737),
    [sym__expression] = STATE(347),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym__] = ACTIONS(117),
    [sym_mutable_specifier] = ACTIONS(119),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(121),
    [anon_sym_return] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(125),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [540] = {
    [sym_type_expression] = STATE(736),
    [anon_sym_u8] = ACTIONS(813),
    [anon_sym_i8] = ACTIONS(813),
    [anon_sym_u16] = ACTIONS(813),
    [anon_sym_i16] = ACTIONS(813),
    [anon_sym_u32] = ACTIONS(813),
    [anon_sym_i32] = ACTIONS(813),
    [anon_sym_u64] = ACTIONS(813),
    [anon_sym_i64] = ACTIONS(813),
    [anon_sym_isize] = ACTIONS(813),
    [anon_sym_usize] = ACTIONS(813),
    [anon_sym_f32] = ACTIONS(813),
    [anon_sym_f64] = ACTIONS(813),
    [sym_boolean_literal] = ACTIONS(813),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(815),
  },
  [541] = {
    [sym__expression] = STATE(734),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1185),
    [anon_sym_return] = ACTIONS(1187),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(1189),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [542] = {
    [sym__expression] = STATE(732),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_RPAREN] = ACTIONS(1191),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(267),
    [anon_sym_return] = ACTIONS(269),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(271),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(1193),
  },
  [543] = {
    [sym__expression] = STATE(727),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(1195),
    [anon_sym__] = ACTIONS(405),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1198),
    [anon_sym_return] = ACTIONS(1201),
    [anon_sym_LBRACK] = ACTIONS(1204),
    [anon_sym_if] = ACTIONS(1207),
    [anon_sym_match] = ACTIONS(1210),
    [anon_sym_RBRACE] = ACTIONS(403),
    [sym_number_literal] = ACTIONS(1213),
    [anon_sym_DQUOTE] = ACTIONS(1216),
    [sym_raw_string_literal] = ACTIONS(1213),
    [anon_sym_SQUOTE] = ACTIONS(1219),
    [sym_boolean_literal] = ACTIONS(1213),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(1222),
  },
  [544] = {
    [anon_sym_SEMI] = ACTIONS(1225),
    [anon_sym_DASH_GT] = ACTIONS(1233),
    [anon_sym_COLON] = ACTIONS(1225),
    [anon_sym_EQ] = ACTIONS(1237),
    [anon_sym_LPAREN] = ACTIONS(1245),
    [anon_sym_COMMA] = ACTIONS(1245),
    [anon_sym_RPAREN] = ACTIONS(1245),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1250),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1250),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1250),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1245),
    [anon_sym_AMP_AMP] = ACTIONS(1245),
    [anon_sym_PIPE_PIPE] = ACTIONS(1245),
    [anon_sym_RBRACK] = ACTIONS(1245),
    [anon_sym_if] = ACTIONS(1225),
    [anon_sym_LBRACE] = ACTIONS(1255),
    [anon_sym_RBRACE] = ACTIONS(1245),
    [anon_sym_EQ_GT] = ACTIONS(1225),
    [anon_sym_PIPE] = ACTIONS(1237),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [545] = {
    [sym__expression] = STATE(725),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1185),
    [anon_sym_return] = ACTIONS(1187),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(1189),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [546] = {
    [sym__expression] = STATE(724),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1185),
    [anon_sym_return] = ACTIONS(1187),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(1189),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [547] = {
    [sym__expression] = STATE(723),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_SEMI] = ACTIONS(137),
    [anon_sym_COLON] = ACTIONS(137),
    [anon_sym_EQ] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(1263),
    [anon_sym_COMMA] = ACTIONS(137),
    [anon_sym_RPAREN] = ACTIONS(137),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1266),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(143),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(143),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(139),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(137),
    [anon_sym_AMP_AMP] = ACTIONS(137),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
    [anon_sym_return] = ACTIONS(1187),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(137),
    [anon_sym_if] = ACTIONS(1268),
    [anon_sym_match] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_RBRACE] = ACTIONS(137),
    [anon_sym_EQ_GT] = ACTIONS(137),
    [anon_sym_PIPE] = ACTIONS(139),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [548] = {
    [anon_sym_SEMI] = ACTIONS(1271),
    [anon_sym_COLON] = ACTIONS(1271),
    [anon_sym_EQ] = ACTIONS(1276),
    [anon_sym_LPAREN] = ACTIONS(1271),
    [anon_sym_COMMA] = ACTIONS(1271),
    [anon_sym_RPAREN] = ACTIONS(1271),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1276),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1271),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1276),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1271),
    [anon_sym_AMP_AMP] = ACTIONS(1271),
    [anon_sym_PIPE_PIPE] = ACTIONS(1271),
    [anon_sym_RBRACK] = ACTIONS(1271),
    [anon_sym_if] = ACTIONS(1271),
    [anon_sym_LBRACE] = ACTIONS(1271),
    [anon_sym_RBRACE] = ACTIONS(1271),
    [anon_sym_EQ_GT] = ACTIONS(1271),
    [anon_sym_PIPE] = ACTIONS(1276),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [549] = {
    [sym__expression] = STATE(707),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_let] = ACTIONS(1281),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1283),
    [anon_sym_return] = ACTIONS(1285),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(1287),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [550] = {
    [sym_if_expression] = STATE(322),
    [sym_if_let_expression] = STATE(322),
    [sym_block] = STATE(322),
    [anon_sym_if] = ACTIONS(1289),
    [anon_sym_LBRACE] = ACTIONS(761),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [551] = {
    [sym__statement_list] = STATE(324),
    [sym__statement] = STATE(130),
    [sym__declaration_statement] = STATE(18),
    [sym__control_flow_statement] = STATE(18),
    [sym__item] = STATE(19),
    [sym_function_item] = STATE(20),
    [sym_let_declaration] = STATE(19),
    [sym__pattern] = STATE(58),
    [sym__expression_statement] = STATE(18),
    [sym__expression] = STATE(604),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(605),
    [sym_if_let_expression] = STATE(24),
    [sym_match_expression] = STATE(605),
    [sym_match_arm] = STATE(60),
    [sym_match_pattern] = STATE(61),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [sym_empty_statement] = STATE(18),
    [aux_sym_match_expression_repeat1] = STATE(313),
    [anon_sym_SEMI] = ACTIONS(81),
    [anon_sym_fn] = ACTIONS(83),
    [anon_sym_let] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(1291),
    [anon_sym__] = ACTIONS(117),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1293),
    [anon_sym_return] = ACTIONS(1295),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(1297),
    [anon_sym_match] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(1299),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [552] = {
    [ts_builtin_sym_end] = ACTIONS(1301),
    [anon_sym_LF] = ACTIONS(1301),
    [anon_sym_SEMI] = ACTIONS(1301),
    [anon_sym_fn] = ACTIONS(1306),
    [anon_sym_let] = ACTIONS(1306),
    [anon_sym_COLON] = ACTIONS(1301),
    [anon_sym_EQ] = ACTIONS(1306),
    [anon_sym_LPAREN] = ACTIONS(1301),
    [anon_sym_COMMA] = ACTIONS(1301),
    [anon_sym_RPAREN] = ACTIONS(1301),
    [anon_sym__] = ACTIONS(1311),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1306),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1314),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1314),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1306),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1301),
    [anon_sym_AMP_AMP] = ACTIONS(1301),
    [anon_sym_PIPE_PIPE] = ACTIONS(1301),
    [anon_sym_return] = ACTIONS(1306),
    [anon_sym_LBRACK] = ACTIONS(1301),
    [anon_sym_RBRACK] = ACTIONS(1301),
    [anon_sym_if] = ACTIONS(1306),
    [anon_sym_else] = ACTIONS(1311),
    [anon_sym_match] = ACTIONS(1306),
    [anon_sym_LBRACE] = ACTIONS(1301),
    [anon_sym_RBRACE] = ACTIONS(1301),
    [anon_sym_EQ_GT] = ACTIONS(1301),
    [anon_sym_PIPE] = ACTIONS(1306),
    [sym_number_literal] = ACTIONS(1306),
    [anon_sym_DQUOTE] = ACTIONS(1301),
    [sym_raw_string_literal] = ACTIONS(1306),
    [anon_sym_SQUOTE] = ACTIONS(1301),
    [sym_boolean_literal] = ACTIONS(1306),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(1314),
  },
  [553] = {
    [sym__pattern] = STATE(696),
    [sym__expression] = STATE(59),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym__] = ACTIONS(117),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(299),
    [anon_sym_return] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(303),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [554] = {
    [aux_sym_string_literal_repeat1] = STATE(116),
    [anon_sym_SEMI] = ACTIONS(1319),
    [anon_sym_COLON] = ACTIONS(1319),
    [anon_sym_EQ] = ACTIONS(1322),
    [anon_sym_LPAREN] = ACTIONS(1319),
    [anon_sym_COMMA] = ACTIONS(1319),
    [anon_sym_RPAREN] = ACTIONS(1319),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1322),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1319),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1322),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1319),
    [anon_sym_AMP_AMP] = ACTIONS(1319),
    [anon_sym_PIPE_PIPE] = ACTIONS(1319),
    [anon_sym_RBRACK] = ACTIONS(1319),
    [anon_sym_if] = ACTIONS(1319),
    [anon_sym_LBRACE] = ACTIONS(1319),
    [anon_sym_RBRACE] = ACTIONS(1319),
    [anon_sym_EQ_GT] = ACTIONS(1319),
    [anon_sym_PIPE] = ACTIONS(1322),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(167),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(1325),
    [sym_byte_escape] = ACTIONS(167),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [555] = {
    [anon_sym_DQUOTE] = ACTIONS(1327),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1327),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(1330),
    [sym_byte_escape] = ACTIONS(1327),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [556] = {
    [anon_sym_SEMI] = ACTIONS(1333),
    [anon_sym_COLON] = ACTIONS(1333),
    [anon_sym_EQ] = ACTIONS(1336),
    [anon_sym_LPAREN] = ACTIONS(1333),
    [anon_sym_COMMA] = ACTIONS(1333),
    [anon_sym_RPAREN] = ACTIONS(1333),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1336),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1333),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1336),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1333),
    [anon_sym_AMP_AMP] = ACTIONS(1333),
    [anon_sym_PIPE_PIPE] = ACTIONS(1333),
    [anon_sym_RBRACK] = ACTIONS(1333),
    [anon_sym_if] = ACTIONS(1333),
    [anon_sym_LBRACE] = ACTIONS(1333),
    [anon_sym_RBRACE] = ACTIONS(1333),
    [anon_sym_EQ_GT] = ACTIONS(1333),
    [anon_sym_PIPE] = ACTIONS(1336),
    [anon_sym_SQUOTE] = ACTIONS(171),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(173),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_RBRACK_SLASH] = ACTIONS(1339),
    [sym_byte_escape] = ACTIONS(173),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [557] = {
    [anon_sym_DQUOTE] = ACTIONS(1327),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1327),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(1341),
    [anon_sym_SQUOTE] = ACTIONS(457),
    [sym_byte_escape] = ACTIONS(1327),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [558] = {
    [anon_sym_SEMI] = ACTIONS(1344),
    [anon_sym_COLON] = ACTIONS(161),
    [anon_sym_EQ] = ACTIONS(1347),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_COMMA] = ACTIONS(1344),
    [anon_sym_RPAREN] = ACTIONS(1344),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(163),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(161),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(163),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(161),
    [anon_sym_AMP_AMP] = ACTIONS(161),
    [anon_sym_PIPE_PIPE] = ACTIONS(161),
    [anon_sym_RBRACK] = ACTIONS(161),
    [anon_sym_if] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(1344),
    [anon_sym_RBRACE] = ACTIONS(161),
    [anon_sym_EQ_GT] = ACTIONS(161),
    [anon_sym_PIPE] = ACTIONS(163),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [559] = {
    [sym_parameters] = STATE(393),
    [anon_sym_SEMI] = ACTIONS(1350),
    [anon_sym_COLON] = ACTIONS(1353),
    [anon_sym_EQ] = ACTIONS(1356),
    [anon_sym_LPAREN] = ACTIONS(1359),
    [anon_sym_COMMA] = ACTIONS(1350),
    [anon_sym_RPAREN] = ACTIONS(1350),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(179),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(177),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(179),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(177),
    [anon_sym_AMP_AMP] = ACTIONS(177),
    [anon_sym_PIPE_PIPE] = ACTIONS(177),
    [anon_sym_RBRACK] = ACTIONS(177),
    [anon_sym_if] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(1350),
    [anon_sym_RBRACE] = ACTIONS(177),
    [anon_sym_EQ_GT] = ACTIONS(177),
    [anon_sym_PIPE] = ACTIONS(179),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [560] = {
    [ts_builtin_sym_end] = ACTIONS(1362),
    [anon_sym_SEMI] = ACTIONS(1362),
    [anon_sym_fn] = ACTIONS(1366),
    [anon_sym_let] = ACTIONS(1366),
    [anon_sym_LPAREN] = ACTIONS(1362),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1362),
    [anon_sym_return] = ACTIONS(1366),
    [anon_sym_LBRACK] = ACTIONS(1362),
    [anon_sym_if] = ACTIONS(1366),
    [anon_sym_match] = ACTIONS(1366),
    [anon_sym_RBRACE] = ACTIONS(1370),
    [sym_number_literal] = ACTIONS(1366),
    [anon_sym_DQUOTE] = ACTIONS(1362),
    [sym_raw_string_literal] = ACTIONS(1366),
    [anon_sym_SQUOTE] = ACTIONS(1362),
    [sym_boolean_literal] = ACTIONS(1366),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(1373),
  },
  [561] = {
    [ts_builtin_sym_end] = ACTIONS(189),
    [anon_sym_LF] = ACTIONS(1377),
    [anon_sym_SEMI] = ACTIONS(1379),
    [anon_sym_fn] = ACTIONS(193),
    [anon_sym_let] = ACTIONS(193),
    [anon_sym_LPAREN] = ACTIONS(189),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(189),
    [anon_sym_return] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(189),
    [anon_sym_if] = ACTIONS(193),
    [anon_sym_match] = ACTIONS(193),
    [anon_sym_RBRACE] = ACTIONS(189),
    [sym_number_literal] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(189),
    [sym_raw_string_literal] = ACTIONS(193),
    [anon_sym_SQUOTE] = ACTIONS(189),
    [sym_boolean_literal] = ACTIONS(193),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(195),
  },
  [562] = {
    [aux_sym_match_pattern_repeat1] = STATE(445),
    [anon_sym_SEMI] = ACTIONS(1382),
    [anon_sym_COLON] = ACTIONS(1384),
    [anon_sym_EQ] = ACTIONS(1386),
    [anon_sym_if] = ACTIONS(1388),
    [anon_sym_EQ_GT] = ACTIONS(1392),
    [anon_sym_PIPE] = ACTIONS(1396),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [563] = {
    [sym_block] = STATE(397),
    [aux_sym_parameters_repeat1] = STATE(404),
    [anon_sym_SEMI] = ACTIONS(1400),
    [anon_sym_EQ] = ACTIONS(1402),
    [anon_sym_COMMA] = ACTIONS(1404),
    [anon_sym_RPAREN] = ACTIONS(1408),
    [anon_sym_LBRACE] = ACTIONS(761),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [564] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(598),
    [aux_sym__pattern_repeat1] = STATE(571),
    [anon_sym_SEMI] = ACTIONS(1412),
    [anon_sym_COLON] = ACTIONS(1419),
    [anon_sym_EQ] = ACTIONS(1425),
    [anon_sym_LPAREN] = ACTIONS(1432),
    [anon_sym_COMMA] = ACTIONS(1438),
    [anon_sym_RPAREN] = ACTIONS(1446),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1454),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1460),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1454),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1460),
    [anon_sym_AMP_AMP] = ACTIONS(1460),
    [anon_sym_PIPE_PIPE] = ACTIONS(1460),
    [anon_sym_RBRACK] = ACTIONS(1466),
    [anon_sym_if] = ACTIONS(1419),
    [anon_sym_LBRACE] = ACTIONS(1474),
    [anon_sym_RBRACE] = ACTIONS(1480),
    [anon_sym_EQ_GT] = ACTIONS(1486),
    [anon_sym_PIPE] = ACTIONS(1494),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [565] = {
    [ts_builtin_sym_end] = ACTIONS(1500),
    [anon_sym_LF] = ACTIONS(1500),
    [anon_sym_SEMI] = ACTIONS(1503),
    [anon_sym_fn] = ACTIONS(1507),
    [anon_sym_let] = ACTIONS(1507),
    [anon_sym_COLON] = ACTIONS(1510),
    [anon_sym_EQ] = ACTIONS(1513),
    [anon_sym_LPAREN] = ACTIONS(1503),
    [anon_sym_COMMA] = ACTIONS(1510),
    [anon_sym_RPAREN] = ACTIONS(1510),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1507),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1516),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1516),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1513),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1510),
    [anon_sym_AMP_AMP] = ACTIONS(1510),
    [anon_sym_PIPE_PIPE] = ACTIONS(1510),
    [anon_sym_return] = ACTIONS(1507),
    [anon_sym_LBRACK] = ACTIONS(1500),
    [anon_sym_RBRACK] = ACTIONS(1510),
    [anon_sym_if] = ACTIONS(1519),
    [anon_sym_match] = ACTIONS(1507),
    [anon_sym_LBRACE] = ACTIONS(1510),
    [anon_sym_RBRACE] = ACTIONS(1503),
    [anon_sym_EQ_GT] = ACTIONS(1510),
    [anon_sym_PIPE] = ACTIONS(1513),
    [sym_number_literal] = ACTIONS(1507),
    [anon_sym_DQUOTE] = ACTIONS(1500),
    [sym_raw_string_literal] = ACTIONS(1507),
    [anon_sym_SQUOTE] = ACTIONS(1500),
    [sym_boolean_literal] = ACTIONS(1507),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(1523),
  },
  [566] = {
    [ts_builtin_sym_end] = ACTIONS(1526),
    [anon_sym_LF] = ACTIONS(1526),
    [anon_sym_SEMI] = ACTIONS(1526),
    [anon_sym_fn] = ACTIONS(1529),
    [anon_sym_let] = ACTIONS(1529),
    [anon_sym_COLON] = ACTIONS(499),
    [anon_sym_EQ] = ACTIONS(501),
    [anon_sym_LPAREN] = ACTIONS(1526),
    [anon_sym_COMMA] = ACTIONS(499),
    [anon_sym_RPAREN] = ACTIONS(499),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1529),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(773),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(773),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(499),
    [anon_sym_AMP_AMP] = ACTIONS(499),
    [anon_sym_PIPE_PIPE] = ACTIONS(499),
    [anon_sym_return] = ACTIONS(1529),
    [anon_sym_LBRACK] = ACTIONS(1526),
    [anon_sym_RBRACK] = ACTIONS(499),
    [anon_sym_if] = ACTIONS(1529),
    [anon_sym_match] = ACTIONS(1529),
    [anon_sym_LBRACE] = ACTIONS(499),
    [anon_sym_RBRACE] = ACTIONS(1526),
    [anon_sym_EQ_GT] = ACTIONS(499),
    [anon_sym_PIPE] = ACTIONS(501),
    [sym_number_literal] = ACTIONS(1529),
    [anon_sym_DQUOTE] = ACTIONS(1526),
    [sym_raw_string_literal] = ACTIONS(1529),
    [anon_sym_SQUOTE] = ACTIONS(1526),
    [sym_boolean_literal] = ACTIONS(1529),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(1532),
  },
  [567] = {
    [ts_builtin_sym_end] = ACTIONS(1535),
    [anon_sym_LF] = ACTIONS(1535),
    [anon_sym_SEMI] = ACTIONS(1535),
    [anon_sym_fn] = ACTIONS(1538),
    [anon_sym_let] = ACTIONS(1538),
    [anon_sym_COLON] = ACTIONS(1535),
    [anon_sym_EQ] = ACTIONS(1538),
    [anon_sym_LPAREN] = ACTIONS(1535),
    [anon_sym_COMMA] = ACTIONS(1535),
    [anon_sym_RPAREN] = ACTIONS(1535),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1538),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1541),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1541),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1538),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1535),
    [anon_sym_AMP_AMP] = ACTIONS(1535),
    [anon_sym_PIPE_PIPE] = ACTIONS(1535),
    [anon_sym_return] = ACTIONS(1538),
    [anon_sym_LBRACK] = ACTIONS(1535),
    [anon_sym_RBRACK] = ACTIONS(1535),
    [anon_sym_if] = ACTIONS(1538),
    [anon_sym_match] = ACTIONS(1538),
    [anon_sym_LBRACE] = ACTIONS(1535),
    [anon_sym_RBRACE] = ACTIONS(1535),
    [anon_sym_EQ_GT] = ACTIONS(1535),
    [anon_sym_PIPE] = ACTIONS(1538),
    [sym_number_literal] = ACTIONS(1538),
    [anon_sym_DQUOTE] = ACTIONS(1535),
    [sym_raw_string_literal] = ACTIONS(1538),
    [anon_sym_SQUOTE] = ACTIONS(1535),
    [sym_boolean_literal] = ACTIONS(1538),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(1541),
  },
  [568] = {
    [ts_builtin_sym_end] = ACTIONS(237),
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_SEMI] = ACTIONS(1544),
    [anon_sym_fn] = ACTIONS(239),
    [anon_sym_let] = ACTIONS(239),
    [anon_sym_COLON] = ACTIONS(177),
    [anon_sym_EQ] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(1544),
    [anon_sym_COMMA] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(177),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(239),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(241),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(241),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(179),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(177),
    [anon_sym_AMP_AMP] = ACTIONS(177),
    [anon_sym_PIPE_PIPE] = ACTIONS(177),
    [anon_sym_return] = ACTIONS(239),
    [anon_sym_LBRACK] = ACTIONS(237),
    [anon_sym_RBRACK] = ACTIONS(177),
    [anon_sym_if] = ACTIONS(1547),
    [anon_sym_match] = ACTIONS(239),
    [anon_sym_LBRACE] = ACTIONS(177),
    [anon_sym_RBRACE] = ACTIONS(1544),
    [anon_sym_EQ_GT] = ACTIONS(177),
    [anon_sym_PIPE] = ACTIONS(179),
    [sym_number_literal] = ACTIONS(239),
    [anon_sym_DQUOTE] = ACTIONS(237),
    [sym_raw_string_literal] = ACTIONS(239),
    [anon_sym_SQUOTE] = ACTIONS(237),
    [sym_boolean_literal] = ACTIONS(239),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(243),
  },
  [569] = {
    [anon_sym_LPAREN] = ACTIONS(1550),
    [anon_sym__] = ACTIONS(1553),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1550),
    [anon_sym_return] = ACTIONS(1553),
    [anon_sym_LBRACK] = ACTIONS(1550),
    [anon_sym_if] = ACTIONS(1553),
    [anon_sym_match] = ACTIONS(1553),
    [anon_sym_RBRACE] = ACTIONS(1550),
    [sym_number_literal] = ACTIONS(1553),
    [anon_sym_DQUOTE] = ACTIONS(1550),
    [sym_raw_string_literal] = ACTIONS(1553),
    [anon_sym_SQUOTE] = ACTIONS(1550),
    [sym_boolean_literal] = ACTIONS(1553),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(1556),
  },
  [570] = {
    [sym_else_tail] = STATE(567),
    [ts_builtin_sym_end] = ACTIONS(1559),
    [anon_sym_LF] = ACTIONS(1559),
    [anon_sym_SEMI] = ACTIONS(1559),
    [anon_sym_fn] = ACTIONS(1565),
    [anon_sym_let] = ACTIONS(1565),
    [anon_sym_COLON] = ACTIONS(1571),
    [anon_sym_EQ] = ACTIONS(1575),
    [anon_sym_LPAREN] = ACTIONS(1579),
    [anon_sym_COMMA] = ACTIONS(1571),
    [anon_sym_RPAREN] = ACTIONS(1571),
    [anon_sym__] = ACTIONS(399),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1586),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1593),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1593),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1575),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1571),
    [anon_sym_AMP_AMP] = ACTIONS(1571),
    [anon_sym_PIPE_PIPE] = ACTIONS(1571),
    [anon_sym_return] = ACTIONS(1586),
    [anon_sym_LBRACK] = ACTIONS(1579),
    [anon_sym_RBRACK] = ACTIONS(1571),
    [anon_sym_if] = ACTIONS(1586),
    [anon_sym_else] = ACTIONS(1597),
    [anon_sym_match] = ACTIONS(1586),
    [anon_sym_LBRACE] = ACTIONS(1571),
    [anon_sym_RBRACE] = ACTIONS(1579),
    [anon_sym_EQ_GT] = ACTIONS(1571),
    [anon_sym_PIPE] = ACTIONS(1575),
    [sym_number_literal] = ACTIONS(1586),
    [anon_sym_DQUOTE] = ACTIONS(1579),
    [sym_raw_string_literal] = ACTIONS(1586),
    [anon_sym_SQUOTE] = ACTIONS(1579),
    [sym_boolean_literal] = ACTIONS(1586),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(1599),
  },
  [571] = {
    [anon_sym_COMMA] = ACTIONS(1606),
    [anon_sym_RPAREN] = ACTIONS(1608),
    [anon_sym_RBRACK] = ACTIONS(649),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [572] = {
    [sym__expression] = STATE(577),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1610),
    [anon_sym_return] = ACTIONS(1612),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(1614),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [573] = {
    [anon_sym_SEMI] = ACTIONS(1616),
    [anon_sym_COLON] = ACTIONS(1616),
    [anon_sym_EQ] = ACTIONS(1619),
    [anon_sym_LPAREN] = ACTIONS(441),
    [anon_sym_COMMA] = ACTIONS(441),
    [anon_sym_RPAREN] = ACTIONS(441),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(443),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(443),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(441),
    [anon_sym_AMP_AMP] = ACTIONS(441),
    [anon_sym_PIPE_PIPE] = ACTIONS(441),
    [anon_sym_RBRACK] = ACTIONS(441),
    [anon_sym_if] = ACTIONS(1616),
    [anon_sym_LBRACE] = ACTIONS(441),
    [anon_sym_RBRACE] = ACTIONS(441),
    [anon_sym_EQ_GT] = ACTIONS(1616),
    [anon_sym_PIPE] = ACTIONS(1619),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [574] = {
    [sym__expression] = STATE(592),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1610),
    [anon_sym_return] = ACTIONS(1612),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(1614),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [575] = {
    [sym__expression] = STATE(591),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_EQ] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(1263),
    [anon_sym_COMMA] = ACTIONS(137),
    [anon_sym_RPAREN] = ACTIONS(137),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1622),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(143),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(143),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(139),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(137),
    [anon_sym_AMP_AMP] = ACTIONS(137),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
    [anon_sym_return] = ACTIONS(1612),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(137),
    [anon_sym_if] = ACTIONS(1614),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [576] = {
    [sym__expression] = STATE(582),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [577] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(1624),
    [anon_sym_LPAREN] = ACTIONS(219),
    [anon_sym_COMMA] = ACTIONS(445),
    [anon_sym_RPAREN] = ACTIONS(445),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1626),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1628),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1626),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1628),
    [anon_sym_AMP_AMP] = ACTIONS(1628),
    [anon_sym_PIPE_PIPE] = ACTIONS(1628),
    [anon_sym_RBRACK] = ACTIONS(445),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [578] = {
    [sym__expression] = STATE(581),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1610),
    [anon_sym_return] = ACTIONS(1612),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(1614),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [579] = {
    [sym__expression] = STATE(580),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1610),
    [anon_sym_return] = ACTIONS(1612),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(1614),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [580] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(1630),
    [anon_sym_LPAREN] = ACTIONS(1633),
    [anon_sym_COMMA] = ACTIONS(277),
    [anon_sym_RPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1636),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1639),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1636),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1639),
    [anon_sym_AMP_AMP] = ACTIONS(1639),
    [anon_sym_PIPE_PIPE] = ACTIONS(1639),
    [anon_sym_RBRACK] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [581] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(1642),
    [anon_sym_LPAREN] = ACTIONS(1645),
    [anon_sym_COMMA] = ACTIONS(451),
    [anon_sym_RPAREN] = ACTIONS(451),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1648),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1651),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1648),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1651),
    [anon_sym_AMP_AMP] = ACTIONS(1651),
    [anon_sym_PIPE_PIPE] = ACTIONS(1651),
    [anon_sym_RBRACK] = ACTIONS(451),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [582] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(583),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [583] = {
    [sym_else_tail] = STATE(122),
    [anon_sym_EQ] = ACTIONS(485),
    [anon_sym_LPAREN] = ACTIONS(487),
    [anon_sym_COMMA] = ACTIONS(487),
    [anon_sym_RPAREN] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(487),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [anon_sym_PIPE_PIPE] = ACTIONS(487),
    [anon_sym_RBRACK] = ACTIONS(487),
    [anon_sym_else] = ACTIONS(1654),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [584] = {
    [sym_if_expression] = STATE(124),
    [sym_if_let_expression] = STATE(124),
    [sym_block] = STATE(124),
    [anon_sym_if] = ACTIONS(1656),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [585] = {
    [sym__expression] = STATE(582),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_let] = ACTIONS(1658),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [586] = {
    [sym__pattern] = STATE(587),
    [sym__expression] = STATE(151),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym__] = ACTIONS(117),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(545),
    [anon_sym_return] = ACTIONS(547),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [587] = {
    [anon_sym_EQ] = ACTIONS(1660),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [588] = {
    [sym__expression] = STATE(589),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [589] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(590),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [590] = {
    [sym_else_tail] = STATE(187),
    [anon_sym_EQ] = ACTIONS(597),
    [anon_sym_LPAREN] = ACTIONS(599),
    [anon_sym_COMMA] = ACTIONS(599),
    [anon_sym_RPAREN] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(599),
    [anon_sym_AMP_AMP] = ACTIONS(599),
    [anon_sym_PIPE_PIPE] = ACTIONS(599),
    [anon_sym_RBRACK] = ACTIONS(599),
    [anon_sym_else] = ACTIONS(1654),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [591] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(1662),
    [anon_sym_LPAREN] = ACTIONS(1665),
    [anon_sym_COMMA] = ACTIONS(711),
    [anon_sym_RPAREN] = ACTIONS(711),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1668),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1671),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1668),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1671),
    [anon_sym_AMP_AMP] = ACTIONS(1671),
    [anon_sym_PIPE_PIPE] = ACTIONS(1671),
    [anon_sym_RBRACK] = ACTIONS(711),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [592] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(1674),
    [anon_sym_LPAREN] = ACTIONS(1677),
    [anon_sym_COMMA] = ACTIONS(713),
    [anon_sym_RPAREN] = ACTIONS(713),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1680),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1683),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1680),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1683),
    [anon_sym_AMP_AMP] = ACTIONS(1683),
    [anon_sym_PIPE_PIPE] = ACTIONS(1683),
    [anon_sym_RBRACK] = ACTIONS(713),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [593] = {
    [sym__expression] = STATE(235),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(1686),
    [anon_sym_LF] = ACTIONS(1686),
    [anon_sym_SEMI] = ACTIONS(1686),
    [anon_sym_fn] = ACTIONS(1692),
    [anon_sym_let] = ACTIONS(1692),
    [anon_sym_LPAREN] = ACTIONS(1698),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1705),
    [anon_sym_return] = ACTIONS(1712),
    [anon_sym_LBRACK] = ACTIONS(1719),
    [anon_sym_if] = ACTIONS(1726),
    [anon_sym_match] = ACTIONS(1733),
    [anon_sym_RBRACE] = ACTIONS(1686),
    [sym_number_literal] = ACTIONS(1740),
    [anon_sym_DQUOTE] = ACTIONS(1747),
    [sym_raw_string_literal] = ACTIONS(1740),
    [anon_sym_SQUOTE] = ACTIONS(1754),
    [sym_boolean_literal] = ACTIONS(1740),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(1761),
  },
  [594] = {
    [sym__expression] = STATE(635),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1185),
    [anon_sym_return] = ACTIONS(1187),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(1189),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [595] = {
    [sym__expression] = STATE(633),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(1195),
    [anon_sym__] = ACTIONS(405),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1198),
    [anon_sym_return] = ACTIONS(1201),
    [anon_sym_LBRACK] = ACTIONS(1204),
    [anon_sym_if] = ACTIONS(1207),
    [anon_sym_match] = ACTIONS(1210),
    [anon_sym_RBRACE] = ACTIONS(403),
    [sym_number_literal] = ACTIONS(1213),
    [anon_sym_DQUOTE] = ACTIONS(1216),
    [sym_raw_string_literal] = ACTIONS(1213),
    [anon_sym_SQUOTE] = ACTIONS(1219),
    [sym_boolean_literal] = ACTIONS(1213),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(1768),
  },
  [596] = {
    [anon_sym_SEMI] = ACTIONS(1771),
    [anon_sym_COLON] = ACTIONS(1771),
    [anon_sym_EQ] = ACTIONS(1775),
    [anon_sym_LPAREN] = ACTIONS(1779),
    [anon_sym_COMMA] = ACTIONS(1779),
    [anon_sym_RPAREN] = ACTIONS(1779),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1782),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1779),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1782),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1779),
    [anon_sym_AMP_AMP] = ACTIONS(1779),
    [anon_sym_PIPE_PIPE] = ACTIONS(1779),
    [anon_sym_RBRACK] = ACTIONS(1779),
    [anon_sym_if] = ACTIONS(1771),
    [anon_sym_LBRACE] = ACTIONS(1779),
    [anon_sym_RBRACE] = ACTIONS(1779),
    [anon_sym_EQ_GT] = ACTIONS(1771),
    [anon_sym_PIPE] = ACTIONS(1775),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [597] = {
    [anon_sym_SEMI] = ACTIONS(1785),
    [anon_sym_COLON] = ACTIONS(1785),
    [anon_sym_EQ] = ACTIONS(1788),
    [anon_sym_LPAREN] = ACTIONS(1785),
    [anon_sym_COMMA] = ACTIONS(1785),
    [anon_sym_RPAREN] = ACTIONS(1785),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1788),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1785),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1788),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1785),
    [anon_sym_AMP_AMP] = ACTIONS(1785),
    [anon_sym_PIPE_PIPE] = ACTIONS(1785),
    [anon_sym_RBRACK] = ACTIONS(1785),
    [anon_sym_if] = ACTIONS(1785),
    [anon_sym_LBRACE] = ACTIONS(1785),
    [anon_sym_RBRACE] = ACTIONS(1785),
    [anon_sym_EQ_GT] = ACTIONS(1785),
    [anon_sym_PIPE] = ACTIONS(1788),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [598] = {
    [sym_else_tail] = STATE(567),
    [ts_builtin_sym_end] = ACTIONS(1791),
    [anon_sym_LF] = ACTIONS(1791),
    [anon_sym_SEMI] = ACTIONS(1791),
    [anon_sym_fn] = ACTIONS(1794),
    [anon_sym_let] = ACTIONS(1794),
    [anon_sym_COLON] = ACTIONS(1791),
    [anon_sym_EQ] = ACTIONS(1794),
    [anon_sym_LPAREN] = ACTIONS(1791),
    [anon_sym_COMMA] = ACTIONS(1791),
    [anon_sym_RPAREN] = ACTIONS(1791),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1794),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1797),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1797),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1794),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1791),
    [anon_sym_AMP_AMP] = ACTIONS(1791),
    [anon_sym_PIPE_PIPE] = ACTIONS(1791),
    [anon_sym_return] = ACTIONS(1794),
    [anon_sym_LBRACK] = ACTIONS(1791),
    [anon_sym_RBRACK] = ACTIONS(1791),
    [anon_sym_if] = ACTIONS(1794),
    [anon_sym_else] = ACTIONS(1597),
    [anon_sym_match] = ACTIONS(1794),
    [anon_sym_LBRACE] = ACTIONS(1791),
    [anon_sym_RBRACE] = ACTIONS(1791),
    [anon_sym_EQ_GT] = ACTIONS(1791),
    [anon_sym_PIPE] = ACTIONS(1794),
    [sym_number_literal] = ACTIONS(1794),
    [anon_sym_DQUOTE] = ACTIONS(1791),
    [sym_raw_string_literal] = ACTIONS(1794),
    [anon_sym_SQUOTE] = ACTIONS(1791),
    [sym_boolean_literal] = ACTIONS(1794),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(1797),
  },
  [599] = {
    [sym__expression] = STATE(631),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_RPAREN] = ACTIONS(307),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(267),
    [anon_sym_return] = ACTIONS(269),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(271),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [600] = {
    [sym__expression] = STATE(630),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1293),
    [anon_sym_return] = ACTIONS(1295),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(1800),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [601] = {
    [sym__expression] = STATE(629),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_SEMI] = ACTIONS(137),
    [anon_sym_EQ] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(1263),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1802),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(143),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(143),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(139),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(137),
    [anon_sym_AMP_AMP] = ACTIONS(137),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
    [anon_sym_return] = ACTIONS(1295),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(1804),
    [anon_sym_match] = ACTIONS(127),
    [anon_sym_RBRACE] = ACTIONS(137),
    [anon_sym_EQ_GT] = ACTIONS(137),
    [anon_sym_PIPE] = ACTIONS(139),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [602] = {
    [sym__expression] = STATE(620),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_let] = ACTIONS(507),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [603] = {
    [ts_builtin_sym_end] = ACTIONS(1807),
    [anon_sym_LF] = ACTIONS(1807),
    [anon_sym_SEMI] = ACTIONS(1807),
    [anon_sym_fn] = ACTIONS(1810),
    [anon_sym_let] = ACTIONS(1810),
    [anon_sym_COLON] = ACTIONS(1807),
    [anon_sym_EQ] = ACTIONS(1810),
    [anon_sym_LPAREN] = ACTIONS(1807),
    [anon_sym_COMMA] = ACTIONS(1807),
    [anon_sym_RPAREN] = ACTIONS(1807),
    [anon_sym__] = ACTIONS(511),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1810),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1813),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1813),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1810),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1807),
    [anon_sym_AMP_AMP] = ACTIONS(1807),
    [anon_sym_PIPE_PIPE] = ACTIONS(1807),
    [anon_sym_return] = ACTIONS(1810),
    [anon_sym_LBRACK] = ACTIONS(1807),
    [anon_sym_RBRACK] = ACTIONS(1807),
    [anon_sym_if] = ACTIONS(1810),
    [anon_sym_else] = ACTIONS(511),
    [anon_sym_match] = ACTIONS(1810),
    [anon_sym_LBRACE] = ACTIONS(1807),
    [anon_sym_RBRACE] = ACTIONS(1807),
    [anon_sym_EQ_GT] = ACTIONS(1807),
    [anon_sym_PIPE] = ACTIONS(1810),
    [sym_number_literal] = ACTIONS(1810),
    [anon_sym_DQUOTE] = ACTIONS(1807),
    [sym_raw_string_literal] = ACTIONS(1810),
    [anon_sym_SQUOTE] = ACTIONS(1807),
    [sym_boolean_literal] = ACTIONS(1810),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(1813),
  },
  [604] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(215),
    [anon_sym_EQ] = ACTIONS(1816),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1818),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1820),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1818),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1820),
    [anon_sym_AMP_AMP] = ACTIONS(1820),
    [anon_sym_PIPE_PIPE] = ACTIONS(1820),
    [anon_sym_if] = ACTIONS(339),
    [anon_sym_RBRACE] = ACTIONS(775),
    [anon_sym_EQ_GT] = ACTIONS(339),
    [anon_sym_PIPE] = ACTIONS(341),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [605] = {
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_SEMI] = ACTIONS(1544),
    [anon_sym_EQ] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(177),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(179),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(177),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(179),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(177),
    [anon_sym_AMP_AMP] = ACTIONS(177),
    [anon_sym_PIPE_PIPE] = ACTIONS(177),
    [anon_sym_if] = ACTIONS(177),
    [anon_sym_RBRACE] = ACTIONS(1544),
    [anon_sym_EQ_GT] = ACTIONS(177),
    [anon_sym_PIPE] = ACTIONS(179),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [606] = {
    [sym__expression] = STATE(619),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1293),
    [anon_sym_return] = ACTIONS(1295),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(1800),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [607] = {
    [sym__expression] = STATE(609),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1293),
    [anon_sym_return] = ACTIONS(1295),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(1800),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [608] = {
    [sym__expression] = STATE(610),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [609] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(277),
    [anon_sym_EQ] = ACTIONS(1822),
    [anon_sym_LPAREN] = ACTIONS(1633),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1825),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1828),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1825),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1828),
    [anon_sym_AMP_AMP] = ACTIONS(1828),
    [anon_sym_PIPE_PIPE] = ACTIONS(1828),
    [anon_sym_if] = ACTIONS(277),
    [anon_sym_RBRACE] = ACTIONS(277),
    [anon_sym_EQ_GT] = ACTIONS(277),
    [anon_sym_PIPE] = ACTIONS(279),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [610] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(611),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [611] = {
    [sym_else_tail] = STATE(122),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_EQ] = ACTIONS(485),
    [anon_sym_LPAREN] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(487),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [anon_sym_PIPE_PIPE] = ACTIONS(487),
    [anon_sym_if] = ACTIONS(487),
    [anon_sym_else] = ACTIONS(1831),
    [anon_sym_RBRACE] = ACTIONS(487),
    [anon_sym_EQ_GT] = ACTIONS(487),
    [anon_sym_PIPE] = ACTIONS(485),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [612] = {
    [sym_if_expression] = STATE(124),
    [sym_if_let_expression] = STATE(124),
    [sym_block] = STATE(124),
    [anon_sym_if] = ACTIONS(1833),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [613] = {
    [sym__expression] = STATE(610),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_let] = ACTIONS(1835),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [614] = {
    [sym__pattern] = STATE(615),
    [sym__expression] = STATE(151),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym__] = ACTIONS(117),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(545),
    [anon_sym_return] = ACTIONS(547),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [615] = {
    [anon_sym_EQ] = ACTIONS(1837),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [616] = {
    [sym__expression] = STATE(617),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [617] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(618),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [618] = {
    [sym_else_tail] = STATE(187),
    [anon_sym_SEMI] = ACTIONS(599),
    [anon_sym_EQ] = ACTIONS(597),
    [anon_sym_LPAREN] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(599),
    [anon_sym_AMP_AMP] = ACTIONS(599),
    [anon_sym_PIPE_PIPE] = ACTIONS(599),
    [anon_sym_if] = ACTIONS(599),
    [anon_sym_else] = ACTIONS(1831),
    [anon_sym_RBRACE] = ACTIONS(599),
    [anon_sym_EQ_GT] = ACTIONS(599),
    [anon_sym_PIPE] = ACTIONS(597),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [619] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(451),
    [anon_sym_EQ] = ACTIONS(1839),
    [anon_sym_LPAREN] = ACTIONS(1645),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1842),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1845),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1842),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1845),
    [anon_sym_AMP_AMP] = ACTIONS(1845),
    [anon_sym_PIPE_PIPE] = ACTIONS(1845),
    [anon_sym_if] = ACTIONS(451),
    [anon_sym_RBRACE] = ACTIONS(451),
    [anon_sym_EQ_GT] = ACTIONS(451),
    [anon_sym_PIPE] = ACTIONS(449),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [620] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(621),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(761),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [621] = {
    [sym_else_tail] = STATE(320),
    [anon_sym_LF] = ACTIONS(487),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_EQ] = ACTIONS(485),
    [anon_sym_LPAREN] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(487),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [anon_sym_PIPE_PIPE] = ACTIONS(487),
    [anon_sym_if] = ACTIONS(487),
    [anon_sym_else] = ACTIONS(1848),
    [anon_sym_RBRACE] = ACTIONS(487),
    [anon_sym_EQ_GT] = ACTIONS(487),
    [anon_sym_PIPE] = ACTIONS(485),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [622] = {
    [sym_if_expression] = STATE(322),
    [sym_if_let_expression] = STATE(322),
    [sym_block] = STATE(322),
    [anon_sym_if] = ACTIONS(1850),
    [anon_sym_LBRACE] = ACTIONS(761),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [623] = {
    [sym__expression] = STATE(620),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_let] = ACTIONS(1852),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [624] = {
    [sym__pattern] = STATE(625),
    [sym__expression] = STATE(151),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym__] = ACTIONS(117),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(545),
    [anon_sym_return] = ACTIONS(547),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [625] = {
    [anon_sym_EQ] = ACTIONS(1854),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [626] = {
    [sym__expression] = STATE(627),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [627] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(628),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(761),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [628] = {
    [sym_else_tail] = STATE(332),
    [anon_sym_LF] = ACTIONS(599),
    [anon_sym_SEMI] = ACTIONS(599),
    [anon_sym_EQ] = ACTIONS(597),
    [anon_sym_LPAREN] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(599),
    [anon_sym_AMP_AMP] = ACTIONS(599),
    [anon_sym_PIPE_PIPE] = ACTIONS(599),
    [anon_sym_if] = ACTIONS(599),
    [anon_sym_else] = ACTIONS(1848),
    [anon_sym_RBRACE] = ACTIONS(599),
    [anon_sym_EQ_GT] = ACTIONS(599),
    [anon_sym_PIPE] = ACTIONS(597),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [629] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(711),
    [anon_sym_EQ] = ACTIONS(1856),
    [anon_sym_LPAREN] = ACTIONS(1665),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1859),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1862),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1859),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1862),
    [anon_sym_AMP_AMP] = ACTIONS(1862),
    [anon_sym_PIPE_PIPE] = ACTIONS(1862),
    [anon_sym_if] = ACTIONS(711),
    [anon_sym_RBRACE] = ACTIONS(711),
    [anon_sym_EQ_GT] = ACTIONS(711),
    [anon_sym_PIPE] = ACTIONS(709),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [630] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(713),
    [anon_sym_EQ] = ACTIONS(1865),
    [anon_sym_LPAREN] = ACTIONS(1677),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1868),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1871),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1868),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1871),
    [anon_sym_AMP_AMP] = ACTIONS(1871),
    [anon_sym_PIPE_PIPE] = ACTIONS(1871),
    [anon_sym_if] = ACTIONS(713),
    [anon_sym_RBRACE] = ACTIONS(713),
    [anon_sym_EQ_GT] = ACTIONS(713),
    [anon_sym_PIPE] = ACTIONS(715),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [631] = {
    [sym_arguments] = STATE(36),
    [aux_sym__pattern_repeat1] = STATE(300),
    [anon_sym_EQ] = ACTIONS(415),
    [anon_sym_LPAREN] = ACTIONS(219),
    [anon_sym_COMMA] = ACTIONS(417),
    [anon_sym_RPAREN] = ACTIONS(1874),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(425),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(427),
    [anon_sym_AMP_AMP] = ACTIONS(429),
    [anon_sym_PIPE_PIPE] = ACTIONS(431),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [632] = {
    [anon_sym_SEMI] = ACTIONS(585),
    [anon_sym_EQ] = ACTIONS(587),
    [anon_sym_LPAREN] = ACTIONS(585),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(587),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(585),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(587),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(585),
    [anon_sym_AMP_AMP] = ACTIONS(585),
    [anon_sym_PIPE_PIPE] = ACTIONS(585),
    [anon_sym_if] = ACTIONS(1876),
    [anon_sym_RBRACE] = ACTIONS(585),
    [anon_sym_EQ_GT] = ACTIONS(1876),
    [anon_sym_PIPE] = ACTIONS(1879),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [633] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(1624),
    [anon_sym_LPAREN] = ACTIONS(219),
    [anon_sym_COMMA] = ACTIONS(447),
    [anon_sym_RPAREN] = ACTIONS(447),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1626),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1628),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1626),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1628),
    [anon_sym_AMP_AMP] = ACTIONS(1628),
    [anon_sym_PIPE_PIPE] = ACTIONS(1628),
    [anon_sym_RBRACK] = ACTIONS(447),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [634] = {
    [sym__expression] = STATE(636),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [635] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(451),
    [anon_sym_COLON] = ACTIONS(451),
    [anon_sym_EQ] = ACTIONS(1882),
    [anon_sym_LPAREN] = ACTIONS(1645),
    [anon_sym_COMMA] = ACTIONS(451),
    [anon_sym_RPAREN] = ACTIONS(451),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1885),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1888),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1885),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1888),
    [anon_sym_AMP_AMP] = ACTIONS(1888),
    [anon_sym_PIPE_PIPE] = ACTIONS(1888),
    [anon_sym_RBRACK] = ACTIONS(451),
    [anon_sym_if] = ACTIONS(451),
    [anon_sym_LBRACE] = ACTIONS(451),
    [anon_sym_RBRACE] = ACTIONS(451),
    [anon_sym_EQ_GT] = ACTIONS(451),
    [anon_sym_PIPE] = ACTIONS(449),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [636] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(637),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [637] = {
    [sym_else_tail] = STATE(122),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_COLON] = ACTIONS(487),
    [anon_sym_EQ] = ACTIONS(485),
    [anon_sym_LPAREN] = ACTIONS(487),
    [anon_sym_COMMA] = ACTIONS(487),
    [anon_sym_RPAREN] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(487),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [anon_sym_PIPE_PIPE] = ACTIONS(487),
    [anon_sym_RBRACK] = ACTIONS(487),
    [anon_sym_if] = ACTIONS(487),
    [anon_sym_else] = ACTIONS(1891),
    [anon_sym_LBRACE] = ACTIONS(487),
    [anon_sym_RBRACE] = ACTIONS(487),
    [anon_sym_EQ_GT] = ACTIONS(487),
    [anon_sym_PIPE] = ACTIONS(485),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [638] = {
    [sym_if_expression] = STATE(124),
    [sym_if_let_expression] = STATE(124),
    [sym_block] = STATE(124),
    [anon_sym_if] = ACTIONS(1893),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [639] = {
    [sym__expression] = STATE(636),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_let] = ACTIONS(1895),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [640] = {
    [sym__pattern] = STATE(641),
    [sym__expression] = STATE(151),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym__] = ACTIONS(117),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(545),
    [anon_sym_return] = ACTIONS(547),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [641] = {
    [anon_sym_EQ] = ACTIONS(1897),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [642] = {
    [sym__expression] = STATE(643),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [643] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(644),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [644] = {
    [sym_else_tail] = STATE(187),
    [anon_sym_SEMI] = ACTIONS(599),
    [anon_sym_COLON] = ACTIONS(599),
    [anon_sym_EQ] = ACTIONS(597),
    [anon_sym_LPAREN] = ACTIONS(599),
    [anon_sym_COMMA] = ACTIONS(599),
    [anon_sym_RPAREN] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(599),
    [anon_sym_AMP_AMP] = ACTIONS(599),
    [anon_sym_PIPE_PIPE] = ACTIONS(599),
    [anon_sym_RBRACK] = ACTIONS(599),
    [anon_sym_if] = ACTIONS(599),
    [anon_sym_else] = ACTIONS(1891),
    [anon_sym_LBRACE] = ACTIONS(599),
    [anon_sym_RBRACE] = ACTIONS(599),
    [anon_sym_EQ_GT] = ACTIONS(599),
    [anon_sym_PIPE] = ACTIONS(597),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [645] = {
    [ts_builtin_sym_end] = ACTIONS(1899),
    [anon_sym_LF] = ACTIONS(1899),
    [anon_sym_SEMI] = ACTIONS(1899),
    [anon_sym_fn] = ACTIONS(1902),
    [anon_sym_let] = ACTIONS(1902),
    [anon_sym_LPAREN] = ACTIONS(1899),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1899),
    [anon_sym_return] = ACTIONS(1902),
    [anon_sym_LBRACK] = ACTIONS(1899),
    [anon_sym_if] = ACTIONS(1902),
    [anon_sym_match] = ACTIONS(1902),
    [anon_sym_RBRACE] = ACTIONS(1899),
    [sym_number_literal] = ACTIONS(1902),
    [anon_sym_DQUOTE] = ACTIONS(1899),
    [sym_raw_string_literal] = ACTIONS(1902),
    [anon_sym_SQUOTE] = ACTIONS(1899),
    [sym_boolean_literal] = ACTIONS(1902),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(1905),
  },
  [646] = {
    [sym__expression] = STATE(647),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(89),
    [anon_sym_return] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(135),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [647] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(1908),
    [anon_sym_EQ] = ACTIONS(217),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(225),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(227),
    [anon_sym_AMP_AMP] = ACTIONS(229),
    [anon_sym_PIPE_PIPE] = ACTIONS(231),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [648] = {
    [ts_builtin_sym_end] = ACTIONS(1910),
    [anon_sym_LF] = ACTIONS(1910),
    [anon_sym_SEMI] = ACTIONS(1910),
    [anon_sym_fn] = ACTIONS(1913),
    [anon_sym_let] = ACTIONS(1913),
    [anon_sym_LPAREN] = ACTIONS(1910),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1910),
    [anon_sym_return] = ACTIONS(1913),
    [anon_sym_LBRACK] = ACTIONS(1910),
    [anon_sym_if] = ACTIONS(1913),
    [anon_sym_match] = ACTIONS(1913),
    [anon_sym_RBRACE] = ACTIONS(1910),
    [sym_number_literal] = ACTIONS(1913),
    [anon_sym_DQUOTE] = ACTIONS(1910),
    [sym_raw_string_literal] = ACTIONS(1913),
    [anon_sym_SQUOTE] = ACTIONS(1910),
    [sym_boolean_literal] = ACTIONS(1913),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(1916),
  },
  [649] = {
    [ts_builtin_sym_end] = ACTIONS(1919),
    [anon_sym_LF] = ACTIONS(1919),
    [anon_sym_SEMI] = ACTIONS(1919),
    [anon_sym_fn] = ACTIONS(1922),
    [anon_sym_let] = ACTIONS(1922),
    [anon_sym_LPAREN] = ACTIONS(1919),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1919),
    [anon_sym_return] = ACTIONS(1922),
    [anon_sym_LBRACK] = ACTIONS(1919),
    [anon_sym_if] = ACTIONS(1922),
    [anon_sym_match] = ACTIONS(1922),
    [anon_sym_RBRACE] = ACTIONS(1919),
    [sym_number_literal] = ACTIONS(1922),
    [anon_sym_DQUOTE] = ACTIONS(1919),
    [sym_raw_string_literal] = ACTIONS(1922),
    [anon_sym_SQUOTE] = ACTIONS(1919),
    [sym_boolean_literal] = ACTIONS(1922),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(1925),
  },
  [650] = {
    [sym_type_expression] = STATE(672),
    [anon_sym_u8] = ACTIONS(813),
    [anon_sym_i8] = ACTIONS(813),
    [anon_sym_u16] = ACTIONS(813),
    [anon_sym_i16] = ACTIONS(813),
    [anon_sym_u32] = ACTIONS(813),
    [anon_sym_i32] = ACTIONS(813),
    [anon_sym_u64] = ACTIONS(813),
    [anon_sym_i64] = ACTIONS(813),
    [anon_sym_isize] = ACTIONS(813),
    [anon_sym_usize] = ACTIONS(813),
    [anon_sym_f32] = ACTIONS(813),
    [anon_sym_f64] = ACTIONS(813),
    [sym_boolean_literal] = ACTIONS(813),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(815),
  },
  [651] = {
    [sym__expression] = STATE(655),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1928),
    [anon_sym_return] = ACTIONS(1930),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(1932),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [652] = {
    [sym__expression] = STATE(671),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1928),
    [anon_sym_return] = ACTIONS(1930),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(1932),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [653] = {
    [sym__expression] = STATE(670),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_SEMI] = ACTIONS(137),
    [anon_sym_EQ] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(1263),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1934),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(143),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(143),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(139),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(137),
    [anon_sym_AMP_AMP] = ACTIONS(137),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
    [anon_sym_return] = ACTIONS(1930),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(1932),
    [anon_sym_match] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(137),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [654] = {
    [sym__expression] = STATE(661),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [655] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(658),
    [anon_sym_SEMI] = ACTIONS(1400),
    [anon_sym_EQ] = ACTIONS(1936),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1938),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1940),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1938),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1940),
    [anon_sym_AMP_AMP] = ACTIONS(1940),
    [anon_sym_PIPE_PIPE] = ACTIONS(1940),
    [anon_sym_LBRACE] = ACTIONS(761),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [656] = {
    [sym__expression] = STATE(660),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1928),
    [anon_sym_return] = ACTIONS(1930),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(1932),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [657] = {
    [sym__expression] = STATE(659),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1928),
    [anon_sym_return] = ACTIONS(1930),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(1932),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [658] = {
    [sym_else_tail] = STATE(332),
    [ts_builtin_sym_end] = ACTIONS(599),
    [anon_sym_LF] = ACTIONS(599),
    [anon_sym_SEMI] = ACTIONS(599),
    [anon_sym_fn] = ACTIONS(597),
    [anon_sym_let] = ACTIONS(597),
    [anon_sym_COLON] = ACTIONS(599),
    [anon_sym_EQ] = ACTIONS(597),
    [anon_sym_LPAREN] = ACTIONS(599),
    [anon_sym_COMMA] = ACTIONS(599),
    [anon_sym_RPAREN] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1015),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1015),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(599),
    [anon_sym_AMP_AMP] = ACTIONS(599),
    [anon_sym_PIPE_PIPE] = ACTIONS(599),
    [anon_sym_return] = ACTIONS(597),
    [anon_sym_LBRACK] = ACTIONS(599),
    [anon_sym_RBRACK] = ACTIONS(599),
    [anon_sym_if] = ACTIONS(597),
    [anon_sym_else] = ACTIONS(1597),
    [anon_sym_match] = ACTIONS(597),
    [anon_sym_LBRACE] = ACTIONS(599),
    [anon_sym_RBRACE] = ACTIONS(599),
    [anon_sym_EQ_GT] = ACTIONS(599),
    [anon_sym_PIPE] = ACTIONS(597),
    [sym_number_literal] = ACTIONS(597),
    [anon_sym_DQUOTE] = ACTIONS(599),
    [sym_raw_string_literal] = ACTIONS(597),
    [anon_sym_SQUOTE] = ACTIONS(599),
    [sym_boolean_literal] = ACTIONS(597),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(1015),
  },
  [659] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(277),
    [anon_sym_EQ] = ACTIONS(1942),
    [anon_sym_LPAREN] = ACTIONS(1633),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1945),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1948),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1945),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1948),
    [anon_sym_AMP_AMP] = ACTIONS(1948),
    [anon_sym_PIPE_PIPE] = ACTIONS(1948),
    [anon_sym_LBRACE] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [660] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(451),
    [anon_sym_EQ] = ACTIONS(1951),
    [anon_sym_LPAREN] = ACTIONS(1645),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1954),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1957),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1954),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1957),
    [anon_sym_AMP_AMP] = ACTIONS(1957),
    [anon_sym_PIPE_PIPE] = ACTIONS(1957),
    [anon_sym_LBRACE] = ACTIONS(451),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [661] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(662),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [662] = {
    [sym_else_tail] = STATE(122),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_EQ] = ACTIONS(485),
    [anon_sym_LPAREN] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(487),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [anon_sym_PIPE_PIPE] = ACTIONS(487),
    [anon_sym_else] = ACTIONS(1960),
    [anon_sym_LBRACE] = ACTIONS(487),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [663] = {
    [sym_if_expression] = STATE(124),
    [sym_if_let_expression] = STATE(124),
    [sym_block] = STATE(124),
    [anon_sym_if] = ACTIONS(1962),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [664] = {
    [sym__expression] = STATE(661),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_let] = ACTIONS(1964),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [665] = {
    [sym__pattern] = STATE(666),
    [sym__expression] = STATE(151),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym__] = ACTIONS(117),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(545),
    [anon_sym_return] = ACTIONS(547),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [666] = {
    [anon_sym_EQ] = ACTIONS(1966),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [667] = {
    [sym__expression] = STATE(668),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [668] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(669),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [669] = {
    [sym_else_tail] = STATE(187),
    [anon_sym_SEMI] = ACTIONS(599),
    [anon_sym_EQ] = ACTIONS(597),
    [anon_sym_LPAREN] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(599),
    [anon_sym_AMP_AMP] = ACTIONS(599),
    [anon_sym_PIPE_PIPE] = ACTIONS(599),
    [anon_sym_else] = ACTIONS(1960),
    [anon_sym_LBRACE] = ACTIONS(599),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [670] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(711),
    [anon_sym_EQ] = ACTIONS(1968),
    [anon_sym_LPAREN] = ACTIONS(1665),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1971),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1974),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1971),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1974),
    [anon_sym_AMP_AMP] = ACTIONS(1974),
    [anon_sym_PIPE_PIPE] = ACTIONS(1974),
    [anon_sym_LBRACE] = ACTIONS(711),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [671] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(713),
    [anon_sym_EQ] = ACTIONS(1977),
    [anon_sym_LPAREN] = ACTIONS(1677),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1980),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1983),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1980),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1983),
    [anon_sym_AMP_AMP] = ACTIONS(1983),
    [anon_sym_PIPE_PIPE] = ACTIONS(1983),
    [anon_sym_LBRACE] = ACTIONS(713),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [672] = {
    [anon_sym_SEMI] = ACTIONS(1400),
    [anon_sym_EQ] = ACTIONS(1402),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [673] = {
    [sym__statement_list] = STATE(308),
    [sym__statement] = STATE(561),
    [sym__declaration_statement] = STATE(18),
    [sym__control_flow_statement] = STATE(18),
    [sym__item] = STATE(19),
    [sym_function_item] = STATE(20),
    [sym_let_declaration] = STATE(19),
    [sym__expression_statement] = STATE(18),
    [sym__expression] = STATE(21),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(675),
    [sym_if_let_expression] = STATE(24),
    [sym_match_expression] = STATE(675),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [sym_empty_statement] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(743),
    [anon_sym_SEMI] = ACTIONS(1986),
    [anon_sym_fn] = ACTIONS(1989),
    [anon_sym_let] = ACTIONS(1992),
    [anon_sym_LPAREN] = ACTIONS(1995),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1998),
    [anon_sym_return] = ACTIONS(2001),
    [anon_sym_LBRACK] = ACTIONS(2004),
    [anon_sym_if] = ACTIONS(2007),
    [anon_sym_match] = ACTIONS(2010),
    [anon_sym_RBRACE] = ACTIONS(743),
    [sym_number_literal] = ACTIONS(2013),
    [anon_sym_DQUOTE] = ACTIONS(2016),
    [sym_raw_string_literal] = ACTIONS(2013),
    [anon_sym_SQUOTE] = ACTIONS(2019),
    [sym_boolean_literal] = ACTIONS(2013),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(2022),
  },
  [674] = {
    [sym__expression] = STATE(677),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_let] = ACTIONS(2025),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [675] = {
    [ts_builtin_sym_end] = ACTIONS(237),
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_SEMI] = ACTIONS(1544),
    [anon_sym_fn] = ACTIONS(239),
    [anon_sym_let] = ACTIONS(239),
    [anon_sym_EQ] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(1544),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(239),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(241),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(241),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(179),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(177),
    [anon_sym_AMP_AMP] = ACTIONS(177),
    [anon_sym_PIPE_PIPE] = ACTIONS(177),
    [anon_sym_return] = ACTIONS(239),
    [anon_sym_LBRACK] = ACTIONS(237),
    [anon_sym_RBRACK] = ACTIONS(177),
    [anon_sym_if] = ACTIONS(239),
    [anon_sym_match] = ACTIONS(239),
    [anon_sym_RBRACE] = ACTIONS(237),
    [sym_number_literal] = ACTIONS(239),
    [anon_sym_DQUOTE] = ACTIONS(237),
    [sym_raw_string_literal] = ACTIONS(239),
    [anon_sym_SQUOTE] = ACTIONS(237),
    [sym_boolean_literal] = ACTIONS(239),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(243),
  },
  [676] = {
    [sym__pattern] = STATE(686),
    [sym__expression] = STATE(151),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym__] = ACTIONS(117),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(545),
    [anon_sym_return] = ACTIONS(547),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [677] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(678),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(761),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [678] = {
    [sym_else_tail] = STATE(320),
    [ts_builtin_sym_end] = ACTIONS(487),
    [anon_sym_LF] = ACTIONS(487),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_fn] = ACTIONS(485),
    [anon_sym_let] = ACTIONS(485),
    [anon_sym_EQ] = ACTIONS(485),
    [anon_sym_LPAREN] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1005),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1005),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(487),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [anon_sym_PIPE_PIPE] = ACTIONS(487),
    [anon_sym_return] = ACTIONS(485),
    [anon_sym_LBRACK] = ACTIONS(487),
    [anon_sym_if] = ACTIONS(485),
    [anon_sym_else] = ACTIONS(2027),
    [anon_sym_match] = ACTIONS(485),
    [anon_sym_RBRACE] = ACTIONS(487),
    [sym_number_literal] = ACTIONS(485),
    [anon_sym_DQUOTE] = ACTIONS(487),
    [sym_raw_string_literal] = ACTIONS(485),
    [anon_sym_SQUOTE] = ACTIONS(487),
    [sym_boolean_literal] = ACTIONS(485),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(1005),
  },
  [679] = {
    [sym_if_expression] = STATE(322),
    [sym_if_let_expression] = STATE(322),
    [sym_block] = STATE(322),
    [anon_sym_if] = ACTIONS(2029),
    [anon_sym_LBRACE] = ACTIONS(761),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [680] = {
    [sym__expression] = STATE(677),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_let] = ACTIONS(2031),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [681] = {
    [sym__pattern] = STATE(682),
    [sym__expression] = STATE(151),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym__] = ACTIONS(117),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(545),
    [anon_sym_return] = ACTIONS(547),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [682] = {
    [anon_sym_EQ] = ACTIONS(2033),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [683] = {
    [sym__expression] = STATE(684),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [684] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(685),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(761),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [685] = {
    [sym_else_tail] = STATE(332),
    [ts_builtin_sym_end] = ACTIONS(599),
    [anon_sym_LF] = ACTIONS(599),
    [anon_sym_SEMI] = ACTIONS(599),
    [anon_sym_fn] = ACTIONS(597),
    [anon_sym_let] = ACTIONS(597),
    [anon_sym_EQ] = ACTIONS(597),
    [anon_sym_LPAREN] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1015),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1015),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(599),
    [anon_sym_AMP_AMP] = ACTIONS(599),
    [anon_sym_PIPE_PIPE] = ACTIONS(599),
    [anon_sym_return] = ACTIONS(597),
    [anon_sym_LBRACK] = ACTIONS(599),
    [anon_sym_if] = ACTIONS(597),
    [anon_sym_else] = ACTIONS(2027),
    [anon_sym_match] = ACTIONS(597),
    [anon_sym_RBRACE] = ACTIONS(599),
    [sym_number_literal] = ACTIONS(597),
    [anon_sym_DQUOTE] = ACTIONS(599),
    [sym_raw_string_literal] = ACTIONS(597),
    [anon_sym_SQUOTE] = ACTIONS(599),
    [sym_boolean_literal] = ACTIONS(597),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(1015),
  },
  [686] = {
    [anon_sym_EQ] = ACTIONS(2035),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [687] = {
    [sym__expression] = STATE(688),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [688] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(689),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(761),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [689] = {
    [sym_else_tail] = STATE(332),
    [ts_builtin_sym_end] = ACTIONS(599),
    [anon_sym_LF] = ACTIONS(599),
    [anon_sym_SEMI] = ACTIONS(599),
    [anon_sym_fn] = ACTIONS(597),
    [anon_sym_let] = ACTIONS(597),
    [anon_sym_LPAREN] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(599),
    [anon_sym_return] = ACTIONS(597),
    [anon_sym_LBRACK] = ACTIONS(599),
    [anon_sym_if] = ACTIONS(597),
    [anon_sym_else] = ACTIONS(2037),
    [anon_sym_match] = ACTIONS(597),
    [anon_sym_RBRACE] = ACTIONS(599),
    [sym_number_literal] = ACTIONS(597),
    [anon_sym_DQUOTE] = ACTIONS(599),
    [sym_raw_string_literal] = ACTIONS(597),
    [anon_sym_SQUOTE] = ACTIONS(599),
    [sym_boolean_literal] = ACTIONS(597),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(1015),
  },
  [690] = {
    [sym_if_expression] = STATE(322),
    [sym_if_let_expression] = STATE(322),
    [sym_block] = STATE(322),
    [anon_sym_if] = ACTIONS(2039),
    [anon_sym_LBRACE] = ACTIONS(761),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [691] = {
    [sym__expression] = STATE(692),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_let] = ACTIONS(2025),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [692] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(693),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(761),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [693] = {
    [sym_else_tail] = STATE(320),
    [ts_builtin_sym_end] = ACTIONS(487),
    [anon_sym_LF] = ACTIONS(487),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_fn] = ACTIONS(485),
    [anon_sym_let] = ACTIONS(485),
    [anon_sym_LPAREN] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(487),
    [anon_sym_return] = ACTIONS(485),
    [anon_sym_LBRACK] = ACTIONS(487),
    [anon_sym_if] = ACTIONS(485),
    [anon_sym_else] = ACTIONS(2037),
    [anon_sym_match] = ACTIONS(485),
    [anon_sym_RBRACE] = ACTIONS(487),
    [sym_number_literal] = ACTIONS(485),
    [anon_sym_DQUOTE] = ACTIONS(487),
    [sym_raw_string_literal] = ACTIONS(485),
    [anon_sym_SQUOTE] = ACTIONS(487),
    [sym_boolean_literal] = ACTIONS(485),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(1005),
  },
  [694] = {
    [sym_type_expression] = STATE(695),
    [anon_sym_u8] = ACTIONS(813),
    [anon_sym_i8] = ACTIONS(813),
    [anon_sym_u16] = ACTIONS(813),
    [anon_sym_i16] = ACTIONS(813),
    [anon_sym_u32] = ACTIONS(813),
    [anon_sym_i32] = ACTIONS(813),
    [anon_sym_u64] = ACTIONS(813),
    [anon_sym_i64] = ACTIONS(813),
    [anon_sym_isize] = ACTIONS(813),
    [anon_sym_usize] = ACTIONS(813),
    [anon_sym_f32] = ACTIONS(813),
    [anon_sym_f64] = ACTIONS(813),
    [sym_boolean_literal] = ACTIONS(813),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(815),
  },
  [695] = {
    [aux_sym_parameters_repeat1] = STATE(404),
    [anon_sym_COMMA] = ACTIONS(1404),
    [anon_sym_RPAREN] = ACTIONS(1408),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [696] = {
    [anon_sym_if] = ACTIONS(2041),
    [anon_sym_EQ_GT] = ACTIONS(2041),
    [anon_sym_PIPE] = ACTIONS(2041),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [697] = {
    [sym__expression] = STATE(699),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_let] = ACTIONS(1281),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [698] = {
    [sym__pattern] = STATE(701),
    [sym__expression] = STATE(151),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym__] = ACTIONS(117),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(545),
    [anon_sym_return] = ACTIONS(547),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [699] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(700),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(761),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [700] = {
    [sym_else_tail] = STATE(320),
    [ts_builtin_sym_end] = ACTIONS(487),
    [anon_sym_LF] = ACTIONS(487),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_fn] = ACTIONS(485),
    [anon_sym_let] = ACTIONS(485),
    [anon_sym_COLON] = ACTIONS(487),
    [anon_sym_EQ] = ACTIONS(485),
    [anon_sym_LPAREN] = ACTIONS(487),
    [anon_sym_COMMA] = ACTIONS(487),
    [anon_sym_RPAREN] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1005),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1005),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(487),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [anon_sym_PIPE_PIPE] = ACTIONS(487),
    [anon_sym_return] = ACTIONS(485),
    [anon_sym_LBRACK] = ACTIONS(487),
    [anon_sym_RBRACK] = ACTIONS(487),
    [anon_sym_if] = ACTIONS(485),
    [anon_sym_else] = ACTIONS(1597),
    [anon_sym_match] = ACTIONS(485),
    [anon_sym_LBRACE] = ACTIONS(487),
    [anon_sym_RBRACE] = ACTIONS(487),
    [anon_sym_EQ_GT] = ACTIONS(487),
    [anon_sym_PIPE] = ACTIONS(485),
    [sym_number_literal] = ACTIONS(485),
    [anon_sym_DQUOTE] = ACTIONS(487),
    [sym_raw_string_literal] = ACTIONS(485),
    [anon_sym_SQUOTE] = ACTIONS(487),
    [sym_boolean_literal] = ACTIONS(485),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(1005),
  },
  [701] = {
    [anon_sym_EQ] = ACTIONS(2044),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [702] = {
    [sym__expression] = STATE(703),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [703] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(658),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(761),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [704] = {
    [sym__expression] = STATE(722),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1283),
    [anon_sym_return] = ACTIONS(1285),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(1287),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [705] = {
    [sym__expression] = STATE(721),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_EQ] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(1263),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(2046),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(143),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(143),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(139),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(137),
    [anon_sym_AMP_AMP] = ACTIONS(137),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
    [anon_sym_return] = ACTIONS(1285),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(1287),
    [anon_sym_match] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_EQ_GT] = ACTIONS(137),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [706] = {
    [sym__expression] = STATE(712),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [707] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(700),
    [anon_sym_EQ] = ACTIONS(2048),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(2050),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(2052),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(2050),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(2052),
    [anon_sym_AMP_AMP] = ACTIONS(2052),
    [anon_sym_PIPE_PIPE] = ACTIONS(2052),
    [anon_sym_LBRACE] = ACTIONS(761),
    [anon_sym_EQ_GT] = ACTIONS(2054),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [708] = {
    [sym__expression] = STATE(711),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1283),
    [anon_sym_return] = ACTIONS(1285),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(1287),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [709] = {
    [sym__expression] = STATE(710),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1283),
    [anon_sym_return] = ACTIONS(1285),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(1287),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [710] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(2057),
    [anon_sym_LPAREN] = ACTIONS(1633),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(2060),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(2063),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(2060),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(2063),
    [anon_sym_AMP_AMP] = ACTIONS(2063),
    [anon_sym_PIPE_PIPE] = ACTIONS(2063),
    [anon_sym_LBRACE] = ACTIONS(277),
    [anon_sym_EQ_GT] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [711] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(2066),
    [anon_sym_LPAREN] = ACTIONS(1645),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(2069),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(2072),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(2069),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(2072),
    [anon_sym_AMP_AMP] = ACTIONS(2072),
    [anon_sym_PIPE_PIPE] = ACTIONS(2072),
    [anon_sym_LBRACE] = ACTIONS(451),
    [anon_sym_EQ_GT] = ACTIONS(451),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [712] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(713),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [713] = {
    [sym_else_tail] = STATE(122),
    [anon_sym_EQ] = ACTIONS(485),
    [anon_sym_LPAREN] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(487),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [anon_sym_PIPE_PIPE] = ACTIONS(487),
    [anon_sym_else] = ACTIONS(2075),
    [anon_sym_LBRACE] = ACTIONS(487),
    [anon_sym_EQ_GT] = ACTIONS(487),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [714] = {
    [sym_if_expression] = STATE(124),
    [sym_if_let_expression] = STATE(124),
    [sym_block] = STATE(124),
    [anon_sym_if] = ACTIONS(2077),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [715] = {
    [sym__expression] = STATE(712),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_let] = ACTIONS(2079),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [716] = {
    [sym__pattern] = STATE(717),
    [sym__expression] = STATE(151),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym__] = ACTIONS(117),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(545),
    [anon_sym_return] = ACTIONS(547),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [717] = {
    [anon_sym_EQ] = ACTIONS(2081),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [718] = {
    [sym__expression] = STATE(719),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [719] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(720),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [720] = {
    [sym_else_tail] = STATE(187),
    [anon_sym_EQ] = ACTIONS(597),
    [anon_sym_LPAREN] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(599),
    [anon_sym_AMP_AMP] = ACTIONS(599),
    [anon_sym_PIPE_PIPE] = ACTIONS(599),
    [anon_sym_else] = ACTIONS(2075),
    [anon_sym_LBRACE] = ACTIONS(599),
    [anon_sym_EQ_GT] = ACTIONS(599),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [721] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(2083),
    [anon_sym_LPAREN] = ACTIONS(1665),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(2086),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(2089),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(2086),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(2089),
    [anon_sym_AMP_AMP] = ACTIONS(2089),
    [anon_sym_PIPE_PIPE] = ACTIONS(2089),
    [anon_sym_LBRACE] = ACTIONS(711),
    [anon_sym_EQ_GT] = ACTIONS(711),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [722] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(2092),
    [anon_sym_LPAREN] = ACTIONS(1677),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(2095),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(2098),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(2095),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(2098),
    [anon_sym_AMP_AMP] = ACTIONS(2098),
    [anon_sym_PIPE_PIPE] = ACTIONS(2098),
    [anon_sym_LBRACE] = ACTIONS(713),
    [anon_sym_EQ_GT] = ACTIONS(713),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [723] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(711),
    [anon_sym_COLON] = ACTIONS(711),
    [anon_sym_EQ] = ACTIONS(2101),
    [anon_sym_LPAREN] = ACTIONS(1665),
    [anon_sym_COMMA] = ACTIONS(711),
    [anon_sym_RPAREN] = ACTIONS(711),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(2104),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(2107),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(2104),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(2107),
    [anon_sym_AMP_AMP] = ACTIONS(2107),
    [anon_sym_PIPE_PIPE] = ACTIONS(2107),
    [anon_sym_RBRACK] = ACTIONS(711),
    [anon_sym_if] = ACTIONS(711),
    [anon_sym_LBRACE] = ACTIONS(711),
    [anon_sym_RBRACE] = ACTIONS(711),
    [anon_sym_EQ_GT] = ACTIONS(711),
    [anon_sym_PIPE] = ACTIONS(709),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [724] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(277),
    [anon_sym_COLON] = ACTIONS(277),
    [anon_sym_EQ] = ACTIONS(2110),
    [anon_sym_LPAREN] = ACTIONS(1633),
    [anon_sym_COMMA] = ACTIONS(277),
    [anon_sym_RPAREN] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(2113),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(2116),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(2113),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(2116),
    [anon_sym_AMP_AMP] = ACTIONS(2116),
    [anon_sym_PIPE_PIPE] = ACTIONS(2116),
    [anon_sym_RBRACK] = ACTIONS(277),
    [anon_sym_if] = ACTIONS(277),
    [anon_sym_LBRACE] = ACTIONS(277),
    [anon_sym_RBRACE] = ACTIONS(277),
    [anon_sym_EQ_GT] = ACTIONS(277),
    [anon_sym_PIPE] = ACTIONS(279),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [725] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(713),
    [anon_sym_COLON] = ACTIONS(713),
    [anon_sym_EQ] = ACTIONS(2119),
    [anon_sym_LPAREN] = ACTIONS(1677),
    [anon_sym_COMMA] = ACTIONS(713),
    [anon_sym_RPAREN] = ACTIONS(713),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(2122),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(2125),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(2122),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(2125),
    [anon_sym_AMP_AMP] = ACTIONS(2125),
    [anon_sym_PIPE_PIPE] = ACTIONS(2125),
    [anon_sym_RBRACK] = ACTIONS(713),
    [anon_sym_if] = ACTIONS(713),
    [anon_sym_LBRACE] = ACTIONS(713),
    [anon_sym_RBRACE] = ACTIONS(713),
    [anon_sym_EQ_GT] = ACTIONS(713),
    [anon_sym_PIPE] = ACTIONS(715),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [726] = {
    [anon_sym_COLON] = ACTIONS(2128),
    [anon_sym_EQ] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_COMMA] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(177),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(179),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(177),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(179),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(177),
    [anon_sym_AMP_AMP] = ACTIONS(177),
    [anon_sym_PIPE_PIPE] = ACTIONS(177),
    [anon_sym_RBRACK] = ACTIONS(177),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [727] = {
    [sym_arguments] = STATE(36),
    [anon_sym_EQ] = ACTIONS(1624),
    [anon_sym_LPAREN] = ACTIONS(219),
    [anon_sym_COMMA] = ACTIONS(2130),
    [anon_sym_RPAREN] = ACTIONS(2130),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1626),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1628),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1626),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1628),
    [anon_sym_AMP_AMP] = ACTIONS(1628),
    [anon_sym_PIPE_PIPE] = ACTIONS(1628),
    [anon_sym_RBRACK] = ACTIONS(2130),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [728] = {
    [sym_type_expression] = STATE(729),
    [anon_sym_u8] = ACTIONS(813),
    [anon_sym_i8] = ACTIONS(813),
    [anon_sym_u16] = ACTIONS(813),
    [anon_sym_i16] = ACTIONS(813),
    [anon_sym_u32] = ACTIONS(813),
    [anon_sym_i32] = ACTIONS(813),
    [anon_sym_u64] = ACTIONS(813),
    [anon_sym_i64] = ACTIONS(813),
    [anon_sym_isize] = ACTIONS(813),
    [anon_sym_usize] = ACTIONS(813),
    [anon_sym_f32] = ACTIONS(813),
    [anon_sym_f64] = ACTIONS(813),
    [sym_boolean_literal] = ACTIONS(813),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(815),
  },
  [729] = {
    [anon_sym_COMMA] = ACTIONS(2133),
    [anon_sym_RPAREN] = ACTIONS(2133),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [730] = {
    [anon_sym_SEMI] = ACTIONS(2136),
    [anon_sym_DASH_GT] = ACTIONS(895),
    [anon_sym_COLON] = ACTIONS(2136),
    [anon_sym_EQ] = ACTIONS(2139),
    [anon_sym_LPAREN] = ACTIONS(409),
    [anon_sym_COMMA] = ACTIONS(409),
    [anon_sym_RPAREN] = ACTIONS(409),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(409),
    [anon_sym_AMP_AMP] = ACTIONS(409),
    [anon_sym_PIPE_PIPE] = ACTIONS(409),
    [anon_sym_RBRACK] = ACTIONS(409),
    [anon_sym_if] = ACTIONS(2136),
    [anon_sym_LBRACE] = ACTIONS(2142),
    [anon_sym_RBRACE] = ACTIONS(409),
    [anon_sym_EQ_GT] = ACTIONS(2136),
    [anon_sym_PIPE] = ACTIONS(2139),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [731] = {
    [anon_sym_COLON] = ACTIONS(897),
    [anon_sym_EQ] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_COMMA] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(177),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(179),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(177),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(179),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(177),
    [anon_sym_AMP_AMP] = ACTIONS(177),
    [anon_sym_PIPE_PIPE] = ACTIONS(177),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [732] = {
    [sym_arguments] = STATE(36),
    [aux_sym__pattern_repeat1] = STATE(733),
    [anon_sym_EQ] = ACTIONS(415),
    [anon_sym_LPAREN] = ACTIONS(219),
    [anon_sym_COMMA] = ACTIONS(417),
    [anon_sym_RPAREN] = ACTIONS(2145),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(421),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(425),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(427),
    [anon_sym_AMP_AMP] = ACTIONS(429),
    [anon_sym_PIPE_PIPE] = ACTIONS(431),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [733] = {
    [anon_sym_COMMA] = ACTIONS(437),
    [anon_sym_RPAREN] = ACTIONS(1608),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [734] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(658),
    [anon_sym_SEMI] = ACTIONS(2147),
    [anon_sym_COLON] = ACTIONS(451),
    [anon_sym_EQ] = ACTIONS(1882),
    [anon_sym_LPAREN] = ACTIONS(1645),
    [anon_sym_COMMA] = ACTIONS(451),
    [anon_sym_RPAREN] = ACTIONS(451),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1885),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1888),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1885),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1888),
    [anon_sym_AMP_AMP] = ACTIONS(1888),
    [anon_sym_PIPE_PIPE] = ACTIONS(1888),
    [anon_sym_RBRACK] = ACTIONS(451),
    [anon_sym_if] = ACTIONS(451),
    [anon_sym_LBRACE] = ACTIONS(2150),
    [anon_sym_RBRACE] = ACTIONS(451),
    [anon_sym_EQ_GT] = ACTIONS(451),
    [anon_sym_PIPE] = ACTIONS(449),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [735] = {
    [ts_builtin_sym_end] = ACTIONS(2153),
    [anon_sym_LF] = ACTIONS(2153),
    [anon_sym_SEMI] = ACTIONS(2153),
    [anon_sym_fn] = ACTIONS(2158),
    [anon_sym_let] = ACTIONS(2158),
    [anon_sym_LPAREN] = ACTIONS(2153),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(2153),
    [anon_sym_return] = ACTIONS(2158),
    [anon_sym_LBRACK] = ACTIONS(2153),
    [anon_sym_if] = ACTIONS(2158),
    [anon_sym_match] = ACTIONS(2158),
    [anon_sym_RBRACE] = ACTIONS(2153),
    [sym_number_literal] = ACTIONS(2158),
    [anon_sym_DQUOTE] = ACTIONS(2153),
    [sym_raw_string_literal] = ACTIONS(2158),
    [anon_sym_SQUOTE] = ACTIONS(2153),
    [sym_boolean_literal] = ACTIONS(2158),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(2163),
  },
  [736] = {
    [aux_sym_parameters_repeat1] = STATE(404),
    [anon_sym_SEMI] = ACTIONS(1400),
    [anon_sym_EQ] = ACTIONS(1402),
    [anon_sym_COMMA] = ACTIONS(1404),
    [anon_sym_RPAREN] = ACTIONS(1408),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [737] = {
    [anon_sym_SEMI] = ACTIONS(789),
    [anon_sym_COLON] = ACTIONS(791),
    [anon_sym_EQ] = ACTIONS(2168),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [738] = {
    [sym__expression] = STATE(739),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1928),
    [anon_sym_return] = ACTIONS(1930),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(1932),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [739] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(658),
    [anon_sym_SEMI] = ACTIONS(817),
    [anon_sym_EQ] = ACTIONS(1936),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1938),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1940),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1938),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1940),
    [anon_sym_AMP_AMP] = ACTIONS(1940),
    [anon_sym_PIPE_PIPE] = ACTIONS(1940),
    [anon_sym_LBRACE] = ACTIONS(761),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [740] = {
    [sym__expression] = STATE(768),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(2170),
    [anon_sym_return] = ACTIONS(2172),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(2174),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [741] = {
    [sym__expression] = STATE(767),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_SEMI] = ACTIONS(137),
    [anon_sym_EQ] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(1263),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(2176),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(143),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(143),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(139),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(137),
    [anon_sym_AMP_AMP] = ACTIONS(137),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
    [anon_sym_return] = ACTIONS(2172),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(137),
    [anon_sym_if] = ACTIONS(2174),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [742] = {
    [sym__expression] = STATE(758),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_let] = ACTIONS(2025),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [743] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(215),
    [anon_sym_EQ] = ACTIONS(2178),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(2180),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(2182),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(2180),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(2182),
    [anon_sym_AMP_AMP] = ACTIONS(2182),
    [anon_sym_PIPE_PIPE] = ACTIONS(2182),
    [anon_sym_RBRACK] = ACTIONS(695),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [744] = {
    [sym__expression] = STATE(757),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(2170),
    [anon_sym_return] = ACTIONS(2172),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(2174),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [745] = {
    [sym__expression] = STATE(747),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(2170),
    [anon_sym_return] = ACTIONS(2172),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(2174),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [746] = {
    [sym__expression] = STATE(748),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [747] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(277),
    [anon_sym_EQ] = ACTIONS(2184),
    [anon_sym_LPAREN] = ACTIONS(1633),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(2187),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(2190),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(2187),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(2190),
    [anon_sym_AMP_AMP] = ACTIONS(2190),
    [anon_sym_PIPE_PIPE] = ACTIONS(2190),
    [anon_sym_RBRACK] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [748] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(749),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [749] = {
    [sym_else_tail] = STATE(122),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_EQ] = ACTIONS(485),
    [anon_sym_LPAREN] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(487),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [anon_sym_PIPE_PIPE] = ACTIONS(487),
    [anon_sym_RBRACK] = ACTIONS(487),
    [anon_sym_else] = ACTIONS(2193),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [750] = {
    [sym_if_expression] = STATE(124),
    [sym_if_let_expression] = STATE(124),
    [sym_block] = STATE(124),
    [anon_sym_if] = ACTIONS(2195),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [751] = {
    [sym__expression] = STATE(748),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_let] = ACTIONS(2197),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [752] = {
    [sym__pattern] = STATE(753),
    [sym__expression] = STATE(151),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym__] = ACTIONS(117),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(545),
    [anon_sym_return] = ACTIONS(547),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [753] = {
    [anon_sym_EQ] = ACTIONS(2199),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [754] = {
    [sym__expression] = STATE(755),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [755] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(756),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [756] = {
    [sym_else_tail] = STATE(187),
    [anon_sym_SEMI] = ACTIONS(599),
    [anon_sym_EQ] = ACTIONS(597),
    [anon_sym_LPAREN] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(599),
    [anon_sym_AMP_AMP] = ACTIONS(599),
    [anon_sym_PIPE_PIPE] = ACTIONS(599),
    [anon_sym_RBRACK] = ACTIONS(599),
    [anon_sym_else] = ACTIONS(2193),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [757] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(451),
    [anon_sym_EQ] = ACTIONS(2201),
    [anon_sym_LPAREN] = ACTIONS(1645),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(2204),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(2207),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(2204),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(2207),
    [anon_sym_AMP_AMP] = ACTIONS(2207),
    [anon_sym_PIPE_PIPE] = ACTIONS(2207),
    [anon_sym_RBRACK] = ACTIONS(451),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [758] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(759),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(761),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [759] = {
    [sym_else_tail] = STATE(320),
    [ts_builtin_sym_end] = ACTIONS(487),
    [anon_sym_LF] = ACTIONS(487),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_fn] = ACTIONS(485),
    [anon_sym_let] = ACTIONS(485),
    [anon_sym_EQ] = ACTIONS(485),
    [anon_sym_LPAREN] = ACTIONS(487),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1005),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1005),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(487),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [anon_sym_PIPE_PIPE] = ACTIONS(487),
    [anon_sym_return] = ACTIONS(485),
    [anon_sym_LBRACK] = ACTIONS(487),
    [anon_sym_RBRACK] = ACTIONS(487),
    [anon_sym_if] = ACTIONS(485),
    [anon_sym_else] = ACTIONS(2210),
    [anon_sym_match] = ACTIONS(485),
    [anon_sym_RBRACE] = ACTIONS(487),
    [sym_number_literal] = ACTIONS(485),
    [anon_sym_DQUOTE] = ACTIONS(487),
    [sym_raw_string_literal] = ACTIONS(485),
    [anon_sym_SQUOTE] = ACTIONS(487),
    [sym_boolean_literal] = ACTIONS(485),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(1005),
  },
  [760] = {
    [sym_if_expression] = STATE(322),
    [sym_if_let_expression] = STATE(322),
    [sym_block] = STATE(322),
    [anon_sym_if] = ACTIONS(2212),
    [anon_sym_LBRACE] = ACTIONS(761),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [761] = {
    [sym__expression] = STATE(758),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_let] = ACTIONS(2214),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [762] = {
    [sym__pattern] = STATE(763),
    [sym__expression] = STATE(151),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym__] = ACTIONS(117),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(545),
    [anon_sym_return] = ACTIONS(547),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [763] = {
    [anon_sym_EQ] = ACTIONS(2216),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [764] = {
    [sym__expression] = STATE(765),
    [sym_unary_expression] = STATE(14),
    [sym_binary_expression] = STATE(14),
    [sym_assignment_expression] = STATE(22),
    [sym_return_expression] = STATE(14),
    [sym_call_expression] = STATE(14),
    [sym_array_expression] = STATE(14),
    [sym_if_expression] = STATE(14),
    [sym_match_expression] = STATE(14),
    [sym__literal] = STATE(14),
    [sym_string_literal] = STATE(11),
    [sym_char_literal] = STATE(11),
    [anon_sym_LPAREN] = ACTIONS(87),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_match] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [sym_boolean_literal] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(105),
  },
  [765] = {
    [sym_arguments] = STATE(36),
    [sym_block] = STATE(766),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(285),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(287),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(761),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [766] = {
    [sym_else_tail] = STATE(332),
    [ts_builtin_sym_end] = ACTIONS(599),
    [anon_sym_LF] = ACTIONS(599),
    [anon_sym_SEMI] = ACTIONS(599),
    [anon_sym_fn] = ACTIONS(597),
    [anon_sym_let] = ACTIONS(597),
    [anon_sym_EQ] = ACTIONS(597),
    [anon_sym_LPAREN] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1015),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1015),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(599),
    [anon_sym_AMP_AMP] = ACTIONS(599),
    [anon_sym_PIPE_PIPE] = ACTIONS(599),
    [anon_sym_return] = ACTIONS(597),
    [anon_sym_LBRACK] = ACTIONS(599),
    [anon_sym_RBRACK] = ACTIONS(599),
    [anon_sym_if] = ACTIONS(597),
    [anon_sym_else] = ACTIONS(2210),
    [anon_sym_match] = ACTIONS(597),
    [anon_sym_RBRACE] = ACTIONS(599),
    [sym_number_literal] = ACTIONS(597),
    [anon_sym_DQUOTE] = ACTIONS(599),
    [sym_raw_string_literal] = ACTIONS(597),
    [anon_sym_SQUOTE] = ACTIONS(599),
    [sym_boolean_literal] = ACTIONS(597),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
    [sym_identifier] = ACTIONS(1015),
  },
  [767] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(711),
    [anon_sym_EQ] = ACTIONS(2218),
    [anon_sym_LPAREN] = ACTIONS(1665),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(2221),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(2224),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(2221),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(2224),
    [anon_sym_AMP_AMP] = ACTIONS(2224),
    [anon_sym_PIPE_PIPE] = ACTIONS(2224),
    [anon_sym_RBRACK] = ACTIONS(711),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
  [768] = {
    [sym_arguments] = STATE(36),
    [anon_sym_SEMI] = ACTIONS(713),
    [anon_sym_EQ] = ACTIONS(2227),
    [anon_sym_LPAREN] = ACTIONS(1677),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(2230),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(2233),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(2230),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(2233),
    [anon_sym_AMP_AMP] = ACTIONS(2233),
    [anon_sym_PIPE_PIPE] = ACTIONS(2233),
    [anon_sym_RBRACK] = ACTIONS(713),
    [sym_line_comment] = ACTIONS(73),
    [sym_block_comment] = ACTIONS(75),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(538),
  [5] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(3),
  [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(394),
  [9] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(539),
  [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(540),
  [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(541),
  [15] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(542),
  [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(543),
  [19] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(544),
  [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(53),
  [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(366),
  [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(342),
  [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(545),
  [29] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(546),
  [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(546),
  [33] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(546),
  [35] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(547),
  [37] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(8),
  [39] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(548),
  [41] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(549),
  [43] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(550),
  [45] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(10),
  [47] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(551),
  [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(552),
  [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(65),
  [53] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(553),
  [55] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(11),
  [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(554),
  [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(555),
  [61] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(555),
  [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(556),
  [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(112),
  [67] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(112),
  [69] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(557),
  [71] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(558),
  [73] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [77] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(559),
  [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_source_file, 0),
  [81] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
  [83] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
  [85] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
  [87] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
  [89] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
  [91] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
  [93] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(8),
  [95] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(9),
  [97] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(10),
  [99] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(11),
  [101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
  [103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(13),
  [105] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(14),
  [107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1),
  [109] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_empty_statement, 1),
  [111] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1),
  [113] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(391),
  [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(52),
  [117] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(53),
  [119] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(342),
  [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(343),
  [123] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(344),
  [125] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(345),
  [127] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(38),
  [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(160),
  [131] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(161),
  [133] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(162),
  [135] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(37),
  [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_return_expression, 1),
  [139] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_return_expression, 1),
  [141] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
  [143] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_return_expression, 1),
  [145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(188),
  [147] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(189),
  [149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(190),
  [151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(191),
  [153] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(519),
  [155] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
  [157] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(41),
  [159] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(42),
  [161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [163] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(114),
  [167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
  [169] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(115),
  [171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(111),
  [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
  [175] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(112),
  [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [179] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 1),
  [185] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_source_file_repeat1, 1),
  [187] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 1),
  [189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 1),
  [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(518),
  [193] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym__statement_list, 1),
  [195] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 1),
  [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [199] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
  [201] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declaration_statement, 1),
  [205] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__declaration_statement, 1),
  [207] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__declaration_statement, 1),
  [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__item, 1),
  [211] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__item, 1),
  [213] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__item, 1),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(27),
  [217] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(28),
  [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
  [221] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(30),
  [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
  [225] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(32),
  [227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
  [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
  [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
  [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 1),
  [235] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_binary_expression, 1),
  [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__control_flow_statement, 1),
  [239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym__control_flow_statement, 1),
  [241] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [243] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__control_flow_statement, 1),
  [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__control_flow_statement, 1),
  [247] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__control_flow_statement, 1),
  [249] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__control_flow_statement, 1),
  [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_source_file, 1),
  [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 2),
  [255] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [257] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 2),
  [259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression_statement, 2),
  [261] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression_statement, 2),
  [263] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression_statement, 2),
  [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
  [269] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(88),
  [271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(89),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [275] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call_expression, 2),
  [277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_expression, 3),
  [279] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_expression, 3),
  [281] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(40),
  [283] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(44),
  [285] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(45),
  [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(46),
  [289] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(47),
  [291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
  [293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
  [295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
  [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
  [299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
  [301] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(55),
  [303] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(56),
  [305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
  [307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(298),
  [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__pattern, 1),
  [311] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__pattern, 1),
  [313] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(54),
  [315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_match_expression, 4),
  [317] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_match_expression, 4),
  [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(443),
  [321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_match_pattern, 1),
  [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(444),
  [325] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(430),
  [327] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(431),
  [329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(432),
  [331] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(433),
  [333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(434),
  [335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(435),
  [337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(436),
  [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__pattern, 1),
  [341] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym__pattern, 1),
  [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_match_expression_repeat1, 1),
  [345] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_match_expression_repeat1, 1),
  [347] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_match_expression_repeat1, 1),
  [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(65),
  [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(63),
  [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_match_expression, 5),
  [355] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_match_expression, 5),
  [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_match_expression_repeat1, 2),
  [359] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_match_expression_repeat1, 2),
  [361] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_match_expression_repeat1, 2),
  [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(66),
  [365] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(67),
  [367] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(68),
  [369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
  [371] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(66),
  [373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(125),
  [375] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(126),
  [377] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(127),
  [379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(128),
  [381] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(72),
  [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
  [385] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(74),
  [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
  [389] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(76),
  [391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
  [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(78),
  [395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(79),
  [397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_match_arm, 3),
  [399] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_match_arm, 3),
  [401] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_match_arm, 3),
  [403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_match_arm, 4),
  [405] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_match_arm, 4),
  [407] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_match_arm, 4),
  [409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 2),
  [411] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_arguments, 2),
  [413] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(87),
  [415] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(91),
  [417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
  [419] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
  [421] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(94),
  [423] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(95),
  [425] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(96),
  [427] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
  [429] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
  [431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
  [433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3),
  [435] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_arguments, 3),
  [437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
  [439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
  [441] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 4),
  [443] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_arguments, 4),
  [445] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__pattern_repeat1, 3),
  [447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__pattern_repeat1, 2),
  [449] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_assignment_expression, 3),
  [451] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_assignment_expression, 3),
  [453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char_literal, 2),
  [455] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char_literal, 2),
  [457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(113),
  [459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char_literal, 3),
  [461] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char_literal, 3),
  [463] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 2),
  [465] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string_literal, 2),
  [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_string_literal_repeat1, 1),
  [469] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_string_literal_repeat1, 1),
  [471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(117),
  [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
  [475] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(118),
  [477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 3),
  [479] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string_literal, 3),
  [481] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [483] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [485] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_expression, 3),
  [487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_expression, 3),
  [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(121),
  [491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(123),
  [493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_expression, 4),
  [495] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_expression, 4),
  [497] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(413),
  [499] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_tail, 2),
  [501] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_tail, 2),
  [503] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(140),
  [505] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(125),
  [507] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(315),
  [509] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block, 2),
  [511] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_block, 2),
  [513] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_block, 2),
  [515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(139),
  [517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(307),
  [519] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(132),
  [521] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(133),
  [523] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(134),
  [525] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(135),
  [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(136),
  [529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(137),
  [531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(138),
  [533] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block, 3),
  [535] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_block, 3),
  [537] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_block, 3),
  [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(144),
  [541] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(145),
  [543] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(146),
  [545] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
  [547] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(148),
  [549] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(149),
  [551] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(147),
  [553] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(285),
  [555] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(153),
  [557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(154),
  [559] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(155),
  [561] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(156),
  [563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(157),
  [565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(158),
  [567] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(160),
  [569] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(164),
  [571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
  [573] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(166),
  [575] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(167),
  [577] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(168),
  [579] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(169),
  [581] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(170),
  [583] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(171),
  [585] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 3),
  [587] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 3),
  [589] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(180),
  [591] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(181),
  [593] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(182),
  [595] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(184),
  [597] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_let_expression, 6),
  [599] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_let_expression, 6),
  [601] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_let_expression, 7),
  [603] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_let_expression, 7),
  [605] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(188),
  [607] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_expression, 2),
  [609] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_expression, 2),
  [611] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(193),
  [613] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(194),
  [615] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(195),
  [617] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(196),
  [619] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(197),
  [621] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(198),
  [623] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(199),
  [625] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(200),
  [627] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(201),
  [629] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(202),
  [631] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(232),
  [633] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(233),
  [635] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(234),
  [637] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(206),
  [639] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(207),
  [641] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(208),
  [643] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_expression, 3),
  [645] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_expression, 3),
  [647] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(204),
  [649] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(205),
  [651] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_expression, 4),
  [653] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_expression, 4),
  [655] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(206),
  [657] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(210),
  [659] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(211),
  [661] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(212),
  [663] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(213),
  [665] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(214),
  [667] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(215),
  [669] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(216),
  [671] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(225),
  [673] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(226),
  [675] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(227),
  [677] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(229),
  [679] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(232),
  [681] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(236),
  [683] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(237),
  [685] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(238),
  [687] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(239),
  [689] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(240),
  [691] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(241),
  [693] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(242),
  [695] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(243),
  [697] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_expression, 5),
  [699] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_expression, 5),
  [701] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(252),
  [703] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(253),
  [705] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(254),
  [707] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(256),
  [709] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_return_expression, 2),
  [711] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_return_expression, 2),
  [713] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2),
  [715] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_expression, 2),
  [717] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(271),
  [719] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(272),
  [721] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(273),
  [723] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(275),
  [725] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(290),
  [727] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(291),
  [729] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(292),
  [731] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(294),
  [733] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__pattern, 2),
  [735] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__pattern, 2),
  [737] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(301),
  [739] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__pattern, 4),
  [741] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__pattern, 4),
  [743] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 2),
  [745] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement_list, 3),
  [747] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement_list, 3),
  [749] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement_list, 3),
  [751] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(311),
  [753] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(312),
  [755] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_match_expression, 4),
  [757] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(314),
  [759] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_match_expression, 5),
  [761] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(317),
  [763] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(323),
  [765] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(319),
  [767] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(321),
  [769] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_expression, 4),
  [771] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(327),
  [773] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_tail, 2),
  [775] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(326),
  [777] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(329),
  [779] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_let_expression, 7),
  [781] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(334),
  [783] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(337),
  [785] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(338),
  [787] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(343),
  [789] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(361),
  [791] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(362),
  [793] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(363),
  [795] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(349),
  [797] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(350),
  [799] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(351),
  [801] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(352),
  [803] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(353),
  [805] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(354),
  [807] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 3),
  [809] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_declaration, 3),
  [811] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 3),
  [813] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(366),
  [815] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(366),
  [817] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(365),
  [819] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 5),
  [821] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_declaration, 5),
  [823] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 5),
  [825] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_expression, 1),
  [827] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(368),
  [829] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(370),
  [831] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 7),
  [833] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_declaration, 7),
  [835] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 7),
  [837] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(373),
  [839] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(374),
  [841] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(375),
  [843] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(377),
  [845] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(382),
  [847] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(383),
  [849] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(384),
  [851] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 4),
  [853] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_declaration, 4),
  [855] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 4),
  [857] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(386),
  [859] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 6),
  [861] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_declaration, 6),
  [863] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 6),
  [865] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(388),
  [867] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(390),
  [869] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 8),
  [871] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_declaration, 8),
  [873] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 8),
  [875] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(392),
  [877] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(398),
  [879] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(399),
  [881] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(394),
  [883] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_item, 4),
  [885] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_item, 4),
  [887] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_item, 4),
  [889] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_item, 6),
  [891] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_item, 6),
  [893] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_item, 6),
  [895] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2),
  [897] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(400),
  [899] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(402),
  [901] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(403),
  [903] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(410),
  [905] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5),
  [907] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(405),
  [909] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(406),
  [911] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(407),
  [913] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 6),
  [915] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(408),
  [917] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 5),
  [919] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(411),
  [921] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 4),
  [923] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(415),
  [925] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(422),
  [927] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(423),
  [929] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(424),
  [931] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(426),
  [933] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(449),
  [935] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(450),
  [937] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(451),
  [939] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(446),
  [941] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_match_pattern, 2),
  [943] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(447),
  [945] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_match_pattern_repeat1, 3),
  [947] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(449),
  [949] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(453),
  [951] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(454),
  [953] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(455),
  [955] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(456),
  [957] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(457),
  [959] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(458),
  [961] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(459),
  [963] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_match_pattern, 4),
  [965] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(468),
  [967] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(469),
  [969] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(470),
  [971] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(472),
  [973] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_match_pattern_repeat1, 2),
  [975] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_match_pattern, 3),
  [977] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(480),
  [979] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(481),
  [981] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(482),
  [983] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(484),
  [985] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(496),
  [987] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(497),
  [989] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(498),
  [991] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(500),
  [993] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(506),
  [995] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(507),
  [997] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(508),
  [999] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(510),
  [1001] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym__statement_list, 2),
  [1003] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 2),
  [1005] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_expression, 3),
  [1007] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(522),
  [1009] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(523),
  [1011] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(524),
  [1013] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(526),
  [1015] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_let_expression, 6),
  [1017] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(530),
  [1019] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(533),
  [1021] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(534),
  [1023] = {.count = 9, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8),
  [1033] = {.count = 8, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8),
  [1042] = {.count = 10, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(2),
  [1053] = {.count = 10, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(3),
  [1064] = {.count = 10, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(4),
  [1075] = {.count = 10, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(5),
  [1086] = {.count = 10, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(740),
  [1097] = {.count = 10, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(741),
  [1108] = {.count = 10, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(8),
  [1119] = {.count = 10, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(742),
  [1130] = {.count = 10, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(10),
  [1141] = {.count = 10, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(11),
  [1152] = {.count = 10, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(12),
  [1163] = {.count = 10, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(13),
  [1174] = {.count = 10, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(14),
  [1185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(545),
  [1187] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(547),
  [1189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(634),
  [1191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(730),
  [1193] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(731),
  [1195] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_match_arm, 4), SHIFT(5),
  [1198] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_match_arm, 4), SHIFT(574),
  [1201] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_match_arm, 4), SHIFT(575),
  [1204] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_match_arm, 4), SHIFT(8),
  [1207] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_match_arm, 4), SHIFT(576),
  [1210] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_match_arm, 4), SHIFT(38),
  [1213] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_match_arm, 4), SHIFT(11),
  [1216] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_match_arm, 4), SHIFT(12),
  [1219] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_match_arm, 4), SHIFT(13),
  [1222] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_match_arm, 4), SHIFT(726),
  [1225] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__pattern, 2), REDUCE(sym_arguments, 2), REDUCE_FRAGILE(sym__pattern, 3), REDUCE(sym__expression, 3), REDUCE(sym_arguments, 3), REDUCE(sym__pattern, 4), REDUCE(sym_arguments, 4),
  [1233] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2), REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
  [1237] = {.count = 7, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__pattern, 2), REDUCE(sym_arguments, 2), REDUCE_FRAGILE(sym__pattern, 3), REDUCE(sym__expression, 3), REDUCE(sym_arguments, 3), REDUCE(sym__pattern, 4), REDUCE(sym_arguments, 4),
  [1245] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 2), REDUCE(sym__expression, 3), REDUCE(sym_arguments, 3), REDUCE(sym_arguments, 4),
  [1250] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_arguments, 2), REDUCE(sym__expression, 3), REDUCE(sym_arguments, 3), REDUCE(sym_arguments, 4),
  [1255] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 2), REDUCE(sym_parameters, 2), REDUCE(sym__expression, 3), REDUCE(sym_arguments, 3), REDUCE(sym_arguments, 4), REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
  [1263] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_return_expression, 1), SHIFT(5),
  [1266] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(545),
  [1268] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_return_expression, 1), SHIFT(634),
  [1271] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_expression, 2), REDUCE(sym_array_expression, 3), REDUCE(sym_array_expression, 4), REDUCE(sym_array_expression, 5),
  [1276] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_expression, 2), REDUCE(sym_array_expression, 3), REDUCE(sym_array_expression, 4), REDUCE(sym_array_expression, 5),
  [1281] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(698),
  [1283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(704),
  [1285] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(705),
  [1287] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(706),
  [1289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(697),
  [1291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(599),
  [1293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(600),
  [1295] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(601),
  [1297] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(602),
  [1299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(603),
  [1301] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block, 2), REDUCE(sym_block, 3), REDUCE(sym_match_expression, 4), REDUCE(sym_match_expression, 5),
  [1306] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_block, 2), REDUCE(sym_block, 3), REDUCE(sym_match_expression, 4), REDUCE(sym_match_expression, 5),
  [1311] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_block, 2), REDUCE(sym_block, 3),
  [1314] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_block, 2), REDUCE(sym_block, 3), REDUCE(sym_match_expression, 4), REDUCE(sym_match_expression, 5),
  [1319] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 2), REDUCE(sym_string_literal, 3),
  [1322] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string_literal, 2), REDUCE(sym_string_literal, 3),
  [1325] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(115),
  [1327] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_string_literal_repeat1, 1), REDUCE(aux_sym_string_literal_repeat1, 2),
  [1330] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_string_literal_repeat1, 1), REDUCE(aux_sym_string_literal_repeat1, 2),
  [1333] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char_literal, 2), REDUCE(sym_char_literal, 3),
  [1336] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char_literal, 2), REDUCE(sym_char_literal, 3),
  [1339] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(112),
  [1341] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_literal_repeat1, 1), REDUCE(aux_sym_string_literal_repeat1, 2),
  [1344] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_expression, 1), REDUCE(sym__literal, 1),
  [1347] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_expression, 1), REDUCE(sym__literal, 1),
  [1350] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_expression, 1), REDUCE(sym__expression, 1),
  [1353] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(694),
  [1356] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_expression, 1), REDUCE(sym__expression, 1),
  [1359] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(392),
  [1362] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 1), REDUCE(aux_sym_source_file_repeat1, 2), REDUCE(sym__statement_list, 3),
  [1366] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_source_file_repeat1, 1), REDUCE(aux_sym_source_file_repeat1, 2), REDUCE(sym__statement_list, 3),
  [1370] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement_list, 3), SHIFT(326),
  [1373] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 1), REDUCE(aux_sym_source_file_repeat1, 2), REDUCE(sym__statement_list, 3),
  [1377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(673),
  [1379] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 1), SHIFT(673),
  [1382] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(649),
  [1384] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(650),
  [1386] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(651),
  [1388] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_match_pattern_repeat1, 2), REDUCE(aux_sym_match_pattern_repeat1, 3), SHIFT(443),
  [1392] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_match_pattern, 1), REDUCE(aux_sym_match_pattern_repeat1, 2), REDUCE(aux_sym_match_pattern_repeat1, 3),
  [1396] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_match_pattern_repeat1, 2), REDUCE(aux_sym_match_pattern_repeat1, 3), SHIFT(444),
  [1400] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(645),
  [1402] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(646),
  [1404] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 4), REDUCE(aux_sym_parameters_repeat1, 5), SHIFT(402),
  [1408] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 4), REDUCE(aux_sym_parameters_repeat1, 5), SHIFT(403),
  [1412] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__pattern, 1), REDUCE_FRAGILE(sym_unary_expression, 2), REDUCE_FRAGILE(sym_return_expression, 2), REDUCE_FRAGILE(sym_binary_expression, 3), REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(593),
  [1419] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__pattern, 1), REDUCE_FRAGILE(sym_unary_expression, 2), REDUCE_FRAGILE(sym_return_expression, 2), REDUCE_FRAGILE(sym_binary_expression, 3), REDUCE_FRAGILE(sym_assignment_expression, 3),
  [1425] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym__pattern, 1), REDUCE_FRAGILE(sym_unary_expression, 2), REDUCE_FRAGILE(sym_return_expression, 2), REDUCE_FRAGILE(sym_binary_expression, 3), REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(594),
  [1432] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2), REDUCE_FRAGILE(sym_return_expression, 2), REDUCE_FRAGILE(sym_binary_expression, 3), REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(29),
  [1438] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2), REDUCE_FRAGILE(sym_return_expression, 2), REDUCE(aux_sym__pattern_repeat1, 2), REDUCE_FRAGILE(sym_binary_expression, 3), REDUCE_FRAGILE(sym_assignment_expression, 3), REDUCE(aux_sym__pattern_repeat1, 3), SHIFT(595),
  [1446] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2), REDUCE_FRAGILE(sym_return_expression, 2), REDUCE(aux_sym__pattern_repeat1, 2), REDUCE_FRAGILE(sym_binary_expression, 3), REDUCE_FRAGILE(sym_assignment_expression, 3), REDUCE(aux_sym__pattern_repeat1, 3), SHIFT(596),
  [1454] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_expression, 2), REDUCE_FRAGILE(sym_return_expression, 2), REDUCE_FRAGILE(sym_binary_expression, 3), REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(546),
  [1460] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2), REDUCE_FRAGILE(sym_return_expression, 2), REDUCE_FRAGILE(sym_binary_expression, 3), REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(546),
  [1466] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2), REDUCE_FRAGILE(sym_return_expression, 2), REDUCE(aux_sym__pattern_repeat1, 2), REDUCE_FRAGILE(sym_binary_expression, 3), REDUCE_FRAGILE(sym_assignment_expression, 3), REDUCE(aux_sym__pattern_repeat1, 3), SHIFT(597),
  [1474] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2), REDUCE_FRAGILE(sym_return_expression, 2), REDUCE_FRAGILE(sym_binary_expression, 3), REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(551),
  [1480] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2), REDUCE_FRAGILE(sym_return_expression, 2), REDUCE_FRAGILE(sym_binary_expression, 3), REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(326),
  [1486] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__pattern, 1), REDUCE_FRAGILE(sym_unary_expression, 2), REDUCE_FRAGILE(sym_return_expression, 2), REDUCE_FRAGILE(sym_binary_expression, 3), REDUCE_FRAGILE(sym_assignment_expression, 3), REDUCE(sym_match_pattern, 3), REDUCE(sym_match_pattern, 4),
  [1494] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym__pattern, 1), REDUCE_FRAGILE(sym_unary_expression, 2), REDUCE_FRAGILE(sym_return_expression, 2), REDUCE_FRAGILE(sym_binary_expression, 3), REDUCE_FRAGILE(sym_assignment_expression, 3),
  [1500] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__control_flow_statement, 1), REDUCE(sym_else_tail, 2),
  [1503] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__control_flow_statement, 1), REDUCE(sym__expression, 1), REDUCE(sym_else_tail, 2),
  [1507] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym__control_flow_statement, 1), REDUCE(sym_else_tail, 2),
  [1510] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_else_tail, 2),
  [1513] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1), REDUCE(sym_else_tail, 2),
  [1516] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_else_tail, 2),
  [1519] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym__control_flow_statement, 1), REDUCE(sym__expression, 1), REDUCE(sym_else_tail, 2),
  [1523] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__control_flow_statement, 1), REDUCE(sym_else_tail, 2),
  [1526] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__control_flow_statement, 1), REDUCE(sym_else_tail, 2),
  [1529] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__control_flow_statement, 1), REDUCE(sym_else_tail, 2),
  [1532] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__control_flow_statement, 1), REDUCE(sym_else_tail, 2),
  [1535] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_expression, 4), REDUCE(sym_if_let_expression, 7),
  [1538] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_expression, 4), REDUCE(sym_if_let_expression, 7),
  [1541] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_expression, 4), REDUCE(sym_if_let_expression, 7),
  [1544] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__control_flow_statement, 1), REDUCE(sym__expression, 1),
  [1547] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym__control_flow_statement, 1), REDUCE(sym__expression, 1),
  [1550] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_match_expression_repeat1, 1), REDUCE(aux_sym_match_expression_repeat1, 2),
  [1553] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_match_expression_repeat1, 1), REDUCE(aux_sym_match_expression_repeat1, 2),
  [1556] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_match_expression_repeat1, 1), REDUCE(aux_sym_match_expression_repeat1, 2),
  [1559] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_tail, 2), REDUCE(sym_if_expression, 3), REDUCE(sym_function_item, 4), REDUCE(sym_function_item, 6), REDUCE(sym_if_let_expression, 6),
  [1565] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_tail, 2), REDUCE(sym_if_expression, 3), REDUCE(sym_function_item, 4), REDUCE(sym_function_item, 6), REDUCE(sym_if_let_expression, 6),
  [1571] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_tail, 2), REDUCE(sym_if_expression, 3), REDUCE(sym_if_let_expression, 6),
  [1575] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_tail, 2), REDUCE(sym_if_expression, 3), REDUCE(sym_if_let_expression, 6),
  [1579] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_tail, 2), REDUCE(sym_if_expression, 3), REDUCE(sym_match_arm, 3), REDUCE(sym_function_item, 4), REDUCE(sym_function_item, 6), REDUCE(sym_if_let_expression, 6),
  [1586] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_tail, 2), REDUCE(sym_if_expression, 3), REDUCE(sym_match_arm, 3), REDUCE(sym_function_item, 4), REDUCE(sym_function_item, 6), REDUCE(sym_if_let_expression, 6),
  [1593] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_tail, 2), REDUCE(sym_if_expression, 3), REDUCE(sym_if_let_expression, 6),
  [1597] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(550),
  [1599] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_tail, 2), REDUCE(sym_if_expression, 3), REDUCE(sym_match_arm, 3), REDUCE(sym_function_item, 4), REDUCE(sym_function_item, 6), REDUCE(sym_if_let_expression, 6),
  [1606] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(572),
  [1608] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(573),
  [1610] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(574),
  [1612] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(575),
  [1614] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(576),
  [1616] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__pattern, 4), REDUCE(sym_arguments, 4),
  [1619] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__pattern, 4), REDUCE(sym_arguments, 4),
  [1622] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(574),
  [1624] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(578),
  [1626] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(579),
  [1628] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(579),
  [1630] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(578),
  [1633] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(29),
  [1636] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(579),
  [1639] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(579),
  [1642] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(578),
  [1645] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(29),
  [1648] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(579),
  [1651] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(579),
  [1654] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(584),
  [1656] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(585),
  [1658] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(586),
  [1660] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(588),
  [1662] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(578),
  [1665] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(29),
  [1668] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(579),
  [1671] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(579),
  [1674] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(578),
  [1677] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(29),
  [1680] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(579),
  [1683] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(579),
  [1686] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8),
  [1692] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8),
  [1698] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(5),
  [1705] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(232),
  [1712] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(233),
  [1719] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(8),
  [1726] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(234),
  [1733] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(38),
  [1740] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(11),
  [1747] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(12),
  [1754] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(13),
  [1761] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(14),
  [1768] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_match_arm, 4), SHIFT(14),
  [1771] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__pattern, 3), REDUCE(sym__expression, 3), REDUCE(sym_arguments, 3),
  [1775] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym__pattern, 3), REDUCE(sym__expression, 3), REDUCE(sym_arguments, 3),
  [1779] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 3), REDUCE(sym_arguments, 3),
  [1782] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 3), REDUCE(sym_arguments, 3),
  [1785] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_expression, 3), REDUCE(sym_array_expression, 5),
  [1788] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_expression, 3), REDUCE(sym_array_expression, 5),
  [1791] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_expression, 3), REDUCE(sym_if_let_expression, 6),
  [1794] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_expression, 3), REDUCE(sym_if_let_expression, 6),
  [1797] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_expression, 3), REDUCE(sym_if_let_expression, 6),
  [1800] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(608),
  [1802] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(600),
  [1804] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_return_expression, 1), SHIFT(608),
  [1807] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block, 2), REDUCE(sym_match_expression, 4),
  [1810] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_block, 2), REDUCE(sym_match_expression, 4),
  [1813] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_block, 2), REDUCE(sym_match_expression, 4),
  [1816] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(606),
  [1818] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(607),
  [1820] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(607),
  [1822] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(606),
  [1825] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(607),
  [1828] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(607),
  [1831] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(612),
  [1833] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(613),
  [1835] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(614),
  [1837] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(616),
  [1839] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(606),
  [1842] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(607),
  [1845] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(607),
  [1848] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(622),
  [1850] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(623),
  [1852] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(624),
  [1854] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(626),
  [1856] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(606),
  [1859] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(607),
  [1862] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(607),
  [1865] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(606),
  [1868] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(607),
  [1871] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(607),
  [1874] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(632),
  [1876] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__pattern, 3), REDUCE(sym__expression, 3),
  [1879] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym__pattern, 3), REDUCE(sym__expression, 3),
  [1882] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(594),
  [1885] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(546),
  [1888] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(546),
  [1891] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(638),
  [1893] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(639),
  [1895] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(640),
  [1897] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(642),
  [1899] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6),
  [1902] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6),
  [1905] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6),
  [1908] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(648),
  [1910] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8),
  [1913] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8),
  [1916] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8),
  [1919] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4),
  [1922] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4),
  [1925] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4),
  [1928] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(652),
  [1930] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(653),
  [1932] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(654),
  [1934] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(652),
  [1936] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(656),
  [1938] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(657),
  [1940] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(657),
  [1942] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(656),
  [1945] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(657),
  [1948] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(657),
  [1951] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(656),
  [1954] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(657),
  [1957] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(657),
  [1960] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(663),
  [1962] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(664),
  [1964] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(665),
  [1966] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(667),
  [1968] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(656),
  [1971] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(657),
  [1974] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(657),
  [1977] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(656),
  [1980] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(657),
  [1983] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(657),
  [1986] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(2),
  [1989] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(3),
  [1992] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(4),
  [1995] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(5),
  [1998] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(6),
  [2001] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(7),
  [2004] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(8),
  [2007] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(674),
  [2010] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(10),
  [2013] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(11),
  [2016] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(12),
  [2019] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(13),
  [2022] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(14),
  [2025] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(676),
  [2027] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(679),
  [2029] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(680),
  [2031] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(681),
  [2033] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(683),
  [2035] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(687),
  [2037] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(690),
  [2039] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(691),
  [2041] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_match_pattern_repeat1, 2), REDUCE(aux_sym_match_pattern_repeat1, 3),
  [2044] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(702),
  [2046] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(704),
  [2048] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(708),
  [2050] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(709),
  [2052] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(709),
  [2054] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_match_pattern, 3), REDUCE(sym_match_pattern, 4),
  [2057] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(708),
  [2060] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(709),
  [2063] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(709),
  [2066] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(708),
  [2069] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(709),
  [2072] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(709),
  [2075] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(714),
  [2077] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(715),
  [2079] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(716),
  [2081] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(718),
  [2083] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(708),
  [2086] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(709),
  [2089] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(709),
  [2092] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(708),
  [2095] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(709),
  [2098] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(709),
  [2101] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(594),
  [2104] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(546),
  [2107] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(546),
  [2110] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(594),
  [2113] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(546),
  [2116] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(546),
  [2119] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(594),
  [2122] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(546),
  [2125] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(546),
  [2128] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(728),
  [2130] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__pattern_repeat1, 2), REDUCE(aux_sym__pattern_repeat1, 3),
  [2133] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 4), REDUCE(aux_sym_parameters_repeat1, 5),
  [2136] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__pattern, 2), REDUCE(sym_arguments, 2),
  [2139] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__pattern, 2), REDUCE(sym_arguments, 2),
  [2142] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 2), REDUCE(sym_parameters, 2),
  [2145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(596),
  [2147] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(735),
  [2150] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(317),
  [2153] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8),
  [2158] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8),
  [2163] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8),
  [2168] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(738),
  [2170] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(740),
  [2172] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(741),
  [2174] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(746),
  [2176] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(740),
  [2178] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(744),
  [2180] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(745),
  [2182] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(745),
  [2184] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(744),
  [2187] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(745),
  [2190] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(745),
  [2193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(750),
  [2195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(751),
  [2197] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(752),
  [2199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(754),
  [2201] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(744),
  [2204] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(745),
  [2207] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(745),
  [2210] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(760),
  [2212] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(761),
  [2214] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(762),
  [2216] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(764),
  [2218] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(744),
  [2221] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(745),
  [2224] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(745),
  [2227] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(744),
  [2230] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(745),
  [2233] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(745),
};

const TSLanguage *tree_sitter_rust() {
  GET_LANGUAGE();
}
