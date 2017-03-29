#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define LANGUAGE_VERSION 2
#define STATE_COUNT 213
#define SYMBOL_COUNT 74
#define TOKEN_COUNT 47
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
  sym_number_literal = 32,
  anon_sym_DQUOTE = 33,
  anon_sym_BSLASH_DQUOTE = 34,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH = 35,
  sym_raw_string_literal = 36,
  anon_sym_SQUOTE = 37,
  anon_sym_BSLASH_SQUOTE = 38,
  aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_RBRACK_SLASH = 39,
  sym_byte_escape = 40,
  sym_boolean_literal = 41,
  sym_line_comment = 42,
  sym_block_comment = 43,
  sym_identifier = 44,
  anon_sym_LBRACE = 45,
  anon_sym_RBRACE = 46,
  sym_source_file = 47,
  sym__statement_list = 48,
  sym__statement = 49,
  sym__declaration_statement = 50,
  sym__item = 51,
  sym_function_item = 52,
  sym_let_declaration = 53,
  sym__pattern = 54,
  sym_type_expression = 55,
  sym__expression_statement = 56,
  sym__expression = 57,
  sym_unary_expression = 58,
  sym_binary_expression = 59,
  sym_assignment_expression = 60,
  sym_return_expression = 61,
  sym_call_expression = 62,
  sym_arguments = 63,
  sym__literal = 64,
  sym_string_literal = 65,
  sym_char_literal = 66,
  sym_parameters = 67,
  sym_block = 68,
  sym_empty_statement = 69,
  aux_sym_source_file_repeat1 = 70,
  aux_sym_arguments_repeat1 = 71,
  aux_sym_string_literal_repeat1 = 72,
  aux_sym_parameters_repeat1 = 73,
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
      if (lookahead == '\\')
        ADVANCE(47);
      if (lookahead == 'f')
        ADVANCE(53);
      if (lookahead == 'i')
        ADVANCE(63);
      if (lookahead == 'l')
        ADVANCE(75);
      if (lookahead == 'm')
        ADVANCE(78);
      if (lookahead == 'r')
        ADVANCE(81);
      if (lookahead == 't')
        ADVANCE(102);
      if (lookahead == 'u')
        ADVANCE(104);
      if (lookahead == '{')
        ADVANCE(116);
      if (lookahead == '|')
        ADVANCE(117);
      if (lookahead == '}')
        ADVANCE(119);
      if (!((lookahead == 0) ||
          (lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (' ' <= lookahead && lookahead <= '\"') ||
          ('$' <= lookahead && lookahead <= '-') ||
          ('/' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '\\') ||
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
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '\"')
        ADVANCE(48);
      if (lookahead == '\'')
        ADVANCE(49);
      if (lookahead == '0')
        ADVANCE(50);
      if (lookahead == '\\')
        ADVANCE(50);
      if (lookahead == 'n')
        ADVANCE(50);
      if (lookahead == 'r')
        ADVANCE(50);
      if (lookahead == 't')
        ADVANCE(50);
      if (lookahead == 'x')
        ADVANCE(51);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_BSLASH_SQUOTE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_byte_escape);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(52);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(50);
      END_STATE();
    case 53:
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
        ADVANCE(54);
      if (lookahead == '6')
        ADVANCE(56);
      if (lookahead == 'a')
        ADVANCE(58);
      if (lookahead == 'n')
        ADVANCE(62);
      END_STATE();
    case 54:
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
        ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_f32);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '3') ||
          ('5' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '4')
        ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_f64);
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
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'l')
        ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 's')
        ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'e')
        ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_boolean_literal);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_fn);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 63:
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
        ADVANCE(64);
      if (lookahead == '3')
        ADVANCE(66);
      if (lookahead == '6')
        ADVANCE(68);
      if (lookahead == '8')
        ADVANCE(70);
      if (lookahead == 's')
        ADVANCE(71);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '5') ||
          ('7' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '6')
        ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_i16);
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
          (lookahead == '0') ||
          (lookahead == '1') ||
          ('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '2')
        ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_i32);
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
          ('0' <= lookahead && lookahead <= '3') ||
          ('5' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '4')
        ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_i64);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_i8);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'i')
        ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(7);
      if (lookahead == 'z')
        ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'e')
        ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_isize);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
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
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 't')
        ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_let);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'u')
        ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 't')
        ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_mutable_specifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '#')
        ADVANCE(82);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'e')
        ADVANCE(97);
      END_STATE();
    case 82:
      if (lookahead == '\"')
        ADVANCE(83);
      if (lookahead == '#')
        ADVANCE(86);
      END_STATE();
    case 83:
      if (lookahead == '\"')
        ADVANCE(84);
      if (!((lookahead == 0) ||
          (lookahead == '\n') ||
          (lookahead == '\"')))
        ADVANCE(83);
      END_STATE();
    case 84:
      if (lookahead == '\"')
        ADVANCE(84);
      if (lookahead == '#')
        ADVANCE(85);
      if (!((lookahead == 0) ||
          (lookahead == '\n') ||
          (lookahead == '\"') ||
          (lookahead == '#')))
        ADVANCE(83);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_raw_string_literal);
      if (lookahead == '\"')
        ADVANCE(84);
      if (!((lookahead == 0) ||
          (lookahead == '\n') ||
          (lookahead == '\"')))
        ADVANCE(83);
      END_STATE();
    case 86:
      if (lookahead == '\"')
        ADVANCE(87);
      if (lookahead == '#')
        ADVANCE(91);
      END_STATE();
    case 87:
      if (lookahead == '\"')
        ADVANCE(88);
      if (!((lookahead == 0) ||
          (lookahead == '\n') ||
          (lookahead == '\"')))
        ADVANCE(87);
      END_STATE();
    case 88:
      if (lookahead == '\"')
        ADVANCE(88);
      if (lookahead == '#')
        ADVANCE(89);
      if (!((lookahead == 0) ||
          (lookahead == '\n') ||
          (lookahead == '\"') ||
          (lookahead == '#')))
        ADVANCE(87);
      END_STATE();
    case 89:
      if (lookahead == '\"')
        ADVANCE(88);
      if (lookahead == '#')
        ADVANCE(90);
      if (!((lookahead == 0) ||
          (lookahead == '\n') ||
          (lookahead == '\"') ||
          (lookahead == '#')))
        ADVANCE(87);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_raw_string_literal);
      if (lookahead == '\"')
        ADVANCE(88);
      if (!((lookahead == 0) ||
          (lookahead == '\n') ||
          (lookahead == '\"')))
        ADVANCE(87);
      END_STATE();
    case 91:
      if (lookahead == '\"')
        ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == '\"')
        ADVANCE(93);
      if (!((lookahead == 0) ||
          (lookahead == '\n') ||
          (lookahead == '\"')))
        ADVANCE(92);
      END_STATE();
    case 93:
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '#')
        ADVANCE(94);
      if (!((lookahead == 0) ||
          (lookahead == '\n') ||
          (lookahead == '\"') ||
          (lookahead == '#')))
        ADVANCE(92);
      END_STATE();
    case 94:
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '#')
        ADVANCE(95);
      if (!((lookahead == 0) ||
          (lookahead == '\n') ||
          (lookahead == '\"') ||
          (lookahead == '#')))
        ADVANCE(92);
      END_STATE();
    case 95:
      if (lookahead == '\"')
        ADVANCE(93);
      if (lookahead == '#')
        ADVANCE(96);
      if (!((lookahead == 0) ||
          (lookahead == '\n') ||
          (lookahead == '\"') ||
          (lookahead == '#')))
        ADVANCE(92);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_raw_string_literal);
      if (lookahead == '\"')
        ADVANCE(93);
      if (!((lookahead == 0) ||
          (lookahead == '\n') ||
          (lookahead == '\"')))
        ADVANCE(92);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 't')
        ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'u')
        ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'r')
        ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'n')
        ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_return);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'r')
        ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'u')
        ADVANCE(60);
      END_STATE();
    case 104:
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
        ADVANCE(105);
      if (lookahead == '3')
        ADVANCE(107);
      if (lookahead == '6')
        ADVANCE(109);
      if (lookahead == '8')
        ADVANCE(111);
      if (lookahead == 's')
        ADVANCE(112);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '5') ||
          ('7' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '6')
        ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_u16);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 107:
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
        ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_u32);
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
          ('0' <= lookahead && lookahead <= '3') ||
          ('5' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '4')
        ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_u64);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_u8);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'i')
        ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(7);
      if (lookahead == 'z')
        ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'e')
        ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_usize);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '|')
        ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 120:
      if (lookahead == 0)
        ADVANCE(1);
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(120);
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
        ADVANCE(121);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == 'f')
        ADVANCE(122);
      if (lookahead == 'l')
        ADVANCE(123);
      if (lookahead == 'r')
        ADVANCE(124);
      if (lookahead == 't')
        ADVANCE(125);
      END_STATE();
    case 121:
      if (lookahead == '*')
        ADVANCE(20);
      if (lookahead == '/')
        ADVANCE(23);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('b' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'a')
        ADVANCE(58);
      if (lookahead == 'n')
        ADVANCE(62);
      END_STATE();
    case 123:
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
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#')
        ADVANCE(82);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'e')
        ADVANCE(97);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'r')
        ADVANCE(103);
      END_STATE();
    case 126:
      if (lookahead == 0)
        ADVANCE(1);
      if ((lookahead == '\t') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(126);
      if (lookahead == '\n')
        ADVANCE(127);
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
        ADVANCE(121);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == 'f')
        ADVANCE(122);
      if (lookahead == 'l')
        ADVANCE(123);
      if (lookahead == 'r')
        ADVANCE(124);
      if (lookahead == 't')
        ADVANCE(125);
      if (lookahead == '}')
        ADVANCE(119);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 128:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(128);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '/')
        ADVANCE(121);
      END_STATE();
    case 129:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(129);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == '/')
        ADVANCE(121);
      if (lookahead == 'm')
        ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'u')
        ADVANCE(79);
      END_STATE();
    case 131:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(131);
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
        ADVANCE(121);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == 'f')
        ADVANCE(132);
      if (lookahead == 'r')
        ADVANCE(124);
      if (lookahead == 't')
        ADVANCE(125);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if ((lookahead == '$') ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == 'a')
        ADVANCE(58);
      END_STATE();
    case 133:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(133);
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
        ADVANCE(134);
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
      if (lookahead == 'f')
        ADVANCE(132);
      if (lookahead == 'r')
        ADVANCE(124);
      if (lookahead == 't')
        ADVANCE(125);
      if (lookahead == '|')
        ADVANCE(135);
      END_STATE();
    case 134:
      if (lookahead == '&')
        ADVANCE(10);
      END_STATE();
    case 135:
      if (lookahead == '|')
        ADVANCE(118);
      END_STATE();
    case 136:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(136);
      if (lookahead == '!')
        ADVANCE(137);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(134);
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
      if (lookahead == '|')
        ADVANCE(135);
      if (lookahead == '}')
        ADVANCE(119);
      END_STATE();
    case 137:
      if (lookahead == '=')
        ADVANCE(4);
      END_STATE();
    case 138:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(139);
      if (lookahead == '\\')
        ADVANCE(140);
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
    case 139:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(20);
      if (lookahead == '/')
        ADVANCE(23);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '\"')
        ADVANCE(48);
      if (lookahead == '0')
        ADVANCE(50);
      if (lookahead == '\\')
        ADVANCE(50);
      if (lookahead == 'n')
        ADVANCE(50);
      if (lookahead == 'r')
        ADVANCE(50);
      if (lookahead == 't')
        ADVANCE(50);
      if (lookahead == 'x')
        ADVANCE(51);
      END_STATE();
    case 141:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        ADVANCE(142);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(143);
      if (lookahead == '\\')
        ADVANCE(144);
      if (!((lookahead == 0) ||
          (lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' ') ||
          (lookahead == '\'') ||
          (lookahead == '/') ||
          (lookahead == '\\')))
        ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_RBRACK_SLASH);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(20);
      if (lookahead == '/')
        ADVANCE(23);
      END_STATE();
    case 144:
      if (lookahead == '\'')
        ADVANCE(49);
      if (lookahead == '0')
        ADVANCE(50);
      if (lookahead == '\\')
        ADVANCE(50);
      if (lookahead == 'n')
        ADVANCE(50);
      if (lookahead == 'r')
        ADVANCE(50);
      if (lookahead == 't')
        ADVANCE(50);
      if (lookahead == 'x')
        ADVANCE(51);
      END_STATE();
    case 145:
      if (lookahead == 0)
        ADVANCE(1);
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(145);
      if (lookahead == '/')
        ADVANCE(121);
      END_STATE();
    case 146:
      if (lookahead == 0)
        ADVANCE(1);
      if ((lookahead == '\t') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(146);
      if (lookahead == '\n')
        ADVANCE(127);
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
        ADVANCE(121);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == 'f')
        ADVANCE(122);
      if (lookahead == 'l')
        ADVANCE(123);
      if (lookahead == 'r')
        ADVANCE(124);
      if (lookahead == 't')
        ADVANCE(125);
      END_STATE();
    case 147:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(147);
      if (lookahead == '!')
        ADVANCE(137);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(134);
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
        ADVANCE(135);
      END_STATE();
    case 148:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(148);
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
        ADVANCE(121);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == 'f')
        ADVANCE(132);
      if (lookahead == 'r')
        ADVANCE(124);
      if (lookahead == 't')
        ADVANCE(125);
      END_STATE();
    case 149:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(149);
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
        ADVANCE(134);
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
      if (lookahead == 'f')
        ADVANCE(132);
      if (lookahead == 'r')
        ADVANCE(124);
      if (lookahead == 't')
        ADVANCE(125);
      if (lookahead == '|')
        ADVANCE(135);
      END_STATE();
    case 150:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(150);
      if (lookahead == '!')
        ADVANCE(137);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(134);
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
        ADVANCE(135);
      END_STATE();
    case 151:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(151);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '/')
        ADVANCE(121);
      END_STATE();
    case 152:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(152);
      if (lookahead == '\'')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(121);
      END_STATE();
    case 153:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(153);
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
        ADVANCE(134);
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
      if (lookahead == 'f')
        ADVANCE(132);
      if (lookahead == 'r')
        ADVANCE(124);
      if (lookahead == 't')
        ADVANCE(125);
      if (lookahead == '|')
        ADVANCE(135);
      END_STATE();
    case 154:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(154);
      if (lookahead == '!')
        ADVANCE(137);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(134);
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
        ADVANCE(135);
      END_STATE();
    case 155:
      if (lookahead == 0)
        ADVANCE(1);
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(155);
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
        ADVANCE(121);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == 'f')
        ADVANCE(122);
      if (lookahead == 'l')
        ADVANCE(123);
      if (lookahead == 'r')
        ADVANCE(124);
      if (lookahead == 't')
        ADVANCE(125);
      if (lookahead == '}')
        ADVANCE(119);
      END_STATE();
    case 156:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(156);
      if (lookahead == '/')
        ADVANCE(121);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '=')
        ADVANCE(157);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 158:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(158);
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
        ADVANCE(121);
      if (lookahead == 'f')
        ADVANCE(159);
      if (lookahead == 'i')
        ADVANCE(160);
      if (lookahead == 't')
        ADVANCE(125);
      if (lookahead == 'u')
        ADVANCE(161);
      END_STATE();
    case 159:
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
        ADVANCE(54);
      if (lookahead == '6')
        ADVANCE(56);
      if (lookahead == 'a')
        ADVANCE(58);
      END_STATE();
    case 160:
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
        ADVANCE(64);
      if (lookahead == '3')
        ADVANCE(66);
      if (lookahead == '6')
        ADVANCE(68);
      if (lookahead == '8')
        ADVANCE(70);
      if (lookahead == 's')
        ADVANCE(71);
      END_STATE();
    case 161:
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
        ADVANCE(105);
      if (lookahead == '3')
        ADVANCE(107);
      if (lookahead == '6')
        ADVANCE(109);
      if (lookahead == '8')
        ADVANCE(111);
      if (lookahead == 's')
        ADVANCE(112);
      END_STATE();
    case 162:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(162);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '/')
        ADVANCE(121);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '=')
        ADVANCE(157);
      if (lookahead == '{')
        ADVANCE(116);
      END_STATE();
    case 163:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(163);
      if (lookahead == '/')
        ADVANCE(121);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '=')
        ADVANCE(157);
      END_STATE();
    case 164:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(164);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(121);
      END_STATE();
    case 165:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(165);
      if ((lookahead == '$') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          (lookahead == '_') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(121);
      END_STATE();
    case 166:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(166);
      if (lookahead == '-')
        ADVANCE(167);
      if (lookahead == '/')
        ADVANCE(121);
      if (lookahead == '{')
        ADVANCE(116);
      END_STATE();
    case 167:
      if (lookahead == '>')
        ADVANCE(18);
      END_STATE();
    case 168:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(168);
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
        ADVANCE(121);
      if (lookahead == '0')
        ADVANCE(24);
      if ('1' <= lookahead && lookahead <= '9')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == 'f')
        ADVANCE(122);
      if (lookahead == 'l')
        ADVANCE(123);
      if (lookahead == 'r')
        ADVANCE(124);
      if (lookahead == 't')
        ADVANCE(125);
      if (lookahead == '}')
        ADVANCE(119);
      END_STATE();
    case 169:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(169);
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
        ADVANCE(134);
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
      if (lookahead == 'f')
        ADVANCE(132);
      if (lookahead == 'r')
        ADVANCE(124);
      if (lookahead == 't')
        ADVANCE(125);
      if (lookahead == '|')
        ADVANCE(135);
      if (lookahead == '}')
        ADVANCE(119);
      END_STATE();
    case 170:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(170);
      if (lookahead == '/')
        ADVANCE(121);
      if (lookahead == '}')
        ADVANCE(119);
      END_STATE();
    case 171:
      if ((lookahead == '\t') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(171);
      if (lookahead == '\n')
        ADVANCE(127);
      if (lookahead == '/')
        ADVANCE(121);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '}')
        ADVANCE(119);
      END_STATE();
    case 172:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(172);
      if (lookahead == '!')
        ADVANCE(137);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(134);
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
        ADVANCE(135);
      if (lookahead == '}')
        ADVANCE(119);
      END_STATE();
    case 173:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(173);
      if (lookahead == '/')
        ADVANCE(121);
      if (lookahead == '{')
        ADVANCE(116);
      END_STATE();
    case 174:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(174);
      if (lookahead == '/')
        ADVANCE(121);
      if (lookahead == ':')
        ADVANCE(41);
      END_STATE();
    case 175:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(175);
      if (lookahead == '!')
        ADVANCE(137);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(134);
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
        ADVANCE(176);
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
        ADVANCE(116);
      if (lookahead == '|')
        ADVANCE(135);
      if (lookahead == '}')
        ADVANCE(119);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH);
      if (lookahead == '>')
        ADVANCE(18);
      END_STATE();
    case 177:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(177);
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
        ADVANCE(134);
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
      if (lookahead == 'f')
        ADVANCE(132);
      if (lookahead == 'r')
        ADVANCE(124);
      if (lookahead == 't')
        ADVANCE(125);
      if (lookahead == '|')
        ADVANCE(135);
      if (lookahead == '}')
        ADVANCE(119);
      END_STATE();
    case 178:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        ADVANCE(2);
      if (lookahead == '!')
        ADVANCE(179);
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
        ADVANCE(140);
      if (lookahead == '|')
        ADVANCE(117);
      if (lookahead == '}')
        ADVANCE(119);
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
          (lookahead == '|') ||
          (lookahead == '}')))
        ADVANCE(2);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH);
      if (lookahead == '=')
        ADVANCE(4);
      END_STATE();
    case 180:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        ADVANCE(142);
      if (lookahead == '!')
        ADVANCE(181);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(182);
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
        ADVANCE(144);
      if (lookahead == '|')
        ADVANCE(183);
      if (lookahead == '}')
        ADVANCE(119);
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
          (lookahead == '|') ||
          (lookahead == '}')))
        ADVANCE(142);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_RBRACK_SLASH);
      if (lookahead == '=')
        ADVANCE(4);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_RBRACK_SLASH);
      if (lookahead == '&')
        ADVANCE(10);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_RBRACK_SLASH);
      if (lookahead == '|')
        ADVANCE(118);
      END_STATE();
    case 184:
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
        ADVANCE(139);
      if (lookahead == '\\')
        ADVANCE(140);
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
    case 185:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(185);
      if (lookahead == '!')
        ADVANCE(137);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(134);
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
      if (lookahead == '{')
        ADVANCE(116);
      if (lookahead == '|')
        ADVANCE(135);
      if (lookahead == '}')
        ADVANCE(119);
      END_STATE();
    case 186:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(186);
      if (lookahead == '!')
        ADVANCE(137);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(134);
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
      if (lookahead == '{')
        ADVANCE(116);
      if (lookahead == '|')
        ADVANCE(135);
      if (lookahead == '}')
        ADVANCE(119);
      END_STATE();
    case 187:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(187);
      if (lookahead == '!')
        ADVANCE(137);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(134);
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
        ADVANCE(135);
      END_STATE();
    case 188:
      if ((lookahead == '\t') ||
          (lookahead == '\n') ||
          (lookahead == '\r') ||
          (lookahead == ' '))
        SKIP(188);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == ',')
        ADVANCE(16);
      if (lookahead == '/')
        ADVANCE(121);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '=')
        ADVANCE(157);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 120},
  [2] = {.lex_state = 126},
  [3] = {.lex_state = 128},
  [4] = {.lex_state = 129},
  [5] = {.lex_state = 131},
  [6] = {.lex_state = 131},
  [7] = {.lex_state = 133},
  [8] = {.lex_state = 136},
  [9] = {.lex_state = 138},
  [10] = {.lex_state = 141},
  [11] = {.lex_state = 136},
  [12] = {.lex_state = 145},
  [13] = {.lex_state = 120},
  [14] = {.lex_state = 146},
  [15] = {.lex_state = 126},
  [16] = {.lex_state = 126},
  [17] = {.lex_state = 126},
  [18] = {.lex_state = 147},
  [19] = {.lex_state = 136},
  [20] = {.lex_state = 120},
  [21] = {.lex_state = 120},
  [22] = {.lex_state = 126},
  [23] = {.lex_state = 131},
  [24] = {.lex_state = 148},
  [25] = {.lex_state = 131},
  [26] = {.lex_state = 131},
  [27] = {.lex_state = 131},
  [28] = {.lex_state = 131},
  [29] = {.lex_state = 131},
  [30] = {.lex_state = 131},
  [31] = {.lex_state = 136},
  [32] = {.lex_state = 147},
  [33] = {.lex_state = 147},
  [34] = {.lex_state = 147},
  [35] = {.lex_state = 147},
  [36] = {.lex_state = 147},
  [37] = {.lex_state = 136},
  [38] = {.lex_state = 136},
  [39] = {.lex_state = 131},
  [40] = {.lex_state = 149},
  [41] = {.lex_state = 150},
  [42] = {.lex_state = 131},
  [43] = {.lex_state = 136},
  [44] = {.lex_state = 131},
  [45] = {.lex_state = 131},
  [46] = {.lex_state = 131},
  [47] = {.lex_state = 131},
  [48] = {.lex_state = 131},
  [49] = {.lex_state = 131},
  [50] = {.lex_state = 131},
  [51] = {.lex_state = 151},
  [52] = {.lex_state = 136},
  [53] = {.lex_state = 131},
  [54] = {.lex_state = 150},
  [55] = {.lex_state = 150},
  [56] = {.lex_state = 150},
  [57] = {.lex_state = 150},
  [58] = {.lex_state = 150},
  [59] = {.lex_state = 150},
  [60] = {.lex_state = 150},
  [61] = {.lex_state = 150},
  [62] = {.lex_state = 136},
  [63] = {.lex_state = 152},
  [64] = {.lex_state = 136},
  [65] = {.lex_state = 136},
  [66] = {.lex_state = 138},
  [67] = {.lex_state = 138},
  [68] = {.lex_state = 136},
  [69] = {.lex_state = 138},
  [70] = {.lex_state = 150},
  [71] = {.lex_state = 136},
  [72] = {.lex_state = 131},
  [73] = {.lex_state = 153},
  [74] = {.lex_state = 154},
  [75] = {.lex_state = 131},
  [76] = {.lex_state = 136},
  [77] = {.lex_state = 131},
  [78] = {.lex_state = 131},
  [79] = {.lex_state = 131},
  [80] = {.lex_state = 131},
  [81] = {.lex_state = 131},
  [82] = {.lex_state = 131},
  [83] = {.lex_state = 154},
  [84] = {.lex_state = 154},
  [85] = {.lex_state = 154},
  [86] = {.lex_state = 154},
  [87] = {.lex_state = 154},
  [88] = {.lex_state = 154},
  [89] = {.lex_state = 154},
  [90] = {.lex_state = 147},
  [91] = {.lex_state = 120},
  [92] = {.lex_state = 155},
  [93] = {.lex_state = 147},
  [94] = {.lex_state = 128},
  [95] = {.lex_state = 156},
  [96] = {.lex_state = 156},
  [97] = {.lex_state = 126},
  [98] = {.lex_state = 158},
  [99] = {.lex_state = 131},
  [100] = {.lex_state = 147},
  [101] = {.lex_state = 126},
  [102] = {.lex_state = 162},
  [103] = {.lex_state = 163},
  [104] = {.lex_state = 131},
  [105] = {.lex_state = 147},
  [106] = {.lex_state = 126},
  [107] = {.lex_state = 156},
  [108] = {.lex_state = 126},
  [109] = {.lex_state = 158},
  [110] = {.lex_state = 131},
  [111] = {.lex_state = 147},
  [112] = {.lex_state = 126},
  [113] = {.lex_state = 163},
  [114] = {.lex_state = 131},
  [115] = {.lex_state = 147},
  [116] = {.lex_state = 126},
  [117] = {.lex_state = 164},
  [118] = {.lex_state = 165},
  [119] = {.lex_state = 166},
  [120] = {.lex_state = 158},
  [121] = {.lex_state = 168},
  [122] = {.lex_state = 126},
  [123] = {.lex_state = 131},
  [124] = {.lex_state = 169},
  [125] = {.lex_state = 126},
  [126] = {.lex_state = 170},
  [127] = {.lex_state = 171},
  [128] = {.lex_state = 172},
  [129] = {.lex_state = 131},
  [130] = {.lex_state = 131},
  [131] = {.lex_state = 131},
  [132] = {.lex_state = 131},
  [133] = {.lex_state = 131},
  [134] = {.lex_state = 131},
  [135] = {.lex_state = 131},
  [136] = {.lex_state = 126},
  [137] = {.lex_state = 172},
  [138] = {.lex_state = 172},
  [139] = {.lex_state = 172},
  [140] = {.lex_state = 172},
  [141] = {.lex_state = 172},
  [142] = {.lex_state = 172},
  [143] = {.lex_state = 168},
  [144] = {.lex_state = 172},
  [145] = {.lex_state = 173},
  [146] = {.lex_state = 126},
  [147] = {.lex_state = 166},
  [148] = {.lex_state = 174},
  [149] = {.lex_state = 158},
  [150] = {.lex_state = 151},
  [151] = {.lex_state = 166},
  [152] = {.lex_state = 128},
  [153] = {.lex_state = 151},
  [154] = {.lex_state = 166},
  [155] = {.lex_state = 128},
  [156] = {.lex_state = 174},
  [157] = {.lex_state = 158},
  [158] = {.lex_state = 151},
  [159] = {.lex_state = 174},
  [160] = {.lex_state = 158},
  [161] = {.lex_state = 151},
  [162] = {.lex_state = 126},
  [163] = {.lex_state = 158},
  [164] = {.lex_state = 131},
  [165] = {.lex_state = 148},
  [166] = {.lex_state = 175},
  [167] = {.lex_state = 131},
  [168] = {.lex_state = 131},
  [169] = {.lex_state = 177},
  [170] = {.lex_state = 131},
  [171] = {.lex_state = 178},
  [172] = {.lex_state = 138},
  [173] = {.lex_state = 180},
  [174] = {.lex_state = 184},
  [175] = {.lex_state = 185},
  [176] = {.lex_state = 186},
  [177] = {.lex_state = 126},
  [178] = {.lex_state = 155},
  [179] = {.lex_state = 126},
  [180] = {.lex_state = 156},
  [181] = {.lex_state = 162},
  [182] = {.lex_state = 136},
  [183] = {.lex_state = 126},
  [184] = {.lex_state = 126},
  [185] = {.lex_state = 131},
  [186] = {.lex_state = 136},
  [187] = {.lex_state = 136},
  [188] = {.lex_state = 126},
  [189] = {.lex_state = 131},
  [190] = {.lex_state = 147},
  [191] = {.lex_state = 126},
  [192] = {.lex_state = 126},
  [193] = {.lex_state = 158},
  [194] = {.lex_state = 131},
  [195] = {.lex_state = 147},
  [196] = {.lex_state = 163},
  [197] = {.lex_state = 155},
  [198] = {.lex_state = 158},
  [199] = {.lex_state = 151},
  [200] = {.lex_state = 187},
  [201] = {.lex_state = 150},
  [202] = {.lex_state = 158},
  [203] = {.lex_state = 151},
  [204] = {.lex_state = 136},
  [205] = {.lex_state = 136},
  [206] = {.lex_state = 136},
  [207] = {.lex_state = 175},
  [208] = {.lex_state = 187},
  [209] = {.lex_state = 150},
  [210] = {.lex_state = 136},
  [211] = {.lex_state = 126},
  [212] = {.lex_state = 188},
};

