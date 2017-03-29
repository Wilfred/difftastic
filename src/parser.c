#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define LANGUAGE_VERSION 2
#define STATE_COUNT 609
#define SYMBOL_COUNT 85
#define TOKEN_COUNT 53
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
  anon_sym_PIPE = 12,
  anon_sym_u8 = 13,
  anon_sym_i8 = 14,
  anon_sym_u16 = 15,
  anon_sym_i16 = 16,
  anon_sym_u32 = 17,
  anon_sym_i32 = 18,
  anon_sym_u64 = 19,
  anon_sym_i64 = 20,
  anon_sym_isize = 21,
  anon_sym_usize = 22,
  anon_sym_f32 = 23,
  anon_sym_f64 = 24,
  sym_mutable_specifier = 25,
  aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH = 26,
  aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH = 27,
  aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH = 28,
  aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH = 29,
  aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH = 30,
  anon_sym_AMP_AMP = 31,
  anon_sym_PIPE_PIPE = 32,
  anon_sym_return = 33,
  anon_sym_LBRACK = 34,
  anon_sym_RBRACK = 35,
  anon_sym_if = 36,
  anon_sym_else = 37,
  sym_number_literal = 38,
  anon_sym_DQUOTE = 39,
  anon_sym_BSLASH_DQUOTE = 40,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH = 41,
  sym_raw_string_literal = 42,
  anon_sym_SQUOTE = 43,
  anon_sym_BSLASH_SQUOTE = 44,
  aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_RBRACK_SLASH = 45,
  sym_byte_escape = 46,
  sym_boolean_literal = 47,
  sym_line_comment = 48,
  sym_block_comment = 49,
  sym_identifier = 50,
  anon_sym_LBRACE = 51,
  anon_sym_RBRACE = 52,
  sym_source_file = 53,
  sym__statement_list = 54,
  sym__statement = 55,
  sym__declaration_statement = 56,
  sym__control_flow_statement = 57,
  sym__item = 58,
  sym_function_item = 59,
  sym_let_declaration = 60,
  sym__pattern = 61,
  sym_type_expression = 62,
  sym__expression_statement = 63,
  sym__expression = 64,
  sym_unary_expression = 65,
  sym_binary_expression = 66,
  sym_assignment_expression = 67,
  sym_return_expression = 68,
  sym_call_expression = 69,
  sym_arguments = 70,
  sym_array_expression = 71,
  sym_if_expression = 72,
  sym_if_let_expression = 73,
  sym_else_tail = 74,
  sym__literal = 75,
  sym_string_literal = 76,
  sym_char_literal = 77,
  sym_parameters = 78,
  sym_block = 79,
  sym_empty_statement = 80,
  aux_sym_source_file_repeat1 = 81,
  aux_sym__pattern_repeat1 = 82,
  aux_sym_string_literal_repeat1 = 83,
  aux_sym_parameters_repeat1 = 84,
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
  [anon_sym_PIPE] = "|",
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
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
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
  [sym__literal] = "_literal",
  [sym_string_literal] = "string_literal",
  [sym_char_literal] = "char_literal",
  [sym_parameters] = "parameters",
  [sym_block] = "block",
  [sym_empty_statement] = "empty_statement",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__pattern_repeat1] = "_pattern_repeat1",
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
  [anon_sym_PIPE] = {
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
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == '\\')
        ADVANCE(48);
      if (lookahead == ']')
        ADVANCE(54);
      if (lookahead == '_')
        ADVANCE(55);
      if (lookahead == 'e')
        ADVANCE(56);
      if (lookahead == 'f')
        ADVANCE(60);
      if (lookahead == 'i')
        ADVANCE(70);
      if (lookahead == 'l')
        ADVANCE(83);
      if (lookahead == 'm')
        ADVANCE(86);
      if (lookahead == 'r')
        ADVANCE(89);
      if (lookahead == 't')
        ADVANCE(110);
      if (lookahead == 'u')
        ADVANCE(112);
      if (lookahead == '{')
        ADVANCE(124);
      if (lookahead == '|')
        ADVANCE(125);
      if (lookahead == '}')
        ADVANCE(127);
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
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH);
      if (lookahead == '=')
        ADVANCE(4);
      if (lookahead == '>')
        ADVANCE(44);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '\"')
        ADVANCE(49);
      if (lookahead == '\'')
        ADVANCE(50);
      if (lookahead == '0')
        ADVANCE(51);
      if (lookahead == '\\')
        ADVANCE(51);
      if (lookahead == 'n')
        ADVANCE(51);
      if (lookahead == 'r')
        ADVANCE(51);
      if (lookahead == 't')
        ADVANCE(51);
      if (lookahead == 'x')
        ADVANCE(52);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_BSLASH_SQUOTE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_byte_escape);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(53);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(51);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym__);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'l')
        ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 's')
        ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'e')
        ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_else);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 60:
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
        ADVANCE(61);
      if (lookahead == '6')
        ADVANCE(63);
      if (lookahead == 'a')
        ADVANCE(65);
      if (lookahead == 'n')
        ADVANCE(69);
      END_STATE();
    case 61:
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
        ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_f32);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '3') ||
          ('5' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '4')
        ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_f64);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'l')
        ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 's')
        ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'e')
        ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_boolean_literal);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_fn);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 70:
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
        ADVANCE(71);
      if (lookahead == '3')
        ADVANCE(73);
      if (lookahead == '6')
        ADVANCE(75);
      if (lookahead == '8')
        ADVANCE(77);
      if (lookahead == 'f')
        ADVANCE(78);
      if (lookahead == 's')
        ADVANCE(79);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '5') ||
          ('7' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '6')
        ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_i16);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 73:
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
        ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_i32);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '3') ||
          ('5' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '4')
        ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_i64);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_i8);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_if);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'i')
        ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(7);
      if (lookahead == 'z')
        ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'e')
        ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_isize);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'e')
        ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 't')
        ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_let);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'u')
        ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 't')
        ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_mutable_specifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '#')
        ADVANCE(90);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'e')
        ADVANCE(105);
      END_STATE();
    case 90:
      if (lookahead == '\"')
        ADVANCE(91);
      if (lookahead == '#')
        ADVANCE(94);
      END_STATE();
    case 91:
      if (lookahead == '\"')
        ADVANCE(92);
      if (!((lookahead == 0) ||
          (lookahead == '\n') ||
          (lookahead == '\"')))
        ADVANCE(91);
      END_STATE();
    case 92:
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '#')
        ADVANCE(93);
      if (!((lookahead == 0) ||
          (lookahead == '\n') ||
          (lookahead == '\"') ||
          (lookahead == '#')))
        ADVANCE(91);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_raw_string_literal);
      if (lookahead == '\"')
        ADVANCE(92);
      if (!((lookahead == 0) ||
          (lookahead == '\n') ||
          (lookahead == '\"')))
        ADVANCE(91);
      END_STATE();
    case 94:
      if (lookahead == '\"')
        ADVANCE(95);
      if (lookahead == '#')
        ADVANCE(99);
      END_STATE();
    case 95:
      if (lookahead == '\"')
        ADVANCE(96);
      if (!((lookahead == 0) ||
          (lookahead == '\n') ||
          (lookahead == '\"')))
        ADVANCE(95);
      END_STATE();
    case 96:
      if (lookahead == '\"')
        ADVANCE(96);
      if (lookahead == '#')
        ADVANCE(97);
      if (!((lookahead == 0) ||
          (lookahead == '\n') ||
          (lookahead == '\"') ||
          (lookahead == '#')))
        ADVANCE(95);
      END_STATE();
    case 97:
      if (lookahead == '\"')
        ADVANCE(96);
      if (lookahead == '#')
        ADVANCE(98);
      if (!((lookahead == 0) ||
          (lookahead == '\n') ||
          (lookahead == '\"') ||
          (lookahead == '#')))
        ADVANCE(95);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_raw_string_literal);
      if (lookahead == '\"')
        ADVANCE(96);
      if (!((lookahead == 0) ||
          (lookahead == '\n') ||
          (lookahead == '\"')))
        ADVANCE(95);
      END_STATE();
    case 99:
      if (lookahead == '\"')
        ADVANCE(100);
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
      if (lookahead == '\"')
        ADVANCE(101);
      if (lookahead == '#')
        ADVANCE(104);
      if (!((lookahead == 0) ||
          (lookahead == '\n') ||
          (lookahead == '\"') ||
          (lookahead == '#')))
        ADVANCE(100);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_raw_string_literal);
      if (lookahead == '\"')
        ADVANCE(101);
      if (!((lookahead == 0) ||
          (lookahead == '\n') ||
          (lookahead == '\"')))
        ADVANCE(100);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 't')
        ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'u')
        ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'r')
        ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'n')
        ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_return);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'r')
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
        ADVANCE(67);
      END_STATE();
    case 112:
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
        ADVANCE(113);
      if (lookahead == '3')
        ADVANCE(115);
      if (lookahead == '6')
        ADVANCE(117);
      if (lookahead == '8')
        ADVANCE(119);
      if (lookahead == 's')
        ADVANCE(120);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '5') ||
          ('7' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '6')
        ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_u16);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 115:
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
        ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_u32);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '3') ||
          ('5' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '4')
        ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_u64);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_u8);
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
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'i')
        ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(7);
      if (lookahead == 'z')
        ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'e')
        ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_usize);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|')
        ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 128:
      if (lookahead == 0)
        ADVANCE(1);
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(128);
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
          ('m' <= lookahead && lookahead <= 'q') ||
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
        ADVANCE(129);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == 'f')
        ADVANCE(130);
      if (lookahead == 'i')
        ADVANCE(131);
      if (lookahead == 'l')
        ADVANCE(132);
      if (lookahead == 'r')
        ADVANCE(133);
      if (lookahead == 't')
        ADVANCE(134);
      END_STATE();
    case 129:
      if (lookahead == '*')
        ADVANCE(20);
      if (lookahead == '/')
        ADVANCE(23);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('b' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'a')
        ADVANCE(65);
      if (lookahead == 'n')
        ADVANCE(69);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'f')
        ADVANCE(78);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'e')
        ADVANCE(84);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#')
        ADVANCE(90);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'e')
        ADVANCE(105);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'r')
        ADVANCE(111);
      END_STATE();
    case 135:
      if (lookahead == 0)
        ADVANCE(1);
      if ((lookahead == '\t') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(135);
      if (lookahead == '\n')
        ADVANCE(136);
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
          ('m' <= lookahead && lookahead <= 'q') ||
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
        ADVANCE(129);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == 'f')
        ADVANCE(130);
      if (lookahead == 'i')
        ADVANCE(131);
      if (lookahead == 'l')
        ADVANCE(132);
      if (lookahead == 'r')
        ADVANCE(133);
      if (lookahead == 't')
        ADVANCE(134);
      if (lookahead == '}')
        ADVANCE(127);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 137:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(137);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '/')
        ADVANCE(129);
      END_STATE();
    case 138:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(138);
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
        ADVANCE(129);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == '_')
        ADVANCE(55);
      if (lookahead == 'f')
        ADVANCE(139);
      if (lookahead == 'i')
        ADVANCE(131);
      if (lookahead == 'm')
        ADVANCE(140);
      if (lookahead == 'r')
        ADVANCE(133);
      if (lookahead == 't')
        ADVANCE(134);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'a')
        ADVANCE(65);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'u')
        ADVANCE(87);
      END_STATE();
    case 141:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(141);
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
          ('j' <= lookahead && lookahead <= 'q') ||
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
        ADVANCE(129);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == 'f')
        ADVANCE(139);
      if (lookahead == 'i')
        ADVANCE(131);
      if (lookahead == 'r')
        ADVANCE(133);
      if (lookahead == 't')
        ADVANCE(134);
      END_STATE();
    case 142:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(142);
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
          ('j' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == 'f')
        ADVANCE(139);
      if (lookahead == 'i')
        ADVANCE(131);
      if (lookahead == 'r')
        ADVANCE(133);
      if (lookahead == 't')
        ADVANCE(134);
      if (lookahead == '|')
        ADVANCE(144);
      END_STATE();
    case 143:
      if (lookahead == '&')
        ADVANCE(10);
      END_STATE();
    case 144:
      if (lookahead == '|')
        ADVANCE(126);
      END_STATE();
    case 145:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(145);
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
          ('j' <= lookahead && lookahead <= 'q') ||
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
        ADVANCE(129);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == ']')
        ADVANCE(54);
      if (lookahead == 'f')
        ADVANCE(139);
      if (lookahead == 'i')
        ADVANCE(131);
      if (lookahead == 'r')
        ADVANCE(133);
      if (lookahead == 't')
        ADVANCE(134);
      END_STATE();
    case 146:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(146);
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
          ('m' <= lookahead && lookahead <= 'q') ||
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
        ADVANCE(129);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == 'f')
        ADVANCE(139);
      if (lookahead == 'i')
        ADVANCE(131);
      if (lookahead == 'l')
        ADVANCE(132);
      if (lookahead == 'r')
        ADVANCE(133);
      if (lookahead == 't')
        ADVANCE(134);
      END_STATE();
    case 147:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(147);
      if (lookahead == '!')
        ADVANCE(148);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(46);
      if (lookahead == ']')
        ADVANCE(54);
      if (lookahead == '{')
        ADVANCE(124);
      if (lookahead == '|')
        ADVANCE(125);
      if (lookahead == '}')
        ADVANCE(127);
      END_STATE();
    case 148:
      if (lookahead == '=')
        ADVANCE(4);
      END_STATE();
    case 149:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(150);
      if (lookahead == '\\')
        ADVANCE(151);
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
    case 150:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(20);
      if (lookahead == '/')
        ADVANCE(23);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '\"')
        ADVANCE(49);
      if (lookahead == '0')
        ADVANCE(51);
      if (lookahead == '\\')
        ADVANCE(51);
      if (lookahead == 'n')
        ADVANCE(51);
      if (lookahead == 'r')
        ADVANCE(51);
      if (lookahead == 't')
        ADVANCE(51);
      if (lookahead == 'x')
        ADVANCE(52);
      END_STATE();
    case 152:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        ADVANCE(153);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(154);
      if (lookahead == '\\')
        ADVANCE(155);
      if (!((lookahead == 0) ||
          (lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' ') ||
          (lookahead == '\'') ||
          (lookahead == '/') ||
          (lookahead == '\\')))
        ADVANCE(153);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_RBRACK_SLASH);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(20);
      if (lookahead == '/')
        ADVANCE(23);
      END_STATE();
    case 155:
      if (lookahead == '\'')
        ADVANCE(50);
      if (lookahead == '0')
        ADVANCE(51);
      if (lookahead == '\\')
        ADVANCE(51);
      if (lookahead == 'n')
        ADVANCE(51);
      if (lookahead == 'r')
        ADVANCE(51);
      if (lookahead == 't')
        ADVANCE(51);
      if (lookahead == 'x')
        ADVANCE(52);
      END_STATE();
    case 156:
      if (lookahead == 0)
        ADVANCE(1);
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(156);
      if (lookahead == '/')
        ADVANCE(129);
      END_STATE();
    case 157:
      if (lookahead == 0)
        ADVANCE(1);
      if ((lookahead == '\t') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(157);
      if (lookahead == '\n')
        ADVANCE(136);
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
          ('m' <= lookahead && lookahead <= 'q') ||
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
        ADVANCE(129);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == 'f')
        ADVANCE(130);
      if (lookahead == 'i')
        ADVANCE(131);
      if (lookahead == 'l')
        ADVANCE(132);
      if (lookahead == 'r')
        ADVANCE(133);
      if (lookahead == 't')
        ADVANCE(134);
      END_STATE();
    case 158:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(158);
      if (lookahead == '!')
        ADVANCE(148);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(46);
      if (lookahead == '|')
        ADVANCE(144);
      END_STATE();
    case 159:
      if (lookahead == 0)
        ADVANCE(1);
      if ((lookahead == '\t') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(159);
      if (lookahead == '\n')
        ADVANCE(136);
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
          ('m' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == 'f')
        ADVANCE(130);
      if (lookahead == 'i')
        ADVANCE(131);
      if (lookahead == 'l')
        ADVANCE(132);
      if (lookahead == 'r')
        ADVANCE(133);
      if (lookahead == 't')
        ADVANCE(134);
      if (lookahead == '|')
        ADVANCE(144);
      if (lookahead == '}')
        ADVANCE(127);
      END_STATE();
    case 160:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(160);
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
          ('j' <= lookahead && lookahead <= 'q') ||
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
        ADVANCE(129);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == 'f')
        ADVANCE(139);
      if (lookahead == 'i')
        ADVANCE(131);
      if (lookahead == 'r')
        ADVANCE(133);
      if (lookahead == 't')
        ADVANCE(134);
      END_STATE();
    case 161:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(161);
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
          ('j' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == 'f')
        ADVANCE(139);
      if (lookahead == 'i')
        ADVANCE(131);
      if (lookahead == 'r')
        ADVANCE(133);
      if (lookahead == 't')
        ADVANCE(134);
      if (lookahead == '{')
        ADVANCE(124);
      if (lookahead == '|')
        ADVANCE(144);
      END_STATE();
    case 162:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(162);
      if (lookahead == '!')
        ADVANCE(148);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(46);
      if (lookahead == '{')
        ADVANCE(124);
      if (lookahead == '|')
        ADVANCE(144);
      END_STATE();
    case 163:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(163);
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
          ('m' <= lookahead && lookahead <= 'q') ||
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
        ADVANCE(129);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == 'f')
        ADVANCE(130);
      if (lookahead == 'i')
        ADVANCE(131);
      if (lookahead == 'l')
        ADVANCE(132);
      if (lookahead == 'r')
        ADVANCE(133);
      if (lookahead == 't')
        ADVANCE(134);
      if (lookahead == '}')
        ADVANCE(127);
      END_STATE();
    case 164:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(164);
      if (lookahead == '!')
        ADVANCE(148);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(46);
      if (lookahead == 'e')
        ADVANCE(165);
      if (lookahead == '|')
        ADVANCE(144);
      END_STATE();
    case 165:
      if (lookahead == 'l')
        ADVANCE(166);
      END_STATE();
    case 166:
      if (lookahead == 's')
        ADVANCE(167);
      END_STATE();
    case 167:
      if (lookahead == 'e')
        ADVANCE(168);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 169:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(169);
      if (lookahead == '/')
        ADVANCE(129);
      if (lookahead == 'i')
        ADVANCE(170);
      if (lookahead == '{')
        ADVANCE(124);
      END_STATE();
    case 170:
      if (lookahead == 'f')
        ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 172:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(172);
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
          ('j' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == 'f')
        ADVANCE(139);
      if (lookahead == 'i')
        ADVANCE(131);
      if (lookahead == 'r')
        ADVANCE(133);
      if (lookahead == 't')
        ADVANCE(134);
      if (lookahead == '|')
        ADVANCE(144);
      if (lookahead == '}')
        ADVANCE(127);
      END_STATE();
    case 173:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(173);
      if (lookahead == '!')
        ADVANCE(148);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(46);
      if (lookahead == ']')
        ADVANCE(54);
      if (lookahead == 'e')
        ADVANCE(165);
      if (lookahead == '{')
        ADVANCE(124);
      if (lookahead == '|')
        ADVANCE(125);
      if (lookahead == '}')
        ADVANCE(127);
      END_STATE();
    case 174:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(174);
      if (lookahead == '/')
        ADVANCE(129);
      if (lookahead == '}')
        ADVANCE(127);
      END_STATE();
    case 175:
      if ((lookahead == '\t') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(175);
      if (lookahead == '\n')
        ADVANCE(136);
      if (lookahead == '/')
        ADVANCE(129);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '}')
        ADVANCE(127);
      END_STATE();
    case 176:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(176);
      if (lookahead == '!')
        ADVANCE(148);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(46);
      if (lookahead == '|')
        ADVANCE(144);
      if (lookahead == '}')
        ADVANCE(127);
      END_STATE();
    case 177:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(177);
      if (lookahead == '!')
        ADVANCE(148);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(46);
      if (lookahead == 'e')
        ADVANCE(165);
      if (lookahead == '|')
        ADVANCE(144);
      if (lookahead == '}')
        ADVANCE(127);
      END_STATE();
    case 178:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(178);
      if (lookahead == '!')
        ADVANCE(14);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          ('j' <= lookahead && lookahead <= 'q') ||
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
        ADVANCE(129);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == '_')
        ADVANCE(55);
      if (lookahead == 'f')
        ADVANCE(139);
      if (lookahead == 'i')
        ADVANCE(131);
      if (lookahead == 'r')
        ADVANCE(133);
      if (lookahead == 't')
        ADVANCE(134);
      END_STATE();
    case 179:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(179);
      if (lookahead == '/')
        ADVANCE(129);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '=')
        ADVANCE(180);
      if (lookahead == '|')
        ADVANCE(181);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_PIPE);
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
          ('j' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == 'f')
        ADVANCE(139);
      if (lookahead == 'i')
        ADVANCE(131);
      if (lookahead == 'r')
        ADVANCE(133);
      if (lookahead == 't')
        ADVANCE(134);
      if (lookahead == '|')
        ADVANCE(125);
      END_STATE();
    case 183:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(183);
      if (lookahead == '/')
        ADVANCE(129);
      if (lookahead == '=')
        ADVANCE(180);
      END_STATE();
    case 184:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(184);
      if (lookahead == '!')
        ADVANCE(148);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(46);
      if (lookahead == '|')
        ADVANCE(125);
      END_STATE();
    case 185:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(185);
      if (lookahead == '/')
        ADVANCE(129);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '=')
        ADVANCE(180);
      END_STATE();
    case 186:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(186);
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
          ('j' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == 'f')
        ADVANCE(139);
      if (lookahead == 'i')
        ADVANCE(131);
      if (lookahead == 'r')
        ADVANCE(133);
      if (lookahead == 't')
        ADVANCE(134);
      if (lookahead == '|')
        ADVANCE(144);
      END_STATE();
    case 187:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(187);
      if (lookahead == '!')
        ADVANCE(148);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead == '|')
        ADVANCE(144);
      END_STATE();
    case 188:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(188);
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
          ('j' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == 'f')
        ADVANCE(139);
      if (lookahead == 'i')
        ADVANCE(131);
      if (lookahead == 'r')
        ADVANCE(133);
      if (lookahead == 't')
        ADVANCE(134);
      if (lookahead == '|')
        ADVANCE(144);
      END_STATE();
    case 189:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(189);
      if (lookahead == '!')
        ADVANCE(148);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead == '|')
        ADVANCE(144);
      END_STATE();
    case 190:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(190);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '/')
        ADVANCE(129);
      END_STATE();
    case 191:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(191);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(129);
      END_STATE();
    case 192:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(192);
      if (lookahead == '!')
        ADVANCE(148);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead == 'e')
        ADVANCE(165);
      if (lookahead == '|')
        ADVANCE(144);
      END_STATE();
    case 193:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(193);
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
          ('j' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == ']')
        ADVANCE(54);
      if (lookahead == 'f')
        ADVANCE(139);
      if (lookahead == 'i')
        ADVANCE(131);
      if (lookahead == 'r')
        ADVANCE(133);
      if (lookahead == 't')
        ADVANCE(134);
      if (lookahead == '|')
        ADVANCE(144);
      END_STATE();
    case 194:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(194);
      if (lookahead == '!')
        ADVANCE(148);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead == ']')
        ADVANCE(54);
      if (lookahead == '|')
        ADVANCE(144);
      END_STATE();
    case 195:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(195);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '/')
        ADVANCE(129);
      if (lookahead == ']')
        ADVANCE(54);
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
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          (lookahead == 'g') ||
          (lookahead == 'h') ||
          ('j' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == ']')
        ADVANCE(54);
      if (lookahead == 'f')
        ADVANCE(139);
      if (lookahead == 'i')
        ADVANCE(131);
      if (lookahead == 'r')
        ADVANCE(133);
      if (lookahead == 't')
        ADVANCE(134);
      if (lookahead == '|')
        ADVANCE(144);
      END_STATE();
    case 197:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(197);
      if (lookahead == '!')
        ADVANCE(148);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead == ']')
        ADVANCE(54);
      if (lookahead == '|')
        ADVANCE(144);
      END_STATE();
    case 198:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(198);
      if (lookahead == '!')
        ADVANCE(148);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead == ']')
        ADVANCE(54);
      if (lookahead == 'e')
        ADVANCE(165);
      if (lookahead == '|')
        ADVANCE(144);
      END_STATE();
    case 199:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(199);
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
          ('j' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == ']')
        ADVANCE(54);
      if (lookahead == 'f')
        ADVANCE(139);
      if (lookahead == 'i')
        ADVANCE(131);
      if (lookahead == 'r')
        ADVANCE(133);
      if (lookahead == 't')
        ADVANCE(134);
      if (lookahead == '|')
        ADVANCE(144);
      END_STATE();
    case 200:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(200);
      if (lookahead == '!')
        ADVANCE(148);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(46);
      if (lookahead == ']')
        ADVANCE(54);
      if (lookahead == '|')
        ADVANCE(144);
      END_STATE();
    case 201:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(201);
      if (lookahead == '!')
        ADVANCE(148);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(46);
      if (lookahead == ']')
        ADVANCE(54);
      if (lookahead == 'e')
        ADVANCE(165);
      if (lookahead == '|')
        ADVANCE(144);
      END_STATE();
    case 202:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(202);
      if (lookahead == '!')
        ADVANCE(148);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead == ']')
        ADVANCE(54);
      if (lookahead == 'e')
        ADVANCE(165);
      if (lookahead == '|')
        ADVANCE(144);
      END_STATE();
    case 203:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(203);
      if (lookahead == '!')
        ADVANCE(148);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead == 'e')
        ADVANCE(165);
      if (lookahead == '|')
        ADVANCE(144);
      END_STATE();
    case 204:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(204);
      if (lookahead == '!')
        ADVANCE(148);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(46);
      if (lookahead == 'e')
        ADVANCE(165);
      if (lookahead == '|')
        ADVANCE(125);
      END_STATE();
    case 205:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(205);
      if (lookahead == '!')
        ADVANCE(148);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead == '|')
        ADVANCE(125);
      END_STATE();
    case 206:
      if (lookahead == 0)
        ADVANCE(1);
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(206);
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
          ('m' <= lookahead && lookahead <= 'q') ||
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
        ADVANCE(129);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == 'f')
        ADVANCE(130);
      if (lookahead == 'i')
        ADVANCE(131);
      if (lookahead == 'l')
        ADVANCE(132);
      if (lookahead == 'r')
        ADVANCE(133);
      if (lookahead == 't')
        ADVANCE(134);
      if (lookahead == '}')
        ADVANCE(127);
      END_STATE();
    case 207:
      if ((lookahead == '\t') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(207);
      if (lookahead == '\n')
        ADVANCE(136);
      if (lookahead == '!')
        ADVANCE(148);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(46);
      if (lookahead == '|')
        ADVANCE(144);
      if (lookahead == '}')
        ADVANCE(127);
      END_STATE();
    case 208:
      if ((lookahead == '\t') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(208);
      if (lookahead == '\n')
        ADVANCE(136);
      if (lookahead == '!')
        ADVANCE(148);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(46);
      if (lookahead == 'e')
        ADVANCE(165);
      if (lookahead == '|')
        ADVANCE(144);
      if (lookahead == '}')
        ADVANCE(127);
      END_STATE();
    case 209:
      if (lookahead == 0)
        ADVANCE(1);
      if ((lookahead == '\t') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(209);
      if (lookahead == '\n')
        ADVANCE(136);
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
          ('m' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == ']')
        ADVANCE(54);
      if (lookahead == 'f')
        ADVANCE(130);
      if (lookahead == 'i')
        ADVANCE(131);
      if (lookahead == 'l')
        ADVANCE(132);
      if (lookahead == 'r')
        ADVANCE(133);
      if (lookahead == 't')
        ADVANCE(134);
      if (lookahead == '{')
        ADVANCE(124);
      if (lookahead == '|')
        ADVANCE(125);
      if (lookahead == '}')
        ADVANCE(127);
      END_STATE();
    case 210:
      if (lookahead == 0)
        ADVANCE(1);
      if ((lookahead == '\t') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(210);
      if (lookahead == '\n')
        ADVANCE(136);
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
          ('m' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == ']')
        ADVANCE(54);
      if (lookahead == 'e')
        ADVANCE(211);
      if (lookahead == 'f')
        ADVANCE(130);
      if (lookahead == 'i')
        ADVANCE(131);
      if (lookahead == 'l')
        ADVANCE(132);
      if (lookahead == 'r')
        ADVANCE(133);
      if (lookahead == 't')
        ADVANCE(134);
      if (lookahead == '{')
        ADVANCE(124);
      if (lookahead == '|')
        ADVANCE(125);
      if (lookahead == '}')
        ADVANCE(127);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'l')
        ADVANCE(57);
      END_STATE();
    case 212:
      if ((lookahead == '\t') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(212);
      if (lookahead == '\n')
        ADVANCE(136);
      if (lookahead == '/')
        ADVANCE(129);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == 'e')
        ADVANCE(165);
      if (lookahead == '}')
        ADVANCE(127);
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
          ('j' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == 'f')
        ADVANCE(139);
      if (lookahead == 'i')
        ADVANCE(131);
      if (lookahead == 'r')
        ADVANCE(133);
      if (lookahead == 't')
        ADVANCE(134);
      if (lookahead == '|')
        ADVANCE(125);
      END_STATE();
    case 214:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(214);
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
        ADVANCE(129);
      if (lookahead == 'f')
        ADVANCE(215);
      if (lookahead == 'i')
        ADVANCE(216);
      if (lookahead == 't')
        ADVANCE(134);
      if (lookahead == 'u')
        ADVANCE(217);
      END_STATE();
    case 215:
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
        ADVANCE(61);
      if (lookahead == '6')
        ADVANCE(63);
      if (lookahead == 'a')
        ADVANCE(65);
      END_STATE();
    case 216:
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
        ADVANCE(71);
      if (lookahead == '3')
        ADVANCE(73);
      if (lookahead == '6')
        ADVANCE(75);
      if (lookahead == '8')
        ADVANCE(77);
      if (lookahead == 's')
        ADVANCE(79);
      END_STATE();
    case 217:
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
        ADVANCE(113);
      if (lookahead == '3')
        ADVANCE(115);
      if (lookahead == '6')
        ADVANCE(117);
      if (lookahead == '8')
        ADVANCE(119);
      if (lookahead == 's')
        ADVANCE(120);
      END_STATE();
    case 218:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(218);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '/')
        ADVANCE(129);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '=')
        ADVANCE(180);
      if (lookahead == '{')
        ADVANCE(124);
      END_STATE();
    case 219:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(219);
      if (lookahead == '/')
        ADVANCE(129);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '=')
        ADVANCE(180);
      END_STATE();
    case 220:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(220);
      if (lookahead == '!')
        ADVANCE(148);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead == 'e')
        ADVANCE(165);
      if (lookahead == '|')
        ADVANCE(125);
      END_STATE();
    case 221:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(221);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(129);
      END_STATE();
    case 222:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(222);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(129);
      END_STATE();
    case 223:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(223);
      if (lookahead == '-')
        ADVANCE(224);
      if (lookahead == '/')
        ADVANCE(129);
      if (lookahead == '{')
        ADVANCE(124);
      END_STATE();
    case 224:
      if (lookahead == '>')
        ADVANCE(18);
      END_STATE();
    case 225:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(225);
      if (lookahead == '/')
        ADVANCE(129);
      if (lookahead == '{')
        ADVANCE(124);
      END_STATE();
    case 226:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(226);
      if (lookahead == '/')
        ADVANCE(129);
      if (lookahead == ':')
        ADVANCE(41);
      END_STATE();
    case 227:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(227);
      if (lookahead == '!')
        ADVANCE(148);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(46);
      if (lookahead == 'e')
        ADVANCE(165);
      if (lookahead == '{')
        ADVANCE(124);
      if (lookahead == '|')
        ADVANCE(144);
      END_STATE();
    case 228:
      if (lookahead == 0)
        ADVANCE(1);
      if ((lookahead == '\t') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(228);
      if (lookahead == '\n')
        ADVANCE(136);
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
          ('m' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == 'e')
        ADVANCE(211);
      if (lookahead == 'f')
        ADVANCE(130);
      if (lookahead == 'i')
        ADVANCE(131);
      if (lookahead == 'l')
        ADVANCE(132);
      if (lookahead == 'r')
        ADVANCE(133);
      if (lookahead == 't')
        ADVANCE(134);
      if (lookahead == '|')
        ADVANCE(144);
      END_STATE();
    case 229:
      if (lookahead == 0)
        ADVANCE(1);
      if ((lookahead == '\t') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(229);
      if (lookahead == '\n')
        ADVANCE(136);
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
          ('m' <= lookahead && lookahead <= 'q') ||
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
        ADVANCE(129);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == 'e')
        ADVANCE(211);
      if (lookahead == 'f')
        ADVANCE(130);
      if (lookahead == 'i')
        ADVANCE(131);
      if (lookahead == 'l')
        ADVANCE(132);
      if (lookahead == 'r')
        ADVANCE(133);
      if (lookahead == 't')
        ADVANCE(134);
      END_STATE();
    case 230:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(230);
      if (lookahead == '!')
        ADVANCE(148);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(231);
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
        ADVANCE(46);
      if (lookahead == ']')
        ADVANCE(54);
      if (lookahead == '{')
        ADVANCE(124);
      if (lookahead == '|')
        ADVANCE(125);
      if (lookahead == '}')
        ADVANCE(127);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH);
      if (lookahead == '>')
        ADVANCE(18);
      END_STATE();
    case 232:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(232);
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
          ('j' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == ']')
        ADVANCE(54);
      if (lookahead == 'f')
        ADVANCE(139);
      if (lookahead == 'i')
        ADVANCE(131);
      if (lookahead == 'r')
        ADVANCE(133);
      if (lookahead == 't')
        ADVANCE(134);
      if (lookahead == '{')
        ADVANCE(124);
      if (lookahead == '|')
        ADVANCE(125);
      if (lookahead == '}')
        ADVANCE(127);
      END_STATE();
    case 233:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        ADVANCE(2);
      if (lookahead == '!')
        ADVANCE(234);
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
        ADVANCE(46);
      if (lookahead == '\\')
        ADVANCE(151);
      if (lookahead == ']')
        ADVANCE(54);
      if (lookahead == '{')
        ADVANCE(124);
      if (lookahead == '|')
        ADVANCE(125);
      if (lookahead == '}')
        ADVANCE(127);
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
          ('{' <= lookahead && lookahead <= '}')))
        ADVANCE(2);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '=')
        ADVANCE(4);
      END_STATE();
    case 235:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        ADVANCE(153);
      if (lookahead == '!')
        ADVANCE(236);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(237);
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
        ADVANCE(46);
      if (lookahead == '\\')
        ADVANCE(155);
      if (lookahead == ']')
        ADVANCE(54);
      if (lookahead == '{')
        ADVANCE(124);
      if (lookahead == '|')
        ADVANCE(125);
      if (lookahead == '}')
        ADVANCE(127);
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
          ('{' <= lookahead && lookahead <= '}')))
        ADVANCE(153);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_RBRACK_SLASH);
      if (lookahead == '=')
        ADVANCE(4);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_RBRACK_SLASH);
      if (lookahead == '&')
        ADVANCE(10);
      END_STATE();
    case 238:
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
        ADVANCE(150);
      if (lookahead == '\\')
        ADVANCE(151);
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
    case 239:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(239);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '/')
        ADVANCE(129);
      if (lookahead == ']')
        ADVANCE(54);
      END_STATE();
    case 240:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(240);
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
          ('j' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == ']')
        ADVANCE(54);
      if (lookahead == 'f')
        ADVANCE(139);
      if (lookahead == 'i')
        ADVANCE(131);
      if (lookahead == 'r')
        ADVANCE(133);
      if (lookahead == 't')
        ADVANCE(134);
      if (lookahead == '|')
        ADVANCE(144);
      END_STATE();
    case 241:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(241);
      if (lookahead == '!')
        ADVANCE(148);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead == ']')
        ADVANCE(54);
      if (lookahead == '|')
        ADVANCE(144);
      END_STATE();
    case 242:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(242);
      if (lookahead == '!')
        ADVANCE(148);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead == ']')
        ADVANCE(54);
      if (lookahead == 'e')
        ADVANCE(165);
      if (lookahead == '|')
        ADVANCE(144);
      END_STATE();
    case 243:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(243);
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
          ('j' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == 'f')
        ADVANCE(139);
      if (lookahead == 'i')
        ADVANCE(131);
      if (lookahead == 'r')
        ADVANCE(133);
      if (lookahead == 't')
        ADVANCE(134);
      if (lookahead == '{')
        ADVANCE(124);
      if (lookahead == '|')
        ADVANCE(144);
      END_STATE();
    case 244:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(244);
      if (lookahead == '!')
        ADVANCE(148);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(46);
      if (lookahead == '{')
        ADVANCE(124);
      if (lookahead == '|')
        ADVANCE(144);
      END_STATE();
    case 245:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(245);
      if (lookahead == '!')
        ADVANCE(148);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(46);
      if (lookahead == 'e')
        ADVANCE(165);
      if (lookahead == '{')
        ADVANCE(124);
      if (lookahead == '|')
        ADVANCE(144);
      END_STATE();
    case 246:
      if (lookahead == 0)
        ADVANCE(1);
      if ((lookahead == '\t') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(246);
      if (lookahead == '\n')
        ADVANCE(136);
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
          ('m' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == ']')
        ADVANCE(54);
      if (lookahead == 'f')
        ADVANCE(130);
      if (lookahead == 'i')
        ADVANCE(131);
      if (lookahead == 'l')
        ADVANCE(132);
      if (lookahead == 'r')
        ADVANCE(133);
      if (lookahead == 't')
        ADVANCE(134);
      if (lookahead == '|')
        ADVANCE(144);
      if (lookahead == '}')
        ADVANCE(127);
      END_STATE();
    case 247:
      if (lookahead == 0)
        ADVANCE(1);
      if ((lookahead == '\t') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(247);
      if (lookahead == '\n')
        ADVANCE(136);
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
          ('m' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == 'e')
        ADVANCE(211);
      if (lookahead == 'f')
        ADVANCE(130);
      if (lookahead == 'i')
        ADVANCE(131);
      if (lookahead == 'l')
        ADVANCE(132);
      if (lookahead == 'r')
        ADVANCE(133);
      if (lookahead == 't')
        ADVANCE(134);
      if (lookahead == '|')
        ADVANCE(144);
      if (lookahead == '}')
        ADVANCE(127);
      END_STATE();
    case 248:
      if (lookahead == 0)
        ADVANCE(1);
      if ((lookahead == '\t') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(248);
      if (lookahead == '\n')
        ADVANCE(136);
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
          ('m' <= lookahead && lookahead <= 'q') ||
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
        ADVANCE(129);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == 'e')
        ADVANCE(211);
      if (lookahead == 'f')
        ADVANCE(130);
      if (lookahead == 'i')
        ADVANCE(131);
      if (lookahead == 'l')
        ADVANCE(132);
      if (lookahead == 'r')
        ADVANCE(133);
      if (lookahead == 't')
        ADVANCE(134);
      if (lookahead == '}')
        ADVANCE(127);
      END_STATE();
    case 249:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(249);
      if (lookahead == '!')
        ADVANCE(148);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead == ']')
        ADVANCE(54);
      if (lookahead == '|')
        ADVANCE(144);
      END_STATE();
    case 250:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(250);
      if (lookahead == '!')
        ADVANCE(148);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead == '|')
        ADVANCE(144);
      END_STATE();
    case 251:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(251);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '/')
        ADVANCE(129);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '=')
        ADVANCE(180);
      END_STATE();
    case 252:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(252);
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
          ('j' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == ']')
        ADVANCE(54);
      if (lookahead == 'f')
        ADVANCE(139);
      if (lookahead == 'i')
        ADVANCE(131);
      if (lookahead == 'r')
        ADVANCE(133);
      if (lookahead == 't')
        ADVANCE(134);
      if (lookahead == '|')
        ADVANCE(144);
      END_STATE();
    case 253:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(253);
      if (lookahead == '!')
        ADVANCE(148);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(46);
      if (lookahead == ']')
        ADVANCE(54);
      if (lookahead == '|')
        ADVANCE(144);
      END_STATE();
    case 254:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(254);
      if (lookahead == '!')
        ADVANCE(148);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(46);
      if (lookahead == ']')
        ADVANCE(54);
      if (lookahead == 'e')
        ADVANCE(165);
      if (lookahead == '|')
        ADVANCE(144);
      END_STATE();
    case 255:
      if (lookahead == 0)
        ADVANCE(1);
      if ((lookahead == '\t') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(255);
      if (lookahead == '\n')
        ADVANCE(136);
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
          ('m' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(143);
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
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == ']')
        ADVANCE(54);
      if (lookahead == 'e')
        ADVANCE(211);
      if (lookahead == 'f')
        ADVANCE(130);
      if (lookahead == 'i')
        ADVANCE(131);
      if (lookahead == 'l')
        ADVANCE(132);
      if (lookahead == 'r')
        ADVANCE(133);
      if (lookahead == 't')
        ADVANCE(134);
      if (lookahead == '|')
        ADVANCE(144);
      if (lookahead == '}')
        ADVANCE(127);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 128},
  [2] = {.lex_state = 135},
  [3] = {.lex_state = 137},
  [4] = {.lex_state = 138},
  [5] = {.lex_state = 141},
  [6] = {.lex_state = 141},
  [7] = {.lex_state = 142},
  [8] = {.lex_state = 145},
  [9] = {.lex_state = 146},
  [10] = {.lex_state = 147},
  [11] = {.lex_state = 149},
  [12] = {.lex_state = 152},
  [13] = {.lex_state = 147},
  [14] = {.lex_state = 156},
  [15] = {.lex_state = 128},
  [16] = {.lex_state = 157},
  [17] = {.lex_state = 135},
  [18] = {.lex_state = 135},
  [19] = {.lex_state = 135},
  [20] = {.lex_state = 158},
  [21] = {.lex_state = 147},
  [22] = {.lex_state = 159},
  [23] = {.lex_state = 135},
  [24] = {.lex_state = 128},
  [25] = {.lex_state = 128},
  [26] = {.lex_state = 135},
  [27] = {.lex_state = 141},
  [28] = {.lex_state = 160},
  [29] = {.lex_state = 141},
  [30] = {.lex_state = 141},
  [31] = {.lex_state = 141},
  [32] = {.lex_state = 141},
  [33] = {.lex_state = 141},
  [34] = {.lex_state = 141},
  [35] = {.lex_state = 147},
  [36] = {.lex_state = 141},
  [37] = {.lex_state = 158},
  [38] = {.lex_state = 141},
  [39] = {.lex_state = 161},
  [40] = {.lex_state = 141},
  [41] = {.lex_state = 162},
  [42] = {.lex_state = 141},
  [43] = {.lex_state = 141},
  [44] = {.lex_state = 141},
  [45] = {.lex_state = 141},
  [46] = {.lex_state = 141},
  [47] = {.lex_state = 141},
  [48] = {.lex_state = 141},
  [49] = {.lex_state = 163},
  [50] = {.lex_state = 164},
  [51] = {.lex_state = 169},
  [52] = {.lex_state = 147},
  [53] = {.lex_state = 146},
  [54] = {.lex_state = 147},
  [55] = {.lex_state = 141},
  [56] = {.lex_state = 172},
  [57] = {.lex_state = 146},
  [58] = {.lex_state = 173},
  [59] = {.lex_state = 174},
  [60] = {.lex_state = 175},
  [61] = {.lex_state = 176},
  [62] = {.lex_state = 141},
  [63] = {.lex_state = 141},
  [64] = {.lex_state = 141},
  [65] = {.lex_state = 141},
  [66] = {.lex_state = 141},
  [67] = {.lex_state = 141},
  [68] = {.lex_state = 141},
  [69] = {.lex_state = 173},
  [70] = {.lex_state = 141},
  [71] = {.lex_state = 176},
  [72] = {.lex_state = 162},
  [73] = {.lex_state = 177},
  [74] = {.lex_state = 169},
  [75] = {.lex_state = 146},
  [76] = {.lex_state = 178},
  [77] = {.lex_state = 160},
  [78] = {.lex_state = 179},
  [79] = {.lex_state = 141},
  [80] = {.lex_state = 182},
  [81] = {.lex_state = 141},
  [82] = {.lex_state = 183},
  [83] = {.lex_state = 184},
  [84] = {.lex_state = 141},
  [85] = {.lex_state = 185},
  [86] = {.lex_state = 141},
  [87] = {.lex_state = 141},
  [88] = {.lex_state = 141},
  [89] = {.lex_state = 141},
  [90] = {.lex_state = 141},
  [91] = {.lex_state = 141},
  [92] = {.lex_state = 184},
  [93] = {.lex_state = 141},
  [94] = {.lex_state = 186},
  [95] = {.lex_state = 141},
  [96] = {.lex_state = 187},
  [97] = {.lex_state = 141},
  [98] = {.lex_state = 147},
  [99] = {.lex_state = 141},
  [100] = {.lex_state = 141},
  [101] = {.lex_state = 141},
  [102] = {.lex_state = 141},
  [103] = {.lex_state = 141},
  [104] = {.lex_state = 141},
  [105] = {.lex_state = 187},
  [106] = {.lex_state = 187},
  [107] = {.lex_state = 187},
  [108] = {.lex_state = 187},
  [109] = {.lex_state = 187},
  [110] = {.lex_state = 147},
  [111] = {.lex_state = 147},
  [112] = {.lex_state = 141},
  [113] = {.lex_state = 188},
  [114] = {.lex_state = 141},
  [115] = {.lex_state = 189},
  [116] = {.lex_state = 141},
  [117] = {.lex_state = 141},
  [118] = {.lex_state = 147},
  [119] = {.lex_state = 141},
  [120] = {.lex_state = 141},
  [121] = {.lex_state = 141},
  [122] = {.lex_state = 141},
  [123] = {.lex_state = 141},
  [124] = {.lex_state = 141},
  [125] = {.lex_state = 190},
  [126] = {.lex_state = 141},
  [127] = {.lex_state = 147},
  [128] = {.lex_state = 189},
  [129] = {.lex_state = 189},
  [130] = {.lex_state = 189},
  [131] = {.lex_state = 189},
  [132] = {.lex_state = 189},
  [133] = {.lex_state = 189},
  [134] = {.lex_state = 189},
  [135] = {.lex_state = 189},
  [136] = {.lex_state = 147},
  [137] = {.lex_state = 191},
  [138] = {.lex_state = 147},
  [139] = {.lex_state = 147},
  [140] = {.lex_state = 149},
  [141] = {.lex_state = 149},
  [142] = {.lex_state = 147},
  [143] = {.lex_state = 149},
  [144] = {.lex_state = 162},
  [145] = {.lex_state = 192},
  [146] = {.lex_state = 169},
  [147] = {.lex_state = 146},
  [148] = {.lex_state = 178},
  [149] = {.lex_state = 183},
  [150] = {.lex_state = 141},
  [151] = {.lex_state = 162},
  [152] = {.lex_state = 192},
  [153] = {.lex_state = 147},
  [154] = {.lex_state = 141},
  [155] = {.lex_state = 193},
  [156] = {.lex_state = 147},
  [157] = {.lex_state = 141},
  [158] = {.lex_state = 194},
  [159] = {.lex_state = 141},
  [160] = {.lex_state = 141},
  [161] = {.lex_state = 141},
  [162] = {.lex_state = 141},
  [163] = {.lex_state = 141},
  [164] = {.lex_state = 141},
  [165] = {.lex_state = 141},
  [166] = {.lex_state = 141},
  [167] = {.lex_state = 141},
  [168] = {.lex_state = 147},
  [169] = {.lex_state = 195},
  [170] = {.lex_state = 141},
  [171] = {.lex_state = 147},
  [172] = {.lex_state = 141},
  [173] = {.lex_state = 196},
  [174] = {.lex_state = 141},
  [175] = {.lex_state = 197},
  [176] = {.lex_state = 141},
  [177] = {.lex_state = 141},
  [178] = {.lex_state = 141},
  [179] = {.lex_state = 141},
  [180] = {.lex_state = 141},
  [181] = {.lex_state = 141},
  [182] = {.lex_state = 141},
  [183] = {.lex_state = 197},
  [184] = {.lex_state = 197},
  [185] = {.lex_state = 197},
  [186] = {.lex_state = 197},
  [187] = {.lex_state = 197},
  [188] = {.lex_state = 197},
  [189] = {.lex_state = 162},
  [190] = {.lex_state = 198},
  [191] = {.lex_state = 169},
  [192] = {.lex_state = 146},
  [193] = {.lex_state = 178},
  [194] = {.lex_state = 183},
  [195] = {.lex_state = 141},
  [196] = {.lex_state = 162},
  [197] = {.lex_state = 198},
  [198] = {.lex_state = 141},
  [199] = {.lex_state = 199},
  [200] = {.lex_state = 141},
  [201] = {.lex_state = 200},
  [202] = {.lex_state = 141},
  [203] = {.lex_state = 141},
  [204] = {.lex_state = 141},
  [205] = {.lex_state = 141},
  [206] = {.lex_state = 141},
  [207] = {.lex_state = 141},
  [208] = {.lex_state = 141},
  [209] = {.lex_state = 147},
  [210] = {.lex_state = 200},
  [211] = {.lex_state = 200},
  [212] = {.lex_state = 200},
  [213] = {.lex_state = 200},
  [214] = {.lex_state = 200},
  [215] = {.lex_state = 200},
  [216] = {.lex_state = 162},
  [217] = {.lex_state = 201},
  [218] = {.lex_state = 169},
  [219] = {.lex_state = 146},
  [220] = {.lex_state = 178},
  [221] = {.lex_state = 183},
  [222] = {.lex_state = 141},
  [223] = {.lex_state = 162},
  [224] = {.lex_state = 201},
  [225] = {.lex_state = 200},
  [226] = {.lex_state = 147},
  [227] = {.lex_state = 197},
  [228] = {.lex_state = 194},
  [229] = {.lex_state = 194},
  [230] = {.lex_state = 194},
  [231] = {.lex_state = 194},
  [232] = {.lex_state = 194},
  [233] = {.lex_state = 197},
  [234] = {.lex_state = 194},
  [235] = {.lex_state = 162},
  [236] = {.lex_state = 202},
  [237] = {.lex_state = 169},
  [238] = {.lex_state = 146},
  [239] = {.lex_state = 178},
  [240] = {.lex_state = 183},
  [241] = {.lex_state = 141},
  [242] = {.lex_state = 162},
  [243] = {.lex_state = 202},
  [244] = {.lex_state = 194},
  [245] = {.lex_state = 189},
  [246] = {.lex_state = 187},
  [247] = {.lex_state = 162},
  [248] = {.lex_state = 203},
  [249] = {.lex_state = 169},
  [250] = {.lex_state = 146},
  [251] = {.lex_state = 178},
  [252] = {.lex_state = 183},
  [253] = {.lex_state = 141},
  [254] = {.lex_state = 162},
  [255] = {.lex_state = 203},
  [256] = {.lex_state = 187},
  [257] = {.lex_state = 184},
  [258] = {.lex_state = 184},
  [259] = {.lex_state = 184},
  [260] = {.lex_state = 184},
  [261] = {.lex_state = 184},
  [262] = {.lex_state = 141},
  [263] = {.lex_state = 162},
  [264] = {.lex_state = 177},
  [265] = {.lex_state = 162},
  [266] = {.lex_state = 204},
  [267] = {.lex_state = 169},
  [268] = {.lex_state = 146},
  [269] = {.lex_state = 178},
  [270] = {.lex_state = 183},
  [271] = {.lex_state = 141},
  [272] = {.lex_state = 162},
  [273] = {.lex_state = 204},
  [274] = {.lex_state = 184},
  [275] = {.lex_state = 179},
  [276] = {.lex_state = 189},
  [277] = {.lex_state = 205},
  [278] = {.lex_state = 190},
  [279] = {.lex_state = 179},
  [280] = {.lex_state = 185},
  [281] = {.lex_state = 185},
  [282] = {.lex_state = 185},
  [283] = {.lex_state = 176},
  [284] = {.lex_state = 176},
  [285] = {.lex_state = 176},
  [286] = {.lex_state = 176},
  [287] = {.lex_state = 176},
  [288] = {.lex_state = 163},
  [289] = {.lex_state = 206},
  [290] = {.lex_state = 207},
  [291] = {.lex_state = 178},
  [292] = {.lex_state = 162},
  [293] = {.lex_state = 163},
  [294] = {.lex_state = 208},
  [295] = {.lex_state = 169},
  [296] = {.lex_state = 209},
  [297] = {.lex_state = 146},
  [298] = {.lex_state = 209},
  [299] = {.lex_state = 210},
  [300] = {.lex_state = 174},
  [301] = {.lex_state = 176},
  [302] = {.lex_state = 210},
  [303] = {.lex_state = 178},
  [304] = {.lex_state = 183},
  [305] = {.lex_state = 141},
  [306] = {.lex_state = 162},
  [307] = {.lex_state = 208},
  [308] = {.lex_state = 209},
  [309] = {.lex_state = 183},
  [310] = {.lex_state = 141},
  [311] = {.lex_state = 162},
  [312] = {.lex_state = 212},
  [313] = {.lex_state = 169},
  [314] = {.lex_state = 146},
  [315] = {.lex_state = 162},
  [316] = {.lex_state = 212},
  [317] = {.lex_state = 176},
  [318] = {.lex_state = 178},
  [319] = {.lex_state = 141},
  [320] = {.lex_state = 213},
  [321] = {.lex_state = 141},
  [322] = {.lex_state = 185},
  [323] = {.lex_state = 205},
  [324] = {.lex_state = 141},
  [325] = {.lex_state = 141},
  [326] = {.lex_state = 141},
  [327] = {.lex_state = 141},
  [328] = {.lex_state = 141},
  [329] = {.lex_state = 141},
  [330] = {.lex_state = 141},
  [331] = {.lex_state = 205},
  [332] = {.lex_state = 205},
  [333] = {.lex_state = 205},
  [334] = {.lex_state = 205},
  [335] = {.lex_state = 205},
  [336] = {.lex_state = 205},
  [337] = {.lex_state = 135},
  [338] = {.lex_state = 214},
  [339] = {.lex_state = 141},
  [340] = {.lex_state = 158},
  [341] = {.lex_state = 135},
  [342] = {.lex_state = 218},
  [343] = {.lex_state = 219},
  [344] = {.lex_state = 141},
  [345] = {.lex_state = 158},
  [346] = {.lex_state = 135},
  [347] = {.lex_state = 162},
  [348] = {.lex_state = 220},
  [349] = {.lex_state = 169},
  [350] = {.lex_state = 146},
  [351] = {.lex_state = 178},
  [352] = {.lex_state = 183},
  [353] = {.lex_state = 141},
  [354] = {.lex_state = 162},
  [355] = {.lex_state = 220},
  [356] = {.lex_state = 205},
  [357] = {.lex_state = 185},
  [358] = {.lex_state = 135},
  [359] = {.lex_state = 214},
  [360] = {.lex_state = 141},
  [361] = {.lex_state = 158},
  [362] = {.lex_state = 135},
  [363] = {.lex_state = 219},
  [364] = {.lex_state = 141},
  [365] = {.lex_state = 158},
  [366] = {.lex_state = 135},
  [367] = {.lex_state = 221},
  [368] = {.lex_state = 222},
  [369] = {.lex_state = 223},
  [370] = {.lex_state = 214},
  [371] = {.lex_state = 135},
  [372] = {.lex_state = 225},
  [373] = {.lex_state = 135},
  [374] = {.lex_state = 223},
  [375] = {.lex_state = 226},
  [376] = {.lex_state = 214},
  [377] = {.lex_state = 190},
  [378] = {.lex_state = 137},
  [379] = {.lex_state = 223},
  [380] = {.lex_state = 190},
  [381] = {.lex_state = 137},
  [382] = {.lex_state = 223},
  [383] = {.lex_state = 226},
  [384] = {.lex_state = 214},
  [385] = {.lex_state = 190},
  [386] = {.lex_state = 226},
  [387] = {.lex_state = 214},
  [388] = {.lex_state = 190},
  [389] = {.lex_state = 178},
  [390] = {.lex_state = 183},
  [391] = {.lex_state = 141},
  [392] = {.lex_state = 162},
  [393] = {.lex_state = 164},
  [394] = {.lex_state = 162},
  [395] = {.lex_state = 162},
  [396] = {.lex_state = 162},
  [397] = {.lex_state = 162},
  [398] = {.lex_state = 162},
  [399] = {.lex_state = 162},
  [400] = {.lex_state = 162},
  [401] = {.lex_state = 227},
  [402] = {.lex_state = 169},
  [403] = {.lex_state = 146},
  [404] = {.lex_state = 178},
  [405] = {.lex_state = 183},
  [406] = {.lex_state = 141},
  [407] = {.lex_state = 162},
  [408] = {.lex_state = 227},
  [409] = {.lex_state = 162},
  [410] = {.lex_state = 158},
  [411] = {.lex_state = 158},
  [412] = {.lex_state = 158},
  [413] = {.lex_state = 158},
  [414] = {.lex_state = 158},
  [415] = {.lex_state = 128},
  [416] = {.lex_state = 178},
  [417] = {.lex_state = 162},
  [418] = {.lex_state = 228},
  [419] = {.lex_state = 169},
  [420] = {.lex_state = 146},
  [421] = {.lex_state = 178},
  [422] = {.lex_state = 183},
  [423] = {.lex_state = 141},
  [424] = {.lex_state = 162},
  [425] = {.lex_state = 228},
  [426] = {.lex_state = 183},
  [427] = {.lex_state = 141},
  [428] = {.lex_state = 162},
  [429] = {.lex_state = 229},
  [430] = {.lex_state = 169},
  [431] = {.lex_state = 146},
  [432] = {.lex_state = 162},
  [433] = {.lex_state = 229},
  [434] = {.lex_state = 158},
  [435] = {.lex_state = 135},
  [436] = {.lex_state = 138},
  [437] = {.lex_state = 214},
  [438] = {.lex_state = 141},
  [439] = {.lex_state = 160},
  [440] = {.lex_state = 141},
  [441] = {.lex_state = 230},
  [442] = {.lex_state = 185},
  [443] = {.lex_state = 141},
  [444] = {.lex_state = 141},
  [445] = {.lex_state = 232},
  [446] = {.lex_state = 147},
  [447] = {.lex_state = 146},
  [448] = {.lex_state = 169},
  [449] = {.lex_state = 233},
  [450] = {.lex_state = 149},
  [451] = {.lex_state = 235},
  [452] = {.lex_state = 238},
  [453] = {.lex_state = 147},
  [454] = {.lex_state = 147},
  [455] = {.lex_state = 210},
  [456] = {.lex_state = 206},
  [457] = {.lex_state = 135},
  [458] = {.lex_state = 185},
  [459] = {.lex_state = 218},
  [460] = {.lex_state = 147},
  [461] = {.lex_state = 209},
  [462] = {.lex_state = 209},
  [463] = {.lex_state = 209},
  [464] = {.lex_state = 210},
  [465] = {.lex_state = 239},
  [466] = {.lex_state = 141},
  [467] = {.lex_state = 147},
  [468] = {.lex_state = 141},
  [469] = {.lex_state = 240},
  [470] = {.lex_state = 141},
  [471] = {.lex_state = 241},
  [472] = {.lex_state = 141},
  [473] = {.lex_state = 141},
  [474] = {.lex_state = 241},
  [475] = {.lex_state = 241},
  [476] = {.lex_state = 162},
  [477] = {.lex_state = 242},
  [478] = {.lex_state = 169},
  [479] = {.lex_state = 146},
  [480] = {.lex_state = 178},
  [481] = {.lex_state = 183},
  [482] = {.lex_state = 141},
  [483] = {.lex_state = 162},
  [484] = {.lex_state = 242},
  [485] = {.lex_state = 241},
  [486] = {.lex_state = 241},
  [487] = {.lex_state = 135},
  [488] = {.lex_state = 141},
  [489] = {.lex_state = 141},
  [490] = {.lex_state = 147},
  [491] = {.lex_state = 147},
  [492] = {.lex_state = 210},
  [493] = {.lex_state = 241},
  [494] = {.lex_state = 141},
  [495] = {.lex_state = 147},
  [496] = {.lex_state = 162},
  [497] = {.lex_state = 173},
  [498] = {.lex_state = 169},
  [499] = {.lex_state = 146},
  [500] = {.lex_state = 178},
  [501] = {.lex_state = 183},
  [502] = {.lex_state = 141},
  [503] = {.lex_state = 162},
  [504] = {.lex_state = 173},
  [505] = {.lex_state = 135},
  [506] = {.lex_state = 141},
  [507] = {.lex_state = 158},
  [508] = {.lex_state = 135},
  [509] = {.lex_state = 135},
  [510] = {.lex_state = 214},
  [511] = {.lex_state = 141},
  [512] = {.lex_state = 141},
  [513] = {.lex_state = 243},
  [514] = {.lex_state = 141},
  [515] = {.lex_state = 244},
  [516] = {.lex_state = 141},
  [517] = {.lex_state = 141},
  [518] = {.lex_state = 210},
  [519] = {.lex_state = 244},
  [520] = {.lex_state = 244},
  [521] = {.lex_state = 162},
  [522] = {.lex_state = 245},
  [523] = {.lex_state = 169},
  [524] = {.lex_state = 146},
  [525] = {.lex_state = 178},
  [526] = {.lex_state = 183},
  [527] = {.lex_state = 141},
  [528] = {.lex_state = 162},
  [529] = {.lex_state = 245},
  [530] = {.lex_state = 244},
  [531] = {.lex_state = 244},
  [532] = {.lex_state = 219},
  [533] = {.lex_state = 206},
  [534] = {.lex_state = 146},
  [535] = {.lex_state = 246},
  [536] = {.lex_state = 178},
  [537] = {.lex_state = 162},
  [538] = {.lex_state = 247},
  [539] = {.lex_state = 169},
  [540] = {.lex_state = 146},
  [541] = {.lex_state = 178},
  [542] = {.lex_state = 183},
  [543] = {.lex_state = 141},
  [544] = {.lex_state = 162},
  [545] = {.lex_state = 247},
  [546] = {.lex_state = 183},
  [547] = {.lex_state = 141},
  [548] = {.lex_state = 162},
  [549] = {.lex_state = 248},
  [550] = {.lex_state = 169},
  [551] = {.lex_state = 146},
  [552] = {.lex_state = 162},
  [553] = {.lex_state = 248},
  [554] = {.lex_state = 214},
  [555] = {.lex_state = 190},
  [556] = {.lex_state = 178},
  [557] = {.lex_state = 162},
  [558] = {.lex_state = 210},
  [559] = {.lex_state = 183},
  [560] = {.lex_state = 141},
  [561] = {.lex_state = 162},
  [562] = {.lex_state = 147},
  [563] = {.lex_state = 147},
  [564] = {.lex_state = 147},
  [565] = {.lex_state = 185},
  [566] = {.lex_state = 249},
  [567] = {.lex_state = 241},
  [568] = {.lex_state = 214},
  [569] = {.lex_state = 190},
  [570] = {.lex_state = 230},
  [571] = {.lex_state = 250},
  [572] = {.lex_state = 189},
  [573] = {.lex_state = 190},
  [574] = {.lex_state = 147},
  [575] = {.lex_state = 135},
  [576] = {.lex_state = 251},
  [577] = {.lex_state = 185},
  [578] = {.lex_state = 141},
  [579] = {.lex_state = 244},
  [580] = {.lex_state = 141},
  [581] = {.lex_state = 252},
  [582] = {.lex_state = 146},
  [583] = {.lex_state = 253},
  [584] = {.lex_state = 141},
  [585] = {.lex_state = 141},
  [586] = {.lex_state = 141},
  [587] = {.lex_state = 253},
  [588] = {.lex_state = 162},
  [589] = {.lex_state = 254},
  [590] = {.lex_state = 169},
  [591] = {.lex_state = 146},
  [592] = {.lex_state = 178},
  [593] = {.lex_state = 183},
  [594] = {.lex_state = 141},
  [595] = {.lex_state = 162},
  [596] = {.lex_state = 254},
  [597] = {.lex_state = 253},
  [598] = {.lex_state = 162},
  [599] = {.lex_state = 255},
  [600] = {.lex_state = 169},
  [601] = {.lex_state = 146},
  [602] = {.lex_state = 178},
  [603] = {.lex_state = 183},
  [604] = {.lex_state = 141},
  [605] = {.lex_state = 162},
  [606] = {.lex_state = 255},
  [607] = {.lex_state = 253},
  [608] = {.lex_state = 253},
};

