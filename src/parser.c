#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define LANGUAGE_VERSION 2
#define STATE_COUNT 298
#define SYMBOL_COUNT 77
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 0

enum {
  anon_sym_LF = 1,
  anon_sym_SEMI = 2,
  anon_sym_fn = 3,
  anon_sym_DASH_GT = 4,
  anon_sym_let = 5,
  anon_sym_COLON = 6,
  anon_sym_EQ = 7,
  anon_sym_u8 = 8,
  anon_sym_i8 = 9,
  anon_sym_u16 = 10,
  anon_sym_i16 = 11,
  anon_sym_u32 = 12,
  anon_sym_i32 = 13,
  anon_sym_u64 = 14,
  anon_sym_i64 = 15,
  anon_sym_isize = 16,
  anon_sym_usize = 17,
  anon_sym_f32 = 18,
  anon_sym_f64 = 19,
  sym_mutable_specifier = 20,
  anon_sym_LPAREN = 21,
  anon_sym_RPAREN = 22,
  aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH = 23,
  aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH = 24,
  aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH = 25,
  aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH = 26,
  aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH = 27,
  anon_sym_AMP_AMP = 28,
  anon_sym_PIPE_PIPE = 29,
  anon_sym_return = 30,
  anon_sym_COMMA = 31,
  anon_sym_LBRACK = 32,
  anon_sym_RBRACK = 33,
  sym_number_literal = 34,
  anon_sym_DQUOTE = 35,
  anon_sym_BSLASH_DQUOTE = 36,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH = 37,
  sym_raw_string_literal = 38,
  anon_sym_SQUOTE = 39,
  anon_sym_BSLASH_SQUOTE = 40,
  aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_RBRACK_SLASH = 41,
  sym_byte_escape = 42,
  sym_boolean_literal = 43,
  sym_line_comment = 44,
  sym_block_comment = 45,
  sym_identifier = 46,
  anon_sym_LBRACE = 47,
  anon_sym_RBRACE = 48,
  sym_source_file = 49,
  sym__statement_list = 50,
  sym__statement = 51,
  sym__declaration_statement = 52,
  sym__item = 53,
  sym_function_item = 54,
  sym_let_declaration = 55,
  sym__pattern = 56,
  sym_type_expression = 57,
  sym__expression_statement = 58,
  sym__expression = 59,
  sym_unary_expression = 60,
  sym_binary_expression = 61,
  sym_assignment_expression = 62,
  sym_return_expression = 63,
  sym_call_expression = 64,
  sym_arguments = 65,
  sym_array_expression = 66,
  sym__literal = 67,
  sym_string_literal = 68,
  sym_char_literal = 69,
  sym_parameters = 70,
  sym_block = 71,
  sym_empty_statement = 72,
  aux_sym_source_file_repeat1 = 73,
  aux_sym_arguments_repeat1 = 74,
  aux_sym_string_literal_repeat1 = 75,
  aux_sym_parameters_repeat1 = 76,
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
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = "/(-|*|!)/",
  [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = "/(*|/|%)/",
  [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = "/(+|-)/",
  [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = "/(==|!=|<|<=|>|>=)/",
  [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = "/(<<|>>)/",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_return] = "return",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
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
  [sym__literal] = "_literal",
  [sym_string_literal] = "string_literal",
  [sym_char_literal] = "char_literal",
  [sym_parameters] = "parameters",
  [sym_block] = "block",
  [sym_empty_statement] = "empty_statement",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
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
  [anon_sym_LPAREN] = {
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
  [anon_sym_COMMA] = {
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
  [aux_sym_arguments_repeat1] = {
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
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
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
      if (lookahead == 'f')
        ADVANCE(55);
      if (lookahead == 'i')
        ADVANCE(65);
      if (lookahead == 'l')
        ADVANCE(77);
      if (lookahead == 'm')
        ADVANCE(80);
      if (lookahead == 'r')
        ADVANCE(83);
      if (lookahead == 't')
        ADVANCE(104);
      if (lookahead == 'u')
        ADVANCE(106);
      if (lookahead == '{')
        ADVANCE(118);
      if (lookahead == '|')
        ADVANCE(119);
      if (lookahead == '}')
        ADVANCE(121);
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
        ADVANCE(56);
      if (lookahead == '6')
        ADVANCE(58);
      if (lookahead == 'a')
        ADVANCE(60);
      if (lookahead == 'n')
        ADVANCE(64);
      END_STATE();
    case 56:
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
        ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_f32);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '3') ||
          ('5' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '4')
        ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_f64);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'l')
        ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 's')
        ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'e')
        ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_boolean_literal);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_fn);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 65:
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
        ADVANCE(66);
      if (lookahead == '3')
        ADVANCE(68);
      if (lookahead == '6')
        ADVANCE(70);
      if (lookahead == '8')
        ADVANCE(72);
      if (lookahead == 's')
        ADVANCE(73);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '5') ||
          ('7' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '6')
        ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_i16);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 68:
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
        ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_i32);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '3') ||
          ('5' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '4')
        ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_i64);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_i8);
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
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'i')
        ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(7);
      if (lookahead == 'z')
        ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'e')
        ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_isize);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'e')
        ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 't')
        ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_let);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'u')
        ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 't')
        ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_mutable_specifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '#')
        ADVANCE(84);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'e')
        ADVANCE(99);
      END_STATE();
    case 84:
      if (lookahead == '\"')
        ADVANCE(85);
      if (lookahead == '#')
        ADVANCE(88);
      END_STATE();
    case 85:
      if (lookahead == '\"')
        ADVANCE(86);
      if (!((lookahead == 0) ||
          (lookahead == '\n') ||
          (lookahead == '\"')))
        ADVANCE(85);
      END_STATE();
    case 86:
      if (lookahead == '\"')
        ADVANCE(86);
      if (lookahead == '#')
        ADVANCE(87);
      if (!((lookahead == 0) ||
          (lookahead == '\n') ||
          (lookahead == '\"') ||
          (lookahead == '#')))
        ADVANCE(85);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_raw_string_literal);
      if (lookahead == '\"')
        ADVANCE(86);
      if (!((lookahead == 0) ||
          (lookahead == '\n') ||
          (lookahead == '\"')))
        ADVANCE(85);
      END_STATE();
    case 88:
      if (lookahead == '\"')
        ADVANCE(89);
      if (lookahead == '#')
        ADVANCE(93);
      END_STATE();
    case 89:
      if (lookahead == '\"')
        ADVANCE(90);
      if (!((lookahead == 0) ||
          (lookahead == '\n') ||
          (lookahead == '\"')))
        ADVANCE(89);
      END_STATE();
    case 90:
      if (lookahead == '\"')
        ADVANCE(90);
      if (lookahead == '#')
        ADVANCE(91);
      if (!((lookahead == 0) ||
          (lookahead == '\n') ||
          (lookahead == '\"') ||
          (lookahead == '#')))
        ADVANCE(89);
      END_STATE();
    case 91:
      if (lookahead == '\"')
        ADVANCE(90);
      if (lookahead == '#')
        ADVANCE(92);
      if (!((lookahead == 0) ||
          (lookahead == '\n') ||
          (lookahead == '\"') ||
          (lookahead == '#')))
        ADVANCE(89);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_raw_string_literal);
      if (lookahead == '\"')
        ADVANCE(90);
      if (!((lookahead == 0) ||
          (lookahead == '\n') ||
          (lookahead == '\"')))
        ADVANCE(89);
      END_STATE();
    case 93:
      if (lookahead == '\"')
        ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == '\"')
        ADVANCE(95);
      if (!((lookahead == 0) ||
          (lookahead == '\n') ||
          (lookahead == '\"')))
        ADVANCE(94);
      END_STATE();
    case 95:
      if (lookahead == '\"')
        ADVANCE(95);
      if (lookahead == '#')
        ADVANCE(96);
      if (!((lookahead == 0) ||
          (lookahead == '\n') ||
          (lookahead == '\"') ||
          (lookahead == '#')))
        ADVANCE(94);
      END_STATE();
    case 96:
      if (lookahead == '\"')
        ADVANCE(95);
      if (lookahead == '#')
        ADVANCE(97);
      if (!((lookahead == 0) ||
          (lookahead == '\n') ||
          (lookahead == '\"') ||
          (lookahead == '#')))
        ADVANCE(94);
      END_STATE();
    case 97:
      if (lookahead == '\"')
        ADVANCE(95);
      if (lookahead == '#')
        ADVANCE(98);
      if (!((lookahead == 0) ||
          (lookahead == '\n') ||
          (lookahead == '\"') ||
          (lookahead == '#')))
        ADVANCE(94);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_raw_string_literal);
      if (lookahead == '\"')
        ADVANCE(95);
      if (!((lookahead == 0) ||
          (lookahead == '\n') ||
          (lookahead == '\"')))
        ADVANCE(94);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 't')
        ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'u')
        ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'r')
        ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'n')
        ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_return);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'r')
        ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'u')
        ADVANCE(62);
      END_STATE();
    case 106:
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
        ADVANCE(107);
      if (lookahead == '3')
        ADVANCE(109);
      if (lookahead == '6')
        ADVANCE(111);
      if (lookahead == '8')
        ADVANCE(113);
      if (lookahead == 's')
        ADVANCE(114);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '5') ||
          ('7' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '6')
        ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_u16);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 109:
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
        ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_u32);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '3') ||
          ('5' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '4')
        ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_u64);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_u8);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'i')
        ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(7);
      if (lookahead == 'z')
        ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'e')
        ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_usize);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '|')
        ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 122:
      if (lookahead == 0)
        ADVANCE(1);
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(122);
      if (lookahead == '!')
        ADVANCE(14);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'k') ||
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
        ADVANCE(123);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == 'f')
        ADVANCE(124);
      if (lookahead == 'l')
        ADVANCE(125);
      if (lookahead == 'r')
        ADVANCE(126);
      if (lookahead == 't')
        ADVANCE(127);
      END_STATE();
    case 123:
      if (lookahead == '*')
        ADVANCE(20);
      if (lookahead == '/')
        ADVANCE(23);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('b' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'a')
        ADVANCE(60);
      if (lookahead == 'n')
        ADVANCE(64);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'e')
        ADVANCE(78);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#')
        ADVANCE(84);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'e')
        ADVANCE(99);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'r')
        ADVANCE(105);
      END_STATE();
    case 128:
      if (lookahead == 0)
        ADVANCE(1);
      if ((lookahead == '\t') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(128);
      if (lookahead == '\n')
        ADVANCE(129);
      if (lookahead == '!')
        ADVANCE(14);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'k') ||
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
        ADVANCE(123);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == 'f')
        ADVANCE(124);
      if (lookahead == 'l')
        ADVANCE(125);
      if (lookahead == 'r')
        ADVANCE(126);
      if (lookahead == 't')
        ADVANCE(127);
      if (lookahead == '}')
        ADVANCE(121);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 130:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(130);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '/')
        ADVANCE(123);
      END_STATE();
    case 131:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(131);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '/')
        ADVANCE(123);
      if (lookahead == 'm')
        ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'u')
        ADVANCE(81);
      END_STATE();
    case 133:
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
          ('g' <= lookahead && lookahead <= 'q') ||
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
        ADVANCE(123);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == 'f')
        ADVANCE(134);
      if (lookahead == 'r')
        ADVANCE(126);
      if (lookahead == 't')
        ADVANCE(127);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'a')
        ADVANCE(60);
      END_STATE();
    case 135:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(135);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(136);
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
        ADVANCE(134);
      if (lookahead == 'r')
        ADVANCE(126);
      if (lookahead == 't')
        ADVANCE(127);
      if (lookahead == '|')
        ADVANCE(137);
      END_STATE();
    case 136:
      if (lookahead == '&')
        ADVANCE(10);
      END_STATE();
    case 137:
      if (lookahead == '|')
        ADVANCE(120);
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
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'q') ||
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
        ADVANCE(123);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == ']')
        ADVANCE(54);
      if (lookahead == 'f')
        ADVANCE(134);
      if (lookahead == 'r')
        ADVANCE(126);
      if (lookahead == 't')
        ADVANCE(127);
      END_STATE();
    case 139:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(139);
      if (lookahead == '!')
        ADVANCE(140);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(136);
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
        ADVANCE(137);
      if (lookahead == '}')
        ADVANCE(121);
      END_STATE();
    case 140:
      if (lookahead == '=')
        ADVANCE(4);
      END_STATE();
    case 141:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(142);
      if (lookahead == '\\')
        ADVANCE(143);
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
    case 142:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(20);
      if (lookahead == '/')
        ADVANCE(23);
      END_STATE();
    case 143:
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
    case 144:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        ADVANCE(145);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(146);
      if (lookahead == '\\')
        ADVANCE(147);
      if (!((lookahead == 0) ||
          (lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' ') ||
          (lookahead == '\'') ||
          (lookahead == '/') ||
          (lookahead == '\\')))
        ADVANCE(145);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_RBRACK_SLASH);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(20);
      if (lookahead == '/')
        ADVANCE(23);
      END_STATE();
    case 147:
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
    case 148:
      if (lookahead == 0)
        ADVANCE(1);
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(148);
      if (lookahead == '/')
        ADVANCE(123);
      END_STATE();
    case 149:
      if (lookahead == 0)
        ADVANCE(1);
      if ((lookahead == '\t') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(149);
      if (lookahead == '\n')
        ADVANCE(129);
      if (lookahead == '!')
        ADVANCE(14);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'k') ||
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
        ADVANCE(123);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == 'f')
        ADVANCE(124);
      if (lookahead == 'l')
        ADVANCE(125);
      if (lookahead == 'r')
        ADVANCE(126);
      if (lookahead == 't')
        ADVANCE(127);
      END_STATE();
    case 150:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(150);
      if (lookahead == '!')
        ADVANCE(140);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(136);
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
        ADVANCE(137);
      END_STATE();
    case 151:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(151);
      if (lookahead == '!')
        ADVANCE(14);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'q') ||
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
        ADVANCE(123);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == 'f')
        ADVANCE(134);
      if (lookahead == 'r')
        ADVANCE(126);
      if (lookahead == 't')
        ADVANCE(127);
      END_STATE();
    case 152:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(152);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(136);
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
        ADVANCE(134);
      if (lookahead == 'r')
        ADVANCE(126);
      if (lookahead == 't')
        ADVANCE(127);
      if (lookahead == '|')
        ADVANCE(137);
      END_STATE();
    case 153:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(153);
      if (lookahead == '!')
        ADVANCE(140);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(136);
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
        ADVANCE(137);
      END_STATE();
    case 154:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(154);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '/')
        ADVANCE(123);
      END_STATE();
    case 155:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(155);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(123);
      END_STATE();
    case 156:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(156);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(136);
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
        ADVANCE(134);
      if (lookahead == 'r')
        ADVANCE(126);
      if (lookahead == 't')
        ADVANCE(127);
      if (lookahead == '|')
        ADVANCE(137);
      END_STATE();
    case 157:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(157);
      if (lookahead == '!')
        ADVANCE(140);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(136);
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
        ADVANCE(137);
      END_STATE();
    case 158:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(158);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '/')
        ADVANCE(123);
      if (lookahead == ']')
        ADVANCE(54);
      END_STATE();
    case 159:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(159);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(136);
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
        ADVANCE(134);
      if (lookahead == 'r')
        ADVANCE(126);
      if (lookahead == 't')
        ADVANCE(127);
      if (lookahead == '|')
        ADVANCE(137);
      END_STATE();
    case 160:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(160);
      if (lookahead == '!')
        ADVANCE(140);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(136);
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
        ADVANCE(137);
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
          ('g' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(136);
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
        ADVANCE(134);
      if (lookahead == 'r')
        ADVANCE(126);
      if (lookahead == 't')
        ADVANCE(127);
      if (lookahead == '|')
        ADVANCE(137);
      END_STATE();
    case 162:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(162);
      if (lookahead == '!')
        ADVANCE(140);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(136);
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
        ADVANCE(137);
      END_STATE();
    case 163:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(163);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(136);
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
        ADVANCE(134);
      if (lookahead == 'r')
        ADVANCE(126);
      if (lookahead == 't')
        ADVANCE(127);
      if (lookahead == '|')
        ADVANCE(137);
      END_STATE();
    case 164:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(164);
      if (lookahead == '!')
        ADVANCE(140);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(136);
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
        ADVANCE(137);
      END_STATE();
    case 165:
      if (lookahead == 0)
        ADVANCE(1);
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(165);
      if (lookahead == '!')
        ADVANCE(14);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'k') ||
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
        ADVANCE(123);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == 'f')
        ADVANCE(124);
      if (lookahead == 'l')
        ADVANCE(125);
      if (lookahead == 'r')
        ADVANCE(126);
      if (lookahead == 't')
        ADVANCE(127);
      if (lookahead == '}')
        ADVANCE(121);
      END_STATE();
    case 166:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(166);
      if (lookahead == '/')
        ADVANCE(123);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '=')
        ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 168:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(168);
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
        ADVANCE(123);
      if (lookahead == 'f')
        ADVANCE(169);
      if (lookahead == 'i')
        ADVANCE(170);
      if (lookahead == 't')
        ADVANCE(127);
      if (lookahead == 'u')
        ADVANCE(171);
      END_STATE();
    case 169:
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
        ADVANCE(56);
      if (lookahead == '6')
        ADVANCE(58);
      if (lookahead == 'a')
        ADVANCE(60);
      END_STATE();
    case 170:
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
        ADVANCE(66);
      if (lookahead == '3')
        ADVANCE(68);
      if (lookahead == '6')
        ADVANCE(70);
      if (lookahead == '8')
        ADVANCE(72);
      if (lookahead == 's')
        ADVANCE(73);
      END_STATE();
    case 171:
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
        ADVANCE(107);
      if (lookahead == '3')
        ADVANCE(109);
      if (lookahead == '6')
        ADVANCE(111);
      if (lookahead == '8')
        ADVANCE(113);
      if (lookahead == 's')
        ADVANCE(114);
      END_STATE();
    case 172:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(172);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '/')
        ADVANCE(123);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '=')
        ADVANCE(167);
      if (lookahead == '{')
        ADVANCE(118);
      END_STATE();
    case 173:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(173);
      if (lookahead == '/')
        ADVANCE(123);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '=')
        ADVANCE(167);
      END_STATE();
    case 174:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(174);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(123);
      END_STATE();
    case 175:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(175);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(123);
      END_STATE();
    case 176:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(176);
      if (lookahead == '-')
        ADVANCE(177);
      if (lookahead == '/')
        ADVANCE(123);
      if (lookahead == '{')
        ADVANCE(118);
      END_STATE();
    case 177:
      if (lookahead == '>')
        ADVANCE(18);
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
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'k') ||
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
        ADVANCE(123);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(47);
      if (lookahead == 'f')
        ADVANCE(124);
      if (lookahead == 'l')
        ADVANCE(125);
      if (lookahead == 'r')
        ADVANCE(126);
      if (lookahead == 't')
        ADVANCE(127);
      if (lookahead == '}')
        ADVANCE(121);
      END_STATE();
    case 179:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(179);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(136);
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
        ADVANCE(134);
      if (lookahead == 'r')
        ADVANCE(126);
      if (lookahead == 't')
        ADVANCE(127);
      if (lookahead == '|')
        ADVANCE(137);
      if (lookahead == '}')
        ADVANCE(121);
      END_STATE();
    case 180:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(180);
      if (lookahead == '/')
        ADVANCE(123);
      if (lookahead == '}')
        ADVANCE(121);
      END_STATE();
    case 181:
      if ((lookahead == '\t') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(181);
      if (lookahead == '\n')
        ADVANCE(129);
      if (lookahead == '/')
        ADVANCE(123);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '}')
        ADVANCE(121);
      END_STATE();
    case 182:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(182);
      if (lookahead == '!')
        ADVANCE(140);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(136);
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
        ADVANCE(137);
      if (lookahead == '}')
        ADVANCE(121);
      END_STATE();
    case 183:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(183);
      if (lookahead == '/')
        ADVANCE(123);
      if (lookahead == '{')
        ADVANCE(118);
      END_STATE();
    case 184:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(184);
      if (lookahead == '/')
        ADVANCE(123);
      if (lookahead == ':')
        ADVANCE(41);
      END_STATE();
    case 185:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(185);
      if (lookahead == '!')
        ADVANCE(140);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(136);
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
        ADVANCE(186);
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
      if (lookahead == '{')
        ADVANCE(118);
      if (lookahead == '|')
        ADVANCE(137);
      if (lookahead == '}')
        ADVANCE(121);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH);
      if (lookahead == '>')
        ADVANCE(18);
      END_STATE();
    case 187:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(187);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(136);
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
        ADVANCE(134);
      if (lookahead == 'r')
        ADVANCE(126);
      if (lookahead == 't')
        ADVANCE(127);
      if (lookahead == '|')
        ADVANCE(137);
      if (lookahead == '}')
        ADVANCE(121);
      END_STATE();
    case 188:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        ADVANCE(2);
      if (lookahead == '!')
        ADVANCE(189);
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
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead == '\\')
        ADVANCE(143);
      if (lookahead == ']')
        ADVANCE(54);
      if (lookahead == '|')
        ADVANCE(119);
      if (lookahead == '}')
        ADVANCE(121);
      if (!((lookahead == 0) ||
          (lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (' ' <= lookahead && lookahead <= '\"') ||
          (lookahead == '%') ||
          (lookahead == '&') ||
          ('(' <= lookahead && lookahead <= '-') ||
          (lookahead == '/') ||
          (';' <= lookahead && lookahead <= '>') ||
          (lookahead == '\\') ||
          (lookahead == ']') ||
          (lookahead == '|') ||
          (lookahead == '}')))
        ADVANCE(2);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '=')
        ADVANCE(4);
      END_STATE();
    case 190:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        ADVANCE(145);
      if (lookahead == '!')
        ADVANCE(191);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(192);
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
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead == '\\')
        ADVANCE(147);
      if (lookahead == ']')
        ADVANCE(54);
      if (lookahead == '|')
        ADVANCE(193);
      if (lookahead == '}')
        ADVANCE(121);
      if (!((lookahead == 0) ||
          (lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' ') ||
          (lookahead == '!') ||
          ('%' <= lookahead && lookahead <= '-') ||
          (lookahead == '/') ||
          (';' <= lookahead && lookahead <= '>') ||
          (lookahead == '\\') ||
          (lookahead == ']') ||
          (lookahead == '|') ||
          (lookahead == '}')))
        ADVANCE(145);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_RBRACK_SLASH);
      if (lookahead == '=')
        ADVANCE(4);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_RBRACK_SLASH);
      if (lookahead == '&')
        ADVANCE(10);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_RBRACK_SLASH);
      if (lookahead == '|')
        ADVANCE(120);
      END_STATE();
    case 194:
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
        ADVANCE(142);
      if (lookahead == '\\')
        ADVANCE(143);
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
    case 195:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(195);
      if (lookahead == '!')
        ADVANCE(140);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(136);
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
        ADVANCE(118);
      if (lookahead == '|')
        ADVANCE(137);
      if (lookahead == '}')
        ADVANCE(121);
      END_STATE();
    case 196:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(196);
      if (lookahead == '!')
        ADVANCE(140);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(136);
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
        ADVANCE(118);
      if (lookahead == '|')
        ADVANCE(137);
      if (lookahead == '}')
        ADVANCE(121);
      END_STATE();
    case 197:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(197);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '/')
        ADVANCE(123);
      if (lookahead == ']')
        ADVANCE(54);
      END_STATE();
    case 198:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(198);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(5);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(136);
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
        ADVANCE(134);
      if (lookahead == 'r')
        ADVANCE(126);
      if (lookahead == 't')
        ADVANCE(127);
      if (lookahead == '|')
        ADVANCE(137);
      END_STATE();
    case 199:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(199);
      if (lookahead == '!')
        ADVANCE(140);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(136);
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
        ADVANCE(137);
      END_STATE();
    case 200:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(200);
      if (lookahead == '!')
        ADVANCE(140);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(136);
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
        ADVANCE(137);
      END_STATE();
    case 201:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(201);
      if (lookahead == '!')
        ADVANCE(140);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(136);
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
        ADVANCE(137);
      END_STATE();
    case 202:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(202);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '/')
        ADVANCE(123);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '=')
        ADVANCE(167);
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
          ('g' <= lookahead && lookahead <= 'q') ||
          (lookahead == 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(136);
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
        ADVANCE(134);
      if (lookahead == 'r')
        ADVANCE(126);
      if (lookahead == 't')
        ADVANCE(127);
      if (lookahead == '|')
        ADVANCE(137);
      END_STATE();
    case 204:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(204);
      if (lookahead == '!')
        ADVANCE(140);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(136);
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
        ADVANCE(137);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 122},
  [2] = {.lex_state = 128},
  [3] = {.lex_state = 130},
  [4] = {.lex_state = 131},
  [5] = {.lex_state = 133},
  [6] = {.lex_state = 133},
  [7] = {.lex_state = 135},
  [8] = {.lex_state = 138},
  [9] = {.lex_state = 139},
  [10] = {.lex_state = 141},
  [11] = {.lex_state = 144},
  [12] = {.lex_state = 139},
  [13] = {.lex_state = 148},
  [14] = {.lex_state = 122},
  [15] = {.lex_state = 149},
  [16] = {.lex_state = 128},
  [17] = {.lex_state = 128},
  [18] = {.lex_state = 128},
  [19] = {.lex_state = 150},
  [20] = {.lex_state = 139},
  [21] = {.lex_state = 122},
  [22] = {.lex_state = 122},
  [23] = {.lex_state = 128},
  [24] = {.lex_state = 133},
  [25] = {.lex_state = 151},
  [26] = {.lex_state = 133},
  [27] = {.lex_state = 133},
  [28] = {.lex_state = 133},
  [29] = {.lex_state = 133},
  [30] = {.lex_state = 133},
  [31] = {.lex_state = 133},
  [32] = {.lex_state = 139},
  [33] = {.lex_state = 150},
  [34] = {.lex_state = 150},
  [35] = {.lex_state = 150},
  [36] = {.lex_state = 150},
  [37] = {.lex_state = 150},
  [38] = {.lex_state = 139},
  [39] = {.lex_state = 139},
  [40] = {.lex_state = 133},
  [41] = {.lex_state = 152},
  [42] = {.lex_state = 153},
  [43] = {.lex_state = 133},
  [44] = {.lex_state = 139},
  [45] = {.lex_state = 133},
  [46] = {.lex_state = 133},
  [47] = {.lex_state = 133},
  [48] = {.lex_state = 133},
  [49] = {.lex_state = 133},
  [50] = {.lex_state = 133},
  [51] = {.lex_state = 133},
  [52] = {.lex_state = 154},
  [53] = {.lex_state = 139},
  [54] = {.lex_state = 133},
  [55] = {.lex_state = 153},
  [56] = {.lex_state = 153},
  [57] = {.lex_state = 153},
  [58] = {.lex_state = 153},
  [59] = {.lex_state = 153},
  [60] = {.lex_state = 153},
  [61] = {.lex_state = 153},
  [62] = {.lex_state = 153},
  [63] = {.lex_state = 139},
  [64] = {.lex_state = 155},
  [65] = {.lex_state = 139},
  [66] = {.lex_state = 139},
  [67] = {.lex_state = 141},
  [68] = {.lex_state = 141},
  [69] = {.lex_state = 139},
  [70] = {.lex_state = 141},
  [71] = {.lex_state = 133},
  [72] = {.lex_state = 156},
  [73] = {.lex_state = 139},
  [74] = {.lex_state = 157},
  [75] = {.lex_state = 133},
  [76] = {.lex_state = 133},
  [77] = {.lex_state = 133},
  [78] = {.lex_state = 133},
  [79] = {.lex_state = 133},
  [80] = {.lex_state = 133},
  [81] = {.lex_state = 133},
  [82] = {.lex_state = 133},
  [83] = {.lex_state = 133},
  [84] = {.lex_state = 139},
  [85] = {.lex_state = 158},
  [86] = {.lex_state = 133},
  [87] = {.lex_state = 139},
  [88] = {.lex_state = 133},
  [89] = {.lex_state = 159},
  [90] = {.lex_state = 160},
  [91] = {.lex_state = 133},
  [92] = {.lex_state = 133},
  [93] = {.lex_state = 133},
  [94] = {.lex_state = 133},
  [95] = {.lex_state = 133},
  [96] = {.lex_state = 133},
  [97] = {.lex_state = 133},
  [98] = {.lex_state = 160},
  [99] = {.lex_state = 160},
  [100] = {.lex_state = 160},
  [101] = {.lex_state = 160},
  [102] = {.lex_state = 160},
  [103] = {.lex_state = 160},
  [104] = {.lex_state = 133},
  [105] = {.lex_state = 161},
  [106] = {.lex_state = 162},
  [107] = {.lex_state = 133},
  [108] = {.lex_state = 133},
  [109] = {.lex_state = 133},
  [110] = {.lex_state = 133},
  [111] = {.lex_state = 133},
  [112] = {.lex_state = 133},
  [113] = {.lex_state = 133},
  [114] = {.lex_state = 139},
  [115] = {.lex_state = 162},
  [116] = {.lex_state = 162},
  [117] = {.lex_state = 162},
  [118] = {.lex_state = 162},
  [119] = {.lex_state = 162},
  [120] = {.lex_state = 162},
  [121] = {.lex_state = 162},
  [122] = {.lex_state = 139},
  [123] = {.lex_state = 133},
  [124] = {.lex_state = 163},
  [125] = {.lex_state = 164},
  [126] = {.lex_state = 133},
  [127] = {.lex_state = 139},
  [128] = {.lex_state = 133},
  [129] = {.lex_state = 133},
  [130] = {.lex_state = 133},
  [131] = {.lex_state = 133},
  [132] = {.lex_state = 133},
  [133] = {.lex_state = 133},
  [134] = {.lex_state = 164},
  [135] = {.lex_state = 164},
  [136] = {.lex_state = 164},
  [137] = {.lex_state = 164},
  [138] = {.lex_state = 164},
  [139] = {.lex_state = 164},
  [140] = {.lex_state = 164},
  [141] = {.lex_state = 160},
  [142] = {.lex_state = 160},
  [143] = {.lex_state = 157},
  [144] = {.lex_state = 157},
  [145] = {.lex_state = 157},
  [146] = {.lex_state = 157},
  [147] = {.lex_state = 157},
  [148] = {.lex_state = 157},
  [149] = {.lex_state = 157},
  [150] = {.lex_state = 153},
  [151] = {.lex_state = 150},
  [152] = {.lex_state = 122},
  [153] = {.lex_state = 165},
  [154] = {.lex_state = 150},
  [155] = {.lex_state = 130},
  [156] = {.lex_state = 166},
  [157] = {.lex_state = 166},
  [158] = {.lex_state = 128},
  [159] = {.lex_state = 168},
  [160] = {.lex_state = 133},
  [161] = {.lex_state = 150},
  [162] = {.lex_state = 128},
  [163] = {.lex_state = 172},
  [164] = {.lex_state = 173},
  [165] = {.lex_state = 133},
  [166] = {.lex_state = 150},
  [167] = {.lex_state = 128},
  [168] = {.lex_state = 166},
  [169] = {.lex_state = 128},
  [170] = {.lex_state = 168},
  [171] = {.lex_state = 133},
  [172] = {.lex_state = 150},
  [173] = {.lex_state = 128},
  [174] = {.lex_state = 173},
  [175] = {.lex_state = 133},
  [176] = {.lex_state = 150},
  [177] = {.lex_state = 128},
  [178] = {.lex_state = 174},
  [179] = {.lex_state = 175},
  [180] = {.lex_state = 176},
  [181] = {.lex_state = 168},
  [182] = {.lex_state = 178},
  [183] = {.lex_state = 128},
  [184] = {.lex_state = 133},
  [185] = {.lex_state = 179},
  [186] = {.lex_state = 128},
  [187] = {.lex_state = 180},
  [188] = {.lex_state = 181},
  [189] = {.lex_state = 182},
  [190] = {.lex_state = 133},
  [191] = {.lex_state = 133},
  [192] = {.lex_state = 133},
  [193] = {.lex_state = 133},
  [194] = {.lex_state = 133},
  [195] = {.lex_state = 133},
  [196] = {.lex_state = 133},
  [197] = {.lex_state = 128},
  [198] = {.lex_state = 182},
  [199] = {.lex_state = 182},
  [200] = {.lex_state = 182},
  [201] = {.lex_state = 182},
  [202] = {.lex_state = 182},
  [203] = {.lex_state = 182},
  [204] = {.lex_state = 178},
  [205] = {.lex_state = 182},
  [206] = {.lex_state = 183},
  [207] = {.lex_state = 128},
  [208] = {.lex_state = 176},
  [209] = {.lex_state = 184},
  [210] = {.lex_state = 168},
  [211] = {.lex_state = 154},
  [212] = {.lex_state = 176},
  [213] = {.lex_state = 130},
  [214] = {.lex_state = 154},
  [215] = {.lex_state = 176},
  [216] = {.lex_state = 130},
  [217] = {.lex_state = 184},
  [218] = {.lex_state = 168},
  [219] = {.lex_state = 154},
  [220] = {.lex_state = 184},
  [221] = {.lex_state = 168},
  [222] = {.lex_state = 154},
  [223] = {.lex_state = 128},
  [224] = {.lex_state = 168},
  [225] = {.lex_state = 133},
  [226] = {.lex_state = 151},
  [227] = {.lex_state = 185},
  [228] = {.lex_state = 133},
  [229] = {.lex_state = 133},
  [230] = {.lex_state = 187},
  [231] = {.lex_state = 133},
  [232] = {.lex_state = 139},
  [233] = {.lex_state = 188},
  [234] = {.lex_state = 141},
  [235] = {.lex_state = 190},
  [236] = {.lex_state = 194},
  [237] = {.lex_state = 195},
  [238] = {.lex_state = 196},
  [239] = {.lex_state = 128},
  [240] = {.lex_state = 165},
  [241] = {.lex_state = 128},
  [242] = {.lex_state = 166},
  [243] = {.lex_state = 172},
  [244] = {.lex_state = 139},
  [245] = {.lex_state = 128},
  [246] = {.lex_state = 197},
  [247] = {.lex_state = 133},
  [248] = {.lex_state = 133},
  [249] = {.lex_state = 198},
  [250] = {.lex_state = 199},
  [251] = {.lex_state = 133},
  [252] = {.lex_state = 133},
  [253] = {.lex_state = 199},
  [254] = {.lex_state = 199},
  [255] = {.lex_state = 199},
  [256] = {.lex_state = 199},
  [257] = {.lex_state = 128},
  [258] = {.lex_state = 133},
  [259] = {.lex_state = 139},
  [260] = {.lex_state = 133},
  [261] = {.lex_state = 139},
  [262] = {.lex_state = 199},
  [263] = {.lex_state = 139},
  [264] = {.lex_state = 128},
  [265] = {.lex_state = 133},
  [266] = {.lex_state = 150},
  [267] = {.lex_state = 128},
  [268] = {.lex_state = 128},
  [269] = {.lex_state = 168},
  [270] = {.lex_state = 133},
  [271] = {.lex_state = 150},
  [272] = {.lex_state = 173},
  [273] = {.lex_state = 165},
  [274] = {.lex_state = 168},
  [275] = {.lex_state = 154},
  [276] = {.lex_state = 200},
  [277] = {.lex_state = 199},
  [278] = {.lex_state = 168},
  [279] = {.lex_state = 154},
  [280] = {.lex_state = 139},
  [281] = {.lex_state = 139},
  [282] = {.lex_state = 139},
  [283] = {.lex_state = 185},
  [284] = {.lex_state = 201},
  [285] = {.lex_state = 153},
  [286] = {.lex_state = 139},
  [287] = {.lex_state = 128},
  [288] = {.lex_state = 202},
  [289] = {.lex_state = 133},
  [290] = {.lex_state = 203},
  [291] = {.lex_state = 204},
  [292] = {.lex_state = 133},
  [293] = {.lex_state = 133},
  [294] = {.lex_state = 204},
  [295] = {.lex_state = 204},
  [296] = {.lex_state = 204},
  [297] = {.lex_state = 204},
};

