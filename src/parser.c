#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 516
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9

enum {
  anon_sym_function = 1,
  anon_sym_end = 2,
  anon_sym_mutable = 3,
  anon_sym_struct = 4,
  anon_sym_module = 5,
  anon_sym_LPAREN = 6,
  anon_sym_COMMA = 7,
  anon_sym_RPAREN = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_LT_COLON = 11,
  anon_sym_if = 12,
  anon_sym_elseif = 13,
  anon_sym_else = 14,
  anon_sym_using = 15,
  anon_sym_import = 16,
  anon_sym_COLON = 17,
  anon_sym_DOT = 18,
  anon_sym_COLON_COLON = 19,
  anon_sym_PIPE_PIPE = 20,
  anon_sym_AMP_AMP = 21,
  anon_sym_EQ_GT = 22,
  sym_identifier = 23,
  sym_number = 24,
  sym_string = 25,
  sym__times_operator = 26,
  sym__plus_operator = 27,
  sym__arrow_operator = 28,
  sym__assign_operator = 29,
  anon_sym_LF = 30,
  anon_sym_SEMI = 31,
  sym_comment = 32,
  sym_source_file = 33,
  sym_function_definition = 34,
  sym_struct_definition = 35,
  sym_module_definition = 36,
  sym_parameter_list = 37,
  sym_type_parameter_list = 38,
  sym_subtype_clause = 39,
  sym_if_statement = 40,
  sym_elseif_clause = 41,
  sym_else_clause = 42,
  sym_import_statement = 43,
  sym_import_list = 44,
  sym__expression = 45,
  sym_parenthesized_expression = 46,
  sym_field_expression = 47,
  sym_typed_expression = 48,
  sym_parameterized_identifier = 49,
  sym_type_argument_list = 50,
  sym_call_expression = 51,
  sym_argument_list = 52,
  sym_assignment_expression = 53,
  sym_binary_expression = 54,
  sym_pair_expression = 55,
  aux_sym__expression_list_repeat1 = 56,
  aux_sym_parameter_list_repeat1 = 57,
  aux_sym_type_parameter_list_repeat1 = 58,
  aux_sym_if_statement_repeat1 = 59,
  aux_sym_type_argument_list_repeat1 = 60,
  aux_sym_argument_list_repeat1 = 61,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_function] = "function",
  [anon_sym_end] = "end",
  [anon_sym_mutable] = "mutable",
  [anon_sym_struct] = "struct",
  [anon_sym_module] = "module",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LT_COLON] = "<:",
  [anon_sym_if] = "if",
  [anon_sym_elseif] = "elseif",
  [anon_sym_else] = "else",
  [anon_sym_using] = "using",
  [anon_sym_import] = "import",
  [anon_sym_COLON] = ":",
  [anon_sym_DOT] = ".",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_EQ_GT] = "=>",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym__times_operator] = "_times_operator",
  [sym__plus_operator] = "_plus_operator",
  [sym__arrow_operator] = "_arrow_operator",
  [sym__assign_operator] = "_assign_operator",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_function_definition] = "function_definition",
  [sym_struct_definition] = "struct_definition",
  [sym_module_definition] = "module_definition",
  [sym_parameter_list] = "parameter_list",
  [sym_type_parameter_list] = "type_parameter_list",
  [sym_subtype_clause] = "subtype_clause",
  [sym_if_statement] = "if_statement",
  [sym_elseif_clause] = "elseif_clause",
  [sym_else_clause] = "else_clause",
  [sym_import_statement] = "import_statement",
  [sym_import_list] = "import_list",
  [sym__expression] = "_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_field_expression] = "field_expression",
  [sym_typed_expression] = "typed_expression",
  [sym_parameterized_identifier] = "parameterized_identifier",
  [sym_type_argument_list] = "type_argument_list",
  [sym_call_expression] = "call_expression",
  [sym_argument_list] = "argument_list",
  [sym_assignment_expression] = "assignment_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_pair_expression] = "pair_expression",
  [aux_sym__expression_list_repeat1] = "_expression_list_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_type_parameter_list_repeat1] = "type_parameter_list_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
  [aux_sym_type_argument_list_repeat1] = "type_argument_list_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mutable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [anon_sym_LT_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elseif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_using] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__times_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__plus_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__arrow_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__assign_operator] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_module_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_type_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_subtype_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_elseif_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_else_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_import_list] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_field_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_typed_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_parameterized_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_type_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_pair_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__expression_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(4);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == ':')
        ADVANCE(13);
      if (lookahead == ';')
        ADVANCE(14);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(16);
      if (lookahead == '>')
        ADVANCE(17);
      if (lookahead == '\\')
        ADVANCE(18);
      if (lookahead == '^')
        ADVANCE(19);
      if (lookahead == 'e')
        ADVANCE(20);
      if (lookahead == 'f')
        ADVANCE(21);
      if (lookahead == 'i')
        ADVANCE(22);
      if (lookahead == 'm')
        ADVANCE(23);
      if (lookahead == 's')
        ADVANCE(24);
      if (lookahead == 'u')
        ADVANCE(25);
      if (lookahead == '{')
        ADVANCE(26);
      if (lookahead == '|')
        ADVANCE(27);
      if (lookahead == '}')
        ADVANCE(28);
      if (lookahead == '~')
        ADVANCE(29);
      if (lookahead == 177)
        ADVANCE(30);
      if (lookahead == 215)
        ADVANCE(18);
      if (lookahead == 247)
        ADVANCE(5);
      if (lookahead == 8523)
        ADVANCE(18);
      if (lookahead == 8592)
        ADVANCE(31);
      if (lookahead == 8594)
        ADVANCE(31);
      if (lookahead == 8596)
        ADVANCE(31);
      if (lookahead == 8602)
        ADVANCE(31);
      if (lookahead == 8603)
        ADVANCE(31);
      if (lookahead == 8604)
        ADVANCE(31);
      if (lookahead == 8605)
        ADVANCE(31);
      if (lookahead == 8606)
        ADVANCE(31);
      if (lookahead == 8608)
        ADVANCE(31);
      if (lookahead == 8610)
        ADVANCE(31);
      if (lookahead == 8611)
        ADVANCE(31);
      if (lookahead == 8612)
        ADVANCE(31);
      if (lookahead == 8614)
        ADVANCE(31);
      if (lookahead == 8617)
        ADVANCE(31);
      if (lookahead == 8618)
        ADVANCE(31);
      if (lookahead == 8619)
        ADVANCE(31);
      if (lookahead == 8620)
        ADVANCE(31);
      if (lookahead == 8622)
        ADVANCE(31);
      if (lookahead == 8636)
        ADVANCE(31);
      if (lookahead == 8637)
        ADVANCE(31);
      if (lookahead == 8640)
        ADVANCE(31);
      if (lookahead == 8641)
        ADVANCE(31);
      if (lookahead == 8644)
        ADVANCE(31);
      if (lookahead == 8646)
        ADVANCE(31);
      if (lookahead == 8647)
        ADVANCE(31);
      if (lookahead == 8649)
        ADVANCE(31);
      if (lookahead == 8651)
        ADVANCE(31);
      if (lookahead == 8652)
        ADVANCE(31);
      if (lookahead == 8653)
        ADVANCE(31);
      if (lookahead == 8654)
        ADVANCE(31);
      if (lookahead == 8655)
        ADVANCE(31);
      if (lookahead == 8656)
        ADVANCE(31);
      if (lookahead == 8658)
        ADVANCE(31);
      if (lookahead == 8660)
        ADVANCE(31);
      if (lookahead == 8666)
        ADVANCE(31);
      if (lookahead == 8667)
        ADVANCE(31);
      if (lookahead == 8668)
        ADVANCE(31);
      if (lookahead == 8669)
        ADVANCE(31);
      if (lookahead == 8672)
        ADVANCE(31);
      if (lookahead == 8674)
        ADVANCE(31);
      if (lookahead == 8692)
        ADVANCE(31);
      if (lookahead == 8694)
        ADVANCE(31);
      if (lookahead == 8695)
        ADVANCE(31);
      if (lookahead == 8696)
        ADVANCE(31);
      if (lookahead == 8697)
        ADVANCE(31);
      if (lookahead == 8698)
        ADVANCE(31);
      if (lookahead == 8699)
        ADVANCE(31);
      if (lookahead == 8700)
        ADVANCE(31);
      if (lookahead == 8701)
        ADVANCE(31);
      if (lookahead == 8702)
        ADVANCE(31);
      if (lookahead == 8703)
        ADVANCE(31);
      if (lookahead == 8723)
        ADVANCE(30);
      if (lookahead == 8724)
        ADVANCE(30);
      if (lookahead == 8727)
        ADVANCE(18);
      if (lookahead == 8728)
        ADVANCE(18);
      if (lookahead == 8729)
        ADVANCE(18);
      if (lookahead == 8740)
        ADVANCE(18);
      if (lookahead == 8743)
        ADVANCE(18);
      if (lookahead == 8744)
        ADVANCE(30);
      if (lookahead == 8745)
        ADVANCE(18);
      if (lookahead == 8746)
        ADVANCE(30);
      if (lookahead == 8760)
        ADVANCE(30);
      if (lookahead == 8768)
        ADVANCE(18);
      if (lookahead == 8770)
        ADVANCE(30);
      if (lookahead == 8783)
        ADVANCE(30);
      if (lookahead == 8788)
        ADVANCE(29);
      if (lookahead == 8789)
        ADVANCE(29);
      if (lookahead == 8845)
        ADVANCE(18);
      if (lookahead == 8846)
        ADVANCE(30);
      if (lookahead == 8851)
        ADVANCE(18);
      if (lookahead == 8852)
        ADVANCE(30);
      if (lookahead == 8853)
        ADVANCE(30);
      if (lookahead == 8854)
        ADVANCE(30);
      if (lookahead == 8855)
        ADVANCE(18);
      if (lookahead == 8856)
        ADVANCE(18);
      if (lookahead == 8857)
        ADVANCE(18);
      if (lookahead == 8858)
        ADVANCE(18);
      if (lookahead == 8859)
        ADVANCE(18);
      if (lookahead == 8862)
        ADVANCE(30);
      if (lookahead == 8863)
        ADVANCE(30);
      if (lookahead == 8864)
        ADVANCE(18);
      if (lookahead == 8865)
        ADVANCE(18);
      if (lookahead == 8891)
        ADVANCE(4);
      if (lookahead == 8892)
        ADVANCE(18);
      if (lookahead == 8893)
        ADVANCE(30);
      if (lookahead == 8900)
        ADVANCE(18);
      if (lookahead == 8901)
        ADVANCE(18);
      if (lookahead == 8902)
        ADVANCE(18);
      if (lookahead == 8903)
        ADVANCE(18);
      if (lookahead == 8905)
        ADVANCE(18);
      if (lookahead == 8906)
        ADVANCE(18);
      if (lookahead == 8907)
        ADVANCE(18);
      if (lookahead == 8908)
        ADVANCE(18);
      if (lookahead == 8910)
        ADVANCE(30);
      if (lookahead == 8911)
        ADVANCE(18);
      if (lookahead == 8914)
        ADVANCE(18);
      if (lookahead == 8915)
        ADVANCE(30);
      if (lookahead == 9655)
        ADVANCE(18);
      if (lookahead == 10193)
        ADVANCE(18);
      if (lookahead == 10197)
        ADVANCE(18);
      if (lookahead == 10198)
        ADVANCE(18);
      if (lookahead == 10199)
        ADVANCE(18);
      if (lookahead == 10229)
        ADVANCE(31);
      if (lookahead == 10230)
        ADVANCE(31);
      if (lookahead == 10231)
        ADVANCE(31);
      if (lookahead == 10233)
        ADVANCE(31);
      if (lookahead == 10234)
        ADVANCE(31);
      if (lookahead == 10235)
        ADVANCE(31);
      if (lookahead == 10236)
        ADVANCE(31);
      if (lookahead == 10237)
        ADVANCE(31);
      if (lookahead == 10238)
        ADVANCE(31);
      if (lookahead == 10239)
        ADVANCE(31);
      if (lookahead == 10496)
        ADVANCE(31);
      if (lookahead == 10497)
        ADVANCE(31);
      if (lookahead == 10498)
        ADVANCE(31);
      if (lookahead == 10499)
        ADVANCE(31);
      if (lookahead == 10500)
        ADVANCE(31);
      if (lookahead == 10501)
        ADVANCE(31);
      if (lookahead == 10502)
        ADVANCE(31);
      if (lookahead == 10503)
        ADVANCE(31);
      if (lookahead == 10508)
        ADVANCE(31);
      if (lookahead == 10509)
        ADVANCE(31);
      if (lookahead == 10510)
        ADVANCE(31);
      if (lookahead == 10511)
        ADVANCE(31);
      if (lookahead == 10512)
        ADVANCE(31);
      if (lookahead == 10513)
        ADVANCE(31);
      if (lookahead == 10516)
        ADVANCE(31);
      if (lookahead == 10517)
        ADVANCE(31);
      if (lookahead == 10518)
        ADVANCE(31);
      if (lookahead == 10519)
        ADVANCE(31);
      if (lookahead == 10520)
        ADVANCE(31);
      if (lookahead == 10525)
        ADVANCE(31);
      if (lookahead == 10526)
        ADVANCE(31);
      if (lookahead == 10527)
        ADVANCE(31);
      if (lookahead == 10528)
        ADVANCE(31);
      if (lookahead == 10564)
        ADVANCE(31);
      if (lookahead == 10565)
        ADVANCE(31);
      if (lookahead == 10566)
        ADVANCE(31);
      if (lookahead == 10567)
        ADVANCE(31);
      if (lookahead == 10568)
        ADVANCE(31);
      if (lookahead == 10570)
        ADVANCE(31);
      if (lookahead == 10571)
        ADVANCE(31);
      if (lookahead == 10574)
        ADVANCE(31);
      if (lookahead == 10576)
        ADVANCE(31);
      if (lookahead == 10578)
        ADVANCE(31);
      if (lookahead == 10579)
        ADVANCE(31);
      if (lookahead == 10582)
        ADVANCE(31);
      if (lookahead == 10583)
        ADVANCE(31);
      if (lookahead == 10586)
        ADVANCE(31);
      if (lookahead == 10587)
        ADVANCE(31);
      if (lookahead == 10590)
        ADVANCE(31);
      if (lookahead == 10591)
        ADVANCE(31);
      if (lookahead == 10594)
        ADVANCE(31);
      if (lookahead == 10596)
        ADVANCE(31);
      if (lookahead == 10598)
        ADVANCE(31);
      if (lookahead == 10599)
        ADVANCE(31);
      if (lookahead == 10600)
        ADVANCE(31);
      if (lookahead == 10601)
        ADVANCE(31);
      if (lookahead == 10602)
        ADVANCE(31);
      if (lookahead == 10603)
        ADVANCE(31);
      if (lookahead == 10604)
        ADVANCE(31);
      if (lookahead == 10605)
        ADVANCE(31);
      if (lookahead == 10608)
        ADVANCE(31);
      if (lookahead == 10680)
        ADVANCE(18);
      if (lookahead == 10684)
        ADVANCE(18);
      if (lookahead == 10686)
        ADVANCE(18);
      if (lookahead == 10687)
        ADVANCE(18);
      if (lookahead == 10740)
        ADVANCE(31);
      if (lookahead == 10742)
        ADVANCE(18);
      if (lookahead == 10743)
        ADVANCE(18);
      if (lookahead == 10746)
        ADVANCE(30);
      if (lookahead == 10747)
        ADVANCE(30);
      if (lookahead == 10759)
        ADVANCE(18);
      if (lookahead == 10760)
        ADVANCE(30);
      if (lookahead == 10781)
        ADVANCE(18);
      if (lookahead == 10786)
        ADVANCE(30);
      if (lookahead == 10787)
        ADVANCE(30);
      if (lookahead == 10788)
        ADVANCE(30);
      if (lookahead == 10789)
        ADVANCE(30);
      if (lookahead == 10790)
        ADVANCE(30);
      if (lookahead == 10791)
        ADVANCE(30);
      if (lookahead == 10792)
        ADVANCE(30);
      if (lookahead == 10793)
        ADVANCE(30);
      if (lookahead == 10794)
        ADVANCE(30);
      if (lookahead == 10795)
        ADVANCE(30);
      if (lookahead == 10796)
        ADVANCE(30);
      if (lookahead == 10797)
        ADVANCE(30);
      if (lookahead == 10798)
        ADVANCE(30);
      if (lookahead == 10800)
        ADVANCE(18);
      if (lookahead == 10801)
        ADVANCE(18);
      if (lookahead == 10802)
        ADVANCE(18);
      if (lookahead == 10803)
        ADVANCE(18);
      if (lookahead == 10804)
        ADVANCE(18);
      if (lookahead == 10805)
        ADVANCE(18);
      if (lookahead == 10806)
        ADVANCE(18);
      if (lookahead == 10807)
        ADVANCE(18);
      if (lookahead == 10808)
        ADVANCE(18);
      if (lookahead == 10809)
        ADVANCE(30);
      if (lookahead == 10810)
        ADVANCE(30);
      if (lookahead == 10811)
        ADVANCE(18);
      if (lookahead == 10812)
        ADVANCE(18);
      if (lookahead == 10813)
        ADVANCE(18);
      if (lookahead == 10816)
        ADVANCE(18);
      if (lookahead == 10817)
        ADVANCE(30);
      if (lookahead == 10818)
        ADVANCE(30);
      if (lookahead == 10819)
        ADVANCE(18);
      if (lookahead == 10820)
        ADVANCE(18);
      if (lookahead == 10821)
        ADVANCE(30);
      if (lookahead == 10826)
        ADVANCE(30);
      if (lookahead == 10827)
        ADVANCE(18);
      if (lookahead == 10828)
        ADVANCE(30);
      if (lookahead == 10829)
        ADVANCE(18);
      if (lookahead == 10830)
        ADVANCE(18);
      if (lookahead == 10831)
        ADVANCE(30);
      if (lookahead == 10832)
        ADVANCE(30);
      if (lookahead == 10833)
        ADVANCE(18);
      if (lookahead == 10834)
        ADVANCE(30);
      if (lookahead == 10835)
        ADVANCE(18);
      if (lookahead == 10836)
        ADVANCE(30);
      if (lookahead == 10837)
        ADVANCE(18);
      if (lookahead == 10838)
        ADVANCE(30);
      if (lookahead == 10839)
        ADVANCE(30);
      if (lookahead == 10840)
        ADVANCE(18);
      if (lookahead == 10842)
        ADVANCE(18);
      if (lookahead == 10843)
        ADVANCE(30);
      if (lookahead == 10844)
        ADVANCE(18);
      if (lookahead == 10845)
        ADVANCE(30);
      if (lookahead == 10846)
        ADVANCE(18);
      if (lookahead == 10847)
        ADVANCE(18);
      if (lookahead == 10848)
        ADVANCE(18);
      if (lookahead == 10849)
        ADVANCE(30);
      if (lookahead == 10850)
        ADVANCE(30);
      if (lookahead == 10851)
        ADVANCE(30);
      if (lookahead == 10868)
        ADVANCE(29);
      if (lookahead == 10971)
        ADVANCE(18);
      if (lookahead == 11056)
        ADVANCE(31);
      if (lookahead == 11057)
        ADVANCE(31);
      if (lookahead == 11058)
        ADVANCE(31);
      if (lookahead == 11059)
        ADVANCE(31);
      if (lookahead == 11060)
        ADVANCE(31);
      if (lookahead == 11061)
        ADVANCE(31);
      if (lookahead == 11062)
        ADVANCE(31);
      if (lookahead == 11063)
        ADVANCE(31);
      if (lookahead == 11064)
        ADVANCE(31);
      if (lookahead == 11065)
        ADVANCE(31);
      if (lookahead == 11066)
        ADVANCE(31);
      if (lookahead == 11067)
        ADVANCE(31);
      if (lookahead == 11068)
        ADVANCE(31);
      if (lookahead == 11069)
        ADVANCE(31);
      if (lookahead == 11070)
        ADVANCE(31);
      if (lookahead == 11071)
        ADVANCE(31);
      if (lookahead == 11072)
        ADVANCE(31);
      if (lookahead == 11073)
        ADVANCE(31);
      if (lookahead == 11074)
        ADVANCE(31);
      if (lookahead == 11075)
        ADVANCE(31);
      if (lookahead == 11076)
        ADVANCE(31);
      if (lookahead == 11079)
        ADVANCE(31);
      if (lookahead == 11080)
        ADVANCE(31);
      if (lookahead == 11081)
        ADVANCE(31);
      if (lookahead == 11082)
        ADVANCE(31);
      if (lookahead == 11083)
        ADVANCE(31);
      if (lookahead == 11084)
        ADVANCE(31);
      if (lookahead == 65513)
        ADVANCE(31);
      if (lookahead == 65515)
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(32);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == '"')
        ADVANCE(35);
      if (lookahead == '\\')
        ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym__plus_operator);
      if (lookahead == '=')
        ADVANCE(29);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym__times_operator);
      if (lookahead == '=')
        ADVANCE(29);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym__times_operator);
      if (lookahead == '&')
        ADVANCE(37);
      if (lookahead == '=')
        ADVANCE(29);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym__plus_operator);
      if (lookahead == '-')
        ADVANCE(38);
      if (lookahead == '=')
        ADVANCE(29);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == '<')
        ADVANCE(39);
      if (lookahead == '=')
        ADVANCE(29);
      if (lookahead == '>')
        ADVANCE(17);
      if (lookahead == '\\')
        ADVANCE(18);
      if (lookahead == '^')
        ADVANCE(19);
      if (lookahead == '|')
        ADVANCE(40);
      if (lookahead == 177)
        ADVANCE(30);
      if (lookahead == 215)
        ADVANCE(18);
      if (lookahead == 247)
        ADVANCE(5);
      if (lookahead == 8523)
        ADVANCE(18);
      if (lookahead == 8592)
        ADVANCE(31);
      if (lookahead == 8594)
        ADVANCE(31);
      if (lookahead == 8596)
        ADVANCE(31);
      if (lookahead == 8602)
        ADVANCE(31);
      if (lookahead == 8603)
        ADVANCE(31);
      if (lookahead == 8604)
        ADVANCE(31);
      if (lookahead == 8605)
        ADVANCE(31);
      if (lookahead == 8606)
        ADVANCE(31);
      if (lookahead == 8608)
        ADVANCE(31);
      if (lookahead == 8610)
        ADVANCE(31);
      if (lookahead == 8611)
        ADVANCE(31);
      if (lookahead == 8612)
        ADVANCE(31);
      if (lookahead == 8614)
        ADVANCE(31);
      if (lookahead == 8617)
        ADVANCE(31);
      if (lookahead == 8618)
        ADVANCE(31);
      if (lookahead == 8619)
        ADVANCE(31);
      if (lookahead == 8620)
        ADVANCE(31);
      if (lookahead == 8622)
        ADVANCE(31);
      if (lookahead == 8636)
        ADVANCE(31);
      if (lookahead == 8637)
        ADVANCE(31);
      if (lookahead == 8640)
        ADVANCE(31);
      if (lookahead == 8641)
        ADVANCE(31);
      if (lookahead == 8644)
        ADVANCE(31);
      if (lookahead == 8646)
        ADVANCE(31);
      if (lookahead == 8647)
        ADVANCE(31);
      if (lookahead == 8649)
        ADVANCE(31);
      if (lookahead == 8651)
        ADVANCE(31);
      if (lookahead == 8652)
        ADVANCE(31);
      if (lookahead == 8653)
        ADVANCE(31);
      if (lookahead == 8654)
        ADVANCE(31);
      if (lookahead == 8655)
        ADVANCE(31);
      if (lookahead == 8656)
        ADVANCE(31);
      if (lookahead == 8658)
        ADVANCE(31);
      if (lookahead == 8660)
        ADVANCE(31);
      if (lookahead == 8666)
        ADVANCE(31);
      if (lookahead == 8667)
        ADVANCE(31);
      if (lookahead == 8668)
        ADVANCE(31);
      if (lookahead == 8669)
        ADVANCE(31);
      if (lookahead == 8672)
        ADVANCE(31);
      if (lookahead == 8674)
        ADVANCE(31);
      if (lookahead == 8692)
        ADVANCE(31);
      if (lookahead == 8694)
        ADVANCE(31);
      if (lookahead == 8695)
        ADVANCE(31);
      if (lookahead == 8696)
        ADVANCE(31);
      if (lookahead == 8697)
        ADVANCE(31);
      if (lookahead == 8698)
        ADVANCE(31);
      if (lookahead == 8699)
        ADVANCE(31);
      if (lookahead == 8700)
        ADVANCE(31);
      if (lookahead == 8701)
        ADVANCE(31);
      if (lookahead == 8702)
        ADVANCE(31);
      if (lookahead == 8703)
        ADVANCE(31);
      if (lookahead == 8723)
        ADVANCE(30);
      if (lookahead == 8724)
        ADVANCE(30);
      if (lookahead == 8727)
        ADVANCE(18);
      if (lookahead == 8728)
        ADVANCE(18);
      if (lookahead == 8729)
        ADVANCE(18);
      if (lookahead == 8740)
        ADVANCE(18);
      if (lookahead == 8743)
        ADVANCE(18);
      if (lookahead == 8744)
        ADVANCE(30);
      if (lookahead == 8745)
        ADVANCE(18);
      if (lookahead == 8746)
        ADVANCE(30);
      if (lookahead == 8760)
        ADVANCE(30);
      if (lookahead == 8768)
        ADVANCE(18);
      if (lookahead == 8770)
        ADVANCE(30);
      if (lookahead == 8783)
        ADVANCE(30);
      if (lookahead == 8788)
        ADVANCE(29);
      if (lookahead == 8789)
        ADVANCE(29);
      if (lookahead == 8845)
        ADVANCE(18);
      if (lookahead == 8846)
        ADVANCE(30);
      if (lookahead == 8851)
        ADVANCE(18);
      if (lookahead == 8852)
        ADVANCE(30);
      if (lookahead == 8853)
        ADVANCE(30);
      if (lookahead == 8854)
        ADVANCE(30);
      if (lookahead == 8855)
        ADVANCE(18);
      if (lookahead == 8856)
        ADVANCE(18);
      if (lookahead == 8857)
        ADVANCE(18);
      if (lookahead == 8858)
        ADVANCE(18);
      if (lookahead == 8859)
        ADVANCE(18);
      if (lookahead == 8862)
        ADVANCE(30);
      if (lookahead == 8863)
        ADVANCE(30);
      if (lookahead == 8864)
        ADVANCE(18);
      if (lookahead == 8865)
        ADVANCE(18);
      if (lookahead == 8891)
        ADVANCE(4);
      if (lookahead == 8892)
        ADVANCE(18);
      if (lookahead == 8893)
        ADVANCE(30);
      if (lookahead == 8900)
        ADVANCE(18);
      if (lookahead == 8901)
        ADVANCE(18);
      if (lookahead == 8902)
        ADVANCE(18);
      if (lookahead == 8903)
        ADVANCE(18);
      if (lookahead == 8905)
        ADVANCE(18);
      if (lookahead == 8906)
        ADVANCE(18);
      if (lookahead == 8907)
        ADVANCE(18);
      if (lookahead == 8908)
        ADVANCE(18);
      if (lookahead == 8910)
        ADVANCE(30);
      if (lookahead == 8911)
        ADVANCE(18);
      if (lookahead == 8914)
        ADVANCE(18);
      if (lookahead == 8915)
        ADVANCE(30);
      if (lookahead == 9655)
        ADVANCE(18);
      if (lookahead == 10193)
        ADVANCE(18);
      if (lookahead == 10197)
        ADVANCE(18);
      if (lookahead == 10198)
        ADVANCE(18);
      if (lookahead == 10199)
        ADVANCE(18);
      if (lookahead == 10229)
        ADVANCE(31);
      if (lookahead == 10230)
        ADVANCE(31);
      if (lookahead == 10231)
        ADVANCE(31);
      if (lookahead == 10233)
        ADVANCE(31);
      if (lookahead == 10234)
        ADVANCE(31);
      if (lookahead == 10235)
        ADVANCE(31);
      if (lookahead == 10236)
        ADVANCE(31);
      if (lookahead == 10237)
        ADVANCE(31);
      if (lookahead == 10238)
        ADVANCE(31);
      if (lookahead == 10239)
        ADVANCE(31);
      if (lookahead == 10496)
        ADVANCE(31);
      if (lookahead == 10497)
        ADVANCE(31);
      if (lookahead == 10498)
        ADVANCE(31);
      if (lookahead == 10499)
        ADVANCE(31);
      if (lookahead == 10500)
        ADVANCE(31);
      if (lookahead == 10501)
        ADVANCE(31);
      if (lookahead == 10502)
        ADVANCE(31);
      if (lookahead == 10503)
        ADVANCE(31);
      if (lookahead == 10508)
        ADVANCE(31);
      if (lookahead == 10509)
        ADVANCE(31);
      if (lookahead == 10510)
        ADVANCE(31);
      if (lookahead == 10511)
        ADVANCE(31);
      if (lookahead == 10512)
        ADVANCE(31);
      if (lookahead == 10513)
        ADVANCE(31);
      if (lookahead == 10516)
        ADVANCE(31);
      if (lookahead == 10517)
        ADVANCE(31);
      if (lookahead == 10518)
        ADVANCE(31);
      if (lookahead == 10519)
        ADVANCE(31);
      if (lookahead == 10520)
        ADVANCE(31);
      if (lookahead == 10525)
        ADVANCE(31);
      if (lookahead == 10526)
        ADVANCE(31);
      if (lookahead == 10527)
        ADVANCE(31);
      if (lookahead == 10528)
        ADVANCE(31);
      if (lookahead == 10564)
        ADVANCE(31);
      if (lookahead == 10565)
        ADVANCE(31);
      if (lookahead == 10566)
        ADVANCE(31);
      if (lookahead == 10567)
        ADVANCE(31);
      if (lookahead == 10568)
        ADVANCE(31);
      if (lookahead == 10570)
        ADVANCE(31);
      if (lookahead == 10571)
        ADVANCE(31);
      if (lookahead == 10574)
        ADVANCE(31);
      if (lookahead == 10576)
        ADVANCE(31);
      if (lookahead == 10578)
        ADVANCE(31);
      if (lookahead == 10579)
        ADVANCE(31);
      if (lookahead == 10582)
        ADVANCE(31);
      if (lookahead == 10583)
        ADVANCE(31);
      if (lookahead == 10586)
        ADVANCE(31);
      if (lookahead == 10587)
        ADVANCE(31);
      if (lookahead == 10590)
        ADVANCE(31);
      if (lookahead == 10591)
        ADVANCE(31);
      if (lookahead == 10594)
        ADVANCE(31);
      if (lookahead == 10596)
        ADVANCE(31);
      if (lookahead == 10598)
        ADVANCE(31);
      if (lookahead == 10599)
        ADVANCE(31);
      if (lookahead == 10600)
        ADVANCE(31);
      if (lookahead == 10601)
        ADVANCE(31);
      if (lookahead == 10602)
        ADVANCE(31);
      if (lookahead == 10603)
        ADVANCE(31);
      if (lookahead == 10604)
        ADVANCE(31);
      if (lookahead == 10605)
        ADVANCE(31);
      if (lookahead == 10608)
        ADVANCE(31);
      if (lookahead == 10680)
        ADVANCE(18);
      if (lookahead == 10684)
        ADVANCE(18);
      if (lookahead == 10686)
        ADVANCE(18);
      if (lookahead == 10687)
        ADVANCE(18);
      if (lookahead == 10740)
        ADVANCE(31);
      if (lookahead == 10742)
        ADVANCE(18);
      if (lookahead == 10743)
        ADVANCE(18);
      if (lookahead == 10746)
        ADVANCE(30);
      if (lookahead == 10747)
        ADVANCE(30);
      if (lookahead == 10759)
        ADVANCE(18);
      if (lookahead == 10760)
        ADVANCE(30);
      if (lookahead == 10781)
        ADVANCE(18);
      if (lookahead == 10786)
        ADVANCE(30);
      if (lookahead == 10787)
        ADVANCE(30);
      if (lookahead == 10788)
        ADVANCE(30);
      if (lookahead == 10789)
        ADVANCE(30);
      if (lookahead == 10790)
        ADVANCE(30);
      if (lookahead == 10791)
        ADVANCE(30);
      if (lookahead == 10792)
        ADVANCE(30);
      if (lookahead == 10793)
        ADVANCE(30);
      if (lookahead == 10794)
        ADVANCE(30);
      if (lookahead == 10795)
        ADVANCE(30);
      if (lookahead == 10796)
        ADVANCE(30);
      if (lookahead == 10797)
        ADVANCE(30);
      if (lookahead == 10798)
        ADVANCE(30);
      if (lookahead == 10800)
        ADVANCE(18);
      if (lookahead == 10801)
        ADVANCE(18);
      if (lookahead == 10802)
        ADVANCE(18);
      if (lookahead == 10803)
        ADVANCE(18);
      if (lookahead == 10804)
        ADVANCE(18);
      if (lookahead == 10805)
        ADVANCE(18);
      if (lookahead == 10806)
        ADVANCE(18);
      if (lookahead == 10807)
        ADVANCE(18);
      if (lookahead == 10808)
        ADVANCE(18);
      if (lookahead == 10809)
        ADVANCE(30);
      if (lookahead == 10810)
        ADVANCE(30);
      if (lookahead == 10811)
        ADVANCE(18);
      if (lookahead == 10812)
        ADVANCE(18);
      if (lookahead == 10813)
        ADVANCE(18);
      if (lookahead == 10816)
        ADVANCE(18);
      if (lookahead == 10817)
        ADVANCE(30);
      if (lookahead == 10818)
        ADVANCE(30);
      if (lookahead == 10819)
        ADVANCE(18);
      if (lookahead == 10820)
        ADVANCE(18);
      if (lookahead == 10821)
        ADVANCE(30);
      if (lookahead == 10826)
        ADVANCE(30);
      if (lookahead == 10827)
        ADVANCE(18);
      if (lookahead == 10828)
        ADVANCE(30);
      if (lookahead == 10829)
        ADVANCE(18);
      if (lookahead == 10830)
        ADVANCE(18);
      if (lookahead == 10831)
        ADVANCE(30);
      if (lookahead == 10832)
        ADVANCE(30);
      if (lookahead == 10833)
        ADVANCE(18);
      if (lookahead == 10834)
        ADVANCE(30);
      if (lookahead == 10835)
        ADVANCE(18);
      if (lookahead == 10836)
        ADVANCE(30);
      if (lookahead == 10837)
        ADVANCE(18);
      if (lookahead == 10838)
        ADVANCE(30);
      if (lookahead == 10839)
        ADVANCE(30);
      if (lookahead == 10840)
        ADVANCE(18);
      if (lookahead == 10842)
        ADVANCE(18);
      if (lookahead == 10843)
        ADVANCE(30);
      if (lookahead == 10844)
        ADVANCE(18);
      if (lookahead == 10845)
        ADVANCE(30);
      if (lookahead == 10846)
        ADVANCE(18);
      if (lookahead == 10847)
        ADVANCE(18);
      if (lookahead == 10848)
        ADVANCE(18);
      if (lookahead == 10849)
        ADVANCE(30);
      if (lookahead == 10850)
        ADVANCE(30);
      if (lookahead == 10851)
        ADVANCE(30);
      if (lookahead == 10868)
        ADVANCE(29);
      if (lookahead == 10971)
        ADVANCE(18);
      if (lookahead == 11056)
        ADVANCE(31);
      if (lookahead == 11057)
        ADVANCE(31);
      if (lookahead == 11058)
        ADVANCE(31);
      if (lookahead == 11059)
        ADVANCE(31);
      if (lookahead == 11060)
        ADVANCE(31);
      if (lookahead == 11061)
        ADVANCE(31);
      if (lookahead == 11062)
        ADVANCE(31);
      if (lookahead == 11063)
        ADVANCE(31);
      if (lookahead == 11064)
        ADVANCE(31);
      if (lookahead == 11065)
        ADVANCE(31);
      if (lookahead == 11066)
        ADVANCE(31);
      if (lookahead == 11067)
        ADVANCE(31);
      if (lookahead == 11068)
        ADVANCE(31);
      if (lookahead == 11069)
        ADVANCE(31);
      if (lookahead == 11070)
        ADVANCE(31);
      if (lookahead == 11071)
        ADVANCE(31);
      if (lookahead == 11072)
        ADVANCE(31);
      if (lookahead == 11073)
        ADVANCE(31);
      if (lookahead == 11074)
        ADVANCE(31);
      if (lookahead == 11075)
        ADVANCE(31);
      if (lookahead == 11076)
        ADVANCE(31);
      if (lookahead == 11079)
        ADVANCE(31);
      if (lookahead == 11080)
        ADVANCE(31);
      if (lookahead == 11081)
        ADVANCE(31);
      if (lookahead == 11082)
        ADVANCE(31);
      if (lookahead == 11083)
        ADVANCE(31);
      if (lookahead == 11084)
        ADVANCE(31);
      if (lookahead == 65513)
        ADVANCE(31);
      if (lookahead == 65515)
        ADVANCE(31);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym__times_operator);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '=')
        ADVANCE(29);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == '=')
        ADVANCE(29);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 15:
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(19);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__assign_operator);
      if (lookahead == '>')
        ADVANCE(43);
      END_STATE();
    case 17:
      if (lookahead == '>')
        ADVANCE(44);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__times_operator);
      END_STATE();
    case 19:
      if (lookahead == '=')
        ADVANCE(29);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(45);
      if (lookahead == 'n')
        ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
        ADVANCE(48);
      if (lookahead == 'm')
        ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(50);
      if (lookahead == 'u')
        ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 27:
      if (lookahead == '+')
        ADVANCE(54);
      if (lookahead == '=')
        ADVANCE(55);
      if (lookahead == '|')
        ADVANCE(56);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__assign_operator);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__plus_operator);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__arrow_operator);
      END_STATE();
    case 32:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(4);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == ':')
        ADVANCE(57);
      if (lookahead == ';')
        ADVANCE(14);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(16);
      if (lookahead == '>')
        ADVANCE(17);
      if (lookahead == '\\')
        ADVANCE(18);
      if (lookahead == '^')
        ADVANCE(19);
      if (lookahead == 'e')
        ADVANCE(20);
      if (lookahead == 'f')
        ADVANCE(21);
      if (lookahead == 'i')
        ADVANCE(22);
      if (lookahead == 'm')
        ADVANCE(23);
      if (lookahead == 's')
        ADVANCE(24);
      if (lookahead == 'u')
        ADVANCE(25);
      if (lookahead == '{')
        ADVANCE(26);
      if (lookahead == '|')
        ADVANCE(27);
      if (lookahead == '}')
        ADVANCE(28);
      if (lookahead == '~')
        ADVANCE(29);
      if (lookahead == 177)
        ADVANCE(30);
      if (lookahead == 215)
        ADVANCE(18);
      if (lookahead == 247)
        ADVANCE(5);
      if (lookahead == 8523)
        ADVANCE(18);
      if (lookahead == 8592)
        ADVANCE(31);
      if (lookahead == 8594)
        ADVANCE(31);
      if (lookahead == 8596)
        ADVANCE(31);
      if (lookahead == 8602)
        ADVANCE(31);
      if (lookahead == 8603)
        ADVANCE(31);
      if (lookahead == 8604)
        ADVANCE(31);
      if (lookahead == 8605)
        ADVANCE(31);
      if (lookahead == 8606)
        ADVANCE(31);
      if (lookahead == 8608)
        ADVANCE(31);
      if (lookahead == 8610)
        ADVANCE(31);
      if (lookahead == 8611)
        ADVANCE(31);
      if (lookahead == 8612)
        ADVANCE(31);
      if (lookahead == 8614)
        ADVANCE(31);
      if (lookahead == 8617)
        ADVANCE(31);
      if (lookahead == 8618)
        ADVANCE(31);
      if (lookahead == 8619)
        ADVANCE(31);
      if (lookahead == 8620)
        ADVANCE(31);
      if (lookahead == 8622)
        ADVANCE(31);
      if (lookahead == 8636)
        ADVANCE(31);
      if (lookahead == 8637)
        ADVANCE(31);
      if (lookahead == 8640)
        ADVANCE(31);
      if (lookahead == 8641)
        ADVANCE(31);
      if (lookahead == 8644)
        ADVANCE(31);
      if (lookahead == 8646)
        ADVANCE(31);
      if (lookahead == 8647)
        ADVANCE(31);
      if (lookahead == 8649)
        ADVANCE(31);
      if (lookahead == 8651)
        ADVANCE(31);
      if (lookahead == 8652)
        ADVANCE(31);
      if (lookahead == 8653)
        ADVANCE(31);
      if (lookahead == 8654)
        ADVANCE(31);
      if (lookahead == 8655)
        ADVANCE(31);
      if (lookahead == 8656)
        ADVANCE(31);
      if (lookahead == 8658)
        ADVANCE(31);
      if (lookahead == 8660)
        ADVANCE(31);
      if (lookahead == 8666)
        ADVANCE(31);
      if (lookahead == 8667)
        ADVANCE(31);
      if (lookahead == 8668)
        ADVANCE(31);
      if (lookahead == 8669)
        ADVANCE(31);
      if (lookahead == 8672)
        ADVANCE(31);
      if (lookahead == 8674)
        ADVANCE(31);
      if (lookahead == 8692)
        ADVANCE(31);
      if (lookahead == 8694)
        ADVANCE(31);
      if (lookahead == 8695)
        ADVANCE(31);
      if (lookahead == 8696)
        ADVANCE(31);
      if (lookahead == 8697)
        ADVANCE(31);
      if (lookahead == 8698)
        ADVANCE(31);
      if (lookahead == 8699)
        ADVANCE(31);
      if (lookahead == 8700)
        ADVANCE(31);
      if (lookahead == 8701)
        ADVANCE(31);
      if (lookahead == 8702)
        ADVANCE(31);
      if (lookahead == 8703)
        ADVANCE(31);
      if (lookahead == 8723)
        ADVANCE(30);
      if (lookahead == 8724)
        ADVANCE(30);
      if (lookahead == 8727)
        ADVANCE(18);
      if (lookahead == 8728)
        ADVANCE(18);
      if (lookahead == 8729)
        ADVANCE(18);
      if (lookahead == 8740)
        ADVANCE(18);
      if (lookahead == 8743)
        ADVANCE(18);
      if (lookahead == 8744)
        ADVANCE(30);
      if (lookahead == 8745)
        ADVANCE(18);
      if (lookahead == 8746)
        ADVANCE(30);
      if (lookahead == 8760)
        ADVANCE(30);
      if (lookahead == 8768)
        ADVANCE(18);
      if (lookahead == 8770)
        ADVANCE(30);
      if (lookahead == 8783)
        ADVANCE(30);
      if (lookahead == 8788)
        ADVANCE(29);
      if (lookahead == 8789)
        ADVANCE(29);
      if (lookahead == 8845)
        ADVANCE(18);
      if (lookahead == 8846)
        ADVANCE(30);
      if (lookahead == 8851)
        ADVANCE(18);
      if (lookahead == 8852)
        ADVANCE(30);
      if (lookahead == 8853)
        ADVANCE(30);
      if (lookahead == 8854)
        ADVANCE(30);
      if (lookahead == 8855)
        ADVANCE(18);
      if (lookahead == 8856)
        ADVANCE(18);
      if (lookahead == 8857)
        ADVANCE(18);
      if (lookahead == 8858)
        ADVANCE(18);
      if (lookahead == 8859)
        ADVANCE(18);
      if (lookahead == 8862)
        ADVANCE(30);
      if (lookahead == 8863)
        ADVANCE(30);
      if (lookahead == 8864)
        ADVANCE(18);
      if (lookahead == 8865)
        ADVANCE(18);
      if (lookahead == 8891)
        ADVANCE(4);
      if (lookahead == 8892)
        ADVANCE(18);
      if (lookahead == 8893)
        ADVANCE(30);
      if (lookahead == 8900)
        ADVANCE(18);
      if (lookahead == 8901)
        ADVANCE(18);
      if (lookahead == 8902)
        ADVANCE(18);
      if (lookahead == 8903)
        ADVANCE(18);
      if (lookahead == 8905)
        ADVANCE(18);
      if (lookahead == 8906)
        ADVANCE(18);
      if (lookahead == 8907)
        ADVANCE(18);
      if (lookahead == 8908)
        ADVANCE(18);
      if (lookahead == 8910)
        ADVANCE(30);
      if (lookahead == 8911)
        ADVANCE(18);
      if (lookahead == 8914)
        ADVANCE(18);
      if (lookahead == 8915)
        ADVANCE(30);
      if (lookahead == 9655)
        ADVANCE(18);
      if (lookahead == 10193)
        ADVANCE(18);
      if (lookahead == 10197)
        ADVANCE(18);
      if (lookahead == 10198)
        ADVANCE(18);
      if (lookahead == 10199)
        ADVANCE(18);
      if (lookahead == 10229)
        ADVANCE(31);
      if (lookahead == 10230)
        ADVANCE(31);
      if (lookahead == 10231)
        ADVANCE(31);
      if (lookahead == 10233)
        ADVANCE(31);
      if (lookahead == 10234)
        ADVANCE(31);
      if (lookahead == 10235)
        ADVANCE(31);
      if (lookahead == 10236)
        ADVANCE(31);
      if (lookahead == 10237)
        ADVANCE(31);
      if (lookahead == 10238)
        ADVANCE(31);
      if (lookahead == 10239)
        ADVANCE(31);
      if (lookahead == 10496)
        ADVANCE(31);
      if (lookahead == 10497)
        ADVANCE(31);
      if (lookahead == 10498)
        ADVANCE(31);
      if (lookahead == 10499)
        ADVANCE(31);
      if (lookahead == 10500)
        ADVANCE(31);
      if (lookahead == 10501)
        ADVANCE(31);
      if (lookahead == 10502)
        ADVANCE(31);
      if (lookahead == 10503)
        ADVANCE(31);
      if (lookahead == 10508)
        ADVANCE(31);
      if (lookahead == 10509)
        ADVANCE(31);
      if (lookahead == 10510)
        ADVANCE(31);
      if (lookahead == 10511)
        ADVANCE(31);
      if (lookahead == 10512)
        ADVANCE(31);
      if (lookahead == 10513)
        ADVANCE(31);
      if (lookahead == 10516)
        ADVANCE(31);
      if (lookahead == 10517)
        ADVANCE(31);
      if (lookahead == 10518)
        ADVANCE(31);
      if (lookahead == 10519)
        ADVANCE(31);
      if (lookahead == 10520)
        ADVANCE(31);
      if (lookahead == 10525)
        ADVANCE(31);
      if (lookahead == 10526)
        ADVANCE(31);
      if (lookahead == 10527)
        ADVANCE(31);
      if (lookahead == 10528)
        ADVANCE(31);
      if (lookahead == 10564)
        ADVANCE(31);
      if (lookahead == 10565)
        ADVANCE(31);
      if (lookahead == 10566)
        ADVANCE(31);
      if (lookahead == 10567)
        ADVANCE(31);
      if (lookahead == 10568)
        ADVANCE(31);
      if (lookahead == 10570)
        ADVANCE(31);
      if (lookahead == 10571)
        ADVANCE(31);
      if (lookahead == 10574)
        ADVANCE(31);
      if (lookahead == 10576)
        ADVANCE(31);
      if (lookahead == 10578)
        ADVANCE(31);
      if (lookahead == 10579)
        ADVANCE(31);
      if (lookahead == 10582)
        ADVANCE(31);
      if (lookahead == 10583)
        ADVANCE(31);
      if (lookahead == 10586)
        ADVANCE(31);
      if (lookahead == 10587)
        ADVANCE(31);
      if (lookahead == 10590)
        ADVANCE(31);
      if (lookahead == 10591)
        ADVANCE(31);
      if (lookahead == 10594)
        ADVANCE(31);
      if (lookahead == 10596)
        ADVANCE(31);
      if (lookahead == 10598)
        ADVANCE(31);
      if (lookahead == 10599)
        ADVANCE(31);
      if (lookahead == 10600)
        ADVANCE(31);
      if (lookahead == 10601)
        ADVANCE(31);
      if (lookahead == 10602)
        ADVANCE(31);
      if (lookahead == 10603)
        ADVANCE(31);
      if (lookahead == 10604)
        ADVANCE(31);
      if (lookahead == 10605)
        ADVANCE(31);
      if (lookahead == 10608)
        ADVANCE(31);
      if (lookahead == 10680)
        ADVANCE(18);
      if (lookahead == 10684)
        ADVANCE(18);
      if (lookahead == 10686)
        ADVANCE(18);
      if (lookahead == 10687)
        ADVANCE(18);
      if (lookahead == 10740)
        ADVANCE(31);
      if (lookahead == 10742)
        ADVANCE(18);
      if (lookahead == 10743)
        ADVANCE(18);
      if (lookahead == 10746)
        ADVANCE(30);
      if (lookahead == 10747)
        ADVANCE(30);
      if (lookahead == 10759)
        ADVANCE(18);
      if (lookahead == 10760)
        ADVANCE(30);
      if (lookahead == 10781)
        ADVANCE(18);
      if (lookahead == 10786)
        ADVANCE(30);
      if (lookahead == 10787)
        ADVANCE(30);
      if (lookahead == 10788)
        ADVANCE(30);
      if (lookahead == 10789)
        ADVANCE(30);
      if (lookahead == 10790)
        ADVANCE(30);
      if (lookahead == 10791)
        ADVANCE(30);
      if (lookahead == 10792)
        ADVANCE(30);
      if (lookahead == 10793)
        ADVANCE(30);
      if (lookahead == 10794)
        ADVANCE(30);
      if (lookahead == 10795)
        ADVANCE(30);
      if (lookahead == 10796)
        ADVANCE(30);
      if (lookahead == 10797)
        ADVANCE(30);
      if (lookahead == 10798)
        ADVANCE(30);
      if (lookahead == 10800)
        ADVANCE(18);
      if (lookahead == 10801)
        ADVANCE(18);
      if (lookahead == 10802)
        ADVANCE(18);
      if (lookahead == 10803)
        ADVANCE(18);
      if (lookahead == 10804)
        ADVANCE(18);
      if (lookahead == 10805)
        ADVANCE(18);
      if (lookahead == 10806)
        ADVANCE(18);
      if (lookahead == 10807)
        ADVANCE(18);
      if (lookahead == 10808)
        ADVANCE(18);
      if (lookahead == 10809)
        ADVANCE(30);
      if (lookahead == 10810)
        ADVANCE(30);
      if (lookahead == 10811)
        ADVANCE(18);
      if (lookahead == 10812)
        ADVANCE(18);
      if (lookahead == 10813)
        ADVANCE(18);
      if (lookahead == 10816)
        ADVANCE(18);
      if (lookahead == 10817)
        ADVANCE(30);
      if (lookahead == 10818)
        ADVANCE(30);
      if (lookahead == 10819)
        ADVANCE(18);
      if (lookahead == 10820)
        ADVANCE(18);
      if (lookahead == 10821)
        ADVANCE(30);
      if (lookahead == 10826)
        ADVANCE(30);
      if (lookahead == 10827)
        ADVANCE(18);
      if (lookahead == 10828)
        ADVANCE(30);
      if (lookahead == 10829)
        ADVANCE(18);
      if (lookahead == 10830)
        ADVANCE(18);
      if (lookahead == 10831)
        ADVANCE(30);
      if (lookahead == 10832)
        ADVANCE(30);
      if (lookahead == 10833)
        ADVANCE(18);
      if (lookahead == 10834)
        ADVANCE(30);
      if (lookahead == 10835)
        ADVANCE(18);
      if (lookahead == 10836)
        ADVANCE(30);
      if (lookahead == 10837)
        ADVANCE(18);
      if (lookahead == 10838)
        ADVANCE(30);
      if (lookahead == 10839)
        ADVANCE(30);
      if (lookahead == 10840)
        ADVANCE(18);
      if (lookahead == 10842)
        ADVANCE(18);
      if (lookahead == 10843)
        ADVANCE(30);
      if (lookahead == 10844)
        ADVANCE(18);
      if (lookahead == 10845)
        ADVANCE(30);
      if (lookahead == 10846)
        ADVANCE(18);
      if (lookahead == 10847)
        ADVANCE(18);
      if (lookahead == 10848)
        ADVANCE(18);
      if (lookahead == 10849)
        ADVANCE(30);
      if (lookahead == 10850)
        ADVANCE(30);
      if (lookahead == 10851)
        ADVANCE(30);
      if (lookahead == 10868)
        ADVANCE(29);
      if (lookahead == 10971)
        ADVANCE(18);
      if (lookahead == 11056)
        ADVANCE(31);
      if (lookahead == 11057)
        ADVANCE(31);
      if (lookahead == 11058)
        ADVANCE(31);
      if (lookahead == 11059)
        ADVANCE(31);
      if (lookahead == 11060)
        ADVANCE(31);
      if (lookahead == 11061)
        ADVANCE(31);
      if (lookahead == 11062)
        ADVANCE(31);
      if (lookahead == 11063)
        ADVANCE(31);
      if (lookahead == 11064)
        ADVANCE(31);
      if (lookahead == 11065)
        ADVANCE(31);
      if (lookahead == 11066)
        ADVANCE(31);
      if (lookahead == 11067)
        ADVANCE(31);
      if (lookahead == 11068)
        ADVANCE(31);
      if (lookahead == 11069)
        ADVANCE(31);
      if (lookahead == 11070)
        ADVANCE(31);
      if (lookahead == 11071)
        ADVANCE(31);
      if (lookahead == 11072)
        ADVANCE(31);
      if (lookahead == 11073)
        ADVANCE(31);
      if (lookahead == 11074)
        ADVANCE(31);
      if (lookahead == 11075)
        ADVANCE(31);
      if (lookahead == 11076)
        ADVANCE(31);
      if (lookahead == 11079)
        ADVANCE(31);
      if (lookahead == 11080)
        ADVANCE(31);
      if (lookahead == 11081)
        ADVANCE(31);
      if (lookahead == 11082)
        ADVANCE(31);
      if (lookahead == 11083)
        ADVANCE(31);
      if (lookahead == 11084)
        ADVANCE(31);
      if (lookahead == 65513)
        ADVANCE(31);
      if (lookahead == 65515)
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(32);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 36:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__arrow_operator);
      if (lookahead == '>')
        ADVANCE(31);
      END_STATE();
    case 39:
      if (lookahead == '<')
        ADVANCE(19);
      END_STATE();
    case 40:
      if (lookahead == '+')
        ADVANCE(54);
      if (lookahead == '=')
        ADVANCE(55);
      if (lookahead == '|')
        ADVANCE(58);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 44:
      if (lookahead == '=')
        ADVANCE(29);
      if (lookahead == '>')
        ADVANCE(19);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p')
        ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 54:
      if (lookahead == '+')
        ADVANCE(67);
      END_STATE();
    case 55:
      if (lookahead == '|')
        ADVANCE(29);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      if (lookahead == '=')
        ADVANCE(55);
      if (lookahead == '|')
        ADVANCE(30);
      END_STATE();
    case 57:
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == '=')
        ADVANCE(29);
      END_STATE();
    case 58:
      if (lookahead == '=')
        ADVANCE(55);
      if (lookahead == '|')
        ADVANCE(30);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 67:
      if (lookahead == '|')
        ADVANCE(30);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i')
        ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b')
        ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g')
        ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
        ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_using);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_module);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_mutable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_function);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 91:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(4);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == ':')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(16);
      if (lookahead == '>')
        ADVANCE(17);
      if (lookahead == '\\')
        ADVANCE(18);
      if (lookahead == '^')
        ADVANCE(19);
      if (lookahead == 'f')
        ADVANCE(21);
      if (lookahead == 'i')
        ADVANCE(22);
      if (lookahead == 'm')
        ADVANCE(23);
      if (lookahead == 's')
        ADVANCE(24);
      if (lookahead == 'u')
        ADVANCE(25);
      if (lookahead == '|')
        ADVANCE(27);
      if (lookahead == '~')
        ADVANCE(29);
      if (lookahead == 177)
        ADVANCE(30);
      if (lookahead == 215)
        ADVANCE(18);
      if (lookahead == 247)
        ADVANCE(5);
      if (lookahead == 8523)
        ADVANCE(18);
      if (lookahead == 8592)
        ADVANCE(31);
      if (lookahead == 8594)
        ADVANCE(31);
      if (lookahead == 8596)
        ADVANCE(31);
      if (lookahead == 8602)
        ADVANCE(31);
      if (lookahead == 8603)
        ADVANCE(31);
      if (lookahead == 8604)
        ADVANCE(31);
      if (lookahead == 8605)
        ADVANCE(31);
      if (lookahead == 8606)
        ADVANCE(31);
      if (lookahead == 8608)
        ADVANCE(31);
      if (lookahead == 8610)
        ADVANCE(31);
      if (lookahead == 8611)
        ADVANCE(31);
      if (lookahead == 8612)
        ADVANCE(31);
      if (lookahead == 8614)
        ADVANCE(31);
      if (lookahead == 8617)
        ADVANCE(31);
      if (lookahead == 8618)
        ADVANCE(31);
      if (lookahead == 8619)
        ADVANCE(31);
      if (lookahead == 8620)
        ADVANCE(31);
      if (lookahead == 8622)
        ADVANCE(31);
      if (lookahead == 8636)
        ADVANCE(31);
      if (lookahead == 8637)
        ADVANCE(31);
      if (lookahead == 8640)
        ADVANCE(31);
      if (lookahead == 8641)
        ADVANCE(31);
      if (lookahead == 8644)
        ADVANCE(31);
      if (lookahead == 8646)
        ADVANCE(31);
      if (lookahead == 8647)
        ADVANCE(31);
      if (lookahead == 8649)
        ADVANCE(31);
      if (lookahead == 8651)
        ADVANCE(31);
      if (lookahead == 8652)
        ADVANCE(31);
      if (lookahead == 8653)
        ADVANCE(31);
      if (lookahead == 8654)
        ADVANCE(31);
      if (lookahead == 8655)
        ADVANCE(31);
      if (lookahead == 8656)
        ADVANCE(31);
      if (lookahead == 8658)
        ADVANCE(31);
      if (lookahead == 8660)
        ADVANCE(31);
      if (lookahead == 8666)
        ADVANCE(31);
      if (lookahead == 8667)
        ADVANCE(31);
      if (lookahead == 8668)
        ADVANCE(31);
      if (lookahead == 8669)
        ADVANCE(31);
      if (lookahead == 8672)
        ADVANCE(31);
      if (lookahead == 8674)
        ADVANCE(31);
      if (lookahead == 8692)
        ADVANCE(31);
      if (lookahead == 8694)
        ADVANCE(31);
      if (lookahead == 8695)
        ADVANCE(31);
      if (lookahead == 8696)
        ADVANCE(31);
      if (lookahead == 8697)
        ADVANCE(31);
      if (lookahead == 8698)
        ADVANCE(31);
      if (lookahead == 8699)
        ADVANCE(31);
      if (lookahead == 8700)
        ADVANCE(31);
      if (lookahead == 8701)
        ADVANCE(31);
      if (lookahead == 8702)
        ADVANCE(31);
      if (lookahead == 8703)
        ADVANCE(31);
      if (lookahead == 8723)
        ADVANCE(30);
      if (lookahead == 8724)
        ADVANCE(30);
      if (lookahead == 8727)
        ADVANCE(18);
      if (lookahead == 8728)
        ADVANCE(18);
      if (lookahead == 8729)
        ADVANCE(18);
      if (lookahead == 8740)
        ADVANCE(18);
      if (lookahead == 8743)
        ADVANCE(18);
      if (lookahead == 8744)
        ADVANCE(30);
      if (lookahead == 8745)
        ADVANCE(18);
      if (lookahead == 8746)
        ADVANCE(30);
      if (lookahead == 8760)
        ADVANCE(30);
      if (lookahead == 8768)
        ADVANCE(18);
      if (lookahead == 8770)
        ADVANCE(30);
      if (lookahead == 8783)
        ADVANCE(30);
      if (lookahead == 8788)
        ADVANCE(29);
      if (lookahead == 8789)
        ADVANCE(29);
      if (lookahead == 8845)
        ADVANCE(18);
      if (lookahead == 8846)
        ADVANCE(30);
      if (lookahead == 8851)
        ADVANCE(18);
      if (lookahead == 8852)
        ADVANCE(30);
      if (lookahead == 8853)
        ADVANCE(30);
      if (lookahead == 8854)
        ADVANCE(30);
      if (lookahead == 8855)
        ADVANCE(18);
      if (lookahead == 8856)
        ADVANCE(18);
      if (lookahead == 8857)
        ADVANCE(18);
      if (lookahead == 8858)
        ADVANCE(18);
      if (lookahead == 8859)
        ADVANCE(18);
      if (lookahead == 8862)
        ADVANCE(30);
      if (lookahead == 8863)
        ADVANCE(30);
      if (lookahead == 8864)
        ADVANCE(18);
      if (lookahead == 8865)
        ADVANCE(18);
      if (lookahead == 8891)
        ADVANCE(4);
      if (lookahead == 8892)
        ADVANCE(18);
      if (lookahead == 8893)
        ADVANCE(30);
      if (lookahead == 8900)
        ADVANCE(18);
      if (lookahead == 8901)
        ADVANCE(18);
      if (lookahead == 8902)
        ADVANCE(18);
      if (lookahead == 8903)
        ADVANCE(18);
      if (lookahead == 8905)
        ADVANCE(18);
      if (lookahead == 8906)
        ADVANCE(18);
      if (lookahead == 8907)
        ADVANCE(18);
      if (lookahead == 8908)
        ADVANCE(18);
      if (lookahead == 8910)
        ADVANCE(30);
      if (lookahead == 8911)
        ADVANCE(18);
      if (lookahead == 8914)
        ADVANCE(18);
      if (lookahead == 8915)
        ADVANCE(30);
      if (lookahead == 9655)
        ADVANCE(18);
      if (lookahead == 10193)
        ADVANCE(18);
      if (lookahead == 10197)
        ADVANCE(18);
      if (lookahead == 10198)
        ADVANCE(18);
      if (lookahead == 10199)
        ADVANCE(18);
      if (lookahead == 10229)
        ADVANCE(31);
      if (lookahead == 10230)
        ADVANCE(31);
      if (lookahead == 10231)
        ADVANCE(31);
      if (lookahead == 10233)
        ADVANCE(31);
      if (lookahead == 10234)
        ADVANCE(31);
      if (lookahead == 10235)
        ADVANCE(31);
      if (lookahead == 10236)
        ADVANCE(31);
      if (lookahead == 10237)
        ADVANCE(31);
      if (lookahead == 10238)
        ADVANCE(31);
      if (lookahead == 10239)
        ADVANCE(31);
      if (lookahead == 10496)
        ADVANCE(31);
      if (lookahead == 10497)
        ADVANCE(31);
      if (lookahead == 10498)
        ADVANCE(31);
      if (lookahead == 10499)
        ADVANCE(31);
      if (lookahead == 10500)
        ADVANCE(31);
      if (lookahead == 10501)
        ADVANCE(31);
      if (lookahead == 10502)
        ADVANCE(31);
      if (lookahead == 10503)
        ADVANCE(31);
      if (lookahead == 10508)
        ADVANCE(31);
      if (lookahead == 10509)
        ADVANCE(31);
      if (lookahead == 10510)
        ADVANCE(31);
      if (lookahead == 10511)
        ADVANCE(31);
      if (lookahead == 10512)
        ADVANCE(31);
      if (lookahead == 10513)
        ADVANCE(31);
      if (lookahead == 10516)
        ADVANCE(31);
      if (lookahead == 10517)
        ADVANCE(31);
      if (lookahead == 10518)
        ADVANCE(31);
      if (lookahead == 10519)
        ADVANCE(31);
      if (lookahead == 10520)
        ADVANCE(31);
      if (lookahead == 10525)
        ADVANCE(31);
      if (lookahead == 10526)
        ADVANCE(31);
      if (lookahead == 10527)
        ADVANCE(31);
      if (lookahead == 10528)
        ADVANCE(31);
      if (lookahead == 10564)
        ADVANCE(31);
      if (lookahead == 10565)
        ADVANCE(31);
      if (lookahead == 10566)
        ADVANCE(31);
      if (lookahead == 10567)
        ADVANCE(31);
      if (lookahead == 10568)
        ADVANCE(31);
      if (lookahead == 10570)
        ADVANCE(31);
      if (lookahead == 10571)
        ADVANCE(31);
      if (lookahead == 10574)
        ADVANCE(31);
      if (lookahead == 10576)
        ADVANCE(31);
      if (lookahead == 10578)
        ADVANCE(31);
      if (lookahead == 10579)
        ADVANCE(31);
      if (lookahead == 10582)
        ADVANCE(31);
      if (lookahead == 10583)
        ADVANCE(31);
      if (lookahead == 10586)
        ADVANCE(31);
      if (lookahead == 10587)
        ADVANCE(31);
      if (lookahead == 10590)
        ADVANCE(31);
      if (lookahead == 10591)
        ADVANCE(31);
      if (lookahead == 10594)
        ADVANCE(31);
      if (lookahead == 10596)
        ADVANCE(31);
      if (lookahead == 10598)
        ADVANCE(31);
      if (lookahead == 10599)
        ADVANCE(31);
      if (lookahead == 10600)
        ADVANCE(31);
      if (lookahead == 10601)
        ADVANCE(31);
      if (lookahead == 10602)
        ADVANCE(31);
      if (lookahead == 10603)
        ADVANCE(31);
      if (lookahead == 10604)
        ADVANCE(31);
      if (lookahead == 10605)
        ADVANCE(31);
      if (lookahead == 10608)
        ADVANCE(31);
      if (lookahead == 10680)
        ADVANCE(18);
      if (lookahead == 10684)
        ADVANCE(18);
      if (lookahead == 10686)
        ADVANCE(18);
      if (lookahead == 10687)
        ADVANCE(18);
      if (lookahead == 10740)
        ADVANCE(31);
      if (lookahead == 10742)
        ADVANCE(18);
      if (lookahead == 10743)
        ADVANCE(18);
      if (lookahead == 10746)
        ADVANCE(30);
      if (lookahead == 10747)
        ADVANCE(30);
      if (lookahead == 10759)
        ADVANCE(18);
      if (lookahead == 10760)
        ADVANCE(30);
      if (lookahead == 10781)
        ADVANCE(18);
      if (lookahead == 10786)
        ADVANCE(30);
      if (lookahead == 10787)
        ADVANCE(30);
      if (lookahead == 10788)
        ADVANCE(30);
      if (lookahead == 10789)
        ADVANCE(30);
      if (lookahead == 10790)
        ADVANCE(30);
      if (lookahead == 10791)
        ADVANCE(30);
      if (lookahead == 10792)
        ADVANCE(30);
      if (lookahead == 10793)
        ADVANCE(30);
      if (lookahead == 10794)
        ADVANCE(30);
      if (lookahead == 10795)
        ADVANCE(30);
      if (lookahead == 10796)
        ADVANCE(30);
      if (lookahead == 10797)
        ADVANCE(30);
      if (lookahead == 10798)
        ADVANCE(30);
      if (lookahead == 10800)
        ADVANCE(18);
      if (lookahead == 10801)
        ADVANCE(18);
      if (lookahead == 10802)
        ADVANCE(18);
      if (lookahead == 10803)
        ADVANCE(18);
      if (lookahead == 10804)
        ADVANCE(18);
      if (lookahead == 10805)
        ADVANCE(18);
      if (lookahead == 10806)
        ADVANCE(18);
      if (lookahead == 10807)
        ADVANCE(18);
      if (lookahead == 10808)
        ADVANCE(18);
      if (lookahead == 10809)
        ADVANCE(30);
      if (lookahead == 10810)
        ADVANCE(30);
      if (lookahead == 10811)
        ADVANCE(18);
      if (lookahead == 10812)
        ADVANCE(18);
      if (lookahead == 10813)
        ADVANCE(18);
      if (lookahead == 10816)
        ADVANCE(18);
      if (lookahead == 10817)
        ADVANCE(30);
      if (lookahead == 10818)
        ADVANCE(30);
      if (lookahead == 10819)
        ADVANCE(18);
      if (lookahead == 10820)
        ADVANCE(18);
      if (lookahead == 10821)
        ADVANCE(30);
      if (lookahead == 10826)
        ADVANCE(30);
      if (lookahead == 10827)
        ADVANCE(18);
      if (lookahead == 10828)
        ADVANCE(30);
      if (lookahead == 10829)
        ADVANCE(18);
      if (lookahead == 10830)
        ADVANCE(18);
      if (lookahead == 10831)
        ADVANCE(30);
      if (lookahead == 10832)
        ADVANCE(30);
      if (lookahead == 10833)
        ADVANCE(18);
      if (lookahead == 10834)
        ADVANCE(30);
      if (lookahead == 10835)
        ADVANCE(18);
      if (lookahead == 10836)
        ADVANCE(30);
      if (lookahead == 10837)
        ADVANCE(18);
      if (lookahead == 10838)
        ADVANCE(30);
      if (lookahead == 10839)
        ADVANCE(30);
      if (lookahead == 10840)
        ADVANCE(18);
      if (lookahead == 10842)
        ADVANCE(18);
      if (lookahead == 10843)
        ADVANCE(30);
      if (lookahead == 10844)
        ADVANCE(18);
      if (lookahead == 10845)
        ADVANCE(30);
      if (lookahead == 10846)
        ADVANCE(18);
      if (lookahead == 10847)
        ADVANCE(18);
      if (lookahead == 10848)
        ADVANCE(18);
      if (lookahead == 10849)
        ADVANCE(30);
      if (lookahead == 10850)
        ADVANCE(30);
      if (lookahead == 10851)
        ADVANCE(30);
      if (lookahead == 10868)
        ADVANCE(29);
      if (lookahead == 10971)
        ADVANCE(18);
      if (lookahead == 11056)
        ADVANCE(31);
      if (lookahead == 11057)
        ADVANCE(31);
      if (lookahead == 11058)
        ADVANCE(31);
      if (lookahead == 11059)
        ADVANCE(31);
      if (lookahead == 11060)
        ADVANCE(31);
      if (lookahead == 11061)
        ADVANCE(31);
      if (lookahead == 11062)
        ADVANCE(31);
      if (lookahead == 11063)
        ADVANCE(31);
      if (lookahead == 11064)
        ADVANCE(31);
      if (lookahead == 11065)
        ADVANCE(31);
      if (lookahead == 11066)
        ADVANCE(31);
      if (lookahead == 11067)
        ADVANCE(31);
      if (lookahead == 11068)
        ADVANCE(31);
      if (lookahead == 11069)
        ADVANCE(31);
      if (lookahead == 11070)
        ADVANCE(31);
      if (lookahead == 11071)
        ADVANCE(31);
      if (lookahead == 11072)
        ADVANCE(31);
      if (lookahead == 11073)
        ADVANCE(31);
      if (lookahead == 11074)
        ADVANCE(31);
      if (lookahead == 11075)
        ADVANCE(31);
      if (lookahead == 11076)
        ADVANCE(31);
      if (lookahead == 11079)
        ADVANCE(31);
      if (lookahead == 11080)
        ADVANCE(31);
      if (lookahead == 11081)
        ADVANCE(31);
      if (lookahead == 11082)
        ADVANCE(31);
      if (lookahead == 11083)
        ADVANCE(31);
      if (lookahead == 11084)
        ADVANCE(31);
      if (lookahead == 65513)
        ADVANCE(31);
      if (lookahead == 65515)
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(92);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 92:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(4);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == ':')
        ADVANCE(57);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(16);
      if (lookahead == '>')
        ADVANCE(17);
      if (lookahead == '\\')
        ADVANCE(18);
      if (lookahead == '^')
        ADVANCE(19);
      if (lookahead == 'f')
        ADVANCE(21);
      if (lookahead == 'i')
        ADVANCE(22);
      if (lookahead == 'm')
        ADVANCE(23);
      if (lookahead == 's')
        ADVANCE(24);
      if (lookahead == 'u')
        ADVANCE(25);
      if (lookahead == '|')
        ADVANCE(27);
      if (lookahead == '~')
        ADVANCE(29);
      if (lookahead == 177)
        ADVANCE(30);
      if (lookahead == 215)
        ADVANCE(18);
      if (lookahead == 247)
        ADVANCE(5);
      if (lookahead == 8523)
        ADVANCE(18);
      if (lookahead == 8592)
        ADVANCE(31);
      if (lookahead == 8594)
        ADVANCE(31);
      if (lookahead == 8596)
        ADVANCE(31);
      if (lookahead == 8602)
        ADVANCE(31);
      if (lookahead == 8603)
        ADVANCE(31);
      if (lookahead == 8604)
        ADVANCE(31);
      if (lookahead == 8605)
        ADVANCE(31);
      if (lookahead == 8606)
        ADVANCE(31);
      if (lookahead == 8608)
        ADVANCE(31);
      if (lookahead == 8610)
        ADVANCE(31);
      if (lookahead == 8611)
        ADVANCE(31);
      if (lookahead == 8612)
        ADVANCE(31);
      if (lookahead == 8614)
        ADVANCE(31);
      if (lookahead == 8617)
        ADVANCE(31);
      if (lookahead == 8618)
        ADVANCE(31);
      if (lookahead == 8619)
        ADVANCE(31);
      if (lookahead == 8620)
        ADVANCE(31);
      if (lookahead == 8622)
        ADVANCE(31);
      if (lookahead == 8636)
        ADVANCE(31);
      if (lookahead == 8637)
        ADVANCE(31);
      if (lookahead == 8640)
        ADVANCE(31);
      if (lookahead == 8641)
        ADVANCE(31);
      if (lookahead == 8644)
        ADVANCE(31);
      if (lookahead == 8646)
        ADVANCE(31);
      if (lookahead == 8647)
        ADVANCE(31);
      if (lookahead == 8649)
        ADVANCE(31);
      if (lookahead == 8651)
        ADVANCE(31);
      if (lookahead == 8652)
        ADVANCE(31);
      if (lookahead == 8653)
        ADVANCE(31);
      if (lookahead == 8654)
        ADVANCE(31);
      if (lookahead == 8655)
        ADVANCE(31);
      if (lookahead == 8656)
        ADVANCE(31);
      if (lookahead == 8658)
        ADVANCE(31);
      if (lookahead == 8660)
        ADVANCE(31);
      if (lookahead == 8666)
        ADVANCE(31);
      if (lookahead == 8667)
        ADVANCE(31);
      if (lookahead == 8668)
        ADVANCE(31);
      if (lookahead == 8669)
        ADVANCE(31);
      if (lookahead == 8672)
        ADVANCE(31);
      if (lookahead == 8674)
        ADVANCE(31);
      if (lookahead == 8692)
        ADVANCE(31);
      if (lookahead == 8694)
        ADVANCE(31);
      if (lookahead == 8695)
        ADVANCE(31);
      if (lookahead == 8696)
        ADVANCE(31);
      if (lookahead == 8697)
        ADVANCE(31);
      if (lookahead == 8698)
        ADVANCE(31);
      if (lookahead == 8699)
        ADVANCE(31);
      if (lookahead == 8700)
        ADVANCE(31);
      if (lookahead == 8701)
        ADVANCE(31);
      if (lookahead == 8702)
        ADVANCE(31);
      if (lookahead == 8703)
        ADVANCE(31);
      if (lookahead == 8723)
        ADVANCE(30);
      if (lookahead == 8724)
        ADVANCE(30);
      if (lookahead == 8727)
        ADVANCE(18);
      if (lookahead == 8728)
        ADVANCE(18);
      if (lookahead == 8729)
        ADVANCE(18);
      if (lookahead == 8740)
        ADVANCE(18);
      if (lookahead == 8743)
        ADVANCE(18);
      if (lookahead == 8744)
        ADVANCE(30);
      if (lookahead == 8745)
        ADVANCE(18);
      if (lookahead == 8746)
        ADVANCE(30);
      if (lookahead == 8760)
        ADVANCE(30);
      if (lookahead == 8768)
        ADVANCE(18);
      if (lookahead == 8770)
        ADVANCE(30);
      if (lookahead == 8783)
        ADVANCE(30);
      if (lookahead == 8788)
        ADVANCE(29);
      if (lookahead == 8789)
        ADVANCE(29);
      if (lookahead == 8845)
        ADVANCE(18);
      if (lookahead == 8846)
        ADVANCE(30);
      if (lookahead == 8851)
        ADVANCE(18);
      if (lookahead == 8852)
        ADVANCE(30);
      if (lookahead == 8853)
        ADVANCE(30);
      if (lookahead == 8854)
        ADVANCE(30);
      if (lookahead == 8855)
        ADVANCE(18);
      if (lookahead == 8856)
        ADVANCE(18);
      if (lookahead == 8857)
        ADVANCE(18);
      if (lookahead == 8858)
        ADVANCE(18);
      if (lookahead == 8859)
        ADVANCE(18);
      if (lookahead == 8862)
        ADVANCE(30);
      if (lookahead == 8863)
        ADVANCE(30);
      if (lookahead == 8864)
        ADVANCE(18);
      if (lookahead == 8865)
        ADVANCE(18);
      if (lookahead == 8891)
        ADVANCE(4);
      if (lookahead == 8892)
        ADVANCE(18);
      if (lookahead == 8893)
        ADVANCE(30);
      if (lookahead == 8900)
        ADVANCE(18);
      if (lookahead == 8901)
        ADVANCE(18);
      if (lookahead == 8902)
        ADVANCE(18);
      if (lookahead == 8903)
        ADVANCE(18);
      if (lookahead == 8905)
        ADVANCE(18);
      if (lookahead == 8906)
        ADVANCE(18);
      if (lookahead == 8907)
        ADVANCE(18);
      if (lookahead == 8908)
        ADVANCE(18);
      if (lookahead == 8910)
        ADVANCE(30);
      if (lookahead == 8911)
        ADVANCE(18);
      if (lookahead == 8914)
        ADVANCE(18);
      if (lookahead == 8915)
        ADVANCE(30);
      if (lookahead == 9655)
        ADVANCE(18);
      if (lookahead == 10193)
        ADVANCE(18);
      if (lookahead == 10197)
        ADVANCE(18);
      if (lookahead == 10198)
        ADVANCE(18);
      if (lookahead == 10199)
        ADVANCE(18);
      if (lookahead == 10229)
        ADVANCE(31);
      if (lookahead == 10230)
        ADVANCE(31);
      if (lookahead == 10231)
        ADVANCE(31);
      if (lookahead == 10233)
        ADVANCE(31);
      if (lookahead == 10234)
        ADVANCE(31);
      if (lookahead == 10235)
        ADVANCE(31);
      if (lookahead == 10236)
        ADVANCE(31);
      if (lookahead == 10237)
        ADVANCE(31);
      if (lookahead == 10238)
        ADVANCE(31);
      if (lookahead == 10239)
        ADVANCE(31);
      if (lookahead == 10496)
        ADVANCE(31);
      if (lookahead == 10497)
        ADVANCE(31);
      if (lookahead == 10498)
        ADVANCE(31);
      if (lookahead == 10499)
        ADVANCE(31);
      if (lookahead == 10500)
        ADVANCE(31);
      if (lookahead == 10501)
        ADVANCE(31);
      if (lookahead == 10502)
        ADVANCE(31);
      if (lookahead == 10503)
        ADVANCE(31);
      if (lookahead == 10508)
        ADVANCE(31);
      if (lookahead == 10509)
        ADVANCE(31);
      if (lookahead == 10510)
        ADVANCE(31);
      if (lookahead == 10511)
        ADVANCE(31);
      if (lookahead == 10512)
        ADVANCE(31);
      if (lookahead == 10513)
        ADVANCE(31);
      if (lookahead == 10516)
        ADVANCE(31);
      if (lookahead == 10517)
        ADVANCE(31);
      if (lookahead == 10518)
        ADVANCE(31);
      if (lookahead == 10519)
        ADVANCE(31);
      if (lookahead == 10520)
        ADVANCE(31);
      if (lookahead == 10525)
        ADVANCE(31);
      if (lookahead == 10526)
        ADVANCE(31);
      if (lookahead == 10527)
        ADVANCE(31);
      if (lookahead == 10528)
        ADVANCE(31);
      if (lookahead == 10564)
        ADVANCE(31);
      if (lookahead == 10565)
        ADVANCE(31);
      if (lookahead == 10566)
        ADVANCE(31);
      if (lookahead == 10567)
        ADVANCE(31);
      if (lookahead == 10568)
        ADVANCE(31);
      if (lookahead == 10570)
        ADVANCE(31);
      if (lookahead == 10571)
        ADVANCE(31);
      if (lookahead == 10574)
        ADVANCE(31);
      if (lookahead == 10576)
        ADVANCE(31);
      if (lookahead == 10578)
        ADVANCE(31);
      if (lookahead == 10579)
        ADVANCE(31);
      if (lookahead == 10582)
        ADVANCE(31);
      if (lookahead == 10583)
        ADVANCE(31);
      if (lookahead == 10586)
        ADVANCE(31);
      if (lookahead == 10587)
        ADVANCE(31);
      if (lookahead == 10590)
        ADVANCE(31);
      if (lookahead == 10591)
        ADVANCE(31);
      if (lookahead == 10594)
        ADVANCE(31);
      if (lookahead == 10596)
        ADVANCE(31);
      if (lookahead == 10598)
        ADVANCE(31);
      if (lookahead == 10599)
        ADVANCE(31);
      if (lookahead == 10600)
        ADVANCE(31);
      if (lookahead == 10601)
        ADVANCE(31);
      if (lookahead == 10602)
        ADVANCE(31);
      if (lookahead == 10603)
        ADVANCE(31);
      if (lookahead == 10604)
        ADVANCE(31);
      if (lookahead == 10605)
        ADVANCE(31);
      if (lookahead == 10608)
        ADVANCE(31);
      if (lookahead == 10680)
        ADVANCE(18);
      if (lookahead == 10684)
        ADVANCE(18);
      if (lookahead == 10686)
        ADVANCE(18);
      if (lookahead == 10687)
        ADVANCE(18);
      if (lookahead == 10740)
        ADVANCE(31);
      if (lookahead == 10742)
        ADVANCE(18);
      if (lookahead == 10743)
        ADVANCE(18);
      if (lookahead == 10746)
        ADVANCE(30);
      if (lookahead == 10747)
        ADVANCE(30);
      if (lookahead == 10759)
        ADVANCE(18);
      if (lookahead == 10760)
        ADVANCE(30);
      if (lookahead == 10781)
        ADVANCE(18);
      if (lookahead == 10786)
        ADVANCE(30);
      if (lookahead == 10787)
        ADVANCE(30);
      if (lookahead == 10788)
        ADVANCE(30);
      if (lookahead == 10789)
        ADVANCE(30);
      if (lookahead == 10790)
        ADVANCE(30);
      if (lookahead == 10791)
        ADVANCE(30);
      if (lookahead == 10792)
        ADVANCE(30);
      if (lookahead == 10793)
        ADVANCE(30);
      if (lookahead == 10794)
        ADVANCE(30);
      if (lookahead == 10795)
        ADVANCE(30);
      if (lookahead == 10796)
        ADVANCE(30);
      if (lookahead == 10797)
        ADVANCE(30);
      if (lookahead == 10798)
        ADVANCE(30);
      if (lookahead == 10800)
        ADVANCE(18);
      if (lookahead == 10801)
        ADVANCE(18);
      if (lookahead == 10802)
        ADVANCE(18);
      if (lookahead == 10803)
        ADVANCE(18);
      if (lookahead == 10804)
        ADVANCE(18);
      if (lookahead == 10805)
        ADVANCE(18);
      if (lookahead == 10806)
        ADVANCE(18);
      if (lookahead == 10807)
        ADVANCE(18);
      if (lookahead == 10808)
        ADVANCE(18);
      if (lookahead == 10809)
        ADVANCE(30);
      if (lookahead == 10810)
        ADVANCE(30);
      if (lookahead == 10811)
        ADVANCE(18);
      if (lookahead == 10812)
        ADVANCE(18);
      if (lookahead == 10813)
        ADVANCE(18);
      if (lookahead == 10816)
        ADVANCE(18);
      if (lookahead == 10817)
        ADVANCE(30);
      if (lookahead == 10818)
        ADVANCE(30);
      if (lookahead == 10819)
        ADVANCE(18);
      if (lookahead == 10820)
        ADVANCE(18);
      if (lookahead == 10821)
        ADVANCE(30);
      if (lookahead == 10826)
        ADVANCE(30);
      if (lookahead == 10827)
        ADVANCE(18);
      if (lookahead == 10828)
        ADVANCE(30);
      if (lookahead == 10829)
        ADVANCE(18);
      if (lookahead == 10830)
        ADVANCE(18);
      if (lookahead == 10831)
        ADVANCE(30);
      if (lookahead == 10832)
        ADVANCE(30);
      if (lookahead == 10833)
        ADVANCE(18);
      if (lookahead == 10834)
        ADVANCE(30);
      if (lookahead == 10835)
        ADVANCE(18);
      if (lookahead == 10836)
        ADVANCE(30);
      if (lookahead == 10837)
        ADVANCE(18);
      if (lookahead == 10838)
        ADVANCE(30);
      if (lookahead == 10839)
        ADVANCE(30);
      if (lookahead == 10840)
        ADVANCE(18);
      if (lookahead == 10842)
        ADVANCE(18);
      if (lookahead == 10843)
        ADVANCE(30);
      if (lookahead == 10844)
        ADVANCE(18);
      if (lookahead == 10845)
        ADVANCE(30);
      if (lookahead == 10846)
        ADVANCE(18);
      if (lookahead == 10847)
        ADVANCE(18);
      if (lookahead == 10848)
        ADVANCE(18);
      if (lookahead == 10849)
        ADVANCE(30);
      if (lookahead == 10850)
        ADVANCE(30);
      if (lookahead == 10851)
        ADVANCE(30);
      if (lookahead == 10868)
        ADVANCE(29);
      if (lookahead == 10971)
        ADVANCE(18);
      if (lookahead == 11056)
        ADVANCE(31);
      if (lookahead == 11057)
        ADVANCE(31);
      if (lookahead == 11058)
        ADVANCE(31);
      if (lookahead == 11059)
        ADVANCE(31);
      if (lookahead == 11060)
        ADVANCE(31);
      if (lookahead == 11061)
        ADVANCE(31);
      if (lookahead == 11062)
        ADVANCE(31);
      if (lookahead == 11063)
        ADVANCE(31);
      if (lookahead == 11064)
        ADVANCE(31);
      if (lookahead == 11065)
        ADVANCE(31);
      if (lookahead == 11066)
        ADVANCE(31);
      if (lookahead == 11067)
        ADVANCE(31);
      if (lookahead == 11068)
        ADVANCE(31);
      if (lookahead == 11069)
        ADVANCE(31);
      if (lookahead == 11070)
        ADVANCE(31);
      if (lookahead == 11071)
        ADVANCE(31);
      if (lookahead == 11072)
        ADVANCE(31);
      if (lookahead == 11073)
        ADVANCE(31);
      if (lookahead == 11074)
        ADVANCE(31);
      if (lookahead == 11075)
        ADVANCE(31);
      if (lookahead == 11076)
        ADVANCE(31);
      if (lookahead == 11079)
        ADVANCE(31);
      if (lookahead == 11080)
        ADVANCE(31);
      if (lookahead == 11081)
        ADVANCE(31);
      if (lookahead == 11082)
        ADVANCE(31);
      if (lookahead == 11083)
        ADVANCE(31);
      if (lookahead == 11084)
        ADVANCE(31);
      if (lookahead == 65513)
        ADVANCE(31);
      if (lookahead == 65515)
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(92);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 93:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 94:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(95);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(4);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == ':')
        ADVANCE(57);
      if (lookahead == ';')
        ADVANCE(14);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(16);
      if (lookahead == '>')
        ADVANCE(17);
      if (lookahead == '\\')
        ADVANCE(18);
      if (lookahead == '^')
        ADVANCE(19);
      if (lookahead == 'e')
        ADVANCE(96);
      if (lookahead == '{')
        ADVANCE(26);
      if (lookahead == '|')
        ADVANCE(27);
      if (lookahead == '~')
        ADVANCE(29);
      if (lookahead == 177)
        ADVANCE(30);
      if (lookahead == 215)
        ADVANCE(18);
      if (lookahead == 247)
        ADVANCE(5);
      if (lookahead == 8523)
        ADVANCE(18);
      if (lookahead == 8592)
        ADVANCE(31);
      if (lookahead == 8594)
        ADVANCE(31);
      if (lookahead == 8596)
        ADVANCE(31);
      if (lookahead == 8602)
        ADVANCE(31);
      if (lookahead == 8603)
        ADVANCE(31);
      if (lookahead == 8604)
        ADVANCE(31);
      if (lookahead == 8605)
        ADVANCE(31);
      if (lookahead == 8606)
        ADVANCE(31);
      if (lookahead == 8608)
        ADVANCE(31);
      if (lookahead == 8610)
        ADVANCE(31);
      if (lookahead == 8611)
        ADVANCE(31);
      if (lookahead == 8612)
        ADVANCE(31);
      if (lookahead == 8614)
        ADVANCE(31);
      if (lookahead == 8617)
        ADVANCE(31);
      if (lookahead == 8618)
        ADVANCE(31);
      if (lookahead == 8619)
        ADVANCE(31);
      if (lookahead == 8620)
        ADVANCE(31);
      if (lookahead == 8622)
        ADVANCE(31);
      if (lookahead == 8636)
        ADVANCE(31);
      if (lookahead == 8637)
        ADVANCE(31);
      if (lookahead == 8640)
        ADVANCE(31);
      if (lookahead == 8641)
        ADVANCE(31);
      if (lookahead == 8644)
        ADVANCE(31);
      if (lookahead == 8646)
        ADVANCE(31);
      if (lookahead == 8647)
        ADVANCE(31);
      if (lookahead == 8649)
        ADVANCE(31);
      if (lookahead == 8651)
        ADVANCE(31);
      if (lookahead == 8652)
        ADVANCE(31);
      if (lookahead == 8653)
        ADVANCE(31);
      if (lookahead == 8654)
        ADVANCE(31);
      if (lookahead == 8655)
        ADVANCE(31);
      if (lookahead == 8656)
        ADVANCE(31);
      if (lookahead == 8658)
        ADVANCE(31);
      if (lookahead == 8660)
        ADVANCE(31);
      if (lookahead == 8666)
        ADVANCE(31);
      if (lookahead == 8667)
        ADVANCE(31);
      if (lookahead == 8668)
        ADVANCE(31);
      if (lookahead == 8669)
        ADVANCE(31);
      if (lookahead == 8672)
        ADVANCE(31);
      if (lookahead == 8674)
        ADVANCE(31);
      if (lookahead == 8692)
        ADVANCE(31);
      if (lookahead == 8694)
        ADVANCE(31);
      if (lookahead == 8695)
        ADVANCE(31);
      if (lookahead == 8696)
        ADVANCE(31);
      if (lookahead == 8697)
        ADVANCE(31);
      if (lookahead == 8698)
        ADVANCE(31);
      if (lookahead == 8699)
        ADVANCE(31);
      if (lookahead == 8700)
        ADVANCE(31);
      if (lookahead == 8701)
        ADVANCE(31);
      if (lookahead == 8702)
        ADVANCE(31);
      if (lookahead == 8703)
        ADVANCE(31);
      if (lookahead == 8723)
        ADVANCE(30);
      if (lookahead == 8724)
        ADVANCE(30);
      if (lookahead == 8727)
        ADVANCE(18);
      if (lookahead == 8728)
        ADVANCE(18);
      if (lookahead == 8729)
        ADVANCE(18);
      if (lookahead == 8740)
        ADVANCE(18);
      if (lookahead == 8743)
        ADVANCE(18);
      if (lookahead == 8744)
        ADVANCE(30);
      if (lookahead == 8745)
        ADVANCE(18);
      if (lookahead == 8746)
        ADVANCE(30);
      if (lookahead == 8760)
        ADVANCE(30);
      if (lookahead == 8768)
        ADVANCE(18);
      if (lookahead == 8770)
        ADVANCE(30);
      if (lookahead == 8783)
        ADVANCE(30);
      if (lookahead == 8788)
        ADVANCE(29);
      if (lookahead == 8789)
        ADVANCE(29);
      if (lookahead == 8845)
        ADVANCE(18);
      if (lookahead == 8846)
        ADVANCE(30);
      if (lookahead == 8851)
        ADVANCE(18);
      if (lookahead == 8852)
        ADVANCE(30);
      if (lookahead == 8853)
        ADVANCE(30);
      if (lookahead == 8854)
        ADVANCE(30);
      if (lookahead == 8855)
        ADVANCE(18);
      if (lookahead == 8856)
        ADVANCE(18);
      if (lookahead == 8857)
        ADVANCE(18);
      if (lookahead == 8858)
        ADVANCE(18);
      if (lookahead == 8859)
        ADVANCE(18);
      if (lookahead == 8862)
        ADVANCE(30);
      if (lookahead == 8863)
        ADVANCE(30);
      if (lookahead == 8864)
        ADVANCE(18);
      if (lookahead == 8865)
        ADVANCE(18);
      if (lookahead == 8891)
        ADVANCE(4);
      if (lookahead == 8892)
        ADVANCE(18);
      if (lookahead == 8893)
        ADVANCE(30);
      if (lookahead == 8900)
        ADVANCE(18);
      if (lookahead == 8901)
        ADVANCE(18);
      if (lookahead == 8902)
        ADVANCE(18);
      if (lookahead == 8903)
        ADVANCE(18);
      if (lookahead == 8905)
        ADVANCE(18);
      if (lookahead == 8906)
        ADVANCE(18);
      if (lookahead == 8907)
        ADVANCE(18);
      if (lookahead == 8908)
        ADVANCE(18);
      if (lookahead == 8910)
        ADVANCE(30);
      if (lookahead == 8911)
        ADVANCE(18);
      if (lookahead == 8914)
        ADVANCE(18);
      if (lookahead == 8915)
        ADVANCE(30);
      if (lookahead == 9655)
        ADVANCE(18);
      if (lookahead == 10193)
        ADVANCE(18);
      if (lookahead == 10197)
        ADVANCE(18);
      if (lookahead == 10198)
        ADVANCE(18);
      if (lookahead == 10199)
        ADVANCE(18);
      if (lookahead == 10229)
        ADVANCE(31);
      if (lookahead == 10230)
        ADVANCE(31);
      if (lookahead == 10231)
        ADVANCE(31);
      if (lookahead == 10233)
        ADVANCE(31);
      if (lookahead == 10234)
        ADVANCE(31);
      if (lookahead == 10235)
        ADVANCE(31);
      if (lookahead == 10236)
        ADVANCE(31);
      if (lookahead == 10237)
        ADVANCE(31);
      if (lookahead == 10238)
        ADVANCE(31);
      if (lookahead == 10239)
        ADVANCE(31);
      if (lookahead == 10496)
        ADVANCE(31);
      if (lookahead == 10497)
        ADVANCE(31);
      if (lookahead == 10498)
        ADVANCE(31);
      if (lookahead == 10499)
        ADVANCE(31);
      if (lookahead == 10500)
        ADVANCE(31);
      if (lookahead == 10501)
        ADVANCE(31);
      if (lookahead == 10502)
        ADVANCE(31);
      if (lookahead == 10503)
        ADVANCE(31);
      if (lookahead == 10508)
        ADVANCE(31);
      if (lookahead == 10509)
        ADVANCE(31);
      if (lookahead == 10510)
        ADVANCE(31);
      if (lookahead == 10511)
        ADVANCE(31);
      if (lookahead == 10512)
        ADVANCE(31);
      if (lookahead == 10513)
        ADVANCE(31);
      if (lookahead == 10516)
        ADVANCE(31);
      if (lookahead == 10517)
        ADVANCE(31);
      if (lookahead == 10518)
        ADVANCE(31);
      if (lookahead == 10519)
        ADVANCE(31);
      if (lookahead == 10520)
        ADVANCE(31);
      if (lookahead == 10525)
        ADVANCE(31);
      if (lookahead == 10526)
        ADVANCE(31);
      if (lookahead == 10527)
        ADVANCE(31);
      if (lookahead == 10528)
        ADVANCE(31);
      if (lookahead == 10564)
        ADVANCE(31);
      if (lookahead == 10565)
        ADVANCE(31);
      if (lookahead == 10566)
        ADVANCE(31);
      if (lookahead == 10567)
        ADVANCE(31);
      if (lookahead == 10568)
        ADVANCE(31);
      if (lookahead == 10570)
        ADVANCE(31);
      if (lookahead == 10571)
        ADVANCE(31);
      if (lookahead == 10574)
        ADVANCE(31);
      if (lookahead == 10576)
        ADVANCE(31);
      if (lookahead == 10578)
        ADVANCE(31);
      if (lookahead == 10579)
        ADVANCE(31);
      if (lookahead == 10582)
        ADVANCE(31);
      if (lookahead == 10583)
        ADVANCE(31);
      if (lookahead == 10586)
        ADVANCE(31);
      if (lookahead == 10587)
        ADVANCE(31);
      if (lookahead == 10590)
        ADVANCE(31);
      if (lookahead == 10591)
        ADVANCE(31);
      if (lookahead == 10594)
        ADVANCE(31);
      if (lookahead == 10596)
        ADVANCE(31);
      if (lookahead == 10598)
        ADVANCE(31);
      if (lookahead == 10599)
        ADVANCE(31);
      if (lookahead == 10600)
        ADVANCE(31);
      if (lookahead == 10601)
        ADVANCE(31);
      if (lookahead == 10602)
        ADVANCE(31);
      if (lookahead == 10603)
        ADVANCE(31);
      if (lookahead == 10604)
        ADVANCE(31);
      if (lookahead == 10605)
        ADVANCE(31);
      if (lookahead == 10608)
        ADVANCE(31);
      if (lookahead == 10680)
        ADVANCE(18);
      if (lookahead == 10684)
        ADVANCE(18);
      if (lookahead == 10686)
        ADVANCE(18);
      if (lookahead == 10687)
        ADVANCE(18);
      if (lookahead == 10740)
        ADVANCE(31);
      if (lookahead == 10742)
        ADVANCE(18);
      if (lookahead == 10743)
        ADVANCE(18);
      if (lookahead == 10746)
        ADVANCE(30);
      if (lookahead == 10747)
        ADVANCE(30);
      if (lookahead == 10759)
        ADVANCE(18);
      if (lookahead == 10760)
        ADVANCE(30);
      if (lookahead == 10781)
        ADVANCE(18);
      if (lookahead == 10786)
        ADVANCE(30);
      if (lookahead == 10787)
        ADVANCE(30);
      if (lookahead == 10788)
        ADVANCE(30);
      if (lookahead == 10789)
        ADVANCE(30);
      if (lookahead == 10790)
        ADVANCE(30);
      if (lookahead == 10791)
        ADVANCE(30);
      if (lookahead == 10792)
        ADVANCE(30);
      if (lookahead == 10793)
        ADVANCE(30);
      if (lookahead == 10794)
        ADVANCE(30);
      if (lookahead == 10795)
        ADVANCE(30);
      if (lookahead == 10796)
        ADVANCE(30);
      if (lookahead == 10797)
        ADVANCE(30);
      if (lookahead == 10798)
        ADVANCE(30);
      if (lookahead == 10800)
        ADVANCE(18);
      if (lookahead == 10801)
        ADVANCE(18);
      if (lookahead == 10802)
        ADVANCE(18);
      if (lookahead == 10803)
        ADVANCE(18);
      if (lookahead == 10804)
        ADVANCE(18);
      if (lookahead == 10805)
        ADVANCE(18);
      if (lookahead == 10806)
        ADVANCE(18);
      if (lookahead == 10807)
        ADVANCE(18);
      if (lookahead == 10808)
        ADVANCE(18);
      if (lookahead == 10809)
        ADVANCE(30);
      if (lookahead == 10810)
        ADVANCE(30);
      if (lookahead == 10811)
        ADVANCE(18);
      if (lookahead == 10812)
        ADVANCE(18);
      if (lookahead == 10813)
        ADVANCE(18);
      if (lookahead == 10816)
        ADVANCE(18);
      if (lookahead == 10817)
        ADVANCE(30);
      if (lookahead == 10818)
        ADVANCE(30);
      if (lookahead == 10819)
        ADVANCE(18);
      if (lookahead == 10820)
        ADVANCE(18);
      if (lookahead == 10821)
        ADVANCE(30);
      if (lookahead == 10826)
        ADVANCE(30);
      if (lookahead == 10827)
        ADVANCE(18);
      if (lookahead == 10828)
        ADVANCE(30);
      if (lookahead == 10829)
        ADVANCE(18);
      if (lookahead == 10830)
        ADVANCE(18);
      if (lookahead == 10831)
        ADVANCE(30);
      if (lookahead == 10832)
        ADVANCE(30);
      if (lookahead == 10833)
        ADVANCE(18);
      if (lookahead == 10834)
        ADVANCE(30);
      if (lookahead == 10835)
        ADVANCE(18);
      if (lookahead == 10836)
        ADVANCE(30);
      if (lookahead == 10837)
        ADVANCE(18);
      if (lookahead == 10838)
        ADVANCE(30);
      if (lookahead == 10839)
        ADVANCE(30);
      if (lookahead == 10840)
        ADVANCE(18);
      if (lookahead == 10842)
        ADVANCE(18);
      if (lookahead == 10843)
        ADVANCE(30);
      if (lookahead == 10844)
        ADVANCE(18);
      if (lookahead == 10845)
        ADVANCE(30);
      if (lookahead == 10846)
        ADVANCE(18);
      if (lookahead == 10847)
        ADVANCE(18);
      if (lookahead == 10848)
        ADVANCE(18);
      if (lookahead == 10849)
        ADVANCE(30);
      if (lookahead == 10850)
        ADVANCE(30);
      if (lookahead == 10851)
        ADVANCE(30);
      if (lookahead == 10868)
        ADVANCE(29);
      if (lookahead == 10971)
        ADVANCE(18);
      if (lookahead == 11056)
        ADVANCE(31);
      if (lookahead == 11057)
        ADVANCE(31);
      if (lookahead == 11058)
        ADVANCE(31);
      if (lookahead == 11059)
        ADVANCE(31);
      if (lookahead == 11060)
        ADVANCE(31);
      if (lookahead == 11061)
        ADVANCE(31);
      if (lookahead == 11062)
        ADVANCE(31);
      if (lookahead == 11063)
        ADVANCE(31);
      if (lookahead == 11064)
        ADVANCE(31);
      if (lookahead == 11065)
        ADVANCE(31);
      if (lookahead == 11066)
        ADVANCE(31);
      if (lookahead == 11067)
        ADVANCE(31);
      if (lookahead == 11068)
        ADVANCE(31);
      if (lookahead == 11069)
        ADVANCE(31);
      if (lookahead == 11070)
        ADVANCE(31);
      if (lookahead == 11071)
        ADVANCE(31);
      if (lookahead == 11072)
        ADVANCE(31);
      if (lookahead == 11073)
        ADVANCE(31);
      if (lookahead == 11074)
        ADVANCE(31);
      if (lookahead == 11075)
        ADVANCE(31);
      if (lookahead == 11076)
        ADVANCE(31);
      if (lookahead == 11079)
        ADVANCE(31);
      if (lookahead == 11080)
        ADVANCE(31);
      if (lookahead == 11081)
        ADVANCE(31);
      if (lookahead == 11082)
        ADVANCE(31);
      if (lookahead == 11083)
        ADVANCE(31);
      if (lookahead == 11084)
        ADVANCE(31);
      if (lookahead == 65513)
        ADVANCE(31);
      if (lookahead == 65515)
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n')
        ADVANCE(95);
      END_STATE();
    case 96:
      if (lookahead == 'l')
        ADVANCE(97);
      if (lookahead == 'n')
        ADVANCE(98);
      END_STATE();
    case 97:
      if (lookahead == 's')
        ADVANCE(99);
      END_STATE();
    case 98:
      if (lookahead == 'd')
        ADVANCE(100);
      END_STATE();
    case 99:
      if (lookahead == 'e')
        ADVANCE(101);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i')
        ADVANCE(102);
      END_STATE();
    case 102:
      if (lookahead == 'f')
        ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 104:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == 'e')
        ADVANCE(96);
      if (lookahead == 's')
        ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(104);
      END_STATE();
    case 105:
      if (lookahead == 't')
        ADVANCE(106);
      END_STATE();
    case 106:
      if (lookahead == 'r')
        ADVANCE(107);
      END_STATE();
    case 107:
      if (lookahead == 'u')
        ADVANCE(108);
      END_STATE();
    case 108:
      if (lookahead == 'c')
        ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == 't')
        ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 111:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(4);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == ':')
        ADVANCE(57);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(16);
      if (lookahead == '>')
        ADVANCE(17);
      if (lookahead == '\\')
        ADVANCE(18);
      if (lookahead == '^')
        ADVANCE(19);
      if (lookahead == 'e')
        ADVANCE(112);
      if (lookahead == 'f')
        ADVANCE(21);
      if (lookahead == 'i')
        ADVANCE(22);
      if (lookahead == 'm')
        ADVANCE(23);
      if (lookahead == 's')
        ADVANCE(24);
      if (lookahead == 'u')
        ADVANCE(25);
      if (lookahead == '{')
        ADVANCE(26);
      if (lookahead == '|')
        ADVANCE(27);
      if (lookahead == '~')
        ADVANCE(29);
      if (lookahead == 177)
        ADVANCE(30);
      if (lookahead == 215)
        ADVANCE(18);
      if (lookahead == 247)
        ADVANCE(5);
      if (lookahead == 8523)
        ADVANCE(18);
      if (lookahead == 8592)
        ADVANCE(31);
      if (lookahead == 8594)
        ADVANCE(31);
      if (lookahead == 8596)
        ADVANCE(31);
      if (lookahead == 8602)
        ADVANCE(31);
      if (lookahead == 8603)
        ADVANCE(31);
      if (lookahead == 8604)
        ADVANCE(31);
      if (lookahead == 8605)
        ADVANCE(31);
      if (lookahead == 8606)
        ADVANCE(31);
      if (lookahead == 8608)
        ADVANCE(31);
      if (lookahead == 8610)
        ADVANCE(31);
      if (lookahead == 8611)
        ADVANCE(31);
      if (lookahead == 8612)
        ADVANCE(31);
      if (lookahead == 8614)
        ADVANCE(31);
      if (lookahead == 8617)
        ADVANCE(31);
      if (lookahead == 8618)
        ADVANCE(31);
      if (lookahead == 8619)
        ADVANCE(31);
      if (lookahead == 8620)
        ADVANCE(31);
      if (lookahead == 8622)
        ADVANCE(31);
      if (lookahead == 8636)
        ADVANCE(31);
      if (lookahead == 8637)
        ADVANCE(31);
      if (lookahead == 8640)
        ADVANCE(31);
      if (lookahead == 8641)
        ADVANCE(31);
      if (lookahead == 8644)
        ADVANCE(31);
      if (lookahead == 8646)
        ADVANCE(31);
      if (lookahead == 8647)
        ADVANCE(31);
      if (lookahead == 8649)
        ADVANCE(31);
      if (lookahead == 8651)
        ADVANCE(31);
      if (lookahead == 8652)
        ADVANCE(31);
      if (lookahead == 8653)
        ADVANCE(31);
      if (lookahead == 8654)
        ADVANCE(31);
      if (lookahead == 8655)
        ADVANCE(31);
      if (lookahead == 8656)
        ADVANCE(31);
      if (lookahead == 8658)
        ADVANCE(31);
      if (lookahead == 8660)
        ADVANCE(31);
      if (lookahead == 8666)
        ADVANCE(31);
      if (lookahead == 8667)
        ADVANCE(31);
      if (lookahead == 8668)
        ADVANCE(31);
      if (lookahead == 8669)
        ADVANCE(31);
      if (lookahead == 8672)
        ADVANCE(31);
      if (lookahead == 8674)
        ADVANCE(31);
      if (lookahead == 8692)
        ADVANCE(31);
      if (lookahead == 8694)
        ADVANCE(31);
      if (lookahead == 8695)
        ADVANCE(31);
      if (lookahead == 8696)
        ADVANCE(31);
      if (lookahead == 8697)
        ADVANCE(31);
      if (lookahead == 8698)
        ADVANCE(31);
      if (lookahead == 8699)
        ADVANCE(31);
      if (lookahead == 8700)
        ADVANCE(31);
      if (lookahead == 8701)
        ADVANCE(31);
      if (lookahead == 8702)
        ADVANCE(31);
      if (lookahead == 8703)
        ADVANCE(31);
      if (lookahead == 8723)
        ADVANCE(30);
      if (lookahead == 8724)
        ADVANCE(30);
      if (lookahead == 8727)
        ADVANCE(18);
      if (lookahead == 8728)
        ADVANCE(18);
      if (lookahead == 8729)
        ADVANCE(18);
      if (lookahead == 8740)
        ADVANCE(18);
      if (lookahead == 8743)
        ADVANCE(18);
      if (lookahead == 8744)
        ADVANCE(30);
      if (lookahead == 8745)
        ADVANCE(18);
      if (lookahead == 8746)
        ADVANCE(30);
      if (lookahead == 8760)
        ADVANCE(30);
      if (lookahead == 8768)
        ADVANCE(18);
      if (lookahead == 8770)
        ADVANCE(30);
      if (lookahead == 8783)
        ADVANCE(30);
      if (lookahead == 8788)
        ADVANCE(29);
      if (lookahead == 8789)
        ADVANCE(29);
      if (lookahead == 8845)
        ADVANCE(18);
      if (lookahead == 8846)
        ADVANCE(30);
      if (lookahead == 8851)
        ADVANCE(18);
      if (lookahead == 8852)
        ADVANCE(30);
      if (lookahead == 8853)
        ADVANCE(30);
      if (lookahead == 8854)
        ADVANCE(30);
      if (lookahead == 8855)
        ADVANCE(18);
      if (lookahead == 8856)
        ADVANCE(18);
      if (lookahead == 8857)
        ADVANCE(18);
      if (lookahead == 8858)
        ADVANCE(18);
      if (lookahead == 8859)
        ADVANCE(18);
      if (lookahead == 8862)
        ADVANCE(30);
      if (lookahead == 8863)
        ADVANCE(30);
      if (lookahead == 8864)
        ADVANCE(18);
      if (lookahead == 8865)
        ADVANCE(18);
      if (lookahead == 8891)
        ADVANCE(4);
      if (lookahead == 8892)
        ADVANCE(18);
      if (lookahead == 8893)
        ADVANCE(30);
      if (lookahead == 8900)
        ADVANCE(18);
      if (lookahead == 8901)
        ADVANCE(18);
      if (lookahead == 8902)
        ADVANCE(18);
      if (lookahead == 8903)
        ADVANCE(18);
      if (lookahead == 8905)
        ADVANCE(18);
      if (lookahead == 8906)
        ADVANCE(18);
      if (lookahead == 8907)
        ADVANCE(18);
      if (lookahead == 8908)
        ADVANCE(18);
      if (lookahead == 8910)
        ADVANCE(30);
      if (lookahead == 8911)
        ADVANCE(18);
      if (lookahead == 8914)
        ADVANCE(18);
      if (lookahead == 8915)
        ADVANCE(30);
      if (lookahead == 9655)
        ADVANCE(18);
      if (lookahead == 10193)
        ADVANCE(18);
      if (lookahead == 10197)
        ADVANCE(18);
      if (lookahead == 10198)
        ADVANCE(18);
      if (lookahead == 10199)
        ADVANCE(18);
      if (lookahead == 10229)
        ADVANCE(31);
      if (lookahead == 10230)
        ADVANCE(31);
      if (lookahead == 10231)
        ADVANCE(31);
      if (lookahead == 10233)
        ADVANCE(31);
      if (lookahead == 10234)
        ADVANCE(31);
      if (lookahead == 10235)
        ADVANCE(31);
      if (lookahead == 10236)
        ADVANCE(31);
      if (lookahead == 10237)
        ADVANCE(31);
      if (lookahead == 10238)
        ADVANCE(31);
      if (lookahead == 10239)
        ADVANCE(31);
      if (lookahead == 10496)
        ADVANCE(31);
      if (lookahead == 10497)
        ADVANCE(31);
      if (lookahead == 10498)
        ADVANCE(31);
      if (lookahead == 10499)
        ADVANCE(31);
      if (lookahead == 10500)
        ADVANCE(31);
      if (lookahead == 10501)
        ADVANCE(31);
      if (lookahead == 10502)
        ADVANCE(31);
      if (lookahead == 10503)
        ADVANCE(31);
      if (lookahead == 10508)
        ADVANCE(31);
      if (lookahead == 10509)
        ADVANCE(31);
      if (lookahead == 10510)
        ADVANCE(31);
      if (lookahead == 10511)
        ADVANCE(31);
      if (lookahead == 10512)
        ADVANCE(31);
      if (lookahead == 10513)
        ADVANCE(31);
      if (lookahead == 10516)
        ADVANCE(31);
      if (lookahead == 10517)
        ADVANCE(31);
      if (lookahead == 10518)
        ADVANCE(31);
      if (lookahead == 10519)
        ADVANCE(31);
      if (lookahead == 10520)
        ADVANCE(31);
      if (lookahead == 10525)
        ADVANCE(31);
      if (lookahead == 10526)
        ADVANCE(31);
      if (lookahead == 10527)
        ADVANCE(31);
      if (lookahead == 10528)
        ADVANCE(31);
      if (lookahead == 10564)
        ADVANCE(31);
      if (lookahead == 10565)
        ADVANCE(31);
      if (lookahead == 10566)
        ADVANCE(31);
      if (lookahead == 10567)
        ADVANCE(31);
      if (lookahead == 10568)
        ADVANCE(31);
      if (lookahead == 10570)
        ADVANCE(31);
      if (lookahead == 10571)
        ADVANCE(31);
      if (lookahead == 10574)
        ADVANCE(31);
      if (lookahead == 10576)
        ADVANCE(31);
      if (lookahead == 10578)
        ADVANCE(31);
      if (lookahead == 10579)
        ADVANCE(31);
      if (lookahead == 10582)
        ADVANCE(31);
      if (lookahead == 10583)
        ADVANCE(31);
      if (lookahead == 10586)
        ADVANCE(31);
      if (lookahead == 10587)
        ADVANCE(31);
      if (lookahead == 10590)
        ADVANCE(31);
      if (lookahead == 10591)
        ADVANCE(31);
      if (lookahead == 10594)
        ADVANCE(31);
      if (lookahead == 10596)
        ADVANCE(31);
      if (lookahead == 10598)
        ADVANCE(31);
      if (lookahead == 10599)
        ADVANCE(31);
      if (lookahead == 10600)
        ADVANCE(31);
      if (lookahead == 10601)
        ADVANCE(31);
      if (lookahead == 10602)
        ADVANCE(31);
      if (lookahead == 10603)
        ADVANCE(31);
      if (lookahead == 10604)
        ADVANCE(31);
      if (lookahead == 10605)
        ADVANCE(31);
      if (lookahead == 10608)
        ADVANCE(31);
      if (lookahead == 10680)
        ADVANCE(18);
      if (lookahead == 10684)
        ADVANCE(18);
      if (lookahead == 10686)
        ADVANCE(18);
      if (lookahead == 10687)
        ADVANCE(18);
      if (lookahead == 10740)
        ADVANCE(31);
      if (lookahead == 10742)
        ADVANCE(18);
      if (lookahead == 10743)
        ADVANCE(18);
      if (lookahead == 10746)
        ADVANCE(30);
      if (lookahead == 10747)
        ADVANCE(30);
      if (lookahead == 10759)
        ADVANCE(18);
      if (lookahead == 10760)
        ADVANCE(30);
      if (lookahead == 10781)
        ADVANCE(18);
      if (lookahead == 10786)
        ADVANCE(30);
      if (lookahead == 10787)
        ADVANCE(30);
      if (lookahead == 10788)
        ADVANCE(30);
      if (lookahead == 10789)
        ADVANCE(30);
      if (lookahead == 10790)
        ADVANCE(30);
      if (lookahead == 10791)
        ADVANCE(30);
      if (lookahead == 10792)
        ADVANCE(30);
      if (lookahead == 10793)
        ADVANCE(30);
      if (lookahead == 10794)
        ADVANCE(30);
      if (lookahead == 10795)
        ADVANCE(30);
      if (lookahead == 10796)
        ADVANCE(30);
      if (lookahead == 10797)
        ADVANCE(30);
      if (lookahead == 10798)
        ADVANCE(30);
      if (lookahead == 10800)
        ADVANCE(18);
      if (lookahead == 10801)
        ADVANCE(18);
      if (lookahead == 10802)
        ADVANCE(18);
      if (lookahead == 10803)
        ADVANCE(18);
      if (lookahead == 10804)
        ADVANCE(18);
      if (lookahead == 10805)
        ADVANCE(18);
      if (lookahead == 10806)
        ADVANCE(18);
      if (lookahead == 10807)
        ADVANCE(18);
      if (lookahead == 10808)
        ADVANCE(18);
      if (lookahead == 10809)
        ADVANCE(30);
      if (lookahead == 10810)
        ADVANCE(30);
      if (lookahead == 10811)
        ADVANCE(18);
      if (lookahead == 10812)
        ADVANCE(18);
      if (lookahead == 10813)
        ADVANCE(18);
      if (lookahead == 10816)
        ADVANCE(18);
      if (lookahead == 10817)
        ADVANCE(30);
      if (lookahead == 10818)
        ADVANCE(30);
      if (lookahead == 10819)
        ADVANCE(18);
      if (lookahead == 10820)
        ADVANCE(18);
      if (lookahead == 10821)
        ADVANCE(30);
      if (lookahead == 10826)
        ADVANCE(30);
      if (lookahead == 10827)
        ADVANCE(18);
      if (lookahead == 10828)
        ADVANCE(30);
      if (lookahead == 10829)
        ADVANCE(18);
      if (lookahead == 10830)
        ADVANCE(18);
      if (lookahead == 10831)
        ADVANCE(30);
      if (lookahead == 10832)
        ADVANCE(30);
      if (lookahead == 10833)
        ADVANCE(18);
      if (lookahead == 10834)
        ADVANCE(30);
      if (lookahead == 10835)
        ADVANCE(18);
      if (lookahead == 10836)
        ADVANCE(30);
      if (lookahead == 10837)
        ADVANCE(18);
      if (lookahead == 10838)
        ADVANCE(30);
      if (lookahead == 10839)
        ADVANCE(30);
      if (lookahead == 10840)
        ADVANCE(18);
      if (lookahead == 10842)
        ADVANCE(18);
      if (lookahead == 10843)
        ADVANCE(30);
      if (lookahead == 10844)
        ADVANCE(18);
      if (lookahead == 10845)
        ADVANCE(30);
      if (lookahead == 10846)
        ADVANCE(18);
      if (lookahead == 10847)
        ADVANCE(18);
      if (lookahead == 10848)
        ADVANCE(18);
      if (lookahead == 10849)
        ADVANCE(30);
      if (lookahead == 10850)
        ADVANCE(30);
      if (lookahead == 10851)
        ADVANCE(30);
      if (lookahead == 10868)
        ADVANCE(29);
      if (lookahead == 10971)
        ADVANCE(18);
      if (lookahead == 11056)
        ADVANCE(31);
      if (lookahead == 11057)
        ADVANCE(31);
      if (lookahead == 11058)
        ADVANCE(31);
      if (lookahead == 11059)
        ADVANCE(31);
      if (lookahead == 11060)
        ADVANCE(31);
      if (lookahead == 11061)
        ADVANCE(31);
      if (lookahead == 11062)
        ADVANCE(31);
      if (lookahead == 11063)
        ADVANCE(31);
      if (lookahead == 11064)
        ADVANCE(31);
      if (lookahead == 11065)
        ADVANCE(31);
      if (lookahead == 11066)
        ADVANCE(31);
      if (lookahead == 11067)
        ADVANCE(31);
      if (lookahead == 11068)
        ADVANCE(31);
      if (lookahead == 11069)
        ADVANCE(31);
      if (lookahead == 11070)
        ADVANCE(31);
      if (lookahead == 11071)
        ADVANCE(31);
      if (lookahead == 11072)
        ADVANCE(31);
      if (lookahead == 11073)
        ADVANCE(31);
      if (lookahead == 11074)
        ADVANCE(31);
      if (lookahead == 11075)
        ADVANCE(31);
      if (lookahead == 11076)
        ADVANCE(31);
      if (lookahead == 11079)
        ADVANCE(31);
      if (lookahead == 11080)
        ADVANCE(31);
      if (lookahead == 11081)
        ADVANCE(31);
      if (lookahead == 11082)
        ADVANCE(31);
      if (lookahead == 11083)
        ADVANCE(31);
      if (lookahead == 11084)
        ADVANCE(31);
      if (lookahead == 65513)
        ADVANCE(31);
      if (lookahead == 65515)
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(111);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 113:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(95);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == ':')
        ADVANCE(13);
      if (lookahead == ';')
        ADVANCE(14);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(16);
      if (lookahead == '>')
        ADVANCE(17);
      if (lookahead == '\\')
        ADVANCE(18);
      if (lookahead == '^')
        ADVANCE(19);
      if (lookahead == 'e')
        ADVANCE(96);
      if (lookahead == '|')
        ADVANCE(27);
      if (lookahead == '~')
        ADVANCE(29);
      if (lookahead == 177)
        ADVANCE(30);
      if (lookahead == 215)
        ADVANCE(18);
      if (lookahead == 247)
        ADVANCE(5);
      if (lookahead == 8523)
        ADVANCE(18);
      if (lookahead == 8592)
        ADVANCE(31);
      if (lookahead == 8594)
        ADVANCE(31);
      if (lookahead == 8596)
        ADVANCE(31);
      if (lookahead == 8602)
        ADVANCE(31);
      if (lookahead == 8603)
        ADVANCE(31);
      if (lookahead == 8604)
        ADVANCE(31);
      if (lookahead == 8605)
        ADVANCE(31);
      if (lookahead == 8606)
        ADVANCE(31);
      if (lookahead == 8608)
        ADVANCE(31);
      if (lookahead == 8610)
        ADVANCE(31);
      if (lookahead == 8611)
        ADVANCE(31);
      if (lookahead == 8612)
        ADVANCE(31);
      if (lookahead == 8614)
        ADVANCE(31);
      if (lookahead == 8617)
        ADVANCE(31);
      if (lookahead == 8618)
        ADVANCE(31);
      if (lookahead == 8619)
        ADVANCE(31);
      if (lookahead == 8620)
        ADVANCE(31);
      if (lookahead == 8622)
        ADVANCE(31);
      if (lookahead == 8636)
        ADVANCE(31);
      if (lookahead == 8637)
        ADVANCE(31);
      if (lookahead == 8640)
        ADVANCE(31);
      if (lookahead == 8641)
        ADVANCE(31);
      if (lookahead == 8644)
        ADVANCE(31);
      if (lookahead == 8646)
        ADVANCE(31);
      if (lookahead == 8647)
        ADVANCE(31);
      if (lookahead == 8649)
        ADVANCE(31);
      if (lookahead == 8651)
        ADVANCE(31);
      if (lookahead == 8652)
        ADVANCE(31);
      if (lookahead == 8653)
        ADVANCE(31);
      if (lookahead == 8654)
        ADVANCE(31);
      if (lookahead == 8655)
        ADVANCE(31);
      if (lookahead == 8656)
        ADVANCE(31);
      if (lookahead == 8658)
        ADVANCE(31);
      if (lookahead == 8660)
        ADVANCE(31);
      if (lookahead == 8666)
        ADVANCE(31);
      if (lookahead == 8667)
        ADVANCE(31);
      if (lookahead == 8668)
        ADVANCE(31);
      if (lookahead == 8669)
        ADVANCE(31);
      if (lookahead == 8672)
        ADVANCE(31);
      if (lookahead == 8674)
        ADVANCE(31);
      if (lookahead == 8692)
        ADVANCE(31);
      if (lookahead == 8694)
        ADVANCE(31);
      if (lookahead == 8695)
        ADVANCE(31);
      if (lookahead == 8696)
        ADVANCE(31);
      if (lookahead == 8697)
        ADVANCE(31);
      if (lookahead == 8698)
        ADVANCE(31);
      if (lookahead == 8699)
        ADVANCE(31);
      if (lookahead == 8700)
        ADVANCE(31);
      if (lookahead == 8701)
        ADVANCE(31);
      if (lookahead == 8702)
        ADVANCE(31);
      if (lookahead == 8703)
        ADVANCE(31);
      if (lookahead == 8723)
        ADVANCE(30);
      if (lookahead == 8724)
        ADVANCE(30);
      if (lookahead == 8727)
        ADVANCE(18);
      if (lookahead == 8728)
        ADVANCE(18);
      if (lookahead == 8729)
        ADVANCE(18);
      if (lookahead == 8740)
        ADVANCE(18);
      if (lookahead == 8743)
        ADVANCE(18);
      if (lookahead == 8744)
        ADVANCE(30);
      if (lookahead == 8745)
        ADVANCE(18);
      if (lookahead == 8746)
        ADVANCE(30);
      if (lookahead == 8760)
        ADVANCE(30);
      if (lookahead == 8768)
        ADVANCE(18);
      if (lookahead == 8770)
        ADVANCE(30);
      if (lookahead == 8783)
        ADVANCE(30);
      if (lookahead == 8788)
        ADVANCE(29);
      if (lookahead == 8789)
        ADVANCE(29);
      if (lookahead == 8845)
        ADVANCE(18);
      if (lookahead == 8846)
        ADVANCE(30);
      if (lookahead == 8851)
        ADVANCE(18);
      if (lookahead == 8852)
        ADVANCE(30);
      if (lookahead == 8853)
        ADVANCE(30);
      if (lookahead == 8854)
        ADVANCE(30);
      if (lookahead == 8855)
        ADVANCE(18);
      if (lookahead == 8856)
        ADVANCE(18);
      if (lookahead == 8857)
        ADVANCE(18);
      if (lookahead == 8858)
        ADVANCE(18);
      if (lookahead == 8859)
        ADVANCE(18);
      if (lookahead == 8862)
        ADVANCE(30);
      if (lookahead == 8863)
        ADVANCE(30);
      if (lookahead == 8864)
        ADVANCE(18);
      if (lookahead == 8865)
        ADVANCE(18);
      if (lookahead == 8891)
        ADVANCE(4);
      if (lookahead == 8892)
        ADVANCE(18);
      if (lookahead == 8893)
        ADVANCE(30);
      if (lookahead == 8900)
        ADVANCE(18);
      if (lookahead == 8901)
        ADVANCE(18);
      if (lookahead == 8902)
        ADVANCE(18);
      if (lookahead == 8903)
        ADVANCE(18);
      if (lookahead == 8905)
        ADVANCE(18);
      if (lookahead == 8906)
        ADVANCE(18);
      if (lookahead == 8907)
        ADVANCE(18);
      if (lookahead == 8908)
        ADVANCE(18);
      if (lookahead == 8910)
        ADVANCE(30);
      if (lookahead == 8911)
        ADVANCE(18);
      if (lookahead == 8914)
        ADVANCE(18);
      if (lookahead == 8915)
        ADVANCE(30);
      if (lookahead == 9655)
        ADVANCE(18);
      if (lookahead == 10193)
        ADVANCE(18);
      if (lookahead == 10197)
        ADVANCE(18);
      if (lookahead == 10198)
        ADVANCE(18);
      if (lookahead == 10199)
        ADVANCE(18);
      if (lookahead == 10229)
        ADVANCE(31);
      if (lookahead == 10230)
        ADVANCE(31);
      if (lookahead == 10231)
        ADVANCE(31);
      if (lookahead == 10233)
        ADVANCE(31);
      if (lookahead == 10234)
        ADVANCE(31);
      if (lookahead == 10235)
        ADVANCE(31);
      if (lookahead == 10236)
        ADVANCE(31);
      if (lookahead == 10237)
        ADVANCE(31);
      if (lookahead == 10238)
        ADVANCE(31);
      if (lookahead == 10239)
        ADVANCE(31);
      if (lookahead == 10496)
        ADVANCE(31);
      if (lookahead == 10497)
        ADVANCE(31);
      if (lookahead == 10498)
        ADVANCE(31);
      if (lookahead == 10499)
        ADVANCE(31);
      if (lookahead == 10500)
        ADVANCE(31);
      if (lookahead == 10501)
        ADVANCE(31);
      if (lookahead == 10502)
        ADVANCE(31);
      if (lookahead == 10503)
        ADVANCE(31);
      if (lookahead == 10508)
        ADVANCE(31);
      if (lookahead == 10509)
        ADVANCE(31);
      if (lookahead == 10510)
        ADVANCE(31);
      if (lookahead == 10511)
        ADVANCE(31);
      if (lookahead == 10512)
        ADVANCE(31);
      if (lookahead == 10513)
        ADVANCE(31);
      if (lookahead == 10516)
        ADVANCE(31);
      if (lookahead == 10517)
        ADVANCE(31);
      if (lookahead == 10518)
        ADVANCE(31);
      if (lookahead == 10519)
        ADVANCE(31);
      if (lookahead == 10520)
        ADVANCE(31);
      if (lookahead == 10525)
        ADVANCE(31);
      if (lookahead == 10526)
        ADVANCE(31);
      if (lookahead == 10527)
        ADVANCE(31);
      if (lookahead == 10528)
        ADVANCE(31);
      if (lookahead == 10564)
        ADVANCE(31);
      if (lookahead == 10565)
        ADVANCE(31);
      if (lookahead == 10566)
        ADVANCE(31);
      if (lookahead == 10567)
        ADVANCE(31);
      if (lookahead == 10568)
        ADVANCE(31);
      if (lookahead == 10570)
        ADVANCE(31);
      if (lookahead == 10571)
        ADVANCE(31);
      if (lookahead == 10574)
        ADVANCE(31);
      if (lookahead == 10576)
        ADVANCE(31);
      if (lookahead == 10578)
        ADVANCE(31);
      if (lookahead == 10579)
        ADVANCE(31);
      if (lookahead == 10582)
        ADVANCE(31);
      if (lookahead == 10583)
        ADVANCE(31);
      if (lookahead == 10586)
        ADVANCE(31);
      if (lookahead == 10587)
        ADVANCE(31);
      if (lookahead == 10590)
        ADVANCE(31);
      if (lookahead == 10591)
        ADVANCE(31);
      if (lookahead == 10594)
        ADVANCE(31);
      if (lookahead == 10596)
        ADVANCE(31);
      if (lookahead == 10598)
        ADVANCE(31);
      if (lookahead == 10599)
        ADVANCE(31);
      if (lookahead == 10600)
        ADVANCE(31);
      if (lookahead == 10601)
        ADVANCE(31);
      if (lookahead == 10602)
        ADVANCE(31);
      if (lookahead == 10603)
        ADVANCE(31);
      if (lookahead == 10604)
        ADVANCE(31);
      if (lookahead == 10605)
        ADVANCE(31);
      if (lookahead == 10608)
        ADVANCE(31);
      if (lookahead == 10680)
        ADVANCE(18);
      if (lookahead == 10684)
        ADVANCE(18);
      if (lookahead == 10686)
        ADVANCE(18);
      if (lookahead == 10687)
        ADVANCE(18);
      if (lookahead == 10740)
        ADVANCE(31);
      if (lookahead == 10742)
        ADVANCE(18);
      if (lookahead == 10743)
        ADVANCE(18);
      if (lookahead == 10746)
        ADVANCE(30);
      if (lookahead == 10747)
        ADVANCE(30);
      if (lookahead == 10759)
        ADVANCE(18);
      if (lookahead == 10760)
        ADVANCE(30);
      if (lookahead == 10781)
        ADVANCE(18);
      if (lookahead == 10786)
        ADVANCE(30);
      if (lookahead == 10787)
        ADVANCE(30);
      if (lookahead == 10788)
        ADVANCE(30);
      if (lookahead == 10789)
        ADVANCE(30);
      if (lookahead == 10790)
        ADVANCE(30);
      if (lookahead == 10791)
        ADVANCE(30);
      if (lookahead == 10792)
        ADVANCE(30);
      if (lookahead == 10793)
        ADVANCE(30);
      if (lookahead == 10794)
        ADVANCE(30);
      if (lookahead == 10795)
        ADVANCE(30);
      if (lookahead == 10796)
        ADVANCE(30);
      if (lookahead == 10797)
        ADVANCE(30);
      if (lookahead == 10798)
        ADVANCE(30);
      if (lookahead == 10800)
        ADVANCE(18);
      if (lookahead == 10801)
        ADVANCE(18);
      if (lookahead == 10802)
        ADVANCE(18);
      if (lookahead == 10803)
        ADVANCE(18);
      if (lookahead == 10804)
        ADVANCE(18);
      if (lookahead == 10805)
        ADVANCE(18);
      if (lookahead == 10806)
        ADVANCE(18);
      if (lookahead == 10807)
        ADVANCE(18);
      if (lookahead == 10808)
        ADVANCE(18);
      if (lookahead == 10809)
        ADVANCE(30);
      if (lookahead == 10810)
        ADVANCE(30);
      if (lookahead == 10811)
        ADVANCE(18);
      if (lookahead == 10812)
        ADVANCE(18);
      if (lookahead == 10813)
        ADVANCE(18);
      if (lookahead == 10816)
        ADVANCE(18);
      if (lookahead == 10817)
        ADVANCE(30);
      if (lookahead == 10818)
        ADVANCE(30);
      if (lookahead == 10819)
        ADVANCE(18);
      if (lookahead == 10820)
        ADVANCE(18);
      if (lookahead == 10821)
        ADVANCE(30);
      if (lookahead == 10826)
        ADVANCE(30);
      if (lookahead == 10827)
        ADVANCE(18);
      if (lookahead == 10828)
        ADVANCE(30);
      if (lookahead == 10829)
        ADVANCE(18);
      if (lookahead == 10830)
        ADVANCE(18);
      if (lookahead == 10831)
        ADVANCE(30);
      if (lookahead == 10832)
        ADVANCE(30);
      if (lookahead == 10833)
        ADVANCE(18);
      if (lookahead == 10834)
        ADVANCE(30);
      if (lookahead == 10835)
        ADVANCE(18);
      if (lookahead == 10836)
        ADVANCE(30);
      if (lookahead == 10837)
        ADVANCE(18);
      if (lookahead == 10838)
        ADVANCE(30);
      if (lookahead == 10839)
        ADVANCE(30);
      if (lookahead == 10840)
        ADVANCE(18);
      if (lookahead == 10842)
        ADVANCE(18);
      if (lookahead == 10843)
        ADVANCE(30);
      if (lookahead == 10844)
        ADVANCE(18);
      if (lookahead == 10845)
        ADVANCE(30);
      if (lookahead == 10846)
        ADVANCE(18);
      if (lookahead == 10847)
        ADVANCE(18);
      if (lookahead == 10848)
        ADVANCE(18);
      if (lookahead == 10849)
        ADVANCE(30);
      if (lookahead == 10850)
        ADVANCE(30);
      if (lookahead == 10851)
        ADVANCE(30);
      if (lookahead == 10868)
        ADVANCE(29);
      if (lookahead == 10971)
        ADVANCE(18);
      if (lookahead == 11056)
        ADVANCE(31);
      if (lookahead == 11057)
        ADVANCE(31);
      if (lookahead == 11058)
        ADVANCE(31);
      if (lookahead == 11059)
        ADVANCE(31);
      if (lookahead == 11060)
        ADVANCE(31);
      if (lookahead == 11061)
        ADVANCE(31);
      if (lookahead == 11062)
        ADVANCE(31);
      if (lookahead == 11063)
        ADVANCE(31);
      if (lookahead == 11064)
        ADVANCE(31);
      if (lookahead == 11065)
        ADVANCE(31);
      if (lookahead == 11066)
        ADVANCE(31);
      if (lookahead == 11067)
        ADVANCE(31);
      if (lookahead == 11068)
        ADVANCE(31);
      if (lookahead == 11069)
        ADVANCE(31);
      if (lookahead == 11070)
        ADVANCE(31);
      if (lookahead == 11071)
        ADVANCE(31);
      if (lookahead == 11072)
        ADVANCE(31);
      if (lookahead == 11073)
        ADVANCE(31);
      if (lookahead == 11074)
        ADVANCE(31);
      if (lookahead == 11075)
        ADVANCE(31);
      if (lookahead == 11076)
        ADVANCE(31);
      if (lookahead == 11079)
        ADVANCE(31);
      if (lookahead == 11080)
        ADVANCE(31);
      if (lookahead == 11081)
        ADVANCE(31);
      if (lookahead == 11082)
        ADVANCE(31);
      if (lookahead == 11083)
        ADVANCE(31);
      if (lookahead == 11084)
        ADVANCE(31);
      if (lookahead == 65513)
        ADVANCE(31);
      if (lookahead == 65515)
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(114);
      END_STATE();
    case 114:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(95);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == ':')
        ADVANCE(57);
      if (lookahead == ';')
        ADVANCE(14);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(16);
      if (lookahead == '>')
        ADVANCE(17);
      if (lookahead == '\\')
        ADVANCE(18);
      if (lookahead == '^')
        ADVANCE(19);
      if (lookahead == 'e')
        ADVANCE(96);
      if (lookahead == '|')
        ADVANCE(27);
      if (lookahead == '~')
        ADVANCE(29);
      if (lookahead == 177)
        ADVANCE(30);
      if (lookahead == 215)
        ADVANCE(18);
      if (lookahead == 247)
        ADVANCE(5);
      if (lookahead == 8523)
        ADVANCE(18);
      if (lookahead == 8592)
        ADVANCE(31);
      if (lookahead == 8594)
        ADVANCE(31);
      if (lookahead == 8596)
        ADVANCE(31);
      if (lookahead == 8602)
        ADVANCE(31);
      if (lookahead == 8603)
        ADVANCE(31);
      if (lookahead == 8604)
        ADVANCE(31);
      if (lookahead == 8605)
        ADVANCE(31);
      if (lookahead == 8606)
        ADVANCE(31);
      if (lookahead == 8608)
        ADVANCE(31);
      if (lookahead == 8610)
        ADVANCE(31);
      if (lookahead == 8611)
        ADVANCE(31);
      if (lookahead == 8612)
        ADVANCE(31);
      if (lookahead == 8614)
        ADVANCE(31);
      if (lookahead == 8617)
        ADVANCE(31);
      if (lookahead == 8618)
        ADVANCE(31);
      if (lookahead == 8619)
        ADVANCE(31);
      if (lookahead == 8620)
        ADVANCE(31);
      if (lookahead == 8622)
        ADVANCE(31);
      if (lookahead == 8636)
        ADVANCE(31);
      if (lookahead == 8637)
        ADVANCE(31);
      if (lookahead == 8640)
        ADVANCE(31);
      if (lookahead == 8641)
        ADVANCE(31);
      if (lookahead == 8644)
        ADVANCE(31);
      if (lookahead == 8646)
        ADVANCE(31);
      if (lookahead == 8647)
        ADVANCE(31);
      if (lookahead == 8649)
        ADVANCE(31);
      if (lookahead == 8651)
        ADVANCE(31);
      if (lookahead == 8652)
        ADVANCE(31);
      if (lookahead == 8653)
        ADVANCE(31);
      if (lookahead == 8654)
        ADVANCE(31);
      if (lookahead == 8655)
        ADVANCE(31);
      if (lookahead == 8656)
        ADVANCE(31);
      if (lookahead == 8658)
        ADVANCE(31);
      if (lookahead == 8660)
        ADVANCE(31);
      if (lookahead == 8666)
        ADVANCE(31);
      if (lookahead == 8667)
        ADVANCE(31);
      if (lookahead == 8668)
        ADVANCE(31);
      if (lookahead == 8669)
        ADVANCE(31);
      if (lookahead == 8672)
        ADVANCE(31);
      if (lookahead == 8674)
        ADVANCE(31);
      if (lookahead == 8692)
        ADVANCE(31);
      if (lookahead == 8694)
        ADVANCE(31);
      if (lookahead == 8695)
        ADVANCE(31);
      if (lookahead == 8696)
        ADVANCE(31);
      if (lookahead == 8697)
        ADVANCE(31);
      if (lookahead == 8698)
        ADVANCE(31);
      if (lookahead == 8699)
        ADVANCE(31);
      if (lookahead == 8700)
        ADVANCE(31);
      if (lookahead == 8701)
        ADVANCE(31);
      if (lookahead == 8702)
        ADVANCE(31);
      if (lookahead == 8703)
        ADVANCE(31);
      if (lookahead == 8723)
        ADVANCE(30);
      if (lookahead == 8724)
        ADVANCE(30);
      if (lookahead == 8727)
        ADVANCE(18);
      if (lookahead == 8728)
        ADVANCE(18);
      if (lookahead == 8729)
        ADVANCE(18);
      if (lookahead == 8740)
        ADVANCE(18);
      if (lookahead == 8743)
        ADVANCE(18);
      if (lookahead == 8744)
        ADVANCE(30);
      if (lookahead == 8745)
        ADVANCE(18);
      if (lookahead == 8746)
        ADVANCE(30);
      if (lookahead == 8760)
        ADVANCE(30);
      if (lookahead == 8768)
        ADVANCE(18);
      if (lookahead == 8770)
        ADVANCE(30);
      if (lookahead == 8783)
        ADVANCE(30);
      if (lookahead == 8788)
        ADVANCE(29);
      if (lookahead == 8789)
        ADVANCE(29);
      if (lookahead == 8845)
        ADVANCE(18);
      if (lookahead == 8846)
        ADVANCE(30);
      if (lookahead == 8851)
        ADVANCE(18);
      if (lookahead == 8852)
        ADVANCE(30);
      if (lookahead == 8853)
        ADVANCE(30);
      if (lookahead == 8854)
        ADVANCE(30);
      if (lookahead == 8855)
        ADVANCE(18);
      if (lookahead == 8856)
        ADVANCE(18);
      if (lookahead == 8857)
        ADVANCE(18);
      if (lookahead == 8858)
        ADVANCE(18);
      if (lookahead == 8859)
        ADVANCE(18);
      if (lookahead == 8862)
        ADVANCE(30);
      if (lookahead == 8863)
        ADVANCE(30);
      if (lookahead == 8864)
        ADVANCE(18);
      if (lookahead == 8865)
        ADVANCE(18);
      if (lookahead == 8891)
        ADVANCE(4);
      if (lookahead == 8892)
        ADVANCE(18);
      if (lookahead == 8893)
        ADVANCE(30);
      if (lookahead == 8900)
        ADVANCE(18);
      if (lookahead == 8901)
        ADVANCE(18);
      if (lookahead == 8902)
        ADVANCE(18);
      if (lookahead == 8903)
        ADVANCE(18);
      if (lookahead == 8905)
        ADVANCE(18);
      if (lookahead == 8906)
        ADVANCE(18);
      if (lookahead == 8907)
        ADVANCE(18);
      if (lookahead == 8908)
        ADVANCE(18);
      if (lookahead == 8910)
        ADVANCE(30);
      if (lookahead == 8911)
        ADVANCE(18);
      if (lookahead == 8914)
        ADVANCE(18);
      if (lookahead == 8915)
        ADVANCE(30);
      if (lookahead == 9655)
        ADVANCE(18);
      if (lookahead == 10193)
        ADVANCE(18);
      if (lookahead == 10197)
        ADVANCE(18);
      if (lookahead == 10198)
        ADVANCE(18);
      if (lookahead == 10199)
        ADVANCE(18);
      if (lookahead == 10229)
        ADVANCE(31);
      if (lookahead == 10230)
        ADVANCE(31);
      if (lookahead == 10231)
        ADVANCE(31);
      if (lookahead == 10233)
        ADVANCE(31);
      if (lookahead == 10234)
        ADVANCE(31);
      if (lookahead == 10235)
        ADVANCE(31);
      if (lookahead == 10236)
        ADVANCE(31);
      if (lookahead == 10237)
        ADVANCE(31);
      if (lookahead == 10238)
        ADVANCE(31);
      if (lookahead == 10239)
        ADVANCE(31);
      if (lookahead == 10496)
        ADVANCE(31);
      if (lookahead == 10497)
        ADVANCE(31);
      if (lookahead == 10498)
        ADVANCE(31);
      if (lookahead == 10499)
        ADVANCE(31);
      if (lookahead == 10500)
        ADVANCE(31);
      if (lookahead == 10501)
        ADVANCE(31);
      if (lookahead == 10502)
        ADVANCE(31);
      if (lookahead == 10503)
        ADVANCE(31);
      if (lookahead == 10508)
        ADVANCE(31);
      if (lookahead == 10509)
        ADVANCE(31);
      if (lookahead == 10510)
        ADVANCE(31);
      if (lookahead == 10511)
        ADVANCE(31);
      if (lookahead == 10512)
        ADVANCE(31);
      if (lookahead == 10513)
        ADVANCE(31);
      if (lookahead == 10516)
        ADVANCE(31);
      if (lookahead == 10517)
        ADVANCE(31);
      if (lookahead == 10518)
        ADVANCE(31);
      if (lookahead == 10519)
        ADVANCE(31);
      if (lookahead == 10520)
        ADVANCE(31);
      if (lookahead == 10525)
        ADVANCE(31);
      if (lookahead == 10526)
        ADVANCE(31);
      if (lookahead == 10527)
        ADVANCE(31);
      if (lookahead == 10528)
        ADVANCE(31);
      if (lookahead == 10564)
        ADVANCE(31);
      if (lookahead == 10565)
        ADVANCE(31);
      if (lookahead == 10566)
        ADVANCE(31);
      if (lookahead == 10567)
        ADVANCE(31);
      if (lookahead == 10568)
        ADVANCE(31);
      if (lookahead == 10570)
        ADVANCE(31);
      if (lookahead == 10571)
        ADVANCE(31);
      if (lookahead == 10574)
        ADVANCE(31);
      if (lookahead == 10576)
        ADVANCE(31);
      if (lookahead == 10578)
        ADVANCE(31);
      if (lookahead == 10579)
        ADVANCE(31);
      if (lookahead == 10582)
        ADVANCE(31);
      if (lookahead == 10583)
        ADVANCE(31);
      if (lookahead == 10586)
        ADVANCE(31);
      if (lookahead == 10587)
        ADVANCE(31);
      if (lookahead == 10590)
        ADVANCE(31);
      if (lookahead == 10591)
        ADVANCE(31);
      if (lookahead == 10594)
        ADVANCE(31);
      if (lookahead == 10596)
        ADVANCE(31);
      if (lookahead == 10598)
        ADVANCE(31);
      if (lookahead == 10599)
        ADVANCE(31);
      if (lookahead == 10600)
        ADVANCE(31);
      if (lookahead == 10601)
        ADVANCE(31);
      if (lookahead == 10602)
        ADVANCE(31);
      if (lookahead == 10603)
        ADVANCE(31);
      if (lookahead == 10604)
        ADVANCE(31);
      if (lookahead == 10605)
        ADVANCE(31);
      if (lookahead == 10608)
        ADVANCE(31);
      if (lookahead == 10680)
        ADVANCE(18);
      if (lookahead == 10684)
        ADVANCE(18);
      if (lookahead == 10686)
        ADVANCE(18);
      if (lookahead == 10687)
        ADVANCE(18);
      if (lookahead == 10740)
        ADVANCE(31);
      if (lookahead == 10742)
        ADVANCE(18);
      if (lookahead == 10743)
        ADVANCE(18);
      if (lookahead == 10746)
        ADVANCE(30);
      if (lookahead == 10747)
        ADVANCE(30);
      if (lookahead == 10759)
        ADVANCE(18);
      if (lookahead == 10760)
        ADVANCE(30);
      if (lookahead == 10781)
        ADVANCE(18);
      if (lookahead == 10786)
        ADVANCE(30);
      if (lookahead == 10787)
        ADVANCE(30);
      if (lookahead == 10788)
        ADVANCE(30);
      if (lookahead == 10789)
        ADVANCE(30);
      if (lookahead == 10790)
        ADVANCE(30);
      if (lookahead == 10791)
        ADVANCE(30);
      if (lookahead == 10792)
        ADVANCE(30);
      if (lookahead == 10793)
        ADVANCE(30);
      if (lookahead == 10794)
        ADVANCE(30);
      if (lookahead == 10795)
        ADVANCE(30);
      if (lookahead == 10796)
        ADVANCE(30);
      if (lookahead == 10797)
        ADVANCE(30);
      if (lookahead == 10798)
        ADVANCE(30);
      if (lookahead == 10800)
        ADVANCE(18);
      if (lookahead == 10801)
        ADVANCE(18);
      if (lookahead == 10802)
        ADVANCE(18);
      if (lookahead == 10803)
        ADVANCE(18);
      if (lookahead == 10804)
        ADVANCE(18);
      if (lookahead == 10805)
        ADVANCE(18);
      if (lookahead == 10806)
        ADVANCE(18);
      if (lookahead == 10807)
        ADVANCE(18);
      if (lookahead == 10808)
        ADVANCE(18);
      if (lookahead == 10809)
        ADVANCE(30);
      if (lookahead == 10810)
        ADVANCE(30);
      if (lookahead == 10811)
        ADVANCE(18);
      if (lookahead == 10812)
        ADVANCE(18);
      if (lookahead == 10813)
        ADVANCE(18);
      if (lookahead == 10816)
        ADVANCE(18);
      if (lookahead == 10817)
        ADVANCE(30);
      if (lookahead == 10818)
        ADVANCE(30);
      if (lookahead == 10819)
        ADVANCE(18);
      if (lookahead == 10820)
        ADVANCE(18);
      if (lookahead == 10821)
        ADVANCE(30);
      if (lookahead == 10826)
        ADVANCE(30);
      if (lookahead == 10827)
        ADVANCE(18);
      if (lookahead == 10828)
        ADVANCE(30);
      if (lookahead == 10829)
        ADVANCE(18);
      if (lookahead == 10830)
        ADVANCE(18);
      if (lookahead == 10831)
        ADVANCE(30);
      if (lookahead == 10832)
        ADVANCE(30);
      if (lookahead == 10833)
        ADVANCE(18);
      if (lookahead == 10834)
        ADVANCE(30);
      if (lookahead == 10835)
        ADVANCE(18);
      if (lookahead == 10836)
        ADVANCE(30);
      if (lookahead == 10837)
        ADVANCE(18);
      if (lookahead == 10838)
        ADVANCE(30);
      if (lookahead == 10839)
        ADVANCE(30);
      if (lookahead == 10840)
        ADVANCE(18);
      if (lookahead == 10842)
        ADVANCE(18);
      if (lookahead == 10843)
        ADVANCE(30);
      if (lookahead == 10844)
        ADVANCE(18);
      if (lookahead == 10845)
        ADVANCE(30);
      if (lookahead == 10846)
        ADVANCE(18);
      if (lookahead == 10847)
        ADVANCE(18);
      if (lookahead == 10848)
        ADVANCE(18);
      if (lookahead == 10849)
        ADVANCE(30);
      if (lookahead == 10850)
        ADVANCE(30);
      if (lookahead == 10851)
        ADVANCE(30);
      if (lookahead == 10868)
        ADVANCE(29);
      if (lookahead == 10971)
        ADVANCE(18);
      if (lookahead == 11056)
        ADVANCE(31);
      if (lookahead == 11057)
        ADVANCE(31);
      if (lookahead == 11058)
        ADVANCE(31);
      if (lookahead == 11059)
        ADVANCE(31);
      if (lookahead == 11060)
        ADVANCE(31);
      if (lookahead == 11061)
        ADVANCE(31);
      if (lookahead == 11062)
        ADVANCE(31);
      if (lookahead == 11063)
        ADVANCE(31);
      if (lookahead == 11064)
        ADVANCE(31);
      if (lookahead == 11065)
        ADVANCE(31);
      if (lookahead == 11066)
        ADVANCE(31);
      if (lookahead == 11067)
        ADVANCE(31);
      if (lookahead == 11068)
        ADVANCE(31);
      if (lookahead == 11069)
        ADVANCE(31);
      if (lookahead == 11070)
        ADVANCE(31);
      if (lookahead == 11071)
        ADVANCE(31);
      if (lookahead == 11072)
        ADVANCE(31);
      if (lookahead == 11073)
        ADVANCE(31);
      if (lookahead == 11074)
        ADVANCE(31);
      if (lookahead == 11075)
        ADVANCE(31);
      if (lookahead == 11076)
        ADVANCE(31);
      if (lookahead == 11079)
        ADVANCE(31);
      if (lookahead == 11080)
        ADVANCE(31);
      if (lookahead == 11081)
        ADVANCE(31);
      if (lookahead == 11082)
        ADVANCE(31);
      if (lookahead == 11083)
        ADVANCE(31);
      if (lookahead == 11084)
        ADVANCE(31);
      if (lookahead == 65513)
        ADVANCE(31);
      if (lookahead == 65515)
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(114);
      END_STATE();
    case 115:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(4);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == ':')
        ADVANCE(57);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(16);
      if (lookahead == '>')
        ADVANCE(17);
      if (lookahead == '\\')
        ADVANCE(18);
      if (lookahead == '^')
        ADVANCE(19);
      if (lookahead == 'f')
        ADVANCE(21);
      if (lookahead == 'i')
        ADVANCE(22);
      if (lookahead == 'm')
        ADVANCE(23);
      if (lookahead == 's')
        ADVANCE(24);
      if (lookahead == 'u')
        ADVANCE(25);
      if (lookahead == '{')
        ADVANCE(26);
      if (lookahead == '|')
        ADVANCE(27);
      if (lookahead == '}')
        ADVANCE(28);
      if (lookahead == '~')
        ADVANCE(29);
      if (lookahead == 177)
        ADVANCE(30);
      if (lookahead == 215)
        ADVANCE(18);
      if (lookahead == 247)
        ADVANCE(5);
      if (lookahead == 8523)
        ADVANCE(18);
      if (lookahead == 8592)
        ADVANCE(31);
      if (lookahead == 8594)
        ADVANCE(31);
      if (lookahead == 8596)
        ADVANCE(31);
      if (lookahead == 8602)
        ADVANCE(31);
      if (lookahead == 8603)
        ADVANCE(31);
      if (lookahead == 8604)
        ADVANCE(31);
      if (lookahead == 8605)
        ADVANCE(31);
      if (lookahead == 8606)
        ADVANCE(31);
      if (lookahead == 8608)
        ADVANCE(31);
      if (lookahead == 8610)
        ADVANCE(31);
      if (lookahead == 8611)
        ADVANCE(31);
      if (lookahead == 8612)
        ADVANCE(31);
      if (lookahead == 8614)
        ADVANCE(31);
      if (lookahead == 8617)
        ADVANCE(31);
      if (lookahead == 8618)
        ADVANCE(31);
      if (lookahead == 8619)
        ADVANCE(31);
      if (lookahead == 8620)
        ADVANCE(31);
      if (lookahead == 8622)
        ADVANCE(31);
      if (lookahead == 8636)
        ADVANCE(31);
      if (lookahead == 8637)
        ADVANCE(31);
      if (lookahead == 8640)
        ADVANCE(31);
      if (lookahead == 8641)
        ADVANCE(31);
      if (lookahead == 8644)
        ADVANCE(31);
      if (lookahead == 8646)
        ADVANCE(31);
      if (lookahead == 8647)
        ADVANCE(31);
      if (lookahead == 8649)
        ADVANCE(31);
      if (lookahead == 8651)
        ADVANCE(31);
      if (lookahead == 8652)
        ADVANCE(31);
      if (lookahead == 8653)
        ADVANCE(31);
      if (lookahead == 8654)
        ADVANCE(31);
      if (lookahead == 8655)
        ADVANCE(31);
      if (lookahead == 8656)
        ADVANCE(31);
      if (lookahead == 8658)
        ADVANCE(31);
      if (lookahead == 8660)
        ADVANCE(31);
      if (lookahead == 8666)
        ADVANCE(31);
      if (lookahead == 8667)
        ADVANCE(31);
      if (lookahead == 8668)
        ADVANCE(31);
      if (lookahead == 8669)
        ADVANCE(31);
      if (lookahead == 8672)
        ADVANCE(31);
      if (lookahead == 8674)
        ADVANCE(31);
      if (lookahead == 8692)
        ADVANCE(31);
      if (lookahead == 8694)
        ADVANCE(31);
      if (lookahead == 8695)
        ADVANCE(31);
      if (lookahead == 8696)
        ADVANCE(31);
      if (lookahead == 8697)
        ADVANCE(31);
      if (lookahead == 8698)
        ADVANCE(31);
      if (lookahead == 8699)
        ADVANCE(31);
      if (lookahead == 8700)
        ADVANCE(31);
      if (lookahead == 8701)
        ADVANCE(31);
      if (lookahead == 8702)
        ADVANCE(31);
      if (lookahead == 8703)
        ADVANCE(31);
      if (lookahead == 8723)
        ADVANCE(30);
      if (lookahead == 8724)
        ADVANCE(30);
      if (lookahead == 8727)
        ADVANCE(18);
      if (lookahead == 8728)
        ADVANCE(18);
      if (lookahead == 8729)
        ADVANCE(18);
      if (lookahead == 8740)
        ADVANCE(18);
      if (lookahead == 8743)
        ADVANCE(18);
      if (lookahead == 8744)
        ADVANCE(30);
      if (lookahead == 8745)
        ADVANCE(18);
      if (lookahead == 8746)
        ADVANCE(30);
      if (lookahead == 8760)
        ADVANCE(30);
      if (lookahead == 8768)
        ADVANCE(18);
      if (lookahead == 8770)
        ADVANCE(30);
      if (lookahead == 8783)
        ADVANCE(30);
      if (lookahead == 8788)
        ADVANCE(29);
      if (lookahead == 8789)
        ADVANCE(29);
      if (lookahead == 8845)
        ADVANCE(18);
      if (lookahead == 8846)
        ADVANCE(30);
      if (lookahead == 8851)
        ADVANCE(18);
      if (lookahead == 8852)
        ADVANCE(30);
      if (lookahead == 8853)
        ADVANCE(30);
      if (lookahead == 8854)
        ADVANCE(30);
      if (lookahead == 8855)
        ADVANCE(18);
      if (lookahead == 8856)
        ADVANCE(18);
      if (lookahead == 8857)
        ADVANCE(18);
      if (lookahead == 8858)
        ADVANCE(18);
      if (lookahead == 8859)
        ADVANCE(18);
      if (lookahead == 8862)
        ADVANCE(30);
      if (lookahead == 8863)
        ADVANCE(30);
      if (lookahead == 8864)
        ADVANCE(18);
      if (lookahead == 8865)
        ADVANCE(18);
      if (lookahead == 8891)
        ADVANCE(4);
      if (lookahead == 8892)
        ADVANCE(18);
      if (lookahead == 8893)
        ADVANCE(30);
      if (lookahead == 8900)
        ADVANCE(18);
      if (lookahead == 8901)
        ADVANCE(18);
      if (lookahead == 8902)
        ADVANCE(18);
      if (lookahead == 8903)
        ADVANCE(18);
      if (lookahead == 8905)
        ADVANCE(18);
      if (lookahead == 8906)
        ADVANCE(18);
      if (lookahead == 8907)
        ADVANCE(18);
      if (lookahead == 8908)
        ADVANCE(18);
      if (lookahead == 8910)
        ADVANCE(30);
      if (lookahead == 8911)
        ADVANCE(18);
      if (lookahead == 8914)
        ADVANCE(18);
      if (lookahead == 8915)
        ADVANCE(30);
      if (lookahead == 9655)
        ADVANCE(18);
      if (lookahead == 10193)
        ADVANCE(18);
      if (lookahead == 10197)
        ADVANCE(18);
      if (lookahead == 10198)
        ADVANCE(18);
      if (lookahead == 10199)
        ADVANCE(18);
      if (lookahead == 10229)
        ADVANCE(31);
      if (lookahead == 10230)
        ADVANCE(31);
      if (lookahead == 10231)
        ADVANCE(31);
      if (lookahead == 10233)
        ADVANCE(31);
      if (lookahead == 10234)
        ADVANCE(31);
      if (lookahead == 10235)
        ADVANCE(31);
      if (lookahead == 10236)
        ADVANCE(31);
      if (lookahead == 10237)
        ADVANCE(31);
      if (lookahead == 10238)
        ADVANCE(31);
      if (lookahead == 10239)
        ADVANCE(31);
      if (lookahead == 10496)
        ADVANCE(31);
      if (lookahead == 10497)
        ADVANCE(31);
      if (lookahead == 10498)
        ADVANCE(31);
      if (lookahead == 10499)
        ADVANCE(31);
      if (lookahead == 10500)
        ADVANCE(31);
      if (lookahead == 10501)
        ADVANCE(31);
      if (lookahead == 10502)
        ADVANCE(31);
      if (lookahead == 10503)
        ADVANCE(31);
      if (lookahead == 10508)
        ADVANCE(31);
      if (lookahead == 10509)
        ADVANCE(31);
      if (lookahead == 10510)
        ADVANCE(31);
      if (lookahead == 10511)
        ADVANCE(31);
      if (lookahead == 10512)
        ADVANCE(31);
      if (lookahead == 10513)
        ADVANCE(31);
      if (lookahead == 10516)
        ADVANCE(31);
      if (lookahead == 10517)
        ADVANCE(31);
      if (lookahead == 10518)
        ADVANCE(31);
      if (lookahead == 10519)
        ADVANCE(31);
      if (lookahead == 10520)
        ADVANCE(31);
      if (lookahead == 10525)
        ADVANCE(31);
      if (lookahead == 10526)
        ADVANCE(31);
      if (lookahead == 10527)
        ADVANCE(31);
      if (lookahead == 10528)
        ADVANCE(31);
      if (lookahead == 10564)
        ADVANCE(31);
      if (lookahead == 10565)
        ADVANCE(31);
      if (lookahead == 10566)
        ADVANCE(31);
      if (lookahead == 10567)
        ADVANCE(31);
      if (lookahead == 10568)
        ADVANCE(31);
      if (lookahead == 10570)
        ADVANCE(31);
      if (lookahead == 10571)
        ADVANCE(31);
      if (lookahead == 10574)
        ADVANCE(31);
      if (lookahead == 10576)
        ADVANCE(31);
      if (lookahead == 10578)
        ADVANCE(31);
      if (lookahead == 10579)
        ADVANCE(31);
      if (lookahead == 10582)
        ADVANCE(31);
      if (lookahead == 10583)
        ADVANCE(31);
      if (lookahead == 10586)
        ADVANCE(31);
      if (lookahead == 10587)
        ADVANCE(31);
      if (lookahead == 10590)
        ADVANCE(31);
      if (lookahead == 10591)
        ADVANCE(31);
      if (lookahead == 10594)
        ADVANCE(31);
      if (lookahead == 10596)
        ADVANCE(31);
      if (lookahead == 10598)
        ADVANCE(31);
      if (lookahead == 10599)
        ADVANCE(31);
      if (lookahead == 10600)
        ADVANCE(31);
      if (lookahead == 10601)
        ADVANCE(31);
      if (lookahead == 10602)
        ADVANCE(31);
      if (lookahead == 10603)
        ADVANCE(31);
      if (lookahead == 10604)
        ADVANCE(31);
      if (lookahead == 10605)
        ADVANCE(31);
      if (lookahead == 10608)
        ADVANCE(31);
      if (lookahead == 10680)
        ADVANCE(18);
      if (lookahead == 10684)
        ADVANCE(18);
      if (lookahead == 10686)
        ADVANCE(18);
      if (lookahead == 10687)
        ADVANCE(18);
      if (lookahead == 10740)
        ADVANCE(31);
      if (lookahead == 10742)
        ADVANCE(18);
      if (lookahead == 10743)
        ADVANCE(18);
      if (lookahead == 10746)
        ADVANCE(30);
      if (lookahead == 10747)
        ADVANCE(30);
      if (lookahead == 10759)
        ADVANCE(18);
      if (lookahead == 10760)
        ADVANCE(30);
      if (lookahead == 10781)
        ADVANCE(18);
      if (lookahead == 10786)
        ADVANCE(30);
      if (lookahead == 10787)
        ADVANCE(30);
      if (lookahead == 10788)
        ADVANCE(30);
      if (lookahead == 10789)
        ADVANCE(30);
      if (lookahead == 10790)
        ADVANCE(30);
      if (lookahead == 10791)
        ADVANCE(30);
      if (lookahead == 10792)
        ADVANCE(30);
      if (lookahead == 10793)
        ADVANCE(30);
      if (lookahead == 10794)
        ADVANCE(30);
      if (lookahead == 10795)
        ADVANCE(30);
      if (lookahead == 10796)
        ADVANCE(30);
      if (lookahead == 10797)
        ADVANCE(30);
      if (lookahead == 10798)
        ADVANCE(30);
      if (lookahead == 10800)
        ADVANCE(18);
      if (lookahead == 10801)
        ADVANCE(18);
      if (lookahead == 10802)
        ADVANCE(18);
      if (lookahead == 10803)
        ADVANCE(18);
      if (lookahead == 10804)
        ADVANCE(18);
      if (lookahead == 10805)
        ADVANCE(18);
      if (lookahead == 10806)
        ADVANCE(18);
      if (lookahead == 10807)
        ADVANCE(18);
      if (lookahead == 10808)
        ADVANCE(18);
      if (lookahead == 10809)
        ADVANCE(30);
      if (lookahead == 10810)
        ADVANCE(30);
      if (lookahead == 10811)
        ADVANCE(18);
      if (lookahead == 10812)
        ADVANCE(18);
      if (lookahead == 10813)
        ADVANCE(18);
      if (lookahead == 10816)
        ADVANCE(18);
      if (lookahead == 10817)
        ADVANCE(30);
      if (lookahead == 10818)
        ADVANCE(30);
      if (lookahead == 10819)
        ADVANCE(18);
      if (lookahead == 10820)
        ADVANCE(18);
      if (lookahead == 10821)
        ADVANCE(30);
      if (lookahead == 10826)
        ADVANCE(30);
      if (lookahead == 10827)
        ADVANCE(18);
      if (lookahead == 10828)
        ADVANCE(30);
      if (lookahead == 10829)
        ADVANCE(18);
      if (lookahead == 10830)
        ADVANCE(18);
      if (lookahead == 10831)
        ADVANCE(30);
      if (lookahead == 10832)
        ADVANCE(30);
      if (lookahead == 10833)
        ADVANCE(18);
      if (lookahead == 10834)
        ADVANCE(30);
      if (lookahead == 10835)
        ADVANCE(18);
      if (lookahead == 10836)
        ADVANCE(30);
      if (lookahead == 10837)
        ADVANCE(18);
      if (lookahead == 10838)
        ADVANCE(30);
      if (lookahead == 10839)
        ADVANCE(30);
      if (lookahead == 10840)
        ADVANCE(18);
      if (lookahead == 10842)
        ADVANCE(18);
      if (lookahead == 10843)
        ADVANCE(30);
      if (lookahead == 10844)
        ADVANCE(18);
      if (lookahead == 10845)
        ADVANCE(30);
      if (lookahead == 10846)
        ADVANCE(18);
      if (lookahead == 10847)
        ADVANCE(18);
      if (lookahead == 10848)
        ADVANCE(18);
      if (lookahead == 10849)
        ADVANCE(30);
      if (lookahead == 10850)
        ADVANCE(30);
      if (lookahead == 10851)
        ADVANCE(30);
      if (lookahead == 10868)
        ADVANCE(29);
      if (lookahead == 10971)
        ADVANCE(18);
      if (lookahead == 11056)
        ADVANCE(31);
      if (lookahead == 11057)
        ADVANCE(31);
      if (lookahead == 11058)
        ADVANCE(31);
      if (lookahead == 11059)
        ADVANCE(31);
      if (lookahead == 11060)
        ADVANCE(31);
      if (lookahead == 11061)
        ADVANCE(31);
      if (lookahead == 11062)
        ADVANCE(31);
      if (lookahead == 11063)
        ADVANCE(31);
      if (lookahead == 11064)
        ADVANCE(31);
      if (lookahead == 11065)
        ADVANCE(31);
      if (lookahead == 11066)
        ADVANCE(31);
      if (lookahead == 11067)
        ADVANCE(31);
      if (lookahead == 11068)
        ADVANCE(31);
      if (lookahead == 11069)
        ADVANCE(31);
      if (lookahead == 11070)
        ADVANCE(31);
      if (lookahead == 11071)
        ADVANCE(31);
      if (lookahead == 11072)
        ADVANCE(31);
      if (lookahead == 11073)
        ADVANCE(31);
      if (lookahead == 11074)
        ADVANCE(31);
      if (lookahead == 11075)
        ADVANCE(31);
      if (lookahead == 11076)
        ADVANCE(31);
      if (lookahead == 11079)
        ADVANCE(31);
      if (lookahead == 11080)
        ADVANCE(31);
      if (lookahead == 11081)
        ADVANCE(31);
      if (lookahead == 11082)
        ADVANCE(31);
      if (lookahead == 11083)
        ADVANCE(31);
      if (lookahead == 11084)
        ADVANCE(31);
      if (lookahead == 65513)
        ADVANCE(31);
      if (lookahead == 65515)
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(115);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 116:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(4);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == ':')
        ADVANCE(57);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(16);
      if (lookahead == '>')
        ADVANCE(17);
      if (lookahead == '\\')
        ADVANCE(18);
      if (lookahead == '^')
        ADVANCE(19);
      if (lookahead == '{')
        ADVANCE(26);
      if (lookahead == '|')
        ADVANCE(27);
      if (lookahead == '}')
        ADVANCE(28);
      if (lookahead == '~')
        ADVANCE(29);
      if (lookahead == 177)
        ADVANCE(30);
      if (lookahead == 215)
        ADVANCE(18);
      if (lookahead == 247)
        ADVANCE(5);
      if (lookahead == 8523)
        ADVANCE(18);
      if (lookahead == 8592)
        ADVANCE(31);
      if (lookahead == 8594)
        ADVANCE(31);
      if (lookahead == 8596)
        ADVANCE(31);
      if (lookahead == 8602)
        ADVANCE(31);
      if (lookahead == 8603)
        ADVANCE(31);
      if (lookahead == 8604)
        ADVANCE(31);
      if (lookahead == 8605)
        ADVANCE(31);
      if (lookahead == 8606)
        ADVANCE(31);
      if (lookahead == 8608)
        ADVANCE(31);
      if (lookahead == 8610)
        ADVANCE(31);
      if (lookahead == 8611)
        ADVANCE(31);
      if (lookahead == 8612)
        ADVANCE(31);
      if (lookahead == 8614)
        ADVANCE(31);
      if (lookahead == 8617)
        ADVANCE(31);
      if (lookahead == 8618)
        ADVANCE(31);
      if (lookahead == 8619)
        ADVANCE(31);
      if (lookahead == 8620)
        ADVANCE(31);
      if (lookahead == 8622)
        ADVANCE(31);
      if (lookahead == 8636)
        ADVANCE(31);
      if (lookahead == 8637)
        ADVANCE(31);
      if (lookahead == 8640)
        ADVANCE(31);
      if (lookahead == 8641)
        ADVANCE(31);
      if (lookahead == 8644)
        ADVANCE(31);
      if (lookahead == 8646)
        ADVANCE(31);
      if (lookahead == 8647)
        ADVANCE(31);
      if (lookahead == 8649)
        ADVANCE(31);
      if (lookahead == 8651)
        ADVANCE(31);
      if (lookahead == 8652)
        ADVANCE(31);
      if (lookahead == 8653)
        ADVANCE(31);
      if (lookahead == 8654)
        ADVANCE(31);
      if (lookahead == 8655)
        ADVANCE(31);
      if (lookahead == 8656)
        ADVANCE(31);
      if (lookahead == 8658)
        ADVANCE(31);
      if (lookahead == 8660)
        ADVANCE(31);
      if (lookahead == 8666)
        ADVANCE(31);
      if (lookahead == 8667)
        ADVANCE(31);
      if (lookahead == 8668)
        ADVANCE(31);
      if (lookahead == 8669)
        ADVANCE(31);
      if (lookahead == 8672)
        ADVANCE(31);
      if (lookahead == 8674)
        ADVANCE(31);
      if (lookahead == 8692)
        ADVANCE(31);
      if (lookahead == 8694)
        ADVANCE(31);
      if (lookahead == 8695)
        ADVANCE(31);
      if (lookahead == 8696)
        ADVANCE(31);
      if (lookahead == 8697)
        ADVANCE(31);
      if (lookahead == 8698)
        ADVANCE(31);
      if (lookahead == 8699)
        ADVANCE(31);
      if (lookahead == 8700)
        ADVANCE(31);
      if (lookahead == 8701)
        ADVANCE(31);
      if (lookahead == 8702)
        ADVANCE(31);
      if (lookahead == 8703)
        ADVANCE(31);
      if (lookahead == 8723)
        ADVANCE(30);
      if (lookahead == 8724)
        ADVANCE(30);
      if (lookahead == 8727)
        ADVANCE(18);
      if (lookahead == 8728)
        ADVANCE(18);
      if (lookahead == 8729)
        ADVANCE(18);
      if (lookahead == 8740)
        ADVANCE(18);
      if (lookahead == 8743)
        ADVANCE(18);
      if (lookahead == 8744)
        ADVANCE(30);
      if (lookahead == 8745)
        ADVANCE(18);
      if (lookahead == 8746)
        ADVANCE(30);
      if (lookahead == 8760)
        ADVANCE(30);
      if (lookahead == 8768)
        ADVANCE(18);
      if (lookahead == 8770)
        ADVANCE(30);
      if (lookahead == 8783)
        ADVANCE(30);
      if (lookahead == 8788)
        ADVANCE(29);
      if (lookahead == 8789)
        ADVANCE(29);
      if (lookahead == 8845)
        ADVANCE(18);
      if (lookahead == 8846)
        ADVANCE(30);
      if (lookahead == 8851)
        ADVANCE(18);
      if (lookahead == 8852)
        ADVANCE(30);
      if (lookahead == 8853)
        ADVANCE(30);
      if (lookahead == 8854)
        ADVANCE(30);
      if (lookahead == 8855)
        ADVANCE(18);
      if (lookahead == 8856)
        ADVANCE(18);
      if (lookahead == 8857)
        ADVANCE(18);
      if (lookahead == 8858)
        ADVANCE(18);
      if (lookahead == 8859)
        ADVANCE(18);
      if (lookahead == 8862)
        ADVANCE(30);
      if (lookahead == 8863)
        ADVANCE(30);
      if (lookahead == 8864)
        ADVANCE(18);
      if (lookahead == 8865)
        ADVANCE(18);
      if (lookahead == 8891)
        ADVANCE(4);
      if (lookahead == 8892)
        ADVANCE(18);
      if (lookahead == 8893)
        ADVANCE(30);
      if (lookahead == 8900)
        ADVANCE(18);
      if (lookahead == 8901)
        ADVANCE(18);
      if (lookahead == 8902)
        ADVANCE(18);
      if (lookahead == 8903)
        ADVANCE(18);
      if (lookahead == 8905)
        ADVANCE(18);
      if (lookahead == 8906)
        ADVANCE(18);
      if (lookahead == 8907)
        ADVANCE(18);
      if (lookahead == 8908)
        ADVANCE(18);
      if (lookahead == 8910)
        ADVANCE(30);
      if (lookahead == 8911)
        ADVANCE(18);
      if (lookahead == 8914)
        ADVANCE(18);
      if (lookahead == 8915)
        ADVANCE(30);
      if (lookahead == 9655)
        ADVANCE(18);
      if (lookahead == 10193)
        ADVANCE(18);
      if (lookahead == 10197)
        ADVANCE(18);
      if (lookahead == 10198)
        ADVANCE(18);
      if (lookahead == 10199)
        ADVANCE(18);
      if (lookahead == 10229)
        ADVANCE(31);
      if (lookahead == 10230)
        ADVANCE(31);
      if (lookahead == 10231)
        ADVANCE(31);
      if (lookahead == 10233)
        ADVANCE(31);
      if (lookahead == 10234)
        ADVANCE(31);
      if (lookahead == 10235)
        ADVANCE(31);
      if (lookahead == 10236)
        ADVANCE(31);
      if (lookahead == 10237)
        ADVANCE(31);
      if (lookahead == 10238)
        ADVANCE(31);
      if (lookahead == 10239)
        ADVANCE(31);
      if (lookahead == 10496)
        ADVANCE(31);
      if (lookahead == 10497)
        ADVANCE(31);
      if (lookahead == 10498)
        ADVANCE(31);
      if (lookahead == 10499)
        ADVANCE(31);
      if (lookahead == 10500)
        ADVANCE(31);
      if (lookahead == 10501)
        ADVANCE(31);
      if (lookahead == 10502)
        ADVANCE(31);
      if (lookahead == 10503)
        ADVANCE(31);
      if (lookahead == 10508)
        ADVANCE(31);
      if (lookahead == 10509)
        ADVANCE(31);
      if (lookahead == 10510)
        ADVANCE(31);
      if (lookahead == 10511)
        ADVANCE(31);
      if (lookahead == 10512)
        ADVANCE(31);
      if (lookahead == 10513)
        ADVANCE(31);
      if (lookahead == 10516)
        ADVANCE(31);
      if (lookahead == 10517)
        ADVANCE(31);
      if (lookahead == 10518)
        ADVANCE(31);
      if (lookahead == 10519)
        ADVANCE(31);
      if (lookahead == 10520)
        ADVANCE(31);
      if (lookahead == 10525)
        ADVANCE(31);
      if (lookahead == 10526)
        ADVANCE(31);
      if (lookahead == 10527)
        ADVANCE(31);
      if (lookahead == 10528)
        ADVANCE(31);
      if (lookahead == 10564)
        ADVANCE(31);
      if (lookahead == 10565)
        ADVANCE(31);
      if (lookahead == 10566)
        ADVANCE(31);
      if (lookahead == 10567)
        ADVANCE(31);
      if (lookahead == 10568)
        ADVANCE(31);
      if (lookahead == 10570)
        ADVANCE(31);
      if (lookahead == 10571)
        ADVANCE(31);
      if (lookahead == 10574)
        ADVANCE(31);
      if (lookahead == 10576)
        ADVANCE(31);
      if (lookahead == 10578)
        ADVANCE(31);
      if (lookahead == 10579)
        ADVANCE(31);
      if (lookahead == 10582)
        ADVANCE(31);
      if (lookahead == 10583)
        ADVANCE(31);
      if (lookahead == 10586)
        ADVANCE(31);
      if (lookahead == 10587)
        ADVANCE(31);
      if (lookahead == 10590)
        ADVANCE(31);
      if (lookahead == 10591)
        ADVANCE(31);
      if (lookahead == 10594)
        ADVANCE(31);
      if (lookahead == 10596)
        ADVANCE(31);
      if (lookahead == 10598)
        ADVANCE(31);
      if (lookahead == 10599)
        ADVANCE(31);
      if (lookahead == 10600)
        ADVANCE(31);
      if (lookahead == 10601)
        ADVANCE(31);
      if (lookahead == 10602)
        ADVANCE(31);
      if (lookahead == 10603)
        ADVANCE(31);
      if (lookahead == 10604)
        ADVANCE(31);
      if (lookahead == 10605)
        ADVANCE(31);
      if (lookahead == 10608)
        ADVANCE(31);
      if (lookahead == 10680)
        ADVANCE(18);
      if (lookahead == 10684)
        ADVANCE(18);
      if (lookahead == 10686)
        ADVANCE(18);
      if (lookahead == 10687)
        ADVANCE(18);
      if (lookahead == 10740)
        ADVANCE(31);
      if (lookahead == 10742)
        ADVANCE(18);
      if (lookahead == 10743)
        ADVANCE(18);
      if (lookahead == 10746)
        ADVANCE(30);
      if (lookahead == 10747)
        ADVANCE(30);
      if (lookahead == 10759)
        ADVANCE(18);
      if (lookahead == 10760)
        ADVANCE(30);
      if (lookahead == 10781)
        ADVANCE(18);
      if (lookahead == 10786)
        ADVANCE(30);
      if (lookahead == 10787)
        ADVANCE(30);
      if (lookahead == 10788)
        ADVANCE(30);
      if (lookahead == 10789)
        ADVANCE(30);
      if (lookahead == 10790)
        ADVANCE(30);
      if (lookahead == 10791)
        ADVANCE(30);
      if (lookahead == 10792)
        ADVANCE(30);
      if (lookahead == 10793)
        ADVANCE(30);
      if (lookahead == 10794)
        ADVANCE(30);
      if (lookahead == 10795)
        ADVANCE(30);
      if (lookahead == 10796)
        ADVANCE(30);
      if (lookahead == 10797)
        ADVANCE(30);
      if (lookahead == 10798)
        ADVANCE(30);
      if (lookahead == 10800)
        ADVANCE(18);
      if (lookahead == 10801)
        ADVANCE(18);
      if (lookahead == 10802)
        ADVANCE(18);
      if (lookahead == 10803)
        ADVANCE(18);
      if (lookahead == 10804)
        ADVANCE(18);
      if (lookahead == 10805)
        ADVANCE(18);
      if (lookahead == 10806)
        ADVANCE(18);
      if (lookahead == 10807)
        ADVANCE(18);
      if (lookahead == 10808)
        ADVANCE(18);
      if (lookahead == 10809)
        ADVANCE(30);
      if (lookahead == 10810)
        ADVANCE(30);
      if (lookahead == 10811)
        ADVANCE(18);
      if (lookahead == 10812)
        ADVANCE(18);
      if (lookahead == 10813)
        ADVANCE(18);
      if (lookahead == 10816)
        ADVANCE(18);
      if (lookahead == 10817)
        ADVANCE(30);
      if (lookahead == 10818)
        ADVANCE(30);
      if (lookahead == 10819)
        ADVANCE(18);
      if (lookahead == 10820)
        ADVANCE(18);
      if (lookahead == 10821)
        ADVANCE(30);
      if (lookahead == 10826)
        ADVANCE(30);
      if (lookahead == 10827)
        ADVANCE(18);
      if (lookahead == 10828)
        ADVANCE(30);
      if (lookahead == 10829)
        ADVANCE(18);
      if (lookahead == 10830)
        ADVANCE(18);
      if (lookahead == 10831)
        ADVANCE(30);
      if (lookahead == 10832)
        ADVANCE(30);
      if (lookahead == 10833)
        ADVANCE(18);
      if (lookahead == 10834)
        ADVANCE(30);
      if (lookahead == 10835)
        ADVANCE(18);
      if (lookahead == 10836)
        ADVANCE(30);
      if (lookahead == 10837)
        ADVANCE(18);
      if (lookahead == 10838)
        ADVANCE(30);
      if (lookahead == 10839)
        ADVANCE(30);
      if (lookahead == 10840)
        ADVANCE(18);
      if (lookahead == 10842)
        ADVANCE(18);
      if (lookahead == 10843)
        ADVANCE(30);
      if (lookahead == 10844)
        ADVANCE(18);
      if (lookahead == 10845)
        ADVANCE(30);
      if (lookahead == 10846)
        ADVANCE(18);
      if (lookahead == 10847)
        ADVANCE(18);
      if (lookahead == 10848)
        ADVANCE(18);
      if (lookahead == 10849)
        ADVANCE(30);
      if (lookahead == 10850)
        ADVANCE(30);
      if (lookahead == 10851)
        ADVANCE(30);
      if (lookahead == 10868)
        ADVANCE(29);
      if (lookahead == 10971)
        ADVANCE(18);
      if (lookahead == 11056)
        ADVANCE(31);
      if (lookahead == 11057)
        ADVANCE(31);
      if (lookahead == 11058)
        ADVANCE(31);
      if (lookahead == 11059)
        ADVANCE(31);
      if (lookahead == 11060)
        ADVANCE(31);
      if (lookahead == 11061)
        ADVANCE(31);
      if (lookahead == 11062)
        ADVANCE(31);
      if (lookahead == 11063)
        ADVANCE(31);
      if (lookahead == 11064)
        ADVANCE(31);
      if (lookahead == 11065)
        ADVANCE(31);
      if (lookahead == 11066)
        ADVANCE(31);
      if (lookahead == 11067)
        ADVANCE(31);
      if (lookahead == 11068)
        ADVANCE(31);
      if (lookahead == 11069)
        ADVANCE(31);
      if (lookahead == 11070)
        ADVANCE(31);
      if (lookahead == 11071)
        ADVANCE(31);
      if (lookahead == 11072)
        ADVANCE(31);
      if (lookahead == 11073)
        ADVANCE(31);
      if (lookahead == 11074)
        ADVANCE(31);
      if (lookahead == 11075)
        ADVANCE(31);
      if (lookahead == 11076)
        ADVANCE(31);
      if (lookahead == 11079)
        ADVANCE(31);
      if (lookahead == 11080)
        ADVANCE(31);
      if (lookahead == 11081)
        ADVANCE(31);
      if (lookahead == 11082)
        ADVANCE(31);
      if (lookahead == 11083)
        ADVANCE(31);
      if (lookahead == 11084)
        ADVANCE(31);
      if (lookahead == 65513)
        ADVANCE(31);
      if (lookahead == 65515)
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(116);
      END_STATE();
    case 117:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(4);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == ':')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(16);
      if (lookahead == '>')
        ADVANCE(17);
      if (lookahead == '\\')
        ADVANCE(18);
      if (lookahead == '^')
        ADVANCE(19);
      if (lookahead == 'f')
        ADVANCE(21);
      if (lookahead == 'i')
        ADVANCE(22);
      if (lookahead == 'm')
        ADVANCE(23);
      if (lookahead == 's')
        ADVANCE(24);
      if (lookahead == 'u')
        ADVANCE(25);
      if (lookahead == '|')
        ADVANCE(27);
      if (lookahead == '}')
        ADVANCE(28);
      if (lookahead == '~')
        ADVANCE(29);
      if (lookahead == 177)
        ADVANCE(30);
      if (lookahead == 215)
        ADVANCE(18);
      if (lookahead == 247)
        ADVANCE(5);
      if (lookahead == 8523)
        ADVANCE(18);
      if (lookahead == 8592)
        ADVANCE(31);
      if (lookahead == 8594)
        ADVANCE(31);
      if (lookahead == 8596)
        ADVANCE(31);
      if (lookahead == 8602)
        ADVANCE(31);
      if (lookahead == 8603)
        ADVANCE(31);
      if (lookahead == 8604)
        ADVANCE(31);
      if (lookahead == 8605)
        ADVANCE(31);
      if (lookahead == 8606)
        ADVANCE(31);
      if (lookahead == 8608)
        ADVANCE(31);
      if (lookahead == 8610)
        ADVANCE(31);
      if (lookahead == 8611)
        ADVANCE(31);
      if (lookahead == 8612)
        ADVANCE(31);
      if (lookahead == 8614)
        ADVANCE(31);
      if (lookahead == 8617)
        ADVANCE(31);
      if (lookahead == 8618)
        ADVANCE(31);
      if (lookahead == 8619)
        ADVANCE(31);
      if (lookahead == 8620)
        ADVANCE(31);
      if (lookahead == 8622)
        ADVANCE(31);
      if (lookahead == 8636)
        ADVANCE(31);
      if (lookahead == 8637)
        ADVANCE(31);
      if (lookahead == 8640)
        ADVANCE(31);
      if (lookahead == 8641)
        ADVANCE(31);
      if (lookahead == 8644)
        ADVANCE(31);
      if (lookahead == 8646)
        ADVANCE(31);
      if (lookahead == 8647)
        ADVANCE(31);
      if (lookahead == 8649)
        ADVANCE(31);
      if (lookahead == 8651)
        ADVANCE(31);
      if (lookahead == 8652)
        ADVANCE(31);
      if (lookahead == 8653)
        ADVANCE(31);
      if (lookahead == 8654)
        ADVANCE(31);
      if (lookahead == 8655)
        ADVANCE(31);
      if (lookahead == 8656)
        ADVANCE(31);
      if (lookahead == 8658)
        ADVANCE(31);
      if (lookahead == 8660)
        ADVANCE(31);
      if (lookahead == 8666)
        ADVANCE(31);
      if (lookahead == 8667)
        ADVANCE(31);
      if (lookahead == 8668)
        ADVANCE(31);
      if (lookahead == 8669)
        ADVANCE(31);
      if (lookahead == 8672)
        ADVANCE(31);
      if (lookahead == 8674)
        ADVANCE(31);
      if (lookahead == 8692)
        ADVANCE(31);
      if (lookahead == 8694)
        ADVANCE(31);
      if (lookahead == 8695)
        ADVANCE(31);
      if (lookahead == 8696)
        ADVANCE(31);
      if (lookahead == 8697)
        ADVANCE(31);
      if (lookahead == 8698)
        ADVANCE(31);
      if (lookahead == 8699)
        ADVANCE(31);
      if (lookahead == 8700)
        ADVANCE(31);
      if (lookahead == 8701)
        ADVANCE(31);
      if (lookahead == 8702)
        ADVANCE(31);
      if (lookahead == 8703)
        ADVANCE(31);
      if (lookahead == 8723)
        ADVANCE(30);
      if (lookahead == 8724)
        ADVANCE(30);
      if (lookahead == 8727)
        ADVANCE(18);
      if (lookahead == 8728)
        ADVANCE(18);
      if (lookahead == 8729)
        ADVANCE(18);
      if (lookahead == 8740)
        ADVANCE(18);
      if (lookahead == 8743)
        ADVANCE(18);
      if (lookahead == 8744)
        ADVANCE(30);
      if (lookahead == 8745)
        ADVANCE(18);
      if (lookahead == 8746)
        ADVANCE(30);
      if (lookahead == 8760)
        ADVANCE(30);
      if (lookahead == 8768)
        ADVANCE(18);
      if (lookahead == 8770)
        ADVANCE(30);
      if (lookahead == 8783)
        ADVANCE(30);
      if (lookahead == 8788)
        ADVANCE(29);
      if (lookahead == 8789)
        ADVANCE(29);
      if (lookahead == 8845)
        ADVANCE(18);
      if (lookahead == 8846)
        ADVANCE(30);
      if (lookahead == 8851)
        ADVANCE(18);
      if (lookahead == 8852)
        ADVANCE(30);
      if (lookahead == 8853)
        ADVANCE(30);
      if (lookahead == 8854)
        ADVANCE(30);
      if (lookahead == 8855)
        ADVANCE(18);
      if (lookahead == 8856)
        ADVANCE(18);
      if (lookahead == 8857)
        ADVANCE(18);
      if (lookahead == 8858)
        ADVANCE(18);
      if (lookahead == 8859)
        ADVANCE(18);
      if (lookahead == 8862)
        ADVANCE(30);
      if (lookahead == 8863)
        ADVANCE(30);
      if (lookahead == 8864)
        ADVANCE(18);
      if (lookahead == 8865)
        ADVANCE(18);
      if (lookahead == 8891)
        ADVANCE(4);
      if (lookahead == 8892)
        ADVANCE(18);
      if (lookahead == 8893)
        ADVANCE(30);
      if (lookahead == 8900)
        ADVANCE(18);
      if (lookahead == 8901)
        ADVANCE(18);
      if (lookahead == 8902)
        ADVANCE(18);
      if (lookahead == 8903)
        ADVANCE(18);
      if (lookahead == 8905)
        ADVANCE(18);
      if (lookahead == 8906)
        ADVANCE(18);
      if (lookahead == 8907)
        ADVANCE(18);
      if (lookahead == 8908)
        ADVANCE(18);
      if (lookahead == 8910)
        ADVANCE(30);
      if (lookahead == 8911)
        ADVANCE(18);
      if (lookahead == 8914)
        ADVANCE(18);
      if (lookahead == 8915)
        ADVANCE(30);
      if (lookahead == 9655)
        ADVANCE(18);
      if (lookahead == 10193)
        ADVANCE(18);
      if (lookahead == 10197)
        ADVANCE(18);
      if (lookahead == 10198)
        ADVANCE(18);
      if (lookahead == 10199)
        ADVANCE(18);
      if (lookahead == 10229)
        ADVANCE(31);
      if (lookahead == 10230)
        ADVANCE(31);
      if (lookahead == 10231)
        ADVANCE(31);
      if (lookahead == 10233)
        ADVANCE(31);
      if (lookahead == 10234)
        ADVANCE(31);
      if (lookahead == 10235)
        ADVANCE(31);
      if (lookahead == 10236)
        ADVANCE(31);
      if (lookahead == 10237)
        ADVANCE(31);
      if (lookahead == 10238)
        ADVANCE(31);
      if (lookahead == 10239)
        ADVANCE(31);
      if (lookahead == 10496)
        ADVANCE(31);
      if (lookahead == 10497)
        ADVANCE(31);
      if (lookahead == 10498)
        ADVANCE(31);
      if (lookahead == 10499)
        ADVANCE(31);
      if (lookahead == 10500)
        ADVANCE(31);
      if (lookahead == 10501)
        ADVANCE(31);
      if (lookahead == 10502)
        ADVANCE(31);
      if (lookahead == 10503)
        ADVANCE(31);
      if (lookahead == 10508)
        ADVANCE(31);
      if (lookahead == 10509)
        ADVANCE(31);
      if (lookahead == 10510)
        ADVANCE(31);
      if (lookahead == 10511)
        ADVANCE(31);
      if (lookahead == 10512)
        ADVANCE(31);
      if (lookahead == 10513)
        ADVANCE(31);
      if (lookahead == 10516)
        ADVANCE(31);
      if (lookahead == 10517)
        ADVANCE(31);
      if (lookahead == 10518)
        ADVANCE(31);
      if (lookahead == 10519)
        ADVANCE(31);
      if (lookahead == 10520)
        ADVANCE(31);
      if (lookahead == 10525)
        ADVANCE(31);
      if (lookahead == 10526)
        ADVANCE(31);
      if (lookahead == 10527)
        ADVANCE(31);
      if (lookahead == 10528)
        ADVANCE(31);
      if (lookahead == 10564)
        ADVANCE(31);
      if (lookahead == 10565)
        ADVANCE(31);
      if (lookahead == 10566)
        ADVANCE(31);
      if (lookahead == 10567)
        ADVANCE(31);
      if (lookahead == 10568)
        ADVANCE(31);
      if (lookahead == 10570)
        ADVANCE(31);
      if (lookahead == 10571)
        ADVANCE(31);
      if (lookahead == 10574)
        ADVANCE(31);
      if (lookahead == 10576)
        ADVANCE(31);
      if (lookahead == 10578)
        ADVANCE(31);
      if (lookahead == 10579)
        ADVANCE(31);
      if (lookahead == 10582)
        ADVANCE(31);
      if (lookahead == 10583)
        ADVANCE(31);
      if (lookahead == 10586)
        ADVANCE(31);
      if (lookahead == 10587)
        ADVANCE(31);
      if (lookahead == 10590)
        ADVANCE(31);
      if (lookahead == 10591)
        ADVANCE(31);
      if (lookahead == 10594)
        ADVANCE(31);
      if (lookahead == 10596)
        ADVANCE(31);
      if (lookahead == 10598)
        ADVANCE(31);
      if (lookahead == 10599)
        ADVANCE(31);
      if (lookahead == 10600)
        ADVANCE(31);
      if (lookahead == 10601)
        ADVANCE(31);
      if (lookahead == 10602)
        ADVANCE(31);
      if (lookahead == 10603)
        ADVANCE(31);
      if (lookahead == 10604)
        ADVANCE(31);
      if (lookahead == 10605)
        ADVANCE(31);
      if (lookahead == 10608)
        ADVANCE(31);
      if (lookahead == 10680)
        ADVANCE(18);
      if (lookahead == 10684)
        ADVANCE(18);
      if (lookahead == 10686)
        ADVANCE(18);
      if (lookahead == 10687)
        ADVANCE(18);
      if (lookahead == 10740)
        ADVANCE(31);
      if (lookahead == 10742)
        ADVANCE(18);
      if (lookahead == 10743)
        ADVANCE(18);
      if (lookahead == 10746)
        ADVANCE(30);
      if (lookahead == 10747)
        ADVANCE(30);
      if (lookahead == 10759)
        ADVANCE(18);
      if (lookahead == 10760)
        ADVANCE(30);
      if (lookahead == 10781)
        ADVANCE(18);
      if (lookahead == 10786)
        ADVANCE(30);
      if (lookahead == 10787)
        ADVANCE(30);
      if (lookahead == 10788)
        ADVANCE(30);
      if (lookahead == 10789)
        ADVANCE(30);
      if (lookahead == 10790)
        ADVANCE(30);
      if (lookahead == 10791)
        ADVANCE(30);
      if (lookahead == 10792)
        ADVANCE(30);
      if (lookahead == 10793)
        ADVANCE(30);
      if (lookahead == 10794)
        ADVANCE(30);
      if (lookahead == 10795)
        ADVANCE(30);
      if (lookahead == 10796)
        ADVANCE(30);
      if (lookahead == 10797)
        ADVANCE(30);
      if (lookahead == 10798)
        ADVANCE(30);
      if (lookahead == 10800)
        ADVANCE(18);
      if (lookahead == 10801)
        ADVANCE(18);
      if (lookahead == 10802)
        ADVANCE(18);
      if (lookahead == 10803)
        ADVANCE(18);
      if (lookahead == 10804)
        ADVANCE(18);
      if (lookahead == 10805)
        ADVANCE(18);
      if (lookahead == 10806)
        ADVANCE(18);
      if (lookahead == 10807)
        ADVANCE(18);
      if (lookahead == 10808)
        ADVANCE(18);
      if (lookahead == 10809)
        ADVANCE(30);
      if (lookahead == 10810)
        ADVANCE(30);
      if (lookahead == 10811)
        ADVANCE(18);
      if (lookahead == 10812)
        ADVANCE(18);
      if (lookahead == 10813)
        ADVANCE(18);
      if (lookahead == 10816)
        ADVANCE(18);
      if (lookahead == 10817)
        ADVANCE(30);
      if (lookahead == 10818)
        ADVANCE(30);
      if (lookahead == 10819)
        ADVANCE(18);
      if (lookahead == 10820)
        ADVANCE(18);
      if (lookahead == 10821)
        ADVANCE(30);
      if (lookahead == 10826)
        ADVANCE(30);
      if (lookahead == 10827)
        ADVANCE(18);
      if (lookahead == 10828)
        ADVANCE(30);
      if (lookahead == 10829)
        ADVANCE(18);
      if (lookahead == 10830)
        ADVANCE(18);
      if (lookahead == 10831)
        ADVANCE(30);
      if (lookahead == 10832)
        ADVANCE(30);
      if (lookahead == 10833)
        ADVANCE(18);
      if (lookahead == 10834)
        ADVANCE(30);
      if (lookahead == 10835)
        ADVANCE(18);
      if (lookahead == 10836)
        ADVANCE(30);
      if (lookahead == 10837)
        ADVANCE(18);
      if (lookahead == 10838)
        ADVANCE(30);
      if (lookahead == 10839)
        ADVANCE(30);
      if (lookahead == 10840)
        ADVANCE(18);
      if (lookahead == 10842)
        ADVANCE(18);
      if (lookahead == 10843)
        ADVANCE(30);
      if (lookahead == 10844)
        ADVANCE(18);
      if (lookahead == 10845)
        ADVANCE(30);
      if (lookahead == 10846)
        ADVANCE(18);
      if (lookahead == 10847)
        ADVANCE(18);
      if (lookahead == 10848)
        ADVANCE(18);
      if (lookahead == 10849)
        ADVANCE(30);
      if (lookahead == 10850)
        ADVANCE(30);
      if (lookahead == 10851)
        ADVANCE(30);
      if (lookahead == 10868)
        ADVANCE(29);
      if (lookahead == 10971)
        ADVANCE(18);
      if (lookahead == 11056)
        ADVANCE(31);
      if (lookahead == 11057)
        ADVANCE(31);
      if (lookahead == 11058)
        ADVANCE(31);
      if (lookahead == 11059)
        ADVANCE(31);
      if (lookahead == 11060)
        ADVANCE(31);
      if (lookahead == 11061)
        ADVANCE(31);
      if (lookahead == 11062)
        ADVANCE(31);
      if (lookahead == 11063)
        ADVANCE(31);
      if (lookahead == 11064)
        ADVANCE(31);
      if (lookahead == 11065)
        ADVANCE(31);
      if (lookahead == 11066)
        ADVANCE(31);
      if (lookahead == 11067)
        ADVANCE(31);
      if (lookahead == 11068)
        ADVANCE(31);
      if (lookahead == 11069)
        ADVANCE(31);
      if (lookahead == 11070)
        ADVANCE(31);
      if (lookahead == 11071)
        ADVANCE(31);
      if (lookahead == 11072)
        ADVANCE(31);
      if (lookahead == 11073)
        ADVANCE(31);
      if (lookahead == 11074)
        ADVANCE(31);
      if (lookahead == 11075)
        ADVANCE(31);
      if (lookahead == 11076)
        ADVANCE(31);
      if (lookahead == 11079)
        ADVANCE(31);
      if (lookahead == 11080)
        ADVANCE(31);
      if (lookahead == 11081)
        ADVANCE(31);
      if (lookahead == 11082)
        ADVANCE(31);
      if (lookahead == 11083)
        ADVANCE(31);
      if (lookahead == 11084)
        ADVANCE(31);
      if (lookahead == 65513)
        ADVANCE(31);
      if (lookahead == 65515)
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(118);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 118:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(4);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == ':')
        ADVANCE(57);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(16);
      if (lookahead == '>')
        ADVANCE(17);
      if (lookahead == '\\')
        ADVANCE(18);
      if (lookahead == '^')
        ADVANCE(19);
      if (lookahead == 'f')
        ADVANCE(21);
      if (lookahead == 'i')
        ADVANCE(22);
      if (lookahead == 'm')
        ADVANCE(23);
      if (lookahead == 's')
        ADVANCE(24);
      if (lookahead == 'u')
        ADVANCE(25);
      if (lookahead == '|')
        ADVANCE(27);
      if (lookahead == '}')
        ADVANCE(28);
      if (lookahead == '~')
        ADVANCE(29);
      if (lookahead == 177)
        ADVANCE(30);
      if (lookahead == 215)
        ADVANCE(18);
      if (lookahead == 247)
        ADVANCE(5);
      if (lookahead == 8523)
        ADVANCE(18);
      if (lookahead == 8592)
        ADVANCE(31);
      if (lookahead == 8594)
        ADVANCE(31);
      if (lookahead == 8596)
        ADVANCE(31);
      if (lookahead == 8602)
        ADVANCE(31);
      if (lookahead == 8603)
        ADVANCE(31);
      if (lookahead == 8604)
        ADVANCE(31);
      if (lookahead == 8605)
        ADVANCE(31);
      if (lookahead == 8606)
        ADVANCE(31);
      if (lookahead == 8608)
        ADVANCE(31);
      if (lookahead == 8610)
        ADVANCE(31);
      if (lookahead == 8611)
        ADVANCE(31);
      if (lookahead == 8612)
        ADVANCE(31);
      if (lookahead == 8614)
        ADVANCE(31);
      if (lookahead == 8617)
        ADVANCE(31);
      if (lookahead == 8618)
        ADVANCE(31);
      if (lookahead == 8619)
        ADVANCE(31);
      if (lookahead == 8620)
        ADVANCE(31);
      if (lookahead == 8622)
        ADVANCE(31);
      if (lookahead == 8636)
        ADVANCE(31);
      if (lookahead == 8637)
        ADVANCE(31);
      if (lookahead == 8640)
        ADVANCE(31);
      if (lookahead == 8641)
        ADVANCE(31);
      if (lookahead == 8644)
        ADVANCE(31);
      if (lookahead == 8646)
        ADVANCE(31);
      if (lookahead == 8647)
        ADVANCE(31);
      if (lookahead == 8649)
        ADVANCE(31);
      if (lookahead == 8651)
        ADVANCE(31);
      if (lookahead == 8652)
        ADVANCE(31);
      if (lookahead == 8653)
        ADVANCE(31);
      if (lookahead == 8654)
        ADVANCE(31);
      if (lookahead == 8655)
        ADVANCE(31);
      if (lookahead == 8656)
        ADVANCE(31);
      if (lookahead == 8658)
        ADVANCE(31);
      if (lookahead == 8660)
        ADVANCE(31);
      if (lookahead == 8666)
        ADVANCE(31);
      if (lookahead == 8667)
        ADVANCE(31);
      if (lookahead == 8668)
        ADVANCE(31);
      if (lookahead == 8669)
        ADVANCE(31);
      if (lookahead == 8672)
        ADVANCE(31);
      if (lookahead == 8674)
        ADVANCE(31);
      if (lookahead == 8692)
        ADVANCE(31);
      if (lookahead == 8694)
        ADVANCE(31);
      if (lookahead == 8695)
        ADVANCE(31);
      if (lookahead == 8696)
        ADVANCE(31);
      if (lookahead == 8697)
        ADVANCE(31);
      if (lookahead == 8698)
        ADVANCE(31);
      if (lookahead == 8699)
        ADVANCE(31);
      if (lookahead == 8700)
        ADVANCE(31);
      if (lookahead == 8701)
        ADVANCE(31);
      if (lookahead == 8702)
        ADVANCE(31);
      if (lookahead == 8703)
        ADVANCE(31);
      if (lookahead == 8723)
        ADVANCE(30);
      if (lookahead == 8724)
        ADVANCE(30);
      if (lookahead == 8727)
        ADVANCE(18);
      if (lookahead == 8728)
        ADVANCE(18);
      if (lookahead == 8729)
        ADVANCE(18);
      if (lookahead == 8740)
        ADVANCE(18);
      if (lookahead == 8743)
        ADVANCE(18);
      if (lookahead == 8744)
        ADVANCE(30);
      if (lookahead == 8745)
        ADVANCE(18);
      if (lookahead == 8746)
        ADVANCE(30);
      if (lookahead == 8760)
        ADVANCE(30);
      if (lookahead == 8768)
        ADVANCE(18);
      if (lookahead == 8770)
        ADVANCE(30);
      if (lookahead == 8783)
        ADVANCE(30);
      if (lookahead == 8788)
        ADVANCE(29);
      if (lookahead == 8789)
        ADVANCE(29);
      if (lookahead == 8845)
        ADVANCE(18);
      if (lookahead == 8846)
        ADVANCE(30);
      if (lookahead == 8851)
        ADVANCE(18);
      if (lookahead == 8852)
        ADVANCE(30);
      if (lookahead == 8853)
        ADVANCE(30);
      if (lookahead == 8854)
        ADVANCE(30);
      if (lookahead == 8855)
        ADVANCE(18);
      if (lookahead == 8856)
        ADVANCE(18);
      if (lookahead == 8857)
        ADVANCE(18);
      if (lookahead == 8858)
        ADVANCE(18);
      if (lookahead == 8859)
        ADVANCE(18);
      if (lookahead == 8862)
        ADVANCE(30);
      if (lookahead == 8863)
        ADVANCE(30);
      if (lookahead == 8864)
        ADVANCE(18);
      if (lookahead == 8865)
        ADVANCE(18);
      if (lookahead == 8891)
        ADVANCE(4);
      if (lookahead == 8892)
        ADVANCE(18);
      if (lookahead == 8893)
        ADVANCE(30);
      if (lookahead == 8900)
        ADVANCE(18);
      if (lookahead == 8901)
        ADVANCE(18);
      if (lookahead == 8902)
        ADVANCE(18);
      if (lookahead == 8903)
        ADVANCE(18);
      if (lookahead == 8905)
        ADVANCE(18);
      if (lookahead == 8906)
        ADVANCE(18);
      if (lookahead == 8907)
        ADVANCE(18);
      if (lookahead == 8908)
        ADVANCE(18);
      if (lookahead == 8910)
        ADVANCE(30);
      if (lookahead == 8911)
        ADVANCE(18);
      if (lookahead == 8914)
        ADVANCE(18);
      if (lookahead == 8915)
        ADVANCE(30);
      if (lookahead == 9655)
        ADVANCE(18);
      if (lookahead == 10193)
        ADVANCE(18);
      if (lookahead == 10197)
        ADVANCE(18);
      if (lookahead == 10198)
        ADVANCE(18);
      if (lookahead == 10199)
        ADVANCE(18);
      if (lookahead == 10229)
        ADVANCE(31);
      if (lookahead == 10230)
        ADVANCE(31);
      if (lookahead == 10231)
        ADVANCE(31);
      if (lookahead == 10233)
        ADVANCE(31);
      if (lookahead == 10234)
        ADVANCE(31);
      if (lookahead == 10235)
        ADVANCE(31);
      if (lookahead == 10236)
        ADVANCE(31);
      if (lookahead == 10237)
        ADVANCE(31);
      if (lookahead == 10238)
        ADVANCE(31);
      if (lookahead == 10239)
        ADVANCE(31);
      if (lookahead == 10496)
        ADVANCE(31);
      if (lookahead == 10497)
        ADVANCE(31);
      if (lookahead == 10498)
        ADVANCE(31);
      if (lookahead == 10499)
        ADVANCE(31);
      if (lookahead == 10500)
        ADVANCE(31);
      if (lookahead == 10501)
        ADVANCE(31);
      if (lookahead == 10502)
        ADVANCE(31);
      if (lookahead == 10503)
        ADVANCE(31);
      if (lookahead == 10508)
        ADVANCE(31);
      if (lookahead == 10509)
        ADVANCE(31);
      if (lookahead == 10510)
        ADVANCE(31);
      if (lookahead == 10511)
        ADVANCE(31);
      if (lookahead == 10512)
        ADVANCE(31);
      if (lookahead == 10513)
        ADVANCE(31);
      if (lookahead == 10516)
        ADVANCE(31);
      if (lookahead == 10517)
        ADVANCE(31);
      if (lookahead == 10518)
        ADVANCE(31);
      if (lookahead == 10519)
        ADVANCE(31);
      if (lookahead == 10520)
        ADVANCE(31);
      if (lookahead == 10525)
        ADVANCE(31);
      if (lookahead == 10526)
        ADVANCE(31);
      if (lookahead == 10527)
        ADVANCE(31);
      if (lookahead == 10528)
        ADVANCE(31);
      if (lookahead == 10564)
        ADVANCE(31);
      if (lookahead == 10565)
        ADVANCE(31);
      if (lookahead == 10566)
        ADVANCE(31);
      if (lookahead == 10567)
        ADVANCE(31);
      if (lookahead == 10568)
        ADVANCE(31);
      if (lookahead == 10570)
        ADVANCE(31);
      if (lookahead == 10571)
        ADVANCE(31);
      if (lookahead == 10574)
        ADVANCE(31);
      if (lookahead == 10576)
        ADVANCE(31);
      if (lookahead == 10578)
        ADVANCE(31);
      if (lookahead == 10579)
        ADVANCE(31);
      if (lookahead == 10582)
        ADVANCE(31);
      if (lookahead == 10583)
        ADVANCE(31);
      if (lookahead == 10586)
        ADVANCE(31);
      if (lookahead == 10587)
        ADVANCE(31);
      if (lookahead == 10590)
        ADVANCE(31);
      if (lookahead == 10591)
        ADVANCE(31);
      if (lookahead == 10594)
        ADVANCE(31);
      if (lookahead == 10596)
        ADVANCE(31);
      if (lookahead == 10598)
        ADVANCE(31);
      if (lookahead == 10599)
        ADVANCE(31);
      if (lookahead == 10600)
        ADVANCE(31);
      if (lookahead == 10601)
        ADVANCE(31);
      if (lookahead == 10602)
        ADVANCE(31);
      if (lookahead == 10603)
        ADVANCE(31);
      if (lookahead == 10604)
        ADVANCE(31);
      if (lookahead == 10605)
        ADVANCE(31);
      if (lookahead == 10608)
        ADVANCE(31);
      if (lookahead == 10680)
        ADVANCE(18);
      if (lookahead == 10684)
        ADVANCE(18);
      if (lookahead == 10686)
        ADVANCE(18);
      if (lookahead == 10687)
        ADVANCE(18);
      if (lookahead == 10740)
        ADVANCE(31);
      if (lookahead == 10742)
        ADVANCE(18);
      if (lookahead == 10743)
        ADVANCE(18);
      if (lookahead == 10746)
        ADVANCE(30);
      if (lookahead == 10747)
        ADVANCE(30);
      if (lookahead == 10759)
        ADVANCE(18);
      if (lookahead == 10760)
        ADVANCE(30);
      if (lookahead == 10781)
        ADVANCE(18);
      if (lookahead == 10786)
        ADVANCE(30);
      if (lookahead == 10787)
        ADVANCE(30);
      if (lookahead == 10788)
        ADVANCE(30);
      if (lookahead == 10789)
        ADVANCE(30);
      if (lookahead == 10790)
        ADVANCE(30);
      if (lookahead == 10791)
        ADVANCE(30);
      if (lookahead == 10792)
        ADVANCE(30);
      if (lookahead == 10793)
        ADVANCE(30);
      if (lookahead == 10794)
        ADVANCE(30);
      if (lookahead == 10795)
        ADVANCE(30);
      if (lookahead == 10796)
        ADVANCE(30);
      if (lookahead == 10797)
        ADVANCE(30);
      if (lookahead == 10798)
        ADVANCE(30);
      if (lookahead == 10800)
        ADVANCE(18);
      if (lookahead == 10801)
        ADVANCE(18);
      if (lookahead == 10802)
        ADVANCE(18);
      if (lookahead == 10803)
        ADVANCE(18);
      if (lookahead == 10804)
        ADVANCE(18);
      if (lookahead == 10805)
        ADVANCE(18);
      if (lookahead == 10806)
        ADVANCE(18);
      if (lookahead == 10807)
        ADVANCE(18);
      if (lookahead == 10808)
        ADVANCE(18);
      if (lookahead == 10809)
        ADVANCE(30);
      if (lookahead == 10810)
        ADVANCE(30);
      if (lookahead == 10811)
        ADVANCE(18);
      if (lookahead == 10812)
        ADVANCE(18);
      if (lookahead == 10813)
        ADVANCE(18);
      if (lookahead == 10816)
        ADVANCE(18);
      if (lookahead == 10817)
        ADVANCE(30);
      if (lookahead == 10818)
        ADVANCE(30);
      if (lookahead == 10819)
        ADVANCE(18);
      if (lookahead == 10820)
        ADVANCE(18);
      if (lookahead == 10821)
        ADVANCE(30);
      if (lookahead == 10826)
        ADVANCE(30);
      if (lookahead == 10827)
        ADVANCE(18);
      if (lookahead == 10828)
        ADVANCE(30);
      if (lookahead == 10829)
        ADVANCE(18);
      if (lookahead == 10830)
        ADVANCE(18);
      if (lookahead == 10831)
        ADVANCE(30);
      if (lookahead == 10832)
        ADVANCE(30);
      if (lookahead == 10833)
        ADVANCE(18);
      if (lookahead == 10834)
        ADVANCE(30);
      if (lookahead == 10835)
        ADVANCE(18);
      if (lookahead == 10836)
        ADVANCE(30);
      if (lookahead == 10837)
        ADVANCE(18);
      if (lookahead == 10838)
        ADVANCE(30);
      if (lookahead == 10839)
        ADVANCE(30);
      if (lookahead == 10840)
        ADVANCE(18);
      if (lookahead == 10842)
        ADVANCE(18);
      if (lookahead == 10843)
        ADVANCE(30);
      if (lookahead == 10844)
        ADVANCE(18);
      if (lookahead == 10845)
        ADVANCE(30);
      if (lookahead == 10846)
        ADVANCE(18);
      if (lookahead == 10847)
        ADVANCE(18);
      if (lookahead == 10848)
        ADVANCE(18);
      if (lookahead == 10849)
        ADVANCE(30);
      if (lookahead == 10850)
        ADVANCE(30);
      if (lookahead == 10851)
        ADVANCE(30);
      if (lookahead == 10868)
        ADVANCE(29);
      if (lookahead == 10971)
        ADVANCE(18);
      if (lookahead == 11056)
        ADVANCE(31);
      if (lookahead == 11057)
        ADVANCE(31);
      if (lookahead == 11058)
        ADVANCE(31);
      if (lookahead == 11059)
        ADVANCE(31);
      if (lookahead == 11060)
        ADVANCE(31);
      if (lookahead == 11061)
        ADVANCE(31);
      if (lookahead == 11062)
        ADVANCE(31);
      if (lookahead == 11063)
        ADVANCE(31);
      if (lookahead == 11064)
        ADVANCE(31);
      if (lookahead == 11065)
        ADVANCE(31);
      if (lookahead == 11066)
        ADVANCE(31);
      if (lookahead == 11067)
        ADVANCE(31);
      if (lookahead == 11068)
        ADVANCE(31);
      if (lookahead == 11069)
        ADVANCE(31);
      if (lookahead == 11070)
        ADVANCE(31);
      if (lookahead == 11071)
        ADVANCE(31);
      if (lookahead == 11072)
        ADVANCE(31);
      if (lookahead == 11073)
        ADVANCE(31);
      if (lookahead == 11074)
        ADVANCE(31);
      if (lookahead == 11075)
        ADVANCE(31);
      if (lookahead == 11076)
        ADVANCE(31);
      if (lookahead == 11079)
        ADVANCE(31);
      if (lookahead == 11080)
        ADVANCE(31);
      if (lookahead == 11081)
        ADVANCE(31);
      if (lookahead == 11082)
        ADVANCE(31);
      if (lookahead == 11083)
        ADVANCE(31);
      if (lookahead == 11084)
        ADVANCE(31);
      if (lookahead == 65513)
        ADVANCE(31);
      if (lookahead == 65515)
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(118);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 119:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(4);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == ':')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(16);
      if (lookahead == '>')
        ADVANCE(17);
      if (lookahead == '\\')
        ADVANCE(18);
      if (lookahead == '^')
        ADVANCE(19);
      if (lookahead == '|')
        ADVANCE(27);
      if (lookahead == '}')
        ADVANCE(28);
      if (lookahead == '~')
        ADVANCE(29);
      if (lookahead == 177)
        ADVANCE(30);
      if (lookahead == 215)
        ADVANCE(18);
      if (lookahead == 247)
        ADVANCE(5);
      if (lookahead == 8523)
        ADVANCE(18);
      if (lookahead == 8592)
        ADVANCE(31);
      if (lookahead == 8594)
        ADVANCE(31);
      if (lookahead == 8596)
        ADVANCE(31);
      if (lookahead == 8602)
        ADVANCE(31);
      if (lookahead == 8603)
        ADVANCE(31);
      if (lookahead == 8604)
        ADVANCE(31);
      if (lookahead == 8605)
        ADVANCE(31);
      if (lookahead == 8606)
        ADVANCE(31);
      if (lookahead == 8608)
        ADVANCE(31);
      if (lookahead == 8610)
        ADVANCE(31);
      if (lookahead == 8611)
        ADVANCE(31);
      if (lookahead == 8612)
        ADVANCE(31);
      if (lookahead == 8614)
        ADVANCE(31);
      if (lookahead == 8617)
        ADVANCE(31);
      if (lookahead == 8618)
        ADVANCE(31);
      if (lookahead == 8619)
        ADVANCE(31);
      if (lookahead == 8620)
        ADVANCE(31);
      if (lookahead == 8622)
        ADVANCE(31);
      if (lookahead == 8636)
        ADVANCE(31);
      if (lookahead == 8637)
        ADVANCE(31);
      if (lookahead == 8640)
        ADVANCE(31);
      if (lookahead == 8641)
        ADVANCE(31);
      if (lookahead == 8644)
        ADVANCE(31);
      if (lookahead == 8646)
        ADVANCE(31);
      if (lookahead == 8647)
        ADVANCE(31);
      if (lookahead == 8649)
        ADVANCE(31);
      if (lookahead == 8651)
        ADVANCE(31);
      if (lookahead == 8652)
        ADVANCE(31);
      if (lookahead == 8653)
        ADVANCE(31);
      if (lookahead == 8654)
        ADVANCE(31);
      if (lookahead == 8655)
        ADVANCE(31);
      if (lookahead == 8656)
        ADVANCE(31);
      if (lookahead == 8658)
        ADVANCE(31);
      if (lookahead == 8660)
        ADVANCE(31);
      if (lookahead == 8666)
        ADVANCE(31);
      if (lookahead == 8667)
        ADVANCE(31);
      if (lookahead == 8668)
        ADVANCE(31);
      if (lookahead == 8669)
        ADVANCE(31);
      if (lookahead == 8672)
        ADVANCE(31);
      if (lookahead == 8674)
        ADVANCE(31);
      if (lookahead == 8692)
        ADVANCE(31);
      if (lookahead == 8694)
        ADVANCE(31);
      if (lookahead == 8695)
        ADVANCE(31);
      if (lookahead == 8696)
        ADVANCE(31);
      if (lookahead == 8697)
        ADVANCE(31);
      if (lookahead == 8698)
        ADVANCE(31);
      if (lookahead == 8699)
        ADVANCE(31);
      if (lookahead == 8700)
        ADVANCE(31);
      if (lookahead == 8701)
        ADVANCE(31);
      if (lookahead == 8702)
        ADVANCE(31);
      if (lookahead == 8703)
        ADVANCE(31);
      if (lookahead == 8723)
        ADVANCE(30);
      if (lookahead == 8724)
        ADVANCE(30);
      if (lookahead == 8727)
        ADVANCE(18);
      if (lookahead == 8728)
        ADVANCE(18);
      if (lookahead == 8729)
        ADVANCE(18);
      if (lookahead == 8740)
        ADVANCE(18);
      if (lookahead == 8743)
        ADVANCE(18);
      if (lookahead == 8744)
        ADVANCE(30);
      if (lookahead == 8745)
        ADVANCE(18);
      if (lookahead == 8746)
        ADVANCE(30);
      if (lookahead == 8760)
        ADVANCE(30);
      if (lookahead == 8768)
        ADVANCE(18);
      if (lookahead == 8770)
        ADVANCE(30);
      if (lookahead == 8783)
        ADVANCE(30);
      if (lookahead == 8788)
        ADVANCE(29);
      if (lookahead == 8789)
        ADVANCE(29);
      if (lookahead == 8845)
        ADVANCE(18);
      if (lookahead == 8846)
        ADVANCE(30);
      if (lookahead == 8851)
        ADVANCE(18);
      if (lookahead == 8852)
        ADVANCE(30);
      if (lookahead == 8853)
        ADVANCE(30);
      if (lookahead == 8854)
        ADVANCE(30);
      if (lookahead == 8855)
        ADVANCE(18);
      if (lookahead == 8856)
        ADVANCE(18);
      if (lookahead == 8857)
        ADVANCE(18);
      if (lookahead == 8858)
        ADVANCE(18);
      if (lookahead == 8859)
        ADVANCE(18);
      if (lookahead == 8862)
        ADVANCE(30);
      if (lookahead == 8863)
        ADVANCE(30);
      if (lookahead == 8864)
        ADVANCE(18);
      if (lookahead == 8865)
        ADVANCE(18);
      if (lookahead == 8891)
        ADVANCE(4);
      if (lookahead == 8892)
        ADVANCE(18);
      if (lookahead == 8893)
        ADVANCE(30);
      if (lookahead == 8900)
        ADVANCE(18);
      if (lookahead == 8901)
        ADVANCE(18);
      if (lookahead == 8902)
        ADVANCE(18);
      if (lookahead == 8903)
        ADVANCE(18);
      if (lookahead == 8905)
        ADVANCE(18);
      if (lookahead == 8906)
        ADVANCE(18);
      if (lookahead == 8907)
        ADVANCE(18);
      if (lookahead == 8908)
        ADVANCE(18);
      if (lookahead == 8910)
        ADVANCE(30);
      if (lookahead == 8911)
        ADVANCE(18);
      if (lookahead == 8914)
        ADVANCE(18);
      if (lookahead == 8915)
        ADVANCE(30);
      if (lookahead == 9655)
        ADVANCE(18);
      if (lookahead == 10193)
        ADVANCE(18);
      if (lookahead == 10197)
        ADVANCE(18);
      if (lookahead == 10198)
        ADVANCE(18);
      if (lookahead == 10199)
        ADVANCE(18);
      if (lookahead == 10229)
        ADVANCE(31);
      if (lookahead == 10230)
        ADVANCE(31);
      if (lookahead == 10231)
        ADVANCE(31);
      if (lookahead == 10233)
        ADVANCE(31);
      if (lookahead == 10234)
        ADVANCE(31);
      if (lookahead == 10235)
        ADVANCE(31);
      if (lookahead == 10236)
        ADVANCE(31);
      if (lookahead == 10237)
        ADVANCE(31);
      if (lookahead == 10238)
        ADVANCE(31);
      if (lookahead == 10239)
        ADVANCE(31);
      if (lookahead == 10496)
        ADVANCE(31);
      if (lookahead == 10497)
        ADVANCE(31);
      if (lookahead == 10498)
        ADVANCE(31);
      if (lookahead == 10499)
        ADVANCE(31);
      if (lookahead == 10500)
        ADVANCE(31);
      if (lookahead == 10501)
        ADVANCE(31);
      if (lookahead == 10502)
        ADVANCE(31);
      if (lookahead == 10503)
        ADVANCE(31);
      if (lookahead == 10508)
        ADVANCE(31);
      if (lookahead == 10509)
        ADVANCE(31);
      if (lookahead == 10510)
        ADVANCE(31);
      if (lookahead == 10511)
        ADVANCE(31);
      if (lookahead == 10512)
        ADVANCE(31);
      if (lookahead == 10513)
        ADVANCE(31);
      if (lookahead == 10516)
        ADVANCE(31);
      if (lookahead == 10517)
        ADVANCE(31);
      if (lookahead == 10518)
        ADVANCE(31);
      if (lookahead == 10519)
        ADVANCE(31);
      if (lookahead == 10520)
        ADVANCE(31);
      if (lookahead == 10525)
        ADVANCE(31);
      if (lookahead == 10526)
        ADVANCE(31);
      if (lookahead == 10527)
        ADVANCE(31);
      if (lookahead == 10528)
        ADVANCE(31);
      if (lookahead == 10564)
        ADVANCE(31);
      if (lookahead == 10565)
        ADVANCE(31);
      if (lookahead == 10566)
        ADVANCE(31);
      if (lookahead == 10567)
        ADVANCE(31);
      if (lookahead == 10568)
        ADVANCE(31);
      if (lookahead == 10570)
        ADVANCE(31);
      if (lookahead == 10571)
        ADVANCE(31);
      if (lookahead == 10574)
        ADVANCE(31);
      if (lookahead == 10576)
        ADVANCE(31);
      if (lookahead == 10578)
        ADVANCE(31);
      if (lookahead == 10579)
        ADVANCE(31);
      if (lookahead == 10582)
        ADVANCE(31);
      if (lookahead == 10583)
        ADVANCE(31);
      if (lookahead == 10586)
        ADVANCE(31);
      if (lookahead == 10587)
        ADVANCE(31);
      if (lookahead == 10590)
        ADVANCE(31);
      if (lookahead == 10591)
        ADVANCE(31);
      if (lookahead == 10594)
        ADVANCE(31);
      if (lookahead == 10596)
        ADVANCE(31);
      if (lookahead == 10598)
        ADVANCE(31);
      if (lookahead == 10599)
        ADVANCE(31);
      if (lookahead == 10600)
        ADVANCE(31);
      if (lookahead == 10601)
        ADVANCE(31);
      if (lookahead == 10602)
        ADVANCE(31);
      if (lookahead == 10603)
        ADVANCE(31);
      if (lookahead == 10604)
        ADVANCE(31);
      if (lookahead == 10605)
        ADVANCE(31);
      if (lookahead == 10608)
        ADVANCE(31);
      if (lookahead == 10680)
        ADVANCE(18);
      if (lookahead == 10684)
        ADVANCE(18);
      if (lookahead == 10686)
        ADVANCE(18);
      if (lookahead == 10687)
        ADVANCE(18);
      if (lookahead == 10740)
        ADVANCE(31);
      if (lookahead == 10742)
        ADVANCE(18);
      if (lookahead == 10743)
        ADVANCE(18);
      if (lookahead == 10746)
        ADVANCE(30);
      if (lookahead == 10747)
        ADVANCE(30);
      if (lookahead == 10759)
        ADVANCE(18);
      if (lookahead == 10760)
        ADVANCE(30);
      if (lookahead == 10781)
        ADVANCE(18);
      if (lookahead == 10786)
        ADVANCE(30);
      if (lookahead == 10787)
        ADVANCE(30);
      if (lookahead == 10788)
        ADVANCE(30);
      if (lookahead == 10789)
        ADVANCE(30);
      if (lookahead == 10790)
        ADVANCE(30);
      if (lookahead == 10791)
        ADVANCE(30);
      if (lookahead == 10792)
        ADVANCE(30);
      if (lookahead == 10793)
        ADVANCE(30);
      if (lookahead == 10794)
        ADVANCE(30);
      if (lookahead == 10795)
        ADVANCE(30);
      if (lookahead == 10796)
        ADVANCE(30);
      if (lookahead == 10797)
        ADVANCE(30);
      if (lookahead == 10798)
        ADVANCE(30);
      if (lookahead == 10800)
        ADVANCE(18);
      if (lookahead == 10801)
        ADVANCE(18);
      if (lookahead == 10802)
        ADVANCE(18);
      if (lookahead == 10803)
        ADVANCE(18);
      if (lookahead == 10804)
        ADVANCE(18);
      if (lookahead == 10805)
        ADVANCE(18);
      if (lookahead == 10806)
        ADVANCE(18);
      if (lookahead == 10807)
        ADVANCE(18);
      if (lookahead == 10808)
        ADVANCE(18);
      if (lookahead == 10809)
        ADVANCE(30);
      if (lookahead == 10810)
        ADVANCE(30);
      if (lookahead == 10811)
        ADVANCE(18);
      if (lookahead == 10812)
        ADVANCE(18);
      if (lookahead == 10813)
        ADVANCE(18);
      if (lookahead == 10816)
        ADVANCE(18);
      if (lookahead == 10817)
        ADVANCE(30);
      if (lookahead == 10818)
        ADVANCE(30);
      if (lookahead == 10819)
        ADVANCE(18);
      if (lookahead == 10820)
        ADVANCE(18);
      if (lookahead == 10821)
        ADVANCE(30);
      if (lookahead == 10826)
        ADVANCE(30);
      if (lookahead == 10827)
        ADVANCE(18);
      if (lookahead == 10828)
        ADVANCE(30);
      if (lookahead == 10829)
        ADVANCE(18);
      if (lookahead == 10830)
        ADVANCE(18);
      if (lookahead == 10831)
        ADVANCE(30);
      if (lookahead == 10832)
        ADVANCE(30);
      if (lookahead == 10833)
        ADVANCE(18);
      if (lookahead == 10834)
        ADVANCE(30);
      if (lookahead == 10835)
        ADVANCE(18);
      if (lookahead == 10836)
        ADVANCE(30);
      if (lookahead == 10837)
        ADVANCE(18);
      if (lookahead == 10838)
        ADVANCE(30);
      if (lookahead == 10839)
        ADVANCE(30);
      if (lookahead == 10840)
        ADVANCE(18);
      if (lookahead == 10842)
        ADVANCE(18);
      if (lookahead == 10843)
        ADVANCE(30);
      if (lookahead == 10844)
        ADVANCE(18);
      if (lookahead == 10845)
        ADVANCE(30);
      if (lookahead == 10846)
        ADVANCE(18);
      if (lookahead == 10847)
        ADVANCE(18);
      if (lookahead == 10848)
        ADVANCE(18);
      if (lookahead == 10849)
        ADVANCE(30);
      if (lookahead == 10850)
        ADVANCE(30);
      if (lookahead == 10851)
        ADVANCE(30);
      if (lookahead == 10868)
        ADVANCE(29);
      if (lookahead == 10971)
        ADVANCE(18);
      if (lookahead == 11056)
        ADVANCE(31);
      if (lookahead == 11057)
        ADVANCE(31);
      if (lookahead == 11058)
        ADVANCE(31);
      if (lookahead == 11059)
        ADVANCE(31);
      if (lookahead == 11060)
        ADVANCE(31);
      if (lookahead == 11061)
        ADVANCE(31);
      if (lookahead == 11062)
        ADVANCE(31);
      if (lookahead == 11063)
        ADVANCE(31);
      if (lookahead == 11064)
        ADVANCE(31);
      if (lookahead == 11065)
        ADVANCE(31);
      if (lookahead == 11066)
        ADVANCE(31);
      if (lookahead == 11067)
        ADVANCE(31);
      if (lookahead == 11068)
        ADVANCE(31);
      if (lookahead == 11069)
        ADVANCE(31);
      if (lookahead == 11070)
        ADVANCE(31);
      if (lookahead == 11071)
        ADVANCE(31);
      if (lookahead == 11072)
        ADVANCE(31);
      if (lookahead == 11073)
        ADVANCE(31);
      if (lookahead == 11074)
        ADVANCE(31);
      if (lookahead == 11075)
        ADVANCE(31);
      if (lookahead == 11076)
        ADVANCE(31);
      if (lookahead == 11079)
        ADVANCE(31);
      if (lookahead == 11080)
        ADVANCE(31);
      if (lookahead == 11081)
        ADVANCE(31);
      if (lookahead == 11082)
        ADVANCE(31);
      if (lookahead == 11083)
        ADVANCE(31);
      if (lookahead == 11084)
        ADVANCE(31);
      if (lookahead == 65513)
        ADVANCE(31);
      if (lookahead == 65515)
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(120);
      END_STATE();
    case 120:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(4);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == ':')
        ADVANCE(57);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(16);
      if (lookahead == '>')
        ADVANCE(17);
      if (lookahead == '\\')
        ADVANCE(18);
      if (lookahead == '^')
        ADVANCE(19);
      if (lookahead == '|')
        ADVANCE(27);
      if (lookahead == '}')
        ADVANCE(28);
      if (lookahead == '~')
        ADVANCE(29);
      if (lookahead == 177)
        ADVANCE(30);
      if (lookahead == 215)
        ADVANCE(18);
      if (lookahead == 247)
        ADVANCE(5);
      if (lookahead == 8523)
        ADVANCE(18);
      if (lookahead == 8592)
        ADVANCE(31);
      if (lookahead == 8594)
        ADVANCE(31);
      if (lookahead == 8596)
        ADVANCE(31);
      if (lookahead == 8602)
        ADVANCE(31);
      if (lookahead == 8603)
        ADVANCE(31);
      if (lookahead == 8604)
        ADVANCE(31);
      if (lookahead == 8605)
        ADVANCE(31);
      if (lookahead == 8606)
        ADVANCE(31);
      if (lookahead == 8608)
        ADVANCE(31);
      if (lookahead == 8610)
        ADVANCE(31);
      if (lookahead == 8611)
        ADVANCE(31);
      if (lookahead == 8612)
        ADVANCE(31);
      if (lookahead == 8614)
        ADVANCE(31);
      if (lookahead == 8617)
        ADVANCE(31);
      if (lookahead == 8618)
        ADVANCE(31);
      if (lookahead == 8619)
        ADVANCE(31);
      if (lookahead == 8620)
        ADVANCE(31);
      if (lookahead == 8622)
        ADVANCE(31);
      if (lookahead == 8636)
        ADVANCE(31);
      if (lookahead == 8637)
        ADVANCE(31);
      if (lookahead == 8640)
        ADVANCE(31);
      if (lookahead == 8641)
        ADVANCE(31);
      if (lookahead == 8644)
        ADVANCE(31);
      if (lookahead == 8646)
        ADVANCE(31);
      if (lookahead == 8647)
        ADVANCE(31);
      if (lookahead == 8649)
        ADVANCE(31);
      if (lookahead == 8651)
        ADVANCE(31);
      if (lookahead == 8652)
        ADVANCE(31);
      if (lookahead == 8653)
        ADVANCE(31);
      if (lookahead == 8654)
        ADVANCE(31);
      if (lookahead == 8655)
        ADVANCE(31);
      if (lookahead == 8656)
        ADVANCE(31);
      if (lookahead == 8658)
        ADVANCE(31);
      if (lookahead == 8660)
        ADVANCE(31);
      if (lookahead == 8666)
        ADVANCE(31);
      if (lookahead == 8667)
        ADVANCE(31);
      if (lookahead == 8668)
        ADVANCE(31);
      if (lookahead == 8669)
        ADVANCE(31);
      if (lookahead == 8672)
        ADVANCE(31);
      if (lookahead == 8674)
        ADVANCE(31);
      if (lookahead == 8692)
        ADVANCE(31);
      if (lookahead == 8694)
        ADVANCE(31);
      if (lookahead == 8695)
        ADVANCE(31);
      if (lookahead == 8696)
        ADVANCE(31);
      if (lookahead == 8697)
        ADVANCE(31);
      if (lookahead == 8698)
        ADVANCE(31);
      if (lookahead == 8699)
        ADVANCE(31);
      if (lookahead == 8700)
        ADVANCE(31);
      if (lookahead == 8701)
        ADVANCE(31);
      if (lookahead == 8702)
        ADVANCE(31);
      if (lookahead == 8703)
        ADVANCE(31);
      if (lookahead == 8723)
        ADVANCE(30);
      if (lookahead == 8724)
        ADVANCE(30);
      if (lookahead == 8727)
        ADVANCE(18);
      if (lookahead == 8728)
        ADVANCE(18);
      if (lookahead == 8729)
        ADVANCE(18);
      if (lookahead == 8740)
        ADVANCE(18);
      if (lookahead == 8743)
        ADVANCE(18);
      if (lookahead == 8744)
        ADVANCE(30);
      if (lookahead == 8745)
        ADVANCE(18);
      if (lookahead == 8746)
        ADVANCE(30);
      if (lookahead == 8760)
        ADVANCE(30);
      if (lookahead == 8768)
        ADVANCE(18);
      if (lookahead == 8770)
        ADVANCE(30);
      if (lookahead == 8783)
        ADVANCE(30);
      if (lookahead == 8788)
        ADVANCE(29);
      if (lookahead == 8789)
        ADVANCE(29);
      if (lookahead == 8845)
        ADVANCE(18);
      if (lookahead == 8846)
        ADVANCE(30);
      if (lookahead == 8851)
        ADVANCE(18);
      if (lookahead == 8852)
        ADVANCE(30);
      if (lookahead == 8853)
        ADVANCE(30);
      if (lookahead == 8854)
        ADVANCE(30);
      if (lookahead == 8855)
        ADVANCE(18);
      if (lookahead == 8856)
        ADVANCE(18);
      if (lookahead == 8857)
        ADVANCE(18);
      if (lookahead == 8858)
        ADVANCE(18);
      if (lookahead == 8859)
        ADVANCE(18);
      if (lookahead == 8862)
        ADVANCE(30);
      if (lookahead == 8863)
        ADVANCE(30);
      if (lookahead == 8864)
        ADVANCE(18);
      if (lookahead == 8865)
        ADVANCE(18);
      if (lookahead == 8891)
        ADVANCE(4);
      if (lookahead == 8892)
        ADVANCE(18);
      if (lookahead == 8893)
        ADVANCE(30);
      if (lookahead == 8900)
        ADVANCE(18);
      if (lookahead == 8901)
        ADVANCE(18);
      if (lookahead == 8902)
        ADVANCE(18);
      if (lookahead == 8903)
        ADVANCE(18);
      if (lookahead == 8905)
        ADVANCE(18);
      if (lookahead == 8906)
        ADVANCE(18);
      if (lookahead == 8907)
        ADVANCE(18);
      if (lookahead == 8908)
        ADVANCE(18);
      if (lookahead == 8910)
        ADVANCE(30);
      if (lookahead == 8911)
        ADVANCE(18);
      if (lookahead == 8914)
        ADVANCE(18);
      if (lookahead == 8915)
        ADVANCE(30);
      if (lookahead == 9655)
        ADVANCE(18);
      if (lookahead == 10193)
        ADVANCE(18);
      if (lookahead == 10197)
        ADVANCE(18);
      if (lookahead == 10198)
        ADVANCE(18);
      if (lookahead == 10199)
        ADVANCE(18);
      if (lookahead == 10229)
        ADVANCE(31);
      if (lookahead == 10230)
        ADVANCE(31);
      if (lookahead == 10231)
        ADVANCE(31);
      if (lookahead == 10233)
        ADVANCE(31);
      if (lookahead == 10234)
        ADVANCE(31);
      if (lookahead == 10235)
        ADVANCE(31);
      if (lookahead == 10236)
        ADVANCE(31);
      if (lookahead == 10237)
        ADVANCE(31);
      if (lookahead == 10238)
        ADVANCE(31);
      if (lookahead == 10239)
        ADVANCE(31);
      if (lookahead == 10496)
        ADVANCE(31);
      if (lookahead == 10497)
        ADVANCE(31);
      if (lookahead == 10498)
        ADVANCE(31);
      if (lookahead == 10499)
        ADVANCE(31);
      if (lookahead == 10500)
        ADVANCE(31);
      if (lookahead == 10501)
        ADVANCE(31);
      if (lookahead == 10502)
        ADVANCE(31);
      if (lookahead == 10503)
        ADVANCE(31);
      if (lookahead == 10508)
        ADVANCE(31);
      if (lookahead == 10509)
        ADVANCE(31);
      if (lookahead == 10510)
        ADVANCE(31);
      if (lookahead == 10511)
        ADVANCE(31);
      if (lookahead == 10512)
        ADVANCE(31);
      if (lookahead == 10513)
        ADVANCE(31);
      if (lookahead == 10516)
        ADVANCE(31);
      if (lookahead == 10517)
        ADVANCE(31);
      if (lookahead == 10518)
        ADVANCE(31);
      if (lookahead == 10519)
        ADVANCE(31);
      if (lookahead == 10520)
        ADVANCE(31);
      if (lookahead == 10525)
        ADVANCE(31);
      if (lookahead == 10526)
        ADVANCE(31);
      if (lookahead == 10527)
        ADVANCE(31);
      if (lookahead == 10528)
        ADVANCE(31);
      if (lookahead == 10564)
        ADVANCE(31);
      if (lookahead == 10565)
        ADVANCE(31);
      if (lookahead == 10566)
        ADVANCE(31);
      if (lookahead == 10567)
        ADVANCE(31);
      if (lookahead == 10568)
        ADVANCE(31);
      if (lookahead == 10570)
        ADVANCE(31);
      if (lookahead == 10571)
        ADVANCE(31);
      if (lookahead == 10574)
        ADVANCE(31);
      if (lookahead == 10576)
        ADVANCE(31);
      if (lookahead == 10578)
        ADVANCE(31);
      if (lookahead == 10579)
        ADVANCE(31);
      if (lookahead == 10582)
        ADVANCE(31);
      if (lookahead == 10583)
        ADVANCE(31);
      if (lookahead == 10586)
        ADVANCE(31);
      if (lookahead == 10587)
        ADVANCE(31);
      if (lookahead == 10590)
        ADVANCE(31);
      if (lookahead == 10591)
        ADVANCE(31);
      if (lookahead == 10594)
        ADVANCE(31);
      if (lookahead == 10596)
        ADVANCE(31);
      if (lookahead == 10598)
        ADVANCE(31);
      if (lookahead == 10599)
        ADVANCE(31);
      if (lookahead == 10600)
        ADVANCE(31);
      if (lookahead == 10601)
        ADVANCE(31);
      if (lookahead == 10602)
        ADVANCE(31);
      if (lookahead == 10603)
        ADVANCE(31);
      if (lookahead == 10604)
        ADVANCE(31);
      if (lookahead == 10605)
        ADVANCE(31);
      if (lookahead == 10608)
        ADVANCE(31);
      if (lookahead == 10680)
        ADVANCE(18);
      if (lookahead == 10684)
        ADVANCE(18);
      if (lookahead == 10686)
        ADVANCE(18);
      if (lookahead == 10687)
        ADVANCE(18);
      if (lookahead == 10740)
        ADVANCE(31);
      if (lookahead == 10742)
        ADVANCE(18);
      if (lookahead == 10743)
        ADVANCE(18);
      if (lookahead == 10746)
        ADVANCE(30);
      if (lookahead == 10747)
        ADVANCE(30);
      if (lookahead == 10759)
        ADVANCE(18);
      if (lookahead == 10760)
        ADVANCE(30);
      if (lookahead == 10781)
        ADVANCE(18);
      if (lookahead == 10786)
        ADVANCE(30);
      if (lookahead == 10787)
        ADVANCE(30);
      if (lookahead == 10788)
        ADVANCE(30);
      if (lookahead == 10789)
        ADVANCE(30);
      if (lookahead == 10790)
        ADVANCE(30);
      if (lookahead == 10791)
        ADVANCE(30);
      if (lookahead == 10792)
        ADVANCE(30);
      if (lookahead == 10793)
        ADVANCE(30);
      if (lookahead == 10794)
        ADVANCE(30);
      if (lookahead == 10795)
        ADVANCE(30);
      if (lookahead == 10796)
        ADVANCE(30);
      if (lookahead == 10797)
        ADVANCE(30);
      if (lookahead == 10798)
        ADVANCE(30);
      if (lookahead == 10800)
        ADVANCE(18);
      if (lookahead == 10801)
        ADVANCE(18);
      if (lookahead == 10802)
        ADVANCE(18);
      if (lookahead == 10803)
        ADVANCE(18);
      if (lookahead == 10804)
        ADVANCE(18);
      if (lookahead == 10805)
        ADVANCE(18);
      if (lookahead == 10806)
        ADVANCE(18);
      if (lookahead == 10807)
        ADVANCE(18);
      if (lookahead == 10808)
        ADVANCE(18);
      if (lookahead == 10809)
        ADVANCE(30);
      if (lookahead == 10810)
        ADVANCE(30);
      if (lookahead == 10811)
        ADVANCE(18);
      if (lookahead == 10812)
        ADVANCE(18);
      if (lookahead == 10813)
        ADVANCE(18);
      if (lookahead == 10816)
        ADVANCE(18);
      if (lookahead == 10817)
        ADVANCE(30);
      if (lookahead == 10818)
        ADVANCE(30);
      if (lookahead == 10819)
        ADVANCE(18);
      if (lookahead == 10820)
        ADVANCE(18);
      if (lookahead == 10821)
        ADVANCE(30);
      if (lookahead == 10826)
        ADVANCE(30);
      if (lookahead == 10827)
        ADVANCE(18);
      if (lookahead == 10828)
        ADVANCE(30);
      if (lookahead == 10829)
        ADVANCE(18);
      if (lookahead == 10830)
        ADVANCE(18);
      if (lookahead == 10831)
        ADVANCE(30);
      if (lookahead == 10832)
        ADVANCE(30);
      if (lookahead == 10833)
        ADVANCE(18);
      if (lookahead == 10834)
        ADVANCE(30);
      if (lookahead == 10835)
        ADVANCE(18);
      if (lookahead == 10836)
        ADVANCE(30);
      if (lookahead == 10837)
        ADVANCE(18);
      if (lookahead == 10838)
        ADVANCE(30);
      if (lookahead == 10839)
        ADVANCE(30);
      if (lookahead == 10840)
        ADVANCE(18);
      if (lookahead == 10842)
        ADVANCE(18);
      if (lookahead == 10843)
        ADVANCE(30);
      if (lookahead == 10844)
        ADVANCE(18);
      if (lookahead == 10845)
        ADVANCE(30);
      if (lookahead == 10846)
        ADVANCE(18);
      if (lookahead == 10847)
        ADVANCE(18);
      if (lookahead == 10848)
        ADVANCE(18);
      if (lookahead == 10849)
        ADVANCE(30);
      if (lookahead == 10850)
        ADVANCE(30);
      if (lookahead == 10851)
        ADVANCE(30);
      if (lookahead == 10868)
        ADVANCE(29);
      if (lookahead == 10971)
        ADVANCE(18);
      if (lookahead == 11056)
        ADVANCE(31);
      if (lookahead == 11057)
        ADVANCE(31);
      if (lookahead == 11058)
        ADVANCE(31);
      if (lookahead == 11059)
        ADVANCE(31);
      if (lookahead == 11060)
        ADVANCE(31);
      if (lookahead == 11061)
        ADVANCE(31);
      if (lookahead == 11062)
        ADVANCE(31);
      if (lookahead == 11063)
        ADVANCE(31);
      if (lookahead == 11064)
        ADVANCE(31);
      if (lookahead == 11065)
        ADVANCE(31);
      if (lookahead == 11066)
        ADVANCE(31);
      if (lookahead == 11067)
        ADVANCE(31);
      if (lookahead == 11068)
        ADVANCE(31);
      if (lookahead == 11069)
        ADVANCE(31);
      if (lookahead == 11070)
        ADVANCE(31);
      if (lookahead == 11071)
        ADVANCE(31);
      if (lookahead == 11072)
        ADVANCE(31);
      if (lookahead == 11073)
        ADVANCE(31);
      if (lookahead == 11074)
        ADVANCE(31);
      if (lookahead == 11075)
        ADVANCE(31);
      if (lookahead == 11076)
        ADVANCE(31);
      if (lookahead == 11079)
        ADVANCE(31);
      if (lookahead == 11080)
        ADVANCE(31);
      if (lookahead == 11081)
        ADVANCE(31);
      if (lookahead == 11082)
        ADVANCE(31);
      if (lookahead == 11083)
        ADVANCE(31);
      if (lookahead == 11084)
        ADVANCE(31);
      if (lookahead == 65513)
        ADVANCE(31);
      if (lookahead == 65515)
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(120);
      END_STATE();
    case 121:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == 'e')
        ADVANCE(20);
      if (lookahead == 'f')
        ADVANCE(21);
      if (lookahead == 'i')
        ADVANCE(22);
      if (lookahead == 'm')
        ADVANCE(23);
      if (lookahead == 's')
        ADVANCE(24);
      if (lookahead == 'u')
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(121);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 122:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == ':')
        ADVANCE(13);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(16);
      if (lookahead == '>')
        ADVANCE(17);
      if (lookahead == '\\')
        ADVANCE(18);
      if (lookahead == '^')
        ADVANCE(19);
      if (lookahead == 'e')
        ADVANCE(112);
      if (lookahead == 'f')
        ADVANCE(21);
      if (lookahead == 'i')
        ADVANCE(22);
      if (lookahead == 'm')
        ADVANCE(23);
      if (lookahead == 's')
        ADVANCE(24);
      if (lookahead == 'u')
        ADVANCE(25);
      if (lookahead == '|')
        ADVANCE(27);
      if (lookahead == '~')
        ADVANCE(29);
      if (lookahead == 177)
        ADVANCE(30);
      if (lookahead == 215)
        ADVANCE(18);
      if (lookahead == 247)
        ADVANCE(5);
      if (lookahead == 8523)
        ADVANCE(18);
      if (lookahead == 8592)
        ADVANCE(31);
      if (lookahead == 8594)
        ADVANCE(31);
      if (lookahead == 8596)
        ADVANCE(31);
      if (lookahead == 8602)
        ADVANCE(31);
      if (lookahead == 8603)
        ADVANCE(31);
      if (lookahead == 8604)
        ADVANCE(31);
      if (lookahead == 8605)
        ADVANCE(31);
      if (lookahead == 8606)
        ADVANCE(31);
      if (lookahead == 8608)
        ADVANCE(31);
      if (lookahead == 8610)
        ADVANCE(31);
      if (lookahead == 8611)
        ADVANCE(31);
      if (lookahead == 8612)
        ADVANCE(31);
      if (lookahead == 8614)
        ADVANCE(31);
      if (lookahead == 8617)
        ADVANCE(31);
      if (lookahead == 8618)
        ADVANCE(31);
      if (lookahead == 8619)
        ADVANCE(31);
      if (lookahead == 8620)
        ADVANCE(31);
      if (lookahead == 8622)
        ADVANCE(31);
      if (lookahead == 8636)
        ADVANCE(31);
      if (lookahead == 8637)
        ADVANCE(31);
      if (lookahead == 8640)
        ADVANCE(31);
      if (lookahead == 8641)
        ADVANCE(31);
      if (lookahead == 8644)
        ADVANCE(31);
      if (lookahead == 8646)
        ADVANCE(31);
      if (lookahead == 8647)
        ADVANCE(31);
      if (lookahead == 8649)
        ADVANCE(31);
      if (lookahead == 8651)
        ADVANCE(31);
      if (lookahead == 8652)
        ADVANCE(31);
      if (lookahead == 8653)
        ADVANCE(31);
      if (lookahead == 8654)
        ADVANCE(31);
      if (lookahead == 8655)
        ADVANCE(31);
      if (lookahead == 8656)
        ADVANCE(31);
      if (lookahead == 8658)
        ADVANCE(31);
      if (lookahead == 8660)
        ADVANCE(31);
      if (lookahead == 8666)
        ADVANCE(31);
      if (lookahead == 8667)
        ADVANCE(31);
      if (lookahead == 8668)
        ADVANCE(31);
      if (lookahead == 8669)
        ADVANCE(31);
      if (lookahead == 8672)
        ADVANCE(31);
      if (lookahead == 8674)
        ADVANCE(31);
      if (lookahead == 8692)
        ADVANCE(31);
      if (lookahead == 8694)
        ADVANCE(31);
      if (lookahead == 8695)
        ADVANCE(31);
      if (lookahead == 8696)
        ADVANCE(31);
      if (lookahead == 8697)
        ADVANCE(31);
      if (lookahead == 8698)
        ADVANCE(31);
      if (lookahead == 8699)
        ADVANCE(31);
      if (lookahead == 8700)
        ADVANCE(31);
      if (lookahead == 8701)
        ADVANCE(31);
      if (lookahead == 8702)
        ADVANCE(31);
      if (lookahead == 8703)
        ADVANCE(31);
      if (lookahead == 8723)
        ADVANCE(30);
      if (lookahead == 8724)
        ADVANCE(30);
      if (lookahead == 8727)
        ADVANCE(18);
      if (lookahead == 8728)
        ADVANCE(18);
      if (lookahead == 8729)
        ADVANCE(18);
      if (lookahead == 8740)
        ADVANCE(18);
      if (lookahead == 8743)
        ADVANCE(18);
      if (lookahead == 8744)
        ADVANCE(30);
      if (lookahead == 8745)
        ADVANCE(18);
      if (lookahead == 8746)
        ADVANCE(30);
      if (lookahead == 8760)
        ADVANCE(30);
      if (lookahead == 8768)
        ADVANCE(18);
      if (lookahead == 8770)
        ADVANCE(30);
      if (lookahead == 8783)
        ADVANCE(30);
      if (lookahead == 8788)
        ADVANCE(29);
      if (lookahead == 8789)
        ADVANCE(29);
      if (lookahead == 8845)
        ADVANCE(18);
      if (lookahead == 8846)
        ADVANCE(30);
      if (lookahead == 8851)
        ADVANCE(18);
      if (lookahead == 8852)
        ADVANCE(30);
      if (lookahead == 8853)
        ADVANCE(30);
      if (lookahead == 8854)
        ADVANCE(30);
      if (lookahead == 8855)
        ADVANCE(18);
      if (lookahead == 8856)
        ADVANCE(18);
      if (lookahead == 8857)
        ADVANCE(18);
      if (lookahead == 8858)
        ADVANCE(18);
      if (lookahead == 8859)
        ADVANCE(18);
      if (lookahead == 8862)
        ADVANCE(30);
      if (lookahead == 8863)
        ADVANCE(30);
      if (lookahead == 8864)
        ADVANCE(18);
      if (lookahead == 8865)
        ADVANCE(18);
      if (lookahead == 8891)
        ADVANCE(4);
      if (lookahead == 8892)
        ADVANCE(18);
      if (lookahead == 8893)
        ADVANCE(30);
      if (lookahead == 8900)
        ADVANCE(18);
      if (lookahead == 8901)
        ADVANCE(18);
      if (lookahead == 8902)
        ADVANCE(18);
      if (lookahead == 8903)
        ADVANCE(18);
      if (lookahead == 8905)
        ADVANCE(18);
      if (lookahead == 8906)
        ADVANCE(18);
      if (lookahead == 8907)
        ADVANCE(18);
      if (lookahead == 8908)
        ADVANCE(18);
      if (lookahead == 8910)
        ADVANCE(30);
      if (lookahead == 8911)
        ADVANCE(18);
      if (lookahead == 8914)
        ADVANCE(18);
      if (lookahead == 8915)
        ADVANCE(30);
      if (lookahead == 9655)
        ADVANCE(18);
      if (lookahead == 10193)
        ADVANCE(18);
      if (lookahead == 10197)
        ADVANCE(18);
      if (lookahead == 10198)
        ADVANCE(18);
      if (lookahead == 10199)
        ADVANCE(18);
      if (lookahead == 10229)
        ADVANCE(31);
      if (lookahead == 10230)
        ADVANCE(31);
      if (lookahead == 10231)
        ADVANCE(31);
      if (lookahead == 10233)
        ADVANCE(31);
      if (lookahead == 10234)
        ADVANCE(31);
      if (lookahead == 10235)
        ADVANCE(31);
      if (lookahead == 10236)
        ADVANCE(31);
      if (lookahead == 10237)
        ADVANCE(31);
      if (lookahead == 10238)
        ADVANCE(31);
      if (lookahead == 10239)
        ADVANCE(31);
      if (lookahead == 10496)
        ADVANCE(31);
      if (lookahead == 10497)
        ADVANCE(31);
      if (lookahead == 10498)
        ADVANCE(31);
      if (lookahead == 10499)
        ADVANCE(31);
      if (lookahead == 10500)
        ADVANCE(31);
      if (lookahead == 10501)
        ADVANCE(31);
      if (lookahead == 10502)
        ADVANCE(31);
      if (lookahead == 10503)
        ADVANCE(31);
      if (lookahead == 10508)
        ADVANCE(31);
      if (lookahead == 10509)
        ADVANCE(31);
      if (lookahead == 10510)
        ADVANCE(31);
      if (lookahead == 10511)
        ADVANCE(31);
      if (lookahead == 10512)
        ADVANCE(31);
      if (lookahead == 10513)
        ADVANCE(31);
      if (lookahead == 10516)
        ADVANCE(31);
      if (lookahead == 10517)
        ADVANCE(31);
      if (lookahead == 10518)
        ADVANCE(31);
      if (lookahead == 10519)
        ADVANCE(31);
      if (lookahead == 10520)
        ADVANCE(31);
      if (lookahead == 10525)
        ADVANCE(31);
      if (lookahead == 10526)
        ADVANCE(31);
      if (lookahead == 10527)
        ADVANCE(31);
      if (lookahead == 10528)
        ADVANCE(31);
      if (lookahead == 10564)
        ADVANCE(31);
      if (lookahead == 10565)
        ADVANCE(31);
      if (lookahead == 10566)
        ADVANCE(31);
      if (lookahead == 10567)
        ADVANCE(31);
      if (lookahead == 10568)
        ADVANCE(31);
      if (lookahead == 10570)
        ADVANCE(31);
      if (lookahead == 10571)
        ADVANCE(31);
      if (lookahead == 10574)
        ADVANCE(31);
      if (lookahead == 10576)
        ADVANCE(31);
      if (lookahead == 10578)
        ADVANCE(31);
      if (lookahead == 10579)
        ADVANCE(31);
      if (lookahead == 10582)
        ADVANCE(31);
      if (lookahead == 10583)
        ADVANCE(31);
      if (lookahead == 10586)
        ADVANCE(31);
      if (lookahead == 10587)
        ADVANCE(31);
      if (lookahead == 10590)
        ADVANCE(31);
      if (lookahead == 10591)
        ADVANCE(31);
      if (lookahead == 10594)
        ADVANCE(31);
      if (lookahead == 10596)
        ADVANCE(31);
      if (lookahead == 10598)
        ADVANCE(31);
      if (lookahead == 10599)
        ADVANCE(31);
      if (lookahead == 10600)
        ADVANCE(31);
      if (lookahead == 10601)
        ADVANCE(31);
      if (lookahead == 10602)
        ADVANCE(31);
      if (lookahead == 10603)
        ADVANCE(31);
      if (lookahead == 10604)
        ADVANCE(31);
      if (lookahead == 10605)
        ADVANCE(31);
      if (lookahead == 10608)
        ADVANCE(31);
      if (lookahead == 10680)
        ADVANCE(18);
      if (lookahead == 10684)
        ADVANCE(18);
      if (lookahead == 10686)
        ADVANCE(18);
      if (lookahead == 10687)
        ADVANCE(18);
      if (lookahead == 10740)
        ADVANCE(31);
      if (lookahead == 10742)
        ADVANCE(18);
      if (lookahead == 10743)
        ADVANCE(18);
      if (lookahead == 10746)
        ADVANCE(30);
      if (lookahead == 10747)
        ADVANCE(30);
      if (lookahead == 10759)
        ADVANCE(18);
      if (lookahead == 10760)
        ADVANCE(30);
      if (lookahead == 10781)
        ADVANCE(18);
      if (lookahead == 10786)
        ADVANCE(30);
      if (lookahead == 10787)
        ADVANCE(30);
      if (lookahead == 10788)
        ADVANCE(30);
      if (lookahead == 10789)
        ADVANCE(30);
      if (lookahead == 10790)
        ADVANCE(30);
      if (lookahead == 10791)
        ADVANCE(30);
      if (lookahead == 10792)
        ADVANCE(30);
      if (lookahead == 10793)
        ADVANCE(30);
      if (lookahead == 10794)
        ADVANCE(30);
      if (lookahead == 10795)
        ADVANCE(30);
      if (lookahead == 10796)
        ADVANCE(30);
      if (lookahead == 10797)
        ADVANCE(30);
      if (lookahead == 10798)
        ADVANCE(30);
      if (lookahead == 10800)
        ADVANCE(18);
      if (lookahead == 10801)
        ADVANCE(18);
      if (lookahead == 10802)
        ADVANCE(18);
      if (lookahead == 10803)
        ADVANCE(18);
      if (lookahead == 10804)
        ADVANCE(18);
      if (lookahead == 10805)
        ADVANCE(18);
      if (lookahead == 10806)
        ADVANCE(18);
      if (lookahead == 10807)
        ADVANCE(18);
      if (lookahead == 10808)
        ADVANCE(18);
      if (lookahead == 10809)
        ADVANCE(30);
      if (lookahead == 10810)
        ADVANCE(30);
      if (lookahead == 10811)
        ADVANCE(18);
      if (lookahead == 10812)
        ADVANCE(18);
      if (lookahead == 10813)
        ADVANCE(18);
      if (lookahead == 10816)
        ADVANCE(18);
      if (lookahead == 10817)
        ADVANCE(30);
      if (lookahead == 10818)
        ADVANCE(30);
      if (lookahead == 10819)
        ADVANCE(18);
      if (lookahead == 10820)
        ADVANCE(18);
      if (lookahead == 10821)
        ADVANCE(30);
      if (lookahead == 10826)
        ADVANCE(30);
      if (lookahead == 10827)
        ADVANCE(18);
      if (lookahead == 10828)
        ADVANCE(30);
      if (lookahead == 10829)
        ADVANCE(18);
      if (lookahead == 10830)
        ADVANCE(18);
      if (lookahead == 10831)
        ADVANCE(30);
      if (lookahead == 10832)
        ADVANCE(30);
      if (lookahead == 10833)
        ADVANCE(18);
      if (lookahead == 10834)
        ADVANCE(30);
      if (lookahead == 10835)
        ADVANCE(18);
      if (lookahead == 10836)
        ADVANCE(30);
      if (lookahead == 10837)
        ADVANCE(18);
      if (lookahead == 10838)
        ADVANCE(30);
      if (lookahead == 10839)
        ADVANCE(30);
      if (lookahead == 10840)
        ADVANCE(18);
      if (lookahead == 10842)
        ADVANCE(18);
      if (lookahead == 10843)
        ADVANCE(30);
      if (lookahead == 10844)
        ADVANCE(18);
      if (lookahead == 10845)
        ADVANCE(30);
      if (lookahead == 10846)
        ADVANCE(18);
      if (lookahead == 10847)
        ADVANCE(18);
      if (lookahead == 10848)
        ADVANCE(18);
      if (lookahead == 10849)
        ADVANCE(30);
      if (lookahead == 10850)
        ADVANCE(30);
      if (lookahead == 10851)
        ADVANCE(30);
      if (lookahead == 10868)
        ADVANCE(29);
      if (lookahead == 10971)
        ADVANCE(18);
      if (lookahead == 11056)
        ADVANCE(31);
      if (lookahead == 11057)
        ADVANCE(31);
      if (lookahead == 11058)
        ADVANCE(31);
      if (lookahead == 11059)
        ADVANCE(31);
      if (lookahead == 11060)
        ADVANCE(31);
      if (lookahead == 11061)
        ADVANCE(31);
      if (lookahead == 11062)
        ADVANCE(31);
      if (lookahead == 11063)
        ADVANCE(31);
      if (lookahead == 11064)
        ADVANCE(31);
      if (lookahead == 11065)
        ADVANCE(31);
      if (lookahead == 11066)
        ADVANCE(31);
      if (lookahead == 11067)
        ADVANCE(31);
      if (lookahead == 11068)
        ADVANCE(31);
      if (lookahead == 11069)
        ADVANCE(31);
      if (lookahead == 11070)
        ADVANCE(31);
      if (lookahead == 11071)
        ADVANCE(31);
      if (lookahead == 11072)
        ADVANCE(31);
      if (lookahead == 11073)
        ADVANCE(31);
      if (lookahead == 11074)
        ADVANCE(31);
      if (lookahead == 11075)
        ADVANCE(31);
      if (lookahead == 11076)
        ADVANCE(31);
      if (lookahead == 11079)
        ADVANCE(31);
      if (lookahead == 11080)
        ADVANCE(31);
      if (lookahead == 11081)
        ADVANCE(31);
      if (lookahead == 11082)
        ADVANCE(31);
      if (lookahead == 11083)
        ADVANCE(31);
      if (lookahead == 11084)
        ADVANCE(31);
      if (lookahead == 65513)
        ADVANCE(31);
      if (lookahead == 65515)
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(123);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 123:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == ':')
        ADVANCE(57);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(16);
      if (lookahead == '>')
        ADVANCE(17);
      if (lookahead == '\\')
        ADVANCE(18);
      if (lookahead == '^')
        ADVANCE(19);
      if (lookahead == 'e')
        ADVANCE(112);
      if (lookahead == 'f')
        ADVANCE(21);
      if (lookahead == 'i')
        ADVANCE(22);
      if (lookahead == 'm')
        ADVANCE(23);
      if (lookahead == 's')
        ADVANCE(24);
      if (lookahead == 'u')
        ADVANCE(25);
      if (lookahead == '|')
        ADVANCE(27);
      if (lookahead == '~')
        ADVANCE(29);
      if (lookahead == 177)
        ADVANCE(30);
      if (lookahead == 215)
        ADVANCE(18);
      if (lookahead == 247)
        ADVANCE(5);
      if (lookahead == 8523)
        ADVANCE(18);
      if (lookahead == 8592)
        ADVANCE(31);
      if (lookahead == 8594)
        ADVANCE(31);
      if (lookahead == 8596)
        ADVANCE(31);
      if (lookahead == 8602)
        ADVANCE(31);
      if (lookahead == 8603)
        ADVANCE(31);
      if (lookahead == 8604)
        ADVANCE(31);
      if (lookahead == 8605)
        ADVANCE(31);
      if (lookahead == 8606)
        ADVANCE(31);
      if (lookahead == 8608)
        ADVANCE(31);
      if (lookahead == 8610)
        ADVANCE(31);
      if (lookahead == 8611)
        ADVANCE(31);
      if (lookahead == 8612)
        ADVANCE(31);
      if (lookahead == 8614)
        ADVANCE(31);
      if (lookahead == 8617)
        ADVANCE(31);
      if (lookahead == 8618)
        ADVANCE(31);
      if (lookahead == 8619)
        ADVANCE(31);
      if (lookahead == 8620)
        ADVANCE(31);
      if (lookahead == 8622)
        ADVANCE(31);
      if (lookahead == 8636)
        ADVANCE(31);
      if (lookahead == 8637)
        ADVANCE(31);
      if (lookahead == 8640)
        ADVANCE(31);
      if (lookahead == 8641)
        ADVANCE(31);
      if (lookahead == 8644)
        ADVANCE(31);
      if (lookahead == 8646)
        ADVANCE(31);
      if (lookahead == 8647)
        ADVANCE(31);
      if (lookahead == 8649)
        ADVANCE(31);
      if (lookahead == 8651)
        ADVANCE(31);
      if (lookahead == 8652)
        ADVANCE(31);
      if (lookahead == 8653)
        ADVANCE(31);
      if (lookahead == 8654)
        ADVANCE(31);
      if (lookahead == 8655)
        ADVANCE(31);
      if (lookahead == 8656)
        ADVANCE(31);
      if (lookahead == 8658)
        ADVANCE(31);
      if (lookahead == 8660)
        ADVANCE(31);
      if (lookahead == 8666)
        ADVANCE(31);
      if (lookahead == 8667)
        ADVANCE(31);
      if (lookahead == 8668)
        ADVANCE(31);
      if (lookahead == 8669)
        ADVANCE(31);
      if (lookahead == 8672)
        ADVANCE(31);
      if (lookahead == 8674)
        ADVANCE(31);
      if (lookahead == 8692)
        ADVANCE(31);
      if (lookahead == 8694)
        ADVANCE(31);
      if (lookahead == 8695)
        ADVANCE(31);
      if (lookahead == 8696)
        ADVANCE(31);
      if (lookahead == 8697)
        ADVANCE(31);
      if (lookahead == 8698)
        ADVANCE(31);
      if (lookahead == 8699)
        ADVANCE(31);
      if (lookahead == 8700)
        ADVANCE(31);
      if (lookahead == 8701)
        ADVANCE(31);
      if (lookahead == 8702)
        ADVANCE(31);
      if (lookahead == 8703)
        ADVANCE(31);
      if (lookahead == 8723)
        ADVANCE(30);
      if (lookahead == 8724)
        ADVANCE(30);
      if (lookahead == 8727)
        ADVANCE(18);
      if (lookahead == 8728)
        ADVANCE(18);
      if (lookahead == 8729)
        ADVANCE(18);
      if (lookahead == 8740)
        ADVANCE(18);
      if (lookahead == 8743)
        ADVANCE(18);
      if (lookahead == 8744)
        ADVANCE(30);
      if (lookahead == 8745)
        ADVANCE(18);
      if (lookahead == 8746)
        ADVANCE(30);
      if (lookahead == 8760)
        ADVANCE(30);
      if (lookahead == 8768)
        ADVANCE(18);
      if (lookahead == 8770)
        ADVANCE(30);
      if (lookahead == 8783)
        ADVANCE(30);
      if (lookahead == 8788)
        ADVANCE(29);
      if (lookahead == 8789)
        ADVANCE(29);
      if (lookahead == 8845)
        ADVANCE(18);
      if (lookahead == 8846)
        ADVANCE(30);
      if (lookahead == 8851)
        ADVANCE(18);
      if (lookahead == 8852)
        ADVANCE(30);
      if (lookahead == 8853)
        ADVANCE(30);
      if (lookahead == 8854)
        ADVANCE(30);
      if (lookahead == 8855)
        ADVANCE(18);
      if (lookahead == 8856)
        ADVANCE(18);
      if (lookahead == 8857)
        ADVANCE(18);
      if (lookahead == 8858)
        ADVANCE(18);
      if (lookahead == 8859)
        ADVANCE(18);
      if (lookahead == 8862)
        ADVANCE(30);
      if (lookahead == 8863)
        ADVANCE(30);
      if (lookahead == 8864)
        ADVANCE(18);
      if (lookahead == 8865)
        ADVANCE(18);
      if (lookahead == 8891)
        ADVANCE(4);
      if (lookahead == 8892)
        ADVANCE(18);
      if (lookahead == 8893)
        ADVANCE(30);
      if (lookahead == 8900)
        ADVANCE(18);
      if (lookahead == 8901)
        ADVANCE(18);
      if (lookahead == 8902)
        ADVANCE(18);
      if (lookahead == 8903)
        ADVANCE(18);
      if (lookahead == 8905)
        ADVANCE(18);
      if (lookahead == 8906)
        ADVANCE(18);
      if (lookahead == 8907)
        ADVANCE(18);
      if (lookahead == 8908)
        ADVANCE(18);
      if (lookahead == 8910)
        ADVANCE(30);
      if (lookahead == 8911)
        ADVANCE(18);
      if (lookahead == 8914)
        ADVANCE(18);
      if (lookahead == 8915)
        ADVANCE(30);
      if (lookahead == 9655)
        ADVANCE(18);
      if (lookahead == 10193)
        ADVANCE(18);
      if (lookahead == 10197)
        ADVANCE(18);
      if (lookahead == 10198)
        ADVANCE(18);
      if (lookahead == 10199)
        ADVANCE(18);
      if (lookahead == 10229)
        ADVANCE(31);
      if (lookahead == 10230)
        ADVANCE(31);
      if (lookahead == 10231)
        ADVANCE(31);
      if (lookahead == 10233)
        ADVANCE(31);
      if (lookahead == 10234)
        ADVANCE(31);
      if (lookahead == 10235)
        ADVANCE(31);
      if (lookahead == 10236)
        ADVANCE(31);
      if (lookahead == 10237)
        ADVANCE(31);
      if (lookahead == 10238)
        ADVANCE(31);
      if (lookahead == 10239)
        ADVANCE(31);
      if (lookahead == 10496)
        ADVANCE(31);
      if (lookahead == 10497)
        ADVANCE(31);
      if (lookahead == 10498)
        ADVANCE(31);
      if (lookahead == 10499)
        ADVANCE(31);
      if (lookahead == 10500)
        ADVANCE(31);
      if (lookahead == 10501)
        ADVANCE(31);
      if (lookahead == 10502)
        ADVANCE(31);
      if (lookahead == 10503)
        ADVANCE(31);
      if (lookahead == 10508)
        ADVANCE(31);
      if (lookahead == 10509)
        ADVANCE(31);
      if (lookahead == 10510)
        ADVANCE(31);
      if (lookahead == 10511)
        ADVANCE(31);
      if (lookahead == 10512)
        ADVANCE(31);
      if (lookahead == 10513)
        ADVANCE(31);
      if (lookahead == 10516)
        ADVANCE(31);
      if (lookahead == 10517)
        ADVANCE(31);
      if (lookahead == 10518)
        ADVANCE(31);
      if (lookahead == 10519)
        ADVANCE(31);
      if (lookahead == 10520)
        ADVANCE(31);
      if (lookahead == 10525)
        ADVANCE(31);
      if (lookahead == 10526)
        ADVANCE(31);
      if (lookahead == 10527)
        ADVANCE(31);
      if (lookahead == 10528)
        ADVANCE(31);
      if (lookahead == 10564)
        ADVANCE(31);
      if (lookahead == 10565)
        ADVANCE(31);
      if (lookahead == 10566)
        ADVANCE(31);
      if (lookahead == 10567)
        ADVANCE(31);
      if (lookahead == 10568)
        ADVANCE(31);
      if (lookahead == 10570)
        ADVANCE(31);
      if (lookahead == 10571)
        ADVANCE(31);
      if (lookahead == 10574)
        ADVANCE(31);
      if (lookahead == 10576)
        ADVANCE(31);
      if (lookahead == 10578)
        ADVANCE(31);
      if (lookahead == 10579)
        ADVANCE(31);
      if (lookahead == 10582)
        ADVANCE(31);
      if (lookahead == 10583)
        ADVANCE(31);
      if (lookahead == 10586)
        ADVANCE(31);
      if (lookahead == 10587)
        ADVANCE(31);
      if (lookahead == 10590)
        ADVANCE(31);
      if (lookahead == 10591)
        ADVANCE(31);
      if (lookahead == 10594)
        ADVANCE(31);
      if (lookahead == 10596)
        ADVANCE(31);
      if (lookahead == 10598)
        ADVANCE(31);
      if (lookahead == 10599)
        ADVANCE(31);
      if (lookahead == 10600)
        ADVANCE(31);
      if (lookahead == 10601)
        ADVANCE(31);
      if (lookahead == 10602)
        ADVANCE(31);
      if (lookahead == 10603)
        ADVANCE(31);
      if (lookahead == 10604)
        ADVANCE(31);
      if (lookahead == 10605)
        ADVANCE(31);
      if (lookahead == 10608)
        ADVANCE(31);
      if (lookahead == 10680)
        ADVANCE(18);
      if (lookahead == 10684)
        ADVANCE(18);
      if (lookahead == 10686)
        ADVANCE(18);
      if (lookahead == 10687)
        ADVANCE(18);
      if (lookahead == 10740)
        ADVANCE(31);
      if (lookahead == 10742)
        ADVANCE(18);
      if (lookahead == 10743)
        ADVANCE(18);
      if (lookahead == 10746)
        ADVANCE(30);
      if (lookahead == 10747)
        ADVANCE(30);
      if (lookahead == 10759)
        ADVANCE(18);
      if (lookahead == 10760)
        ADVANCE(30);
      if (lookahead == 10781)
        ADVANCE(18);
      if (lookahead == 10786)
        ADVANCE(30);
      if (lookahead == 10787)
        ADVANCE(30);
      if (lookahead == 10788)
        ADVANCE(30);
      if (lookahead == 10789)
        ADVANCE(30);
      if (lookahead == 10790)
        ADVANCE(30);
      if (lookahead == 10791)
        ADVANCE(30);
      if (lookahead == 10792)
        ADVANCE(30);
      if (lookahead == 10793)
        ADVANCE(30);
      if (lookahead == 10794)
        ADVANCE(30);
      if (lookahead == 10795)
        ADVANCE(30);
      if (lookahead == 10796)
        ADVANCE(30);
      if (lookahead == 10797)
        ADVANCE(30);
      if (lookahead == 10798)
        ADVANCE(30);
      if (lookahead == 10800)
        ADVANCE(18);
      if (lookahead == 10801)
        ADVANCE(18);
      if (lookahead == 10802)
        ADVANCE(18);
      if (lookahead == 10803)
        ADVANCE(18);
      if (lookahead == 10804)
        ADVANCE(18);
      if (lookahead == 10805)
        ADVANCE(18);
      if (lookahead == 10806)
        ADVANCE(18);
      if (lookahead == 10807)
        ADVANCE(18);
      if (lookahead == 10808)
        ADVANCE(18);
      if (lookahead == 10809)
        ADVANCE(30);
      if (lookahead == 10810)
        ADVANCE(30);
      if (lookahead == 10811)
        ADVANCE(18);
      if (lookahead == 10812)
        ADVANCE(18);
      if (lookahead == 10813)
        ADVANCE(18);
      if (lookahead == 10816)
        ADVANCE(18);
      if (lookahead == 10817)
        ADVANCE(30);
      if (lookahead == 10818)
        ADVANCE(30);
      if (lookahead == 10819)
        ADVANCE(18);
      if (lookahead == 10820)
        ADVANCE(18);
      if (lookahead == 10821)
        ADVANCE(30);
      if (lookahead == 10826)
        ADVANCE(30);
      if (lookahead == 10827)
        ADVANCE(18);
      if (lookahead == 10828)
        ADVANCE(30);
      if (lookahead == 10829)
        ADVANCE(18);
      if (lookahead == 10830)
        ADVANCE(18);
      if (lookahead == 10831)
        ADVANCE(30);
      if (lookahead == 10832)
        ADVANCE(30);
      if (lookahead == 10833)
        ADVANCE(18);
      if (lookahead == 10834)
        ADVANCE(30);
      if (lookahead == 10835)
        ADVANCE(18);
      if (lookahead == 10836)
        ADVANCE(30);
      if (lookahead == 10837)
        ADVANCE(18);
      if (lookahead == 10838)
        ADVANCE(30);
      if (lookahead == 10839)
        ADVANCE(30);
      if (lookahead == 10840)
        ADVANCE(18);
      if (lookahead == 10842)
        ADVANCE(18);
      if (lookahead == 10843)
        ADVANCE(30);
      if (lookahead == 10844)
        ADVANCE(18);
      if (lookahead == 10845)
        ADVANCE(30);
      if (lookahead == 10846)
        ADVANCE(18);
      if (lookahead == 10847)
        ADVANCE(18);
      if (lookahead == 10848)
        ADVANCE(18);
      if (lookahead == 10849)
        ADVANCE(30);
      if (lookahead == 10850)
        ADVANCE(30);
      if (lookahead == 10851)
        ADVANCE(30);
      if (lookahead == 10868)
        ADVANCE(29);
      if (lookahead == 10971)
        ADVANCE(18);
      if (lookahead == 11056)
        ADVANCE(31);
      if (lookahead == 11057)
        ADVANCE(31);
      if (lookahead == 11058)
        ADVANCE(31);
      if (lookahead == 11059)
        ADVANCE(31);
      if (lookahead == 11060)
        ADVANCE(31);
      if (lookahead == 11061)
        ADVANCE(31);
      if (lookahead == 11062)
        ADVANCE(31);
      if (lookahead == 11063)
        ADVANCE(31);
      if (lookahead == 11064)
        ADVANCE(31);
      if (lookahead == 11065)
        ADVANCE(31);
      if (lookahead == 11066)
        ADVANCE(31);
      if (lookahead == 11067)
        ADVANCE(31);
      if (lookahead == 11068)
        ADVANCE(31);
      if (lookahead == 11069)
        ADVANCE(31);
      if (lookahead == 11070)
        ADVANCE(31);
      if (lookahead == 11071)
        ADVANCE(31);
      if (lookahead == 11072)
        ADVANCE(31);
      if (lookahead == 11073)
        ADVANCE(31);
      if (lookahead == 11074)
        ADVANCE(31);
      if (lookahead == 11075)
        ADVANCE(31);
      if (lookahead == 11076)
        ADVANCE(31);
      if (lookahead == 11079)
        ADVANCE(31);
      if (lookahead == 11080)
        ADVANCE(31);
      if (lookahead == 11081)
        ADVANCE(31);
      if (lookahead == 11082)
        ADVANCE(31);
      if (lookahead == 11083)
        ADVANCE(31);
      if (lookahead == 11084)
        ADVANCE(31);
      if (lookahead == 65513)
        ADVANCE(31);
      if (lookahead == 65515)
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(123);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 124:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(4);
      if (lookahead == ',')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(125);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == ':')
        ADVANCE(57);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(16);
      if (lookahead == '>')
        ADVANCE(17);
      if (lookahead == '\\')
        ADVANCE(18);
      if (lookahead == '^')
        ADVANCE(19);
      if (lookahead == 'e')
        ADVANCE(112);
      if (lookahead == 'f')
        ADVANCE(21);
      if (lookahead == 'i')
        ADVANCE(22);
      if (lookahead == 'm')
        ADVANCE(23);
      if (lookahead == 's')
        ADVANCE(24);
      if (lookahead == 'u')
        ADVANCE(25);
      if (lookahead == '|')
        ADVANCE(27);
      if (lookahead == '}')
        ADVANCE(28);
      if (lookahead == '~')
        ADVANCE(29);
      if (lookahead == 177)
        ADVANCE(30);
      if (lookahead == 215)
        ADVANCE(18);
      if (lookahead == 247)
        ADVANCE(5);
      if (lookahead == 8523)
        ADVANCE(18);
      if (lookahead == 8592)
        ADVANCE(31);
      if (lookahead == 8594)
        ADVANCE(31);
      if (lookahead == 8596)
        ADVANCE(31);
      if (lookahead == 8602)
        ADVANCE(31);
      if (lookahead == 8603)
        ADVANCE(31);
      if (lookahead == 8604)
        ADVANCE(31);
      if (lookahead == 8605)
        ADVANCE(31);
      if (lookahead == 8606)
        ADVANCE(31);
      if (lookahead == 8608)
        ADVANCE(31);
      if (lookahead == 8610)
        ADVANCE(31);
      if (lookahead == 8611)
        ADVANCE(31);
      if (lookahead == 8612)
        ADVANCE(31);
      if (lookahead == 8614)
        ADVANCE(31);
      if (lookahead == 8617)
        ADVANCE(31);
      if (lookahead == 8618)
        ADVANCE(31);
      if (lookahead == 8619)
        ADVANCE(31);
      if (lookahead == 8620)
        ADVANCE(31);
      if (lookahead == 8622)
        ADVANCE(31);
      if (lookahead == 8636)
        ADVANCE(31);
      if (lookahead == 8637)
        ADVANCE(31);
      if (lookahead == 8640)
        ADVANCE(31);
      if (lookahead == 8641)
        ADVANCE(31);
      if (lookahead == 8644)
        ADVANCE(31);
      if (lookahead == 8646)
        ADVANCE(31);
      if (lookahead == 8647)
        ADVANCE(31);
      if (lookahead == 8649)
        ADVANCE(31);
      if (lookahead == 8651)
        ADVANCE(31);
      if (lookahead == 8652)
        ADVANCE(31);
      if (lookahead == 8653)
        ADVANCE(31);
      if (lookahead == 8654)
        ADVANCE(31);
      if (lookahead == 8655)
        ADVANCE(31);
      if (lookahead == 8656)
        ADVANCE(31);
      if (lookahead == 8658)
        ADVANCE(31);
      if (lookahead == 8660)
        ADVANCE(31);
      if (lookahead == 8666)
        ADVANCE(31);
      if (lookahead == 8667)
        ADVANCE(31);
      if (lookahead == 8668)
        ADVANCE(31);
      if (lookahead == 8669)
        ADVANCE(31);
      if (lookahead == 8672)
        ADVANCE(31);
      if (lookahead == 8674)
        ADVANCE(31);
      if (lookahead == 8692)
        ADVANCE(31);
      if (lookahead == 8694)
        ADVANCE(31);
      if (lookahead == 8695)
        ADVANCE(31);
      if (lookahead == 8696)
        ADVANCE(31);
      if (lookahead == 8697)
        ADVANCE(31);
      if (lookahead == 8698)
        ADVANCE(31);
      if (lookahead == 8699)
        ADVANCE(31);
      if (lookahead == 8700)
        ADVANCE(31);
      if (lookahead == 8701)
        ADVANCE(31);
      if (lookahead == 8702)
        ADVANCE(31);
      if (lookahead == 8703)
        ADVANCE(31);
      if (lookahead == 8723)
        ADVANCE(30);
      if (lookahead == 8724)
        ADVANCE(30);
      if (lookahead == 8727)
        ADVANCE(18);
      if (lookahead == 8728)
        ADVANCE(18);
      if (lookahead == 8729)
        ADVANCE(18);
      if (lookahead == 8740)
        ADVANCE(18);
      if (lookahead == 8743)
        ADVANCE(18);
      if (lookahead == 8744)
        ADVANCE(30);
      if (lookahead == 8745)
        ADVANCE(18);
      if (lookahead == 8746)
        ADVANCE(30);
      if (lookahead == 8760)
        ADVANCE(30);
      if (lookahead == 8768)
        ADVANCE(18);
      if (lookahead == 8770)
        ADVANCE(30);
      if (lookahead == 8783)
        ADVANCE(30);
      if (lookahead == 8788)
        ADVANCE(29);
      if (lookahead == 8789)
        ADVANCE(29);
      if (lookahead == 8845)
        ADVANCE(18);
      if (lookahead == 8846)
        ADVANCE(30);
      if (lookahead == 8851)
        ADVANCE(18);
      if (lookahead == 8852)
        ADVANCE(30);
      if (lookahead == 8853)
        ADVANCE(30);
      if (lookahead == 8854)
        ADVANCE(30);
      if (lookahead == 8855)
        ADVANCE(18);
      if (lookahead == 8856)
        ADVANCE(18);
      if (lookahead == 8857)
        ADVANCE(18);
      if (lookahead == 8858)
        ADVANCE(18);
      if (lookahead == 8859)
        ADVANCE(18);
      if (lookahead == 8862)
        ADVANCE(30);
      if (lookahead == 8863)
        ADVANCE(30);
      if (lookahead == 8864)
        ADVANCE(18);
      if (lookahead == 8865)
        ADVANCE(18);
      if (lookahead == 8891)
        ADVANCE(4);
      if (lookahead == 8892)
        ADVANCE(18);
      if (lookahead == 8893)
        ADVANCE(30);
      if (lookahead == 8900)
        ADVANCE(18);
      if (lookahead == 8901)
        ADVANCE(18);
      if (lookahead == 8902)
        ADVANCE(18);
      if (lookahead == 8903)
        ADVANCE(18);
      if (lookahead == 8905)
        ADVANCE(18);
      if (lookahead == 8906)
        ADVANCE(18);
      if (lookahead == 8907)
        ADVANCE(18);
      if (lookahead == 8908)
        ADVANCE(18);
      if (lookahead == 8910)
        ADVANCE(30);
      if (lookahead == 8911)
        ADVANCE(18);
      if (lookahead == 8914)
        ADVANCE(18);
      if (lookahead == 8915)
        ADVANCE(30);
      if (lookahead == 9655)
        ADVANCE(18);
      if (lookahead == 10193)
        ADVANCE(18);
      if (lookahead == 10197)
        ADVANCE(18);
      if (lookahead == 10198)
        ADVANCE(18);
      if (lookahead == 10199)
        ADVANCE(18);
      if (lookahead == 10229)
        ADVANCE(31);
      if (lookahead == 10230)
        ADVANCE(31);
      if (lookahead == 10231)
        ADVANCE(31);
      if (lookahead == 10233)
        ADVANCE(31);
      if (lookahead == 10234)
        ADVANCE(31);
      if (lookahead == 10235)
        ADVANCE(31);
      if (lookahead == 10236)
        ADVANCE(31);
      if (lookahead == 10237)
        ADVANCE(31);
      if (lookahead == 10238)
        ADVANCE(31);
      if (lookahead == 10239)
        ADVANCE(31);
      if (lookahead == 10496)
        ADVANCE(31);
      if (lookahead == 10497)
        ADVANCE(31);
      if (lookahead == 10498)
        ADVANCE(31);
      if (lookahead == 10499)
        ADVANCE(31);
      if (lookahead == 10500)
        ADVANCE(31);
      if (lookahead == 10501)
        ADVANCE(31);
      if (lookahead == 10502)
        ADVANCE(31);
      if (lookahead == 10503)
        ADVANCE(31);
      if (lookahead == 10508)
        ADVANCE(31);
      if (lookahead == 10509)
        ADVANCE(31);
      if (lookahead == 10510)
        ADVANCE(31);
      if (lookahead == 10511)
        ADVANCE(31);
      if (lookahead == 10512)
        ADVANCE(31);
      if (lookahead == 10513)
        ADVANCE(31);
      if (lookahead == 10516)
        ADVANCE(31);
      if (lookahead == 10517)
        ADVANCE(31);
      if (lookahead == 10518)
        ADVANCE(31);
      if (lookahead == 10519)
        ADVANCE(31);
      if (lookahead == 10520)
        ADVANCE(31);
      if (lookahead == 10525)
        ADVANCE(31);
      if (lookahead == 10526)
        ADVANCE(31);
      if (lookahead == 10527)
        ADVANCE(31);
      if (lookahead == 10528)
        ADVANCE(31);
      if (lookahead == 10564)
        ADVANCE(31);
      if (lookahead == 10565)
        ADVANCE(31);
      if (lookahead == 10566)
        ADVANCE(31);
      if (lookahead == 10567)
        ADVANCE(31);
      if (lookahead == 10568)
        ADVANCE(31);
      if (lookahead == 10570)
        ADVANCE(31);
      if (lookahead == 10571)
        ADVANCE(31);
      if (lookahead == 10574)
        ADVANCE(31);
      if (lookahead == 10576)
        ADVANCE(31);
      if (lookahead == 10578)
        ADVANCE(31);
      if (lookahead == 10579)
        ADVANCE(31);
      if (lookahead == 10582)
        ADVANCE(31);
      if (lookahead == 10583)
        ADVANCE(31);
      if (lookahead == 10586)
        ADVANCE(31);
      if (lookahead == 10587)
        ADVANCE(31);
      if (lookahead == 10590)
        ADVANCE(31);
      if (lookahead == 10591)
        ADVANCE(31);
      if (lookahead == 10594)
        ADVANCE(31);
      if (lookahead == 10596)
        ADVANCE(31);
      if (lookahead == 10598)
        ADVANCE(31);
      if (lookahead == 10599)
        ADVANCE(31);
      if (lookahead == 10600)
        ADVANCE(31);
      if (lookahead == 10601)
        ADVANCE(31);
      if (lookahead == 10602)
        ADVANCE(31);
      if (lookahead == 10603)
        ADVANCE(31);
      if (lookahead == 10604)
        ADVANCE(31);
      if (lookahead == 10605)
        ADVANCE(31);
      if (lookahead == 10608)
        ADVANCE(31);
      if (lookahead == 10680)
        ADVANCE(18);
      if (lookahead == 10684)
        ADVANCE(18);
      if (lookahead == 10686)
        ADVANCE(18);
      if (lookahead == 10687)
        ADVANCE(18);
      if (lookahead == 10740)
        ADVANCE(31);
      if (lookahead == 10742)
        ADVANCE(18);
      if (lookahead == 10743)
        ADVANCE(18);
      if (lookahead == 10746)
        ADVANCE(30);
      if (lookahead == 10747)
        ADVANCE(30);
      if (lookahead == 10759)
        ADVANCE(18);
      if (lookahead == 10760)
        ADVANCE(30);
      if (lookahead == 10781)
        ADVANCE(18);
      if (lookahead == 10786)
        ADVANCE(30);
      if (lookahead == 10787)
        ADVANCE(30);
      if (lookahead == 10788)
        ADVANCE(30);
      if (lookahead == 10789)
        ADVANCE(30);
      if (lookahead == 10790)
        ADVANCE(30);
      if (lookahead == 10791)
        ADVANCE(30);
      if (lookahead == 10792)
        ADVANCE(30);
      if (lookahead == 10793)
        ADVANCE(30);
      if (lookahead == 10794)
        ADVANCE(30);
      if (lookahead == 10795)
        ADVANCE(30);
      if (lookahead == 10796)
        ADVANCE(30);
      if (lookahead == 10797)
        ADVANCE(30);
      if (lookahead == 10798)
        ADVANCE(30);
      if (lookahead == 10800)
        ADVANCE(18);
      if (lookahead == 10801)
        ADVANCE(18);
      if (lookahead == 10802)
        ADVANCE(18);
      if (lookahead == 10803)
        ADVANCE(18);
      if (lookahead == 10804)
        ADVANCE(18);
      if (lookahead == 10805)
        ADVANCE(18);
      if (lookahead == 10806)
        ADVANCE(18);
      if (lookahead == 10807)
        ADVANCE(18);
      if (lookahead == 10808)
        ADVANCE(18);
      if (lookahead == 10809)
        ADVANCE(30);
      if (lookahead == 10810)
        ADVANCE(30);
      if (lookahead == 10811)
        ADVANCE(18);
      if (lookahead == 10812)
        ADVANCE(18);
      if (lookahead == 10813)
        ADVANCE(18);
      if (lookahead == 10816)
        ADVANCE(18);
      if (lookahead == 10817)
        ADVANCE(30);
      if (lookahead == 10818)
        ADVANCE(30);
      if (lookahead == 10819)
        ADVANCE(18);
      if (lookahead == 10820)
        ADVANCE(18);
      if (lookahead == 10821)
        ADVANCE(30);
      if (lookahead == 10826)
        ADVANCE(30);
      if (lookahead == 10827)
        ADVANCE(18);
      if (lookahead == 10828)
        ADVANCE(30);
      if (lookahead == 10829)
        ADVANCE(18);
      if (lookahead == 10830)
        ADVANCE(18);
      if (lookahead == 10831)
        ADVANCE(30);
      if (lookahead == 10832)
        ADVANCE(30);
      if (lookahead == 10833)
        ADVANCE(18);
      if (lookahead == 10834)
        ADVANCE(30);
      if (lookahead == 10835)
        ADVANCE(18);
      if (lookahead == 10836)
        ADVANCE(30);
      if (lookahead == 10837)
        ADVANCE(18);
      if (lookahead == 10838)
        ADVANCE(30);
      if (lookahead == 10839)
        ADVANCE(30);
      if (lookahead == 10840)
        ADVANCE(18);
      if (lookahead == 10842)
        ADVANCE(18);
      if (lookahead == 10843)
        ADVANCE(30);
      if (lookahead == 10844)
        ADVANCE(18);
      if (lookahead == 10845)
        ADVANCE(30);
      if (lookahead == 10846)
        ADVANCE(18);
      if (lookahead == 10847)
        ADVANCE(18);
      if (lookahead == 10848)
        ADVANCE(18);
      if (lookahead == 10849)
        ADVANCE(30);
      if (lookahead == 10850)
        ADVANCE(30);
      if (lookahead == 10851)
        ADVANCE(30);
      if (lookahead == 10868)
        ADVANCE(29);
      if (lookahead == 10971)
        ADVANCE(18);
      if (lookahead == 11056)
        ADVANCE(31);
      if (lookahead == 11057)
        ADVANCE(31);
      if (lookahead == 11058)
        ADVANCE(31);
      if (lookahead == 11059)
        ADVANCE(31);
      if (lookahead == 11060)
        ADVANCE(31);
      if (lookahead == 11061)
        ADVANCE(31);
      if (lookahead == 11062)
        ADVANCE(31);
      if (lookahead == 11063)
        ADVANCE(31);
      if (lookahead == 11064)
        ADVANCE(31);
      if (lookahead == 11065)
        ADVANCE(31);
      if (lookahead == 11066)
        ADVANCE(31);
      if (lookahead == 11067)
        ADVANCE(31);
      if (lookahead == 11068)
        ADVANCE(31);
      if (lookahead == 11069)
        ADVANCE(31);
      if (lookahead == 11070)
        ADVANCE(31);
      if (lookahead == 11071)
        ADVANCE(31);
      if (lookahead == 11072)
        ADVANCE(31);
      if (lookahead == 11073)
        ADVANCE(31);
      if (lookahead == 11074)
        ADVANCE(31);
      if (lookahead == 11075)
        ADVANCE(31);
      if (lookahead == 11076)
        ADVANCE(31);
      if (lookahead == 11079)
        ADVANCE(31);
      if (lookahead == 11080)
        ADVANCE(31);
      if (lookahead == 11081)
        ADVANCE(31);
      if (lookahead == 11082)
        ADVANCE(31);
      if (lookahead == 11083)
        ADVANCE(31);
      if (lookahead == 11084)
        ADVANCE(31);
      if (lookahead == 65513)
        ADVANCE(31);
      if (lookahead == 65515)
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(124);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 125:
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == '<')
        ADVANCE(39);
      if (lookahead == '=')
        ADVANCE(29);
      if (lookahead == '>')
        ADVANCE(17);
      if (lookahead == '\\')
        ADVANCE(18);
      if (lookahead == '^')
        ADVANCE(19);
      if (lookahead == '|')
        ADVANCE(40);
      if (lookahead == 177)
        ADVANCE(30);
      if (lookahead == 215)
        ADVANCE(18);
      if (lookahead == 247)
        ADVANCE(5);
      if (lookahead == 8523)
        ADVANCE(18);
      if (lookahead == 8592)
        ADVANCE(31);
      if (lookahead == 8594)
        ADVANCE(31);
      if (lookahead == 8596)
        ADVANCE(31);
      if (lookahead == 8602)
        ADVANCE(31);
      if (lookahead == 8603)
        ADVANCE(31);
      if (lookahead == 8604)
        ADVANCE(31);
      if (lookahead == 8605)
        ADVANCE(31);
      if (lookahead == 8606)
        ADVANCE(31);
      if (lookahead == 8608)
        ADVANCE(31);
      if (lookahead == 8610)
        ADVANCE(31);
      if (lookahead == 8611)
        ADVANCE(31);
      if (lookahead == 8612)
        ADVANCE(31);
      if (lookahead == 8614)
        ADVANCE(31);
      if (lookahead == 8617)
        ADVANCE(31);
      if (lookahead == 8618)
        ADVANCE(31);
      if (lookahead == 8619)
        ADVANCE(31);
      if (lookahead == 8620)
        ADVANCE(31);
      if (lookahead == 8622)
        ADVANCE(31);
      if (lookahead == 8636)
        ADVANCE(31);
      if (lookahead == 8637)
        ADVANCE(31);
      if (lookahead == 8640)
        ADVANCE(31);
      if (lookahead == 8641)
        ADVANCE(31);
      if (lookahead == 8644)
        ADVANCE(31);
      if (lookahead == 8646)
        ADVANCE(31);
      if (lookahead == 8647)
        ADVANCE(31);
      if (lookahead == 8649)
        ADVANCE(31);
      if (lookahead == 8651)
        ADVANCE(31);
      if (lookahead == 8652)
        ADVANCE(31);
      if (lookahead == 8653)
        ADVANCE(31);
      if (lookahead == 8654)
        ADVANCE(31);
      if (lookahead == 8655)
        ADVANCE(31);
      if (lookahead == 8656)
        ADVANCE(31);
      if (lookahead == 8658)
        ADVANCE(31);
      if (lookahead == 8660)
        ADVANCE(31);
      if (lookahead == 8666)
        ADVANCE(31);
      if (lookahead == 8667)
        ADVANCE(31);
      if (lookahead == 8668)
        ADVANCE(31);
      if (lookahead == 8669)
        ADVANCE(31);
      if (lookahead == 8672)
        ADVANCE(31);
      if (lookahead == 8674)
        ADVANCE(31);
      if (lookahead == 8692)
        ADVANCE(31);
      if (lookahead == 8694)
        ADVANCE(31);
      if (lookahead == 8695)
        ADVANCE(31);
      if (lookahead == 8696)
        ADVANCE(31);
      if (lookahead == 8697)
        ADVANCE(31);
      if (lookahead == 8698)
        ADVANCE(31);
      if (lookahead == 8699)
        ADVANCE(31);
      if (lookahead == 8700)
        ADVANCE(31);
      if (lookahead == 8701)
        ADVANCE(31);
      if (lookahead == 8702)
        ADVANCE(31);
      if (lookahead == 8703)
        ADVANCE(31);
      if (lookahead == 8723)
        ADVANCE(30);
      if (lookahead == 8724)
        ADVANCE(30);
      if (lookahead == 8727)
        ADVANCE(18);
      if (lookahead == 8728)
        ADVANCE(18);
      if (lookahead == 8729)
        ADVANCE(18);
      if (lookahead == 8740)
        ADVANCE(18);
      if (lookahead == 8743)
        ADVANCE(18);
      if (lookahead == 8744)
        ADVANCE(30);
      if (lookahead == 8745)
        ADVANCE(18);
      if (lookahead == 8746)
        ADVANCE(30);
      if (lookahead == 8760)
        ADVANCE(30);
      if (lookahead == 8768)
        ADVANCE(18);
      if (lookahead == 8770)
        ADVANCE(30);
      if (lookahead == 8783)
        ADVANCE(30);
      if (lookahead == 8788)
        ADVANCE(29);
      if (lookahead == 8789)
        ADVANCE(29);
      if (lookahead == 8845)
        ADVANCE(18);
      if (lookahead == 8846)
        ADVANCE(30);
      if (lookahead == 8851)
        ADVANCE(18);
      if (lookahead == 8852)
        ADVANCE(30);
      if (lookahead == 8853)
        ADVANCE(30);
      if (lookahead == 8854)
        ADVANCE(30);
      if (lookahead == 8855)
        ADVANCE(18);
      if (lookahead == 8856)
        ADVANCE(18);
      if (lookahead == 8857)
        ADVANCE(18);
      if (lookahead == 8858)
        ADVANCE(18);
      if (lookahead == 8859)
        ADVANCE(18);
      if (lookahead == 8862)
        ADVANCE(30);
      if (lookahead == 8863)
        ADVANCE(30);
      if (lookahead == 8864)
        ADVANCE(18);
      if (lookahead == 8865)
        ADVANCE(18);
      if (lookahead == 8891)
        ADVANCE(4);
      if (lookahead == 8892)
        ADVANCE(18);
      if (lookahead == 8893)
        ADVANCE(30);
      if (lookahead == 8900)
        ADVANCE(18);
      if (lookahead == 8901)
        ADVANCE(18);
      if (lookahead == 8902)
        ADVANCE(18);
      if (lookahead == 8903)
        ADVANCE(18);
      if (lookahead == 8905)
        ADVANCE(18);
      if (lookahead == 8906)
        ADVANCE(18);
      if (lookahead == 8907)
        ADVANCE(18);
      if (lookahead == 8908)
        ADVANCE(18);
      if (lookahead == 8910)
        ADVANCE(30);
      if (lookahead == 8911)
        ADVANCE(18);
      if (lookahead == 8914)
        ADVANCE(18);
      if (lookahead == 8915)
        ADVANCE(30);
      if (lookahead == 9655)
        ADVANCE(18);
      if (lookahead == 10193)
        ADVANCE(18);
      if (lookahead == 10197)
        ADVANCE(18);
      if (lookahead == 10198)
        ADVANCE(18);
      if (lookahead == 10199)
        ADVANCE(18);
      if (lookahead == 10229)
        ADVANCE(31);
      if (lookahead == 10230)
        ADVANCE(31);
      if (lookahead == 10231)
        ADVANCE(31);
      if (lookahead == 10233)
        ADVANCE(31);
      if (lookahead == 10234)
        ADVANCE(31);
      if (lookahead == 10235)
        ADVANCE(31);
      if (lookahead == 10236)
        ADVANCE(31);
      if (lookahead == 10237)
        ADVANCE(31);
      if (lookahead == 10238)
        ADVANCE(31);
      if (lookahead == 10239)
        ADVANCE(31);
      if (lookahead == 10496)
        ADVANCE(31);
      if (lookahead == 10497)
        ADVANCE(31);
      if (lookahead == 10498)
        ADVANCE(31);
      if (lookahead == 10499)
        ADVANCE(31);
      if (lookahead == 10500)
        ADVANCE(31);
      if (lookahead == 10501)
        ADVANCE(31);
      if (lookahead == 10502)
        ADVANCE(31);
      if (lookahead == 10503)
        ADVANCE(31);
      if (lookahead == 10508)
        ADVANCE(31);
      if (lookahead == 10509)
        ADVANCE(31);
      if (lookahead == 10510)
        ADVANCE(31);
      if (lookahead == 10511)
        ADVANCE(31);
      if (lookahead == 10512)
        ADVANCE(31);
      if (lookahead == 10513)
        ADVANCE(31);
      if (lookahead == 10516)
        ADVANCE(31);
      if (lookahead == 10517)
        ADVANCE(31);
      if (lookahead == 10518)
        ADVANCE(31);
      if (lookahead == 10519)
        ADVANCE(31);
      if (lookahead == 10520)
        ADVANCE(31);
      if (lookahead == 10525)
        ADVANCE(31);
      if (lookahead == 10526)
        ADVANCE(31);
      if (lookahead == 10527)
        ADVANCE(31);
      if (lookahead == 10528)
        ADVANCE(31);
      if (lookahead == 10564)
        ADVANCE(31);
      if (lookahead == 10565)
        ADVANCE(31);
      if (lookahead == 10566)
        ADVANCE(31);
      if (lookahead == 10567)
        ADVANCE(31);
      if (lookahead == 10568)
        ADVANCE(31);
      if (lookahead == 10570)
        ADVANCE(31);
      if (lookahead == 10571)
        ADVANCE(31);
      if (lookahead == 10574)
        ADVANCE(31);
      if (lookahead == 10576)
        ADVANCE(31);
      if (lookahead == 10578)
        ADVANCE(31);
      if (lookahead == 10579)
        ADVANCE(31);
      if (lookahead == 10582)
        ADVANCE(31);
      if (lookahead == 10583)
        ADVANCE(31);
      if (lookahead == 10586)
        ADVANCE(31);
      if (lookahead == 10587)
        ADVANCE(31);
      if (lookahead == 10590)
        ADVANCE(31);
      if (lookahead == 10591)
        ADVANCE(31);
      if (lookahead == 10594)
        ADVANCE(31);
      if (lookahead == 10596)
        ADVANCE(31);
      if (lookahead == 10598)
        ADVANCE(31);
      if (lookahead == 10599)
        ADVANCE(31);
      if (lookahead == 10600)
        ADVANCE(31);
      if (lookahead == 10601)
        ADVANCE(31);
      if (lookahead == 10602)
        ADVANCE(31);
      if (lookahead == 10603)
        ADVANCE(31);
      if (lookahead == 10604)
        ADVANCE(31);
      if (lookahead == 10605)
        ADVANCE(31);
      if (lookahead == 10608)
        ADVANCE(31);
      if (lookahead == 10680)
        ADVANCE(18);
      if (lookahead == 10684)
        ADVANCE(18);
      if (lookahead == 10686)
        ADVANCE(18);
      if (lookahead == 10687)
        ADVANCE(18);
      if (lookahead == 10740)
        ADVANCE(31);
      if (lookahead == 10742)
        ADVANCE(18);
      if (lookahead == 10743)
        ADVANCE(18);
      if (lookahead == 10746)
        ADVANCE(30);
      if (lookahead == 10747)
        ADVANCE(30);
      if (lookahead == 10759)
        ADVANCE(18);
      if (lookahead == 10760)
        ADVANCE(30);
      if (lookahead == 10781)
        ADVANCE(18);
      if (lookahead == 10786)
        ADVANCE(30);
      if (lookahead == 10787)
        ADVANCE(30);
      if (lookahead == 10788)
        ADVANCE(30);
      if (lookahead == 10789)
        ADVANCE(30);
      if (lookahead == 10790)
        ADVANCE(30);
      if (lookahead == 10791)
        ADVANCE(30);
      if (lookahead == 10792)
        ADVANCE(30);
      if (lookahead == 10793)
        ADVANCE(30);
      if (lookahead == 10794)
        ADVANCE(30);
      if (lookahead == 10795)
        ADVANCE(30);
      if (lookahead == 10796)
        ADVANCE(30);
      if (lookahead == 10797)
        ADVANCE(30);
      if (lookahead == 10798)
        ADVANCE(30);
      if (lookahead == 10800)
        ADVANCE(18);
      if (lookahead == 10801)
        ADVANCE(18);
      if (lookahead == 10802)
        ADVANCE(18);
      if (lookahead == 10803)
        ADVANCE(18);
      if (lookahead == 10804)
        ADVANCE(18);
      if (lookahead == 10805)
        ADVANCE(18);
      if (lookahead == 10806)
        ADVANCE(18);
      if (lookahead == 10807)
        ADVANCE(18);
      if (lookahead == 10808)
        ADVANCE(18);
      if (lookahead == 10809)
        ADVANCE(30);
      if (lookahead == 10810)
        ADVANCE(30);
      if (lookahead == 10811)
        ADVANCE(18);
      if (lookahead == 10812)
        ADVANCE(18);
      if (lookahead == 10813)
        ADVANCE(18);
      if (lookahead == 10816)
        ADVANCE(18);
      if (lookahead == 10817)
        ADVANCE(30);
      if (lookahead == 10818)
        ADVANCE(30);
      if (lookahead == 10819)
        ADVANCE(18);
      if (lookahead == 10820)
        ADVANCE(18);
      if (lookahead == 10821)
        ADVANCE(30);
      if (lookahead == 10826)
        ADVANCE(30);
      if (lookahead == 10827)
        ADVANCE(18);
      if (lookahead == 10828)
        ADVANCE(30);
      if (lookahead == 10829)
        ADVANCE(18);
      if (lookahead == 10830)
        ADVANCE(18);
      if (lookahead == 10831)
        ADVANCE(30);
      if (lookahead == 10832)
        ADVANCE(30);
      if (lookahead == 10833)
        ADVANCE(18);
      if (lookahead == 10834)
        ADVANCE(30);
      if (lookahead == 10835)
        ADVANCE(18);
      if (lookahead == 10836)
        ADVANCE(30);
      if (lookahead == 10837)
        ADVANCE(18);
      if (lookahead == 10838)
        ADVANCE(30);
      if (lookahead == 10839)
        ADVANCE(30);
      if (lookahead == 10840)
        ADVANCE(18);
      if (lookahead == 10842)
        ADVANCE(18);
      if (lookahead == 10843)
        ADVANCE(30);
      if (lookahead == 10844)
        ADVANCE(18);
      if (lookahead == 10845)
        ADVANCE(30);
      if (lookahead == 10846)
        ADVANCE(18);
      if (lookahead == 10847)
        ADVANCE(18);
      if (lookahead == 10848)
        ADVANCE(18);
      if (lookahead == 10849)
        ADVANCE(30);
      if (lookahead == 10850)
        ADVANCE(30);
      if (lookahead == 10851)
        ADVANCE(30);
      if (lookahead == 10868)
        ADVANCE(29);
      if (lookahead == 10971)
        ADVANCE(18);
      if (lookahead == 11056)
        ADVANCE(31);
      if (lookahead == 11057)
        ADVANCE(31);
      if (lookahead == 11058)
        ADVANCE(31);
      if (lookahead == 11059)
        ADVANCE(31);
      if (lookahead == 11060)
        ADVANCE(31);
      if (lookahead == 11061)
        ADVANCE(31);
      if (lookahead == 11062)
        ADVANCE(31);
      if (lookahead == 11063)
        ADVANCE(31);
      if (lookahead == 11064)
        ADVANCE(31);
      if (lookahead == 11065)
        ADVANCE(31);
      if (lookahead == 11066)
        ADVANCE(31);
      if (lookahead == 11067)
        ADVANCE(31);
      if (lookahead == 11068)
        ADVANCE(31);
      if (lookahead == 11069)
        ADVANCE(31);
      if (lookahead == 11070)
        ADVANCE(31);
      if (lookahead == 11071)
        ADVANCE(31);
      if (lookahead == 11072)
        ADVANCE(31);
      if (lookahead == 11073)
        ADVANCE(31);
      if (lookahead == 11074)
        ADVANCE(31);
      if (lookahead == 11075)
        ADVANCE(31);
      if (lookahead == 11076)
        ADVANCE(31);
      if (lookahead == 11079)
        ADVANCE(31);
      if (lookahead == 11080)
        ADVANCE(31);
      if (lookahead == 11081)
        ADVANCE(31);
      if (lookahead == 11082)
        ADVANCE(31);
      if (lookahead == 11083)
        ADVANCE(31);
      if (lookahead == 11084)
        ADVANCE(31);
      if (lookahead == 65513)
        ADVANCE(31);
      if (lookahead == 65515)
        ADVANCE(31);
      END_STATE();
    case 126:
      if (lookahead == '\n')
        ADVANCE(95);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '+')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(125);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == ':')
        ADVANCE(57);
      if (lookahead == ';')
        ADVANCE(14);
      if (lookahead == '<')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(16);
      if (lookahead == '>')
        ADVANCE(17);
      if (lookahead == '\\')
        ADVANCE(18);
      if (lookahead == '^')
        ADVANCE(19);
      if (lookahead == 'e')
        ADVANCE(20);
      if (lookahead == 'f')
        ADVANCE(21);
      if (lookahead == 'i')
        ADVANCE(22);
      if (lookahead == 'm')
        ADVANCE(23);
      if (lookahead == 's')
        ADVANCE(24);
      if (lookahead == 'u')
        ADVANCE(25);
      if (lookahead == '|')
        ADVANCE(27);
      if (lookahead == '~')
        ADVANCE(29);
      if (lookahead == 177)
        ADVANCE(30);
      if (lookahead == 215)
        ADVANCE(18);
      if (lookahead == 247)
        ADVANCE(5);
      if (lookahead == 8523)
        ADVANCE(18);
      if (lookahead == 8592)
        ADVANCE(31);
      if (lookahead == 8594)
        ADVANCE(31);
      if (lookahead == 8596)
        ADVANCE(31);
      if (lookahead == 8602)
        ADVANCE(31);
      if (lookahead == 8603)
        ADVANCE(31);
      if (lookahead == 8604)
        ADVANCE(31);
      if (lookahead == 8605)
        ADVANCE(31);
      if (lookahead == 8606)
        ADVANCE(31);
      if (lookahead == 8608)
        ADVANCE(31);
      if (lookahead == 8610)
        ADVANCE(31);
      if (lookahead == 8611)
        ADVANCE(31);
      if (lookahead == 8612)
        ADVANCE(31);
      if (lookahead == 8614)
        ADVANCE(31);
      if (lookahead == 8617)
        ADVANCE(31);
      if (lookahead == 8618)
        ADVANCE(31);
      if (lookahead == 8619)
        ADVANCE(31);
      if (lookahead == 8620)
        ADVANCE(31);
      if (lookahead == 8622)
        ADVANCE(31);
      if (lookahead == 8636)
        ADVANCE(31);
      if (lookahead == 8637)
        ADVANCE(31);
      if (lookahead == 8640)
        ADVANCE(31);
      if (lookahead == 8641)
        ADVANCE(31);
      if (lookahead == 8644)
        ADVANCE(31);
      if (lookahead == 8646)
        ADVANCE(31);
      if (lookahead == 8647)
        ADVANCE(31);
      if (lookahead == 8649)
        ADVANCE(31);
      if (lookahead == 8651)
        ADVANCE(31);
      if (lookahead == 8652)
        ADVANCE(31);
      if (lookahead == 8653)
        ADVANCE(31);
      if (lookahead == 8654)
        ADVANCE(31);
      if (lookahead == 8655)
        ADVANCE(31);
      if (lookahead == 8656)
        ADVANCE(31);
      if (lookahead == 8658)
        ADVANCE(31);
      if (lookahead == 8660)
        ADVANCE(31);
      if (lookahead == 8666)
        ADVANCE(31);
      if (lookahead == 8667)
        ADVANCE(31);
      if (lookahead == 8668)
        ADVANCE(31);
      if (lookahead == 8669)
        ADVANCE(31);
      if (lookahead == 8672)
        ADVANCE(31);
      if (lookahead == 8674)
        ADVANCE(31);
      if (lookahead == 8692)
        ADVANCE(31);
      if (lookahead == 8694)
        ADVANCE(31);
      if (lookahead == 8695)
        ADVANCE(31);
      if (lookahead == 8696)
        ADVANCE(31);
      if (lookahead == 8697)
        ADVANCE(31);
      if (lookahead == 8698)
        ADVANCE(31);
      if (lookahead == 8699)
        ADVANCE(31);
      if (lookahead == 8700)
        ADVANCE(31);
      if (lookahead == 8701)
        ADVANCE(31);
      if (lookahead == 8702)
        ADVANCE(31);
      if (lookahead == 8703)
        ADVANCE(31);
      if (lookahead == 8723)
        ADVANCE(30);
      if (lookahead == 8724)
        ADVANCE(30);
      if (lookahead == 8727)
        ADVANCE(18);
      if (lookahead == 8728)
        ADVANCE(18);
      if (lookahead == 8729)
        ADVANCE(18);
      if (lookahead == 8740)
        ADVANCE(18);
      if (lookahead == 8743)
        ADVANCE(18);
      if (lookahead == 8744)
        ADVANCE(30);
      if (lookahead == 8745)
        ADVANCE(18);
      if (lookahead == 8746)
        ADVANCE(30);
      if (lookahead == 8760)
        ADVANCE(30);
      if (lookahead == 8768)
        ADVANCE(18);
      if (lookahead == 8770)
        ADVANCE(30);
      if (lookahead == 8783)
        ADVANCE(30);
      if (lookahead == 8788)
        ADVANCE(29);
      if (lookahead == 8789)
        ADVANCE(29);
      if (lookahead == 8845)
        ADVANCE(18);
      if (lookahead == 8846)
        ADVANCE(30);
      if (lookahead == 8851)
        ADVANCE(18);
      if (lookahead == 8852)
        ADVANCE(30);
      if (lookahead == 8853)
        ADVANCE(30);
      if (lookahead == 8854)
        ADVANCE(30);
      if (lookahead == 8855)
        ADVANCE(18);
      if (lookahead == 8856)
        ADVANCE(18);
      if (lookahead == 8857)
        ADVANCE(18);
      if (lookahead == 8858)
        ADVANCE(18);
      if (lookahead == 8859)
        ADVANCE(18);
      if (lookahead == 8862)
        ADVANCE(30);
      if (lookahead == 8863)
        ADVANCE(30);
      if (lookahead == 8864)
        ADVANCE(18);
      if (lookahead == 8865)
        ADVANCE(18);
      if (lookahead == 8891)
        ADVANCE(4);
      if (lookahead == 8892)
        ADVANCE(18);
      if (lookahead == 8893)
        ADVANCE(30);
      if (lookahead == 8900)
        ADVANCE(18);
      if (lookahead == 8901)
        ADVANCE(18);
      if (lookahead == 8902)
        ADVANCE(18);
      if (lookahead == 8903)
        ADVANCE(18);
      if (lookahead == 8905)
        ADVANCE(18);
      if (lookahead == 8906)
        ADVANCE(18);
      if (lookahead == 8907)
        ADVANCE(18);
      if (lookahead == 8908)
        ADVANCE(18);
      if (lookahead == 8910)
        ADVANCE(30);
      if (lookahead == 8911)
        ADVANCE(18);
      if (lookahead == 8914)
        ADVANCE(18);
      if (lookahead == 8915)
        ADVANCE(30);
      if (lookahead == 9655)
        ADVANCE(18);
      if (lookahead == 10193)
        ADVANCE(18);
      if (lookahead == 10197)
        ADVANCE(18);
      if (lookahead == 10198)
        ADVANCE(18);
      if (lookahead == 10199)
        ADVANCE(18);
      if (lookahead == 10229)
        ADVANCE(31);
      if (lookahead == 10230)
        ADVANCE(31);
      if (lookahead == 10231)
        ADVANCE(31);
      if (lookahead == 10233)
        ADVANCE(31);
      if (lookahead == 10234)
        ADVANCE(31);
      if (lookahead == 10235)
        ADVANCE(31);
      if (lookahead == 10236)
        ADVANCE(31);
      if (lookahead == 10237)
        ADVANCE(31);
      if (lookahead == 10238)
        ADVANCE(31);
      if (lookahead == 10239)
        ADVANCE(31);
      if (lookahead == 10496)
        ADVANCE(31);
      if (lookahead == 10497)
        ADVANCE(31);
      if (lookahead == 10498)
        ADVANCE(31);
      if (lookahead == 10499)
        ADVANCE(31);
      if (lookahead == 10500)
        ADVANCE(31);
      if (lookahead == 10501)
        ADVANCE(31);
      if (lookahead == 10502)
        ADVANCE(31);
      if (lookahead == 10503)
        ADVANCE(31);
      if (lookahead == 10508)
        ADVANCE(31);
      if (lookahead == 10509)
        ADVANCE(31);
      if (lookahead == 10510)
        ADVANCE(31);
      if (lookahead == 10511)
        ADVANCE(31);
      if (lookahead == 10512)
        ADVANCE(31);
      if (lookahead == 10513)
        ADVANCE(31);
      if (lookahead == 10516)
        ADVANCE(31);
      if (lookahead == 10517)
        ADVANCE(31);
      if (lookahead == 10518)
        ADVANCE(31);
      if (lookahead == 10519)
        ADVANCE(31);
      if (lookahead == 10520)
        ADVANCE(31);
      if (lookahead == 10525)
        ADVANCE(31);
      if (lookahead == 10526)
        ADVANCE(31);
      if (lookahead == 10527)
        ADVANCE(31);
      if (lookahead == 10528)
        ADVANCE(31);
      if (lookahead == 10564)
        ADVANCE(31);
      if (lookahead == 10565)
        ADVANCE(31);
      if (lookahead == 10566)
        ADVANCE(31);
      if (lookahead == 10567)
        ADVANCE(31);
      if (lookahead == 10568)
        ADVANCE(31);
      if (lookahead == 10570)
        ADVANCE(31);
      if (lookahead == 10571)
        ADVANCE(31);
      if (lookahead == 10574)
        ADVANCE(31);
      if (lookahead == 10576)
        ADVANCE(31);
      if (lookahead == 10578)
        ADVANCE(31);
      if (lookahead == 10579)
        ADVANCE(31);
      if (lookahead == 10582)
        ADVANCE(31);
      if (lookahead == 10583)
        ADVANCE(31);
      if (lookahead == 10586)
        ADVANCE(31);
      if (lookahead == 10587)
        ADVANCE(31);
      if (lookahead == 10590)
        ADVANCE(31);
      if (lookahead == 10591)
        ADVANCE(31);
      if (lookahead == 10594)
        ADVANCE(31);
      if (lookahead == 10596)
        ADVANCE(31);
      if (lookahead == 10598)
        ADVANCE(31);
      if (lookahead == 10599)
        ADVANCE(31);
      if (lookahead == 10600)
        ADVANCE(31);
      if (lookahead == 10601)
        ADVANCE(31);
      if (lookahead == 10602)
        ADVANCE(31);
      if (lookahead == 10603)
        ADVANCE(31);
      if (lookahead == 10604)
        ADVANCE(31);
      if (lookahead == 10605)
        ADVANCE(31);
      if (lookahead == 10608)
        ADVANCE(31);
      if (lookahead == 10680)
        ADVANCE(18);
      if (lookahead == 10684)
        ADVANCE(18);
      if (lookahead == 10686)
        ADVANCE(18);
      if (lookahead == 10687)
        ADVANCE(18);
      if (lookahead == 10740)
        ADVANCE(31);
      if (lookahead == 10742)
        ADVANCE(18);
      if (lookahead == 10743)
        ADVANCE(18);
      if (lookahead == 10746)
        ADVANCE(30);
      if (lookahead == 10747)
        ADVANCE(30);
      if (lookahead == 10759)
        ADVANCE(18);
      if (lookahead == 10760)
        ADVANCE(30);
      if (lookahead == 10781)
        ADVANCE(18);
      if (lookahead == 10786)
        ADVANCE(30);
      if (lookahead == 10787)
        ADVANCE(30);
      if (lookahead == 10788)
        ADVANCE(30);
      if (lookahead == 10789)
        ADVANCE(30);
      if (lookahead == 10790)
        ADVANCE(30);
      if (lookahead == 10791)
        ADVANCE(30);
      if (lookahead == 10792)
        ADVANCE(30);
      if (lookahead == 10793)
        ADVANCE(30);
      if (lookahead == 10794)
        ADVANCE(30);
      if (lookahead == 10795)
        ADVANCE(30);
      if (lookahead == 10796)
        ADVANCE(30);
      if (lookahead == 10797)
        ADVANCE(30);
      if (lookahead == 10798)
        ADVANCE(30);
      if (lookahead == 10800)
        ADVANCE(18);
      if (lookahead == 10801)
        ADVANCE(18);
      if (lookahead == 10802)
        ADVANCE(18);
      if (lookahead == 10803)
        ADVANCE(18);
      if (lookahead == 10804)
        ADVANCE(18);
      if (lookahead == 10805)
        ADVANCE(18);
      if (lookahead == 10806)
        ADVANCE(18);
      if (lookahead == 10807)
        ADVANCE(18);
      if (lookahead == 10808)
        ADVANCE(18);
      if (lookahead == 10809)
        ADVANCE(30);
      if (lookahead == 10810)
        ADVANCE(30);
      if (lookahead == 10811)
        ADVANCE(18);
      if (lookahead == 10812)
        ADVANCE(18);
      if (lookahead == 10813)
        ADVANCE(18);
      if (lookahead == 10816)
        ADVANCE(18);
      if (lookahead == 10817)
        ADVANCE(30);
      if (lookahead == 10818)
        ADVANCE(30);
      if (lookahead == 10819)
        ADVANCE(18);
      if (lookahead == 10820)
        ADVANCE(18);
      if (lookahead == 10821)
        ADVANCE(30);
      if (lookahead == 10826)
        ADVANCE(30);
      if (lookahead == 10827)
        ADVANCE(18);
      if (lookahead == 10828)
        ADVANCE(30);
      if (lookahead == 10829)
        ADVANCE(18);
      if (lookahead == 10830)
        ADVANCE(18);
      if (lookahead == 10831)
        ADVANCE(30);
      if (lookahead == 10832)
        ADVANCE(30);
      if (lookahead == 10833)
        ADVANCE(18);
      if (lookahead == 10834)
        ADVANCE(30);
      if (lookahead == 10835)
        ADVANCE(18);
      if (lookahead == 10836)
        ADVANCE(30);
      if (lookahead == 10837)
        ADVANCE(18);
      if (lookahead == 10838)
        ADVANCE(30);
      if (lookahead == 10839)
        ADVANCE(30);
      if (lookahead == 10840)
        ADVANCE(18);
      if (lookahead == 10842)
        ADVANCE(18);
      if (lookahead == 10843)
        ADVANCE(30);
      if (lookahead == 10844)
        ADVANCE(18);
      if (lookahead == 10845)
        ADVANCE(30);
      if (lookahead == 10846)
        ADVANCE(18);
      if (lookahead == 10847)
        ADVANCE(18);
      if (lookahead == 10848)
        ADVANCE(18);
      if (lookahead == 10849)
        ADVANCE(30);
      if (lookahead == 10850)
        ADVANCE(30);
      if (lookahead == 10851)
        ADVANCE(30);
      if (lookahead == 10868)
        ADVANCE(29);
      if (lookahead == 10971)
        ADVANCE(18);
      if (lookahead == 11056)
        ADVANCE(31);
      if (lookahead == 11057)
        ADVANCE(31);
      if (lookahead == 11058)
        ADVANCE(31);
      if (lookahead == 11059)
        ADVANCE(31);
      if (lookahead == 11060)
        ADVANCE(31);
      if (lookahead == 11061)
        ADVANCE(31);
      if (lookahead == 11062)
        ADVANCE(31);
      if (lookahead == 11063)
        ADVANCE(31);
      if (lookahead == 11064)
        ADVANCE(31);
      if (lookahead == 11065)
        ADVANCE(31);
      if (lookahead == 11066)
        ADVANCE(31);
      if (lookahead == 11067)
        ADVANCE(31);
      if (lookahead == 11068)
        ADVANCE(31);
      if (lookahead == 11069)
        ADVANCE(31);
      if (lookahead == 11070)
        ADVANCE(31);
      if (lookahead == 11071)
        ADVANCE(31);
      if (lookahead == 11072)
        ADVANCE(31);
      if (lookahead == 11073)
        ADVANCE(31);
      if (lookahead == 11074)
        ADVANCE(31);
      if (lookahead == 11075)
        ADVANCE(31);
      if (lookahead == 11076)
        ADVANCE(31);
      if (lookahead == 11079)
        ADVANCE(31);
      if (lookahead == 11080)
        ADVANCE(31);
      if (lookahead == 11081)
        ADVANCE(31);
      if (lookahead == 11082)
        ADVANCE(31);
      if (lookahead == 11083)
        ADVANCE(31);
      if (lookahead == 11084)
        ADVANCE(31);
      if (lookahead == 65513)
        ADVANCE(31);
      if (lookahead == 65515)
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(126);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 91},
  [2] = {.lex_state = 93},
  [3] = {.lex_state = 93},
  [4] = {.lex_state = 93},
  [5] = {.lex_state = 93},
  [6] = {.lex_state = 91},
  [7] = {.lex_state = 94},
  [8] = {.lex_state = 91},
  [9] = {.lex_state = 104},
  [10] = {.lex_state = 94},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 94},
  [13] = {.lex_state = 111},
  [14] = {.lex_state = 113},
  [15] = {.lex_state = 111},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 93},
  [18] = {.lex_state = 93},
  [19] = {.lex_state = 93},
  [20] = {.lex_state = 93},
  [21] = {.lex_state = 91},
  [22] = {.lex_state = 115},
  [23] = {.lex_state = 91},
  [24] = {.lex_state = 104},
  [25] = {.lex_state = 91},
  [26] = {.lex_state = 115},
  [27] = {.lex_state = 91},
  [28] = {.lex_state = 93},
  [29] = {.lex_state = 94},
  [30] = {.lex_state = 93},
  [31] = {.lex_state = 91},
  [32] = {.lex_state = 93},
  [33] = {.lex_state = 91},
  [34] = {.lex_state = 91},
  [35] = {.lex_state = 91},
  [36] = {.lex_state = 91},
  [37] = {.lex_state = 91},
  [38] = {.lex_state = 93},
  [39] = {.lex_state = 91},
  [40] = {.lex_state = 91},
  [41] = {.lex_state = 91},
  [42] = {.lex_state = 91},
  [43] = {.lex_state = 94},
  [44] = {.lex_state = 94},
  [45] = {.lex_state = 93},
  [46] = {.lex_state = 94},
  [47] = {.lex_state = 94},
  [48] = {.lex_state = 93},
  [49] = {.lex_state = 94},
  [50] = {.lex_state = 91},
  [51] = {.lex_state = 94},
  [52] = {.lex_state = 91},
  [53] = {.lex_state = 94},
  [54] = {.lex_state = 111},
  [55] = {.lex_state = 111},
  [56] = {.lex_state = 93},
  [57] = {.lex_state = 111},
  [58] = {.lex_state = 111},
  [59] = {.lex_state = 91},
  [60] = {.lex_state = 111},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 91},
  [63] = {.lex_state = 91},
  [64] = {.lex_state = 93},
  [65] = {.lex_state = 115},
  [66] = {.lex_state = 91},
  [67] = {.lex_state = 93},
  [68] = {.lex_state = 91},
  [69] = {.lex_state = 91},
  [70] = {.lex_state = 91},
  [71] = {.lex_state = 91},
  [72] = {.lex_state = 93},
  [73] = {.lex_state = 91},
  [74] = {.lex_state = 91},
  [75] = {.lex_state = 91},
  [76] = {.lex_state = 91},
  [77] = {.lex_state = 94},
  [78] = {.lex_state = 115},
  [79] = {.lex_state = 93},
  [80] = {.lex_state = 116},
  [81] = {.lex_state = 113},
  [82] = {.lex_state = 91},
  [83] = {.lex_state = 91},
  [84] = {.lex_state = 93},
  [85] = {.lex_state = 91},
  [86] = {.lex_state = 91},
  [87] = {.lex_state = 91},
  [88] = {.lex_state = 91},
  [89] = {.lex_state = 91},
  [90] = {.lex_state = 91},
  [91] = {.lex_state = 91},
  [92] = {.lex_state = 94},
  [93] = {.lex_state = 111},
  [94] = {.lex_state = 94},
  [95] = {.lex_state = 94},
  [96] = {.lex_state = 94},
  [97] = {.lex_state = 94},
  [98] = {.lex_state = 94},
  [99] = {.lex_state = 93},
  [100] = {.lex_state = 91},
  [101] = {.lex_state = 94},
  [102] = {.lex_state = 94},
  [103] = {.lex_state = 94},
  [104] = {.lex_state = 94},
  [105] = {.lex_state = 94},
  [106] = {.lex_state = 94},
  [107] = {.lex_state = 91},
  [108] = {.lex_state = 94},
  [109] = {.lex_state = 113},
  [110] = {.lex_state = 91},
  [111] = {.lex_state = 91},
  [112] = {.lex_state = 111},
  [113] = {.lex_state = 91},
  [114] = {.lex_state = 91},
  [115] = {.lex_state = 91},
  [116] = {.lex_state = 91},
  [117] = {.lex_state = 94},
  [118] = {.lex_state = 91},
  [119] = {.lex_state = 94},
  [120] = {.lex_state = 94},
  [121] = {.lex_state = 93},
  [122] = {.lex_state = 93},
  [123] = {.lex_state = 93},
  [124] = {.lex_state = 93},
  [125] = {.lex_state = 91},
  [126] = {.lex_state = 111},
  [127] = {.lex_state = 91},
  [128] = {.lex_state = 104},
  [129] = {.lex_state = 111},
  [130] = {.lex_state = 111},
  [131] = {.lex_state = 93},
  [132] = {.lex_state = 116},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 116},
  [135] = {.lex_state = 111},
  [136] = {.lex_state = 94},
  [137] = {.lex_state = 94},
  [138] = {.lex_state = 94},
  [139] = {.lex_state = 111},
  [140] = {.lex_state = 91},
  [141] = {.lex_state = 111},
  [142] = {.lex_state = 94},
  [143] = {.lex_state = 94},
  [144] = {.lex_state = 115},
  [145] = {.lex_state = 94},
  [146] = {.lex_state = 93},
  [147] = {.lex_state = 115},
  [148] = {.lex_state = 115},
  [149] = {.lex_state = 94},
  [150] = {.lex_state = 111},
  [151] = {.lex_state = 111},
  [152] = {.lex_state = 111},
  [153] = {.lex_state = 115},
  [154] = {.lex_state = 116},
  [155] = {.lex_state = 117},
  [156] = {.lex_state = 94},
  [157] = {.lex_state = 111},
  [158] = {.lex_state = 91},
  [159] = {.lex_state = 115},
  [160] = {.lex_state = 91},
  [161] = {.lex_state = 115},
  [162] = {.lex_state = 91},
  [163] = {.lex_state = 115},
  [164] = {.lex_state = 115},
  [165] = {.lex_state = 91},
  [166] = {.lex_state = 91},
  [167] = {.lex_state = 91},
  [168] = {.lex_state = 91},
  [169] = {.lex_state = 119},
  [170] = {.lex_state = 91},
  [171] = {.lex_state = 91},
  [172] = {.lex_state = 94},
  [173] = {.lex_state = 91},
  [174] = {.lex_state = 91},
  [175] = {.lex_state = 91},
  [176] = {.lex_state = 91},
  [177] = {.lex_state = 91},
  [178] = {.lex_state = 91},
  [179] = {.lex_state = 116},
  [180] = {.lex_state = 93},
  [181] = {.lex_state = 91},
  [182] = {.lex_state = 113},
  [183] = {.lex_state = 91},
  [184] = {.lex_state = 91},
  [185] = {.lex_state = 91},
  [186] = {.lex_state = 91},
  [187] = {.lex_state = 91},
  [188] = {.lex_state = 91},
  [189] = {.lex_state = 91},
  [190] = {.lex_state = 91},
  [191] = {.lex_state = 91},
  [192] = {.lex_state = 91},
  [193] = {.lex_state = 91},
  [194] = {.lex_state = 121},
  [195] = {.lex_state = 91},
  [196] = {.lex_state = 91},
  [197] = {.lex_state = 91},
  [198] = {.lex_state = 94},
  [199] = {.lex_state = 91},
  [200] = {.lex_state = 104},
  [201] = {.lex_state = 94},
  [202] = {.lex_state = 104},
  [203] = {.lex_state = 111},
  [204] = {.lex_state = 91},
  [205] = {.lex_state = 91},
  [206] = {.lex_state = 91},
  [207] = {.lex_state = 91},
  [208] = {.lex_state = 91},
  [209] = {.lex_state = 91},
  [210] = {.lex_state = 91},
  [211] = {.lex_state = 91},
  [212] = {.lex_state = 91},
  [213] = {.lex_state = 94},
  [214] = {.lex_state = 91},
  [215] = {.lex_state = 91},
  [216] = {.lex_state = 93},
  [217] = {.lex_state = 94},
  [218] = {.lex_state = 94},
  [219] = {.lex_state = 94},
  [220] = {.lex_state = 94},
  [221] = {.lex_state = 94},
  [222] = {.lex_state = 94},
  [223] = {.lex_state = 94},
  [224] = {.lex_state = 94},
  [225] = {.lex_state = 111},
  [226] = {.lex_state = 94},
  [227] = {.lex_state = 93},
  [228] = {.lex_state = 94},
  [229] = {.lex_state = 111},
  [230] = {.lex_state = 122},
  [231] = {.lex_state = 111},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 91},
  [234] = {.lex_state = 91},
  [235] = {.lex_state = 93},
  [236] = {.lex_state = 111},
  [237] = {.lex_state = 91},
  [238] = {.lex_state = 93},
  [239] = {.lex_state = 91},
  [240] = {.lex_state = 91},
  [241] = {.lex_state = 91},
  [242] = {.lex_state = 91},
  [243] = {.lex_state = 93},
  [244] = {.lex_state = 91},
  [245] = {.lex_state = 91},
  [246] = {.lex_state = 91},
  [247] = {.lex_state = 91},
  [248] = {.lex_state = 111},
  [249] = {.lex_state = 91},
  [250] = {.lex_state = 91},
  [251] = {.lex_state = 111},
  [252] = {.lex_state = 116},
  [253] = {.lex_state = 91},
  [254] = {.lex_state = 91},
  [255] = {.lex_state = 91},
  [256] = {.lex_state = 91},
  [257] = {.lex_state = 91},
  [258] = {.lex_state = 91},
  [259] = {.lex_state = 91},
  [260] = {.lex_state = 94},
  [261] = {.lex_state = 111},
  [262] = {.lex_state = 94},
  [263] = {.lex_state = 94},
  [264] = {.lex_state = 93},
  [265] = {.lex_state = 111},
  [266] = {.lex_state = 91},
  [267] = {.lex_state = 111},
  [268] = {.lex_state = 94},
  [269] = {.lex_state = 94},
  [270] = {.lex_state = 111},
  [271] = {.lex_state = 115},
  [272] = {.lex_state = 94},
  [273] = {.lex_state = 91},
  [274] = {.lex_state = 111},
  [275] = {.lex_state = 115},
  [276] = {.lex_state = 94},
  [277] = {.lex_state = 94},
  [278] = {.lex_state = 111},
  [279] = {.lex_state = 115},
  [280] = {.lex_state = 94},
  [281] = {.lex_state = 115},
  [282] = {.lex_state = 116},
  [283] = {.lex_state = 121},
  [284] = {.lex_state = 115},
  [285] = {.lex_state = 104},
  [286] = {.lex_state = 94},
  [287] = {.lex_state = 104},
  [288] = {.lex_state = 111},
  [289] = {.lex_state = 124},
  [290] = {.lex_state = 91},
  [291] = {.lex_state = 93},
  [292] = {.lex_state = 116},
  [293] = {.lex_state = 116},
  [294] = {.lex_state = 116},
  [295] = {.lex_state = 116},
  [296] = {.lex_state = 116},
  [297] = {.lex_state = 116},
  [298] = {.lex_state = 116},
  [299] = {.lex_state = 94},
  [300] = {.lex_state = 116},
  [301] = {.lex_state = 91},
  [302] = {.lex_state = 91},
  [303] = {.lex_state = 93},
  [304] = {.lex_state = 126},
  [305] = {.lex_state = 94},
  [306] = {.lex_state = 94},
  [307] = {.lex_state = 94},
  [308] = {.lex_state = 94},
  [309] = {.lex_state = 94},
  [310] = {.lex_state = 104},
  [311] = {.lex_state = 94},
  [312] = {.lex_state = 104},
  [313] = {.lex_state = 94},
  [314] = {.lex_state = 94},
  [315] = {.lex_state = 91},
  [316] = {.lex_state = 94},
  [317] = {.lex_state = 104},
  [318] = {.lex_state = 121},
  [319] = {.lex_state = 94},
  [320] = {.lex_state = 111},
  [321] = {.lex_state = 93},
  [322] = {.lex_state = 91},
  [323] = {.lex_state = 91},
  [324] = {.lex_state = 91},
  [325] = {.lex_state = 91},
  [326] = {.lex_state = 91},
  [327] = {.lex_state = 91},
  [328] = {.lex_state = 91},
  [329] = {.lex_state = 94},
  [330] = {.lex_state = 91},
  [331] = {.lex_state = 94},
  [332] = {.lex_state = 94},
  [333] = {.lex_state = 91},
  [334] = {.lex_state = 94},
  [335] = {.lex_state = 94},
  [336] = {.lex_state = 111},
  [337] = {.lex_state = 94},
  [338] = {.lex_state = 93},
  [339] = {.lex_state = 111},
  [340] = {.lex_state = 111},
  [341] = {.lex_state = 94},
  [342] = {.lex_state = 111},
  [343] = {.lex_state = 111},
  [344] = {.lex_state = 111},
  [345] = {.lex_state = 111},
  [346] = {.lex_state = 116},
  [347] = {.lex_state = 122},
  [348] = {.lex_state = 94},
  [349] = {.lex_state = 111},
  [350] = {.lex_state = 111},
  [351] = {.lex_state = 111},
  [352] = {.lex_state = 111},
  [353] = {.lex_state = 111},
  [354] = {.lex_state = 91},
  [355] = {.lex_state = 111},
  [356] = {.lex_state = 111},
  [357] = {.lex_state = 111},
  [358] = {.lex_state = 111},
  [359] = {.lex_state = 111},
  [360] = {.lex_state = 111},
  [361] = {.lex_state = 93},
  [362] = {.lex_state = 116},
  [363] = {.lex_state = 116},
  [364] = {.lex_state = 111},
  [365] = {.lex_state = 116},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 94},
  [372] = {.lex_state = 111},
  [373] = {.lex_state = 94},
  [374] = {.lex_state = 115},
  [375] = {.lex_state = 111},
  [376] = {.lex_state = 91},
  [377] = {.lex_state = 94},
  [378] = {.lex_state = 111},
  [379] = {.lex_state = 115},
  [380] = {.lex_state = 111},
  [381] = {.lex_state = 91},
  [382] = {.lex_state = 115},
  [383] = {.lex_state = 111},
  [384] = {.lex_state = 94},
  [385] = {.lex_state = 94},
  [386] = {.lex_state = 111},
  [387] = {.lex_state = 115},
  [388] = {.lex_state = 94},
  [389] = {.lex_state = 115},
  [390] = {.lex_state = 115},
  [391] = {.lex_state = 104},
  [392] = {.lex_state = 104},
  [393] = {.lex_state = 121},
  [394] = {.lex_state = 111},
  [395] = {.lex_state = 115},
  [396] = {.lex_state = 116},
  [397] = {.lex_state = 91},
  [398] = {.lex_state = 91},
  [399] = {.lex_state = 94},
  [400] = {.lex_state = 111},
  [401] = {.lex_state = 94},
  [402] = {.lex_state = 94},
  [403] = {.lex_state = 104},
  [404] = {.lex_state = 94},
  [405] = {.lex_state = 104},
  [406] = {.lex_state = 91},
  [407] = {.lex_state = 94},
  [408] = {.lex_state = 91},
  [409] = {.lex_state = 94},
  [410] = {.lex_state = 111},
  [411] = {.lex_state = 111},
  [412] = {.lex_state = 94},
  [413] = {.lex_state = 111},
  [414] = {.lex_state = 111},
  [415] = {.lex_state = 111},
  [416] = {.lex_state = 94},
  [417] = {.lex_state = 94},
  [418] = {.lex_state = 111},
  [419] = {.lex_state = 111},
  [420] = {.lex_state = 94},
  [421] = {.lex_state = 111},
  [422] = {.lex_state = 116},
  [423] = {.lex_state = 121},
  [424] = {.lex_state = 111},
  [425] = {.lex_state = 104},
  [426] = {.lex_state = 94},
  [427] = {.lex_state = 104},
  [428] = {.lex_state = 111},
  [429] = {.lex_state = 91},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 94},
  [432] = {.lex_state = 111},
  [433] = {.lex_state = 94},
  [434] = {.lex_state = 115},
  [435] = {.lex_state = 91},
  [436] = {.lex_state = 115},
  [437] = {.lex_state = 111},
  [438] = {.lex_state = 94},
  [439] = {.lex_state = 115},
  [440] = {.lex_state = 111},
  [441] = {.lex_state = 115},
  [442] = {.lex_state = 104},
  [443] = {.lex_state = 104},
  [444] = {.lex_state = 94},
  [445] = {.lex_state = 116},
  [446] = {.lex_state = 91},
  [447] = {.lex_state = 91},
  [448] = {.lex_state = 94},
  [449] = {.lex_state = 111},
  [450] = {.lex_state = 94},
  [451] = {.lex_state = 121},
  [452] = {.lex_state = 94},
  [453] = {.lex_state = 104},
  [454] = {.lex_state = 94},
  [455] = {.lex_state = 91},
  [456] = {.lex_state = 94},
  [457] = {.lex_state = 111},
  [458] = {.lex_state = 111},
  [459] = {.lex_state = 93},
  [460] = {.lex_state = 111},
  [461] = {.lex_state = 111},
  [462] = {.lex_state = 111},
  [463] = {.lex_state = 94},
  [464] = {.lex_state = 94},
  [465] = {.lex_state = 111},
  [466] = {.lex_state = 111},
  [467] = {.lex_state = 94},
  [468] = {.lex_state = 111},
  [469] = {.lex_state = 111},
  [470] = {.lex_state = 104},
  [471] = {.lex_state = 104},
  [472] = {.lex_state = 121},
  [473] = {.lex_state = 111},
  [474] = {.lex_state = 111},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 94},
  [477] = {.lex_state = 115},
  [478] = {.lex_state = 111},
  [479] = {.lex_state = 115},
  [480] = {.lex_state = 115},
  [481] = {.lex_state = 104},
  [482] = {.lex_state = 94},
  [483] = {.lex_state = 116},
  [484] = {.lex_state = 94},
  [485] = {.lex_state = 121},
  [486] = {.lex_state = 94},
  [487] = {.lex_state = 111},
  [488] = {.lex_state = 111},
  [489] = {.lex_state = 111},
  [490] = {.lex_state = 111},
  [491] = {.lex_state = 111},
  [492] = {.lex_state = 111},
  [493] = {.lex_state = 94},
  [494] = {.lex_state = 111},
  [495] = {.lex_state = 111},
  [496] = {.lex_state = 111},
  [497] = {.lex_state = 104},
  [498] = {.lex_state = 104},
  [499] = {.lex_state = 94},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 115},
  [502] = {.lex_state = 115},
  [503] = {.lex_state = 111},
  [504] = {.lex_state = 94},
  [505] = {.lex_state = 111},
  [506] = {.lex_state = 111},
  [507] = {.lex_state = 111},
  [508] = {.lex_state = 111},
  [509] = {.lex_state = 104},
  [510] = {.lex_state = 94},
  [511] = {.lex_state = 115},
  [512] = {.lex_state = 111},
  [513] = {.lex_state = 111},
  [514] = {.lex_state = 111},
  [515] = {.lex_state = 111},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_mutable] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [sym__times_operator] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [sym__plus_operator] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_COLON] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_elseif] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym__arrow_operator] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_function_definition] = STATE(10),
    [sym_struct_definition] = STATE(10),
    [sym_if_statement] = STATE(10),
    [sym__expression] = STATE(10),
    [sym_parenthesized_expression] = STATE(10),
    [sym_call_expression] = STATE(10),
    [sym_import_statement] = STATE(10),
    [sym_parameterized_identifier] = STATE(10),
    [sym_pair_expression] = STATE(10),
    [sym_source_file] = STATE(11),
    [sym_module_definition] = STATE(10),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(10),
    [sym_assignment_expression] = STATE(10),
    [sym_binary_expression] = STATE(10),
    [anon_sym_module] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_using] = ACTIONS(9),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(21),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(21),
  },
  [2] = {
    [sym_identifier] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_field_expression] = STATE(14),
    [sym_identifier] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_identifier] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_identifier] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_function_definition] = STATE(25),
    [sym_struct_definition] = STATE(25),
    [sym_parameterized_identifier] = STATE(25),
    [sym_if_statement] = STATE(25),
    [sym_pair_expression] = STATE(25),
    [sym_parenthesized_expression] = STATE(25),
    [sym_module_definition] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym__expression] = STATE(25),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(25),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_import_statement] = STATE(25),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(35),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(47),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(47),
  },
  [7] = {
    [sym_type_argument_list] = STATE(29),
    [anon_sym_AMP_AMP] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(51),
    [sym__plus_operator] = ACTIONS(51),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_else] = ACTIONS(51),
    [sym__times_operator] = ACTIONS(51),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_PIPE_PIPE] = ACTIONS(51),
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_EQ_GT] = ACTIONS(51),
    [anon_sym_LT_COLON] = ACTIONS(51),
    [anon_sym_elseif] = ACTIONS(51),
    [anon_sym_end] = ACTIONS(51),
    [sym__arrow_operator] = ACTIONS(51),
    [anon_sym_LF] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(51),
  },
  [8] = {
    [sym_function_definition] = STATE(31),
    [sym_struct_definition] = STATE(31),
    [sym_parameterized_identifier] = STATE(31),
    [sym_if_statement] = STATE(31),
    [sym_pair_expression] = STATE(31),
    [sym_parenthesized_expression] = STATE(31),
    [sym_module_definition] = STATE(31),
    [sym_call_expression] = STATE(31),
    [sym__expression] = STATE(31),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(31),
    [sym_assignment_expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_import_statement] = STATE(31),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(61),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(63),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(63),
  },
  [9] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_struct] = ACTIONS(65),
  },
  [10] = {
    [sym_argument_list] = STATE(43),
    [aux_sym__expression_list_repeat1] = STATE(44),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [sym__times_operator] = ACTIONS(69),
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_SEMI] = ACTIONS(73),
    [anon_sym_PIPE_PIPE] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LT_COLON] = ACTIONS(79),
    [sym__plus_operator] = ACTIONS(81),
    [sym__assign_operator] = ACTIONS(83),
    [anon_sym_EQ_GT] = ACTIONS(85),
    [sym_comment] = ACTIONS(53),
    [sym__arrow_operator] = ACTIONS(87),
    [anon_sym_LF] = ACTIONS(89),
    [anon_sym_COLON_COLON] = ACTIONS(79),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [anon_sym_AMP_AMP] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(51),
    [sym__plus_operator] = ACTIONS(51),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(55),
    [anon_sym_else] = ACTIONS(51),
    [sym__times_operator] = ACTIONS(51),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_PIPE_PIPE] = ACTIONS(51),
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_EQ_GT] = ACTIONS(51),
    [anon_sym_LT_COLON] = ACTIONS(51),
    [anon_sym_elseif] = ACTIONS(51),
    [anon_sym_end] = ACTIONS(51),
    [sym__arrow_operator] = ACTIONS(51),
    [anon_sym_LF] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(51),
  },
  [13] = {
    [sym_function_definition] = STATE(47),
    [sym_struct_definition] = STATE(47),
    [sym_parameterized_identifier] = STATE(47),
    [sym_if_statement] = STATE(47),
    [sym_pair_expression] = STATE(47),
    [sym_parenthesized_expression] = STATE(47),
    [sym_module_definition] = STATE(47),
    [sym_call_expression] = STATE(47),
    [sym__expression] = STATE(47),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(47),
    [sym_assignment_expression] = STATE(47),
    [sym_binary_expression] = STATE(47),
    [sym_import_statement] = STATE(47),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(95),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(97),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(97),
  },
  [14] = {
    [sym_import_list] = STATE(49),
    [anon_sym_AMP_AMP] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(99),
    [sym__plus_operator] = ACTIONS(99),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(99),
    [anon_sym_DOT] = ACTIONS(55),
    [sym__times_operator] = ACTIONS(99),
    [anon_sym_SEMI] = ACTIONS(99),
    [anon_sym_PIPE_PIPE] = ACTIONS(99),
    [ts_builtin_sym_end] = ACTIONS(101),
    [anon_sym_EQ_GT] = ACTIONS(99),
    [anon_sym_LT_COLON] = ACTIONS(99),
    [anon_sym_COLON] = ACTIONS(103),
    [sym__arrow_operator] = ACTIONS(99),
    [anon_sym_LF] = ACTIONS(101),
    [anon_sym_COLON_COLON] = ACTIONS(99),
  },
  [15] = {
    [sym_function_definition] = STATE(53),
    [sym_struct_definition] = STATE(53),
    [sym_if_statement] = STATE(53),
    [sym__expression] = STATE(53),
    [sym_parenthesized_expression] = STATE(53),
    [sym_call_expression] = STATE(53),
    [sym_type_parameter_list] = STATE(54),
    [sym_subtype_clause] = STATE(55),
    [sym_import_statement] = STATE(53),
    [sym_parameterized_identifier] = STATE(53),
    [sym_pair_expression] = STATE(53),
    [sym_module_definition] = STATE(53),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(53),
    [sym_assignment_expression] = STATE(53),
    [sym_binary_expression] = STATE(53),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_mutable] = ACTIONS(23),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_LT_COLON] = ACTIONS(107),
    [anon_sym_import] = ACTIONS(93),
    [anon_sym_end] = ACTIONS(109),
    [sym_string] = ACTIONS(111),
    [sym_number] = ACTIONS(111),
  },
  [16] = {
    [sym_parameter_list] = STATE(57),
    [anon_sym_LPAREN] = ACTIONS(113),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym_identifier] = ACTIONS(115),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym_field_expression] = STATE(59),
    [sym_identifier] = ACTIONS(117),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym_identifier] = ACTIONS(119),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym_identifier] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym_function_definition] = STATE(62),
    [sym_struct_definition] = STATE(62),
    [sym_parameterized_identifier] = STATE(62),
    [sym_if_statement] = STATE(62),
    [sym_pair_expression] = STATE(62),
    [sym_parenthesized_expression] = STATE(62),
    [sym_module_definition] = STATE(62),
    [sym_call_expression] = STATE(62),
    [sym__expression] = STATE(62),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(62),
    [sym_assignment_expression] = STATE(62),
    [sym_binary_expression] = STATE(62),
    [sym_import_statement] = STATE(62),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(35),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(123),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(123),
  },
  [22] = {
    [sym_type_argument_list] = STATE(65),
    [anon_sym_AMP_AMP] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(59),
    [anon_sym_using] = ACTIONS(51),
    [anon_sym_struct] = ACTIONS(51),
    [anon_sym_function] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(59),
    [sym__plus_operator] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(125),
    [sym_identifier] = ACTIONS(51),
    [anon_sym_if] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_mutable] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(59),
    [anon_sym_module] = ACTIONS(51),
    [sym__times_operator] = ACTIONS(51),
    [anon_sym_PIPE_PIPE] = ACTIONS(51),
    [anon_sym_EQ_GT] = ACTIONS(59),
    [anon_sym_LT_COLON] = ACTIONS(59),
    [anon_sym_import] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(59),
    [sym__arrow_operator] = ACTIONS(59),
    [sym_string] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(59),
    [sym_number] = ACTIONS(59),
  },
  [23] = {
    [sym_function_definition] = STATE(66),
    [sym_struct_definition] = STATE(66),
    [sym_parameterized_identifier] = STATE(66),
    [sym_if_statement] = STATE(66),
    [sym_pair_expression] = STATE(66),
    [sym_parenthesized_expression] = STATE(66),
    [sym_module_definition] = STATE(66),
    [sym_call_expression] = STATE(66),
    [sym__expression] = STATE(66),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(66),
    [sym_assignment_expression] = STATE(66),
    [sym_binary_expression] = STATE(66),
    [sym_import_statement] = STATE(66),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(61),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(129),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(129),
  },
  [24] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_struct] = ACTIONS(131),
  },
  [25] = {
    [sym_argument_list] = STATE(78),
    [anon_sym_AMP_AMP] = ACTIONS(133),
    [sym__times_operator] = ACTIONS(135),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_LT_COLON] = ACTIONS(141),
    [sym__plus_operator] = ACTIONS(143),
    [sym__assign_operator] = ACTIONS(145),
    [anon_sym_EQ_GT] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
    [sym__arrow_operator] = ACTIONS(149),
    [anon_sym_COLON_COLON] = ACTIONS(141),
    [anon_sym_RPAREN] = ACTIONS(151),
  },
  [26] = {
    [anon_sym_AMP_AMP] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(59),
    [anon_sym_using] = ACTIONS(51),
    [anon_sym_struct] = ACTIONS(51),
    [anon_sym_function] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(59),
    [sym__plus_operator] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(125),
    [sym_identifier] = ACTIONS(51),
    [anon_sym_if] = ACTIONS(51),
    [anon_sym_mutable] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(59),
    [anon_sym_module] = ACTIONS(51),
    [sym__times_operator] = ACTIONS(51),
    [anon_sym_PIPE_PIPE] = ACTIONS(51),
    [anon_sym_EQ_GT] = ACTIONS(59),
    [anon_sym_LT_COLON] = ACTIONS(59),
    [anon_sym_import] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(59),
    [sym__arrow_operator] = ACTIONS(59),
    [sym_string] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(59),
    [sym_number] = ACTIONS(59),
  },
  [27] = {
    [sym_function_definition] = STATE(80),
    [sym_struct_definition] = STATE(80),
    [sym_parameterized_identifier] = STATE(80),
    [sym_if_statement] = STATE(80),
    [sym_pair_expression] = STATE(80),
    [sym_parenthesized_expression] = STATE(80),
    [sym_module_definition] = STATE(80),
    [sym_call_expression] = STATE(80),
    [sym__expression] = STATE(80),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(80),
    [sym_assignment_expression] = STATE(80),
    [sym_binary_expression] = STATE(80),
    [sym_import_statement] = STATE(80),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(153),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(155),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(155),
  },
  [28] = {
    [sym_identifier] = ACTIONS(157),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [anon_sym_AMP_AMP] = ACTIONS(159),
    [anon_sym_LPAREN] = ACTIONS(159),
    [sym__plus_operator] = ACTIONS(159),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(159),
    [anon_sym_else] = ACTIONS(159),
    [sym__times_operator] = ACTIONS(159),
    [anon_sym_SEMI] = ACTIONS(159),
    [anon_sym_PIPE_PIPE] = ACTIONS(159),
    [ts_builtin_sym_end] = ACTIONS(161),
    [anon_sym_EQ_GT] = ACTIONS(159),
    [anon_sym_LT_COLON] = ACTIONS(159),
    [anon_sym_elseif] = ACTIONS(159),
    [anon_sym_end] = ACTIONS(159),
    [sym__arrow_operator] = ACTIONS(159),
    [anon_sym_LF] = ACTIONS(161),
    [anon_sym_COLON_COLON] = ACTIONS(159),
  },
  [30] = {
    [sym_field_expression] = STATE(82),
    [sym_identifier] = ACTIONS(163),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [sym_function_definition] = STATE(92),
    [sym_struct_definition] = STATE(92),
    [sym_if_statement] = STATE(92),
    [sym__expression] = STATE(92),
    [sym_parenthesized_expression] = STATE(92),
    [sym_call_expression] = STATE(92),
    [sym_argument_list] = STATE(78),
    [sym_import_statement] = STATE(92),
    [sym_parameterized_identifier] = STATE(92),
    [sym_pair_expression] = STATE(92),
    [sym_module_definition] = STATE(92),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(92),
    [sym_assignment_expression] = STATE(92),
    [sym_binary_expression] = STATE(92),
    [anon_sym_AMP_AMP] = ACTIONS(165),
    [anon_sym_using] = ACTIONS(167),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(169),
    [sym__plus_operator] = ACTIONS(171),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(173),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_mutable] = ACTIONS(23),
    [anon_sym_module] = ACTIONS(5),
    [sym__times_operator] = ACTIONS(175),
    [anon_sym_PIPE_PIPE] = ACTIONS(177),
    [anon_sym_EQ_GT] = ACTIONS(179),
    [anon_sym_LT_COLON] = ACTIONS(141),
    [anon_sym_import] = ACTIONS(167),
    [sym__arrow_operator] = ACTIONS(181),
    [sym_string] = ACTIONS(183),
    [anon_sym_COLON_COLON] = ACTIONS(141),
    [sym_number] = ACTIONS(183),
  },
  [32] = {
    [sym_identifier] = ACTIONS(185),
    [sym_comment] = ACTIONS(3),
  },
  [33] = {
    [sym_function_definition] = STATE(94),
    [sym_struct_definition] = STATE(94),
    [sym_parameterized_identifier] = STATE(94),
    [sym_if_statement] = STATE(94),
    [sym_pair_expression] = STATE(94),
    [sym_parenthesized_expression] = STATE(94),
    [sym_module_definition] = STATE(94),
    [sym_call_expression] = STATE(94),
    [sym__expression] = STATE(94),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(94),
    [sym_assignment_expression] = STATE(94),
    [sym_binary_expression] = STATE(94),
    [sym_import_statement] = STATE(94),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(9),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(187),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(187),
  },
  [34] = {
    [sym_function_definition] = STATE(95),
    [sym_struct_definition] = STATE(95),
    [sym_parameterized_identifier] = STATE(95),
    [sym_if_statement] = STATE(95),
    [sym_pair_expression] = STATE(95),
    [sym_parenthesized_expression] = STATE(95),
    [sym_module_definition] = STATE(95),
    [sym_call_expression] = STATE(95),
    [sym__expression] = STATE(95),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(95),
    [sym_assignment_expression] = STATE(95),
    [sym_binary_expression] = STATE(95),
    [sym_import_statement] = STATE(95),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(9),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(189),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(189),
  },
  [35] = {
    [sym_function_definition] = STATE(96),
    [sym_struct_definition] = STATE(96),
    [sym_parameterized_identifier] = STATE(96),
    [sym_if_statement] = STATE(96),
    [sym_pair_expression] = STATE(96),
    [sym_parenthesized_expression] = STATE(96),
    [sym_module_definition] = STATE(96),
    [sym_call_expression] = STATE(96),
    [sym__expression] = STATE(96),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(96),
    [sym_assignment_expression] = STATE(96),
    [sym_binary_expression] = STATE(96),
    [sym_import_statement] = STATE(96),
    [anon_sym_module] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(191),
    [anon_sym_using] = ACTIONS(9),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(193),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(193),
  },
  [36] = {
    [sym_function_definition] = STATE(97),
    [sym_struct_definition] = STATE(97),
    [sym_parameterized_identifier] = STATE(97),
    [sym_if_statement] = STATE(97),
    [sym_pair_expression] = STATE(97),
    [sym_parenthesized_expression] = STATE(97),
    [sym_module_definition] = STATE(97),
    [sym_call_expression] = STATE(97),
    [sym__expression] = STATE(97),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(97),
    [sym_assignment_expression] = STATE(97),
    [sym_binary_expression] = STATE(97),
    [sym_import_statement] = STATE(97),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(9),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(195),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(195),
  },
  [37] = {
    [sym_function_definition] = STATE(100),
    [sym_struct_definition] = STATE(100),
    [sym_parameterized_identifier] = STATE(100),
    [sym_if_statement] = STATE(100),
    [sym_pair_expression] = STATE(100),
    [sym_parenthesized_expression] = STATE(100),
    [sym_module_definition] = STATE(100),
    [sym_call_expression] = STATE(100),
    [sym__expression] = STATE(100),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(100),
    [sym_assignment_expression] = STATE(100),
    [sym_binary_expression] = STATE(100),
    [sym_import_statement] = STATE(100),
    [anon_sym_module] = ACTIONS(33),
    [sym_number] = ACTIONS(197),
    [anon_sym_using] = ACTIONS(199),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(197),
    [anon_sym_mutable] = ACTIONS(49),
    [anon_sym_RPAREN] = ACTIONS(201),
  },
  [38] = {
    [sym_parameterized_identifier] = STATE(102),
    [sym_identifier] = ACTIONS(203),
    [sym_comment] = ACTIONS(3),
  },
  [39] = {
    [sym_function_definition] = STATE(103),
    [sym_struct_definition] = STATE(103),
    [sym_parameterized_identifier] = STATE(103),
    [sym_if_statement] = STATE(103),
    [sym_pair_expression] = STATE(103),
    [sym_parenthesized_expression] = STATE(103),
    [sym_module_definition] = STATE(103),
    [sym_call_expression] = STATE(103),
    [sym__expression] = STATE(103),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(103),
    [sym_assignment_expression] = STATE(103),
    [sym_binary_expression] = STATE(103),
    [sym_import_statement] = STATE(103),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(9),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(205),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(205),
  },
  [40] = {
    [sym_function_definition] = STATE(104),
    [sym_struct_definition] = STATE(104),
    [sym_parameterized_identifier] = STATE(104),
    [sym_if_statement] = STATE(104),
    [sym_pair_expression] = STATE(104),
    [sym_parenthesized_expression] = STATE(104),
    [sym_module_definition] = STATE(104),
    [sym_call_expression] = STATE(104),
    [sym__expression] = STATE(104),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(104),
    [sym_assignment_expression] = STATE(104),
    [sym_binary_expression] = STATE(104),
    [sym_import_statement] = STATE(104),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(9),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(207),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(207),
  },
  [41] = {
    [sym_function_definition] = STATE(105),
    [sym_struct_definition] = STATE(105),
    [sym_parameterized_identifier] = STATE(105),
    [sym_if_statement] = STATE(105),
    [sym_pair_expression] = STATE(105),
    [sym_parenthesized_expression] = STATE(105),
    [sym_module_definition] = STATE(105),
    [sym_call_expression] = STATE(105),
    [sym__expression] = STATE(105),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(105),
    [sym_assignment_expression] = STATE(105),
    [sym_binary_expression] = STATE(105),
    [sym_import_statement] = STATE(105),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(9),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(209),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(209),
  },
  [42] = {
    [sym_function_definition] = STATE(106),
    [sym_struct_definition] = STATE(106),
    [sym_parameterized_identifier] = STATE(106),
    [sym_if_statement] = STATE(106),
    [sym_pair_expression] = STATE(106),
    [sym_parenthesized_expression] = STATE(106),
    [sym_module_definition] = STATE(106),
    [sym_call_expression] = STATE(106),
    [sym__expression] = STATE(106),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(106),
    [sym_assignment_expression] = STATE(106),
    [sym_binary_expression] = STATE(106),
    [sym_import_statement] = STATE(106),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(9),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(211),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(211),
  },
  [43] = {
    [anon_sym_AMP_AMP] = ACTIONS(213),
    [anon_sym_LPAREN] = ACTIONS(213),
    [sym__plus_operator] = ACTIONS(213),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(213),
    [anon_sym_else] = ACTIONS(213),
    [sym__times_operator] = ACTIONS(213),
    [anon_sym_SEMI] = ACTIONS(213),
    [anon_sym_PIPE_PIPE] = ACTIONS(213),
    [ts_builtin_sym_end] = ACTIONS(215),
    [anon_sym_EQ_GT] = ACTIONS(213),
    [anon_sym_LT_COLON] = ACTIONS(213),
    [anon_sym_elseif] = ACTIONS(213),
    [anon_sym_end] = ACTIONS(213),
    [sym__arrow_operator] = ACTIONS(213),
    [anon_sym_LF] = ACTIONS(215),
    [anon_sym_COLON_COLON] = ACTIONS(213),
  },
  [44] = {
    [aux_sym__expression_list_repeat1] = STATE(108),
    [ts_builtin_sym_end] = ACTIONS(191),
    [anon_sym_SEMI] = ACTIONS(217),
    [anon_sym_LF] = ACTIONS(219),
    [sym_comment] = ACTIONS(53),
  },
  [45] = {
    [sym_field_expression] = STATE(109),
    [sym_identifier] = ACTIONS(221),
    [sym_comment] = ACTIONS(3),
  },
  [46] = {
    [anon_sym_AMP_AMP] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(223),
    [sym__plus_operator] = ACTIONS(223),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(223),
    [anon_sym_else] = ACTIONS(223),
    [sym__times_operator] = ACTIONS(223),
    [anon_sym_SEMI] = ACTIONS(223),
    [anon_sym_PIPE_PIPE] = ACTIONS(223),
    [ts_builtin_sym_end] = ACTIONS(225),
    [anon_sym_EQ_GT] = ACTIONS(223),
    [anon_sym_LT_COLON] = ACTIONS(223),
    [anon_sym_elseif] = ACTIONS(223),
    [anon_sym_end] = ACTIONS(223),
    [sym__arrow_operator] = ACTIONS(223),
    [anon_sym_LF] = ACTIONS(225),
    [anon_sym_COLON_COLON] = ACTIONS(223),
  },
  [47] = {
    [sym_argument_list] = STATE(43),
    [aux_sym__expression_list_repeat1] = STATE(119),
    [anon_sym_AMP_AMP] = ACTIONS(227),
    [sym__times_operator] = ACTIONS(229),
    [anon_sym_SEMI] = ACTIONS(231),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LT_COLON] = ACTIONS(79),
    [sym__plus_operator] = ACTIONS(235),
    [sym__assign_operator] = ACTIONS(237),
    [anon_sym_EQ_GT] = ACTIONS(239),
    [anon_sym_end] = ACTIONS(241),
    [sym__arrow_operator] = ACTIONS(243),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LF] = ACTIONS(245),
    [anon_sym_COLON_COLON] = ACTIONS(79),
  },
  [48] = {
    [sym_identifier] = ACTIONS(247),
    [sym_comment] = ACTIONS(3),
  },
  [49] = {
    [anon_sym_AMP_AMP] = ACTIONS(249),
    [anon_sym_LPAREN] = ACTIONS(249),
    [sym__plus_operator] = ACTIONS(249),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(249),
    [anon_sym_else] = ACTIONS(249),
    [sym__times_operator] = ACTIONS(249),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_PIPE_PIPE] = ACTIONS(249),
    [ts_builtin_sym_end] = ACTIONS(251),
    [anon_sym_EQ_GT] = ACTIONS(249),
    [anon_sym_LT_COLON] = ACTIONS(249),
    [anon_sym_elseif] = ACTIONS(249),
    [anon_sym_end] = ACTIONS(249),
    [sym__arrow_operator] = ACTIONS(249),
    [anon_sym_LF] = ACTIONS(251),
    [anon_sym_COLON_COLON] = ACTIONS(249),
  },
  [50] = {
    [sym_function_definition] = STATE(129),
    [sym_struct_definition] = STATE(129),
    [sym_parameterized_identifier] = STATE(129),
    [sym_if_statement] = STATE(129),
    [sym_pair_expression] = STATE(129),
    [sym_parenthesized_expression] = STATE(129),
    [sym_module_definition] = STATE(129),
    [sym_call_expression] = STATE(129),
    [sym__expression] = STATE(129),
    [sym_field_expression] = STATE(130),
    [sym_typed_expression] = STATE(129),
    [sym_assignment_expression] = STATE(129),
    [sym_binary_expression] = STATE(129),
    [sym_import_statement] = STATE(129),
    [anon_sym_module] = ACTIONS(253),
    [anon_sym_using] = ACTIONS(255),
    [anon_sym_struct] = ACTIONS(257),
    [anon_sym_function] = ACTIONS(259),
    [anon_sym_LPAREN] = ACTIONS(261),
    [anon_sym_import] = ACTIONS(255),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(263),
    [anon_sym_if] = ACTIONS(265),
    [sym_string] = ACTIONS(267),
    [anon_sym_mutable] = ACTIONS(269),
    [sym_number] = ACTIONS(267),
  },
  [51] = {
    [anon_sym_AMP_AMP] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(271),
    [sym__plus_operator] = ACTIONS(271),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(271),
    [anon_sym_else] = ACTIONS(271),
    [sym__times_operator] = ACTIONS(271),
    [anon_sym_SEMI] = ACTIONS(271),
    [anon_sym_PIPE_PIPE] = ACTIONS(271),
    [ts_builtin_sym_end] = ACTIONS(273),
    [anon_sym_EQ_GT] = ACTIONS(271),
    [anon_sym_LT_COLON] = ACTIONS(271),
    [anon_sym_elseif] = ACTIONS(271),
    [anon_sym_end] = ACTIONS(271),
    [sym__arrow_operator] = ACTIONS(271),
    [anon_sym_LF] = ACTIONS(273),
    [anon_sym_COLON_COLON] = ACTIONS(271),
  },
  [52] = {
    [sym_function_definition] = STATE(133),
    [sym_struct_definition] = STATE(133),
    [sym_parameterized_identifier] = STATE(133),
    [sym_if_statement] = STATE(133),
    [sym_pair_expression] = STATE(133),
    [sym_parenthesized_expression] = STATE(133),
    [sym_module_definition] = STATE(133),
    [sym_call_expression] = STATE(133),
    [sym__expression] = STATE(133),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(134),
    [sym_assignment_expression] = STATE(133),
    [sym_binary_expression] = STATE(133),
    [sym_import_statement] = STATE(133),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(275),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(277),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(279),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(279),
  },
  [53] = {
    [sym_argument_list] = STATE(43),
    [aux_sym__expression_list_repeat1] = STATE(137),
    [anon_sym_AMP_AMP] = ACTIONS(227),
    [sym__times_operator] = ACTIONS(229),
    [anon_sym_SEMI] = ACTIONS(281),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LT_COLON] = ACTIONS(79),
    [sym__plus_operator] = ACTIONS(235),
    [sym__assign_operator] = ACTIONS(237),
    [anon_sym_EQ_GT] = ACTIONS(239),
    [anon_sym_end] = ACTIONS(283),
    [sym__arrow_operator] = ACTIONS(243),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LF] = ACTIONS(285),
    [anon_sym_COLON_COLON] = ACTIONS(79),
  },
  [54] = {
    [sym_function_definition] = STATE(138),
    [sym_struct_definition] = STATE(138),
    [sym_if_statement] = STATE(138),
    [sym__expression] = STATE(138),
    [sym_parenthesized_expression] = STATE(138),
    [sym_call_expression] = STATE(138),
    [sym_subtype_clause] = STATE(139),
    [sym_import_statement] = STATE(138),
    [sym_parameterized_identifier] = STATE(138),
    [sym_pair_expression] = STATE(138),
    [sym_module_definition] = STATE(138),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(138),
    [sym_assignment_expression] = STATE(138),
    [sym_binary_expression] = STATE(138),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LT_COLON] = ACTIONS(107),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(283),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(287),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(287),
  },
  [55] = {
    [sym_function_definition] = STATE(138),
    [sym_struct_definition] = STATE(138),
    [sym_parameterized_identifier] = STATE(138),
    [sym_if_statement] = STATE(138),
    [sym_pair_expression] = STATE(138),
    [sym_parenthesized_expression] = STATE(138),
    [sym_module_definition] = STATE(138),
    [sym_call_expression] = STATE(138),
    [sym__expression] = STATE(138),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(138),
    [sym_assignment_expression] = STATE(138),
    [sym_binary_expression] = STATE(138),
    [sym_import_statement] = STATE(138),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(283),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(287),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(287),
  },
  [56] = {
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(289),
    [anon_sym_RPAREN] = ACTIONS(291),
  },
  [57] = {
    [sym_function_definition] = STATE(143),
    [sym_struct_definition] = STATE(143),
    [sym_parameterized_identifier] = STATE(143),
    [sym_if_statement] = STATE(143),
    [sym_pair_expression] = STATE(143),
    [sym_parenthesized_expression] = STATE(143),
    [sym_module_definition] = STATE(143),
    [sym_call_expression] = STATE(143),
    [sym__expression] = STATE(143),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(143),
    [sym_assignment_expression] = STATE(143),
    [sym_binary_expression] = STATE(143),
    [sym_import_statement] = STATE(143),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(293),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(295),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(295),
  },
  [58] = {
    [sym_function_definition] = STATE(145),
    [sym_struct_definition] = STATE(145),
    [sym_parameterized_identifier] = STATE(145),
    [sym_if_statement] = STATE(145),
    [sym_pair_expression] = STATE(145),
    [sym_parenthesized_expression] = STATE(145),
    [sym_module_definition] = STATE(145),
    [sym_call_expression] = STATE(145),
    [sym__expression] = STATE(145),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(145),
    [sym_assignment_expression] = STATE(145),
    [sym_binary_expression] = STATE(145),
    [sym_import_statement] = STATE(145),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(297),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(299),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(299),
  },
  [59] = {
    [sym_import_list] = STATE(147),
    [anon_sym_AMP_AMP] = ACTIONS(101),
    [sym__times_operator] = ACTIONS(99),
    [anon_sym_PIPE_PIPE] = ACTIONS(99),
    [anon_sym_COLON] = ACTIONS(301),
    [anon_sym_EQ_GT] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_LT_COLON] = ACTIONS(101),
    [sym__plus_operator] = ACTIONS(99),
    [sym__assign_operator] = ACTIONS(99),
    [anon_sym_DOT] = ACTIONS(125),
    [sym__arrow_operator] = ACTIONS(101),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(101),
    [anon_sym_RPAREN] = ACTIONS(101),
  },
  [60] = {
    [sym_function_definition] = STATE(149),
    [sym_struct_definition] = STATE(149),
    [sym_if_statement] = STATE(149),
    [sym__expression] = STATE(149),
    [sym_parenthesized_expression] = STATE(149),
    [sym_call_expression] = STATE(149),
    [sym_type_parameter_list] = STATE(150),
    [sym_subtype_clause] = STATE(151),
    [sym_import_statement] = STATE(149),
    [sym_parameterized_identifier] = STATE(149),
    [sym_pair_expression] = STATE(149),
    [sym_module_definition] = STATE(149),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(149),
    [sym_assignment_expression] = STATE(149),
    [sym_binary_expression] = STATE(149),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_mutable] = ACTIONS(23),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_LT_COLON] = ACTIONS(107),
    [anon_sym_import] = ACTIONS(93),
    [anon_sym_end] = ACTIONS(303),
    [sym_string] = ACTIONS(305),
    [sym_number] = ACTIONS(305),
  },
  [61] = {
    [sym_parameter_list] = STATE(152),
    [anon_sym_LPAREN] = ACTIONS(113),
    [sym_comment] = ACTIONS(3),
  },
  [62] = {
    [sym_argument_list] = STATE(78),
    [anon_sym_AMP_AMP] = ACTIONS(133),
    [sym__times_operator] = ACTIONS(135),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_LT_COLON] = ACTIONS(141),
    [sym__plus_operator] = ACTIONS(143),
    [sym__assign_operator] = ACTIONS(145),
    [anon_sym_EQ_GT] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
    [sym__arrow_operator] = ACTIONS(149),
    [anon_sym_COLON_COLON] = ACTIONS(141),
    [anon_sym_RPAREN] = ACTIONS(307),
  },
  [63] = {
    [sym_function_definition] = STATE(154),
    [sym_struct_definition] = STATE(154),
    [sym_parameterized_identifier] = STATE(154),
    [sym_if_statement] = STATE(154),
    [sym_pair_expression] = STATE(154),
    [sym_parenthesized_expression] = STATE(154),
    [sym_module_definition] = STATE(154),
    [sym_call_expression] = STATE(154),
    [sym__expression] = STATE(154),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(154),
    [sym_assignment_expression] = STATE(154),
    [sym_binary_expression] = STATE(154),
    [sym_import_statement] = STATE(154),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(153),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(309),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(309),
  },
  [64] = {
    [sym_identifier] = ACTIONS(311),
    [sym_comment] = ACTIONS(3),
  },
  [65] = {
    [anon_sym_AMP_AMP] = ACTIONS(161),
    [anon_sym_RBRACE] = ACTIONS(161),
    [anon_sym_using] = ACTIONS(159),
    [anon_sym_struct] = ACTIONS(159),
    [anon_sym_function] = ACTIONS(159),
    [anon_sym_LPAREN] = ACTIONS(161),
    [sym__plus_operator] = ACTIONS(159),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(159),
    [sym_identifier] = ACTIONS(159),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_mutable] = ACTIONS(159),
    [anon_sym_RPAREN] = ACTIONS(161),
    [anon_sym_module] = ACTIONS(159),
    [sym__times_operator] = ACTIONS(159),
    [anon_sym_PIPE_PIPE] = ACTIONS(159),
    [anon_sym_EQ_GT] = ACTIONS(161),
    [anon_sym_LT_COLON] = ACTIONS(161),
    [anon_sym_import] = ACTIONS(159),
    [anon_sym_COMMA] = ACTIONS(161),
    [sym__arrow_operator] = ACTIONS(161),
    [sym_string] = ACTIONS(161),
    [anon_sym_COLON_COLON] = ACTIONS(161),
    [sym_number] = ACTIONS(161),
  },
  [66] = {
    [sym_function_definition] = STATE(156),
    [sym_struct_definition] = STATE(156),
    [sym_if_statement] = STATE(156),
    [sym__expression] = STATE(156),
    [sym_parenthesized_expression] = STATE(156),
    [sym_call_expression] = STATE(156),
    [sym_argument_list] = STATE(78),
    [sym_import_statement] = STATE(156),
    [sym_parameterized_identifier] = STATE(156),
    [sym_pair_expression] = STATE(156),
    [sym_module_definition] = STATE(156),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(156),
    [sym_assignment_expression] = STATE(156),
    [sym_binary_expression] = STATE(156),
    [anon_sym_AMP_AMP] = ACTIONS(165),
    [anon_sym_using] = ACTIONS(167),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(169),
    [sym__plus_operator] = ACTIONS(171),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(173),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_mutable] = ACTIONS(23),
    [anon_sym_module] = ACTIONS(5),
    [sym__times_operator] = ACTIONS(175),
    [anon_sym_PIPE_PIPE] = ACTIONS(177),
    [anon_sym_EQ_GT] = ACTIONS(179),
    [anon_sym_LT_COLON] = ACTIONS(141),
    [anon_sym_import] = ACTIONS(167),
    [sym__arrow_operator] = ACTIONS(181),
    [sym_string] = ACTIONS(313),
    [anon_sym_COLON_COLON] = ACTIONS(141),
    [sym_number] = ACTIONS(313),
  },
  [67] = {
    [sym_identifier] = ACTIONS(315),
    [sym_comment] = ACTIONS(3),
  },
  [68] = {
    [sym_function_definition] = STATE(158),
    [sym_struct_definition] = STATE(158),
    [sym_parameterized_identifier] = STATE(158),
    [sym_if_statement] = STATE(158),
    [sym_pair_expression] = STATE(158),
    [sym_parenthesized_expression] = STATE(158),
    [sym_module_definition] = STATE(158),
    [sym_call_expression] = STATE(158),
    [sym__expression] = STATE(158),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(158),
    [sym_assignment_expression] = STATE(158),
    [sym_binary_expression] = STATE(158),
    [sym_import_statement] = STATE(158),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(35),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(317),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(317),
  },
  [69] = {
    [sym_function_definition] = STATE(159),
    [sym_struct_definition] = STATE(159),
    [sym_parameterized_identifier] = STATE(159),
    [sym_if_statement] = STATE(159),
    [sym_pair_expression] = STATE(159),
    [sym_parenthesized_expression] = STATE(159),
    [sym_module_definition] = STATE(159),
    [sym_call_expression] = STATE(159),
    [sym__expression] = STATE(159),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(159),
    [sym_assignment_expression] = STATE(159),
    [sym_binary_expression] = STATE(159),
    [sym_import_statement] = STATE(159),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(35),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(319),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(319),
  },
  [70] = {
    [sym_function_definition] = STATE(160),
    [sym_struct_definition] = STATE(160),
    [sym_parameterized_identifier] = STATE(160),
    [sym_if_statement] = STATE(160),
    [sym_pair_expression] = STATE(160),
    [sym_parenthesized_expression] = STATE(160),
    [sym_module_definition] = STATE(160),
    [sym_call_expression] = STATE(160),
    [sym__expression] = STATE(160),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(160),
    [sym_assignment_expression] = STATE(160),
    [sym_binary_expression] = STATE(160),
    [sym_import_statement] = STATE(160),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(35),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(321),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(321),
  },
  [71] = {
    [sym_function_definition] = STATE(162),
    [sym_struct_definition] = STATE(162),
    [sym_parameterized_identifier] = STATE(162),
    [sym_if_statement] = STATE(162),
    [sym_pair_expression] = STATE(162),
    [sym_parenthesized_expression] = STATE(162),
    [sym_module_definition] = STATE(162),
    [sym_call_expression] = STATE(162),
    [sym__expression] = STATE(162),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(162),
    [sym_assignment_expression] = STATE(162),
    [sym_binary_expression] = STATE(162),
    [sym_import_statement] = STATE(162),
    [anon_sym_module] = ACTIONS(33),
    [sym_number] = ACTIONS(323),
    [anon_sym_using] = ACTIONS(199),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(323),
    [anon_sym_mutable] = ACTIONS(49),
    [anon_sym_RPAREN] = ACTIONS(325),
  },
  [72] = {
    [sym_parameterized_identifier] = STATE(164),
    [sym_identifier] = ACTIONS(327),
    [sym_comment] = ACTIONS(3),
  },
  [73] = {
    [sym_function_definition] = STATE(165),
    [sym_struct_definition] = STATE(165),
    [sym_parameterized_identifier] = STATE(165),
    [sym_if_statement] = STATE(165),
    [sym_pair_expression] = STATE(165),
    [sym_parenthesized_expression] = STATE(165),
    [sym_module_definition] = STATE(165),
    [sym_call_expression] = STATE(165),
    [sym__expression] = STATE(165),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(165),
    [sym_assignment_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_import_statement] = STATE(165),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(35),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(329),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(329),
  },
  [74] = {
    [sym_function_definition] = STATE(166),
    [sym_struct_definition] = STATE(166),
    [sym_parameterized_identifier] = STATE(166),
    [sym_if_statement] = STATE(166),
    [sym_pair_expression] = STATE(166),
    [sym_parenthesized_expression] = STATE(166),
    [sym_module_definition] = STATE(166),
    [sym_call_expression] = STATE(166),
    [sym__expression] = STATE(166),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(166),
    [sym_assignment_expression] = STATE(166),
    [sym_binary_expression] = STATE(166),
    [sym_import_statement] = STATE(166),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(35),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(331),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(331),
  },
  [75] = {
    [sym_function_definition] = STATE(167),
    [sym_struct_definition] = STATE(167),
    [sym_parameterized_identifier] = STATE(167),
    [sym_if_statement] = STATE(167),
    [sym_pair_expression] = STATE(167),
    [sym_parenthesized_expression] = STATE(167),
    [sym_module_definition] = STATE(167),
    [sym_call_expression] = STATE(167),
    [sym__expression] = STATE(167),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(167),
    [sym_assignment_expression] = STATE(167),
    [sym_binary_expression] = STATE(167),
    [sym_import_statement] = STATE(167),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(35),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(333),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(333),
  },
  [76] = {
    [sym_function_definition] = STATE(168),
    [sym_struct_definition] = STATE(168),
    [sym_parameterized_identifier] = STATE(168),
    [sym_if_statement] = STATE(168),
    [sym_pair_expression] = STATE(168),
    [sym_parenthesized_expression] = STATE(168),
    [sym_module_definition] = STATE(168),
    [sym_call_expression] = STATE(168),
    [sym__expression] = STATE(168),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(168),
    [sym_assignment_expression] = STATE(168),
    [sym_binary_expression] = STATE(168),
    [sym_import_statement] = STATE(168),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(35),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(335),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(335),
  },
  [77] = {
    [anon_sym_AMP_AMP] = ACTIONS(337),
    [anon_sym_LPAREN] = ACTIONS(337),
    [sym__plus_operator] = ACTIONS(337),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(337),
    [anon_sym_else] = ACTIONS(337),
    [sym__times_operator] = ACTIONS(337),
    [anon_sym_SEMI] = ACTIONS(337),
    [anon_sym_PIPE_PIPE] = ACTIONS(337),
    [ts_builtin_sym_end] = ACTIONS(339),
    [anon_sym_EQ_GT] = ACTIONS(337),
    [anon_sym_LT_COLON] = ACTIONS(337),
    [anon_sym_elseif] = ACTIONS(337),
    [anon_sym_end] = ACTIONS(337),
    [sym__arrow_operator] = ACTIONS(337),
    [anon_sym_LF] = ACTIONS(339),
    [anon_sym_COLON_COLON] = ACTIONS(337),
  },
  [78] = {
    [anon_sym_AMP_AMP] = ACTIONS(215),
    [anon_sym_RBRACE] = ACTIONS(215),
    [anon_sym_using] = ACTIONS(213),
    [anon_sym_struct] = ACTIONS(213),
    [anon_sym_function] = ACTIONS(213),
    [anon_sym_LPAREN] = ACTIONS(215),
    [sym__plus_operator] = ACTIONS(213),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(213),
    [sym_identifier] = ACTIONS(213),
    [anon_sym_if] = ACTIONS(213),
    [anon_sym_mutable] = ACTIONS(213),
    [anon_sym_RPAREN] = ACTIONS(215),
    [anon_sym_module] = ACTIONS(213),
    [sym__times_operator] = ACTIONS(213),
    [anon_sym_PIPE_PIPE] = ACTIONS(213),
    [anon_sym_EQ_GT] = ACTIONS(215),
    [anon_sym_LT_COLON] = ACTIONS(215),
    [anon_sym_import] = ACTIONS(213),
    [anon_sym_COMMA] = ACTIONS(215),
    [sym__arrow_operator] = ACTIONS(215),
    [sym_string] = ACTIONS(215),
    [anon_sym_COLON_COLON] = ACTIONS(215),
    [sym_number] = ACTIONS(215),
  },
  [79] = {
    [sym_field_expression] = STATE(169),
    [sym_identifier] = ACTIONS(341),
    [sym_comment] = ACTIONS(3),
  },
  [80] = {
    [sym_argument_list] = STATE(78),
    [aux_sym_type_argument_list_repeat1] = STATE(179),
    [anon_sym_AMP_AMP] = ACTIONS(343),
    [sym__times_operator] = ACTIONS(345),
    [anon_sym_RBRACE] = ACTIONS(347),
    [anon_sym_PIPE_PIPE] = ACTIONS(349),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_LT_COLON] = ACTIONS(141),
    [sym__plus_operator] = ACTIONS(351),
    [sym__assign_operator] = ACTIONS(353),
    [anon_sym_EQ_GT] = ACTIONS(355),
    [anon_sym_COMMA] = ACTIONS(357),
    [sym__arrow_operator] = ACTIONS(359),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(141),
  },
  [81] = {
    [anon_sym_AMP_AMP] = ACTIONS(361),
    [anon_sym_LPAREN] = ACTIONS(361),
    [sym__plus_operator] = ACTIONS(361),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(361),
    [anon_sym_DOT] = ACTIONS(361),
    [anon_sym_else] = ACTIONS(361),
    [sym__times_operator] = ACTIONS(361),
    [anon_sym_SEMI] = ACTIONS(361),
    [anon_sym_PIPE_PIPE] = ACTIONS(361),
    [ts_builtin_sym_end] = ACTIONS(363),
    [anon_sym_EQ_GT] = ACTIONS(361),
    [anon_sym_LT_COLON] = ACTIONS(361),
    [anon_sym_COLON] = ACTIONS(361),
    [anon_sym_elseif] = ACTIONS(361),
    [anon_sym_end] = ACTIONS(361),
    [sym__arrow_operator] = ACTIONS(361),
    [anon_sym_LF] = ACTIONS(363),
    [anon_sym_COLON_COLON] = ACTIONS(361),
  },
  [82] = {
    [sym_import_list] = STATE(147),
    [anon_sym_AMP_AMP] = ACTIONS(101),
    [anon_sym_using] = ACTIONS(99),
    [anon_sym_struct] = ACTIONS(99),
    [anon_sym_function] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(101),
    [sym__plus_operator] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(99),
    [anon_sym_DOT] = ACTIONS(125),
    [sym_identifier] = ACTIONS(99),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_mutable] = ACTIONS(99),
    [anon_sym_module] = ACTIONS(99),
    [sym__times_operator] = ACTIONS(99),
    [anon_sym_PIPE_PIPE] = ACTIONS(99),
    [anon_sym_COLON] = ACTIONS(365),
    [anon_sym_EQ_GT] = ACTIONS(101),
    [anon_sym_LT_COLON] = ACTIONS(101),
    [anon_sym_import] = ACTIONS(99),
    [sym__arrow_operator] = ACTIONS(101),
    [sym_string] = ACTIONS(101),
    [anon_sym_COLON_COLON] = ACTIONS(101),
    [sym_number] = ACTIONS(101),
  },
  [83] = {
    [sym_function_definition] = STATE(181),
    [sym_struct_definition] = STATE(181),
    [sym_parameterized_identifier] = STATE(181),
    [sym_if_statement] = STATE(181),
    [sym_pair_expression] = STATE(181),
    [sym_parenthesized_expression] = STATE(181),
    [sym_module_definition] = STATE(181),
    [sym_call_expression] = STATE(181),
    [sym__expression] = STATE(181),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(181),
    [sym_assignment_expression] = STATE(181),
    [sym_binary_expression] = STATE(181),
    [sym_import_statement] = STATE(181),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(61),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(367),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(367),
  },
  [84] = {
    [sym_field_expression] = STATE(182),
    [sym_identifier] = ACTIONS(369),
    [sym_comment] = ACTIONS(3),
  },
  [85] = {
    [sym_function_definition] = STATE(183),
    [sym_struct_definition] = STATE(183),
    [sym_parameterized_identifier] = STATE(183),
    [sym_if_statement] = STATE(183),
    [sym_pair_expression] = STATE(183),
    [sym_parenthesized_expression] = STATE(183),
    [sym_module_definition] = STATE(183),
    [sym_call_expression] = STATE(183),
    [sym__expression] = STATE(183),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(183),
    [sym_assignment_expression] = STATE(183),
    [sym_binary_expression] = STATE(183),
    [sym_import_statement] = STATE(183),
    [anon_sym_module] = ACTIONS(33),
    [sym_number] = ACTIONS(371),
    [anon_sym_using] = ACTIONS(199),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(371),
    [anon_sym_mutable] = ACTIONS(49),
    [anon_sym_RPAREN] = ACTIONS(325),
  },
  [86] = {
    [sym_function_definition] = STATE(184),
    [sym_struct_definition] = STATE(184),
    [sym_parameterized_identifier] = STATE(184),
    [sym_if_statement] = STATE(184),
    [sym_pair_expression] = STATE(184),
    [sym_parenthesized_expression] = STATE(184),
    [sym_module_definition] = STATE(184),
    [sym_call_expression] = STATE(184),
    [sym__expression] = STATE(184),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(184),
    [sym_assignment_expression] = STATE(184),
    [sym_binary_expression] = STATE(184),
    [sym_import_statement] = STATE(184),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(61),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(373),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(373),
  },
  [87] = {
    [sym_function_definition] = STATE(185),
    [sym_struct_definition] = STATE(185),
    [sym_parameterized_identifier] = STATE(185),
    [sym_if_statement] = STATE(185),
    [sym_pair_expression] = STATE(185),
    [sym_parenthesized_expression] = STATE(185),
    [sym_module_definition] = STATE(185),
    [sym_call_expression] = STATE(185),
    [sym__expression] = STATE(185),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(185),
    [sym_assignment_expression] = STATE(185),
    [sym_binary_expression] = STATE(185),
    [sym_import_statement] = STATE(185),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(61),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(375),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(375),
  },
  [88] = {
    [sym_function_definition] = STATE(159),
    [sym_struct_definition] = STATE(159),
    [sym_parameterized_identifier] = STATE(159),
    [sym_if_statement] = STATE(159),
    [sym_pair_expression] = STATE(159),
    [sym_parenthesized_expression] = STATE(159),
    [sym_module_definition] = STATE(159),
    [sym_call_expression] = STATE(159),
    [sym__expression] = STATE(159),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(159),
    [sym_assignment_expression] = STATE(159),
    [sym_binary_expression] = STATE(159),
    [sym_import_statement] = STATE(159),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(61),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(319),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(319),
  },
  [89] = {
    [sym_function_definition] = STATE(186),
    [sym_struct_definition] = STATE(186),
    [sym_parameterized_identifier] = STATE(186),
    [sym_if_statement] = STATE(186),
    [sym_pair_expression] = STATE(186),
    [sym_parenthesized_expression] = STATE(186),
    [sym_module_definition] = STATE(186),
    [sym_call_expression] = STATE(186),
    [sym__expression] = STATE(186),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(186),
    [sym_assignment_expression] = STATE(186),
    [sym_binary_expression] = STATE(186),
    [sym_import_statement] = STATE(186),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(61),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(377),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(377),
  },
  [90] = {
    [sym_function_definition] = STATE(187),
    [sym_struct_definition] = STATE(187),
    [sym_parameterized_identifier] = STATE(187),
    [sym_if_statement] = STATE(187),
    [sym_pair_expression] = STATE(187),
    [sym_parenthesized_expression] = STATE(187),
    [sym_module_definition] = STATE(187),
    [sym_call_expression] = STATE(187),
    [sym__expression] = STATE(187),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(187),
    [sym_assignment_expression] = STATE(187),
    [sym_binary_expression] = STATE(187),
    [sym_import_statement] = STATE(187),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(61),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(379),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(379),
  },
  [91] = {
    [sym_function_definition] = STATE(188),
    [sym_struct_definition] = STATE(188),
    [sym_parameterized_identifier] = STATE(188),
    [sym_if_statement] = STATE(188),
    [sym_pair_expression] = STATE(188),
    [sym_parenthesized_expression] = STATE(188),
    [sym_module_definition] = STATE(188),
    [sym_call_expression] = STATE(188),
    [sym__expression] = STATE(188),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(188),
    [sym_assignment_expression] = STATE(188),
    [sym_binary_expression] = STATE(188),
    [sym_import_statement] = STATE(188),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(61),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(381),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(381),
  },
  [92] = {
    [aux_sym_if_statement_repeat1] = STATE(200),
    [aux_sym__expression_list_repeat1] = STATE(201),
    [sym_elseif_clause] = STATE(200),
    [sym_argument_list] = STATE(43),
    [sym_else_clause] = STATE(202),
    [anon_sym_AMP_AMP] = ACTIONS(383),
    [anon_sym_LPAREN] = ACTIONS(77),
    [sym__plus_operator] = ACTIONS(385),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(387),
    [anon_sym_else] = ACTIONS(389),
    [sym__times_operator] = ACTIONS(391),
    [anon_sym_SEMI] = ACTIONS(393),
    [anon_sym_PIPE_PIPE] = ACTIONS(395),
    [anon_sym_EQ_GT] = ACTIONS(397),
    [anon_sym_LT_COLON] = ACTIONS(79),
    [anon_sym_elseif] = ACTIONS(399),
    [anon_sym_end] = ACTIONS(401),
    [sym__arrow_operator] = ACTIONS(403),
    [anon_sym_LF] = ACTIONS(405),
    [anon_sym_COLON_COLON] = ACTIONS(79),
  },
  [93] = {
    [sym_function_definition] = STATE(138),
    [sym_struct_definition] = STATE(138),
    [sym_if_statement] = STATE(138),
    [sym__expression] = STATE(138),
    [sym_parenthesized_expression] = STATE(138),
    [sym_call_expression] = STATE(138),
    [sym_type_parameter_list] = STATE(203),
    [sym_subtype_clause] = STATE(139),
    [sym_import_statement] = STATE(138),
    [sym_parameterized_identifier] = STATE(138),
    [sym_pair_expression] = STATE(138),
    [sym_module_definition] = STATE(138),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(138),
    [sym_assignment_expression] = STATE(138),
    [sym_binary_expression] = STATE(138),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_mutable] = ACTIONS(23),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_LT_COLON] = ACTIONS(107),
    [anon_sym_import] = ACTIONS(93),
    [anon_sym_end] = ACTIONS(283),
    [sym_string] = ACTIONS(287),
    [sym_number] = ACTIONS(287),
  },
  [94] = {
    [sym_argument_list] = STATE(43),
    [anon_sym_AMP_AMP] = ACTIONS(407),
    [sym__times_operator] = ACTIONS(69),
    [anon_sym_SEMI] = ACTIONS(407),
    [anon_sym_PIPE_PIPE] = ACTIONS(75),
    [ts_builtin_sym_end] = ACTIONS(409),
    [anon_sym_EQ_GT] = ACTIONS(407),
    [anon_sym_LPAREN] = ACTIONS(407),
    [anon_sym_LT_COLON] = ACTIONS(407),
    [sym__plus_operator] = ACTIONS(81),
    [sym__assign_operator] = ACTIONS(407),
    [sym_comment] = ACTIONS(53),
    [sym__arrow_operator] = ACTIONS(407),
    [anon_sym_LF] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(407),
  },
  [95] = {
    [sym_argument_list] = STATE(43),
    [anon_sym_AMP_AMP] = ACTIONS(407),
    [anon_sym_LPAREN] = ACTIONS(407),
    [sym__plus_operator] = ACTIONS(407),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(407),
    [anon_sym_else] = ACTIONS(407),
    [sym__times_operator] = ACTIONS(407),
    [anon_sym_SEMI] = ACTIONS(407),
    [anon_sym_PIPE_PIPE] = ACTIONS(407),
    [ts_builtin_sym_end] = ACTIONS(409),
    [anon_sym_EQ_GT] = ACTIONS(407),
    [anon_sym_LT_COLON] = ACTIONS(407),
    [anon_sym_elseif] = ACTIONS(407),
    [anon_sym_end] = ACTIONS(407),
    [sym__arrow_operator] = ACTIONS(407),
    [anon_sym_LF] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(407),
  },
  [96] = {
    [sym_argument_list] = STATE(43),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [sym__times_operator] = ACTIONS(69),
    [anon_sym_SEMI] = ACTIONS(411),
    [ts_builtin_sym_end] = ACTIONS(413),
    [anon_sym_PIPE_PIPE] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LT_COLON] = ACTIONS(79),
    [sym__plus_operator] = ACTIONS(81),
    [sym__assign_operator] = ACTIONS(83),
    [anon_sym_EQ_GT] = ACTIONS(85),
    [sym_comment] = ACTIONS(53),
    [sym__arrow_operator] = ACTIONS(87),
    [anon_sym_LF] = ACTIONS(413),
    [anon_sym_COLON_COLON] = ACTIONS(79),
  },
  [97] = {
    [sym_argument_list] = STATE(43),
    [anon_sym_AMP_AMP] = ACTIONS(407),
    [sym__times_operator] = ACTIONS(69),
    [anon_sym_SEMI] = ACTIONS(407),
    [anon_sym_PIPE_PIPE] = ACTIONS(407),
    [ts_builtin_sym_end] = ACTIONS(409),
    [anon_sym_EQ_GT] = ACTIONS(407),
    [anon_sym_LPAREN] = ACTIONS(407),
    [anon_sym_LT_COLON] = ACTIONS(407),
    [sym__plus_operator] = ACTIONS(81),
    [sym__assign_operator] = ACTIONS(407),
    [sym_comment] = ACTIONS(53),
    [sym__arrow_operator] = ACTIONS(407),
    [anon_sym_LF] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(407),
  },
  [98] = {
    [anon_sym_AMP_AMP] = ACTIONS(415),
    [anon_sym_LPAREN] = ACTIONS(415),
    [sym__plus_operator] = ACTIONS(415),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(415),
    [anon_sym_else] = ACTIONS(415),
    [sym__times_operator] = ACTIONS(415),
    [anon_sym_SEMI] = ACTIONS(415),
    [anon_sym_PIPE_PIPE] = ACTIONS(415),
    [ts_builtin_sym_end] = ACTIONS(417),
    [anon_sym_EQ_GT] = ACTIONS(415),
    [anon_sym_LT_COLON] = ACTIONS(415),
    [anon_sym_elseif] = ACTIONS(415),
    [anon_sym_end] = ACTIONS(415),
    [sym__arrow_operator] = ACTIONS(415),
    [anon_sym_LF] = ACTIONS(417),
    [anon_sym_COLON_COLON] = ACTIONS(415),
  },
  [99] = {
    [sym_field_expression] = STATE(204),
    [sym_identifier] = ACTIONS(419),
    [sym_comment] = ACTIONS(3),
  },
  [100] = {
    [sym_argument_list] = STATE(78),
    [aux_sym_argument_list_repeat1] = STATE(214),
    [anon_sym_AMP_AMP] = ACTIONS(421),
    [sym__times_operator] = ACTIONS(423),
    [anon_sym_PIPE_PIPE] = ACTIONS(425),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_LT_COLON] = ACTIONS(141),
    [sym__plus_operator] = ACTIONS(427),
    [sym__assign_operator] = ACTIONS(429),
    [anon_sym_EQ_GT] = ACTIONS(431),
    [anon_sym_COMMA] = ACTIONS(433),
    [sym__arrow_operator] = ACTIONS(435),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(141),
    [anon_sym_RPAREN] = ACTIONS(437),
  },
  [101] = {
    [sym_type_argument_list] = STATE(29),
    [anon_sym_AMP_AMP] = ACTIONS(439),
    [anon_sym_LPAREN] = ACTIONS(439),
    [sym__plus_operator] = ACTIONS(439),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(439),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_else] = ACTIONS(439),
    [sym__times_operator] = ACTIONS(439),
    [anon_sym_SEMI] = ACTIONS(439),
    [anon_sym_PIPE_PIPE] = ACTIONS(439),
    [ts_builtin_sym_end] = ACTIONS(441),
    [anon_sym_EQ_GT] = ACTIONS(439),
    [anon_sym_LT_COLON] = ACTIONS(439),
    [anon_sym_elseif] = ACTIONS(439),
    [anon_sym_end] = ACTIONS(439),
    [sym__arrow_operator] = ACTIONS(439),
    [anon_sym_LF] = ACTIONS(441),
    [anon_sym_COLON_COLON] = ACTIONS(439),
  },
  [102] = {
    [anon_sym_AMP_AMP] = ACTIONS(439),
    [anon_sym_LPAREN] = ACTIONS(439),
    [sym__plus_operator] = ACTIONS(439),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(439),
    [anon_sym_else] = ACTIONS(439),
    [sym__times_operator] = ACTIONS(439),
    [anon_sym_SEMI] = ACTIONS(439),
    [anon_sym_PIPE_PIPE] = ACTIONS(439),
    [ts_builtin_sym_end] = ACTIONS(441),
    [anon_sym_EQ_GT] = ACTIONS(439),
    [anon_sym_LT_COLON] = ACTIONS(439),
    [anon_sym_elseif] = ACTIONS(439),
    [anon_sym_end] = ACTIONS(439),
    [sym__arrow_operator] = ACTIONS(439),
    [anon_sym_LF] = ACTIONS(441),
    [anon_sym_COLON_COLON] = ACTIONS(439),
  },
  [103] = {
    [sym_argument_list] = STATE(43),
    [anon_sym_AMP_AMP] = ACTIONS(407),
    [sym__times_operator] = ACTIONS(69),
    [anon_sym_SEMI] = ACTIONS(407),
    [anon_sym_PIPE_PIPE] = ACTIONS(407),
    [ts_builtin_sym_end] = ACTIONS(409),
    [anon_sym_EQ_GT] = ACTIONS(407),
    [anon_sym_LPAREN] = ACTIONS(407),
    [anon_sym_LT_COLON] = ACTIONS(407),
    [sym__plus_operator] = ACTIONS(407),
    [sym__assign_operator] = ACTIONS(407),
    [sym_comment] = ACTIONS(53),
    [sym__arrow_operator] = ACTIONS(407),
    [anon_sym_LF] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(407),
  },
  [104] = {
    [sym_argument_list] = STATE(43),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [sym__times_operator] = ACTIONS(69),
    [anon_sym_SEMI] = ACTIONS(443),
    [anon_sym_PIPE_PIPE] = ACTIONS(75),
    [ts_builtin_sym_end] = ACTIONS(445),
    [anon_sym_EQ_GT] = ACTIONS(443),
    [anon_sym_LPAREN] = ACTIONS(443),
    [anon_sym_LT_COLON] = ACTIONS(443),
    [sym__plus_operator] = ACTIONS(81),
    [sym__assign_operator] = ACTIONS(83),
    [sym_comment] = ACTIONS(53),
    [sym__arrow_operator] = ACTIONS(87),
    [anon_sym_LF] = ACTIONS(445),
    [anon_sym_COLON_COLON] = ACTIONS(443),
  },
  [105] = {
    [sym_argument_list] = STATE(43),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [sym__times_operator] = ACTIONS(69),
    [anon_sym_SEMI] = ACTIONS(447),
    [anon_sym_PIPE_PIPE] = ACTIONS(75),
    [ts_builtin_sym_end] = ACTIONS(449),
    [anon_sym_EQ_GT] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LT_COLON] = ACTIONS(79),
    [sym__plus_operator] = ACTIONS(81),
    [sym__assign_operator] = ACTIONS(83),
    [sym_comment] = ACTIONS(53),
    [sym__arrow_operator] = ACTIONS(87),
    [anon_sym_LF] = ACTIONS(449),
    [anon_sym_COLON_COLON] = ACTIONS(79),
  },
  [106] = {
    [sym_argument_list] = STATE(43),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [sym__times_operator] = ACTIONS(69),
    [anon_sym_SEMI] = ACTIONS(407),
    [anon_sym_PIPE_PIPE] = ACTIONS(75),
    [ts_builtin_sym_end] = ACTIONS(409),
    [anon_sym_EQ_GT] = ACTIONS(407),
    [anon_sym_LPAREN] = ACTIONS(407),
    [anon_sym_LT_COLON] = ACTIONS(407),
    [sym__plus_operator] = ACTIONS(81),
    [sym__assign_operator] = ACTIONS(407),
    [sym_comment] = ACTIONS(53),
    [sym__arrow_operator] = ACTIONS(87),
    [anon_sym_LF] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(407),
  },
  [107] = {
    [sym_function_definition] = STATE(96),
    [sym_struct_definition] = STATE(96),
    [sym_parameterized_identifier] = STATE(96),
    [sym_if_statement] = STATE(96),
    [sym_pair_expression] = STATE(96),
    [sym_parenthesized_expression] = STATE(96),
    [sym_module_definition] = STATE(96),
    [sym_call_expression] = STATE(96),
    [sym__expression] = STATE(96),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(96),
    [sym_assignment_expression] = STATE(96),
    [sym_binary_expression] = STATE(96),
    [sym_import_statement] = STATE(96),
    [anon_sym_module] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(451),
    [anon_sym_using] = ACTIONS(9),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(193),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(193),
  },
  [108] = {
    [aux_sym__expression_list_repeat1] = STATE(108),
    [anon_sym_SEMI] = ACTIONS(453),
    [ts_builtin_sym_end] = ACTIONS(413),
    [anon_sym_LF] = ACTIONS(456),
    [sym_comment] = ACTIONS(53),
  },
  [109] = {
    [sym_import_list] = STATE(49),
    [anon_sym_AMP_AMP] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(99),
    [sym__plus_operator] = ACTIONS(99),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(99),
    [anon_sym_DOT] = ACTIONS(55),
    [sym__times_operator] = ACTIONS(99),
    [anon_sym_SEMI] = ACTIONS(99),
    [anon_sym_PIPE_PIPE] = ACTIONS(99),
    [anon_sym_COLON] = ACTIONS(459),
    [anon_sym_EQ_GT] = ACTIONS(99),
    [anon_sym_LT_COLON] = ACTIONS(99),
    [anon_sym_end] = ACTIONS(99),
    [sym__arrow_operator] = ACTIONS(99),
    [anon_sym_LF] = ACTIONS(101),
    [anon_sym_COLON_COLON] = ACTIONS(99),
  },
  [110] = {
    [sym_function_definition] = STATE(217),
    [sym_struct_definition] = STATE(217),
    [sym_parameterized_identifier] = STATE(217),
    [sym_if_statement] = STATE(217),
    [sym_pair_expression] = STATE(217),
    [sym_parenthesized_expression] = STATE(217),
    [sym_module_definition] = STATE(217),
    [sym_call_expression] = STATE(217),
    [sym__expression] = STATE(217),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(217),
    [sym_assignment_expression] = STATE(217),
    [sym_binary_expression] = STATE(217),
    [sym_import_statement] = STATE(217),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(461),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(461),
  },
  [111] = {
    [sym_function_definition] = STATE(95),
    [sym_struct_definition] = STATE(95),
    [sym_parameterized_identifier] = STATE(95),
    [sym_if_statement] = STATE(95),
    [sym_pair_expression] = STATE(95),
    [sym_parenthesized_expression] = STATE(95),
    [sym_module_definition] = STATE(95),
    [sym_call_expression] = STATE(95),
    [sym__expression] = STATE(95),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(95),
    [sym_assignment_expression] = STATE(95),
    [sym_binary_expression] = STATE(95),
    [sym_import_statement] = STATE(95),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(189),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(189),
  },
  [112] = {
    [sym_function_definition] = STATE(219),
    [sym_struct_definition] = STATE(219),
    [sym_parameterized_identifier] = STATE(219),
    [sym_if_statement] = STATE(219),
    [sym_pair_expression] = STATE(219),
    [sym_parenthesized_expression] = STATE(219),
    [sym_module_definition] = STATE(219),
    [sym_call_expression] = STATE(219),
    [sym__expression] = STATE(219),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(219),
    [sym_assignment_expression] = STATE(219),
    [sym_binary_expression] = STATE(219),
    [sym_import_statement] = STATE(219),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(463),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(465),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(465),
  },
  [113] = {
    [sym_function_definition] = STATE(220),
    [sym_struct_definition] = STATE(220),
    [sym_parameterized_identifier] = STATE(220),
    [sym_if_statement] = STATE(220),
    [sym_pair_expression] = STATE(220),
    [sym_parenthesized_expression] = STATE(220),
    [sym_module_definition] = STATE(220),
    [sym_call_expression] = STATE(220),
    [sym__expression] = STATE(220),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(220),
    [sym_assignment_expression] = STATE(220),
    [sym_binary_expression] = STATE(220),
    [sym_import_statement] = STATE(220),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(467),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(467),
  },
  [114] = {
    [sym_function_definition] = STATE(221),
    [sym_struct_definition] = STATE(221),
    [sym_parameterized_identifier] = STATE(221),
    [sym_if_statement] = STATE(221),
    [sym_pair_expression] = STATE(221),
    [sym_parenthesized_expression] = STATE(221),
    [sym_module_definition] = STATE(221),
    [sym_call_expression] = STATE(221),
    [sym__expression] = STATE(221),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(221),
    [sym_assignment_expression] = STATE(221),
    [sym_binary_expression] = STATE(221),
    [sym_import_statement] = STATE(221),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(469),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(469),
  },
  [115] = {
    [sym_function_definition] = STATE(222),
    [sym_struct_definition] = STATE(222),
    [sym_parameterized_identifier] = STATE(222),
    [sym_if_statement] = STATE(222),
    [sym_pair_expression] = STATE(222),
    [sym_parenthesized_expression] = STATE(222),
    [sym_module_definition] = STATE(222),
    [sym_call_expression] = STATE(222),
    [sym__expression] = STATE(222),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(222),
    [sym_assignment_expression] = STATE(222),
    [sym_binary_expression] = STATE(222),
    [sym_import_statement] = STATE(222),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(471),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(471),
  },
  [116] = {
    [sym_function_definition] = STATE(223),
    [sym_struct_definition] = STATE(223),
    [sym_parameterized_identifier] = STATE(223),
    [sym_if_statement] = STATE(223),
    [sym_pair_expression] = STATE(223),
    [sym_parenthesized_expression] = STATE(223),
    [sym_module_definition] = STATE(223),
    [sym_call_expression] = STATE(223),
    [sym__expression] = STATE(223),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(223),
    [sym_assignment_expression] = STATE(223),
    [sym_binary_expression] = STATE(223),
    [sym_import_statement] = STATE(223),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(473),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(473),
  },
  [117] = {
    [anon_sym_AMP_AMP] = ACTIONS(475),
    [anon_sym_LPAREN] = ACTIONS(475),
    [sym__plus_operator] = ACTIONS(475),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(475),
    [anon_sym_else] = ACTIONS(475),
    [sym__times_operator] = ACTIONS(475),
    [anon_sym_SEMI] = ACTIONS(475),
    [anon_sym_PIPE_PIPE] = ACTIONS(475),
    [ts_builtin_sym_end] = ACTIONS(477),
    [anon_sym_EQ_GT] = ACTIONS(475),
    [anon_sym_LT_COLON] = ACTIONS(475),
    [anon_sym_elseif] = ACTIONS(475),
    [anon_sym_end] = ACTIONS(475),
    [sym__arrow_operator] = ACTIONS(475),
    [anon_sym_LF] = ACTIONS(477),
    [anon_sym_COLON_COLON] = ACTIONS(475),
  },
  [118] = {
    [sym_function_definition] = STATE(224),
    [sym_struct_definition] = STATE(224),
    [sym_parameterized_identifier] = STATE(224),
    [sym_if_statement] = STATE(224),
    [sym_pair_expression] = STATE(224),
    [sym_parenthesized_expression] = STATE(224),
    [sym_module_definition] = STATE(224),
    [sym_call_expression] = STATE(224),
    [sym__expression] = STATE(224),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(224),
    [sym_assignment_expression] = STATE(224),
    [sym_binary_expression] = STATE(224),
    [sym_import_statement] = STATE(224),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(479),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(479),
  },
  [119] = {
    [aux_sym__expression_list_repeat1] = STATE(226),
    [anon_sym_end] = ACTIONS(463),
    [anon_sym_SEMI] = ACTIONS(481),
    [anon_sym_LF] = ACTIONS(483),
    [sym_comment] = ACTIONS(53),
  },
  [120] = {
    [aux_sym_parameter_list_repeat1] = STATE(228),
    [anon_sym_AMP_AMP] = ACTIONS(485),
    [anon_sym_LPAREN] = ACTIONS(485),
    [sym__plus_operator] = ACTIONS(485),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(485),
    [sym__times_operator] = ACTIONS(485),
    [anon_sym_SEMI] = ACTIONS(485),
    [anon_sym_PIPE_PIPE] = ACTIONS(485),
    [ts_builtin_sym_end] = ACTIONS(487),
    [anon_sym_EQ_GT] = ACTIONS(485),
    [anon_sym_LT_COLON] = ACTIONS(485),
    [anon_sym_COMMA] = ACTIONS(489),
    [sym__arrow_operator] = ACTIONS(485),
    [anon_sym_LF] = ACTIONS(487),
    [anon_sym_COLON_COLON] = ACTIONS(485),
  },
  [121] = {
    [sym_identifier] = ACTIONS(491),
    [sym_comment] = ACTIONS(3),
  },
  [122] = {
    [sym_field_expression] = STATE(230),
    [sym_identifier] = ACTIONS(493),
    [sym_comment] = ACTIONS(3),
  },
  [123] = {
    [sym_identifier] = ACTIONS(495),
    [sym_comment] = ACTIONS(3),
  },
  [124] = {
    [sym_identifier] = ACTIONS(497),
    [sym_comment] = ACTIONS(3),
  },
  [125] = {
    [sym_function_definition] = STATE(233),
    [sym_struct_definition] = STATE(233),
    [sym_parameterized_identifier] = STATE(233),
    [sym_if_statement] = STATE(233),
    [sym_pair_expression] = STATE(233),
    [sym_parenthesized_expression] = STATE(233),
    [sym_module_definition] = STATE(233),
    [sym_call_expression] = STATE(233),
    [sym__expression] = STATE(233),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(233),
    [sym_assignment_expression] = STATE(233),
    [sym_binary_expression] = STATE(233),
    [sym_import_statement] = STATE(233),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(35),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(499),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(499),
  },
  [126] = {
    [sym_type_argument_list] = STATE(236),
    [anon_sym_AMP_AMP] = ACTIONS(59),
    [anon_sym_using] = ACTIONS(51),
    [anon_sym_struct] = ACTIONS(51),
    [anon_sym_function] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(59),
    [sym__plus_operator] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(501),
    [sym_identifier] = ACTIONS(51),
    [anon_sym_if] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(503),
    [anon_sym_mutable] = ACTIONS(51),
    [anon_sym_module] = ACTIONS(51),
    [sym__times_operator] = ACTIONS(51),
    [anon_sym_PIPE_PIPE] = ACTIONS(51),
    [anon_sym_EQ_GT] = ACTIONS(59),
    [anon_sym_LT_COLON] = ACTIONS(59),
    [anon_sym_import] = ACTIONS(51),
    [anon_sym_end] = ACTIONS(51),
    [sym__arrow_operator] = ACTIONS(59),
    [sym_string] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(59),
    [sym_number] = ACTIONS(59),
  },
  [127] = {
    [sym_function_definition] = STATE(237),
    [sym_struct_definition] = STATE(237),
    [sym_parameterized_identifier] = STATE(237),
    [sym_if_statement] = STATE(237),
    [sym_pair_expression] = STATE(237),
    [sym_parenthesized_expression] = STATE(237),
    [sym_module_definition] = STATE(237),
    [sym_call_expression] = STATE(237),
    [sym__expression] = STATE(237),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(237),
    [sym_assignment_expression] = STATE(237),
    [sym_binary_expression] = STATE(237),
    [sym_import_statement] = STATE(237),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(61),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(505),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(505),
  },
  [128] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_struct] = ACTIONS(507),
  },
  [129] = {
    [sym_argument_list] = STATE(248),
    [anon_sym_AMP_AMP] = ACTIONS(509),
    [anon_sym_using] = ACTIONS(511),
    [anon_sym_struct] = ACTIONS(511),
    [anon_sym_function] = ACTIONS(511),
    [anon_sym_LPAREN] = ACTIONS(513),
    [sym__plus_operator] = ACTIONS(515),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(517),
    [sym_identifier] = ACTIONS(511),
    [anon_sym_if] = ACTIONS(511),
    [anon_sym_mutable] = ACTIONS(511),
    [anon_sym_module] = ACTIONS(511),
    [sym__times_operator] = ACTIONS(519),
    [anon_sym_PIPE_PIPE] = ACTIONS(521),
    [anon_sym_EQ_GT] = ACTIONS(523),
    [anon_sym_LT_COLON] = ACTIONS(525),
    [anon_sym_import] = ACTIONS(511),
    [anon_sym_end] = ACTIONS(511),
    [sym__arrow_operator] = ACTIONS(527),
    [sym_string] = ACTIONS(513),
    [anon_sym_COLON_COLON] = ACTIONS(525),
    [sym_number] = ACTIONS(513),
  },
  [130] = {
    [anon_sym_AMP_AMP] = ACTIONS(59),
    [anon_sym_using] = ACTIONS(51),
    [anon_sym_struct] = ACTIONS(51),
    [anon_sym_function] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(59),
    [sym__plus_operator] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(501),
    [sym_identifier] = ACTIONS(51),
    [anon_sym_if] = ACTIONS(51),
    [anon_sym_mutable] = ACTIONS(51),
    [anon_sym_module] = ACTIONS(51),
    [sym__times_operator] = ACTIONS(51),
    [anon_sym_PIPE_PIPE] = ACTIONS(51),
    [anon_sym_EQ_GT] = ACTIONS(59),
    [anon_sym_LT_COLON] = ACTIONS(59),
    [anon_sym_import] = ACTIONS(51),
    [anon_sym_end] = ACTIONS(51),
    [sym__arrow_operator] = ACTIONS(59),
    [sym_string] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(59),
    [sym_number] = ACTIONS(59),
  },
  [131] = {
    [sym_field_expression] = STATE(249),
    [sym_identifier] = ACTIONS(529),
    [sym_comment] = ACTIONS(3),
  },
  [132] = {
    [sym_type_argument_list] = STATE(65),
    [aux_sym_type_parameter_list_repeat1] = STATE(252),
    [anon_sym_AMP_AMP] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(531),
    [anon_sym_LPAREN] = ACTIONS(59),
    [sym__plus_operator] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [sym__times_operator] = ACTIONS(51),
    [anon_sym_PIPE_PIPE] = ACTIONS(51),
    [anon_sym_EQ_GT] = ACTIONS(59),
    [anon_sym_LT_COLON] = ACTIONS(59),
    [anon_sym_COMMA] = ACTIONS(533),
    [sym__arrow_operator] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(59),
  },
  [133] = {
    [sym_argument_list] = STATE(78),
    [anon_sym_AMP_AMP] = ACTIONS(535),
    [sym__times_operator] = ACTIONS(537),
    [anon_sym_PIPE_PIPE] = ACTIONS(539),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_LT_COLON] = ACTIONS(141),
    [sym__plus_operator] = ACTIONS(541),
    [sym__assign_operator] = ACTIONS(543),
    [anon_sym_EQ_GT] = ACTIONS(545),
    [sym_comment] = ACTIONS(3),
    [sym__arrow_operator] = ACTIONS(547),
    [anon_sym_COLON_COLON] = ACTIONS(141),
  },
  [134] = {
    [aux_sym_type_parameter_list_repeat1] = STATE(252),
    [anon_sym_AMP_AMP] = ACTIONS(59),
    [sym__times_operator] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(531),
    [anon_sym_PIPE_PIPE] = ACTIONS(51),
    [anon_sym_EQ_GT] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_LT_COLON] = ACTIONS(59),
    [sym__plus_operator] = ACTIONS(51),
    [sym__assign_operator] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(533),
    [sym__arrow_operator] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(59),
  },
  [135] = {
    [sym_function_definition] = STATE(219),
    [sym_struct_definition] = STATE(219),
    [sym_parameterized_identifier] = STATE(219),
    [sym_if_statement] = STATE(219),
    [sym_pair_expression] = STATE(219),
    [sym_parenthesized_expression] = STATE(219),
    [sym_module_definition] = STATE(219),
    [sym_call_expression] = STATE(219),
    [sym__expression] = STATE(219),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(219),
    [sym_assignment_expression] = STATE(219),
    [sym_binary_expression] = STATE(219),
    [sym_import_statement] = STATE(219),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(549),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(465),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(465),
  },
  [136] = {
    [anon_sym_AMP_AMP] = ACTIONS(551),
    [anon_sym_LPAREN] = ACTIONS(551),
    [sym__plus_operator] = ACTIONS(551),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(551),
    [anon_sym_else] = ACTIONS(551),
    [sym__times_operator] = ACTIONS(551),
    [anon_sym_SEMI] = ACTIONS(551),
    [anon_sym_PIPE_PIPE] = ACTIONS(551),
    [ts_builtin_sym_end] = ACTIONS(553),
    [anon_sym_EQ_GT] = ACTIONS(551),
    [anon_sym_LT_COLON] = ACTIONS(551),
    [anon_sym_elseif] = ACTIONS(551),
    [anon_sym_end] = ACTIONS(551),
    [sym__arrow_operator] = ACTIONS(551),
    [anon_sym_LF] = ACTIONS(553),
    [anon_sym_COLON_COLON] = ACTIONS(551),
  },
  [137] = {
    [aux_sym__expression_list_repeat1] = STATE(226),
    [anon_sym_end] = ACTIONS(549),
    [anon_sym_SEMI] = ACTIONS(555),
    [anon_sym_LF] = ACTIONS(557),
    [sym_comment] = ACTIONS(53),
  },
  [138] = {
    [sym_argument_list] = STATE(43),
    [aux_sym__expression_list_repeat1] = STATE(262),
    [anon_sym_AMP_AMP] = ACTIONS(227),
    [sym__times_operator] = ACTIONS(229),
    [anon_sym_SEMI] = ACTIONS(555),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LT_COLON] = ACTIONS(79),
    [sym__plus_operator] = ACTIONS(235),
    [sym__assign_operator] = ACTIONS(237),
    [anon_sym_EQ_GT] = ACTIONS(239),
    [anon_sym_end] = ACTIONS(549),
    [sym__arrow_operator] = ACTIONS(243),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LF] = ACTIONS(557),
    [anon_sym_COLON_COLON] = ACTIONS(79),
  },
  [139] = {
    [sym_function_definition] = STATE(263),
    [sym_struct_definition] = STATE(263),
    [sym_parameterized_identifier] = STATE(263),
    [sym_if_statement] = STATE(263),
    [sym_pair_expression] = STATE(263),
    [sym_parenthesized_expression] = STATE(263),
    [sym_module_definition] = STATE(263),
    [sym_call_expression] = STATE(263),
    [sym__expression] = STATE(263),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(263),
    [sym_assignment_expression] = STATE(263),
    [sym_binary_expression] = STATE(263),
    [sym_import_statement] = STATE(263),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(549),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(559),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(559),
  },
  [140] = {
    [aux_sym_parameter_list_repeat1] = STATE(266),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(561),
    [anon_sym_RPAREN] = ACTIONS(563),
  },
  [141] = {
    [anon_sym_module] = ACTIONS(565),
    [anon_sym_using] = ACTIONS(565),
    [anon_sym_struct] = ACTIONS(565),
    [anon_sym_function] = ACTIONS(565),
    [anon_sym_LPAREN] = ACTIONS(567),
    [anon_sym_import] = ACTIONS(565),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(565),
    [sym_identifier] = ACTIONS(565),
    [anon_sym_if] = ACTIONS(565),
    [sym_string] = ACTIONS(567),
    [anon_sym_mutable] = ACTIONS(565),
    [sym_number] = ACTIONS(567),
  },
  [142] = {
    [anon_sym_AMP_AMP] = ACTIONS(569),
    [anon_sym_LPAREN] = ACTIONS(569),
    [sym__plus_operator] = ACTIONS(569),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(569),
    [anon_sym_else] = ACTIONS(569),
    [sym__times_operator] = ACTIONS(569),
    [anon_sym_SEMI] = ACTIONS(569),
    [anon_sym_PIPE_PIPE] = ACTIONS(569),
    [ts_builtin_sym_end] = ACTIONS(571),
    [anon_sym_EQ_GT] = ACTIONS(569),
    [anon_sym_LT_COLON] = ACTIONS(569),
    [anon_sym_elseif] = ACTIONS(569),
    [anon_sym_end] = ACTIONS(569),
    [sym__arrow_operator] = ACTIONS(569),
    [anon_sym_LF] = ACTIONS(571),
    [anon_sym_COLON_COLON] = ACTIONS(569),
  },
  [143] = {
    [sym_argument_list] = STATE(43),
    [aux_sym__expression_list_repeat1] = STATE(269),
    [anon_sym_AMP_AMP] = ACTIONS(227),
    [sym__times_operator] = ACTIONS(229),
    [anon_sym_SEMI] = ACTIONS(573),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LT_COLON] = ACTIONS(79),
    [sym__plus_operator] = ACTIONS(235),
    [sym__assign_operator] = ACTIONS(237),
    [anon_sym_EQ_GT] = ACTIONS(239),
    [anon_sym_end] = ACTIONS(575),
    [sym__arrow_operator] = ACTIONS(243),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LF] = ACTIONS(577),
    [anon_sym_COLON_COLON] = ACTIONS(79),
  },
  [144] = {
    [anon_sym_AMP_AMP] = ACTIONS(225),
    [anon_sym_RBRACE] = ACTIONS(225),
    [anon_sym_using] = ACTIONS(223),
    [anon_sym_struct] = ACTIONS(223),
    [anon_sym_function] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(225),
    [sym__plus_operator] = ACTIONS(223),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(223),
    [sym_identifier] = ACTIONS(223),
    [anon_sym_if] = ACTIONS(223),
    [anon_sym_mutable] = ACTIONS(223),
    [anon_sym_RPAREN] = ACTIONS(225),
    [anon_sym_module] = ACTIONS(223),
    [sym__times_operator] = ACTIONS(223),
    [anon_sym_PIPE_PIPE] = ACTIONS(223),
    [anon_sym_EQ_GT] = ACTIONS(225),
    [anon_sym_LT_COLON] = ACTIONS(225),
    [anon_sym_import] = ACTIONS(223),
    [anon_sym_COMMA] = ACTIONS(225),
    [sym__arrow_operator] = ACTIONS(225),
    [sym_string] = ACTIONS(225),
    [anon_sym_COLON_COLON] = ACTIONS(225),
    [sym_number] = ACTIONS(225),
  },
  [145] = {
    [sym_argument_list] = STATE(43),
    [aux_sym__expression_list_repeat1] = STATE(272),
    [anon_sym_AMP_AMP] = ACTIONS(227),
    [sym__times_operator] = ACTIONS(229),
    [anon_sym_SEMI] = ACTIONS(579),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LT_COLON] = ACTIONS(79),
    [sym__plus_operator] = ACTIONS(235),
    [sym__assign_operator] = ACTIONS(237),
    [anon_sym_EQ_GT] = ACTIONS(239),
    [anon_sym_end] = ACTIONS(581),
    [sym__arrow_operator] = ACTIONS(243),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LF] = ACTIONS(583),
    [anon_sym_COLON_COLON] = ACTIONS(79),
  },
  [146] = {
    [sym_identifier] = ACTIONS(585),
    [sym_comment] = ACTIONS(3),
  },
  [147] = {
    [anon_sym_AMP_AMP] = ACTIONS(251),
    [anon_sym_RBRACE] = ACTIONS(251),
    [anon_sym_using] = ACTIONS(249),
    [anon_sym_struct] = ACTIONS(249),
    [anon_sym_function] = ACTIONS(249),
    [anon_sym_LPAREN] = ACTIONS(251),
    [sym__plus_operator] = ACTIONS(249),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(249),
    [sym_identifier] = ACTIONS(249),
    [anon_sym_if] = ACTIONS(249),
    [anon_sym_mutable] = ACTIONS(249),
    [anon_sym_RPAREN] = ACTIONS(251),
    [anon_sym_module] = ACTIONS(249),
    [sym__times_operator] = ACTIONS(249),
    [anon_sym_PIPE_PIPE] = ACTIONS(249),
    [anon_sym_EQ_GT] = ACTIONS(251),
    [anon_sym_LT_COLON] = ACTIONS(251),
    [anon_sym_import] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(251),
    [sym__arrow_operator] = ACTIONS(251),
    [sym_string] = ACTIONS(251),
    [anon_sym_COLON_COLON] = ACTIONS(251),
    [sym_number] = ACTIONS(251),
  },
  [148] = {
    [anon_sym_AMP_AMP] = ACTIONS(273),
    [anon_sym_RBRACE] = ACTIONS(273),
    [anon_sym_using] = ACTIONS(271),
    [anon_sym_struct] = ACTIONS(271),
    [anon_sym_function] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(273),
    [sym__plus_operator] = ACTIONS(271),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(271),
    [sym_identifier] = ACTIONS(271),
    [anon_sym_if] = ACTIONS(271),
    [anon_sym_mutable] = ACTIONS(271),
    [anon_sym_RPAREN] = ACTIONS(273),
    [anon_sym_module] = ACTIONS(271),
    [sym__times_operator] = ACTIONS(271),
    [anon_sym_PIPE_PIPE] = ACTIONS(271),
    [anon_sym_EQ_GT] = ACTIONS(273),
    [anon_sym_LT_COLON] = ACTIONS(273),
    [anon_sym_import] = ACTIONS(271),
    [anon_sym_COMMA] = ACTIONS(273),
    [sym__arrow_operator] = ACTIONS(273),
    [sym_string] = ACTIONS(273),
    [anon_sym_COLON_COLON] = ACTIONS(273),
    [sym_number] = ACTIONS(273),
  },
  [149] = {
    [sym_argument_list] = STATE(43),
    [aux_sym__expression_list_repeat1] = STATE(276),
    [anon_sym_AMP_AMP] = ACTIONS(227),
    [sym__times_operator] = ACTIONS(229),
    [anon_sym_SEMI] = ACTIONS(587),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LT_COLON] = ACTIONS(79),
    [sym__plus_operator] = ACTIONS(235),
    [sym__assign_operator] = ACTIONS(237),
    [anon_sym_EQ_GT] = ACTIONS(239),
    [anon_sym_end] = ACTIONS(589),
    [sym__arrow_operator] = ACTIONS(243),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LF] = ACTIONS(591),
    [anon_sym_COLON_COLON] = ACTIONS(79),
  },
  [150] = {
    [sym_function_definition] = STATE(277),
    [sym_struct_definition] = STATE(277),
    [sym_if_statement] = STATE(277),
    [sym__expression] = STATE(277),
    [sym_parenthesized_expression] = STATE(277),
    [sym_call_expression] = STATE(277),
    [sym_subtype_clause] = STATE(278),
    [sym_import_statement] = STATE(277),
    [sym_parameterized_identifier] = STATE(277),
    [sym_pair_expression] = STATE(277),
    [sym_module_definition] = STATE(277),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(277),
    [sym_assignment_expression] = STATE(277),
    [sym_binary_expression] = STATE(277),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LT_COLON] = ACTIONS(107),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(589),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(593),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(593),
  },
  [151] = {
    [sym_function_definition] = STATE(277),
    [sym_struct_definition] = STATE(277),
    [sym_parameterized_identifier] = STATE(277),
    [sym_if_statement] = STATE(277),
    [sym_pair_expression] = STATE(277),
    [sym_parenthesized_expression] = STATE(277),
    [sym_module_definition] = STATE(277),
    [sym_call_expression] = STATE(277),
    [sym__expression] = STATE(277),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(277),
    [sym_assignment_expression] = STATE(277),
    [sym_binary_expression] = STATE(277),
    [sym_import_statement] = STATE(277),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(589),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(593),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(593),
  },
  [152] = {
    [sym_function_definition] = STATE(280),
    [sym_struct_definition] = STATE(280),
    [sym_parameterized_identifier] = STATE(280),
    [sym_if_statement] = STATE(280),
    [sym_pair_expression] = STATE(280),
    [sym_parenthesized_expression] = STATE(280),
    [sym_module_definition] = STATE(280),
    [sym_call_expression] = STATE(280),
    [sym__expression] = STATE(280),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(280),
    [sym_assignment_expression] = STATE(280),
    [sym_binary_expression] = STATE(280),
    [sym_import_statement] = STATE(280),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(595),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(597),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(597),
  },
  [153] = {
    [anon_sym_AMP_AMP] = ACTIONS(339),
    [anon_sym_RBRACE] = ACTIONS(339),
    [anon_sym_using] = ACTIONS(337),
    [anon_sym_struct] = ACTIONS(337),
    [anon_sym_function] = ACTIONS(337),
    [anon_sym_LPAREN] = ACTIONS(339),
    [sym__plus_operator] = ACTIONS(337),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(337),
    [sym_identifier] = ACTIONS(337),
    [anon_sym_if] = ACTIONS(337),
    [anon_sym_mutable] = ACTIONS(337),
    [anon_sym_RPAREN] = ACTIONS(339),
    [anon_sym_module] = ACTIONS(337),
    [sym__times_operator] = ACTIONS(337),
    [anon_sym_PIPE_PIPE] = ACTIONS(337),
    [anon_sym_EQ_GT] = ACTIONS(339),
    [anon_sym_LT_COLON] = ACTIONS(339),
    [anon_sym_import] = ACTIONS(337),
    [anon_sym_COMMA] = ACTIONS(339),
    [sym__arrow_operator] = ACTIONS(339),
    [sym_string] = ACTIONS(339),
    [anon_sym_COLON_COLON] = ACTIONS(339),
    [sym_number] = ACTIONS(339),
  },
  [154] = {
    [sym_argument_list] = STATE(78),
    [aux_sym_type_argument_list_repeat1] = STATE(282),
    [anon_sym_AMP_AMP] = ACTIONS(343),
    [sym__times_operator] = ACTIONS(345),
    [anon_sym_RBRACE] = ACTIONS(599),
    [anon_sym_PIPE_PIPE] = ACTIONS(349),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_LT_COLON] = ACTIONS(141),
    [sym__plus_operator] = ACTIONS(351),
    [sym__assign_operator] = ACTIONS(353),
    [anon_sym_EQ_GT] = ACTIONS(355),
    [anon_sym_COMMA] = ACTIONS(357),
    [sym__arrow_operator] = ACTIONS(359),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(141),
  },
  [155] = {
    [anon_sym_AMP_AMP] = ACTIONS(363),
    [anon_sym_RBRACE] = ACTIONS(363),
    [anon_sym_using] = ACTIONS(361),
    [anon_sym_struct] = ACTIONS(361),
    [anon_sym_function] = ACTIONS(361),
    [anon_sym_LPAREN] = ACTIONS(363),
    [sym__plus_operator] = ACTIONS(361),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(361),
    [anon_sym_DOT] = ACTIONS(361),
    [sym_identifier] = ACTIONS(361),
    [anon_sym_if] = ACTIONS(361),
    [anon_sym_mutable] = ACTIONS(361),
    [anon_sym_RPAREN] = ACTIONS(363),
    [anon_sym_module] = ACTIONS(361),
    [sym__times_operator] = ACTIONS(361),
    [anon_sym_PIPE_PIPE] = ACTIONS(361),
    [anon_sym_COLON] = ACTIONS(361),
    [anon_sym_EQ_GT] = ACTIONS(363),
    [anon_sym_LT_COLON] = ACTIONS(363),
    [anon_sym_import] = ACTIONS(361),
    [anon_sym_COMMA] = ACTIONS(363),
    [sym__arrow_operator] = ACTIONS(363),
    [sym_string] = ACTIONS(363),
    [anon_sym_COLON_COLON] = ACTIONS(363),
    [sym_number] = ACTIONS(363),
  },
  [156] = {
    [aux_sym_if_statement_repeat1] = STATE(285),
    [aux_sym__expression_list_repeat1] = STATE(286),
    [sym_elseif_clause] = STATE(285),
    [sym_argument_list] = STATE(43),
    [sym_else_clause] = STATE(287),
    [anon_sym_AMP_AMP] = ACTIONS(383),
    [anon_sym_LPAREN] = ACTIONS(77),
    [sym__plus_operator] = ACTIONS(385),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(387),
    [anon_sym_else] = ACTIONS(389),
    [sym__times_operator] = ACTIONS(391),
    [anon_sym_SEMI] = ACTIONS(601),
    [anon_sym_PIPE_PIPE] = ACTIONS(395),
    [anon_sym_EQ_GT] = ACTIONS(397),
    [anon_sym_LT_COLON] = ACTIONS(79),
    [anon_sym_elseif] = ACTIONS(399),
    [anon_sym_end] = ACTIONS(603),
    [sym__arrow_operator] = ACTIONS(403),
    [anon_sym_LF] = ACTIONS(605),
    [anon_sym_COLON_COLON] = ACTIONS(79),
  },
  [157] = {
    [sym_function_definition] = STATE(277),
    [sym_struct_definition] = STATE(277),
    [sym_if_statement] = STATE(277),
    [sym__expression] = STATE(277),
    [sym_parenthesized_expression] = STATE(277),
    [sym_call_expression] = STATE(277),
    [sym_type_parameter_list] = STATE(288),
    [sym_subtype_clause] = STATE(278),
    [sym_import_statement] = STATE(277),
    [sym_parameterized_identifier] = STATE(277),
    [sym_pair_expression] = STATE(277),
    [sym_module_definition] = STATE(277),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(277),
    [sym_assignment_expression] = STATE(277),
    [sym_binary_expression] = STATE(277),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_mutable] = ACTIONS(23),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_LT_COLON] = ACTIONS(107),
    [anon_sym_import] = ACTIONS(93),
    [anon_sym_end] = ACTIONS(589),
    [sym_string] = ACTIONS(593),
    [sym_number] = ACTIONS(593),
  },
  [158] = {
    [sym_argument_list] = STATE(78),
    [anon_sym_AMP_AMP] = ACTIONS(409),
    [sym__times_operator] = ACTIONS(135),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
    [anon_sym_EQ_GT] = ACTIONS(409),
    [anon_sym_LPAREN] = ACTIONS(409),
    [anon_sym_LT_COLON] = ACTIONS(409),
    [sym__plus_operator] = ACTIONS(143),
    [sym__assign_operator] = ACTIONS(407),
    [sym_comment] = ACTIONS(3),
    [sym__arrow_operator] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(409),
    [anon_sym_RPAREN] = ACTIONS(409),
  },
  [159] = {
    [sym_argument_list] = STATE(78),
    [anon_sym_AMP_AMP] = ACTIONS(409),
    [anon_sym_RBRACE] = ACTIONS(409),
    [anon_sym_using] = ACTIONS(407),
    [anon_sym_struct] = ACTIONS(407),
    [anon_sym_function] = ACTIONS(407),
    [anon_sym_LPAREN] = ACTIONS(409),
    [sym__plus_operator] = ACTIONS(407),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(407),
    [sym_identifier] = ACTIONS(407),
    [anon_sym_if] = ACTIONS(407),
    [anon_sym_mutable] = ACTIONS(407),
    [anon_sym_RPAREN] = ACTIONS(409),
    [anon_sym_module] = ACTIONS(407),
    [sym__times_operator] = ACTIONS(407),
    [anon_sym_PIPE_PIPE] = ACTIONS(407),
    [anon_sym_EQ_GT] = ACTIONS(409),
    [anon_sym_LT_COLON] = ACTIONS(409),
    [anon_sym_import] = ACTIONS(407),
    [anon_sym_COMMA] = ACTIONS(409),
    [sym__arrow_operator] = ACTIONS(409),
    [sym_string] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(409),
    [sym_number] = ACTIONS(409),
  },
  [160] = {
    [sym_argument_list] = STATE(78),
    [anon_sym_AMP_AMP] = ACTIONS(409),
    [sym__times_operator] = ACTIONS(135),
    [anon_sym_PIPE_PIPE] = ACTIONS(407),
    [anon_sym_EQ_GT] = ACTIONS(409),
    [anon_sym_LPAREN] = ACTIONS(409),
    [anon_sym_LT_COLON] = ACTIONS(409),
    [sym__plus_operator] = ACTIONS(143),
    [sym__assign_operator] = ACTIONS(407),
    [sym_comment] = ACTIONS(3),
    [sym__arrow_operator] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(409),
    [anon_sym_RPAREN] = ACTIONS(409),
  },
  [161] = {
    [anon_sym_AMP_AMP] = ACTIONS(417),
    [anon_sym_RBRACE] = ACTIONS(417),
    [anon_sym_using] = ACTIONS(415),
    [anon_sym_struct] = ACTIONS(415),
    [anon_sym_function] = ACTIONS(415),
    [anon_sym_LPAREN] = ACTIONS(417),
    [sym__plus_operator] = ACTIONS(415),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(415),
    [sym_identifier] = ACTIONS(415),
    [anon_sym_if] = ACTIONS(415),
    [anon_sym_mutable] = ACTIONS(415),
    [anon_sym_RPAREN] = ACTIONS(417),
    [anon_sym_module] = ACTIONS(415),
    [sym__times_operator] = ACTIONS(415),
    [anon_sym_PIPE_PIPE] = ACTIONS(415),
    [anon_sym_EQ_GT] = ACTIONS(417),
    [anon_sym_LT_COLON] = ACTIONS(417),
    [anon_sym_import] = ACTIONS(415),
    [anon_sym_COMMA] = ACTIONS(417),
    [sym__arrow_operator] = ACTIONS(417),
    [sym_string] = ACTIONS(417),
    [anon_sym_COLON_COLON] = ACTIONS(417),
    [sym_number] = ACTIONS(417),
  },
  [162] = {
    [sym_argument_list] = STATE(78),
    [aux_sym_argument_list_repeat1] = STATE(290),
    [anon_sym_AMP_AMP] = ACTIONS(421),
    [sym__times_operator] = ACTIONS(423),
    [anon_sym_PIPE_PIPE] = ACTIONS(425),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_LT_COLON] = ACTIONS(141),
    [sym__plus_operator] = ACTIONS(427),
    [sym__assign_operator] = ACTIONS(429),
    [anon_sym_EQ_GT] = ACTIONS(431),
    [anon_sym_COMMA] = ACTIONS(433),
    [sym__arrow_operator] = ACTIONS(435),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(141),
    [anon_sym_RPAREN] = ACTIONS(607),
  },
  [163] = {
    [sym_type_argument_list] = STATE(65),
    [anon_sym_AMP_AMP] = ACTIONS(441),
    [anon_sym_RBRACE] = ACTIONS(441),
    [anon_sym_using] = ACTIONS(439),
    [anon_sym_struct] = ACTIONS(439),
    [anon_sym_function] = ACTIONS(439),
    [anon_sym_LPAREN] = ACTIONS(441),
    [sym__plus_operator] = ACTIONS(439),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(439),
    [sym_identifier] = ACTIONS(439),
    [anon_sym_if] = ACTIONS(439),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_mutable] = ACTIONS(439),
    [anon_sym_RPAREN] = ACTIONS(441),
    [anon_sym_module] = ACTIONS(439),
    [sym__times_operator] = ACTIONS(439),
    [anon_sym_PIPE_PIPE] = ACTIONS(439),
    [anon_sym_EQ_GT] = ACTIONS(441),
    [anon_sym_LT_COLON] = ACTIONS(441),
    [anon_sym_import] = ACTIONS(439),
    [anon_sym_COMMA] = ACTIONS(441),
    [sym__arrow_operator] = ACTIONS(441),
    [sym_string] = ACTIONS(441),
    [anon_sym_COLON_COLON] = ACTIONS(441),
    [sym_number] = ACTIONS(441),
  },
  [164] = {
    [anon_sym_AMP_AMP] = ACTIONS(441),
    [anon_sym_RBRACE] = ACTIONS(441),
    [anon_sym_using] = ACTIONS(439),
    [anon_sym_struct] = ACTIONS(439),
    [anon_sym_function] = ACTIONS(439),
    [anon_sym_LPAREN] = ACTIONS(441),
    [sym__plus_operator] = ACTIONS(439),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(439),
    [sym_identifier] = ACTIONS(439),
    [anon_sym_if] = ACTIONS(439),
    [anon_sym_mutable] = ACTIONS(439),
    [anon_sym_RPAREN] = ACTIONS(441),
    [anon_sym_module] = ACTIONS(439),
    [sym__times_operator] = ACTIONS(439),
    [anon_sym_PIPE_PIPE] = ACTIONS(439),
    [anon_sym_EQ_GT] = ACTIONS(441),
    [anon_sym_LT_COLON] = ACTIONS(441),
    [anon_sym_import] = ACTIONS(439),
    [anon_sym_COMMA] = ACTIONS(441),
    [sym__arrow_operator] = ACTIONS(441),
    [sym_string] = ACTIONS(441),
    [anon_sym_COLON_COLON] = ACTIONS(441),
    [sym_number] = ACTIONS(441),
  },
  [165] = {
    [sym_argument_list] = STATE(78),
    [anon_sym_AMP_AMP] = ACTIONS(409),
    [sym__times_operator] = ACTIONS(135),
    [anon_sym_PIPE_PIPE] = ACTIONS(407),
    [anon_sym_EQ_GT] = ACTIONS(409),
    [anon_sym_LPAREN] = ACTIONS(409),
    [anon_sym_LT_COLON] = ACTIONS(409),
    [sym__plus_operator] = ACTIONS(407),
    [sym__assign_operator] = ACTIONS(407),
    [sym_comment] = ACTIONS(3),
    [sym__arrow_operator] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(409),
    [anon_sym_RPAREN] = ACTIONS(409),
  },
  [166] = {
    [sym_argument_list] = STATE(78),
    [anon_sym_AMP_AMP] = ACTIONS(133),
    [sym__times_operator] = ACTIONS(135),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
    [anon_sym_EQ_GT] = ACTIONS(445),
    [anon_sym_LPAREN] = ACTIONS(445),
    [anon_sym_LT_COLON] = ACTIONS(445),
    [sym__plus_operator] = ACTIONS(143),
    [sym__assign_operator] = ACTIONS(145),
    [sym_comment] = ACTIONS(3),
    [sym__arrow_operator] = ACTIONS(149),
    [anon_sym_COLON_COLON] = ACTIONS(445),
    [anon_sym_RPAREN] = ACTIONS(445),
  },
  [167] = {
    [sym_argument_list] = STATE(78),
    [anon_sym_AMP_AMP] = ACTIONS(133),
    [sym__times_operator] = ACTIONS(135),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
    [anon_sym_EQ_GT] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_LT_COLON] = ACTIONS(141),
    [sym__plus_operator] = ACTIONS(143),
    [sym__assign_operator] = ACTIONS(145),
    [sym_comment] = ACTIONS(3),
    [sym__arrow_operator] = ACTIONS(149),
    [anon_sym_COLON_COLON] = ACTIONS(141),
    [anon_sym_RPAREN] = ACTIONS(449),
  },
  [168] = {
    [sym_argument_list] = STATE(78),
    [anon_sym_AMP_AMP] = ACTIONS(133),
    [sym__times_operator] = ACTIONS(135),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
    [anon_sym_EQ_GT] = ACTIONS(409),
    [anon_sym_LPAREN] = ACTIONS(409),
    [anon_sym_LT_COLON] = ACTIONS(409),
    [sym__plus_operator] = ACTIONS(143),
    [sym__assign_operator] = ACTIONS(407),
    [sym_comment] = ACTIONS(3),
    [sym__arrow_operator] = ACTIONS(149),
    [anon_sym_COLON_COLON] = ACTIONS(409),
    [anon_sym_RPAREN] = ACTIONS(409),
  },
  [169] = {
    [sym_import_list] = STATE(147),
    [anon_sym_AMP_AMP] = ACTIONS(101),
    [anon_sym_RBRACE] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(101),
    [sym__plus_operator] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(99),
    [anon_sym_DOT] = ACTIONS(125),
    [sym__times_operator] = ACTIONS(99),
    [anon_sym_PIPE_PIPE] = ACTIONS(99),
    [anon_sym_COLON] = ACTIONS(609),
    [anon_sym_EQ_GT] = ACTIONS(101),
    [anon_sym_LT_COLON] = ACTIONS(101),
    [anon_sym_COMMA] = ACTIONS(101),
    [sym__arrow_operator] = ACTIONS(101),
    [anon_sym_COLON_COLON] = ACTIONS(101),
  },
  [170] = {
    [sym_function_definition] = STATE(292),
    [sym_struct_definition] = STATE(292),
    [sym_parameterized_identifier] = STATE(292),
    [sym_if_statement] = STATE(292),
    [sym_pair_expression] = STATE(292),
    [sym_parenthesized_expression] = STATE(292),
    [sym_module_definition] = STATE(292),
    [sym_call_expression] = STATE(292),
    [sym__expression] = STATE(292),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(292),
    [sym_assignment_expression] = STATE(292),
    [sym_binary_expression] = STATE(292),
    [sym_import_statement] = STATE(292),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(153),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(611),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(611),
  },
  [171] = {
    [sym_function_definition] = STATE(159),
    [sym_struct_definition] = STATE(159),
    [sym_parameterized_identifier] = STATE(159),
    [sym_if_statement] = STATE(159),
    [sym_pair_expression] = STATE(159),
    [sym_parenthesized_expression] = STATE(159),
    [sym_module_definition] = STATE(159),
    [sym_call_expression] = STATE(159),
    [sym__expression] = STATE(159),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(159),
    [sym_assignment_expression] = STATE(159),
    [sym_binary_expression] = STATE(159),
    [sym_import_statement] = STATE(159),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(153),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(319),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(319),
  },
  [172] = {
    [anon_sym_AMP_AMP] = ACTIONS(613),
    [anon_sym_LPAREN] = ACTIONS(613),
    [sym__plus_operator] = ACTIONS(613),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(613),
    [anon_sym_else] = ACTIONS(613),
    [sym__times_operator] = ACTIONS(613),
    [anon_sym_SEMI] = ACTIONS(613),
    [anon_sym_PIPE_PIPE] = ACTIONS(613),
    [ts_builtin_sym_end] = ACTIONS(615),
    [anon_sym_EQ_GT] = ACTIONS(613),
    [anon_sym_LT_COLON] = ACTIONS(613),
    [anon_sym_elseif] = ACTIONS(613),
    [anon_sym_end] = ACTIONS(613),
    [sym__arrow_operator] = ACTIONS(613),
    [anon_sym_LF] = ACTIONS(615),
    [anon_sym_COLON_COLON] = ACTIONS(613),
  },
  [173] = {
    [sym_function_definition] = STATE(293),
    [sym_struct_definition] = STATE(293),
    [sym_parameterized_identifier] = STATE(293),
    [sym_if_statement] = STATE(293),
    [sym_pair_expression] = STATE(293),
    [sym_parenthesized_expression] = STATE(293),
    [sym_module_definition] = STATE(293),
    [sym_call_expression] = STATE(293),
    [sym__expression] = STATE(293),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(293),
    [sym_assignment_expression] = STATE(293),
    [sym_binary_expression] = STATE(293),
    [sym_import_statement] = STATE(293),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(153),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(617),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(617),
  },
  [174] = {
    [sym_function_definition] = STATE(294),
    [sym_struct_definition] = STATE(294),
    [sym_parameterized_identifier] = STATE(294),
    [sym_if_statement] = STATE(294),
    [sym_pair_expression] = STATE(294),
    [sym_parenthesized_expression] = STATE(294),
    [sym_module_definition] = STATE(294),
    [sym_call_expression] = STATE(294),
    [sym__expression] = STATE(294),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(294),
    [sym_assignment_expression] = STATE(294),
    [sym_binary_expression] = STATE(294),
    [sym_import_statement] = STATE(294),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(153),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(619),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(619),
  },
  [175] = {
    [sym_function_definition] = STATE(295),
    [sym_struct_definition] = STATE(295),
    [sym_parameterized_identifier] = STATE(295),
    [sym_if_statement] = STATE(295),
    [sym_pair_expression] = STATE(295),
    [sym_parenthesized_expression] = STATE(295),
    [sym_module_definition] = STATE(295),
    [sym_call_expression] = STATE(295),
    [sym__expression] = STATE(295),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(295),
    [sym_assignment_expression] = STATE(295),
    [sym_binary_expression] = STATE(295),
    [sym_import_statement] = STATE(295),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(153),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(621),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(621),
  },
  [176] = {
    [sym_function_definition] = STATE(296),
    [sym_struct_definition] = STATE(296),
    [sym_parameterized_identifier] = STATE(296),
    [sym_if_statement] = STATE(296),
    [sym_pair_expression] = STATE(296),
    [sym_parenthesized_expression] = STATE(296),
    [sym_module_definition] = STATE(296),
    [sym_call_expression] = STATE(296),
    [sym__expression] = STATE(296),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(296),
    [sym_assignment_expression] = STATE(296),
    [sym_binary_expression] = STATE(296),
    [sym_import_statement] = STATE(296),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(153),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(623),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(623),
  },
  [177] = {
    [sym_function_definition] = STATE(297),
    [sym_struct_definition] = STATE(297),
    [sym_parameterized_identifier] = STATE(297),
    [sym_if_statement] = STATE(297),
    [sym_pair_expression] = STATE(297),
    [sym_parenthesized_expression] = STATE(297),
    [sym_module_definition] = STATE(297),
    [sym_call_expression] = STATE(297),
    [sym__expression] = STATE(297),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(297),
    [sym_assignment_expression] = STATE(297),
    [sym_binary_expression] = STATE(297),
    [sym_import_statement] = STATE(297),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(153),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(625),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(625),
  },
  [178] = {
    [sym_function_definition] = STATE(298),
    [sym_struct_definition] = STATE(298),
    [sym_parameterized_identifier] = STATE(298),
    [sym_if_statement] = STATE(298),
    [sym_pair_expression] = STATE(298),
    [sym_parenthesized_expression] = STATE(298),
    [sym_module_definition] = STATE(298),
    [sym_call_expression] = STATE(298),
    [sym__expression] = STATE(298),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(298),
    [sym_assignment_expression] = STATE(298),
    [sym_binary_expression] = STATE(298),
    [sym_import_statement] = STATE(298),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(153),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(627),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(627),
  },
  [179] = {
    [aux_sym_type_argument_list_repeat1] = STATE(300),
    [anon_sym_RBRACE] = ACTIONS(629),
    [anon_sym_COMMA] = ACTIONS(357),
    [sym_comment] = ACTIONS(3),
  },
  [180] = {
    [sym_identifier] = ACTIONS(631),
    [sym_comment] = ACTIONS(3),
  },
  [181] = {
    [sym_argument_list] = STATE(78),
    [anon_sym_AMP_AMP] = ACTIONS(409),
    [anon_sym_using] = ACTIONS(407),
    [anon_sym_struct] = ACTIONS(407),
    [anon_sym_function] = ACTIONS(407),
    [anon_sym_LPAREN] = ACTIONS(409),
    [sym__plus_operator] = ACTIONS(171),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(407),
    [sym_identifier] = ACTIONS(407),
    [anon_sym_if] = ACTIONS(407),
    [anon_sym_mutable] = ACTIONS(407),
    [anon_sym_module] = ACTIONS(407),
    [sym__times_operator] = ACTIONS(175),
    [anon_sym_PIPE_PIPE] = ACTIONS(177),
    [anon_sym_EQ_GT] = ACTIONS(409),
    [anon_sym_LT_COLON] = ACTIONS(409),
    [anon_sym_import] = ACTIONS(407),
    [sym__arrow_operator] = ACTIONS(409),
    [sym_string] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(409),
    [sym_number] = ACTIONS(409),
  },
  [182] = {
    [sym_import_list] = STATE(49),
    [anon_sym_AMP_AMP] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(99),
    [sym__plus_operator] = ACTIONS(99),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(99),
    [anon_sym_DOT] = ACTIONS(55),
    [anon_sym_else] = ACTIONS(99),
    [sym__times_operator] = ACTIONS(99),
    [anon_sym_SEMI] = ACTIONS(99),
    [anon_sym_PIPE_PIPE] = ACTIONS(99),
    [anon_sym_COLON] = ACTIONS(633),
    [anon_sym_EQ_GT] = ACTIONS(99),
    [anon_sym_LT_COLON] = ACTIONS(99),
    [anon_sym_elseif] = ACTIONS(99),
    [anon_sym_end] = ACTIONS(99),
    [sym__arrow_operator] = ACTIONS(99),
    [anon_sym_LF] = ACTIONS(101),
    [anon_sym_COLON_COLON] = ACTIONS(99),
  },
  [183] = {
    [sym_argument_list] = STATE(78),
    [aux_sym_argument_list_repeat1] = STATE(290),
    [anon_sym_AMP_AMP] = ACTIONS(421),
    [sym__times_operator] = ACTIONS(423),
    [anon_sym_PIPE_PIPE] = ACTIONS(425),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_LT_COLON] = ACTIONS(141),
    [sym__plus_operator] = ACTIONS(427),
    [sym__assign_operator] = ACTIONS(429),
    [anon_sym_EQ_GT] = ACTIONS(431),
    [anon_sym_COMMA] = ACTIONS(433),
    [sym__arrow_operator] = ACTIONS(435),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(141),
    [anon_sym_RPAREN] = ACTIONS(635),
  },
  [184] = {
    [sym_argument_list] = STATE(78),
    [anon_sym_AMP_AMP] = ACTIONS(409),
    [anon_sym_using] = ACTIONS(407),
    [anon_sym_struct] = ACTIONS(407),
    [anon_sym_function] = ACTIONS(407),
    [anon_sym_LPAREN] = ACTIONS(409),
    [sym__plus_operator] = ACTIONS(407),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(407),
    [sym_identifier] = ACTIONS(407),
    [anon_sym_if] = ACTIONS(407),
    [anon_sym_mutable] = ACTIONS(407),
    [anon_sym_module] = ACTIONS(407),
    [sym__times_operator] = ACTIONS(175),
    [anon_sym_PIPE_PIPE] = ACTIONS(407),
    [anon_sym_EQ_GT] = ACTIONS(409),
    [anon_sym_LT_COLON] = ACTIONS(409),
    [anon_sym_import] = ACTIONS(407),
    [sym__arrow_operator] = ACTIONS(409),
    [sym_string] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(409),
    [sym_number] = ACTIONS(409),
  },
  [185] = {
    [sym_argument_list] = STATE(78),
    [anon_sym_AMP_AMP] = ACTIONS(165),
    [anon_sym_using] = ACTIONS(443),
    [anon_sym_struct] = ACTIONS(443),
    [anon_sym_function] = ACTIONS(443),
    [anon_sym_LPAREN] = ACTIONS(445),
    [sym__plus_operator] = ACTIONS(171),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(173),
    [sym_identifier] = ACTIONS(443),
    [anon_sym_if] = ACTIONS(443),
    [anon_sym_mutable] = ACTIONS(443),
    [anon_sym_module] = ACTIONS(443),
    [sym__times_operator] = ACTIONS(175),
    [anon_sym_PIPE_PIPE] = ACTIONS(177),
    [anon_sym_EQ_GT] = ACTIONS(445),
    [anon_sym_LT_COLON] = ACTIONS(445),
    [anon_sym_import] = ACTIONS(443),
    [sym__arrow_operator] = ACTIONS(181),
    [sym_string] = ACTIONS(445),
    [anon_sym_COLON_COLON] = ACTIONS(445),
    [sym_number] = ACTIONS(445),
  },
  [186] = {
    [sym_argument_list] = STATE(78),
    [anon_sym_AMP_AMP] = ACTIONS(409),
    [anon_sym_using] = ACTIONS(407),
    [anon_sym_struct] = ACTIONS(407),
    [anon_sym_function] = ACTIONS(407),
    [anon_sym_LPAREN] = ACTIONS(409),
    [sym__plus_operator] = ACTIONS(171),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(407),
    [sym_identifier] = ACTIONS(407),
    [anon_sym_if] = ACTIONS(407),
    [anon_sym_mutable] = ACTIONS(407),
    [anon_sym_module] = ACTIONS(407),
    [sym__times_operator] = ACTIONS(175),
    [anon_sym_PIPE_PIPE] = ACTIONS(407),
    [anon_sym_EQ_GT] = ACTIONS(409),
    [anon_sym_LT_COLON] = ACTIONS(409),
    [anon_sym_import] = ACTIONS(407),
    [sym__arrow_operator] = ACTIONS(409),
    [sym_string] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(409),
    [sym_number] = ACTIONS(409),
  },
  [187] = {
    [sym_argument_list] = STATE(78),
    [anon_sym_AMP_AMP] = ACTIONS(165),
    [anon_sym_using] = ACTIONS(447),
    [anon_sym_struct] = ACTIONS(447),
    [anon_sym_function] = ACTIONS(447),
    [anon_sym_LPAREN] = ACTIONS(637),
    [sym__plus_operator] = ACTIONS(171),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(173),
    [sym_identifier] = ACTIONS(447),
    [anon_sym_if] = ACTIONS(447),
    [anon_sym_mutable] = ACTIONS(447),
    [anon_sym_module] = ACTIONS(447),
    [sym__times_operator] = ACTIONS(175),
    [anon_sym_PIPE_PIPE] = ACTIONS(177),
    [anon_sym_EQ_GT] = ACTIONS(179),
    [anon_sym_LT_COLON] = ACTIONS(141),
    [anon_sym_import] = ACTIONS(447),
    [sym__arrow_operator] = ACTIONS(181),
    [sym_string] = ACTIONS(449),
    [anon_sym_COLON_COLON] = ACTIONS(141),
    [sym_number] = ACTIONS(449),
  },
  [188] = {
    [sym_argument_list] = STATE(78),
    [anon_sym_AMP_AMP] = ACTIONS(165),
    [anon_sym_using] = ACTIONS(407),
    [anon_sym_struct] = ACTIONS(407),
    [anon_sym_function] = ACTIONS(407),
    [anon_sym_LPAREN] = ACTIONS(409),
    [sym__plus_operator] = ACTIONS(171),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(407),
    [sym_identifier] = ACTIONS(407),
    [anon_sym_if] = ACTIONS(407),
    [anon_sym_mutable] = ACTIONS(407),
    [anon_sym_module] = ACTIONS(407),
    [sym__times_operator] = ACTIONS(175),
    [anon_sym_PIPE_PIPE] = ACTIONS(177),
    [anon_sym_EQ_GT] = ACTIONS(409),
    [anon_sym_LT_COLON] = ACTIONS(409),
    [anon_sym_import] = ACTIONS(407),
    [sym__arrow_operator] = ACTIONS(181),
    [sym_string] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(409),
    [sym_number] = ACTIONS(409),
  },
  [189] = {
    [sym_function_definition] = STATE(305),
    [sym_struct_definition] = STATE(305),
    [sym_parameterized_identifier] = STATE(305),
    [sym_if_statement] = STATE(305),
    [sym_pair_expression] = STATE(305),
    [sym_parenthesized_expression] = STATE(305),
    [sym_module_definition] = STATE(305),
    [sym_call_expression] = STATE(305),
    [sym__expression] = STATE(305),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(305),
    [sym_assignment_expression] = STATE(305),
    [sym_binary_expression] = STATE(305),
    [sym_import_statement] = STATE(305),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(167),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(167),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(639),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(639),
  },
  [190] = {
    [sym_function_definition] = STATE(306),
    [sym_struct_definition] = STATE(306),
    [sym_parameterized_identifier] = STATE(306),
    [sym_if_statement] = STATE(306),
    [sym_pair_expression] = STATE(306),
    [sym_parenthesized_expression] = STATE(306),
    [sym_module_definition] = STATE(306),
    [sym_call_expression] = STATE(306),
    [sym__expression] = STATE(306),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(306),
    [sym_assignment_expression] = STATE(306),
    [sym_binary_expression] = STATE(306),
    [sym_import_statement] = STATE(306),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(167),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(167),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(641),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(641),
  },
  [191] = {
    [sym_function_definition] = STATE(307),
    [sym_struct_definition] = STATE(307),
    [sym_parameterized_identifier] = STATE(307),
    [sym_if_statement] = STATE(307),
    [sym_pair_expression] = STATE(307),
    [sym_parenthesized_expression] = STATE(307),
    [sym_module_definition] = STATE(307),
    [sym_call_expression] = STATE(307),
    [sym__expression] = STATE(307),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(307),
    [sym_assignment_expression] = STATE(307),
    [sym_binary_expression] = STATE(307),
    [sym_import_statement] = STATE(307),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(167),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(167),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(643),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(643),
  },
  [192] = {
    [sym_function_definition] = STATE(308),
    [sym_struct_definition] = STATE(308),
    [sym_parameterized_identifier] = STATE(308),
    [sym_if_statement] = STATE(308),
    [sym_pair_expression] = STATE(308),
    [sym_parenthesized_expression] = STATE(308),
    [sym_module_definition] = STATE(308),
    [sym_call_expression] = STATE(308),
    [sym__expression] = STATE(308),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(308),
    [sym_assignment_expression] = STATE(308),
    [sym_binary_expression] = STATE(308),
    [sym_import_statement] = STATE(308),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(645),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(645),
  },
  [193] = {
    [sym_function_definition] = STATE(95),
    [sym_struct_definition] = STATE(95),
    [sym_parameterized_identifier] = STATE(95),
    [sym_if_statement] = STATE(95),
    [sym_pair_expression] = STATE(95),
    [sym_parenthesized_expression] = STATE(95),
    [sym_module_definition] = STATE(95),
    [sym_call_expression] = STATE(95),
    [sym__expression] = STATE(95),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(95),
    [sym_assignment_expression] = STATE(95),
    [sym_binary_expression] = STATE(95),
    [sym_import_statement] = STATE(95),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(167),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(167),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(189),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(189),
  },
  [194] = {
    [aux_sym_if_statement_repeat1] = STATE(310),
    [sym_function_definition] = STATE(311),
    [sym_struct_definition] = STATE(311),
    [sym_if_statement] = STATE(311),
    [sym__expression] = STATE(311),
    [sym_parenthesized_expression] = STATE(311),
    [sym_call_expression] = STATE(311),
    [sym_import_statement] = STATE(311),
    [sym_parameterized_identifier] = STATE(311),
    [sym_pair_expression] = STATE(311),
    [sym_module_definition] = STATE(311),
    [sym_elseif_clause] = STATE(310),
    [sym_else_clause] = STATE(312),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(311),
    [sym_assignment_expression] = STATE(311),
    [sym_binary_expression] = STATE(311),
    [anon_sym_using] = ACTIONS(167),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_else] = ACTIONS(389),
    [anon_sym_mutable] = ACTIONS(23),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(167),
    [anon_sym_elseif] = ACTIONS(399),
    [anon_sym_end] = ACTIONS(647),
    [sym_string] = ACTIONS(649),
    [sym_number] = ACTIONS(649),
  },
  [195] = {
    [sym_function_definition] = STATE(313),
    [sym_struct_definition] = STATE(313),
    [sym_parameterized_identifier] = STATE(313),
    [sym_if_statement] = STATE(313),
    [sym_pair_expression] = STATE(313),
    [sym_parenthesized_expression] = STATE(313),
    [sym_module_definition] = STATE(313),
    [sym_call_expression] = STATE(313),
    [sym__expression] = STATE(313),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(313),
    [sym_assignment_expression] = STATE(313),
    [sym_binary_expression] = STATE(313),
    [sym_import_statement] = STATE(313),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(167),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(167),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(651),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(651),
  },
  [196] = {
    [sym_function_definition] = STATE(314),
    [sym_struct_definition] = STATE(314),
    [sym_parameterized_identifier] = STATE(314),
    [sym_if_statement] = STATE(314),
    [sym_pair_expression] = STATE(314),
    [sym_parenthesized_expression] = STATE(314),
    [sym_module_definition] = STATE(314),
    [sym_call_expression] = STATE(314),
    [sym__expression] = STATE(314),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(314),
    [sym_assignment_expression] = STATE(314),
    [sym_binary_expression] = STATE(314),
    [sym_import_statement] = STATE(314),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(167),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(167),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(653),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(653),
  },
  [197] = {
    [sym_function_definition] = STATE(315),
    [sym_struct_definition] = STATE(315),
    [sym_parameterized_identifier] = STATE(315),
    [sym_if_statement] = STATE(315),
    [sym_pair_expression] = STATE(315),
    [sym_parenthesized_expression] = STATE(315),
    [sym_module_definition] = STATE(315),
    [sym_call_expression] = STATE(315),
    [sym__expression] = STATE(315),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(315),
    [sym_assignment_expression] = STATE(315),
    [sym_binary_expression] = STATE(315),
    [sym_import_statement] = STATE(315),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(61),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(655),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(655),
  },
  [198] = {
    [anon_sym_AMP_AMP] = ACTIONS(657),
    [anon_sym_LPAREN] = ACTIONS(657),
    [sym__plus_operator] = ACTIONS(657),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(657),
    [anon_sym_else] = ACTIONS(657),
    [sym__times_operator] = ACTIONS(657),
    [anon_sym_SEMI] = ACTIONS(657),
    [anon_sym_PIPE_PIPE] = ACTIONS(657),
    [ts_builtin_sym_end] = ACTIONS(659),
    [anon_sym_EQ_GT] = ACTIONS(657),
    [anon_sym_LT_COLON] = ACTIONS(657),
    [anon_sym_elseif] = ACTIONS(657),
    [anon_sym_end] = ACTIONS(657),
    [sym__arrow_operator] = ACTIONS(657),
    [anon_sym_LF] = ACTIONS(659),
    [anon_sym_COLON_COLON] = ACTIONS(657),
  },
  [199] = {
    [sym_function_definition] = STATE(316),
    [sym_struct_definition] = STATE(316),
    [sym_parameterized_identifier] = STATE(316),
    [sym_if_statement] = STATE(316),
    [sym_pair_expression] = STATE(316),
    [sym_parenthesized_expression] = STATE(316),
    [sym_module_definition] = STATE(316),
    [sym_call_expression] = STATE(316),
    [sym__expression] = STATE(316),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(316),
    [sym_assignment_expression] = STATE(316),
    [sym_binary_expression] = STATE(316),
    [sym_import_statement] = STATE(316),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(167),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(167),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(661),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(661),
  },
  [200] = {
    [aux_sym_if_statement_repeat1] = STATE(317),
    [sym_elseif_clause] = STATE(317),
    [sym_else_clause] = STATE(312),
    [anon_sym_elseif] = ACTIONS(663),
    [anon_sym_end] = ACTIONS(665),
    [anon_sym_else] = ACTIONS(389),
    [sym_comment] = ACTIONS(3),
  },
  [201] = {
    [aux_sym_if_statement_repeat1] = STATE(310),
    [aux_sym__expression_list_repeat1] = STATE(319),
    [sym_elseif_clause] = STATE(310),
    [sym_else_clause] = STATE(312),
    [anon_sym_elseif] = ACTIONS(399),
    [anon_sym_end] = ACTIONS(647),
    [anon_sym_SEMI] = ACTIONS(667),
    [anon_sym_else] = ACTIONS(389),
    [anon_sym_LF] = ACTIONS(669),
    [sym_comment] = ACTIONS(53),
  },
  [202] = {
    [anon_sym_end] = ACTIONS(665),
    [sym_comment] = ACTIONS(3),
  },
  [203] = {
    [sym_function_definition] = STATE(263),
    [sym_struct_definition] = STATE(263),
    [sym_if_statement] = STATE(263),
    [sym__expression] = STATE(263),
    [sym_parenthesized_expression] = STATE(263),
    [sym_call_expression] = STATE(263),
    [sym_subtype_clause] = STATE(320),
    [sym_import_statement] = STATE(263),
    [sym_parameterized_identifier] = STATE(263),
    [sym_pair_expression] = STATE(263),
    [sym_module_definition] = STATE(263),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(263),
    [sym_assignment_expression] = STATE(263),
    [sym_binary_expression] = STATE(263),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LT_COLON] = ACTIONS(107),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(549),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(559),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(559),
  },
  [204] = {
    [sym_import_list] = STATE(147),
    [anon_sym_AMP_AMP] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(101),
    [sym__plus_operator] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(99),
    [anon_sym_DOT] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(101),
    [sym__times_operator] = ACTIONS(99),
    [anon_sym_PIPE_PIPE] = ACTIONS(99),
    [anon_sym_COLON] = ACTIONS(671),
    [anon_sym_EQ_GT] = ACTIONS(101),
    [anon_sym_LT_COLON] = ACTIONS(101),
    [anon_sym_COMMA] = ACTIONS(101),
    [sym__arrow_operator] = ACTIONS(101),
    [anon_sym_COLON_COLON] = ACTIONS(101),
  },
  [205] = {
    [sym_function_definition] = STATE(322),
    [sym_struct_definition] = STATE(322),
    [sym_parameterized_identifier] = STATE(322),
    [sym_if_statement] = STATE(322),
    [sym_pair_expression] = STATE(322),
    [sym_parenthesized_expression] = STATE(322),
    [sym_module_definition] = STATE(322),
    [sym_call_expression] = STATE(322),
    [sym__expression] = STATE(322),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(322),
    [sym_assignment_expression] = STATE(322),
    [sym_binary_expression] = STATE(322),
    [sym_import_statement] = STATE(322),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(199),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(673),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(673),
  },
  [206] = {
    [sym_function_definition] = STATE(159),
    [sym_struct_definition] = STATE(159),
    [sym_parameterized_identifier] = STATE(159),
    [sym_if_statement] = STATE(159),
    [sym_pair_expression] = STATE(159),
    [sym_parenthesized_expression] = STATE(159),
    [sym_module_definition] = STATE(159),
    [sym_call_expression] = STATE(159),
    [sym__expression] = STATE(159),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(159),
    [sym_assignment_expression] = STATE(159),
    [sym_binary_expression] = STATE(159),
    [sym_import_statement] = STATE(159),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(199),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(319),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(319),
  },
  [207] = {
    [sym_function_definition] = STATE(323),
    [sym_struct_definition] = STATE(323),
    [sym_parameterized_identifier] = STATE(323),
    [sym_if_statement] = STATE(323),
    [sym_pair_expression] = STATE(323),
    [sym_parenthesized_expression] = STATE(323),
    [sym_module_definition] = STATE(323),
    [sym_call_expression] = STATE(323),
    [sym__expression] = STATE(323),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(323),
    [sym_assignment_expression] = STATE(323),
    [sym_binary_expression] = STATE(323),
    [sym_import_statement] = STATE(323),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(199),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(675),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(675),
  },
  [208] = {
    [sym_function_definition] = STATE(324),
    [sym_struct_definition] = STATE(324),
    [sym_parameterized_identifier] = STATE(324),
    [sym_if_statement] = STATE(324),
    [sym_pair_expression] = STATE(324),
    [sym_parenthesized_expression] = STATE(324),
    [sym_module_definition] = STATE(324),
    [sym_call_expression] = STATE(324),
    [sym__expression] = STATE(324),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(324),
    [sym_assignment_expression] = STATE(324),
    [sym_binary_expression] = STATE(324),
    [sym_import_statement] = STATE(324),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(199),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(677),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(677),
  },
  [209] = {
    [sym_function_definition] = STATE(325),
    [sym_struct_definition] = STATE(325),
    [sym_parameterized_identifier] = STATE(325),
    [sym_if_statement] = STATE(325),
    [sym_pair_expression] = STATE(325),
    [sym_parenthesized_expression] = STATE(325),
    [sym_module_definition] = STATE(325),
    [sym_call_expression] = STATE(325),
    [sym__expression] = STATE(325),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(325),
    [sym_assignment_expression] = STATE(325),
    [sym_binary_expression] = STATE(325),
    [sym_import_statement] = STATE(325),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(199),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(679),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(679),
  },
  [210] = {
    [sym_function_definition] = STATE(326),
    [sym_struct_definition] = STATE(326),
    [sym_parameterized_identifier] = STATE(326),
    [sym_if_statement] = STATE(326),
    [sym_pair_expression] = STATE(326),
    [sym_parenthesized_expression] = STATE(326),
    [sym_module_definition] = STATE(326),
    [sym_call_expression] = STATE(326),
    [sym__expression] = STATE(326),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(326),
    [sym_assignment_expression] = STATE(326),
    [sym_binary_expression] = STATE(326),
    [sym_import_statement] = STATE(326),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(199),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(681),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(681),
  },
  [211] = {
    [sym_function_definition] = STATE(327),
    [sym_struct_definition] = STATE(327),
    [sym_parameterized_identifier] = STATE(327),
    [sym_if_statement] = STATE(327),
    [sym_pair_expression] = STATE(327),
    [sym_parenthesized_expression] = STATE(327),
    [sym_module_definition] = STATE(327),
    [sym_call_expression] = STATE(327),
    [sym__expression] = STATE(327),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(327),
    [sym_assignment_expression] = STATE(327),
    [sym_binary_expression] = STATE(327),
    [sym_import_statement] = STATE(327),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(199),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(683),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(683),
  },
  [212] = {
    [sym_function_definition] = STATE(328),
    [sym_struct_definition] = STATE(328),
    [sym_parameterized_identifier] = STATE(328),
    [sym_if_statement] = STATE(328),
    [sym_pair_expression] = STATE(328),
    [sym_parenthesized_expression] = STATE(328),
    [sym_module_definition] = STATE(328),
    [sym_call_expression] = STATE(328),
    [sym__expression] = STATE(328),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(328),
    [sym_assignment_expression] = STATE(328),
    [sym_binary_expression] = STATE(328),
    [sym_import_statement] = STATE(328),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(199),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(685),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(685),
  },
  [213] = {
    [anon_sym_AMP_AMP] = ACTIONS(687),
    [anon_sym_LPAREN] = ACTIONS(687),
    [sym__plus_operator] = ACTIONS(687),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(687),
    [anon_sym_else] = ACTIONS(687),
    [sym__times_operator] = ACTIONS(687),
    [anon_sym_SEMI] = ACTIONS(687),
    [anon_sym_PIPE_PIPE] = ACTIONS(687),
    [ts_builtin_sym_end] = ACTIONS(689),
    [anon_sym_EQ_GT] = ACTIONS(687),
    [anon_sym_LT_COLON] = ACTIONS(687),
    [anon_sym_elseif] = ACTIONS(687),
    [anon_sym_end] = ACTIONS(687),
    [sym__arrow_operator] = ACTIONS(687),
    [anon_sym_LF] = ACTIONS(689),
    [anon_sym_COLON_COLON] = ACTIONS(687),
  },
  [214] = {
    [aux_sym_argument_list_repeat1] = STATE(330),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(433),
    [anon_sym_RPAREN] = ACTIONS(691),
  },
  [215] = {
    [sym_function_definition] = STATE(96),
    [sym_struct_definition] = STATE(96),
    [sym_parameterized_identifier] = STATE(96),
    [sym_if_statement] = STATE(96),
    [sym_pair_expression] = STATE(96),
    [sym_parenthesized_expression] = STATE(96),
    [sym_module_definition] = STATE(96),
    [sym_call_expression] = STATE(96),
    [sym__expression] = STATE(96),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(96),
    [sym_assignment_expression] = STATE(96),
    [sym_binary_expression] = STATE(96),
    [sym_import_statement] = STATE(96),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(9),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(193),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(193),
  },
  [216] = {
    [sym_identifier] = ACTIONS(693),
    [sym_comment] = ACTIONS(3),
  },
  [217] = {
    [sym_argument_list] = STATE(43),
    [anon_sym_AMP_AMP] = ACTIONS(407),
    [sym__times_operator] = ACTIONS(229),
    [anon_sym_SEMI] = ACTIONS(407),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_EQ_GT] = ACTIONS(407),
    [anon_sym_LPAREN] = ACTIONS(407),
    [anon_sym_LT_COLON] = ACTIONS(407),
    [sym__plus_operator] = ACTIONS(235),
    [anon_sym_end] = ACTIONS(407),
    [sym__assign_operator] = ACTIONS(407),
    [sym__arrow_operator] = ACTIONS(407),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LF] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(407),
  },
  [218] = {
    [anon_sym_AMP_AMP] = ACTIONS(695),
    [anon_sym_LPAREN] = ACTIONS(695),
    [sym__plus_operator] = ACTIONS(695),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(695),
    [anon_sym_else] = ACTIONS(695),
    [sym__times_operator] = ACTIONS(695),
    [anon_sym_SEMI] = ACTIONS(695),
    [anon_sym_PIPE_PIPE] = ACTIONS(695),
    [ts_builtin_sym_end] = ACTIONS(697),
    [anon_sym_EQ_GT] = ACTIONS(695),
    [anon_sym_LT_COLON] = ACTIONS(695),
    [anon_sym_elseif] = ACTIONS(695),
    [anon_sym_end] = ACTIONS(695),
    [sym__arrow_operator] = ACTIONS(695),
    [anon_sym_LF] = ACTIONS(697),
    [anon_sym_COLON_COLON] = ACTIONS(695),
  },
  [219] = {
    [sym_argument_list] = STATE(43),
    [anon_sym_AMP_AMP] = ACTIONS(227),
    [sym__times_operator] = ACTIONS(229),
    [anon_sym_SEMI] = ACTIONS(411),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LT_COLON] = ACTIONS(79),
    [sym__plus_operator] = ACTIONS(235),
    [sym__assign_operator] = ACTIONS(237),
    [anon_sym_end] = ACTIONS(411),
    [anon_sym_EQ_GT] = ACTIONS(239),
    [sym__arrow_operator] = ACTIONS(243),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LF] = ACTIONS(413),
    [anon_sym_COLON_COLON] = ACTIONS(79),
  },
  [220] = {
    [sym_argument_list] = STATE(43),
    [anon_sym_AMP_AMP] = ACTIONS(407),
    [sym__times_operator] = ACTIONS(229),
    [anon_sym_SEMI] = ACTIONS(407),
    [anon_sym_PIPE_PIPE] = ACTIONS(407),
    [anon_sym_EQ_GT] = ACTIONS(407),
    [anon_sym_LPAREN] = ACTIONS(407),
    [anon_sym_LT_COLON] = ACTIONS(407),
    [sym__plus_operator] = ACTIONS(235),
    [anon_sym_end] = ACTIONS(407),
    [sym__assign_operator] = ACTIONS(407),
    [sym__arrow_operator] = ACTIONS(407),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LF] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(407),
  },
  [221] = {
    [sym_argument_list] = STATE(43),
    [anon_sym_AMP_AMP] = ACTIONS(407),
    [sym__times_operator] = ACTIONS(229),
    [anon_sym_SEMI] = ACTIONS(407),
    [anon_sym_PIPE_PIPE] = ACTIONS(407),
    [anon_sym_EQ_GT] = ACTIONS(407),
    [anon_sym_LPAREN] = ACTIONS(407),
    [anon_sym_LT_COLON] = ACTIONS(407),
    [sym__plus_operator] = ACTIONS(407),
    [anon_sym_end] = ACTIONS(407),
    [sym__assign_operator] = ACTIONS(407),
    [sym__arrow_operator] = ACTIONS(407),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LF] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(407),
  },
  [222] = {
    [sym_argument_list] = STATE(43),
    [anon_sym_AMP_AMP] = ACTIONS(227),
    [sym__times_operator] = ACTIONS(229),
    [anon_sym_SEMI] = ACTIONS(443),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_EQ_GT] = ACTIONS(443),
    [anon_sym_LPAREN] = ACTIONS(443),
    [anon_sym_LT_COLON] = ACTIONS(443),
    [sym__plus_operator] = ACTIONS(235),
    [anon_sym_end] = ACTIONS(443),
    [sym__assign_operator] = ACTIONS(237),
    [sym__arrow_operator] = ACTIONS(243),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LF] = ACTIONS(445),
    [anon_sym_COLON_COLON] = ACTIONS(443),
  },
  [223] = {
    [sym_argument_list] = STATE(43),
    [anon_sym_AMP_AMP] = ACTIONS(227),
    [sym__times_operator] = ACTIONS(229),
    [anon_sym_SEMI] = ACTIONS(447),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_EQ_GT] = ACTIONS(239),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LT_COLON] = ACTIONS(79),
    [sym__plus_operator] = ACTIONS(235),
    [anon_sym_end] = ACTIONS(447),
    [sym__assign_operator] = ACTIONS(237),
    [sym__arrow_operator] = ACTIONS(243),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LF] = ACTIONS(449),
    [anon_sym_COLON_COLON] = ACTIONS(79),
  },
  [224] = {
    [sym_argument_list] = STATE(43),
    [anon_sym_AMP_AMP] = ACTIONS(227),
    [sym__times_operator] = ACTIONS(229),
    [anon_sym_SEMI] = ACTIONS(407),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_EQ_GT] = ACTIONS(407),
    [anon_sym_LPAREN] = ACTIONS(407),
    [anon_sym_LT_COLON] = ACTIONS(407),
    [sym__plus_operator] = ACTIONS(235),
    [anon_sym_end] = ACTIONS(407),
    [sym__assign_operator] = ACTIONS(407),
    [sym__arrow_operator] = ACTIONS(243),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LF] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(407),
  },
  [225] = {
    [sym_function_definition] = STATE(219),
    [sym_struct_definition] = STATE(219),
    [sym_parameterized_identifier] = STATE(219),
    [sym_if_statement] = STATE(219),
    [sym_pair_expression] = STATE(219),
    [sym_parenthesized_expression] = STATE(219),
    [sym_module_definition] = STATE(219),
    [sym_call_expression] = STATE(219),
    [sym__expression] = STATE(219),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(219),
    [sym_assignment_expression] = STATE(219),
    [sym_binary_expression] = STATE(219),
    [sym_import_statement] = STATE(219),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(699),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(465),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(465),
  },
  [226] = {
    [aux_sym__expression_list_repeat1] = STATE(226),
    [anon_sym_end] = ACTIONS(411),
    [anon_sym_SEMI] = ACTIONS(701),
    [anon_sym_LF] = ACTIONS(704),
    [sym_comment] = ACTIONS(53),
  },
  [227] = {
    [sym_identifier] = ACTIONS(707),
    [sym_comment] = ACTIONS(3),
  },
  [228] = {
    [aux_sym_parameter_list_repeat1] = STATE(335),
    [anon_sym_AMP_AMP] = ACTIONS(709),
    [anon_sym_LPAREN] = ACTIONS(709),
    [sym__plus_operator] = ACTIONS(709),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(709),
    [sym__times_operator] = ACTIONS(709),
    [anon_sym_SEMI] = ACTIONS(709),
    [anon_sym_PIPE_PIPE] = ACTIONS(709),
    [ts_builtin_sym_end] = ACTIONS(711),
    [anon_sym_EQ_GT] = ACTIONS(709),
    [anon_sym_LT_COLON] = ACTIONS(709),
    [anon_sym_COMMA] = ACTIONS(489),
    [sym__arrow_operator] = ACTIONS(709),
    [anon_sym_LF] = ACTIONS(711),
    [anon_sym_COLON_COLON] = ACTIONS(709),
  },
  [229] = {
    [sym_function_definition] = STATE(337),
    [sym_struct_definition] = STATE(337),
    [sym_parameterized_identifier] = STATE(337),
    [sym_if_statement] = STATE(337),
    [sym_pair_expression] = STATE(337),
    [sym_parenthesized_expression] = STATE(337),
    [sym_module_definition] = STATE(337),
    [sym_call_expression] = STATE(337),
    [sym__expression] = STATE(337),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(337),
    [sym_assignment_expression] = STATE(337),
    [sym_binary_expression] = STATE(337),
    [sym_import_statement] = STATE(337),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(713),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(715),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(715),
  },
  [230] = {
    [sym_import_list] = STATE(339),
    [anon_sym_AMP_AMP] = ACTIONS(101),
    [anon_sym_using] = ACTIONS(99),
    [anon_sym_struct] = ACTIONS(99),
    [anon_sym_function] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(101),
    [sym__plus_operator] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(99),
    [anon_sym_DOT] = ACTIONS(501),
    [sym_identifier] = ACTIONS(99),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_mutable] = ACTIONS(99),
    [anon_sym_module] = ACTIONS(99),
    [sym__times_operator] = ACTIONS(99),
    [anon_sym_PIPE_PIPE] = ACTIONS(99),
    [anon_sym_COLON] = ACTIONS(717),
    [anon_sym_EQ_GT] = ACTIONS(101),
    [anon_sym_LT_COLON] = ACTIONS(101),
    [anon_sym_import] = ACTIONS(99),
    [anon_sym_end] = ACTIONS(99),
    [sym__arrow_operator] = ACTIONS(101),
    [sym_string] = ACTIONS(101),
    [anon_sym_COLON_COLON] = ACTIONS(101),
    [sym_number] = ACTIONS(101),
  },
  [231] = {
    [sym_function_definition] = STATE(341),
    [sym_struct_definition] = STATE(341),
    [sym_if_statement] = STATE(341),
    [sym__expression] = STATE(341),
    [sym_parenthesized_expression] = STATE(341),
    [sym_call_expression] = STATE(341),
    [sym_type_parameter_list] = STATE(342),
    [sym_subtype_clause] = STATE(343),
    [sym_import_statement] = STATE(341),
    [sym_parameterized_identifier] = STATE(341),
    [sym_pair_expression] = STATE(341),
    [sym_module_definition] = STATE(341),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(341),
    [sym_assignment_expression] = STATE(341),
    [sym_binary_expression] = STATE(341),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_mutable] = ACTIONS(23),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_LT_COLON] = ACTIONS(107),
    [anon_sym_import] = ACTIONS(93),
    [anon_sym_end] = ACTIONS(719),
    [sym_string] = ACTIONS(721),
    [sym_number] = ACTIONS(721),
  },
  [232] = {
    [sym_parameter_list] = STATE(344),
    [anon_sym_LPAREN] = ACTIONS(113),
    [sym_comment] = ACTIONS(3),
  },
  [233] = {
    [sym_argument_list] = STATE(78),
    [anon_sym_AMP_AMP] = ACTIONS(133),
    [sym__times_operator] = ACTIONS(135),
    [anon_sym_PIPE_PIPE] = ACTIONS(137),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_LT_COLON] = ACTIONS(141),
    [sym__plus_operator] = ACTIONS(143),
    [sym__assign_operator] = ACTIONS(145),
    [anon_sym_EQ_GT] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
    [sym__arrow_operator] = ACTIONS(149),
    [anon_sym_COLON_COLON] = ACTIONS(141),
    [anon_sym_RPAREN] = ACTIONS(723),
  },
  [234] = {
    [sym_function_definition] = STATE(346),
    [sym_struct_definition] = STATE(346),
    [sym_parameterized_identifier] = STATE(346),
    [sym_if_statement] = STATE(346),
    [sym_pair_expression] = STATE(346),
    [sym_parenthesized_expression] = STATE(346),
    [sym_module_definition] = STATE(346),
    [sym_call_expression] = STATE(346),
    [sym__expression] = STATE(346),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(346),
    [sym_assignment_expression] = STATE(346),
    [sym_binary_expression] = STATE(346),
    [sym_import_statement] = STATE(346),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(153),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(725),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(725),
  },
  [235] = {
    [sym_identifier] = ACTIONS(727),
    [sym_comment] = ACTIONS(3),
  },
  [236] = {
    [anon_sym_AMP_AMP] = ACTIONS(161),
    [anon_sym_using] = ACTIONS(159),
    [anon_sym_struct] = ACTIONS(159),
    [anon_sym_function] = ACTIONS(159),
    [anon_sym_LPAREN] = ACTIONS(161),
    [sym__plus_operator] = ACTIONS(159),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(159),
    [sym_identifier] = ACTIONS(159),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_mutable] = ACTIONS(159),
    [anon_sym_module] = ACTIONS(159),
    [sym__times_operator] = ACTIONS(159),
    [anon_sym_PIPE_PIPE] = ACTIONS(159),
    [anon_sym_EQ_GT] = ACTIONS(161),
    [anon_sym_LT_COLON] = ACTIONS(161),
    [anon_sym_import] = ACTIONS(159),
    [anon_sym_end] = ACTIONS(159),
    [sym__arrow_operator] = ACTIONS(161),
    [sym_string] = ACTIONS(161),
    [anon_sym_COLON_COLON] = ACTIONS(161),
    [sym_number] = ACTIONS(161),
  },
  [237] = {
    [sym_function_definition] = STATE(348),
    [sym_struct_definition] = STATE(348),
    [sym_if_statement] = STATE(348),
    [sym__expression] = STATE(348),
    [sym_parenthesized_expression] = STATE(348),
    [sym_call_expression] = STATE(348),
    [sym_argument_list] = STATE(78),
    [sym_import_statement] = STATE(348),
    [sym_parameterized_identifier] = STATE(348),
    [sym_pair_expression] = STATE(348),
    [sym_module_definition] = STATE(348),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(348),
    [sym_assignment_expression] = STATE(348),
    [sym_binary_expression] = STATE(348),
    [anon_sym_AMP_AMP] = ACTIONS(165),
    [anon_sym_using] = ACTIONS(167),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(169),
    [sym__plus_operator] = ACTIONS(171),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(173),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_mutable] = ACTIONS(23),
    [anon_sym_module] = ACTIONS(5),
    [sym__times_operator] = ACTIONS(175),
    [anon_sym_PIPE_PIPE] = ACTIONS(177),
    [anon_sym_EQ_GT] = ACTIONS(179),
    [anon_sym_LT_COLON] = ACTIONS(141),
    [anon_sym_import] = ACTIONS(167),
    [sym__arrow_operator] = ACTIONS(181),
    [sym_string] = ACTIONS(729),
    [anon_sym_COLON_COLON] = ACTIONS(141),
    [sym_number] = ACTIONS(729),
  },
  [238] = {
    [sym_identifier] = ACTIONS(731),
    [sym_comment] = ACTIONS(3),
  },
  [239] = {
    [sym_function_definition] = STATE(350),
    [sym_struct_definition] = STATE(350),
    [sym_parameterized_identifier] = STATE(350),
    [sym_if_statement] = STATE(350),
    [sym_pair_expression] = STATE(350),
    [sym_parenthesized_expression] = STATE(350),
    [sym_module_definition] = STATE(350),
    [sym_call_expression] = STATE(350),
    [sym__expression] = STATE(350),
    [sym_field_expression] = STATE(130),
    [sym_typed_expression] = STATE(350),
    [sym_assignment_expression] = STATE(350),
    [sym_binary_expression] = STATE(350),
    [sym_import_statement] = STATE(350),
    [anon_sym_module] = ACTIONS(253),
    [anon_sym_using] = ACTIONS(255),
    [anon_sym_struct] = ACTIONS(257),
    [anon_sym_function] = ACTIONS(259),
    [anon_sym_LPAREN] = ACTIONS(261),
    [anon_sym_import] = ACTIONS(255),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(263),
    [anon_sym_if] = ACTIONS(265),
    [sym_string] = ACTIONS(733),
    [anon_sym_mutable] = ACTIONS(269),
    [sym_number] = ACTIONS(733),
  },
  [240] = {
    [sym_function_definition] = STATE(351),
    [sym_struct_definition] = STATE(351),
    [sym_parameterized_identifier] = STATE(351),
    [sym_if_statement] = STATE(351),
    [sym_pair_expression] = STATE(351),
    [sym_parenthesized_expression] = STATE(351),
    [sym_module_definition] = STATE(351),
    [sym_call_expression] = STATE(351),
    [sym__expression] = STATE(351),
    [sym_field_expression] = STATE(130),
    [sym_typed_expression] = STATE(351),
    [sym_assignment_expression] = STATE(351),
    [sym_binary_expression] = STATE(351),
    [sym_import_statement] = STATE(351),
    [anon_sym_module] = ACTIONS(253),
    [anon_sym_using] = ACTIONS(255),
    [anon_sym_struct] = ACTIONS(257),
    [anon_sym_function] = ACTIONS(259),
    [anon_sym_LPAREN] = ACTIONS(261),
    [anon_sym_import] = ACTIONS(255),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(263),
    [anon_sym_if] = ACTIONS(265),
    [sym_string] = ACTIONS(735),
    [anon_sym_mutable] = ACTIONS(269),
    [sym_number] = ACTIONS(735),
  },
  [241] = {
    [sym_function_definition] = STATE(352),
    [sym_struct_definition] = STATE(352),
    [sym_parameterized_identifier] = STATE(352),
    [sym_if_statement] = STATE(352),
    [sym_pair_expression] = STATE(352),
    [sym_parenthesized_expression] = STATE(352),
    [sym_module_definition] = STATE(352),
    [sym_call_expression] = STATE(352),
    [sym__expression] = STATE(352),
    [sym_field_expression] = STATE(130),
    [sym_typed_expression] = STATE(352),
    [sym_assignment_expression] = STATE(352),
    [sym_binary_expression] = STATE(352),
    [sym_import_statement] = STATE(352),
    [anon_sym_module] = ACTIONS(253),
    [anon_sym_using] = ACTIONS(255),
    [anon_sym_struct] = ACTIONS(257),
    [anon_sym_function] = ACTIONS(259),
    [anon_sym_LPAREN] = ACTIONS(261),
    [anon_sym_import] = ACTIONS(255),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(263),
    [anon_sym_if] = ACTIONS(265),
    [sym_string] = ACTIONS(737),
    [anon_sym_mutable] = ACTIONS(269),
    [sym_number] = ACTIONS(737),
  },
  [242] = {
    [sym_function_definition] = STATE(354),
    [sym_struct_definition] = STATE(354),
    [sym_parameterized_identifier] = STATE(354),
    [sym_if_statement] = STATE(354),
    [sym_pair_expression] = STATE(354),
    [sym_parenthesized_expression] = STATE(354),
    [sym_module_definition] = STATE(354),
    [sym_call_expression] = STATE(354),
    [sym__expression] = STATE(354),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(354),
    [sym_assignment_expression] = STATE(354),
    [sym_binary_expression] = STATE(354),
    [sym_import_statement] = STATE(354),
    [anon_sym_module] = ACTIONS(33),
    [sym_number] = ACTIONS(739),
    [anon_sym_using] = ACTIONS(199),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(739),
    [anon_sym_mutable] = ACTIONS(49),
    [anon_sym_RPAREN] = ACTIONS(741),
  },
  [243] = {
    [sym_parameterized_identifier] = STATE(356),
    [sym_identifier] = ACTIONS(743),
    [sym_comment] = ACTIONS(3),
  },
  [244] = {
    [sym_function_definition] = STATE(357),
    [sym_struct_definition] = STATE(357),
    [sym_parameterized_identifier] = STATE(357),
    [sym_if_statement] = STATE(357),
    [sym_pair_expression] = STATE(357),
    [sym_parenthesized_expression] = STATE(357),
    [sym_module_definition] = STATE(357),
    [sym_call_expression] = STATE(357),
    [sym__expression] = STATE(357),
    [sym_field_expression] = STATE(130),
    [sym_typed_expression] = STATE(357),
    [sym_assignment_expression] = STATE(357),
    [sym_binary_expression] = STATE(357),
    [sym_import_statement] = STATE(357),
    [anon_sym_module] = ACTIONS(253),
    [anon_sym_using] = ACTIONS(255),
    [anon_sym_struct] = ACTIONS(257),
    [anon_sym_function] = ACTIONS(259),
    [anon_sym_LPAREN] = ACTIONS(261),
    [anon_sym_import] = ACTIONS(255),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(263),
    [anon_sym_if] = ACTIONS(265),
    [sym_string] = ACTIONS(745),
    [anon_sym_mutable] = ACTIONS(269),
    [sym_number] = ACTIONS(745),
  },
  [245] = {
    [sym_function_definition] = STATE(358),
    [sym_struct_definition] = STATE(358),
    [sym_parameterized_identifier] = STATE(358),
    [sym_if_statement] = STATE(358),
    [sym_pair_expression] = STATE(358),
    [sym_parenthesized_expression] = STATE(358),
    [sym_module_definition] = STATE(358),
    [sym_call_expression] = STATE(358),
    [sym__expression] = STATE(358),
    [sym_field_expression] = STATE(130),
    [sym_typed_expression] = STATE(358),
    [sym_assignment_expression] = STATE(358),
    [sym_binary_expression] = STATE(358),
    [sym_import_statement] = STATE(358),
    [anon_sym_module] = ACTIONS(253),
    [anon_sym_using] = ACTIONS(255),
    [anon_sym_struct] = ACTIONS(257),
    [anon_sym_function] = ACTIONS(259),
    [anon_sym_LPAREN] = ACTIONS(261),
    [anon_sym_import] = ACTIONS(255),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(263),
    [anon_sym_if] = ACTIONS(265),
    [sym_string] = ACTIONS(747),
    [anon_sym_mutable] = ACTIONS(269),
    [sym_number] = ACTIONS(747),
  },
  [246] = {
    [sym_function_definition] = STATE(359),
    [sym_struct_definition] = STATE(359),
    [sym_parameterized_identifier] = STATE(359),
    [sym_if_statement] = STATE(359),
    [sym_pair_expression] = STATE(359),
    [sym_parenthesized_expression] = STATE(359),
    [sym_module_definition] = STATE(359),
    [sym_call_expression] = STATE(359),
    [sym__expression] = STATE(359),
    [sym_field_expression] = STATE(130),
    [sym_typed_expression] = STATE(359),
    [sym_assignment_expression] = STATE(359),
    [sym_binary_expression] = STATE(359),
    [sym_import_statement] = STATE(359),
    [anon_sym_module] = ACTIONS(253),
    [anon_sym_using] = ACTIONS(255),
    [anon_sym_struct] = ACTIONS(257),
    [anon_sym_function] = ACTIONS(259),
    [anon_sym_LPAREN] = ACTIONS(261),
    [anon_sym_import] = ACTIONS(255),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(263),
    [anon_sym_if] = ACTIONS(265),
    [sym_string] = ACTIONS(749),
    [anon_sym_mutable] = ACTIONS(269),
    [sym_number] = ACTIONS(749),
  },
  [247] = {
    [sym_function_definition] = STATE(360),
    [sym_struct_definition] = STATE(360),
    [sym_parameterized_identifier] = STATE(360),
    [sym_if_statement] = STATE(360),
    [sym_pair_expression] = STATE(360),
    [sym_parenthesized_expression] = STATE(360),
    [sym_module_definition] = STATE(360),
    [sym_call_expression] = STATE(360),
    [sym__expression] = STATE(360),
    [sym_field_expression] = STATE(130),
    [sym_typed_expression] = STATE(360),
    [sym_assignment_expression] = STATE(360),
    [sym_binary_expression] = STATE(360),
    [sym_import_statement] = STATE(360),
    [anon_sym_module] = ACTIONS(253),
    [anon_sym_using] = ACTIONS(255),
    [anon_sym_struct] = ACTIONS(257),
    [anon_sym_function] = ACTIONS(259),
    [anon_sym_LPAREN] = ACTIONS(261),
    [anon_sym_import] = ACTIONS(255),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(263),
    [anon_sym_if] = ACTIONS(265),
    [sym_string] = ACTIONS(751),
    [anon_sym_mutable] = ACTIONS(269),
    [sym_number] = ACTIONS(751),
  },
  [248] = {
    [anon_sym_AMP_AMP] = ACTIONS(215),
    [anon_sym_using] = ACTIONS(213),
    [anon_sym_struct] = ACTIONS(213),
    [anon_sym_function] = ACTIONS(213),
    [anon_sym_LPAREN] = ACTIONS(215),
    [sym__plus_operator] = ACTIONS(213),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(213),
    [sym_identifier] = ACTIONS(213),
    [anon_sym_if] = ACTIONS(213),
    [anon_sym_mutable] = ACTIONS(213),
    [anon_sym_module] = ACTIONS(213),
    [sym__times_operator] = ACTIONS(213),
    [anon_sym_PIPE_PIPE] = ACTIONS(213),
    [anon_sym_EQ_GT] = ACTIONS(215),
    [anon_sym_LT_COLON] = ACTIONS(215),
    [anon_sym_import] = ACTIONS(213),
    [anon_sym_end] = ACTIONS(213),
    [sym__arrow_operator] = ACTIONS(215),
    [sym_string] = ACTIONS(215),
    [anon_sym_COLON_COLON] = ACTIONS(215),
    [sym_number] = ACTIONS(215),
  },
  [249] = {
    [sym_import_list] = STATE(147),
    [anon_sym_AMP_AMP] = ACTIONS(101),
    [sym__times_operator] = ACTIONS(99),
    [anon_sym_PIPE_PIPE] = ACTIONS(99),
    [anon_sym_COLON] = ACTIONS(753),
    [anon_sym_EQ_GT] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_LT_COLON] = ACTIONS(101),
    [sym__plus_operator] = ACTIONS(99),
    [sym__assign_operator] = ACTIONS(99),
    [anon_sym_DOT] = ACTIONS(125),
    [sym__arrow_operator] = ACTIONS(101),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(101),
  },
  [250] = {
    [sym_function_definition] = STATE(133),
    [sym_struct_definition] = STATE(133),
    [sym_parameterized_identifier] = STATE(133),
    [sym_if_statement] = STATE(133),
    [sym_pair_expression] = STATE(133),
    [sym_parenthesized_expression] = STATE(133),
    [sym_module_definition] = STATE(133),
    [sym_call_expression] = STATE(133),
    [sym__expression] = STATE(133),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(363),
    [sym_assignment_expression] = STATE(133),
    [sym_binary_expression] = STATE(133),
    [sym_import_statement] = STATE(133),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(275),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(755),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(279),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(279),
  },
  [251] = {
    [anon_sym_module] = ACTIONS(757),
    [anon_sym_using] = ACTIONS(757),
    [anon_sym_struct] = ACTIONS(757),
    [anon_sym_function] = ACTIONS(757),
    [anon_sym_LPAREN] = ACTIONS(759),
    [anon_sym_LT_COLON] = ACTIONS(759),
    [anon_sym_import] = ACTIONS(757),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(757),
    [sym_identifier] = ACTIONS(757),
    [anon_sym_if] = ACTIONS(757),
    [sym_string] = ACTIONS(759),
    [anon_sym_mutable] = ACTIONS(757),
    [sym_number] = ACTIONS(759),
  },
  [252] = {
    [aux_sym_type_parameter_list_repeat1] = STATE(365),
    [anon_sym_RBRACE] = ACTIONS(761),
    [anon_sym_COMMA] = ACTIONS(533),
    [sym_comment] = ACTIONS(3),
  },
  [253] = {
    [sym_function_definition] = STATE(366),
    [sym_struct_definition] = STATE(366),
    [sym_parameterized_identifier] = STATE(366),
    [sym_if_statement] = STATE(366),
    [sym_pair_expression] = STATE(366),
    [sym_parenthesized_expression] = STATE(366),
    [sym_module_definition] = STATE(366),
    [sym_call_expression] = STATE(366),
    [sym__expression] = STATE(366),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(366),
    [sym_assignment_expression] = STATE(366),
    [sym_binary_expression] = STATE(366),
    [sym_import_statement] = STATE(366),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(275),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(763),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(763),
  },
  [254] = {
    [sym_function_definition] = STATE(159),
    [sym_struct_definition] = STATE(159),
    [sym_parameterized_identifier] = STATE(159),
    [sym_if_statement] = STATE(159),
    [sym_pair_expression] = STATE(159),
    [sym_parenthesized_expression] = STATE(159),
    [sym_module_definition] = STATE(159),
    [sym_call_expression] = STATE(159),
    [sym__expression] = STATE(159),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(159),
    [sym_assignment_expression] = STATE(159),
    [sym_binary_expression] = STATE(159),
    [sym_import_statement] = STATE(159),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(275),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(319),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(319),
  },
  [255] = {
    [sym_function_definition] = STATE(367),
    [sym_struct_definition] = STATE(367),
    [sym_parameterized_identifier] = STATE(367),
    [sym_if_statement] = STATE(367),
    [sym_pair_expression] = STATE(367),
    [sym_parenthesized_expression] = STATE(367),
    [sym_module_definition] = STATE(367),
    [sym_call_expression] = STATE(367),
    [sym__expression] = STATE(367),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(367),
    [sym_assignment_expression] = STATE(367),
    [sym_binary_expression] = STATE(367),
    [sym_import_statement] = STATE(367),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(275),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(765),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(765),
  },
  [256] = {
    [sym_function_definition] = STATE(368),
    [sym_struct_definition] = STATE(368),
    [sym_parameterized_identifier] = STATE(368),
    [sym_if_statement] = STATE(368),
    [sym_pair_expression] = STATE(368),
    [sym_parenthesized_expression] = STATE(368),
    [sym_module_definition] = STATE(368),
    [sym_call_expression] = STATE(368),
    [sym__expression] = STATE(368),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(368),
    [sym_assignment_expression] = STATE(368),
    [sym_binary_expression] = STATE(368),
    [sym_import_statement] = STATE(368),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(275),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(767),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(767),
  },
  [257] = {
    [sym_function_definition] = STATE(369),
    [sym_struct_definition] = STATE(369),
    [sym_parameterized_identifier] = STATE(369),
    [sym_if_statement] = STATE(369),
    [sym_pair_expression] = STATE(369),
    [sym_parenthesized_expression] = STATE(369),
    [sym_module_definition] = STATE(369),
    [sym_call_expression] = STATE(369),
    [sym__expression] = STATE(369),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(369),
    [sym_assignment_expression] = STATE(369),
    [sym_binary_expression] = STATE(369),
    [sym_import_statement] = STATE(369),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(275),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(769),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(769),
  },
  [258] = {
    [sym_function_definition] = STATE(133),
    [sym_struct_definition] = STATE(133),
    [sym_parameterized_identifier] = STATE(133),
    [sym_if_statement] = STATE(133),
    [sym_pair_expression] = STATE(133),
    [sym_parenthesized_expression] = STATE(133),
    [sym_module_definition] = STATE(133),
    [sym_call_expression] = STATE(133),
    [sym__expression] = STATE(133),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(133),
    [sym_assignment_expression] = STATE(133),
    [sym_binary_expression] = STATE(133),
    [sym_import_statement] = STATE(133),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(275),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(279),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(279),
  },
  [259] = {
    [sym_function_definition] = STATE(370),
    [sym_struct_definition] = STATE(370),
    [sym_parameterized_identifier] = STATE(370),
    [sym_if_statement] = STATE(370),
    [sym_pair_expression] = STATE(370),
    [sym_parenthesized_expression] = STATE(370),
    [sym_module_definition] = STATE(370),
    [sym_call_expression] = STATE(370),
    [sym__expression] = STATE(370),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(370),
    [sym_assignment_expression] = STATE(370),
    [sym_binary_expression] = STATE(370),
    [sym_import_statement] = STATE(370),
    [anon_sym_module] = ACTIONS(33),
    [anon_sym_using] = ACTIONS(275),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(771),
    [anon_sym_mutable] = ACTIONS(49),
    [sym_number] = ACTIONS(771),
  },
  [260] = {
    [anon_sym_AMP_AMP] = ACTIONS(773),
    [anon_sym_LPAREN] = ACTIONS(773),
    [sym__plus_operator] = ACTIONS(773),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(773),
    [anon_sym_else] = ACTIONS(773),
    [sym__times_operator] = ACTIONS(773),
    [anon_sym_SEMI] = ACTIONS(773),
    [anon_sym_PIPE_PIPE] = ACTIONS(773),
    [ts_builtin_sym_end] = ACTIONS(775),
    [anon_sym_EQ_GT] = ACTIONS(773),
    [anon_sym_LT_COLON] = ACTIONS(773),
    [anon_sym_elseif] = ACTIONS(773),
    [anon_sym_end] = ACTIONS(773),
    [sym__arrow_operator] = ACTIONS(773),
    [anon_sym_LF] = ACTIONS(775),
    [anon_sym_COLON_COLON] = ACTIONS(773),
  },
  [261] = {
    [sym_function_definition] = STATE(219),
    [sym_struct_definition] = STATE(219),
    [sym_parameterized_identifier] = STATE(219),
    [sym_if_statement] = STATE(219),
    [sym_pair_expression] = STATE(219),
    [sym_parenthesized_expression] = STATE(219),
    [sym_module_definition] = STATE(219),
    [sym_call_expression] = STATE(219),
    [sym__expression] = STATE(219),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(219),
    [sym_assignment_expression] = STATE(219),
    [sym_binary_expression] = STATE(219),
    [sym_import_statement] = STATE(219),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(777),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(465),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(465),
  },
  [262] = {
    [aux_sym__expression_list_repeat1] = STATE(226),
    [anon_sym_end] = ACTIONS(777),
    [anon_sym_SEMI] = ACTIONS(779),
    [anon_sym_LF] = ACTIONS(781),
    [sym_comment] = ACTIONS(53),
  },
  [263] = {
    [sym_argument_list] = STATE(43),
    [aux_sym__expression_list_repeat1] = STATE(373),
    [anon_sym_AMP_AMP] = ACTIONS(227),
    [sym__times_operator] = ACTIONS(229),
    [anon_sym_SEMI] = ACTIONS(779),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LT_COLON] = ACTIONS(79),
    [sym__plus_operator] = ACTIONS(235),
    [sym__assign_operator] = ACTIONS(237),
    [anon_sym_EQ_GT] = ACTIONS(239),
    [anon_sym_end] = ACTIONS(777),
    [sym__arrow_operator] = ACTIONS(243),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LF] = ACTIONS(781),
    [anon_sym_COLON_COLON] = ACTIONS(79),
  },
  [264] = {
    [sym_identifier] = ACTIONS(783),
    [sym_comment] = ACTIONS(3),
  },
  [265] = {
    [anon_sym_module] = ACTIONS(785),
    [anon_sym_using] = ACTIONS(785),
    [anon_sym_struct] = ACTIONS(785),
    [anon_sym_function] = ACTIONS(785),
    [anon_sym_LPAREN] = ACTIONS(787),
    [anon_sym_import] = ACTIONS(785),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(785),
    [sym_identifier] = ACTIONS(785),
    [anon_sym_if] = ACTIONS(785),
    [sym_string] = ACTIONS(787),
    [anon_sym_mutable] = ACTIONS(785),
    [sym_number] = ACTIONS(787),
  },
  [266] = {
    [aux_sym_parameter_list_repeat1] = STATE(376),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(561),
    [anon_sym_RPAREN] = ACTIONS(789),
  },
  [267] = {
    [sym_function_definition] = STATE(219),
    [sym_struct_definition] = STATE(219),
    [sym_parameterized_identifier] = STATE(219),
    [sym_if_statement] = STATE(219),
    [sym_pair_expression] = STATE(219),
    [sym_parenthesized_expression] = STATE(219),
    [sym_module_definition] = STATE(219),
    [sym_call_expression] = STATE(219),
    [sym__expression] = STATE(219),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(219),
    [sym_assignment_expression] = STATE(219),
    [sym_binary_expression] = STATE(219),
    [sym_import_statement] = STATE(219),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(791),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(465),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(465),
  },
  [268] = {
    [anon_sym_AMP_AMP] = ACTIONS(793),
    [anon_sym_LPAREN] = ACTIONS(793),
    [sym__plus_operator] = ACTIONS(793),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(793),
    [anon_sym_else] = ACTIONS(793),
    [sym__times_operator] = ACTIONS(793),
    [anon_sym_SEMI] = ACTIONS(793),
    [anon_sym_PIPE_PIPE] = ACTIONS(793),
    [ts_builtin_sym_end] = ACTIONS(795),
    [anon_sym_EQ_GT] = ACTIONS(793),
    [anon_sym_LT_COLON] = ACTIONS(793),
    [anon_sym_elseif] = ACTIONS(793),
    [anon_sym_end] = ACTIONS(793),
    [sym__arrow_operator] = ACTIONS(793),
    [anon_sym_LF] = ACTIONS(795),
    [anon_sym_COLON_COLON] = ACTIONS(793),
  },
  [269] = {
    [aux_sym__expression_list_repeat1] = STATE(226),
    [anon_sym_end] = ACTIONS(791),
    [anon_sym_SEMI] = ACTIONS(797),
    [anon_sym_LF] = ACTIONS(799),
    [sym_comment] = ACTIONS(53),
  },
  [270] = {
    [sym_function_definition] = STATE(219),
    [sym_struct_definition] = STATE(219),
    [sym_parameterized_identifier] = STATE(219),
    [sym_if_statement] = STATE(219),
    [sym_pair_expression] = STATE(219),
    [sym_parenthesized_expression] = STATE(219),
    [sym_module_definition] = STATE(219),
    [sym_call_expression] = STATE(219),
    [sym__expression] = STATE(219),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(219),
    [sym_assignment_expression] = STATE(219),
    [sym_binary_expression] = STATE(219),
    [sym_import_statement] = STATE(219),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(801),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(465),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(465),
  },
  [271] = {
    [anon_sym_AMP_AMP] = ACTIONS(477),
    [anon_sym_RBRACE] = ACTIONS(477),
    [anon_sym_using] = ACTIONS(475),
    [anon_sym_struct] = ACTIONS(475),
    [anon_sym_function] = ACTIONS(475),
    [anon_sym_LPAREN] = ACTIONS(477),
    [sym__plus_operator] = ACTIONS(475),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(475),
    [sym_identifier] = ACTIONS(475),
    [anon_sym_if] = ACTIONS(475),
    [anon_sym_mutable] = ACTIONS(475),
    [anon_sym_RPAREN] = ACTIONS(477),
    [anon_sym_module] = ACTIONS(475),
    [sym__times_operator] = ACTIONS(475),
    [anon_sym_PIPE_PIPE] = ACTIONS(475),
    [anon_sym_EQ_GT] = ACTIONS(477),
    [anon_sym_LT_COLON] = ACTIONS(477),
    [anon_sym_import] = ACTIONS(475),
    [anon_sym_COMMA] = ACTIONS(477),
    [sym__arrow_operator] = ACTIONS(477),
    [sym_string] = ACTIONS(477),
    [anon_sym_COLON_COLON] = ACTIONS(477),
    [sym_number] = ACTIONS(477),
  },
  [272] = {
    [aux_sym__expression_list_repeat1] = STATE(226),
    [anon_sym_end] = ACTIONS(801),
    [anon_sym_SEMI] = ACTIONS(803),
    [anon_sym_LF] = ACTIONS(805),
    [sym_comment] = ACTIONS(53),
  },
  [273] = {
    [aux_sym_parameter_list_repeat1] = STATE(381),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [sym__times_operator] = ACTIONS(485),
    [anon_sym_PIPE_PIPE] = ACTIONS(485),
    [anon_sym_EQ_GT] = ACTIONS(487),
    [anon_sym_LPAREN] = ACTIONS(487),
    [anon_sym_LT_COLON] = ACTIONS(487),
    [sym__plus_operator] = ACTIONS(485),
    [sym__assign_operator] = ACTIONS(485),
    [anon_sym_COMMA] = ACTIONS(561),
    [sym__arrow_operator] = ACTIONS(487),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(487),
    [anon_sym_RPAREN] = ACTIONS(487),
  },
  [274] = {
    [sym_function_definition] = STATE(219),
    [sym_struct_definition] = STATE(219),
    [sym_parameterized_identifier] = STATE(219),
    [sym_if_statement] = STATE(219),
    [sym_pair_expression] = STATE(219),
    [sym_parenthesized_expression] = STATE(219),
    [sym_module_definition] = STATE(219),
    [sym_call_expression] = STATE(219),
    [sym__expression] = STATE(219),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(219),
    [sym_assignment_expression] = STATE(219),
    [sym_binary_expression] = STATE(219),
    [sym_import_statement] = STATE(219),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(807),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(465),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(465),
  },
  [275] = {
    [anon_sym_AMP_AMP] = ACTIONS(553),
    [anon_sym_RBRACE] = ACTIONS(553),
    [anon_sym_using] = ACTIONS(551),
    [anon_sym_struct] = ACTIONS(551),
    [anon_sym_function] = ACTIONS(551),
    [anon_sym_LPAREN] = ACTIONS(553),
    [sym__plus_operator] = ACTIONS(551),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(551),
    [sym_identifier] = ACTIONS(551),
    [anon_sym_if] = ACTIONS(551),
    [anon_sym_mutable] = ACTIONS(551),
    [anon_sym_RPAREN] = ACTIONS(553),
    [anon_sym_module] = ACTIONS(551),
    [sym__times_operator] = ACTIONS(551),
    [anon_sym_PIPE_PIPE] = ACTIONS(551),
    [anon_sym_EQ_GT] = ACTIONS(553),
    [anon_sym_LT_COLON] = ACTIONS(553),
    [anon_sym_import] = ACTIONS(551),
    [anon_sym_COMMA] = ACTIONS(553),
    [sym__arrow_operator] = ACTIONS(553),
    [sym_string] = ACTIONS(553),
    [anon_sym_COLON_COLON] = ACTIONS(553),
    [sym_number] = ACTIONS(553),
  },
  [276] = {
    [aux_sym__expression_list_repeat1] = STATE(226),
    [anon_sym_end] = ACTIONS(807),
    [anon_sym_SEMI] = ACTIONS(809),
    [anon_sym_LF] = ACTIONS(811),
    [sym_comment] = ACTIONS(53),
  },
  [277] = {
    [sym_argument_list] = STATE(43),
    [aux_sym__expression_list_repeat1] = STATE(384),
    [anon_sym_AMP_AMP] = ACTIONS(227),
    [sym__times_operator] = ACTIONS(229),
    [anon_sym_SEMI] = ACTIONS(809),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LT_COLON] = ACTIONS(79),
    [sym__plus_operator] = ACTIONS(235),
    [sym__assign_operator] = ACTIONS(237),
    [anon_sym_EQ_GT] = ACTIONS(239),
    [anon_sym_end] = ACTIONS(807),
    [sym__arrow_operator] = ACTIONS(243),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LF] = ACTIONS(811),
    [anon_sym_COLON_COLON] = ACTIONS(79),
  },
  [278] = {
    [sym_function_definition] = STATE(385),
    [sym_struct_definition] = STATE(385),
    [sym_parameterized_identifier] = STATE(385),
    [sym_if_statement] = STATE(385),
    [sym_pair_expression] = STATE(385),
    [sym_parenthesized_expression] = STATE(385),
    [sym_module_definition] = STATE(385),
    [sym_call_expression] = STATE(385),
    [sym__expression] = STATE(385),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(385),
    [sym_assignment_expression] = STATE(385),
    [sym_binary_expression] = STATE(385),
    [sym_import_statement] = STATE(385),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(807),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(813),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(813),
  },
  [279] = {
    [anon_sym_AMP_AMP] = ACTIONS(571),
    [anon_sym_RBRACE] = ACTIONS(571),
    [anon_sym_using] = ACTIONS(569),
    [anon_sym_struct] = ACTIONS(569),
    [anon_sym_function] = ACTIONS(569),
    [anon_sym_LPAREN] = ACTIONS(571),
    [sym__plus_operator] = ACTIONS(569),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(569),
    [sym_identifier] = ACTIONS(569),
    [anon_sym_if] = ACTIONS(569),
    [anon_sym_mutable] = ACTIONS(569),
    [anon_sym_RPAREN] = ACTIONS(571),
    [anon_sym_module] = ACTIONS(569),
    [sym__times_operator] = ACTIONS(569),
    [anon_sym_PIPE_PIPE] = ACTIONS(569),
    [anon_sym_EQ_GT] = ACTIONS(571),
    [anon_sym_LT_COLON] = ACTIONS(571),
    [anon_sym_import] = ACTIONS(569),
    [anon_sym_COMMA] = ACTIONS(571),
    [sym__arrow_operator] = ACTIONS(571),
    [sym_string] = ACTIONS(571),
    [anon_sym_COLON_COLON] = ACTIONS(571),
    [sym_number] = ACTIONS(571),
  },
  [280] = {
    [sym_argument_list] = STATE(43),
    [aux_sym__expression_list_repeat1] = STATE(388),
    [anon_sym_AMP_AMP] = ACTIONS(227),
    [sym__times_operator] = ACTIONS(229),
    [anon_sym_SEMI] = ACTIONS(815),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LT_COLON] = ACTIONS(79),
    [sym__plus_operator] = ACTIONS(235),
    [sym__assign_operator] = ACTIONS(237),
    [anon_sym_EQ_GT] = ACTIONS(239),
    [anon_sym_end] = ACTIONS(817),
    [sym__arrow_operator] = ACTIONS(243),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LF] = ACTIONS(819),
    [anon_sym_COLON_COLON] = ACTIONS(79),
  },
  [281] = {
    [anon_sym_AMP_AMP] = ACTIONS(615),
    [anon_sym_RBRACE] = ACTIONS(615),
    [anon_sym_using] = ACTIONS(613),
    [anon_sym_struct] = ACTIONS(613),
    [anon_sym_function] = ACTIONS(613),
    [anon_sym_LPAREN] = ACTIONS(615),
    [sym__plus_operator] = ACTIONS(613),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(613),
    [sym_identifier] = ACTIONS(613),
    [anon_sym_if] = ACTIONS(613),
    [anon_sym_mutable] = ACTIONS(613),
    [anon_sym_RPAREN] = ACTIONS(615),
    [anon_sym_module] = ACTIONS(613),
    [sym__times_operator] = ACTIONS(613),
    [anon_sym_PIPE_PIPE] = ACTIONS(613),
    [anon_sym_EQ_GT] = ACTIONS(615),
    [anon_sym_LT_COLON] = ACTIONS(615),
    [anon_sym_import] = ACTIONS(613),
    [anon_sym_COMMA] = ACTIONS(615),
    [sym__arrow_operator] = ACTIONS(615),
    [sym_string] = ACTIONS(615),
    [anon_sym_COLON_COLON] = ACTIONS(615),
    [sym_number] = ACTIONS(615),
  },
  [282] = {
    [aux_sym_type_argument_list_repeat1] = STATE(300),
    [anon_sym_RBRACE] = ACTIONS(821),
    [anon_sym_COMMA] = ACTIONS(357),
    [sym_comment] = ACTIONS(3),
  },
  [283] = {
    [aux_sym_if_statement_repeat1] = STATE(391),
    [sym_function_definition] = STATE(311),
    [sym_struct_definition] = STATE(311),
    [sym_if_statement] = STATE(311),
    [sym__expression] = STATE(311),
    [sym_parenthesized_expression] = STATE(311),
    [sym_call_expression] = STATE(311),
    [sym_import_statement] = STATE(311),
    [sym_parameterized_identifier] = STATE(311),
    [sym_pair_expression] = STATE(311),
    [sym_module_definition] = STATE(311),
    [sym_elseif_clause] = STATE(391),
    [sym_else_clause] = STATE(392),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(311),
    [sym_assignment_expression] = STATE(311),
    [sym_binary_expression] = STATE(311),
    [anon_sym_using] = ACTIONS(167),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_else] = ACTIONS(389),
    [anon_sym_mutable] = ACTIONS(23),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(167),
    [anon_sym_elseif] = ACTIONS(399),
    [anon_sym_end] = ACTIONS(823),
    [sym_string] = ACTIONS(649),
    [sym_number] = ACTIONS(649),
  },
  [284] = {
    [anon_sym_AMP_AMP] = ACTIONS(659),
    [anon_sym_RBRACE] = ACTIONS(659),
    [anon_sym_using] = ACTIONS(657),
    [anon_sym_struct] = ACTIONS(657),
    [anon_sym_function] = ACTIONS(657),
    [anon_sym_LPAREN] = ACTIONS(659),
    [sym__plus_operator] = ACTIONS(657),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(657),
    [sym_identifier] = ACTIONS(657),
    [anon_sym_if] = ACTIONS(657),
    [anon_sym_mutable] = ACTIONS(657),
    [anon_sym_RPAREN] = ACTIONS(659),
    [anon_sym_module] = ACTIONS(657),
    [sym__times_operator] = ACTIONS(657),
    [anon_sym_PIPE_PIPE] = ACTIONS(657),
    [anon_sym_EQ_GT] = ACTIONS(659),
    [anon_sym_LT_COLON] = ACTIONS(659),
    [anon_sym_import] = ACTIONS(657),
    [anon_sym_COMMA] = ACTIONS(659),
    [sym__arrow_operator] = ACTIONS(659),
    [sym_string] = ACTIONS(659),
    [anon_sym_COLON_COLON] = ACTIONS(659),
    [sym_number] = ACTIONS(659),
  },
  [285] = {
    [aux_sym_if_statement_repeat1] = STATE(317),
    [sym_elseif_clause] = STATE(317),
    [sym_else_clause] = STATE(392),
    [anon_sym_elseif] = ACTIONS(663),
    [anon_sym_end] = ACTIONS(825),
    [anon_sym_else] = ACTIONS(389),
    [sym_comment] = ACTIONS(3),
  },
  [286] = {
    [aux_sym_if_statement_repeat1] = STATE(391),
    [aux_sym__expression_list_repeat1] = STATE(319),
    [sym_elseif_clause] = STATE(391),
    [sym_else_clause] = STATE(392),
    [anon_sym_elseif] = ACTIONS(399),
    [anon_sym_end] = ACTIONS(823),
    [anon_sym_SEMI] = ACTIONS(827),
    [anon_sym_else] = ACTIONS(389),
    [anon_sym_LF] = ACTIONS(829),
    [sym_comment] = ACTIONS(53),
  },
  [287] = {
    [anon_sym_end] = ACTIONS(825),
    [sym_comment] = ACTIONS(3),
  },
  [288] = {
    [sym_function_definition] = STATE(385),
    [sym_struct_definition] = STATE(385),
    [sym_if_statement] = STATE(385),
    [sym__expression] = STATE(385),
    [sym_parenthesized_expression] = STATE(385),
    [sym_call_expression] = STATE(385),
    [sym_subtype_clause] = STATE(394),
    [sym_import_statement] = STATE(385),
    [sym_parameterized_identifier] = STATE(385),
    [sym_pair_expression] = STATE(385),
    [sym_module_definition] = STATE(385),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(385),
    [sym_assignment_expression] = STATE(385),
    [sym_binary_expression] = STATE(385),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LT_COLON] = ACTIONS(107),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(807),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(813),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(813),
  },
  [289] = {
    [anon_sym_AMP_AMP] = ACTIONS(689),
    [anon_sym_RBRACE] = ACTIONS(689),
    [anon_sym_using] = ACTIONS(687),
    [anon_sym_struct] = ACTIONS(687),
    [anon_sym_function] = ACTIONS(687),
    [anon_sym_LPAREN] = ACTIONS(689),
    [sym__plus_operator] = ACTIONS(687),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(687),
    [sym_identifier] = ACTIONS(687),
    [anon_sym_if] = ACTIONS(687),
    [anon_sym_mutable] = ACTIONS(687),
    [anon_sym_RPAREN] = ACTIONS(689),
    [anon_sym_module] = ACTIONS(687),
    [sym__times_operator] = ACTIONS(687),
    [anon_sym_PIPE_PIPE] = ACTIONS(687),
    [anon_sym_EQ_GT] = ACTIONS(689),
    [anon_sym_LT_COLON] = ACTIONS(689),
    [anon_sym_import] = ACTIONS(687),
    [anon_sym_end] = ACTIONS(687),
    [anon_sym_COMMA] = ACTIONS(689),
    [sym__arrow_operator] = ACTIONS(689),
    [sym_string] = ACTIONS(689),
    [anon_sym_COLON_COLON] = ACTIONS(689),
    [sym_number] = ACTIONS(689),
  },
  [290] = {
    [aux_sym_argument_list_repeat1] = STATE(330),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(433),
    [anon_sym_RPAREN] = ACTIONS(831),
  },
  [291] = {
    [sym_identifier] = ACTIONS(833),
    [sym_comment] = ACTIONS(3),
  },
  [292] = {
    [sym_argument_list] = STATE(78),
    [anon_sym_AMP_AMP] = ACTIONS(409),
    [anon_sym_RBRACE] = ACTIONS(409),
    [sym__times_operator] = ACTIONS(345),
    [anon_sym_PIPE_PIPE] = ACTIONS(349),
    [anon_sym_LPAREN] = ACTIONS(409),
    [anon_sym_LT_COLON] = ACTIONS(409),
    [anon_sym_EQ_GT] = ACTIONS(409),
    [sym__plus_operator] = ACTIONS(351),
    [sym__assign_operator] = ACTIONS(407),
    [anon_sym_COMMA] = ACTIONS(409),
    [sym__arrow_operator] = ACTIONS(409),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(409),
  },
  [293] = {
    [sym_argument_list] = STATE(78),
    [anon_sym_AMP_AMP] = ACTIONS(409),
    [anon_sym_RBRACE] = ACTIONS(409),
    [sym__times_operator] = ACTIONS(345),
    [anon_sym_PIPE_PIPE] = ACTIONS(407),
    [anon_sym_LPAREN] = ACTIONS(409),
    [anon_sym_LT_COLON] = ACTIONS(409),
    [anon_sym_EQ_GT] = ACTIONS(409),
    [sym__plus_operator] = ACTIONS(351),
    [sym__assign_operator] = ACTIONS(407),
    [anon_sym_COMMA] = ACTIONS(409),
    [sym__arrow_operator] = ACTIONS(409),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(409),
  },
  [294] = {
    [sym_argument_list] = STATE(78),
    [anon_sym_AMP_AMP] = ACTIONS(409),
    [anon_sym_RBRACE] = ACTIONS(409),
    [sym__times_operator] = ACTIONS(345),
    [anon_sym_PIPE_PIPE] = ACTIONS(407),
    [anon_sym_LPAREN] = ACTIONS(409),
    [anon_sym_LT_COLON] = ACTIONS(409),
    [anon_sym_EQ_GT] = ACTIONS(409),
    [sym__plus_operator] = ACTIONS(407),
    [sym__assign_operator] = ACTIONS(407),
    [anon_sym_COMMA] = ACTIONS(409),
    [sym__arrow_operator] = ACTIONS(409),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(409),
  },
  [295] = {
    [sym_argument_list] = STATE(78),
    [anon_sym_AMP_AMP] = ACTIONS(343),
    [anon_sym_RBRACE] = ACTIONS(445),
    [sym__times_operator] = ACTIONS(345),
    [anon_sym_PIPE_PIPE] = ACTIONS(349),
    [anon_sym_LPAREN] = ACTIONS(445),
    [anon_sym_LT_COLON] = ACTIONS(445),
    [anon_sym_EQ_GT] = ACTIONS(445),
    [sym__plus_operator] = ACTIONS(351),
    [sym__assign_operator] = ACTIONS(353),
    [anon_sym_COMMA] = ACTIONS(445),
    [sym__arrow_operator] = ACTIONS(359),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(445),
  },
  [296] = {
    [sym_argument_list] = STATE(78),
    [anon_sym_AMP_AMP] = ACTIONS(343),
    [anon_sym_RBRACE] = ACTIONS(449),
    [sym__times_operator] = ACTIONS(345),
    [anon_sym_PIPE_PIPE] = ACTIONS(349),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_LT_COLON] = ACTIONS(141),
    [anon_sym_EQ_GT] = ACTIONS(355),
    [sym__plus_operator] = ACTIONS(351),
    [sym__assign_operator] = ACTIONS(353),
    [anon_sym_COMMA] = ACTIONS(449),
    [sym__arrow_operator] = ACTIONS(359),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(141),
  },
  [297] = {
    [sym_argument_list] = STATE(78),
    [anon_sym_AMP_AMP] = ACTIONS(343),
    [anon_sym_RBRACE] = ACTIONS(835),
    [sym__times_operator] = ACTIONS(345),
    [anon_sym_PIPE_PIPE] = ACTIONS(349),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_LT_COLON] = ACTIONS(141),
    [sym__plus_operator] = ACTIONS(351),
    [sym__assign_operator] = ACTIONS(353),
    [anon_sym_EQ_GT] = ACTIONS(355),
    [anon_sym_COMMA] = ACTIONS(835),
    [sym__arrow_operator] = ACTIONS(359),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(141),
  },
  [298] = {
    [sym_argument_list] = STATE(78),
    [anon_sym_AMP_AMP] = ACTIONS(343),
    [anon_sym_RBRACE] = ACTIONS(409),
    [sym__times_operator] = ACTIONS(345),
    [anon_sym_PIPE_PIPE] = ACTIONS(349),
    [anon_sym_LPAREN] = ACTIONS(409),
    [anon_sym_LT_COLON] = ACTIONS(409),
    [anon_sym_EQ_GT] = ACTIONS(409),
    [sym__plus_operator] = ACTIONS(351),
    [sym__assign_operator] = ACTIONS(407),
    [anon_sym_COMMA] = ACTIONS(409),
    [sym__arrow_operator] = ACTIONS(359),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(409),
  },
  [299] = {
    [anon_sym_AMP_AMP] = ACTIONS(837),
    [anon_sym_LPAREN] = ACTIONS(837),
    [sym__plus_operator] = ACTIONS(837),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(837),
    [anon_sym_else] = ACTIONS(837),
    [sym__times_operator] = ACTIONS(837),
    [anon_sym_SEMI] = ACTIONS(837),
    [anon_sym_PIPE_PIPE] = ACTIONS(837),
    [ts_builtin_sym_end] = ACTIONS(839),
    [anon_sym_EQ_GT] = ACTIONS(837),
    [anon_sym_LT_COLON] = ACTIONS(837),
    [anon_sym_elseif] = ACTIONS(837),
    [anon_sym_end] = ACTIONS(837),
    [sym__arrow_operator] = ACTIONS(837),
    [anon_sym_LF] = ACTIONS(839),
    [anon_sym_COLON_COLON] = ACTIONS(837),
  },
  [300] = {
    [aux_sym_type_argument_list_repeat1] = STATE(300),
    [anon_sym_RBRACE] = ACTIONS(835),
    [anon_sym_COMMA] = ACTIONS(841),
    [sym_comment] = ACTIONS(3),
  },
  [301] = {
    [aux_sym_parameter_list_repeat1] = STATE(397),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [anon_sym_using] = ACTIONS(485),
    [anon_sym_struct] = ACTIONS(485),
    [anon_sym_function] = ACTIONS(485),
    [anon_sym_LPAREN] = ACTIONS(487),
    [sym__plus_operator] = ACTIONS(485),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(485),
    [sym_identifier] = ACTIONS(485),
    [anon_sym_if] = ACTIONS(485),
    [anon_sym_mutable] = ACTIONS(485),
    [anon_sym_module] = ACTIONS(485),
    [sym__times_operator] = ACTIONS(485),
    [anon_sym_PIPE_PIPE] = ACTIONS(485),
    [anon_sym_EQ_GT] = ACTIONS(487),
    [anon_sym_LT_COLON] = ACTIONS(487),
    [anon_sym_import] = ACTIONS(485),
    [anon_sym_COMMA] = ACTIONS(561),
    [sym__arrow_operator] = ACTIONS(487),
    [sym_string] = ACTIONS(487),
    [anon_sym_COLON_COLON] = ACTIONS(487),
    [sym_number] = ACTIONS(487),
  },
  [302] = {
    [sym_function_definition] = STATE(398),
    [sym_struct_definition] = STATE(398),
    [sym_parameterized_identifier] = STATE(398),
    [sym_if_statement] = STATE(398),
    [sym_pair_expression] = STATE(398),
    [sym_parenthesized_expression] = STATE(398),
    [sym_module_definition] = STATE(398),
    [sym_call_expression] = STATE(398),
    [sym__expression] = STATE(398),
    [sym_field_expression] = STATE(26),
    [sym_typed_expression] = STATE(398),
    [sym_assignment_expression] = STATE(398),
    [sym_binary_expression] = STATE(398),
    [sym_import_statement] = STATE(398),
    [anon_sym_module] = ACTIONS(33),
    [sym_number] = ACTIONS(844),
    [anon_sym_using] = ACTIONS(199),
    [anon_sym_struct] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_import] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [sym_string] = ACTIONS(844),
    [anon_sym_mutable] = ACTIONS(49),
    [anon_sym_RPAREN] = ACTIONS(325),
  },
  [303] = {
    [sym_identifier] = ACTIONS(846),
    [sym_comment] = ACTIONS(3),
  },
  [304] = {
    [anon_sym_AMP_AMP] = ACTIONS(687),
    [anon_sym_using] = ACTIONS(687),
    [anon_sym_struct] = ACTIONS(687),
    [anon_sym_function] = ACTIONS(687),
    [anon_sym_LPAREN] = ACTIONS(687),
    [sym__plus_operator] = ACTIONS(687),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(687),
    [sym_identifier] = ACTIONS(687),
    [anon_sym_if] = ACTIONS(687),
    [anon_sym_else] = ACTIONS(337),
    [anon_sym_mutable] = ACTIONS(687),
    [anon_sym_module] = ACTIONS(687),
    [sym__times_operator] = ACTIONS(687),
    [anon_sym_SEMI] = ACTIONS(337),
    [anon_sym_PIPE_PIPE] = ACTIONS(687),
    [anon_sym_EQ_GT] = ACTIONS(687),
    [anon_sym_LT_COLON] = ACTIONS(687),
    [anon_sym_import] = ACTIONS(687),
    [anon_sym_elseif] = ACTIONS(337),
    [anon_sym_end] = ACTIONS(337),
    [sym__arrow_operator] = ACTIONS(687),
    [sym_string] = ACTIONS(687),
    [anon_sym_LF] = ACTIONS(339),
    [anon_sym_COLON_COLON] = ACTIONS(687),
    [sym_number] = ACTIONS(687),
  },
  [305] = {
    [sym_argument_list] = STATE(43),
    [anon_sym_AMP_AMP] = ACTIONS(407),
    [anon_sym_LPAREN] = ACTIONS(407),
    [sym__plus_operator] = ACTIONS(385),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(407),
    [anon_sym_else] = ACTIONS(407),
    [sym__times_operator] = ACTIONS(391),
    [anon_sym_SEMI] = ACTIONS(407),
    [anon_sym_PIPE_PIPE] = ACTIONS(395),
    [anon_sym_EQ_GT] = ACTIONS(407),
    [anon_sym_LT_COLON] = ACTIONS(407),
    [anon_sym_elseif] = ACTIONS(407),
    [anon_sym_end] = ACTIONS(407),
    [sym__arrow_operator] = ACTIONS(407),
    [anon_sym_LF] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(407),
  },
  [306] = {
    [sym_argument_list] = STATE(43),
    [anon_sym_AMP_AMP] = ACTIONS(407),
    [anon_sym_LPAREN] = ACTIONS(407),
    [sym__plus_operator] = ACTIONS(407),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(407),
    [anon_sym_else] = ACTIONS(407),
    [sym__times_operator] = ACTIONS(391),
    [anon_sym_SEMI] = ACTIONS(407),
    [anon_sym_PIPE_PIPE] = ACTIONS(407),
    [anon_sym_EQ_GT] = ACTIONS(407),
    [anon_sym_LT_COLON] = ACTIONS(407),
    [anon_sym_elseif] = ACTIONS(407),
    [anon_sym_end] = ACTIONS(407),
    [sym__arrow_operator] = ACTIONS(407),
    [anon_sym_LF] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(407),
  },
  [307] = {
    [sym_argument_list] = STATE(43),
    [anon_sym_AMP_AMP] = ACTIONS(383),
    [anon_sym_LPAREN] = ACTIONS(443),
    [sym__plus_operator] = ACTIONS(385),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(387),
    [anon_sym_else] = ACTIONS(443),
    [sym__times_operator] = ACTIONS(391),
    [anon_sym_SEMI] = ACTIONS(443),
    [anon_sym_PIPE_PIPE] = ACTIONS(395),
    [anon_sym_EQ_GT] = ACTIONS(443),
    [anon_sym_LT_COLON] = ACTIONS(443),
    [anon_sym_elseif] = ACTIONS(443),
    [anon_sym_end] = ACTIONS(443),
    [sym__arrow_operator] = ACTIONS(403),
    [anon_sym_LF] = ACTIONS(445),
    [anon_sym_COLON_COLON] = ACTIONS(443),
  },
  [308] = {
    [sym_argument_list] = STATE(43),
    [aux_sym__expression_list_repeat1] = STATE(401),
    [anon_sym_AMP_AMP] = ACTIONS(227),
    [sym__times_operator] = ACTIONS(229),
    [anon_sym_SEMI] = ACTIONS(848),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LT_COLON] = ACTIONS(79),
    [sym__plus_operator] = ACTIONS(235),
    [sym__assign_operator] = ACTIONS(237),
    [anon_sym_end] = ACTIONS(850),
    [anon_sym_EQ_GT] = ACTIONS(239),
    [sym__arrow_operator] = ACTIONS(243),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LF] = ACTIONS(852),
    [anon_sym_COLON_COLON] = ACTIONS(79),
  },
  [309] = {
    [anon_sym_AMP_AMP] = ACTIONS(854),
    [anon_sym_LPAREN] = ACTIONS(854),
    [sym__plus_operator] = ACTIONS(854),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(854),
    [anon_sym_else] = ACTIONS(854),
    [sym__times_operator] = ACTIONS(854),
    [anon_sym_SEMI] = ACTIONS(854),
    [anon_sym_PIPE_PIPE] = ACTIONS(854),
    [ts_builtin_sym_end] = ACTIONS(856),
    [anon_sym_EQ_GT] = ACTIONS(854),
    [anon_sym_LT_COLON] = ACTIONS(854),
    [anon_sym_elseif] = ACTIONS(854),
    [anon_sym_end] = ACTIONS(854),
    [sym__arrow_operator] = ACTIONS(854),
    [anon_sym_LF] = ACTIONS(856),
    [anon_sym_COLON_COLON] = ACTIONS(854),
  },
  [310] = {
    [aux_sym_if_statement_repeat1] = STATE(317),
    [sym_elseif_clause] = STATE(317),
    [sym_else_clause] = STATE(403),
    [anon_sym_elseif] = ACTIONS(663),
    [anon_sym_end] = ACTIONS(858),
    [anon_sym_else] = ACTIONS(389),
    [sym_comment] = ACTIONS(3),
  },
  [311] = {
    [sym_argument_list] = STATE(43),
    [anon_sym_AMP_AMP] = ACTIONS(383),
    [anon_sym_LPAREN] = ACTIONS(77),
    [sym__plus_operator] = ACTIONS(385),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(387),
    [anon_sym_else] = ACTIONS(411),
    [sym__times_operator] = ACTIONS(391),
    [anon_sym_SEMI] = ACTIONS(411),
    [anon_sym_PIPE_PIPE] = ACTIONS(395),
    [anon_sym_EQ_GT] = ACTIONS(397),
    [anon_sym_LT_COLON] = ACTIONS(79),
    [anon_sym_elseif] = ACTIONS(411),
    [anon_sym_end] = ACTIONS(411),
    [sym__arrow_operator] = ACTIONS(403),
    [anon_sym_LF] = ACTIONS(413),
    [anon_sym_COLON_COLON] = ACTIONS(79),
  },
  [312] = {
    [anon_sym_end] = ACTIONS(858),
    [sym_comment] = ACTIONS(3),
  },
  [313] = {
    [sym_argument_list] = STATE(43),
    [anon_sym_AMP_AMP] = ACTIONS(407),
    [anon_sym_LPAREN] = ACTIONS(407),
    [sym__plus_operator] = ACTIONS(385),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(407),
    [anon_sym_else] = ACTIONS(407),
    [sym__times_operator] = ACTIONS(391),
    [anon_sym_SEMI] = ACTIONS(407),
    [anon_sym_PIPE_PIPE] = ACTIONS(407),
    [anon_sym_EQ_GT] = ACTIONS(407),
    [anon_sym_LT_COLON] = ACTIONS(407),
    [anon_sym_elseif] = ACTIONS(407),
    [anon_sym_end] = ACTIONS(407),
    [sym__arrow_operator] = ACTIONS(407),
    [anon_sym_LF] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(407),
  },
  [314] = {
    [sym_argument_list] = STATE(43),
    [anon_sym_AMP_AMP] = ACTIONS(383),
    [anon_sym_LPAREN] = ACTIONS(77),
    [sym__plus_operator] = ACTIONS(385),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(387),
    [anon_sym_else] = ACTIONS(447),
    [sym__times_operator] = ACTIONS(391),
    [anon_sym_SEMI] = ACTIONS(447),
    [anon_sym_PIPE_PIPE] = ACTIONS(395),
    [anon_sym_EQ_GT] = ACTIONS(397),
    [anon_sym_LT_COLON] = ACTIONS(79),
    [anon_sym_elseif] = ACTIONS(447),
    [anon_sym_end] = ACTIONS(447),
    [sym__arrow_operator] = ACTIONS(403),
    [anon_sym_LF] = ACTIONS(449),
    [anon_sym_COLON_COLON] = ACTIONS(79),
  },
  [315] = {
    [sym_function_definition] = STATE(404),
    [sym_struct_definition] = STATE(404),
    [sym_if_statement] = STATE(404),
    [sym__expression] = STATE(404),
    [sym_parenthesized_expression] = STATE(404),
    [sym_call_expression] = STATE(404),
    [sym_argument_list] = STATE(78),
    [sym_import_statement] = STATE(404),
    [sym_parameterized_identifier] = STATE(404),
    [sym_pair_expression] = STATE(404),
    [sym_module_definition] = STATE(404),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(404),
    [sym_assignment_expression] = STATE(404),
    [sym_binary_expression] = STATE(404),
    [anon_sym_AMP_AMP] = ACTIONS(165),
    [anon_sym_using] = ACTIONS(167),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(169),
    [sym__plus_operator] = ACTIONS(171),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(173),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_mutable] = ACTIONS(23),
    [anon_sym_module] = ACTIONS(5),
    [sym__times_operator] = ACTIONS(175),
    [anon_sym_PIPE_PIPE] = ACTIONS(177),
    [anon_sym_EQ_GT] = ACTIONS(179),
    [anon_sym_LT_COLON] = ACTIONS(141),
    [anon_sym_import] = ACTIONS(167),
    [sym__arrow_operator] = ACTIONS(181),
    [sym_string] = ACTIONS(860),
    [anon_sym_COLON_COLON] = ACTIONS(141),
    [sym_number] = ACTIONS(860),
  },
  [316] = {
    [sym_argument_list] = STATE(43),
    [anon_sym_AMP_AMP] = ACTIONS(383),
    [anon_sym_LPAREN] = ACTIONS(407),
    [sym__plus_operator] = ACTIONS(385),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(407),
    [anon_sym_else] = ACTIONS(407),
    [sym__times_operator] = ACTIONS(391),
    [anon_sym_SEMI] = ACTIONS(407),
    [anon_sym_PIPE_PIPE] = ACTIONS(395),
    [anon_sym_EQ_GT] = ACTIONS(407),
    [anon_sym_LT_COLON] = ACTIONS(407),
    [anon_sym_elseif] = ACTIONS(407),
    [anon_sym_end] = ACTIONS(407),
    [sym__arrow_operator] = ACTIONS(403),
    [anon_sym_LF] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(407),
  },
  [317] = {
    [aux_sym_if_statement_repeat1] = STATE(317),
    [sym_elseif_clause] = STATE(317),
    [anon_sym_elseif] = ACTIONS(862),
    [anon_sym_end] = ACTIONS(865),
    [anon_sym_else] = ACTIONS(867),
    [sym_comment] = ACTIONS(3),
  },
  [318] = {
    [aux_sym_if_statement_repeat1] = STATE(405),
    [sym_function_definition] = STATE(311),
    [sym_struct_definition] = STATE(311),
    [sym_if_statement] = STATE(311),
    [sym__expression] = STATE(311),
    [sym_parenthesized_expression] = STATE(311),
    [sym_call_expression] = STATE(311),
    [sym_import_statement] = STATE(311),
    [sym_parameterized_identifier] = STATE(311),
    [sym_pair_expression] = STATE(311),
    [sym_module_definition] = STATE(311),
    [sym_elseif_clause] = STATE(405),
    [sym_else_clause] = STATE(403),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(311),
    [sym_assignment_expression] = STATE(311),
    [sym_binary_expression] = STATE(311),
    [anon_sym_using] = ACTIONS(167),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_else] = ACTIONS(389),
    [anon_sym_mutable] = ACTIONS(23),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(167),
    [anon_sym_elseif] = ACTIONS(399),
    [anon_sym_end] = ACTIONS(869),
    [sym_string] = ACTIONS(649),
    [sym_number] = ACTIONS(649),
  },
  [319] = {
    [aux_sym__expression_list_repeat1] = STATE(319),
    [anon_sym_elseif] = ACTIONS(411),
    [anon_sym_end] = ACTIONS(411),
    [anon_sym_SEMI] = ACTIONS(871),
    [anon_sym_else] = ACTIONS(411),
    [anon_sym_LF] = ACTIONS(874),
    [sym_comment] = ACTIONS(53),
  },
  [320] = {
    [sym_function_definition] = STATE(407),
    [sym_struct_definition] = STATE(407),
    [sym_parameterized_identifier] = STATE(407),
    [sym_if_statement] = STATE(407),
    [sym_pair_expression] = STATE(407),
    [sym_parenthesized_expression] = STATE(407),
    [sym_module_definition] = STATE(407),
    [sym_call_expression] = STATE(407),
    [sym__expression] = STATE(407),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(407),
    [sym_assignment_expression] = STATE(407),
    [sym_binary_expression] = STATE(407),
    [sym_import_statement] = STATE(407),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(777),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(877),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(877),
  },
  [321] = {
    [sym_identifier] = ACTIONS(879),
    [sym_comment] = ACTIONS(3),
  },
  [322] = {
    [sym_argument_list] = STATE(78),
    [anon_sym_AMP_AMP] = ACTIONS(409),
    [sym__times_operator] = ACTIONS(423),
    [anon_sym_PIPE_PIPE] = ACTIONS(425),
    [anon_sym_LPAREN] = ACTIONS(409),
    [anon_sym_LT_COLON] = ACTIONS(409),
    [anon_sym_EQ_GT] = ACTIONS(409),
    [sym__plus_operator] = ACTIONS(427),
    [sym__assign_operator] = ACTIONS(407),
    [anon_sym_COMMA] = ACTIONS(409),
    [sym__arrow_operator] = ACTIONS(409),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(409),
    [anon_sym_RPAREN] = ACTIONS(409),
  },
  [323] = {
    [sym_argument_list] = STATE(78),
    [anon_sym_AMP_AMP] = ACTIONS(409),
    [sym__times_operator] = ACTIONS(423),
    [anon_sym_PIPE_PIPE] = ACTIONS(407),
    [anon_sym_LPAREN] = ACTIONS(409),
    [anon_sym_LT_COLON] = ACTIONS(409),
    [anon_sym_EQ_GT] = ACTIONS(409),
    [sym__plus_operator] = ACTIONS(427),
    [sym__assign_operator] = ACTIONS(407),
    [anon_sym_COMMA] = ACTIONS(409),
    [sym__arrow_operator] = ACTIONS(409),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(409),
    [anon_sym_RPAREN] = ACTIONS(409),
  },
  [324] = {
    [sym_argument_list] = STATE(78),
    [anon_sym_AMP_AMP] = ACTIONS(409),
    [sym__times_operator] = ACTIONS(423),
    [anon_sym_PIPE_PIPE] = ACTIONS(407),
    [anon_sym_LPAREN] = ACTIONS(409),
    [anon_sym_LT_COLON] = ACTIONS(409),
    [anon_sym_EQ_GT] = ACTIONS(409),
    [sym__plus_operator] = ACTIONS(407),
    [sym__assign_operator] = ACTIONS(407),
    [anon_sym_COMMA] = ACTIONS(409),
    [sym__arrow_operator] = ACTIONS(409),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(409),
    [anon_sym_RPAREN] = ACTIONS(409),
  },
  [325] = {
    [sym_argument_list] = STATE(78),
    [anon_sym_AMP_AMP] = ACTIONS(421),
    [sym__times_operator] = ACTIONS(423),
    [anon_sym_PIPE_PIPE] = ACTIONS(425),
    [anon_sym_LPAREN] = ACTIONS(445),
    [anon_sym_LT_COLON] = ACTIONS(445),
    [anon_sym_EQ_GT] = ACTIONS(445),
    [sym__plus_operator] = ACTIONS(427),
    [sym__assign_operator] = ACTIONS(429),
    [anon_sym_COMMA] = ACTIONS(445),
    [sym__arrow_operator] = ACTIONS(435),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(445),
    [anon_sym_RPAREN] = ACTIONS(445),
  },
  [326] = {
    [sym_argument_list] = STATE(78),
    [anon_sym_AMP_AMP] = ACTIONS(421),
    [sym__times_operator] = ACTIONS(423),
    [anon_sym_PIPE_PIPE] = ACTIONS(425),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_LT_COLON] = ACTIONS(141),
    [anon_sym_EQ_GT] = ACTIONS(431),
    [sym__plus_operator] = ACTIONS(427),
    [sym__assign_operator] = ACTIONS(429),
    [anon_sym_COMMA] = ACTIONS(449),
    [sym__arrow_operator] = ACTIONS(435),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(141),
    [anon_sym_RPAREN] = ACTIONS(449),
  },
  [327] = {
    [sym_argument_list] = STATE(78),
    [anon_sym_AMP_AMP] = ACTIONS(421),
    [sym__times_operator] = ACTIONS(423),
    [anon_sym_PIPE_PIPE] = ACTIONS(425),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_LT_COLON] = ACTIONS(141),
    [sym__plus_operator] = ACTIONS(427),
    [sym__assign_operator] = ACTIONS(429),
    [anon_sym_EQ_GT] = ACTIONS(431),
    [anon_sym_COMMA] = ACTIONS(881),
    [sym__arrow_operator] = ACTIONS(435),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(141),
    [anon_sym_RPAREN] = ACTIONS(881),
  },
  [328] = {
    [sym_argument_list] = STATE(78),
    [anon_sym_AMP_AMP] = ACTIONS(421),
    [sym__times_operator] = ACTIONS(423),
    [anon_sym_PIPE_PIPE] = ACTIONS(425),
    [anon_sym_LPAREN] = ACTIONS(409),
    [anon_sym_LT_COLON] = ACTIONS(409),
    [anon_sym_EQ_GT] = ACTIONS(409),
    [sym__plus_operator] = ACTIONS(427),
    [sym__assign_operator] = ACTIONS(407),
    [anon_sym_COMMA] = ACTIONS(409),
    [sym__arrow_operator] = ACTIONS(435),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(409),
    [anon_sym_RPAREN] = ACTIONS(409),
  },
  [329] = {
    [anon_sym_AMP_AMP] = ACTIONS(883),
    [anon_sym_LPAREN] = ACTIONS(883),
    [sym__plus_operator] = ACTIONS(883),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(883),
    [anon_sym_else] = ACTIONS(883),
    [sym__times_operator] = ACTIONS(883),
    [anon_sym_SEMI] = ACTIONS(883),
    [anon_sym_PIPE_PIPE] = ACTIONS(883),
    [ts_builtin_sym_end] = ACTIONS(885),
    [anon_sym_EQ_GT] = ACTIONS(883),
    [anon_sym_LT_COLON] = ACTIONS(883),
    [anon_sym_elseif] = ACTIONS(883),
    [anon_sym_end] = ACTIONS(883),
    [sym__arrow_operator] = ACTIONS(883),
    [anon_sym_LF] = ACTIONS(885),
    [anon_sym_COLON_COLON] = ACTIONS(883),
  },
  [330] = {
    [aux_sym_argument_list_repeat1] = STATE(330),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(887),
    [anon_sym_RPAREN] = ACTIONS(881),
  },
  [331] = {
    [aux_sym_parameter_list_repeat1] = STATE(409),
    [anon_sym_AMP_AMP] = ACTIONS(485),
    [anon_sym_LPAREN] = ACTIONS(485),
    [sym__plus_operator] = ACTIONS(485),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(485),
    [sym__times_operator] = ACTIONS(485),
    [anon_sym_SEMI] = ACTIONS(485),
    [anon_sym_PIPE_PIPE] = ACTIONS(485),
    [anon_sym_EQ_GT] = ACTIONS(485),
    [anon_sym_LT_COLON] = ACTIONS(485),
    [anon_sym_end] = ACTIONS(485),
    [anon_sym_COMMA] = ACTIONS(489),
    [sym__arrow_operator] = ACTIONS(485),
    [anon_sym_LF] = ACTIONS(487),
    [anon_sym_COLON_COLON] = ACTIONS(485),
  },
  [332] = {
    [anon_sym_AMP_AMP] = ACTIONS(890),
    [anon_sym_LPAREN] = ACTIONS(890),
    [sym__plus_operator] = ACTIONS(890),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(890),
    [anon_sym_else] = ACTIONS(890),
    [sym__times_operator] = ACTIONS(890),
    [anon_sym_SEMI] = ACTIONS(890),
    [anon_sym_PIPE_PIPE] = ACTIONS(890),
    [ts_builtin_sym_end] = ACTIONS(892),
    [anon_sym_EQ_GT] = ACTIONS(890),
    [anon_sym_LT_COLON] = ACTIONS(890),
    [anon_sym_elseif] = ACTIONS(890),
    [anon_sym_end] = ACTIONS(890),
    [sym__arrow_operator] = ACTIONS(890),
    [anon_sym_LF] = ACTIONS(892),
    [anon_sym_COLON_COLON] = ACTIONS(890),
  },
  [333] = {
    [sym_function_definition] = STATE(219),
    [sym_struct_definition] = STATE(219),
    [sym_parameterized_identifier] = STATE(219),
    [sym_if_statement] = STATE(219),
    [sym_pair_expression] = STATE(219),
    [sym_parenthesized_expression] = STATE(219),
    [sym_module_definition] = STATE(219),
    [sym_call_expression] = STATE(219),
    [sym__expression] = STATE(219),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(219),
    [sym_assignment_expression] = STATE(219),
    [sym_binary_expression] = STATE(219),
    [sym_import_statement] = STATE(219),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(465),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(465),
  },
  [334] = {
    [anon_sym_AMP_AMP] = ACTIONS(894),
    [anon_sym_LPAREN] = ACTIONS(894),
    [sym__plus_operator] = ACTIONS(894),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(894),
    [anon_sym_else] = ACTIONS(894),
    [sym__times_operator] = ACTIONS(894),
    [anon_sym_SEMI] = ACTIONS(894),
    [anon_sym_PIPE_PIPE] = ACTIONS(894),
    [ts_builtin_sym_end] = ACTIONS(896),
    [anon_sym_EQ_GT] = ACTIONS(894),
    [anon_sym_LT_COLON] = ACTIONS(894),
    [anon_sym_elseif] = ACTIONS(894),
    [anon_sym_end] = ACTIONS(894),
    [anon_sym_COMMA] = ACTIONS(894),
    [sym__arrow_operator] = ACTIONS(894),
    [anon_sym_LF] = ACTIONS(896),
    [anon_sym_COLON_COLON] = ACTIONS(894),
  },
  [335] = {
    [aux_sym_parameter_list_repeat1] = STATE(335),
    [anon_sym_AMP_AMP] = ACTIONS(894),
    [anon_sym_LPAREN] = ACTIONS(894),
    [sym__plus_operator] = ACTIONS(894),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(894),
    [sym__times_operator] = ACTIONS(894),
    [anon_sym_SEMI] = ACTIONS(894),
    [anon_sym_PIPE_PIPE] = ACTIONS(894),
    [ts_builtin_sym_end] = ACTIONS(896),
    [anon_sym_EQ_GT] = ACTIONS(894),
    [anon_sym_LT_COLON] = ACTIONS(894),
    [anon_sym_COMMA] = ACTIONS(898),
    [sym__arrow_operator] = ACTIONS(894),
    [anon_sym_LF] = ACTIONS(896),
    [anon_sym_COLON_COLON] = ACTIONS(894),
  },
  [336] = {
    [anon_sym_AMP_AMP] = ACTIONS(225),
    [anon_sym_using] = ACTIONS(223),
    [anon_sym_struct] = ACTIONS(223),
    [anon_sym_function] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(225),
    [sym__plus_operator] = ACTIONS(223),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(223),
    [sym_identifier] = ACTIONS(223),
    [anon_sym_if] = ACTIONS(223),
    [anon_sym_mutable] = ACTIONS(223),
    [anon_sym_module] = ACTIONS(223),
    [sym__times_operator] = ACTIONS(223),
    [anon_sym_PIPE_PIPE] = ACTIONS(223),
    [anon_sym_EQ_GT] = ACTIONS(225),
    [anon_sym_LT_COLON] = ACTIONS(225),
    [anon_sym_import] = ACTIONS(223),
    [anon_sym_end] = ACTIONS(223),
    [sym__arrow_operator] = ACTIONS(225),
    [sym_string] = ACTIONS(225),
    [anon_sym_COLON_COLON] = ACTIONS(225),
    [sym_number] = ACTIONS(225),
  },
  [337] = {
    [sym_argument_list] = STATE(43),
    [aux_sym__expression_list_repeat1] = STATE(412),
    [anon_sym_AMP_AMP] = ACTIONS(227),
    [sym__times_operator] = ACTIONS(229),
    [anon_sym_SEMI] = ACTIONS(901),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LT_COLON] = ACTIONS(79),
    [sym__plus_operator] = ACTIONS(235),
    [sym__assign_operator] = ACTIONS(237),
    [anon_sym_EQ_GT] = ACTIONS(239),
    [anon_sym_end] = ACTIONS(903),
    [sym__arrow_operator] = ACTIONS(243),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LF] = ACTIONS(905),
    [anon_sym_COLON_COLON] = ACTIONS(79),
  },
  [338] = {
    [sym_identifier] = ACTIONS(907),
    [sym_comment] = ACTIONS(3),
  },
  [339] = {
    [anon_sym_AMP_AMP] = ACTIONS(251),
    [anon_sym_using] = ACTIONS(249),
    [anon_sym_struct] = ACTIONS(249),
    [anon_sym_function] = ACTIONS(249),
    [anon_sym_LPAREN] = ACTIONS(251),
    [sym__plus_operator] = ACTIONS(249),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(249),
    [sym_identifier] = ACTIONS(249),
    [anon_sym_if] = ACTIONS(249),
    [anon_sym_mutable] = ACTIONS(249),
    [anon_sym_module] = ACTIONS(249),
    [sym__times_operator] = ACTIONS(249),
    [anon_sym_PIPE_PIPE] = ACTIONS(249),
    [anon_sym_EQ_GT] = ACTIONS(251),
    [anon_sym_LT_COLON] = ACTIONS(251),
    [anon_sym_import] = ACTIONS(249),
    [anon_sym_end] = ACTIONS(249),
    [sym__arrow_operator] = ACTIONS(251),
    [sym_string] = ACTIONS(251),
    [anon_sym_COLON_COLON] = ACTIONS(251),
    [sym_number] = ACTIONS(251),
  },
  [340] = {
    [anon_sym_AMP_AMP] = ACTIONS(273),
    [anon_sym_using] = ACTIONS(271),
    [anon_sym_struct] = ACTIONS(271),
    [anon_sym_function] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(273),
    [sym__plus_operator] = ACTIONS(271),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(271),
    [sym_identifier] = ACTIONS(271),
    [anon_sym_if] = ACTIONS(271),
    [anon_sym_mutable] = ACTIONS(271),
    [anon_sym_module] = ACTIONS(271),
    [sym__times_operator] = ACTIONS(271),
    [anon_sym_PIPE_PIPE] = ACTIONS(271),
    [anon_sym_EQ_GT] = ACTIONS(273),
    [anon_sym_LT_COLON] = ACTIONS(273),
    [anon_sym_import] = ACTIONS(271),
    [anon_sym_end] = ACTIONS(271),
    [sym__arrow_operator] = ACTIONS(273),
    [sym_string] = ACTIONS(273),
    [anon_sym_COLON_COLON] = ACTIONS(273),
    [sym_number] = ACTIONS(273),
  },
  [341] = {
    [sym_argument_list] = STATE(43),
    [aux_sym__expression_list_repeat1] = STATE(416),
    [anon_sym_AMP_AMP] = ACTIONS(227),
    [sym__times_operator] = ACTIONS(229),
    [anon_sym_SEMI] = ACTIONS(909),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LT_COLON] = ACTIONS(79),
    [sym__plus_operator] = ACTIONS(235),
    [sym__assign_operator] = ACTIONS(237),
    [anon_sym_EQ_GT] = ACTIONS(239),
    [anon_sym_end] = ACTIONS(911),
    [sym__arrow_operator] = ACTIONS(243),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LF] = ACTIONS(913),
    [anon_sym_COLON_COLON] = ACTIONS(79),
  },
  [342] = {
    [sym_function_definition] = STATE(417),
    [sym_struct_definition] = STATE(417),
    [sym_if_statement] = STATE(417),
    [sym__expression] = STATE(417),
    [sym_parenthesized_expression] = STATE(417),
    [sym_call_expression] = STATE(417),
    [sym_subtype_clause] = STATE(418),
    [sym_import_statement] = STATE(417),
    [sym_parameterized_identifier] = STATE(417),
    [sym_pair_expression] = STATE(417),
    [sym_module_definition] = STATE(417),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(417),
    [sym_assignment_expression] = STATE(417),
    [sym_binary_expression] = STATE(417),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LT_COLON] = ACTIONS(107),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(911),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(915),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(915),
  },
  [343] = {
    [sym_function_definition] = STATE(417),
    [sym_struct_definition] = STATE(417),
    [sym_parameterized_identifier] = STATE(417),
    [sym_if_statement] = STATE(417),
    [sym_pair_expression] = STATE(417),
    [sym_parenthesized_expression] = STATE(417),
    [sym_module_definition] = STATE(417),
    [sym_call_expression] = STATE(417),
    [sym__expression] = STATE(417),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(417),
    [sym_assignment_expression] = STATE(417),
    [sym_binary_expression] = STATE(417),
    [sym_import_statement] = STATE(417),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(911),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(915),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(915),
  },
  [344] = {
    [sym_function_definition] = STATE(420),
    [sym_struct_definition] = STATE(420),
    [sym_parameterized_identifier] = STATE(420),
    [sym_if_statement] = STATE(420),
    [sym_pair_expression] = STATE(420),
    [sym_parenthesized_expression] = STATE(420),
    [sym_module_definition] = STATE(420),
    [sym_call_expression] = STATE(420),
    [sym__expression] = STATE(420),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(420),
    [sym_assignment_expression] = STATE(420),
    [sym_binary_expression] = STATE(420),
    [sym_import_statement] = STATE(420),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(917),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(919),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(919),
  },
  [345] = {
    [anon_sym_AMP_AMP] = ACTIONS(339),
    [anon_sym_using] = ACTIONS(337),
    [anon_sym_struct] = ACTIONS(337),
    [anon_sym_function] = ACTIONS(337),
    [anon_sym_LPAREN] = ACTIONS(339),
    [sym__plus_operator] = ACTIONS(337),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(337),
    [sym_identifier] = ACTIONS(337),
    [anon_sym_if] = ACTIONS(337),
    [anon_sym_mutable] = ACTIONS(337),
    [anon_sym_module] = ACTIONS(337),
    [sym__times_operator] = ACTIONS(337),
    [anon_sym_PIPE_PIPE] = ACTIONS(337),
    [anon_sym_EQ_GT] = ACTIONS(339),
    [anon_sym_LT_COLON] = ACTIONS(339),
    [anon_sym_import] = ACTIONS(337),
    [anon_sym_end] = ACTIONS(337),
    [sym__arrow_operator] = ACTIONS(339),
    [sym_string] = ACTIONS(339),
    [anon_sym_COLON_COLON] = ACTIONS(339),
    [sym_number] = ACTIONS(339),
  },
  [346] = {
    [sym_argument_list] = STATE(78),
    [aux_sym_type_argument_list_repeat1] = STATE(422),
    [anon_sym_AMP_AMP] = ACTIONS(343),
    [sym__times_operator] = ACTIONS(345),
    [anon_sym_RBRACE] = ACTIONS(921),
    [anon_sym_PIPE_PIPE] = ACTIONS(349),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_LT_COLON] = ACTIONS(141),
    [sym__plus_operator] = ACTIONS(351),
    [sym__assign_operator] = ACTIONS(353),
    [anon_sym_EQ_GT] = ACTIONS(355),
    [anon_sym_COMMA] = ACTIONS(357),
    [sym__arrow_operator] = ACTIONS(359),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(141),
  },
  [347] = {
    [anon_sym_AMP_AMP] = ACTIONS(363),
    [anon_sym_using] = ACTIONS(361),
    [anon_sym_struct] = ACTIONS(361),
    [anon_sym_function] = ACTIONS(361),
    [anon_sym_LPAREN] = ACTIONS(363),
    [sym__plus_operator] = ACTIONS(361),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(361),
    [anon_sym_DOT] = ACTIONS(361),
    [sym_identifier] = ACTIONS(361),
    [anon_sym_if] = ACTIONS(361),
    [anon_sym_mutable] = ACTIONS(361),
    [anon_sym_module] = ACTIONS(361),
    [sym__times_operator] = ACTIONS(361),
    [anon_sym_PIPE_PIPE] = ACTIONS(361),
    [anon_sym_COLON] = ACTIONS(361),
    [anon_sym_EQ_GT] = ACTIONS(363),
    [anon_sym_LT_COLON] = ACTIONS(363),
    [anon_sym_import] = ACTIONS(361),
    [anon_sym_end] = ACTIONS(361),
    [sym__arrow_operator] = ACTIONS(363),
    [sym_string] = ACTIONS(363),
    [anon_sym_COLON_COLON] = ACTIONS(363),
    [sym_number] = ACTIONS(363),
  },
  [348] = {
    [aux_sym_if_statement_repeat1] = STATE(425),
    [aux_sym__expression_list_repeat1] = STATE(426),
    [sym_elseif_clause] = STATE(425),
    [sym_argument_list] = STATE(43),
    [sym_else_clause] = STATE(427),
    [anon_sym_AMP_AMP] = ACTIONS(383),
    [anon_sym_LPAREN] = ACTIONS(77),
    [sym__plus_operator] = ACTIONS(385),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(387),
    [anon_sym_else] = ACTIONS(389),
    [sym__times_operator] = ACTIONS(391),
    [anon_sym_SEMI] = ACTIONS(923),
    [anon_sym_PIPE_PIPE] = ACTIONS(395),
    [anon_sym_EQ_GT] = ACTIONS(397),
    [anon_sym_LT_COLON] = ACTIONS(79),
    [anon_sym_elseif] = ACTIONS(399),
    [anon_sym_end] = ACTIONS(925),
    [sym__arrow_operator] = ACTIONS(403),
    [anon_sym_LF] = ACTIONS(927),
    [anon_sym_COLON_COLON] = ACTIONS(79),
  },
  [349] = {
    [sym_function_definition] = STATE(417),
    [sym_struct_definition] = STATE(417),
    [sym_if_statement] = STATE(417),
    [sym__expression] = STATE(417),
    [sym_parenthesized_expression] = STATE(417),
    [sym_call_expression] = STATE(417),
    [sym_type_parameter_list] = STATE(428),
    [sym_subtype_clause] = STATE(418),
    [sym_import_statement] = STATE(417),
    [sym_parameterized_identifier] = STATE(417),
    [sym_pair_expression] = STATE(417),
    [sym_module_definition] = STATE(417),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(417),
    [sym_assignment_expression] = STATE(417),
    [sym_binary_expression] = STATE(417),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_mutable] = ACTIONS(23),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_LT_COLON] = ACTIONS(107),
    [anon_sym_import] = ACTIONS(93),
    [anon_sym_end] = ACTIONS(911),
    [sym_string] = ACTIONS(915),
    [sym_number] = ACTIONS(915),
  },
  [350] = {
    [sym_argument_list] = STATE(248),
    [anon_sym_AMP_AMP] = ACTIONS(409),
    [anon_sym_using] = ACTIONS(407),
    [anon_sym_struct] = ACTIONS(407),
    [anon_sym_function] = ACTIONS(407),
    [anon_sym_LPAREN] = ACTIONS(409),
    [sym__plus_operator] = ACTIONS(515),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(407),
    [sym_identifier] = ACTIONS(407),
    [anon_sym_if] = ACTIONS(407),
    [anon_sym_mutable] = ACTIONS(407),
    [anon_sym_module] = ACTIONS(407),
    [sym__times_operator] = ACTIONS(519),
    [anon_sym_PIPE_PIPE] = ACTIONS(521),
    [anon_sym_EQ_GT] = ACTIONS(409),
    [anon_sym_LT_COLON] = ACTIONS(409),
    [anon_sym_import] = ACTIONS(407),
    [anon_sym_end] = ACTIONS(407),
    [sym__arrow_operator] = ACTIONS(409),
    [sym_string] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(409),
    [sym_number] = ACTIONS(409),
  },
  [351] = {
    [sym_argument_list] = STATE(248),
    [anon_sym_AMP_AMP] = ACTIONS(409),
    [anon_sym_using] = ACTIONS(407),
    [anon_sym_struct] = ACTIONS(407),
    [anon_sym_function] = ACTIONS(407),
    [anon_sym_LPAREN] = ACTIONS(409),
    [sym__plus_operator] = ACTIONS(407),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(407),
    [sym_identifier] = ACTIONS(407),
    [anon_sym_if] = ACTIONS(407),
    [anon_sym_mutable] = ACTIONS(407),
    [anon_sym_module] = ACTIONS(407),
    [sym__times_operator] = ACTIONS(407),
    [anon_sym_PIPE_PIPE] = ACTIONS(407),
    [anon_sym_EQ_GT] = ACTIONS(409),
    [anon_sym_LT_COLON] = ACTIONS(409),
    [anon_sym_import] = ACTIONS(407),
    [anon_sym_end] = ACTIONS(407),
    [sym__arrow_operator] = ACTIONS(409),
    [sym_string] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(409),
    [sym_number] = ACTIONS(409),
  },
  [352] = {
    [sym_argument_list] = STATE(248),
    [anon_sym_AMP_AMP] = ACTIONS(409),
    [anon_sym_using] = ACTIONS(407),
    [anon_sym_struct] = ACTIONS(407),
    [anon_sym_function] = ACTIONS(407),
    [anon_sym_LPAREN] = ACTIONS(409),
    [sym__plus_operator] = ACTIONS(515),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(407),
    [sym_identifier] = ACTIONS(407),
    [anon_sym_if] = ACTIONS(407),
    [anon_sym_mutable] = ACTIONS(407),
    [anon_sym_module] = ACTIONS(407),
    [sym__times_operator] = ACTIONS(519),
    [anon_sym_PIPE_PIPE] = ACTIONS(407),
    [anon_sym_EQ_GT] = ACTIONS(409),
    [anon_sym_LT_COLON] = ACTIONS(409),
    [anon_sym_import] = ACTIONS(407),
    [anon_sym_end] = ACTIONS(407),
    [sym__arrow_operator] = ACTIONS(409),
    [sym_string] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(409),
    [sym_number] = ACTIONS(409),
  },
  [353] = {
    [anon_sym_AMP_AMP] = ACTIONS(417),
    [anon_sym_using] = ACTIONS(415),
    [anon_sym_struct] = ACTIONS(415),
    [anon_sym_function] = ACTIONS(415),
    [anon_sym_LPAREN] = ACTIONS(417),
    [sym__plus_operator] = ACTIONS(415),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(415),
    [sym_identifier] = ACTIONS(415),
    [anon_sym_if] = ACTIONS(415),
    [anon_sym_mutable] = ACTIONS(415),
    [anon_sym_module] = ACTIONS(415),
    [sym__times_operator] = ACTIONS(415),
    [anon_sym_PIPE_PIPE] = ACTIONS(415),
    [anon_sym_EQ_GT] = ACTIONS(417),
    [anon_sym_LT_COLON] = ACTIONS(417),
    [anon_sym_import] = ACTIONS(415),
    [anon_sym_end] = ACTIONS(415),
    [sym__arrow_operator] = ACTIONS(417),
    [sym_string] = ACTIONS(417),
    [anon_sym_COLON_COLON] = ACTIONS(417),
    [sym_number] = ACTIONS(417),
  },
  [354] = {
    [sym_argument_list] = STATE(78),
    [aux_sym_argument_list_repeat1] = STATE(429),
    [anon_sym_AMP_AMP] = ACTIONS(421),
    [sym__times_operator] = ACTIONS(423),
    [anon_sym_PIPE_PIPE] = ACTIONS(425),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_LT_COLON] = ACTIONS(141),
    [sym__plus_operator] = ACTIONS(427),
    [sym__assign_operator] = ACTIONS(429),
    [anon_sym_EQ_GT] = ACTIONS(431),
    [anon_sym_COMMA] = ACTIONS(433),
    [sym__arrow_operator] = ACTIONS(435),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(141),
    [anon_sym_RPAREN] = ACTIONS(607),
  },
  [355] = {
    [sym_type_argument_list] = STATE(236),
    [anon_sym_AMP_AMP] = ACTIONS(441),
    [anon_sym_using] = ACTIONS(439),
    [anon_sym_struct] = ACTIONS(439),
    [anon_sym_function] = ACTIONS(439),
    [anon_sym_LPAREN] = ACTIONS(441),
    [sym__plus_operator] = ACTIONS(439),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(439),
    [sym_identifier] = ACTIONS(439),
    [anon_sym_if] = ACTIONS(439),
    [anon_sym_LBRACE] = ACTIONS(503),
    [anon_sym_mutable] = ACTIONS(439),
    [anon_sym_module] = ACTIONS(439),
    [sym__times_operator] = ACTIONS(439),
    [anon_sym_PIPE_PIPE] = ACTIONS(439),
    [anon_sym_EQ_GT] = ACTIONS(441),
    [anon_sym_LT_COLON] = ACTIONS(441),
    [anon_sym_import] = ACTIONS(439),
    [anon_sym_end] = ACTIONS(439),
    [sym__arrow_operator] = ACTIONS(441),
    [sym_string] = ACTIONS(441),
    [anon_sym_COLON_COLON] = ACTIONS(441),
    [sym_number] = ACTIONS(441),
  },
  [356] = {
    [anon_sym_AMP_AMP] = ACTIONS(441),
    [anon_sym_using] = ACTIONS(439),
    [anon_sym_struct] = ACTIONS(439),
    [anon_sym_function] = ACTIONS(439),
    [anon_sym_LPAREN] = ACTIONS(441),
    [sym__plus_operator] = ACTIONS(439),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(439),
    [sym_identifier] = ACTIONS(439),
    [anon_sym_if] = ACTIONS(439),
    [anon_sym_mutable] = ACTIONS(439),
    [anon_sym_module] = ACTIONS(439),
    [sym__times_operator] = ACTIONS(439),
    [anon_sym_PIPE_PIPE] = ACTIONS(439),
    [anon_sym_EQ_GT] = ACTIONS(441),
    [anon_sym_LT_COLON] = ACTIONS(441),
    [anon_sym_import] = ACTIONS(439),
    [anon_sym_end] = ACTIONS(439),
    [sym__arrow_operator] = ACTIONS(441),
    [sym_string] = ACTIONS(441),
    [anon_sym_COLON_COLON] = ACTIONS(441),
    [sym_number] = ACTIONS(441),
  },
  [357] = {
    [sym_argument_list] = STATE(248),
    [anon_sym_AMP_AMP] = ACTIONS(409),
    [anon_sym_using] = ACTIONS(407),
    [anon_sym_struct] = ACTIONS(407),
    [anon_sym_function] = ACTIONS(407),
    [anon_sym_LPAREN] = ACTIONS(409),
    [sym__plus_operator] = ACTIONS(407),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(407),
    [sym_identifier] = ACTIONS(407),
    [anon_sym_if] = ACTIONS(407),
    [anon_sym_mutable] = ACTIONS(407),
    [anon_sym_module] = ACTIONS(407),
    [sym__times_operator] = ACTIONS(519),
    [anon_sym_PIPE_PIPE] = ACTIONS(407),
    [anon_sym_EQ_GT] = ACTIONS(409),
    [anon_sym_LT_COLON] = ACTIONS(409),
    [anon_sym_import] = ACTIONS(407),
    [anon_sym_end] = ACTIONS(407),
    [sym__arrow_operator] = ACTIONS(409),
    [sym_string] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(409),
    [sym_number] = ACTIONS(409),
  },
  [358] = {
    [sym_argument_list] = STATE(248),
    [anon_sym_AMP_AMP] = ACTIONS(509),
    [anon_sym_using] = ACTIONS(443),
    [anon_sym_struct] = ACTIONS(443),
    [anon_sym_function] = ACTIONS(443),
    [anon_sym_LPAREN] = ACTIONS(445),
    [sym__plus_operator] = ACTIONS(515),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(517),
    [sym_identifier] = ACTIONS(443),
    [anon_sym_if] = ACTIONS(443),
    [anon_sym_mutable] = ACTIONS(443),
    [anon_sym_module] = ACTIONS(443),
    [sym__times_operator] = ACTIONS(519),
    [anon_sym_PIPE_PIPE] = ACTIONS(521),
    [anon_sym_EQ_GT] = ACTIONS(445),
    [anon_sym_LT_COLON] = ACTIONS(445),
    [anon_sym_import] = ACTIONS(443),
    [anon_sym_end] = ACTIONS(443),
    [sym__arrow_operator] = ACTIONS(527),
    [sym_string] = ACTIONS(445),
    [anon_sym_COLON_COLON] = ACTIONS(445),
    [sym_number] = ACTIONS(445),
  },
  [359] = {
    [sym_argument_list] = STATE(248),
    [anon_sym_AMP_AMP] = ACTIONS(509),
    [anon_sym_using] = ACTIONS(447),
    [anon_sym_struct] = ACTIONS(447),
    [anon_sym_function] = ACTIONS(447),
    [anon_sym_LPAREN] = ACTIONS(929),
    [sym__plus_operator] = ACTIONS(515),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(517),
    [sym_identifier] = ACTIONS(447),
    [anon_sym_if] = ACTIONS(447),
    [anon_sym_mutable] = ACTIONS(447),
    [anon_sym_module] = ACTIONS(447),
    [sym__times_operator] = ACTIONS(519),
    [anon_sym_PIPE_PIPE] = ACTIONS(521),
    [anon_sym_EQ_GT] = ACTIONS(523),
    [anon_sym_LT_COLON] = ACTIONS(525),
    [anon_sym_import] = ACTIONS(447),
    [anon_sym_end] = ACTIONS(447),
    [sym__arrow_operator] = ACTIONS(527),
    [sym_string] = ACTIONS(449),
    [anon_sym_COLON_COLON] = ACTIONS(525),
    [sym_number] = ACTIONS(449),
  },
  [360] = {
    [sym_argument_list] = STATE(248),
    [anon_sym_AMP_AMP] = ACTIONS(509),
    [anon_sym_using] = ACTIONS(407),
    [anon_sym_struct] = ACTIONS(407),
    [anon_sym_function] = ACTIONS(407),
    [anon_sym_LPAREN] = ACTIONS(409),
    [sym__plus_operator] = ACTIONS(515),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(407),
    [sym_identifier] = ACTIONS(407),
    [anon_sym_if] = ACTIONS(407),
    [anon_sym_mutable] = ACTIONS(407),
    [anon_sym_module] = ACTIONS(407),
    [sym__times_operator] = ACTIONS(519),
    [anon_sym_PIPE_PIPE] = ACTIONS(521),
    [anon_sym_EQ_GT] = ACTIONS(409),
    [anon_sym_LT_COLON] = ACTIONS(409),
    [anon_sym_import] = ACTIONS(407),
    [anon_sym_end] = ACTIONS(407),
    [sym__arrow_operator] = ACTIONS(527),
    [sym_string] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(409),
    [sym_number] = ACTIONS(409),
  },
  [361] = {
    [sym_identifier] = ACTIONS(931),
    [sym_comment] = ACTIONS(3),
  },
  [362] = {
    [sym_type_argument_list] = STATE(65),
    [anon_sym_AMP_AMP] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(933),
    [anon_sym_LPAREN] = ACTIONS(59),
    [sym__plus_operator] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(127),
    [sym__times_operator] = ACTIONS(51),
    [anon_sym_PIPE_PIPE] = ACTIONS(51),
    [anon_sym_EQ_GT] = ACTIONS(59),
    [anon_sym_LT_COLON] = ACTIONS(59),
    [anon_sym_COMMA] = ACTIONS(933),
    [sym__arrow_operator] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(59),
  },
  [363] = {
    [anon_sym_AMP_AMP] = ACTIONS(59),
    [sym__times_operator] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(933),
    [anon_sym_PIPE_PIPE] = ACTIONS(51),
    [anon_sym_EQ_GT] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_LT_COLON] = ACTIONS(59),
    [sym__plus_operator] = ACTIONS(51),
    [sym__assign_operator] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(933),
    [sym__arrow_operator] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(59),
  },
  [364] = {
    [anon_sym_module] = ACTIONS(935),
    [anon_sym_using] = ACTIONS(935),
    [anon_sym_struct] = ACTIONS(935),
    [anon_sym_function] = ACTIONS(935),
    [anon_sym_LPAREN] = ACTIONS(937),
    [anon_sym_LT_COLON] = ACTIONS(937),
    [anon_sym_import] = ACTIONS(935),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(935),
    [sym_identifier] = ACTIONS(935),
    [anon_sym_if] = ACTIONS(935),
    [sym_string] = ACTIONS(937),
    [anon_sym_mutable] = ACTIONS(935),
    [sym_number] = ACTIONS(937),
  },
  [365] = {
    [aux_sym_type_parameter_list_repeat1] = STATE(365),
    [anon_sym_RBRACE] = ACTIONS(933),
    [anon_sym_COMMA] = ACTIONS(939),
    [sym_comment] = ACTIONS(3),
  },
  [366] = {
    [sym_argument_list] = STATE(78),
    [anon_sym_AMP_AMP] = ACTIONS(409),
    [sym__times_operator] = ACTIONS(537),
    [anon_sym_PIPE_PIPE] = ACTIONS(539),
    [anon_sym_EQ_GT] = ACTIONS(409),
    [anon_sym_LPAREN] = ACTIONS(409),
    [anon_sym_LT_COLON] = ACTIONS(409),
    [sym__plus_operator] = ACTIONS(541),
    [sym__assign_operator] = ACTIONS(407),
    [sym_comment] = ACTIONS(3),
    [sym__arrow_operator] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(409),
  },
  [367] = {
    [sym_argument_list] = STATE(78),
    [anon_sym_AMP_AMP] = ACTIONS(409),
    [sym__times_operator] = ACTIONS(537),
    [anon_sym_PIPE_PIPE] = ACTIONS(407),
    [anon_sym_EQ_GT] = ACTIONS(409),
    [anon_sym_LPAREN] = ACTIONS(409),
    [anon_sym_LT_COLON] = ACTIONS(409),
    [sym__plus_operator] = ACTIONS(541),
    [sym__assign_operator] = ACTIONS(407),
    [sym_comment] = ACTIONS(3),
    [sym__arrow_operator] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(409),
  },
  [368] = {
    [sym_argument_list] = STATE(78),
    [anon_sym_AMP_AMP] = ACTIONS(409),
    [sym__times_operator] = ACTIONS(537),
    [anon_sym_PIPE_PIPE] = ACTIONS(407),
    [anon_sym_EQ_GT] = ACTIONS(409),
    [anon_sym_LPAREN] = ACTIONS(409),
    [anon_sym_LT_COLON] = ACTIONS(409),
    [sym__plus_operator] = ACTIONS(407),
    [sym__assign_operator] = ACTIONS(407),
    [sym_comment] = ACTIONS(3),
    [sym__arrow_operator] = ACTIONS(409),
    [anon_sym_COLON_COLON] = ACTIONS(409),
  },
  [369] = {
    [sym_argument_list] = STATE(78),
    [anon_sym_AMP_AMP] = ACTIONS(535),
    [sym__times_operator] = ACTIONS(537),
    [anon_sym_PIPE_PIPE] = ACTIONS(539),
    [anon_sym_EQ_GT] = ACTIONS(445),
    [anon_sym_LPAREN] = ACTIONS(445),
    [anon_sym_LT_COLON] = ACTIONS(445),
    [sym__plus_operator] = ACTIONS(541),
    [sym__assign_operator] = ACTIONS(543),
    [sym_comment] = ACTIONS(3),
    [sym__arrow_operator] = ACTIONS(547),
    [anon_sym_COLON_COLON] = ACTIONS(445),
  },
  [370] = {
    [sym_argument_list] = STATE(78),
    [anon_sym_AMP_AMP] = ACTIONS(535),
    [sym__times_operator] = ACTIONS(537),
    [anon_sym_PIPE_PIPE] = ACTIONS(539),
    [anon_sym_EQ_GT] = ACTIONS(409),
    [anon_sym_LPAREN] = ACTIONS(409),
    [anon_sym_LT_COLON] = ACTIONS(409),
    [sym__plus_operator] = ACTIONS(541),
    [sym__assign_operator] = ACTIONS(407),
    [sym_comment] = ACTIONS(3),
    [sym__arrow_operator] = ACTIONS(547),
    [anon_sym_COLON_COLON] = ACTIONS(409),
  },
  [371] = {
    [anon_sym_AMP_AMP] = ACTIONS(942),
    [anon_sym_LPAREN] = ACTIONS(942),
    [sym__plus_operator] = ACTIONS(942),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(942),
    [anon_sym_else] = ACTIONS(942),
    [sym__times_operator] = ACTIONS(942),
    [anon_sym_SEMI] = ACTIONS(942),
    [anon_sym_PIPE_PIPE] = ACTIONS(942),
    [ts_builtin_sym_end] = ACTIONS(944),
    [anon_sym_EQ_GT] = ACTIONS(942),
    [anon_sym_LT_COLON] = ACTIONS(942),
    [anon_sym_elseif] = ACTIONS(942),
    [anon_sym_end] = ACTIONS(942),
    [sym__arrow_operator] = ACTIONS(942),
    [anon_sym_LF] = ACTIONS(944),
    [anon_sym_COLON_COLON] = ACTIONS(942),
  },
  [372] = {
    [sym_function_definition] = STATE(219),
    [sym_struct_definition] = STATE(219),
    [sym_parameterized_identifier] = STATE(219),
    [sym_if_statement] = STATE(219),
    [sym_pair_expression] = STATE(219),
    [sym_parenthesized_expression] = STATE(219),
    [sym_module_definition] = STATE(219),
    [sym_call_expression] = STATE(219),
    [sym__expression] = STATE(219),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(219),
    [sym_assignment_expression] = STATE(219),
    [sym_binary_expression] = STATE(219),
    [sym_import_statement] = STATE(219),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(946),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(465),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(465),
  },
  [373] = {
    [aux_sym__expression_list_repeat1] = STATE(226),
    [anon_sym_end] = ACTIONS(946),
    [anon_sym_SEMI] = ACTIONS(948),
    [anon_sym_LF] = ACTIONS(950),
    [sym_comment] = ACTIONS(53),
  },
  [374] = {
    [anon_sym_AMP_AMP] = ACTIONS(896),
    [anon_sym_RBRACE] = ACTIONS(896),
    [anon_sym_using] = ACTIONS(894),
    [anon_sym_struct] = ACTIONS(894),
    [anon_sym_function] = ACTIONS(894),
    [anon_sym_LPAREN] = ACTIONS(896),
    [sym__plus_operator] = ACTIONS(894),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(894),
    [sym_identifier] = ACTIONS(894),
    [anon_sym_if] = ACTIONS(894),
    [anon_sym_mutable] = ACTIONS(894),
    [anon_sym_RPAREN] = ACTIONS(896),
    [anon_sym_module] = ACTIONS(894),
    [sym__times_operator] = ACTIONS(894),
    [anon_sym_PIPE_PIPE] = ACTIONS(894),
    [anon_sym_EQ_GT] = ACTIONS(896),
    [anon_sym_LT_COLON] = ACTIONS(896),
    [anon_sym_import] = ACTIONS(894),
    [anon_sym_COMMA] = ACTIONS(896),
    [sym__arrow_operator] = ACTIONS(896),
    [sym_string] = ACTIONS(896),
    [anon_sym_COLON_COLON] = ACTIONS(896),
    [sym_number] = ACTIONS(896),
  },
  [375] = {
    [anon_sym_module] = ACTIONS(952),
    [anon_sym_using] = ACTIONS(952),
    [anon_sym_struct] = ACTIONS(952),
    [anon_sym_function] = ACTIONS(952),
    [anon_sym_LPAREN] = ACTIONS(954),
    [anon_sym_import] = ACTIONS(952),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(952),
    [sym_identifier] = ACTIONS(952),
    [anon_sym_if] = ACTIONS(952),
    [sym_string] = ACTIONS(954),
    [anon_sym_mutable] = ACTIONS(952),
    [sym_number] = ACTIONS(954),
  },
  [376] = {
    [aux_sym_parameter_list_repeat1] = STATE(376),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(956),
    [anon_sym_RPAREN] = ACTIONS(896),
  },
  [377] = {
    [anon_sym_AMP_AMP] = ACTIONS(959),
    [anon_sym_LPAREN] = ACTIONS(959),
    [sym__plus_operator] = ACTIONS(959),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(959),
    [anon_sym_else] = ACTIONS(959),
    [sym__times_operator] = ACTIONS(959),
    [anon_sym_SEMI] = ACTIONS(959),
    [anon_sym_PIPE_PIPE] = ACTIONS(959),
    [ts_builtin_sym_end] = ACTIONS(961),
    [anon_sym_EQ_GT] = ACTIONS(959),
    [anon_sym_LT_COLON] = ACTIONS(959),
    [anon_sym_elseif] = ACTIONS(959),
    [anon_sym_end] = ACTIONS(959),
    [sym__arrow_operator] = ACTIONS(959),
    [anon_sym_LF] = ACTIONS(961),
    [anon_sym_COLON_COLON] = ACTIONS(959),
  },
  [378] = {
    [sym_function_definition] = STATE(219),
    [sym_struct_definition] = STATE(219),
    [sym_parameterized_identifier] = STATE(219),
    [sym_if_statement] = STATE(219),
    [sym_pair_expression] = STATE(219),
    [sym_parenthesized_expression] = STATE(219),
    [sym_module_definition] = STATE(219),
    [sym_call_expression] = STATE(219),
    [sym__expression] = STATE(219),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(219),
    [sym_assignment_expression] = STATE(219),
    [sym_binary_expression] = STATE(219),
    [sym_import_statement] = STATE(219),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(963),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(465),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(465),
  },
  [379] = {
    [anon_sym_AMP_AMP] = ACTIONS(697),
    [anon_sym_RBRACE] = ACTIONS(697),
    [anon_sym_using] = ACTIONS(695),
    [anon_sym_struct] = ACTIONS(695),
    [anon_sym_function] = ACTIONS(695),
    [anon_sym_LPAREN] = ACTIONS(697),
    [sym__plus_operator] = ACTIONS(695),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(695),
    [sym_identifier] = ACTIONS(695),
    [anon_sym_if] = ACTIONS(695),
    [anon_sym_mutable] = ACTIONS(695),
    [anon_sym_RPAREN] = ACTIONS(697),
    [anon_sym_module] = ACTIONS(695),
    [sym__times_operator] = ACTIONS(695),
    [anon_sym_PIPE_PIPE] = ACTIONS(695),
    [anon_sym_EQ_GT] = ACTIONS(697),
    [anon_sym_LT_COLON] = ACTIONS(697),
    [anon_sym_import] = ACTIONS(695),
    [anon_sym_COMMA] = ACTIONS(697),
    [sym__arrow_operator] = ACTIONS(697),
    [sym_string] = ACTIONS(697),
    [anon_sym_COLON_COLON] = ACTIONS(697),
    [sym_number] = ACTIONS(697),
  },
  [380] = {
    [sym_function_definition] = STATE(219),
    [sym_struct_definition] = STATE(219),
    [sym_parameterized_identifier] = STATE(219),
    [sym_if_statement] = STATE(219),
    [sym_pair_expression] = STATE(219),
    [sym_parenthesized_expression] = STATE(219),
    [sym_module_definition] = STATE(219),
    [sym_call_expression] = STATE(219),
    [sym__expression] = STATE(219),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(219),
    [sym_assignment_expression] = STATE(219),
    [sym_binary_expression] = STATE(219),
    [sym_import_statement] = STATE(219),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(965),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(465),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(465),
  },
  [381] = {
    [aux_sym_parameter_list_repeat1] = STATE(435),
    [anon_sym_AMP_AMP] = ACTIONS(711),
    [sym__times_operator] = ACTIONS(709),
    [anon_sym_PIPE_PIPE] = ACTIONS(709),
    [anon_sym_EQ_GT] = ACTIONS(711),
    [anon_sym_LPAREN] = ACTIONS(711),
    [anon_sym_LT_COLON] = ACTIONS(711),
    [sym__plus_operator] = ACTIONS(709),
    [sym__assign_operator] = ACTIONS(709),
    [anon_sym_COMMA] = ACTIONS(561),
    [sym__arrow_operator] = ACTIONS(711),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(711),
    [anon_sym_RPAREN] = ACTIONS(711),
  },
  [382] = {
    [anon_sym_AMP_AMP] = ACTIONS(775),
    [anon_sym_RBRACE] = ACTIONS(775),
    [anon_sym_using] = ACTIONS(773),
    [anon_sym_struct] = ACTIONS(773),
    [anon_sym_function] = ACTIONS(773),
    [anon_sym_LPAREN] = ACTIONS(775),
    [sym__plus_operator] = ACTIONS(773),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(773),
    [sym_identifier] = ACTIONS(773),
    [anon_sym_if] = ACTIONS(773),
    [anon_sym_mutable] = ACTIONS(773),
    [anon_sym_RPAREN] = ACTIONS(775),
    [anon_sym_module] = ACTIONS(773),
    [sym__times_operator] = ACTIONS(773),
    [anon_sym_PIPE_PIPE] = ACTIONS(773),
    [anon_sym_EQ_GT] = ACTIONS(775),
    [anon_sym_LT_COLON] = ACTIONS(775),
    [anon_sym_import] = ACTIONS(773),
    [anon_sym_COMMA] = ACTIONS(775),
    [sym__arrow_operator] = ACTIONS(775),
    [sym_string] = ACTIONS(775),
    [anon_sym_COLON_COLON] = ACTIONS(775),
    [sym_number] = ACTIONS(775),
  },
  [383] = {
    [sym_function_definition] = STATE(219),
    [sym_struct_definition] = STATE(219),
    [sym_parameterized_identifier] = STATE(219),
    [sym_if_statement] = STATE(219),
    [sym_pair_expression] = STATE(219),
    [sym_parenthesized_expression] = STATE(219),
    [sym_module_definition] = STATE(219),
    [sym_call_expression] = STATE(219),
    [sym__expression] = STATE(219),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(219),
    [sym_assignment_expression] = STATE(219),
    [sym_binary_expression] = STATE(219),
    [sym_import_statement] = STATE(219),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(967),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(465),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(465),
  },
  [384] = {
    [aux_sym__expression_list_repeat1] = STATE(226),
    [anon_sym_end] = ACTIONS(967),
    [anon_sym_SEMI] = ACTIONS(969),
    [anon_sym_LF] = ACTIONS(971),
    [sym_comment] = ACTIONS(53),
  },
  [385] = {
    [sym_argument_list] = STATE(43),
    [aux_sym__expression_list_repeat1] = STATE(438),
    [anon_sym_AMP_AMP] = ACTIONS(227),
    [sym__times_operator] = ACTIONS(229),
    [anon_sym_SEMI] = ACTIONS(969),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LT_COLON] = ACTIONS(79),
    [sym__plus_operator] = ACTIONS(235),
    [sym__assign_operator] = ACTIONS(237),
    [anon_sym_EQ_GT] = ACTIONS(239),
    [anon_sym_end] = ACTIONS(967),
    [sym__arrow_operator] = ACTIONS(243),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LF] = ACTIONS(971),
    [anon_sym_COLON_COLON] = ACTIONS(79),
  },
  [386] = {
    [sym_function_definition] = STATE(219),
    [sym_struct_definition] = STATE(219),
    [sym_parameterized_identifier] = STATE(219),
    [sym_if_statement] = STATE(219),
    [sym_pair_expression] = STATE(219),
    [sym_parenthesized_expression] = STATE(219),
    [sym_module_definition] = STATE(219),
    [sym_call_expression] = STATE(219),
    [sym__expression] = STATE(219),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(219),
    [sym_assignment_expression] = STATE(219),
    [sym_binary_expression] = STATE(219),
    [sym_import_statement] = STATE(219),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(973),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(465),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(465),
  },
  [387] = {
    [anon_sym_AMP_AMP] = ACTIONS(795),
    [anon_sym_RBRACE] = ACTIONS(795),
    [anon_sym_using] = ACTIONS(793),
    [anon_sym_struct] = ACTIONS(793),
    [anon_sym_function] = ACTIONS(793),
    [anon_sym_LPAREN] = ACTIONS(795),
    [sym__plus_operator] = ACTIONS(793),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(793),
    [sym_identifier] = ACTIONS(793),
    [anon_sym_if] = ACTIONS(793),
    [anon_sym_mutable] = ACTIONS(793),
    [anon_sym_RPAREN] = ACTIONS(795),
    [anon_sym_module] = ACTIONS(793),
    [sym__times_operator] = ACTIONS(793),
    [anon_sym_PIPE_PIPE] = ACTIONS(793),
    [anon_sym_EQ_GT] = ACTIONS(795),
    [anon_sym_LT_COLON] = ACTIONS(795),
    [anon_sym_import] = ACTIONS(793),
    [anon_sym_COMMA] = ACTIONS(795),
    [sym__arrow_operator] = ACTIONS(795),
    [sym_string] = ACTIONS(795),
    [anon_sym_COLON_COLON] = ACTIONS(795),
    [sym_number] = ACTIONS(795),
  },
  [388] = {
    [aux_sym__expression_list_repeat1] = STATE(226),
    [anon_sym_end] = ACTIONS(973),
    [anon_sym_SEMI] = ACTIONS(975),
    [anon_sym_LF] = ACTIONS(977),
    [sym_comment] = ACTIONS(53),
  },
  [389] = {
    [anon_sym_AMP_AMP] = ACTIONS(839),
    [anon_sym_RBRACE] = ACTIONS(839),
    [anon_sym_using] = ACTIONS(837),
    [anon_sym_struct] = ACTIONS(837),
    [anon_sym_function] = ACTIONS(837),
    [anon_sym_LPAREN] = ACTIONS(839),
    [sym__plus_operator] = ACTIONS(837),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(837),
    [sym_identifier] = ACTIONS(837),
    [anon_sym_if] = ACTIONS(837),
    [anon_sym_mutable] = ACTIONS(837),
    [anon_sym_RPAREN] = ACTIONS(839),
    [anon_sym_module] = ACTIONS(837),
    [sym__times_operator] = ACTIONS(837),
    [anon_sym_PIPE_PIPE] = ACTIONS(837),
    [anon_sym_EQ_GT] = ACTIONS(839),
    [anon_sym_LT_COLON] = ACTIONS(839),
    [anon_sym_import] = ACTIONS(837),
    [anon_sym_COMMA] = ACTIONS(839),
    [sym__arrow_operator] = ACTIONS(839),
    [sym_string] = ACTIONS(839),
    [anon_sym_COLON_COLON] = ACTIONS(839),
    [sym_number] = ACTIONS(839),
  },
  [390] = {
    [anon_sym_AMP_AMP] = ACTIONS(856),
    [anon_sym_RBRACE] = ACTIONS(856),
    [anon_sym_using] = ACTIONS(854),
    [anon_sym_struct] = ACTIONS(854),
    [anon_sym_function] = ACTIONS(854),
    [anon_sym_LPAREN] = ACTIONS(856),
    [sym__plus_operator] = ACTIONS(854),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(854),
    [sym_identifier] = ACTIONS(854),
    [anon_sym_if] = ACTIONS(854),
    [anon_sym_mutable] = ACTIONS(854),
    [anon_sym_RPAREN] = ACTIONS(856),
    [anon_sym_module] = ACTIONS(854),
    [sym__times_operator] = ACTIONS(854),
    [anon_sym_PIPE_PIPE] = ACTIONS(854),
    [anon_sym_EQ_GT] = ACTIONS(856),
    [anon_sym_LT_COLON] = ACTIONS(856),
    [anon_sym_import] = ACTIONS(854),
    [anon_sym_COMMA] = ACTIONS(856),
    [sym__arrow_operator] = ACTIONS(856),
    [sym_string] = ACTIONS(856),
    [anon_sym_COLON_COLON] = ACTIONS(856),
    [sym_number] = ACTIONS(856),
  },
  [391] = {
    [aux_sym_if_statement_repeat1] = STATE(317),
    [sym_elseif_clause] = STATE(317),
    [sym_else_clause] = STATE(442),
    [anon_sym_elseif] = ACTIONS(663),
    [anon_sym_end] = ACTIONS(979),
    [anon_sym_else] = ACTIONS(389),
    [sym_comment] = ACTIONS(3),
  },
  [392] = {
    [anon_sym_end] = ACTIONS(979),
    [sym_comment] = ACTIONS(3),
  },
  [393] = {
    [aux_sym_if_statement_repeat1] = STATE(443),
    [sym_function_definition] = STATE(311),
    [sym_struct_definition] = STATE(311),
    [sym_if_statement] = STATE(311),
    [sym__expression] = STATE(311),
    [sym_parenthesized_expression] = STATE(311),
    [sym_call_expression] = STATE(311),
    [sym_import_statement] = STATE(311),
    [sym_parameterized_identifier] = STATE(311),
    [sym_pair_expression] = STATE(311),
    [sym_module_definition] = STATE(311),
    [sym_elseif_clause] = STATE(443),
    [sym_else_clause] = STATE(442),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(311),
    [sym_assignment_expression] = STATE(311),
    [sym_binary_expression] = STATE(311),
    [anon_sym_using] = ACTIONS(167),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_else] = ACTIONS(389),
    [anon_sym_mutable] = ACTIONS(23),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(167),
    [anon_sym_elseif] = ACTIONS(399),
    [anon_sym_end] = ACTIONS(981),
    [sym_string] = ACTIONS(649),
    [sym_number] = ACTIONS(649),
  },
  [394] = {
    [sym_function_definition] = STATE(444),
    [sym_struct_definition] = STATE(444),
    [sym_parameterized_identifier] = STATE(444),
    [sym_if_statement] = STATE(444),
    [sym_pair_expression] = STATE(444),
    [sym_parenthesized_expression] = STATE(444),
    [sym_module_definition] = STATE(444),
    [sym_call_expression] = STATE(444),
    [sym__expression] = STATE(444),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(444),
    [sym_assignment_expression] = STATE(444),
    [sym_binary_expression] = STATE(444),
    [sym_import_statement] = STATE(444),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(967),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(983),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(983),
  },
  [395] = {
    [anon_sym_AMP_AMP] = ACTIONS(885),
    [anon_sym_RBRACE] = ACTIONS(885),
    [anon_sym_using] = ACTIONS(883),
    [anon_sym_struct] = ACTIONS(883),
    [anon_sym_function] = ACTIONS(883),
    [anon_sym_LPAREN] = ACTIONS(885),
    [sym__plus_operator] = ACTIONS(883),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(883),
    [sym_identifier] = ACTIONS(883),
    [anon_sym_if] = ACTIONS(883),
    [anon_sym_mutable] = ACTIONS(883),
    [anon_sym_RPAREN] = ACTIONS(885),
    [anon_sym_module] = ACTIONS(883),
    [sym__times_operator] = ACTIONS(883),
    [anon_sym_PIPE_PIPE] = ACTIONS(883),
    [anon_sym_EQ_GT] = ACTIONS(885),
    [anon_sym_LT_COLON] = ACTIONS(885),
    [anon_sym_import] = ACTIONS(883),
    [anon_sym_COMMA] = ACTIONS(885),
    [sym__arrow_operator] = ACTIONS(885),
    [sym_string] = ACTIONS(885),
    [anon_sym_COLON_COLON] = ACTIONS(885),
    [sym_number] = ACTIONS(885),
  },
  [396] = {
    [aux_sym_parameter_list_repeat1] = STATE(445),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [anon_sym_RBRACE] = ACTIONS(487),
    [sym__times_operator] = ACTIONS(485),
    [anon_sym_PIPE_PIPE] = ACTIONS(485),
    [anon_sym_LPAREN] = ACTIONS(487),
    [anon_sym_LT_COLON] = ACTIONS(487),
    [anon_sym_EQ_GT] = ACTIONS(487),
    [sym__plus_operator] = ACTIONS(485),
    [sym__assign_operator] = ACTIONS(485),
    [anon_sym_COMMA] = ACTIONS(487),
    [sym__arrow_operator] = ACTIONS(487),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(487),
  },
  [397] = {
    [aux_sym_parameter_list_repeat1] = STATE(446),
    [anon_sym_AMP_AMP] = ACTIONS(711),
    [anon_sym_using] = ACTIONS(709),
    [anon_sym_struct] = ACTIONS(709),
    [anon_sym_function] = ACTIONS(709),
    [anon_sym_LPAREN] = ACTIONS(711),
    [sym__plus_operator] = ACTIONS(709),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(709),
    [sym_identifier] = ACTIONS(709),
    [anon_sym_if] = ACTIONS(709),
    [anon_sym_mutable] = ACTIONS(709),
    [anon_sym_module] = ACTIONS(709),
    [sym__times_operator] = ACTIONS(709),
    [anon_sym_PIPE_PIPE] = ACTIONS(709),
    [anon_sym_EQ_GT] = ACTIONS(711),
    [anon_sym_LT_COLON] = ACTIONS(711),
    [anon_sym_import] = ACTIONS(709),
    [anon_sym_COMMA] = ACTIONS(561),
    [sym__arrow_operator] = ACTIONS(711),
    [sym_string] = ACTIONS(711),
    [anon_sym_COLON_COLON] = ACTIONS(711),
    [sym_number] = ACTIONS(711),
  },
  [398] = {
    [sym_argument_list] = STATE(78),
    [aux_sym_argument_list_repeat1] = STATE(290),
    [anon_sym_AMP_AMP] = ACTIONS(421),
    [sym__times_operator] = ACTIONS(423),
    [anon_sym_PIPE_PIPE] = ACTIONS(425),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_LT_COLON] = ACTIONS(141),
    [sym__plus_operator] = ACTIONS(427),
    [sym__assign_operator] = ACTIONS(429),
    [anon_sym_EQ_GT] = ACTIONS(431),
    [anon_sym_COMMA] = ACTIONS(433),
    [sym__arrow_operator] = ACTIONS(435),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(141),
    [anon_sym_RPAREN] = ACTIONS(985),
  },
  [399] = {
    [aux_sym_parameter_list_repeat1] = STATE(448),
    [anon_sym_AMP_AMP] = ACTIONS(485),
    [anon_sym_LPAREN] = ACTIONS(485),
    [sym__plus_operator] = ACTIONS(485),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(485),
    [anon_sym_else] = ACTIONS(485),
    [sym__times_operator] = ACTIONS(485),
    [anon_sym_SEMI] = ACTIONS(485),
    [anon_sym_PIPE_PIPE] = ACTIONS(485),
    [anon_sym_EQ_GT] = ACTIONS(485),
    [anon_sym_LT_COLON] = ACTIONS(485),
    [anon_sym_elseif] = ACTIONS(485),
    [anon_sym_end] = ACTIONS(485),
    [anon_sym_COMMA] = ACTIONS(489),
    [sym__arrow_operator] = ACTIONS(485),
    [anon_sym_LF] = ACTIONS(487),
    [anon_sym_COLON_COLON] = ACTIONS(485),
  },
  [400] = {
    [sym_function_definition] = STATE(219),
    [sym_struct_definition] = STATE(219),
    [sym_parameterized_identifier] = STATE(219),
    [sym_if_statement] = STATE(219),
    [sym_pair_expression] = STATE(219),
    [sym_parenthesized_expression] = STATE(219),
    [sym_module_definition] = STATE(219),
    [sym_call_expression] = STATE(219),
    [sym__expression] = STATE(219),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(219),
    [sym_assignment_expression] = STATE(219),
    [sym_binary_expression] = STATE(219),
    [sym_import_statement] = STATE(219),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(987),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(465),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(465),
  },
  [401] = {
    [aux_sym__expression_list_repeat1] = STATE(226),
    [anon_sym_end] = ACTIONS(987),
    [anon_sym_SEMI] = ACTIONS(989),
    [anon_sym_LF] = ACTIONS(991),
    [sym_comment] = ACTIONS(53),
  },
  [402] = {
    [anon_sym_AMP_AMP] = ACTIONS(993),
    [anon_sym_LPAREN] = ACTIONS(993),
    [sym__plus_operator] = ACTIONS(993),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(993),
    [anon_sym_else] = ACTIONS(993),
    [sym__times_operator] = ACTIONS(993),
    [anon_sym_SEMI] = ACTIONS(993),
    [anon_sym_PIPE_PIPE] = ACTIONS(993),
    [ts_builtin_sym_end] = ACTIONS(995),
    [anon_sym_EQ_GT] = ACTIONS(993),
    [anon_sym_LT_COLON] = ACTIONS(993),
    [anon_sym_elseif] = ACTIONS(993),
    [anon_sym_end] = ACTIONS(993),
    [sym__arrow_operator] = ACTIONS(993),
    [anon_sym_LF] = ACTIONS(995),
    [anon_sym_COLON_COLON] = ACTIONS(993),
  },
  [403] = {
    [anon_sym_end] = ACTIONS(997),
    [sym_comment] = ACTIONS(3),
  },
  [404] = {
    [sym_argument_list] = STATE(43),
    [aux_sym__expression_list_repeat1] = STATE(452),
    [anon_sym_AMP_AMP] = ACTIONS(383),
    [anon_sym_LPAREN] = ACTIONS(77),
    [sym__plus_operator] = ACTIONS(385),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(387),
    [anon_sym_else] = ACTIONS(999),
    [sym__times_operator] = ACTIONS(391),
    [anon_sym_SEMI] = ACTIONS(1001),
    [anon_sym_PIPE_PIPE] = ACTIONS(395),
    [anon_sym_EQ_GT] = ACTIONS(397),
    [anon_sym_LT_COLON] = ACTIONS(79),
    [anon_sym_elseif] = ACTIONS(999),
    [anon_sym_end] = ACTIONS(999),
    [sym__arrow_operator] = ACTIONS(403),
    [anon_sym_LF] = ACTIONS(1003),
    [anon_sym_COLON_COLON] = ACTIONS(79),
  },
  [405] = {
    [aux_sym_if_statement_repeat1] = STATE(317),
    [sym_elseif_clause] = STATE(317),
    [sym_else_clause] = STATE(453),
    [anon_sym_elseif] = ACTIONS(663),
    [anon_sym_end] = ACTIONS(997),
    [anon_sym_else] = ACTIONS(389),
    [sym_comment] = ACTIONS(3),
  },
  [406] = {
    [sym_function_definition] = STATE(311),
    [sym_struct_definition] = STATE(311),
    [sym_parameterized_identifier] = STATE(311),
    [sym_if_statement] = STATE(311),
    [sym_pair_expression] = STATE(311),
    [sym_parenthesized_expression] = STATE(311),
    [sym_module_definition] = STATE(311),
    [sym_call_expression] = STATE(311),
    [sym__expression] = STATE(311),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(311),
    [sym_assignment_expression] = STATE(311),
    [sym_binary_expression] = STATE(311),
    [sym_import_statement] = STATE(311),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(167),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(167),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(649),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(649),
  },
  [407] = {
    [sym_argument_list] = STATE(43),
    [aux_sym__expression_list_repeat1] = STATE(454),
    [anon_sym_AMP_AMP] = ACTIONS(227),
    [sym__times_operator] = ACTIONS(229),
    [anon_sym_SEMI] = ACTIONS(948),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LT_COLON] = ACTIONS(79),
    [sym__plus_operator] = ACTIONS(235),
    [sym__assign_operator] = ACTIONS(237),
    [anon_sym_EQ_GT] = ACTIONS(239),
    [anon_sym_end] = ACTIONS(946),
    [sym__arrow_operator] = ACTIONS(243),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LF] = ACTIONS(950),
    [anon_sym_COLON_COLON] = ACTIONS(79),
  },
  [408] = {
    [aux_sym_parameter_list_repeat1] = STATE(455),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [sym__times_operator] = ACTIONS(485),
    [anon_sym_PIPE_PIPE] = ACTIONS(485),
    [anon_sym_LPAREN] = ACTIONS(487),
    [anon_sym_LT_COLON] = ACTIONS(487),
    [anon_sym_EQ_GT] = ACTIONS(487),
    [sym__plus_operator] = ACTIONS(485),
    [sym__assign_operator] = ACTIONS(485),
    [anon_sym_COMMA] = ACTIONS(487),
    [sym__arrow_operator] = ACTIONS(487),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(487),
    [anon_sym_RPAREN] = ACTIONS(487),
  },
  [409] = {
    [aux_sym_parameter_list_repeat1] = STATE(456),
    [anon_sym_AMP_AMP] = ACTIONS(709),
    [anon_sym_LPAREN] = ACTIONS(709),
    [sym__plus_operator] = ACTIONS(709),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(709),
    [sym__times_operator] = ACTIONS(709),
    [anon_sym_SEMI] = ACTIONS(709),
    [anon_sym_PIPE_PIPE] = ACTIONS(709),
    [anon_sym_EQ_GT] = ACTIONS(709),
    [anon_sym_LT_COLON] = ACTIONS(709),
    [anon_sym_end] = ACTIONS(709),
    [anon_sym_COMMA] = ACTIONS(489),
    [sym__arrow_operator] = ACTIONS(709),
    [anon_sym_LF] = ACTIONS(711),
    [anon_sym_COLON_COLON] = ACTIONS(709),
  },
  [410] = {
    [sym_function_definition] = STATE(219),
    [sym_struct_definition] = STATE(219),
    [sym_parameterized_identifier] = STATE(219),
    [sym_if_statement] = STATE(219),
    [sym_pair_expression] = STATE(219),
    [sym_parenthesized_expression] = STATE(219),
    [sym_module_definition] = STATE(219),
    [sym_call_expression] = STATE(219),
    [sym__expression] = STATE(219),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(219),
    [sym_assignment_expression] = STATE(219),
    [sym_binary_expression] = STATE(219),
    [sym_import_statement] = STATE(219),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(1005),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(465),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(465),
  },
  [411] = {
    [anon_sym_AMP_AMP] = ACTIONS(477),
    [anon_sym_using] = ACTIONS(475),
    [anon_sym_struct] = ACTIONS(475),
    [anon_sym_function] = ACTIONS(475),
    [anon_sym_LPAREN] = ACTIONS(477),
    [sym__plus_operator] = ACTIONS(475),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(475),
    [sym_identifier] = ACTIONS(475),
    [anon_sym_if] = ACTIONS(475),
    [anon_sym_mutable] = ACTIONS(475),
    [anon_sym_module] = ACTIONS(475),
    [sym__times_operator] = ACTIONS(475),
    [anon_sym_PIPE_PIPE] = ACTIONS(475),
    [anon_sym_EQ_GT] = ACTIONS(477),
    [anon_sym_LT_COLON] = ACTIONS(477),
    [anon_sym_import] = ACTIONS(475),
    [anon_sym_end] = ACTIONS(475),
    [sym__arrow_operator] = ACTIONS(477),
    [sym_string] = ACTIONS(477),
    [anon_sym_COLON_COLON] = ACTIONS(477),
    [sym_number] = ACTIONS(477),
  },
  [412] = {
    [aux_sym__expression_list_repeat1] = STATE(226),
    [anon_sym_end] = ACTIONS(1005),
    [anon_sym_SEMI] = ACTIONS(1007),
    [anon_sym_LF] = ACTIONS(1009),
    [sym_comment] = ACTIONS(53),
  },
  [413] = {
    [aux_sym_parameter_list_repeat1] = STATE(460),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [anon_sym_using] = ACTIONS(485),
    [anon_sym_struct] = ACTIONS(485),
    [anon_sym_function] = ACTIONS(485),
    [anon_sym_LPAREN] = ACTIONS(487),
    [sym__plus_operator] = ACTIONS(485),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(485),
    [sym_identifier] = ACTIONS(485),
    [anon_sym_if] = ACTIONS(485),
    [anon_sym_mutable] = ACTIONS(485),
    [anon_sym_module] = ACTIONS(485),
    [sym__times_operator] = ACTIONS(485),
    [anon_sym_PIPE_PIPE] = ACTIONS(485),
    [anon_sym_EQ_GT] = ACTIONS(487),
    [anon_sym_LT_COLON] = ACTIONS(487),
    [anon_sym_import] = ACTIONS(485),
    [anon_sym_end] = ACTIONS(485),
    [anon_sym_COMMA] = ACTIONS(1011),
    [sym__arrow_operator] = ACTIONS(487),
    [sym_string] = ACTIONS(487),
    [anon_sym_COLON_COLON] = ACTIONS(487),
    [sym_number] = ACTIONS(487),
  },
  [414] = {
    [sym_function_definition] = STATE(219),
    [sym_struct_definition] = STATE(219),
    [sym_parameterized_identifier] = STATE(219),
    [sym_if_statement] = STATE(219),
    [sym_pair_expression] = STATE(219),
    [sym_parenthesized_expression] = STATE(219),
    [sym_module_definition] = STATE(219),
    [sym_call_expression] = STATE(219),
    [sym__expression] = STATE(219),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(219),
    [sym_assignment_expression] = STATE(219),
    [sym_binary_expression] = STATE(219),
    [sym_import_statement] = STATE(219),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(1013),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(465),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(465),
  },
  [415] = {
    [anon_sym_AMP_AMP] = ACTIONS(553),
    [anon_sym_using] = ACTIONS(551),
    [anon_sym_struct] = ACTIONS(551),
    [anon_sym_function] = ACTIONS(551),
    [anon_sym_LPAREN] = ACTIONS(553),
    [sym__plus_operator] = ACTIONS(551),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(551),
    [sym_identifier] = ACTIONS(551),
    [anon_sym_if] = ACTIONS(551),
    [anon_sym_mutable] = ACTIONS(551),
    [anon_sym_module] = ACTIONS(551),
    [sym__times_operator] = ACTIONS(551),
    [anon_sym_PIPE_PIPE] = ACTIONS(551),
    [anon_sym_EQ_GT] = ACTIONS(553),
    [anon_sym_LT_COLON] = ACTIONS(553),
    [anon_sym_import] = ACTIONS(551),
    [anon_sym_end] = ACTIONS(551),
    [sym__arrow_operator] = ACTIONS(553),
    [sym_string] = ACTIONS(553),
    [anon_sym_COLON_COLON] = ACTIONS(553),
    [sym_number] = ACTIONS(553),
  },
  [416] = {
    [aux_sym__expression_list_repeat1] = STATE(226),
    [anon_sym_end] = ACTIONS(1013),
    [anon_sym_SEMI] = ACTIONS(1015),
    [anon_sym_LF] = ACTIONS(1017),
    [sym_comment] = ACTIONS(53),
  },
  [417] = {
    [sym_argument_list] = STATE(43),
    [aux_sym__expression_list_repeat1] = STATE(463),
    [anon_sym_AMP_AMP] = ACTIONS(227),
    [sym__times_operator] = ACTIONS(229),
    [anon_sym_SEMI] = ACTIONS(1015),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LT_COLON] = ACTIONS(79),
    [sym__plus_operator] = ACTIONS(235),
    [sym__assign_operator] = ACTIONS(237),
    [anon_sym_EQ_GT] = ACTIONS(239),
    [anon_sym_end] = ACTIONS(1013),
    [sym__arrow_operator] = ACTIONS(243),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LF] = ACTIONS(1017),
    [anon_sym_COLON_COLON] = ACTIONS(79),
  },
  [418] = {
    [sym_function_definition] = STATE(464),
    [sym_struct_definition] = STATE(464),
    [sym_parameterized_identifier] = STATE(464),
    [sym_if_statement] = STATE(464),
    [sym_pair_expression] = STATE(464),
    [sym_parenthesized_expression] = STATE(464),
    [sym_module_definition] = STATE(464),
    [sym_call_expression] = STATE(464),
    [sym__expression] = STATE(464),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(464),
    [sym_assignment_expression] = STATE(464),
    [sym_binary_expression] = STATE(464),
    [sym_import_statement] = STATE(464),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(1013),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(1019),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(1019),
  },
  [419] = {
    [anon_sym_AMP_AMP] = ACTIONS(571),
    [anon_sym_using] = ACTIONS(569),
    [anon_sym_struct] = ACTIONS(569),
    [anon_sym_function] = ACTIONS(569),
    [anon_sym_LPAREN] = ACTIONS(571),
    [sym__plus_operator] = ACTIONS(569),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(569),
    [sym_identifier] = ACTIONS(569),
    [anon_sym_if] = ACTIONS(569),
    [anon_sym_mutable] = ACTIONS(569),
    [anon_sym_module] = ACTIONS(569),
    [sym__times_operator] = ACTIONS(569),
    [anon_sym_PIPE_PIPE] = ACTIONS(569),
    [anon_sym_EQ_GT] = ACTIONS(571),
    [anon_sym_LT_COLON] = ACTIONS(571),
    [anon_sym_import] = ACTIONS(569),
    [anon_sym_end] = ACTIONS(569),
    [sym__arrow_operator] = ACTIONS(571),
    [sym_string] = ACTIONS(571),
    [anon_sym_COLON_COLON] = ACTIONS(571),
    [sym_number] = ACTIONS(571),
  },
  [420] = {
    [sym_argument_list] = STATE(43),
    [aux_sym__expression_list_repeat1] = STATE(467),
    [anon_sym_AMP_AMP] = ACTIONS(227),
    [sym__times_operator] = ACTIONS(229),
    [anon_sym_SEMI] = ACTIONS(1021),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LT_COLON] = ACTIONS(79),
    [sym__plus_operator] = ACTIONS(235),
    [sym__assign_operator] = ACTIONS(237),
    [anon_sym_EQ_GT] = ACTIONS(239),
    [anon_sym_end] = ACTIONS(1023),
    [sym__arrow_operator] = ACTIONS(243),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LF] = ACTIONS(1025),
    [anon_sym_COLON_COLON] = ACTIONS(79),
  },
  [421] = {
    [anon_sym_AMP_AMP] = ACTIONS(615),
    [anon_sym_using] = ACTIONS(613),
    [anon_sym_struct] = ACTIONS(613),
    [anon_sym_function] = ACTIONS(613),
    [anon_sym_LPAREN] = ACTIONS(615),
    [sym__plus_operator] = ACTIONS(613),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(613),
    [sym_identifier] = ACTIONS(613),
    [anon_sym_if] = ACTIONS(613),
    [anon_sym_mutable] = ACTIONS(613),
    [anon_sym_module] = ACTIONS(613),
    [sym__times_operator] = ACTIONS(613),
    [anon_sym_PIPE_PIPE] = ACTIONS(613),
    [anon_sym_EQ_GT] = ACTIONS(615),
    [anon_sym_LT_COLON] = ACTIONS(615),
    [anon_sym_import] = ACTIONS(613),
    [anon_sym_end] = ACTIONS(613),
    [sym__arrow_operator] = ACTIONS(615),
    [sym_string] = ACTIONS(615),
    [anon_sym_COLON_COLON] = ACTIONS(615),
    [sym_number] = ACTIONS(615),
  },
  [422] = {
    [aux_sym_type_argument_list_repeat1] = STATE(300),
    [anon_sym_RBRACE] = ACTIONS(1027),
    [anon_sym_COMMA] = ACTIONS(357),
    [sym_comment] = ACTIONS(3),
  },
  [423] = {
    [aux_sym_if_statement_repeat1] = STATE(470),
    [sym_function_definition] = STATE(311),
    [sym_struct_definition] = STATE(311),
    [sym_if_statement] = STATE(311),
    [sym__expression] = STATE(311),
    [sym_parenthesized_expression] = STATE(311),
    [sym_call_expression] = STATE(311),
    [sym_import_statement] = STATE(311),
    [sym_parameterized_identifier] = STATE(311),
    [sym_pair_expression] = STATE(311),
    [sym_module_definition] = STATE(311),
    [sym_elseif_clause] = STATE(470),
    [sym_else_clause] = STATE(471),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(311),
    [sym_assignment_expression] = STATE(311),
    [sym_binary_expression] = STATE(311),
    [anon_sym_using] = ACTIONS(167),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_else] = ACTIONS(389),
    [anon_sym_mutable] = ACTIONS(23),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(167),
    [anon_sym_elseif] = ACTIONS(399),
    [anon_sym_end] = ACTIONS(1029),
    [sym_string] = ACTIONS(649),
    [sym_number] = ACTIONS(649),
  },
  [424] = {
    [anon_sym_AMP_AMP] = ACTIONS(659),
    [anon_sym_using] = ACTIONS(657),
    [anon_sym_struct] = ACTIONS(657),
    [anon_sym_function] = ACTIONS(657),
    [anon_sym_LPAREN] = ACTIONS(659),
    [sym__plus_operator] = ACTIONS(657),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(657),
    [sym_identifier] = ACTIONS(657),
    [anon_sym_if] = ACTIONS(657),
    [anon_sym_mutable] = ACTIONS(657),
    [anon_sym_module] = ACTIONS(657),
    [sym__times_operator] = ACTIONS(657),
    [anon_sym_PIPE_PIPE] = ACTIONS(657),
    [anon_sym_EQ_GT] = ACTIONS(659),
    [anon_sym_LT_COLON] = ACTIONS(659),
    [anon_sym_import] = ACTIONS(657),
    [anon_sym_end] = ACTIONS(657),
    [sym__arrow_operator] = ACTIONS(659),
    [sym_string] = ACTIONS(659),
    [anon_sym_COLON_COLON] = ACTIONS(659),
    [sym_number] = ACTIONS(659),
  },
  [425] = {
    [aux_sym_if_statement_repeat1] = STATE(317),
    [sym_elseif_clause] = STATE(317),
    [sym_else_clause] = STATE(471),
    [anon_sym_elseif] = ACTIONS(663),
    [anon_sym_end] = ACTIONS(1031),
    [anon_sym_else] = ACTIONS(389),
    [sym_comment] = ACTIONS(3),
  },
  [426] = {
    [aux_sym_if_statement_repeat1] = STATE(470),
    [aux_sym__expression_list_repeat1] = STATE(319),
    [sym_elseif_clause] = STATE(470),
    [sym_else_clause] = STATE(471),
    [anon_sym_elseif] = ACTIONS(399),
    [anon_sym_end] = ACTIONS(1029),
    [anon_sym_SEMI] = ACTIONS(1033),
    [anon_sym_else] = ACTIONS(389),
    [anon_sym_LF] = ACTIONS(1035),
    [sym_comment] = ACTIONS(53),
  },
  [427] = {
    [anon_sym_end] = ACTIONS(1031),
    [sym_comment] = ACTIONS(3),
  },
  [428] = {
    [sym_function_definition] = STATE(464),
    [sym_struct_definition] = STATE(464),
    [sym_if_statement] = STATE(464),
    [sym__expression] = STATE(464),
    [sym_parenthesized_expression] = STATE(464),
    [sym_call_expression] = STATE(464),
    [sym_subtype_clause] = STATE(473),
    [sym_import_statement] = STATE(464),
    [sym_parameterized_identifier] = STATE(464),
    [sym_pair_expression] = STATE(464),
    [sym_module_definition] = STATE(464),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(464),
    [sym_assignment_expression] = STATE(464),
    [sym_binary_expression] = STATE(464),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LT_COLON] = ACTIONS(107),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(1013),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(1019),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(1019),
  },
  [429] = {
    [aux_sym_argument_list_repeat1] = STATE(330),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(433),
    [anon_sym_RPAREN] = ACTIONS(1037),
  },
  [430] = {
    [aux_sym_parameter_list_repeat1] = STATE(475),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [sym__times_operator] = ACTIONS(485),
    [anon_sym_PIPE_PIPE] = ACTIONS(485),
    [anon_sym_EQ_GT] = ACTIONS(487),
    [anon_sym_LPAREN] = ACTIONS(487),
    [anon_sym_LT_COLON] = ACTIONS(487),
    [sym__plus_operator] = ACTIONS(485),
    [sym__assign_operator] = ACTIONS(485),
    [anon_sym_COMMA] = ACTIONS(561),
    [sym__arrow_operator] = ACTIONS(487),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(487),
  },
  [431] = {
    [anon_sym_AMP_AMP] = ACTIONS(1039),
    [anon_sym_LPAREN] = ACTIONS(1039),
    [sym__plus_operator] = ACTIONS(1039),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(1039),
    [anon_sym_else] = ACTIONS(1039),
    [sym__times_operator] = ACTIONS(1039),
    [anon_sym_SEMI] = ACTIONS(1039),
    [anon_sym_PIPE_PIPE] = ACTIONS(1039),
    [ts_builtin_sym_end] = ACTIONS(1041),
    [anon_sym_EQ_GT] = ACTIONS(1039),
    [anon_sym_LT_COLON] = ACTIONS(1039),
    [anon_sym_elseif] = ACTIONS(1039),
    [anon_sym_end] = ACTIONS(1039),
    [sym__arrow_operator] = ACTIONS(1039),
    [anon_sym_LF] = ACTIONS(1041),
    [anon_sym_COLON_COLON] = ACTIONS(1039),
  },
  [432] = {
    [sym_function_definition] = STATE(219),
    [sym_struct_definition] = STATE(219),
    [sym_parameterized_identifier] = STATE(219),
    [sym_if_statement] = STATE(219),
    [sym_pair_expression] = STATE(219),
    [sym_parenthesized_expression] = STATE(219),
    [sym_module_definition] = STATE(219),
    [sym_call_expression] = STATE(219),
    [sym__expression] = STATE(219),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(219),
    [sym_assignment_expression] = STATE(219),
    [sym_binary_expression] = STATE(219),
    [sym_import_statement] = STATE(219),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(1043),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(465),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(465),
  },
  [433] = {
    [anon_sym_AMP_AMP] = ACTIONS(1045),
    [anon_sym_LPAREN] = ACTIONS(1045),
    [sym__plus_operator] = ACTIONS(1045),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(1045),
    [anon_sym_else] = ACTIONS(1045),
    [sym__times_operator] = ACTIONS(1045),
    [anon_sym_SEMI] = ACTIONS(1045),
    [anon_sym_PIPE_PIPE] = ACTIONS(1045),
    [ts_builtin_sym_end] = ACTIONS(1047),
    [anon_sym_EQ_GT] = ACTIONS(1045),
    [anon_sym_LT_COLON] = ACTIONS(1045),
    [anon_sym_elseif] = ACTIONS(1045),
    [anon_sym_end] = ACTIONS(1045),
    [sym__arrow_operator] = ACTIONS(1045),
    [anon_sym_LF] = ACTIONS(1047),
    [anon_sym_COLON_COLON] = ACTIONS(1045),
  },
  [434] = {
    [anon_sym_AMP_AMP] = ACTIONS(892),
    [anon_sym_RBRACE] = ACTIONS(892),
    [anon_sym_using] = ACTIONS(890),
    [anon_sym_struct] = ACTIONS(890),
    [anon_sym_function] = ACTIONS(890),
    [anon_sym_LPAREN] = ACTIONS(892),
    [sym__plus_operator] = ACTIONS(890),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(890),
    [sym_identifier] = ACTIONS(890),
    [anon_sym_if] = ACTIONS(890),
    [anon_sym_mutable] = ACTIONS(890),
    [anon_sym_RPAREN] = ACTIONS(892),
    [anon_sym_module] = ACTIONS(890),
    [sym__times_operator] = ACTIONS(890),
    [anon_sym_PIPE_PIPE] = ACTIONS(890),
    [anon_sym_EQ_GT] = ACTIONS(892),
    [anon_sym_LT_COLON] = ACTIONS(892),
    [anon_sym_import] = ACTIONS(890),
    [anon_sym_COMMA] = ACTIONS(892),
    [sym__arrow_operator] = ACTIONS(892),
    [sym_string] = ACTIONS(892),
    [anon_sym_COLON_COLON] = ACTIONS(892),
    [sym_number] = ACTIONS(892),
  },
  [435] = {
    [aux_sym_parameter_list_repeat1] = STATE(435),
    [anon_sym_AMP_AMP] = ACTIONS(896),
    [sym__times_operator] = ACTIONS(894),
    [anon_sym_PIPE_PIPE] = ACTIONS(894),
    [anon_sym_LPAREN] = ACTIONS(896),
    [anon_sym_LT_COLON] = ACTIONS(896),
    [anon_sym_EQ_GT] = ACTIONS(896),
    [sym__plus_operator] = ACTIONS(894),
    [sym__assign_operator] = ACTIONS(894),
    [anon_sym_COMMA] = ACTIONS(956),
    [sym__arrow_operator] = ACTIONS(896),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(896),
    [anon_sym_RPAREN] = ACTIONS(896),
  },
  [436] = {
    [anon_sym_AMP_AMP] = ACTIONS(944),
    [anon_sym_RBRACE] = ACTIONS(944),
    [anon_sym_using] = ACTIONS(942),
    [anon_sym_struct] = ACTIONS(942),
    [anon_sym_function] = ACTIONS(942),
    [anon_sym_LPAREN] = ACTIONS(944),
    [sym__plus_operator] = ACTIONS(942),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(942),
    [sym_identifier] = ACTIONS(942),
    [anon_sym_if] = ACTIONS(942),
    [anon_sym_mutable] = ACTIONS(942),
    [anon_sym_RPAREN] = ACTIONS(944),
    [anon_sym_module] = ACTIONS(942),
    [sym__times_operator] = ACTIONS(942),
    [anon_sym_PIPE_PIPE] = ACTIONS(942),
    [anon_sym_EQ_GT] = ACTIONS(944),
    [anon_sym_LT_COLON] = ACTIONS(944),
    [anon_sym_import] = ACTIONS(942),
    [anon_sym_COMMA] = ACTIONS(944),
    [sym__arrow_operator] = ACTIONS(944),
    [sym_string] = ACTIONS(944),
    [anon_sym_COLON_COLON] = ACTIONS(944),
    [sym_number] = ACTIONS(944),
  },
  [437] = {
    [sym_function_definition] = STATE(219),
    [sym_struct_definition] = STATE(219),
    [sym_parameterized_identifier] = STATE(219),
    [sym_if_statement] = STATE(219),
    [sym_pair_expression] = STATE(219),
    [sym_parenthesized_expression] = STATE(219),
    [sym_module_definition] = STATE(219),
    [sym_call_expression] = STATE(219),
    [sym__expression] = STATE(219),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(219),
    [sym_assignment_expression] = STATE(219),
    [sym_binary_expression] = STATE(219),
    [sym_import_statement] = STATE(219),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(1049),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(465),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(465),
  },
  [438] = {
    [aux_sym__expression_list_repeat1] = STATE(226),
    [anon_sym_end] = ACTIONS(1049),
    [anon_sym_SEMI] = ACTIONS(1051),
    [anon_sym_LF] = ACTIONS(1053),
    [sym_comment] = ACTIONS(53),
  },
  [439] = {
    [anon_sym_AMP_AMP] = ACTIONS(961),
    [anon_sym_RBRACE] = ACTIONS(961),
    [anon_sym_using] = ACTIONS(959),
    [anon_sym_struct] = ACTIONS(959),
    [anon_sym_function] = ACTIONS(959),
    [anon_sym_LPAREN] = ACTIONS(961),
    [sym__plus_operator] = ACTIONS(959),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(959),
    [sym_identifier] = ACTIONS(959),
    [anon_sym_if] = ACTIONS(959),
    [anon_sym_mutable] = ACTIONS(959),
    [anon_sym_RPAREN] = ACTIONS(961),
    [anon_sym_module] = ACTIONS(959),
    [sym__times_operator] = ACTIONS(959),
    [anon_sym_PIPE_PIPE] = ACTIONS(959),
    [anon_sym_EQ_GT] = ACTIONS(961),
    [anon_sym_LT_COLON] = ACTIONS(961),
    [anon_sym_import] = ACTIONS(959),
    [anon_sym_COMMA] = ACTIONS(961),
    [sym__arrow_operator] = ACTIONS(961),
    [sym_string] = ACTIONS(961),
    [anon_sym_COLON_COLON] = ACTIONS(961),
    [sym_number] = ACTIONS(961),
  },
  [440] = {
    [sym_function_definition] = STATE(219),
    [sym_struct_definition] = STATE(219),
    [sym_parameterized_identifier] = STATE(219),
    [sym_if_statement] = STATE(219),
    [sym_pair_expression] = STATE(219),
    [sym_parenthesized_expression] = STATE(219),
    [sym_module_definition] = STATE(219),
    [sym_call_expression] = STATE(219),
    [sym__expression] = STATE(219),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(219),
    [sym_assignment_expression] = STATE(219),
    [sym_binary_expression] = STATE(219),
    [sym_import_statement] = STATE(219),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(1055),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(465),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(465),
  },
  [441] = {
    [anon_sym_AMP_AMP] = ACTIONS(995),
    [anon_sym_RBRACE] = ACTIONS(995),
    [anon_sym_using] = ACTIONS(993),
    [anon_sym_struct] = ACTIONS(993),
    [anon_sym_function] = ACTIONS(993),
    [anon_sym_LPAREN] = ACTIONS(995),
    [sym__plus_operator] = ACTIONS(993),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(993),
    [sym_identifier] = ACTIONS(993),
    [anon_sym_if] = ACTIONS(993),
    [anon_sym_mutable] = ACTIONS(993),
    [anon_sym_RPAREN] = ACTIONS(995),
    [anon_sym_module] = ACTIONS(993),
    [sym__times_operator] = ACTIONS(993),
    [anon_sym_PIPE_PIPE] = ACTIONS(993),
    [anon_sym_EQ_GT] = ACTIONS(995),
    [anon_sym_LT_COLON] = ACTIONS(995),
    [anon_sym_import] = ACTIONS(993),
    [anon_sym_COMMA] = ACTIONS(995),
    [sym__arrow_operator] = ACTIONS(995),
    [sym_string] = ACTIONS(995),
    [anon_sym_COLON_COLON] = ACTIONS(995),
    [sym_number] = ACTIONS(995),
  },
  [442] = {
    [anon_sym_end] = ACTIONS(1057),
    [sym_comment] = ACTIONS(3),
  },
  [443] = {
    [aux_sym_if_statement_repeat1] = STATE(317),
    [sym_elseif_clause] = STATE(317),
    [sym_else_clause] = STATE(481),
    [anon_sym_elseif] = ACTIONS(663),
    [anon_sym_end] = ACTIONS(1057),
    [anon_sym_else] = ACTIONS(389),
    [sym_comment] = ACTIONS(3),
  },
  [444] = {
    [sym_argument_list] = STATE(43),
    [aux_sym__expression_list_repeat1] = STATE(482),
    [anon_sym_AMP_AMP] = ACTIONS(227),
    [sym__times_operator] = ACTIONS(229),
    [anon_sym_SEMI] = ACTIONS(1051),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LT_COLON] = ACTIONS(79),
    [sym__plus_operator] = ACTIONS(235),
    [sym__assign_operator] = ACTIONS(237),
    [anon_sym_EQ_GT] = ACTIONS(239),
    [anon_sym_end] = ACTIONS(1049),
    [sym__arrow_operator] = ACTIONS(243),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LF] = ACTIONS(1053),
    [anon_sym_COLON_COLON] = ACTIONS(79),
  },
  [445] = {
    [aux_sym_parameter_list_repeat1] = STATE(483),
    [anon_sym_AMP_AMP] = ACTIONS(711),
    [anon_sym_RBRACE] = ACTIONS(711),
    [sym__times_operator] = ACTIONS(709),
    [anon_sym_PIPE_PIPE] = ACTIONS(709),
    [anon_sym_LPAREN] = ACTIONS(711),
    [anon_sym_LT_COLON] = ACTIONS(711),
    [anon_sym_EQ_GT] = ACTIONS(711),
    [sym__plus_operator] = ACTIONS(709),
    [sym__assign_operator] = ACTIONS(709),
    [anon_sym_COMMA] = ACTIONS(711),
    [sym__arrow_operator] = ACTIONS(711),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(711),
  },
  [446] = {
    [aux_sym_parameter_list_repeat1] = STATE(446),
    [anon_sym_AMP_AMP] = ACTIONS(896),
    [anon_sym_using] = ACTIONS(894),
    [anon_sym_struct] = ACTIONS(894),
    [anon_sym_function] = ACTIONS(894),
    [anon_sym_LPAREN] = ACTIONS(896),
    [sym__plus_operator] = ACTIONS(894),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(894),
    [sym_identifier] = ACTIONS(894),
    [anon_sym_if] = ACTIONS(894),
    [anon_sym_mutable] = ACTIONS(894),
    [anon_sym_module] = ACTIONS(894),
    [sym__times_operator] = ACTIONS(894),
    [anon_sym_PIPE_PIPE] = ACTIONS(894),
    [anon_sym_EQ_GT] = ACTIONS(896),
    [anon_sym_LT_COLON] = ACTIONS(896),
    [anon_sym_import] = ACTIONS(894),
    [anon_sym_COMMA] = ACTIONS(956),
    [sym__arrow_operator] = ACTIONS(896),
    [sym_string] = ACTIONS(896),
    [anon_sym_COLON_COLON] = ACTIONS(896),
    [sym_number] = ACTIONS(896),
  },
  [447] = {
    [anon_sym_AMP_AMP] = ACTIONS(689),
    [anon_sym_using] = ACTIONS(687),
    [anon_sym_struct] = ACTIONS(687),
    [anon_sym_function] = ACTIONS(687),
    [anon_sym_LPAREN] = ACTIONS(689),
    [sym__plus_operator] = ACTIONS(687),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(687),
    [sym_identifier] = ACTIONS(687),
    [anon_sym_if] = ACTIONS(687),
    [anon_sym_mutable] = ACTIONS(687),
    [anon_sym_module] = ACTIONS(687),
    [sym__times_operator] = ACTIONS(687),
    [anon_sym_PIPE_PIPE] = ACTIONS(687),
    [anon_sym_EQ_GT] = ACTIONS(689),
    [anon_sym_LT_COLON] = ACTIONS(689),
    [anon_sym_import] = ACTIONS(687),
    [sym__arrow_operator] = ACTIONS(689),
    [sym_string] = ACTIONS(689),
    [anon_sym_COLON_COLON] = ACTIONS(689),
    [sym_number] = ACTIONS(689),
  },
  [448] = {
    [aux_sym_parameter_list_repeat1] = STATE(484),
    [anon_sym_AMP_AMP] = ACTIONS(709),
    [anon_sym_LPAREN] = ACTIONS(709),
    [sym__plus_operator] = ACTIONS(709),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(709),
    [anon_sym_else] = ACTIONS(709),
    [sym__times_operator] = ACTIONS(709),
    [anon_sym_SEMI] = ACTIONS(709),
    [anon_sym_PIPE_PIPE] = ACTIONS(709),
    [anon_sym_EQ_GT] = ACTIONS(709),
    [anon_sym_LT_COLON] = ACTIONS(709),
    [anon_sym_elseif] = ACTIONS(709),
    [anon_sym_end] = ACTIONS(709),
    [anon_sym_COMMA] = ACTIONS(489),
    [sym__arrow_operator] = ACTIONS(709),
    [anon_sym_LF] = ACTIONS(711),
    [anon_sym_COLON_COLON] = ACTIONS(709),
  },
  [449] = {
    [sym_function_definition] = STATE(219),
    [sym_struct_definition] = STATE(219),
    [sym_parameterized_identifier] = STATE(219),
    [sym_if_statement] = STATE(219),
    [sym_pair_expression] = STATE(219),
    [sym_parenthesized_expression] = STATE(219),
    [sym_module_definition] = STATE(219),
    [sym_call_expression] = STATE(219),
    [sym__expression] = STATE(219),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(219),
    [sym_assignment_expression] = STATE(219),
    [sym_binary_expression] = STATE(219),
    [sym_import_statement] = STATE(219),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(1059),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(465),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(465),
  },
  [450] = {
    [anon_sym_AMP_AMP] = ACTIONS(1061),
    [anon_sym_LPAREN] = ACTIONS(1061),
    [sym__plus_operator] = ACTIONS(1061),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(1061),
    [anon_sym_else] = ACTIONS(1061),
    [sym__times_operator] = ACTIONS(1061),
    [anon_sym_SEMI] = ACTIONS(1061),
    [anon_sym_PIPE_PIPE] = ACTIONS(1061),
    [ts_builtin_sym_end] = ACTIONS(1063),
    [anon_sym_EQ_GT] = ACTIONS(1061),
    [anon_sym_LT_COLON] = ACTIONS(1061),
    [anon_sym_elseif] = ACTIONS(1061),
    [anon_sym_end] = ACTIONS(1061),
    [sym__arrow_operator] = ACTIONS(1061),
    [anon_sym_LF] = ACTIONS(1063),
    [anon_sym_COLON_COLON] = ACTIONS(1061),
  },
  [451] = {
    [sym_function_definition] = STATE(311),
    [sym_struct_definition] = STATE(311),
    [sym_parameterized_identifier] = STATE(311),
    [sym_if_statement] = STATE(311),
    [sym_pair_expression] = STATE(311),
    [sym_parenthesized_expression] = STATE(311),
    [sym_module_definition] = STATE(311),
    [sym_call_expression] = STATE(311),
    [sym__expression] = STATE(311),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(311),
    [sym_assignment_expression] = STATE(311),
    [sym_binary_expression] = STATE(311),
    [sym_import_statement] = STATE(311),
    [anon_sym_using] = ACTIONS(167),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_else] = ACTIONS(1065),
    [anon_sym_mutable] = ACTIONS(23),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(167),
    [anon_sym_elseif] = ACTIONS(1065),
    [anon_sym_end] = ACTIONS(1065),
    [sym_string] = ACTIONS(649),
    [sym_number] = ACTIONS(649),
  },
  [452] = {
    [aux_sym__expression_list_repeat1] = STATE(319),
    [anon_sym_elseif] = ACTIONS(1065),
    [anon_sym_end] = ACTIONS(1065),
    [anon_sym_SEMI] = ACTIONS(1067),
    [anon_sym_else] = ACTIONS(1065),
    [anon_sym_LF] = ACTIONS(1069),
    [sym_comment] = ACTIONS(53),
  },
  [453] = {
    [anon_sym_end] = ACTIONS(1071),
    [sym_comment] = ACTIONS(3),
  },
  [454] = {
    [aux_sym__expression_list_repeat1] = STATE(226),
    [anon_sym_end] = ACTIONS(1043),
    [anon_sym_SEMI] = ACTIONS(1073),
    [anon_sym_LF] = ACTIONS(1075),
    [sym_comment] = ACTIONS(53),
  },
  [455] = {
    [aux_sym_parameter_list_repeat1] = STATE(435),
    [anon_sym_AMP_AMP] = ACTIONS(711),
    [sym__times_operator] = ACTIONS(709),
    [anon_sym_PIPE_PIPE] = ACTIONS(709),
    [anon_sym_LPAREN] = ACTIONS(711),
    [anon_sym_LT_COLON] = ACTIONS(711),
    [anon_sym_EQ_GT] = ACTIONS(711),
    [sym__plus_operator] = ACTIONS(709),
    [sym__assign_operator] = ACTIONS(709),
    [anon_sym_COMMA] = ACTIONS(711),
    [sym__arrow_operator] = ACTIONS(711),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(711),
    [anon_sym_RPAREN] = ACTIONS(711),
  },
  [456] = {
    [aux_sym_parameter_list_repeat1] = STATE(456),
    [anon_sym_AMP_AMP] = ACTIONS(894),
    [anon_sym_LPAREN] = ACTIONS(894),
    [sym__plus_operator] = ACTIONS(894),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(894),
    [sym__times_operator] = ACTIONS(894),
    [anon_sym_SEMI] = ACTIONS(894),
    [anon_sym_PIPE_PIPE] = ACTIONS(894),
    [anon_sym_EQ_GT] = ACTIONS(894),
    [anon_sym_LT_COLON] = ACTIONS(894),
    [anon_sym_end] = ACTIONS(894),
    [anon_sym_COMMA] = ACTIONS(898),
    [sym__arrow_operator] = ACTIONS(894),
    [anon_sym_LF] = ACTIONS(896),
    [anon_sym_COLON_COLON] = ACTIONS(894),
  },
  [457] = {
    [anon_sym_AMP_AMP] = ACTIONS(697),
    [anon_sym_using] = ACTIONS(695),
    [anon_sym_struct] = ACTIONS(695),
    [anon_sym_function] = ACTIONS(695),
    [anon_sym_LPAREN] = ACTIONS(697),
    [sym__plus_operator] = ACTIONS(695),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(695),
    [sym_identifier] = ACTIONS(695),
    [anon_sym_if] = ACTIONS(695),
    [anon_sym_mutable] = ACTIONS(695),
    [anon_sym_module] = ACTIONS(695),
    [sym__times_operator] = ACTIONS(695),
    [anon_sym_PIPE_PIPE] = ACTIONS(695),
    [anon_sym_EQ_GT] = ACTIONS(697),
    [anon_sym_LT_COLON] = ACTIONS(697),
    [anon_sym_import] = ACTIONS(695),
    [anon_sym_end] = ACTIONS(695),
    [sym__arrow_operator] = ACTIONS(697),
    [sym_string] = ACTIONS(697),
    [anon_sym_COLON_COLON] = ACTIONS(697),
    [sym_number] = ACTIONS(697),
  },
  [458] = {
    [sym_function_definition] = STATE(219),
    [sym_struct_definition] = STATE(219),
    [sym_parameterized_identifier] = STATE(219),
    [sym_if_statement] = STATE(219),
    [sym_pair_expression] = STATE(219),
    [sym_parenthesized_expression] = STATE(219),
    [sym_module_definition] = STATE(219),
    [sym_call_expression] = STATE(219),
    [sym__expression] = STATE(219),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(219),
    [sym_assignment_expression] = STATE(219),
    [sym_binary_expression] = STATE(219),
    [sym_import_statement] = STATE(219),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(1077),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(465),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(465),
  },
  [459] = {
    [sym_identifier] = ACTIONS(1079),
    [sym_comment] = ACTIONS(3),
  },
  [460] = {
    [aux_sym_parameter_list_repeat1] = STATE(490),
    [anon_sym_AMP_AMP] = ACTIONS(711),
    [anon_sym_using] = ACTIONS(709),
    [anon_sym_struct] = ACTIONS(709),
    [anon_sym_function] = ACTIONS(709),
    [anon_sym_LPAREN] = ACTIONS(711),
    [sym__plus_operator] = ACTIONS(709),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(709),
    [sym_identifier] = ACTIONS(709),
    [anon_sym_if] = ACTIONS(709),
    [anon_sym_mutable] = ACTIONS(709),
    [anon_sym_module] = ACTIONS(709),
    [sym__times_operator] = ACTIONS(709),
    [anon_sym_PIPE_PIPE] = ACTIONS(709),
    [anon_sym_EQ_GT] = ACTIONS(711),
    [anon_sym_LT_COLON] = ACTIONS(711),
    [anon_sym_import] = ACTIONS(709),
    [anon_sym_end] = ACTIONS(709),
    [anon_sym_COMMA] = ACTIONS(1011),
    [sym__arrow_operator] = ACTIONS(711),
    [sym_string] = ACTIONS(711),
    [anon_sym_COLON_COLON] = ACTIONS(711),
    [sym_number] = ACTIONS(711),
  },
  [461] = {
    [anon_sym_AMP_AMP] = ACTIONS(775),
    [anon_sym_using] = ACTIONS(773),
    [anon_sym_struct] = ACTIONS(773),
    [anon_sym_function] = ACTIONS(773),
    [anon_sym_LPAREN] = ACTIONS(775),
    [sym__plus_operator] = ACTIONS(773),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(773),
    [sym_identifier] = ACTIONS(773),
    [anon_sym_if] = ACTIONS(773),
    [anon_sym_mutable] = ACTIONS(773),
    [anon_sym_module] = ACTIONS(773),
    [sym__times_operator] = ACTIONS(773),
    [anon_sym_PIPE_PIPE] = ACTIONS(773),
    [anon_sym_EQ_GT] = ACTIONS(775),
    [anon_sym_LT_COLON] = ACTIONS(775),
    [anon_sym_import] = ACTIONS(773),
    [anon_sym_end] = ACTIONS(773),
    [sym__arrow_operator] = ACTIONS(775),
    [sym_string] = ACTIONS(775),
    [anon_sym_COLON_COLON] = ACTIONS(775),
    [sym_number] = ACTIONS(775),
  },
  [462] = {
    [sym_function_definition] = STATE(219),
    [sym_struct_definition] = STATE(219),
    [sym_parameterized_identifier] = STATE(219),
    [sym_if_statement] = STATE(219),
    [sym_pair_expression] = STATE(219),
    [sym_parenthesized_expression] = STATE(219),
    [sym_module_definition] = STATE(219),
    [sym_call_expression] = STATE(219),
    [sym__expression] = STATE(219),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(219),
    [sym_assignment_expression] = STATE(219),
    [sym_binary_expression] = STATE(219),
    [sym_import_statement] = STATE(219),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(1081),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(465),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(465),
  },
  [463] = {
    [aux_sym__expression_list_repeat1] = STATE(226),
    [anon_sym_end] = ACTIONS(1081),
    [anon_sym_SEMI] = ACTIONS(1083),
    [anon_sym_LF] = ACTIONS(1085),
    [sym_comment] = ACTIONS(53),
  },
  [464] = {
    [sym_argument_list] = STATE(43),
    [aux_sym__expression_list_repeat1] = STATE(493),
    [anon_sym_AMP_AMP] = ACTIONS(227),
    [sym__times_operator] = ACTIONS(229),
    [anon_sym_SEMI] = ACTIONS(1083),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LT_COLON] = ACTIONS(79),
    [sym__plus_operator] = ACTIONS(235),
    [sym__assign_operator] = ACTIONS(237),
    [anon_sym_EQ_GT] = ACTIONS(239),
    [anon_sym_end] = ACTIONS(1081),
    [sym__arrow_operator] = ACTIONS(243),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LF] = ACTIONS(1085),
    [anon_sym_COLON_COLON] = ACTIONS(79),
  },
  [465] = {
    [sym_function_definition] = STATE(219),
    [sym_struct_definition] = STATE(219),
    [sym_parameterized_identifier] = STATE(219),
    [sym_if_statement] = STATE(219),
    [sym_pair_expression] = STATE(219),
    [sym_parenthesized_expression] = STATE(219),
    [sym_module_definition] = STATE(219),
    [sym_call_expression] = STATE(219),
    [sym__expression] = STATE(219),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(219),
    [sym_assignment_expression] = STATE(219),
    [sym_binary_expression] = STATE(219),
    [sym_import_statement] = STATE(219),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(1087),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(465),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(465),
  },
  [466] = {
    [anon_sym_AMP_AMP] = ACTIONS(795),
    [anon_sym_using] = ACTIONS(793),
    [anon_sym_struct] = ACTIONS(793),
    [anon_sym_function] = ACTIONS(793),
    [anon_sym_LPAREN] = ACTIONS(795),
    [sym__plus_operator] = ACTIONS(793),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(793),
    [sym_identifier] = ACTIONS(793),
    [anon_sym_if] = ACTIONS(793),
    [anon_sym_mutable] = ACTIONS(793),
    [anon_sym_module] = ACTIONS(793),
    [sym__times_operator] = ACTIONS(793),
    [anon_sym_PIPE_PIPE] = ACTIONS(793),
    [anon_sym_EQ_GT] = ACTIONS(795),
    [anon_sym_LT_COLON] = ACTIONS(795),
    [anon_sym_import] = ACTIONS(793),
    [anon_sym_end] = ACTIONS(793),
    [sym__arrow_operator] = ACTIONS(795),
    [sym_string] = ACTIONS(795),
    [anon_sym_COLON_COLON] = ACTIONS(795),
    [sym_number] = ACTIONS(795),
  },
  [467] = {
    [aux_sym__expression_list_repeat1] = STATE(226),
    [anon_sym_end] = ACTIONS(1087),
    [anon_sym_SEMI] = ACTIONS(1089),
    [anon_sym_LF] = ACTIONS(1091),
    [sym_comment] = ACTIONS(53),
  },
  [468] = {
    [anon_sym_AMP_AMP] = ACTIONS(839),
    [anon_sym_using] = ACTIONS(837),
    [anon_sym_struct] = ACTIONS(837),
    [anon_sym_function] = ACTIONS(837),
    [anon_sym_LPAREN] = ACTIONS(839),
    [sym__plus_operator] = ACTIONS(837),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(837),
    [sym_identifier] = ACTIONS(837),
    [anon_sym_if] = ACTIONS(837),
    [anon_sym_mutable] = ACTIONS(837),
    [anon_sym_module] = ACTIONS(837),
    [sym__times_operator] = ACTIONS(837),
    [anon_sym_PIPE_PIPE] = ACTIONS(837),
    [anon_sym_EQ_GT] = ACTIONS(839),
    [anon_sym_LT_COLON] = ACTIONS(839),
    [anon_sym_import] = ACTIONS(837),
    [anon_sym_end] = ACTIONS(837),
    [sym__arrow_operator] = ACTIONS(839),
    [sym_string] = ACTIONS(839),
    [anon_sym_COLON_COLON] = ACTIONS(839),
    [sym_number] = ACTIONS(839),
  },
  [469] = {
    [anon_sym_AMP_AMP] = ACTIONS(856),
    [anon_sym_using] = ACTIONS(854),
    [anon_sym_struct] = ACTIONS(854),
    [anon_sym_function] = ACTIONS(854),
    [anon_sym_LPAREN] = ACTIONS(856),
    [sym__plus_operator] = ACTIONS(854),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(854),
    [sym_identifier] = ACTIONS(854),
    [anon_sym_if] = ACTIONS(854),
    [anon_sym_mutable] = ACTIONS(854),
    [anon_sym_module] = ACTIONS(854),
    [sym__times_operator] = ACTIONS(854),
    [anon_sym_PIPE_PIPE] = ACTIONS(854),
    [anon_sym_EQ_GT] = ACTIONS(856),
    [anon_sym_LT_COLON] = ACTIONS(856),
    [anon_sym_import] = ACTIONS(854),
    [anon_sym_end] = ACTIONS(854),
    [sym__arrow_operator] = ACTIONS(856),
    [sym_string] = ACTIONS(856),
    [anon_sym_COLON_COLON] = ACTIONS(856),
    [sym_number] = ACTIONS(856),
  },
  [470] = {
    [aux_sym_if_statement_repeat1] = STATE(317),
    [sym_elseif_clause] = STATE(317),
    [sym_else_clause] = STATE(497),
    [anon_sym_elseif] = ACTIONS(663),
    [anon_sym_end] = ACTIONS(1093),
    [anon_sym_else] = ACTIONS(389),
    [sym_comment] = ACTIONS(3),
  },
  [471] = {
    [anon_sym_end] = ACTIONS(1093),
    [sym_comment] = ACTIONS(3),
  },
  [472] = {
    [aux_sym_if_statement_repeat1] = STATE(498),
    [sym_function_definition] = STATE(311),
    [sym_struct_definition] = STATE(311),
    [sym_if_statement] = STATE(311),
    [sym__expression] = STATE(311),
    [sym_parenthesized_expression] = STATE(311),
    [sym_call_expression] = STATE(311),
    [sym_import_statement] = STATE(311),
    [sym_parameterized_identifier] = STATE(311),
    [sym_pair_expression] = STATE(311),
    [sym_module_definition] = STATE(311),
    [sym_elseif_clause] = STATE(498),
    [sym_else_clause] = STATE(497),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(311),
    [sym_assignment_expression] = STATE(311),
    [sym_binary_expression] = STATE(311),
    [anon_sym_using] = ACTIONS(167),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_else] = ACTIONS(389),
    [anon_sym_mutable] = ACTIONS(23),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(167),
    [anon_sym_elseif] = ACTIONS(399),
    [anon_sym_end] = ACTIONS(1095),
    [sym_string] = ACTIONS(649),
    [sym_number] = ACTIONS(649),
  },
  [473] = {
    [sym_function_definition] = STATE(499),
    [sym_struct_definition] = STATE(499),
    [sym_parameterized_identifier] = STATE(499),
    [sym_if_statement] = STATE(499),
    [sym_pair_expression] = STATE(499),
    [sym_parenthesized_expression] = STATE(499),
    [sym_module_definition] = STATE(499),
    [sym_call_expression] = STATE(499),
    [sym__expression] = STATE(499),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(499),
    [sym_assignment_expression] = STATE(499),
    [sym_binary_expression] = STATE(499),
    [sym_import_statement] = STATE(499),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(1081),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(1097),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(1097),
  },
  [474] = {
    [anon_sym_AMP_AMP] = ACTIONS(885),
    [anon_sym_using] = ACTIONS(883),
    [anon_sym_struct] = ACTIONS(883),
    [anon_sym_function] = ACTIONS(883),
    [anon_sym_LPAREN] = ACTIONS(885),
    [sym__plus_operator] = ACTIONS(883),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(883),
    [sym_identifier] = ACTIONS(883),
    [anon_sym_if] = ACTIONS(883),
    [anon_sym_mutable] = ACTIONS(883),
    [anon_sym_module] = ACTIONS(883),
    [sym__times_operator] = ACTIONS(883),
    [anon_sym_PIPE_PIPE] = ACTIONS(883),
    [anon_sym_EQ_GT] = ACTIONS(885),
    [anon_sym_LT_COLON] = ACTIONS(885),
    [anon_sym_import] = ACTIONS(883),
    [anon_sym_end] = ACTIONS(883),
    [sym__arrow_operator] = ACTIONS(885),
    [sym_string] = ACTIONS(885),
    [anon_sym_COLON_COLON] = ACTIONS(885),
    [sym_number] = ACTIONS(885),
  },
  [475] = {
    [aux_sym_parameter_list_repeat1] = STATE(500),
    [anon_sym_AMP_AMP] = ACTIONS(711),
    [sym__times_operator] = ACTIONS(709),
    [anon_sym_PIPE_PIPE] = ACTIONS(709),
    [anon_sym_EQ_GT] = ACTIONS(711),
    [anon_sym_LPAREN] = ACTIONS(711),
    [anon_sym_LT_COLON] = ACTIONS(711),
    [sym__plus_operator] = ACTIONS(709),
    [sym__assign_operator] = ACTIONS(709),
    [anon_sym_COMMA] = ACTIONS(561),
    [sym__arrow_operator] = ACTIONS(711),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(711),
  },
  [476] = {
    [anon_sym_AMP_AMP] = ACTIONS(1099),
    [anon_sym_LPAREN] = ACTIONS(1099),
    [sym__plus_operator] = ACTIONS(1099),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(1099),
    [anon_sym_else] = ACTIONS(1099),
    [sym__times_operator] = ACTIONS(1099),
    [anon_sym_SEMI] = ACTIONS(1099),
    [anon_sym_PIPE_PIPE] = ACTIONS(1099),
    [ts_builtin_sym_end] = ACTIONS(1101),
    [anon_sym_EQ_GT] = ACTIONS(1099),
    [anon_sym_LT_COLON] = ACTIONS(1099),
    [anon_sym_elseif] = ACTIONS(1099),
    [anon_sym_end] = ACTIONS(1099),
    [sym__arrow_operator] = ACTIONS(1099),
    [anon_sym_LF] = ACTIONS(1101),
    [anon_sym_COLON_COLON] = ACTIONS(1099),
  },
  [477] = {
    [anon_sym_AMP_AMP] = ACTIONS(1041),
    [anon_sym_RBRACE] = ACTIONS(1041),
    [anon_sym_using] = ACTIONS(1039),
    [anon_sym_struct] = ACTIONS(1039),
    [anon_sym_function] = ACTIONS(1039),
    [anon_sym_LPAREN] = ACTIONS(1041),
    [sym__plus_operator] = ACTIONS(1039),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(1039),
    [sym_identifier] = ACTIONS(1039),
    [anon_sym_if] = ACTIONS(1039),
    [anon_sym_mutable] = ACTIONS(1039),
    [anon_sym_RPAREN] = ACTIONS(1041),
    [anon_sym_module] = ACTIONS(1039),
    [sym__times_operator] = ACTIONS(1039),
    [anon_sym_PIPE_PIPE] = ACTIONS(1039),
    [anon_sym_EQ_GT] = ACTIONS(1041),
    [anon_sym_LT_COLON] = ACTIONS(1041),
    [anon_sym_import] = ACTIONS(1039),
    [anon_sym_COMMA] = ACTIONS(1041),
    [sym__arrow_operator] = ACTIONS(1041),
    [sym_string] = ACTIONS(1041),
    [anon_sym_COLON_COLON] = ACTIONS(1041),
    [sym_number] = ACTIONS(1041),
  },
  [478] = {
    [sym_function_definition] = STATE(219),
    [sym_struct_definition] = STATE(219),
    [sym_parameterized_identifier] = STATE(219),
    [sym_if_statement] = STATE(219),
    [sym_pair_expression] = STATE(219),
    [sym_parenthesized_expression] = STATE(219),
    [sym_module_definition] = STATE(219),
    [sym_call_expression] = STATE(219),
    [sym__expression] = STATE(219),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(219),
    [sym_assignment_expression] = STATE(219),
    [sym_binary_expression] = STATE(219),
    [sym_import_statement] = STATE(219),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(1103),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(465),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(465),
  },
  [479] = {
    [anon_sym_AMP_AMP] = ACTIONS(1047),
    [anon_sym_RBRACE] = ACTIONS(1047),
    [anon_sym_using] = ACTIONS(1045),
    [anon_sym_struct] = ACTIONS(1045),
    [anon_sym_function] = ACTIONS(1045),
    [anon_sym_LPAREN] = ACTIONS(1047),
    [sym__plus_operator] = ACTIONS(1045),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(1045),
    [sym_identifier] = ACTIONS(1045),
    [anon_sym_if] = ACTIONS(1045),
    [anon_sym_mutable] = ACTIONS(1045),
    [anon_sym_RPAREN] = ACTIONS(1047),
    [anon_sym_module] = ACTIONS(1045),
    [sym__times_operator] = ACTIONS(1045),
    [anon_sym_PIPE_PIPE] = ACTIONS(1045),
    [anon_sym_EQ_GT] = ACTIONS(1047),
    [anon_sym_LT_COLON] = ACTIONS(1047),
    [anon_sym_import] = ACTIONS(1045),
    [anon_sym_COMMA] = ACTIONS(1047),
    [sym__arrow_operator] = ACTIONS(1047),
    [sym_string] = ACTIONS(1047),
    [anon_sym_COLON_COLON] = ACTIONS(1047),
    [sym_number] = ACTIONS(1047),
  },
  [480] = {
    [anon_sym_AMP_AMP] = ACTIONS(1063),
    [anon_sym_RBRACE] = ACTIONS(1063),
    [anon_sym_using] = ACTIONS(1061),
    [anon_sym_struct] = ACTIONS(1061),
    [anon_sym_function] = ACTIONS(1061),
    [anon_sym_LPAREN] = ACTIONS(1063),
    [sym__plus_operator] = ACTIONS(1061),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(1061),
    [sym_identifier] = ACTIONS(1061),
    [anon_sym_if] = ACTIONS(1061),
    [anon_sym_mutable] = ACTIONS(1061),
    [anon_sym_RPAREN] = ACTIONS(1063),
    [anon_sym_module] = ACTIONS(1061),
    [sym__times_operator] = ACTIONS(1061),
    [anon_sym_PIPE_PIPE] = ACTIONS(1061),
    [anon_sym_EQ_GT] = ACTIONS(1063),
    [anon_sym_LT_COLON] = ACTIONS(1063),
    [anon_sym_import] = ACTIONS(1061),
    [anon_sym_COMMA] = ACTIONS(1063),
    [sym__arrow_operator] = ACTIONS(1063),
    [sym_string] = ACTIONS(1063),
    [anon_sym_COLON_COLON] = ACTIONS(1063),
    [sym_number] = ACTIONS(1063),
  },
  [481] = {
    [anon_sym_end] = ACTIONS(1105),
    [sym_comment] = ACTIONS(3),
  },
  [482] = {
    [aux_sym__expression_list_repeat1] = STATE(226),
    [anon_sym_end] = ACTIONS(1103),
    [anon_sym_SEMI] = ACTIONS(1107),
    [anon_sym_LF] = ACTIONS(1109),
    [sym_comment] = ACTIONS(53),
  },
  [483] = {
    [aux_sym_parameter_list_repeat1] = STATE(483),
    [anon_sym_AMP_AMP] = ACTIONS(896),
    [anon_sym_RBRACE] = ACTIONS(896),
    [sym__times_operator] = ACTIONS(894),
    [anon_sym_PIPE_PIPE] = ACTIONS(894),
    [anon_sym_LPAREN] = ACTIONS(896),
    [anon_sym_LT_COLON] = ACTIONS(896),
    [anon_sym_EQ_GT] = ACTIONS(896),
    [sym__plus_operator] = ACTIONS(894),
    [sym__assign_operator] = ACTIONS(894),
    [anon_sym_COMMA] = ACTIONS(956),
    [sym__arrow_operator] = ACTIONS(896),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(896),
  },
  [484] = {
    [aux_sym_parameter_list_repeat1] = STATE(484),
    [anon_sym_AMP_AMP] = ACTIONS(894),
    [anon_sym_LPAREN] = ACTIONS(894),
    [sym__plus_operator] = ACTIONS(894),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(894),
    [anon_sym_else] = ACTIONS(894),
    [sym__times_operator] = ACTIONS(894),
    [anon_sym_SEMI] = ACTIONS(894),
    [anon_sym_PIPE_PIPE] = ACTIONS(894),
    [anon_sym_EQ_GT] = ACTIONS(894),
    [anon_sym_LT_COLON] = ACTIONS(894),
    [anon_sym_elseif] = ACTIONS(894),
    [anon_sym_end] = ACTIONS(894),
    [anon_sym_COMMA] = ACTIONS(898),
    [sym__arrow_operator] = ACTIONS(894),
    [anon_sym_LF] = ACTIONS(896),
    [anon_sym_COLON_COLON] = ACTIONS(894),
  },
  [485] = {
    [sym_function_definition] = STATE(311),
    [sym_struct_definition] = STATE(311),
    [sym_parameterized_identifier] = STATE(311),
    [sym_if_statement] = STATE(311),
    [sym_pair_expression] = STATE(311),
    [sym_parenthesized_expression] = STATE(311),
    [sym_module_definition] = STATE(311),
    [sym_call_expression] = STATE(311),
    [sym__expression] = STATE(311),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(311),
    [sym_assignment_expression] = STATE(311),
    [sym_binary_expression] = STATE(311),
    [sym_import_statement] = STATE(311),
    [anon_sym_using] = ACTIONS(167),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_else] = ACTIONS(1111),
    [anon_sym_mutable] = ACTIONS(23),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(167),
    [anon_sym_elseif] = ACTIONS(1111),
    [anon_sym_end] = ACTIONS(1111),
    [sym_string] = ACTIONS(649),
    [sym_number] = ACTIONS(649),
  },
  [486] = {
    [anon_sym_AMP_AMP] = ACTIONS(1113),
    [anon_sym_LPAREN] = ACTIONS(1113),
    [sym__plus_operator] = ACTIONS(1113),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(1113),
    [anon_sym_else] = ACTIONS(1113),
    [sym__times_operator] = ACTIONS(1113),
    [anon_sym_SEMI] = ACTIONS(1113),
    [anon_sym_PIPE_PIPE] = ACTIONS(1113),
    [ts_builtin_sym_end] = ACTIONS(1115),
    [anon_sym_EQ_GT] = ACTIONS(1113),
    [anon_sym_LT_COLON] = ACTIONS(1113),
    [anon_sym_elseif] = ACTIONS(1113),
    [anon_sym_end] = ACTIONS(1113),
    [sym__arrow_operator] = ACTIONS(1113),
    [anon_sym_LF] = ACTIONS(1115),
    [anon_sym_COLON_COLON] = ACTIONS(1113),
  },
  [487] = {
    [sym_function_definition] = STATE(219),
    [sym_struct_definition] = STATE(219),
    [sym_parameterized_identifier] = STATE(219),
    [sym_if_statement] = STATE(219),
    [sym_pair_expression] = STATE(219),
    [sym_parenthesized_expression] = STATE(219),
    [sym_module_definition] = STATE(219),
    [sym_call_expression] = STATE(219),
    [sym__expression] = STATE(219),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(219),
    [sym_assignment_expression] = STATE(219),
    [sym_binary_expression] = STATE(219),
    [sym_import_statement] = STATE(219),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(1117),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(465),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(465),
  },
  [488] = {
    [anon_sym_AMP_AMP] = ACTIONS(892),
    [anon_sym_using] = ACTIONS(890),
    [anon_sym_struct] = ACTIONS(890),
    [anon_sym_function] = ACTIONS(890),
    [anon_sym_LPAREN] = ACTIONS(892),
    [sym__plus_operator] = ACTIONS(890),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(890),
    [sym_identifier] = ACTIONS(890),
    [anon_sym_if] = ACTIONS(890),
    [anon_sym_mutable] = ACTIONS(890),
    [anon_sym_module] = ACTIONS(890),
    [sym__times_operator] = ACTIONS(890),
    [anon_sym_PIPE_PIPE] = ACTIONS(890),
    [anon_sym_EQ_GT] = ACTIONS(892),
    [anon_sym_LT_COLON] = ACTIONS(892),
    [anon_sym_import] = ACTIONS(890),
    [anon_sym_end] = ACTIONS(890),
    [sym__arrow_operator] = ACTIONS(892),
    [sym_string] = ACTIONS(892),
    [anon_sym_COLON_COLON] = ACTIONS(892),
    [sym_number] = ACTIONS(892),
  },
  [489] = {
    [anon_sym_AMP_AMP] = ACTIONS(896),
    [anon_sym_using] = ACTIONS(894),
    [anon_sym_struct] = ACTIONS(894),
    [anon_sym_function] = ACTIONS(894),
    [anon_sym_LPAREN] = ACTIONS(896),
    [sym__plus_operator] = ACTIONS(894),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(894),
    [sym_identifier] = ACTIONS(894),
    [anon_sym_if] = ACTIONS(894),
    [anon_sym_mutable] = ACTIONS(894),
    [anon_sym_module] = ACTIONS(894),
    [sym__times_operator] = ACTIONS(894),
    [anon_sym_PIPE_PIPE] = ACTIONS(894),
    [anon_sym_EQ_GT] = ACTIONS(896),
    [anon_sym_LT_COLON] = ACTIONS(896),
    [anon_sym_import] = ACTIONS(894),
    [anon_sym_end] = ACTIONS(894),
    [anon_sym_COMMA] = ACTIONS(896),
    [sym__arrow_operator] = ACTIONS(896),
    [sym_string] = ACTIONS(896),
    [anon_sym_COLON_COLON] = ACTIONS(896),
    [sym_number] = ACTIONS(896),
  },
  [490] = {
    [aux_sym_parameter_list_repeat1] = STATE(490),
    [anon_sym_AMP_AMP] = ACTIONS(896),
    [anon_sym_using] = ACTIONS(894),
    [anon_sym_struct] = ACTIONS(894),
    [anon_sym_function] = ACTIONS(894),
    [anon_sym_LPAREN] = ACTIONS(896),
    [sym__plus_operator] = ACTIONS(894),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(894),
    [sym_identifier] = ACTIONS(894),
    [anon_sym_if] = ACTIONS(894),
    [anon_sym_mutable] = ACTIONS(894),
    [anon_sym_module] = ACTIONS(894),
    [sym__times_operator] = ACTIONS(894),
    [anon_sym_PIPE_PIPE] = ACTIONS(894),
    [anon_sym_EQ_GT] = ACTIONS(896),
    [anon_sym_LT_COLON] = ACTIONS(896),
    [anon_sym_import] = ACTIONS(894),
    [anon_sym_end] = ACTIONS(894),
    [anon_sym_COMMA] = ACTIONS(1119),
    [sym__arrow_operator] = ACTIONS(896),
    [sym_string] = ACTIONS(896),
    [anon_sym_COLON_COLON] = ACTIONS(896),
    [sym_number] = ACTIONS(896),
  },
  [491] = {
    [anon_sym_AMP_AMP] = ACTIONS(944),
    [anon_sym_using] = ACTIONS(942),
    [anon_sym_struct] = ACTIONS(942),
    [anon_sym_function] = ACTIONS(942),
    [anon_sym_LPAREN] = ACTIONS(944),
    [sym__plus_operator] = ACTIONS(942),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(942),
    [sym_identifier] = ACTIONS(942),
    [anon_sym_if] = ACTIONS(942),
    [anon_sym_mutable] = ACTIONS(942),
    [anon_sym_module] = ACTIONS(942),
    [sym__times_operator] = ACTIONS(942),
    [anon_sym_PIPE_PIPE] = ACTIONS(942),
    [anon_sym_EQ_GT] = ACTIONS(944),
    [anon_sym_LT_COLON] = ACTIONS(944),
    [anon_sym_import] = ACTIONS(942),
    [anon_sym_end] = ACTIONS(942),
    [sym__arrow_operator] = ACTIONS(944),
    [sym_string] = ACTIONS(944),
    [anon_sym_COLON_COLON] = ACTIONS(944),
    [sym_number] = ACTIONS(944),
  },
  [492] = {
    [sym_function_definition] = STATE(219),
    [sym_struct_definition] = STATE(219),
    [sym_parameterized_identifier] = STATE(219),
    [sym_if_statement] = STATE(219),
    [sym_pair_expression] = STATE(219),
    [sym_parenthesized_expression] = STATE(219),
    [sym_module_definition] = STATE(219),
    [sym_call_expression] = STATE(219),
    [sym__expression] = STATE(219),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(219),
    [sym_assignment_expression] = STATE(219),
    [sym_binary_expression] = STATE(219),
    [sym_import_statement] = STATE(219),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(1122),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(465),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(465),
  },
  [493] = {
    [aux_sym__expression_list_repeat1] = STATE(226),
    [anon_sym_end] = ACTIONS(1122),
    [anon_sym_SEMI] = ACTIONS(1124),
    [anon_sym_LF] = ACTIONS(1126),
    [sym_comment] = ACTIONS(53),
  },
  [494] = {
    [anon_sym_AMP_AMP] = ACTIONS(961),
    [anon_sym_using] = ACTIONS(959),
    [anon_sym_struct] = ACTIONS(959),
    [anon_sym_function] = ACTIONS(959),
    [anon_sym_LPAREN] = ACTIONS(961),
    [sym__plus_operator] = ACTIONS(959),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(959),
    [sym_identifier] = ACTIONS(959),
    [anon_sym_if] = ACTIONS(959),
    [anon_sym_mutable] = ACTIONS(959),
    [anon_sym_module] = ACTIONS(959),
    [sym__times_operator] = ACTIONS(959),
    [anon_sym_PIPE_PIPE] = ACTIONS(959),
    [anon_sym_EQ_GT] = ACTIONS(961),
    [anon_sym_LT_COLON] = ACTIONS(961),
    [anon_sym_import] = ACTIONS(959),
    [anon_sym_end] = ACTIONS(959),
    [sym__arrow_operator] = ACTIONS(961),
    [sym_string] = ACTIONS(961),
    [anon_sym_COLON_COLON] = ACTIONS(961),
    [sym_number] = ACTIONS(961),
  },
  [495] = {
    [sym_function_definition] = STATE(219),
    [sym_struct_definition] = STATE(219),
    [sym_parameterized_identifier] = STATE(219),
    [sym_if_statement] = STATE(219),
    [sym_pair_expression] = STATE(219),
    [sym_parenthesized_expression] = STATE(219),
    [sym_module_definition] = STATE(219),
    [sym_call_expression] = STATE(219),
    [sym__expression] = STATE(219),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(219),
    [sym_assignment_expression] = STATE(219),
    [sym_binary_expression] = STATE(219),
    [sym_import_statement] = STATE(219),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(1128),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(465),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(465),
  },
  [496] = {
    [anon_sym_AMP_AMP] = ACTIONS(995),
    [anon_sym_using] = ACTIONS(993),
    [anon_sym_struct] = ACTIONS(993),
    [anon_sym_function] = ACTIONS(993),
    [anon_sym_LPAREN] = ACTIONS(995),
    [sym__plus_operator] = ACTIONS(993),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(993),
    [sym_identifier] = ACTIONS(993),
    [anon_sym_if] = ACTIONS(993),
    [anon_sym_mutable] = ACTIONS(993),
    [anon_sym_module] = ACTIONS(993),
    [sym__times_operator] = ACTIONS(993),
    [anon_sym_PIPE_PIPE] = ACTIONS(993),
    [anon_sym_EQ_GT] = ACTIONS(995),
    [anon_sym_LT_COLON] = ACTIONS(995),
    [anon_sym_import] = ACTIONS(993),
    [anon_sym_end] = ACTIONS(993),
    [sym__arrow_operator] = ACTIONS(995),
    [sym_string] = ACTIONS(995),
    [anon_sym_COLON_COLON] = ACTIONS(995),
    [sym_number] = ACTIONS(995),
  },
  [497] = {
    [anon_sym_end] = ACTIONS(1130),
    [sym_comment] = ACTIONS(3),
  },
  [498] = {
    [aux_sym_if_statement_repeat1] = STATE(317),
    [sym_elseif_clause] = STATE(317),
    [sym_else_clause] = STATE(509),
    [anon_sym_elseif] = ACTIONS(663),
    [anon_sym_end] = ACTIONS(1130),
    [anon_sym_else] = ACTIONS(389),
    [sym_comment] = ACTIONS(3),
  },
  [499] = {
    [sym_argument_list] = STATE(43),
    [aux_sym__expression_list_repeat1] = STATE(510),
    [anon_sym_AMP_AMP] = ACTIONS(227),
    [sym__times_operator] = ACTIONS(229),
    [anon_sym_SEMI] = ACTIONS(1124),
    [anon_sym_PIPE_PIPE] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_LT_COLON] = ACTIONS(79),
    [sym__plus_operator] = ACTIONS(235),
    [sym__assign_operator] = ACTIONS(237),
    [anon_sym_EQ_GT] = ACTIONS(239),
    [anon_sym_end] = ACTIONS(1122),
    [sym__arrow_operator] = ACTIONS(243),
    [sym_comment] = ACTIONS(53),
    [anon_sym_LF] = ACTIONS(1126),
    [anon_sym_COLON_COLON] = ACTIONS(79),
  },
  [500] = {
    [aux_sym_parameter_list_repeat1] = STATE(500),
    [anon_sym_AMP_AMP] = ACTIONS(896),
    [sym__times_operator] = ACTIONS(894),
    [anon_sym_PIPE_PIPE] = ACTIONS(894),
    [anon_sym_EQ_GT] = ACTIONS(896),
    [anon_sym_LPAREN] = ACTIONS(896),
    [anon_sym_LT_COLON] = ACTIONS(896),
    [sym__plus_operator] = ACTIONS(894),
    [sym__assign_operator] = ACTIONS(894),
    [anon_sym_COMMA] = ACTIONS(956),
    [sym__arrow_operator] = ACTIONS(896),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(896),
  },
  [501] = {
    [anon_sym_AMP_AMP] = ACTIONS(1101),
    [anon_sym_RBRACE] = ACTIONS(1101),
    [anon_sym_using] = ACTIONS(1099),
    [anon_sym_struct] = ACTIONS(1099),
    [anon_sym_function] = ACTIONS(1099),
    [anon_sym_LPAREN] = ACTIONS(1101),
    [sym__plus_operator] = ACTIONS(1099),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(1099),
    [sym_identifier] = ACTIONS(1099),
    [anon_sym_if] = ACTIONS(1099),
    [anon_sym_mutable] = ACTIONS(1099),
    [anon_sym_RPAREN] = ACTIONS(1101),
    [anon_sym_module] = ACTIONS(1099),
    [sym__times_operator] = ACTIONS(1099),
    [anon_sym_PIPE_PIPE] = ACTIONS(1099),
    [anon_sym_EQ_GT] = ACTIONS(1101),
    [anon_sym_LT_COLON] = ACTIONS(1101),
    [anon_sym_import] = ACTIONS(1099),
    [anon_sym_COMMA] = ACTIONS(1101),
    [sym__arrow_operator] = ACTIONS(1101),
    [sym_string] = ACTIONS(1101),
    [anon_sym_COLON_COLON] = ACTIONS(1101),
    [sym_number] = ACTIONS(1101),
  },
  [502] = {
    [anon_sym_AMP_AMP] = ACTIONS(1115),
    [anon_sym_RBRACE] = ACTIONS(1115),
    [anon_sym_using] = ACTIONS(1113),
    [anon_sym_struct] = ACTIONS(1113),
    [anon_sym_function] = ACTIONS(1113),
    [anon_sym_LPAREN] = ACTIONS(1115),
    [sym__plus_operator] = ACTIONS(1113),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(1113),
    [sym_identifier] = ACTIONS(1113),
    [anon_sym_if] = ACTIONS(1113),
    [anon_sym_mutable] = ACTIONS(1113),
    [anon_sym_RPAREN] = ACTIONS(1115),
    [anon_sym_module] = ACTIONS(1113),
    [sym__times_operator] = ACTIONS(1113),
    [anon_sym_PIPE_PIPE] = ACTIONS(1113),
    [anon_sym_EQ_GT] = ACTIONS(1115),
    [anon_sym_LT_COLON] = ACTIONS(1115),
    [anon_sym_import] = ACTIONS(1113),
    [anon_sym_COMMA] = ACTIONS(1115),
    [sym__arrow_operator] = ACTIONS(1115),
    [sym_string] = ACTIONS(1115),
    [anon_sym_COLON_COLON] = ACTIONS(1115),
    [sym_number] = ACTIONS(1115),
  },
  [503] = {
    [sym_function_definition] = STATE(219),
    [sym_struct_definition] = STATE(219),
    [sym_parameterized_identifier] = STATE(219),
    [sym_if_statement] = STATE(219),
    [sym_pair_expression] = STATE(219),
    [sym_parenthesized_expression] = STATE(219),
    [sym_module_definition] = STATE(219),
    [sym_call_expression] = STATE(219),
    [sym__expression] = STATE(219),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(219),
    [sym_assignment_expression] = STATE(219),
    [sym_binary_expression] = STATE(219),
    [sym_import_statement] = STATE(219),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(1132),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(465),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(465),
  },
  [504] = {
    [anon_sym_AMP_AMP] = ACTIONS(1134),
    [anon_sym_LPAREN] = ACTIONS(1134),
    [sym__plus_operator] = ACTIONS(1134),
    [sym_comment] = ACTIONS(53),
    [sym__assign_operator] = ACTIONS(1134),
    [anon_sym_else] = ACTIONS(1134),
    [sym__times_operator] = ACTIONS(1134),
    [anon_sym_SEMI] = ACTIONS(1134),
    [anon_sym_PIPE_PIPE] = ACTIONS(1134),
    [ts_builtin_sym_end] = ACTIONS(1136),
    [anon_sym_EQ_GT] = ACTIONS(1134),
    [anon_sym_LT_COLON] = ACTIONS(1134),
    [anon_sym_elseif] = ACTIONS(1134),
    [anon_sym_end] = ACTIONS(1134),
    [sym__arrow_operator] = ACTIONS(1134),
    [anon_sym_LF] = ACTIONS(1136),
    [anon_sym_COLON_COLON] = ACTIONS(1134),
  },
  [505] = {
    [anon_sym_AMP_AMP] = ACTIONS(1041),
    [anon_sym_using] = ACTIONS(1039),
    [anon_sym_struct] = ACTIONS(1039),
    [anon_sym_function] = ACTIONS(1039),
    [anon_sym_LPAREN] = ACTIONS(1041),
    [sym__plus_operator] = ACTIONS(1039),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(1039),
    [sym_identifier] = ACTIONS(1039),
    [anon_sym_if] = ACTIONS(1039),
    [anon_sym_mutable] = ACTIONS(1039),
    [anon_sym_module] = ACTIONS(1039),
    [sym__times_operator] = ACTIONS(1039),
    [anon_sym_PIPE_PIPE] = ACTIONS(1039),
    [anon_sym_EQ_GT] = ACTIONS(1041),
    [anon_sym_LT_COLON] = ACTIONS(1041),
    [anon_sym_import] = ACTIONS(1039),
    [anon_sym_end] = ACTIONS(1039),
    [sym__arrow_operator] = ACTIONS(1041),
    [sym_string] = ACTIONS(1041),
    [anon_sym_COLON_COLON] = ACTIONS(1041),
    [sym_number] = ACTIONS(1041),
  },
  [506] = {
    [sym_function_definition] = STATE(219),
    [sym_struct_definition] = STATE(219),
    [sym_parameterized_identifier] = STATE(219),
    [sym_if_statement] = STATE(219),
    [sym_pair_expression] = STATE(219),
    [sym_parenthesized_expression] = STATE(219),
    [sym_module_definition] = STATE(219),
    [sym_call_expression] = STATE(219),
    [sym__expression] = STATE(219),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(219),
    [sym_assignment_expression] = STATE(219),
    [sym_binary_expression] = STATE(219),
    [sym_import_statement] = STATE(219),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(1138),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(465),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(465),
  },
  [507] = {
    [anon_sym_AMP_AMP] = ACTIONS(1047),
    [anon_sym_using] = ACTIONS(1045),
    [anon_sym_struct] = ACTIONS(1045),
    [anon_sym_function] = ACTIONS(1045),
    [anon_sym_LPAREN] = ACTIONS(1047),
    [sym__plus_operator] = ACTIONS(1045),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(1045),
    [sym_identifier] = ACTIONS(1045),
    [anon_sym_if] = ACTIONS(1045),
    [anon_sym_mutable] = ACTIONS(1045),
    [anon_sym_module] = ACTIONS(1045),
    [sym__times_operator] = ACTIONS(1045),
    [anon_sym_PIPE_PIPE] = ACTIONS(1045),
    [anon_sym_EQ_GT] = ACTIONS(1047),
    [anon_sym_LT_COLON] = ACTIONS(1047),
    [anon_sym_import] = ACTIONS(1045),
    [anon_sym_end] = ACTIONS(1045),
    [sym__arrow_operator] = ACTIONS(1047),
    [sym_string] = ACTIONS(1047),
    [anon_sym_COLON_COLON] = ACTIONS(1047),
    [sym_number] = ACTIONS(1047),
  },
  [508] = {
    [anon_sym_AMP_AMP] = ACTIONS(1063),
    [anon_sym_using] = ACTIONS(1061),
    [anon_sym_struct] = ACTIONS(1061),
    [anon_sym_function] = ACTIONS(1061),
    [anon_sym_LPAREN] = ACTIONS(1063),
    [sym__plus_operator] = ACTIONS(1061),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(1061),
    [sym_identifier] = ACTIONS(1061),
    [anon_sym_if] = ACTIONS(1061),
    [anon_sym_mutable] = ACTIONS(1061),
    [anon_sym_module] = ACTIONS(1061),
    [sym__times_operator] = ACTIONS(1061),
    [anon_sym_PIPE_PIPE] = ACTIONS(1061),
    [anon_sym_EQ_GT] = ACTIONS(1063),
    [anon_sym_LT_COLON] = ACTIONS(1063),
    [anon_sym_import] = ACTIONS(1061),
    [anon_sym_end] = ACTIONS(1061),
    [sym__arrow_operator] = ACTIONS(1063),
    [sym_string] = ACTIONS(1063),
    [anon_sym_COLON_COLON] = ACTIONS(1063),
    [sym_number] = ACTIONS(1063),
  },
  [509] = {
    [anon_sym_end] = ACTIONS(1140),
    [sym_comment] = ACTIONS(3),
  },
  [510] = {
    [aux_sym__expression_list_repeat1] = STATE(226),
    [anon_sym_end] = ACTIONS(1138),
    [anon_sym_SEMI] = ACTIONS(1142),
    [anon_sym_LF] = ACTIONS(1144),
    [sym_comment] = ACTIONS(53),
  },
  [511] = {
    [anon_sym_AMP_AMP] = ACTIONS(1136),
    [anon_sym_RBRACE] = ACTIONS(1136),
    [anon_sym_using] = ACTIONS(1134),
    [anon_sym_struct] = ACTIONS(1134),
    [anon_sym_function] = ACTIONS(1134),
    [anon_sym_LPAREN] = ACTIONS(1136),
    [sym__plus_operator] = ACTIONS(1134),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(1134),
    [sym_identifier] = ACTIONS(1134),
    [anon_sym_if] = ACTIONS(1134),
    [anon_sym_mutable] = ACTIONS(1134),
    [anon_sym_RPAREN] = ACTIONS(1136),
    [anon_sym_module] = ACTIONS(1134),
    [sym__times_operator] = ACTIONS(1134),
    [anon_sym_PIPE_PIPE] = ACTIONS(1134),
    [anon_sym_EQ_GT] = ACTIONS(1136),
    [anon_sym_LT_COLON] = ACTIONS(1136),
    [anon_sym_import] = ACTIONS(1134),
    [anon_sym_COMMA] = ACTIONS(1136),
    [sym__arrow_operator] = ACTIONS(1136),
    [sym_string] = ACTIONS(1136),
    [anon_sym_COLON_COLON] = ACTIONS(1136),
    [sym_number] = ACTIONS(1136),
  },
  [512] = {
    [anon_sym_AMP_AMP] = ACTIONS(1101),
    [anon_sym_using] = ACTIONS(1099),
    [anon_sym_struct] = ACTIONS(1099),
    [anon_sym_function] = ACTIONS(1099),
    [anon_sym_LPAREN] = ACTIONS(1101),
    [sym__plus_operator] = ACTIONS(1099),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(1099),
    [sym_identifier] = ACTIONS(1099),
    [anon_sym_if] = ACTIONS(1099),
    [anon_sym_mutable] = ACTIONS(1099),
    [anon_sym_module] = ACTIONS(1099),
    [sym__times_operator] = ACTIONS(1099),
    [anon_sym_PIPE_PIPE] = ACTIONS(1099),
    [anon_sym_EQ_GT] = ACTIONS(1101),
    [anon_sym_LT_COLON] = ACTIONS(1101),
    [anon_sym_import] = ACTIONS(1099),
    [anon_sym_end] = ACTIONS(1099),
    [sym__arrow_operator] = ACTIONS(1101),
    [sym_string] = ACTIONS(1101),
    [anon_sym_COLON_COLON] = ACTIONS(1101),
    [sym_number] = ACTIONS(1101),
  },
  [513] = {
    [anon_sym_AMP_AMP] = ACTIONS(1115),
    [anon_sym_using] = ACTIONS(1113),
    [anon_sym_struct] = ACTIONS(1113),
    [anon_sym_function] = ACTIONS(1113),
    [anon_sym_LPAREN] = ACTIONS(1115),
    [sym__plus_operator] = ACTIONS(1113),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(1113),
    [sym_identifier] = ACTIONS(1113),
    [anon_sym_if] = ACTIONS(1113),
    [anon_sym_mutable] = ACTIONS(1113),
    [anon_sym_module] = ACTIONS(1113),
    [sym__times_operator] = ACTIONS(1113),
    [anon_sym_PIPE_PIPE] = ACTIONS(1113),
    [anon_sym_EQ_GT] = ACTIONS(1115),
    [anon_sym_LT_COLON] = ACTIONS(1115),
    [anon_sym_import] = ACTIONS(1113),
    [anon_sym_end] = ACTIONS(1113),
    [sym__arrow_operator] = ACTIONS(1115),
    [sym_string] = ACTIONS(1115),
    [anon_sym_COLON_COLON] = ACTIONS(1115),
    [sym_number] = ACTIONS(1115),
  },
  [514] = {
    [sym_function_definition] = STATE(219),
    [sym_struct_definition] = STATE(219),
    [sym_parameterized_identifier] = STATE(219),
    [sym_if_statement] = STATE(219),
    [sym_pair_expression] = STATE(219),
    [sym_parenthesized_expression] = STATE(219),
    [sym_module_definition] = STATE(219),
    [sym_call_expression] = STATE(219),
    [sym__expression] = STATE(219),
    [sym_field_expression] = STATE(12),
    [sym_typed_expression] = STATE(219),
    [sym_assignment_expression] = STATE(219),
    [sym_binary_expression] = STATE(219),
    [sym_import_statement] = STATE(219),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(93),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(1146),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_string] = ACTIONS(465),
    [anon_sym_mutable] = ACTIONS(23),
    [sym_number] = ACTIONS(465),
  },
  [515] = {
    [anon_sym_AMP_AMP] = ACTIONS(1136),
    [anon_sym_using] = ACTIONS(1134),
    [anon_sym_struct] = ACTIONS(1134),
    [anon_sym_function] = ACTIONS(1134),
    [anon_sym_LPAREN] = ACTIONS(1136),
    [sym__plus_operator] = ACTIONS(1134),
    [sym_comment] = ACTIONS(3),
    [sym__assign_operator] = ACTIONS(1134),
    [sym_identifier] = ACTIONS(1134),
    [anon_sym_if] = ACTIONS(1134),
    [anon_sym_mutable] = ACTIONS(1134),
    [anon_sym_module] = ACTIONS(1134),
    [sym__times_operator] = ACTIONS(1134),
    [anon_sym_PIPE_PIPE] = ACTIONS(1134),
    [anon_sym_EQ_GT] = ACTIONS(1136),
    [anon_sym_LT_COLON] = ACTIONS(1136),
    [anon_sym_import] = ACTIONS(1134),
    [anon_sym_end] = ACTIONS(1134),
    [sym__arrow_operator] = ACTIONS(1136),
    [sym_string] = ACTIONS(1136),
    [anon_sym_COLON_COLON] = ACTIONS(1136),
    [sym_number] = ACTIONS(1136),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = false}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [9] = {.count = 1, .reusable = false}, SHIFT(3),
  [11] = {.count = 1, .reusable = false}, SHIFT(4),
  [13] = {.count = 1, .reusable = false}, SHIFT(5),
  [15] = {.count = 1, .reusable = true}, SHIFT(6),
  [17] = {.count = 1, .reusable = false}, SHIFT(7),
  [19] = {.count = 1, .reusable = false}, SHIFT(8),
  [21] = {.count = 1, .reusable = true}, SHIFT(10),
  [23] = {.count = 1, .reusable = false}, SHIFT(9),
  [25] = {.count = 1, .reusable = true}, SHIFT(13),
  [27] = {.count = 1, .reusable = true}, SHIFT(14),
  [29] = {.count = 1, .reusable = true}, SHIFT(15),
  [31] = {.count = 1, .reusable = true}, SHIFT(16),
  [33] = {.count = 1, .reusable = false}, SHIFT(17),
  [35] = {.count = 1, .reusable = false}, SHIFT(18),
  [37] = {.count = 1, .reusable = false}, SHIFT(19),
  [39] = {.count = 1, .reusable = false}, SHIFT(20),
  [41] = {.count = 1, .reusable = true}, SHIFT(21),
  [43] = {.count = 1, .reusable = false}, SHIFT(22),
  [45] = {.count = 1, .reusable = false}, SHIFT(23),
  [47] = {.count = 1, .reusable = true}, SHIFT(25),
  [49] = {.count = 1, .reusable = false}, SHIFT(24),
  [51] = {.count = 1, .reusable = false}, REDUCE(sym__expression, 1),
  [53] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [55] = {.count = 1, .reusable = false}, SHIFT(28),
  [57] = {.count = 1, .reusable = false}, SHIFT(27),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym__expression, 1),
  [61] = {.count = 1, .reusable = false}, SHIFT(30),
  [63] = {.count = 1, .reusable = true}, SHIFT(31),
  [65] = {.count = 1, .reusable = true}, SHIFT(32),
  [67] = {.count = 1, .reusable = false}, SHIFT(33),
  [69] = {.count = 1, .reusable = false}, SHIFT(34),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [73] = {.count = 1, .reusable = false}, SHIFT(35),
  [75] = {.count = 1, .reusable = false}, SHIFT(36),
  [77] = {.count = 1, .reusable = false}, SHIFT(37),
  [79] = {.count = 1, .reusable = false}, SHIFT(38),
  [81] = {.count = 1, .reusable = false}, SHIFT(39),
  [83] = {.count = 1, .reusable = false}, SHIFT(40),
  [85] = {.count = 1, .reusable = false}, SHIFT(41),
  [87] = {.count = 1, .reusable = false}, SHIFT(42),
  [89] = {.count = 1, .reusable = true}, SHIFT(35),
  [91] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [93] = {.count = 1, .reusable = false}, SHIFT(45),
  [95] = {.count = 1, .reusable = false}, SHIFT(46),
  [97] = {.count = 1, .reusable = true}, SHIFT(47),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 2),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 2),
  [103] = {.count = 1, .reusable = false}, SHIFT(48),
  [105] = {.count = 1, .reusable = true}, SHIFT(52),
  [107] = {.count = 1, .reusable = true}, SHIFT(50),
  [109] = {.count = 1, .reusable = false}, SHIFT(51),
  [111] = {.count = 1, .reusable = true}, SHIFT(53),
  [113] = {.count = 1, .reusable = true}, SHIFT(56),
  [115] = {.count = 1, .reusable = true}, SHIFT(58),
  [117] = {.count = 1, .reusable = true}, SHIFT(59),
  [119] = {.count = 1, .reusable = true}, SHIFT(60),
  [121] = {.count = 1, .reusable = true}, SHIFT(61),
  [123] = {.count = 1, .reusable = true}, SHIFT(62),
  [125] = {.count = 1, .reusable = false}, SHIFT(64),
  [127] = {.count = 1, .reusable = true}, SHIFT(63),
  [129] = {.count = 1, .reusable = true}, SHIFT(66),
  [131] = {.count = 1, .reusable = true}, SHIFT(67),
  [133] = {.count = 1, .reusable = true}, SHIFT(68),
  [135] = {.count = 1, .reusable = false}, SHIFT(69),
  [137] = {.count = 1, .reusable = false}, SHIFT(70),
  [139] = {.count = 1, .reusable = true}, SHIFT(71),
  [141] = {.count = 1, .reusable = true}, SHIFT(72),
  [143] = {.count = 1, .reusable = false}, SHIFT(73),
  [145] = {.count = 1, .reusable = false}, SHIFT(74),
  [147] = {.count = 1, .reusable = true}, SHIFT(75),
  [149] = {.count = 1, .reusable = true}, SHIFT(76),
  [151] = {.count = 1, .reusable = true}, SHIFT(77),
  [153] = {.count = 1, .reusable = false}, SHIFT(79),
  [155] = {.count = 1, .reusable = true}, SHIFT(80),
  [157] = {.count = 1, .reusable = true}, SHIFT(81),
  [159] = {.count = 1, .reusable = false}, REDUCE(sym_parameterized_identifier, 2),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_parameterized_identifier, 2),
  [163] = {.count = 1, .reusable = true}, SHIFT(82),
  [165] = {.count = 1, .reusable = true}, SHIFT(83),
  [167] = {.count = 1, .reusable = false}, SHIFT(84),
  [169] = {.count = 1, .reusable = true}, SHIFT(85),
  [171] = {.count = 1, .reusable = false}, SHIFT(86),
  [173] = {.count = 1, .reusable = false}, SHIFT(87),
  [175] = {.count = 1, .reusable = false}, SHIFT(88),
  [177] = {.count = 1, .reusable = false}, SHIFT(89),
  [179] = {.count = 1, .reusable = true}, SHIFT(90),
  [181] = {.count = 1, .reusable = true}, SHIFT(91),
  [183] = {.count = 1, .reusable = true}, SHIFT(92),
  [185] = {.count = 1, .reusable = true}, SHIFT(93),
  [187] = {.count = 1, .reusable = true}, SHIFT(94),
  [189] = {.count = 1, .reusable = true}, SHIFT(95),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [193] = {.count = 1, .reusable = true}, SHIFT(96),
  [195] = {.count = 1, .reusable = true}, SHIFT(97),
  [197] = {.count = 1, .reusable = true}, SHIFT(100),
  [199] = {.count = 1, .reusable = false}, SHIFT(99),
  [201] = {.count = 1, .reusable = true}, SHIFT(98),
  [203] = {.count = 1, .reusable = true}, SHIFT(101),
  [205] = {.count = 1, .reusable = true}, SHIFT(103),
  [207] = {.count = 1, .reusable = true}, SHIFT(104),
  [209] = {.count = 1, .reusable = true}, SHIFT(105),
  [211] = {.count = 1, .reusable = true}, SHIFT(106),
  [213] = {.count = 1, .reusable = false}, REDUCE(sym_call_expression, 2),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2),
  [217] = {.count = 1, .reusable = false}, SHIFT(107),
  [219] = {.count = 1, .reusable = true}, SHIFT(107),
  [221] = {.count = 1, .reusable = true}, SHIFT(109),
  [223] = {.count = 1, .reusable = false}, REDUCE(sym_module_definition, 3),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym_module_definition, 3),
  [227] = {.count = 1, .reusable = false}, SHIFT(110),
  [229] = {.count = 1, .reusable = false}, SHIFT(111),
  [231] = {.count = 1, .reusable = false}, SHIFT(112),
  [233] = {.count = 1, .reusable = false}, SHIFT(113),
  [235] = {.count = 1, .reusable = false}, SHIFT(114),
  [237] = {.count = 1, .reusable = false}, SHIFT(115),
  [239] = {.count = 1, .reusable = false}, SHIFT(116),
  [241] = {.count = 1, .reusable = false}, SHIFT(117),
  [243] = {.count = 1, .reusable = false}, SHIFT(118),
  [245] = {.count = 1, .reusable = true}, SHIFT(112),
  [247] = {.count = 1, .reusable = true}, SHIFT(120),
  [249] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 3),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 3),
  [253] = {.count = 1, .reusable = false}, SHIFT(121),
  [255] = {.count = 1, .reusable = false}, SHIFT(122),
  [257] = {.count = 1, .reusable = false}, SHIFT(123),
  [259] = {.count = 1, .reusable = false}, SHIFT(124),
  [261] = {.count = 1, .reusable = true}, SHIFT(125),
  [263] = {.count = 1, .reusable = false}, SHIFT(126),
  [265] = {.count = 1, .reusable = false}, SHIFT(127),
  [267] = {.count = 1, .reusable = true}, SHIFT(129),
  [269] = {.count = 1, .reusable = false}, SHIFT(128),
  [271] = {.count = 1, .reusable = false}, REDUCE(sym_struct_definition, 3),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym_struct_definition, 3),
  [275] = {.count = 1, .reusable = false}, SHIFT(131),
  [277] = {.count = 1, .reusable = false}, SHIFT(132),
  [279] = {.count = 1, .reusable = true}, SHIFT(133),
  [281] = {.count = 1, .reusable = false}, SHIFT(135),
  [283] = {.count = 1, .reusable = false}, SHIFT(136),
  [285] = {.count = 1, .reusable = true}, SHIFT(135),
  [287] = {.count = 1, .reusable = true}, SHIFT(138),
  [289] = {.count = 1, .reusable = true}, SHIFT(140),
  [291] = {.count = 1, .reusable = true}, SHIFT(141),
  [293] = {.count = 1, .reusable = false}, SHIFT(142),
  [295] = {.count = 1, .reusable = true}, SHIFT(143),
  [297] = {.count = 1, .reusable = false}, SHIFT(144),
  [299] = {.count = 1, .reusable = true}, SHIFT(145),
  [301] = {.count = 1, .reusable = false}, SHIFT(146),
  [303] = {.count = 1, .reusable = false}, SHIFT(148),
  [305] = {.count = 1, .reusable = true}, SHIFT(149),
  [307] = {.count = 1, .reusable = true}, SHIFT(153),
  [309] = {.count = 1, .reusable = true}, SHIFT(154),
  [311] = {.count = 1, .reusable = true}, SHIFT(155),
  [313] = {.count = 1, .reusable = true}, SHIFT(156),
  [315] = {.count = 1, .reusable = true}, SHIFT(157),
  [317] = {.count = 1, .reusable = true}, SHIFT(158),
  [319] = {.count = 1, .reusable = true}, SHIFT(159),
  [321] = {.count = 1, .reusable = true}, SHIFT(160),
  [323] = {.count = 1, .reusable = true}, SHIFT(162),
  [325] = {.count = 1, .reusable = true}, SHIFT(161),
  [327] = {.count = 1, .reusable = true}, SHIFT(163),
  [329] = {.count = 1, .reusable = true}, SHIFT(165),
  [331] = {.count = 1, .reusable = true}, SHIFT(166),
  [333] = {.count = 1, .reusable = true}, SHIFT(167),
  [335] = {.count = 1, .reusable = true}, SHIFT(168),
  [337] = {.count = 1, .reusable = false}, REDUCE(sym_parenthesized_expression, 3),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym_parenthesized_expression, 3),
  [341] = {.count = 1, .reusable = true}, SHIFT(169),
  [343] = {.count = 1, .reusable = true}, SHIFT(170),
  [345] = {.count = 1, .reusable = false}, SHIFT(171),
  [347] = {.count = 1, .reusable = true}, SHIFT(172),
  [349] = {.count = 1, .reusable = false}, SHIFT(173),
  [351] = {.count = 1, .reusable = false}, SHIFT(174),
  [353] = {.count = 1, .reusable = false}, SHIFT(175),
  [355] = {.count = 1, .reusable = true}, SHIFT(176),
  [357] = {.count = 1, .reusable = true}, SHIFT(177),
  [359] = {.count = 1, .reusable = true}, SHIFT(178),
  [361] = {.count = 1, .reusable = false}, REDUCE(sym_field_expression, 3),
  [363] = {.count = 1, .reusable = true}, REDUCE(sym_field_expression, 3),
  [365] = {.count = 1, .reusable = false}, SHIFT(180),
  [367] = {.count = 1, .reusable = true}, SHIFT(181),
  [369] = {.count = 1, .reusable = true}, SHIFT(182),
  [371] = {.count = 1, .reusable = true}, SHIFT(183),
  [373] = {.count = 1, .reusable = true}, SHIFT(184),
  [375] = {.count = 1, .reusable = true}, SHIFT(185),
  [377] = {.count = 1, .reusable = true}, SHIFT(186),
  [379] = {.count = 1, .reusable = true}, SHIFT(187),
  [381] = {.count = 1, .reusable = true}, SHIFT(188),
  [383] = {.count = 1, .reusable = false}, SHIFT(189),
  [385] = {.count = 1, .reusable = false}, SHIFT(190),
  [387] = {.count = 1, .reusable = false}, SHIFT(191),
  [389] = {.count = 1, .reusable = false}, SHIFT(192),
  [391] = {.count = 1, .reusable = false}, SHIFT(193),
  [393] = {.count = 1, .reusable = false}, SHIFT(194),
  [395] = {.count = 1, .reusable = false}, SHIFT(195),
  [397] = {.count = 1, .reusable = false}, SHIFT(196),
  [399] = {.count = 1, .reusable = false}, SHIFT(197),
  [401] = {.count = 1, .reusable = false}, SHIFT(198),
  [403] = {.count = 1, .reusable = false}, SHIFT(199),
  [405] = {.count = 1, .reusable = true}, SHIFT(194),
  [407] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3),
  [411] = {.count = 1, .reusable = false}, REDUCE(aux_sym__expression_list_repeat1, 2),
  [413] = {.count = 1, .reusable = true}, REDUCE(aux_sym__expression_list_repeat1, 2),
  [415] = {.count = 1, .reusable = false}, REDUCE(sym_argument_list, 2),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym_argument_list, 2),
  [419] = {.count = 1, .reusable = true}, SHIFT(204),
  [421] = {.count = 1, .reusable = true}, SHIFT(205),
  [423] = {.count = 1, .reusable = false}, SHIFT(206),
  [425] = {.count = 1, .reusable = false}, SHIFT(207),
  [427] = {.count = 1, .reusable = false}, SHIFT(208),
  [429] = {.count = 1, .reusable = false}, SHIFT(209),
  [431] = {.count = 1, .reusable = true}, SHIFT(210),
  [433] = {.count = 1, .reusable = true}, SHIFT(211),
  [435] = {.count = 1, .reusable = true}, SHIFT(212),
  [437] = {.count = 1, .reusable = true}, SHIFT(213),
  [439] = {.count = 1, .reusable = false}, REDUCE(sym_typed_expression, 3),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym_typed_expression, 3),
  [443] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_expression, 3),
  [445] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 3),
  [447] = {.count = 1, .reusable = false}, REDUCE(sym_pair_expression, 3),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym_pair_expression, 3),
  [451] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 3),
  [453] = {.count = 2, .reusable = false}, REDUCE(aux_sym__expression_list_repeat1, 2), SHIFT_REPEAT(215),
  [456] = {.count = 2, .reusable = true}, REDUCE(aux_sym__expression_list_repeat1, 2), SHIFT_REPEAT(215),
  [459] = {.count = 1, .reusable = false}, SHIFT(216),
  [461] = {.count = 1, .reusable = true}, SHIFT(217),
  [463] = {.count = 1, .reusable = false}, SHIFT(218),
  [465] = {.count = 1, .reusable = true}, SHIFT(219),
  [467] = {.count = 1, .reusable = true}, SHIFT(220),
  [469] = {.count = 1, .reusable = true}, SHIFT(221),
  [471] = {.count = 1, .reusable = true}, SHIFT(222),
  [473] = {.count = 1, .reusable = true}, SHIFT(223),
  [475] = {.count = 1, .reusable = false}, REDUCE(sym_module_definition, 4),
  [477] = {.count = 1, .reusable = true}, REDUCE(sym_module_definition, 4),
  [479] = {.count = 1, .reusable = true}, SHIFT(224),
  [481] = {.count = 1, .reusable = false}, SHIFT(225),
  [483] = {.count = 1, .reusable = true}, SHIFT(225),
  [485] = {.count = 1, .reusable = false}, REDUCE(sym_import_list, 2),
  [487] = {.count = 1, .reusable = true}, REDUCE(sym_import_list, 2),
  [489] = {.count = 1, .reusable = false}, SHIFT(227),
  [491] = {.count = 1, .reusable = true}, SHIFT(229),
  [493] = {.count = 1, .reusable = true}, SHIFT(230),
  [495] = {.count = 1, .reusable = true}, SHIFT(231),
  [497] = {.count = 1, .reusable = true}, SHIFT(232),
  [499] = {.count = 1, .reusable = true}, SHIFT(233),
  [501] = {.count = 1, .reusable = false}, SHIFT(235),
  [503] = {.count = 1, .reusable = true}, SHIFT(234),
  [505] = {.count = 1, .reusable = true}, SHIFT(237),
  [507] = {.count = 1, .reusable = true}, SHIFT(238),
  [509] = {.count = 1, .reusable = true}, SHIFT(239),
  [511] = {.count = 1, .reusable = false}, REDUCE(sym_subtype_clause, 2),
  [513] = {.count = 1, .reusable = true}, REDUCE(sym_subtype_clause, 2),
  [515] = {.count = 1, .reusable = false}, SHIFT(244),
  [517] = {.count = 1, .reusable = false}, SHIFT(245),
  [519] = {.count = 1, .reusable = false}, SHIFT(240),
  [521] = {.count = 1, .reusable = false}, SHIFT(241),
  [523] = {.count = 1, .reusable = true}, SHIFT(246),
  [525] = {.count = 1, .reusable = true}, SHIFT(243),
  [527] = {.count = 1, .reusable = true}, SHIFT(247),
  [529] = {.count = 1, .reusable = true}, SHIFT(249),
  [531] = {.count = 1, .reusable = true}, SHIFT(251),
  [533] = {.count = 1, .reusable = true}, SHIFT(250),
  [535] = {.count = 1, .reusable = true}, SHIFT(253),
  [537] = {.count = 1, .reusable = false}, SHIFT(254),
  [539] = {.count = 1, .reusable = false}, SHIFT(255),
  [541] = {.count = 1, .reusable = false}, SHIFT(256),
  [543] = {.count = 1, .reusable = false}, SHIFT(257),
  [545] = {.count = 1, .reusable = true}, SHIFT(258),
  [547] = {.count = 1, .reusable = true}, SHIFT(259),
  [549] = {.count = 1, .reusable = false}, SHIFT(260),
  [551] = {.count = 1, .reusable = false}, REDUCE(sym_struct_definition, 4),
  [553] = {.count = 1, .reusable = true}, REDUCE(sym_struct_definition, 4),
  [555] = {.count = 1, .reusable = false}, SHIFT(261),
  [557] = {.count = 1, .reusable = true}, SHIFT(261),
  [559] = {.count = 1, .reusable = true}, SHIFT(263),
  [561] = {.count = 1, .reusable = true}, SHIFT(264),
  [563] = {.count = 1, .reusable = true}, SHIFT(265),
  [565] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_list, 2),
  [567] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 2),
  [569] = {.count = 1, .reusable = false}, REDUCE(sym_function_definition, 4),
  [571] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 4),
  [573] = {.count = 1, .reusable = false}, SHIFT(267),
  [575] = {.count = 1, .reusable = false}, SHIFT(268),
  [577] = {.count = 1, .reusable = true}, SHIFT(267),
  [579] = {.count = 1, .reusable = false}, SHIFT(270),
  [581] = {.count = 1, .reusable = false}, SHIFT(271),
  [583] = {.count = 1, .reusable = true}, SHIFT(270),
  [585] = {.count = 1, .reusable = true}, SHIFT(273),
  [587] = {.count = 1, .reusable = false}, SHIFT(274),
  [589] = {.count = 1, .reusable = false}, SHIFT(275),
  [591] = {.count = 1, .reusable = true}, SHIFT(274),
  [593] = {.count = 1, .reusable = true}, SHIFT(277),
  [595] = {.count = 1, .reusable = false}, SHIFT(279),
  [597] = {.count = 1, .reusable = true}, SHIFT(280),
  [599] = {.count = 1, .reusable = true}, SHIFT(281),
  [601] = {.count = 1, .reusable = false}, SHIFT(283),
  [603] = {.count = 1, .reusable = false}, SHIFT(284),
  [605] = {.count = 1, .reusable = true}, SHIFT(283),
  [607] = {.count = 1, .reusable = true}, SHIFT(289),
  [609] = {.count = 1, .reusable = false}, SHIFT(291),
  [611] = {.count = 1, .reusable = true}, SHIFT(292),
  [613] = {.count = 1, .reusable = false}, REDUCE(sym_type_argument_list, 3),
  [615] = {.count = 1, .reusable = true}, REDUCE(sym_type_argument_list, 3),
  [617] = {.count = 1, .reusable = true}, SHIFT(293),
  [619] = {.count = 1, .reusable = true}, SHIFT(294),
  [621] = {.count = 1, .reusable = true}, SHIFT(295),
  [623] = {.count = 1, .reusable = true}, SHIFT(296),
  [625] = {.count = 1, .reusable = true}, SHIFT(297),
  [627] = {.count = 1, .reusable = true}, SHIFT(298),
  [629] = {.count = 1, .reusable = true}, SHIFT(299),
  [631] = {.count = 1, .reusable = true}, SHIFT(301),
  [633] = {.count = 1, .reusable = false}, SHIFT(303),
  [635] = {.count = 1, .reusable = true}, SHIFT(304),
  [637] = {.count = 1, .reusable = true}, SHIFT(302),
  [639] = {.count = 1, .reusable = true}, SHIFT(305),
  [641] = {.count = 1, .reusable = true}, SHIFT(306),
  [643] = {.count = 1, .reusable = true}, SHIFT(307),
  [645] = {.count = 1, .reusable = true}, SHIFT(308),
  [647] = {.count = 1, .reusable = false}, SHIFT(309),
  [649] = {.count = 1, .reusable = true}, SHIFT(311),
  [651] = {.count = 1, .reusable = true}, SHIFT(313),
  [653] = {.count = 1, .reusable = true}, SHIFT(314),
  [655] = {.count = 1, .reusable = true}, SHIFT(315),
  [657] = {.count = 1, .reusable = false}, REDUCE(sym_if_statement, 4),
  [659] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 4),
  [661] = {.count = 1, .reusable = true}, SHIFT(316),
  [663] = {.count = 1, .reusable = true}, SHIFT(197),
  [665] = {.count = 1, .reusable = true}, SHIFT(309),
  [667] = {.count = 1, .reusable = false}, SHIFT(318),
  [669] = {.count = 1, .reusable = true}, SHIFT(318),
  [671] = {.count = 1, .reusable = false}, SHIFT(321),
  [673] = {.count = 1, .reusable = true}, SHIFT(322),
  [675] = {.count = 1, .reusable = true}, SHIFT(323),
  [677] = {.count = 1, .reusable = true}, SHIFT(324),
  [679] = {.count = 1, .reusable = true}, SHIFT(325),
  [681] = {.count = 1, .reusable = true}, SHIFT(326),
  [683] = {.count = 1, .reusable = true}, SHIFT(327),
  [685] = {.count = 1, .reusable = true}, SHIFT(328),
  [687] = {.count = 1, .reusable = false}, REDUCE(sym_argument_list, 3),
  [689] = {.count = 1, .reusable = true}, REDUCE(sym_argument_list, 3),
  [691] = {.count = 1, .reusable = true}, SHIFT(329),
  [693] = {.count = 1, .reusable = true}, SHIFT(331),
  [695] = {.count = 1, .reusable = false}, REDUCE(sym_module_definition, 5),
  [697] = {.count = 1, .reusable = true}, REDUCE(sym_module_definition, 5),
  [699] = {.count = 1, .reusable = false}, SHIFT(332),
  [701] = {.count = 2, .reusable = false}, REDUCE(aux_sym__expression_list_repeat1, 2), SHIFT_REPEAT(333),
  [704] = {.count = 2, .reusable = true}, REDUCE(aux_sym__expression_list_repeat1, 2), SHIFT_REPEAT(333),
  [707] = {.count = 1, .reusable = true}, SHIFT(334),
  [709] = {.count = 1, .reusable = false}, REDUCE(sym_import_list, 3),
  [711] = {.count = 1, .reusable = true}, REDUCE(sym_import_list, 3),
  [713] = {.count = 1, .reusable = false}, SHIFT(336),
  [715] = {.count = 1, .reusable = true}, SHIFT(337),
  [717] = {.count = 1, .reusable = false}, SHIFT(338),
  [719] = {.count = 1, .reusable = false}, SHIFT(340),
  [721] = {.count = 1, .reusable = true}, SHIFT(341),
  [723] = {.count = 1, .reusable = true}, SHIFT(345),
  [725] = {.count = 1, .reusable = true}, SHIFT(346),
  [727] = {.count = 1, .reusable = true}, SHIFT(347),
  [729] = {.count = 1, .reusable = true}, SHIFT(348),
  [731] = {.count = 1, .reusable = true}, SHIFT(349),
  [733] = {.count = 1, .reusable = true}, SHIFT(350),
  [735] = {.count = 1, .reusable = true}, SHIFT(351),
  [737] = {.count = 1, .reusable = true}, SHIFT(352),
  [739] = {.count = 1, .reusable = true}, SHIFT(354),
  [741] = {.count = 1, .reusable = true}, SHIFT(353),
  [743] = {.count = 1, .reusable = true}, SHIFT(355),
  [745] = {.count = 1, .reusable = true}, SHIFT(357),
  [747] = {.count = 1, .reusable = true}, SHIFT(358),
  [749] = {.count = 1, .reusable = true}, SHIFT(359),
  [751] = {.count = 1, .reusable = true}, SHIFT(360),
  [753] = {.count = 1, .reusable = false}, SHIFT(361),
  [755] = {.count = 1, .reusable = false}, SHIFT(362),
  [757] = {.count = 1, .reusable = false}, REDUCE(sym_type_parameter_list, 3),
  [759] = {.count = 1, .reusable = true}, REDUCE(sym_type_parameter_list, 3),
  [761] = {.count = 1, .reusable = true}, SHIFT(364),
  [763] = {.count = 1, .reusable = true}, SHIFT(366),
  [765] = {.count = 1, .reusable = true}, SHIFT(367),
  [767] = {.count = 1, .reusable = true}, SHIFT(368),
  [769] = {.count = 1, .reusable = true}, SHIFT(369),
  [771] = {.count = 1, .reusable = true}, SHIFT(370),
  [773] = {.count = 1, .reusable = false}, REDUCE(sym_struct_definition, 5),
  [775] = {.count = 1, .reusable = true}, REDUCE(sym_struct_definition, 5),
  [777] = {.count = 1, .reusable = false}, SHIFT(371),
  [779] = {.count = 1, .reusable = false}, SHIFT(372),
  [781] = {.count = 1, .reusable = true}, SHIFT(372),
  [783] = {.count = 1, .reusable = true}, SHIFT(374),
  [785] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_list, 3),
  [787] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 3),
  [789] = {.count = 1, .reusable = true}, SHIFT(375),
  [791] = {.count = 1, .reusable = false}, SHIFT(377),
  [793] = {.count = 1, .reusable = false}, REDUCE(sym_function_definition, 5),
  [795] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 5),
  [797] = {.count = 1, .reusable = false}, SHIFT(378),
  [799] = {.count = 1, .reusable = true}, SHIFT(378),
  [801] = {.count = 1, .reusable = false}, SHIFT(379),
  [803] = {.count = 1, .reusable = false}, SHIFT(380),
  [805] = {.count = 1, .reusable = true}, SHIFT(380),
  [807] = {.count = 1, .reusable = false}, SHIFT(382),
  [809] = {.count = 1, .reusable = false}, SHIFT(383),
  [811] = {.count = 1, .reusable = true}, SHIFT(383),
  [813] = {.count = 1, .reusable = true}, SHIFT(385),
  [815] = {.count = 1, .reusable = false}, SHIFT(386),
  [817] = {.count = 1, .reusable = false}, SHIFT(387),
  [819] = {.count = 1, .reusable = true}, SHIFT(386),
  [821] = {.count = 1, .reusable = true}, SHIFT(389),
  [823] = {.count = 1, .reusable = false}, SHIFT(390),
  [825] = {.count = 1, .reusable = true}, SHIFT(390),
  [827] = {.count = 1, .reusable = false}, SHIFT(393),
  [829] = {.count = 1, .reusable = true}, SHIFT(393),
  [831] = {.count = 1, .reusable = true}, SHIFT(395),
  [833] = {.count = 1, .reusable = true}, SHIFT(396),
  [835] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_argument_list_repeat1, 2),
  [837] = {.count = 1, .reusable = false}, REDUCE(sym_type_argument_list, 4),
  [839] = {.count = 1, .reusable = true}, REDUCE(sym_type_argument_list, 4),
  [841] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_argument_list_repeat1, 2), SHIFT_REPEAT(177),
  [844] = {.count = 1, .reusable = true}, SHIFT(398),
  [846] = {.count = 1, .reusable = true}, SHIFT(399),
  [848] = {.count = 1, .reusable = false}, SHIFT(400),
  [850] = {.count = 1, .reusable = false}, REDUCE(sym_else_clause, 2),
  [852] = {.count = 1, .reusable = true}, SHIFT(400),
  [854] = {.count = 1, .reusable = false}, REDUCE(sym_if_statement, 5),
  [856] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 5),
  [858] = {.count = 1, .reusable = true}, SHIFT(402),
  [860] = {.count = 1, .reusable = true}, SHIFT(404),
  [862] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(197),
  [865] = {.count = 1, .reusable = true}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [867] = {.count = 1, .reusable = false}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [869] = {.count = 1, .reusable = false}, SHIFT(402),
  [871] = {.count = 2, .reusable = false}, REDUCE(aux_sym__expression_list_repeat1, 2), SHIFT_REPEAT(406),
  [874] = {.count = 2, .reusable = true}, REDUCE(aux_sym__expression_list_repeat1, 2), SHIFT_REPEAT(406),
  [877] = {.count = 1, .reusable = true}, SHIFT(407),
  [879] = {.count = 1, .reusable = true}, SHIFT(408),
  [881] = {.count = 1, .reusable = true}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [883] = {.count = 1, .reusable = false}, REDUCE(sym_argument_list, 4),
  [885] = {.count = 1, .reusable = true}, REDUCE(sym_argument_list, 4),
  [887] = {.count = 2, .reusable = true}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(211),
  [890] = {.count = 1, .reusable = false}, REDUCE(sym_module_definition, 6),
  [892] = {.count = 1, .reusable = true}, REDUCE(sym_module_definition, 6),
  [894] = {.count = 1, .reusable = false}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [896] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [898] = {.count = 2, .reusable = false}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(227),
  [901] = {.count = 1, .reusable = false}, SHIFT(410),
  [903] = {.count = 1, .reusable = false}, SHIFT(411),
  [905] = {.count = 1, .reusable = true}, SHIFT(410),
  [907] = {.count = 1, .reusable = true}, SHIFT(413),
  [909] = {.count = 1, .reusable = false}, SHIFT(414),
  [911] = {.count = 1, .reusable = false}, SHIFT(415),
  [913] = {.count = 1, .reusable = true}, SHIFT(414),
  [915] = {.count = 1, .reusable = true}, SHIFT(417),
  [917] = {.count = 1, .reusable = false}, SHIFT(419),
  [919] = {.count = 1, .reusable = true}, SHIFT(420),
  [921] = {.count = 1, .reusable = true}, SHIFT(421),
  [923] = {.count = 1, .reusable = false}, SHIFT(423),
  [925] = {.count = 1, .reusable = false}, SHIFT(424),
  [927] = {.count = 1, .reusable = true}, SHIFT(423),
  [929] = {.count = 1, .reusable = true}, SHIFT(242),
  [931] = {.count = 1, .reusable = true}, SHIFT(430),
  [933] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_parameter_list_repeat1, 2),
  [935] = {.count = 1, .reusable = false}, REDUCE(sym_type_parameter_list, 4),
  [937] = {.count = 1, .reusable = true}, REDUCE(sym_type_parameter_list, 4),
  [939] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), SHIFT_REPEAT(250),
  [942] = {.count = 1, .reusable = false}, REDUCE(sym_struct_definition, 6),
  [944] = {.count = 1, .reusable = true}, REDUCE(sym_struct_definition, 6),
  [946] = {.count = 1, .reusable = false}, SHIFT(431),
  [948] = {.count = 1, .reusable = false}, SHIFT(432),
  [950] = {.count = 1, .reusable = true}, SHIFT(432),
  [952] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_list, 4),
  [954] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 4),
  [956] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(264),
  [959] = {.count = 1, .reusable = false}, REDUCE(sym_function_definition, 6),
  [961] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 6),
  [963] = {.count = 1, .reusable = false}, SHIFT(433),
  [965] = {.count = 1, .reusable = false}, SHIFT(434),
  [967] = {.count = 1, .reusable = false}, SHIFT(436),
  [969] = {.count = 1, .reusable = false}, SHIFT(437),
  [971] = {.count = 1, .reusable = true}, SHIFT(437),
  [973] = {.count = 1, .reusable = false}, SHIFT(439),
  [975] = {.count = 1, .reusable = false}, SHIFT(440),
  [977] = {.count = 1, .reusable = true}, SHIFT(440),
  [979] = {.count = 1, .reusable = true}, SHIFT(441),
  [981] = {.count = 1, .reusable = false}, SHIFT(441),
  [983] = {.count = 1, .reusable = true}, SHIFT(444),
  [985] = {.count = 1, .reusable = true}, SHIFT(447),
  [987] = {.count = 1, .reusable = false}, REDUCE(sym_else_clause, 3),
  [989] = {.count = 1, .reusable = false}, SHIFT(449),
  [991] = {.count = 1, .reusable = true}, SHIFT(449),
  [993] = {.count = 1, .reusable = false}, REDUCE(sym_if_statement, 6),
  [995] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 6),
  [997] = {.count = 1, .reusable = true}, SHIFT(450),
  [999] = {.count = 1, .reusable = false}, REDUCE(sym_elseif_clause, 3),
  [1001] = {.count = 1, .reusable = false}, SHIFT(451),
  [1003] = {.count = 1, .reusable = true}, SHIFT(451),
  [1005] = {.count = 1, .reusable = false}, SHIFT(457),
  [1007] = {.count = 1, .reusable = false}, SHIFT(458),
  [1009] = {.count = 1, .reusable = true}, SHIFT(458),
  [1011] = {.count = 1, .reusable = true}, SHIFT(459),
  [1013] = {.count = 1, .reusable = false}, SHIFT(461),
  [1015] = {.count = 1, .reusable = false}, SHIFT(462),
  [1017] = {.count = 1, .reusable = true}, SHIFT(462),
  [1019] = {.count = 1, .reusable = true}, SHIFT(464),
  [1021] = {.count = 1, .reusable = false}, SHIFT(465),
  [1023] = {.count = 1, .reusable = false}, SHIFT(466),
  [1025] = {.count = 1, .reusable = true}, SHIFT(465),
  [1027] = {.count = 1, .reusable = true}, SHIFT(468),
  [1029] = {.count = 1, .reusable = false}, SHIFT(469),
  [1031] = {.count = 1, .reusable = true}, SHIFT(469),
  [1033] = {.count = 1, .reusable = false}, SHIFT(472),
  [1035] = {.count = 1, .reusable = true}, SHIFT(472),
  [1037] = {.count = 1, .reusable = true}, SHIFT(474),
  [1039] = {.count = 1, .reusable = false}, REDUCE(sym_struct_definition, 7),
  [1041] = {.count = 1, .reusable = true}, REDUCE(sym_struct_definition, 7),
  [1043] = {.count = 1, .reusable = false}, SHIFT(476),
  [1045] = {.count = 1, .reusable = false}, REDUCE(sym_function_definition, 7),
  [1047] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 7),
  [1049] = {.count = 1, .reusable = false}, SHIFT(477),
  [1051] = {.count = 1, .reusable = false}, SHIFT(478),
  [1053] = {.count = 1, .reusable = true}, SHIFT(478),
  [1055] = {.count = 1, .reusable = false}, SHIFT(479),
  [1057] = {.count = 1, .reusable = true}, SHIFT(480),
  [1059] = {.count = 1, .reusable = false}, REDUCE(sym_else_clause, 4),
  [1061] = {.count = 1, .reusable = false}, REDUCE(sym_if_statement, 7),
  [1063] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 7),
  [1065] = {.count = 1, .reusable = false}, REDUCE(sym_elseif_clause, 4),
  [1067] = {.count = 1, .reusable = false}, SHIFT(485),
  [1069] = {.count = 1, .reusable = true}, SHIFT(485),
  [1071] = {.count = 1, .reusable = true}, SHIFT(486),
  [1073] = {.count = 1, .reusable = false}, SHIFT(487),
  [1075] = {.count = 1, .reusable = true}, SHIFT(487),
  [1077] = {.count = 1, .reusable = false}, SHIFT(488),
  [1079] = {.count = 1, .reusable = true}, SHIFT(489),
  [1081] = {.count = 1, .reusable = false}, SHIFT(491),
  [1083] = {.count = 1, .reusable = false}, SHIFT(492),
  [1085] = {.count = 1, .reusable = true}, SHIFT(492),
  [1087] = {.count = 1, .reusable = false}, SHIFT(494),
  [1089] = {.count = 1, .reusable = false}, SHIFT(495),
  [1091] = {.count = 1, .reusable = true}, SHIFT(495),
  [1093] = {.count = 1, .reusable = true}, SHIFT(496),
  [1095] = {.count = 1, .reusable = false}, SHIFT(496),
  [1097] = {.count = 1, .reusable = true}, SHIFT(499),
  [1099] = {.count = 1, .reusable = false}, REDUCE(sym_struct_definition, 8),
  [1101] = {.count = 1, .reusable = true}, REDUCE(sym_struct_definition, 8),
  [1103] = {.count = 1, .reusable = false}, SHIFT(501),
  [1105] = {.count = 1, .reusable = true}, SHIFT(502),
  [1107] = {.count = 1, .reusable = false}, SHIFT(503),
  [1109] = {.count = 1, .reusable = true}, SHIFT(503),
  [1111] = {.count = 1, .reusable = false}, REDUCE(sym_elseif_clause, 5),
  [1113] = {.count = 1, .reusable = false}, REDUCE(sym_if_statement, 8),
  [1115] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 8),
  [1117] = {.count = 1, .reusable = false}, SHIFT(504),
  [1119] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(459),
  [1122] = {.count = 1, .reusable = false}, SHIFT(505),
  [1124] = {.count = 1, .reusable = false}, SHIFT(506),
  [1126] = {.count = 1, .reusable = true}, SHIFT(506),
  [1128] = {.count = 1, .reusable = false}, SHIFT(507),
  [1130] = {.count = 1, .reusable = true}, SHIFT(508),
  [1132] = {.count = 1, .reusable = false}, SHIFT(511),
  [1134] = {.count = 1, .reusable = false}, REDUCE(sym_struct_definition, 9),
  [1136] = {.count = 1, .reusable = true}, REDUCE(sym_struct_definition, 9),
  [1138] = {.count = 1, .reusable = false}, SHIFT(512),
  [1140] = {.count = 1, .reusable = true}, SHIFT(513),
  [1142] = {.count = 1, .reusable = false}, SHIFT(514),
  [1144] = {.count = 1, .reusable = true}, SHIFT(514),
  [1146] = {.count = 1, .reusable = false}, SHIFT(515),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_julia(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