static unsigned short ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_source_file] = STATE(12),
    [sym__statement_list] = STATE(178),
    [sym__statement] = STATE(179),
    [sym__declaration_statement] = STATE(15),
    [sym__item] = STATE(16),
    [sym_function_item] = STATE(17),
    [sym_let_declaration] = STATE(16),
    [sym__pattern] = STATE(180),
    [sym_type_expression] = STATE(181),
    [sym__expression_statement] = STATE(15),
    [sym__expression] = STATE(182),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym_arguments] = STATE(31),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [sym_parameters] = STATE(119),
    [sym_block] = STATE(183),
    [sym_empty_statement] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(20),
    [aux_sym_arguments_repeat1] = STATE(51),
    [aux_sym_string_literal_repeat1] = STATE(67),
    [aux_sym_parameters_repeat1] = STATE(153),
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
    [sym_number_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(39),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(41),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(45),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_RBRACK_SLASH] = ACTIONS(47),
    [sym_byte_escape] = ACTIONS(49),
    [sym_boolean_literal] = ACTIONS(51),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(61),
  },
  [1] = {
    [sym_source_file] = STATE(12),
    [sym__statement_list] = STATE(13),
    [sym__statement] = STATE(14),
    [sym__declaration_statement] = STATE(15),
    [sym__item] = STATE(16),
    [sym_function_item] = STATE(17),
    [sym_let_declaration] = STATE(16),
    [sym__expression_statement] = STATE(15),
    [sym__expression] = STATE(18),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [sym_empty_statement] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_fn] = ACTIONS(67),
    [anon_sym_let] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(73),
    [anon_sym_return] = ACTIONS(75),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_LF] = ACTIONS(85),
    [anon_sym_SEMI] = ACTIONS(85),
    [anon_sym_fn] = ACTIONS(87),
    [anon_sym_let] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(85),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(85),
    [anon_sym_return] = ACTIONS(87),
    [sym_number_literal] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_raw_string_literal] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [sym_boolean_literal] = ACTIONS(87),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(85),
  },
  [3] = {
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(91),
  },
  [4] = {
    [sym__pattern] = STATE(96),
    [sym_mutable_specifier] = ACTIONS(93),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(95),
  },
  [5] = {
    [sym__expression] = STATE(74),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(97),
    [anon_sym_return] = ACTIONS(99),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [6] = {
    [sym__expression] = STATE(71),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(73),
    [anon_sym_return] = ACTIONS(75),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [7] = {
    [sym__expression] = STATE(93),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_SEMI] = ACTIONS(101),
    [anon_sym_EQ] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(101),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(105),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(103),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(101),
    [anon_sym_AMP_AMP] = ACTIONS(101),
    [anon_sym_PIPE_PIPE] = ACTIONS(101),
    [anon_sym_return] = ACTIONS(75),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [8] = {
    [anon_sym_SEMI] = ACTIONS(109),
    [anon_sym_EQ] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(109),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(111),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(109),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(111),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(109),
    [anon_sym_AMP_AMP] = ACTIONS(109),
    [anon_sym_PIPE_PIPE] = ACTIONS(109),
    [anon_sym_COMMA] = ACTIONS(109),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(109),
  },
  [9] = {
    [aux_sym_string_literal_repeat1] = STATE(67),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(115),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(117),
    [sym_byte_escape] = ACTIONS(115),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [10] = {
    [anon_sym_SQUOTE] = ACTIONS(119),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(121),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_RBRACK_SLASH] = ACTIONS(123),
    [sym_byte_escape] = ACTIONS(121),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [11] = {
    [anon_sym_SEMI] = ACTIONS(125),
    [anon_sym_EQ] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(125),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(127),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(125),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(127),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(125),
    [anon_sym_AMP_AMP] = ACTIONS(125),
    [anon_sym_PIPE_PIPE] = ACTIONS(125),
    [anon_sym_COMMA] = ACTIONS(125),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(125),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(131),
    [anon_sym_SEMI] = ACTIONS(131),
    [anon_sym_fn] = ACTIONS(133),
    [anon_sym_let] = ACTIONS(133),
    [anon_sym_LPAREN] = ACTIONS(131),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(131),
    [anon_sym_return] = ACTIONS(133),
    [sym_number_literal] = ACTIONS(133),
    [anon_sym_DQUOTE] = ACTIONS(131),
    [sym_raw_string_literal] = ACTIONS(133),
    [anon_sym_SQUOTE] = ACTIONS(131),
    [sym_boolean_literal] = ACTIONS(133),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(135),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_LF] = ACTIONS(139),
    [anon_sym_SEMI] = ACTIONS(137),
    [anon_sym_fn] = ACTIONS(141),
    [anon_sym_let] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(137),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(137),
    [anon_sym_return] = ACTIONS(141),
    [sym_number_literal] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(137),
    [sym_raw_string_literal] = ACTIONS(141),
    [anon_sym_SQUOTE] = ACTIONS(137),
    [sym_boolean_literal] = ACTIONS(141),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(143),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(145),
    [anon_sym_LF] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(145),
    [anon_sym_fn] = ACTIONS(147),
    [anon_sym_let] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(145),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(145),
    [anon_sym_return] = ACTIONS(147),
    [sym_number_literal] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_raw_string_literal] = ACTIONS(147),
    [anon_sym_SQUOTE] = ACTIONS(145),
    [sym_boolean_literal] = ACTIONS(147),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(149),
    [anon_sym_RBRACE] = ACTIONS(145),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(151),
    [anon_sym_LF] = ACTIONS(151),
    [anon_sym_SEMI] = ACTIONS(151),
    [anon_sym_fn] = ACTIONS(153),
    [anon_sym_let] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(151),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(151),
    [anon_sym_return] = ACTIONS(153),
    [sym_number_literal] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(151),
    [sym_raw_string_literal] = ACTIONS(153),
    [anon_sym_SQUOTE] = ACTIONS(151),
    [sym_boolean_literal] = ACTIONS(153),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(155),
    [anon_sym_RBRACE] = ACTIONS(151),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(157),
    [anon_sym_LF] = ACTIONS(157),
    [anon_sym_SEMI] = ACTIONS(157),
    [anon_sym_fn] = ACTIONS(159),
    [anon_sym_let] = ACTIONS(159),
    [anon_sym_LPAREN] = ACTIONS(157),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(157),
    [anon_sym_return] = ACTIONS(159),
    [sym_number_literal] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [sym_raw_string_literal] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(157),
    [sym_boolean_literal] = ACTIONS(159),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(161),
    [anon_sym_RBRACE] = ACTIONS(157),
  },
  [18] = {
    [sym_arguments] = STATE(31),
    [anon_sym_SEMI] = ACTIONS(163),
    [anon_sym_EQ] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(171),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(173),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(175),
    [anon_sym_AMP_AMP] = ACTIONS(177),
    [anon_sym_PIPE_PIPE] = ACTIONS(179),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [19] = {
    [anon_sym_SEMI] = ACTIONS(181),
    [anon_sym_EQ] = ACTIONS(183),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(181),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(183),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(181),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(183),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(181),
    [anon_sym_AMP_AMP] = ACTIONS(181),
    [anon_sym_PIPE_PIPE] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(181),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(181),
  },
  [20] = {
    [sym__statement_list] = STATE(21),
    [sym__statement] = STATE(14),
    [sym__declaration_statement] = STATE(15),
    [sym__item] = STATE(16),
    [sym_function_item] = STATE(17),
    [sym_let_declaration] = STATE(16),
    [sym__expression_statement] = STATE(15),
    [sym__expression] = STATE(18),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [sym_empty_statement] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(185),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_fn] = ACTIONS(67),
    [anon_sym_let] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(73),
    [anon_sym_return] = ACTIONS(75),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(187),
    [anon_sym_SEMI] = ACTIONS(187),
    [anon_sym_fn] = ACTIONS(189),
    [anon_sym_let] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(187),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(187),
    [anon_sym_return] = ACTIONS(189),
    [sym_number_literal] = ACTIONS(189),
    [anon_sym_DQUOTE] = ACTIONS(187),
    [sym_raw_string_literal] = ACTIONS(189),
    [anon_sym_SQUOTE] = ACTIONS(187),
    [sym_boolean_literal] = ACTIONS(189),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(191),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [anon_sym_LF] = ACTIONS(193),
    [anon_sym_SEMI] = ACTIONS(193),
    [anon_sym_fn] = ACTIONS(195),
    [anon_sym_let] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(193),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(193),
    [anon_sym_return] = ACTIONS(195),
    [sym_number_literal] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(193),
    [sym_raw_string_literal] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(193),
    [sym_boolean_literal] = ACTIONS(195),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(197),
    [anon_sym_RBRACE] = ACTIONS(193),
  },
  [23] = {
    [sym__expression] = STATE(90),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(73),
    [anon_sym_return] = ACTIONS(75),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [24] = {
    [sym__expression] = STATE(41),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(199),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(201),
    [anon_sym_return] = ACTIONS(203),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [25] = {
    [sym__expression] = STATE(37),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(73),
    [anon_sym_return] = ACTIONS(75),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [26] = {
    [sym__expression] = STATE(36),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(73),
    [anon_sym_return] = ACTIONS(75),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [27] = {
    [sym__expression] = STATE(35),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(73),
    [anon_sym_return] = ACTIONS(75),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [28] = {
    [sym__expression] = STATE(34),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(73),
    [anon_sym_return] = ACTIONS(75),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [29] = {
    [sym__expression] = STATE(33),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(73),
    [anon_sym_return] = ACTIONS(75),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [30] = {
    [sym__expression] = STATE(32),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(73),
    [anon_sym_return] = ACTIONS(75),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [31] = {
    [anon_sym_SEMI] = ACTIONS(205),
    [anon_sym_EQ] = ACTIONS(207),
    [anon_sym_LPAREN] = ACTIONS(205),
    [anon_sym_RPAREN] = ACTIONS(205),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(207),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(205),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(207),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(205),
    [anon_sym_AMP_AMP] = ACTIONS(205),
    [anon_sym_PIPE_PIPE] = ACTIONS(205),
    [anon_sym_COMMA] = ACTIONS(205),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(205),
  },
  [32] = {
    [sym_arguments] = STATE(31),
    [anon_sym_SEMI] = ACTIONS(209),
    [anon_sym_EQ] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(209),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(171),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(173),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(175),
    [anon_sym_AMP_AMP] = ACTIONS(177),
    [anon_sym_PIPE_PIPE] = ACTIONS(209),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [33] = {
    [sym_arguments] = STATE(31),
    [anon_sym_SEMI] = ACTIONS(209),
    [anon_sym_EQ] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(209),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(171),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(173),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(175),
    [anon_sym_AMP_AMP] = ACTIONS(209),
    [anon_sym_PIPE_PIPE] = ACTIONS(209),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [34] = {
    [sym_arguments] = STATE(31),
    [anon_sym_SEMI] = ACTIONS(209),
    [anon_sym_EQ] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(209),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(171),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(209),
    [anon_sym_AMP_AMP] = ACTIONS(209),
    [anon_sym_PIPE_PIPE] = ACTIONS(209),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [35] = {
    [sym_arguments] = STATE(31),
    [anon_sym_SEMI] = ACTIONS(209),
    [anon_sym_EQ] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(209),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(171),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(175),
    [anon_sym_AMP_AMP] = ACTIONS(209),
    [anon_sym_PIPE_PIPE] = ACTIONS(209),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [36] = {
    [sym_arguments] = STATE(31),
    [anon_sym_SEMI] = ACTIONS(209),
    [anon_sym_EQ] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(209),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(209),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(209),
    [anon_sym_AMP_AMP] = ACTIONS(209),
    [anon_sym_PIPE_PIPE] = ACTIONS(209),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [37] = {
    [sym_arguments] = STATE(31),
    [anon_sym_SEMI] = ACTIONS(209),
    [anon_sym_EQ] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_RPAREN] = ACTIONS(209),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(209),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(209),
    [anon_sym_AMP_AMP] = ACTIONS(209),
    [anon_sym_PIPE_PIPE] = ACTIONS(209),
    [anon_sym_COMMA] = ACTIONS(209),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(209),
  },
  [38] = {
    [anon_sym_SEMI] = ACTIONS(213),
    [anon_sym_EQ] = ACTIONS(215),
    [anon_sym_LPAREN] = ACTIONS(213),
    [anon_sym_RPAREN] = ACTIONS(213),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(215),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(213),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(215),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(213),
    [anon_sym_AMP_AMP] = ACTIONS(213),
    [anon_sym_PIPE_PIPE] = ACTIONS(213),
    [anon_sym_COMMA] = ACTIONS(213),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(213),
  },
  [39] = {
    [sym__expression] = STATE(71),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(201),
    [anon_sym_return] = ACTIONS(203),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [40] = {
    [sym__expression] = STATE(70),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_EQ] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_RPAREN] = ACTIONS(101),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(217),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(103),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(101),
    [anon_sym_AMP_AMP] = ACTIONS(101),
    [anon_sym_PIPE_PIPE] = ACTIONS(101),
    [anon_sym_return] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(101),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [41] = {
    [sym_arguments] = STATE(31),
    [aux_sym_arguments_repeat1] = STATE(51),
    [anon_sym_EQ] = ACTIONS(219),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_RPAREN] = ACTIONS(221),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(225),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(227),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(229),
    [anon_sym_AMP_AMP] = ACTIONS(231),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_COMMA] = ACTIONS(235),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [42] = {
    [sym__expression] = STATE(61),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(201),
    [anon_sym_return] = ACTIONS(203),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [43] = {
    [anon_sym_SEMI] = ACTIONS(237),
    [anon_sym_EQ] = ACTIONS(239),
    [anon_sym_LPAREN] = ACTIONS(237),
    [anon_sym_RPAREN] = ACTIONS(237),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(239),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(237),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(239),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(237),
    [anon_sym_AMP_AMP] = ACTIONS(237),
    [anon_sym_PIPE_PIPE] = ACTIONS(237),
    [anon_sym_COMMA] = ACTIONS(237),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(237),
  },
  [44] = {
    [sym__expression] = STATE(37),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(201),
    [anon_sym_return] = ACTIONS(203),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [45] = {
    [sym__expression] = STATE(60),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(201),
    [anon_sym_return] = ACTIONS(203),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [46] = {
    [sym__expression] = STATE(59),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(201),
    [anon_sym_return] = ACTIONS(203),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [47] = {
    [sym__expression] = STATE(58),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(201),
    [anon_sym_return] = ACTIONS(203),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [48] = {
    [sym__expression] = STATE(57),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(201),
    [anon_sym_return] = ACTIONS(203),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [49] = {
    [sym__expression] = STATE(56),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(201),
    [anon_sym_return] = ACTIONS(203),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [50] = {
    [sym__expression] = STATE(55),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(201),
    [anon_sym_return] = ACTIONS(203),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [51] = {
    [anon_sym_RPAREN] = ACTIONS(241),
    [anon_sym_COMMA] = ACTIONS(243),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [52] = {
    [anon_sym_SEMI] = ACTIONS(245),
    [anon_sym_EQ] = ACTIONS(247),
    [anon_sym_LPAREN] = ACTIONS(245),
    [anon_sym_RPAREN] = ACTIONS(245),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(247),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(245),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(247),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(245),
    [anon_sym_AMP_AMP] = ACTIONS(245),
    [anon_sym_PIPE_PIPE] = ACTIONS(245),
    [anon_sym_COMMA] = ACTIONS(245),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(245),
  },
  [53] = {
    [sym__expression] = STATE(54),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(201),
    [anon_sym_return] = ACTIONS(203),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [54] = {
    [sym_arguments] = STATE(31),
    [anon_sym_EQ] = ACTIONS(219),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_RPAREN] = ACTIONS(249),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(225),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(227),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(229),
    [anon_sym_AMP_AMP] = ACTIONS(231),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_COMMA] = ACTIONS(249),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [55] = {
    [sym_arguments] = STATE(31),
    [anon_sym_EQ] = ACTIONS(219),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_RPAREN] = ACTIONS(251),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(225),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(227),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(229),
    [anon_sym_AMP_AMP] = ACTIONS(231),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_COMMA] = ACTIONS(251),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [56] = {
    [sym_arguments] = STATE(31),
    [anon_sym_EQ] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_RPAREN] = ACTIONS(209),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(225),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(227),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(229),
    [anon_sym_AMP_AMP] = ACTIONS(231),
    [anon_sym_PIPE_PIPE] = ACTIONS(209),
    [anon_sym_COMMA] = ACTIONS(209),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [57] = {
    [sym_arguments] = STATE(31),
    [anon_sym_EQ] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_RPAREN] = ACTIONS(209),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(225),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(227),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(229),
    [anon_sym_AMP_AMP] = ACTIONS(209),
    [anon_sym_PIPE_PIPE] = ACTIONS(209),
    [anon_sym_COMMA] = ACTIONS(209),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [58] = {
    [sym_arguments] = STATE(31),
    [anon_sym_EQ] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_RPAREN] = ACTIONS(209),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(225),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(209),
    [anon_sym_AMP_AMP] = ACTIONS(209),
    [anon_sym_PIPE_PIPE] = ACTIONS(209),
    [anon_sym_COMMA] = ACTIONS(209),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [59] = {
    [sym_arguments] = STATE(31),
    [anon_sym_EQ] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_RPAREN] = ACTIONS(209),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(225),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(229),
    [anon_sym_AMP_AMP] = ACTIONS(209),
    [anon_sym_PIPE_PIPE] = ACTIONS(209),
    [anon_sym_COMMA] = ACTIONS(209),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [60] = {
    [sym_arguments] = STATE(31),
    [anon_sym_EQ] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_RPAREN] = ACTIONS(209),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(209),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(209),
    [anon_sym_AMP_AMP] = ACTIONS(209),
    [anon_sym_PIPE_PIPE] = ACTIONS(209),
    [anon_sym_COMMA] = ACTIONS(209),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [61] = {
    [sym_arguments] = STATE(31),
    [anon_sym_EQ] = ACTIONS(253),
    [anon_sym_LPAREN] = ACTIONS(255),
    [anon_sym_RPAREN] = ACTIONS(255),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(225),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(227),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(229),
    [anon_sym_AMP_AMP] = ACTIONS(231),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_COMMA] = ACTIONS(255),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [62] = {
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
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(257),
  },
  [63] = {
    [anon_sym_SQUOTE] = ACTIONS(261),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [64] = {
    [anon_sym_SEMI] = ACTIONS(263),
    [anon_sym_EQ] = ACTIONS(265),
    [anon_sym_LPAREN] = ACTIONS(263),
    [anon_sym_RPAREN] = ACTIONS(263),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(265),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(263),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(265),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(263),
    [anon_sym_AMP_AMP] = ACTIONS(263),
    [anon_sym_PIPE_PIPE] = ACTIONS(263),
    [anon_sym_COMMA] = ACTIONS(263),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(263),
  },
  [65] = {
    [anon_sym_SEMI] = ACTIONS(267),
    [anon_sym_EQ] = ACTIONS(269),
    [anon_sym_LPAREN] = ACTIONS(267),
    [anon_sym_RPAREN] = ACTIONS(267),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(267),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(269),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(267),
    [anon_sym_AMP_AMP] = ACTIONS(267),
    [anon_sym_PIPE_PIPE] = ACTIONS(267),
    [anon_sym_COMMA] = ACTIONS(267),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(267),
  },
  [66] = {
    [anon_sym_DQUOTE] = ACTIONS(271),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(271),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(273),
    [sym_byte_escape] = ACTIONS(271),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [67] = {
    [anon_sym_DQUOTE] = ACTIONS(275),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(277),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(279),
    [sym_byte_escape] = ACTIONS(277),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [68] = {
    [anon_sym_SEMI] = ACTIONS(281),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(281),
    [anon_sym_RPAREN] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(283),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(281),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(283),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(281),
    [anon_sym_AMP_AMP] = ACTIONS(281),
    [anon_sym_PIPE_PIPE] = ACTIONS(281),
    [anon_sym_COMMA] = ACTIONS(281),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(281),
  },
  [69] = {
    [anon_sym_DQUOTE] = ACTIONS(285),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(285),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(287),
    [sym_byte_escape] = ACTIONS(285),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [70] = {
    [sym_arguments] = STATE(31),
    [anon_sym_EQ] = ACTIONS(289),
    [anon_sym_LPAREN] = ACTIONS(291),
    [anon_sym_RPAREN] = ACTIONS(291),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(225),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(227),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(229),
    [anon_sym_AMP_AMP] = ACTIONS(231),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_COMMA] = ACTIONS(291),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [71] = {
    [sym_arguments] = STATE(31),
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
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(293),
  },
  [72] = {
    [sym__expression] = STATE(71),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(97),
    [anon_sym_return] = ACTIONS(99),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [73] = {
    [sym__expression] = STATE(89),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_EQ] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_RPAREN] = ACTIONS(101),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(297),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(103),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(101),
    [anon_sym_AMP_AMP] = ACTIONS(101),
    [anon_sym_PIPE_PIPE] = ACTIONS(101),
    [anon_sym_return] = ACTIONS(99),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [74] = {
    [sym_arguments] = STATE(31),
    [anon_sym_EQ] = ACTIONS(299),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_RPAREN] = ACTIONS(301),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(303),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(305),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(307),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(309),
    [anon_sym_AMP_AMP] = ACTIONS(311),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [75] = {
    [sym__expression] = STATE(88),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(97),
    [anon_sym_return] = ACTIONS(99),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [76] = {
    [anon_sym_SEMI] = ACTIONS(315),
    [anon_sym_EQ] = ACTIONS(317),
    [anon_sym_LPAREN] = ACTIONS(315),
    [anon_sym_RPAREN] = ACTIONS(315),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(317),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(315),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(317),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(315),
    [anon_sym_AMP_AMP] = ACTIONS(315),
    [anon_sym_PIPE_PIPE] = ACTIONS(315),
    [anon_sym_COMMA] = ACTIONS(315),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(315),
  },
  [77] = {
    [sym__expression] = STATE(37),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(97),
    [anon_sym_return] = ACTIONS(99),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [78] = {
    [sym__expression] = STATE(87),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(97),
    [anon_sym_return] = ACTIONS(99),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [79] = {
    [sym__expression] = STATE(86),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(97),
    [anon_sym_return] = ACTIONS(99),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [80] = {
    [sym__expression] = STATE(85),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(97),
    [anon_sym_return] = ACTIONS(99),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [81] = {
    [sym__expression] = STATE(84),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(97),
    [anon_sym_return] = ACTIONS(99),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [82] = {
    [sym__expression] = STATE(83),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(97),
    [anon_sym_return] = ACTIONS(99),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [83] = {
    [sym_arguments] = STATE(31),
    [anon_sym_EQ] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_RPAREN] = ACTIONS(209),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(303),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(305),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(307),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(309),
    [anon_sym_AMP_AMP] = ACTIONS(311),
    [anon_sym_PIPE_PIPE] = ACTIONS(209),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [84] = {
    [sym_arguments] = STATE(31),
    [anon_sym_EQ] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_RPAREN] = ACTIONS(209),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(303),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(305),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(307),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(309),
    [anon_sym_AMP_AMP] = ACTIONS(209),
    [anon_sym_PIPE_PIPE] = ACTIONS(209),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [85] = {
    [sym_arguments] = STATE(31),
    [anon_sym_EQ] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_RPAREN] = ACTIONS(209),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(303),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(305),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(209),
    [anon_sym_AMP_AMP] = ACTIONS(209),
    [anon_sym_PIPE_PIPE] = ACTIONS(209),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [86] = {
    [sym_arguments] = STATE(31),
    [anon_sym_EQ] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_RPAREN] = ACTIONS(209),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(303),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(305),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(309),
    [anon_sym_AMP_AMP] = ACTIONS(209),
    [anon_sym_PIPE_PIPE] = ACTIONS(209),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [87] = {
    [sym_arguments] = STATE(31),
    [anon_sym_EQ] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_RPAREN] = ACTIONS(209),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(303),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(209),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(209),
    [anon_sym_AMP_AMP] = ACTIONS(209),
    [anon_sym_PIPE_PIPE] = ACTIONS(209),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [88] = {
    [sym_arguments] = STATE(31),
    [anon_sym_EQ] = ACTIONS(253),
    [anon_sym_LPAREN] = ACTIONS(255),
    [anon_sym_RPAREN] = ACTIONS(255),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(303),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(305),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(307),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(309),
    [anon_sym_AMP_AMP] = ACTIONS(311),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [89] = {
    [sym_arguments] = STATE(31),
    [anon_sym_EQ] = ACTIONS(289),
    [anon_sym_LPAREN] = ACTIONS(291),
    [anon_sym_RPAREN] = ACTIONS(291),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(303),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(305),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(307),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(309),
    [anon_sym_AMP_AMP] = ACTIONS(311),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [90] = {
    [sym_arguments] = STATE(31),
    [anon_sym_SEMI] = ACTIONS(255),
    [anon_sym_EQ] = ACTIONS(253),
    [anon_sym_LPAREN] = ACTIONS(255),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(171),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(173),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(175),
    [anon_sym_AMP_AMP] = ACTIONS(177),
    [anon_sym_PIPE_PIPE] = ACTIONS(179),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [91] = {
    [sym__statement_list] = STATE(92),
    [sym__statement] = STATE(14),
    [sym__declaration_statement] = STATE(15),
    [sym__item] = STATE(16),
    [sym_function_item] = STATE(17),
    [sym_let_declaration] = STATE(16),
    [sym__expression_statement] = STATE(15),
    [sym__expression] = STATE(18),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [sym_empty_statement] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(319),
    [anon_sym_SEMI] = ACTIONS(319),
    [anon_sym_fn] = ACTIONS(321),
    [anon_sym_let] = ACTIONS(321),
    [anon_sym_LPAREN] = ACTIONS(319),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(319),
    [anon_sym_return] = ACTIONS(321),
    [sym_number_literal] = ACTIONS(321),
    [anon_sym_DQUOTE] = ACTIONS(319),
    [sym_raw_string_literal] = ACTIONS(321),
    [anon_sym_SQUOTE] = ACTIONS(319),
    [sym_boolean_literal] = ACTIONS(321),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(323),
  },
  [92] = {
    [ts_builtin_sym_end] = ACTIONS(325),
    [anon_sym_SEMI] = ACTIONS(325),
    [anon_sym_fn] = ACTIONS(327),
    [anon_sym_let] = ACTIONS(327),
    [anon_sym_LPAREN] = ACTIONS(325),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(325),
    [anon_sym_return] = ACTIONS(327),
    [sym_number_literal] = ACTIONS(327),
    [anon_sym_DQUOTE] = ACTIONS(325),
    [sym_raw_string_literal] = ACTIONS(327),
    [anon_sym_SQUOTE] = ACTIONS(325),
    [sym_boolean_literal] = ACTIONS(327),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(329),
    [anon_sym_RBRACE] = ACTIONS(325),
  },
  [93] = {
    [sym_arguments] = STATE(31),
    [anon_sym_SEMI] = ACTIONS(291),
    [anon_sym_EQ] = ACTIONS(289),
    [anon_sym_LPAREN] = ACTIONS(291),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(171),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(173),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(175),
    [anon_sym_AMP_AMP] = ACTIONS(177),
    [anon_sym_PIPE_PIPE] = ACTIONS(179),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [94] = {
    [sym__pattern] = STATE(107),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(331),
  },
  [95] = {
    [anon_sym_SEMI] = ACTIONS(333),
    [anon_sym_COLON] = ACTIONS(333),
    [anon_sym_EQ] = ACTIONS(333),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [96] = {
    [anon_sym_SEMI] = ACTIONS(335),
    [anon_sym_COLON] = ACTIONS(337),
    [anon_sym_EQ] = ACTIONS(339),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [97] = {
    [ts_builtin_sym_end] = ACTIONS(341),
    [anon_sym_LF] = ACTIONS(341),
    [anon_sym_SEMI] = ACTIONS(341),
    [anon_sym_fn] = ACTIONS(343),
    [anon_sym_let] = ACTIONS(343),
    [anon_sym_LPAREN] = ACTIONS(341),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(341),
    [anon_sym_return] = ACTIONS(343),
    [sym_number_literal] = ACTIONS(343),
    [anon_sym_DQUOTE] = ACTIONS(341),
    [sym_raw_string_literal] = ACTIONS(343),
    [anon_sym_SQUOTE] = ACTIONS(341),
    [sym_boolean_literal] = ACTIONS(343),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(345),
    [anon_sym_RBRACE] = ACTIONS(341),
  },
  [98] = {
    [sym_type_expression] = STATE(103),
    [anon_sym_u8] = ACTIONS(347),
    [anon_sym_i8] = ACTIONS(347),
    [anon_sym_u16] = ACTIONS(347),
    [anon_sym_i16] = ACTIONS(347),
    [anon_sym_u32] = ACTIONS(347),
    [anon_sym_i32] = ACTIONS(347),
    [anon_sym_u64] = ACTIONS(347),
    [anon_sym_i64] = ACTIONS(347),
    [anon_sym_isize] = ACTIONS(347),
    [anon_sym_usize] = ACTIONS(347),
    [anon_sym_f32] = ACTIONS(347),
    [anon_sym_f64] = ACTIONS(347),
    [sym_boolean_literal] = ACTIONS(347),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(349),
  },
  [99] = {
    [sym__expression] = STATE(100),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(73),
    [anon_sym_return] = ACTIONS(75),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [100] = {
    [sym_arguments] = STATE(31),
    [anon_sym_SEMI] = ACTIONS(351),
    [anon_sym_EQ] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(171),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(173),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(175),
    [anon_sym_AMP_AMP] = ACTIONS(177),
    [anon_sym_PIPE_PIPE] = ACTIONS(179),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(353),
    [anon_sym_LF] = ACTIONS(353),
    [anon_sym_SEMI] = ACTIONS(353),
    [anon_sym_fn] = ACTIONS(355),
    [anon_sym_let] = ACTIONS(355),
    [anon_sym_LPAREN] = ACTIONS(353),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(353),
    [anon_sym_return] = ACTIONS(355),
    [sym_number_literal] = ACTIONS(355),
    [anon_sym_DQUOTE] = ACTIONS(353),
    [sym_raw_string_literal] = ACTIONS(355),
    [anon_sym_SQUOTE] = ACTIONS(353),
    [sym_boolean_literal] = ACTIONS(355),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(357),
    [anon_sym_RBRACE] = ACTIONS(353),
  },
  [102] = {
    [anon_sym_SEMI] = ACTIONS(359),
    [anon_sym_EQ] = ACTIONS(359),
    [anon_sym_RPAREN] = ACTIONS(359),
    [anon_sym_COMMA] = ACTIONS(359),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(359),
  },
  [103] = {
    [anon_sym_SEMI] = ACTIONS(351),
    [anon_sym_EQ] = ACTIONS(361),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [104] = {
    [sym__expression] = STATE(105),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(73),
    [anon_sym_return] = ACTIONS(75),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [105] = {
    [sym_arguments] = STATE(31),
    [anon_sym_SEMI] = ACTIONS(363),
    [anon_sym_EQ] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(171),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(173),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(175),
    [anon_sym_AMP_AMP] = ACTIONS(177),
    [anon_sym_PIPE_PIPE] = ACTIONS(179),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [106] = {
    [ts_builtin_sym_end] = ACTIONS(365),
    [anon_sym_LF] = ACTIONS(365),
    [anon_sym_SEMI] = ACTIONS(365),
    [anon_sym_fn] = ACTIONS(367),
    [anon_sym_let] = ACTIONS(367),
    [anon_sym_LPAREN] = ACTIONS(365),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(365),
    [anon_sym_return] = ACTIONS(367),
    [sym_number_literal] = ACTIONS(367),
    [anon_sym_DQUOTE] = ACTIONS(365),
    [sym_raw_string_literal] = ACTIONS(367),
    [anon_sym_SQUOTE] = ACTIONS(365),
    [sym_boolean_literal] = ACTIONS(367),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(369),
    [anon_sym_RBRACE] = ACTIONS(365),
  },
  [107] = {
    [anon_sym_SEMI] = ACTIONS(371),
    [anon_sym_COLON] = ACTIONS(373),
    [anon_sym_EQ] = ACTIONS(375),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [108] = {
    [ts_builtin_sym_end] = ACTIONS(377),
    [anon_sym_LF] = ACTIONS(377),
    [anon_sym_SEMI] = ACTIONS(377),
    [anon_sym_fn] = ACTIONS(379),
    [anon_sym_let] = ACTIONS(379),
    [anon_sym_LPAREN] = ACTIONS(377),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(377),
    [anon_sym_return] = ACTIONS(379),
    [sym_number_literal] = ACTIONS(379),
    [anon_sym_DQUOTE] = ACTIONS(377),
    [sym_raw_string_literal] = ACTIONS(379),
    [anon_sym_SQUOTE] = ACTIONS(377),
    [sym_boolean_literal] = ACTIONS(379),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(381),
    [anon_sym_RBRACE] = ACTIONS(377),
  },
  [109] = {
    [sym_type_expression] = STATE(113),
    [anon_sym_u8] = ACTIONS(347),
    [anon_sym_i8] = ACTIONS(347),
    [anon_sym_u16] = ACTIONS(347),
    [anon_sym_i16] = ACTIONS(347),
    [anon_sym_u32] = ACTIONS(347),
    [anon_sym_i32] = ACTIONS(347),
    [anon_sym_u64] = ACTIONS(347),
    [anon_sym_i64] = ACTIONS(347),
    [anon_sym_isize] = ACTIONS(347),
    [anon_sym_usize] = ACTIONS(347),
    [anon_sym_f32] = ACTIONS(347),
    [anon_sym_f64] = ACTIONS(347),
    [sym_boolean_literal] = ACTIONS(347),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(349),
  },
  [110] = {
    [sym__expression] = STATE(111),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(73),
    [anon_sym_return] = ACTIONS(75),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [111] = {
    [sym_arguments] = STATE(31),
    [anon_sym_SEMI] = ACTIONS(383),
    [anon_sym_EQ] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(171),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(173),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(175),
    [anon_sym_AMP_AMP] = ACTIONS(177),
    [anon_sym_PIPE_PIPE] = ACTIONS(179),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [112] = {
    [ts_builtin_sym_end] = ACTIONS(385),
    [anon_sym_LF] = ACTIONS(385),
    [anon_sym_SEMI] = ACTIONS(385),
    [anon_sym_fn] = ACTIONS(387),
    [anon_sym_let] = ACTIONS(387),
    [anon_sym_LPAREN] = ACTIONS(385),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(385),
    [anon_sym_return] = ACTIONS(387),
    [sym_number_literal] = ACTIONS(387),
    [anon_sym_DQUOTE] = ACTIONS(385),
    [sym_raw_string_literal] = ACTIONS(387),
    [anon_sym_SQUOTE] = ACTIONS(385),
    [sym_boolean_literal] = ACTIONS(387),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(389),
    [anon_sym_RBRACE] = ACTIONS(385),
  },
  [113] = {
    [anon_sym_SEMI] = ACTIONS(383),
    [anon_sym_EQ] = ACTIONS(391),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [114] = {
    [sym__expression] = STATE(115),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(73),
    [anon_sym_return] = ACTIONS(75),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [115] = {
    [sym_arguments] = STATE(31),
    [anon_sym_SEMI] = ACTIONS(393),
    [anon_sym_EQ] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(171),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(173),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(175),
    [anon_sym_AMP_AMP] = ACTIONS(177),
    [anon_sym_PIPE_PIPE] = ACTIONS(179),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [116] = {
    [ts_builtin_sym_end] = ACTIONS(395),
    [anon_sym_LF] = ACTIONS(395),
    [anon_sym_SEMI] = ACTIONS(395),
    [anon_sym_fn] = ACTIONS(397),
    [anon_sym_let] = ACTIONS(397),
    [anon_sym_LPAREN] = ACTIONS(395),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(395),
    [anon_sym_return] = ACTIONS(397),
    [sym_number_literal] = ACTIONS(397),
    [anon_sym_DQUOTE] = ACTIONS(395),
    [sym_raw_string_literal] = ACTIONS(397),
    [anon_sym_SQUOTE] = ACTIONS(395),
    [sym_boolean_literal] = ACTIONS(397),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(399),
    [anon_sym_RBRACE] = ACTIONS(395),
  },
  [117] = {
    [sym_parameters] = STATE(119),
    [anon_sym_LPAREN] = ACTIONS(401),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [118] = {
    [anon_sym_RPAREN] = ACTIONS(403),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(405),
  },
  [119] = {
    [sym_block] = STATE(122),
    [anon_sym_DASH_GT] = ACTIONS(407),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(409),
  },
  [120] = {
    [sym_type_expression] = STATE(145),
    [anon_sym_u8] = ACTIONS(347),
    [anon_sym_i8] = ACTIONS(347),
    [anon_sym_u16] = ACTIONS(347),
    [anon_sym_i16] = ACTIONS(347),
    [anon_sym_u32] = ACTIONS(347),
    [anon_sym_i32] = ACTIONS(347),
    [anon_sym_u64] = ACTIONS(347),
    [anon_sym_i64] = ACTIONS(347),
    [anon_sym_isize] = ACTIONS(347),
    [anon_sym_usize] = ACTIONS(347),
    [anon_sym_f32] = ACTIONS(347),
    [anon_sym_f64] = ACTIONS(347),
    [sym_boolean_literal] = ACTIONS(347),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(349),
  },
  [121] = {
    [sym__statement_list] = STATE(126),
    [sym__statement] = STATE(127),
    [sym__declaration_statement] = STATE(15),
    [sym__item] = STATE(16),
    [sym_function_item] = STATE(17),
    [sym_let_declaration] = STATE(16),
    [sym__expression_statement] = STATE(15),
    [sym__expression] = STATE(128),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [sym_empty_statement] = STATE(15),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_fn] = ACTIONS(67),
    [anon_sym_let] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(411),
    [anon_sym_return] = ACTIONS(413),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(415),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(417),
    [anon_sym_LF] = ACTIONS(417),
    [anon_sym_SEMI] = ACTIONS(417),
    [anon_sym_fn] = ACTIONS(419),
    [anon_sym_let] = ACTIONS(419),
    [anon_sym_LPAREN] = ACTIONS(417),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(417),
    [anon_sym_return] = ACTIONS(419),
    [sym_number_literal] = ACTIONS(419),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [sym_raw_string_literal] = ACTIONS(419),
    [anon_sym_SQUOTE] = ACTIONS(417),
    [sym_boolean_literal] = ACTIONS(419),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(421),
    [anon_sym_RBRACE] = ACTIONS(417),
  },
  [123] = {
    [sym__expression] = STATE(71),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(411),
    [anon_sym_return] = ACTIONS(413),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [124] = {
    [sym__expression] = STATE(144),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_SEMI] = ACTIONS(101),
    [anon_sym_EQ] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(101),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(423),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(103),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(101),
    [anon_sym_AMP_AMP] = ACTIONS(101),
    [anon_sym_PIPE_PIPE] = ACTIONS(101),
    [anon_sym_return] = ACTIONS(413),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(101),
  },
  [125] = {
    [ts_builtin_sym_end] = ACTIONS(425),
    [anon_sym_LF] = ACTIONS(425),
    [anon_sym_SEMI] = ACTIONS(425),
    [anon_sym_fn] = ACTIONS(427),
    [anon_sym_let] = ACTIONS(427),
    [anon_sym_LPAREN] = ACTIONS(425),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(425),
    [anon_sym_return] = ACTIONS(427),
    [sym_number_literal] = ACTIONS(427),
    [anon_sym_DQUOTE] = ACTIONS(425),
    [sym_raw_string_literal] = ACTIONS(427),
    [anon_sym_SQUOTE] = ACTIONS(425),
    [sym_boolean_literal] = ACTIONS(427),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(429),
    [anon_sym_RBRACE] = ACTIONS(425),
  },
  [126] = {
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(431),
  },
  [127] = {
    [anon_sym_LF] = ACTIONS(433),
    [anon_sym_SEMI] = ACTIONS(433),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(137),
  },
  [128] = {
    [sym_arguments] = STATE(31),
    [anon_sym_SEMI] = ACTIONS(163),
    [anon_sym_EQ] = ACTIONS(435),
    [anon_sym_LPAREN] = ACTIONS(167),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(437),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(439),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(443),
    [anon_sym_AMP_AMP] = ACTIONS(445),
    [anon_sym_PIPE_PIPE] = ACTIONS(447),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(431),
  },
  [129] = {
    [sym__expression] = STATE(142),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(411),
    [anon_sym_return] = ACTIONS(413),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [130] = {
    [sym__expression] = STATE(37),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(411),
    [anon_sym_return] = ACTIONS(413),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [131] = {
    [sym__expression] = STATE(141),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(411),
    [anon_sym_return] = ACTIONS(413),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [132] = {
    [sym__expression] = STATE(140),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(411),
    [anon_sym_return] = ACTIONS(413),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [133] = {
    [sym__expression] = STATE(139),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(411),
    [anon_sym_return] = ACTIONS(413),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [134] = {
    [sym__expression] = STATE(138),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(411),
    [anon_sym_return] = ACTIONS(413),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [135] = {
    [sym__expression] = STATE(137),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(411),
    [anon_sym_return] = ACTIONS(413),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [136] = {
    [ts_builtin_sym_end] = ACTIONS(449),
    [anon_sym_LF] = ACTIONS(449),
    [anon_sym_SEMI] = ACTIONS(449),
    [anon_sym_fn] = ACTIONS(451),
    [anon_sym_let] = ACTIONS(451),
    [anon_sym_LPAREN] = ACTIONS(449),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(449),
    [anon_sym_return] = ACTIONS(451),
    [sym_number_literal] = ACTIONS(451),
    [anon_sym_DQUOTE] = ACTIONS(449),
    [sym_raw_string_literal] = ACTIONS(451),
    [anon_sym_SQUOTE] = ACTIONS(449),
    [sym_boolean_literal] = ACTIONS(451),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(453),
    [anon_sym_RBRACE] = ACTIONS(449),
  },
  [137] = {
    [sym_arguments] = STATE(31),
    [anon_sym_SEMI] = ACTIONS(209),
    [anon_sym_EQ] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(209),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(437),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(439),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(443),
    [anon_sym_AMP_AMP] = ACTIONS(445),
    [anon_sym_PIPE_PIPE] = ACTIONS(209),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(209),
  },
  [138] = {
    [sym_arguments] = STATE(31),
    [anon_sym_SEMI] = ACTIONS(209),
    [anon_sym_EQ] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(209),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(437),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(439),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(443),
    [anon_sym_AMP_AMP] = ACTIONS(209),
    [anon_sym_PIPE_PIPE] = ACTIONS(209),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(209),
  },
  [139] = {
    [sym_arguments] = STATE(31),
    [anon_sym_SEMI] = ACTIONS(209),
    [anon_sym_EQ] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(209),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(437),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(439),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(209),
    [anon_sym_AMP_AMP] = ACTIONS(209),
    [anon_sym_PIPE_PIPE] = ACTIONS(209),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(209),
  },
  [140] = {
    [sym_arguments] = STATE(31),
    [anon_sym_SEMI] = ACTIONS(209),
    [anon_sym_EQ] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(209),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(437),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(439),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(443),
    [anon_sym_AMP_AMP] = ACTIONS(209),
    [anon_sym_PIPE_PIPE] = ACTIONS(209),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(209),
  },
  [141] = {
    [sym_arguments] = STATE(31),
    [anon_sym_SEMI] = ACTIONS(209),
    [anon_sym_EQ] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(209),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(437),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(209),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(211),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(209),
    [anon_sym_AMP_AMP] = ACTIONS(209),
    [anon_sym_PIPE_PIPE] = ACTIONS(209),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(209),
  },
  [142] = {
    [sym_arguments] = STATE(31),
    [anon_sym_SEMI] = ACTIONS(255),
    [anon_sym_EQ] = ACTIONS(253),
    [anon_sym_LPAREN] = ACTIONS(255),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(437),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(439),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(443),
    [anon_sym_AMP_AMP] = ACTIONS(445),
    [anon_sym_PIPE_PIPE] = ACTIONS(447),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(255),
  },
  [143] = {
    [sym__statement_list] = STATE(92),
    [sym__statement] = STATE(127),
    [sym__declaration_statement] = STATE(15),
    [sym__item] = STATE(16),
    [sym_function_item] = STATE(17),
    [sym_let_declaration] = STATE(16),
    [sym__expression_statement] = STATE(15),
    [sym__expression] = STATE(18),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [sym_empty_statement] = STATE(15),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_fn] = ACTIONS(67),
    [anon_sym_let] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(73),
    [anon_sym_return] = ACTIONS(75),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(319),
  },
  [144] = {
    [sym_arguments] = STATE(31),
    [anon_sym_SEMI] = ACTIONS(291),
    [anon_sym_EQ] = ACTIONS(289),
    [anon_sym_LPAREN] = ACTIONS(291),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(437),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(439),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(441),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(443),
    [anon_sym_AMP_AMP] = ACTIONS(445),
    [anon_sym_PIPE_PIPE] = ACTIONS(447),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(291),
  },
  [145] = {
    [sym_block] = STATE(146),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(409),
  },
  [146] = {
    [ts_builtin_sym_end] = ACTIONS(455),
    [anon_sym_LF] = ACTIONS(455),
    [anon_sym_SEMI] = ACTIONS(455),
    [anon_sym_fn] = ACTIONS(457),
    [anon_sym_let] = ACTIONS(457),
    [anon_sym_LPAREN] = ACTIONS(455),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(455),
    [anon_sym_return] = ACTIONS(457),
    [sym_number_literal] = ACTIONS(457),
    [anon_sym_DQUOTE] = ACTIONS(455),
    [sym_raw_string_literal] = ACTIONS(457),
    [anon_sym_SQUOTE] = ACTIONS(455),
    [sym_boolean_literal] = ACTIONS(457),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(459),
    [anon_sym_RBRACE] = ACTIONS(455),
  },
  [147] = {
    [anon_sym_DASH_GT] = ACTIONS(461),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(461),
  },
  [148] = {
    [anon_sym_COLON] = ACTIONS(463),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [149] = {
    [sym_type_expression] = STATE(150),
    [anon_sym_u8] = ACTIONS(347),
    [anon_sym_i8] = ACTIONS(347),
    [anon_sym_u16] = ACTIONS(347),
    [anon_sym_i16] = ACTIONS(347),
    [anon_sym_u32] = ACTIONS(347),
    [anon_sym_i32] = ACTIONS(347),
    [anon_sym_u64] = ACTIONS(347),
    [anon_sym_i64] = ACTIONS(347),
    [anon_sym_isize] = ACTIONS(347),
    [anon_sym_usize] = ACTIONS(347),
    [anon_sym_f32] = ACTIONS(347),
    [anon_sym_f64] = ACTIONS(347),
    [sym_boolean_literal] = ACTIONS(347),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(349),
  },
  [150] = {
    [aux_sym_parameters_repeat1] = STATE(153),
    [anon_sym_RPAREN] = ACTIONS(465),
    [anon_sym_COMMA] = ACTIONS(467),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [151] = {
    [anon_sym_DASH_GT] = ACTIONS(469),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(469),
  },
  [152] = {
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(471),
  },
  [153] = {
    [anon_sym_RPAREN] = ACTIONS(473),
    [anon_sym_COMMA] = ACTIONS(475),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [154] = {
    [anon_sym_DASH_GT] = ACTIONS(477),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(477),
  },
  [155] = {
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(479),
  },
  [156] = {
    [anon_sym_COLON] = ACTIONS(481),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [157] = {
    [sym_type_expression] = STATE(158),
    [anon_sym_u8] = ACTIONS(347),
    [anon_sym_i8] = ACTIONS(347),
    [anon_sym_u16] = ACTIONS(347),
    [anon_sym_i16] = ACTIONS(347),
    [anon_sym_u32] = ACTIONS(347),
    [anon_sym_i32] = ACTIONS(347),
    [anon_sym_u64] = ACTIONS(347),
    [anon_sym_i64] = ACTIONS(347),
    [anon_sym_isize] = ACTIONS(347),
    [anon_sym_usize] = ACTIONS(347),
    [anon_sym_f32] = ACTIONS(347),
    [anon_sym_f64] = ACTIONS(347),
    [sym_boolean_literal] = ACTIONS(347),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(349),
  },
  [158] = {
    [anon_sym_RPAREN] = ACTIONS(483),
    [anon_sym_COMMA] = ACTIONS(483),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [159] = {
    [anon_sym_COLON] = ACTIONS(485),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [160] = {
    [sym_type_expression] = STATE(161),
    [anon_sym_u8] = ACTIONS(347),
    [anon_sym_i8] = ACTIONS(347),
    [anon_sym_u16] = ACTIONS(347),
    [anon_sym_i16] = ACTIONS(347),
    [anon_sym_u32] = ACTIONS(347),
    [anon_sym_i32] = ACTIONS(347),
    [anon_sym_u64] = ACTIONS(347),
    [anon_sym_i64] = ACTIONS(347),
    [anon_sym_isize] = ACTIONS(347),
    [anon_sym_usize] = ACTIONS(347),
    [anon_sym_f32] = ACTIONS(347),
    [anon_sym_f64] = ACTIONS(347),
    [sym_boolean_literal] = ACTIONS(347),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(349),
  },
  [161] = {
    [anon_sym_RPAREN] = ACTIONS(487),
    [anon_sym_COMMA] = ACTIONS(487),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [162] = {
    [sym__statement_list] = STATE(92),
    [sym__statement] = STATE(179),
    [sym__declaration_statement] = STATE(15),
    [sym__item] = STATE(16),
    [sym_function_item] = STATE(17),
    [sym_let_declaration] = STATE(16),
    [sym__expression_statement] = STATE(15),
    [sym__expression] = STATE(18),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [sym_empty_statement] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(489),
    [anon_sym_LF] = ACTIONS(499),
    [anon_sym_SEMI] = ACTIONS(508),
    [anon_sym_fn] = ACTIONS(519),
    [anon_sym_let] = ACTIONS(530),
    [anon_sym_LPAREN] = ACTIONS(541),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(552),
    [anon_sym_return] = ACTIONS(563),
    [sym_number_literal] = ACTIONS(574),
    [anon_sym_DQUOTE] = ACTIONS(585),
    [sym_raw_string_literal] = ACTIONS(574),
    [anon_sym_SQUOTE] = ACTIONS(596),
    [sym_boolean_literal] = ACTIONS(574),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(607),
    [anon_sym_RBRACE] = ACTIONS(489),
  },
  [163] = {
    [sym_type_expression] = STATE(212),
    [anon_sym_u8] = ACTIONS(347),
    [anon_sym_i8] = ACTIONS(347),
    [anon_sym_u16] = ACTIONS(347),
    [anon_sym_i16] = ACTIONS(347),
    [anon_sym_u32] = ACTIONS(347),
    [anon_sym_i32] = ACTIONS(347),
    [anon_sym_u64] = ACTIONS(347),
    [anon_sym_i64] = ACTIONS(347),
    [anon_sym_isize] = ACTIONS(347),
    [anon_sym_usize] = ACTIONS(347),
    [anon_sym_f32] = ACTIONS(347),
    [anon_sym_f64] = ACTIONS(347),
    [sym_boolean_literal] = ACTIONS(347),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(349),
  },
  [164] = {
    [sym__expression] = STATE(210),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(618),
    [anon_sym_return] = ACTIONS(620),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [165] = {
    [sym__expression] = STATE(209),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(622),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(201),
    [anon_sym_return] = ACTIONS(203),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(624),
  },
  [166] = {
    [anon_sym_SEMI] = ACTIONS(626),
    [anon_sym_DASH_GT] = ACTIONS(631),
    [anon_sym_EQ] = ACTIONS(635),
    [anon_sym_LPAREN] = ACTIONS(626),
    [anon_sym_RPAREN] = ACTIONS(626),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(635),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(635),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(635),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(626),
    [anon_sym_AMP_AMP] = ACTIONS(626),
    [anon_sym_PIPE_PIPE] = ACTIONS(626),
    [anon_sym_COMMA] = ACTIONS(626),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(631),
    [anon_sym_RBRACE] = ACTIONS(626),
  },
  [167] = {
    [sym__expression] = STATE(206),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(618),
    [anon_sym_return] = ACTIONS(620),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [168] = {
    [sym__expression] = STATE(205),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(618),
    [anon_sym_return] = ACTIONS(620),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [169] = {
    [sym__expression] = STATE(204),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_SEMI] = ACTIONS(101),
    [anon_sym_EQ] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(640),
    [anon_sym_RPAREN] = ACTIONS(101),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(643),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(103),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(101),
    [anon_sym_AMP_AMP] = ACTIONS(101),
    [anon_sym_PIPE_PIPE] = ACTIONS(101),
    [anon_sym_return] = ACTIONS(620),
    [anon_sym_COMMA] = ACTIONS(101),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(101),
  },
  [170] = {
    [sym__expression] = STATE(201),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(201),
    [anon_sym_return] = ACTIONS(203),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(645),
  },
  [171] = {
    [aux_sym_string_literal_repeat1] = STATE(67),
    [anon_sym_SEMI] = ACTIONS(647),
    [anon_sym_EQ] = ACTIONS(650),
    [anon_sym_LPAREN] = ACTIONS(647),
    [anon_sym_RPAREN] = ACTIONS(647),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(650),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(650),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(647),
    [anon_sym_AMP_AMP] = ACTIONS(647),
    [anon_sym_PIPE_PIPE] = ACTIONS(647),
    [anon_sym_COMMA] = ACTIONS(647),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(115),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(653),
    [sym_byte_escape] = ACTIONS(115),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(647),
  },
  [172] = {
    [anon_sym_DQUOTE] = ACTIONS(655),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(655),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(658),
    [sym_byte_escape] = ACTIONS(655),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [173] = {
    [anon_sym_SEMI] = ACTIONS(661),
    [anon_sym_EQ] = ACTIONS(664),
    [anon_sym_LPAREN] = ACTIONS(661),
    [anon_sym_RPAREN] = ACTIONS(661),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(664),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(664),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(661),
    [anon_sym_AMP_AMP] = ACTIONS(661),
    [anon_sym_PIPE_PIPE] = ACTIONS(661),
    [anon_sym_COMMA] = ACTIONS(661),
    [anon_sym_SQUOTE] = ACTIONS(119),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(121),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_RBRACK_SLASH] = ACTIONS(667),
    [sym_byte_escape] = ACTIONS(121),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(661),
  },
  [174] = {
    [anon_sym_DQUOTE] = ACTIONS(655),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(655),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_SLASH] = ACTIONS(669),
    [anon_sym_SQUOTE] = ACTIONS(261),
    [sym_byte_escape] = ACTIONS(655),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [175] = {
    [anon_sym_SEMI] = ACTIONS(672),
    [anon_sym_EQ] = ACTIONS(675),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(672),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(111),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(109),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(111),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(109),
    [anon_sym_AMP_AMP] = ACTIONS(109),
    [anon_sym_PIPE_PIPE] = ACTIONS(109),
    [anon_sym_COMMA] = ACTIONS(672),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(359),
    [anon_sym_RBRACE] = ACTIONS(109),
  },
  [176] = {
    [sym_parameters] = STATE(119),
    [anon_sym_SEMI] = ACTIONS(678),
    [anon_sym_COLON] = ACTIONS(682),
    [anon_sym_EQ] = ACTIONS(685),
    [anon_sym_LPAREN] = ACTIONS(689),
    [anon_sym_RPAREN] = ACTIONS(692),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(127),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(125),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(127),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(125),
    [anon_sym_AMP_AMP] = ACTIONS(125),
    [anon_sym_PIPE_PIPE] = ACTIONS(125),
    [anon_sym_COMMA] = ACTIONS(692),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(359),
    [anon_sym_RBRACE] = ACTIONS(125),
  },
  [177] = {
    [ts_builtin_sym_end] = ACTIONS(695),
    [anon_sym_LF] = ACTIONS(695),
    [anon_sym_SEMI] = ACTIONS(695),
    [anon_sym_fn] = ACTIONS(698),
    [anon_sym_let] = ACTIONS(698),
    [anon_sym_LPAREN] = ACTIONS(695),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(695),
    [anon_sym_return] = ACTIONS(698),
    [sym_number_literal] = ACTIONS(698),
    [anon_sym_DQUOTE] = ACTIONS(695),
    [sym_raw_string_literal] = ACTIONS(698),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [sym_boolean_literal] = ACTIONS(698),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(701),
    [anon_sym_RBRACE] = ACTIONS(695),
  },
  [178] = {
    [ts_builtin_sym_end] = ACTIONS(704),
    [anon_sym_SEMI] = ACTIONS(704),
    [anon_sym_fn] = ACTIONS(708),
    [anon_sym_let] = ACTIONS(708),
    [anon_sym_LPAREN] = ACTIONS(704),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(704),
    [anon_sym_return] = ACTIONS(708),
    [sym_number_literal] = ACTIONS(708),
    [anon_sym_DQUOTE] = ACTIONS(704),
    [sym_raw_string_literal] = ACTIONS(708),
    [anon_sym_SQUOTE] = ACTIONS(704),
    [sym_boolean_literal] = ACTIONS(708),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(712),
    [anon_sym_RBRACE] = ACTIONS(716),
  },
  [179] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_LF] = ACTIONS(719),
    [anon_sym_SEMI] = ACTIONS(721),
    [anon_sym_fn] = ACTIONS(141),
    [anon_sym_let] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(137),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(137),
    [anon_sym_return] = ACTIONS(141),
    [sym_number_literal] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(137),
    [sym_raw_string_literal] = ACTIONS(141),
    [anon_sym_SQUOTE] = ACTIONS(137),
    [sym_boolean_literal] = ACTIONS(141),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(143),
    [anon_sym_RBRACE] = ACTIONS(137),
  },
  [180] = {
    [anon_sym_SEMI] = ACTIONS(724),
    [anon_sym_COLON] = ACTIONS(726),
    [anon_sym_EQ] = ACTIONS(728),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [181] = {
    [sym_block] = STATE(146),
    [aux_sym_parameters_repeat1] = STATE(153),
    [anon_sym_SEMI] = ACTIONS(730),
    [anon_sym_EQ] = ACTIONS(732),
    [anon_sym_RPAREN] = ACTIONS(734),
    [anon_sym_COMMA] = ACTIONS(738),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(409),
  },
  [182] = {
    [sym_arguments] = STATE(31),
    [aux_sym_arguments_repeat1] = STATE(51),
    [anon_sym_SEMI] = ACTIONS(742),
    [anon_sym_EQ] = ACTIONS(748),
    [anon_sym_LPAREN] = ACTIONS(754),
    [anon_sym_RPAREN] = ACTIONS(760),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(768),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(774),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(768),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(774),
    [anon_sym_AMP_AMP] = ACTIONS(774),
    [anon_sym_PIPE_PIPE] = ACTIONS(774),
    [anon_sym_COMMA] = ACTIONS(780),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(788),
  },
  [183] = {
    [ts_builtin_sym_end] = ACTIONS(794),
    [anon_sym_LF] = ACTIONS(794),
    [anon_sym_SEMI] = ACTIONS(794),
    [anon_sym_fn] = ACTIONS(797),
    [anon_sym_let] = ACTIONS(797),
    [anon_sym_LPAREN] = ACTIONS(794),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(794),
    [anon_sym_return] = ACTIONS(797),
    [sym_number_literal] = ACTIONS(797),
    [anon_sym_DQUOTE] = ACTIONS(794),
    [sym_raw_string_literal] = ACTIONS(797),
    [anon_sym_SQUOTE] = ACTIONS(794),
    [sym_boolean_literal] = ACTIONS(797),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(800),
    [anon_sym_RBRACE] = ACTIONS(794),
  },
  [184] = {
    [ts_builtin_sym_end] = ACTIONS(803),
    [anon_sym_LF] = ACTIONS(803),
    [anon_sym_SEMI] = ACTIONS(803),
    [anon_sym_fn] = ACTIONS(809),
    [anon_sym_let] = ACTIONS(809),
    [anon_sym_LPAREN] = ACTIONS(803),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(803),
    [anon_sym_return] = ACTIONS(809),
    [sym_number_literal] = ACTIONS(809),
    [anon_sym_DQUOTE] = ACTIONS(803),
    [sym_raw_string_literal] = ACTIONS(809),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [sym_boolean_literal] = ACTIONS(809),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(815),
    [anon_sym_RBRACE] = ACTIONS(803),
  },
  [185] = {
    [sym__expression] = STATE(187),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(618),
    [anon_sym_return] = ACTIONS(620),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [186] = {
    [anon_sym_SEMI] = ACTIONS(821),
    [anon_sym_EQ] = ACTIONS(824),
    [anon_sym_LPAREN] = ACTIONS(821),
    [anon_sym_RPAREN] = ACTIONS(821),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(824),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(821),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(824),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(821),
    [anon_sym_AMP_AMP] = ACTIONS(821),
    [anon_sym_PIPE_PIPE] = ACTIONS(821),
    [anon_sym_COMMA] = ACTIONS(821),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(821),
  },
  [187] = {
    [sym_arguments] = STATE(31),
    [anon_sym_SEMI] = ACTIONS(255),
    [anon_sym_EQ] = ACTIONS(827),
    [anon_sym_LPAREN] = ACTIONS(830),
    [anon_sym_RPAREN] = ACTIONS(255),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(833),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(836),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(833),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(836),
    [anon_sym_AMP_AMP] = ACTIONS(836),
    [anon_sym_PIPE_PIPE] = ACTIONS(836),
    [anon_sym_COMMA] = ACTIONS(255),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(255),
  },
  [188] = {
    [ts_builtin_sym_end] = ACTIONS(839),
    [anon_sym_LF] = ACTIONS(839),
    [anon_sym_SEMI] = ACTIONS(839),
    [anon_sym_fn] = ACTIONS(842),
    [anon_sym_let] = ACTIONS(842),
    [anon_sym_LPAREN] = ACTIONS(839),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(839),
    [anon_sym_return] = ACTIONS(842),
    [sym_number_literal] = ACTIONS(842),
    [anon_sym_DQUOTE] = ACTIONS(839),
    [sym_raw_string_literal] = ACTIONS(842),
    [anon_sym_SQUOTE] = ACTIONS(839),
    [sym_boolean_literal] = ACTIONS(842),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(845),
    [anon_sym_RBRACE] = ACTIONS(839),
  },
  [189] = {
    [sym__expression] = STATE(190),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(73),
    [anon_sym_return] = ACTIONS(75),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [190] = {
    [sym_arguments] = STATE(31),
    [anon_sym_SEMI] = ACTIONS(848),
    [anon_sym_EQ] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(171),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(173),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(175),
    [anon_sym_AMP_AMP] = ACTIONS(177),
    [anon_sym_PIPE_PIPE] = ACTIONS(179),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [191] = {
    [ts_builtin_sym_end] = ACTIONS(850),
    [anon_sym_LF] = ACTIONS(850),
    [anon_sym_SEMI] = ACTIONS(850),
    [anon_sym_fn] = ACTIONS(853),
    [anon_sym_let] = ACTIONS(853),
    [anon_sym_LPAREN] = ACTIONS(850),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(850),
    [anon_sym_return] = ACTIONS(853),
    [sym_number_literal] = ACTIONS(853),
    [anon_sym_DQUOTE] = ACTIONS(850),
    [sym_raw_string_literal] = ACTIONS(853),
    [anon_sym_SQUOTE] = ACTIONS(850),
    [sym_boolean_literal] = ACTIONS(853),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(856),
    [anon_sym_RBRACE] = ACTIONS(850),
  },
  [192] = {
    [ts_builtin_sym_end] = ACTIONS(859),
    [anon_sym_LF] = ACTIONS(859),
    [anon_sym_SEMI] = ACTIONS(859),
    [anon_sym_fn] = ACTIONS(862),
    [anon_sym_let] = ACTIONS(862),
    [anon_sym_LPAREN] = ACTIONS(859),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(859),
    [anon_sym_return] = ACTIONS(862),
    [sym_number_literal] = ACTIONS(862),
    [anon_sym_DQUOTE] = ACTIONS(859),
    [sym_raw_string_literal] = ACTIONS(862),
    [anon_sym_SQUOTE] = ACTIONS(859),
    [sym_boolean_literal] = ACTIONS(862),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(865),
    [anon_sym_RBRACE] = ACTIONS(859),
  },
  [193] = {
    [sym_type_expression] = STATE(196),
    [anon_sym_u8] = ACTIONS(347),
    [anon_sym_i8] = ACTIONS(347),
    [anon_sym_u16] = ACTIONS(347),
    [anon_sym_i16] = ACTIONS(347),
    [anon_sym_u32] = ACTIONS(347),
    [anon_sym_i32] = ACTIONS(347),
    [anon_sym_u64] = ACTIONS(347),
    [anon_sym_i64] = ACTIONS(347),
    [anon_sym_isize] = ACTIONS(347),
    [anon_sym_usize] = ACTIONS(347),
    [anon_sym_f32] = ACTIONS(347),
    [anon_sym_f64] = ACTIONS(347),
    [sym_boolean_literal] = ACTIONS(347),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(349),
  },
  [194] = {
    [sym__expression] = STATE(195),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(71),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(73),
    [anon_sym_return] = ACTIONS(75),
    [sym_number_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym_raw_string_literal] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_boolean_literal] = ACTIONS(77),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(83),
  },
  [195] = {
    [sym_arguments] = STATE(31),
    [anon_sym_SEMI] = ACTIONS(730),
    [anon_sym_EQ] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(167),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(169),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(171),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(173),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(175),
    [anon_sym_AMP_AMP] = ACTIONS(177),
    [anon_sym_PIPE_PIPE] = ACTIONS(179),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [196] = {
    [anon_sym_SEMI] = ACTIONS(730),
    [anon_sym_EQ] = ACTIONS(732),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [197] = {
    [sym__statement_list] = STATE(92),
    [sym__statement] = STATE(179),
    [sym__declaration_statement] = STATE(15),
    [sym__item] = STATE(16),
    [sym_function_item] = STATE(17),
    [sym_let_declaration] = STATE(16),
    [sym__expression_statement] = STATE(15),
    [sym__expression] = STATE(18),
    [sym_unary_expression] = STATE(11),
    [sym_binary_expression] = STATE(11),
    [sym_assignment_expression] = STATE(19),
    [sym_return_expression] = STATE(11),
    [sym_call_expression] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_string_literal] = STATE(8),
    [sym_char_literal] = STATE(8),
    [sym_empty_statement] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(319),
    [anon_sym_SEMI] = ACTIONS(868),
    [anon_sym_fn] = ACTIONS(871),
    [anon_sym_let] = ACTIONS(874),
    [anon_sym_LPAREN] = ACTIONS(877),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(880),
    [anon_sym_return] = ACTIONS(883),
    [sym_number_literal] = ACTIONS(886),
    [anon_sym_DQUOTE] = ACTIONS(889),
    [sym_raw_string_literal] = ACTIONS(886),
    [anon_sym_SQUOTE] = ACTIONS(892),
    [sym_boolean_literal] = ACTIONS(886),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(895),
    [anon_sym_RBRACE] = ACTIONS(319),
  },
  [198] = {
    [sym_type_expression] = STATE(199),
    [anon_sym_u8] = ACTIONS(347),
    [anon_sym_i8] = ACTIONS(347),
    [anon_sym_u16] = ACTIONS(347),
    [anon_sym_i16] = ACTIONS(347),
    [anon_sym_u32] = ACTIONS(347),
    [anon_sym_i32] = ACTIONS(347),
    [anon_sym_u64] = ACTIONS(347),
    [anon_sym_i64] = ACTIONS(347),
    [anon_sym_isize] = ACTIONS(347),
    [anon_sym_usize] = ACTIONS(347),
    [anon_sym_f32] = ACTIONS(347),
    [anon_sym_f64] = ACTIONS(347),
    [sym_boolean_literal] = ACTIONS(347),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(349),
  },
  [199] = {
    [aux_sym_parameters_repeat1] = STATE(153),
    [anon_sym_RPAREN] = ACTIONS(734),
    [anon_sym_COMMA] = ACTIONS(738),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [200] = {
    [anon_sym_COLON] = ACTIONS(898),
    [anon_sym_EQ] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(125),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(127),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(125),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(127),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(125),
    [anon_sym_AMP_AMP] = ACTIONS(125),
    [anon_sym_PIPE_PIPE] = ACTIONS(125),
    [anon_sym_COMMA] = ACTIONS(125),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [201] = {
    [sym_arguments] = STATE(31),
    [anon_sym_EQ] = ACTIONS(219),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_RPAREN] = ACTIONS(900),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(225),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(227),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(229),
    [anon_sym_AMP_AMP] = ACTIONS(231),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_COMMA] = ACTIONS(900),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [202] = {
    [sym_type_expression] = STATE(203),
    [anon_sym_u8] = ACTIONS(347),
    [anon_sym_i8] = ACTIONS(347),
    [anon_sym_u16] = ACTIONS(347),
    [anon_sym_i16] = ACTIONS(347),
    [anon_sym_u32] = ACTIONS(347),
    [anon_sym_i32] = ACTIONS(347),
    [anon_sym_u64] = ACTIONS(347),
    [anon_sym_i64] = ACTIONS(347),
    [anon_sym_isize] = ACTIONS(347),
    [anon_sym_usize] = ACTIONS(347),
    [anon_sym_f32] = ACTIONS(347),
    [anon_sym_f64] = ACTIONS(347),
    [sym_boolean_literal] = ACTIONS(347),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(349),
  },
  [203] = {
    [anon_sym_RPAREN] = ACTIONS(903),
    [anon_sym_COMMA] = ACTIONS(903),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [204] = {
    [sym_arguments] = STATE(31),
    [anon_sym_SEMI] = ACTIONS(291),
    [anon_sym_EQ] = ACTIONS(906),
    [anon_sym_LPAREN] = ACTIONS(909),
    [anon_sym_RPAREN] = ACTIONS(291),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(912),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(915),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(912),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(915),
    [anon_sym_AMP_AMP] = ACTIONS(915),
    [anon_sym_PIPE_PIPE] = ACTIONS(915),
    [anon_sym_COMMA] = ACTIONS(291),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(291),
  },
  [205] = {
    [sym_arguments] = STATE(31),
    [anon_sym_SEMI] = ACTIONS(209),
    [anon_sym_EQ] = ACTIONS(918),
    [anon_sym_LPAREN] = ACTIONS(921),
    [anon_sym_RPAREN] = ACTIONS(209),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(924),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(927),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(924),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(927),
    [anon_sym_AMP_AMP] = ACTIONS(927),
    [anon_sym_PIPE_PIPE] = ACTIONS(927),
    [anon_sym_COMMA] = ACTIONS(209),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(209),
  },
  [206] = {
    [sym_arguments] = STATE(31),
    [anon_sym_SEMI] = ACTIONS(293),
    [anon_sym_EQ] = ACTIONS(930),
    [anon_sym_LPAREN] = ACTIONS(933),
    [anon_sym_RPAREN] = ACTIONS(293),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(936),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(939),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(936),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(939),
    [anon_sym_AMP_AMP] = ACTIONS(939),
    [anon_sym_PIPE_PIPE] = ACTIONS(939),
    [anon_sym_COMMA] = ACTIONS(293),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(293),
  },
  [207] = {
    [anon_sym_SEMI] = ACTIONS(213),
    [anon_sym_DASH_GT] = ACTIONS(461),
    [anon_sym_EQ] = ACTIONS(215),
    [anon_sym_LPAREN] = ACTIONS(213),
    [anon_sym_RPAREN] = ACTIONS(213),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(215),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(215),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(215),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(213),
    [anon_sym_AMP_AMP] = ACTIONS(213),
    [anon_sym_PIPE_PIPE] = ACTIONS(213),
    [anon_sym_COMMA] = ACTIONS(213),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(461),
    [anon_sym_RBRACE] = ACTIONS(213),
  },
  [208] = {
    [anon_sym_COLON] = ACTIONS(463),
    [anon_sym_EQ] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(125),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(127),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(125),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(127),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(125),
    [anon_sym_AMP_AMP] = ACTIONS(125),
    [anon_sym_PIPE_PIPE] = ACTIONS(125),
    [anon_sym_COMMA] = ACTIONS(125),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [209] = {
    [sym_arguments] = STATE(31),
    [aux_sym_arguments_repeat1] = STATE(51),
    [anon_sym_EQ] = ACTIONS(219),
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_RPAREN] = ACTIONS(942),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(225),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(227),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(229),
    [anon_sym_AMP_AMP] = ACTIONS(231),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_COMMA] = ACTIONS(235),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
  [210] = {
    [sym_arguments] = STATE(31),
    [anon_sym_SEMI] = ACTIONS(944),
    [anon_sym_EQ] = ACTIONS(827),
    [anon_sym_LPAREN] = ACTIONS(830),
    [anon_sym_RPAREN] = ACTIONS(255),
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_RPAREN_SLASH] = ACTIONS(833),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_RPAREN_SLASH] = ACTIONS(836),
    [aux_sym_SLASH_LPAREN_EQ_EQ_PIPE_BANG_EQ_PIPE_LT_PIPE_LT_EQ_PIPE_GT_PIPE_GT_EQ_RPAREN_SLASH] = ACTIONS(833),
    [aux_sym_SLASH_LPAREN_LT_LT_PIPE_GT_GT_RPAREN_SLASH] = ACTIONS(836),
    [anon_sym_AMP_AMP] = ACTIONS(836),
    [anon_sym_PIPE_PIPE] = ACTIONS(836),
    [anon_sym_COMMA] = ACTIONS(255),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(255),
  },
  [211] = {
    [ts_builtin_sym_end] = ACTIONS(947),
    [anon_sym_LF] = ACTIONS(947),
    [anon_sym_SEMI] = ACTIONS(947),
    [anon_sym_fn] = ACTIONS(952),
    [anon_sym_let] = ACTIONS(952),
    [anon_sym_LPAREN] = ACTIONS(947),
    [aux_sym_SLASH_LPAREN_DASH_PIPE_STAR_PIPE_BANG_RPAREN_SLASH] = ACTIONS(947),
    [anon_sym_return] = ACTIONS(952),
    [sym_number_literal] = ACTIONS(952),
    [anon_sym_DQUOTE] = ACTIONS(947),
    [sym_raw_string_literal] = ACTIONS(952),
    [anon_sym_SQUOTE] = ACTIONS(947),
    [sym_boolean_literal] = ACTIONS(952),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
    [sym_identifier] = ACTIONS(957),
    [anon_sym_RBRACE] = ACTIONS(947),
  },
  [212] = {
    [aux_sym_parameters_repeat1] = STATE(153),
    [anon_sym_SEMI] = ACTIONS(730),
    [anon_sym_EQ] = ACTIONS(732),
    [anon_sym_RPAREN] = ACTIONS(734),
    [anon_sym_COMMA] = ACTIONS(738),
    [sym_line_comment] = ACTIONS(53),
    [sym_block_comment] = ACTIONS(55),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(162),
  [5] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(3),
  [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(120),
  [9] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(4),
  [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(163),
  [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(164),
  [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(102),
  [17] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(94),
  [19] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(165),
  [21] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(166),
  [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(167),
  [25] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(168),
  [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(168),
  [29] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(168),
  [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(169),
  [33] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(170),
  [35] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(8),
  [37] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(171),
  [39] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(172),
  [41] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(172),
  [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(173),
  [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(63),
  [47] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(63),
  [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(174),
  [51] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(175),
  [53] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [57] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(176),
  [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(121),
  [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(177),
  [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_source_file, 0),
  [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
  [67] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
  [69] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
  [71] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
  [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
  [75] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
  [77] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
  [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(9),
  [81] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(10),
  [83] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(11),
  [85] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1),
  [87] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_empty_statement, 1),
  [89] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1),
  [91] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(117),
  [93] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(94),
  [95] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(95),
  [97] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(72),
  [99] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(73),
  [101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_return_expression, 1),
  [103] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_return_expression, 1),
  [105] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
  [107] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_return_expression, 1),
  [109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [111] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(65),
  [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(66),
  [117] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(66),
  [119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(62),
  [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(63),
  [123] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(63),
  [125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [127] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 1),
  [133] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_source_file_repeat1, 1),
  [135] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 1),
  [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 1),
  [139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
  [141] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym__statement_list, 1),
  [143] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 1),
  [145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [147] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
  [149] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [151] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declaration_statement, 1),
  [153] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__declaration_statement, 1),
  [155] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__declaration_statement, 1),
  [157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__item, 1),
  [159] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__item, 1),
  [161] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__item, 1),
  [163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(22),
  [165] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(23),
  [167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(24),
  [169] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(25),
  [171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(26),
  [173] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(27),
  [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(28),
  [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
  [179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
  [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 1),
  [183] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_binary_expression, 1),
  [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_source_file, 1),
  [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 2),
  [189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [191] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 2),
  [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression_statement, 2),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression_statement, 2),
  [197] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression_statement, 2),
  [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
  [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
  [203] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(40),
  [205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [207] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call_expression, 2),
  [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_expression, 3),
  [211] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_expression, 3),
  [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 2),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_arguments, 2),
  [217] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(39),
  [219] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(42),
  [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
  [223] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(44),
  [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
  [227] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(46),
  [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(47),
  [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
  [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
  [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
  [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3),
  [239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_arguments, 3),
  [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(52),
  [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
  [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 4),
  [247] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_arguments, 4),
  [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_arguments_repeat1, 3),
  [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_arguments_repeat1, 2),
  [253] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_assignment_expression, 3),
  [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_assignment_expression, 3),
  [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char_literal, 2),
  [259] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char_literal, 2),
  [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
  [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char_literal, 3),
  [265] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char_literal, 3),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 2),
  [269] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string_literal, 2),
  [271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_string_literal_repeat1, 1),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_string_literal_repeat1, 1),
  [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(68),
  [277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
  [279] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(69),
  [281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 3),
  [283] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string_literal, 3),
  [285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [287] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [289] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_return_expression, 2),
  [291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_return_expression, 2),
  [293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2),
  [295] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_expression, 2),
  [297] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(72),
  [299] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(75),
  [301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
  [303] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(77),
  [305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(78),
  [307] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(79),
  [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(80),
  [311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(81),
  [313] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
  [315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 3),
  [317] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 3),
  [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 2),
  [321] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym__statement_list, 2),
  [323] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 2),
  [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement_list, 3),
  [327] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement_list, 3),
  [329] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement_list, 3),
  [331] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(95),
  [333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__pattern, 1),
  [335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
  [337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
  [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
  [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 3),
  [343] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_declaration, 3),
  [345] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 3),
  [347] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(102),
  [349] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(102),
  [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
  [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 5),
  [355] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_declaration, 5),
  [357] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 5),
  [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_expression, 1),
  [361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
  [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
  [365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 7),
  [367] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_declaration, 7),
  [369] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 7),
  [371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(108),
  [373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(109),
  [375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(110),
  [377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 4),
  [379] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_declaration, 4),
  [381] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 4),
  [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
  [385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 6),
  [387] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_declaration, 6),
  [389] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 6),
  [391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(114),
  [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
  [395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 8),
  [397] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_declaration, 8),
  [399] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 8),
  [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
  [403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
  [405] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(148),
  [407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(120),
  [409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(121),
  [411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(123),
  [413] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(124),
  [415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(125),
  [417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_item, 4),
  [419] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_item, 4),
  [421] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_item, 4),
  [423] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(123),
  [425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block, 2),
  [427] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_block, 2),
  [429] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_block, 2),
  [431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(136),
  [433] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(143),
  [435] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(129),
  [437] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(130),
  [439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(131),
  [441] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(132),
  [443] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
  [445] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(134),
  [447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(135),
  [449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block, 3),
  [451] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_block, 3),
  [453] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_block, 3),
  [455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_item, 6),
  [457] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_item, 6),
  [459] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_item, 6),
  [461] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2),
  [463] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(149),
  [465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(151),
  [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(152),
  [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 5),
  [471] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(159),
  [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(154),
  [475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(155),
  [477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 6),
  [479] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(156),
  [481] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(157),
  [483] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 5),
  [485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(160),
  [487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 4),
  [489] = {.count = 9, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8),
  [499] = {.count = 8, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8),
  [508] = {.count = 10, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(2),
  [519] = {.count = 10, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(3),
  [530] = {.count = 10, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(4),
  [541] = {.count = 10, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(5),
  [552] = {.count = 10, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(6),
  [563] = {.count = 10, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(7),
  [574] = {.count = 10, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(8),
  [585] = {.count = 10, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(9),
  [596] = {.count = 10, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(10),
  [607] = {.count = 10, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_empty_statement, 1), REDUCE_FRAGILE(sym__statement_list, 2), REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8), SHIFT(11),
  [618] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(167),
  [620] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(169),
  [622] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(207),
  [624] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(208),
  [626] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 2), REDUCE(sym__expression, 3), REDUCE(sym_arguments, 3), REDUCE(sym_arguments, 4),
  [631] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameters, 2), REDUCE(sym_parameters, 5), REDUCE(sym_parameters, 6),
  [635] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_arguments, 2), REDUCE(sym__expression, 3), REDUCE(sym_arguments, 3), REDUCE(sym_arguments, 4),
  [640] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_return_expression, 1), SHIFT(5),
  [643] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(167),
  [645] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(200),
  [647] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 2), REDUCE(sym_string_literal, 3),
  [650] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string_literal, 2), REDUCE(sym_string_literal, 3),
  [653] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(66),
  [655] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_string_literal_repeat1, 1), REDUCE(aux_sym_string_literal_repeat1, 2),
  [658] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_string_literal_repeat1, 1), REDUCE(aux_sym_string_literal_repeat1, 2),
  [661] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char_literal, 2), REDUCE(sym_char_literal, 3),
  [664] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char_literal, 2), REDUCE(sym_char_literal, 3),
  [667] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(63),
  [669] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_literal_repeat1, 1), REDUCE(aux_sym_string_literal_repeat1, 2),
  [672] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_expression, 1), REDUCE(sym__literal, 1),
  [675] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_expression, 1), REDUCE(sym__literal, 1),
  [678] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__pattern, 1), REDUCE(sym_type_expression, 1), REDUCE(sym__expression, 1),
  [682] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__pattern, 1), SHIFT(198),
  [685] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__pattern, 1), REDUCE(sym_type_expression, 1), REDUCE(sym__expression, 1),
  [689] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1), SHIFT(118),
  [692] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_expression, 1), REDUCE(sym__expression, 1),
  [695] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_block, 2), REDUCE(sym_block, 3),
  [698] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_block, 2), REDUCE(sym_block, 3),
  [701] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_block, 2), REDUCE(sym_block, 3),
  [704] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 1), REDUCE(aux_sym_source_file_repeat1, 2), REDUCE(sym__statement_list, 3),
  [708] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_source_file_repeat1, 1), REDUCE(aux_sym_source_file_repeat1, 2), REDUCE(sym__statement_list, 3),
  [712] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_source_file_repeat1, 1), REDUCE(aux_sym_source_file_repeat1, 2), REDUCE(sym__statement_list, 3),
  [716] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement_list, 3), SHIFT(136),
  [719] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(197),
  [721] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 1), SHIFT(197),
  [724] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(192),
  [726] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(193),
  [728] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(194),
  [730] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(188),
  [732] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(189),
  [734] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 4), REDUCE(aux_sym_parameters_repeat1, 5), SHIFT(151),
  [738] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 4), REDUCE(aux_sym_parameters_repeat1, 5), SHIFT(152),
  [742] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2), REDUCE_FRAGILE(sym_return_expression, 2), REDUCE_FRAGILE(sym_binary_expression, 3), REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(184),
  [748] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_expression, 2), REDUCE_FRAGILE(sym_return_expression, 2), REDUCE_FRAGILE(sym_binary_expression, 3), REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(185),
  [754] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2), REDUCE_FRAGILE(sym_return_expression, 2), REDUCE_FRAGILE(sym_binary_expression, 3), REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(24),
  [760] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2), REDUCE_FRAGILE(sym_return_expression, 2), REDUCE(aux_sym_arguments_repeat1, 2), REDUCE_FRAGILE(sym_binary_expression, 3), REDUCE_FRAGILE(sym_assignment_expression, 3), REDUCE(aux_sym_arguments_repeat1, 3), SHIFT(186),
  [768] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_expression, 2), REDUCE_FRAGILE(sym_return_expression, 2), REDUCE_FRAGILE(sym_binary_expression, 3), REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(168),
  [774] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2), REDUCE_FRAGILE(sym_return_expression, 2), REDUCE_FRAGILE(sym_binary_expression, 3), REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(168),
  [780] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2), REDUCE_FRAGILE(sym_return_expression, 2), REDUCE(aux_sym_arguments_repeat1, 2), REDUCE_FRAGILE(sym_binary_expression, 3), REDUCE_FRAGILE(sym_assignment_expression, 3), REDUCE(aux_sym_arguments_repeat1, 3), SHIFT(50),
  [788] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2), REDUCE_FRAGILE(sym_return_expression, 2), REDUCE_FRAGILE(sym_binary_expression, 3), REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(136),
  [794] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_item, 4), REDUCE(sym_function_item, 6),
  [797] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_item, 4), REDUCE(sym_function_item, 6),
  [800] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_function_item, 4), REDUCE(sym_function_item, 6),
  [803] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8),
  [809] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8),
  [815] = {.count = 5, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression_statement, 2), REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8),
  [821] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 3), REDUCE(sym_arguments, 3),
  [824] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 3), REDUCE(sym_arguments, 3),
  [827] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(185),
  [830] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(24),
  [833] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(168),
  [836] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(168),
  [839] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6),
  [842] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6),
  [845] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6),
  [848] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(191),
  [850] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8),
  [853] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8),
  [856] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8),
  [859] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4),
  [862] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4),
  [865] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 3), REDUCE(sym_let_declaration, 4),
  [868] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(2),
  [871] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(3),
  [874] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(4),
  [877] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(5),
  [880] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(6),
  [883] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(7),
  [886] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(8),
  [889] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(9),
  [892] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(10),
  [895] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym__statement_list, 2), SHIFT(11),
  [898] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(202),
  [900] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_arguments_repeat1, 2), REDUCE(aux_sym_arguments_repeat1, 3),
  [903] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parameters_repeat1, 4), REDUCE(aux_sym_parameters_repeat1, 5),
  [906] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(185),
  [909] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(24),
  [912] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(168),
  [915] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_return_expression, 2), SHIFT(168),
  [918] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(185),
  [921] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(24),
  [924] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(168),
  [927] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_binary_expression, 3), SHIFT(168),
  [930] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(185),
  [933] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(24),
  [936] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(168),
  [939] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_unary_expression, 2), SHIFT(168),
  [942] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(186),
  [944] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE_FRAGILE(sym_assignment_expression, 3), SHIFT(211),
  [947] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8),
  [952] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8),
  [957] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_let_declaration, 5), REDUCE(sym_let_declaration, 6), REDUCE(sym_let_declaration, 7), REDUCE(sym_let_declaration, 8),
};

const TSLanguage *tree_sitter_rust() {
  GET_LANGUAGE();
}