static unsigned short ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_source_file] = STATE(14),
    [sym__statement_list] = STATE(456),
    [sym__statement] = STATE(457),
    [sym__declaration_statement] = STATE(17),
    [sym__control_flow_statement] = STATE(17),
    [sym__item] = STATE(18),
    [sym_function_item] = STATE(19),
    [sym_let_declaration] = STATE(18),
    [sym__pattern] = STATE(458),
    [sym_type_expression] = STATE(459),
    [sym__expression_statement] = STATE(17),
    [sym__expression] = STATE(460),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_arguments] = STATE(35),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(461),
    [sym_if_let_expression] = STATE(462),
    [sym_else_tail] = STATE(463),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [sym_parameters] = STATE(369),
    [sym_block] = STATE(464),
    [sym_empty_statement] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(24),
    [aux_sym__pattern_repeat1] = STATE(465),
    [aux_sym_string_literal_repeat1] = STATE(141),
    [aux_sym_parameters_repeat1] = STATE(380),
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
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_u8] = ACTIONS(25),
    [anon_sym_i8] = ACTIONS(25),
    [anon_sym_u16] = ACTIONS(25),
    [anon_sym_i16] = ACTIONS(25),
    [anon_sym_u32] = ACTIONS(25),
    [anon_sym_i32] = ACTIONS(25),
    [anon_sym_u64] = ACTIONS(25),
    [anon_sym_i64] = ACTIONS(25),
    [anon_sym_isize] = ACTIONS(25),
    [anon_sym_usize] = ACTIONS(25),
    [anon_sym_f32] = ACTIONS(25),
    [anon_sym_f64] = ACTIONS(25),
    [sym_mutable_specifier] = ACTIONS(27),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(29),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(31),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(31),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(33),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(35),
    [anon_sym_AMP_AMP] = ACTIONS(35),
    [anon_sym_PIPE_PIPE] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_RBRACK] = ACTIONS(41),
    [anon_sym_if] = ACTIONS(43),
    [anon_sym_else] = ACTIONS(45),
    [sym_number_literal] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(51),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(53),
    [sym_raw_string_literal] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(57),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_RBRACK_SLASH] = ACTIONS(59),
    [sym_byte_escape] = ACTIONS(61),
    [sym_boolean_literal] = ACTIONS(63),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(71),
    [anon_sym_RBRACE] = ACTIONS(73),
  },
  [1] = {
    [sym_source_file] = STATE(14),
    [sym__statement_list] = STATE(15),
    [sym__statement] = STATE(16),
    [sym__declaration_statement] = STATE(17),
    [sym__control_flow_statement] = STATE(17),
    [sym__item] = STATE(18),
    [sym_function_item] = STATE(19),
    [sym_let_declaration] = STATE(18),
    [sym__expression_statement] = STATE(17),
    [sym__expression] = STATE(20),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(22),
    [sym_if_let_expression] = STATE(23),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [sym_empty_statement] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(77),
    [anon_sym_fn] = ACTIONS(79),
    [anon_sym_let] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_return] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(91),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(101),
    [anon_sym_LF] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(101),
    [anon_sym_fn] = ACTIONS(103),
    [anon_sym_let] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(101),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(101),
    [anon_sym_return] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_if] = ACTIONS(103),
    [sym_number_literal] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_raw_string_literal] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(101),
    [sym_boolean_literal] = ACTIONS(103),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(105),
    [anon_sym_RBRACE] = ACTIONS(101),
  },
  [3] = {
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(107),
  },
  [4] = {
    [sym__pattern] = STATE(322),
    [sym__expression] = STATE(323),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [sym_mutable_specifier] = ACTIONS(113),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(115),
    [anon_sym_return] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(119),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [5] = {
    [sym__expression] = STATE(96),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(121),
    [anon_sym_return] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(125),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [6] = {
    [sym__expression] = STATE(226),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_return] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [7] = {
    [sym__expression] = STATE(434),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_SEMI] = ACTIONS(129),
    [anon_sym_EQ] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(129),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(133),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(135),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(135),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(131),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(129),
    [anon_sym_AMP_AMP] = ACTIONS(129),
    [anon_sym_PIPE_PIPE] = ACTIONS(129),
    [anon_sym_return] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [8] = {
    [sym__expression] = STATE(158),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(137),
    [anon_sym_return] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(141),
    [anon_sym_if] = ACTIONS(143),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [9] = {
    [sym__expression] = STATE(417),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_let] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [10] = {
    [anon_sym_SEMI] = ACTIONS(153),
    [anon_sym_COLON] = ACTIONS(153),
    [anon_sym_EQ] = ACTIONS(155),
    [anon_sym_LPAREN] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(153),
    [anon_sym_RPAREN] = ACTIONS(153),
    [anon_sym_PIPE] = ACTIONS(155),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(155),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(153),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(155),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(153),
    [anon_sym_AMP_AMP] = ACTIONS(153),
    [anon_sym_PIPE_PIPE] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(153),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(153),
    [anon_sym_RBRACE] = ACTIONS(153),
  },
  [11] = {
    [aux_sym_string_literal_repeat1] = STATE(141),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(159),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(161),
    [sym_byte_escape] = ACTIONS(159),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [12] = {
    [anon_sym_SQUOTE] = ACTIONS(163),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(165),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_RBRACK_SLASH] = ACTIONS(167),
    [sym_byte_escape] = ACTIONS(165),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [13] = {
    [anon_sym_SEMI] = ACTIONS(169),
    [anon_sym_COLON] = ACTIONS(169),
    [anon_sym_EQ] = ACTIONS(171),
    [anon_sym_LPAREN] = ACTIONS(169),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_RPAREN] = ACTIONS(169),
    [anon_sym_PIPE] = ACTIONS(171),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(171),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(171),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(169),
    [anon_sym_AMP_AMP] = ACTIONS(169),
    [anon_sym_PIPE_PIPE] = ACTIONS(169),
    [anon_sym_RBRACK] = ACTIONS(169),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(169),
    [anon_sym_RBRACE] = ACTIONS(169),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(173),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(175),
    [anon_sym_SEMI] = ACTIONS(175),
    [anon_sym_fn] = ACTIONS(177),
    [anon_sym_let] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(175),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(175),
    [anon_sym_return] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(175),
    [anon_sym_if] = ACTIONS(177),
    [sym_number_literal] = ACTIONS(177),
    [anon_sym_DQUOTE] = ACTIONS(175),
    [sym_raw_string_literal] = ACTIONS(177),
    [anon_sym_SQUOTE] = ACTIONS(175),
    [sym_boolean_literal] = ACTIONS(177),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(179),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [anon_sym_LF] = ACTIONS(183),
    [anon_sym_SEMI] = ACTIONS(181),
    [anon_sym_fn] = ACTIONS(185),
    [anon_sym_let] = ACTIONS(185),
    [anon_sym_LPAREN] = ACTIONS(181),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(181),
    [anon_sym_return] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(181),
    [anon_sym_if] = ACTIONS(185),
    [sym_number_literal] = ACTIONS(185),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [sym_raw_string_literal] = ACTIONS(185),
    [anon_sym_SQUOTE] = ACTIONS(181),
    [sym_boolean_literal] = ACTIONS(185),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(187),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(189),
    [anon_sym_LF] = ACTIONS(189),
    [anon_sym_SEMI] = ACTIONS(189),
    [anon_sym_fn] = ACTIONS(191),
    [anon_sym_let] = ACTIONS(191),
    [anon_sym_LPAREN] = ACTIONS(189),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(189),
    [anon_sym_return] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(189),
    [anon_sym_if] = ACTIONS(191),
    [sym_number_literal] = ACTIONS(191),
    [anon_sym_DQUOTE] = ACTIONS(189),
    [sym_raw_string_literal] = ACTIONS(191),
    [anon_sym_SQUOTE] = ACTIONS(189),
    [sym_boolean_literal] = ACTIONS(191),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(193),
    [anon_sym_RBRACE] = ACTIONS(189),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(195),
    [anon_sym_LF] = ACTIONS(195),
    [anon_sym_SEMI] = ACTIONS(195),
    [anon_sym_fn] = ACTIONS(197),
    [anon_sym_let] = ACTIONS(197),
    [anon_sym_LPAREN] = ACTIONS(195),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(195),
    [anon_sym_return] = ACTIONS(197),
    [anon_sym_LBRACK] = ACTIONS(195),
    [anon_sym_if] = ACTIONS(197),
    [sym_number_literal] = ACTIONS(197),
    [anon_sym_DQUOTE] = ACTIONS(195),
    [sym_raw_string_literal] = ACTIONS(197),
    [anon_sym_SQUOTE] = ACTIONS(195),
    [sym_boolean_literal] = ACTIONS(197),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(199),
    [anon_sym_RBRACE] = ACTIONS(195),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [anon_sym_LF] = ACTIONS(201),
    [anon_sym_SEMI] = ACTIONS(201),
    [anon_sym_fn] = ACTIONS(203),
    [anon_sym_let] = ACTIONS(203),
    [anon_sym_LPAREN] = ACTIONS(201),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(201),
    [anon_sym_return] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(201),
    [anon_sym_if] = ACTIONS(203),
    [sym_number_literal] = ACTIONS(203),
    [anon_sym_DQUOTE] = ACTIONS(201),
    [sym_raw_string_literal] = ACTIONS(203),
    [anon_sym_SQUOTE] = ACTIONS(201),
    [sym_boolean_literal] = ACTIONS(203),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(205),
    [anon_sym_RBRACE] = ACTIONS(201),
  },
  [20] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(207),
    [anon_sym_EQ] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(213),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(215),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(217),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(219),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(223),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [21] = {
    [anon_sym_SEMI] = ACTIONS(225),
    [anon_sym_COLON] = ACTIONS(225),
    [anon_sym_EQ] = ACTIONS(227),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_COMMA] = ACTIONS(225),
    [anon_sym_RPAREN] = ACTIONS(225),
    [anon_sym_PIPE] = ACTIONS(227),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(227),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(225),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(227),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(225),
    [anon_sym_AMP_AMP] = ACTIONS(225),
    [anon_sym_PIPE_PIPE] = ACTIONS(225),
    [anon_sym_RBRACK] = ACTIONS(225),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(225),
    [anon_sym_RBRACE] = ACTIONS(225),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(229),
    [anon_sym_LF] = ACTIONS(229),
    [anon_sym_SEMI] = ACTIONS(169),
    [anon_sym_fn] = ACTIONS(231),
    [anon_sym_let] = ACTIONS(231),
    [anon_sym_EQ] = ACTIONS(171),
    [anon_sym_LPAREN] = ACTIONS(169),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(231),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(233),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(233),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(171),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(169),
    [anon_sym_AMP_AMP] = ACTIONS(169),
    [anon_sym_PIPE_PIPE] = ACTIONS(169),
    [anon_sym_return] = ACTIONS(231),
    [anon_sym_LBRACK] = ACTIONS(229),
    [anon_sym_if] = ACTIONS(231),
    [sym_number_literal] = ACTIONS(231),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [sym_raw_string_literal] = ACTIONS(231),
    [anon_sym_SQUOTE] = ACTIONS(229),
    [sym_boolean_literal] = ACTIONS(231),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(235),
    [anon_sym_RBRACE] = ACTIONS(169),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(237),
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_SEMI] = ACTIONS(237),
    [anon_sym_fn] = ACTIONS(239),
    [anon_sym_let] = ACTIONS(239),
    [anon_sym_LPAREN] = ACTIONS(237),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(237),
    [anon_sym_return] = ACTIONS(239),
    [anon_sym_LBRACK] = ACTIONS(237),
    [anon_sym_if] = ACTIONS(239),
    [sym_number_literal] = ACTIONS(239),
    [anon_sym_DQUOTE] = ACTIONS(237),
    [sym_raw_string_literal] = ACTIONS(239),
    [anon_sym_SQUOTE] = ACTIONS(237),
    [sym_boolean_literal] = ACTIONS(239),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(241),
    [anon_sym_RBRACE] = ACTIONS(237),
  },
  [24] = {
    [sym__statement_list] = STATE(25),
    [sym__statement] = STATE(16),
    [sym__declaration_statement] = STATE(17),
    [sym__control_flow_statement] = STATE(17),
    [sym__item] = STATE(18),
    [sym_function_item] = STATE(19),
    [sym_let_declaration] = STATE(18),
    [sym__expression_statement] = STATE(17),
    [sym__expression] = STATE(20),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(22),
    [sym_if_let_expression] = STATE(23),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [sym_empty_statement] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(243),
    [anon_sym_SEMI] = ACTIONS(77),
    [anon_sym_fn] = ACTIONS(79),
    [anon_sym_let] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_return] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(91),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(245),
    [anon_sym_SEMI] = ACTIONS(245),
    [anon_sym_fn] = ACTIONS(247),
    [anon_sym_let] = ACTIONS(247),
    [anon_sym_LPAREN] = ACTIONS(245),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(245),
    [anon_sym_return] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(245),
    [anon_sym_if] = ACTIONS(247),
    [sym_number_literal] = ACTIONS(247),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [sym_raw_string_literal] = ACTIONS(247),
    [anon_sym_SQUOTE] = ACTIONS(245),
    [sym_boolean_literal] = ACTIONS(247),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(249),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(251),
    [anon_sym_LF] = ACTIONS(251),
    [anon_sym_SEMI] = ACTIONS(251),
    [anon_sym_fn] = ACTIONS(253),
    [anon_sym_let] = ACTIONS(253),
    [anon_sym_LPAREN] = ACTIONS(251),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(251),
    [anon_sym_return] = ACTIONS(253),
    [anon_sym_LBRACK] = ACTIONS(251),
    [anon_sym_if] = ACTIONS(253),
    [sym_number_literal] = ACTIONS(253),
    [anon_sym_DQUOTE] = ACTIONS(251),
    [sym_raw_string_literal] = ACTIONS(253),
    [anon_sym_SQUOTE] = ACTIONS(251),
    [sym_boolean_literal] = ACTIONS(253),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(255),
    [anon_sym_RBRACE] = ACTIONS(251),
  },
  [27] = {
    [sym__expression] = STATE(414),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_return] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [28] = {
    [sym__expression] = STATE(115),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [anon_sym_RPAREN] = ACTIONS(257),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(259),
    [anon_sym_return] = ACTIONS(261),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(263),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [29] = {
    [sym__expression] = STATE(110),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_return] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [30] = {
    [sym__expression] = STATE(413),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_return] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [31] = {
    [sym__expression] = STATE(412),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_return] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [32] = {
    [sym__expression] = STATE(411),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_return] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [33] = {
    [sym__expression] = STATE(410),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_return] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [34] = {
    [sym__expression] = STATE(37),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_return] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [35] = {
    [anon_sym_SEMI] = ACTIONS(265),
    [anon_sym_COLON] = ACTIONS(265),
    [anon_sym_EQ] = ACTIONS(267),
    [anon_sym_LPAREN] = ACTIONS(265),
    [anon_sym_COMMA] = ACTIONS(265),
    [anon_sym_RPAREN] = ACTIONS(265),
    [anon_sym_PIPE] = ACTIONS(267),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(267),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(265),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(267),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(265),
    [anon_sym_AMP_AMP] = ACTIONS(265),
    [anon_sym_PIPE_PIPE] = ACTIONS(265),
    [anon_sym_RBRACK] = ACTIONS(265),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(265),
    [anon_sym_RBRACE] = ACTIONS(265),
  },
  [36] = {
    [sym__expression] = STATE(41),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [37] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(269),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(213),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(215),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(217),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(219),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [38] = {
    [sym__expression] = STATE(226),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [39] = {
    [sym__expression] = STATE(409),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_EQ] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(129),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(273),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(135),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(135),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(131),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(129),
    [anon_sym_AMP_AMP] = ACTIONS(129),
    [anon_sym_PIPE_PIPE] = ACTIONS(129),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(129),
  },
  [40] = {
    [sym__expression] = STATE(400),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [41] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(50),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(289),
  },
  [42] = {
    [sym__expression] = STATE(399),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [43] = {
    [sym__expression] = STATE(110),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [44] = {
    [sym__expression] = STATE(398),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [45] = {
    [sym__expression] = STATE(397),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [46] = {
    [sym__expression] = STATE(396),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [47] = {
    [sym__expression] = STATE(395),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [48] = {
    [sym__expression] = STATE(394),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [49] = {
    [sym__statement_list] = STATE(59),
    [sym__statement] = STATE(60),
    [sym__declaration_statement] = STATE(17),
    [sym__control_flow_statement] = STATE(17),
    [sym__item] = STATE(18),
    [sym_function_item] = STATE(19),
    [sym_let_declaration] = STATE(18),
    [sym__expression_statement] = STATE(17),
    [sym__expression] = STATE(61),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(22),
    [sym_if_let_expression] = STATE(23),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [sym_empty_statement] = STATE(17),
    [anon_sym_SEMI] = ACTIONS(77),
    [anon_sym_fn] = ACTIONS(79),
    [anon_sym_let] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_return] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(295),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(297),
  },
  [50] = {
    [sym_else_tail] = STATE(52),
    [anon_sym_SEMI] = ACTIONS(299),
    [anon_sym_EQ] = ACTIONS(301),
    [anon_sym_LPAREN] = ACTIONS(299),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(301),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(299),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(301),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(299),
    [anon_sym_AMP_AMP] = ACTIONS(299),
    [anon_sym_PIPE_PIPE] = ACTIONS(299),
    [anon_sym_else] = ACTIONS(303),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [51] = {
    [sym_if_expression] = STATE(54),
    [sym_if_let_expression] = STATE(54),
    [sym_block] = STATE(54),
    [anon_sym_if] = ACTIONS(305),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(289),
  },
  [52] = {
    [anon_sym_SEMI] = ACTIONS(307),
    [anon_sym_COLON] = ACTIONS(307),
    [anon_sym_EQ] = ACTIONS(309),
    [anon_sym_LPAREN] = ACTIONS(307),
    [anon_sym_COMMA] = ACTIONS(307),
    [anon_sym_RPAREN] = ACTIONS(307),
    [anon_sym_PIPE] = ACTIONS(309),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(309),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(307),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(309),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(307),
    [anon_sym_AMP_AMP] = ACTIONS(307),
    [anon_sym_PIPE_PIPE] = ACTIONS(307),
    [anon_sym_RBRACK] = ACTIONS(307),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(307),
    [anon_sym_RBRACE] = ACTIONS(307),
  },
  [53] = {
    [sym__expression] = STATE(41),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_let] = ACTIONS(311),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [54] = {
    [anon_sym_SEMI] = ACTIONS(313),
    [anon_sym_COLON] = ACTIONS(313),
    [anon_sym_EQ] = ACTIONS(315),
    [anon_sym_LPAREN] = ACTIONS(313),
    [anon_sym_COMMA] = ACTIONS(313),
    [anon_sym_RPAREN] = ACTIONS(313),
    [anon_sym_PIPE] = ACTIONS(315),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(315),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(313),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(315),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(313),
    [anon_sym_AMP_AMP] = ACTIONS(313),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [anon_sym_RBRACK] = ACTIONS(313),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(313),
    [anon_sym_RBRACE] = ACTIONS(313),
  },
  [55] = {
    [sym__expression] = STATE(226),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_return] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(317),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [56] = {
    [sym__expression] = STATE(317),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_SEMI] = ACTIONS(129),
    [anon_sym_EQ] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(129),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(319),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(135),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(135),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(131),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(129),
    [anon_sym_AMP_AMP] = ACTIONS(129),
    [anon_sym_PIPE_PIPE] = ACTIONS(129),
    [anon_sym_return] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(317),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(129),
  },
  [57] = {
    [sym__expression] = STATE(292),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_let] = ACTIONS(321),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [58] = {
    [anon_sym_SEMI] = ACTIONS(323),
    [anon_sym_COLON] = ACTIONS(323),
    [anon_sym_EQ] = ACTIONS(325),
    [anon_sym_LPAREN] = ACTIONS(323),
    [anon_sym_COMMA] = ACTIONS(323),
    [anon_sym_RPAREN] = ACTIONS(323),
    [anon_sym_PIPE] = ACTIONS(325),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(325),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(325),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(323),
    [anon_sym_AMP_AMP] = ACTIONS(323),
    [anon_sym_PIPE_PIPE] = ACTIONS(323),
    [anon_sym_RBRACK] = ACTIONS(323),
    [anon_sym_else] = ACTIONS(323),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(323),
    [anon_sym_RBRACE] = ACTIONS(323),
  },
  [59] = {
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(327),
  },
  [60] = {
    [anon_sym_LF] = ACTIONS(329),
    [anon_sym_SEMI] = ACTIONS(329),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(181),
  },
  [61] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(207),
    [anon_sym_EQ] = ACTIONS(331),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(335),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(337),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(339),
    [anon_sym_AMP_AMP] = ACTIONS(341),
    [anon_sym_PIPE_PIPE] = ACTIONS(343),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(327),
  },
  [62] = {
    [sym__expression] = STATE(287),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_return] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(317),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [63] = {
    [sym__expression] = STATE(110),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_return] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(317),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [64] = {
    [sym__expression] = STATE(286),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_return] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(317),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [65] = {
    [sym__expression] = STATE(285),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_return] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(317),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [66] = {
    [sym__expression] = STATE(284),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_return] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(317),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [67] = {
    [sym__expression] = STATE(283),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_return] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(317),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [68] = {
    [sym__expression] = STATE(71),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_return] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(317),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [69] = {
    [anon_sym_SEMI] = ACTIONS(345),
    [anon_sym_COLON] = ACTIONS(345),
    [anon_sym_EQ] = ACTIONS(347),
    [anon_sym_LPAREN] = ACTIONS(345),
    [anon_sym_COMMA] = ACTIONS(345),
    [anon_sym_RPAREN] = ACTIONS(345),
    [anon_sym_PIPE] = ACTIONS(347),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(345),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(345),
    [anon_sym_AMP_AMP] = ACTIONS(345),
    [anon_sym_PIPE_PIPE] = ACTIONS(345),
    [anon_sym_RBRACK] = ACTIONS(345),
    [anon_sym_else] = ACTIONS(345),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(345),
    [anon_sym_RBRACE] = ACTIONS(345),
  },
  [70] = {
    [sym__expression] = STATE(72),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [71] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(269),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(335),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(337),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(339),
    [anon_sym_AMP_AMP] = ACTIONS(341),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(269),
  },
  [72] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(73),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(289),
  },
  [73] = {
    [sym_else_tail] = STATE(52),
    [anon_sym_SEMI] = ACTIONS(299),
    [anon_sym_EQ] = ACTIONS(301),
    [anon_sym_LPAREN] = ACTIONS(299),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(301),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(299),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(301),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(299),
    [anon_sym_AMP_AMP] = ACTIONS(299),
    [anon_sym_PIPE_PIPE] = ACTIONS(299),
    [anon_sym_else] = ACTIONS(349),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(299),
  },
  [74] = {
    [sym_if_expression] = STATE(54),
    [sym_if_let_expression] = STATE(54),
    [sym_block] = STATE(54),
    [anon_sym_if] = ACTIONS(351),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(289),
  },
  [75] = {
    [sym__expression] = STATE(72),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_let] = ACTIONS(353),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [76] = {
    [sym__pattern] = STATE(82),
    [sym__expression] = STATE(83),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(355),
    [anon_sym_return] = ACTIONS(357),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(359),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [77] = {
    [sym__expression] = STATE(276),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [anon_sym_RPAREN] = ACTIONS(361),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(259),
    [anon_sym_return] = ACTIONS(261),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(263),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [78] = {
    [anon_sym_SEMI] = ACTIONS(363),
    [anon_sym_COLON] = ACTIONS(363),
    [anon_sym_EQ] = ACTIONS(363),
    [anon_sym_PIPE] = ACTIONS(365),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [79] = {
    [sym__expression] = STATE(226),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(355),
    [anon_sym_return] = ACTIONS(357),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(359),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [80] = {
    [sym__expression] = STATE(274),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_EQ] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(129),
    [anon_sym_PIPE] = ACTIONS(131),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(367),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(135),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(135),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(131),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(129),
    [anon_sym_AMP_AMP] = ACTIONS(129),
    [anon_sym_PIPE_PIPE] = ACTIONS(129),
    [anon_sym_return] = ACTIONS(357),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(359),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [81] = {
    [sym__expression] = STATE(265),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [82] = {
    [anon_sym_EQ] = ACTIONS(369),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [83] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(371),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_PIPE] = ACTIONS(373),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(375),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(381),
    [anon_sym_AMP_AMP] = ACTIONS(383),
    [anon_sym_PIPE_PIPE] = ACTIONS(385),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [84] = {
    [sym__expression] = STATE(261),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(355),
    [anon_sym_return] = ACTIONS(357),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(359),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [85] = {
    [anon_sym_SEMI] = ACTIONS(387),
    [anon_sym_COLON] = ACTIONS(387),
    [anon_sym_EQ] = ACTIONS(387),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [86] = {
    [sym__expression] = STATE(110),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(355),
    [anon_sym_return] = ACTIONS(357),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(359),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [87] = {
    [sym__expression] = STATE(260),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(355),
    [anon_sym_return] = ACTIONS(357),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(359),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [88] = {
    [sym__expression] = STATE(259),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(355),
    [anon_sym_return] = ACTIONS(357),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(359),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [89] = {
    [sym__expression] = STATE(258),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(355),
    [anon_sym_return] = ACTIONS(357),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(359),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [90] = {
    [sym__expression] = STATE(257),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(355),
    [anon_sym_return] = ACTIONS(357),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(359),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [91] = {
    [sym__expression] = STATE(92),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(355),
    [anon_sym_return] = ACTIONS(357),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(359),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [92] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_PIPE] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(375),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(381),
    [anon_sym_AMP_AMP] = ACTIONS(383),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [93] = {
    [sym__expression] = STATE(226),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(121),
    [anon_sym_return] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(125),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [94] = {
    [sym__expression] = STATE(256),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_EQ] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(129),
    [anon_sym_RPAREN] = ACTIONS(129),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(389),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(135),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(135),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(131),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(129),
    [anon_sym_AMP_AMP] = ACTIONS(129),
    [anon_sym_PIPE_PIPE] = ACTIONS(129),
    [anon_sym_return] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(125),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [95] = {
    [sym__expression] = STATE(247),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [96] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(391),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_RPAREN] = ACTIONS(393),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(395),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(397),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(399),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(401),
    [anon_sym_AMP_AMP] = ACTIONS(403),
    [anon_sym_PIPE_PIPE] = ACTIONS(405),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [97] = {
    [sym__expression] = STATE(246),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(121),
    [anon_sym_return] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(125),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [98] = {
    [anon_sym_SEMI] = ACTIONS(407),
    [anon_sym_COLON] = ACTIONS(407),
    [anon_sym_EQ] = ACTIONS(409),
    [anon_sym_LPAREN] = ACTIONS(407),
    [anon_sym_COMMA] = ACTIONS(407),
    [anon_sym_RPAREN] = ACTIONS(407),
    [anon_sym_PIPE] = ACTIONS(409),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(409),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(409),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(407),
    [anon_sym_AMP_AMP] = ACTIONS(407),
    [anon_sym_PIPE_PIPE] = ACTIONS(407),
    [anon_sym_RBRACK] = ACTIONS(407),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(407),
    [anon_sym_RBRACE] = ACTIONS(407),
  },
  [99] = {
    [sym__expression] = STATE(110),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(121),
    [anon_sym_return] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(125),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [100] = {
    [sym__expression] = STATE(109),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(121),
    [anon_sym_return] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(125),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [101] = {
    [sym__expression] = STATE(108),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(121),
    [anon_sym_return] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(125),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [102] = {
    [sym__expression] = STATE(107),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(121),
    [anon_sym_return] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(125),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [103] = {
    [sym__expression] = STATE(106),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(121),
    [anon_sym_return] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(125),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [104] = {
    [sym__expression] = STATE(105),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(121),
    [anon_sym_return] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(125),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [105] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_RPAREN] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(395),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(397),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(399),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(401),
    [anon_sym_AMP_AMP] = ACTIONS(403),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [106] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_RPAREN] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(395),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(397),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(399),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(401),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [107] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_RPAREN] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(395),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(397),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(269),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [108] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_RPAREN] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(395),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(397),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(401),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [109] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_RPAREN] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(395),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(269),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [110] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(269),
    [anon_sym_COLON] = ACTIONS(269),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_COMMA] = ACTIONS(269),
    [anon_sym_RPAREN] = ACTIONS(269),
    [anon_sym_PIPE] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(269),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [anon_sym_RBRACK] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(269),
    [anon_sym_RBRACE] = ACTIONS(269),
  },
  [111] = {
    [anon_sym_SEMI] = ACTIONS(411),
    [anon_sym_COLON] = ACTIONS(411),
    [anon_sym_EQ] = ACTIONS(413),
    [anon_sym_LPAREN] = ACTIONS(411),
    [anon_sym_COMMA] = ACTIONS(411),
    [anon_sym_RPAREN] = ACTIONS(411),
    [anon_sym_PIPE] = ACTIONS(413),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(413),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(413),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(411),
    [anon_sym_AMP_AMP] = ACTIONS(411),
    [anon_sym_PIPE_PIPE] = ACTIONS(411),
    [anon_sym_RBRACK] = ACTIONS(411),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(411),
    [anon_sym_RBRACE] = ACTIONS(411),
  },
  [112] = {
    [sym__expression] = STATE(226),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(259),
    [anon_sym_return] = ACTIONS(261),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(263),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [113] = {
    [sym__expression] = STATE(245),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_EQ] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(129),
    [anon_sym_COMMA] = ACTIONS(129),
    [anon_sym_RPAREN] = ACTIONS(129),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(415),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(135),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(135),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(131),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(129),
    [anon_sym_AMP_AMP] = ACTIONS(129),
    [anon_sym_PIPE_PIPE] = ACTIONS(129),
    [anon_sym_return] = ACTIONS(261),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(263),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [114] = {
    [sym__expression] = STATE(144),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [115] = {
    [sym_arguments] = STATE(35),
    [aux_sym__pattern_repeat1] = STATE(125),
    [anon_sym_EQ] = ACTIONS(417),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(419),
    [anon_sym_RPAREN] = ACTIONS(421),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(425),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(429),
    [anon_sym_AMP_AMP] = ACTIONS(431),
    [anon_sym_PIPE_PIPE] = ACTIONS(433),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [116] = {
    [sym__expression] = STATE(135),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(259),
    [anon_sym_return] = ACTIONS(261),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(263),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [117] = {
    [sym__expression] = STATE(134),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(259),
    [anon_sym_return] = ACTIONS(261),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(263),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [118] = {
    [anon_sym_SEMI] = ACTIONS(435),
    [anon_sym_COLON] = ACTIONS(435),
    [anon_sym_EQ] = ACTIONS(437),
    [anon_sym_LPAREN] = ACTIONS(435),
    [anon_sym_COMMA] = ACTIONS(435),
    [anon_sym_RPAREN] = ACTIONS(435),
    [anon_sym_PIPE] = ACTIONS(437),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(437),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(437),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(435),
    [anon_sym_AMP_AMP] = ACTIONS(435),
    [anon_sym_PIPE_PIPE] = ACTIONS(435),
    [anon_sym_RBRACK] = ACTIONS(435),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(435),
    [anon_sym_RBRACE] = ACTIONS(435),
  },
  [119] = {
    [sym__expression] = STATE(110),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(259),
    [anon_sym_return] = ACTIONS(261),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(263),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [120] = {
    [sym__expression] = STATE(133),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(259),
    [anon_sym_return] = ACTIONS(261),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(263),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [121] = {
    [sym__expression] = STATE(132),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(259),
    [anon_sym_return] = ACTIONS(261),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(263),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [122] = {
    [sym__expression] = STATE(131),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(259),
    [anon_sym_return] = ACTIONS(261),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(263),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [123] = {
    [sym__expression] = STATE(130),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(259),
    [anon_sym_return] = ACTIONS(261),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(263),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [124] = {
    [sym__expression] = STATE(129),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(259),
    [anon_sym_return] = ACTIONS(261),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(263),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [125] = {
    [anon_sym_COMMA] = ACTIONS(439),
    [anon_sym_RPAREN] = ACTIONS(441),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [126] = {
    [sym__expression] = STATE(128),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(259),
    [anon_sym_return] = ACTIONS(261),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(263),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [127] = {
    [anon_sym_SEMI] = ACTIONS(443),
    [anon_sym_COLON] = ACTIONS(443),
    [anon_sym_EQ] = ACTIONS(445),
    [anon_sym_LPAREN] = ACTIONS(443),
    [anon_sym_COMMA] = ACTIONS(443),
    [anon_sym_RPAREN] = ACTIONS(443),
    [anon_sym_PIPE] = ACTIONS(445),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(445),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(443),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(445),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(443),
    [anon_sym_AMP_AMP] = ACTIONS(443),
    [anon_sym_PIPE_PIPE] = ACTIONS(443),
    [anon_sym_RBRACK] = ACTIONS(443),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(443),
    [anon_sym_RBRACE] = ACTIONS(443),
  },
  [128] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(417),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(447),
    [anon_sym_RPAREN] = ACTIONS(447),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(425),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(429),
    [anon_sym_AMP_AMP] = ACTIONS(431),
    [anon_sym_PIPE_PIPE] = ACTIONS(433),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [129] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_COMMA] = ACTIONS(269),
    [anon_sym_RPAREN] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(425),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(429),
    [anon_sym_AMP_AMP] = ACTIONS(431),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [130] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_COMMA] = ACTIONS(269),
    [anon_sym_RPAREN] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(425),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(429),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [131] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_COMMA] = ACTIONS(269),
    [anon_sym_RPAREN] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(425),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(269),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [132] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_COMMA] = ACTIONS(269),
    [anon_sym_RPAREN] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(425),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(429),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [133] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_COMMA] = ACTIONS(269),
    [anon_sym_RPAREN] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(269),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [134] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(417),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(449),
    [anon_sym_RPAREN] = ACTIONS(449),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(425),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(429),
    [anon_sym_AMP_AMP] = ACTIONS(431),
    [anon_sym_PIPE_PIPE] = ACTIONS(433),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [135] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(451),
    [anon_sym_LPAREN] = ACTIONS(453),
    [anon_sym_COMMA] = ACTIONS(453),
    [anon_sym_RPAREN] = ACTIONS(453),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(425),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(429),
    [anon_sym_AMP_AMP] = ACTIONS(431),
    [anon_sym_PIPE_PIPE] = ACTIONS(433),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [136] = {
    [anon_sym_SEMI] = ACTIONS(455),
    [anon_sym_COLON] = ACTIONS(455),
    [anon_sym_EQ] = ACTIONS(457),
    [anon_sym_LPAREN] = ACTIONS(455),
    [anon_sym_COMMA] = ACTIONS(455),
    [anon_sym_RPAREN] = ACTIONS(455),
    [anon_sym_PIPE] = ACTIONS(457),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(457),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(455),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(457),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(455),
    [anon_sym_AMP_AMP] = ACTIONS(455),
    [anon_sym_PIPE_PIPE] = ACTIONS(455),
    [anon_sym_RBRACK] = ACTIONS(455),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(455),
    [anon_sym_RBRACE] = ACTIONS(455),
  },
  [137] = {
    [anon_sym_SQUOTE] = ACTIONS(459),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [138] = {
    [anon_sym_SEMI] = ACTIONS(461),
    [anon_sym_COLON] = ACTIONS(461),
    [anon_sym_EQ] = ACTIONS(463),
    [anon_sym_LPAREN] = ACTIONS(461),
    [anon_sym_COMMA] = ACTIONS(461),
    [anon_sym_RPAREN] = ACTIONS(461),
    [anon_sym_PIPE] = ACTIONS(463),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(463),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(461),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(463),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(461),
    [anon_sym_AMP_AMP] = ACTIONS(461),
    [anon_sym_PIPE_PIPE] = ACTIONS(461),
    [anon_sym_RBRACK] = ACTIONS(461),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(461),
    [anon_sym_RBRACE] = ACTIONS(461),
  },
  [139] = {
    [anon_sym_SEMI] = ACTIONS(465),
    [anon_sym_COLON] = ACTIONS(465),
    [anon_sym_EQ] = ACTIONS(467),
    [anon_sym_LPAREN] = ACTIONS(465),
    [anon_sym_COMMA] = ACTIONS(465),
    [anon_sym_RPAREN] = ACTIONS(465),
    [anon_sym_PIPE] = ACTIONS(467),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(467),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(465),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(467),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(465),
    [anon_sym_AMP_AMP] = ACTIONS(465),
    [anon_sym_PIPE_PIPE] = ACTIONS(465),
    [anon_sym_RBRACK] = ACTIONS(465),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(465),
    [anon_sym_RBRACE] = ACTIONS(465),
  },
  [140] = {
    [anon_sym_DQUOTE] = ACTIONS(469),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(469),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(471),
    [sym_byte_escape] = ACTIONS(469),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [141] = {
    [anon_sym_DQUOTE] = ACTIONS(473),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(475),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(477),
    [sym_byte_escape] = ACTIONS(475),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [142] = {
    [anon_sym_SEMI] = ACTIONS(479),
    [anon_sym_COLON] = ACTIONS(479),
    [anon_sym_EQ] = ACTIONS(481),
    [anon_sym_LPAREN] = ACTIONS(479),
    [anon_sym_COMMA] = ACTIONS(479),
    [anon_sym_RPAREN] = ACTIONS(479),
    [anon_sym_PIPE] = ACTIONS(481),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(481),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(479),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(481),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(479),
    [anon_sym_AMP_AMP] = ACTIONS(479),
    [anon_sym_PIPE_PIPE] = ACTIONS(479),
    [anon_sym_RBRACK] = ACTIONS(479),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(479),
    [anon_sym_RBRACE] = ACTIONS(479),
  },
  [143] = {
    [anon_sym_DQUOTE] = ACTIONS(483),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(483),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(485),
    [sym_byte_escape] = ACTIONS(483),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [144] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(145),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(289),
  },
  [145] = {
    [sym_else_tail] = STATE(52),
    [anon_sym_EQ] = ACTIONS(301),
    [anon_sym_LPAREN] = ACTIONS(299),
    [anon_sym_COMMA] = ACTIONS(299),
    [anon_sym_RPAREN] = ACTIONS(299),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(301),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(299),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(301),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(299),
    [anon_sym_AMP_AMP] = ACTIONS(299),
    [anon_sym_PIPE_PIPE] = ACTIONS(299),
    [anon_sym_else] = ACTIONS(487),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [146] = {
    [sym_if_expression] = STATE(54),
    [sym_if_let_expression] = STATE(54),
    [sym_block] = STATE(54),
    [anon_sym_if] = ACTIONS(489),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(289),
  },
  [147] = {
    [sym__expression] = STATE(144),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_let] = ACTIONS(491),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [148] = {
    [sym__pattern] = STATE(149),
    [sym__expression] = STATE(83),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(355),
    [anon_sym_return] = ACTIONS(357),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(359),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [149] = {
    [anon_sym_EQ] = ACTIONS(493),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [150] = {
    [sym__expression] = STATE(151),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [151] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(152),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(289),
  },
  [152] = {
    [sym_else_tail] = STATE(153),
    [anon_sym_EQ] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_COMMA] = ACTIONS(497),
    [anon_sym_RPAREN] = ACTIONS(497),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(497),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(497),
    [anon_sym_AMP_AMP] = ACTIONS(497),
    [anon_sym_PIPE_PIPE] = ACTIONS(497),
    [anon_sym_else] = ACTIONS(487),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [153] = {
    [anon_sym_SEMI] = ACTIONS(499),
    [anon_sym_COLON] = ACTIONS(499),
    [anon_sym_EQ] = ACTIONS(501),
    [anon_sym_LPAREN] = ACTIONS(499),
    [anon_sym_COMMA] = ACTIONS(499),
    [anon_sym_RPAREN] = ACTIONS(499),
    [anon_sym_PIPE] = ACTIONS(501),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(499),
    [anon_sym_AMP_AMP] = ACTIONS(499),
    [anon_sym_PIPE_PIPE] = ACTIONS(499),
    [anon_sym_RBRACK] = ACTIONS(499),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(499),
    [anon_sym_RBRACE] = ACTIONS(499),
  },
  [154] = {
    [sym__expression] = STATE(226),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(137),
    [anon_sym_return] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(143),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [155] = {
    [sym__expression] = STATE(244),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_SEMI] = ACTIONS(129),
    [anon_sym_EQ] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(129),
    [anon_sym_COMMA] = ACTIONS(129),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(503),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(135),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(135),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(131),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(129),
    [anon_sym_AMP_AMP] = ACTIONS(129),
    [anon_sym_PIPE_PIPE] = ACTIONS(129),
    [anon_sym_return] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(129),
    [anon_sym_if] = ACTIONS(143),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [156] = {
    [anon_sym_SEMI] = ACTIONS(505),
    [anon_sym_COLON] = ACTIONS(505),
    [anon_sym_EQ] = ACTIONS(507),
    [anon_sym_LPAREN] = ACTIONS(505),
    [anon_sym_COMMA] = ACTIONS(505),
    [anon_sym_RPAREN] = ACTIONS(505),
    [anon_sym_PIPE] = ACTIONS(507),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(505),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(507),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(505),
    [anon_sym_AMP_AMP] = ACTIONS(505),
    [anon_sym_PIPE_PIPE] = ACTIONS(505),
    [anon_sym_RBRACK] = ACTIONS(505),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(505),
    [anon_sym_RBRACE] = ACTIONS(505),
  },
  [157] = {
    [sym__expression] = STATE(235),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [158] = {
    [sym_arguments] = STATE(35),
    [aux_sym__pattern_repeat1] = STATE(169),
    [anon_sym_SEMI] = ACTIONS(509),
    [anon_sym_EQ] = ACTIONS(511),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(513),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(515),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(517),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(521),
    [anon_sym_AMP_AMP] = ACTIONS(523),
    [anon_sym_PIPE_PIPE] = ACTIONS(525),
    [anon_sym_RBRACK] = ACTIONS(527),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [159] = {
    [sym__expression] = STATE(201),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(529),
    [anon_sym_return] = ACTIONS(531),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(533),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [160] = {
    [sym__expression] = STATE(234),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(137),
    [anon_sym_return] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(143),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [161] = {
    [sym__expression] = STATE(233),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(535),
    [anon_sym_return] = ACTIONS(537),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(539),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [162] = {
    [sym__expression] = STATE(110),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(137),
    [anon_sym_return] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(143),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [163] = {
    [sym__expression] = STATE(232),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(137),
    [anon_sym_return] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(143),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [164] = {
    [sym__expression] = STATE(231),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(137),
    [anon_sym_return] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(143),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [165] = {
    [sym__expression] = STATE(230),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(137),
    [anon_sym_return] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(143),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [166] = {
    [sym__expression] = STATE(229),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(137),
    [anon_sym_return] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(143),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [167] = {
    [sym__expression] = STATE(228),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(137),
    [anon_sym_return] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(143),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [168] = {
    [anon_sym_SEMI] = ACTIONS(541),
    [anon_sym_COLON] = ACTIONS(541),
    [anon_sym_EQ] = ACTIONS(543),
    [anon_sym_LPAREN] = ACTIONS(541),
    [anon_sym_COMMA] = ACTIONS(541),
    [anon_sym_RPAREN] = ACTIONS(541),
    [anon_sym_PIPE] = ACTIONS(543),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(543),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(541),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(543),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(541),
    [anon_sym_AMP_AMP] = ACTIONS(541),
    [anon_sym_PIPE_PIPE] = ACTIONS(541),
    [anon_sym_RBRACK] = ACTIONS(541),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(541),
    [anon_sym_RBRACE] = ACTIONS(541),
  },
  [169] = {
    [anon_sym_COMMA] = ACTIONS(545),
    [anon_sym_RBRACK] = ACTIONS(547),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [170] = {
    [sym__expression] = STATE(175),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(535),
    [anon_sym_return] = ACTIONS(537),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(539),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [171] = {
    [anon_sym_SEMI] = ACTIONS(549),
    [anon_sym_COLON] = ACTIONS(549),
    [anon_sym_EQ] = ACTIONS(551),
    [anon_sym_LPAREN] = ACTIONS(549),
    [anon_sym_COMMA] = ACTIONS(549),
    [anon_sym_RPAREN] = ACTIONS(549),
    [anon_sym_PIPE] = ACTIONS(551),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(551),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(549),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(551),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(549),
    [anon_sym_AMP_AMP] = ACTIONS(549),
    [anon_sym_PIPE_PIPE] = ACTIONS(549),
    [anon_sym_RBRACK] = ACTIONS(549),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(549),
    [anon_sym_RBRACE] = ACTIONS(549),
  },
  [172] = {
    [sym__expression] = STATE(226),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(535),
    [anon_sym_return] = ACTIONS(537),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(539),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [173] = {
    [sym__expression] = STATE(227),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_EQ] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(129),
    [anon_sym_COMMA] = ACTIONS(129),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(135),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(135),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(131),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(129),
    [anon_sym_AMP_AMP] = ACTIONS(129),
    [anon_sym_PIPE_PIPE] = ACTIONS(129),
    [anon_sym_return] = ACTIONS(537),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(129),
    [anon_sym_if] = ACTIONS(539),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [174] = {
    [sym__expression] = STATE(189),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [175] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(555),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(447),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(559),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(561),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(563),
    [anon_sym_AMP_AMP] = ACTIONS(565),
    [anon_sym_PIPE_PIPE] = ACTIONS(567),
    [anon_sym_RBRACK] = ACTIONS(447),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [176] = {
    [sym__expression] = STATE(188),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(535),
    [anon_sym_return] = ACTIONS(537),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(539),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [177] = {
    [sym__expression] = STATE(110),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(535),
    [anon_sym_return] = ACTIONS(537),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(539),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [178] = {
    [sym__expression] = STATE(187),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(535),
    [anon_sym_return] = ACTIONS(537),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(539),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [179] = {
    [sym__expression] = STATE(186),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(535),
    [anon_sym_return] = ACTIONS(537),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(539),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [180] = {
    [sym__expression] = STATE(185),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(535),
    [anon_sym_return] = ACTIONS(537),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(539),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [181] = {
    [sym__expression] = STATE(184),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(535),
    [anon_sym_return] = ACTIONS(537),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(539),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [182] = {
    [sym__expression] = STATE(183),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(535),
    [anon_sym_return] = ACTIONS(537),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(539),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [183] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_COMMA] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(559),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(561),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(563),
    [anon_sym_AMP_AMP] = ACTIONS(565),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [anon_sym_RBRACK] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [184] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_COMMA] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(559),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(561),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(563),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [anon_sym_RBRACK] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [185] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_COMMA] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(559),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(269),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [anon_sym_RBRACK] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [186] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_COMMA] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(559),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(563),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [anon_sym_RBRACK] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [187] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_COMMA] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(269),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [anon_sym_RBRACK] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [188] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(451),
    [anon_sym_LPAREN] = ACTIONS(453),
    [anon_sym_COMMA] = ACTIONS(453),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(559),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(561),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(563),
    [anon_sym_AMP_AMP] = ACTIONS(565),
    [anon_sym_PIPE_PIPE] = ACTIONS(567),
    [anon_sym_RBRACK] = ACTIONS(453),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [189] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(190),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(289),
  },
  [190] = {
    [sym_else_tail] = STATE(52),
    [anon_sym_EQ] = ACTIONS(301),
    [anon_sym_LPAREN] = ACTIONS(299),
    [anon_sym_COMMA] = ACTIONS(299),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(301),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(299),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(301),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(299),
    [anon_sym_AMP_AMP] = ACTIONS(299),
    [anon_sym_PIPE_PIPE] = ACTIONS(299),
    [anon_sym_RBRACK] = ACTIONS(299),
    [anon_sym_else] = ACTIONS(569),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [191] = {
    [sym_if_expression] = STATE(54),
    [sym_if_let_expression] = STATE(54),
    [sym_block] = STATE(54),
    [anon_sym_if] = ACTIONS(571),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(289),
  },
  [192] = {
    [sym__expression] = STATE(189),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_let] = ACTIONS(573),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [193] = {
    [sym__pattern] = STATE(194),
    [sym__expression] = STATE(83),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(355),
    [anon_sym_return] = ACTIONS(357),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(359),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [194] = {
    [anon_sym_EQ] = ACTIONS(575),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [195] = {
    [sym__expression] = STATE(196),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [196] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(197),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(289),
  },
  [197] = {
    [sym_else_tail] = STATE(153),
    [anon_sym_EQ] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_COMMA] = ACTIONS(497),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(497),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(497),
    [anon_sym_AMP_AMP] = ACTIONS(497),
    [anon_sym_PIPE_PIPE] = ACTIONS(497),
    [anon_sym_RBRACK] = ACTIONS(497),
    [anon_sym_else] = ACTIONS(569),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [198] = {
    [sym__expression] = STATE(226),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(529),
    [anon_sym_return] = ACTIONS(531),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(533),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [199] = {
    [sym__expression] = STATE(225),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_EQ] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(129),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(577),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(135),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(135),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(131),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(129),
    [anon_sym_AMP_AMP] = ACTIONS(129),
    [anon_sym_PIPE_PIPE] = ACTIONS(129),
    [anon_sym_return] = ACTIONS(531),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(129),
    [anon_sym_if] = ACTIONS(533),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [200] = {
    [sym__expression] = STATE(216),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [201] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(579),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(581),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(583),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(585),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(587),
    [anon_sym_AMP_AMP] = ACTIONS(589),
    [anon_sym_PIPE_PIPE] = ACTIONS(591),
    [anon_sym_RBRACK] = ACTIONS(593),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [202] = {
    [sym__expression] = STATE(215),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(529),
    [anon_sym_return] = ACTIONS(531),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(533),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [203] = {
    [sym__expression] = STATE(110),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(529),
    [anon_sym_return] = ACTIONS(531),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(533),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [204] = {
    [sym__expression] = STATE(214),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(529),
    [anon_sym_return] = ACTIONS(531),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(533),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [205] = {
    [sym__expression] = STATE(213),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(529),
    [anon_sym_return] = ACTIONS(531),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(533),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [206] = {
    [sym__expression] = STATE(212),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(529),
    [anon_sym_return] = ACTIONS(531),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(533),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [207] = {
    [sym__expression] = STATE(211),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(529),
    [anon_sym_return] = ACTIONS(531),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(533),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [208] = {
    [sym__expression] = STATE(210),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(529),
    [anon_sym_return] = ACTIONS(531),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(533),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [209] = {
    [anon_sym_SEMI] = ACTIONS(595),
    [anon_sym_COLON] = ACTIONS(595),
    [anon_sym_EQ] = ACTIONS(597),
    [anon_sym_LPAREN] = ACTIONS(595),
    [anon_sym_COMMA] = ACTIONS(595),
    [anon_sym_RPAREN] = ACTIONS(595),
    [anon_sym_PIPE] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(597),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(595),
    [anon_sym_AMP_AMP] = ACTIONS(595),
    [anon_sym_PIPE_PIPE] = ACTIONS(595),
    [anon_sym_RBRACK] = ACTIONS(595),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(595),
    [anon_sym_RBRACE] = ACTIONS(595),
  },
  [210] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(581),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(583),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(585),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(587),
    [anon_sym_AMP_AMP] = ACTIONS(589),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [anon_sym_RBRACK] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [211] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(581),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(583),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(585),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(587),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [anon_sym_RBRACK] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [212] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(581),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(583),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(269),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [anon_sym_RBRACK] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [213] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(581),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(583),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(587),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [anon_sym_RBRACK] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [214] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(581),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(269),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [anon_sym_RBRACK] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [215] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(451),
    [anon_sym_LPAREN] = ACTIONS(453),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(581),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(583),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(585),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(587),
    [anon_sym_AMP_AMP] = ACTIONS(589),
    [anon_sym_PIPE_PIPE] = ACTIONS(591),
    [anon_sym_RBRACK] = ACTIONS(453),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [216] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(217),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(289),
  },
  [217] = {
    [sym_else_tail] = STATE(52),
    [anon_sym_EQ] = ACTIONS(301),
    [anon_sym_LPAREN] = ACTIONS(299),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(301),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(299),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(301),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(299),
    [anon_sym_AMP_AMP] = ACTIONS(299),
    [anon_sym_PIPE_PIPE] = ACTIONS(299),
    [anon_sym_RBRACK] = ACTIONS(299),
    [anon_sym_else] = ACTIONS(599),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [218] = {
    [sym_if_expression] = STATE(54),
    [sym_if_let_expression] = STATE(54),
    [sym_block] = STATE(54),
    [anon_sym_if] = ACTIONS(601),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(289),
  },
  [219] = {
    [sym__expression] = STATE(216),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_let] = ACTIONS(603),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [220] = {
    [sym__pattern] = STATE(221),
    [sym__expression] = STATE(83),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(355),
    [anon_sym_return] = ACTIONS(357),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(359),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [221] = {
    [anon_sym_EQ] = ACTIONS(605),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [222] = {
    [sym__expression] = STATE(223),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [223] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(224),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(289),
  },
  [224] = {
    [sym_else_tail] = STATE(153),
    [anon_sym_EQ] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(497),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(497),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(497),
    [anon_sym_AMP_AMP] = ACTIONS(497),
    [anon_sym_PIPE_PIPE] = ACTIONS(497),
    [anon_sym_RBRACK] = ACTIONS(497),
    [anon_sym_else] = ACTIONS(599),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [225] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(607),
    [anon_sym_LPAREN] = ACTIONS(609),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(581),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(583),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(585),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(587),
    [anon_sym_AMP_AMP] = ACTIONS(589),
    [anon_sym_PIPE_PIPE] = ACTIONS(591),
    [anon_sym_RBRACK] = ACTIONS(609),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [226] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(611),
    [anon_sym_COLON] = ACTIONS(611),
    [anon_sym_EQ] = ACTIONS(613),
    [anon_sym_LPAREN] = ACTIONS(611),
    [anon_sym_COMMA] = ACTIONS(611),
    [anon_sym_RPAREN] = ACTIONS(611),
    [anon_sym_PIPE] = ACTIONS(613),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(613),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(611),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(613),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(611),
    [anon_sym_AMP_AMP] = ACTIONS(611),
    [anon_sym_PIPE_PIPE] = ACTIONS(611),
    [anon_sym_RBRACK] = ACTIONS(611),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(611),
    [anon_sym_RBRACE] = ACTIONS(611),
  },
  [227] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(607),
    [anon_sym_LPAREN] = ACTIONS(609),
    [anon_sym_COMMA] = ACTIONS(609),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(559),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(561),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(563),
    [anon_sym_AMP_AMP] = ACTIONS(565),
    [anon_sym_PIPE_PIPE] = ACTIONS(567),
    [anon_sym_RBRACK] = ACTIONS(609),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [228] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(269),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_COMMA] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(515),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(517),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(521),
    [anon_sym_AMP_AMP] = ACTIONS(523),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [anon_sym_RBRACK] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [229] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(269),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_COMMA] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(515),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(517),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(521),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [anon_sym_RBRACK] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [230] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(269),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_COMMA] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(515),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(517),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(269),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [anon_sym_RBRACK] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [231] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(269),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_COMMA] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(515),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(517),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(521),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [anon_sym_RBRACK] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [232] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(269),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_COMMA] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(515),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(269),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [anon_sym_RBRACK] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [233] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(555),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(449),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(559),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(561),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(563),
    [anon_sym_AMP_AMP] = ACTIONS(565),
    [anon_sym_PIPE_PIPE] = ACTIONS(567),
    [anon_sym_RBRACK] = ACTIONS(449),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [234] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(453),
    [anon_sym_EQ] = ACTIONS(451),
    [anon_sym_LPAREN] = ACTIONS(453),
    [anon_sym_COMMA] = ACTIONS(453),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(515),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(517),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(521),
    [anon_sym_AMP_AMP] = ACTIONS(523),
    [anon_sym_PIPE_PIPE] = ACTIONS(525),
    [anon_sym_RBRACK] = ACTIONS(453),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [235] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(236),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(289),
  },
  [236] = {
    [sym_else_tail] = STATE(52),
    [anon_sym_SEMI] = ACTIONS(299),
    [anon_sym_EQ] = ACTIONS(301),
    [anon_sym_LPAREN] = ACTIONS(299),
    [anon_sym_COMMA] = ACTIONS(299),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(301),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(299),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(301),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(299),
    [anon_sym_AMP_AMP] = ACTIONS(299),
    [anon_sym_PIPE_PIPE] = ACTIONS(299),
    [anon_sym_RBRACK] = ACTIONS(299),
    [anon_sym_else] = ACTIONS(615),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [237] = {
    [sym_if_expression] = STATE(54),
    [sym_if_let_expression] = STATE(54),
    [sym_block] = STATE(54),
    [anon_sym_if] = ACTIONS(617),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(289),
  },
  [238] = {
    [sym__expression] = STATE(235),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_let] = ACTIONS(619),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [239] = {
    [sym__pattern] = STATE(240),
    [sym__expression] = STATE(83),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(355),
    [anon_sym_return] = ACTIONS(357),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(359),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [240] = {
    [anon_sym_EQ] = ACTIONS(621),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [241] = {
    [sym__expression] = STATE(242),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [242] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(243),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(289),
  },
  [243] = {
    [sym_else_tail] = STATE(153),
    [anon_sym_SEMI] = ACTIONS(497),
    [anon_sym_EQ] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_COMMA] = ACTIONS(497),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(497),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(497),
    [anon_sym_AMP_AMP] = ACTIONS(497),
    [anon_sym_PIPE_PIPE] = ACTIONS(497),
    [anon_sym_RBRACK] = ACTIONS(497),
    [anon_sym_else] = ACTIONS(615),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [244] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(609),
    [anon_sym_EQ] = ACTIONS(607),
    [anon_sym_LPAREN] = ACTIONS(609),
    [anon_sym_COMMA] = ACTIONS(609),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(515),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(517),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(521),
    [anon_sym_AMP_AMP] = ACTIONS(523),
    [anon_sym_PIPE_PIPE] = ACTIONS(525),
    [anon_sym_RBRACK] = ACTIONS(609),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [245] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(607),
    [anon_sym_LPAREN] = ACTIONS(609),
    [anon_sym_COMMA] = ACTIONS(609),
    [anon_sym_RPAREN] = ACTIONS(609),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(425),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(429),
    [anon_sym_AMP_AMP] = ACTIONS(431),
    [anon_sym_PIPE_PIPE] = ACTIONS(433),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [246] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(451),
    [anon_sym_LPAREN] = ACTIONS(453),
    [anon_sym_RPAREN] = ACTIONS(453),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(395),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(397),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(399),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(401),
    [anon_sym_AMP_AMP] = ACTIONS(403),
    [anon_sym_PIPE_PIPE] = ACTIONS(405),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [247] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(248),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(289),
  },
  [248] = {
    [sym_else_tail] = STATE(52),
    [anon_sym_EQ] = ACTIONS(301),
    [anon_sym_LPAREN] = ACTIONS(299),
    [anon_sym_RPAREN] = ACTIONS(299),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(301),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(299),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(301),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(299),
    [anon_sym_AMP_AMP] = ACTIONS(299),
    [anon_sym_PIPE_PIPE] = ACTIONS(299),
    [anon_sym_else] = ACTIONS(623),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [249] = {
    [sym_if_expression] = STATE(54),
    [sym_if_let_expression] = STATE(54),
    [sym_block] = STATE(54),
    [anon_sym_if] = ACTIONS(625),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(289),
  },
  [250] = {
    [sym__expression] = STATE(247),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_let] = ACTIONS(627),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [251] = {
    [sym__pattern] = STATE(252),
    [sym__expression] = STATE(83),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(355),
    [anon_sym_return] = ACTIONS(357),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(359),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [252] = {
    [anon_sym_EQ] = ACTIONS(629),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [253] = {
    [sym__expression] = STATE(254),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [254] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(255),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(289),
  },
  [255] = {
    [sym_else_tail] = STATE(153),
    [anon_sym_EQ] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_RPAREN] = ACTIONS(497),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(497),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(497),
    [anon_sym_AMP_AMP] = ACTIONS(497),
    [anon_sym_PIPE_PIPE] = ACTIONS(497),
    [anon_sym_else] = ACTIONS(623),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [256] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(607),
    [anon_sym_LPAREN] = ACTIONS(609),
    [anon_sym_RPAREN] = ACTIONS(609),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(395),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(397),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(399),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(401),
    [anon_sym_AMP_AMP] = ACTIONS(403),
    [anon_sym_PIPE_PIPE] = ACTIONS(405),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [257] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_PIPE] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(375),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(381),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [258] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_PIPE] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(375),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(269),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [259] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_PIPE] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(375),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(381),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [260] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_PIPE] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(375),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(269),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [261] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(451),
    [anon_sym_LPAREN] = ACTIONS(453),
    [anon_sym_PIPE] = ACTIONS(451),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(375),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(381),
    [anon_sym_AMP_AMP] = ACTIONS(383),
    [anon_sym_PIPE_PIPE] = ACTIONS(385),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [262] = {
    [sym__expression] = STATE(263),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [263] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(264),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(289),
  },
  [264] = {
    [sym_else_tail] = STATE(153),
    [anon_sym_SEMI] = ACTIONS(497),
    [anon_sym_EQ] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(497),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(497),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(497),
    [anon_sym_AMP_AMP] = ACTIONS(497),
    [anon_sym_PIPE_PIPE] = ACTIONS(497),
    [anon_sym_else] = ACTIONS(349),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(497),
  },
  [265] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(266),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(289),
  },
  [266] = {
    [sym_else_tail] = STATE(52),
    [anon_sym_EQ] = ACTIONS(301),
    [anon_sym_LPAREN] = ACTIONS(299),
    [anon_sym_PIPE] = ACTIONS(301),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(301),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(299),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(301),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(299),
    [anon_sym_AMP_AMP] = ACTIONS(299),
    [anon_sym_PIPE_PIPE] = ACTIONS(299),
    [anon_sym_else] = ACTIONS(631),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [267] = {
    [sym_if_expression] = STATE(54),
    [sym_if_let_expression] = STATE(54),
    [sym_block] = STATE(54),
    [anon_sym_if] = ACTIONS(633),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(289),
  },
  [268] = {
    [sym__expression] = STATE(265),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_let] = ACTIONS(635),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [269] = {
    [sym__pattern] = STATE(270),
    [sym__expression] = STATE(83),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(355),
    [anon_sym_return] = ACTIONS(357),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(359),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [270] = {
    [anon_sym_EQ] = ACTIONS(637),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [271] = {
    [sym__expression] = STATE(272),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [272] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(273),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(289),
  },
  [273] = {
    [sym_else_tail] = STATE(153),
    [anon_sym_EQ] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_PIPE] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(497),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(497),
    [anon_sym_AMP_AMP] = ACTIONS(497),
    [anon_sym_PIPE_PIPE] = ACTIONS(497),
    [anon_sym_else] = ACTIONS(631),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [274] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(607),
    [anon_sym_LPAREN] = ACTIONS(609),
    [anon_sym_PIPE] = ACTIONS(607),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(375),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(377),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(381),
    [anon_sym_AMP_AMP] = ACTIONS(383),
    [anon_sym_PIPE_PIPE] = ACTIONS(385),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [275] = {
    [anon_sym_SEMI] = ACTIONS(387),
    [anon_sym_COLON] = ACTIONS(387),
    [anon_sym_EQ] = ACTIONS(387),
    [anon_sym_PIPE] = ACTIONS(639),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [276] = {
    [sym_arguments] = STATE(35),
    [aux_sym__pattern_repeat1] = STATE(278),
    [anon_sym_EQ] = ACTIONS(417),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(419),
    [anon_sym_RPAREN] = ACTIONS(641),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(425),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(429),
    [anon_sym_AMP_AMP] = ACTIONS(431),
    [anon_sym_PIPE_PIPE] = ACTIONS(433),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [277] = {
    [anon_sym_SEMI] = ACTIONS(407),
    [anon_sym_COLON] = ACTIONS(407),
    [anon_sym_EQ] = ACTIONS(409),
    [anon_sym_LPAREN] = ACTIONS(407),
    [anon_sym_PIPE] = ACTIONS(409),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(409),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(409),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(407),
    [anon_sym_AMP_AMP] = ACTIONS(407),
    [anon_sym_PIPE_PIPE] = ACTIONS(407),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [278] = {
    [anon_sym_COMMA] = ACTIONS(439),
    [anon_sym_RPAREN] = ACTIONS(643),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [279] = {
    [anon_sym_SEMI] = ACTIONS(645),
    [anon_sym_COLON] = ACTIONS(645),
    [anon_sym_EQ] = ACTIONS(645),
    [anon_sym_PIPE] = ACTIONS(647),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [280] = {
    [anon_sym_SEMI] = ACTIONS(649),
    [anon_sym_COLON] = ACTIONS(649),
    [anon_sym_EQ] = ACTIONS(649),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [281] = {
    [anon_sym_SEMI] = ACTIONS(645),
    [anon_sym_COLON] = ACTIONS(645),
    [anon_sym_EQ] = ACTIONS(645),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [282] = {
    [anon_sym_SEMI] = ACTIONS(651),
    [anon_sym_COLON] = ACTIONS(651),
    [anon_sym_EQ] = ACTIONS(651),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [283] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(269),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(335),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(337),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(339),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(269),
  },
  [284] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(269),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(335),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(269),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(269),
  },
  [285] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(269),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(335),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(339),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(269),
  },
  [286] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(269),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(269),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(269),
  },
  [287] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(453),
    [anon_sym_EQ] = ACTIONS(451),
    [anon_sym_LPAREN] = ACTIONS(453),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(335),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(337),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(339),
    [anon_sym_AMP_AMP] = ACTIONS(341),
    [anon_sym_PIPE_PIPE] = ACTIONS(343),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(453),
  },
  [288] = {
    [sym__statement_list] = STATE(289),
    [sym__statement] = STATE(60),
    [sym__declaration_statement] = STATE(17),
    [sym__control_flow_statement] = STATE(17),
    [sym__item] = STATE(18),
    [sym_function_item] = STATE(19),
    [sym_let_declaration] = STATE(18),
    [sym__expression_statement] = STATE(17),
    [sym__expression] = STATE(20),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(290),
    [sym_if_let_expression] = STATE(23),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [sym_empty_statement] = STATE(17),
    [anon_sym_SEMI] = ACTIONS(77),
    [anon_sym_fn] = ACTIONS(79),
    [anon_sym_let] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_return] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(295),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(653),
  },
  [289] = {
    [ts_builtin_sym_end] = ACTIONS(655),
    [anon_sym_SEMI] = ACTIONS(655),
    [anon_sym_fn] = ACTIONS(657),
    [anon_sym_let] = ACTIONS(657),
    [anon_sym_LPAREN] = ACTIONS(655),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(655),
    [anon_sym_return] = ACTIONS(657),
    [anon_sym_LBRACK] = ACTIONS(655),
    [anon_sym_if] = ACTIONS(657),
    [sym_number_literal] = ACTIONS(657),
    [anon_sym_DQUOTE] = ACTIONS(655),
    [sym_raw_string_literal] = ACTIONS(657),
    [anon_sym_SQUOTE] = ACTIONS(655),
    [sym_boolean_literal] = ACTIONS(657),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(659),
    [anon_sym_RBRACE] = ACTIONS(655),
  },
  [290] = {
    [anon_sym_LF] = ACTIONS(229),
    [anon_sym_SEMI] = ACTIONS(169),
    [anon_sym_EQ] = ACTIONS(171),
    [anon_sym_LPAREN] = ACTIONS(169),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(171),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(171),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(169),
    [anon_sym_AMP_AMP] = ACTIONS(169),
    [anon_sym_PIPE_PIPE] = ACTIONS(169),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(229),
  },
  [291] = {
    [sym__pattern] = STATE(309),
    [sym__expression] = STATE(83),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(355),
    [anon_sym_return] = ACTIONS(357),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(359),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [292] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(294),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(661),
  },
  [293] = {
    [sym__statement_list] = STATE(300),
    [sym__statement] = STATE(60),
    [sym__declaration_statement] = STATE(17),
    [sym__control_flow_statement] = STATE(17),
    [sym__item] = STATE(18),
    [sym_function_item] = STATE(19),
    [sym_let_declaration] = STATE(18),
    [sym__expression_statement] = STATE(17),
    [sym__expression] = STATE(301),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(22),
    [sym_if_let_expression] = STATE(23),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [sym_empty_statement] = STATE(17),
    [anon_sym_SEMI] = ACTIONS(77),
    [anon_sym_fn] = ACTIONS(79),
    [anon_sym_let] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(291),
    [anon_sym_return] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(295),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(663),
  },
  [294] = {
    [sym_else_tail] = STATE(296),
    [anon_sym_LF] = ACTIONS(299),
    [anon_sym_SEMI] = ACTIONS(299),
    [anon_sym_EQ] = ACTIONS(301),
    [anon_sym_LPAREN] = ACTIONS(299),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(301),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(299),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(301),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(299),
    [anon_sym_AMP_AMP] = ACTIONS(299),
    [anon_sym_PIPE_PIPE] = ACTIONS(299),
    [anon_sym_else] = ACTIONS(665),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(299),
  },
  [295] = {
    [sym_if_expression] = STATE(298),
    [sym_if_let_expression] = STATE(298),
    [sym_block] = STATE(298),
    [anon_sym_if] = ACTIONS(667),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(661),
  },
  [296] = {
    [ts_builtin_sym_end] = ACTIONS(307),
    [anon_sym_LF] = ACTIONS(307),
    [anon_sym_SEMI] = ACTIONS(307),
    [anon_sym_fn] = ACTIONS(309),
    [anon_sym_let] = ACTIONS(309),
    [anon_sym_COLON] = ACTIONS(307),
    [anon_sym_EQ] = ACTIONS(309),
    [anon_sym_LPAREN] = ACTIONS(307),
    [anon_sym_COMMA] = ACTIONS(307),
    [anon_sym_RPAREN] = ACTIONS(307),
    [anon_sym_PIPE] = ACTIONS(309),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(309),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(669),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(669),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(309),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(307),
    [anon_sym_AMP_AMP] = ACTIONS(307),
    [anon_sym_PIPE_PIPE] = ACTIONS(307),
    [anon_sym_return] = ACTIONS(309),
    [anon_sym_LBRACK] = ACTIONS(307),
    [anon_sym_RBRACK] = ACTIONS(307),
    [anon_sym_if] = ACTIONS(309),
    [sym_number_literal] = ACTIONS(309),
    [anon_sym_DQUOTE] = ACTIONS(307),
    [sym_raw_string_literal] = ACTIONS(309),
    [anon_sym_SQUOTE] = ACTIONS(307),
    [sym_boolean_literal] = ACTIONS(309),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(669),
    [anon_sym_LBRACE] = ACTIONS(307),
    [anon_sym_RBRACE] = ACTIONS(307),
  },
  [297] = {
    [sym__expression] = STATE(292),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_let] = ACTIONS(671),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [298] = {
    [ts_builtin_sym_end] = ACTIONS(313),
    [anon_sym_LF] = ACTIONS(313),
    [anon_sym_SEMI] = ACTIONS(313),
    [anon_sym_fn] = ACTIONS(315),
    [anon_sym_let] = ACTIONS(315),
    [anon_sym_COLON] = ACTIONS(313),
    [anon_sym_EQ] = ACTIONS(315),
    [anon_sym_LPAREN] = ACTIONS(313),
    [anon_sym_COMMA] = ACTIONS(313),
    [anon_sym_RPAREN] = ACTIONS(313),
    [anon_sym_PIPE] = ACTIONS(315),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(315),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(673),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(673),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(315),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(313),
    [anon_sym_AMP_AMP] = ACTIONS(313),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [anon_sym_return] = ACTIONS(315),
    [anon_sym_LBRACK] = ACTIONS(313),
    [anon_sym_RBRACK] = ACTIONS(313),
    [anon_sym_if] = ACTIONS(315),
    [sym_number_literal] = ACTIONS(315),
    [anon_sym_DQUOTE] = ACTIONS(313),
    [sym_raw_string_literal] = ACTIONS(315),
    [anon_sym_SQUOTE] = ACTIONS(313),
    [sym_boolean_literal] = ACTIONS(315),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(673),
    [anon_sym_LBRACE] = ACTIONS(313),
    [anon_sym_RBRACE] = ACTIONS(313),
  },
  [299] = {
    [ts_builtin_sym_end] = ACTIONS(323),
    [anon_sym_LF] = ACTIONS(323),
    [anon_sym_SEMI] = ACTIONS(323),
    [anon_sym_fn] = ACTIONS(325),
    [anon_sym_let] = ACTIONS(325),
    [anon_sym_COLON] = ACTIONS(323),
    [anon_sym_EQ] = ACTIONS(325),
    [anon_sym_LPAREN] = ACTIONS(323),
    [anon_sym_COMMA] = ACTIONS(323),
    [anon_sym_RPAREN] = ACTIONS(323),
    [anon_sym_PIPE] = ACTIONS(325),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(325),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(675),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(675),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(325),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(323),
    [anon_sym_AMP_AMP] = ACTIONS(323),
    [anon_sym_PIPE_PIPE] = ACTIONS(323),
    [anon_sym_return] = ACTIONS(325),
    [anon_sym_LBRACK] = ACTIONS(323),
    [anon_sym_RBRACK] = ACTIONS(323),
    [anon_sym_if] = ACTIONS(325),
    [anon_sym_else] = ACTIONS(325),
    [sym_number_literal] = ACTIONS(325),
    [anon_sym_DQUOTE] = ACTIONS(323),
    [sym_raw_string_literal] = ACTIONS(325),
    [anon_sym_SQUOTE] = ACTIONS(323),
    [sym_boolean_literal] = ACTIONS(325),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(675),
    [anon_sym_LBRACE] = ACTIONS(323),
    [anon_sym_RBRACE] = ACTIONS(323),
  },
  [300] = {
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(677),
  },
  [301] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(207),
    [anon_sym_EQ] = ACTIONS(331),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(335),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(337),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(339),
    [anon_sym_AMP_AMP] = ACTIONS(341),
    [anon_sym_PIPE_PIPE] = ACTIONS(343),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(677),
  },
  [302] = {
    [ts_builtin_sym_end] = ACTIONS(345),
    [anon_sym_LF] = ACTIONS(345),
    [anon_sym_SEMI] = ACTIONS(345),
    [anon_sym_fn] = ACTIONS(347),
    [anon_sym_let] = ACTIONS(347),
    [anon_sym_COLON] = ACTIONS(345),
    [anon_sym_EQ] = ACTIONS(347),
    [anon_sym_LPAREN] = ACTIONS(345),
    [anon_sym_COMMA] = ACTIONS(345),
    [anon_sym_RPAREN] = ACTIONS(345),
    [anon_sym_PIPE] = ACTIONS(347),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(679),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(679),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(345),
    [anon_sym_AMP_AMP] = ACTIONS(345),
    [anon_sym_PIPE_PIPE] = ACTIONS(345),
    [anon_sym_return] = ACTIONS(347),
    [anon_sym_LBRACK] = ACTIONS(345),
    [anon_sym_RBRACK] = ACTIONS(345),
    [anon_sym_if] = ACTIONS(347),
    [anon_sym_else] = ACTIONS(347),
    [sym_number_literal] = ACTIONS(347),
    [anon_sym_DQUOTE] = ACTIONS(345),
    [sym_raw_string_literal] = ACTIONS(347),
    [anon_sym_SQUOTE] = ACTIONS(345),
    [sym_boolean_literal] = ACTIONS(347),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(679),
    [anon_sym_LBRACE] = ACTIONS(345),
    [anon_sym_RBRACE] = ACTIONS(345),
  },
  [303] = {
    [sym__pattern] = STATE(304),
    [sym__expression] = STATE(83),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(355),
    [anon_sym_return] = ACTIONS(357),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(359),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [304] = {
    [anon_sym_EQ] = ACTIONS(681),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [305] = {
    [sym__expression] = STATE(306),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [306] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(307),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(661),
  },
  [307] = {
    [sym_else_tail] = STATE(308),
    [anon_sym_LF] = ACTIONS(497),
    [anon_sym_SEMI] = ACTIONS(497),
    [anon_sym_EQ] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(497),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(497),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(497),
    [anon_sym_AMP_AMP] = ACTIONS(497),
    [anon_sym_PIPE_PIPE] = ACTIONS(497),
    [anon_sym_else] = ACTIONS(665),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(497),
  },
  [308] = {
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
    [anon_sym_PIPE] = ACTIONS(501),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(683),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(683),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(501),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(499),
    [anon_sym_AMP_AMP] = ACTIONS(499),
    [anon_sym_PIPE_PIPE] = ACTIONS(499),
    [anon_sym_return] = ACTIONS(501),
    [anon_sym_LBRACK] = ACTIONS(499),
    [anon_sym_RBRACK] = ACTIONS(499),
    [anon_sym_if] = ACTIONS(501),
    [sym_number_literal] = ACTIONS(501),
    [anon_sym_DQUOTE] = ACTIONS(499),
    [sym_raw_string_literal] = ACTIONS(501),
    [anon_sym_SQUOTE] = ACTIONS(499),
    [sym_boolean_literal] = ACTIONS(501),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(683),
    [anon_sym_LBRACE] = ACTIONS(499),
    [anon_sym_RBRACE] = ACTIONS(499),
  },
  [309] = {
    [anon_sym_EQ] = ACTIONS(685),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [310] = {
    [sym__expression] = STATE(311),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [311] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(312),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(661),
  },
  [312] = {
    [sym_else_tail] = STATE(308),
    [anon_sym_LF] = ACTIONS(497),
    [anon_sym_SEMI] = ACTIONS(497),
    [anon_sym_else] = ACTIONS(687),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(497),
  },
  [313] = {
    [sym_if_expression] = STATE(298),
    [sym_if_let_expression] = STATE(298),
    [sym_block] = STATE(298),
    [anon_sym_if] = ACTIONS(689),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(661),
  },
  [314] = {
    [sym__expression] = STATE(315),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_let] = ACTIONS(321),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [315] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(316),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(661),
  },
  [316] = {
    [sym_else_tail] = STATE(296),
    [anon_sym_LF] = ACTIONS(299),
    [anon_sym_SEMI] = ACTIONS(299),
    [anon_sym_else] = ACTIONS(687),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(299),
  },
  [317] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(609),
    [anon_sym_EQ] = ACTIONS(607),
    [anon_sym_LPAREN] = ACTIONS(609),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(335),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(337),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(339),
    [anon_sym_AMP_AMP] = ACTIONS(341),
    [anon_sym_PIPE_PIPE] = ACTIONS(343),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(609),
  },
  [318] = {
    [sym__pattern] = STATE(357),
    [sym__expression] = STATE(323),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(115),
    [anon_sym_return] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(119),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [319] = {
    [sym__expression] = STATE(226),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(115),
    [anon_sym_return] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(119),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [320] = {
    [sym__expression] = STATE(356),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_SEMI] = ACTIONS(129),
    [anon_sym_COLON] = ACTIONS(129),
    [anon_sym_EQ] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(129),
    [anon_sym_PIPE] = ACTIONS(131),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(691),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(135),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(135),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(131),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(129),
    [anon_sym_AMP_AMP] = ACTIONS(129),
    [anon_sym_PIPE_PIPE] = ACTIONS(129),
    [anon_sym_return] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(119),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [321] = {
    [sym__expression] = STATE(347),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [322] = {
    [anon_sym_SEMI] = ACTIONS(693),
    [anon_sym_COLON] = ACTIONS(695),
    [anon_sym_EQ] = ACTIONS(697),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [323] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(699),
    [anon_sym_COLON] = ACTIONS(699),
    [anon_sym_EQ] = ACTIONS(371),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_PIPE] = ACTIONS(373),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(701),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(703),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(705),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(707),
    [anon_sym_AMP_AMP] = ACTIONS(709),
    [anon_sym_PIPE_PIPE] = ACTIONS(711),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [324] = {
    [sym__expression] = STATE(336),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(115),
    [anon_sym_return] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(119),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [325] = {
    [sym__expression] = STATE(110),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(115),
    [anon_sym_return] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(119),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [326] = {
    [sym__expression] = STATE(335),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(115),
    [anon_sym_return] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(119),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [327] = {
    [sym__expression] = STATE(334),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(115),
    [anon_sym_return] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(119),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [328] = {
    [sym__expression] = STATE(333),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(115),
    [anon_sym_return] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(119),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [329] = {
    [sym__expression] = STATE(332),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(115),
    [anon_sym_return] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(119),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [330] = {
    [sym__expression] = STATE(331),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(115),
    [anon_sym_return] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(119),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [331] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(269),
    [anon_sym_COLON] = ACTIONS(269),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_PIPE] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(701),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(703),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(705),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(707),
    [anon_sym_AMP_AMP] = ACTIONS(709),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [332] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(269),
    [anon_sym_COLON] = ACTIONS(269),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_PIPE] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(701),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(703),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(705),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(707),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [333] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(269),
    [anon_sym_COLON] = ACTIONS(269),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_PIPE] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(701),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(703),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(269),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [334] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(269),
    [anon_sym_COLON] = ACTIONS(269),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_PIPE] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(701),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(703),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(707),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [335] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(269),
    [anon_sym_COLON] = ACTIONS(269),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_PIPE] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(701),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(269),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [336] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(453),
    [anon_sym_COLON] = ACTIONS(453),
    [anon_sym_EQ] = ACTIONS(451),
    [anon_sym_LPAREN] = ACTIONS(453),
    [anon_sym_PIPE] = ACTIONS(451),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(701),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(703),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(705),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(707),
    [anon_sym_AMP_AMP] = ACTIONS(709),
    [anon_sym_PIPE_PIPE] = ACTIONS(711),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [337] = {
    [ts_builtin_sym_end] = ACTIONS(713),
    [anon_sym_LF] = ACTIONS(713),
    [anon_sym_SEMI] = ACTIONS(713),
    [anon_sym_fn] = ACTIONS(715),
    [anon_sym_let] = ACTIONS(715),
    [anon_sym_LPAREN] = ACTIONS(713),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(713),
    [anon_sym_return] = ACTIONS(715),
    [anon_sym_LBRACK] = ACTIONS(713),
    [anon_sym_if] = ACTIONS(715),
    [sym_number_literal] = ACTIONS(715),
    [anon_sym_DQUOTE] = ACTIONS(713),
    [sym_raw_string_literal] = ACTIONS(715),
    [anon_sym_SQUOTE] = ACTIONS(713),
    [sym_boolean_literal] = ACTIONS(715),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(717),
    [anon_sym_RBRACE] = ACTIONS(713),
  },
  [338] = {
    [sym_type_expression] = STATE(343),
    [anon_sym_u8] = ACTIONS(719),
    [anon_sym_i8] = ACTIONS(719),
    [anon_sym_u16] = ACTIONS(719),
    [anon_sym_i16] = ACTIONS(719),
    [anon_sym_u32] = ACTIONS(719),
    [anon_sym_i32] = ACTIONS(719),
    [anon_sym_u64] = ACTIONS(719),
    [anon_sym_i64] = ACTIONS(719),
    [anon_sym_isize] = ACTIONS(719),
    [anon_sym_usize] = ACTIONS(719),
    [anon_sym_f32] = ACTIONS(719),
    [anon_sym_f64] = ACTIONS(719),
    [sym_boolean_literal] = ACTIONS(719),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(721),
  },
  [339] = {
    [sym__expression] = STATE(340),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_return] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [340] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(723),
    [anon_sym_EQ] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(213),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(215),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(217),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(219),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(223),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [341] = {
    [ts_builtin_sym_end] = ACTIONS(725),
    [anon_sym_LF] = ACTIONS(725),
    [anon_sym_SEMI] = ACTIONS(725),
    [anon_sym_fn] = ACTIONS(727),
    [anon_sym_let] = ACTIONS(727),
    [anon_sym_LPAREN] = ACTIONS(725),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(725),
    [anon_sym_return] = ACTIONS(727),
    [anon_sym_LBRACK] = ACTIONS(725),
    [anon_sym_if] = ACTIONS(727),
    [sym_number_literal] = ACTIONS(727),
    [anon_sym_DQUOTE] = ACTIONS(725),
    [sym_raw_string_literal] = ACTIONS(727),
    [anon_sym_SQUOTE] = ACTIONS(725),
    [sym_boolean_literal] = ACTIONS(727),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(729),
    [anon_sym_RBRACE] = ACTIONS(725),
  },
  [342] = {
    [anon_sym_SEMI] = ACTIONS(731),
    [anon_sym_EQ] = ACTIONS(731),
    [anon_sym_COMMA] = ACTIONS(731),
    [anon_sym_RPAREN] = ACTIONS(731),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(731),
  },
  [343] = {
    [anon_sym_SEMI] = ACTIONS(723),
    [anon_sym_EQ] = ACTIONS(733),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [344] = {
    [sym__expression] = STATE(345),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_return] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [345] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(735),
    [anon_sym_EQ] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(213),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(215),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(217),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(219),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(223),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [346] = {
    [ts_builtin_sym_end] = ACTIONS(737),
    [anon_sym_LF] = ACTIONS(737),
    [anon_sym_SEMI] = ACTIONS(737),
    [anon_sym_fn] = ACTIONS(739),
    [anon_sym_let] = ACTIONS(739),
    [anon_sym_LPAREN] = ACTIONS(737),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(737),
    [anon_sym_return] = ACTIONS(739),
    [anon_sym_LBRACK] = ACTIONS(737),
    [anon_sym_if] = ACTIONS(739),
    [sym_number_literal] = ACTIONS(739),
    [anon_sym_DQUOTE] = ACTIONS(737),
    [sym_raw_string_literal] = ACTIONS(739),
    [anon_sym_SQUOTE] = ACTIONS(737),
    [sym_boolean_literal] = ACTIONS(739),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(741),
    [anon_sym_RBRACE] = ACTIONS(737),
  },
  [347] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(348),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(289),
  },
  [348] = {
    [sym_else_tail] = STATE(52),
    [anon_sym_SEMI] = ACTIONS(299),
    [anon_sym_COLON] = ACTIONS(299),
    [anon_sym_EQ] = ACTIONS(301),
    [anon_sym_LPAREN] = ACTIONS(299),
    [anon_sym_PIPE] = ACTIONS(301),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(301),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(299),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(301),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(299),
    [anon_sym_AMP_AMP] = ACTIONS(299),
    [anon_sym_PIPE_PIPE] = ACTIONS(299),
    [anon_sym_else] = ACTIONS(743),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [349] = {
    [sym_if_expression] = STATE(54),
    [sym_if_let_expression] = STATE(54),
    [sym_block] = STATE(54),
    [anon_sym_if] = ACTIONS(745),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(289),
  },
  [350] = {
    [sym__expression] = STATE(347),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_let] = ACTIONS(747),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [351] = {
    [sym__pattern] = STATE(352),
    [sym__expression] = STATE(83),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(355),
    [anon_sym_return] = ACTIONS(357),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(359),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [352] = {
    [anon_sym_EQ] = ACTIONS(749),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [353] = {
    [sym__expression] = STATE(354),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [354] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(355),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(289),
  },
  [355] = {
    [sym_else_tail] = STATE(153),
    [anon_sym_SEMI] = ACTIONS(497),
    [anon_sym_COLON] = ACTIONS(497),
    [anon_sym_EQ] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_PIPE] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(497),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(497),
    [anon_sym_AMP_AMP] = ACTIONS(497),
    [anon_sym_PIPE_PIPE] = ACTIONS(497),
    [anon_sym_else] = ACTIONS(743),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [356] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(609),
    [anon_sym_COLON] = ACTIONS(609),
    [anon_sym_EQ] = ACTIONS(607),
    [anon_sym_LPAREN] = ACTIONS(609),
    [anon_sym_PIPE] = ACTIONS(607),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(701),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(703),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(705),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(707),
    [anon_sym_AMP_AMP] = ACTIONS(709),
    [anon_sym_PIPE_PIPE] = ACTIONS(711),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [357] = {
    [anon_sym_SEMI] = ACTIONS(751),
    [anon_sym_COLON] = ACTIONS(753),
    [anon_sym_EQ] = ACTIONS(755),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [358] = {
    [ts_builtin_sym_end] = ACTIONS(757),
    [anon_sym_LF] = ACTIONS(757),
    [anon_sym_SEMI] = ACTIONS(757),
    [anon_sym_fn] = ACTIONS(759),
    [anon_sym_let] = ACTIONS(759),
    [anon_sym_LPAREN] = ACTIONS(757),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(757),
    [anon_sym_return] = ACTIONS(759),
    [anon_sym_LBRACK] = ACTIONS(757),
    [anon_sym_if] = ACTIONS(759),
    [sym_number_literal] = ACTIONS(759),
    [anon_sym_DQUOTE] = ACTIONS(757),
    [sym_raw_string_literal] = ACTIONS(759),
    [anon_sym_SQUOTE] = ACTIONS(757),
    [sym_boolean_literal] = ACTIONS(759),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(761),
    [anon_sym_RBRACE] = ACTIONS(757),
  },
  [359] = {
    [sym_type_expression] = STATE(363),
    [anon_sym_u8] = ACTIONS(719),
    [anon_sym_i8] = ACTIONS(719),
    [anon_sym_u16] = ACTIONS(719),
    [anon_sym_i16] = ACTIONS(719),
    [anon_sym_u32] = ACTIONS(719),
    [anon_sym_i32] = ACTIONS(719),
    [anon_sym_u64] = ACTIONS(719),
    [anon_sym_i64] = ACTIONS(719),
    [anon_sym_isize] = ACTIONS(719),
    [anon_sym_usize] = ACTIONS(719),
    [anon_sym_f32] = ACTIONS(719),
    [anon_sym_f64] = ACTIONS(719),
    [sym_boolean_literal] = ACTIONS(719),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(721),
  },
  [360] = {
    [sym__expression] = STATE(361),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_return] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [361] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(763),
    [anon_sym_EQ] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(213),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(215),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(217),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(219),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(223),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [362] = {
    [ts_builtin_sym_end] = ACTIONS(765),
    [anon_sym_LF] = ACTIONS(765),
    [anon_sym_SEMI] = ACTIONS(765),
    [anon_sym_fn] = ACTIONS(767),
    [anon_sym_let] = ACTIONS(767),
    [anon_sym_LPAREN] = ACTIONS(765),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(765),
    [anon_sym_return] = ACTIONS(767),
    [anon_sym_LBRACK] = ACTIONS(765),
    [anon_sym_if] = ACTIONS(767),
    [sym_number_literal] = ACTIONS(767),
    [anon_sym_DQUOTE] = ACTIONS(765),
    [sym_raw_string_literal] = ACTIONS(767),
    [anon_sym_SQUOTE] = ACTIONS(765),
    [sym_boolean_literal] = ACTIONS(767),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(769),
    [anon_sym_RBRACE] = ACTIONS(765),
  },
  [363] = {
    [anon_sym_SEMI] = ACTIONS(763),
    [anon_sym_EQ] = ACTIONS(771),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [364] = {
    [sym__expression] = STATE(365),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_return] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [365] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(773),
    [anon_sym_EQ] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(213),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(215),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(217),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(219),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(223),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [366] = {
    [ts_builtin_sym_end] = ACTIONS(775),
    [anon_sym_LF] = ACTIONS(775),
    [anon_sym_SEMI] = ACTIONS(775),
    [anon_sym_fn] = ACTIONS(777),
    [anon_sym_let] = ACTIONS(777),
    [anon_sym_LPAREN] = ACTIONS(775),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(775),
    [anon_sym_return] = ACTIONS(777),
    [anon_sym_LBRACK] = ACTIONS(775),
    [anon_sym_if] = ACTIONS(777),
    [sym_number_literal] = ACTIONS(777),
    [anon_sym_DQUOTE] = ACTIONS(775),
    [sym_raw_string_literal] = ACTIONS(777),
    [anon_sym_SQUOTE] = ACTIONS(775),
    [sym_boolean_literal] = ACTIONS(777),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(779),
    [anon_sym_RBRACE] = ACTIONS(775),
  },
  [367] = {
    [sym_parameters] = STATE(369),
    [anon_sym_LPAREN] = ACTIONS(781),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [368] = {
    [anon_sym_RPAREN] = ACTIONS(783),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(785),
  },
  [369] = {
    [sym_block] = STATE(371),
    [anon_sym_DASH_GT] = ACTIONS(787),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(661),
  },
  [370] = {
    [sym_type_expression] = STATE(372),
    [anon_sym_u8] = ACTIONS(719),
    [anon_sym_i8] = ACTIONS(719),
    [anon_sym_u16] = ACTIONS(719),
    [anon_sym_i16] = ACTIONS(719),
    [anon_sym_u32] = ACTIONS(719),
    [anon_sym_i32] = ACTIONS(719),
    [anon_sym_u64] = ACTIONS(719),
    [anon_sym_i64] = ACTIONS(719),
    [anon_sym_isize] = ACTIONS(719),
    [anon_sym_usize] = ACTIONS(719),
    [anon_sym_f32] = ACTIONS(719),
    [anon_sym_f64] = ACTIONS(719),
    [sym_boolean_literal] = ACTIONS(719),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(721),
  },
  [371] = {
    [ts_builtin_sym_end] = ACTIONS(789),
    [anon_sym_LF] = ACTIONS(789),
    [anon_sym_SEMI] = ACTIONS(789),
    [anon_sym_fn] = ACTIONS(791),
    [anon_sym_let] = ACTIONS(791),
    [anon_sym_LPAREN] = ACTIONS(789),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(789),
    [anon_sym_return] = ACTIONS(791),
    [anon_sym_LBRACK] = ACTIONS(789),
    [anon_sym_if] = ACTIONS(791),
    [sym_number_literal] = ACTIONS(791),
    [anon_sym_DQUOTE] = ACTIONS(789),
    [sym_raw_string_literal] = ACTIONS(791),
    [anon_sym_SQUOTE] = ACTIONS(789),
    [sym_boolean_literal] = ACTIONS(791),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(793),
    [anon_sym_RBRACE] = ACTIONS(789),
  },
  [372] = {
    [sym_block] = STATE(373),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(661),
  },
  [373] = {
    [ts_builtin_sym_end] = ACTIONS(795),
    [anon_sym_LF] = ACTIONS(795),
    [anon_sym_SEMI] = ACTIONS(795),
    [anon_sym_fn] = ACTIONS(797),
    [anon_sym_let] = ACTIONS(797),
    [anon_sym_LPAREN] = ACTIONS(795),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(795),
    [anon_sym_return] = ACTIONS(797),
    [anon_sym_LBRACK] = ACTIONS(795),
    [anon_sym_if] = ACTIONS(797),
    [sym_number_literal] = ACTIONS(797),
    [anon_sym_DQUOTE] = ACTIONS(795),
    [sym_raw_string_literal] = ACTIONS(797),
    [anon_sym_SQUOTE] = ACTIONS(795),
    [sym_boolean_literal] = ACTIONS(797),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(799),
    [anon_sym_RBRACE] = ACTIONS(795),
  },
  [374] = {
    [anon_sym_DASH_GT] = ACTIONS(801),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(801),
  },
  [375] = {
    [anon_sym_COLON] = ACTIONS(803),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [376] = {
    [sym_type_expression] = STATE(377),
    [anon_sym_u8] = ACTIONS(719),
    [anon_sym_i8] = ACTIONS(719),
    [anon_sym_u16] = ACTIONS(719),
    [anon_sym_i16] = ACTIONS(719),
    [anon_sym_u32] = ACTIONS(719),
    [anon_sym_i32] = ACTIONS(719),
    [anon_sym_u64] = ACTIONS(719),
    [anon_sym_i64] = ACTIONS(719),
    [anon_sym_isize] = ACTIONS(719),
    [anon_sym_usize] = ACTIONS(719),
    [anon_sym_f32] = ACTIONS(719),
    [anon_sym_f64] = ACTIONS(719),
    [sym_boolean_literal] = ACTIONS(719),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(721),
  },
  [377] = {
    [aux_sym_parameters_repeat1] = STATE(380),
    [anon_sym_COMMA] = ACTIONS(805),
    [anon_sym_RPAREN] = ACTIONS(807),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [378] = {
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(809),
  },
  [379] = {
    [anon_sym_DASH_GT] = ACTIONS(811),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(811),
  },
  [380] = {
    [anon_sym_COMMA] = ACTIONS(813),
    [anon_sym_RPAREN] = ACTIONS(815),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [381] = {
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(817),
  },
  [382] = {
    [anon_sym_DASH_GT] = ACTIONS(819),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(819),
  },
  [383] = {
    [anon_sym_COLON] = ACTIONS(821),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [384] = {
    [sym_type_expression] = STATE(385),
    [anon_sym_u8] = ACTIONS(719),
    [anon_sym_i8] = ACTIONS(719),
    [anon_sym_u16] = ACTIONS(719),
    [anon_sym_i16] = ACTIONS(719),
    [anon_sym_u32] = ACTIONS(719),
    [anon_sym_i32] = ACTIONS(719),
    [anon_sym_u64] = ACTIONS(719),
    [anon_sym_i64] = ACTIONS(719),
    [anon_sym_isize] = ACTIONS(719),
    [anon_sym_usize] = ACTIONS(719),
    [anon_sym_f32] = ACTIONS(719),
    [anon_sym_f64] = ACTIONS(719),
    [sym_boolean_literal] = ACTIONS(719),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(721),
  },
  [385] = {
    [anon_sym_COMMA] = ACTIONS(823),
    [anon_sym_RPAREN] = ACTIONS(823),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [386] = {
    [anon_sym_COLON] = ACTIONS(825),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [387] = {
    [sym_type_expression] = STATE(388),
    [anon_sym_u8] = ACTIONS(719),
    [anon_sym_i8] = ACTIONS(719),
    [anon_sym_u16] = ACTIONS(719),
    [anon_sym_i16] = ACTIONS(719),
    [anon_sym_u32] = ACTIONS(719),
    [anon_sym_i32] = ACTIONS(719),
    [anon_sym_u64] = ACTIONS(719),
    [anon_sym_i64] = ACTIONS(719),
    [anon_sym_isize] = ACTIONS(719),
    [anon_sym_usize] = ACTIONS(719),
    [anon_sym_f32] = ACTIONS(719),
    [anon_sym_f64] = ACTIONS(719),
    [sym_boolean_literal] = ACTIONS(719),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(721),
  },
  [388] = {
    [anon_sym_COMMA] = ACTIONS(827),
    [anon_sym_RPAREN] = ACTIONS(827),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [389] = {
    [sym__pattern] = STATE(390),
    [sym__expression] = STATE(83),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(355),
    [anon_sym_return] = ACTIONS(357),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(359),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [390] = {
    [anon_sym_EQ] = ACTIONS(829),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [391] = {
    [sym__expression] = STATE(392),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [392] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(393),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(289),
  },
  [393] = {
    [sym_else_tail] = STATE(153),
    [anon_sym_SEMI] = ACTIONS(497),
    [anon_sym_EQ] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(497),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(497),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(497),
    [anon_sym_AMP_AMP] = ACTIONS(497),
    [anon_sym_PIPE_PIPE] = ACTIONS(497),
    [anon_sym_else] = ACTIONS(303),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [394] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(269),
  },
  [395] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(269),
  },
  [396] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(269),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(269),
  },
  [397] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(269),
  },
  [398] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(269),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(269),
  },
  [399] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(451),
    [anon_sym_LPAREN] = ACTIONS(453),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(453),
  },
  [400] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(401),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(289),
  },
  [401] = {
    [sym_else_tail] = STATE(52),
    [anon_sym_EQ] = ACTIONS(301),
    [anon_sym_LPAREN] = ACTIONS(299),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(301),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(299),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(301),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(299),
    [anon_sym_AMP_AMP] = ACTIONS(299),
    [anon_sym_PIPE_PIPE] = ACTIONS(299),
    [anon_sym_else] = ACTIONS(831),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(299),
  },
  [402] = {
    [sym_if_expression] = STATE(54),
    [sym_if_let_expression] = STATE(54),
    [sym_block] = STATE(54),
    [anon_sym_if] = ACTIONS(833),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(289),
  },
  [403] = {
    [sym__expression] = STATE(400),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_let] = ACTIONS(835),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [404] = {
    [sym__pattern] = STATE(405),
    [sym__expression] = STATE(83),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(355),
    [anon_sym_return] = ACTIONS(357),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(359),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [405] = {
    [anon_sym_EQ] = ACTIONS(837),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [406] = {
    [sym__expression] = STATE(407),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [407] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(408),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(289),
  },
  [408] = {
    [sym_else_tail] = STATE(153),
    [anon_sym_EQ] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(497),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(497),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(497),
    [anon_sym_AMP_AMP] = ACTIONS(497),
    [anon_sym_PIPE_PIPE] = ACTIONS(497),
    [anon_sym_else] = ACTIONS(831),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(497),
  },
  [409] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(607),
    [anon_sym_LPAREN] = ACTIONS(609),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(609),
  },
  [410] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(269),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(213),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(215),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(217),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(219),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [411] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(269),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(213),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(215),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(269),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [412] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(269),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(213),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(215),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(219),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [413] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(269),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(213),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(269),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [414] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(453),
    [anon_sym_EQ] = ACTIONS(451),
    [anon_sym_LPAREN] = ACTIONS(453),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(213),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(215),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(217),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(219),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(223),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [415] = {
    [sym__statement_list] = STATE(289),
    [sym__statement] = STATE(16),
    [sym__declaration_statement] = STATE(17),
    [sym__control_flow_statement] = STATE(17),
    [sym__item] = STATE(18),
    [sym_function_item] = STATE(19),
    [sym_let_declaration] = STATE(18),
    [sym__expression_statement] = STATE(17),
    [sym__expression] = STATE(20),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(22),
    [sym_if_let_expression] = STATE(23),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [sym_empty_statement] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(653),
    [anon_sym_SEMI] = ACTIONS(653),
    [anon_sym_fn] = ACTIONS(839),
    [anon_sym_let] = ACTIONS(839),
    [anon_sym_LPAREN] = ACTIONS(653),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(653),
    [anon_sym_return] = ACTIONS(839),
    [anon_sym_LBRACK] = ACTIONS(653),
    [anon_sym_if] = ACTIONS(839),
    [sym_number_literal] = ACTIONS(839),
    [anon_sym_DQUOTE] = ACTIONS(653),
    [sym_raw_string_literal] = ACTIONS(839),
    [anon_sym_SQUOTE] = ACTIONS(653),
    [sym_boolean_literal] = ACTIONS(839),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(841),
  },
  [416] = {
    [sym__pattern] = STATE(426),
    [sym__expression] = STATE(83),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(355),
    [anon_sym_return] = ACTIONS(357),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(359),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [417] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(418),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(661),
  },
  [418] = {
    [sym_else_tail] = STATE(296),
    [ts_builtin_sym_end] = ACTIONS(299),
    [anon_sym_LF] = ACTIONS(299),
    [anon_sym_SEMI] = ACTIONS(299),
    [anon_sym_fn] = ACTIONS(301),
    [anon_sym_let] = ACTIONS(301),
    [anon_sym_EQ] = ACTIONS(301),
    [anon_sym_LPAREN] = ACTIONS(299),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(301),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(301),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(299),
    [anon_sym_AMP_AMP] = ACTIONS(299),
    [anon_sym_PIPE_PIPE] = ACTIONS(299),
    [anon_sym_return] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(299),
    [anon_sym_if] = ACTIONS(301),
    [anon_sym_else] = ACTIONS(845),
    [sym_number_literal] = ACTIONS(301),
    [anon_sym_DQUOTE] = ACTIONS(299),
    [sym_raw_string_literal] = ACTIONS(301),
    [anon_sym_SQUOTE] = ACTIONS(299),
    [sym_boolean_literal] = ACTIONS(301),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(843),
  },
  [419] = {
    [sym_if_expression] = STATE(298),
    [sym_if_let_expression] = STATE(298),
    [sym_block] = STATE(298),
    [anon_sym_if] = ACTIONS(847),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(661),
  },
  [420] = {
    [sym__expression] = STATE(417),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_let] = ACTIONS(849),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [421] = {
    [sym__pattern] = STATE(422),
    [sym__expression] = STATE(83),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(355),
    [anon_sym_return] = ACTIONS(357),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(359),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [422] = {
    [anon_sym_EQ] = ACTIONS(851),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [423] = {
    [sym__expression] = STATE(424),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [424] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(425),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(661),
  },
  [425] = {
    [sym_else_tail] = STATE(308),
    [ts_builtin_sym_end] = ACTIONS(497),
    [anon_sym_LF] = ACTIONS(497),
    [anon_sym_SEMI] = ACTIONS(497),
    [anon_sym_fn] = ACTIONS(495),
    [anon_sym_let] = ACTIONS(495),
    [anon_sym_EQ] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(497),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(853),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(853),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(497),
    [anon_sym_AMP_AMP] = ACTIONS(497),
    [anon_sym_PIPE_PIPE] = ACTIONS(497),
    [anon_sym_return] = ACTIONS(495),
    [anon_sym_LBRACK] = ACTIONS(497),
    [anon_sym_if] = ACTIONS(495),
    [anon_sym_else] = ACTIONS(845),
    [sym_number_literal] = ACTIONS(495),
    [anon_sym_DQUOTE] = ACTIONS(497),
    [sym_raw_string_literal] = ACTIONS(495),
    [anon_sym_SQUOTE] = ACTIONS(497),
    [sym_boolean_literal] = ACTIONS(495),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(853),
  },
  [426] = {
    [anon_sym_EQ] = ACTIONS(855),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [427] = {
    [sym__expression] = STATE(428),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [428] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(429),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(661),
  },
  [429] = {
    [sym_else_tail] = STATE(308),
    [ts_builtin_sym_end] = ACTIONS(497),
    [anon_sym_LF] = ACTIONS(497),
    [anon_sym_SEMI] = ACTIONS(497),
    [anon_sym_fn] = ACTIONS(495),
    [anon_sym_let] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(497),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(497),
    [anon_sym_return] = ACTIONS(495),
    [anon_sym_LBRACK] = ACTIONS(497),
    [anon_sym_if] = ACTIONS(495),
    [anon_sym_else] = ACTIONS(857),
    [sym_number_literal] = ACTIONS(495),
    [anon_sym_DQUOTE] = ACTIONS(497),
    [sym_raw_string_literal] = ACTIONS(495),
    [anon_sym_SQUOTE] = ACTIONS(497),
    [sym_boolean_literal] = ACTIONS(495),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(853),
  },
  [430] = {
    [sym_if_expression] = STATE(298),
    [sym_if_let_expression] = STATE(298),
    [sym_block] = STATE(298),
    [anon_sym_if] = ACTIONS(859),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(661),
  },
  [431] = {
    [sym__expression] = STATE(432),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_let] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [432] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(433),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(661),
  },
  [433] = {
    [sym_else_tail] = STATE(296),
    [ts_builtin_sym_end] = ACTIONS(299),
    [anon_sym_LF] = ACTIONS(299),
    [anon_sym_SEMI] = ACTIONS(299),
    [anon_sym_fn] = ACTIONS(301),
    [anon_sym_let] = ACTIONS(301),
    [anon_sym_LPAREN] = ACTIONS(299),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(299),
    [anon_sym_return] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(299),
    [anon_sym_if] = ACTIONS(301),
    [anon_sym_else] = ACTIONS(857),
    [sym_number_literal] = ACTIONS(301),
    [anon_sym_DQUOTE] = ACTIONS(299),
    [sym_raw_string_literal] = ACTIONS(301),
    [anon_sym_SQUOTE] = ACTIONS(299),
    [sym_boolean_literal] = ACTIONS(301),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(843),
  },
  [434] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(609),
    [anon_sym_EQ] = ACTIONS(607),
    [anon_sym_LPAREN] = ACTIONS(609),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(213),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(215),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(217),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(219),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(223),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [435] = {
    [sym__statement_list] = STATE(289),
    [sym__statement] = STATE(457),
    [sym__declaration_statement] = STATE(17),
    [sym__control_flow_statement] = STATE(17),
    [sym__item] = STATE(18),
    [sym_function_item] = STATE(19),
    [sym_let_declaration] = STATE(18),
    [sym__expression_statement] = STATE(17),
    [sym__expression] = STATE(583),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(535),
    [sym_if_let_expression] = STATE(23),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [sym_empty_statement] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(861),
    [anon_sym_LF] = ACTIONS(871),
    [anon_sym_SEMI] = ACTIONS(880),
    [anon_sym_fn] = ACTIONS(891),
    [anon_sym_let] = ACTIONS(902),
    [anon_sym_LPAREN] = ACTIONS(913),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(924),
    [anon_sym_return] = ACTIONS(935),
    [anon_sym_LBRACK] = ACTIONS(946),
    [anon_sym_if] = ACTIONS(957),
    [sym_number_literal] = ACTIONS(968),
    [anon_sym_DQUOTE] = ACTIONS(979),
    [sym_raw_string_literal] = ACTIONS(968),
    [anon_sym_SQUOTE] = ACTIONS(990),
    [sym_boolean_literal] = ACTIONS(968),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(1001),
    [anon_sym_RBRACE] = ACTIONS(861),
  },
  [436] = {
    [sym__pattern] = STATE(577),
    [sym__expression] = STATE(323),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [sym_mutable_specifier] = ACTIONS(113),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(115),
    [anon_sym_return] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(119),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [437] = {
    [sym_type_expression] = STATE(576),
    [anon_sym_u8] = ACTIONS(719),
    [anon_sym_i8] = ACTIONS(719),
    [anon_sym_u16] = ACTIONS(719),
    [anon_sym_i16] = ACTIONS(719),
    [anon_sym_u32] = ACTIONS(719),
    [anon_sym_i32] = ACTIONS(719),
    [anon_sym_u64] = ACTIONS(719),
    [anon_sym_i64] = ACTIONS(719),
    [anon_sym_isize] = ACTIONS(719),
    [anon_sym_usize] = ACTIONS(719),
    [anon_sym_f32] = ACTIONS(719),
    [anon_sym_f64] = ACTIONS(719),
    [sym_boolean_literal] = ACTIONS(719),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(721),
  },
  [438] = {
    [sym__expression] = STATE(574),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1012),
    [anon_sym_return] = ACTIONS(1014),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(1016),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [439] = {
    [sym__expression] = STATE(572),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [anon_sym_RPAREN] = ACTIONS(1018),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(259),
    [anon_sym_return] = ACTIONS(261),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(263),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(1020),
  },
  [440] = {
    [sym__expression] = STATE(567),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1022),
    [anon_sym_return] = ACTIONS(1024),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(1026),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(1028),
  },
  [441] = {
    [anon_sym_SEMI] = ACTIONS(1030),
    [anon_sym_DASH_GT] = ACTIONS(1038),
    [anon_sym_COLON] = ACTIONS(1030),
    [anon_sym_EQ] = ACTIONS(1042),
    [anon_sym_LPAREN] = ACTIONS(1050),
    [anon_sym_COMMA] = ACTIONS(1050),
    [anon_sym_RPAREN] = ACTIONS(1050),
    [anon_sym_PIPE] = ACTIONS(1055),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1061),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1061),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1061),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1050),
    [anon_sym_AMP_AMP] = ACTIONS(1050),
    [anon_sym_PIPE_PIPE] = ACTIONS(1050),
    [anon_sym_RBRACK] = ACTIONS(1050),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(1066),
    [anon_sym_RBRACE] = ACTIONS(1050),
  },
  [442] = {
    [anon_sym_SEMI] = ACTIONS(1074),
    [anon_sym_COLON] = ACTIONS(1074),
    [anon_sym_EQ] = ACTIONS(1074),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [443] = {
    [sym__expression] = STATE(564),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1012),
    [anon_sym_return] = ACTIONS(1014),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(1016),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [444] = {
    [sym__expression] = STATE(563),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1012),
    [anon_sym_return] = ACTIONS(1014),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(1016),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [445] = {
    [sym__expression] = STATE(562),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_SEMI] = ACTIONS(129),
    [anon_sym_COLON] = ACTIONS(129),
    [anon_sym_EQ] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(1079),
    [anon_sym_COMMA] = ACTIONS(129),
    [anon_sym_RPAREN] = ACTIONS(129),
    [anon_sym_PIPE] = ACTIONS(131),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1082),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(135),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(135),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(131),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(129),
    [anon_sym_AMP_AMP] = ACTIONS(129),
    [anon_sym_PIPE_PIPE] = ACTIONS(129),
    [anon_sym_return] = ACTIONS(1014),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(129),
    [anon_sym_if] = ACTIONS(1016),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_RBRACE] = ACTIONS(129),
  },
  [446] = {
    [anon_sym_SEMI] = ACTIONS(1084),
    [anon_sym_COLON] = ACTIONS(1084),
    [anon_sym_EQ] = ACTIONS(1089),
    [anon_sym_LPAREN] = ACTIONS(1084),
    [anon_sym_COMMA] = ACTIONS(1084),
    [anon_sym_RPAREN] = ACTIONS(1084),
    [anon_sym_PIPE] = ACTIONS(1089),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1089),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1084),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1089),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1084),
    [anon_sym_AMP_AMP] = ACTIONS(1084),
    [anon_sym_PIPE_PIPE] = ACTIONS(1084),
    [anon_sym_RBRACK] = ACTIONS(1084),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(1084),
    [anon_sym_RBRACE] = ACTIONS(1084),
  },
  [447] = {
    [sym__expression] = STATE(557),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_let] = ACTIONS(1094),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [448] = {
    [sym_if_expression] = STATE(298),
    [sym_if_let_expression] = STATE(298),
    [sym_block] = STATE(298),
    [anon_sym_if] = ACTIONS(1096),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(661),
  },
  [449] = {
    [aux_sym_string_literal_repeat1] = STATE(141),
    [anon_sym_SEMI] = ACTIONS(1098),
    [anon_sym_COLON] = ACTIONS(1098),
    [anon_sym_EQ] = ACTIONS(1101),
    [anon_sym_LPAREN] = ACTIONS(1098),
    [anon_sym_COMMA] = ACTIONS(1098),
    [anon_sym_RPAREN] = ACTIONS(1098),
    [anon_sym_PIPE] = ACTIONS(1101),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1101),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1098),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1101),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1098),
    [anon_sym_AMP_AMP] = ACTIONS(1098),
    [anon_sym_PIPE_PIPE] = ACTIONS(1098),
    [anon_sym_RBRACK] = ACTIONS(1098),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(159),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(1104),
    [sym_byte_escape] = ACTIONS(159),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(1098),
    [anon_sym_RBRACE] = ACTIONS(1098),
  },
  [450] = {
    [anon_sym_DQUOTE] = ACTIONS(1106),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1106),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(1109),
    [sym_byte_escape] = ACTIONS(1106),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [451] = {
    [anon_sym_SEMI] = ACTIONS(1112),
    [anon_sym_COLON] = ACTIONS(1112),
    [anon_sym_EQ] = ACTIONS(1115),
    [anon_sym_LPAREN] = ACTIONS(1112),
    [anon_sym_COMMA] = ACTIONS(1112),
    [anon_sym_RPAREN] = ACTIONS(1112),
    [anon_sym_PIPE] = ACTIONS(1115),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1115),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1112),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1115),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1112),
    [anon_sym_AMP_AMP] = ACTIONS(1112),
    [anon_sym_PIPE_PIPE] = ACTIONS(1112),
    [anon_sym_RBRACK] = ACTIONS(1112),
    [anon_sym_SQUOTE] = ACTIONS(163),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(165),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_RBRACK_SLASH] = ACTIONS(1118),
    [sym_byte_escape] = ACTIONS(165),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(1112),
    [anon_sym_RBRACE] = ACTIONS(1112),
  },
  [452] = {
    [anon_sym_DQUOTE] = ACTIONS(1106),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1106),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(1120),
    [anon_sym_SQUOTE] = ACTIONS(459),
    [sym_byte_escape] = ACTIONS(1106),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [453] = {
    [anon_sym_SEMI] = ACTIONS(1123),
    [anon_sym_COLON] = ACTIONS(153),
    [anon_sym_EQ] = ACTIONS(1126),
    [anon_sym_LPAREN] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(1123),
    [anon_sym_RPAREN] = ACTIONS(1123),
    [anon_sym_PIPE] = ACTIONS(155),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(155),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(153),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(155),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(153),
    [anon_sym_AMP_AMP] = ACTIONS(153),
    [anon_sym_PIPE_PIPE] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(153),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(1123),
    [anon_sym_RBRACE] = ACTIONS(153),
  },
  [454] = {
    [sym_parameters] = STATE(369),
    [anon_sym_SEMI] = ACTIONS(1129),
    [anon_sym_COLON] = ACTIONS(1132),
    [anon_sym_EQ] = ACTIONS(1135),
    [anon_sym_LPAREN] = ACTIONS(1138),
    [anon_sym_COMMA] = ACTIONS(1129),
    [anon_sym_RPAREN] = ACTIONS(1129),
    [anon_sym_PIPE] = ACTIONS(171),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(171),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(171),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(169),
    [anon_sym_AMP_AMP] = ACTIONS(169),
    [anon_sym_PIPE_PIPE] = ACTIONS(169),
    [anon_sym_RBRACK] = ACTIONS(169),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(1129),
    [anon_sym_RBRACE] = ACTIONS(169),
  },
  [455] = {
    [ts_builtin_sym_end] = ACTIONS(1141),
    [anon_sym_LF] = ACTIONS(1141),
    [anon_sym_SEMI] = ACTIONS(1141),
    [anon_sym_fn] = ACTIONS(1144),
    [anon_sym_let] = ACTIONS(1144),
    [anon_sym_COLON] = ACTIONS(1141),
    [anon_sym_EQ] = ACTIONS(1144),
    [anon_sym_LPAREN] = ACTIONS(1141),
    [anon_sym_COMMA] = ACTIONS(1141),
    [anon_sym_RPAREN] = ACTIONS(1141),
    [anon_sym_PIPE] = ACTIONS(1144),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1144),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1147),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1147),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1144),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1141),
    [anon_sym_AMP_AMP] = ACTIONS(1141),
    [anon_sym_PIPE_PIPE] = ACTIONS(1141),
    [anon_sym_return] = ACTIONS(1144),
    [anon_sym_LBRACK] = ACTIONS(1141),
    [anon_sym_RBRACK] = ACTIONS(1141),
    [anon_sym_if] = ACTIONS(1144),
    [anon_sym_else] = ACTIONS(1144),
    [sym_number_literal] = ACTIONS(1144),
    [anon_sym_DQUOTE] = ACTIONS(1141),
    [sym_raw_string_literal] = ACTIONS(1144),
    [anon_sym_SQUOTE] = ACTIONS(1141),
    [sym_boolean_literal] = ACTIONS(1144),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(1147),
    [anon_sym_LBRACE] = ACTIONS(1141),
    [anon_sym_RBRACE] = ACTIONS(1141),
  },
  [456] = {
    [ts_builtin_sym_end] = ACTIONS(1150),
    [anon_sym_SEMI] = ACTIONS(1150),
    [anon_sym_fn] = ACTIONS(1154),
    [anon_sym_let] = ACTIONS(1154),
    [anon_sym_LPAREN] = ACTIONS(1150),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1150),
    [anon_sym_return] = ACTIONS(1154),
    [anon_sym_LBRACK] = ACTIONS(1150),
    [anon_sym_if] = ACTIONS(1154),
    [sym_number_literal] = ACTIONS(1154),
    [anon_sym_DQUOTE] = ACTIONS(1150),
    [sym_raw_string_literal] = ACTIONS(1154),
    [anon_sym_SQUOTE] = ACTIONS(1150),
    [sym_boolean_literal] = ACTIONS(1154),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(1158),
    [anon_sym_RBRACE] = ACTIONS(1162),
  },
  [457] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [anon_sym_LF] = ACTIONS(1165),
    [anon_sym_SEMI] = ACTIONS(1167),
    [anon_sym_fn] = ACTIONS(185),
    [anon_sym_let] = ACTIONS(185),
    [anon_sym_LPAREN] = ACTIONS(181),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(181),
    [anon_sym_return] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(181),
    [anon_sym_if] = ACTIONS(185),
    [sym_number_literal] = ACTIONS(185),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [sym_raw_string_literal] = ACTIONS(185),
    [anon_sym_SQUOTE] = ACTIONS(181),
    [sym_boolean_literal] = ACTIONS(185),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(187),
    [anon_sym_RBRACE] = ACTIONS(181),
  },
  [458] = {
    [anon_sym_SEMI] = ACTIONS(1170),
    [anon_sym_COLON] = ACTIONS(1172),
    [anon_sym_EQ] = ACTIONS(1174),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [459] = {
    [sym_block] = STATE(373),
    [aux_sym_parameters_repeat1] = STATE(380),
    [anon_sym_SEMI] = ACTIONS(1176),
    [anon_sym_EQ] = ACTIONS(1178),
    [anon_sym_COMMA] = ACTIONS(1180),
    [anon_sym_RPAREN] = ACTIONS(1184),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(661),
  },
  [460] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(492),
    [aux_sym__pattern_repeat1] = STATE(465),
    [anon_sym_SEMI] = ACTIONS(1188),
    [anon_sym_COLON] = ACTIONS(1195),
    [anon_sym_EQ] = ACTIONS(1201),
    [anon_sym_LPAREN] = ACTIONS(1208),
    [anon_sym_COMMA] = ACTIONS(1214),
    [anon_sym_RPAREN] = ACTIONS(1222),
    [anon_sym_PIPE] = ACTIONS(1230),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1236),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1242),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1236),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1242),
    [anon_sym_AMP_AMP] = ACTIONS(1242),
    [anon_sym_PIPE_PIPE] = ACTIONS(1242),
    [anon_sym_RBRACK] = ACTIONS(1248),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(1256),
    [anon_sym_RBRACE] = ACTIONS(1262),
  },
  [461] = {
    [ts_builtin_sym_end] = ACTIONS(1268),
    [anon_sym_LF] = ACTIONS(1268),
    [anon_sym_SEMI] = ACTIONS(1271),
    [anon_sym_fn] = ACTIONS(1275),
    [anon_sym_let] = ACTIONS(1275),
    [anon_sym_COLON] = ACTIONS(1278),
    [anon_sym_EQ] = ACTIONS(1281),
    [anon_sym_LPAREN] = ACTIONS(1271),
    [anon_sym_COMMA] = ACTIONS(1278),
    [anon_sym_RPAREN] = ACTIONS(1278),
    [anon_sym_PIPE] = ACTIONS(1281),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1275),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1284),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1284),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1278),
    [anon_sym_AMP_AMP] = ACTIONS(1278),
    [anon_sym_PIPE_PIPE] = ACTIONS(1278),
    [anon_sym_return] = ACTIONS(1275),
    [anon_sym_LBRACK] = ACTIONS(1268),
    [anon_sym_RBRACK] = ACTIONS(1278),
    [anon_sym_if] = ACTIONS(1275),
    [sym_number_literal] = ACTIONS(1275),
    [anon_sym_DQUOTE] = ACTIONS(1268),
    [sym_raw_string_literal] = ACTIONS(1275),
    [anon_sym_SQUOTE] = ACTIONS(1268),
    [sym_boolean_literal] = ACTIONS(1275),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(1287),
    [anon_sym_LBRACE] = ACTIONS(1278),
    [anon_sym_RBRACE] = ACTIONS(1271),
  },
  [462] = {
    [ts_builtin_sym_end] = ACTIONS(1290),
    [anon_sym_LF] = ACTIONS(1290),
    [anon_sym_SEMI] = ACTIONS(1290),
    [anon_sym_fn] = ACTIONS(1293),
    [anon_sym_let] = ACTIONS(1293),
    [anon_sym_COLON] = ACTIONS(313),
    [anon_sym_EQ] = ACTIONS(315),
    [anon_sym_LPAREN] = ACTIONS(1290),
    [anon_sym_COMMA] = ACTIONS(313),
    [anon_sym_RPAREN] = ACTIONS(313),
    [anon_sym_PIPE] = ACTIONS(315),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1293),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(673),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(673),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(315),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(313),
    [anon_sym_AMP_AMP] = ACTIONS(313),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [anon_sym_return] = ACTIONS(1293),
    [anon_sym_LBRACK] = ACTIONS(1290),
    [anon_sym_RBRACK] = ACTIONS(313),
    [anon_sym_if] = ACTIONS(1293),
    [sym_number_literal] = ACTIONS(1293),
    [anon_sym_DQUOTE] = ACTIONS(1290),
    [sym_raw_string_literal] = ACTIONS(1293),
    [anon_sym_SQUOTE] = ACTIONS(1290),
    [sym_boolean_literal] = ACTIONS(1293),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(1296),
    [anon_sym_LBRACE] = ACTIONS(313),
    [anon_sym_RBRACE] = ACTIONS(1290),
  },
  [463] = {
    [ts_builtin_sym_end] = ACTIONS(1299),
    [anon_sym_LF] = ACTIONS(1299),
    [anon_sym_SEMI] = ACTIONS(1299),
    [anon_sym_fn] = ACTIONS(1302),
    [anon_sym_let] = ACTIONS(1302),
    [anon_sym_COLON] = ACTIONS(1299),
    [anon_sym_EQ] = ACTIONS(1302),
    [anon_sym_LPAREN] = ACTIONS(1299),
    [anon_sym_COMMA] = ACTIONS(1299),
    [anon_sym_RPAREN] = ACTIONS(1299),
    [anon_sym_PIPE] = ACTIONS(1302),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1302),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1305),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1305),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1302),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1299),
    [anon_sym_AMP_AMP] = ACTIONS(1299),
    [anon_sym_PIPE_PIPE] = ACTIONS(1299),
    [anon_sym_return] = ACTIONS(1302),
    [anon_sym_LBRACK] = ACTIONS(1299),
    [anon_sym_RBRACK] = ACTIONS(1299),
    [anon_sym_if] = ACTIONS(1302),
    [sym_number_literal] = ACTIONS(1302),
    [anon_sym_DQUOTE] = ACTIONS(1299),
    [sym_raw_string_literal] = ACTIONS(1302),
    [anon_sym_SQUOTE] = ACTIONS(1299),
    [sym_boolean_literal] = ACTIONS(1302),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(1305),
    [anon_sym_LBRACE] = ACTIONS(1299),
    [anon_sym_RBRACE] = ACTIONS(1299),
  },
  [464] = {
    [sym_else_tail] = STATE(463),
    [ts_builtin_sym_end] = ACTIONS(1308),
    [anon_sym_LF] = ACTIONS(1308),
    [anon_sym_SEMI] = ACTIONS(1308),
    [anon_sym_fn] = ACTIONS(1314),
    [anon_sym_let] = ACTIONS(1314),
    [anon_sym_COLON] = ACTIONS(1320),
    [anon_sym_EQ] = ACTIONS(1324),
    [anon_sym_LPAREN] = ACTIONS(1308),
    [anon_sym_COMMA] = ACTIONS(1320),
    [anon_sym_RPAREN] = ACTIONS(1320),
    [anon_sym_PIPE] = ACTIONS(1324),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1314),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1328),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1328),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1324),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1320),
    [anon_sym_AMP_AMP] = ACTIONS(1320),
    [anon_sym_PIPE_PIPE] = ACTIONS(1320),
    [anon_sym_return] = ACTIONS(1314),
    [anon_sym_LBRACK] = ACTIONS(1308),
    [anon_sym_RBRACK] = ACTIONS(1320),
    [anon_sym_if] = ACTIONS(1314),
    [anon_sym_else] = ACTIONS(1332),
    [sym_number_literal] = ACTIONS(1314),
    [anon_sym_DQUOTE] = ACTIONS(1308),
    [sym_raw_string_literal] = ACTIONS(1314),
    [anon_sym_SQUOTE] = ACTIONS(1308),
    [sym_boolean_literal] = ACTIONS(1314),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(1334),
    [anon_sym_LBRACE] = ACTIONS(1320),
    [anon_sym_RBRACE] = ACTIONS(1308),
  },
  [465] = {
    [anon_sym_COMMA] = ACTIONS(1340),
    [anon_sym_RPAREN] = ACTIONS(1342),
    [anon_sym_RBRACK] = ACTIONS(547),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [466] = {
    [sym__expression] = STATE(471),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1022),
    [anon_sym_return] = ACTIONS(1024),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(1026),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [467] = {
    [anon_sym_SEMI] = ACTIONS(1344),
    [anon_sym_COLON] = ACTIONS(1344),
    [anon_sym_EQ] = ACTIONS(1347),
    [anon_sym_LPAREN] = ACTIONS(443),
    [anon_sym_COMMA] = ACTIONS(443),
    [anon_sym_RPAREN] = ACTIONS(443),
    [anon_sym_PIPE] = ACTIONS(1350),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(445),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(443),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(445),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(443),
    [anon_sym_AMP_AMP] = ACTIONS(443),
    [anon_sym_PIPE_PIPE] = ACTIONS(443),
    [anon_sym_RBRACK] = ACTIONS(443),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(443),
    [anon_sym_RBRACE] = ACTIONS(443),
  },
  [468] = {
    [sym__expression] = STATE(486),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1022),
    [anon_sym_return] = ACTIONS(1024),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(1026),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [469] = {
    [sym__expression] = STATE(485),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_EQ] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(1079),
    [anon_sym_COMMA] = ACTIONS(129),
    [anon_sym_RPAREN] = ACTIONS(129),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1353),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(135),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(135),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(131),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(129),
    [anon_sym_AMP_AMP] = ACTIONS(129),
    [anon_sym_PIPE_PIPE] = ACTIONS(129),
    [anon_sym_return] = ACTIONS(1024),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(129),
    [anon_sym_if] = ACTIONS(1026),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [470] = {
    [sym__expression] = STATE(476),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [471] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(1355),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(447),
    [anon_sym_RPAREN] = ACTIONS(447),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1357),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1359),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1357),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1359),
    [anon_sym_AMP_AMP] = ACTIONS(1359),
    [anon_sym_PIPE_PIPE] = ACTIONS(1359),
    [anon_sym_RBRACK] = ACTIONS(447),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [472] = {
    [sym__expression] = STATE(475),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1022),
    [anon_sym_return] = ACTIONS(1024),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(1026),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [473] = {
    [sym__expression] = STATE(474),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1022),
    [anon_sym_return] = ACTIONS(1024),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(1026),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [474] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(1361),
    [anon_sym_LPAREN] = ACTIONS(1364),
    [anon_sym_COMMA] = ACTIONS(269),
    [anon_sym_RPAREN] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1367),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1370),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1367),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1370),
    [anon_sym_AMP_AMP] = ACTIONS(1370),
    [anon_sym_PIPE_PIPE] = ACTIONS(1370),
    [anon_sym_RBRACK] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [475] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(1373),
    [anon_sym_LPAREN] = ACTIONS(1376),
    [anon_sym_COMMA] = ACTIONS(453),
    [anon_sym_RPAREN] = ACTIONS(453),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1379),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1382),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1379),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1382),
    [anon_sym_AMP_AMP] = ACTIONS(1382),
    [anon_sym_PIPE_PIPE] = ACTIONS(1382),
    [anon_sym_RBRACK] = ACTIONS(453),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [476] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(477),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(289),
  },
  [477] = {
    [sym_else_tail] = STATE(52),
    [anon_sym_EQ] = ACTIONS(301),
    [anon_sym_LPAREN] = ACTIONS(299),
    [anon_sym_COMMA] = ACTIONS(299),
    [anon_sym_RPAREN] = ACTIONS(299),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(301),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(299),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(301),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(299),
    [anon_sym_AMP_AMP] = ACTIONS(299),
    [anon_sym_PIPE_PIPE] = ACTIONS(299),
    [anon_sym_RBRACK] = ACTIONS(299),
    [anon_sym_else] = ACTIONS(1385),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [478] = {
    [sym_if_expression] = STATE(54),
    [sym_if_let_expression] = STATE(54),
    [sym_block] = STATE(54),
    [anon_sym_if] = ACTIONS(1387),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(289),
  },
  [479] = {
    [sym__expression] = STATE(476),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_let] = ACTIONS(1389),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [480] = {
    [sym__pattern] = STATE(481),
    [sym__expression] = STATE(83),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(355),
    [anon_sym_return] = ACTIONS(357),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(359),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [481] = {
    [anon_sym_EQ] = ACTIONS(1391),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [482] = {
    [sym__expression] = STATE(483),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [483] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(484),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(289),
  },
  [484] = {
    [sym_else_tail] = STATE(153),
    [anon_sym_EQ] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_COMMA] = ACTIONS(497),
    [anon_sym_RPAREN] = ACTIONS(497),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(497),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(497),
    [anon_sym_AMP_AMP] = ACTIONS(497),
    [anon_sym_PIPE_PIPE] = ACTIONS(497),
    [anon_sym_RBRACK] = ACTIONS(497),
    [anon_sym_else] = ACTIONS(1385),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [485] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(1393),
    [anon_sym_LPAREN] = ACTIONS(1396),
    [anon_sym_COMMA] = ACTIONS(609),
    [anon_sym_RPAREN] = ACTIONS(609),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1399),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1402),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1399),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1402),
    [anon_sym_AMP_AMP] = ACTIONS(1402),
    [anon_sym_PIPE_PIPE] = ACTIONS(1402),
    [anon_sym_RBRACK] = ACTIONS(609),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [486] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(1405),
    [anon_sym_LPAREN] = ACTIONS(1408),
    [anon_sym_COMMA] = ACTIONS(611),
    [anon_sym_RPAREN] = ACTIONS(611),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1411),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1414),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1411),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1414),
    [anon_sym_AMP_AMP] = ACTIONS(1414),
    [anon_sym_PIPE_PIPE] = ACTIONS(1414),
    [anon_sym_RBRACK] = ACTIONS(611),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [487] = {
    [sym__expression] = STATE(201),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(1417),
    [anon_sym_LF] = ACTIONS(1417),
    [anon_sym_SEMI] = ACTIONS(1417),
    [anon_sym_fn] = ACTIONS(1423),
    [anon_sym_let] = ACTIONS(1423),
    [anon_sym_LPAREN] = ACTIONS(1429),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1436),
    [anon_sym_return] = ACTIONS(1443),
    [anon_sym_LBRACK] = ACTIONS(1450),
    [anon_sym_if] = ACTIONS(1457),
    [sym_number_literal] = ACTIONS(1464),
    [anon_sym_DQUOTE] = ACTIONS(1471),
    [sym_raw_string_literal] = ACTIONS(1464),
    [anon_sym_SQUOTE] = ACTIONS(1478),
    [sym_boolean_literal] = ACTIONS(1464),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(1485),
    [anon_sym_RBRACE] = ACTIONS(1417),
  },
  [488] = {
    [sym__expression] = STATE(495),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1012),
    [anon_sym_return] = ACTIONS(1014),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(1016),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [489] = {
    [sym__expression] = STATE(493),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1022),
    [anon_sym_return] = ACTIONS(1024),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(1026),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [490] = {
    [anon_sym_SEMI] = ACTIONS(1492),
    [anon_sym_COLON] = ACTIONS(1492),
    [anon_sym_EQ] = ACTIONS(1496),
    [anon_sym_LPAREN] = ACTIONS(1500),
    [anon_sym_COMMA] = ACTIONS(1500),
    [anon_sym_RPAREN] = ACTIONS(1500),
    [anon_sym_PIPE] = ACTIONS(1503),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1507),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1500),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1507),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1500),
    [anon_sym_AMP_AMP] = ACTIONS(1500),
    [anon_sym_PIPE_PIPE] = ACTIONS(1500),
    [anon_sym_RBRACK] = ACTIONS(1500),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(1500),
    [anon_sym_RBRACE] = ACTIONS(1500),
  },
  [491] = {
    [anon_sym_SEMI] = ACTIONS(1510),
    [anon_sym_COLON] = ACTIONS(1510),
    [anon_sym_EQ] = ACTIONS(1513),
    [anon_sym_LPAREN] = ACTIONS(1510),
    [anon_sym_COMMA] = ACTIONS(1510),
    [anon_sym_RPAREN] = ACTIONS(1510),
    [anon_sym_PIPE] = ACTIONS(1513),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1513),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1510),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1513),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1510),
    [anon_sym_AMP_AMP] = ACTIONS(1510),
    [anon_sym_PIPE_PIPE] = ACTIONS(1510),
    [anon_sym_RBRACK] = ACTIONS(1510),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(1510),
    [anon_sym_RBRACE] = ACTIONS(1510),
  },
  [492] = {
    [sym_else_tail] = STATE(463),
    [ts_builtin_sym_end] = ACTIONS(1516),
    [anon_sym_LF] = ACTIONS(1516),
    [anon_sym_SEMI] = ACTIONS(1516),
    [anon_sym_fn] = ACTIONS(1519),
    [anon_sym_let] = ACTIONS(1519),
    [anon_sym_COLON] = ACTIONS(1516),
    [anon_sym_EQ] = ACTIONS(1519),
    [anon_sym_LPAREN] = ACTIONS(1516),
    [anon_sym_COMMA] = ACTIONS(1516),
    [anon_sym_RPAREN] = ACTIONS(1516),
    [anon_sym_PIPE] = ACTIONS(1519),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1519),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1522),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1522),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1519),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1516),
    [anon_sym_AMP_AMP] = ACTIONS(1516),
    [anon_sym_PIPE_PIPE] = ACTIONS(1516),
    [anon_sym_return] = ACTIONS(1519),
    [anon_sym_LBRACK] = ACTIONS(1516),
    [anon_sym_RBRACK] = ACTIONS(1516),
    [anon_sym_if] = ACTIONS(1519),
    [anon_sym_else] = ACTIONS(1332),
    [sym_number_literal] = ACTIONS(1519),
    [anon_sym_DQUOTE] = ACTIONS(1516),
    [sym_raw_string_literal] = ACTIONS(1519),
    [anon_sym_SQUOTE] = ACTIONS(1516),
    [sym_boolean_literal] = ACTIONS(1519),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(1522),
    [anon_sym_LBRACE] = ACTIONS(1516),
    [anon_sym_RBRACE] = ACTIONS(1516),
  },
  [493] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(1355),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(449),
    [anon_sym_RPAREN] = ACTIONS(449),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1357),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1359),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1357),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1359),
    [anon_sym_AMP_AMP] = ACTIONS(1359),
    [anon_sym_PIPE_PIPE] = ACTIONS(1359),
    [anon_sym_RBRACK] = ACTIONS(449),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [494] = {
    [sym__expression] = STATE(496),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [495] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(453),
    [anon_sym_COLON] = ACTIONS(453),
    [anon_sym_EQ] = ACTIONS(1525),
    [anon_sym_LPAREN] = ACTIONS(1376),
    [anon_sym_COMMA] = ACTIONS(453),
    [anon_sym_RPAREN] = ACTIONS(453),
    [anon_sym_PIPE] = ACTIONS(451),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1528),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1531),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1528),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1531),
    [anon_sym_AMP_AMP] = ACTIONS(1531),
    [anon_sym_PIPE_PIPE] = ACTIONS(1531),
    [anon_sym_RBRACK] = ACTIONS(453),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(453),
    [anon_sym_RBRACE] = ACTIONS(453),
  },
  [496] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(497),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(289),
  },
  [497] = {
    [sym_else_tail] = STATE(52),
    [anon_sym_SEMI] = ACTIONS(299),
    [anon_sym_COLON] = ACTIONS(299),
    [anon_sym_EQ] = ACTIONS(301),
    [anon_sym_LPAREN] = ACTIONS(299),
    [anon_sym_COMMA] = ACTIONS(299),
    [anon_sym_RPAREN] = ACTIONS(299),
    [anon_sym_PIPE] = ACTIONS(301),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(301),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(299),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(301),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(299),
    [anon_sym_AMP_AMP] = ACTIONS(299),
    [anon_sym_PIPE_PIPE] = ACTIONS(299),
    [anon_sym_RBRACK] = ACTIONS(299),
    [anon_sym_else] = ACTIONS(1534),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(299),
    [anon_sym_RBRACE] = ACTIONS(299),
  },
  [498] = {
    [sym_if_expression] = STATE(54),
    [sym_if_let_expression] = STATE(54),
    [sym_block] = STATE(54),
    [anon_sym_if] = ACTIONS(1536),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(289),
  },
  [499] = {
    [sym__expression] = STATE(496),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_let] = ACTIONS(1538),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [500] = {
    [sym__pattern] = STATE(501),
    [sym__expression] = STATE(83),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(355),
    [anon_sym_return] = ACTIONS(357),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(359),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [501] = {
    [anon_sym_EQ] = ACTIONS(1540),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [502] = {
    [sym__expression] = STATE(503),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [503] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(504),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(289),
  },
  [504] = {
    [sym_else_tail] = STATE(153),
    [anon_sym_SEMI] = ACTIONS(497),
    [anon_sym_COLON] = ACTIONS(497),
    [anon_sym_EQ] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_COMMA] = ACTIONS(497),
    [anon_sym_RPAREN] = ACTIONS(497),
    [anon_sym_PIPE] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(497),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(497),
    [anon_sym_AMP_AMP] = ACTIONS(497),
    [anon_sym_PIPE_PIPE] = ACTIONS(497),
    [anon_sym_RBRACK] = ACTIONS(497),
    [anon_sym_else] = ACTIONS(1534),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(497),
    [anon_sym_RBRACE] = ACTIONS(497),
  },
  [505] = {
    [ts_builtin_sym_end] = ACTIONS(1542),
    [anon_sym_LF] = ACTIONS(1542),
    [anon_sym_SEMI] = ACTIONS(1542),
    [anon_sym_fn] = ACTIONS(1545),
    [anon_sym_let] = ACTIONS(1545),
    [anon_sym_LPAREN] = ACTIONS(1542),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1542),
    [anon_sym_return] = ACTIONS(1545),
    [anon_sym_LBRACK] = ACTIONS(1542),
    [anon_sym_if] = ACTIONS(1545),
    [sym_number_literal] = ACTIONS(1545),
    [anon_sym_DQUOTE] = ACTIONS(1542),
    [sym_raw_string_literal] = ACTIONS(1545),
    [anon_sym_SQUOTE] = ACTIONS(1542),
    [sym_boolean_literal] = ACTIONS(1545),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(1548),
    [anon_sym_RBRACE] = ACTIONS(1542),
  },
  [506] = {
    [sym__expression] = STATE(507),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_return] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(127),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [507] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(1551),
    [anon_sym_EQ] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(213),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(215),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(217),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(219),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(223),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [508] = {
    [ts_builtin_sym_end] = ACTIONS(1553),
    [anon_sym_LF] = ACTIONS(1553),
    [anon_sym_SEMI] = ACTIONS(1553),
    [anon_sym_fn] = ACTIONS(1556),
    [anon_sym_let] = ACTIONS(1556),
    [anon_sym_LPAREN] = ACTIONS(1553),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1553),
    [anon_sym_return] = ACTIONS(1556),
    [anon_sym_LBRACK] = ACTIONS(1553),
    [anon_sym_if] = ACTIONS(1556),
    [sym_number_literal] = ACTIONS(1556),
    [anon_sym_DQUOTE] = ACTIONS(1553),
    [sym_raw_string_literal] = ACTIONS(1556),
    [anon_sym_SQUOTE] = ACTIONS(1553),
    [sym_boolean_literal] = ACTIONS(1556),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(1559),
    [anon_sym_RBRACE] = ACTIONS(1553),
  },
  [509] = {
    [ts_builtin_sym_end] = ACTIONS(1562),
    [anon_sym_LF] = ACTIONS(1562),
    [anon_sym_SEMI] = ACTIONS(1562),
    [anon_sym_fn] = ACTIONS(1565),
    [anon_sym_let] = ACTIONS(1565),
    [anon_sym_LPAREN] = ACTIONS(1562),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1562),
    [anon_sym_return] = ACTIONS(1565),
    [anon_sym_LBRACK] = ACTIONS(1562),
    [anon_sym_if] = ACTIONS(1565),
    [sym_number_literal] = ACTIONS(1565),
    [anon_sym_DQUOTE] = ACTIONS(1562),
    [sym_raw_string_literal] = ACTIONS(1565),
    [anon_sym_SQUOTE] = ACTIONS(1562),
    [sym_boolean_literal] = ACTIONS(1565),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(1568),
    [anon_sym_RBRACE] = ACTIONS(1562),
  },
  [510] = {
    [sym_type_expression] = STATE(532),
    [anon_sym_u8] = ACTIONS(719),
    [anon_sym_i8] = ACTIONS(719),
    [anon_sym_u16] = ACTIONS(719),
    [anon_sym_i16] = ACTIONS(719),
    [anon_sym_u32] = ACTIONS(719),
    [anon_sym_i32] = ACTIONS(719),
    [anon_sym_u64] = ACTIONS(719),
    [anon_sym_i64] = ACTIONS(719),
    [anon_sym_isize] = ACTIONS(719),
    [anon_sym_usize] = ACTIONS(719),
    [anon_sym_f32] = ACTIONS(719),
    [anon_sym_f64] = ACTIONS(719),
    [sym_boolean_literal] = ACTIONS(719),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(721),
  },
  [511] = {
    [sym__expression] = STATE(515),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1571),
    [anon_sym_return] = ACTIONS(1573),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(1575),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [512] = {
    [sym__expression] = STATE(531),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1571),
    [anon_sym_return] = ACTIONS(1573),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(1575),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [513] = {
    [sym__expression] = STATE(530),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_SEMI] = ACTIONS(129),
    [anon_sym_EQ] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(1079),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1577),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(135),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(135),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(131),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(129),
    [anon_sym_AMP_AMP] = ACTIONS(129),
    [anon_sym_PIPE_PIPE] = ACTIONS(129),
    [anon_sym_return] = ACTIONS(1573),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(1575),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(129),
  },
  [514] = {
    [sym__expression] = STATE(521),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [515] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(518),
    [anon_sym_SEMI] = ACTIONS(1176),
    [anon_sym_EQ] = ACTIONS(1579),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1581),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1583),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1581),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1583),
    [anon_sym_AMP_AMP] = ACTIONS(1583),
    [anon_sym_PIPE_PIPE] = ACTIONS(1583),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(661),
  },
  [516] = {
    [sym__expression] = STATE(520),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1571),
    [anon_sym_return] = ACTIONS(1573),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(1575),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [517] = {
    [sym__expression] = STATE(519),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1571),
    [anon_sym_return] = ACTIONS(1573),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(1575),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [518] = {
    [sym_else_tail] = STATE(308),
    [ts_builtin_sym_end] = ACTIONS(497),
    [anon_sym_LF] = ACTIONS(497),
    [anon_sym_SEMI] = ACTIONS(497),
    [anon_sym_fn] = ACTIONS(495),
    [anon_sym_let] = ACTIONS(495),
    [anon_sym_COLON] = ACTIONS(497),
    [anon_sym_EQ] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_COMMA] = ACTIONS(497),
    [anon_sym_RPAREN] = ACTIONS(497),
    [anon_sym_PIPE] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(853),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(853),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(497),
    [anon_sym_AMP_AMP] = ACTIONS(497),
    [anon_sym_PIPE_PIPE] = ACTIONS(497),
    [anon_sym_return] = ACTIONS(495),
    [anon_sym_LBRACK] = ACTIONS(497),
    [anon_sym_RBRACK] = ACTIONS(497),
    [anon_sym_if] = ACTIONS(495),
    [anon_sym_else] = ACTIONS(1332),
    [sym_number_literal] = ACTIONS(495),
    [anon_sym_DQUOTE] = ACTIONS(497),
    [sym_raw_string_literal] = ACTIONS(495),
    [anon_sym_SQUOTE] = ACTIONS(497),
    [sym_boolean_literal] = ACTIONS(495),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(853),
    [anon_sym_LBRACE] = ACTIONS(497),
    [anon_sym_RBRACE] = ACTIONS(497),
  },
  [519] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(269),
    [anon_sym_EQ] = ACTIONS(1585),
    [anon_sym_LPAREN] = ACTIONS(1364),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1588),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1591),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1588),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1591),
    [anon_sym_AMP_AMP] = ACTIONS(1591),
    [anon_sym_PIPE_PIPE] = ACTIONS(1591),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(269),
  },
  [520] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(453),
    [anon_sym_EQ] = ACTIONS(1594),
    [anon_sym_LPAREN] = ACTIONS(1376),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1597),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1600),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1597),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1600),
    [anon_sym_AMP_AMP] = ACTIONS(1600),
    [anon_sym_PIPE_PIPE] = ACTIONS(1600),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(453),
  },
  [521] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(522),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(289),
  },
  [522] = {
    [sym_else_tail] = STATE(52),
    [anon_sym_SEMI] = ACTIONS(299),
    [anon_sym_EQ] = ACTIONS(301),
    [anon_sym_LPAREN] = ACTIONS(299),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(301),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(299),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(301),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(299),
    [anon_sym_AMP_AMP] = ACTIONS(299),
    [anon_sym_PIPE_PIPE] = ACTIONS(299),
    [anon_sym_else] = ACTIONS(1603),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(299),
  },
  [523] = {
    [sym_if_expression] = STATE(54),
    [sym_if_let_expression] = STATE(54),
    [sym_block] = STATE(54),
    [anon_sym_if] = ACTIONS(1605),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(289),
  },
  [524] = {
    [sym__expression] = STATE(521),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_let] = ACTIONS(1607),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [525] = {
    [sym__pattern] = STATE(526),
    [sym__expression] = STATE(83),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(355),
    [anon_sym_return] = ACTIONS(357),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(359),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [526] = {
    [anon_sym_EQ] = ACTIONS(1609),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [527] = {
    [sym__expression] = STATE(528),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [528] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(529),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(289),
  },
  [529] = {
    [sym_else_tail] = STATE(153),
    [anon_sym_SEMI] = ACTIONS(497),
    [anon_sym_EQ] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(497),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(497),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(497),
    [anon_sym_AMP_AMP] = ACTIONS(497),
    [anon_sym_PIPE_PIPE] = ACTIONS(497),
    [anon_sym_else] = ACTIONS(1603),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(497),
  },
  [530] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(609),
    [anon_sym_EQ] = ACTIONS(1611),
    [anon_sym_LPAREN] = ACTIONS(1396),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1614),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1617),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1614),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1617),
    [anon_sym_AMP_AMP] = ACTIONS(1617),
    [anon_sym_PIPE_PIPE] = ACTIONS(1617),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(609),
  },
  [531] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(611),
    [anon_sym_EQ] = ACTIONS(1620),
    [anon_sym_LPAREN] = ACTIONS(1408),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1623),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1626),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1623),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1626),
    [anon_sym_AMP_AMP] = ACTIONS(1626),
    [anon_sym_PIPE_PIPE] = ACTIONS(1626),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(611),
  },
  [532] = {
    [anon_sym_SEMI] = ACTIONS(1176),
    [anon_sym_EQ] = ACTIONS(1178),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [533] = {
    [sym__statement_list] = STATE(289),
    [sym__statement] = STATE(457),
    [sym__declaration_statement] = STATE(17),
    [sym__control_flow_statement] = STATE(17),
    [sym__item] = STATE(18),
    [sym_function_item] = STATE(19),
    [sym_let_declaration] = STATE(18),
    [sym__expression_statement] = STATE(17),
    [sym__expression] = STATE(20),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(535),
    [sym_if_let_expression] = STATE(23),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [sym_empty_statement] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(653),
    [anon_sym_SEMI] = ACTIONS(1629),
    [anon_sym_fn] = ACTIONS(1632),
    [anon_sym_let] = ACTIONS(1635),
    [anon_sym_LPAREN] = ACTIONS(1638),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1641),
    [anon_sym_return] = ACTIONS(1644),
    [anon_sym_LBRACK] = ACTIONS(1647),
    [anon_sym_if] = ACTIONS(1650),
    [sym_number_literal] = ACTIONS(1653),
    [anon_sym_DQUOTE] = ACTIONS(1656),
    [sym_raw_string_literal] = ACTIONS(1653),
    [anon_sym_SQUOTE] = ACTIONS(1659),
    [sym_boolean_literal] = ACTIONS(1653),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(1662),
    [anon_sym_RBRACE] = ACTIONS(653),
  },
  [534] = {
    [sym__expression] = STATE(537),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_let] = ACTIONS(1665),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [535] = {
    [ts_builtin_sym_end] = ACTIONS(229),
    [anon_sym_LF] = ACTIONS(229),
    [anon_sym_SEMI] = ACTIONS(1667),
    [anon_sym_fn] = ACTIONS(231),
    [anon_sym_let] = ACTIONS(231),
    [anon_sym_EQ] = ACTIONS(171),
    [anon_sym_LPAREN] = ACTIONS(1667),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(231),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(233),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(233),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(171),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(169),
    [anon_sym_AMP_AMP] = ACTIONS(169),
    [anon_sym_PIPE_PIPE] = ACTIONS(169),
    [anon_sym_return] = ACTIONS(231),
    [anon_sym_LBRACK] = ACTIONS(229),
    [anon_sym_RBRACK] = ACTIONS(169),
    [anon_sym_if] = ACTIONS(231),
    [sym_number_literal] = ACTIONS(231),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [sym_raw_string_literal] = ACTIONS(231),
    [anon_sym_SQUOTE] = ACTIONS(229),
    [sym_boolean_literal] = ACTIONS(231),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(235),
    [anon_sym_RBRACE] = ACTIONS(229),
  },
  [536] = {
    [sym__pattern] = STATE(546),
    [sym__expression] = STATE(83),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(355),
    [anon_sym_return] = ACTIONS(357),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(359),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [537] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(538),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(661),
  },
  [538] = {
    [sym_else_tail] = STATE(296),
    [ts_builtin_sym_end] = ACTIONS(299),
    [anon_sym_LF] = ACTIONS(299),
    [anon_sym_SEMI] = ACTIONS(299),
    [anon_sym_fn] = ACTIONS(301),
    [anon_sym_let] = ACTIONS(301),
    [anon_sym_EQ] = ACTIONS(301),
    [anon_sym_LPAREN] = ACTIONS(299),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(301),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(301),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(299),
    [anon_sym_AMP_AMP] = ACTIONS(299),
    [anon_sym_PIPE_PIPE] = ACTIONS(299),
    [anon_sym_return] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(299),
    [anon_sym_if] = ACTIONS(301),
    [anon_sym_else] = ACTIONS(1670),
    [sym_number_literal] = ACTIONS(301),
    [anon_sym_DQUOTE] = ACTIONS(299),
    [sym_raw_string_literal] = ACTIONS(301),
    [anon_sym_SQUOTE] = ACTIONS(299),
    [sym_boolean_literal] = ACTIONS(301),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(843),
    [anon_sym_RBRACE] = ACTIONS(299),
  },
  [539] = {
    [sym_if_expression] = STATE(298),
    [sym_if_let_expression] = STATE(298),
    [sym_block] = STATE(298),
    [anon_sym_if] = ACTIONS(1672),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(661),
  },
  [540] = {
    [sym__expression] = STATE(537),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_let] = ACTIONS(1674),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [541] = {
    [sym__pattern] = STATE(542),
    [sym__expression] = STATE(83),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(355),
    [anon_sym_return] = ACTIONS(357),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(359),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [542] = {
    [anon_sym_EQ] = ACTIONS(1676),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [543] = {
    [sym__expression] = STATE(544),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [544] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(545),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(661),
  },
  [545] = {
    [sym_else_tail] = STATE(308),
    [ts_builtin_sym_end] = ACTIONS(497),
    [anon_sym_LF] = ACTIONS(497),
    [anon_sym_SEMI] = ACTIONS(497),
    [anon_sym_fn] = ACTIONS(495),
    [anon_sym_let] = ACTIONS(495),
    [anon_sym_EQ] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(497),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(853),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(853),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(497),
    [anon_sym_AMP_AMP] = ACTIONS(497),
    [anon_sym_PIPE_PIPE] = ACTIONS(497),
    [anon_sym_return] = ACTIONS(495),
    [anon_sym_LBRACK] = ACTIONS(497),
    [anon_sym_if] = ACTIONS(495),
    [anon_sym_else] = ACTIONS(1670),
    [sym_number_literal] = ACTIONS(495),
    [anon_sym_DQUOTE] = ACTIONS(497),
    [sym_raw_string_literal] = ACTIONS(495),
    [anon_sym_SQUOTE] = ACTIONS(497),
    [sym_boolean_literal] = ACTIONS(495),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(853),
    [anon_sym_RBRACE] = ACTIONS(497),
  },
  [546] = {
    [anon_sym_EQ] = ACTIONS(1678),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [547] = {
    [sym__expression] = STATE(548),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [548] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(549),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(661),
  },
  [549] = {
    [sym_else_tail] = STATE(308),
    [ts_builtin_sym_end] = ACTIONS(497),
    [anon_sym_LF] = ACTIONS(497),
    [anon_sym_SEMI] = ACTIONS(497),
    [anon_sym_fn] = ACTIONS(495),
    [anon_sym_let] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(497),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(497),
    [anon_sym_return] = ACTIONS(495),
    [anon_sym_LBRACK] = ACTIONS(497),
    [anon_sym_if] = ACTIONS(495),
    [anon_sym_else] = ACTIONS(1680),
    [sym_number_literal] = ACTIONS(495),
    [anon_sym_DQUOTE] = ACTIONS(497),
    [sym_raw_string_literal] = ACTIONS(495),
    [anon_sym_SQUOTE] = ACTIONS(497),
    [sym_boolean_literal] = ACTIONS(495),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(853),
    [anon_sym_RBRACE] = ACTIONS(497),
  },
  [550] = {
    [sym_if_expression] = STATE(298),
    [sym_if_let_expression] = STATE(298),
    [sym_block] = STATE(298),
    [anon_sym_if] = ACTIONS(1682),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(661),
  },
  [551] = {
    [sym__expression] = STATE(552),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_let] = ACTIONS(1665),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [552] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(553),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(661),
  },
  [553] = {
    [sym_else_tail] = STATE(296),
    [ts_builtin_sym_end] = ACTIONS(299),
    [anon_sym_LF] = ACTIONS(299),
    [anon_sym_SEMI] = ACTIONS(299),
    [anon_sym_fn] = ACTIONS(301),
    [anon_sym_let] = ACTIONS(301),
    [anon_sym_LPAREN] = ACTIONS(299),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(299),
    [anon_sym_return] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(299),
    [anon_sym_if] = ACTIONS(301),
    [anon_sym_else] = ACTIONS(1680),
    [sym_number_literal] = ACTIONS(301),
    [anon_sym_DQUOTE] = ACTIONS(299),
    [sym_raw_string_literal] = ACTIONS(301),
    [anon_sym_SQUOTE] = ACTIONS(299),
    [sym_boolean_literal] = ACTIONS(301),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(843),
    [anon_sym_RBRACE] = ACTIONS(299),
  },
  [554] = {
    [sym_type_expression] = STATE(555),
    [anon_sym_u8] = ACTIONS(719),
    [anon_sym_i8] = ACTIONS(719),
    [anon_sym_u16] = ACTIONS(719),
    [anon_sym_i16] = ACTIONS(719),
    [anon_sym_u32] = ACTIONS(719),
    [anon_sym_i32] = ACTIONS(719),
    [anon_sym_u64] = ACTIONS(719),
    [anon_sym_i64] = ACTIONS(719),
    [anon_sym_isize] = ACTIONS(719),
    [anon_sym_usize] = ACTIONS(719),
    [anon_sym_f32] = ACTIONS(719),
    [anon_sym_f64] = ACTIONS(719),
    [sym_boolean_literal] = ACTIONS(719),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(721),
  },
  [555] = {
    [aux_sym_parameters_repeat1] = STATE(380),
    [anon_sym_COMMA] = ACTIONS(1180),
    [anon_sym_RPAREN] = ACTIONS(1184),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [556] = {
    [sym__pattern] = STATE(559),
    [sym__expression] = STATE(83),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(355),
    [anon_sym_return] = ACTIONS(357),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(359),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [557] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(558),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(661),
  },
  [558] = {
    [sym_else_tail] = STATE(296),
    [ts_builtin_sym_end] = ACTIONS(299),
    [anon_sym_LF] = ACTIONS(299),
    [anon_sym_SEMI] = ACTIONS(299),
    [anon_sym_fn] = ACTIONS(301),
    [anon_sym_let] = ACTIONS(301),
    [anon_sym_COLON] = ACTIONS(299),
    [anon_sym_EQ] = ACTIONS(301),
    [anon_sym_LPAREN] = ACTIONS(299),
    [anon_sym_COMMA] = ACTIONS(299),
    [anon_sym_RPAREN] = ACTIONS(299),
    [anon_sym_PIPE] = ACTIONS(301),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(301),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(301),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(299),
    [anon_sym_AMP_AMP] = ACTIONS(299),
    [anon_sym_PIPE_PIPE] = ACTIONS(299),
    [anon_sym_return] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(299),
    [anon_sym_RBRACK] = ACTIONS(299),
    [anon_sym_if] = ACTIONS(301),
    [anon_sym_else] = ACTIONS(1332),
    [sym_number_literal] = ACTIONS(301),
    [anon_sym_DQUOTE] = ACTIONS(299),
    [sym_raw_string_literal] = ACTIONS(301),
    [anon_sym_SQUOTE] = ACTIONS(299),
    [sym_boolean_literal] = ACTIONS(301),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(843),
    [anon_sym_LBRACE] = ACTIONS(299),
    [anon_sym_RBRACE] = ACTIONS(299),
  },
  [559] = {
    [anon_sym_EQ] = ACTIONS(1684),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [560] = {
    [sym__expression] = STATE(561),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [561] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(518),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(661),
  },
  [562] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(609),
    [anon_sym_COLON] = ACTIONS(609),
    [anon_sym_EQ] = ACTIONS(1686),
    [anon_sym_LPAREN] = ACTIONS(1396),
    [anon_sym_COMMA] = ACTIONS(609),
    [anon_sym_RPAREN] = ACTIONS(609),
    [anon_sym_PIPE] = ACTIONS(607),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1689),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1692),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1689),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1692),
    [anon_sym_AMP_AMP] = ACTIONS(1692),
    [anon_sym_PIPE_PIPE] = ACTIONS(1692),
    [anon_sym_RBRACK] = ACTIONS(609),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(609),
    [anon_sym_RBRACE] = ACTIONS(609),
  },
  [563] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(269),
    [anon_sym_COLON] = ACTIONS(269),
    [anon_sym_EQ] = ACTIONS(1695),
    [anon_sym_LPAREN] = ACTIONS(1364),
    [anon_sym_COMMA] = ACTIONS(269),
    [anon_sym_RPAREN] = ACTIONS(269),
    [anon_sym_PIPE] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1698),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1701),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1698),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1701),
    [anon_sym_AMP_AMP] = ACTIONS(1701),
    [anon_sym_PIPE_PIPE] = ACTIONS(1701),
    [anon_sym_RBRACK] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(269),
    [anon_sym_RBRACE] = ACTIONS(269),
  },
  [564] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(611),
    [anon_sym_COLON] = ACTIONS(611),
    [anon_sym_EQ] = ACTIONS(1704),
    [anon_sym_LPAREN] = ACTIONS(1408),
    [anon_sym_COMMA] = ACTIONS(611),
    [anon_sym_RPAREN] = ACTIONS(611),
    [anon_sym_PIPE] = ACTIONS(613),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1707),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1710),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1707),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1710),
    [anon_sym_AMP_AMP] = ACTIONS(1710),
    [anon_sym_PIPE_PIPE] = ACTIONS(1710),
    [anon_sym_RBRACK] = ACTIONS(611),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(611),
    [anon_sym_RBRACE] = ACTIONS(611),
  },
  [565] = {
    [anon_sym_SEMI] = ACTIONS(1713),
    [anon_sym_COLON] = ACTIONS(1713),
    [anon_sym_EQ] = ACTIONS(1713),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [566] = {
    [anon_sym_COLON] = ACTIONS(1717),
    [anon_sym_EQ] = ACTIONS(171),
    [anon_sym_LPAREN] = ACTIONS(169),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_RPAREN] = ACTIONS(169),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(171),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(171),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(169),
    [anon_sym_AMP_AMP] = ACTIONS(169),
    [anon_sym_PIPE_PIPE] = ACTIONS(169),
    [anon_sym_RBRACK] = ACTIONS(169),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [567] = {
    [sym_arguments] = STATE(35),
    [anon_sym_EQ] = ACTIONS(1355),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(1719),
    [anon_sym_RPAREN] = ACTIONS(1719),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1357),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1359),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1357),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1359),
    [anon_sym_AMP_AMP] = ACTIONS(1359),
    [anon_sym_PIPE_PIPE] = ACTIONS(1359),
    [anon_sym_RBRACK] = ACTIONS(1719),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [568] = {
    [sym_type_expression] = STATE(569),
    [anon_sym_u8] = ACTIONS(719),
    [anon_sym_i8] = ACTIONS(719),
    [anon_sym_u16] = ACTIONS(719),
    [anon_sym_i16] = ACTIONS(719),
    [anon_sym_u32] = ACTIONS(719),
    [anon_sym_i32] = ACTIONS(719),
    [anon_sym_u64] = ACTIONS(719),
    [anon_sym_i64] = ACTIONS(719),
    [anon_sym_isize] = ACTIONS(719),
    [anon_sym_usize] = ACTIONS(719),
    [anon_sym_f32] = ACTIONS(719),
    [anon_sym_f64] = ACTIONS(719),
    [sym_boolean_literal] = ACTIONS(719),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(721),
  },
  [569] = {
    [anon_sym_COMMA] = ACTIONS(1722),
    [anon_sym_RPAREN] = ACTIONS(1722),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [570] = {
    [anon_sym_SEMI] = ACTIONS(1725),
    [anon_sym_DASH_GT] = ACTIONS(801),
    [anon_sym_COLON] = ACTIONS(1725),
    [anon_sym_EQ] = ACTIONS(1728),
    [anon_sym_LPAREN] = ACTIONS(411),
    [anon_sym_COMMA] = ACTIONS(411),
    [anon_sym_RPAREN] = ACTIONS(411),
    [anon_sym_PIPE] = ACTIONS(1731),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(413),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(413),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(413),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(411),
    [anon_sym_AMP_AMP] = ACTIONS(411),
    [anon_sym_PIPE_PIPE] = ACTIONS(411),
    [anon_sym_RBRACK] = ACTIONS(411),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(1734),
    [anon_sym_RBRACE] = ACTIONS(411),
  },
  [571] = {
    [anon_sym_COLON] = ACTIONS(803),
    [anon_sym_EQ] = ACTIONS(171),
    [anon_sym_LPAREN] = ACTIONS(169),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_RPAREN] = ACTIONS(169),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(171),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(171),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(169),
    [anon_sym_AMP_AMP] = ACTIONS(169),
    [anon_sym_PIPE_PIPE] = ACTIONS(169),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [572] = {
    [sym_arguments] = STATE(35),
    [aux_sym__pattern_repeat1] = STATE(573),
    [anon_sym_EQ] = ACTIONS(417),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(419),
    [anon_sym_RPAREN] = ACTIONS(1737),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(425),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(427),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(429),
    [anon_sym_AMP_AMP] = ACTIONS(431),
    [anon_sym_PIPE_PIPE] = ACTIONS(433),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [573] = {
    [anon_sym_COMMA] = ACTIONS(439),
    [anon_sym_RPAREN] = ACTIONS(1342),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [574] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(518),
    [anon_sym_SEMI] = ACTIONS(1739),
    [anon_sym_COLON] = ACTIONS(453),
    [anon_sym_EQ] = ACTIONS(1525),
    [anon_sym_LPAREN] = ACTIONS(1376),
    [anon_sym_COMMA] = ACTIONS(453),
    [anon_sym_RPAREN] = ACTIONS(453),
    [anon_sym_PIPE] = ACTIONS(451),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1528),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1531),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1528),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1531),
    [anon_sym_AMP_AMP] = ACTIONS(1531),
    [anon_sym_PIPE_PIPE] = ACTIONS(1531),
    [anon_sym_RBRACK] = ACTIONS(453),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(1742),
    [anon_sym_RBRACE] = ACTIONS(453),
  },
  [575] = {
    [ts_builtin_sym_end] = ACTIONS(1745),
    [anon_sym_LF] = ACTIONS(1745),
    [anon_sym_SEMI] = ACTIONS(1745),
    [anon_sym_fn] = ACTIONS(1750),
    [anon_sym_let] = ACTIONS(1750),
    [anon_sym_LPAREN] = ACTIONS(1745),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1745),
    [anon_sym_return] = ACTIONS(1750),
    [anon_sym_LBRACK] = ACTIONS(1745),
    [anon_sym_if] = ACTIONS(1750),
    [sym_number_literal] = ACTIONS(1750),
    [anon_sym_DQUOTE] = ACTIONS(1745),
    [sym_raw_string_literal] = ACTIONS(1750),
    [anon_sym_SQUOTE] = ACTIONS(1745),
    [sym_boolean_literal] = ACTIONS(1750),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(1755),
    [anon_sym_RBRACE] = ACTIONS(1745),
  },
  [576] = {
    [aux_sym_parameters_repeat1] = STATE(380),
    [anon_sym_SEMI] = ACTIONS(1176),
    [anon_sym_EQ] = ACTIONS(1178),
    [anon_sym_COMMA] = ACTIONS(1180),
    [anon_sym_RPAREN] = ACTIONS(1184),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [577] = {
    [anon_sym_SEMI] = ACTIONS(693),
    [anon_sym_COLON] = ACTIONS(695),
    [anon_sym_EQ] = ACTIONS(1760),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [578] = {
    [sym__expression] = STATE(579),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1571),
    [anon_sym_return] = ACTIONS(1573),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(1575),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [579] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(518),
    [anon_sym_SEMI] = ACTIONS(723),
    [anon_sym_EQ] = ACTIONS(1579),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1581),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1583),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1581),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1583),
    [anon_sym_AMP_AMP] = ACTIONS(1583),
    [anon_sym_PIPE_PIPE] = ACTIONS(1583),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(661),
  },
  [580] = {
    [sym__expression] = STATE(608),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1762),
    [anon_sym_return] = ACTIONS(1764),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(1766),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [581] = {
    [sym__expression] = STATE(607),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_SEMI] = ACTIONS(129),
    [anon_sym_EQ] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(1079),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1768),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(135),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(135),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(131),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(129),
    [anon_sym_AMP_AMP] = ACTIONS(129),
    [anon_sym_PIPE_PIPE] = ACTIONS(129),
    [anon_sym_return] = ACTIONS(1764),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(129),
    [anon_sym_if] = ACTIONS(1766),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [582] = {
    [sym__expression] = STATE(598),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_let] = ACTIONS(1665),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [583] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(207),
    [anon_sym_EQ] = ACTIONS(1770),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1772),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1774),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1772),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1774),
    [anon_sym_AMP_AMP] = ACTIONS(1774),
    [anon_sym_PIPE_PIPE] = ACTIONS(1774),
    [anon_sym_RBRACK] = ACTIONS(593),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [584] = {
    [sym__expression] = STATE(597),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1762),
    [anon_sym_return] = ACTIONS(1764),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(1766),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [585] = {
    [sym__expression] = STATE(587),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1762),
    [anon_sym_return] = ACTIONS(1764),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(1766),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [586] = {
    [sym__expression] = STATE(588),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [587] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(269),
    [anon_sym_EQ] = ACTIONS(1776),
    [anon_sym_LPAREN] = ACTIONS(1364),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1779),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1782),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1779),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1782),
    [anon_sym_AMP_AMP] = ACTIONS(1782),
    [anon_sym_PIPE_PIPE] = ACTIONS(1782),
    [anon_sym_RBRACK] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [588] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(589),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(289),
  },
  [589] = {
    [sym_else_tail] = STATE(52),
    [anon_sym_SEMI] = ACTIONS(299),
    [anon_sym_EQ] = ACTIONS(301),
    [anon_sym_LPAREN] = ACTIONS(299),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(301),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(299),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(301),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(299),
    [anon_sym_AMP_AMP] = ACTIONS(299),
    [anon_sym_PIPE_PIPE] = ACTIONS(299),
    [anon_sym_RBRACK] = ACTIONS(299),
    [anon_sym_else] = ACTIONS(1785),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [590] = {
    [sym_if_expression] = STATE(54),
    [sym_if_let_expression] = STATE(54),
    [sym_block] = STATE(54),
    [anon_sym_if] = ACTIONS(1787),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(289),
  },
  [591] = {
    [sym__expression] = STATE(588),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_let] = ACTIONS(1789),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [592] = {
    [sym__pattern] = STATE(593),
    [sym__expression] = STATE(83),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(355),
    [anon_sym_return] = ACTIONS(357),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(359),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [593] = {
    [anon_sym_EQ] = ACTIONS(1791),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [594] = {
    [sym__expression] = STATE(595),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [595] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(596),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(289),
  },
  [596] = {
    [sym_else_tail] = STATE(153),
    [anon_sym_SEMI] = ACTIONS(497),
    [anon_sym_EQ] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(497),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(497),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(497),
    [anon_sym_AMP_AMP] = ACTIONS(497),
    [anon_sym_PIPE_PIPE] = ACTIONS(497),
    [anon_sym_RBRACK] = ACTIONS(497),
    [anon_sym_else] = ACTIONS(1785),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [597] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(453),
    [anon_sym_EQ] = ACTIONS(1793),
    [anon_sym_LPAREN] = ACTIONS(1376),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1796),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1799),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1796),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1799),
    [anon_sym_AMP_AMP] = ACTIONS(1799),
    [anon_sym_PIPE_PIPE] = ACTIONS(1799),
    [anon_sym_RBRACK] = ACTIONS(453),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [598] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(599),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(661),
  },
  [599] = {
    [sym_else_tail] = STATE(296),
    [ts_builtin_sym_end] = ACTIONS(299),
    [anon_sym_LF] = ACTIONS(299),
    [anon_sym_SEMI] = ACTIONS(299),
    [anon_sym_fn] = ACTIONS(301),
    [anon_sym_let] = ACTIONS(301),
    [anon_sym_EQ] = ACTIONS(301),
    [anon_sym_LPAREN] = ACTIONS(299),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(301),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(301),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(299),
    [anon_sym_AMP_AMP] = ACTIONS(299),
    [anon_sym_PIPE_PIPE] = ACTIONS(299),
    [anon_sym_return] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(299),
    [anon_sym_RBRACK] = ACTIONS(299),
    [anon_sym_if] = ACTIONS(301),
    [anon_sym_else] = ACTIONS(1802),
    [sym_number_literal] = ACTIONS(301),
    [anon_sym_DQUOTE] = ACTIONS(299),
    [sym_raw_string_literal] = ACTIONS(301),
    [anon_sym_SQUOTE] = ACTIONS(299),
    [sym_boolean_literal] = ACTIONS(301),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(843),
    [anon_sym_RBRACE] = ACTIONS(299),
  },
  [600] = {
    [sym_if_expression] = STATE(298),
    [sym_if_let_expression] = STATE(298),
    [sym_block] = STATE(298),
    [anon_sym_if] = ACTIONS(1804),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(661),
  },
  [601] = {
    [sym__expression] = STATE(598),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_let] = ACTIONS(1806),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [602] = {
    [sym__pattern] = STATE(603),
    [sym__expression] = STATE(83),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(355),
    [anon_sym_return] = ACTIONS(357),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(359),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [603] = {
    [anon_sym_EQ] = ACTIONS(1808),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [604] = {
    [sym__expression] = STATE(605),
    [sym_unary_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_assignment_expression] = STATE(21),
    [sym_return_expression] = STATE(13),
    [sym_call_expression] = STATE(13),
    [sym_array_expression] = STATE(13),
    [sym_if_expression] = STATE(13),
    [sym__literal] = STATE(13),
    [sym_string_literal] = STATE(10),
    [sym_char_literal] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(83),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(151),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(99),
  },
  [605] = {
    [sym_arguments] = STATE(35),
    [sym_block] = STATE(606),
    [anon_sym_EQ] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(285),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(661),
  },
  [606] = {
    [sym_else_tail] = STATE(308),
    [ts_builtin_sym_end] = ACTIONS(497),
    [anon_sym_LF] = ACTIONS(497),
    [anon_sym_SEMI] = ACTIONS(497),
    [anon_sym_fn] = ACTIONS(495),
    [anon_sym_let] = ACTIONS(495),
    [anon_sym_EQ] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(497),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(853),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(853),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(495),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(497),
    [anon_sym_AMP_AMP] = ACTIONS(497),
    [anon_sym_PIPE_PIPE] = ACTIONS(497),
    [anon_sym_return] = ACTIONS(495),
    [anon_sym_LBRACK] = ACTIONS(497),
    [anon_sym_RBRACK] = ACTIONS(497),
    [anon_sym_if] = ACTIONS(495),
    [anon_sym_else] = ACTIONS(1802),
    [sym_number_literal] = ACTIONS(495),
    [anon_sym_DQUOTE] = ACTIONS(497),
    [sym_raw_string_literal] = ACTIONS(495),
    [anon_sym_SQUOTE] = ACTIONS(497),
    [sym_boolean_literal] = ACTIONS(495),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
    [sym_identifier] = ACTIONS(853),
    [anon_sym_RBRACE] = ACTIONS(497),
  },
  [607] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(609),
    [anon_sym_EQ] = ACTIONS(1810),
    [anon_sym_LPAREN] = ACTIONS(1396),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1813),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1816),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1813),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1816),
    [anon_sym_AMP_AMP] = ACTIONS(1816),
    [anon_sym_PIPE_PIPE] = ACTIONS(1816),
    [anon_sym_RBRACK] = ACTIONS(609),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
  [608] = {
    [sym_arguments] = STATE(35),
    [anon_sym_SEMI] = ACTIONS(611),
    [anon_sym_EQ] = ACTIONS(1819),
    [anon_sym_LPAREN] = ACTIONS(1408),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1822),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1825),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1822),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1825),
    [anon_sym_AMP_AMP] = ACTIONS(1825),
    [anon_sym_PIPE_PIPE] = ACTIONS(1825),
    [anon_sym_RBRACK] = ACTIONS(611),
    [sym_line_comment] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(67),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(435),
  [5] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(3),
  [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(370),
  [9] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(436),
  [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(437),
  [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(438),
  [15] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(439),
  [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(440),
  [19] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(441),
  [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(78),
  [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(442),
  [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(342),
  [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(318),
  [29] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(443),
  [31] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(444),
  [33] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(444),
  [35] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(444),
  [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(445),
  [39] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(8),
  [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(446),
  [43] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(447),
  [45] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(448),
  [47] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(10),
  [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(449),
  [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(450),
  [53] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(450),
  [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(451),
  [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(137),
  [59] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(137),
  [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(452),
  [63] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(453),
  [65] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [67] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [69] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(454),
  [71] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(293),
  [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(455),
  [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_source_file, 0),
  [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
  [79] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
  [81] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
  [83] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
  [85] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
  [87] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
  [89] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(8),
  [91] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(9),
  [93] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(10),
  [95] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(11),
  [97] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
  [99] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(13),
  [101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1),
  [103] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_empty_statement, 1),
  [105] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1),
  [107] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(367),
  [109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
  [111] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(78),
  [113] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(318),
  [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(319),
  [117] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(320),
  [119] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(321),
  [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
  [123] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(94),
  [125] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(95),
  [127] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(36),
  [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_return_expression, 1),
  [131] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_return_expression, 1),
  [133] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
  [135] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_return_expression, 1),
  [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(154),
  [139] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(155),
  [141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(156),
  [143] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(157),
  [145] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(416),
  [147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
  [149] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(39),
  [151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(40),
  [153] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [155] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(139),
  [159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
  [161] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(140),
  [163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(136),
  [165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(137),
  [167] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(137),
  [169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [171] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 1),
  [177] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_source_file_repeat1, 1),
  [179] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 1),
  [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 1),
  [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(415),
  [185] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym__statement_list, 1),
  [187] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 1),
  [189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [191] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
  [193] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declaration_statement, 1),
  [197] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__declaration_statement, 1),
  [199] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__declaration_statement, 1),
  [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__item, 1),
  [203] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__item, 1),
  [205] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__item, 1),
  [207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(26),
  [209] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(27),
  [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(28),
  [213] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(29),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
  [217] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(31),
  [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(32),
  [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
  [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
  [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 1),
  [227] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_binary_expression, 1),
  [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__control_flow_statement, 1),
  [231] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym__control_flow_statement, 1),
  [233] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [235] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__control_flow_statement, 1),
  [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__control_flow_statement, 1),
  [239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__control_flow_statement, 1),
  [241] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__control_flow_statement, 1),
  [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_source_file, 1),
  [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 2),
  [247] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [249] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 2),
  [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression_statement, 2),
  [253] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression_statement, 2),
  [255] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression_statement, 2),
  [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(111),
  [259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
  [261] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(113),
  [263] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(114),
  [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call_expression, 2),
  [269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_expression, 3),
  [271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_expression, 3),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(38),
  [275] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(42),
  [277] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(43),
  [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(44),
  [281] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(45),
  [283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(46),
  [285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(47),
  [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
  [289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
  [291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
  [293] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(56),
  [295] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(57),
  [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
  [299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_expression, 3),
  [301] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_expression, 3),
  [303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
  [305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
  [307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_expression, 4),
  [309] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_expression, 4),
  [311] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(389),
  [313] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_tail, 2),
  [315] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_tail, 2),
  [317] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(70),
  [319] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(55),
  [321] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(291),
  [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block, 2),
  [325] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_block, 2),
  [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
  [329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(288),
  [331] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(62),
  [333] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(63),
  [335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
  [337] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(65),
  [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(66),
  [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(67),
  [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(68),
  [345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block, 3),
  [347] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_block, 3),
  [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(74),
  [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
  [353] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(76),
  [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(79),
  [357] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(80),
  [359] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(81),
  [361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(275),
  [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__pattern, 1),
  [365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(85),
  [367] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(79),
  [369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(262),
  [371] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym__pattern, 1),
  [373] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(85),
  [375] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(86),
  [377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
  [379] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(88),
  [381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(89),
  [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(90),
  [385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
  [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__pattern, 2),
  [389] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(93),
  [391] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(97),
  [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
  [395] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(99),
  [397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(100),
  [399] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(101),
  [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
  [403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
  [405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
  [407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__expression, 3),
  [409] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym__expression, 3),
  [411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 2),
  [413] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_arguments, 2),
  [415] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(112),
  [417] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(116),
  [419] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(117),
  [421] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
  [423] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(119),
  [425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(120),
  [427] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(121),
  [429] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(122),
  [431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(123),
  [433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
  [435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3),
  [437] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_arguments, 3),
  [439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(126),
  [441] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
  [443] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 4),
  [445] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_arguments, 4),
  [447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__pattern_repeat1, 3),
  [449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__pattern_repeat1, 2),
  [451] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_assignment_expression, 3),
  [453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_assignment_expression, 3),
  [455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char_literal, 2),
  [457] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char_literal, 2),
  [459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(138),
  [461] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char_literal, 3),
  [463] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char_literal, 3),
  [465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 2),
  [467] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string_literal, 2),
  [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_string_literal_repeat1, 1),
  [471] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_string_literal_repeat1, 1),
  [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(142),
  [475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(143),
  [477] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(143),
  [479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 3),
  [481] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string_literal, 3),
  [483] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [485] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(146),
  [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
  [491] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(148),
  [493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(150),
  [495] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_let_expression, 6),
  [497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_let_expression, 6),
  [499] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_let_expression, 7),
  [501] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_let_expression, 7),
  [503] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(154),
  [505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_expression, 2),
  [507] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_expression, 2),
  [509] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(159),
  [511] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(160),
  [513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(161),
  [515] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(162),
  [517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(163),
  [519] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(164),
  [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
  [523] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(166),
  [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(167),
  [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(168),
  [529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(198),
  [531] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(199),
  [533] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(200),
  [535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(172),
  [537] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(173),
  [539] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(174),
  [541] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_expression, 3),
  [543] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_expression, 3),
  [545] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(170),
  [547] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(171),
  [549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_expression, 4),
  [551] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_expression, 4),
  [553] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(172),
  [555] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(176),
  [557] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(177),
  [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(178),
  [561] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(179),
  [563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(180),
  [565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(181),
  [567] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(182),
  [569] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(191),
  [571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(192),
  [573] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(193),
  [575] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(195),
  [577] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(198),
  [579] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(202),
  [581] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(203),
  [583] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(204),
  [585] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(205),
  [587] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(206),
  [589] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(207),
  [591] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(208),
  [593] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(209),
  [595] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_expression, 5),
  [597] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_expression, 5),
  [599] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(218),
  [601] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(219),
  [603] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(220),
  [605] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(222),
  [607] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_return_expression, 2),
  [609] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_return_expression, 2),
  [611] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2),
  [613] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_expression, 2),
  [615] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(237),
  [617] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(238),
  [619] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(239),
  [621] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(241),
  [623] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(249),
  [625] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(250),
  [627] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(251),
  [629] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(253),
  [631] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(267),
  [633] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(268),
  [635] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(269),
  [637] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(271),
  [639] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(282),
  [641] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(277),
  [643] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(279),
  [645] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__pattern, 4),
  [647] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(280),
  [649] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__pattern, 5),
  [651] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__pattern, 3),
  [653] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 2),
  [655] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement_list, 3),
  [657] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement_list, 3),
  [659] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement_list, 3),
  [661] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(293),
  [663] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(299),
  [665] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(295),
  [667] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(297),
  [669] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_expression, 4),
  [671] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(303),
  [673] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_tail, 2),
  [675] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_block, 2),
  [677] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(302),
  [679] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_block, 3),
  [681] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(305),
  [683] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_let_expression, 7),
  [685] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(310),
  [687] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(313),
  [689] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(314),
  [691] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(319),
  [693] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(337),
  [695] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(338),
  [697] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(339),
  [699] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__pattern, 1),
  [701] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(325),
  [703] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(326),
  [705] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(327),
  [707] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(328),
  [709] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(329),
  [711] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(330),
  [713] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 3),
  [715] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_declaration, 3),
  [717] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 3),
  [719] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(342),
  [721] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(342),
  [723] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(341),
  [725] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 5),
  [727] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_declaration, 5),
  [729] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 5),
  [731] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_expression, 1),
  [733] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(344),
  [735] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(346),
  [737] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 7),
  [739] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_declaration, 7),
  [741] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 7),
  [743] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(349),
  [745] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(350),
  [747] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(351),
  [749] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(353),
  [751] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(358),
  [753] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(359),
  [755] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(360),
  [757] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 4),
  [759] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_declaration, 4),
  [761] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 4),
  [763] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(362),
  [765] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 6),
  [767] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_declaration, 6),
  [769] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 6),
  [771] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(364),
  [773] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(366),
  [775] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 8),
  [777] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_declaration, 8),
  [779] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 8),
  [781] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(368),
  [783] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(374),
  [785] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(375),
  [787] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(370),
  [789] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_item, 4),
  [791] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_item, 4),
  [793] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_item, 4),
  [795] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_item, 6),
  [797] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_item, 6),
  [799] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_item, 6),
  [801] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2),
  [803] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(376),
  [805] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(378),
  [807] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(379),
  [809] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(386),
  [811] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5),
  [813] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(381),
  [815] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(382),
  [817] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(383),
  [819] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 6),
  [821] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(384),
  [823] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 5),
  [825] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(387),
  [827] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 4),
  [829] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(391),
  [831] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(402),
  [833] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(403),
  [835] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(404),
  [837] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(406),
  [839] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym__statement_list, 2),
  [841] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 2),
  [843] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_expression, 3),
  [845] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(419),
  [847] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(420),
  [849] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(421),
  [851] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(423),
  [853] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_let_expression, 6),
  [855] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(427),
  [857] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(430),
  [859] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(431),
  [861] = {.count = 9, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8),
  [871] = {.count = 8, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8),
  [880] = {.count = 10, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(2),
  [891] = {.count = 10, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(3),
  [902] = {.count = 10, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(4),
  [913] = {.count = 10, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(5),
  [924] = {.count = 10, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(580),
  [935] = {.count = 10, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(581),
  [946] = {.count = 10, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(8),
  [957] = {.count = 10, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(582),
  [968] = {.count = 10, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(10),
  [979] = {.count = 10, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(11),
  [990] = {.count = 10, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(12),
  [1001] = {.count = 10, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(13),
  [1012] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(443),
  [1014] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(445),
  [1016] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(494),
  [1018] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(570),
  [1020] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(571),
  [1022] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(468),
  [1024] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(469),
  [1026] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(470),
  [1028] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(566),
  [1030] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__pattern, 2), REDUCE(sym_arguments, 2), REDUCE_FRAGILE(sym__pattern, 3), REDUCE_FRAGILE(sym__expression, 3), REDUCE(sym_arguments, 3), REDUCE(sym__pattern, 4), REDUCE(sym_arguments, 4),
  [1038] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2), REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
  [1042] = {.count = 7, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__pattern, 2), REDUCE(sym_arguments, 2), REDUCE_FRAGILE(sym__pattern, 3), REDUCE_FRAGILE(sym__expression, 3), REDUCE(sym_arguments, 3), REDUCE(sym__pattern, 4), REDUCE(sym_arguments, 4),
  [1050] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 2), REDUCE_FRAGILE(sym__expression, 3), REDUCE(sym_arguments, 3), REDUCE(sym_arguments, 4),
  [1055] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_arguments, 2), REDUCE_FRAGILE(sym__expression, 3), REDUCE(sym_arguments, 3), REDUCE(sym_arguments, 4), SHIFT(565),
  [1061] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_arguments, 2), REDUCE_FRAGILE(sym__expression, 3), REDUCE(sym_arguments, 3), REDUCE(sym_arguments, 4),
  [1066] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 2), REDUCE(sym_parameters, 2), REDUCE_FRAGILE(sym__expression, 3), REDUCE(sym_arguments, 3), REDUCE(sym_arguments, 4), REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
  [1074] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__pattern, 2), REDUCE(sym__pattern, 3), REDUCE(sym__pattern, 4), REDUCE(sym__pattern, 5),
  [1079] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_return_expression, 1), SHIFT(5),
  [1082] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(443),
  [1084] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_expression, 2), REDUCE(sym_array_expression, 3), REDUCE(sym_array_expression, 4), REDUCE(sym_array_expression, 5),
  [1089] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_expression, 2), REDUCE(sym_array_expression, 3), REDUCE(sym_array_expression, 4), REDUCE(sym_array_expression, 5),
  [1094] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(556),
  [1096] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(447),
  [1098] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 2), REDUCE(sym_string_literal, 3),
  [1101] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string_literal, 2), REDUCE(sym_string_literal, 3),
  [1104] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(140),
  [1106] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_string_literal_repeat1, 1), REDUCE(aux_sym_string_literal_repeat1, 2),
  [1109] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_string_literal_repeat1, 1), REDUCE(aux_sym_string_literal_repeat1, 2),
  [1112] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char_literal, 2), REDUCE(sym_char_literal, 3),
  [1115] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char_literal, 2), REDUCE(sym_char_literal, 3),
  [1118] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(137),
  [1120] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_literal_repeat1, 1), REDUCE(aux_sym_string_literal_repeat1, 2),
  [1123] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_expression, 1), REDUCE(sym__literal, 1),
  [1126] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_expression, 1), REDUCE(sym__literal, 1),
  [1129] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_expression, 1), REDUCE(sym__expression, 1),
  [1132] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(554),
  [1135] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_expression, 1), REDUCE(sym__expression, 1),
  [1138] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(368),
  [1141] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block, 2), REDUCE(sym_block, 3),
  [1144] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_block, 2), REDUCE(sym_block, 3),
  [1147] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_block, 2), REDUCE(sym_block, 3),
  [1150] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 1), REDUCE(aux_sym_source_file_repeat1, 2), REDUCE(sym__statement_list, 3),
  [1154] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_source_file_repeat1, 1), REDUCE(aux_sym_source_file_repeat1, 2), REDUCE(sym__statement_list, 3),
  [1158] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 1), REDUCE(aux_sym_source_file_repeat1, 2), REDUCE(sym__statement_list, 3),
  [1162] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement_list, 3), SHIFT(302),
  [1165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(533),
  [1167] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 1), SHIFT(533),
  [1170] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(509),
  [1172] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(510),
  [1174] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(511),
  [1176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(505),
  [1178] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(506),
  [1180] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 4), REDUCE(aux_sym_parameters_repeat1, 5), SHIFT(378),
  [1184] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 4), REDUCE(aux_sym_parameters_repeat1, 5), SHIFT(379),
  [1188] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__pattern, 1), REDUCE_FRAGILE(sym_unary_expression, 2), REDUCE_FRAGILE(sym_return_expression, 2), REDUCE_FRAGILE(sym_binary_expression, 3), REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(487),
  [1195] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__pattern, 1), REDUCE_FRAGILE(sym_unary_expression, 2), REDUCE_FRAGILE(sym_return_expression, 2), REDUCE_FRAGILE(sym_binary_expression, 3), REDUCE_FRAGILE(sym_assignment_expression, 3),
  [1201] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym__pattern, 1), REDUCE_FRAGILE(sym_unary_expression, 2), REDUCE_FRAGILE(sym_return_expression, 2), REDUCE_FRAGILE(sym_binary_expression, 3), REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(488),
  [1208] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2), REDUCE_FRAGILE(sym_return_expression, 2), REDUCE_FRAGILE(sym_binary_expression, 3), REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(28),
  [1214] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2), REDUCE_FRAGILE(sym_return_expression, 2), REDUCE(aux_sym__pattern_repeat1, 2), REDUCE_FRAGILE(sym_binary_expression, 3), REDUCE_FRAGILE(sym_assignment_expression, 3), REDUCE(aux_sym__pattern_repeat1, 3), SHIFT(489),
  [1222] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2), REDUCE_FRAGILE(sym_return_expression, 2), REDUCE(aux_sym__pattern_repeat1, 2), REDUCE_FRAGILE(sym_binary_expression, 3), REDUCE_FRAGILE(sym_assignment_expression, 3), REDUCE(aux_sym__pattern_repeat1, 3), SHIFT(490),
  [1230] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_expression, 2), REDUCE_FRAGILE(sym_return_expression, 2), REDUCE_FRAGILE(sym_binary_expression, 3), REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(85),
  [1236] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_expression, 2), REDUCE_FRAGILE(sym_return_expression, 2), REDUCE_FRAGILE(sym_binary_expression, 3), REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(444),
  [1242] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2), REDUCE_FRAGILE(sym_return_expression, 2), REDUCE_FRAGILE(sym_binary_expression, 3), REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(444),
  [1248] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2), REDUCE_FRAGILE(sym_return_expression, 2), REDUCE(aux_sym__pattern_repeat1, 2), REDUCE_FRAGILE(sym_binary_expression, 3), REDUCE_FRAGILE(sym_assignment_expression, 3), REDUCE(aux_sym__pattern_repeat1, 3), SHIFT(491),
  [1256] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2), REDUCE_FRAGILE(sym_return_expression, 2), REDUCE_FRAGILE(sym_binary_expression, 3), REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(293),
  [1262] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2), REDUCE_FRAGILE(sym_return_expression, 2), REDUCE_FRAGILE(sym_binary_expression, 3), REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(302),
  [1268] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__control_flow_statement, 1), REDUCE(sym_else_tail, 2),
  [1271] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__control_flow_statement, 1), REDUCE(sym__expression, 1), REDUCE(sym_else_tail, 2),
  [1275] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym__control_flow_statement, 1), REDUCE(sym_else_tail, 2),
  [1278] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_else_tail, 2),
  [1281] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1), REDUCE(sym_else_tail, 2),
  [1284] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), REDUCE(sym_else_tail, 2),
  [1287] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__control_flow_statement, 1), REDUCE(sym_else_tail, 2),
  [1290] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__control_flow_statement, 1), REDUCE(sym_else_tail, 2),
  [1293] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__control_flow_statement, 1), REDUCE(sym_else_tail, 2),
  [1296] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__control_flow_statement, 1), REDUCE(sym_else_tail, 2),
  [1299] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_expression, 4), REDUCE(sym_if_let_expression, 7),
  [1302] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_expression, 4), REDUCE(sym_if_let_expression, 7),
  [1305] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_expression, 4), REDUCE(sym_if_let_expression, 7),
  [1308] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_tail, 2), REDUCE(sym_if_expression, 3), REDUCE(sym_function_item, 4), REDUCE(sym_function_item, 6), REDUCE(sym_if_let_expression, 6),
  [1314] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_tail, 2), REDUCE(sym_if_expression, 3), REDUCE(sym_function_item, 4), REDUCE(sym_function_item, 6), REDUCE(sym_if_let_expression, 6),
  [1320] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_else_tail, 2), REDUCE(sym_if_expression, 3), REDUCE(sym_if_let_expression, 6),
  [1324] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_tail, 2), REDUCE(sym_if_expression, 3), REDUCE(sym_if_let_expression, 6),
  [1328] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_tail, 2), REDUCE(sym_if_expression, 3), REDUCE(sym_if_let_expression, 6),
  [1332] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(448),
  [1334] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_else_tail, 2), REDUCE(sym_if_expression, 3), REDUCE(sym_function_item, 4), REDUCE(sym_function_item, 6), REDUCE(sym_if_let_expression, 6),
  [1340] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(466),
  [1342] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(467),
  [1344] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__pattern, 4), REDUCE(sym_arguments, 4),
  [1347] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__pattern, 4), REDUCE(sym_arguments, 4),
  [1350] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_arguments, 4), SHIFT(280),
  [1353] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(468),
  [1355] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(472),
  [1357] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(473),
  [1359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(473),
  [1361] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(472),
  [1364] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(28),
  [1367] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(473),
  [1370] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(473),
  [1373] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(472),
  [1376] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(28),
  [1379] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(473),
  [1382] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(473),
  [1385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(478),
  [1387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(479),
  [1389] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(480),
  [1391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(482),
  [1393] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(472),
  [1396] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(28),
  [1399] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(473),
  [1402] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(473),
  [1405] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(472),
  [1408] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(28),
  [1411] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(473),
  [1414] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(473),
  [1417] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8),
  [1423] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8),
  [1429] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(5),
  [1436] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(198),
  [1443] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(199),
  [1450] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(8),
  [1457] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(200),
  [1464] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(10),
  [1471] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(11),
  [1478] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(12),
  [1485] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(13),
  [1492] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__pattern, 3), REDUCE_FRAGILE(sym__expression, 3), REDUCE(sym_arguments, 3),
  [1496] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym__pattern, 3), REDUCE_FRAGILE(sym__expression, 3), REDUCE(sym_arguments, 3),
  [1500] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__expression, 3), REDUCE(sym_arguments, 3),
  [1503] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym__expression, 3), REDUCE(sym_arguments, 3), SHIFT(281),
  [1507] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym__expression, 3), REDUCE(sym_arguments, 3),
  [1510] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_expression, 3), REDUCE(sym_array_expression, 5),
  [1513] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_expression, 3), REDUCE(sym_array_expression, 5),
  [1516] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_if_expression, 3), REDUCE(sym_if_let_expression, 6),
  [1519] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_if_expression, 3), REDUCE(sym_if_let_expression, 6),
  [1522] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_expression, 3), REDUCE(sym_if_let_expression, 6),
  [1525] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(488),
  [1528] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(444),
  [1531] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(444),
  [1534] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(498),
  [1536] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(499),
  [1538] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(500),
  [1540] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(502),
  [1542] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6),
  [1545] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6),
  [1548] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6),
  [1551] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(508),
  [1553] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8),
  [1556] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8),
  [1559] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8),
  [1562] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4),
  [1565] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4),
  [1568] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4),
  [1571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(512),
  [1573] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(513),
  [1575] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(514),
  [1577] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(512),
  [1579] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(516),
  [1581] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(517),
  [1583] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(517),
  [1585] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(516),
  [1588] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(517),
  [1591] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(517),
  [1594] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(516),
  [1597] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(517),
  [1600] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(517),
  [1603] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(523),
  [1605] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(524),
  [1607] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(525),
  [1609] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(527),
  [1611] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(516),
  [1614] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(517),
  [1617] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(517),
  [1620] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(516),
  [1623] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(517),
  [1626] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(517),
  [1629] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(2),
  [1632] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(3),
  [1635] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(4),
  [1638] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(5),
  [1641] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(6),
  [1644] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(7),
  [1647] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(8),
  [1650] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(534),
  [1653] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(10),
  [1656] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(11),
  [1659] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(12),
  [1662] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(13),
  [1665] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(536),
  [1667] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__control_flow_statement, 1), REDUCE(sym__expression, 1),
  [1670] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(539),
  [1672] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(540),
  [1674] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(541),
  [1676] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(543),
  [1678] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(547),
  [1680] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(550),
  [1682] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(551),
  [1684] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(560),
  [1686] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(488),
  [1689] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(444),
  [1692] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(444),
  [1695] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(488),
  [1698] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(444),
  [1701] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(444),
  [1704] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(488),
  [1707] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(444),
  [1710] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(444),
  [1713] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__pattern, 3), REDUCE(sym__pattern, 4), REDUCE(sym__pattern, 5),
  [1717] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(568),
  [1719] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__pattern_repeat1, 2), REDUCE(aux_sym__pattern_repeat1, 3),
  [1722] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 4), REDUCE(aux_sym_parameters_repeat1, 5),
  [1725] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__pattern, 2), REDUCE(sym_arguments, 2),
  [1728] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__pattern, 2), REDUCE(sym_arguments, 2),
  [1731] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_arguments, 2), SHIFT(282),
  [1734] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 2), REDUCE(sym_parameters, 2),
  [1737] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(490),
  [1739] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(575),
  [1742] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(293),
  [1745] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8),
  [1750] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8),
  [1755] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8),
  [1760] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(578),
  [1762] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(580),
  [1764] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(581),
  [1766] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(586),
  [1768] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(580),
  [1770] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(584),
  [1772] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(585),
  [1774] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(585),
  [1776] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(584),
  [1779] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(585),
  [1782] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(585),
  [1785] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(590),
  [1787] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(591),
  [1789] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(592),
  [1791] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(594),
  [1793] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(584),
  [1796] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(585),
  [1799] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(585),
  [1802] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(600),
  [1804] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(601),
  [1806] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(602),
  [1808] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(604),
  [1810] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(584),
  [1813] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(585),
  [1816] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(585),
  [1819] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(584),
  [1822] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(585),
  [1825] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(585),
};

const TSLanguage *tree_sitter_rust() {
  GET_LANGUAGE();
}