static unsigned short ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_source_file] = STATE(13),
    [sym__statement_list] = STATE(240),
    [sym__statement] = STATE(241),
    [sym__declaration_statement] = STATE(16),
    [sym__item] = STATE(17),
    [sym_function_item] = STATE(18),
    [sym_let_declaration] = STATE(17),
    [sym__pattern] = STATE(242),
    [sym_type_expression] = STATE(243),
    [sym__expression_statement] = STATE(16),
    [sym__expression] = STATE(244),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_arguments] = STATE(32),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [sym_parameters] = STATE(180),
    [sym_block] = STATE(245),
    [sym_empty_statement] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(21),
    [aux_sym_arguments_repeat1] = STATE(246),
    [aux_sym_string_literal_repeat1] = STATE(68),
    [aux_sym_parameters_repeat1] = STATE(214),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_fn] = ACTIONS(5),
    [anon_sym_DASH_GT] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(11),
    [anon_sym_EQ] = ACTIONS(13),
    [anon_sym_u8] = ACTIONS(15),
    [anon_sym_i8] = ACTIONS(15),
    [anon_sym_u16] = ACTIONS(15),
    [anon_sym_i16] = ACTIONS(15),
    [anon_sym_u32] = ACTIONS(15),
    [anon_sym_i32] = ACTIONS(15),
    [anon_sym_u64] = ACTIONS(15),
    [anon_sym_i64] = ACTIONS(15),
    [anon_sym_isize] = ACTIONS(15),
    [anon_sym_usize] = ACTIONS(15),
    [anon_sym_f32] = ACTIONS(15),
    [anon_sym_f64] = ACTIONS(15),
    [sym_mutable_specifier] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(21),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(23),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(27),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(29),
    [anon_sym_AMP_AMP] = ACTIONS(29),
    [anon_sym_PIPE_PIPE] = ACTIONS(29),
    [anon_sym_return] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(37),
    [sym_number_literal] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(43),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(45),
    [sym_raw_string_literal] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(49),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_RBRACK_SLASH] = ACTIONS(51),
    [sym_byte_escape] = ACTIONS(53),
    [sym_boolean_literal] = ACTIONS(55),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_RBRACE] = ACTIONS(65),
  },
  [1] = {
    [sym_source_file] = STATE(13),
    [sym__statement_list] = STATE(14),
    [sym__statement] = STATE(15),
    [sym__declaration_statement] = STATE(16),
    [sym__item] = STATE(17),
    [sym_function_item] = STATE(18),
    [sym_let_declaration] = STATE(17),
    [sym__expression_statement] = STATE(16),
    [sym__expression] = STATE(19),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [sym_empty_statement] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(69),
    [anon_sym_fn] = ACTIONS(71),
    [anon_sym_let] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(77),
    [anon_sym_return] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_LF] = ACTIONS(91),
    [anon_sym_SEMI] = ACTIONS(91),
    [anon_sym_fn] = ACTIONS(93),
    [anon_sym_let] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(91),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(91),
    [anon_sym_return] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(91),
    [sym_number_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [sym_raw_string_literal] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [sym_boolean_literal] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(91),
  },
  [3] = {
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(97),
  },
  [4] = {
    [sym__pattern] = STATE(157),
    [sym_mutable_specifier] = ACTIONS(99),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(101),
  },
  [5] = {
    [sym__expression] = STATE(125),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(103),
    [anon_sym_return] = ACTIONS(105),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [6] = {
    [sym__expression] = STATE(122),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(77),
    [anon_sym_return] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [7] = {
    [sym__expression] = STATE(154),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(107),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(111),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(113),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(113),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(109),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(107),
    [anon_sym_AMP_AMP] = ACTIONS(107),
    [anon_sym_PIPE_PIPE] = ACTIONS(107),
    [anon_sym_return] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [8] = {
    [sym__expression] = STATE(74),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(115),
    [anon_sym_return] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(119),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [9] = {
    [anon_sym_SEMI] = ACTIONS(121),
    [anon_sym_EQ] = ACTIONS(123),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_RPAREN] = ACTIONS(121),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(123),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(121),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(123),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(121),
    [anon_sym_AMP_AMP] = ACTIONS(121),
    [anon_sym_PIPE_PIPE] = ACTIONS(121),
    [anon_sym_COMMA] = ACTIONS(121),
    [anon_sym_RBRACK] = ACTIONS(121),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(121),
  },
  [10] = {
    [aux_sym_string_literal_repeat1] = STATE(68),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(127),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(129),
    [sym_byte_escape] = ACTIONS(127),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [11] = {
    [anon_sym_SQUOTE] = ACTIONS(131),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(133),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_RBRACK_SLASH] = ACTIONS(135),
    [sym_byte_escape] = ACTIONS(133),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [12] = {
    [anon_sym_SEMI] = ACTIONS(137),
    [anon_sym_EQ] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_RPAREN] = ACTIONS(137),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(139),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(137),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(139),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(137),
    [anon_sym_AMP_AMP] = ACTIONS(137),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
    [anon_sym_COMMA] = ACTIONS(137),
    [anon_sym_RBRACK] = ACTIONS(137),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(137),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(141),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(143),
    [anon_sym_SEMI] = ACTIONS(143),
    [anon_sym_fn] = ACTIONS(145),
    [anon_sym_let] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(143),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(143),
    [anon_sym_return] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(143),
    [sym_number_literal] = ACTIONS(145),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [sym_raw_string_literal] = ACTIONS(145),
    [anon_sym_SQUOTE] = ACTIONS(143),
    [sym_boolean_literal] = ACTIONS(145),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(147),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_LF] = ACTIONS(151),
    [anon_sym_SEMI] = ACTIONS(149),
    [anon_sym_fn] = ACTIONS(153),
    [anon_sym_let] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(149),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(149),
    [anon_sym_return] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(149),
    [sym_number_literal] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [sym_raw_string_literal] = ACTIONS(153),
    [anon_sym_SQUOTE] = ACTIONS(149),
    [sym_boolean_literal] = ACTIONS(153),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(155),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(157),
    [anon_sym_LF] = ACTIONS(157),
    [anon_sym_SEMI] = ACTIONS(157),
    [anon_sym_fn] = ACTIONS(159),
    [anon_sym_let] = ACTIONS(159),
    [anon_sym_LPAREN] = ACTIONS(157),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(157),
    [anon_sym_return] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(157),
    [sym_number_literal] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [sym_raw_string_literal] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(157),
    [sym_boolean_literal] = ACTIONS(159),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(161),
    [anon_sym_RBRACE] = ACTIONS(157),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [anon_sym_LF] = ACTIONS(163),
    [anon_sym_SEMI] = ACTIONS(163),
    [anon_sym_fn] = ACTIONS(165),
    [anon_sym_let] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(163),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(163),
    [anon_sym_return] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(163),
    [sym_number_literal] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_raw_string_literal] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(163),
    [sym_boolean_literal] = ACTIONS(165),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(167),
    [anon_sym_RBRACE] = ACTIONS(163),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(169),
    [anon_sym_LF] = ACTIONS(169),
    [anon_sym_SEMI] = ACTIONS(169),
    [anon_sym_fn] = ACTIONS(171),
    [anon_sym_let] = ACTIONS(171),
    [anon_sym_LPAREN] = ACTIONS(169),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(169),
    [anon_sym_return] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(169),
    [sym_number_literal] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [sym_raw_string_literal] = ACTIONS(171),
    [anon_sym_SQUOTE] = ACTIONS(169),
    [sym_boolean_literal] = ACTIONS(171),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(173),
    [anon_sym_RBRACE] = ACTIONS(169),
  },
  [19] = {
    [sym_arguments] = STATE(32),
    [anon_sym_SEMI] = ACTIONS(175),
    [anon_sym_EQ] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(179),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(181),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(183),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(185),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(187),
    [anon_sym_AMP_AMP] = ACTIONS(189),
    [anon_sym_PIPE_PIPE] = ACTIONS(191),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [20] = {
    [anon_sym_SEMI] = ACTIONS(193),
    [anon_sym_EQ] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(193),
    [anon_sym_RPAREN] = ACTIONS(193),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(195),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(193),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(195),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(193),
    [anon_sym_AMP_AMP] = ACTIONS(193),
    [anon_sym_PIPE_PIPE] = ACTIONS(193),
    [anon_sym_COMMA] = ACTIONS(193),
    [anon_sym_RBRACK] = ACTIONS(193),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(193),
  },
  [21] = {
    [sym__statement_list] = STATE(22),
    [sym__statement] = STATE(15),
    [sym__declaration_statement] = STATE(16),
    [sym__item] = STATE(17),
    [sym_function_item] = STATE(18),
    [sym_let_declaration] = STATE(17),
    [sym__expression_statement] = STATE(16),
    [sym__expression] = STATE(19),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [sym_empty_statement] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(197),
    [anon_sym_SEMI] = ACTIONS(69),
    [anon_sym_fn] = ACTIONS(71),
    [anon_sym_let] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(77),
    [anon_sym_return] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(199),
    [anon_sym_SEMI] = ACTIONS(199),
    [anon_sym_fn] = ACTIONS(201),
    [anon_sym_let] = ACTIONS(201),
    [anon_sym_LPAREN] = ACTIONS(199),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(199),
    [anon_sym_return] = ACTIONS(201),
    [anon_sym_LBRACK] = ACTIONS(199),
    [sym_number_literal] = ACTIONS(201),
    [anon_sym_DQUOTE] = ACTIONS(199),
    [sym_raw_string_literal] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(199),
    [sym_boolean_literal] = ACTIONS(201),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(203),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(205),
    [anon_sym_LF] = ACTIONS(205),
    [anon_sym_SEMI] = ACTIONS(205),
    [anon_sym_fn] = ACTIONS(207),
    [anon_sym_let] = ACTIONS(207),
    [anon_sym_LPAREN] = ACTIONS(205),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(205),
    [anon_sym_return] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(205),
    [sym_number_literal] = ACTIONS(207),
    [anon_sym_DQUOTE] = ACTIONS(205),
    [sym_raw_string_literal] = ACTIONS(207),
    [anon_sym_SQUOTE] = ACTIONS(205),
    [sym_boolean_literal] = ACTIONS(207),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(209),
    [anon_sym_RBRACE] = ACTIONS(205),
  },
  [24] = {
    [sym__expression] = STATE(151),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(77),
    [anon_sym_return] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [25] = {
    [sym__expression] = STATE(42),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(213),
    [anon_sym_return] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [26] = {
    [sym__expression] = STATE(38),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(77),
    [anon_sym_return] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [27] = {
    [sym__expression] = STATE(37),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(77),
    [anon_sym_return] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [28] = {
    [sym__expression] = STATE(36),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(77),
    [anon_sym_return] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [29] = {
    [sym__expression] = STATE(35),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(77),
    [anon_sym_return] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [30] = {
    [sym__expression] = STATE(34),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(77),
    [anon_sym_return] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [31] = {
    [sym__expression] = STATE(33),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(77),
    [anon_sym_return] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [32] = {
    [anon_sym_SEMI] = ACTIONS(217),
    [anon_sym_EQ] = ACTIONS(219),
    [anon_sym_LPAREN] = ACTIONS(217),
    [anon_sym_RPAREN] = ACTIONS(217),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(217),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(219),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(217),
    [anon_sym_AMP_AMP] = ACTIONS(217),
    [anon_sym_PIPE_PIPE] = ACTIONS(217),
    [anon_sym_COMMA] = ACTIONS(217),
    [anon_sym_RBRACK] = ACTIONS(217),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(217),
  },
  [33] = {
    [sym_arguments] = STATE(32),
    [anon_sym_SEMI] = ACTIONS(221),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(181),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(183),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(185),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(187),
    [anon_sym_AMP_AMP] = ACTIONS(189),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [34] = {
    [sym_arguments] = STATE(32),
    [anon_sym_SEMI] = ACTIONS(221),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(181),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(183),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(185),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(187),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [35] = {
    [sym_arguments] = STATE(32),
    [anon_sym_SEMI] = ACTIONS(221),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(181),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(183),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [36] = {
    [sym_arguments] = STATE(32),
    [anon_sym_SEMI] = ACTIONS(221),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(181),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(183),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(187),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [37] = {
    [sym_arguments] = STATE(32),
    [anon_sym_SEMI] = ACTIONS(221),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(181),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [38] = {
    [sym_arguments] = STATE(32),
    [anon_sym_SEMI] = ACTIONS(221),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_RPAREN] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(221),
    [anon_sym_RBRACK] = ACTIONS(221),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(221),
  },
  [39] = {
    [anon_sym_SEMI] = ACTIONS(225),
    [anon_sym_EQ] = ACTIONS(227),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_RPAREN] = ACTIONS(225),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(227),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(225),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(227),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(225),
    [anon_sym_AMP_AMP] = ACTIONS(225),
    [anon_sym_PIPE_PIPE] = ACTIONS(225),
    [anon_sym_COMMA] = ACTIONS(225),
    [anon_sym_RBRACK] = ACTIONS(225),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(225),
  },
  [40] = {
    [sym__expression] = STATE(122),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(213),
    [anon_sym_return] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [41] = {
    [sym__expression] = STATE(150),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(229),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(113),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(113),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(109),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(107),
    [anon_sym_AMP_AMP] = ACTIONS(107),
    [anon_sym_PIPE_PIPE] = ACTIONS(107),
    [anon_sym_return] = ACTIONS(215),
    [anon_sym_COMMA] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [42] = {
    [sym_arguments] = STATE(32),
    [aux_sym_arguments_repeat1] = STATE(52),
    [anon_sym_EQ] = ACTIONS(231),
    [anon_sym_LPAREN] = ACTIONS(179),
    [anon_sym_RPAREN] = ACTIONS(233),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(235),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(237),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(239),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(241),
    [anon_sym_AMP_AMP] = ACTIONS(243),
    [anon_sym_PIPE_PIPE] = ACTIONS(245),
    [anon_sym_COMMA] = ACTIONS(247),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [43] = {
    [sym__expression] = STATE(62),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(213),
    [anon_sym_return] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [44] = {
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_EQ] = ACTIONS(251),
    [anon_sym_LPAREN] = ACTIONS(249),
    [anon_sym_RPAREN] = ACTIONS(249),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(251),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(249),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(251),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(249),
    [anon_sym_AMP_AMP] = ACTIONS(249),
    [anon_sym_PIPE_PIPE] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_RBRACK] = ACTIONS(249),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(249),
  },
  [45] = {
    [sym__expression] = STATE(38),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(213),
    [anon_sym_return] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [46] = {
    [sym__expression] = STATE(61),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(213),
    [anon_sym_return] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [47] = {
    [sym__expression] = STATE(60),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(213),
    [anon_sym_return] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [48] = {
    [sym__expression] = STATE(59),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(213),
    [anon_sym_return] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [49] = {
    [sym__expression] = STATE(58),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(213),
    [anon_sym_return] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [50] = {
    [sym__expression] = STATE(57),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(213),
    [anon_sym_return] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [51] = {
    [sym__expression] = STATE(56),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(213),
    [anon_sym_return] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [52] = {
    [anon_sym_RPAREN] = ACTIONS(253),
    [anon_sym_COMMA] = ACTIONS(255),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [53] = {
    [anon_sym_SEMI] = ACTIONS(257),
    [anon_sym_EQ] = ACTIONS(259),
    [anon_sym_LPAREN] = ACTIONS(257),
    [anon_sym_RPAREN] = ACTIONS(257),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(259),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(257),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(259),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(257),
    [anon_sym_AMP_AMP] = ACTIONS(257),
    [anon_sym_PIPE_PIPE] = ACTIONS(257),
    [anon_sym_COMMA] = ACTIONS(257),
    [anon_sym_RBRACK] = ACTIONS(257),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(257),
  },
  [54] = {
    [sym__expression] = STATE(55),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(213),
    [anon_sym_return] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [55] = {
    [sym_arguments] = STATE(32),
    [anon_sym_EQ] = ACTIONS(231),
    [anon_sym_LPAREN] = ACTIONS(179),
    [anon_sym_RPAREN] = ACTIONS(261),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(235),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(237),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(239),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(241),
    [anon_sym_AMP_AMP] = ACTIONS(243),
    [anon_sym_PIPE_PIPE] = ACTIONS(245),
    [anon_sym_COMMA] = ACTIONS(261),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [56] = {
    [sym_arguments] = STATE(32),
    [anon_sym_EQ] = ACTIONS(231),
    [anon_sym_LPAREN] = ACTIONS(179),
    [anon_sym_RPAREN] = ACTIONS(263),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(235),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(237),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(239),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(241),
    [anon_sym_AMP_AMP] = ACTIONS(243),
    [anon_sym_PIPE_PIPE] = ACTIONS(245),
    [anon_sym_COMMA] = ACTIONS(263),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [57] = {
    [sym_arguments] = STATE(32),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_RPAREN] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(235),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(237),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(239),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(241),
    [anon_sym_AMP_AMP] = ACTIONS(243),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(221),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [58] = {
    [sym_arguments] = STATE(32),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_RPAREN] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(235),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(237),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(239),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(241),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(221),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [59] = {
    [sym_arguments] = STATE(32),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_RPAREN] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(235),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(237),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(221),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [60] = {
    [sym_arguments] = STATE(32),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_RPAREN] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(235),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(237),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(241),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(221),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [61] = {
    [sym_arguments] = STATE(32),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_RPAREN] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(235),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(221),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [62] = {
    [sym_arguments] = STATE(32),
    [anon_sym_EQ] = ACTIONS(265),
    [anon_sym_LPAREN] = ACTIONS(267),
    [anon_sym_RPAREN] = ACTIONS(267),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(235),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(237),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(239),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(241),
    [anon_sym_AMP_AMP] = ACTIONS(243),
    [anon_sym_PIPE_PIPE] = ACTIONS(245),
    [anon_sym_COMMA] = ACTIONS(267),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [63] = {
    [anon_sym_SEMI] = ACTIONS(269),
    [anon_sym_EQ] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_RPAREN] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(269),
    [anon_sym_AMP_AMP] = ACTIONS(269),
    [anon_sym_PIPE_PIPE] = ACTIONS(269),
    [anon_sym_COMMA] = ACTIONS(269),
    [anon_sym_RBRACK] = ACTIONS(269),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(269),
  },
  [64] = {
    [anon_sym_SQUOTE] = ACTIONS(273),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [65] = {
    [anon_sym_SEMI] = ACTIONS(275),
    [anon_sym_EQ] = ACTIONS(277),
    [anon_sym_LPAREN] = ACTIONS(275),
    [anon_sym_RPAREN] = ACTIONS(275),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(275),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(275),
    [anon_sym_AMP_AMP] = ACTIONS(275),
    [anon_sym_PIPE_PIPE] = ACTIONS(275),
    [anon_sym_COMMA] = ACTIONS(275),
    [anon_sym_RBRACK] = ACTIONS(275),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(275),
  },
  [66] = {
    [anon_sym_SEMI] = ACTIONS(279),
    [anon_sym_EQ] = ACTIONS(281),
    [anon_sym_LPAREN] = ACTIONS(279),
    [anon_sym_RPAREN] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(279),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(279),
    [anon_sym_AMP_AMP] = ACTIONS(279),
    [anon_sym_PIPE_PIPE] = ACTIONS(279),
    [anon_sym_COMMA] = ACTIONS(279),
    [anon_sym_RBRACK] = ACTIONS(279),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(279),
  },
  [67] = {
    [anon_sym_DQUOTE] = ACTIONS(283),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(283),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(285),
    [sym_byte_escape] = ACTIONS(283),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [68] = {
    [anon_sym_DQUOTE] = ACTIONS(287),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(289),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(291),
    [sym_byte_escape] = ACTIONS(289),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [69] = {
    [anon_sym_SEMI] = ACTIONS(293),
    [anon_sym_EQ] = ACTIONS(295),
    [anon_sym_LPAREN] = ACTIONS(293),
    [anon_sym_RPAREN] = ACTIONS(293),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(295),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(293),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(295),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(293),
    [anon_sym_AMP_AMP] = ACTIONS(293),
    [anon_sym_PIPE_PIPE] = ACTIONS(293),
    [anon_sym_COMMA] = ACTIONS(293),
    [anon_sym_RBRACK] = ACTIONS(293),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(293),
  },
  [70] = {
    [anon_sym_DQUOTE] = ACTIONS(297),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(297),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(299),
    [sym_byte_escape] = ACTIONS(297),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [71] = {
    [sym__expression] = STATE(122),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(115),
    [anon_sym_return] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [72] = {
    [sym__expression] = STATE(149),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(107),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(301),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(113),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(113),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(109),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(107),
    [anon_sym_AMP_AMP] = ACTIONS(107),
    [anon_sym_PIPE_PIPE] = ACTIONS(107),
    [anon_sym_return] = ACTIONS(117),
    [anon_sym_COMMA] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(107),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [73] = {
    [anon_sym_SEMI] = ACTIONS(303),
    [anon_sym_EQ] = ACTIONS(305),
    [anon_sym_LPAREN] = ACTIONS(303),
    [anon_sym_RPAREN] = ACTIONS(303),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(305),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(303),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(305),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(303),
    [anon_sym_AMP_AMP] = ACTIONS(303),
    [anon_sym_PIPE_PIPE] = ACTIONS(303),
    [anon_sym_COMMA] = ACTIONS(303),
    [anon_sym_RBRACK] = ACTIONS(303),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(303),
  },
  [74] = {
    [sym_arguments] = STATE(32),
    [aux_sym_arguments_repeat1] = STATE(85),
    [anon_sym_SEMI] = ACTIONS(307),
    [anon_sym_EQ] = ACTIONS(309),
    [anon_sym_LPAREN] = ACTIONS(179),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(311),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(313),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(315),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(317),
    [anon_sym_AMP_AMP] = ACTIONS(319),
    [anon_sym_PIPE_PIPE] = ACTIONS(321),
    [anon_sym_COMMA] = ACTIONS(323),
    [anon_sym_RBRACK] = ACTIONS(325),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [75] = {
    [sym__expression] = STATE(106),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(327),
    [anon_sym_return] = ACTIONS(329),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [76] = {
    [sym__expression] = STATE(148),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(115),
    [anon_sym_return] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [77] = {
    [sym__expression] = STATE(38),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(115),
    [anon_sym_return] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [78] = {
    [sym__expression] = STATE(147),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(115),
    [anon_sym_return] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [79] = {
    [sym__expression] = STATE(146),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(115),
    [anon_sym_return] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [80] = {
    [sym__expression] = STATE(145),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(115),
    [anon_sym_return] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [81] = {
    [sym__expression] = STATE(144),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(115),
    [anon_sym_return] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [82] = {
    [sym__expression] = STATE(143),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(115),
    [anon_sym_return] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [83] = {
    [sym__expression] = STATE(142),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(331),
    [anon_sym_return] = ACTIONS(333),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [84] = {
    [anon_sym_SEMI] = ACTIONS(335),
    [anon_sym_EQ] = ACTIONS(337),
    [anon_sym_LPAREN] = ACTIONS(335),
    [anon_sym_RPAREN] = ACTIONS(335),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(337),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(335),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(337),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(335),
    [anon_sym_AMP_AMP] = ACTIONS(335),
    [anon_sym_PIPE_PIPE] = ACTIONS(335),
    [anon_sym_COMMA] = ACTIONS(335),
    [anon_sym_RBRACK] = ACTIONS(335),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(335),
  },
  [85] = {
    [anon_sym_COMMA] = ACTIONS(339),
    [anon_sym_RBRACK] = ACTIONS(341),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [86] = {
    [sym__expression] = STATE(90),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(331),
    [anon_sym_return] = ACTIONS(333),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [87] = {
    [anon_sym_SEMI] = ACTIONS(343),
    [anon_sym_EQ] = ACTIONS(345),
    [anon_sym_LPAREN] = ACTIONS(343),
    [anon_sym_RPAREN] = ACTIONS(343),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(345),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(343),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(345),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(343),
    [anon_sym_AMP_AMP] = ACTIONS(343),
    [anon_sym_PIPE_PIPE] = ACTIONS(343),
    [anon_sym_COMMA] = ACTIONS(343),
    [anon_sym_RBRACK] = ACTIONS(343),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(343),
  },
  [88] = {
    [sym__expression] = STATE(122),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(331),
    [anon_sym_return] = ACTIONS(333),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [89] = {
    [sym__expression] = STATE(141),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(107),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(113),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(113),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(109),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(107),
    [anon_sym_AMP_AMP] = ACTIONS(107),
    [anon_sym_PIPE_PIPE] = ACTIONS(107),
    [anon_sym_return] = ACTIONS(333),
    [anon_sym_COMMA] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(107),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [90] = {
    [sym_arguments] = STATE(32),
    [anon_sym_EQ] = ACTIONS(349),
    [anon_sym_LPAREN] = ACTIONS(179),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(353),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(355),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(357),
    [anon_sym_AMP_AMP] = ACTIONS(359),
    [anon_sym_PIPE_PIPE] = ACTIONS(361),
    [anon_sym_COMMA] = ACTIONS(261),
    [anon_sym_RBRACK] = ACTIONS(261),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [91] = {
    [sym__expression] = STATE(103),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(331),
    [anon_sym_return] = ACTIONS(333),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [92] = {
    [sym__expression] = STATE(38),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(331),
    [anon_sym_return] = ACTIONS(333),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [93] = {
    [sym__expression] = STATE(102),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(331),
    [anon_sym_return] = ACTIONS(333),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [94] = {
    [sym__expression] = STATE(101),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(331),
    [anon_sym_return] = ACTIONS(333),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [95] = {
    [sym__expression] = STATE(100),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(331),
    [anon_sym_return] = ACTIONS(333),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [96] = {
    [sym__expression] = STATE(99),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(331),
    [anon_sym_return] = ACTIONS(333),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [97] = {
    [sym__expression] = STATE(98),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(331),
    [anon_sym_return] = ACTIONS(333),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [98] = {
    [sym_arguments] = STATE(32),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(353),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(355),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(357),
    [anon_sym_AMP_AMP] = ACTIONS(359),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(221),
    [anon_sym_RBRACK] = ACTIONS(221),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [99] = {
    [sym_arguments] = STATE(32),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(353),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(355),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(357),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(221),
    [anon_sym_RBRACK] = ACTIONS(221),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [100] = {
    [sym_arguments] = STATE(32),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(353),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(221),
    [anon_sym_RBRACK] = ACTIONS(221),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [101] = {
    [sym_arguments] = STATE(32),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(353),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(357),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(221),
    [anon_sym_RBRACK] = ACTIONS(221),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [102] = {
    [sym_arguments] = STATE(32),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(221),
    [anon_sym_RBRACK] = ACTIONS(221),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [103] = {
    [sym_arguments] = STATE(32),
    [anon_sym_EQ] = ACTIONS(265),
    [anon_sym_LPAREN] = ACTIONS(267),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(353),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(355),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(357),
    [anon_sym_AMP_AMP] = ACTIONS(359),
    [anon_sym_PIPE_PIPE] = ACTIONS(361),
    [anon_sym_COMMA] = ACTIONS(267),
    [anon_sym_RBRACK] = ACTIONS(267),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [104] = {
    [sym__expression] = STATE(122),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(327),
    [anon_sym_return] = ACTIONS(329),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [105] = {
    [sym__expression] = STATE(121),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(107),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(363),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(113),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(113),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(109),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(107),
    [anon_sym_AMP_AMP] = ACTIONS(107),
    [anon_sym_PIPE_PIPE] = ACTIONS(107),
    [anon_sym_return] = ACTIONS(329),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(107),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [106] = {
    [sym_arguments] = STATE(32),
    [anon_sym_EQ] = ACTIONS(365),
    [anon_sym_LPAREN] = ACTIONS(179),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(367),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(369),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(373),
    [anon_sym_AMP_AMP] = ACTIONS(375),
    [anon_sym_PIPE_PIPE] = ACTIONS(377),
    [anon_sym_RBRACK] = ACTIONS(379),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [107] = {
    [sym__expression] = STATE(120),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(327),
    [anon_sym_return] = ACTIONS(329),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [108] = {
    [sym__expression] = STATE(38),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(327),
    [anon_sym_return] = ACTIONS(329),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [109] = {
    [sym__expression] = STATE(119),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(327),
    [anon_sym_return] = ACTIONS(329),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [110] = {
    [sym__expression] = STATE(118),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(327),
    [anon_sym_return] = ACTIONS(329),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [111] = {
    [sym__expression] = STATE(117),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(327),
    [anon_sym_return] = ACTIONS(329),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [112] = {
    [sym__expression] = STATE(116),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(327),
    [anon_sym_return] = ACTIONS(329),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [113] = {
    [sym__expression] = STATE(115),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(327),
    [anon_sym_return] = ACTIONS(329),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [114] = {
    [anon_sym_SEMI] = ACTIONS(381),
    [anon_sym_EQ] = ACTIONS(383),
    [anon_sym_LPAREN] = ACTIONS(381),
    [anon_sym_RPAREN] = ACTIONS(381),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(383),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(381),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(383),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(381),
    [anon_sym_AMP_AMP] = ACTIONS(381),
    [anon_sym_PIPE_PIPE] = ACTIONS(381),
    [anon_sym_COMMA] = ACTIONS(381),
    [anon_sym_RBRACK] = ACTIONS(381),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(381),
  },
  [115] = {
    [sym_arguments] = STATE(32),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(367),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(369),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(373),
    [anon_sym_AMP_AMP] = ACTIONS(375),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [anon_sym_RBRACK] = ACTIONS(221),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [116] = {
    [sym_arguments] = STATE(32),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(367),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(369),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(373),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [anon_sym_RBRACK] = ACTIONS(221),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [117] = {
    [sym_arguments] = STATE(32),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(367),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(369),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [anon_sym_RBRACK] = ACTIONS(221),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [118] = {
    [sym_arguments] = STATE(32),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(367),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(369),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(373),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [anon_sym_RBRACK] = ACTIONS(221),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [119] = {
    [sym_arguments] = STATE(32),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(367),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [anon_sym_RBRACK] = ACTIONS(221),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [120] = {
    [sym_arguments] = STATE(32),
    [anon_sym_EQ] = ACTIONS(265),
    [anon_sym_LPAREN] = ACTIONS(267),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(367),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(369),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(373),
    [anon_sym_AMP_AMP] = ACTIONS(375),
    [anon_sym_PIPE_PIPE] = ACTIONS(377),
    [anon_sym_RBRACK] = ACTIONS(267),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [121] = {
    [sym_arguments] = STATE(32),
    [anon_sym_EQ] = ACTIONS(385),
    [anon_sym_LPAREN] = ACTIONS(387),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(367),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(369),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(371),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(373),
    [anon_sym_AMP_AMP] = ACTIONS(375),
    [anon_sym_PIPE_PIPE] = ACTIONS(377),
    [anon_sym_RBRACK] = ACTIONS(387),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [122] = {
    [sym_arguments] = STATE(32),
    [anon_sym_SEMI] = ACTIONS(389),
    [anon_sym_EQ] = ACTIONS(391),
    [anon_sym_LPAREN] = ACTIONS(389),
    [anon_sym_RPAREN] = ACTIONS(389),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(391),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(389),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(391),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(389),
    [anon_sym_AMP_AMP] = ACTIONS(389),
    [anon_sym_PIPE_PIPE] = ACTIONS(389),
    [anon_sym_COMMA] = ACTIONS(389),
    [anon_sym_RBRACK] = ACTIONS(389),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(389),
  },
  [123] = {
    [sym__expression] = STATE(122),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(103),
    [anon_sym_return] = ACTIONS(105),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [124] = {
    [sym__expression] = STATE(140),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(393),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(113),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(113),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(109),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(107),
    [anon_sym_AMP_AMP] = ACTIONS(107),
    [anon_sym_PIPE_PIPE] = ACTIONS(107),
    [anon_sym_return] = ACTIONS(105),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [125] = {
    [sym_arguments] = STATE(32),
    [anon_sym_EQ] = ACTIONS(395),
    [anon_sym_LPAREN] = ACTIONS(179),
    [anon_sym_RPAREN] = ACTIONS(397),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(399),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(401),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(403),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(405),
    [anon_sym_AMP_AMP] = ACTIONS(407),
    [anon_sym_PIPE_PIPE] = ACTIONS(409),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [126] = {
    [sym__expression] = STATE(139),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(103),
    [anon_sym_return] = ACTIONS(105),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [127] = {
    [anon_sym_SEMI] = ACTIONS(411),
    [anon_sym_EQ] = ACTIONS(413),
    [anon_sym_LPAREN] = ACTIONS(411),
    [anon_sym_RPAREN] = ACTIONS(411),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(413),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(413),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(411),
    [anon_sym_AMP_AMP] = ACTIONS(411),
    [anon_sym_PIPE_PIPE] = ACTIONS(411),
    [anon_sym_COMMA] = ACTIONS(411),
    [anon_sym_RBRACK] = ACTIONS(411),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(411),
  },
  [128] = {
    [sym__expression] = STATE(38),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(103),
    [anon_sym_return] = ACTIONS(105),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [129] = {
    [sym__expression] = STATE(138),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(103),
    [anon_sym_return] = ACTIONS(105),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [130] = {
    [sym__expression] = STATE(137),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(103),
    [anon_sym_return] = ACTIONS(105),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [131] = {
    [sym__expression] = STATE(136),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(103),
    [anon_sym_return] = ACTIONS(105),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [132] = {
    [sym__expression] = STATE(135),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(103),
    [anon_sym_return] = ACTIONS(105),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [133] = {
    [sym__expression] = STATE(134),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(103),
    [anon_sym_return] = ACTIONS(105),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [134] = {
    [sym_arguments] = STATE(32),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_RPAREN] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(399),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(401),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(403),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(405),
    [anon_sym_AMP_AMP] = ACTIONS(407),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [135] = {
    [sym_arguments] = STATE(32),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_RPAREN] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(399),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(401),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(403),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(405),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [136] = {
    [sym_arguments] = STATE(32),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_RPAREN] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(399),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(401),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [137] = {
    [sym_arguments] = STATE(32),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_RPAREN] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(399),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(401),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(405),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [138] = {
    [sym_arguments] = STATE(32),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_RPAREN] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(399),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [139] = {
    [sym_arguments] = STATE(32),
    [anon_sym_EQ] = ACTIONS(265),
    [anon_sym_LPAREN] = ACTIONS(267),
    [anon_sym_RPAREN] = ACTIONS(267),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(399),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(401),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(403),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(405),
    [anon_sym_AMP_AMP] = ACTIONS(407),
    [anon_sym_PIPE_PIPE] = ACTIONS(409),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [140] = {
    [sym_arguments] = STATE(32),
    [anon_sym_EQ] = ACTIONS(385),
    [anon_sym_LPAREN] = ACTIONS(387),
    [anon_sym_RPAREN] = ACTIONS(387),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(399),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(401),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(403),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(405),
    [anon_sym_AMP_AMP] = ACTIONS(407),
    [anon_sym_PIPE_PIPE] = ACTIONS(409),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [141] = {
    [sym_arguments] = STATE(32),
    [anon_sym_EQ] = ACTIONS(385),
    [anon_sym_LPAREN] = ACTIONS(387),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(353),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(355),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(357),
    [anon_sym_AMP_AMP] = ACTIONS(359),
    [anon_sym_PIPE_PIPE] = ACTIONS(361),
    [anon_sym_COMMA] = ACTIONS(387),
    [anon_sym_RBRACK] = ACTIONS(387),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [142] = {
    [sym_arguments] = STATE(32),
    [anon_sym_EQ] = ACTIONS(349),
    [anon_sym_LPAREN] = ACTIONS(179),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(353),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(355),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(357),
    [anon_sym_AMP_AMP] = ACTIONS(359),
    [anon_sym_PIPE_PIPE] = ACTIONS(361),
    [anon_sym_COMMA] = ACTIONS(263),
    [anon_sym_RBRACK] = ACTIONS(263),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [143] = {
    [sym_arguments] = STATE(32),
    [anon_sym_SEMI] = ACTIONS(221),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(311),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(313),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(315),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(317),
    [anon_sym_AMP_AMP] = ACTIONS(319),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(221),
    [anon_sym_RBRACK] = ACTIONS(221),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [144] = {
    [sym_arguments] = STATE(32),
    [anon_sym_SEMI] = ACTIONS(221),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(311),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(313),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(315),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(317),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(221),
    [anon_sym_RBRACK] = ACTIONS(221),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [145] = {
    [sym_arguments] = STATE(32),
    [anon_sym_SEMI] = ACTIONS(221),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(311),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(313),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(221),
    [anon_sym_RBRACK] = ACTIONS(221),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [146] = {
    [sym_arguments] = STATE(32),
    [anon_sym_SEMI] = ACTIONS(221),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(311),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(313),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(317),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(221),
    [anon_sym_RBRACK] = ACTIONS(221),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [147] = {
    [sym_arguments] = STATE(32),
    [anon_sym_SEMI] = ACTIONS(221),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(311),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(221),
    [anon_sym_RBRACK] = ACTIONS(221),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [148] = {
    [sym_arguments] = STATE(32),
    [anon_sym_SEMI] = ACTIONS(267),
    [anon_sym_EQ] = ACTIONS(265),
    [anon_sym_LPAREN] = ACTIONS(267),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(311),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(313),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(315),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(317),
    [anon_sym_AMP_AMP] = ACTIONS(319),
    [anon_sym_PIPE_PIPE] = ACTIONS(321),
    [anon_sym_COMMA] = ACTIONS(267),
    [anon_sym_RBRACK] = ACTIONS(267),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [149] = {
    [sym_arguments] = STATE(32),
    [anon_sym_SEMI] = ACTIONS(387),
    [anon_sym_EQ] = ACTIONS(385),
    [anon_sym_LPAREN] = ACTIONS(387),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(311),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(313),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(315),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(317),
    [anon_sym_AMP_AMP] = ACTIONS(319),
    [anon_sym_PIPE_PIPE] = ACTIONS(321),
    [anon_sym_COMMA] = ACTIONS(387),
    [anon_sym_RBRACK] = ACTIONS(387),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [150] = {
    [sym_arguments] = STATE(32),
    [anon_sym_EQ] = ACTIONS(385),
    [anon_sym_LPAREN] = ACTIONS(387),
    [anon_sym_RPAREN] = ACTIONS(387),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(235),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(237),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(239),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(241),
    [anon_sym_AMP_AMP] = ACTIONS(243),
    [anon_sym_PIPE_PIPE] = ACTIONS(245),
    [anon_sym_COMMA] = ACTIONS(387),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [151] = {
    [sym_arguments] = STATE(32),
    [anon_sym_SEMI] = ACTIONS(267),
    [anon_sym_EQ] = ACTIONS(265),
    [anon_sym_LPAREN] = ACTIONS(267),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(181),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(183),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(185),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(187),
    [anon_sym_AMP_AMP] = ACTIONS(189),
    [anon_sym_PIPE_PIPE] = ACTIONS(191),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [152] = {
    [sym__statement_list] = STATE(153),
    [sym__statement] = STATE(15),
    [sym__declaration_statement] = STATE(16),
    [sym__item] = STATE(17),
    [sym_function_item] = STATE(18),
    [sym_let_declaration] = STATE(17),
    [sym__expression_statement] = STATE(16),
    [sym__expression] = STATE(19),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [sym_empty_statement] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(415),
    [anon_sym_SEMI] = ACTIONS(415),
    [anon_sym_fn] = ACTIONS(417),
    [anon_sym_let] = ACTIONS(417),
    [anon_sym_LPAREN] = ACTIONS(415),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(415),
    [anon_sym_return] = ACTIONS(417),
    [anon_sym_LBRACK] = ACTIONS(415),
    [sym_number_literal] = ACTIONS(417),
    [anon_sym_DQUOTE] = ACTIONS(415),
    [sym_raw_string_literal] = ACTIONS(417),
    [anon_sym_SQUOTE] = ACTIONS(415),
    [sym_boolean_literal] = ACTIONS(417),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(419),
  },
  [153] = {
    [ts_builtin_sym_end] = ACTIONS(421),
    [anon_sym_SEMI] = ACTIONS(421),
    [anon_sym_fn] = ACTIONS(423),
    [anon_sym_let] = ACTIONS(423),
    [anon_sym_LPAREN] = ACTIONS(421),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(421),
    [anon_sym_return] = ACTIONS(423),
    [anon_sym_LBRACK] = ACTIONS(421),
    [sym_number_literal] = ACTIONS(423),
    [anon_sym_DQUOTE] = ACTIONS(421),
    [sym_raw_string_literal] = ACTIONS(423),
    [anon_sym_SQUOTE] = ACTIONS(421),
    [sym_boolean_literal] = ACTIONS(423),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(425),
    [anon_sym_RBRACE] = ACTIONS(421),
  },
  [154] = {
    [sym_arguments] = STATE(32),
    [anon_sym_SEMI] = ACTIONS(387),
    [anon_sym_EQ] = ACTIONS(385),
    [anon_sym_LPAREN] = ACTIONS(387),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(181),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(183),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(185),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(187),
    [anon_sym_AMP_AMP] = ACTIONS(189),
    [anon_sym_PIPE_PIPE] = ACTIONS(191),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [155] = {
    [sym__pattern] = STATE(168),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(427),
  },
  [156] = {
    [anon_sym_SEMI] = ACTIONS(429),
    [anon_sym_COLON] = ACTIONS(429),
    [anon_sym_EQ] = ACTIONS(429),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [157] = {
    [anon_sym_SEMI] = ACTIONS(431),
    [anon_sym_COLON] = ACTIONS(433),
    [anon_sym_EQ] = ACTIONS(435),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [158] = {
    [ts_builtin_sym_end] = ACTIONS(437),
    [anon_sym_LF] = ACTIONS(437),
    [anon_sym_SEMI] = ACTIONS(437),
    [anon_sym_fn] = ACTIONS(439),
    [anon_sym_let] = ACTIONS(439),
    [anon_sym_LPAREN] = ACTIONS(437),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(437),
    [anon_sym_return] = ACTIONS(439),
    [anon_sym_LBRACK] = ACTIONS(437),
    [sym_number_literal] = ACTIONS(439),
    [anon_sym_DQUOTE] = ACTIONS(437),
    [sym_raw_string_literal] = ACTIONS(439),
    [anon_sym_SQUOTE] = ACTIONS(437),
    [sym_boolean_literal] = ACTIONS(439),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(441),
    [anon_sym_RBRACE] = ACTIONS(437),
  },
  [159] = {
    [sym_type_expression] = STATE(164),
    [anon_sym_u8] = ACTIONS(443),
    [anon_sym_i8] = ACTIONS(443),
    [anon_sym_u16] = ACTIONS(443),
    [anon_sym_i16] = ACTIONS(443),
    [anon_sym_u32] = ACTIONS(443),
    [anon_sym_i32] = ACTIONS(443),
    [anon_sym_u64] = ACTIONS(443),
    [anon_sym_i64] = ACTIONS(443),
    [anon_sym_isize] = ACTIONS(443),
    [anon_sym_usize] = ACTIONS(443),
    [anon_sym_f32] = ACTIONS(443),
    [anon_sym_f64] = ACTIONS(443),
    [sym_boolean_literal] = ACTIONS(443),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(445),
  },
  [160] = {
    [sym__expression] = STATE(161),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(77),
    [anon_sym_return] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [161] = {
    [sym_arguments] = STATE(32),
    [anon_sym_SEMI] = ACTIONS(447),
    [anon_sym_EQ] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(179),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(181),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(183),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(185),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(187),
    [anon_sym_AMP_AMP] = ACTIONS(189),
    [anon_sym_PIPE_PIPE] = ACTIONS(191),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [162] = {
    [ts_builtin_sym_end] = ACTIONS(449),
    [anon_sym_LF] = ACTIONS(449),
    [anon_sym_SEMI] = ACTIONS(449),
    [anon_sym_fn] = ACTIONS(451),
    [anon_sym_let] = ACTIONS(451),
    [anon_sym_LPAREN] = ACTIONS(449),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(449),
    [anon_sym_return] = ACTIONS(451),
    [anon_sym_LBRACK] = ACTIONS(449),
    [sym_number_literal] = ACTIONS(451),
    [anon_sym_DQUOTE] = ACTIONS(449),
    [sym_raw_string_literal] = ACTIONS(451),
    [anon_sym_SQUOTE] = ACTIONS(449),
    [sym_boolean_literal] = ACTIONS(451),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(453),
    [anon_sym_RBRACE] = ACTIONS(449),
  },
  [163] = {
    [anon_sym_SEMI] = ACTIONS(455),
    [anon_sym_EQ] = ACTIONS(455),
    [anon_sym_RPAREN] = ACTIONS(455),
    [anon_sym_COMMA] = ACTIONS(455),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(455),
  },
  [164] = {
    [anon_sym_SEMI] = ACTIONS(447),
    [anon_sym_EQ] = ACTIONS(457),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [165] = {
    [sym__expression] = STATE(166),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(77),
    [anon_sym_return] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [166] = {
    [sym_arguments] = STATE(32),
    [anon_sym_SEMI] = ACTIONS(459),
    [anon_sym_EQ] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(179),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(181),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(183),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(185),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(187),
    [anon_sym_AMP_AMP] = ACTIONS(189),
    [anon_sym_PIPE_PIPE] = ACTIONS(191),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [167] = {
    [ts_builtin_sym_end] = ACTIONS(461),
    [anon_sym_LF] = ACTIONS(461),
    [anon_sym_SEMI] = ACTIONS(461),
    [anon_sym_fn] = ACTIONS(463),
    [anon_sym_let] = ACTIONS(463),
    [anon_sym_LPAREN] = ACTIONS(461),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(461),
    [anon_sym_return] = ACTIONS(463),
    [anon_sym_LBRACK] = ACTIONS(461),
    [sym_number_literal] = ACTIONS(463),
    [anon_sym_DQUOTE] = ACTIONS(461),
    [sym_raw_string_literal] = ACTIONS(463),
    [anon_sym_SQUOTE] = ACTIONS(461),
    [sym_boolean_literal] = ACTIONS(463),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(465),
    [anon_sym_RBRACE] = ACTIONS(461),
  },
  [168] = {
    [anon_sym_SEMI] = ACTIONS(467),
    [anon_sym_COLON] = ACTIONS(469),
    [anon_sym_EQ] = ACTIONS(471),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [169] = {
    [ts_builtin_sym_end] = ACTIONS(473),
    [anon_sym_LF] = ACTIONS(473),
    [anon_sym_SEMI] = ACTIONS(473),
    [anon_sym_fn] = ACTIONS(475),
    [anon_sym_let] = ACTIONS(475),
    [anon_sym_LPAREN] = ACTIONS(473),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(473),
    [anon_sym_return] = ACTIONS(475),
    [anon_sym_LBRACK] = ACTIONS(473),
    [sym_number_literal] = ACTIONS(475),
    [anon_sym_DQUOTE] = ACTIONS(473),
    [sym_raw_string_literal] = ACTIONS(475),
    [anon_sym_SQUOTE] = ACTIONS(473),
    [sym_boolean_literal] = ACTIONS(475),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(477),
    [anon_sym_RBRACE] = ACTIONS(473),
  },
  [170] = {
    [sym_type_expression] = STATE(174),
    [anon_sym_u8] = ACTIONS(443),
    [anon_sym_i8] = ACTIONS(443),
    [anon_sym_u16] = ACTIONS(443),
    [anon_sym_i16] = ACTIONS(443),
    [anon_sym_u32] = ACTIONS(443),
    [anon_sym_i32] = ACTIONS(443),
    [anon_sym_u64] = ACTIONS(443),
    [anon_sym_i64] = ACTIONS(443),
    [anon_sym_isize] = ACTIONS(443),
    [anon_sym_usize] = ACTIONS(443),
    [anon_sym_f32] = ACTIONS(443),
    [anon_sym_f64] = ACTIONS(443),
    [sym_boolean_literal] = ACTIONS(443),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(445),
  },
  [171] = {
    [sym__expression] = STATE(172),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(77),
    [anon_sym_return] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [172] = {
    [sym_arguments] = STATE(32),
    [anon_sym_SEMI] = ACTIONS(479),
    [anon_sym_EQ] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(179),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(181),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(183),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(185),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(187),
    [anon_sym_AMP_AMP] = ACTIONS(189),
    [anon_sym_PIPE_PIPE] = ACTIONS(191),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [173] = {
    [ts_builtin_sym_end] = ACTIONS(481),
    [anon_sym_LF] = ACTIONS(481),
    [anon_sym_SEMI] = ACTIONS(481),
    [anon_sym_fn] = ACTIONS(483),
    [anon_sym_let] = ACTIONS(483),
    [anon_sym_LPAREN] = ACTIONS(481),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(481),
    [anon_sym_return] = ACTIONS(483),
    [anon_sym_LBRACK] = ACTIONS(481),
    [sym_number_literal] = ACTIONS(483),
    [anon_sym_DQUOTE] = ACTIONS(481),
    [sym_raw_string_literal] = ACTIONS(483),
    [anon_sym_SQUOTE] = ACTIONS(481),
    [sym_boolean_literal] = ACTIONS(483),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(485),
    [anon_sym_RBRACE] = ACTIONS(481),
  },
  [174] = {
    [anon_sym_SEMI] = ACTIONS(479),
    [anon_sym_EQ] = ACTIONS(487),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [175] = {
    [sym__expression] = STATE(176),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(77),
    [anon_sym_return] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [176] = {
    [sym_arguments] = STATE(32),
    [anon_sym_SEMI] = ACTIONS(489),
    [anon_sym_EQ] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(179),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(181),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(183),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(185),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(187),
    [anon_sym_AMP_AMP] = ACTIONS(189),
    [anon_sym_PIPE_PIPE] = ACTIONS(191),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [177] = {
    [ts_builtin_sym_end] = ACTIONS(491),
    [anon_sym_LF] = ACTIONS(491),
    [anon_sym_SEMI] = ACTIONS(491),
    [anon_sym_fn] = ACTIONS(493),
    [anon_sym_let] = ACTIONS(493),
    [anon_sym_LPAREN] = ACTIONS(491),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(491),
    [anon_sym_return] = ACTIONS(493),
    [anon_sym_LBRACK] = ACTIONS(491),
    [sym_number_literal] = ACTIONS(493),
    [anon_sym_DQUOTE] = ACTIONS(491),
    [sym_raw_string_literal] = ACTIONS(493),
    [anon_sym_SQUOTE] = ACTIONS(491),
    [sym_boolean_literal] = ACTIONS(493),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(495),
    [anon_sym_RBRACE] = ACTIONS(491),
  },
  [178] = {
    [sym_parameters] = STATE(180),
    [anon_sym_LPAREN] = ACTIONS(497),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [179] = {
    [anon_sym_RPAREN] = ACTIONS(499),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(501),
  },
  [180] = {
    [sym_block] = STATE(183),
    [anon_sym_DASH_GT] = ACTIONS(503),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(505),
  },
  [181] = {
    [sym_type_expression] = STATE(206),
    [anon_sym_u8] = ACTIONS(443),
    [anon_sym_i8] = ACTIONS(443),
    [anon_sym_u16] = ACTIONS(443),
    [anon_sym_i16] = ACTIONS(443),
    [anon_sym_u32] = ACTIONS(443),
    [anon_sym_i32] = ACTIONS(443),
    [anon_sym_u64] = ACTIONS(443),
    [anon_sym_i64] = ACTIONS(443),
    [anon_sym_isize] = ACTIONS(443),
    [anon_sym_usize] = ACTIONS(443),
    [anon_sym_f32] = ACTIONS(443),
    [anon_sym_f64] = ACTIONS(443),
    [sym_boolean_literal] = ACTIONS(443),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(445),
  },
  [182] = {
    [sym__statement_list] = STATE(187),
    [sym__statement] = STATE(188),
    [sym__declaration_statement] = STATE(16),
    [sym__item] = STATE(17),
    [sym_function_item] = STATE(18),
    [sym_let_declaration] = STATE(17),
    [sym__expression_statement] = STATE(16),
    [sym__expression] = STATE(189),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [sym_empty_statement] = STATE(16),
    [anon_sym_SEMI] = ACTIONS(69),
    [anon_sym_fn] = ACTIONS(71),
    [anon_sym_let] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(507),
    [anon_sym_return] = ACTIONS(509),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(511),
  },
  [183] = {
    [ts_builtin_sym_end] = ACTIONS(513),
    [anon_sym_LF] = ACTIONS(513),
    [anon_sym_SEMI] = ACTIONS(513),
    [anon_sym_fn] = ACTIONS(515),
    [anon_sym_let] = ACTIONS(515),
    [anon_sym_LPAREN] = ACTIONS(513),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(513),
    [anon_sym_return] = ACTIONS(515),
    [anon_sym_LBRACK] = ACTIONS(513),
    [sym_number_literal] = ACTIONS(515),
    [anon_sym_DQUOTE] = ACTIONS(513),
    [sym_raw_string_literal] = ACTIONS(515),
    [anon_sym_SQUOTE] = ACTIONS(513),
    [sym_boolean_literal] = ACTIONS(515),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(517),
    [anon_sym_RBRACE] = ACTIONS(513),
  },
  [184] = {
    [sym__expression] = STATE(122),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(507),
    [anon_sym_return] = ACTIONS(509),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [185] = {
    [sym__expression] = STATE(205),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(107),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(519),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(113),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(113),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(109),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(107),
    [anon_sym_AMP_AMP] = ACTIONS(107),
    [anon_sym_PIPE_PIPE] = ACTIONS(107),
    [anon_sym_return] = ACTIONS(509),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(107),
  },
  [186] = {
    [ts_builtin_sym_end] = ACTIONS(521),
    [anon_sym_LF] = ACTIONS(521),
    [anon_sym_SEMI] = ACTIONS(521),
    [anon_sym_fn] = ACTIONS(523),
    [anon_sym_let] = ACTIONS(523),
    [anon_sym_LPAREN] = ACTIONS(521),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(521),
    [anon_sym_return] = ACTIONS(523),
    [anon_sym_LBRACK] = ACTIONS(521),
    [sym_number_literal] = ACTIONS(523),
    [anon_sym_DQUOTE] = ACTIONS(521),
    [sym_raw_string_literal] = ACTIONS(523),
    [anon_sym_SQUOTE] = ACTIONS(521),
    [sym_boolean_literal] = ACTIONS(523),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(525),
    [anon_sym_RBRACE] = ACTIONS(521),
  },
  [187] = {
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(527),
  },
  [188] = {
    [anon_sym_LF] = ACTIONS(529),
    [anon_sym_SEMI] = ACTIONS(529),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(149),
  },
  [189] = {
    [sym_arguments] = STATE(32),
    [anon_sym_SEMI] = ACTIONS(175),
    [anon_sym_EQ] = ACTIONS(531),
    [anon_sym_LPAREN] = ACTIONS(179),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(535),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(537),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(539),
    [anon_sym_AMP_AMP] = ACTIONS(541),
    [anon_sym_PIPE_PIPE] = ACTIONS(543),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(527),
  },
  [190] = {
    [sym__expression] = STATE(203),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(507),
    [anon_sym_return] = ACTIONS(509),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [191] = {
    [sym__expression] = STATE(38),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(507),
    [anon_sym_return] = ACTIONS(509),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [192] = {
    [sym__expression] = STATE(202),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(507),
    [anon_sym_return] = ACTIONS(509),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [193] = {
    [sym__expression] = STATE(201),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(507),
    [anon_sym_return] = ACTIONS(509),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [194] = {
    [sym__expression] = STATE(200),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(507),
    [anon_sym_return] = ACTIONS(509),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [195] = {
    [sym__expression] = STATE(199),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(507),
    [anon_sym_return] = ACTIONS(509),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [196] = {
    [sym__expression] = STATE(198),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(507),
    [anon_sym_return] = ACTIONS(509),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [197] = {
    [ts_builtin_sym_end] = ACTIONS(545),
    [anon_sym_LF] = ACTIONS(545),
    [anon_sym_SEMI] = ACTIONS(545),
    [anon_sym_fn] = ACTIONS(547),
    [anon_sym_let] = ACTIONS(547),
    [anon_sym_LPAREN] = ACTIONS(545),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(545),
    [anon_sym_return] = ACTIONS(547),
    [anon_sym_LBRACK] = ACTIONS(545),
    [sym_number_literal] = ACTIONS(547),
    [anon_sym_DQUOTE] = ACTIONS(545),
    [sym_raw_string_literal] = ACTIONS(547),
    [anon_sym_SQUOTE] = ACTIONS(545),
    [sym_boolean_literal] = ACTIONS(547),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(549),
    [anon_sym_RBRACE] = ACTIONS(545),
  },
  [198] = {
    [sym_arguments] = STATE(32),
    [anon_sym_SEMI] = ACTIONS(221),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(535),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(537),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(539),
    [anon_sym_AMP_AMP] = ACTIONS(541),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(221),
  },
  [199] = {
    [sym_arguments] = STATE(32),
    [anon_sym_SEMI] = ACTIONS(221),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(535),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(537),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(539),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(221),
  },
  [200] = {
    [sym_arguments] = STATE(32),
    [anon_sym_SEMI] = ACTIONS(221),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(535),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(221),
  },
  [201] = {
    [sym_arguments] = STATE(32),
    [anon_sym_SEMI] = ACTIONS(221),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(535),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(539),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(221),
  },
  [202] = {
    [sym_arguments] = STATE(32),
    [anon_sym_SEMI] = ACTIONS(221),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(221),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(221),
  },
  [203] = {
    [sym_arguments] = STATE(32),
    [anon_sym_SEMI] = ACTIONS(267),
    [anon_sym_EQ] = ACTIONS(265),
    [anon_sym_LPAREN] = ACTIONS(267),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(535),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(537),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(539),
    [anon_sym_AMP_AMP] = ACTIONS(541),
    [anon_sym_PIPE_PIPE] = ACTIONS(543),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(267),
  },
  [204] = {
    [sym__statement_list] = STATE(153),
    [sym__statement] = STATE(188),
    [sym__declaration_statement] = STATE(16),
    [sym__item] = STATE(17),
    [sym_function_item] = STATE(18),
    [sym_let_declaration] = STATE(17),
    [sym__expression_statement] = STATE(16),
    [sym__expression] = STATE(19),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [sym_empty_statement] = STATE(16),
    [anon_sym_SEMI] = ACTIONS(69),
    [anon_sym_fn] = ACTIONS(71),
    [anon_sym_let] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(77),
    [anon_sym_return] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(415),
  },
  [205] = {
    [sym_arguments] = STATE(32),
    [anon_sym_SEMI] = ACTIONS(387),
    [anon_sym_EQ] = ACTIONS(385),
    [anon_sym_LPAREN] = ACTIONS(387),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(535),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(537),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(539),
    [anon_sym_AMP_AMP] = ACTIONS(541),
    [anon_sym_PIPE_PIPE] = ACTIONS(543),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(387),
  },
  [206] = {
    [sym_block] = STATE(207),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(505),
  },
  [207] = {
    [ts_builtin_sym_end] = ACTIONS(551),
    [anon_sym_LF] = ACTIONS(551),
    [anon_sym_SEMI] = ACTIONS(551),
    [anon_sym_fn] = ACTIONS(553),
    [anon_sym_let] = ACTIONS(553),
    [anon_sym_LPAREN] = ACTIONS(551),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(551),
    [anon_sym_return] = ACTIONS(553),
    [anon_sym_LBRACK] = ACTIONS(551),
    [sym_number_literal] = ACTIONS(553),
    [anon_sym_DQUOTE] = ACTIONS(551),
    [sym_raw_string_literal] = ACTIONS(553),
    [anon_sym_SQUOTE] = ACTIONS(551),
    [sym_boolean_literal] = ACTIONS(553),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(555),
    [anon_sym_RBRACE] = ACTIONS(551),
  },
  [208] = {
    [anon_sym_DASH_GT] = ACTIONS(557),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(557),
  },
  [209] = {
    [anon_sym_COLON] = ACTIONS(559),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [210] = {
    [sym_type_expression] = STATE(211),
    [anon_sym_u8] = ACTIONS(443),
    [anon_sym_i8] = ACTIONS(443),
    [anon_sym_u16] = ACTIONS(443),
    [anon_sym_i16] = ACTIONS(443),
    [anon_sym_u32] = ACTIONS(443),
    [anon_sym_i32] = ACTIONS(443),
    [anon_sym_u64] = ACTIONS(443),
    [anon_sym_i64] = ACTIONS(443),
    [anon_sym_isize] = ACTIONS(443),
    [anon_sym_usize] = ACTIONS(443),
    [anon_sym_f32] = ACTIONS(443),
    [anon_sym_f64] = ACTIONS(443),
    [sym_boolean_literal] = ACTIONS(443),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(445),
  },
  [211] = {
    [aux_sym_parameters_repeat1] = STATE(214),
    [anon_sym_RPAREN] = ACTIONS(561),
    [anon_sym_COMMA] = ACTIONS(563),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [212] = {
    [anon_sym_DASH_GT] = ACTIONS(565),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(565),
  },
  [213] = {
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(567),
  },
  [214] = {
    [anon_sym_RPAREN] = ACTIONS(569),
    [anon_sym_COMMA] = ACTIONS(571),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [215] = {
    [anon_sym_DASH_GT] = ACTIONS(573),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(573),
  },
  [216] = {
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(575),
  },
  [217] = {
    [anon_sym_COLON] = ACTIONS(577),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [218] = {
    [sym_type_expression] = STATE(219),
    [anon_sym_u8] = ACTIONS(443),
    [anon_sym_i8] = ACTIONS(443),
    [anon_sym_u16] = ACTIONS(443),
    [anon_sym_i16] = ACTIONS(443),
    [anon_sym_u32] = ACTIONS(443),
    [anon_sym_i32] = ACTIONS(443),
    [anon_sym_u64] = ACTIONS(443),
    [anon_sym_i64] = ACTIONS(443),
    [anon_sym_isize] = ACTIONS(443),
    [anon_sym_usize] = ACTIONS(443),
    [anon_sym_f32] = ACTIONS(443),
    [anon_sym_f64] = ACTIONS(443),
    [sym_boolean_literal] = ACTIONS(443),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(445),
  },
  [219] = {
    [anon_sym_RPAREN] = ACTIONS(579),
    [anon_sym_COMMA] = ACTIONS(579),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [220] = {
    [anon_sym_COLON] = ACTIONS(581),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [221] = {
    [sym_type_expression] = STATE(222),
    [anon_sym_u8] = ACTIONS(443),
    [anon_sym_i8] = ACTIONS(443),
    [anon_sym_u16] = ACTIONS(443),
    [anon_sym_i16] = ACTIONS(443),
    [anon_sym_u32] = ACTIONS(443),
    [anon_sym_i32] = ACTIONS(443),
    [anon_sym_u64] = ACTIONS(443),
    [anon_sym_i64] = ACTIONS(443),
    [anon_sym_isize] = ACTIONS(443),
    [anon_sym_usize] = ACTIONS(443),
    [anon_sym_f32] = ACTIONS(443),
    [anon_sym_f64] = ACTIONS(443),
    [sym_boolean_literal] = ACTIONS(443),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(445),
  },
  [222] = {
    [anon_sym_RPAREN] = ACTIONS(583),
    [anon_sym_COMMA] = ACTIONS(583),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [223] = {
    [sym__statement_list] = STATE(153),
    [sym__statement] = STATE(241),
    [sym__declaration_statement] = STATE(16),
    [sym__item] = STATE(17),
    [sym_function_item] = STATE(18),
    [sym_let_declaration] = STATE(17),
    [sym__expression_statement] = STATE(16),
    [sym__expression] = STATE(291),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [sym_empty_statement] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(585),
    [anon_sym_LF] = ACTIONS(595),
    [anon_sym_SEMI] = ACTIONS(604),
    [anon_sym_fn] = ACTIONS(615),
    [anon_sym_let] = ACTIONS(626),
    [anon_sym_LPAREN] = ACTIONS(637),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(648),
    [anon_sym_return] = ACTIONS(659),
    [anon_sym_LBRACK] = ACTIONS(670),
    [sym_number_literal] = ACTIONS(681),
    [anon_sym_DQUOTE] = ACTIONS(692),
    [sym_raw_string_literal] = ACTIONS(681),
    [anon_sym_SQUOTE] = ACTIONS(703),
    [sym_boolean_literal] = ACTIONS(681),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(714),
    [anon_sym_RBRACE] = ACTIONS(585),
  },
  [224] = {
    [sym_type_expression] = STATE(288),
    [anon_sym_u8] = ACTIONS(443),
    [anon_sym_i8] = ACTIONS(443),
    [anon_sym_u16] = ACTIONS(443),
    [anon_sym_i16] = ACTIONS(443),
    [anon_sym_u32] = ACTIONS(443),
    [anon_sym_i32] = ACTIONS(443),
    [anon_sym_u64] = ACTIONS(443),
    [anon_sym_i64] = ACTIONS(443),
    [anon_sym_isize] = ACTIONS(443),
    [anon_sym_usize] = ACTIONS(443),
    [anon_sym_f32] = ACTIONS(443),
    [anon_sym_f64] = ACTIONS(443),
    [sym_boolean_literal] = ACTIONS(443),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(445),
  },
  [225] = {
    [sym__expression] = STATE(286),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(725),
    [anon_sym_return] = ACTIONS(727),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [226] = {
    [sym__expression] = STATE(285),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(729),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(213),
    [anon_sym_return] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(731),
  },
  [227] = {
    [anon_sym_SEMI] = ACTIONS(733),
    [anon_sym_DASH_GT] = ACTIONS(738),
    [anon_sym_EQ] = ACTIONS(742),
    [anon_sym_LPAREN] = ACTIONS(733),
    [anon_sym_RPAREN] = ACTIONS(733),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(733),
    [anon_sym_AMP_AMP] = ACTIONS(733),
    [anon_sym_PIPE_PIPE] = ACTIONS(733),
    [anon_sym_COMMA] = ACTIONS(733),
    [anon_sym_RBRACK] = ACTIONS(733),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(738),
    [anon_sym_RBRACE] = ACTIONS(733),
  },
  [228] = {
    [sym__expression] = STATE(282),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(725),
    [anon_sym_return] = ACTIONS(727),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [229] = {
    [sym__expression] = STATE(281),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(725),
    [anon_sym_return] = ACTIONS(727),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [230] = {
    [sym__expression] = STATE(280),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(747),
    [anon_sym_RPAREN] = ACTIONS(107),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(750),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(113),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(113),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(109),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(107),
    [anon_sym_AMP_AMP] = ACTIONS(107),
    [anon_sym_PIPE_PIPE] = ACTIONS(107),
    [anon_sym_return] = ACTIONS(727),
    [anon_sym_COMMA] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(107),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(107),
  },
  [231] = {
    [sym__expression] = STATE(277),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(752),
    [anon_sym_return] = ACTIONS(754),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(756),
  },
  [232] = {
    [anon_sym_SEMI] = ACTIONS(758),
    [anon_sym_EQ] = ACTIONS(763),
    [anon_sym_LPAREN] = ACTIONS(758),
    [anon_sym_RPAREN] = ACTIONS(758),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(763),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(758),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(763),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(758),
    [anon_sym_AMP_AMP] = ACTIONS(758),
    [anon_sym_PIPE_PIPE] = ACTIONS(758),
    [anon_sym_COMMA] = ACTIONS(758),
    [anon_sym_RBRACK] = ACTIONS(758),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(758),
  },
  [233] = {
    [aux_sym_string_literal_repeat1] = STATE(68),
    [anon_sym_SEMI] = ACTIONS(768),
    [anon_sym_EQ] = ACTIONS(771),
    [anon_sym_LPAREN] = ACTIONS(768),
    [anon_sym_RPAREN] = ACTIONS(768),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(771),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(768),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(771),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(768),
    [anon_sym_AMP_AMP] = ACTIONS(768),
    [anon_sym_PIPE_PIPE] = ACTIONS(768),
    [anon_sym_COMMA] = ACTIONS(768),
    [anon_sym_RBRACK] = ACTIONS(768),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(127),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(774),
    [sym_byte_escape] = ACTIONS(127),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(768),
  },
  [234] = {
    [anon_sym_DQUOTE] = ACTIONS(776),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(776),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(779),
    [sym_byte_escape] = ACTIONS(776),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [235] = {
    [anon_sym_SEMI] = ACTIONS(782),
    [anon_sym_EQ] = ACTIONS(785),
    [anon_sym_LPAREN] = ACTIONS(782),
    [anon_sym_RPAREN] = ACTIONS(782),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(785),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(782),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(785),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(782),
    [anon_sym_AMP_AMP] = ACTIONS(782),
    [anon_sym_PIPE_PIPE] = ACTIONS(782),
    [anon_sym_COMMA] = ACTIONS(782),
    [anon_sym_RBRACK] = ACTIONS(782),
    [anon_sym_SQUOTE] = ACTIONS(131),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(133),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_RBRACK_SLASH] = ACTIONS(788),
    [sym_byte_escape] = ACTIONS(133),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(782),
  },
  [236] = {
    [anon_sym_DQUOTE] = ACTIONS(776),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(776),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(790),
    [anon_sym_SQUOTE] = ACTIONS(273),
    [sym_byte_escape] = ACTIONS(776),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [237] = {
    [anon_sym_SEMI] = ACTIONS(793),
    [anon_sym_EQ] = ACTIONS(796),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_RPAREN] = ACTIONS(793),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(123),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(121),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(123),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(121),
    [anon_sym_AMP_AMP] = ACTIONS(121),
    [anon_sym_PIPE_PIPE] = ACTIONS(121),
    [anon_sym_COMMA] = ACTIONS(793),
    [anon_sym_RBRACK] = ACTIONS(121),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(455),
    [anon_sym_RBRACE] = ACTIONS(121),
  },
  [238] = {
    [sym_parameters] = STATE(180),
    [anon_sym_SEMI] = ACTIONS(799),
    [anon_sym_COLON] = ACTIONS(803),
    [anon_sym_EQ] = ACTIONS(806),
    [anon_sym_LPAREN] = ACTIONS(810),
    [anon_sym_RPAREN] = ACTIONS(813),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(139),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(137),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(139),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(137),
    [anon_sym_AMP_AMP] = ACTIONS(137),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
    [anon_sym_COMMA] = ACTIONS(813),
    [anon_sym_RBRACK] = ACTIONS(137),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(455),
    [anon_sym_RBRACE] = ACTIONS(137),
  },
  [239] = {
    [ts_builtin_sym_end] = ACTIONS(816),
    [anon_sym_LF] = ACTIONS(816),
    [anon_sym_SEMI] = ACTIONS(816),
    [anon_sym_fn] = ACTIONS(819),
    [anon_sym_let] = ACTIONS(819),
    [anon_sym_LPAREN] = ACTIONS(816),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(816),
    [anon_sym_return] = ACTIONS(819),
    [anon_sym_LBRACK] = ACTIONS(816),
    [sym_number_literal] = ACTIONS(819),
    [anon_sym_DQUOTE] = ACTIONS(816),
    [sym_raw_string_literal] = ACTIONS(819),
    [anon_sym_SQUOTE] = ACTIONS(816),
    [sym_boolean_literal] = ACTIONS(819),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(822),
    [anon_sym_RBRACE] = ACTIONS(816),
  },
  [240] = {
    [ts_builtin_sym_end] = ACTIONS(825),
    [anon_sym_SEMI] = ACTIONS(825),
    [anon_sym_fn] = ACTIONS(829),
    [anon_sym_let] = ACTIONS(829),
    [anon_sym_LPAREN] = ACTIONS(825),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(825),
    [anon_sym_return] = ACTIONS(829),
    [anon_sym_LBRACK] = ACTIONS(825),
    [sym_number_literal] = ACTIONS(829),
    [anon_sym_DQUOTE] = ACTIONS(825),
    [sym_raw_string_literal] = ACTIONS(829),
    [anon_sym_SQUOTE] = ACTIONS(825),
    [sym_boolean_literal] = ACTIONS(829),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(833),
    [anon_sym_RBRACE] = ACTIONS(837),
  },
  [241] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_LF] = ACTIONS(840),
    [anon_sym_SEMI] = ACTIONS(842),
    [anon_sym_fn] = ACTIONS(153),
    [anon_sym_let] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(149),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(149),
    [anon_sym_return] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(149),
    [sym_number_literal] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [sym_raw_string_literal] = ACTIONS(153),
    [anon_sym_SQUOTE] = ACTIONS(149),
    [sym_boolean_literal] = ACTIONS(153),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(155),
    [anon_sym_RBRACE] = ACTIONS(149),
  },
  [242] = {
    [anon_sym_SEMI] = ACTIONS(845),
    [anon_sym_COLON] = ACTIONS(847),
    [anon_sym_EQ] = ACTIONS(849),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [243] = {
    [sym_block] = STATE(207),
    [aux_sym_parameters_repeat1] = STATE(214),
    [anon_sym_SEMI] = ACTIONS(851),
    [anon_sym_EQ] = ACTIONS(853),
    [anon_sym_RPAREN] = ACTIONS(855),
    [anon_sym_COMMA] = ACTIONS(859),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(505),
  },
  [244] = {
    [sym_arguments] = STATE(32),
    [aux_sym_arguments_repeat1] = STATE(246),
    [anon_sym_SEMI] = ACTIONS(863),
    [anon_sym_EQ] = ACTIONS(869),
    [anon_sym_LPAREN] = ACTIONS(875),
    [anon_sym_RPAREN] = ACTIONS(881),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(889),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(895),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(889),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(895),
    [anon_sym_AMP_AMP] = ACTIONS(895),
    [anon_sym_PIPE_PIPE] = ACTIONS(895),
    [anon_sym_COMMA] = ACTIONS(901),
    [anon_sym_RBRACK] = ACTIONS(909),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(917),
  },
  [245] = {
    [ts_builtin_sym_end] = ACTIONS(923),
    [anon_sym_LF] = ACTIONS(923),
    [anon_sym_SEMI] = ACTIONS(923),
    [anon_sym_fn] = ACTIONS(926),
    [anon_sym_let] = ACTIONS(926),
    [anon_sym_LPAREN] = ACTIONS(923),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(923),
    [anon_sym_return] = ACTIONS(926),
    [anon_sym_LBRACK] = ACTIONS(923),
    [sym_number_literal] = ACTIONS(926),
    [anon_sym_DQUOTE] = ACTIONS(923),
    [sym_raw_string_literal] = ACTIONS(926),
    [anon_sym_SQUOTE] = ACTIONS(923),
    [sym_boolean_literal] = ACTIONS(926),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(929),
    [anon_sym_RBRACE] = ACTIONS(923),
  },
  [246] = {
    [anon_sym_RPAREN] = ACTIONS(253),
    [anon_sym_COMMA] = ACTIONS(932),
    [anon_sym_RBRACK] = ACTIONS(341),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [247] = {
    [sym__expression] = STATE(250),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(752),
    [anon_sym_return] = ACTIONS(754),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [248] = {
    [sym__expression] = STATE(256),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(752),
    [anon_sym_return] = ACTIONS(754),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [249] = {
    [sym__expression] = STATE(255),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(747),
    [anon_sym_RPAREN] = ACTIONS(107),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(934),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(113),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(113),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(109),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(107),
    [anon_sym_AMP_AMP] = ACTIONS(107),
    [anon_sym_PIPE_PIPE] = ACTIONS(107),
    [anon_sym_return] = ACTIONS(754),
    [anon_sym_COMMA] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(107),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [250] = {
    [sym_arguments] = STATE(32),
    [anon_sym_EQ] = ACTIONS(936),
    [anon_sym_LPAREN] = ACTIONS(179),
    [anon_sym_RPAREN] = ACTIONS(261),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(938),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(938),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(940),
    [anon_sym_AMP_AMP] = ACTIONS(940),
    [anon_sym_PIPE_PIPE] = ACTIONS(940),
    [anon_sym_COMMA] = ACTIONS(261),
    [anon_sym_RBRACK] = ACTIONS(261),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [251] = {
    [sym__expression] = STATE(254),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(752),
    [anon_sym_return] = ACTIONS(754),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [252] = {
    [sym__expression] = STATE(253),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(752),
    [anon_sym_return] = ACTIONS(754),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [253] = {
    [sym_arguments] = STATE(32),
    [anon_sym_EQ] = ACTIONS(942),
    [anon_sym_LPAREN] = ACTIONS(945),
    [anon_sym_RPAREN] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(948),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(951),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(948),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(951),
    [anon_sym_AMP_AMP] = ACTIONS(951),
    [anon_sym_PIPE_PIPE] = ACTIONS(951),
    [anon_sym_COMMA] = ACTIONS(221),
    [anon_sym_RBRACK] = ACTIONS(221),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [254] = {
    [sym_arguments] = STATE(32),
    [anon_sym_EQ] = ACTIONS(954),
    [anon_sym_LPAREN] = ACTIONS(957),
    [anon_sym_RPAREN] = ACTIONS(267),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(960),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(963),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(960),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(963),
    [anon_sym_AMP_AMP] = ACTIONS(963),
    [anon_sym_PIPE_PIPE] = ACTIONS(963),
    [anon_sym_COMMA] = ACTIONS(267),
    [anon_sym_RBRACK] = ACTIONS(267),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [255] = {
    [sym_arguments] = STATE(32),
    [anon_sym_EQ] = ACTIONS(966),
    [anon_sym_LPAREN] = ACTIONS(969),
    [anon_sym_RPAREN] = ACTIONS(387),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(972),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(975),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(972),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(975),
    [anon_sym_AMP_AMP] = ACTIONS(975),
    [anon_sym_PIPE_PIPE] = ACTIONS(975),
    [anon_sym_COMMA] = ACTIONS(387),
    [anon_sym_RBRACK] = ACTIONS(387),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [256] = {
    [sym_arguments] = STATE(32),
    [anon_sym_EQ] = ACTIONS(978),
    [anon_sym_LPAREN] = ACTIONS(981),
    [anon_sym_RPAREN] = ACTIONS(389),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(984),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(987),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(984),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(987),
    [anon_sym_AMP_AMP] = ACTIONS(987),
    [anon_sym_PIPE_PIPE] = ACTIONS(987),
    [anon_sym_COMMA] = ACTIONS(389),
    [anon_sym_RBRACK] = ACTIONS(389),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [257] = {
    [sym__expression] = STATE(106),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(990),
    [anon_sym_LF] = ACTIONS(990),
    [anon_sym_SEMI] = ACTIONS(990),
    [anon_sym_fn] = ACTIONS(996),
    [anon_sym_let] = ACTIONS(996),
    [anon_sym_LPAREN] = ACTIONS(1002),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1009),
    [anon_sym_return] = ACTIONS(1016),
    [anon_sym_LBRACK] = ACTIONS(1023),
    [sym_number_literal] = ACTIONS(1030),
    [anon_sym_DQUOTE] = ACTIONS(1037),
    [sym_raw_string_literal] = ACTIONS(1030),
    [anon_sym_SQUOTE] = ACTIONS(1044),
    [sym_boolean_literal] = ACTIONS(1030),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(1051),
    [anon_sym_RBRACE] = ACTIONS(990),
  },
  [258] = {
    [sym__expression] = STATE(263),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(725),
    [anon_sym_return] = ACTIONS(727),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [259] = {
    [anon_sym_SEMI] = ACTIONS(1058),
    [anon_sym_EQ] = ACTIONS(1061),
    [anon_sym_LPAREN] = ACTIONS(1058),
    [anon_sym_RPAREN] = ACTIONS(1058),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1061),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1058),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1061),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1058),
    [anon_sym_AMP_AMP] = ACTIONS(1058),
    [anon_sym_PIPE_PIPE] = ACTIONS(1058),
    [anon_sym_COMMA] = ACTIONS(1058),
    [anon_sym_RBRACK] = ACTIONS(1058),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(1058),
  },
  [260] = {
    [sym__expression] = STATE(262),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(752),
    [anon_sym_return] = ACTIONS(754),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [261] = {
    [anon_sym_SEMI] = ACTIONS(1064),
    [anon_sym_EQ] = ACTIONS(1067),
    [anon_sym_LPAREN] = ACTIONS(1064),
    [anon_sym_RPAREN] = ACTIONS(1064),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1067),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1064),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1067),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1064),
    [anon_sym_AMP_AMP] = ACTIONS(1064),
    [anon_sym_PIPE_PIPE] = ACTIONS(1064),
    [anon_sym_COMMA] = ACTIONS(1064),
    [anon_sym_RBRACK] = ACTIONS(1064),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(1064),
  },
  [262] = {
    [sym_arguments] = STATE(32),
    [anon_sym_EQ] = ACTIONS(936),
    [anon_sym_LPAREN] = ACTIONS(179),
    [anon_sym_RPAREN] = ACTIONS(263),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(938),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(938),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(940),
    [anon_sym_AMP_AMP] = ACTIONS(940),
    [anon_sym_PIPE_PIPE] = ACTIONS(940),
    [anon_sym_COMMA] = ACTIONS(263),
    [anon_sym_RBRACK] = ACTIONS(263),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [263] = {
    [sym_arguments] = STATE(32),
    [anon_sym_SEMI] = ACTIONS(267),
    [anon_sym_EQ] = ACTIONS(1070),
    [anon_sym_LPAREN] = ACTIONS(957),
    [anon_sym_RPAREN] = ACTIONS(267),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1073),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1076),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1073),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1076),
    [anon_sym_AMP_AMP] = ACTIONS(1076),
    [anon_sym_PIPE_PIPE] = ACTIONS(1076),
    [anon_sym_COMMA] = ACTIONS(267),
    [anon_sym_RBRACK] = ACTIONS(267),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(267),
  },
  [264] = {
    [ts_builtin_sym_end] = ACTIONS(1079),
    [anon_sym_LF] = ACTIONS(1079),
    [anon_sym_SEMI] = ACTIONS(1079),
    [anon_sym_fn] = ACTIONS(1082),
    [anon_sym_let] = ACTIONS(1082),
    [anon_sym_LPAREN] = ACTIONS(1079),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1079),
    [anon_sym_return] = ACTIONS(1082),
    [anon_sym_LBRACK] = ACTIONS(1079),
    [sym_number_literal] = ACTIONS(1082),
    [anon_sym_DQUOTE] = ACTIONS(1079),
    [sym_raw_string_literal] = ACTIONS(1082),
    [anon_sym_SQUOTE] = ACTIONS(1079),
    [sym_boolean_literal] = ACTIONS(1082),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(1085),
    [anon_sym_RBRACE] = ACTIONS(1079),
  },
  [265] = {
    [sym__expression] = STATE(266),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(77),
    [anon_sym_return] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [266] = {
    [sym_arguments] = STATE(32),
    [anon_sym_SEMI] = ACTIONS(1088),
    [anon_sym_EQ] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(179),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(181),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(183),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(185),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(187),
    [anon_sym_AMP_AMP] = ACTIONS(189),
    [anon_sym_PIPE_PIPE] = ACTIONS(191),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [267] = {
    [ts_builtin_sym_end] = ACTIONS(1090),
    [anon_sym_LF] = ACTIONS(1090),
    [anon_sym_SEMI] = ACTIONS(1090),
    [anon_sym_fn] = ACTIONS(1093),
    [anon_sym_let] = ACTIONS(1093),
    [anon_sym_LPAREN] = ACTIONS(1090),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1090),
    [anon_sym_return] = ACTIONS(1093),
    [anon_sym_LBRACK] = ACTIONS(1090),
    [sym_number_literal] = ACTIONS(1093),
    [anon_sym_DQUOTE] = ACTIONS(1090),
    [sym_raw_string_literal] = ACTIONS(1093),
    [anon_sym_SQUOTE] = ACTIONS(1090),
    [sym_boolean_literal] = ACTIONS(1093),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(1096),
    [anon_sym_RBRACE] = ACTIONS(1090),
  },
  [268] = {
    [ts_builtin_sym_end] = ACTIONS(1099),
    [anon_sym_LF] = ACTIONS(1099),
    [anon_sym_SEMI] = ACTIONS(1099),
    [anon_sym_fn] = ACTIONS(1102),
    [anon_sym_let] = ACTIONS(1102),
    [anon_sym_LPAREN] = ACTIONS(1099),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1099),
    [anon_sym_return] = ACTIONS(1102),
    [anon_sym_LBRACK] = ACTIONS(1099),
    [sym_number_literal] = ACTIONS(1102),
    [anon_sym_DQUOTE] = ACTIONS(1099),
    [sym_raw_string_literal] = ACTIONS(1102),
    [anon_sym_SQUOTE] = ACTIONS(1099),
    [sym_boolean_literal] = ACTIONS(1102),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(1105),
    [anon_sym_RBRACE] = ACTIONS(1099),
  },
  [269] = {
    [sym_type_expression] = STATE(272),
    [anon_sym_u8] = ACTIONS(443),
    [anon_sym_i8] = ACTIONS(443),
    [anon_sym_u16] = ACTIONS(443),
    [anon_sym_i16] = ACTIONS(443),
    [anon_sym_u32] = ACTIONS(443),
    [anon_sym_i32] = ACTIONS(443),
    [anon_sym_u64] = ACTIONS(443),
    [anon_sym_i64] = ACTIONS(443),
    [anon_sym_isize] = ACTIONS(443),
    [anon_sym_usize] = ACTIONS(443),
    [anon_sym_f32] = ACTIONS(443),
    [anon_sym_f64] = ACTIONS(443),
    [sym_boolean_literal] = ACTIONS(443),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(445),
  },
  [270] = {
    [sym__expression] = STATE(271),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(77),
    [anon_sym_return] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [271] = {
    [sym_arguments] = STATE(32),
    [anon_sym_SEMI] = ACTIONS(851),
    [anon_sym_EQ] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(179),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(181),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(183),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(185),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(187),
    [anon_sym_AMP_AMP] = ACTIONS(189),
    [anon_sym_PIPE_PIPE] = ACTIONS(191),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [272] = {
    [anon_sym_SEMI] = ACTIONS(851),
    [anon_sym_EQ] = ACTIONS(853),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [273] = {
    [sym__statement_list] = STATE(153),
    [sym__statement] = STATE(241),
    [sym__declaration_statement] = STATE(16),
    [sym__item] = STATE(17),
    [sym_function_item] = STATE(18),
    [sym_let_declaration] = STATE(17),
    [sym__expression_statement] = STATE(16),
    [sym__expression] = STATE(19),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [sym_empty_statement] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(415),
    [anon_sym_SEMI] = ACTIONS(1108),
    [anon_sym_fn] = ACTIONS(1111),
    [anon_sym_let] = ACTIONS(1114),
    [anon_sym_LPAREN] = ACTIONS(1117),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1120),
    [anon_sym_return] = ACTIONS(1123),
    [anon_sym_LBRACK] = ACTIONS(1126),
    [sym_number_literal] = ACTIONS(1129),
    [anon_sym_DQUOTE] = ACTIONS(1132),
    [sym_raw_string_literal] = ACTIONS(1129),
    [anon_sym_SQUOTE] = ACTIONS(1135),
    [sym_boolean_literal] = ACTIONS(1129),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(1138),
    [anon_sym_RBRACE] = ACTIONS(415),
  },
  [274] = {
    [sym_type_expression] = STATE(275),
    [anon_sym_u8] = ACTIONS(443),
    [anon_sym_i8] = ACTIONS(443),
    [anon_sym_u16] = ACTIONS(443),
    [anon_sym_i16] = ACTIONS(443),
    [anon_sym_u32] = ACTIONS(443),
    [anon_sym_i32] = ACTIONS(443),
    [anon_sym_u64] = ACTIONS(443),
    [anon_sym_i64] = ACTIONS(443),
    [anon_sym_isize] = ACTIONS(443),
    [anon_sym_usize] = ACTIONS(443),
    [anon_sym_f32] = ACTIONS(443),
    [anon_sym_f64] = ACTIONS(443),
    [sym_boolean_literal] = ACTIONS(443),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(445),
  },
  [275] = {
    [aux_sym_parameters_repeat1] = STATE(214),
    [anon_sym_RPAREN] = ACTIONS(855),
    [anon_sym_COMMA] = ACTIONS(859),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [276] = {
    [anon_sym_COLON] = ACTIONS(1141),
    [anon_sym_EQ] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_RPAREN] = ACTIONS(137),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(139),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(137),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(139),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(137),
    [anon_sym_AMP_AMP] = ACTIONS(137),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
    [anon_sym_COMMA] = ACTIONS(137),
    [anon_sym_RBRACK] = ACTIONS(137),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [277] = {
    [sym_arguments] = STATE(32),
    [anon_sym_EQ] = ACTIONS(936),
    [anon_sym_LPAREN] = ACTIONS(179),
    [anon_sym_RPAREN] = ACTIONS(1143),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(938),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(940),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(938),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(940),
    [anon_sym_AMP_AMP] = ACTIONS(940),
    [anon_sym_PIPE_PIPE] = ACTIONS(940),
    [anon_sym_COMMA] = ACTIONS(1143),
    [anon_sym_RBRACK] = ACTIONS(1143),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [278] = {
    [sym_type_expression] = STATE(279),
    [anon_sym_u8] = ACTIONS(443),
    [anon_sym_i8] = ACTIONS(443),
    [anon_sym_u16] = ACTIONS(443),
    [anon_sym_i16] = ACTIONS(443),
    [anon_sym_u32] = ACTIONS(443),
    [anon_sym_i32] = ACTIONS(443),
    [anon_sym_u64] = ACTIONS(443),
    [anon_sym_i64] = ACTIONS(443),
    [anon_sym_isize] = ACTIONS(443),
    [anon_sym_usize] = ACTIONS(443),
    [anon_sym_f32] = ACTIONS(443),
    [anon_sym_f64] = ACTIONS(443),
    [sym_boolean_literal] = ACTIONS(443),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(445),
  },
  [279] = {
    [anon_sym_RPAREN] = ACTIONS(1146),
    [anon_sym_COMMA] = ACTIONS(1146),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [280] = {
    [sym_arguments] = STATE(32),
    [anon_sym_SEMI] = ACTIONS(387),
    [anon_sym_EQ] = ACTIONS(1149),
    [anon_sym_LPAREN] = ACTIONS(969),
    [anon_sym_RPAREN] = ACTIONS(387),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1152),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1155),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1152),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1155),
    [anon_sym_AMP_AMP] = ACTIONS(1155),
    [anon_sym_PIPE_PIPE] = ACTIONS(1155),
    [anon_sym_COMMA] = ACTIONS(387),
    [anon_sym_RBRACK] = ACTIONS(387),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(387),
  },
  [281] = {
    [sym_arguments] = STATE(32),
    [anon_sym_SEMI] = ACTIONS(221),
    [anon_sym_EQ] = ACTIONS(1158),
    [anon_sym_LPAREN] = ACTIONS(945),
    [anon_sym_RPAREN] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1161),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1164),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1161),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1164),
    [anon_sym_AMP_AMP] = ACTIONS(1164),
    [anon_sym_PIPE_PIPE] = ACTIONS(1164),
    [anon_sym_COMMA] = ACTIONS(221),
    [anon_sym_RBRACK] = ACTIONS(221),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(221),
  },
  [282] = {
    [sym_arguments] = STATE(32),
    [anon_sym_SEMI] = ACTIONS(389),
    [anon_sym_EQ] = ACTIONS(1167),
    [anon_sym_LPAREN] = ACTIONS(981),
    [anon_sym_RPAREN] = ACTIONS(389),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1170),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1173),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1170),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1173),
    [anon_sym_AMP_AMP] = ACTIONS(1173),
    [anon_sym_PIPE_PIPE] = ACTIONS(1173),
    [anon_sym_COMMA] = ACTIONS(389),
    [anon_sym_RBRACK] = ACTIONS(389),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(389),
  },
  [283] = {
    [anon_sym_SEMI] = ACTIONS(225),
    [anon_sym_DASH_GT] = ACTIONS(557),
    [anon_sym_EQ] = ACTIONS(227),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_RPAREN] = ACTIONS(225),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(227),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(227),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(227),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(225),
    [anon_sym_AMP_AMP] = ACTIONS(225),
    [anon_sym_PIPE_PIPE] = ACTIONS(225),
    [anon_sym_COMMA] = ACTIONS(225),
    [anon_sym_RBRACK] = ACTIONS(225),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(557),
    [anon_sym_RBRACE] = ACTIONS(225),
  },
  [284] = {
    [anon_sym_COLON] = ACTIONS(559),
    [anon_sym_EQ] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_RPAREN] = ACTIONS(137),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(139),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(137),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(139),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(137),
    [anon_sym_AMP_AMP] = ACTIONS(137),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
    [anon_sym_COMMA] = ACTIONS(137),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [285] = {
    [sym_arguments] = STATE(32),
    [aux_sym_arguments_repeat1] = STATE(52),
    [anon_sym_EQ] = ACTIONS(231),
    [anon_sym_LPAREN] = ACTIONS(179),
    [anon_sym_RPAREN] = ACTIONS(1176),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(235),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(237),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(239),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(241),
    [anon_sym_AMP_AMP] = ACTIONS(243),
    [anon_sym_PIPE_PIPE] = ACTIONS(245),
    [anon_sym_COMMA] = ACTIONS(247),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [286] = {
    [sym_arguments] = STATE(32),
    [anon_sym_SEMI] = ACTIONS(1178),
    [anon_sym_EQ] = ACTIONS(1070),
    [anon_sym_LPAREN] = ACTIONS(957),
    [anon_sym_RPAREN] = ACTIONS(267),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1073),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1076),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1073),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1076),
    [anon_sym_AMP_AMP] = ACTIONS(1076),
    [anon_sym_PIPE_PIPE] = ACTIONS(1076),
    [anon_sym_COMMA] = ACTIONS(267),
    [anon_sym_RBRACK] = ACTIONS(267),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(267),
  },
  [287] = {
    [ts_builtin_sym_end] = ACTIONS(1181),
    [anon_sym_LF] = ACTIONS(1181),
    [anon_sym_SEMI] = ACTIONS(1181),
    [anon_sym_fn] = ACTIONS(1186),
    [anon_sym_let] = ACTIONS(1186),
    [anon_sym_LPAREN] = ACTIONS(1181),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1181),
    [anon_sym_return] = ACTIONS(1186),
    [anon_sym_LBRACK] = ACTIONS(1181),
    [sym_number_literal] = ACTIONS(1186),
    [anon_sym_DQUOTE] = ACTIONS(1181),
    [sym_raw_string_literal] = ACTIONS(1186),
    [anon_sym_SQUOTE] = ACTIONS(1181),
    [sym_boolean_literal] = ACTIONS(1186),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(1191),
    [anon_sym_RBRACE] = ACTIONS(1181),
  },
  [288] = {
    [aux_sym_parameters_repeat1] = STATE(214),
    [anon_sym_SEMI] = ACTIONS(851),
    [anon_sym_EQ] = ACTIONS(853),
    [anon_sym_RPAREN] = ACTIONS(855),
    [anon_sym_COMMA] = ACTIONS(859),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [289] = {
    [sym__expression] = STATE(297),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1196),
    [anon_sym_return] = ACTIONS(1198),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [290] = {
    [sym__expression] = STATE(296),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(747),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1200),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(113),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(113),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(109),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(107),
    [anon_sym_AMP_AMP] = ACTIONS(107),
    [anon_sym_PIPE_PIPE] = ACTIONS(107),
    [anon_sym_return] = ACTIONS(1198),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(107),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [291] = {
    [sym_arguments] = STATE(32),
    [anon_sym_SEMI] = ACTIONS(175),
    [anon_sym_EQ] = ACTIONS(1202),
    [anon_sym_LPAREN] = ACTIONS(179),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1204),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1206),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1204),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1206),
    [anon_sym_AMP_AMP] = ACTIONS(1206),
    [anon_sym_PIPE_PIPE] = ACTIONS(1206),
    [anon_sym_RBRACK] = ACTIONS(379),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [292] = {
    [sym__expression] = STATE(295),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1196),
    [anon_sym_return] = ACTIONS(1198),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [293] = {
    [sym__expression] = STATE(294),
    [sym_unary_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_assignment_expression] = STATE(20),
    [sym_return_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_array_expression] = STATE(12),
    [sym__literal] = STATE(12),
    [sym_string_literal] = STATE(9),
    [sym_char_literal] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(75),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(1196),
    [anon_sym_return] = ACTIONS(1198),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_number_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [sym_boolean_literal] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
    [sym_identifier] = ACTIONS(89),
  },
  [294] = {
    [sym_arguments] = STATE(32),
    [anon_sym_SEMI] = ACTIONS(221),
    [anon_sym_EQ] = ACTIONS(1208),
    [anon_sym_LPAREN] = ACTIONS(945),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1211),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1214),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1211),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1214),
    [anon_sym_AMP_AMP] = ACTIONS(1214),
    [anon_sym_PIPE_PIPE] = ACTIONS(1214),
    [anon_sym_RBRACK] = ACTIONS(221),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [295] = {
    [sym_arguments] = STATE(32),
    [anon_sym_SEMI] = ACTIONS(267),
    [anon_sym_EQ] = ACTIONS(1217),
    [anon_sym_LPAREN] = ACTIONS(957),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1220),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1223),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1220),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1223),
    [anon_sym_AMP_AMP] = ACTIONS(1223),
    [anon_sym_PIPE_PIPE] = ACTIONS(1223),
    [anon_sym_RBRACK] = ACTIONS(267),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [296] = {
    [sym_arguments] = STATE(32),
    [anon_sym_SEMI] = ACTIONS(387),
    [anon_sym_EQ] = ACTIONS(1226),
    [anon_sym_LPAREN] = ACTIONS(969),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1229),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1232),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1229),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1232),
    [anon_sym_AMP_AMP] = ACTIONS(1232),
    [anon_sym_PIPE_PIPE] = ACTIONS(1232),
    [anon_sym_RBRACK] = ACTIONS(387),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
  [297] = {
    [sym_arguments] = STATE(32),
    [anon_sym_SEMI] = ACTIONS(389),
    [anon_sym_EQ] = ACTIONS(1235),
    [anon_sym_LPAREN] = ACTIONS(981),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(1238),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(1241),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(1238),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(1241),
    [anon_sym_AMP_AMP] = ACTIONS(1241),
    [anon_sym_PIPE_PIPE] = ACTIONS(1241),
    [anon_sym_RBRACK] = ACTIONS(389),
    [sym_line_comment] = ACTIONS(57),
    [sym_block_comment] = ACTIONS(59),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(223),
  [5] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(3),
  [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(181),
  [9] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(4),
  [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(224),
  [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(225),
  [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(163),
  [17] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(155),
  [19] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(226),
  [21] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(227),
  [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(228),
  [25] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(229),
  [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(229),
  [29] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(229),
  [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(230),
  [33] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(231),
  [35] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(8),
  [37] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(232),
  [39] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(9),
  [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(233),
  [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(234),
  [45] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(234),
  [47] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(235),
  [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(64),
  [51] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(64),
  [53] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(236),
  [55] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(237),
  [57] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [61] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(238),
  [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(182),
  [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(239),
  [67] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_source_file, 0),
  [69] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
  [71] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
  [73] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
  [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
  [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
  [79] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
  [81] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(8),
  [83] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(9),
  [85] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(10),
  [87] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(11),
  [89] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(12),
  [91] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1),
  [93] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_empty_statement, 1),
  [95] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1),
  [97] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(178),
  [99] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(155),
  [101] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(156),
  [103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(123),
  [105] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(124),
  [107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_return_expression, 1),
  [109] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_return_expression, 1),
  [111] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
  [113] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_return_expression, 1),
  [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(71),
  [117] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(72),
  [119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
  [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [123] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(66),
  [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(67),
  [129] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(67),
  [131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(63),
  [133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
  [135] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(64),
  [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [139] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 1),
  [145] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_source_file_repeat1, 1),
  [147] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 1),
  [149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 1),
  [151] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(152),
  [153] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym__statement_list, 1),
  [155] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 1),
  [157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [159] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
  [161] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declaration_statement, 1),
  [165] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__declaration_statement, 1),
  [167] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__declaration_statement, 1),
  [169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__item, 1),
  [171] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__item, 1),
  [173] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__item, 1),
  [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(23),
  [177] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(24),
  [179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(25),
  [181] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(26),
  [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(27),
  [185] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(28),
  [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
  [189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
  [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
  [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 1),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_binary_expression, 1),
  [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_source_file, 1),
  [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 2),
  [201] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [203] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 2),
  [205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression_statement, 2),
  [207] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression_statement, 2),
  [209] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression_statement, 2),
  [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
  [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(41),
  [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [219] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call_expression, 2),
  [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_expression, 3),
  [223] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_expression, 3),
  [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 2),
  [227] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_arguments, 2),
  [229] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(40),
  [231] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(43),
  [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(44),
  [235] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(45),
  [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(46),
  [239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(47),
  [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
  [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
  [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
  [247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
  [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3),
  [251] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_arguments, 3),
  [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
  [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
  [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 4),
  [259] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_arguments, 4),
  [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_arguments_repeat1, 3),
  [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_arguments_repeat1, 2),
  [265] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_assignment_expression, 3),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_assignment_expression, 3),
  [269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char_literal, 2),
  [271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char_literal, 2),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(65),
  [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char_literal, 3),
  [277] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char_literal, 3),
  [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 2),
  [281] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string_literal, 2),
  [283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_string_literal_repeat1, 1),
  [285] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_string_literal_repeat1, 1),
  [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
  [289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
  [291] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(70),
  [293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 3),
  [295] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string_literal, 3),
  [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [299] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [301] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(71),
  [303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_expression, 2),
  [305] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_expression, 2),
  [307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
  [309] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(76),
  [311] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(77),
  [313] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(78),
  [315] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(79),
  [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(80),
  [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(81),
  [321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
  [323] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
  [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
  [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
  [329] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(105),
  [331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(88),
  [333] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(89),
  [335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_expression, 3),
  [337] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_expression, 3),
  [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
  [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
  [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_expression, 4),
  [345] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_expression, 4),
  [347] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(88),
  [349] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(91),
  [351] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(92),
  [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
  [355] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(94),
  [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(95),
  [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(96),
  [361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
  [363] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(104),
  [365] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(107),
  [367] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(108),
  [369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(109),
  [371] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(110),
  [373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(111),
  [375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
  [377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(113),
  [379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(114),
  [381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_expression, 5),
  [383] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_expression, 5),
  [385] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_return_expression, 2),
  [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_return_expression, 2),
  [389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2),
  [391] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_expression, 2),
  [393] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(123),
  [395] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(126),
  [397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
  [399] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(128),
  [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(129),
  [403] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(130),
  [405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(131),
  [407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
  [409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
  [411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 3),
  [413] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 3),
  [415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 2),
  [417] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym__statement_list, 2),
  [419] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 2),
  [421] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement_list, 3),
  [423] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement_list, 3),
  [425] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement_list, 3),
  [427] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(156),
  [429] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__pattern, 1),
  [431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(158),
  [433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(159),
  [435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(160),
  [437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 3),
  [439] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_declaration, 3),
  [441] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 3),
  [443] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(163),
  [445] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(163),
  [447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(162),
  [449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 5),
  [451] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_declaration, 5),
  [453] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 5),
  [455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_expression, 1),
  [457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
  [459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(167),
  [461] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 7),
  [463] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_declaration, 7),
  [465] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 7),
  [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(169),
  [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(170),
  [471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(171),
  [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 4),
  [475] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_declaration, 4),
  [477] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 4),
  [479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(173),
  [481] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 6),
  [483] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_declaration, 6),
  [485] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 6),
  [487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
  [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(177),
  [491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 8),
  [493] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_declaration, 8),
  [495] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 8),
  [497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(179),
  [499] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(208),
  [501] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(209),
  [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(181),
  [505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(182),
  [507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(184),
  [509] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(185),
  [511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(186),
  [513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_item, 4),
  [515] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_item, 4),
  [517] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_item, 4),
  [519] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(184),
  [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block, 2),
  [523] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_block, 2),
  [525] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_block, 2),
  [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(197),
  [529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(204),
  [531] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(190),
  [533] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(191),
  [535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(192),
  [537] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(193),
  [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(194),
  [541] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(195),
  [543] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(196),
  [545] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block, 3),
  [547] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_block, 3),
  [549] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_block, 3),
  [551] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_item, 6),
  [553] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_item, 6),
  [555] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_item, 6),
  [557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2),
  [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(210),
  [561] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(212),
  [563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(213),
  [565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5),
  [567] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(220),
  [569] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(215),
  [571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(216),
  [573] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 6),
  [575] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(217),
  [577] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(218),
  [579] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 5),
  [581] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(221),
  [583] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 4),
  [585] = {.count = 9, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8),
  [595] = {.count = 8, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8),
  [604] = {.count = 10, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(2),
  [615] = {.count = 10, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(3),
  [626] = {.count = 10, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(4),
  [637] = {.count = 10, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(5),
  [648] = {.count = 10, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(289),
  [659] = {.count = 10, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(290),
  [670] = {.count = 10, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(8),
  [681] = {.count = 10, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(9),
  [692] = {.count = 10, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(10),
  [703] = {.count = 10, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(11),
  [714] = {.count = 10, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(12),
  [725] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(228),
  [727] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(230),
  [729] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(283),
  [731] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(284),
  [733] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 2), REDUCE(sym__expression, 3), REDUCE(sym_arguments, 3), REDUCE(sym_arguments, 4),
  [738] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2), REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
  [742] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_arguments, 2), REDUCE(sym__expression, 3), REDUCE(sym_arguments, 3), REDUCE(sym_arguments, 4),
  [747] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_return_expression, 1), SHIFT(5),
  [750] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(228),
  [752] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(248),
  [754] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(249),
  [756] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(276),
  [758] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_expression, 2), REDUCE(sym_array_expression, 3), REDUCE(sym_array_expression, 4), REDUCE(sym_array_expression, 5),
  [763] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_expression, 2), REDUCE(sym_array_expression, 3), REDUCE(sym_array_expression, 4), REDUCE(sym_array_expression, 5),
  [768] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 2), REDUCE(sym_string_literal, 3),
  [771] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string_literal, 2), REDUCE(sym_string_literal, 3),
  [774] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(67),
  [776] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_string_literal_repeat1, 1), REDUCE(aux_sym_string_literal_repeat1, 2),
  [779] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_string_literal_repeat1, 1), REDUCE(aux_sym_string_literal_repeat1, 2),
  [782] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char_literal, 2), REDUCE(sym_char_literal, 3),
  [785] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char_literal, 2), REDUCE(sym_char_literal, 3),
  [788] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(64),
  [790] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_literal_repeat1, 1), REDUCE(aux_sym_string_literal_repeat1, 2),
  [793] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_expression, 1), REDUCE(sym__literal, 1),
  [796] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_expression, 1), REDUCE(sym__literal, 1),
  [799] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__pattern, 1), REDUCE(sym_type_expression, 1), REDUCE(sym__expression, 1),
  [803] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__pattern, 1), SHIFT(274),
  [806] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__pattern, 1), REDUCE(sym_type_expression, 1), REDUCE(sym__expression, 1),
  [810] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(179),
  [813] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_expression, 1), REDUCE(sym__expression, 1),
  [816] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block, 2), REDUCE(sym_block, 3),
  [819] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_block, 2), REDUCE(sym_block, 3),
  [822] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_block, 2), REDUCE(sym_block, 3),
  [825] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 1), REDUCE(aux_sym_source_file_repeat1, 2), REDUCE(sym__statement_list, 3),
  [829] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_source_file_repeat1, 1), REDUCE(aux_sym_source_file_repeat1, 2), REDUCE(sym__statement_list, 3),
  [833] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 1), REDUCE(aux_sym_source_file_repeat1, 2), REDUCE(sym__statement_list, 3),
  [837] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement_list, 3), SHIFT(197),
  [840] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(273),
  [842] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 1), SHIFT(273),
  [845] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(268),
  [847] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(269),
  [849] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(270),
  [851] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(264),
  [853] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(265),
  [855] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 4), REDUCE(aux_sym_parameters_repeat1, 5), SHIFT(212),
  [859] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 4), REDUCE(aux_sym_parameters_repeat1, 5), SHIFT(213),
  [863] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2), REDUCE_FRAGILE(sym_return_expression, 2), REDUCE_FRAGILE(sym_binary_expression, 3), REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(257),
  [869] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_expression, 2), REDUCE_FRAGILE(sym_return_expression, 2), REDUCE_FRAGILE(sym_binary_expression, 3), REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(258),
  [875] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2), REDUCE_FRAGILE(sym_return_expression, 2), REDUCE_FRAGILE(sym_binary_expression, 3), REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(25),
  [881] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2), REDUCE_FRAGILE(sym_return_expression, 2), REDUCE(aux_sym_arguments_repeat1, 2), REDUCE_FRAGILE(sym_binary_expression, 3), REDUCE_FRAGILE(sym_assignment_expression, 3), REDUCE(aux_sym_arguments_repeat1, 3), SHIFT(259),
  [889] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_expression, 2), REDUCE_FRAGILE(sym_return_expression, 2), REDUCE_FRAGILE(sym_binary_expression, 3), REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(229),
  [895] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2), REDUCE_FRAGILE(sym_return_expression, 2), REDUCE_FRAGILE(sym_binary_expression, 3), REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(229),
  [901] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2), REDUCE_FRAGILE(sym_return_expression, 2), REDUCE(aux_sym_arguments_repeat1, 2), REDUCE_FRAGILE(sym_binary_expression, 3), REDUCE_FRAGILE(sym_assignment_expression, 3), REDUCE(aux_sym_arguments_repeat1, 3), SHIFT(260),
  [909] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2), REDUCE_FRAGILE(sym_return_expression, 2), REDUCE(aux_sym_arguments_repeat1, 2), REDUCE_FRAGILE(sym_binary_expression, 3), REDUCE_FRAGILE(sym_assignment_expression, 3), REDUCE(aux_sym_arguments_repeat1, 3), SHIFT(261),
  [917] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2), REDUCE_FRAGILE(sym_return_expression, 2), REDUCE_FRAGILE(sym_binary_expression, 3), REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(197),
  [923] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_item, 4), REDUCE(sym_function_item, 6),
  [926] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_item, 4), REDUCE(sym_function_item, 6),
  [929] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_item, 4), REDUCE(sym_function_item, 6),
  [932] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(247),
  [934] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(248),
  [936] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(251),
  [938] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(252),
  [940] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(252),
  [942] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(251),
  [945] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(25),
  [948] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(252),
  [951] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(252),
  [954] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(251),
  [957] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(25),
  [960] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(252),
  [963] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(252),
  [966] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(251),
  [969] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(25),
  [972] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(252),
  [975] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(252),
  [978] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(251),
  [981] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(25),
  [984] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(252),
  [987] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(252),
  [990] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8),
  [996] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8),
  [1002] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(5),
  [1009] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(104),
  [1016] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(105),
  [1023] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(8),
  [1030] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(9),
  [1037] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(10),
  [1044] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(11),
  [1051] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(12),
  [1058] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 3), REDUCE(sym_arguments, 3),
  [1061] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 3), REDUCE(sym_arguments, 3),
  [1064] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_expression, 3), REDUCE(sym_array_expression, 5),
  [1067] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_expression, 3), REDUCE(sym_array_expression, 5),
  [1070] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(258),
  [1073] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(229),
  [1076] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(229),
  [1079] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6),
  [1082] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6),
  [1085] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6),
  [1088] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(267),
  [1090] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8),
  [1093] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8),
  [1096] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8),
  [1099] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4),
  [1102] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4),
  [1105] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4),
  [1108] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(2),
  [1111] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(3),
  [1114] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(4),
  [1117] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(5),
  [1120] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(6),
  [1123] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(7),
  [1126] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(8),
  [1129] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(9),
  [1132] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(10),
  [1135] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(11),
  [1138] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(12),
  [1141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(278),
  [1143] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_arguments_repeat1, 2), REDUCE(aux_sym_arguments_repeat1, 3),
  [1146] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 4), REDUCE(aux_sym_parameters_repeat1, 5),
  [1149] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(258),
  [1152] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(229),
  [1155] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(229),
  [1158] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(258),
  [1161] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(229),
  [1164] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(229),
  [1167] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(258),
  [1170] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(229),
  [1173] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(229),
  [1176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(259),
  [1178] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(287),
  [1181] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8),
  [1186] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8),
  [1191] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8),
  [1196] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(289),
  [1198] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(290),
  [1200] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(289),
  [1202] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(292),
  [1204] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(293),
  [1206] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(293),
  [1208] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(292),
  [1211] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(293),
  [1214] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(293),
  [1217] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(292),
  [1220] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(293),
  [1223] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(293),
  [1226] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(292),
  [1229] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(293),
  [1232] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(293),
  [1235] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(292),
  [1238] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(293),
  [1241] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(293),
};

const TSLanguage *tree_sitter_rust() {
  GET_LANGUAGE();
}
