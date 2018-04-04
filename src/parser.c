#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 225
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_module = 1,
  anon_sym_end = 2,
  anon_sym_mutable = 3,
  anon_sym_struct = 4,
  anon_sym_COLON_COLON = 5,
  anon_sym_LT_COLON = 6,
  anon_sym_LBRACE = 7,
  anon_sym_COMMA = 8,
  anon_sym_RBRACE = 9,
  anon_sym_function = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  anon_sym_PIPE_PIPE = 13,
  anon_sym_AMP_AMP = 14,
  anon_sym_EQ_GT = 15,
  anon_sym_if = 16,
  anon_sym_elseif = 17,
  anon_sym_else = 18,
  sym_identifier = 19,
  sym_number = 20,
  sym_string = 21,
  sym__times_operator = 22,
  sym__plus_operator = 23,
  sym__arrow_operator = 24,
  sym__assign_operator = 25,
  anon_sym_LF = 26,
  anon_sym_SEMI = 27,
  sym_comment = 28,
  sym_source_file = 29,
  sym__expression = 30,
  sym_module_expression = 31,
  sym_struct_definition = 32,
  sym_typed_identifier = 33,
  sym_parameterized_identifier = 34,
  sym_function_expression = 35,
  sym_parameter_list = 36,
  sym_call_expression = 37,
  sym_argument_list = 38,
  sym_assignment_expression = 39,
  sym_binary_expression = 40,
  sym_pair_expression = 41,
  sym_conditional_expression = 42,
  sym_elseif_clause = 43,
  sym_else_clause = 44,
  aux_sym__expression_list_repeat1 = 45,
  aux_sym_struct_definition_repeat1 = 46,
  aux_sym_parameterized_identifier_repeat1 = 47,
  aux_sym_parameter_list_repeat1 = 48,
  aux_sym_argument_list_repeat1 = 49,
  aux_sym_conditional_expression_repeat1 = 50,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_module] = "module",
  [anon_sym_end] = "end",
  [anon_sym_mutable] = "mutable",
  [anon_sym_struct] = "struct",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_LT_COLON] = "<:",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_function] = "function",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_if] = "if",
  [anon_sym_elseif] = "elseif",
  [anon_sym_else] = "else",
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
  [sym__expression] = "_expression",
  [sym_module_expression] = "module_expression",
  [sym_struct_definition] = "struct_definition",
  [sym_typed_identifier] = "typed_identifier",
  [sym_parameterized_identifier] = "parameterized_identifier",
  [sym_function_expression] = "function_expression",
  [sym_parameter_list] = "parameter_list",
  [sym_call_expression] = "call_expression",
  [sym_argument_list] = "argument_list",
  [sym_assignment_expression] = "assignment_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_pair_expression] = "pair_expression",
  [sym_conditional_expression] = "conditional_expression",
  [sym_elseif_clause] = "elseif_clause",
  [sym_else_clause] = "else_clause",
  [aux_sym__expression_list_repeat1] = "_expression_list_repeat1",
  [aux_sym_struct_definition_repeat1] = "struct_definition_repeat1",
  [aux_sym_parameterized_identifier_repeat1] = "parameterized_identifier_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_conditional_expression_repeat1] = "conditional_expression_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_module] = {
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
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
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
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_module_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_typed_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_parameterized_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_function_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
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
  [sym_conditional_expression] = {
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
  [aux_sym__expression_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameterized_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_conditional_expression_repeat1] = {
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
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(6);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(13);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '.')
        ADVANCE(17);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(30);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(35);
      if (lookahead == '>')
        ADVANCE(21);
      if (lookahead == '\\')
        ADVANCE(23);
      if (lookahead == '^')
        ADVANCE(19);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '|')
        ADVANCE(38);
      if (lookahead == '}')
        ADVANCE(40);
      if (lookahead == '~')
        ADVANCE(7);
      if (lookahead == 177)
        ADVANCE(27);
      if (lookahead == 215)
        ADVANCE(23);
      if (lookahead == 247)
        ADVANCE(8);
      if (lookahead == 8523)
        ADVANCE(23);
      if (lookahead == 8592)
        ADVANCE(16);
      if (lookahead == 8594)
        ADVANCE(16);
      if (lookahead == 8596)
        ADVANCE(16);
      if (lookahead == 8602)
        ADVANCE(16);
      if (lookahead == 8603)
        ADVANCE(16);
      if (lookahead == 8604)
        ADVANCE(16);
      if (lookahead == 8605)
        ADVANCE(16);
      if (lookahead == 8606)
        ADVANCE(16);
      if (lookahead == 8608)
        ADVANCE(16);
      if (lookahead == 8610)
        ADVANCE(16);
      if (lookahead == 8611)
        ADVANCE(16);
      if (lookahead == 8612)
        ADVANCE(16);
      if (lookahead == 8614)
        ADVANCE(16);
      if (lookahead == 8617)
        ADVANCE(16);
      if (lookahead == 8618)
        ADVANCE(16);
      if (lookahead == 8619)
        ADVANCE(16);
      if (lookahead == 8620)
        ADVANCE(16);
      if (lookahead == 8622)
        ADVANCE(16);
      if (lookahead == 8636)
        ADVANCE(16);
      if (lookahead == 8637)
        ADVANCE(16);
      if (lookahead == 8640)
        ADVANCE(16);
      if (lookahead == 8641)
        ADVANCE(16);
      if (lookahead == 8644)
        ADVANCE(16);
      if (lookahead == 8646)
        ADVANCE(16);
      if (lookahead == 8647)
        ADVANCE(16);
      if (lookahead == 8649)
        ADVANCE(16);
      if (lookahead == 8651)
        ADVANCE(16);
      if (lookahead == 8652)
        ADVANCE(16);
      if (lookahead == 8653)
        ADVANCE(16);
      if (lookahead == 8654)
        ADVANCE(16);
      if (lookahead == 8655)
        ADVANCE(16);
      if (lookahead == 8656)
        ADVANCE(16);
      if (lookahead == 8658)
        ADVANCE(16);
      if (lookahead == 8660)
        ADVANCE(16);
      if (lookahead == 8666)
        ADVANCE(16);
      if (lookahead == 8667)
        ADVANCE(16);
      if (lookahead == 8668)
        ADVANCE(16);
      if (lookahead == 8669)
        ADVANCE(16);
      if (lookahead == 8672)
        ADVANCE(16);
      if (lookahead == 8674)
        ADVANCE(16);
      if (lookahead == 8692)
        ADVANCE(16);
      if (lookahead == 8694)
        ADVANCE(16);
      if (lookahead == 8695)
        ADVANCE(16);
      if (lookahead == 8696)
        ADVANCE(16);
      if (lookahead == 8697)
        ADVANCE(16);
      if (lookahead == 8698)
        ADVANCE(16);
      if (lookahead == 8699)
        ADVANCE(16);
      if (lookahead == 8700)
        ADVANCE(16);
      if (lookahead == 8701)
        ADVANCE(16);
      if (lookahead == 8702)
        ADVANCE(16);
      if (lookahead == 8703)
        ADVANCE(16);
      if (lookahead == 8723)
        ADVANCE(27);
      if (lookahead == 8724)
        ADVANCE(27);
      if (lookahead == 8727)
        ADVANCE(23);
      if (lookahead == 8728)
        ADVANCE(23);
      if (lookahead == 8729)
        ADVANCE(23);
      if (lookahead == 8740)
        ADVANCE(23);
      if (lookahead == 8743)
        ADVANCE(23);
      if (lookahead == 8744)
        ADVANCE(27);
      if (lookahead == 8745)
        ADVANCE(23);
      if (lookahead == 8746)
        ADVANCE(27);
      if (lookahead == 8760)
        ADVANCE(27);
      if (lookahead == 8768)
        ADVANCE(23);
      if (lookahead == 8770)
        ADVANCE(27);
      if (lookahead == 8783)
        ADVANCE(27);
      if (lookahead == 8788)
        ADVANCE(7);
      if (lookahead == 8789)
        ADVANCE(7);
      if (lookahead == 8845)
        ADVANCE(23);
      if (lookahead == 8846)
        ADVANCE(27);
      if (lookahead == 8851)
        ADVANCE(23);
      if (lookahead == 8852)
        ADVANCE(27);
      if (lookahead == 8853)
        ADVANCE(27);
      if (lookahead == 8854)
        ADVANCE(27);
      if (lookahead == 8855)
        ADVANCE(23);
      if (lookahead == 8856)
        ADVANCE(23);
      if (lookahead == 8857)
        ADVANCE(23);
      if (lookahead == 8858)
        ADVANCE(23);
      if (lookahead == 8859)
        ADVANCE(23);
      if (lookahead == 8862)
        ADVANCE(27);
      if (lookahead == 8863)
        ADVANCE(27);
      if (lookahead == 8864)
        ADVANCE(23);
      if (lookahead == 8865)
        ADVANCE(23);
      if (lookahead == 8891)
        ADVANCE(6);
      if (lookahead == 8892)
        ADVANCE(23);
      if (lookahead == 8893)
        ADVANCE(27);
      if (lookahead == 8900)
        ADVANCE(23);
      if (lookahead == 8901)
        ADVANCE(23);
      if (lookahead == 8902)
        ADVANCE(23);
      if (lookahead == 8903)
        ADVANCE(23);
      if (lookahead == 8905)
        ADVANCE(23);
      if (lookahead == 8906)
        ADVANCE(23);
      if (lookahead == 8907)
        ADVANCE(23);
      if (lookahead == 8908)
        ADVANCE(23);
      if (lookahead == 8910)
        ADVANCE(27);
      if (lookahead == 8911)
        ADVANCE(23);
      if (lookahead == 8914)
        ADVANCE(23);
      if (lookahead == 8915)
        ADVANCE(27);
      if (lookahead == 9655)
        ADVANCE(23);
      if (lookahead == 10193)
        ADVANCE(23);
      if (lookahead == 10197)
        ADVANCE(23);
      if (lookahead == 10198)
        ADVANCE(23);
      if (lookahead == 10199)
        ADVANCE(23);
      if (lookahead == 10229)
        ADVANCE(16);
      if (lookahead == 10230)
        ADVANCE(16);
      if (lookahead == 10231)
        ADVANCE(16);
      if (lookahead == 10233)
        ADVANCE(16);
      if (lookahead == 10234)
        ADVANCE(16);
      if (lookahead == 10235)
        ADVANCE(16);
      if (lookahead == 10236)
        ADVANCE(16);
      if (lookahead == 10237)
        ADVANCE(16);
      if (lookahead == 10238)
        ADVANCE(16);
      if (lookahead == 10239)
        ADVANCE(16);
      if (lookahead == 10496)
        ADVANCE(16);
      if (lookahead == 10497)
        ADVANCE(16);
      if (lookahead == 10498)
        ADVANCE(16);
      if (lookahead == 10499)
        ADVANCE(16);
      if (lookahead == 10500)
        ADVANCE(16);
      if (lookahead == 10501)
        ADVANCE(16);
      if (lookahead == 10502)
        ADVANCE(16);
      if (lookahead == 10503)
        ADVANCE(16);
      if (lookahead == 10508)
        ADVANCE(16);
      if (lookahead == 10509)
        ADVANCE(16);
      if (lookahead == 10510)
        ADVANCE(16);
      if (lookahead == 10511)
        ADVANCE(16);
      if (lookahead == 10512)
        ADVANCE(16);
      if (lookahead == 10513)
        ADVANCE(16);
      if (lookahead == 10516)
        ADVANCE(16);
      if (lookahead == 10517)
        ADVANCE(16);
      if (lookahead == 10518)
        ADVANCE(16);
      if (lookahead == 10519)
        ADVANCE(16);
      if (lookahead == 10520)
        ADVANCE(16);
      if (lookahead == 10525)
        ADVANCE(16);
      if (lookahead == 10526)
        ADVANCE(16);
      if (lookahead == 10527)
        ADVANCE(16);
      if (lookahead == 10528)
        ADVANCE(16);
      if (lookahead == 10564)
        ADVANCE(16);
      if (lookahead == 10565)
        ADVANCE(16);
      if (lookahead == 10566)
        ADVANCE(16);
      if (lookahead == 10567)
        ADVANCE(16);
      if (lookahead == 10568)
        ADVANCE(16);
      if (lookahead == 10570)
        ADVANCE(16);
      if (lookahead == 10571)
        ADVANCE(16);
      if (lookahead == 10574)
        ADVANCE(16);
      if (lookahead == 10576)
        ADVANCE(16);
      if (lookahead == 10578)
        ADVANCE(16);
      if (lookahead == 10579)
        ADVANCE(16);
      if (lookahead == 10582)
        ADVANCE(16);
      if (lookahead == 10583)
        ADVANCE(16);
      if (lookahead == 10586)
        ADVANCE(16);
      if (lookahead == 10587)
        ADVANCE(16);
      if (lookahead == 10590)
        ADVANCE(16);
      if (lookahead == 10591)
        ADVANCE(16);
      if (lookahead == 10594)
        ADVANCE(16);
      if (lookahead == 10596)
        ADVANCE(16);
      if (lookahead == 10598)
        ADVANCE(16);
      if (lookahead == 10599)
        ADVANCE(16);
      if (lookahead == 10600)
        ADVANCE(16);
      if (lookahead == 10601)
        ADVANCE(16);
      if (lookahead == 10602)
        ADVANCE(16);
      if (lookahead == 10603)
        ADVANCE(16);
      if (lookahead == 10604)
        ADVANCE(16);
      if (lookahead == 10605)
        ADVANCE(16);
      if (lookahead == 10608)
        ADVANCE(16);
      if (lookahead == 10680)
        ADVANCE(23);
      if (lookahead == 10684)
        ADVANCE(23);
      if (lookahead == 10686)
        ADVANCE(23);
      if (lookahead == 10687)
        ADVANCE(23);
      if (lookahead == 10740)
        ADVANCE(16);
      if (lookahead == 10742)
        ADVANCE(23);
      if (lookahead == 10743)
        ADVANCE(23);
      if (lookahead == 10746)
        ADVANCE(27);
      if (lookahead == 10747)
        ADVANCE(27);
      if (lookahead == 10759)
        ADVANCE(23);
      if (lookahead == 10760)
        ADVANCE(27);
      if (lookahead == 10781)
        ADVANCE(23);
      if (lookahead == 10786)
        ADVANCE(27);
      if (lookahead == 10787)
        ADVANCE(27);
      if (lookahead == 10788)
        ADVANCE(27);
      if (lookahead == 10789)
        ADVANCE(27);
      if (lookahead == 10790)
        ADVANCE(27);
      if (lookahead == 10791)
        ADVANCE(27);
      if (lookahead == 10792)
        ADVANCE(27);
      if (lookahead == 10793)
        ADVANCE(27);
      if (lookahead == 10794)
        ADVANCE(27);
      if (lookahead == 10795)
        ADVANCE(27);
      if (lookahead == 10796)
        ADVANCE(27);
      if (lookahead == 10797)
        ADVANCE(27);
      if (lookahead == 10798)
        ADVANCE(27);
      if (lookahead == 10800)
        ADVANCE(23);
      if (lookahead == 10801)
        ADVANCE(23);
      if (lookahead == 10802)
        ADVANCE(23);
      if (lookahead == 10803)
        ADVANCE(23);
      if (lookahead == 10804)
        ADVANCE(23);
      if (lookahead == 10805)
        ADVANCE(23);
      if (lookahead == 10806)
        ADVANCE(23);
      if (lookahead == 10807)
        ADVANCE(23);
      if (lookahead == 10808)
        ADVANCE(23);
      if (lookahead == 10809)
        ADVANCE(27);
      if (lookahead == 10810)
        ADVANCE(27);
      if (lookahead == 10811)
        ADVANCE(23);
      if (lookahead == 10812)
        ADVANCE(23);
      if (lookahead == 10813)
        ADVANCE(23);
      if (lookahead == 10816)
        ADVANCE(23);
      if (lookahead == 10817)
        ADVANCE(27);
      if (lookahead == 10818)
        ADVANCE(27);
      if (lookahead == 10819)
        ADVANCE(23);
      if (lookahead == 10820)
        ADVANCE(23);
      if (lookahead == 10821)
        ADVANCE(27);
      if (lookahead == 10826)
        ADVANCE(27);
      if (lookahead == 10827)
        ADVANCE(23);
      if (lookahead == 10828)
        ADVANCE(27);
      if (lookahead == 10829)
        ADVANCE(23);
      if (lookahead == 10830)
        ADVANCE(23);
      if (lookahead == 10831)
        ADVANCE(27);
      if (lookahead == 10832)
        ADVANCE(27);
      if (lookahead == 10833)
        ADVANCE(23);
      if (lookahead == 10834)
        ADVANCE(27);
      if (lookahead == 10835)
        ADVANCE(23);
      if (lookahead == 10836)
        ADVANCE(27);
      if (lookahead == 10837)
        ADVANCE(23);
      if (lookahead == 10838)
        ADVANCE(27);
      if (lookahead == 10839)
        ADVANCE(27);
      if (lookahead == 10840)
        ADVANCE(23);
      if (lookahead == 10842)
        ADVANCE(23);
      if (lookahead == 10843)
        ADVANCE(27);
      if (lookahead == 10844)
        ADVANCE(23);
      if (lookahead == 10845)
        ADVANCE(27);
      if (lookahead == 10846)
        ADVANCE(23);
      if (lookahead == 10847)
        ADVANCE(23);
      if (lookahead == 10848)
        ADVANCE(23);
      if (lookahead == 10849)
        ADVANCE(27);
      if (lookahead == 10850)
        ADVANCE(27);
      if (lookahead == 10851)
        ADVANCE(27);
      if (lookahead == 10868)
        ADVANCE(7);
      if (lookahead == 10971)
        ADVANCE(23);
      if (lookahead == 11056)
        ADVANCE(16);
      if (lookahead == 11057)
        ADVANCE(16);
      if (lookahead == 11058)
        ADVANCE(16);
      if (lookahead == 11059)
        ADVANCE(16);
      if (lookahead == 11060)
        ADVANCE(16);
      if (lookahead == 11061)
        ADVANCE(16);
      if (lookahead == 11062)
        ADVANCE(16);
      if (lookahead == 11063)
        ADVANCE(16);
      if (lookahead == 11064)
        ADVANCE(16);
      if (lookahead == 11065)
        ADVANCE(16);
      if (lookahead == 11066)
        ADVANCE(16);
      if (lookahead == 11067)
        ADVANCE(16);
      if (lookahead == 11068)
        ADVANCE(16);
      if (lookahead == 11069)
        ADVANCE(16);
      if (lookahead == 11070)
        ADVANCE(16);
      if (lookahead == 11071)
        ADVANCE(16);
      if (lookahead == 11072)
        ADVANCE(16);
      if (lookahead == 11073)
        ADVANCE(16);
      if (lookahead == 11074)
        ADVANCE(16);
      if (lookahead == 11075)
        ADVANCE(16);
      if (lookahead == 11076)
        ADVANCE(16);
      if (lookahead == 11079)
        ADVANCE(16);
      if (lookahead == 11080)
        ADVANCE(16);
      if (lookahead == 11081)
        ADVANCE(16);
      if (lookahead == 11082)
        ADVANCE(16);
      if (lookahead == 11083)
        ADVANCE(16);
      if (lookahead == 11084)
        ADVANCE(16);
      if (lookahead == 65513)
        ADVANCE(16);
      if (lookahead == 65515)
        ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(42);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '\\')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 4:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym__plus_operator);
      if (lookahead == '=')
        ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym__assign_operator);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym__times_operator);
      if (lookahead == '=')
        ADVANCE(7);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym__times_operator);
      if (lookahead == '&')
        ADVANCE(10);
      if (lookahead == '=')
        ADVANCE(7);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__plus_operator);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '=')
        ADVANCE(7);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__arrow_operator);
      if (lookahead == '>')
        ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__arrow_operator);
      END_STATE();
    case 17:
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(6);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == '<')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(7);
      if (lookahead == '>')
        ADVANCE(21);
      if (lookahead == '\\')
        ADVANCE(23);
      if (lookahead == '^')
        ADVANCE(19);
      if (lookahead == '|')
        ADVANCE(24);
      if (lookahead == 177)
        ADVANCE(27);
      if (lookahead == 215)
        ADVANCE(23);
      if (lookahead == 247)
        ADVANCE(8);
      if (lookahead == 8523)
        ADVANCE(23);
      if (lookahead == 8592)
        ADVANCE(16);
      if (lookahead == 8594)
        ADVANCE(16);
      if (lookahead == 8596)
        ADVANCE(16);
      if (lookahead == 8602)
        ADVANCE(16);
      if (lookahead == 8603)
        ADVANCE(16);
      if (lookahead == 8604)
        ADVANCE(16);
      if (lookahead == 8605)
        ADVANCE(16);
      if (lookahead == 8606)
        ADVANCE(16);
      if (lookahead == 8608)
        ADVANCE(16);
      if (lookahead == 8610)
        ADVANCE(16);
      if (lookahead == 8611)
        ADVANCE(16);
      if (lookahead == 8612)
        ADVANCE(16);
      if (lookahead == 8614)
        ADVANCE(16);
      if (lookahead == 8617)
        ADVANCE(16);
      if (lookahead == 8618)
        ADVANCE(16);
      if (lookahead == 8619)
        ADVANCE(16);
      if (lookahead == 8620)
        ADVANCE(16);
      if (lookahead == 8622)
        ADVANCE(16);
      if (lookahead == 8636)
        ADVANCE(16);
      if (lookahead == 8637)
        ADVANCE(16);
      if (lookahead == 8640)
        ADVANCE(16);
      if (lookahead == 8641)
        ADVANCE(16);
      if (lookahead == 8644)
        ADVANCE(16);
      if (lookahead == 8646)
        ADVANCE(16);
      if (lookahead == 8647)
        ADVANCE(16);
      if (lookahead == 8649)
        ADVANCE(16);
      if (lookahead == 8651)
        ADVANCE(16);
      if (lookahead == 8652)
        ADVANCE(16);
      if (lookahead == 8653)
        ADVANCE(16);
      if (lookahead == 8654)
        ADVANCE(16);
      if (lookahead == 8655)
        ADVANCE(16);
      if (lookahead == 8656)
        ADVANCE(16);
      if (lookahead == 8658)
        ADVANCE(16);
      if (lookahead == 8660)
        ADVANCE(16);
      if (lookahead == 8666)
        ADVANCE(16);
      if (lookahead == 8667)
        ADVANCE(16);
      if (lookahead == 8668)
        ADVANCE(16);
      if (lookahead == 8669)
        ADVANCE(16);
      if (lookahead == 8672)
        ADVANCE(16);
      if (lookahead == 8674)
        ADVANCE(16);
      if (lookahead == 8692)
        ADVANCE(16);
      if (lookahead == 8694)
        ADVANCE(16);
      if (lookahead == 8695)
        ADVANCE(16);
      if (lookahead == 8696)
        ADVANCE(16);
      if (lookahead == 8697)
        ADVANCE(16);
      if (lookahead == 8698)
        ADVANCE(16);
      if (lookahead == 8699)
        ADVANCE(16);
      if (lookahead == 8700)
        ADVANCE(16);
      if (lookahead == 8701)
        ADVANCE(16);
      if (lookahead == 8702)
        ADVANCE(16);
      if (lookahead == 8703)
        ADVANCE(16);
      if (lookahead == 8723)
        ADVANCE(27);
      if (lookahead == 8724)
        ADVANCE(27);
      if (lookahead == 8727)
        ADVANCE(23);
      if (lookahead == 8728)
        ADVANCE(23);
      if (lookahead == 8729)
        ADVANCE(23);
      if (lookahead == 8740)
        ADVANCE(23);
      if (lookahead == 8743)
        ADVANCE(23);
      if (lookahead == 8744)
        ADVANCE(27);
      if (lookahead == 8745)
        ADVANCE(23);
      if (lookahead == 8746)
        ADVANCE(27);
      if (lookahead == 8760)
        ADVANCE(27);
      if (lookahead == 8768)
        ADVANCE(23);
      if (lookahead == 8770)
        ADVANCE(27);
      if (lookahead == 8783)
        ADVANCE(27);
      if (lookahead == 8788)
        ADVANCE(7);
      if (lookahead == 8789)
        ADVANCE(7);
      if (lookahead == 8845)
        ADVANCE(23);
      if (lookahead == 8846)
        ADVANCE(27);
      if (lookahead == 8851)
        ADVANCE(23);
      if (lookahead == 8852)
        ADVANCE(27);
      if (lookahead == 8853)
        ADVANCE(27);
      if (lookahead == 8854)
        ADVANCE(27);
      if (lookahead == 8855)
        ADVANCE(23);
      if (lookahead == 8856)
        ADVANCE(23);
      if (lookahead == 8857)
        ADVANCE(23);
      if (lookahead == 8858)
        ADVANCE(23);
      if (lookahead == 8859)
        ADVANCE(23);
      if (lookahead == 8862)
        ADVANCE(27);
      if (lookahead == 8863)
        ADVANCE(27);
      if (lookahead == 8864)
        ADVANCE(23);
      if (lookahead == 8865)
        ADVANCE(23);
      if (lookahead == 8891)
        ADVANCE(6);
      if (lookahead == 8892)
        ADVANCE(23);
      if (lookahead == 8893)
        ADVANCE(27);
      if (lookahead == 8900)
        ADVANCE(23);
      if (lookahead == 8901)
        ADVANCE(23);
      if (lookahead == 8902)
        ADVANCE(23);
      if (lookahead == 8903)
        ADVANCE(23);
      if (lookahead == 8905)
        ADVANCE(23);
      if (lookahead == 8906)
        ADVANCE(23);
      if (lookahead == 8907)
        ADVANCE(23);
      if (lookahead == 8908)
        ADVANCE(23);
      if (lookahead == 8910)
        ADVANCE(27);
      if (lookahead == 8911)
        ADVANCE(23);
      if (lookahead == 8914)
        ADVANCE(23);
      if (lookahead == 8915)
        ADVANCE(27);
      if (lookahead == 9655)
        ADVANCE(23);
      if (lookahead == 10193)
        ADVANCE(23);
      if (lookahead == 10197)
        ADVANCE(23);
      if (lookahead == 10198)
        ADVANCE(23);
      if (lookahead == 10199)
        ADVANCE(23);
      if (lookahead == 10229)
        ADVANCE(16);
      if (lookahead == 10230)
        ADVANCE(16);
      if (lookahead == 10231)
        ADVANCE(16);
      if (lookahead == 10233)
        ADVANCE(16);
      if (lookahead == 10234)
        ADVANCE(16);
      if (lookahead == 10235)
        ADVANCE(16);
      if (lookahead == 10236)
        ADVANCE(16);
      if (lookahead == 10237)
        ADVANCE(16);
      if (lookahead == 10238)
        ADVANCE(16);
      if (lookahead == 10239)
        ADVANCE(16);
      if (lookahead == 10496)
        ADVANCE(16);
      if (lookahead == 10497)
        ADVANCE(16);
      if (lookahead == 10498)
        ADVANCE(16);
      if (lookahead == 10499)
        ADVANCE(16);
      if (lookahead == 10500)
        ADVANCE(16);
      if (lookahead == 10501)
        ADVANCE(16);
      if (lookahead == 10502)
        ADVANCE(16);
      if (lookahead == 10503)
        ADVANCE(16);
      if (lookahead == 10508)
        ADVANCE(16);
      if (lookahead == 10509)
        ADVANCE(16);
      if (lookahead == 10510)
        ADVANCE(16);
      if (lookahead == 10511)
        ADVANCE(16);
      if (lookahead == 10512)
        ADVANCE(16);
      if (lookahead == 10513)
        ADVANCE(16);
      if (lookahead == 10516)
        ADVANCE(16);
      if (lookahead == 10517)
        ADVANCE(16);
      if (lookahead == 10518)
        ADVANCE(16);
      if (lookahead == 10519)
        ADVANCE(16);
      if (lookahead == 10520)
        ADVANCE(16);
      if (lookahead == 10525)
        ADVANCE(16);
      if (lookahead == 10526)
        ADVANCE(16);
      if (lookahead == 10527)
        ADVANCE(16);
      if (lookahead == 10528)
        ADVANCE(16);
      if (lookahead == 10564)
        ADVANCE(16);
      if (lookahead == 10565)
        ADVANCE(16);
      if (lookahead == 10566)
        ADVANCE(16);
      if (lookahead == 10567)
        ADVANCE(16);
      if (lookahead == 10568)
        ADVANCE(16);
      if (lookahead == 10570)
        ADVANCE(16);
      if (lookahead == 10571)
        ADVANCE(16);
      if (lookahead == 10574)
        ADVANCE(16);
      if (lookahead == 10576)
        ADVANCE(16);
      if (lookahead == 10578)
        ADVANCE(16);
      if (lookahead == 10579)
        ADVANCE(16);
      if (lookahead == 10582)
        ADVANCE(16);
      if (lookahead == 10583)
        ADVANCE(16);
      if (lookahead == 10586)
        ADVANCE(16);
      if (lookahead == 10587)
        ADVANCE(16);
      if (lookahead == 10590)
        ADVANCE(16);
      if (lookahead == 10591)
        ADVANCE(16);
      if (lookahead == 10594)
        ADVANCE(16);
      if (lookahead == 10596)
        ADVANCE(16);
      if (lookahead == 10598)
        ADVANCE(16);
      if (lookahead == 10599)
        ADVANCE(16);
      if (lookahead == 10600)
        ADVANCE(16);
      if (lookahead == 10601)
        ADVANCE(16);
      if (lookahead == 10602)
        ADVANCE(16);
      if (lookahead == 10603)
        ADVANCE(16);
      if (lookahead == 10604)
        ADVANCE(16);
      if (lookahead == 10605)
        ADVANCE(16);
      if (lookahead == 10608)
        ADVANCE(16);
      if (lookahead == 10680)
        ADVANCE(23);
      if (lookahead == 10684)
        ADVANCE(23);
      if (lookahead == 10686)
        ADVANCE(23);
      if (lookahead == 10687)
        ADVANCE(23);
      if (lookahead == 10740)
        ADVANCE(16);
      if (lookahead == 10742)
        ADVANCE(23);
      if (lookahead == 10743)
        ADVANCE(23);
      if (lookahead == 10746)
        ADVANCE(27);
      if (lookahead == 10747)
        ADVANCE(27);
      if (lookahead == 10759)
        ADVANCE(23);
      if (lookahead == 10760)
        ADVANCE(27);
      if (lookahead == 10781)
        ADVANCE(23);
      if (lookahead == 10786)
        ADVANCE(27);
      if (lookahead == 10787)
        ADVANCE(27);
      if (lookahead == 10788)
        ADVANCE(27);
      if (lookahead == 10789)
        ADVANCE(27);
      if (lookahead == 10790)
        ADVANCE(27);
      if (lookahead == 10791)
        ADVANCE(27);
      if (lookahead == 10792)
        ADVANCE(27);
      if (lookahead == 10793)
        ADVANCE(27);
      if (lookahead == 10794)
        ADVANCE(27);
      if (lookahead == 10795)
        ADVANCE(27);
      if (lookahead == 10796)
        ADVANCE(27);
      if (lookahead == 10797)
        ADVANCE(27);
      if (lookahead == 10798)
        ADVANCE(27);
      if (lookahead == 10800)
        ADVANCE(23);
      if (lookahead == 10801)
        ADVANCE(23);
      if (lookahead == 10802)
        ADVANCE(23);
      if (lookahead == 10803)
        ADVANCE(23);
      if (lookahead == 10804)
        ADVANCE(23);
      if (lookahead == 10805)
        ADVANCE(23);
      if (lookahead == 10806)
        ADVANCE(23);
      if (lookahead == 10807)
        ADVANCE(23);
      if (lookahead == 10808)
        ADVANCE(23);
      if (lookahead == 10809)
        ADVANCE(27);
      if (lookahead == 10810)
        ADVANCE(27);
      if (lookahead == 10811)
        ADVANCE(23);
      if (lookahead == 10812)
        ADVANCE(23);
      if (lookahead == 10813)
        ADVANCE(23);
      if (lookahead == 10816)
        ADVANCE(23);
      if (lookahead == 10817)
        ADVANCE(27);
      if (lookahead == 10818)
        ADVANCE(27);
      if (lookahead == 10819)
        ADVANCE(23);
      if (lookahead == 10820)
        ADVANCE(23);
      if (lookahead == 10821)
        ADVANCE(27);
      if (lookahead == 10826)
        ADVANCE(27);
      if (lookahead == 10827)
        ADVANCE(23);
      if (lookahead == 10828)
        ADVANCE(27);
      if (lookahead == 10829)
        ADVANCE(23);
      if (lookahead == 10830)
        ADVANCE(23);
      if (lookahead == 10831)
        ADVANCE(27);
      if (lookahead == 10832)
        ADVANCE(27);
      if (lookahead == 10833)
        ADVANCE(23);
      if (lookahead == 10834)
        ADVANCE(27);
      if (lookahead == 10835)
        ADVANCE(23);
      if (lookahead == 10836)
        ADVANCE(27);
      if (lookahead == 10837)
        ADVANCE(23);
      if (lookahead == 10838)
        ADVANCE(27);
      if (lookahead == 10839)
        ADVANCE(27);
      if (lookahead == 10840)
        ADVANCE(23);
      if (lookahead == 10842)
        ADVANCE(23);
      if (lookahead == 10843)
        ADVANCE(27);
      if (lookahead == 10844)
        ADVANCE(23);
      if (lookahead == 10845)
        ADVANCE(27);
      if (lookahead == 10846)
        ADVANCE(23);
      if (lookahead == 10847)
        ADVANCE(23);
      if (lookahead == 10848)
        ADVANCE(23);
      if (lookahead == 10849)
        ADVANCE(27);
      if (lookahead == 10850)
        ADVANCE(27);
      if (lookahead == 10851)
        ADVANCE(27);
      if (lookahead == 10868)
        ADVANCE(7);
      if (lookahead == 10971)
        ADVANCE(23);
      if (lookahead == 11056)
        ADVANCE(16);
      if (lookahead == 11057)
        ADVANCE(16);
      if (lookahead == 11058)
        ADVANCE(16);
      if (lookahead == 11059)
        ADVANCE(16);
      if (lookahead == 11060)
        ADVANCE(16);
      if (lookahead == 11061)
        ADVANCE(16);
      if (lookahead == 11062)
        ADVANCE(16);
      if (lookahead == 11063)
        ADVANCE(16);
      if (lookahead == 11064)
        ADVANCE(16);
      if (lookahead == 11065)
        ADVANCE(16);
      if (lookahead == 11066)
        ADVANCE(16);
      if (lookahead == 11067)
        ADVANCE(16);
      if (lookahead == 11068)
        ADVANCE(16);
      if (lookahead == 11069)
        ADVANCE(16);
      if (lookahead == 11070)
        ADVANCE(16);
      if (lookahead == 11071)
        ADVANCE(16);
      if (lookahead == 11072)
        ADVANCE(16);
      if (lookahead == 11073)
        ADVANCE(16);
      if (lookahead == 11074)
        ADVANCE(16);
      if (lookahead == 11075)
        ADVANCE(16);
      if (lookahead == 11076)
        ADVANCE(16);
      if (lookahead == 11079)
        ADVANCE(16);
      if (lookahead == 11080)
        ADVANCE(16);
      if (lookahead == 11081)
        ADVANCE(16);
      if (lookahead == 11082)
        ADVANCE(16);
      if (lookahead == 11083)
        ADVANCE(16);
      if (lookahead == 11084)
        ADVANCE(16);
      if (lookahead == 65513)
        ADVANCE(16);
      if (lookahead == 65515)
        ADVANCE(16);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__times_operator);
      if (lookahead == '/')
        ADVANCE(19);
      if (lookahead == '=')
        ADVANCE(7);
      END_STATE();
    case 19:
      if (lookahead == '=')
        ADVANCE(7);
      END_STATE();
    case 20:
      if (lookahead == '<')
        ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == '>')
        ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == '=')
        ADVANCE(7);
      if (lookahead == '>')
        ADVANCE(19);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__times_operator);
      END_STATE();
    case 24:
      if (lookahead == '+')
        ADVANCE(25);
      if (lookahead == '=')
        ADVANCE(28);
      if (lookahead == '|')
        ADVANCE(29);
      END_STATE();
    case 25:
      if (lookahead == '+')
        ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == '|')
        ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__plus_operator);
      END_STATE();
    case 28:
      if (lookahead == '|')
        ADVANCE(7);
      END_STATE();
    case 29:
      if (lookahead == '=')
        ADVANCE(28);
      if (lookahead == '|')
        ADVANCE(27);
      END_STATE();
    case 30:
      if (lookahead == ':')
        ADVANCE(31);
      if (lookahead == '=')
        ADVANCE(7);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 33:
      if (lookahead == ':')
        ADVANCE(34);
      if (lookahead == '<')
        ADVANCE(19);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__assign_operator);
      if (lookahead == '>')
        ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 38:
      if (lookahead == '+')
        ADVANCE(25);
      if (lookahead == '=')
        ADVANCE(28);
      if (lookahead == '|')
        ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      if (lookahead == '=')
        ADVANCE(28);
      if (lookahead == '|')
        ADVANCE(27);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(6);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '.')
        ADVANCE(17);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(19);
      if (lookahead == '<')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(35);
      if (lookahead == '>')
        ADVANCE(21);
      if (lookahead == '\\')
        ADVANCE(23);
      if (lookahead == '^')
        ADVANCE(19);
      if (lookahead == '|')
        ADVANCE(38);
      if (lookahead == '~')
        ADVANCE(7);
      if (lookahead == 177)
        ADVANCE(27);
      if (lookahead == 215)
        ADVANCE(23);
      if (lookahead == 247)
        ADVANCE(8);
      if (lookahead == 8523)
        ADVANCE(23);
      if (lookahead == 8592)
        ADVANCE(16);
      if (lookahead == 8594)
        ADVANCE(16);
      if (lookahead == 8596)
        ADVANCE(16);
      if (lookahead == 8602)
        ADVANCE(16);
      if (lookahead == 8603)
        ADVANCE(16);
      if (lookahead == 8604)
        ADVANCE(16);
      if (lookahead == 8605)
        ADVANCE(16);
      if (lookahead == 8606)
        ADVANCE(16);
      if (lookahead == 8608)
        ADVANCE(16);
      if (lookahead == 8610)
        ADVANCE(16);
      if (lookahead == 8611)
        ADVANCE(16);
      if (lookahead == 8612)
        ADVANCE(16);
      if (lookahead == 8614)
        ADVANCE(16);
      if (lookahead == 8617)
        ADVANCE(16);
      if (lookahead == 8618)
        ADVANCE(16);
      if (lookahead == 8619)
        ADVANCE(16);
      if (lookahead == 8620)
        ADVANCE(16);
      if (lookahead == 8622)
        ADVANCE(16);
      if (lookahead == 8636)
        ADVANCE(16);
      if (lookahead == 8637)
        ADVANCE(16);
      if (lookahead == 8640)
        ADVANCE(16);
      if (lookahead == 8641)
        ADVANCE(16);
      if (lookahead == 8644)
        ADVANCE(16);
      if (lookahead == 8646)
        ADVANCE(16);
      if (lookahead == 8647)
        ADVANCE(16);
      if (lookahead == 8649)
        ADVANCE(16);
      if (lookahead == 8651)
        ADVANCE(16);
      if (lookahead == 8652)
        ADVANCE(16);
      if (lookahead == 8653)
        ADVANCE(16);
      if (lookahead == 8654)
        ADVANCE(16);
      if (lookahead == 8655)
        ADVANCE(16);
      if (lookahead == 8656)
        ADVANCE(16);
      if (lookahead == 8658)
        ADVANCE(16);
      if (lookahead == 8660)
        ADVANCE(16);
      if (lookahead == 8666)
        ADVANCE(16);
      if (lookahead == 8667)
        ADVANCE(16);
      if (lookahead == 8668)
        ADVANCE(16);
      if (lookahead == 8669)
        ADVANCE(16);
      if (lookahead == 8672)
        ADVANCE(16);
      if (lookahead == 8674)
        ADVANCE(16);
      if (lookahead == 8692)
        ADVANCE(16);
      if (lookahead == 8694)
        ADVANCE(16);
      if (lookahead == 8695)
        ADVANCE(16);
      if (lookahead == 8696)
        ADVANCE(16);
      if (lookahead == 8697)
        ADVANCE(16);
      if (lookahead == 8698)
        ADVANCE(16);
      if (lookahead == 8699)
        ADVANCE(16);
      if (lookahead == 8700)
        ADVANCE(16);
      if (lookahead == 8701)
        ADVANCE(16);
      if (lookahead == 8702)
        ADVANCE(16);
      if (lookahead == 8703)
        ADVANCE(16);
      if (lookahead == 8723)
        ADVANCE(27);
      if (lookahead == 8724)
        ADVANCE(27);
      if (lookahead == 8727)
        ADVANCE(23);
      if (lookahead == 8728)
        ADVANCE(23);
      if (lookahead == 8729)
        ADVANCE(23);
      if (lookahead == 8740)
        ADVANCE(23);
      if (lookahead == 8743)
        ADVANCE(23);
      if (lookahead == 8744)
        ADVANCE(27);
      if (lookahead == 8745)
        ADVANCE(23);
      if (lookahead == 8746)
        ADVANCE(27);
      if (lookahead == 8760)
        ADVANCE(27);
      if (lookahead == 8768)
        ADVANCE(23);
      if (lookahead == 8770)
        ADVANCE(27);
      if (lookahead == 8783)
        ADVANCE(27);
      if (lookahead == 8788)
        ADVANCE(7);
      if (lookahead == 8789)
        ADVANCE(7);
      if (lookahead == 8845)
        ADVANCE(23);
      if (lookahead == 8846)
        ADVANCE(27);
      if (lookahead == 8851)
        ADVANCE(23);
      if (lookahead == 8852)
        ADVANCE(27);
      if (lookahead == 8853)
        ADVANCE(27);
      if (lookahead == 8854)
        ADVANCE(27);
      if (lookahead == 8855)
        ADVANCE(23);
      if (lookahead == 8856)
        ADVANCE(23);
      if (lookahead == 8857)
        ADVANCE(23);
      if (lookahead == 8858)
        ADVANCE(23);
      if (lookahead == 8859)
        ADVANCE(23);
      if (lookahead == 8862)
        ADVANCE(27);
      if (lookahead == 8863)
        ADVANCE(27);
      if (lookahead == 8864)
        ADVANCE(23);
      if (lookahead == 8865)
        ADVANCE(23);
      if (lookahead == 8891)
        ADVANCE(6);
      if (lookahead == 8892)
        ADVANCE(23);
      if (lookahead == 8893)
        ADVANCE(27);
      if (lookahead == 8900)
        ADVANCE(23);
      if (lookahead == 8901)
        ADVANCE(23);
      if (lookahead == 8902)
        ADVANCE(23);
      if (lookahead == 8903)
        ADVANCE(23);
      if (lookahead == 8905)
        ADVANCE(23);
      if (lookahead == 8906)
        ADVANCE(23);
      if (lookahead == 8907)
        ADVANCE(23);
      if (lookahead == 8908)
        ADVANCE(23);
      if (lookahead == 8910)
        ADVANCE(27);
      if (lookahead == 8911)
        ADVANCE(23);
      if (lookahead == 8914)
        ADVANCE(23);
      if (lookahead == 8915)
        ADVANCE(27);
      if (lookahead == 9655)
        ADVANCE(23);
      if (lookahead == 10193)
        ADVANCE(23);
      if (lookahead == 10197)
        ADVANCE(23);
      if (lookahead == 10198)
        ADVANCE(23);
      if (lookahead == 10199)
        ADVANCE(23);
      if (lookahead == 10229)
        ADVANCE(16);
      if (lookahead == 10230)
        ADVANCE(16);
      if (lookahead == 10231)
        ADVANCE(16);
      if (lookahead == 10233)
        ADVANCE(16);
      if (lookahead == 10234)
        ADVANCE(16);
      if (lookahead == 10235)
        ADVANCE(16);
      if (lookahead == 10236)
        ADVANCE(16);
      if (lookahead == 10237)
        ADVANCE(16);
      if (lookahead == 10238)
        ADVANCE(16);
      if (lookahead == 10239)
        ADVANCE(16);
      if (lookahead == 10496)
        ADVANCE(16);
      if (lookahead == 10497)
        ADVANCE(16);
      if (lookahead == 10498)
        ADVANCE(16);
      if (lookahead == 10499)
        ADVANCE(16);
      if (lookahead == 10500)
        ADVANCE(16);
      if (lookahead == 10501)
        ADVANCE(16);
      if (lookahead == 10502)
        ADVANCE(16);
      if (lookahead == 10503)
        ADVANCE(16);
      if (lookahead == 10508)
        ADVANCE(16);
      if (lookahead == 10509)
        ADVANCE(16);
      if (lookahead == 10510)
        ADVANCE(16);
      if (lookahead == 10511)
        ADVANCE(16);
      if (lookahead == 10512)
        ADVANCE(16);
      if (lookahead == 10513)
        ADVANCE(16);
      if (lookahead == 10516)
        ADVANCE(16);
      if (lookahead == 10517)
        ADVANCE(16);
      if (lookahead == 10518)
        ADVANCE(16);
      if (lookahead == 10519)
        ADVANCE(16);
      if (lookahead == 10520)
        ADVANCE(16);
      if (lookahead == 10525)
        ADVANCE(16);
      if (lookahead == 10526)
        ADVANCE(16);
      if (lookahead == 10527)
        ADVANCE(16);
      if (lookahead == 10528)
        ADVANCE(16);
      if (lookahead == 10564)
        ADVANCE(16);
      if (lookahead == 10565)
        ADVANCE(16);
      if (lookahead == 10566)
        ADVANCE(16);
      if (lookahead == 10567)
        ADVANCE(16);
      if (lookahead == 10568)
        ADVANCE(16);
      if (lookahead == 10570)
        ADVANCE(16);
      if (lookahead == 10571)
        ADVANCE(16);
      if (lookahead == 10574)
        ADVANCE(16);
      if (lookahead == 10576)
        ADVANCE(16);
      if (lookahead == 10578)
        ADVANCE(16);
      if (lookahead == 10579)
        ADVANCE(16);
      if (lookahead == 10582)
        ADVANCE(16);
      if (lookahead == 10583)
        ADVANCE(16);
      if (lookahead == 10586)
        ADVANCE(16);
      if (lookahead == 10587)
        ADVANCE(16);
      if (lookahead == 10590)
        ADVANCE(16);
      if (lookahead == 10591)
        ADVANCE(16);
      if (lookahead == 10594)
        ADVANCE(16);
      if (lookahead == 10596)
        ADVANCE(16);
      if (lookahead == 10598)
        ADVANCE(16);
      if (lookahead == 10599)
        ADVANCE(16);
      if (lookahead == 10600)
        ADVANCE(16);
      if (lookahead == 10601)
        ADVANCE(16);
      if (lookahead == 10602)
        ADVANCE(16);
      if (lookahead == 10603)
        ADVANCE(16);
      if (lookahead == 10604)
        ADVANCE(16);
      if (lookahead == 10605)
        ADVANCE(16);
      if (lookahead == 10608)
        ADVANCE(16);
      if (lookahead == 10680)
        ADVANCE(23);
      if (lookahead == 10684)
        ADVANCE(23);
      if (lookahead == 10686)
        ADVANCE(23);
      if (lookahead == 10687)
        ADVANCE(23);
      if (lookahead == 10740)
        ADVANCE(16);
      if (lookahead == 10742)
        ADVANCE(23);
      if (lookahead == 10743)
        ADVANCE(23);
      if (lookahead == 10746)
        ADVANCE(27);
      if (lookahead == 10747)
        ADVANCE(27);
      if (lookahead == 10759)
        ADVANCE(23);
      if (lookahead == 10760)
        ADVANCE(27);
      if (lookahead == 10781)
        ADVANCE(23);
      if (lookahead == 10786)
        ADVANCE(27);
      if (lookahead == 10787)
        ADVANCE(27);
      if (lookahead == 10788)
        ADVANCE(27);
      if (lookahead == 10789)
        ADVANCE(27);
      if (lookahead == 10790)
        ADVANCE(27);
      if (lookahead == 10791)
        ADVANCE(27);
      if (lookahead == 10792)
        ADVANCE(27);
      if (lookahead == 10793)
        ADVANCE(27);
      if (lookahead == 10794)
        ADVANCE(27);
      if (lookahead == 10795)
        ADVANCE(27);
      if (lookahead == 10796)
        ADVANCE(27);
      if (lookahead == 10797)
        ADVANCE(27);
      if (lookahead == 10798)
        ADVANCE(27);
      if (lookahead == 10800)
        ADVANCE(23);
      if (lookahead == 10801)
        ADVANCE(23);
      if (lookahead == 10802)
        ADVANCE(23);
      if (lookahead == 10803)
        ADVANCE(23);
      if (lookahead == 10804)
        ADVANCE(23);
      if (lookahead == 10805)
        ADVANCE(23);
      if (lookahead == 10806)
        ADVANCE(23);
      if (lookahead == 10807)
        ADVANCE(23);
      if (lookahead == 10808)
        ADVANCE(23);
      if (lookahead == 10809)
        ADVANCE(27);
      if (lookahead == 10810)
        ADVANCE(27);
      if (lookahead == 10811)
        ADVANCE(23);
      if (lookahead == 10812)
        ADVANCE(23);
      if (lookahead == 10813)
        ADVANCE(23);
      if (lookahead == 10816)
        ADVANCE(23);
      if (lookahead == 10817)
        ADVANCE(27);
      if (lookahead == 10818)
        ADVANCE(27);
      if (lookahead == 10819)
        ADVANCE(23);
      if (lookahead == 10820)
        ADVANCE(23);
      if (lookahead == 10821)
        ADVANCE(27);
      if (lookahead == 10826)
        ADVANCE(27);
      if (lookahead == 10827)
        ADVANCE(23);
      if (lookahead == 10828)
        ADVANCE(27);
      if (lookahead == 10829)
        ADVANCE(23);
      if (lookahead == 10830)
        ADVANCE(23);
      if (lookahead == 10831)
        ADVANCE(27);
      if (lookahead == 10832)
        ADVANCE(27);
      if (lookahead == 10833)
        ADVANCE(23);
      if (lookahead == 10834)
        ADVANCE(27);
      if (lookahead == 10835)
        ADVANCE(23);
      if (lookahead == 10836)
        ADVANCE(27);
      if (lookahead == 10837)
        ADVANCE(23);
      if (lookahead == 10838)
        ADVANCE(27);
      if (lookahead == 10839)
        ADVANCE(27);
      if (lookahead == 10840)
        ADVANCE(23);
      if (lookahead == 10842)
        ADVANCE(23);
      if (lookahead == 10843)
        ADVANCE(27);
      if (lookahead == 10844)
        ADVANCE(23);
      if (lookahead == 10845)
        ADVANCE(27);
      if (lookahead == 10846)
        ADVANCE(23);
      if (lookahead == 10847)
        ADVANCE(23);
      if (lookahead == 10848)
        ADVANCE(23);
      if (lookahead == 10849)
        ADVANCE(27);
      if (lookahead == 10850)
        ADVANCE(27);
      if (lookahead == 10851)
        ADVANCE(27);
      if (lookahead == 10868)
        ADVANCE(7);
      if (lookahead == 10971)
        ADVANCE(23);
      if (lookahead == 11056)
        ADVANCE(16);
      if (lookahead == 11057)
        ADVANCE(16);
      if (lookahead == 11058)
        ADVANCE(16);
      if (lookahead == 11059)
        ADVANCE(16);
      if (lookahead == 11060)
        ADVANCE(16);
      if (lookahead == 11061)
        ADVANCE(16);
      if (lookahead == 11062)
        ADVANCE(16);
      if (lookahead == 11063)
        ADVANCE(16);
      if (lookahead == 11064)
        ADVANCE(16);
      if (lookahead == 11065)
        ADVANCE(16);
      if (lookahead == 11066)
        ADVANCE(16);
      if (lookahead == 11067)
        ADVANCE(16);
      if (lookahead == 11068)
        ADVANCE(16);
      if (lookahead == 11069)
        ADVANCE(16);
      if (lookahead == 11070)
        ADVANCE(16);
      if (lookahead == 11071)
        ADVANCE(16);
      if (lookahead == 11072)
        ADVANCE(16);
      if (lookahead == 11073)
        ADVANCE(16);
      if (lookahead == 11074)
        ADVANCE(16);
      if (lookahead == 11075)
        ADVANCE(16);
      if (lookahead == 11076)
        ADVANCE(16);
      if (lookahead == 11079)
        ADVANCE(16);
      if (lookahead == 11080)
        ADVANCE(16);
      if (lookahead == 11081)
        ADVANCE(16);
      if (lookahead == 11082)
        ADVANCE(16);
      if (lookahead == 11083)
        ADVANCE(16);
      if (lookahead == 11084)
        ADVANCE(16);
      if (lookahead == 65513)
        ADVANCE(16);
      if (lookahead == 65515)
        ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(43);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(45);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(6);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '.')
        ADVANCE(17);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(19);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(35);
      if (lookahead == '>')
        ADVANCE(21);
      if (lookahead == '\\')
        ADVANCE(23);
      if (lookahead == '^')
        ADVANCE(19);
      if (lookahead == '|')
        ADVANCE(38);
      if (lookahead == '~')
        ADVANCE(7);
      if (lookahead == 177)
        ADVANCE(27);
      if (lookahead == 215)
        ADVANCE(23);
      if (lookahead == 247)
        ADVANCE(8);
      if (lookahead == 8523)
        ADVANCE(23);
      if (lookahead == 8592)
        ADVANCE(16);
      if (lookahead == 8594)
        ADVANCE(16);
      if (lookahead == 8596)
        ADVANCE(16);
      if (lookahead == 8602)
        ADVANCE(16);
      if (lookahead == 8603)
        ADVANCE(16);
      if (lookahead == 8604)
        ADVANCE(16);
      if (lookahead == 8605)
        ADVANCE(16);
      if (lookahead == 8606)
        ADVANCE(16);
      if (lookahead == 8608)
        ADVANCE(16);
      if (lookahead == 8610)
        ADVANCE(16);
      if (lookahead == 8611)
        ADVANCE(16);
      if (lookahead == 8612)
        ADVANCE(16);
      if (lookahead == 8614)
        ADVANCE(16);
      if (lookahead == 8617)
        ADVANCE(16);
      if (lookahead == 8618)
        ADVANCE(16);
      if (lookahead == 8619)
        ADVANCE(16);
      if (lookahead == 8620)
        ADVANCE(16);
      if (lookahead == 8622)
        ADVANCE(16);
      if (lookahead == 8636)
        ADVANCE(16);
      if (lookahead == 8637)
        ADVANCE(16);
      if (lookahead == 8640)
        ADVANCE(16);
      if (lookahead == 8641)
        ADVANCE(16);
      if (lookahead == 8644)
        ADVANCE(16);
      if (lookahead == 8646)
        ADVANCE(16);
      if (lookahead == 8647)
        ADVANCE(16);
      if (lookahead == 8649)
        ADVANCE(16);
      if (lookahead == 8651)
        ADVANCE(16);
      if (lookahead == 8652)
        ADVANCE(16);
      if (lookahead == 8653)
        ADVANCE(16);
      if (lookahead == 8654)
        ADVANCE(16);
      if (lookahead == 8655)
        ADVANCE(16);
      if (lookahead == 8656)
        ADVANCE(16);
      if (lookahead == 8658)
        ADVANCE(16);
      if (lookahead == 8660)
        ADVANCE(16);
      if (lookahead == 8666)
        ADVANCE(16);
      if (lookahead == 8667)
        ADVANCE(16);
      if (lookahead == 8668)
        ADVANCE(16);
      if (lookahead == 8669)
        ADVANCE(16);
      if (lookahead == 8672)
        ADVANCE(16);
      if (lookahead == 8674)
        ADVANCE(16);
      if (lookahead == 8692)
        ADVANCE(16);
      if (lookahead == 8694)
        ADVANCE(16);
      if (lookahead == 8695)
        ADVANCE(16);
      if (lookahead == 8696)
        ADVANCE(16);
      if (lookahead == 8697)
        ADVANCE(16);
      if (lookahead == 8698)
        ADVANCE(16);
      if (lookahead == 8699)
        ADVANCE(16);
      if (lookahead == 8700)
        ADVANCE(16);
      if (lookahead == 8701)
        ADVANCE(16);
      if (lookahead == 8702)
        ADVANCE(16);
      if (lookahead == 8703)
        ADVANCE(16);
      if (lookahead == 8723)
        ADVANCE(27);
      if (lookahead == 8724)
        ADVANCE(27);
      if (lookahead == 8727)
        ADVANCE(23);
      if (lookahead == 8728)
        ADVANCE(23);
      if (lookahead == 8729)
        ADVANCE(23);
      if (lookahead == 8740)
        ADVANCE(23);
      if (lookahead == 8743)
        ADVANCE(23);
      if (lookahead == 8744)
        ADVANCE(27);
      if (lookahead == 8745)
        ADVANCE(23);
      if (lookahead == 8746)
        ADVANCE(27);
      if (lookahead == 8760)
        ADVANCE(27);
      if (lookahead == 8768)
        ADVANCE(23);
      if (lookahead == 8770)
        ADVANCE(27);
      if (lookahead == 8783)
        ADVANCE(27);
      if (lookahead == 8788)
        ADVANCE(7);
      if (lookahead == 8789)
        ADVANCE(7);
      if (lookahead == 8845)
        ADVANCE(23);
      if (lookahead == 8846)
        ADVANCE(27);
      if (lookahead == 8851)
        ADVANCE(23);
      if (lookahead == 8852)
        ADVANCE(27);
      if (lookahead == 8853)
        ADVANCE(27);
      if (lookahead == 8854)
        ADVANCE(27);
      if (lookahead == 8855)
        ADVANCE(23);
      if (lookahead == 8856)
        ADVANCE(23);
      if (lookahead == 8857)
        ADVANCE(23);
      if (lookahead == 8858)
        ADVANCE(23);
      if (lookahead == 8859)
        ADVANCE(23);
      if (lookahead == 8862)
        ADVANCE(27);
      if (lookahead == 8863)
        ADVANCE(27);
      if (lookahead == 8864)
        ADVANCE(23);
      if (lookahead == 8865)
        ADVANCE(23);
      if (lookahead == 8891)
        ADVANCE(6);
      if (lookahead == 8892)
        ADVANCE(23);
      if (lookahead == 8893)
        ADVANCE(27);
      if (lookahead == 8900)
        ADVANCE(23);
      if (lookahead == 8901)
        ADVANCE(23);
      if (lookahead == 8902)
        ADVANCE(23);
      if (lookahead == 8903)
        ADVANCE(23);
      if (lookahead == 8905)
        ADVANCE(23);
      if (lookahead == 8906)
        ADVANCE(23);
      if (lookahead == 8907)
        ADVANCE(23);
      if (lookahead == 8908)
        ADVANCE(23);
      if (lookahead == 8910)
        ADVANCE(27);
      if (lookahead == 8911)
        ADVANCE(23);
      if (lookahead == 8914)
        ADVANCE(23);
      if (lookahead == 8915)
        ADVANCE(27);
      if (lookahead == 9655)
        ADVANCE(23);
      if (lookahead == 10193)
        ADVANCE(23);
      if (lookahead == 10197)
        ADVANCE(23);
      if (lookahead == 10198)
        ADVANCE(23);
      if (lookahead == 10199)
        ADVANCE(23);
      if (lookahead == 10229)
        ADVANCE(16);
      if (lookahead == 10230)
        ADVANCE(16);
      if (lookahead == 10231)
        ADVANCE(16);
      if (lookahead == 10233)
        ADVANCE(16);
      if (lookahead == 10234)
        ADVANCE(16);
      if (lookahead == 10235)
        ADVANCE(16);
      if (lookahead == 10236)
        ADVANCE(16);
      if (lookahead == 10237)
        ADVANCE(16);
      if (lookahead == 10238)
        ADVANCE(16);
      if (lookahead == 10239)
        ADVANCE(16);
      if (lookahead == 10496)
        ADVANCE(16);
      if (lookahead == 10497)
        ADVANCE(16);
      if (lookahead == 10498)
        ADVANCE(16);
      if (lookahead == 10499)
        ADVANCE(16);
      if (lookahead == 10500)
        ADVANCE(16);
      if (lookahead == 10501)
        ADVANCE(16);
      if (lookahead == 10502)
        ADVANCE(16);
      if (lookahead == 10503)
        ADVANCE(16);
      if (lookahead == 10508)
        ADVANCE(16);
      if (lookahead == 10509)
        ADVANCE(16);
      if (lookahead == 10510)
        ADVANCE(16);
      if (lookahead == 10511)
        ADVANCE(16);
      if (lookahead == 10512)
        ADVANCE(16);
      if (lookahead == 10513)
        ADVANCE(16);
      if (lookahead == 10516)
        ADVANCE(16);
      if (lookahead == 10517)
        ADVANCE(16);
      if (lookahead == 10518)
        ADVANCE(16);
      if (lookahead == 10519)
        ADVANCE(16);
      if (lookahead == 10520)
        ADVANCE(16);
      if (lookahead == 10525)
        ADVANCE(16);
      if (lookahead == 10526)
        ADVANCE(16);
      if (lookahead == 10527)
        ADVANCE(16);
      if (lookahead == 10528)
        ADVANCE(16);
      if (lookahead == 10564)
        ADVANCE(16);
      if (lookahead == 10565)
        ADVANCE(16);
      if (lookahead == 10566)
        ADVANCE(16);
      if (lookahead == 10567)
        ADVANCE(16);
      if (lookahead == 10568)
        ADVANCE(16);
      if (lookahead == 10570)
        ADVANCE(16);
      if (lookahead == 10571)
        ADVANCE(16);
      if (lookahead == 10574)
        ADVANCE(16);
      if (lookahead == 10576)
        ADVANCE(16);
      if (lookahead == 10578)
        ADVANCE(16);
      if (lookahead == 10579)
        ADVANCE(16);
      if (lookahead == 10582)
        ADVANCE(16);
      if (lookahead == 10583)
        ADVANCE(16);
      if (lookahead == 10586)
        ADVANCE(16);
      if (lookahead == 10587)
        ADVANCE(16);
      if (lookahead == 10590)
        ADVANCE(16);
      if (lookahead == 10591)
        ADVANCE(16);
      if (lookahead == 10594)
        ADVANCE(16);
      if (lookahead == 10596)
        ADVANCE(16);
      if (lookahead == 10598)
        ADVANCE(16);
      if (lookahead == 10599)
        ADVANCE(16);
      if (lookahead == 10600)
        ADVANCE(16);
      if (lookahead == 10601)
        ADVANCE(16);
      if (lookahead == 10602)
        ADVANCE(16);
      if (lookahead == 10603)
        ADVANCE(16);
      if (lookahead == 10604)
        ADVANCE(16);
      if (lookahead == 10605)
        ADVANCE(16);
      if (lookahead == 10608)
        ADVANCE(16);
      if (lookahead == 10680)
        ADVANCE(23);
      if (lookahead == 10684)
        ADVANCE(23);
      if (lookahead == 10686)
        ADVANCE(23);
      if (lookahead == 10687)
        ADVANCE(23);
      if (lookahead == 10740)
        ADVANCE(16);
      if (lookahead == 10742)
        ADVANCE(23);
      if (lookahead == 10743)
        ADVANCE(23);
      if (lookahead == 10746)
        ADVANCE(27);
      if (lookahead == 10747)
        ADVANCE(27);
      if (lookahead == 10759)
        ADVANCE(23);
      if (lookahead == 10760)
        ADVANCE(27);
      if (lookahead == 10781)
        ADVANCE(23);
      if (lookahead == 10786)
        ADVANCE(27);
      if (lookahead == 10787)
        ADVANCE(27);
      if (lookahead == 10788)
        ADVANCE(27);
      if (lookahead == 10789)
        ADVANCE(27);
      if (lookahead == 10790)
        ADVANCE(27);
      if (lookahead == 10791)
        ADVANCE(27);
      if (lookahead == 10792)
        ADVANCE(27);
      if (lookahead == 10793)
        ADVANCE(27);
      if (lookahead == 10794)
        ADVANCE(27);
      if (lookahead == 10795)
        ADVANCE(27);
      if (lookahead == 10796)
        ADVANCE(27);
      if (lookahead == 10797)
        ADVANCE(27);
      if (lookahead == 10798)
        ADVANCE(27);
      if (lookahead == 10800)
        ADVANCE(23);
      if (lookahead == 10801)
        ADVANCE(23);
      if (lookahead == 10802)
        ADVANCE(23);
      if (lookahead == 10803)
        ADVANCE(23);
      if (lookahead == 10804)
        ADVANCE(23);
      if (lookahead == 10805)
        ADVANCE(23);
      if (lookahead == 10806)
        ADVANCE(23);
      if (lookahead == 10807)
        ADVANCE(23);
      if (lookahead == 10808)
        ADVANCE(23);
      if (lookahead == 10809)
        ADVANCE(27);
      if (lookahead == 10810)
        ADVANCE(27);
      if (lookahead == 10811)
        ADVANCE(23);
      if (lookahead == 10812)
        ADVANCE(23);
      if (lookahead == 10813)
        ADVANCE(23);
      if (lookahead == 10816)
        ADVANCE(23);
      if (lookahead == 10817)
        ADVANCE(27);
      if (lookahead == 10818)
        ADVANCE(27);
      if (lookahead == 10819)
        ADVANCE(23);
      if (lookahead == 10820)
        ADVANCE(23);
      if (lookahead == 10821)
        ADVANCE(27);
      if (lookahead == 10826)
        ADVANCE(27);
      if (lookahead == 10827)
        ADVANCE(23);
      if (lookahead == 10828)
        ADVANCE(27);
      if (lookahead == 10829)
        ADVANCE(23);
      if (lookahead == 10830)
        ADVANCE(23);
      if (lookahead == 10831)
        ADVANCE(27);
      if (lookahead == 10832)
        ADVANCE(27);
      if (lookahead == 10833)
        ADVANCE(23);
      if (lookahead == 10834)
        ADVANCE(27);
      if (lookahead == 10835)
        ADVANCE(23);
      if (lookahead == 10836)
        ADVANCE(27);
      if (lookahead == 10837)
        ADVANCE(23);
      if (lookahead == 10838)
        ADVANCE(27);
      if (lookahead == 10839)
        ADVANCE(27);
      if (lookahead == 10840)
        ADVANCE(23);
      if (lookahead == 10842)
        ADVANCE(23);
      if (lookahead == 10843)
        ADVANCE(27);
      if (lookahead == 10844)
        ADVANCE(23);
      if (lookahead == 10845)
        ADVANCE(27);
      if (lookahead == 10846)
        ADVANCE(23);
      if (lookahead == 10847)
        ADVANCE(23);
      if (lookahead == 10848)
        ADVANCE(23);
      if (lookahead == 10849)
        ADVANCE(27);
      if (lookahead == 10850)
        ADVANCE(27);
      if (lookahead == 10851)
        ADVANCE(27);
      if (lookahead == 10868)
        ADVANCE(7);
      if (lookahead == 10971)
        ADVANCE(23);
      if (lookahead == 11056)
        ADVANCE(16);
      if (lookahead == 11057)
        ADVANCE(16);
      if (lookahead == 11058)
        ADVANCE(16);
      if (lookahead == 11059)
        ADVANCE(16);
      if (lookahead == 11060)
        ADVANCE(16);
      if (lookahead == 11061)
        ADVANCE(16);
      if (lookahead == 11062)
        ADVANCE(16);
      if (lookahead == 11063)
        ADVANCE(16);
      if (lookahead == 11064)
        ADVANCE(16);
      if (lookahead == 11065)
        ADVANCE(16);
      if (lookahead == 11066)
        ADVANCE(16);
      if (lookahead == 11067)
        ADVANCE(16);
      if (lookahead == 11068)
        ADVANCE(16);
      if (lookahead == 11069)
        ADVANCE(16);
      if (lookahead == 11070)
        ADVANCE(16);
      if (lookahead == 11071)
        ADVANCE(16);
      if (lookahead == 11072)
        ADVANCE(16);
      if (lookahead == 11073)
        ADVANCE(16);
      if (lookahead == 11074)
        ADVANCE(16);
      if (lookahead == 11075)
        ADVANCE(16);
      if (lookahead == 11076)
        ADVANCE(16);
      if (lookahead == 11079)
        ADVANCE(16);
      if (lookahead == 11080)
        ADVANCE(16);
      if (lookahead == 11081)
        ADVANCE(16);
      if (lookahead == 11082)
        ADVANCE(16);
      if (lookahead == 11083)
        ADVANCE(16);
      if (lookahead == 11084)
        ADVANCE(16);
      if (lookahead == 65513)
        ADVANCE(16);
      if (lookahead == 65515)
        ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 46:
      if (lookahead == '\n')
        ADVANCE(45);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(42);
      END_STATE();
    case 47:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(45);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(6);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '.')
        ADVANCE(17);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(19);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(35);
      if (lookahead == '>')
        ADVANCE(21);
      if (lookahead == '\\')
        ADVANCE(23);
      if (lookahead == '^')
        ADVANCE(19);
      if (lookahead == '|')
        ADVANCE(38);
      if (lookahead == '~')
        ADVANCE(7);
      if (lookahead == 177)
        ADVANCE(27);
      if (lookahead == 215)
        ADVANCE(23);
      if (lookahead == 247)
        ADVANCE(8);
      if (lookahead == 8523)
        ADVANCE(23);
      if (lookahead == 8592)
        ADVANCE(16);
      if (lookahead == 8594)
        ADVANCE(16);
      if (lookahead == 8596)
        ADVANCE(16);
      if (lookahead == 8602)
        ADVANCE(16);
      if (lookahead == 8603)
        ADVANCE(16);
      if (lookahead == 8604)
        ADVANCE(16);
      if (lookahead == 8605)
        ADVANCE(16);
      if (lookahead == 8606)
        ADVANCE(16);
      if (lookahead == 8608)
        ADVANCE(16);
      if (lookahead == 8610)
        ADVANCE(16);
      if (lookahead == 8611)
        ADVANCE(16);
      if (lookahead == 8612)
        ADVANCE(16);
      if (lookahead == 8614)
        ADVANCE(16);
      if (lookahead == 8617)
        ADVANCE(16);
      if (lookahead == 8618)
        ADVANCE(16);
      if (lookahead == 8619)
        ADVANCE(16);
      if (lookahead == 8620)
        ADVANCE(16);
      if (lookahead == 8622)
        ADVANCE(16);
      if (lookahead == 8636)
        ADVANCE(16);
      if (lookahead == 8637)
        ADVANCE(16);
      if (lookahead == 8640)
        ADVANCE(16);
      if (lookahead == 8641)
        ADVANCE(16);
      if (lookahead == 8644)
        ADVANCE(16);
      if (lookahead == 8646)
        ADVANCE(16);
      if (lookahead == 8647)
        ADVANCE(16);
      if (lookahead == 8649)
        ADVANCE(16);
      if (lookahead == 8651)
        ADVANCE(16);
      if (lookahead == 8652)
        ADVANCE(16);
      if (lookahead == 8653)
        ADVANCE(16);
      if (lookahead == 8654)
        ADVANCE(16);
      if (lookahead == 8655)
        ADVANCE(16);
      if (lookahead == 8656)
        ADVANCE(16);
      if (lookahead == 8658)
        ADVANCE(16);
      if (lookahead == 8660)
        ADVANCE(16);
      if (lookahead == 8666)
        ADVANCE(16);
      if (lookahead == 8667)
        ADVANCE(16);
      if (lookahead == 8668)
        ADVANCE(16);
      if (lookahead == 8669)
        ADVANCE(16);
      if (lookahead == 8672)
        ADVANCE(16);
      if (lookahead == 8674)
        ADVANCE(16);
      if (lookahead == 8692)
        ADVANCE(16);
      if (lookahead == 8694)
        ADVANCE(16);
      if (lookahead == 8695)
        ADVANCE(16);
      if (lookahead == 8696)
        ADVANCE(16);
      if (lookahead == 8697)
        ADVANCE(16);
      if (lookahead == 8698)
        ADVANCE(16);
      if (lookahead == 8699)
        ADVANCE(16);
      if (lookahead == 8700)
        ADVANCE(16);
      if (lookahead == 8701)
        ADVANCE(16);
      if (lookahead == 8702)
        ADVANCE(16);
      if (lookahead == 8703)
        ADVANCE(16);
      if (lookahead == 8723)
        ADVANCE(27);
      if (lookahead == 8724)
        ADVANCE(27);
      if (lookahead == 8727)
        ADVANCE(23);
      if (lookahead == 8728)
        ADVANCE(23);
      if (lookahead == 8729)
        ADVANCE(23);
      if (lookahead == 8740)
        ADVANCE(23);
      if (lookahead == 8743)
        ADVANCE(23);
      if (lookahead == 8744)
        ADVANCE(27);
      if (lookahead == 8745)
        ADVANCE(23);
      if (lookahead == 8746)
        ADVANCE(27);
      if (lookahead == 8760)
        ADVANCE(27);
      if (lookahead == 8768)
        ADVANCE(23);
      if (lookahead == 8770)
        ADVANCE(27);
      if (lookahead == 8783)
        ADVANCE(27);
      if (lookahead == 8788)
        ADVANCE(7);
      if (lookahead == 8789)
        ADVANCE(7);
      if (lookahead == 8845)
        ADVANCE(23);
      if (lookahead == 8846)
        ADVANCE(27);
      if (lookahead == 8851)
        ADVANCE(23);
      if (lookahead == 8852)
        ADVANCE(27);
      if (lookahead == 8853)
        ADVANCE(27);
      if (lookahead == 8854)
        ADVANCE(27);
      if (lookahead == 8855)
        ADVANCE(23);
      if (lookahead == 8856)
        ADVANCE(23);
      if (lookahead == 8857)
        ADVANCE(23);
      if (lookahead == 8858)
        ADVANCE(23);
      if (lookahead == 8859)
        ADVANCE(23);
      if (lookahead == 8862)
        ADVANCE(27);
      if (lookahead == 8863)
        ADVANCE(27);
      if (lookahead == 8864)
        ADVANCE(23);
      if (lookahead == 8865)
        ADVANCE(23);
      if (lookahead == 8891)
        ADVANCE(6);
      if (lookahead == 8892)
        ADVANCE(23);
      if (lookahead == 8893)
        ADVANCE(27);
      if (lookahead == 8900)
        ADVANCE(23);
      if (lookahead == 8901)
        ADVANCE(23);
      if (lookahead == 8902)
        ADVANCE(23);
      if (lookahead == 8903)
        ADVANCE(23);
      if (lookahead == 8905)
        ADVANCE(23);
      if (lookahead == 8906)
        ADVANCE(23);
      if (lookahead == 8907)
        ADVANCE(23);
      if (lookahead == 8908)
        ADVANCE(23);
      if (lookahead == 8910)
        ADVANCE(27);
      if (lookahead == 8911)
        ADVANCE(23);
      if (lookahead == 8914)
        ADVANCE(23);
      if (lookahead == 8915)
        ADVANCE(27);
      if (lookahead == 9655)
        ADVANCE(23);
      if (lookahead == 10193)
        ADVANCE(23);
      if (lookahead == 10197)
        ADVANCE(23);
      if (lookahead == 10198)
        ADVANCE(23);
      if (lookahead == 10199)
        ADVANCE(23);
      if (lookahead == 10229)
        ADVANCE(16);
      if (lookahead == 10230)
        ADVANCE(16);
      if (lookahead == 10231)
        ADVANCE(16);
      if (lookahead == 10233)
        ADVANCE(16);
      if (lookahead == 10234)
        ADVANCE(16);
      if (lookahead == 10235)
        ADVANCE(16);
      if (lookahead == 10236)
        ADVANCE(16);
      if (lookahead == 10237)
        ADVANCE(16);
      if (lookahead == 10238)
        ADVANCE(16);
      if (lookahead == 10239)
        ADVANCE(16);
      if (lookahead == 10496)
        ADVANCE(16);
      if (lookahead == 10497)
        ADVANCE(16);
      if (lookahead == 10498)
        ADVANCE(16);
      if (lookahead == 10499)
        ADVANCE(16);
      if (lookahead == 10500)
        ADVANCE(16);
      if (lookahead == 10501)
        ADVANCE(16);
      if (lookahead == 10502)
        ADVANCE(16);
      if (lookahead == 10503)
        ADVANCE(16);
      if (lookahead == 10508)
        ADVANCE(16);
      if (lookahead == 10509)
        ADVANCE(16);
      if (lookahead == 10510)
        ADVANCE(16);
      if (lookahead == 10511)
        ADVANCE(16);
      if (lookahead == 10512)
        ADVANCE(16);
      if (lookahead == 10513)
        ADVANCE(16);
      if (lookahead == 10516)
        ADVANCE(16);
      if (lookahead == 10517)
        ADVANCE(16);
      if (lookahead == 10518)
        ADVANCE(16);
      if (lookahead == 10519)
        ADVANCE(16);
      if (lookahead == 10520)
        ADVANCE(16);
      if (lookahead == 10525)
        ADVANCE(16);
      if (lookahead == 10526)
        ADVANCE(16);
      if (lookahead == 10527)
        ADVANCE(16);
      if (lookahead == 10528)
        ADVANCE(16);
      if (lookahead == 10564)
        ADVANCE(16);
      if (lookahead == 10565)
        ADVANCE(16);
      if (lookahead == 10566)
        ADVANCE(16);
      if (lookahead == 10567)
        ADVANCE(16);
      if (lookahead == 10568)
        ADVANCE(16);
      if (lookahead == 10570)
        ADVANCE(16);
      if (lookahead == 10571)
        ADVANCE(16);
      if (lookahead == 10574)
        ADVANCE(16);
      if (lookahead == 10576)
        ADVANCE(16);
      if (lookahead == 10578)
        ADVANCE(16);
      if (lookahead == 10579)
        ADVANCE(16);
      if (lookahead == 10582)
        ADVANCE(16);
      if (lookahead == 10583)
        ADVANCE(16);
      if (lookahead == 10586)
        ADVANCE(16);
      if (lookahead == 10587)
        ADVANCE(16);
      if (lookahead == 10590)
        ADVANCE(16);
      if (lookahead == 10591)
        ADVANCE(16);
      if (lookahead == 10594)
        ADVANCE(16);
      if (lookahead == 10596)
        ADVANCE(16);
      if (lookahead == 10598)
        ADVANCE(16);
      if (lookahead == 10599)
        ADVANCE(16);
      if (lookahead == 10600)
        ADVANCE(16);
      if (lookahead == 10601)
        ADVANCE(16);
      if (lookahead == 10602)
        ADVANCE(16);
      if (lookahead == 10603)
        ADVANCE(16);
      if (lookahead == 10604)
        ADVANCE(16);
      if (lookahead == 10605)
        ADVANCE(16);
      if (lookahead == 10608)
        ADVANCE(16);
      if (lookahead == 10680)
        ADVANCE(23);
      if (lookahead == 10684)
        ADVANCE(23);
      if (lookahead == 10686)
        ADVANCE(23);
      if (lookahead == 10687)
        ADVANCE(23);
      if (lookahead == 10740)
        ADVANCE(16);
      if (lookahead == 10742)
        ADVANCE(23);
      if (lookahead == 10743)
        ADVANCE(23);
      if (lookahead == 10746)
        ADVANCE(27);
      if (lookahead == 10747)
        ADVANCE(27);
      if (lookahead == 10759)
        ADVANCE(23);
      if (lookahead == 10760)
        ADVANCE(27);
      if (lookahead == 10781)
        ADVANCE(23);
      if (lookahead == 10786)
        ADVANCE(27);
      if (lookahead == 10787)
        ADVANCE(27);
      if (lookahead == 10788)
        ADVANCE(27);
      if (lookahead == 10789)
        ADVANCE(27);
      if (lookahead == 10790)
        ADVANCE(27);
      if (lookahead == 10791)
        ADVANCE(27);
      if (lookahead == 10792)
        ADVANCE(27);
      if (lookahead == 10793)
        ADVANCE(27);
      if (lookahead == 10794)
        ADVANCE(27);
      if (lookahead == 10795)
        ADVANCE(27);
      if (lookahead == 10796)
        ADVANCE(27);
      if (lookahead == 10797)
        ADVANCE(27);
      if (lookahead == 10798)
        ADVANCE(27);
      if (lookahead == 10800)
        ADVANCE(23);
      if (lookahead == 10801)
        ADVANCE(23);
      if (lookahead == 10802)
        ADVANCE(23);
      if (lookahead == 10803)
        ADVANCE(23);
      if (lookahead == 10804)
        ADVANCE(23);
      if (lookahead == 10805)
        ADVANCE(23);
      if (lookahead == 10806)
        ADVANCE(23);
      if (lookahead == 10807)
        ADVANCE(23);
      if (lookahead == 10808)
        ADVANCE(23);
      if (lookahead == 10809)
        ADVANCE(27);
      if (lookahead == 10810)
        ADVANCE(27);
      if (lookahead == 10811)
        ADVANCE(23);
      if (lookahead == 10812)
        ADVANCE(23);
      if (lookahead == 10813)
        ADVANCE(23);
      if (lookahead == 10816)
        ADVANCE(23);
      if (lookahead == 10817)
        ADVANCE(27);
      if (lookahead == 10818)
        ADVANCE(27);
      if (lookahead == 10819)
        ADVANCE(23);
      if (lookahead == 10820)
        ADVANCE(23);
      if (lookahead == 10821)
        ADVANCE(27);
      if (lookahead == 10826)
        ADVANCE(27);
      if (lookahead == 10827)
        ADVANCE(23);
      if (lookahead == 10828)
        ADVANCE(27);
      if (lookahead == 10829)
        ADVANCE(23);
      if (lookahead == 10830)
        ADVANCE(23);
      if (lookahead == 10831)
        ADVANCE(27);
      if (lookahead == 10832)
        ADVANCE(27);
      if (lookahead == 10833)
        ADVANCE(23);
      if (lookahead == 10834)
        ADVANCE(27);
      if (lookahead == 10835)
        ADVANCE(23);
      if (lookahead == 10836)
        ADVANCE(27);
      if (lookahead == 10837)
        ADVANCE(23);
      if (lookahead == 10838)
        ADVANCE(27);
      if (lookahead == 10839)
        ADVANCE(27);
      if (lookahead == 10840)
        ADVANCE(23);
      if (lookahead == 10842)
        ADVANCE(23);
      if (lookahead == 10843)
        ADVANCE(27);
      if (lookahead == 10844)
        ADVANCE(23);
      if (lookahead == 10845)
        ADVANCE(27);
      if (lookahead == 10846)
        ADVANCE(23);
      if (lookahead == 10847)
        ADVANCE(23);
      if (lookahead == 10848)
        ADVANCE(23);
      if (lookahead == 10849)
        ADVANCE(27);
      if (lookahead == 10850)
        ADVANCE(27);
      if (lookahead == 10851)
        ADVANCE(27);
      if (lookahead == 10868)
        ADVANCE(7);
      if (lookahead == 10971)
        ADVANCE(23);
      if (lookahead == 11056)
        ADVANCE(16);
      if (lookahead == 11057)
        ADVANCE(16);
      if (lookahead == 11058)
        ADVANCE(16);
      if (lookahead == 11059)
        ADVANCE(16);
      if (lookahead == 11060)
        ADVANCE(16);
      if (lookahead == 11061)
        ADVANCE(16);
      if (lookahead == 11062)
        ADVANCE(16);
      if (lookahead == 11063)
        ADVANCE(16);
      if (lookahead == 11064)
        ADVANCE(16);
      if (lookahead == 11065)
        ADVANCE(16);
      if (lookahead == 11066)
        ADVANCE(16);
      if (lookahead == 11067)
        ADVANCE(16);
      if (lookahead == 11068)
        ADVANCE(16);
      if (lookahead == 11069)
        ADVANCE(16);
      if (lookahead == 11070)
        ADVANCE(16);
      if (lookahead == 11071)
        ADVANCE(16);
      if (lookahead == 11072)
        ADVANCE(16);
      if (lookahead == 11073)
        ADVANCE(16);
      if (lookahead == 11074)
        ADVANCE(16);
      if (lookahead == 11075)
        ADVANCE(16);
      if (lookahead == 11076)
        ADVANCE(16);
      if (lookahead == 11079)
        ADVANCE(16);
      if (lookahead == 11080)
        ADVANCE(16);
      if (lookahead == 11081)
        ADVANCE(16);
      if (lookahead == 11082)
        ADVANCE(16);
      if (lookahead == 11083)
        ADVANCE(16);
      if (lookahead == 11084)
        ADVANCE(16);
      if (lookahead == 65513)
        ADVANCE(16);
      if (lookahead == 65515)
        ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(42);
      END_STATE();
    case 48:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(6);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(13);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '.')
        ADVANCE(17);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(19);
      if (lookahead == '<')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(35);
      if (lookahead == '>')
        ADVANCE(21);
      if (lookahead == '\\')
        ADVANCE(23);
      if (lookahead == '^')
        ADVANCE(19);
      if (lookahead == '|')
        ADVANCE(38);
      if (lookahead == '~')
        ADVANCE(7);
      if (lookahead == 177)
        ADVANCE(27);
      if (lookahead == 215)
        ADVANCE(23);
      if (lookahead == 247)
        ADVANCE(8);
      if (lookahead == 8523)
        ADVANCE(23);
      if (lookahead == 8592)
        ADVANCE(16);
      if (lookahead == 8594)
        ADVANCE(16);
      if (lookahead == 8596)
        ADVANCE(16);
      if (lookahead == 8602)
        ADVANCE(16);
      if (lookahead == 8603)
        ADVANCE(16);
      if (lookahead == 8604)
        ADVANCE(16);
      if (lookahead == 8605)
        ADVANCE(16);
      if (lookahead == 8606)
        ADVANCE(16);
      if (lookahead == 8608)
        ADVANCE(16);
      if (lookahead == 8610)
        ADVANCE(16);
      if (lookahead == 8611)
        ADVANCE(16);
      if (lookahead == 8612)
        ADVANCE(16);
      if (lookahead == 8614)
        ADVANCE(16);
      if (lookahead == 8617)
        ADVANCE(16);
      if (lookahead == 8618)
        ADVANCE(16);
      if (lookahead == 8619)
        ADVANCE(16);
      if (lookahead == 8620)
        ADVANCE(16);
      if (lookahead == 8622)
        ADVANCE(16);
      if (lookahead == 8636)
        ADVANCE(16);
      if (lookahead == 8637)
        ADVANCE(16);
      if (lookahead == 8640)
        ADVANCE(16);
      if (lookahead == 8641)
        ADVANCE(16);
      if (lookahead == 8644)
        ADVANCE(16);
      if (lookahead == 8646)
        ADVANCE(16);
      if (lookahead == 8647)
        ADVANCE(16);
      if (lookahead == 8649)
        ADVANCE(16);
      if (lookahead == 8651)
        ADVANCE(16);
      if (lookahead == 8652)
        ADVANCE(16);
      if (lookahead == 8653)
        ADVANCE(16);
      if (lookahead == 8654)
        ADVANCE(16);
      if (lookahead == 8655)
        ADVANCE(16);
      if (lookahead == 8656)
        ADVANCE(16);
      if (lookahead == 8658)
        ADVANCE(16);
      if (lookahead == 8660)
        ADVANCE(16);
      if (lookahead == 8666)
        ADVANCE(16);
      if (lookahead == 8667)
        ADVANCE(16);
      if (lookahead == 8668)
        ADVANCE(16);
      if (lookahead == 8669)
        ADVANCE(16);
      if (lookahead == 8672)
        ADVANCE(16);
      if (lookahead == 8674)
        ADVANCE(16);
      if (lookahead == 8692)
        ADVANCE(16);
      if (lookahead == 8694)
        ADVANCE(16);
      if (lookahead == 8695)
        ADVANCE(16);
      if (lookahead == 8696)
        ADVANCE(16);
      if (lookahead == 8697)
        ADVANCE(16);
      if (lookahead == 8698)
        ADVANCE(16);
      if (lookahead == 8699)
        ADVANCE(16);
      if (lookahead == 8700)
        ADVANCE(16);
      if (lookahead == 8701)
        ADVANCE(16);
      if (lookahead == 8702)
        ADVANCE(16);
      if (lookahead == 8703)
        ADVANCE(16);
      if (lookahead == 8723)
        ADVANCE(27);
      if (lookahead == 8724)
        ADVANCE(27);
      if (lookahead == 8727)
        ADVANCE(23);
      if (lookahead == 8728)
        ADVANCE(23);
      if (lookahead == 8729)
        ADVANCE(23);
      if (lookahead == 8740)
        ADVANCE(23);
      if (lookahead == 8743)
        ADVANCE(23);
      if (lookahead == 8744)
        ADVANCE(27);
      if (lookahead == 8745)
        ADVANCE(23);
      if (lookahead == 8746)
        ADVANCE(27);
      if (lookahead == 8760)
        ADVANCE(27);
      if (lookahead == 8768)
        ADVANCE(23);
      if (lookahead == 8770)
        ADVANCE(27);
      if (lookahead == 8783)
        ADVANCE(27);
      if (lookahead == 8788)
        ADVANCE(7);
      if (lookahead == 8789)
        ADVANCE(7);
      if (lookahead == 8845)
        ADVANCE(23);
      if (lookahead == 8846)
        ADVANCE(27);
      if (lookahead == 8851)
        ADVANCE(23);
      if (lookahead == 8852)
        ADVANCE(27);
      if (lookahead == 8853)
        ADVANCE(27);
      if (lookahead == 8854)
        ADVANCE(27);
      if (lookahead == 8855)
        ADVANCE(23);
      if (lookahead == 8856)
        ADVANCE(23);
      if (lookahead == 8857)
        ADVANCE(23);
      if (lookahead == 8858)
        ADVANCE(23);
      if (lookahead == 8859)
        ADVANCE(23);
      if (lookahead == 8862)
        ADVANCE(27);
      if (lookahead == 8863)
        ADVANCE(27);
      if (lookahead == 8864)
        ADVANCE(23);
      if (lookahead == 8865)
        ADVANCE(23);
      if (lookahead == 8891)
        ADVANCE(6);
      if (lookahead == 8892)
        ADVANCE(23);
      if (lookahead == 8893)
        ADVANCE(27);
      if (lookahead == 8900)
        ADVANCE(23);
      if (lookahead == 8901)
        ADVANCE(23);
      if (lookahead == 8902)
        ADVANCE(23);
      if (lookahead == 8903)
        ADVANCE(23);
      if (lookahead == 8905)
        ADVANCE(23);
      if (lookahead == 8906)
        ADVANCE(23);
      if (lookahead == 8907)
        ADVANCE(23);
      if (lookahead == 8908)
        ADVANCE(23);
      if (lookahead == 8910)
        ADVANCE(27);
      if (lookahead == 8911)
        ADVANCE(23);
      if (lookahead == 8914)
        ADVANCE(23);
      if (lookahead == 8915)
        ADVANCE(27);
      if (lookahead == 9655)
        ADVANCE(23);
      if (lookahead == 10193)
        ADVANCE(23);
      if (lookahead == 10197)
        ADVANCE(23);
      if (lookahead == 10198)
        ADVANCE(23);
      if (lookahead == 10199)
        ADVANCE(23);
      if (lookahead == 10229)
        ADVANCE(16);
      if (lookahead == 10230)
        ADVANCE(16);
      if (lookahead == 10231)
        ADVANCE(16);
      if (lookahead == 10233)
        ADVANCE(16);
      if (lookahead == 10234)
        ADVANCE(16);
      if (lookahead == 10235)
        ADVANCE(16);
      if (lookahead == 10236)
        ADVANCE(16);
      if (lookahead == 10237)
        ADVANCE(16);
      if (lookahead == 10238)
        ADVANCE(16);
      if (lookahead == 10239)
        ADVANCE(16);
      if (lookahead == 10496)
        ADVANCE(16);
      if (lookahead == 10497)
        ADVANCE(16);
      if (lookahead == 10498)
        ADVANCE(16);
      if (lookahead == 10499)
        ADVANCE(16);
      if (lookahead == 10500)
        ADVANCE(16);
      if (lookahead == 10501)
        ADVANCE(16);
      if (lookahead == 10502)
        ADVANCE(16);
      if (lookahead == 10503)
        ADVANCE(16);
      if (lookahead == 10508)
        ADVANCE(16);
      if (lookahead == 10509)
        ADVANCE(16);
      if (lookahead == 10510)
        ADVANCE(16);
      if (lookahead == 10511)
        ADVANCE(16);
      if (lookahead == 10512)
        ADVANCE(16);
      if (lookahead == 10513)
        ADVANCE(16);
      if (lookahead == 10516)
        ADVANCE(16);
      if (lookahead == 10517)
        ADVANCE(16);
      if (lookahead == 10518)
        ADVANCE(16);
      if (lookahead == 10519)
        ADVANCE(16);
      if (lookahead == 10520)
        ADVANCE(16);
      if (lookahead == 10525)
        ADVANCE(16);
      if (lookahead == 10526)
        ADVANCE(16);
      if (lookahead == 10527)
        ADVANCE(16);
      if (lookahead == 10528)
        ADVANCE(16);
      if (lookahead == 10564)
        ADVANCE(16);
      if (lookahead == 10565)
        ADVANCE(16);
      if (lookahead == 10566)
        ADVANCE(16);
      if (lookahead == 10567)
        ADVANCE(16);
      if (lookahead == 10568)
        ADVANCE(16);
      if (lookahead == 10570)
        ADVANCE(16);
      if (lookahead == 10571)
        ADVANCE(16);
      if (lookahead == 10574)
        ADVANCE(16);
      if (lookahead == 10576)
        ADVANCE(16);
      if (lookahead == 10578)
        ADVANCE(16);
      if (lookahead == 10579)
        ADVANCE(16);
      if (lookahead == 10582)
        ADVANCE(16);
      if (lookahead == 10583)
        ADVANCE(16);
      if (lookahead == 10586)
        ADVANCE(16);
      if (lookahead == 10587)
        ADVANCE(16);
      if (lookahead == 10590)
        ADVANCE(16);
      if (lookahead == 10591)
        ADVANCE(16);
      if (lookahead == 10594)
        ADVANCE(16);
      if (lookahead == 10596)
        ADVANCE(16);
      if (lookahead == 10598)
        ADVANCE(16);
      if (lookahead == 10599)
        ADVANCE(16);
      if (lookahead == 10600)
        ADVANCE(16);
      if (lookahead == 10601)
        ADVANCE(16);
      if (lookahead == 10602)
        ADVANCE(16);
      if (lookahead == 10603)
        ADVANCE(16);
      if (lookahead == 10604)
        ADVANCE(16);
      if (lookahead == 10605)
        ADVANCE(16);
      if (lookahead == 10608)
        ADVANCE(16);
      if (lookahead == 10680)
        ADVANCE(23);
      if (lookahead == 10684)
        ADVANCE(23);
      if (lookahead == 10686)
        ADVANCE(23);
      if (lookahead == 10687)
        ADVANCE(23);
      if (lookahead == 10740)
        ADVANCE(16);
      if (lookahead == 10742)
        ADVANCE(23);
      if (lookahead == 10743)
        ADVANCE(23);
      if (lookahead == 10746)
        ADVANCE(27);
      if (lookahead == 10747)
        ADVANCE(27);
      if (lookahead == 10759)
        ADVANCE(23);
      if (lookahead == 10760)
        ADVANCE(27);
      if (lookahead == 10781)
        ADVANCE(23);
      if (lookahead == 10786)
        ADVANCE(27);
      if (lookahead == 10787)
        ADVANCE(27);
      if (lookahead == 10788)
        ADVANCE(27);
      if (lookahead == 10789)
        ADVANCE(27);
      if (lookahead == 10790)
        ADVANCE(27);
      if (lookahead == 10791)
        ADVANCE(27);
      if (lookahead == 10792)
        ADVANCE(27);
      if (lookahead == 10793)
        ADVANCE(27);
      if (lookahead == 10794)
        ADVANCE(27);
      if (lookahead == 10795)
        ADVANCE(27);
      if (lookahead == 10796)
        ADVANCE(27);
      if (lookahead == 10797)
        ADVANCE(27);
      if (lookahead == 10798)
        ADVANCE(27);
      if (lookahead == 10800)
        ADVANCE(23);
      if (lookahead == 10801)
        ADVANCE(23);
      if (lookahead == 10802)
        ADVANCE(23);
      if (lookahead == 10803)
        ADVANCE(23);
      if (lookahead == 10804)
        ADVANCE(23);
      if (lookahead == 10805)
        ADVANCE(23);
      if (lookahead == 10806)
        ADVANCE(23);
      if (lookahead == 10807)
        ADVANCE(23);
      if (lookahead == 10808)
        ADVANCE(23);
      if (lookahead == 10809)
        ADVANCE(27);
      if (lookahead == 10810)
        ADVANCE(27);
      if (lookahead == 10811)
        ADVANCE(23);
      if (lookahead == 10812)
        ADVANCE(23);
      if (lookahead == 10813)
        ADVANCE(23);
      if (lookahead == 10816)
        ADVANCE(23);
      if (lookahead == 10817)
        ADVANCE(27);
      if (lookahead == 10818)
        ADVANCE(27);
      if (lookahead == 10819)
        ADVANCE(23);
      if (lookahead == 10820)
        ADVANCE(23);
      if (lookahead == 10821)
        ADVANCE(27);
      if (lookahead == 10826)
        ADVANCE(27);
      if (lookahead == 10827)
        ADVANCE(23);
      if (lookahead == 10828)
        ADVANCE(27);
      if (lookahead == 10829)
        ADVANCE(23);
      if (lookahead == 10830)
        ADVANCE(23);
      if (lookahead == 10831)
        ADVANCE(27);
      if (lookahead == 10832)
        ADVANCE(27);
      if (lookahead == 10833)
        ADVANCE(23);
      if (lookahead == 10834)
        ADVANCE(27);
      if (lookahead == 10835)
        ADVANCE(23);
      if (lookahead == 10836)
        ADVANCE(27);
      if (lookahead == 10837)
        ADVANCE(23);
      if (lookahead == 10838)
        ADVANCE(27);
      if (lookahead == 10839)
        ADVANCE(27);
      if (lookahead == 10840)
        ADVANCE(23);
      if (lookahead == 10842)
        ADVANCE(23);
      if (lookahead == 10843)
        ADVANCE(27);
      if (lookahead == 10844)
        ADVANCE(23);
      if (lookahead == 10845)
        ADVANCE(27);
      if (lookahead == 10846)
        ADVANCE(23);
      if (lookahead == 10847)
        ADVANCE(23);
      if (lookahead == 10848)
        ADVANCE(23);
      if (lookahead == 10849)
        ADVANCE(27);
      if (lookahead == 10850)
        ADVANCE(27);
      if (lookahead == 10851)
        ADVANCE(27);
      if (lookahead == 10868)
        ADVANCE(7);
      if (lookahead == 10971)
        ADVANCE(23);
      if (lookahead == 11056)
        ADVANCE(16);
      if (lookahead == 11057)
        ADVANCE(16);
      if (lookahead == 11058)
        ADVANCE(16);
      if (lookahead == 11059)
        ADVANCE(16);
      if (lookahead == 11060)
        ADVANCE(16);
      if (lookahead == 11061)
        ADVANCE(16);
      if (lookahead == 11062)
        ADVANCE(16);
      if (lookahead == 11063)
        ADVANCE(16);
      if (lookahead == 11064)
        ADVANCE(16);
      if (lookahead == 11065)
        ADVANCE(16);
      if (lookahead == 11066)
        ADVANCE(16);
      if (lookahead == 11067)
        ADVANCE(16);
      if (lookahead == 11068)
        ADVANCE(16);
      if (lookahead == 11069)
        ADVANCE(16);
      if (lookahead == 11070)
        ADVANCE(16);
      if (lookahead == 11071)
        ADVANCE(16);
      if (lookahead == 11072)
        ADVANCE(16);
      if (lookahead == 11073)
        ADVANCE(16);
      if (lookahead == 11074)
        ADVANCE(16);
      if (lookahead == 11075)
        ADVANCE(16);
      if (lookahead == 11076)
        ADVANCE(16);
      if (lookahead == 11079)
        ADVANCE(16);
      if (lookahead == 11080)
        ADVANCE(16);
      if (lookahead == 11081)
        ADVANCE(16);
      if (lookahead == 11082)
        ADVANCE(16);
      if (lookahead == 11083)
        ADVANCE(16);
      if (lookahead == 11084)
        ADVANCE(16);
      if (lookahead == 65513)
        ADVANCE(16);
      if (lookahead == 65515)
        ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(48);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(42);
      END_STATE();
    case 49:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(6);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == ',')
        ADVANCE(13);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '.')
        ADVANCE(17);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(19);
      if (lookahead == '<')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(35);
      if (lookahead == '>')
        ADVANCE(21);
      if (lookahead == '\\')
        ADVANCE(23);
      if (lookahead == '^')
        ADVANCE(19);
      if (lookahead == '|')
        ADVANCE(38);
      if (lookahead == '~')
        ADVANCE(7);
      if (lookahead == 177)
        ADVANCE(27);
      if (lookahead == 215)
        ADVANCE(23);
      if (lookahead == 247)
        ADVANCE(8);
      if (lookahead == 8523)
        ADVANCE(23);
      if (lookahead == 8592)
        ADVANCE(16);
      if (lookahead == 8594)
        ADVANCE(16);
      if (lookahead == 8596)
        ADVANCE(16);
      if (lookahead == 8602)
        ADVANCE(16);
      if (lookahead == 8603)
        ADVANCE(16);
      if (lookahead == 8604)
        ADVANCE(16);
      if (lookahead == 8605)
        ADVANCE(16);
      if (lookahead == 8606)
        ADVANCE(16);
      if (lookahead == 8608)
        ADVANCE(16);
      if (lookahead == 8610)
        ADVANCE(16);
      if (lookahead == 8611)
        ADVANCE(16);
      if (lookahead == 8612)
        ADVANCE(16);
      if (lookahead == 8614)
        ADVANCE(16);
      if (lookahead == 8617)
        ADVANCE(16);
      if (lookahead == 8618)
        ADVANCE(16);
      if (lookahead == 8619)
        ADVANCE(16);
      if (lookahead == 8620)
        ADVANCE(16);
      if (lookahead == 8622)
        ADVANCE(16);
      if (lookahead == 8636)
        ADVANCE(16);
      if (lookahead == 8637)
        ADVANCE(16);
      if (lookahead == 8640)
        ADVANCE(16);
      if (lookahead == 8641)
        ADVANCE(16);
      if (lookahead == 8644)
        ADVANCE(16);
      if (lookahead == 8646)
        ADVANCE(16);
      if (lookahead == 8647)
        ADVANCE(16);
      if (lookahead == 8649)
        ADVANCE(16);
      if (lookahead == 8651)
        ADVANCE(16);
      if (lookahead == 8652)
        ADVANCE(16);
      if (lookahead == 8653)
        ADVANCE(16);
      if (lookahead == 8654)
        ADVANCE(16);
      if (lookahead == 8655)
        ADVANCE(16);
      if (lookahead == 8656)
        ADVANCE(16);
      if (lookahead == 8658)
        ADVANCE(16);
      if (lookahead == 8660)
        ADVANCE(16);
      if (lookahead == 8666)
        ADVANCE(16);
      if (lookahead == 8667)
        ADVANCE(16);
      if (lookahead == 8668)
        ADVANCE(16);
      if (lookahead == 8669)
        ADVANCE(16);
      if (lookahead == 8672)
        ADVANCE(16);
      if (lookahead == 8674)
        ADVANCE(16);
      if (lookahead == 8692)
        ADVANCE(16);
      if (lookahead == 8694)
        ADVANCE(16);
      if (lookahead == 8695)
        ADVANCE(16);
      if (lookahead == 8696)
        ADVANCE(16);
      if (lookahead == 8697)
        ADVANCE(16);
      if (lookahead == 8698)
        ADVANCE(16);
      if (lookahead == 8699)
        ADVANCE(16);
      if (lookahead == 8700)
        ADVANCE(16);
      if (lookahead == 8701)
        ADVANCE(16);
      if (lookahead == 8702)
        ADVANCE(16);
      if (lookahead == 8703)
        ADVANCE(16);
      if (lookahead == 8723)
        ADVANCE(27);
      if (lookahead == 8724)
        ADVANCE(27);
      if (lookahead == 8727)
        ADVANCE(23);
      if (lookahead == 8728)
        ADVANCE(23);
      if (lookahead == 8729)
        ADVANCE(23);
      if (lookahead == 8740)
        ADVANCE(23);
      if (lookahead == 8743)
        ADVANCE(23);
      if (lookahead == 8744)
        ADVANCE(27);
      if (lookahead == 8745)
        ADVANCE(23);
      if (lookahead == 8746)
        ADVANCE(27);
      if (lookahead == 8760)
        ADVANCE(27);
      if (lookahead == 8768)
        ADVANCE(23);
      if (lookahead == 8770)
        ADVANCE(27);
      if (lookahead == 8783)
        ADVANCE(27);
      if (lookahead == 8788)
        ADVANCE(7);
      if (lookahead == 8789)
        ADVANCE(7);
      if (lookahead == 8845)
        ADVANCE(23);
      if (lookahead == 8846)
        ADVANCE(27);
      if (lookahead == 8851)
        ADVANCE(23);
      if (lookahead == 8852)
        ADVANCE(27);
      if (lookahead == 8853)
        ADVANCE(27);
      if (lookahead == 8854)
        ADVANCE(27);
      if (lookahead == 8855)
        ADVANCE(23);
      if (lookahead == 8856)
        ADVANCE(23);
      if (lookahead == 8857)
        ADVANCE(23);
      if (lookahead == 8858)
        ADVANCE(23);
      if (lookahead == 8859)
        ADVANCE(23);
      if (lookahead == 8862)
        ADVANCE(27);
      if (lookahead == 8863)
        ADVANCE(27);
      if (lookahead == 8864)
        ADVANCE(23);
      if (lookahead == 8865)
        ADVANCE(23);
      if (lookahead == 8891)
        ADVANCE(6);
      if (lookahead == 8892)
        ADVANCE(23);
      if (lookahead == 8893)
        ADVANCE(27);
      if (lookahead == 8900)
        ADVANCE(23);
      if (lookahead == 8901)
        ADVANCE(23);
      if (lookahead == 8902)
        ADVANCE(23);
      if (lookahead == 8903)
        ADVANCE(23);
      if (lookahead == 8905)
        ADVANCE(23);
      if (lookahead == 8906)
        ADVANCE(23);
      if (lookahead == 8907)
        ADVANCE(23);
      if (lookahead == 8908)
        ADVANCE(23);
      if (lookahead == 8910)
        ADVANCE(27);
      if (lookahead == 8911)
        ADVANCE(23);
      if (lookahead == 8914)
        ADVANCE(23);
      if (lookahead == 8915)
        ADVANCE(27);
      if (lookahead == 9655)
        ADVANCE(23);
      if (lookahead == 10193)
        ADVANCE(23);
      if (lookahead == 10197)
        ADVANCE(23);
      if (lookahead == 10198)
        ADVANCE(23);
      if (lookahead == 10199)
        ADVANCE(23);
      if (lookahead == 10229)
        ADVANCE(16);
      if (lookahead == 10230)
        ADVANCE(16);
      if (lookahead == 10231)
        ADVANCE(16);
      if (lookahead == 10233)
        ADVANCE(16);
      if (lookahead == 10234)
        ADVANCE(16);
      if (lookahead == 10235)
        ADVANCE(16);
      if (lookahead == 10236)
        ADVANCE(16);
      if (lookahead == 10237)
        ADVANCE(16);
      if (lookahead == 10238)
        ADVANCE(16);
      if (lookahead == 10239)
        ADVANCE(16);
      if (lookahead == 10496)
        ADVANCE(16);
      if (lookahead == 10497)
        ADVANCE(16);
      if (lookahead == 10498)
        ADVANCE(16);
      if (lookahead == 10499)
        ADVANCE(16);
      if (lookahead == 10500)
        ADVANCE(16);
      if (lookahead == 10501)
        ADVANCE(16);
      if (lookahead == 10502)
        ADVANCE(16);
      if (lookahead == 10503)
        ADVANCE(16);
      if (lookahead == 10508)
        ADVANCE(16);
      if (lookahead == 10509)
        ADVANCE(16);
      if (lookahead == 10510)
        ADVANCE(16);
      if (lookahead == 10511)
        ADVANCE(16);
      if (lookahead == 10512)
        ADVANCE(16);
      if (lookahead == 10513)
        ADVANCE(16);
      if (lookahead == 10516)
        ADVANCE(16);
      if (lookahead == 10517)
        ADVANCE(16);
      if (lookahead == 10518)
        ADVANCE(16);
      if (lookahead == 10519)
        ADVANCE(16);
      if (lookahead == 10520)
        ADVANCE(16);
      if (lookahead == 10525)
        ADVANCE(16);
      if (lookahead == 10526)
        ADVANCE(16);
      if (lookahead == 10527)
        ADVANCE(16);
      if (lookahead == 10528)
        ADVANCE(16);
      if (lookahead == 10564)
        ADVANCE(16);
      if (lookahead == 10565)
        ADVANCE(16);
      if (lookahead == 10566)
        ADVANCE(16);
      if (lookahead == 10567)
        ADVANCE(16);
      if (lookahead == 10568)
        ADVANCE(16);
      if (lookahead == 10570)
        ADVANCE(16);
      if (lookahead == 10571)
        ADVANCE(16);
      if (lookahead == 10574)
        ADVANCE(16);
      if (lookahead == 10576)
        ADVANCE(16);
      if (lookahead == 10578)
        ADVANCE(16);
      if (lookahead == 10579)
        ADVANCE(16);
      if (lookahead == 10582)
        ADVANCE(16);
      if (lookahead == 10583)
        ADVANCE(16);
      if (lookahead == 10586)
        ADVANCE(16);
      if (lookahead == 10587)
        ADVANCE(16);
      if (lookahead == 10590)
        ADVANCE(16);
      if (lookahead == 10591)
        ADVANCE(16);
      if (lookahead == 10594)
        ADVANCE(16);
      if (lookahead == 10596)
        ADVANCE(16);
      if (lookahead == 10598)
        ADVANCE(16);
      if (lookahead == 10599)
        ADVANCE(16);
      if (lookahead == 10600)
        ADVANCE(16);
      if (lookahead == 10601)
        ADVANCE(16);
      if (lookahead == 10602)
        ADVANCE(16);
      if (lookahead == 10603)
        ADVANCE(16);
      if (lookahead == 10604)
        ADVANCE(16);
      if (lookahead == 10605)
        ADVANCE(16);
      if (lookahead == 10608)
        ADVANCE(16);
      if (lookahead == 10680)
        ADVANCE(23);
      if (lookahead == 10684)
        ADVANCE(23);
      if (lookahead == 10686)
        ADVANCE(23);
      if (lookahead == 10687)
        ADVANCE(23);
      if (lookahead == 10740)
        ADVANCE(16);
      if (lookahead == 10742)
        ADVANCE(23);
      if (lookahead == 10743)
        ADVANCE(23);
      if (lookahead == 10746)
        ADVANCE(27);
      if (lookahead == 10747)
        ADVANCE(27);
      if (lookahead == 10759)
        ADVANCE(23);
      if (lookahead == 10760)
        ADVANCE(27);
      if (lookahead == 10781)
        ADVANCE(23);
      if (lookahead == 10786)
        ADVANCE(27);
      if (lookahead == 10787)
        ADVANCE(27);
      if (lookahead == 10788)
        ADVANCE(27);
      if (lookahead == 10789)
        ADVANCE(27);
      if (lookahead == 10790)
        ADVANCE(27);
      if (lookahead == 10791)
        ADVANCE(27);
      if (lookahead == 10792)
        ADVANCE(27);
      if (lookahead == 10793)
        ADVANCE(27);
      if (lookahead == 10794)
        ADVANCE(27);
      if (lookahead == 10795)
        ADVANCE(27);
      if (lookahead == 10796)
        ADVANCE(27);
      if (lookahead == 10797)
        ADVANCE(27);
      if (lookahead == 10798)
        ADVANCE(27);
      if (lookahead == 10800)
        ADVANCE(23);
      if (lookahead == 10801)
        ADVANCE(23);
      if (lookahead == 10802)
        ADVANCE(23);
      if (lookahead == 10803)
        ADVANCE(23);
      if (lookahead == 10804)
        ADVANCE(23);
      if (lookahead == 10805)
        ADVANCE(23);
      if (lookahead == 10806)
        ADVANCE(23);
      if (lookahead == 10807)
        ADVANCE(23);
      if (lookahead == 10808)
        ADVANCE(23);
      if (lookahead == 10809)
        ADVANCE(27);
      if (lookahead == 10810)
        ADVANCE(27);
      if (lookahead == 10811)
        ADVANCE(23);
      if (lookahead == 10812)
        ADVANCE(23);
      if (lookahead == 10813)
        ADVANCE(23);
      if (lookahead == 10816)
        ADVANCE(23);
      if (lookahead == 10817)
        ADVANCE(27);
      if (lookahead == 10818)
        ADVANCE(27);
      if (lookahead == 10819)
        ADVANCE(23);
      if (lookahead == 10820)
        ADVANCE(23);
      if (lookahead == 10821)
        ADVANCE(27);
      if (lookahead == 10826)
        ADVANCE(27);
      if (lookahead == 10827)
        ADVANCE(23);
      if (lookahead == 10828)
        ADVANCE(27);
      if (lookahead == 10829)
        ADVANCE(23);
      if (lookahead == 10830)
        ADVANCE(23);
      if (lookahead == 10831)
        ADVANCE(27);
      if (lookahead == 10832)
        ADVANCE(27);
      if (lookahead == 10833)
        ADVANCE(23);
      if (lookahead == 10834)
        ADVANCE(27);
      if (lookahead == 10835)
        ADVANCE(23);
      if (lookahead == 10836)
        ADVANCE(27);
      if (lookahead == 10837)
        ADVANCE(23);
      if (lookahead == 10838)
        ADVANCE(27);
      if (lookahead == 10839)
        ADVANCE(27);
      if (lookahead == 10840)
        ADVANCE(23);
      if (lookahead == 10842)
        ADVANCE(23);
      if (lookahead == 10843)
        ADVANCE(27);
      if (lookahead == 10844)
        ADVANCE(23);
      if (lookahead == 10845)
        ADVANCE(27);
      if (lookahead == 10846)
        ADVANCE(23);
      if (lookahead == 10847)
        ADVANCE(23);
      if (lookahead == 10848)
        ADVANCE(23);
      if (lookahead == 10849)
        ADVANCE(27);
      if (lookahead == 10850)
        ADVANCE(27);
      if (lookahead == 10851)
        ADVANCE(27);
      if (lookahead == 10868)
        ADVANCE(7);
      if (lookahead == 10971)
        ADVANCE(23);
      if (lookahead == 11056)
        ADVANCE(16);
      if (lookahead == 11057)
        ADVANCE(16);
      if (lookahead == 11058)
        ADVANCE(16);
      if (lookahead == 11059)
        ADVANCE(16);
      if (lookahead == 11060)
        ADVANCE(16);
      if (lookahead == 11061)
        ADVANCE(16);
      if (lookahead == 11062)
        ADVANCE(16);
      if (lookahead == 11063)
        ADVANCE(16);
      if (lookahead == 11064)
        ADVANCE(16);
      if (lookahead == 11065)
        ADVANCE(16);
      if (lookahead == 11066)
        ADVANCE(16);
      if (lookahead == 11067)
        ADVANCE(16);
      if (lookahead == 11068)
        ADVANCE(16);
      if (lookahead == 11069)
        ADVANCE(16);
      if (lookahead == 11070)
        ADVANCE(16);
      if (lookahead == 11071)
        ADVANCE(16);
      if (lookahead == 11072)
        ADVANCE(16);
      if (lookahead == 11073)
        ADVANCE(16);
      if (lookahead == 11074)
        ADVANCE(16);
      if (lookahead == 11075)
        ADVANCE(16);
      if (lookahead == 11076)
        ADVANCE(16);
      if (lookahead == 11079)
        ADVANCE(16);
      if (lookahead == 11080)
        ADVANCE(16);
      if (lookahead == 11081)
        ADVANCE(16);
      if (lookahead == 11082)
        ADVANCE(16);
      if (lookahead == 11083)
        ADVANCE(16);
      if (lookahead == 11084)
        ADVANCE(16);
      if (lookahead == 65513)
        ADVANCE(16);
      if (lookahead == 65515)
        ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(49);
      END_STATE();
    case 50:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == ',')
        ADVANCE(13);
      if (lookahead == ':')
        ADVANCE(51);
      if (lookahead == '<')
        ADVANCE(52);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '}')
        ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(50);
      END_STATE();
    case 51:
      if (lookahead == ':')
        ADVANCE(31);
      END_STATE();
    case 52:
      if (lookahead == ':')
        ADVANCE(34);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 'e')
        ADVANCE(1);
      if (lookahead == 'f')
        ADVANCE(9);
      if (lookahead == 'i')
        ADVANCE(17);
      if (lookahead == 'm')
        ADVANCE(19);
      if (lookahead == 's')
        ADVANCE(31);
      END_STATE();
    case 1:
      if (lookahead == 'l')
        ADVANCE(2);
      if (lookahead == 'n')
        ADVANCE(7);
      END_STATE();
    case 2:
      if (lookahead == 's')
        ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == 'e')
        ADVANCE(4);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i')
        ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 'f')
        ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 7:
      if (lookahead == 'd')
        ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 9:
      if (lookahead == 'u')
        ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'n')
        ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 'c')
        ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 't')
        ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'i')
        ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'o')
        ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'n')
        ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 17:
      if (lookahead == 'f')
        ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 19:
      if (lookahead == 'o')
        ADVANCE(20);
      if (lookahead == 'u')
        ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == 'd')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'u')
        ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'l')
        ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'e')
        ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 25:
      if (lookahead == 't')
        ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 'a')
        ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 'b')
        ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'l')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'e')
        ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_mutable);
      END_STATE();
    case 31:
      if (lookahead == 't')
        ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'r')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'u')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'c')
        ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 't')
        ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 43},
  [2] = {.lex_state = 43},
  [3] = {.lex_state = 43},
  [4] = {.lex_state = 43},
  [5] = {.lex_state = 43},
  [6] = {.lex_state = 43},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 44},
  [9] = {.lex_state = 43},
  [10] = {.lex_state = 43},
  [11] = {.lex_state = 46},
  [12] = {.lex_state = 47},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 43},
  [15] = {.lex_state = 43},
  [16] = {.lex_state = 43},
  [17] = {.lex_state = 43},
  [18] = {.lex_state = 43},
  [19] = {.lex_state = 43},
  [20] = {.lex_state = 43},
  [21] = {.lex_state = 43},
  [22] = {.lex_state = 43},
  [23] = {.lex_state = 43},
  [24] = {.lex_state = 43},
  [25] = {.lex_state = 43},
  [26] = {.lex_state = 43},
  [27] = {.lex_state = 43},
  [28] = {.lex_state = 43},
  [29] = {.lex_state = 47},
  [30] = {.lex_state = 44},
  [31] = {.lex_state = 47},
  [32] = {.lex_state = 47},
  [33] = {.lex_state = 47},
  [34] = {.lex_state = 43},
  [35] = {.lex_state = 47},
  [36] = {.lex_state = 43},
  [37] = {.lex_state = 43},
  [38] = {.lex_state = 43},
  [39] = {.lex_state = 43},
  [40] = {.lex_state = 43},
  [41] = {.lex_state = 47},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 43},
  [44] = {.lex_state = 43},
  [45] = {.lex_state = 43},
  [46] = {.lex_state = 43},
  [47] = {.lex_state = 43},
  [48] = {.lex_state = 43},
  [49] = {.lex_state = 43},
  [50] = {.lex_state = 43},
  [51] = {.lex_state = 43},
  [52] = {.lex_state = 47},
  [53] = {.lex_state = 48},
  [54] = {.lex_state = 47},
  [55] = {.lex_state = 49},
  [56] = {.lex_state = 47},
  [57] = {.lex_state = 47},
  [58] = {.lex_state = 44},
  [59] = {.lex_state = 47},
  [60] = {.lex_state = 47},
  [61] = {.lex_state = 44},
  [62] = {.lex_state = 44},
  [63] = {.lex_state = 44},
  [64] = {.lex_state = 43},
  [65] = {.lex_state = 44},
  [66] = {.lex_state = 47},
  [67] = {.lex_state = 43},
  [68] = {.lex_state = 43},
  [69] = {.lex_state = 43},
  [70] = {.lex_state = 43},
  [71] = {.lex_state = 47},
  [72] = {.lex_state = 47},
  [73] = {.lex_state = 43},
  [74] = {.lex_state = 50},
  [75] = {.lex_state = 50},
  [76] = {.lex_state = 50},
  [77] = {.lex_state = 44},
  [78] = {.lex_state = 43},
  [79] = {.lex_state = 43},
  [80] = {.lex_state = 49},
  [81] = {.lex_state = 47},
  [82] = {.lex_state = 47},
  [83] = {.lex_state = 48},
  [84] = {.lex_state = 47},
  [85] = {.lex_state = 47},
  [86] = {.lex_state = 48},
  [87] = {.lex_state = 43},
  [88] = {.lex_state = 43},
  [89] = {.lex_state = 47},
  [90] = {.lex_state = 48},
  [91] = {.lex_state = 49},
  [92] = {.lex_state = 48},
  [93] = {.lex_state = 48},
  [94] = {.lex_state = 43},
  [95] = {.lex_state = 48},
  [96] = {.lex_state = 48},
  [97] = {.lex_state = 43},
  [98] = {.lex_state = 43},
  [99] = {.lex_state = 47},
  [100] = {.lex_state = 43},
  [101] = {.lex_state = 43},
  [102] = {.lex_state = 43},
  [103] = {.lex_state = 43},
  [104] = {.lex_state = 43},
  [105] = {.lex_state = 43},
  [106] = {.lex_state = 43},
  [107] = {.lex_state = 47},
  [108] = {.lex_state = 43},
  [109] = {.lex_state = 43},
  [110] = {.lex_state = 47},
  [111] = {.lex_state = 43},
  [112] = {.lex_state = 43},
  [113] = {.lex_state = 43},
  [114] = {.lex_state = 49},
  [115] = {.lex_state = 43},
  [116] = {.lex_state = 47},
  [117] = {.lex_state = 47},
  [118] = {.lex_state = 47},
  [119] = {.lex_state = 47},
  [120] = {.lex_state = 47},
  [121] = {.lex_state = 43},
  [122] = {.lex_state = 47},
  [123] = {.lex_state = 47},
  [124] = {.lex_state = 43},
  [125] = {.lex_state = 43},
  [126] = {.lex_state = 43},
  [127] = {.lex_state = 47},
  [128] = {.lex_state = 50},
  [129] = {.lex_state = 43},
  [130] = {.lex_state = 43},
  [131] = {.lex_state = 43},
  [132] = {.lex_state = 43},
  [133] = {.lex_state = 43},
  [134] = {.lex_state = 49},
  [135] = {.lex_state = 47},
  [136] = {.lex_state = 43},
  [137] = {.lex_state = 47},
  [138] = {.lex_state = 48},
  [139] = {.lex_state = 43},
  [140] = {.lex_state = 47},
  [141] = {.lex_state = 48},
  [142] = {.lex_state = 43},
  [143] = {.lex_state = 43},
  [144] = {.lex_state = 48},
  [145] = {.lex_state = 47},
  [146] = {.lex_state = 48},
  [147] = {.lex_state = 43},
  [148] = {.lex_state = 43},
  [149] = {.lex_state = 47},
  [150] = {.lex_state = 43},
  [151] = {.lex_state = 48},
  [152] = {.lex_state = 49},
  [153] = {.lex_state = 47},
  [154] = {.lex_state = 43},
  [155] = {.lex_state = 47},
  [156] = {.lex_state = 47},
  [157] = {.lex_state = 47},
  [158] = {.lex_state = 47},
  [159] = {.lex_state = 47},
  [160] = {.lex_state = 43},
  [161] = {.lex_state = 43},
  [162] = {.lex_state = 43},
  [163] = {.lex_state = 47},
  [164] = {.lex_state = 43},
  [165] = {.lex_state = 49},
  [166] = {.lex_state = 49},
  [167] = {.lex_state = 49},
  [168] = {.lex_state = 49},
  [169] = {.lex_state = 47},
  [170] = {.lex_state = 49},
  [171] = {.lex_state = 47},
  [172] = {.lex_state = 43},
  [173] = {.lex_state = 47},
  [174] = {.lex_state = 50},
  [175] = {.lex_state = 50},
  [176] = {.lex_state = 47},
  [177] = {.lex_state = 50},
  [178] = {.lex_state = 50},
  [179] = {.lex_state = 49},
  [180] = {.lex_state = 43},
  [181] = {.lex_state = 49},
  [182] = {.lex_state = 47},
  [183] = {.lex_state = 43},
  [184] = {.lex_state = 48},
  [185] = {.lex_state = 43},
  [186] = {.lex_state = 48},
  [187] = {.lex_state = 43},
  [188] = {.lex_state = 48},
  [189] = {.lex_state = 43},
  [190] = {.lex_state = 47},
  [191] = {.lex_state = 48},
  [192] = {.lex_state = 43},
  [193] = {.lex_state = 43},
  [194] = {.lex_state = 43},
  [195] = {.lex_state = 48},
  [196] = {.lex_state = 47},
  [197] = {.lex_state = 43},
  [198] = {.lex_state = 47},
  [199] = {.lex_state = 47},
  [200] = {.lex_state = 43},
  [201] = {.lex_state = 43},
  [202] = {.lex_state = 43},
  [203] = {.lex_state = 50},
  [204] = {.lex_state = 50},
  [205] = {.lex_state = 47},
  [206] = {.lex_state = 48},
  [207] = {.lex_state = 48},
  [208] = {.lex_state = 48},
  [209] = {.lex_state = 43},
  [210] = {.lex_state = 48},
  [211] = {.lex_state = 43},
  [212] = {.lex_state = 43},
  [213] = {.lex_state = 43},
  [214] = {.lex_state = 47},
  [215] = {.lex_state = 43},
  [216] = {.lex_state = 47},
  [217] = {.lex_state = 43},
  [218] = {.lex_state = 50},
  [219] = {.lex_state = 48},
  [220] = {.lex_state = 48},
  [221] = {.lex_state = 43},
  [222] = {.lex_state = 43},
  [223] = {.lex_state = 47},
  [224] = {.lex_state = 48},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(3),
    [anon_sym_mutable] = ACTIONS(3),
    [anon_sym_struct] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_LT_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(3),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(3),
    [anon_sym_elseif] = ACTIONS(3),
    [anon_sym_else] = ACTIONS(3),
    [sym_identifier] = ACTIONS(3),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym__times_operator] = ACTIONS(3),
    [sym__plus_operator] = ACTIONS(3),
    [sym__arrow_operator] = ACTIONS(1),
    [sym__assign_operator] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_comment] = ACTIONS(5),
  },
  [1] = {
    [sym_source_file] = STATE(7),
    [sym__expression] = STATE(8),
    [sym_module_expression] = STATE(8),
    [sym_struct_definition] = STATE(8),
    [sym_function_expression] = STATE(8),
    [sym_call_expression] = STATE(8),
    [sym_assignment_expression] = STATE(8),
    [sym_binary_expression] = STATE(8),
    [sym_pair_expression] = STATE(8),
    [sym_conditional_expression] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(8),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(20),
    [sym_number] = ACTIONS(22),
    [sym_string] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [2] = {
    [sym_identifier] = ACTIONS(26),
    [sym_comment] = ACTIONS(24),
  },
  [3] = {
    [anon_sym_struct] = ACTIONS(28),
    [sym_comment] = ACTIONS(24),
  },
  [4] = {
    [sym_parameterized_identifier] = STATE(12),
    [sym_identifier] = ACTIONS(30),
    [sym_comment] = ACTIONS(24),
  },
  [5] = {
    [sym_identifier] = ACTIONS(32),
    [sym_comment] = ACTIONS(24),
  },
  [6] = {
    [sym__expression] = STATE(19),
    [sym_module_expression] = STATE(19),
    [sym_struct_definition] = STATE(19),
    [sym_function_expression] = STATE(19),
    [sym_call_expression] = STATE(19),
    [sym_assignment_expression] = STATE(19),
    [sym_binary_expression] = STATE(19),
    [sym_pair_expression] = STATE(19),
    [sym_conditional_expression] = STATE(19),
    [anon_sym_module] = ACTIONS(34),
    [anon_sym_mutable] = ACTIONS(36),
    [anon_sym_struct] = ACTIONS(38),
    [anon_sym_function] = ACTIONS(40),
    [anon_sym_if] = ACTIONS(42),
    [sym_identifier] = ACTIONS(44),
    [sym_number] = ACTIONS(46),
    [sym_string] = ACTIONS(46),
    [sym_comment] = ACTIONS(24),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(48),
    [sym_comment] = ACTIONS(24),
  },
  [8] = {
    [sym_argument_list] = STATE(29),
    [aux_sym__expression_list_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(50),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_PIPE_PIPE] = ACTIONS(54),
    [anon_sym_AMP_AMP] = ACTIONS(56),
    [anon_sym_EQ_GT] = ACTIONS(58),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(62),
    [sym__arrow_operator] = ACTIONS(64),
    [sym__assign_operator] = ACTIONS(66),
    [anon_sym_LF] = ACTIONS(68),
    [anon_sym_SEMI] = ACTIONS(70),
    [sym_comment] = ACTIONS(72),
  },
  [9] = {
    [sym__expression] = STATE(32),
    [sym_module_expression] = STATE(32),
    [sym_struct_definition] = STATE(32),
    [sym_function_expression] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_assignment_expression] = STATE(32),
    [sym_binary_expression] = STATE(32),
    [sym_pair_expression] = STATE(32),
    [sym_conditional_expression] = STATE(32),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(74),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(76),
    [sym_number] = ACTIONS(78),
    [sym_string] = ACTIONS(78),
    [sym_comment] = ACTIONS(24),
  },
  [10] = {
    [sym_parameterized_identifier] = STATE(33),
    [sym_identifier] = ACTIONS(30),
    [sym_comment] = ACTIONS(24),
  },
  [11] = {
    [anon_sym_end] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(82),
    [anon_sym_LF] = ACTIONS(84),
    [anon_sym_SEMI] = ACTIONS(80),
    [sym_comment] = ACTIONS(72),
  },
  [12] = {
    [anon_sym_end] = ACTIONS(86),
    [anon_sym_LF] = ACTIONS(88),
    [anon_sym_SEMI] = ACTIONS(90),
    [sym_comment] = ACTIONS(72),
  },
  [13] = {
    [sym_parameter_list] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(92),
    [sym_comment] = ACTIONS(24),
  },
  [14] = {
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(24),
  },
  [15] = {
    [anon_sym_struct] = ACTIONS(96),
    [sym_comment] = ACTIONS(24),
  },
  [16] = {
    [sym_parameterized_identifier] = STATE(41),
    [sym_identifier] = ACTIONS(30),
    [sym_comment] = ACTIONS(24),
  },
  [17] = {
    [sym_identifier] = ACTIONS(98),
    [sym_comment] = ACTIONS(24),
  },
  [18] = {
    [sym__expression] = STATE(43),
    [sym_module_expression] = STATE(43),
    [sym_struct_definition] = STATE(43),
    [sym_function_expression] = STATE(43),
    [sym_call_expression] = STATE(43),
    [sym_assignment_expression] = STATE(43),
    [sym_binary_expression] = STATE(43),
    [sym_pair_expression] = STATE(43),
    [sym_conditional_expression] = STATE(43),
    [anon_sym_module] = ACTIONS(34),
    [anon_sym_mutable] = ACTIONS(36),
    [anon_sym_struct] = ACTIONS(38),
    [anon_sym_function] = ACTIONS(40),
    [anon_sym_if] = ACTIONS(42),
    [sym_identifier] = ACTIONS(100),
    [sym_number] = ACTIONS(102),
    [sym_string] = ACTIONS(102),
    [sym_comment] = ACTIONS(24),
  },
  [19] = {
    [sym__expression] = STATE(52),
    [sym_module_expression] = STATE(52),
    [sym_struct_definition] = STATE(52),
    [sym_function_expression] = STATE(52),
    [sym_call_expression] = STATE(52),
    [sym_argument_list] = STATE(53),
    [sym_assignment_expression] = STATE(52),
    [sym_binary_expression] = STATE(52),
    [sym_pair_expression] = STATE(52),
    [sym_conditional_expression] = STATE(52),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_PIPE_PIPE] = ACTIONS(106),
    [anon_sym_AMP_AMP] = ACTIONS(108),
    [anon_sym_EQ_GT] = ACTIONS(110),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(112),
    [sym_number] = ACTIONS(114),
    [sym_string] = ACTIONS(114),
    [sym__times_operator] = ACTIONS(116),
    [sym__plus_operator] = ACTIONS(118),
    [sym__arrow_operator] = ACTIONS(120),
    [sym__assign_operator] = ACTIONS(122),
    [sym_comment] = ACTIONS(24),
  },
  [20] = {
    [sym__expression] = STATE(55),
    [sym_module_expression] = STATE(55),
    [sym_struct_definition] = STATE(55),
    [sym_function_expression] = STATE(55),
    [sym_call_expression] = STATE(55),
    [sym_assignment_expression] = STATE(55),
    [sym_binary_expression] = STATE(55),
    [sym_pair_expression] = STATE(55),
    [sym_conditional_expression] = STATE(55),
    [anon_sym_module] = ACTIONS(34),
    [anon_sym_mutable] = ACTIONS(36),
    [anon_sym_struct] = ACTIONS(38),
    [anon_sym_function] = ACTIONS(40),
    [anon_sym_RPAREN] = ACTIONS(124),
    [anon_sym_if] = ACTIONS(42),
    [sym_identifier] = ACTIONS(126),
    [sym_number] = ACTIONS(128),
    [sym_string] = ACTIONS(128),
    [sym_comment] = ACTIONS(24),
  },
  [21] = {
    [sym__expression] = STATE(56),
    [sym_module_expression] = STATE(56),
    [sym_struct_definition] = STATE(56),
    [sym_function_expression] = STATE(56),
    [sym_call_expression] = STATE(56),
    [sym_assignment_expression] = STATE(56),
    [sym_binary_expression] = STATE(56),
    [sym_pair_expression] = STATE(56),
    [sym_conditional_expression] = STATE(56),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(130),
    [sym_number] = ACTIONS(132),
    [sym_string] = ACTIONS(132),
    [sym_comment] = ACTIONS(24),
  },
  [22] = {
    [sym__expression] = STATE(57),
    [sym_module_expression] = STATE(57),
    [sym_struct_definition] = STATE(57),
    [sym_function_expression] = STATE(57),
    [sym_call_expression] = STATE(57),
    [sym_assignment_expression] = STATE(57),
    [sym_binary_expression] = STATE(57),
    [sym_pair_expression] = STATE(57),
    [sym_conditional_expression] = STATE(57),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(134),
    [sym_number] = ACTIONS(136),
    [sym_string] = ACTIONS(136),
    [sym_comment] = ACTIONS(24),
  },
  [23] = {
    [sym__expression] = STATE(58),
    [sym_module_expression] = STATE(58),
    [sym_struct_definition] = STATE(58),
    [sym_function_expression] = STATE(58),
    [sym_call_expression] = STATE(58),
    [sym_assignment_expression] = STATE(58),
    [sym_binary_expression] = STATE(58),
    [sym_pair_expression] = STATE(58),
    [sym_conditional_expression] = STATE(58),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(138),
    [sym_number] = ACTIONS(140),
    [sym_string] = ACTIONS(140),
    [sym_comment] = ACTIONS(24),
  },
  [24] = {
    [sym__expression] = STATE(59),
    [sym_module_expression] = STATE(59),
    [sym_struct_definition] = STATE(59),
    [sym_function_expression] = STATE(59),
    [sym_call_expression] = STATE(59),
    [sym_assignment_expression] = STATE(59),
    [sym_binary_expression] = STATE(59),
    [sym_pair_expression] = STATE(59),
    [sym_conditional_expression] = STATE(59),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(142),
    [sym_number] = ACTIONS(144),
    [sym_string] = ACTIONS(144),
    [sym_comment] = ACTIONS(24),
  },
  [25] = {
    [sym__expression] = STATE(60),
    [sym_module_expression] = STATE(60),
    [sym_struct_definition] = STATE(60),
    [sym_function_expression] = STATE(60),
    [sym_call_expression] = STATE(60),
    [sym_assignment_expression] = STATE(60),
    [sym_binary_expression] = STATE(60),
    [sym_pair_expression] = STATE(60),
    [sym_conditional_expression] = STATE(60),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(146),
    [sym_number] = ACTIONS(148),
    [sym_string] = ACTIONS(148),
    [sym_comment] = ACTIONS(24),
  },
  [26] = {
    [sym__expression] = STATE(61),
    [sym_module_expression] = STATE(61),
    [sym_struct_definition] = STATE(61),
    [sym_function_expression] = STATE(61),
    [sym_call_expression] = STATE(61),
    [sym_assignment_expression] = STATE(61),
    [sym_binary_expression] = STATE(61),
    [sym_pair_expression] = STATE(61),
    [sym_conditional_expression] = STATE(61),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(150),
    [sym_number] = ACTIONS(152),
    [sym_string] = ACTIONS(152),
    [sym_comment] = ACTIONS(24),
  },
  [27] = {
    [sym__expression] = STATE(62),
    [sym_module_expression] = STATE(62),
    [sym_struct_definition] = STATE(62),
    [sym_function_expression] = STATE(62),
    [sym_call_expression] = STATE(62),
    [sym_assignment_expression] = STATE(62),
    [sym_binary_expression] = STATE(62),
    [sym_pair_expression] = STATE(62),
    [sym_conditional_expression] = STATE(62),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(154),
    [sym_number] = ACTIONS(156),
    [sym_string] = ACTIONS(156),
    [sym_comment] = ACTIONS(24),
  },
  [28] = {
    [sym__expression] = STATE(63),
    [sym_module_expression] = STATE(63),
    [sym_struct_definition] = STATE(63),
    [sym_function_expression] = STATE(63),
    [sym_call_expression] = STATE(63),
    [sym_assignment_expression] = STATE(63),
    [sym_binary_expression] = STATE(63),
    [sym_pair_expression] = STATE(63),
    [sym_conditional_expression] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(158),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(160),
    [sym_number] = ACTIONS(162),
    [sym_string] = ACTIONS(162),
    [sym_comment] = ACTIONS(24),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(164),
    [anon_sym_end] = ACTIONS(166),
    [anon_sym_LPAREN] = ACTIONS(166),
    [anon_sym_PIPE_PIPE] = ACTIONS(166),
    [anon_sym_AMP_AMP] = ACTIONS(166),
    [anon_sym_EQ_GT] = ACTIONS(166),
    [anon_sym_elseif] = ACTIONS(166),
    [anon_sym_else] = ACTIONS(166),
    [sym__times_operator] = ACTIONS(166),
    [sym__plus_operator] = ACTIONS(166),
    [sym__arrow_operator] = ACTIONS(166),
    [sym__assign_operator] = ACTIONS(166),
    [anon_sym_LF] = ACTIONS(164),
    [anon_sym_SEMI] = ACTIONS(166),
    [sym_comment] = ACTIONS(72),
  },
  [30] = {
    [aux_sym__expression_list_repeat1] = STATE(65),
    [ts_builtin_sym_end] = ACTIONS(158),
    [anon_sym_LF] = ACTIONS(168),
    [anon_sym_SEMI] = ACTIONS(170),
    [sym_comment] = ACTIONS(72),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(172),
    [anon_sym_end] = ACTIONS(174),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_PIPE_PIPE] = ACTIONS(174),
    [anon_sym_AMP_AMP] = ACTIONS(174),
    [anon_sym_EQ_GT] = ACTIONS(174),
    [anon_sym_elseif] = ACTIONS(174),
    [anon_sym_else] = ACTIONS(174),
    [sym__times_operator] = ACTIONS(174),
    [sym__plus_operator] = ACTIONS(174),
    [sym__arrow_operator] = ACTIONS(174),
    [sym__assign_operator] = ACTIONS(174),
    [anon_sym_LF] = ACTIONS(172),
    [anon_sym_SEMI] = ACTIONS(174),
    [sym_comment] = ACTIONS(72),
  },
  [32] = {
    [sym_argument_list] = STATE(29),
    [aux_sym__expression_list_repeat1] = STATE(71),
    [anon_sym_end] = ACTIONS(176),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_PIPE_PIPE] = ACTIONS(54),
    [anon_sym_AMP_AMP] = ACTIONS(56),
    [anon_sym_EQ_GT] = ACTIONS(178),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(62),
    [sym__arrow_operator] = ACTIONS(180),
    [sym__assign_operator] = ACTIONS(182),
    [anon_sym_LF] = ACTIONS(184),
    [anon_sym_SEMI] = ACTIONS(186),
    [sym_comment] = ACTIONS(72),
  },
  [33] = {
    [anon_sym_end] = ACTIONS(188),
    [anon_sym_LF] = ACTIONS(190),
    [anon_sym_SEMI] = ACTIONS(192),
    [sym_comment] = ACTIONS(72),
  },
  [34] = {
    [sym_typed_identifier] = STATE(75),
    [sym_parameterized_identifier] = STATE(76),
    [sym_identifier] = ACTIONS(194),
    [sym_comment] = ACTIONS(24),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(196),
    [anon_sym_end] = ACTIONS(198),
    [anon_sym_LPAREN] = ACTIONS(198),
    [anon_sym_PIPE_PIPE] = ACTIONS(198),
    [anon_sym_AMP_AMP] = ACTIONS(198),
    [anon_sym_EQ_GT] = ACTIONS(198),
    [anon_sym_elseif] = ACTIONS(198),
    [anon_sym_else] = ACTIONS(198),
    [sym__times_operator] = ACTIONS(198),
    [sym__plus_operator] = ACTIONS(198),
    [sym__arrow_operator] = ACTIONS(198),
    [sym__assign_operator] = ACTIONS(198),
    [anon_sym_LF] = ACTIONS(196),
    [anon_sym_SEMI] = ACTIONS(198),
    [sym_comment] = ACTIONS(72),
  },
  [36] = {
    [sym_parameterized_identifier] = STATE(77),
    [aux_sym_struct_definition_repeat1] = STATE(78),
    [anon_sym_end] = ACTIONS(188),
    [sym_identifier] = ACTIONS(200),
    [sym_comment] = ACTIONS(24),
  },
  [37] = {
    [anon_sym_RPAREN] = ACTIONS(202),
    [sym_identifier] = ACTIONS(204),
    [sym_comment] = ACTIONS(24),
  },
  [38] = {
    [sym__expression] = STATE(82),
    [sym_module_expression] = STATE(82),
    [sym_struct_definition] = STATE(82),
    [sym_function_expression] = STATE(82),
    [sym_call_expression] = STATE(82),
    [sym_assignment_expression] = STATE(82),
    [sym_binary_expression] = STATE(82),
    [sym_pair_expression] = STATE(82),
    [sym_conditional_expression] = STATE(82),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(206),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(208),
    [sym_number] = ACTIONS(210),
    [sym_string] = ACTIONS(210),
    [sym_comment] = ACTIONS(24),
  },
  [39] = {
    [sym__expression] = STATE(84),
    [sym_module_expression] = STATE(84),
    [sym_struct_definition] = STATE(84),
    [sym_function_expression] = STATE(84),
    [sym_call_expression] = STATE(84),
    [sym_assignment_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [sym_pair_expression] = STATE(84),
    [sym_conditional_expression] = STATE(84),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(212),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(214),
    [sym_number] = ACTIONS(216),
    [sym_string] = ACTIONS(216),
    [sym_comment] = ACTIONS(24),
  },
  [40] = {
    [sym_parameterized_identifier] = STATE(85),
    [sym_identifier] = ACTIONS(30),
    [sym_comment] = ACTIONS(24),
  },
  [41] = {
    [anon_sym_end] = ACTIONS(218),
    [anon_sym_LF] = ACTIONS(220),
    [anon_sym_SEMI] = ACTIONS(222),
    [sym_comment] = ACTIONS(72),
  },
  [42] = {
    [sym_parameter_list] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(92),
    [sym_comment] = ACTIONS(24),
  },
  [43] = {
    [sym__expression] = STATE(89),
    [sym_module_expression] = STATE(89),
    [sym_struct_definition] = STATE(89),
    [sym_function_expression] = STATE(89),
    [sym_call_expression] = STATE(89),
    [sym_argument_list] = STATE(53),
    [sym_assignment_expression] = STATE(89),
    [sym_binary_expression] = STATE(89),
    [sym_pair_expression] = STATE(89),
    [sym_conditional_expression] = STATE(89),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_PIPE_PIPE] = ACTIONS(106),
    [anon_sym_AMP_AMP] = ACTIONS(108),
    [anon_sym_EQ_GT] = ACTIONS(110),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(224),
    [sym_number] = ACTIONS(226),
    [sym_string] = ACTIONS(226),
    [sym__times_operator] = ACTIONS(116),
    [sym__plus_operator] = ACTIONS(118),
    [sym__arrow_operator] = ACTIONS(120),
    [sym__assign_operator] = ACTIONS(122),
    [sym_comment] = ACTIONS(24),
  },
  [44] = {
    [sym__expression] = STATE(91),
    [sym_module_expression] = STATE(91),
    [sym_struct_definition] = STATE(91),
    [sym_function_expression] = STATE(91),
    [sym_call_expression] = STATE(91),
    [sym_assignment_expression] = STATE(91),
    [sym_binary_expression] = STATE(91),
    [sym_pair_expression] = STATE(91),
    [sym_conditional_expression] = STATE(91),
    [anon_sym_module] = ACTIONS(34),
    [anon_sym_mutable] = ACTIONS(36),
    [anon_sym_struct] = ACTIONS(38),
    [anon_sym_function] = ACTIONS(40),
    [anon_sym_RPAREN] = ACTIONS(228),
    [anon_sym_if] = ACTIONS(42),
    [sym_identifier] = ACTIONS(230),
    [sym_number] = ACTIONS(232),
    [sym_string] = ACTIONS(232),
    [sym_comment] = ACTIONS(24),
  },
  [45] = {
    [sym__expression] = STATE(92),
    [sym_module_expression] = STATE(92),
    [sym_struct_definition] = STATE(92),
    [sym_function_expression] = STATE(92),
    [sym_call_expression] = STATE(92),
    [sym_assignment_expression] = STATE(92),
    [sym_binary_expression] = STATE(92),
    [sym_pair_expression] = STATE(92),
    [sym_conditional_expression] = STATE(92),
    [anon_sym_module] = ACTIONS(34),
    [anon_sym_mutable] = ACTIONS(36),
    [anon_sym_struct] = ACTIONS(38),
    [anon_sym_function] = ACTIONS(40),
    [anon_sym_if] = ACTIONS(42),
    [sym_identifier] = ACTIONS(234),
    [sym_number] = ACTIONS(236),
    [sym_string] = ACTIONS(236),
    [sym_comment] = ACTIONS(24),
  },
  [46] = {
    [sym__expression] = STATE(93),
    [sym_module_expression] = STATE(93),
    [sym_struct_definition] = STATE(93),
    [sym_function_expression] = STATE(93),
    [sym_call_expression] = STATE(93),
    [sym_assignment_expression] = STATE(93),
    [sym_binary_expression] = STATE(93),
    [sym_pair_expression] = STATE(93),
    [sym_conditional_expression] = STATE(93),
    [anon_sym_module] = ACTIONS(34),
    [anon_sym_mutable] = ACTIONS(36),
    [anon_sym_struct] = ACTIONS(38),
    [anon_sym_function] = ACTIONS(40),
    [anon_sym_if] = ACTIONS(42),
    [sym_identifier] = ACTIONS(238),
    [sym_number] = ACTIONS(240),
    [sym_string] = ACTIONS(240),
    [sym_comment] = ACTIONS(24),
  },
  [47] = {
    [sym__expression] = STATE(94),
    [sym_module_expression] = STATE(94),
    [sym_struct_definition] = STATE(94),
    [sym_function_expression] = STATE(94),
    [sym_call_expression] = STATE(94),
    [sym_assignment_expression] = STATE(94),
    [sym_binary_expression] = STATE(94),
    [sym_pair_expression] = STATE(94),
    [sym_conditional_expression] = STATE(94),
    [anon_sym_module] = ACTIONS(34),
    [anon_sym_mutable] = ACTIONS(36),
    [anon_sym_struct] = ACTIONS(38),
    [anon_sym_function] = ACTIONS(40),
    [anon_sym_if] = ACTIONS(42),
    [sym_identifier] = ACTIONS(242),
    [sym_number] = ACTIONS(244),
    [sym_string] = ACTIONS(244),
    [sym_comment] = ACTIONS(24),
  },
  [48] = {
    [sym__expression] = STATE(95),
    [sym_module_expression] = STATE(95),
    [sym_struct_definition] = STATE(95),
    [sym_function_expression] = STATE(95),
    [sym_call_expression] = STATE(95),
    [sym_assignment_expression] = STATE(95),
    [sym_binary_expression] = STATE(95),
    [sym_pair_expression] = STATE(95),
    [sym_conditional_expression] = STATE(95),
    [anon_sym_module] = ACTIONS(34),
    [anon_sym_mutable] = ACTIONS(36),
    [anon_sym_struct] = ACTIONS(38),
    [anon_sym_function] = ACTIONS(40),
    [anon_sym_if] = ACTIONS(42),
    [sym_identifier] = ACTIONS(246),
    [sym_number] = ACTIONS(248),
    [sym_string] = ACTIONS(248),
    [sym_comment] = ACTIONS(24),
  },
  [49] = {
    [sym__expression] = STATE(96),
    [sym_module_expression] = STATE(96),
    [sym_struct_definition] = STATE(96),
    [sym_function_expression] = STATE(96),
    [sym_call_expression] = STATE(96),
    [sym_assignment_expression] = STATE(96),
    [sym_binary_expression] = STATE(96),
    [sym_pair_expression] = STATE(96),
    [sym_conditional_expression] = STATE(96),
    [anon_sym_module] = ACTIONS(34),
    [anon_sym_mutable] = ACTIONS(36),
    [anon_sym_struct] = ACTIONS(38),
    [anon_sym_function] = ACTIONS(40),
    [anon_sym_if] = ACTIONS(42),
    [sym_identifier] = ACTIONS(250),
    [sym_number] = ACTIONS(252),
    [sym_string] = ACTIONS(252),
    [sym_comment] = ACTIONS(24),
  },
  [50] = {
    [sym__expression] = STATE(97),
    [sym_module_expression] = STATE(97),
    [sym_struct_definition] = STATE(97),
    [sym_function_expression] = STATE(97),
    [sym_call_expression] = STATE(97),
    [sym_assignment_expression] = STATE(97),
    [sym_binary_expression] = STATE(97),
    [sym_pair_expression] = STATE(97),
    [sym_conditional_expression] = STATE(97),
    [anon_sym_module] = ACTIONS(34),
    [anon_sym_mutable] = ACTIONS(36),
    [anon_sym_struct] = ACTIONS(38),
    [anon_sym_function] = ACTIONS(40),
    [anon_sym_if] = ACTIONS(42),
    [sym_identifier] = ACTIONS(254),
    [sym_number] = ACTIONS(256),
    [sym_string] = ACTIONS(256),
    [sym_comment] = ACTIONS(24),
  },
  [51] = {
    [sym__expression] = STATE(98),
    [sym_module_expression] = STATE(98),
    [sym_struct_definition] = STATE(98),
    [sym_function_expression] = STATE(98),
    [sym_call_expression] = STATE(98),
    [sym_assignment_expression] = STATE(98),
    [sym_binary_expression] = STATE(98),
    [sym_pair_expression] = STATE(98),
    [sym_conditional_expression] = STATE(98),
    [anon_sym_module] = ACTIONS(34),
    [anon_sym_mutable] = ACTIONS(36),
    [anon_sym_struct] = ACTIONS(38),
    [anon_sym_function] = ACTIONS(40),
    [anon_sym_if] = ACTIONS(42),
    [sym_identifier] = ACTIONS(258),
    [sym_number] = ACTIONS(260),
    [sym_string] = ACTIONS(260),
    [sym_comment] = ACTIONS(24),
  },
  [52] = {
    [sym_argument_list] = STATE(29),
    [sym_elseif_clause] = STATE(108),
    [sym_else_clause] = STATE(106),
    [aux_sym__expression_list_repeat1] = STATE(107),
    [aux_sym_conditional_expression_repeat1] = STATE(108),
    [anon_sym_end] = ACTIONS(262),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_PIPE_PIPE] = ACTIONS(54),
    [anon_sym_AMP_AMP] = ACTIONS(56),
    [anon_sym_EQ_GT] = ACTIONS(264),
    [anon_sym_elseif] = ACTIONS(266),
    [anon_sym_else] = ACTIONS(268),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(62),
    [sym__arrow_operator] = ACTIONS(270),
    [sym__assign_operator] = ACTIONS(272),
    [anon_sym_LF] = ACTIONS(274),
    [anon_sym_SEMI] = ACTIONS(276),
    [sym_comment] = ACTIONS(72),
  },
  [53] = {
    [anon_sym_module] = ACTIONS(166),
    [anon_sym_mutable] = ACTIONS(166),
    [anon_sym_struct] = ACTIONS(166),
    [anon_sym_COMMA] = ACTIONS(164),
    [anon_sym_function] = ACTIONS(166),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_RPAREN] = ACTIONS(164),
    [anon_sym_PIPE_PIPE] = ACTIONS(166),
    [anon_sym_AMP_AMP] = ACTIONS(164),
    [anon_sym_EQ_GT] = ACTIONS(164),
    [anon_sym_if] = ACTIONS(166),
    [sym_identifier] = ACTIONS(166),
    [sym_number] = ACTIONS(164),
    [sym_string] = ACTIONS(164),
    [sym__times_operator] = ACTIONS(166),
    [sym__plus_operator] = ACTIONS(166),
    [sym__arrow_operator] = ACTIONS(164),
    [sym__assign_operator] = ACTIONS(166),
    [sym_comment] = ACTIONS(24),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(278),
    [anon_sym_end] = ACTIONS(280),
    [anon_sym_LPAREN] = ACTIONS(280),
    [anon_sym_PIPE_PIPE] = ACTIONS(280),
    [anon_sym_AMP_AMP] = ACTIONS(280),
    [anon_sym_EQ_GT] = ACTIONS(280),
    [anon_sym_elseif] = ACTIONS(280),
    [anon_sym_else] = ACTIONS(280),
    [sym__times_operator] = ACTIONS(280),
    [sym__plus_operator] = ACTIONS(280),
    [sym__arrow_operator] = ACTIONS(280),
    [sym__assign_operator] = ACTIONS(280),
    [anon_sym_LF] = ACTIONS(278),
    [anon_sym_SEMI] = ACTIONS(280),
    [sym_comment] = ACTIONS(72),
  },
  [55] = {
    [sym_argument_list] = STATE(53),
    [aux_sym_argument_list_repeat1] = STATE(114),
    [anon_sym_COMMA] = ACTIONS(282),
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_RPAREN] = ACTIONS(284),
    [anon_sym_PIPE_PIPE] = ACTIONS(106),
    [anon_sym_AMP_AMP] = ACTIONS(108),
    [anon_sym_EQ_GT] = ACTIONS(286),
    [sym__times_operator] = ACTIONS(116),
    [sym__plus_operator] = ACTIONS(118),
    [sym__arrow_operator] = ACTIONS(288),
    [sym__assign_operator] = ACTIONS(290),
    [sym_comment] = ACTIONS(24),
  },
  [56] = {
    [sym_argument_list] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(292),
    [anon_sym_end] = ACTIONS(294),
    [anon_sym_LPAREN] = ACTIONS(294),
    [anon_sym_PIPE_PIPE] = ACTIONS(294),
    [anon_sym_AMP_AMP] = ACTIONS(294),
    [anon_sym_EQ_GT] = ACTIONS(294),
    [anon_sym_elseif] = ACTIONS(294),
    [anon_sym_else] = ACTIONS(294),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(62),
    [sym__arrow_operator] = ACTIONS(294),
    [sym__assign_operator] = ACTIONS(294),
    [anon_sym_LF] = ACTIONS(292),
    [anon_sym_SEMI] = ACTIONS(294),
    [sym_comment] = ACTIONS(72),
  },
  [57] = {
    [sym_argument_list] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(292),
    [anon_sym_end] = ACTIONS(294),
    [anon_sym_LPAREN] = ACTIONS(294),
    [anon_sym_PIPE_PIPE] = ACTIONS(54),
    [anon_sym_AMP_AMP] = ACTIONS(294),
    [anon_sym_EQ_GT] = ACTIONS(294),
    [anon_sym_elseif] = ACTIONS(294),
    [anon_sym_else] = ACTIONS(294),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(62),
    [sym__arrow_operator] = ACTIONS(294),
    [sym__assign_operator] = ACTIONS(294),
    [anon_sym_LF] = ACTIONS(292),
    [anon_sym_SEMI] = ACTIONS(294),
    [sym_comment] = ACTIONS(72),
  },
  [58] = {
    [sym_argument_list] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(296),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_PIPE_PIPE] = ACTIONS(54),
    [anon_sym_AMP_AMP] = ACTIONS(56),
    [anon_sym_EQ_GT] = ACTIONS(58),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(62),
    [sym__arrow_operator] = ACTIONS(64),
    [sym__assign_operator] = ACTIONS(66),
    [anon_sym_LF] = ACTIONS(296),
    [anon_sym_SEMI] = ACTIONS(298),
    [sym_comment] = ACTIONS(72),
  },
  [59] = {
    [sym_argument_list] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(292),
    [anon_sym_end] = ACTIONS(294),
    [anon_sym_LPAREN] = ACTIONS(294),
    [anon_sym_PIPE_PIPE] = ACTIONS(294),
    [anon_sym_AMP_AMP] = ACTIONS(294),
    [anon_sym_EQ_GT] = ACTIONS(294),
    [anon_sym_elseif] = ACTIONS(294),
    [anon_sym_else] = ACTIONS(294),
    [sym__times_operator] = ACTIONS(294),
    [sym__plus_operator] = ACTIONS(294),
    [sym__arrow_operator] = ACTIONS(294),
    [sym__assign_operator] = ACTIONS(294),
    [anon_sym_LF] = ACTIONS(292),
    [anon_sym_SEMI] = ACTIONS(294),
    [sym_comment] = ACTIONS(72),
  },
  [60] = {
    [sym_argument_list] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(292),
    [anon_sym_end] = ACTIONS(294),
    [anon_sym_LPAREN] = ACTIONS(294),
    [anon_sym_PIPE_PIPE] = ACTIONS(294),
    [anon_sym_AMP_AMP] = ACTIONS(294),
    [anon_sym_EQ_GT] = ACTIONS(294),
    [anon_sym_elseif] = ACTIONS(294),
    [anon_sym_else] = ACTIONS(294),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(294),
    [sym__arrow_operator] = ACTIONS(294),
    [sym__assign_operator] = ACTIONS(294),
    [anon_sym_LF] = ACTIONS(292),
    [anon_sym_SEMI] = ACTIONS(294),
    [sym_comment] = ACTIONS(72),
  },
  [61] = {
    [sym_argument_list] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(292),
    [anon_sym_LPAREN] = ACTIONS(294),
    [anon_sym_PIPE_PIPE] = ACTIONS(54),
    [anon_sym_AMP_AMP] = ACTIONS(56),
    [anon_sym_EQ_GT] = ACTIONS(294),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(62),
    [sym__arrow_operator] = ACTIONS(64),
    [sym__assign_operator] = ACTIONS(294),
    [anon_sym_LF] = ACTIONS(292),
    [anon_sym_SEMI] = ACTIONS(294),
    [sym_comment] = ACTIONS(72),
  },
  [62] = {
    [sym_argument_list] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(300),
    [anon_sym_LPAREN] = ACTIONS(302),
    [anon_sym_PIPE_PIPE] = ACTIONS(54),
    [anon_sym_AMP_AMP] = ACTIONS(56),
    [anon_sym_EQ_GT] = ACTIONS(302),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(62),
    [sym__arrow_operator] = ACTIONS(64),
    [sym__assign_operator] = ACTIONS(66),
    [anon_sym_LF] = ACTIONS(300),
    [anon_sym_SEMI] = ACTIONS(302),
    [sym_comment] = ACTIONS(72),
  },
  [63] = {
    [sym_argument_list] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(304),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_PIPE_PIPE] = ACTIONS(54),
    [anon_sym_AMP_AMP] = ACTIONS(56),
    [anon_sym_EQ_GT] = ACTIONS(58),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(62),
    [sym__arrow_operator] = ACTIONS(64),
    [sym__assign_operator] = ACTIONS(66),
    [anon_sym_LF] = ACTIONS(304),
    [anon_sym_SEMI] = ACTIONS(306),
    [sym_comment] = ACTIONS(72),
  },
  [64] = {
    [sym__expression] = STATE(63),
    [sym_module_expression] = STATE(63),
    [sym_struct_definition] = STATE(63),
    [sym_function_expression] = STATE(63),
    [sym_call_expression] = STATE(63),
    [sym_assignment_expression] = STATE(63),
    [sym_binary_expression] = STATE(63),
    [sym_pair_expression] = STATE(63),
    [sym_conditional_expression] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(308),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(160),
    [sym_number] = ACTIONS(162),
    [sym_string] = ACTIONS(162),
    [sym_comment] = ACTIONS(24),
  },
  [65] = {
    [aux_sym__expression_list_repeat1] = STATE(65),
    [ts_builtin_sym_end] = ACTIONS(304),
    [anon_sym_LF] = ACTIONS(310),
    [anon_sym_SEMI] = ACTIONS(313),
    [sym_comment] = ACTIONS(72),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(316),
    [anon_sym_end] = ACTIONS(318),
    [anon_sym_LPAREN] = ACTIONS(318),
    [anon_sym_PIPE_PIPE] = ACTIONS(318),
    [anon_sym_AMP_AMP] = ACTIONS(318),
    [anon_sym_EQ_GT] = ACTIONS(318),
    [anon_sym_elseif] = ACTIONS(318),
    [anon_sym_else] = ACTIONS(318),
    [sym__times_operator] = ACTIONS(318),
    [sym__plus_operator] = ACTIONS(318),
    [sym__arrow_operator] = ACTIONS(318),
    [sym__assign_operator] = ACTIONS(318),
    [anon_sym_LF] = ACTIONS(316),
    [anon_sym_SEMI] = ACTIONS(318),
    [sym_comment] = ACTIONS(72),
  },
  [67] = {
    [sym__expression] = STATE(116),
    [sym_module_expression] = STATE(116),
    [sym_struct_definition] = STATE(116),
    [sym_function_expression] = STATE(116),
    [sym_call_expression] = STATE(116),
    [sym_assignment_expression] = STATE(116),
    [sym_binary_expression] = STATE(116),
    [sym_pair_expression] = STATE(116),
    [sym_conditional_expression] = STATE(116),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(320),
    [sym_number] = ACTIONS(322),
    [sym_string] = ACTIONS(322),
    [sym_comment] = ACTIONS(24),
  },
  [68] = {
    [sym__expression] = STATE(117),
    [sym_module_expression] = STATE(117),
    [sym_struct_definition] = STATE(117),
    [sym_function_expression] = STATE(117),
    [sym_call_expression] = STATE(117),
    [sym_assignment_expression] = STATE(117),
    [sym_binary_expression] = STATE(117),
    [sym_pair_expression] = STATE(117),
    [sym_conditional_expression] = STATE(117),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(324),
    [sym_number] = ACTIONS(326),
    [sym_string] = ACTIONS(326),
    [sym_comment] = ACTIONS(24),
  },
  [69] = {
    [sym__expression] = STATE(118),
    [sym_module_expression] = STATE(118),
    [sym_struct_definition] = STATE(118),
    [sym_function_expression] = STATE(118),
    [sym_call_expression] = STATE(118),
    [sym_assignment_expression] = STATE(118),
    [sym_binary_expression] = STATE(118),
    [sym_pair_expression] = STATE(118),
    [sym_conditional_expression] = STATE(118),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(328),
    [sym_number] = ACTIONS(330),
    [sym_string] = ACTIONS(330),
    [sym_comment] = ACTIONS(24),
  },
  [70] = {
    [sym__expression] = STATE(120),
    [sym_module_expression] = STATE(120),
    [sym_struct_definition] = STATE(120),
    [sym_function_expression] = STATE(120),
    [sym_call_expression] = STATE(120),
    [sym_assignment_expression] = STATE(120),
    [sym_binary_expression] = STATE(120),
    [sym_pair_expression] = STATE(120),
    [sym_conditional_expression] = STATE(120),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(332),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(334),
    [sym_number] = ACTIONS(336),
    [sym_string] = ACTIONS(336),
    [sym_comment] = ACTIONS(24),
  },
  [71] = {
    [aux_sym__expression_list_repeat1] = STATE(122),
    [anon_sym_end] = ACTIONS(332),
    [anon_sym_LF] = ACTIONS(338),
    [anon_sym_SEMI] = ACTIONS(340),
    [sym_comment] = ACTIONS(72),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(342),
    [anon_sym_end] = ACTIONS(344),
    [anon_sym_LPAREN] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(344),
    [anon_sym_AMP_AMP] = ACTIONS(344),
    [anon_sym_EQ_GT] = ACTIONS(344),
    [anon_sym_elseif] = ACTIONS(344),
    [anon_sym_else] = ACTIONS(344),
    [sym__times_operator] = ACTIONS(344),
    [sym__plus_operator] = ACTIONS(344),
    [sym__arrow_operator] = ACTIONS(344),
    [sym__assign_operator] = ACTIONS(344),
    [anon_sym_LF] = ACTIONS(342),
    [anon_sym_SEMI] = ACTIONS(344),
    [sym_comment] = ACTIONS(72),
  },
  [73] = {
    [sym_parameterized_identifier] = STATE(77),
    [aux_sym_struct_definition_repeat1] = STATE(124),
    [anon_sym_end] = ACTIONS(346),
    [sym_identifier] = ACTIONS(200),
    [sym_comment] = ACTIONS(24),
  },
  [74] = {
    [anon_sym_COLON_COLON] = ACTIONS(84),
    [anon_sym_LT_COLON] = ACTIONS(84),
    [anon_sym_LBRACE] = ACTIONS(348),
    [anon_sym_COMMA] = ACTIONS(84),
    [anon_sym_RBRACE] = ACTIONS(84),
    [sym_comment] = ACTIONS(24),
  },
  [75] = {
    [aux_sym_parameterized_identifier_repeat1] = STATE(128),
    [anon_sym_COMMA] = ACTIONS(350),
    [anon_sym_RBRACE] = ACTIONS(352),
    [sym_comment] = ACTIONS(24),
  },
  [76] = {
    [anon_sym_COLON_COLON] = ACTIONS(354),
    [anon_sym_LT_COLON] = ACTIONS(354),
    [anon_sym_COMMA] = ACTIONS(356),
    [anon_sym_RBRACE] = ACTIONS(356),
    [sym_comment] = ACTIONS(24),
  },
  [77] = {
    [anon_sym_LF] = ACTIONS(358),
    [anon_sym_SEMI] = ACTIONS(360),
    [sym_comment] = ACTIONS(72),
  },
  [78] = {
    [sym_parameterized_identifier] = STATE(77),
    [aux_sym_struct_definition_repeat1] = STATE(131),
    [anon_sym_end] = ACTIONS(346),
    [sym_identifier] = ACTIONS(200),
    [sym_comment] = ACTIONS(24),
  },
  [79] = {
    [anon_sym_module] = ACTIONS(362),
    [anon_sym_end] = ACTIONS(362),
    [anon_sym_mutable] = ACTIONS(362),
    [anon_sym_struct] = ACTIONS(362),
    [anon_sym_function] = ACTIONS(362),
    [anon_sym_if] = ACTIONS(362),
    [sym_identifier] = ACTIONS(362),
    [sym_number] = ACTIONS(364),
    [sym_string] = ACTIONS(364),
    [sym_comment] = ACTIONS(24),
  },
  [80] = {
    [aux_sym_parameter_list_repeat1] = STATE(134),
    [anon_sym_COMMA] = ACTIONS(366),
    [anon_sym_RPAREN] = ACTIONS(368),
    [sym_comment] = ACTIONS(24),
  },
  [81] = {
    [ts_builtin_sym_end] = ACTIONS(370),
    [anon_sym_end] = ACTIONS(372),
    [anon_sym_LPAREN] = ACTIONS(372),
    [anon_sym_PIPE_PIPE] = ACTIONS(372),
    [anon_sym_AMP_AMP] = ACTIONS(372),
    [anon_sym_EQ_GT] = ACTIONS(372),
    [anon_sym_elseif] = ACTIONS(372),
    [anon_sym_else] = ACTIONS(372),
    [sym__times_operator] = ACTIONS(372),
    [sym__plus_operator] = ACTIONS(372),
    [sym__arrow_operator] = ACTIONS(372),
    [sym__assign_operator] = ACTIONS(372),
    [anon_sym_LF] = ACTIONS(370),
    [anon_sym_SEMI] = ACTIONS(372),
    [sym_comment] = ACTIONS(72),
  },
  [82] = {
    [sym_argument_list] = STATE(29),
    [aux_sym__expression_list_repeat1] = STATE(137),
    [anon_sym_end] = ACTIONS(374),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_PIPE_PIPE] = ACTIONS(54),
    [anon_sym_AMP_AMP] = ACTIONS(56),
    [anon_sym_EQ_GT] = ACTIONS(178),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(62),
    [sym__arrow_operator] = ACTIONS(180),
    [sym__assign_operator] = ACTIONS(182),
    [anon_sym_LF] = ACTIONS(376),
    [anon_sym_SEMI] = ACTIONS(378),
    [sym_comment] = ACTIONS(72),
  },
  [83] = {
    [anon_sym_module] = ACTIONS(174),
    [anon_sym_mutable] = ACTIONS(174),
    [anon_sym_struct] = ACTIONS(174),
    [anon_sym_COMMA] = ACTIONS(172),
    [anon_sym_function] = ACTIONS(174),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_RPAREN] = ACTIONS(172),
    [anon_sym_PIPE_PIPE] = ACTIONS(174),
    [anon_sym_AMP_AMP] = ACTIONS(172),
    [anon_sym_EQ_GT] = ACTIONS(172),
    [anon_sym_if] = ACTIONS(174),
    [sym_identifier] = ACTIONS(174),
    [sym_number] = ACTIONS(172),
    [sym_string] = ACTIONS(172),
    [sym__times_operator] = ACTIONS(174),
    [sym__plus_operator] = ACTIONS(174),
    [sym__arrow_operator] = ACTIONS(172),
    [sym__assign_operator] = ACTIONS(174),
    [sym_comment] = ACTIONS(24),
  },
  [84] = {
    [sym_argument_list] = STATE(29),
    [aux_sym__expression_list_repeat1] = STATE(140),
    [anon_sym_end] = ACTIONS(380),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_PIPE_PIPE] = ACTIONS(54),
    [anon_sym_AMP_AMP] = ACTIONS(56),
    [anon_sym_EQ_GT] = ACTIONS(178),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(62),
    [sym__arrow_operator] = ACTIONS(180),
    [sym__assign_operator] = ACTIONS(182),
    [anon_sym_LF] = ACTIONS(382),
    [anon_sym_SEMI] = ACTIONS(384),
    [sym_comment] = ACTIONS(72),
  },
  [85] = {
    [anon_sym_end] = ACTIONS(386),
    [anon_sym_LF] = ACTIONS(388),
    [anon_sym_SEMI] = ACTIONS(390),
    [sym_comment] = ACTIONS(72),
  },
  [86] = {
    [anon_sym_module] = ACTIONS(198),
    [anon_sym_mutable] = ACTIONS(198),
    [anon_sym_struct] = ACTIONS(198),
    [anon_sym_COMMA] = ACTIONS(196),
    [anon_sym_function] = ACTIONS(198),
    [anon_sym_LPAREN] = ACTIONS(196),
    [anon_sym_RPAREN] = ACTIONS(196),
    [anon_sym_PIPE_PIPE] = ACTIONS(198),
    [anon_sym_AMP_AMP] = ACTIONS(196),
    [anon_sym_EQ_GT] = ACTIONS(196),
    [anon_sym_if] = ACTIONS(198),
    [sym_identifier] = ACTIONS(198),
    [sym_number] = ACTIONS(196),
    [sym_string] = ACTIONS(196),
    [sym__times_operator] = ACTIONS(198),
    [sym__plus_operator] = ACTIONS(198),
    [sym__arrow_operator] = ACTIONS(196),
    [sym__assign_operator] = ACTIONS(198),
    [sym_comment] = ACTIONS(24),
  },
  [87] = {
    [sym_parameterized_identifier] = STATE(77),
    [aux_sym_struct_definition_repeat1] = STATE(143),
    [anon_sym_end] = ACTIONS(386),
    [sym_identifier] = ACTIONS(200),
    [sym_comment] = ACTIONS(24),
  },
  [88] = {
    [sym__expression] = STATE(145),
    [sym_module_expression] = STATE(145),
    [sym_struct_definition] = STATE(145),
    [sym_function_expression] = STATE(145),
    [sym_call_expression] = STATE(145),
    [sym_assignment_expression] = STATE(145),
    [sym_binary_expression] = STATE(145),
    [sym_pair_expression] = STATE(145),
    [sym_conditional_expression] = STATE(145),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(392),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(394),
    [sym_number] = ACTIONS(396),
    [sym_string] = ACTIONS(396),
    [sym_comment] = ACTIONS(24),
  },
  [89] = {
    [sym_argument_list] = STATE(29),
    [sym_elseif_clause] = STATE(150),
    [sym_else_clause] = STATE(148),
    [aux_sym__expression_list_repeat1] = STATE(149),
    [aux_sym_conditional_expression_repeat1] = STATE(150),
    [anon_sym_end] = ACTIONS(398),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_PIPE_PIPE] = ACTIONS(54),
    [anon_sym_AMP_AMP] = ACTIONS(56),
    [anon_sym_EQ_GT] = ACTIONS(264),
    [anon_sym_elseif] = ACTIONS(266),
    [anon_sym_else] = ACTIONS(268),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(62),
    [sym__arrow_operator] = ACTIONS(270),
    [sym__assign_operator] = ACTIONS(272),
    [anon_sym_LF] = ACTIONS(400),
    [anon_sym_SEMI] = ACTIONS(402),
    [sym_comment] = ACTIONS(72),
  },
  [90] = {
    [anon_sym_module] = ACTIONS(280),
    [anon_sym_mutable] = ACTIONS(280),
    [anon_sym_struct] = ACTIONS(280),
    [anon_sym_COMMA] = ACTIONS(278),
    [anon_sym_function] = ACTIONS(280),
    [anon_sym_LPAREN] = ACTIONS(278),
    [anon_sym_RPAREN] = ACTIONS(278),
    [anon_sym_PIPE_PIPE] = ACTIONS(280),
    [anon_sym_AMP_AMP] = ACTIONS(278),
    [anon_sym_EQ_GT] = ACTIONS(278),
    [anon_sym_if] = ACTIONS(280),
    [sym_identifier] = ACTIONS(280),
    [sym_number] = ACTIONS(278),
    [sym_string] = ACTIONS(278),
    [sym__times_operator] = ACTIONS(280),
    [sym__plus_operator] = ACTIONS(280),
    [sym__arrow_operator] = ACTIONS(278),
    [sym__assign_operator] = ACTIONS(280),
    [sym_comment] = ACTIONS(24),
  },
  [91] = {
    [sym_argument_list] = STATE(53),
    [aux_sym_argument_list_repeat1] = STATE(152),
    [anon_sym_COMMA] = ACTIONS(282),
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_RPAREN] = ACTIONS(404),
    [anon_sym_PIPE_PIPE] = ACTIONS(106),
    [anon_sym_AMP_AMP] = ACTIONS(108),
    [anon_sym_EQ_GT] = ACTIONS(286),
    [sym__times_operator] = ACTIONS(116),
    [sym__plus_operator] = ACTIONS(118),
    [sym__arrow_operator] = ACTIONS(288),
    [sym__assign_operator] = ACTIONS(290),
    [sym_comment] = ACTIONS(24),
  },
  [92] = {
    [sym_argument_list] = STATE(53),
    [anon_sym_module] = ACTIONS(294),
    [anon_sym_mutable] = ACTIONS(294),
    [anon_sym_struct] = ACTIONS(294),
    [anon_sym_COMMA] = ACTIONS(292),
    [anon_sym_function] = ACTIONS(294),
    [anon_sym_LPAREN] = ACTIONS(292),
    [anon_sym_RPAREN] = ACTIONS(292),
    [anon_sym_PIPE_PIPE] = ACTIONS(294),
    [anon_sym_AMP_AMP] = ACTIONS(292),
    [anon_sym_EQ_GT] = ACTIONS(292),
    [anon_sym_if] = ACTIONS(294),
    [sym_identifier] = ACTIONS(294),
    [sym_number] = ACTIONS(292),
    [sym_string] = ACTIONS(292),
    [sym__times_operator] = ACTIONS(116),
    [sym__plus_operator] = ACTIONS(118),
    [sym__arrow_operator] = ACTIONS(292),
    [sym__assign_operator] = ACTIONS(294),
    [sym_comment] = ACTIONS(24),
  },
  [93] = {
    [sym_argument_list] = STATE(53),
    [anon_sym_module] = ACTIONS(294),
    [anon_sym_mutable] = ACTIONS(294),
    [anon_sym_struct] = ACTIONS(294),
    [anon_sym_COMMA] = ACTIONS(292),
    [anon_sym_function] = ACTIONS(294),
    [anon_sym_LPAREN] = ACTIONS(292),
    [anon_sym_RPAREN] = ACTIONS(292),
    [anon_sym_PIPE_PIPE] = ACTIONS(106),
    [anon_sym_AMP_AMP] = ACTIONS(292),
    [anon_sym_EQ_GT] = ACTIONS(292),
    [anon_sym_if] = ACTIONS(294),
    [sym_identifier] = ACTIONS(294),
    [sym_number] = ACTIONS(292),
    [sym_string] = ACTIONS(292),
    [sym__times_operator] = ACTIONS(116),
    [sym__plus_operator] = ACTIONS(118),
    [sym__arrow_operator] = ACTIONS(292),
    [sym__assign_operator] = ACTIONS(294),
    [sym_comment] = ACTIONS(24),
  },
  [94] = {
    [sym_argument_list] = STATE(53),
    [anon_sym_module] = ACTIONS(298),
    [anon_sym_mutable] = ACTIONS(298),
    [anon_sym_struct] = ACTIONS(298),
    [anon_sym_function] = ACTIONS(298),
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_PIPE_PIPE] = ACTIONS(106),
    [anon_sym_AMP_AMP] = ACTIONS(108),
    [anon_sym_EQ_GT] = ACTIONS(110),
    [anon_sym_if] = ACTIONS(298),
    [sym_identifier] = ACTIONS(298),
    [sym_number] = ACTIONS(296),
    [sym_string] = ACTIONS(296),
    [sym__times_operator] = ACTIONS(116),
    [sym__plus_operator] = ACTIONS(118),
    [sym__arrow_operator] = ACTIONS(120),
    [sym__assign_operator] = ACTIONS(122),
    [sym_comment] = ACTIONS(24),
  },
  [95] = {
    [sym_argument_list] = STATE(53),
    [anon_sym_module] = ACTIONS(294),
    [anon_sym_mutable] = ACTIONS(294),
    [anon_sym_struct] = ACTIONS(294),
    [anon_sym_COMMA] = ACTIONS(292),
    [anon_sym_function] = ACTIONS(294),
    [anon_sym_LPAREN] = ACTIONS(292),
    [anon_sym_RPAREN] = ACTIONS(292),
    [anon_sym_PIPE_PIPE] = ACTIONS(294),
    [anon_sym_AMP_AMP] = ACTIONS(292),
    [anon_sym_EQ_GT] = ACTIONS(292),
    [anon_sym_if] = ACTIONS(294),
    [sym_identifier] = ACTIONS(294),
    [sym_number] = ACTIONS(292),
    [sym_string] = ACTIONS(292),
    [sym__times_operator] = ACTIONS(294),
    [sym__plus_operator] = ACTIONS(294),
    [sym__arrow_operator] = ACTIONS(292),
    [sym__assign_operator] = ACTIONS(294),
    [sym_comment] = ACTIONS(24),
  },
  [96] = {
    [sym_argument_list] = STATE(53),
    [anon_sym_module] = ACTIONS(294),
    [anon_sym_mutable] = ACTIONS(294),
    [anon_sym_struct] = ACTIONS(294),
    [anon_sym_COMMA] = ACTIONS(292),
    [anon_sym_function] = ACTIONS(294),
    [anon_sym_LPAREN] = ACTIONS(292),
    [anon_sym_RPAREN] = ACTIONS(292),
    [anon_sym_PIPE_PIPE] = ACTIONS(294),
    [anon_sym_AMP_AMP] = ACTIONS(292),
    [anon_sym_EQ_GT] = ACTIONS(292),
    [anon_sym_if] = ACTIONS(294),
    [sym_identifier] = ACTIONS(294),
    [sym_number] = ACTIONS(292),
    [sym_string] = ACTIONS(292),
    [sym__times_operator] = ACTIONS(116),
    [sym__plus_operator] = ACTIONS(294),
    [sym__arrow_operator] = ACTIONS(292),
    [sym__assign_operator] = ACTIONS(294),
    [sym_comment] = ACTIONS(24),
  },
  [97] = {
    [sym_argument_list] = STATE(53),
    [anon_sym_module] = ACTIONS(294),
    [anon_sym_mutable] = ACTIONS(294),
    [anon_sym_struct] = ACTIONS(294),
    [anon_sym_function] = ACTIONS(294),
    [anon_sym_LPAREN] = ACTIONS(292),
    [anon_sym_PIPE_PIPE] = ACTIONS(106),
    [anon_sym_AMP_AMP] = ACTIONS(108),
    [anon_sym_EQ_GT] = ACTIONS(292),
    [anon_sym_if] = ACTIONS(294),
    [sym_identifier] = ACTIONS(294),
    [sym_number] = ACTIONS(292),
    [sym_string] = ACTIONS(292),
    [sym__times_operator] = ACTIONS(116),
    [sym__plus_operator] = ACTIONS(118),
    [sym__arrow_operator] = ACTIONS(120),
    [sym__assign_operator] = ACTIONS(294),
    [sym_comment] = ACTIONS(24),
  },
  [98] = {
    [sym_argument_list] = STATE(53),
    [anon_sym_module] = ACTIONS(302),
    [anon_sym_mutable] = ACTIONS(302),
    [anon_sym_struct] = ACTIONS(302),
    [anon_sym_function] = ACTIONS(302),
    [anon_sym_LPAREN] = ACTIONS(300),
    [anon_sym_PIPE_PIPE] = ACTIONS(106),
    [anon_sym_AMP_AMP] = ACTIONS(108),
    [anon_sym_EQ_GT] = ACTIONS(300),
    [anon_sym_if] = ACTIONS(302),
    [sym_identifier] = ACTIONS(302),
    [sym_number] = ACTIONS(300),
    [sym_string] = ACTIONS(300),
    [sym__times_operator] = ACTIONS(116),
    [sym__plus_operator] = ACTIONS(118),
    [sym__arrow_operator] = ACTIONS(120),
    [sym__assign_operator] = ACTIONS(122),
    [sym_comment] = ACTIONS(24),
  },
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(406),
    [anon_sym_end] = ACTIONS(408),
    [anon_sym_LPAREN] = ACTIONS(408),
    [anon_sym_PIPE_PIPE] = ACTIONS(408),
    [anon_sym_AMP_AMP] = ACTIONS(408),
    [anon_sym_EQ_GT] = ACTIONS(408),
    [anon_sym_elseif] = ACTIONS(408),
    [anon_sym_else] = ACTIONS(408),
    [sym__times_operator] = ACTIONS(408),
    [sym__plus_operator] = ACTIONS(408),
    [sym__arrow_operator] = ACTIONS(408),
    [sym__assign_operator] = ACTIONS(408),
    [anon_sym_LF] = ACTIONS(406),
    [anon_sym_SEMI] = ACTIONS(408),
    [sym_comment] = ACTIONS(72),
  },
  [100] = {
    [sym__expression] = STATE(153),
    [sym_module_expression] = STATE(153),
    [sym_struct_definition] = STATE(153),
    [sym_function_expression] = STATE(153),
    [sym_call_expression] = STATE(153),
    [sym_assignment_expression] = STATE(153),
    [sym_binary_expression] = STATE(153),
    [sym_pair_expression] = STATE(153),
    [sym_conditional_expression] = STATE(153),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(410),
    [sym_number] = ACTIONS(412),
    [sym_string] = ACTIONS(412),
    [sym_comment] = ACTIONS(24),
  },
  [101] = {
    [sym__expression] = STATE(154),
    [sym_module_expression] = STATE(154),
    [sym_struct_definition] = STATE(154),
    [sym_function_expression] = STATE(154),
    [sym_call_expression] = STATE(154),
    [sym_assignment_expression] = STATE(154),
    [sym_binary_expression] = STATE(154),
    [sym_pair_expression] = STATE(154),
    [sym_conditional_expression] = STATE(154),
    [anon_sym_module] = ACTIONS(34),
    [anon_sym_mutable] = ACTIONS(36),
    [anon_sym_struct] = ACTIONS(38),
    [anon_sym_function] = ACTIONS(40),
    [anon_sym_if] = ACTIONS(42),
    [sym_identifier] = ACTIONS(414),
    [sym_number] = ACTIONS(416),
    [sym_string] = ACTIONS(416),
    [sym_comment] = ACTIONS(24),
  },
  [102] = {
    [sym__expression] = STATE(155),
    [sym_module_expression] = STATE(155),
    [sym_struct_definition] = STATE(155),
    [sym_function_expression] = STATE(155),
    [sym_call_expression] = STATE(155),
    [sym_assignment_expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym_pair_expression] = STATE(155),
    [sym_conditional_expression] = STATE(155),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(418),
    [sym_number] = ACTIONS(420),
    [sym_string] = ACTIONS(420),
    [sym_comment] = ACTIONS(24),
  },
  [103] = {
    [sym__expression] = STATE(156),
    [sym_module_expression] = STATE(156),
    [sym_struct_definition] = STATE(156),
    [sym_function_expression] = STATE(156),
    [sym_call_expression] = STATE(156),
    [sym_assignment_expression] = STATE(156),
    [sym_binary_expression] = STATE(156),
    [sym_pair_expression] = STATE(156),
    [sym_conditional_expression] = STATE(156),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(422),
    [sym_number] = ACTIONS(424),
    [sym_string] = ACTIONS(424),
    [sym_comment] = ACTIONS(24),
  },
  [104] = {
    [sym__expression] = STATE(157),
    [sym_module_expression] = STATE(157),
    [sym_struct_definition] = STATE(157),
    [sym_function_expression] = STATE(157),
    [sym_call_expression] = STATE(157),
    [sym_assignment_expression] = STATE(157),
    [sym_binary_expression] = STATE(157),
    [sym_pair_expression] = STATE(157),
    [sym_conditional_expression] = STATE(157),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(426),
    [sym_number] = ACTIONS(428),
    [sym_string] = ACTIONS(428),
    [sym_comment] = ACTIONS(24),
  },
  [105] = {
    [sym__expression] = STATE(159),
    [sym_module_expression] = STATE(159),
    [sym_struct_definition] = STATE(159),
    [sym_function_expression] = STATE(159),
    [sym_call_expression] = STATE(159),
    [sym_assignment_expression] = STATE(159),
    [sym_binary_expression] = STATE(159),
    [sym_pair_expression] = STATE(159),
    [sym_conditional_expression] = STATE(159),
    [sym_elseif_clause] = STATE(161),
    [sym_else_clause] = STATE(160),
    [aux_sym_conditional_expression_repeat1] = STATE(161),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(430),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [anon_sym_elseif] = ACTIONS(266),
    [anon_sym_else] = ACTIONS(268),
    [sym_identifier] = ACTIONS(432),
    [sym_number] = ACTIONS(434),
    [sym_string] = ACTIONS(434),
    [sym_comment] = ACTIONS(24),
  },
  [106] = {
    [anon_sym_end] = ACTIONS(436),
    [sym_comment] = ACTIONS(24),
  },
  [107] = {
    [sym_elseif_clause] = STATE(161),
    [sym_else_clause] = STATE(160),
    [aux_sym__expression_list_repeat1] = STATE(163),
    [aux_sym_conditional_expression_repeat1] = STATE(161),
    [anon_sym_end] = ACTIONS(430),
    [anon_sym_elseif] = ACTIONS(266),
    [anon_sym_else] = ACTIONS(268),
    [anon_sym_LF] = ACTIONS(438),
    [anon_sym_SEMI] = ACTIONS(440),
    [sym_comment] = ACTIONS(72),
  },
  [108] = {
    [sym_elseif_clause] = STATE(164),
    [sym_else_clause] = STATE(160),
    [aux_sym_conditional_expression_repeat1] = STATE(164),
    [anon_sym_end] = ACTIONS(436),
    [anon_sym_elseif] = ACTIONS(442),
    [anon_sym_else] = ACTIONS(268),
    [sym_comment] = ACTIONS(24),
  },
  [109] = {
    [sym__expression] = STATE(165),
    [sym_module_expression] = STATE(165),
    [sym_struct_definition] = STATE(165),
    [sym_function_expression] = STATE(165),
    [sym_call_expression] = STATE(165),
    [sym_assignment_expression] = STATE(165),
    [sym_binary_expression] = STATE(165),
    [sym_pair_expression] = STATE(165),
    [sym_conditional_expression] = STATE(165),
    [anon_sym_module] = ACTIONS(34),
    [anon_sym_mutable] = ACTIONS(36),
    [anon_sym_struct] = ACTIONS(38),
    [anon_sym_function] = ACTIONS(40),
    [anon_sym_if] = ACTIONS(42),
    [sym_identifier] = ACTIONS(444),
    [sym_number] = ACTIONS(446),
    [sym_string] = ACTIONS(446),
    [sym_comment] = ACTIONS(24),
  },
  [110] = {
    [ts_builtin_sym_end] = ACTIONS(448),
    [anon_sym_end] = ACTIONS(450),
    [anon_sym_LPAREN] = ACTIONS(450),
    [anon_sym_PIPE_PIPE] = ACTIONS(450),
    [anon_sym_AMP_AMP] = ACTIONS(450),
    [anon_sym_EQ_GT] = ACTIONS(450),
    [anon_sym_elseif] = ACTIONS(450),
    [anon_sym_else] = ACTIONS(450),
    [sym__times_operator] = ACTIONS(450),
    [sym__plus_operator] = ACTIONS(450),
    [sym__arrow_operator] = ACTIONS(450),
    [sym__assign_operator] = ACTIONS(450),
    [anon_sym_LF] = ACTIONS(448),
    [anon_sym_SEMI] = ACTIONS(450),
    [sym_comment] = ACTIONS(72),
  },
  [111] = {
    [sym__expression] = STATE(166),
    [sym_module_expression] = STATE(166),
    [sym_struct_definition] = STATE(166),
    [sym_function_expression] = STATE(166),
    [sym_call_expression] = STATE(166),
    [sym_assignment_expression] = STATE(166),
    [sym_binary_expression] = STATE(166),
    [sym_pair_expression] = STATE(166),
    [sym_conditional_expression] = STATE(166),
    [anon_sym_module] = ACTIONS(34),
    [anon_sym_mutable] = ACTIONS(36),
    [anon_sym_struct] = ACTIONS(38),
    [anon_sym_function] = ACTIONS(40),
    [anon_sym_if] = ACTIONS(42),
    [sym_identifier] = ACTIONS(452),
    [sym_number] = ACTIONS(454),
    [sym_string] = ACTIONS(454),
    [sym_comment] = ACTIONS(24),
  },
  [112] = {
    [sym__expression] = STATE(167),
    [sym_module_expression] = STATE(167),
    [sym_struct_definition] = STATE(167),
    [sym_function_expression] = STATE(167),
    [sym_call_expression] = STATE(167),
    [sym_assignment_expression] = STATE(167),
    [sym_binary_expression] = STATE(167),
    [sym_pair_expression] = STATE(167),
    [sym_conditional_expression] = STATE(167),
    [anon_sym_module] = ACTIONS(34),
    [anon_sym_mutable] = ACTIONS(36),
    [anon_sym_struct] = ACTIONS(38),
    [anon_sym_function] = ACTIONS(40),
    [anon_sym_if] = ACTIONS(42),
    [sym_identifier] = ACTIONS(456),
    [sym_number] = ACTIONS(458),
    [sym_string] = ACTIONS(458),
    [sym_comment] = ACTIONS(24),
  },
  [113] = {
    [sym__expression] = STATE(168),
    [sym_module_expression] = STATE(168),
    [sym_struct_definition] = STATE(168),
    [sym_function_expression] = STATE(168),
    [sym_call_expression] = STATE(168),
    [sym_assignment_expression] = STATE(168),
    [sym_binary_expression] = STATE(168),
    [sym_pair_expression] = STATE(168),
    [sym_conditional_expression] = STATE(168),
    [anon_sym_module] = ACTIONS(34),
    [anon_sym_mutable] = ACTIONS(36),
    [anon_sym_struct] = ACTIONS(38),
    [anon_sym_function] = ACTIONS(40),
    [anon_sym_if] = ACTIONS(42),
    [sym_identifier] = ACTIONS(460),
    [sym_number] = ACTIONS(462),
    [sym_string] = ACTIONS(462),
    [sym_comment] = ACTIONS(24),
  },
  [114] = {
    [aux_sym_argument_list_repeat1] = STATE(170),
    [anon_sym_COMMA] = ACTIONS(282),
    [anon_sym_RPAREN] = ACTIONS(464),
    [sym_comment] = ACTIONS(24),
  },
  [115] = {
    [sym__expression] = STATE(63),
    [sym_module_expression] = STATE(63),
    [sym_struct_definition] = STATE(63),
    [sym_function_expression] = STATE(63),
    [sym_call_expression] = STATE(63),
    [sym_assignment_expression] = STATE(63),
    [sym_binary_expression] = STATE(63),
    [sym_pair_expression] = STATE(63),
    [sym_conditional_expression] = STATE(63),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(160),
    [sym_number] = ACTIONS(162),
    [sym_string] = ACTIONS(162),
    [sym_comment] = ACTIONS(24),
  },
  [116] = {
    [sym_argument_list] = STATE(29),
    [anon_sym_end] = ACTIONS(298),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_PIPE_PIPE] = ACTIONS(54),
    [anon_sym_AMP_AMP] = ACTIONS(56),
    [anon_sym_EQ_GT] = ACTIONS(178),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(62),
    [sym__arrow_operator] = ACTIONS(180),
    [sym__assign_operator] = ACTIONS(182),
    [anon_sym_LF] = ACTIONS(296),
    [anon_sym_SEMI] = ACTIONS(298),
    [sym_comment] = ACTIONS(72),
  },
  [117] = {
    [sym_argument_list] = STATE(29),
    [anon_sym_end] = ACTIONS(294),
    [anon_sym_LPAREN] = ACTIONS(294),
    [anon_sym_PIPE_PIPE] = ACTIONS(54),
    [anon_sym_AMP_AMP] = ACTIONS(56),
    [anon_sym_EQ_GT] = ACTIONS(294),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(62),
    [sym__arrow_operator] = ACTIONS(180),
    [sym__assign_operator] = ACTIONS(294),
    [anon_sym_LF] = ACTIONS(292),
    [anon_sym_SEMI] = ACTIONS(294),
    [sym_comment] = ACTIONS(72),
  },
  [118] = {
    [sym_argument_list] = STATE(29),
    [anon_sym_end] = ACTIONS(302),
    [anon_sym_LPAREN] = ACTIONS(302),
    [anon_sym_PIPE_PIPE] = ACTIONS(54),
    [anon_sym_AMP_AMP] = ACTIONS(56),
    [anon_sym_EQ_GT] = ACTIONS(302),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(62),
    [sym__arrow_operator] = ACTIONS(180),
    [sym__assign_operator] = ACTIONS(182),
    [anon_sym_LF] = ACTIONS(300),
    [anon_sym_SEMI] = ACTIONS(302),
    [sym_comment] = ACTIONS(72),
  },
  [119] = {
    [ts_builtin_sym_end] = ACTIONS(466),
    [anon_sym_end] = ACTIONS(468),
    [anon_sym_LPAREN] = ACTIONS(468),
    [anon_sym_PIPE_PIPE] = ACTIONS(468),
    [anon_sym_AMP_AMP] = ACTIONS(468),
    [anon_sym_EQ_GT] = ACTIONS(468),
    [anon_sym_elseif] = ACTIONS(468),
    [anon_sym_else] = ACTIONS(468),
    [sym__times_operator] = ACTIONS(468),
    [sym__plus_operator] = ACTIONS(468),
    [sym__arrow_operator] = ACTIONS(468),
    [sym__assign_operator] = ACTIONS(468),
    [anon_sym_LF] = ACTIONS(466),
    [anon_sym_SEMI] = ACTIONS(468),
    [sym_comment] = ACTIONS(72),
  },
  [120] = {
    [sym_argument_list] = STATE(29),
    [anon_sym_end] = ACTIONS(306),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_PIPE_PIPE] = ACTIONS(54),
    [anon_sym_AMP_AMP] = ACTIONS(56),
    [anon_sym_EQ_GT] = ACTIONS(178),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(62),
    [sym__arrow_operator] = ACTIONS(180),
    [sym__assign_operator] = ACTIONS(182),
    [anon_sym_LF] = ACTIONS(304),
    [anon_sym_SEMI] = ACTIONS(306),
    [sym_comment] = ACTIONS(72),
  },
  [121] = {
    [sym__expression] = STATE(120),
    [sym_module_expression] = STATE(120),
    [sym_struct_definition] = STATE(120),
    [sym_function_expression] = STATE(120),
    [sym_call_expression] = STATE(120),
    [sym_assignment_expression] = STATE(120),
    [sym_binary_expression] = STATE(120),
    [sym_pair_expression] = STATE(120),
    [sym_conditional_expression] = STATE(120),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(470),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(334),
    [sym_number] = ACTIONS(336),
    [sym_string] = ACTIONS(336),
    [sym_comment] = ACTIONS(24),
  },
  [122] = {
    [aux_sym__expression_list_repeat1] = STATE(122),
    [anon_sym_end] = ACTIONS(306),
    [anon_sym_LF] = ACTIONS(472),
    [anon_sym_SEMI] = ACTIONS(475),
    [sym_comment] = ACTIONS(72),
  },
  [123] = {
    [ts_builtin_sym_end] = ACTIONS(478),
    [anon_sym_end] = ACTIONS(480),
    [anon_sym_LPAREN] = ACTIONS(480),
    [anon_sym_PIPE_PIPE] = ACTIONS(480),
    [anon_sym_AMP_AMP] = ACTIONS(480),
    [anon_sym_EQ_GT] = ACTIONS(480),
    [anon_sym_elseif] = ACTIONS(480),
    [anon_sym_else] = ACTIONS(480),
    [sym__times_operator] = ACTIONS(480),
    [sym__plus_operator] = ACTIONS(480),
    [sym__arrow_operator] = ACTIONS(480),
    [sym__assign_operator] = ACTIONS(480),
    [anon_sym_LF] = ACTIONS(478),
    [anon_sym_SEMI] = ACTIONS(480),
    [sym_comment] = ACTIONS(72),
  },
  [124] = {
    [sym_parameterized_identifier] = STATE(77),
    [aux_sym_struct_definition_repeat1] = STATE(131),
    [anon_sym_end] = ACTIONS(482),
    [sym_identifier] = ACTIONS(200),
    [sym_comment] = ACTIONS(24),
  },
  [125] = {
    [sym_typed_identifier] = STATE(174),
    [sym_parameterized_identifier] = STATE(76),
    [sym_identifier] = ACTIONS(194),
    [sym_comment] = ACTIONS(24),
  },
  [126] = {
    [sym_typed_identifier] = STATE(175),
    [sym_parameterized_identifier] = STATE(76),
    [sym_identifier] = ACTIONS(194),
    [sym_comment] = ACTIONS(24),
  },
  [127] = {
    [anon_sym_end] = ACTIONS(484),
    [anon_sym_LF] = ACTIONS(486),
    [anon_sym_SEMI] = ACTIONS(484),
    [sym_comment] = ACTIONS(72),
  },
  [128] = {
    [aux_sym_parameterized_identifier_repeat1] = STATE(177),
    [anon_sym_COMMA] = ACTIONS(350),
    [anon_sym_RBRACE] = ACTIONS(488),
    [sym_comment] = ACTIONS(24),
  },
  [129] = {
    [sym_parameterized_identifier] = STATE(178),
    [sym_identifier] = ACTIONS(194),
    [sym_comment] = ACTIONS(24),
  },
  [130] = {
    [anon_sym_end] = ACTIONS(490),
    [sym_identifier] = ACTIONS(490),
    [sym_comment] = ACTIONS(24),
  },
  [131] = {
    [sym_parameterized_identifier] = STATE(77),
    [aux_sym_struct_definition_repeat1] = STATE(131),
    [anon_sym_end] = ACTIONS(490),
    [sym_identifier] = ACTIONS(492),
    [sym_comment] = ACTIONS(24),
  },
  [132] = {
    [sym_identifier] = ACTIONS(495),
    [sym_comment] = ACTIONS(24),
  },
  [133] = {
    [anon_sym_module] = ACTIONS(497),
    [anon_sym_end] = ACTIONS(497),
    [anon_sym_mutable] = ACTIONS(497),
    [anon_sym_struct] = ACTIONS(497),
    [anon_sym_function] = ACTIONS(497),
    [anon_sym_if] = ACTIONS(497),
    [sym_identifier] = ACTIONS(497),
    [sym_number] = ACTIONS(499),
    [sym_string] = ACTIONS(499),
    [sym_comment] = ACTIONS(24),
  },
  [134] = {
    [aux_sym_parameter_list_repeat1] = STATE(181),
    [anon_sym_COMMA] = ACTIONS(366),
    [anon_sym_RPAREN] = ACTIONS(501),
    [sym_comment] = ACTIONS(24),
  },
  [135] = {
    [ts_builtin_sym_end] = ACTIONS(503),
    [anon_sym_end] = ACTIONS(505),
    [anon_sym_LPAREN] = ACTIONS(505),
    [anon_sym_PIPE_PIPE] = ACTIONS(505),
    [anon_sym_AMP_AMP] = ACTIONS(505),
    [anon_sym_EQ_GT] = ACTIONS(505),
    [anon_sym_elseif] = ACTIONS(505),
    [anon_sym_else] = ACTIONS(505),
    [sym__times_operator] = ACTIONS(505),
    [sym__plus_operator] = ACTIONS(505),
    [sym__arrow_operator] = ACTIONS(505),
    [sym__assign_operator] = ACTIONS(505),
    [anon_sym_LF] = ACTIONS(503),
    [anon_sym_SEMI] = ACTIONS(505),
    [sym_comment] = ACTIONS(72),
  },
  [136] = {
    [sym__expression] = STATE(120),
    [sym_module_expression] = STATE(120),
    [sym_struct_definition] = STATE(120),
    [sym_function_expression] = STATE(120),
    [sym_call_expression] = STATE(120),
    [sym_assignment_expression] = STATE(120),
    [sym_binary_expression] = STATE(120),
    [sym_pair_expression] = STATE(120),
    [sym_conditional_expression] = STATE(120),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(507),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(334),
    [sym_number] = ACTIONS(336),
    [sym_string] = ACTIONS(336),
    [sym_comment] = ACTIONS(24),
  },
  [137] = {
    [aux_sym__expression_list_repeat1] = STATE(122),
    [anon_sym_end] = ACTIONS(507),
    [anon_sym_LF] = ACTIONS(509),
    [anon_sym_SEMI] = ACTIONS(511),
    [sym_comment] = ACTIONS(72),
  },
  [138] = {
    [anon_sym_module] = ACTIONS(318),
    [anon_sym_mutable] = ACTIONS(318),
    [anon_sym_struct] = ACTIONS(318),
    [anon_sym_COMMA] = ACTIONS(316),
    [anon_sym_function] = ACTIONS(318),
    [anon_sym_LPAREN] = ACTIONS(316),
    [anon_sym_RPAREN] = ACTIONS(316),
    [anon_sym_PIPE_PIPE] = ACTIONS(318),
    [anon_sym_AMP_AMP] = ACTIONS(316),
    [anon_sym_EQ_GT] = ACTIONS(316),
    [anon_sym_if] = ACTIONS(318),
    [sym_identifier] = ACTIONS(318),
    [sym_number] = ACTIONS(316),
    [sym_string] = ACTIONS(316),
    [sym__times_operator] = ACTIONS(318),
    [sym__plus_operator] = ACTIONS(318),
    [sym__arrow_operator] = ACTIONS(316),
    [sym__assign_operator] = ACTIONS(318),
    [sym_comment] = ACTIONS(24),
  },
  [139] = {
    [sym__expression] = STATE(120),
    [sym_module_expression] = STATE(120),
    [sym_struct_definition] = STATE(120),
    [sym_function_expression] = STATE(120),
    [sym_call_expression] = STATE(120),
    [sym_assignment_expression] = STATE(120),
    [sym_binary_expression] = STATE(120),
    [sym_pair_expression] = STATE(120),
    [sym_conditional_expression] = STATE(120),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(513),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(334),
    [sym_number] = ACTIONS(336),
    [sym_string] = ACTIONS(336),
    [sym_comment] = ACTIONS(24),
  },
  [140] = {
    [aux_sym__expression_list_repeat1] = STATE(122),
    [anon_sym_end] = ACTIONS(513),
    [anon_sym_LF] = ACTIONS(515),
    [anon_sym_SEMI] = ACTIONS(517),
    [sym_comment] = ACTIONS(72),
  },
  [141] = {
    [anon_sym_module] = ACTIONS(344),
    [anon_sym_mutable] = ACTIONS(344),
    [anon_sym_struct] = ACTIONS(344),
    [anon_sym_COMMA] = ACTIONS(342),
    [anon_sym_function] = ACTIONS(344),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_RPAREN] = ACTIONS(342),
    [anon_sym_PIPE_PIPE] = ACTIONS(344),
    [anon_sym_AMP_AMP] = ACTIONS(342),
    [anon_sym_EQ_GT] = ACTIONS(342),
    [anon_sym_if] = ACTIONS(344),
    [sym_identifier] = ACTIONS(344),
    [sym_number] = ACTIONS(342),
    [sym_string] = ACTIONS(342),
    [sym__times_operator] = ACTIONS(344),
    [sym__plus_operator] = ACTIONS(344),
    [sym__arrow_operator] = ACTIONS(342),
    [sym__assign_operator] = ACTIONS(344),
    [sym_comment] = ACTIONS(24),
  },
  [142] = {
    [sym_parameterized_identifier] = STATE(77),
    [aux_sym_struct_definition_repeat1] = STATE(187),
    [anon_sym_end] = ACTIONS(519),
    [sym_identifier] = ACTIONS(200),
    [sym_comment] = ACTIONS(24),
  },
  [143] = {
    [sym_parameterized_identifier] = STATE(77),
    [aux_sym_struct_definition_repeat1] = STATE(131),
    [anon_sym_end] = ACTIONS(519),
    [sym_identifier] = ACTIONS(200),
    [sym_comment] = ACTIONS(24),
  },
  [144] = {
    [anon_sym_module] = ACTIONS(372),
    [anon_sym_mutable] = ACTIONS(372),
    [anon_sym_struct] = ACTIONS(372),
    [anon_sym_COMMA] = ACTIONS(370),
    [anon_sym_function] = ACTIONS(372),
    [anon_sym_LPAREN] = ACTIONS(370),
    [anon_sym_RPAREN] = ACTIONS(370),
    [anon_sym_PIPE_PIPE] = ACTIONS(372),
    [anon_sym_AMP_AMP] = ACTIONS(370),
    [anon_sym_EQ_GT] = ACTIONS(370),
    [anon_sym_if] = ACTIONS(372),
    [sym_identifier] = ACTIONS(372),
    [sym_number] = ACTIONS(370),
    [sym_string] = ACTIONS(370),
    [sym__times_operator] = ACTIONS(372),
    [sym__plus_operator] = ACTIONS(372),
    [sym__arrow_operator] = ACTIONS(370),
    [sym__assign_operator] = ACTIONS(372),
    [sym_comment] = ACTIONS(24),
  },
  [145] = {
    [sym_argument_list] = STATE(29),
    [aux_sym__expression_list_repeat1] = STATE(190),
    [anon_sym_end] = ACTIONS(521),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_PIPE_PIPE] = ACTIONS(54),
    [anon_sym_AMP_AMP] = ACTIONS(56),
    [anon_sym_EQ_GT] = ACTIONS(178),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(62),
    [sym__arrow_operator] = ACTIONS(180),
    [sym__assign_operator] = ACTIONS(182),
    [anon_sym_LF] = ACTIONS(523),
    [anon_sym_SEMI] = ACTIONS(525),
    [sym_comment] = ACTIONS(72),
  },
  [146] = {
    [anon_sym_module] = ACTIONS(408),
    [anon_sym_mutable] = ACTIONS(408),
    [anon_sym_struct] = ACTIONS(408),
    [anon_sym_COMMA] = ACTIONS(406),
    [anon_sym_function] = ACTIONS(408),
    [anon_sym_LPAREN] = ACTIONS(406),
    [anon_sym_RPAREN] = ACTIONS(406),
    [anon_sym_PIPE_PIPE] = ACTIONS(408),
    [anon_sym_AMP_AMP] = ACTIONS(406),
    [anon_sym_EQ_GT] = ACTIONS(406),
    [anon_sym_if] = ACTIONS(408),
    [sym_identifier] = ACTIONS(408),
    [sym_number] = ACTIONS(406),
    [sym_string] = ACTIONS(406),
    [sym__times_operator] = ACTIONS(408),
    [sym__plus_operator] = ACTIONS(408),
    [sym__arrow_operator] = ACTIONS(406),
    [sym__assign_operator] = ACTIONS(408),
    [sym_comment] = ACTIONS(24),
  },
  [147] = {
    [sym__expression] = STATE(159),
    [sym_module_expression] = STATE(159),
    [sym_struct_definition] = STATE(159),
    [sym_function_expression] = STATE(159),
    [sym_call_expression] = STATE(159),
    [sym_assignment_expression] = STATE(159),
    [sym_binary_expression] = STATE(159),
    [sym_pair_expression] = STATE(159),
    [sym_conditional_expression] = STATE(159),
    [sym_elseif_clause] = STATE(193),
    [sym_else_clause] = STATE(192),
    [aux_sym_conditional_expression_repeat1] = STATE(193),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(527),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [anon_sym_elseif] = ACTIONS(266),
    [anon_sym_else] = ACTIONS(268),
    [sym_identifier] = ACTIONS(432),
    [sym_number] = ACTIONS(434),
    [sym_string] = ACTIONS(434),
    [sym_comment] = ACTIONS(24),
  },
  [148] = {
    [anon_sym_end] = ACTIONS(529),
    [sym_comment] = ACTIONS(24),
  },
  [149] = {
    [sym_elseif_clause] = STATE(193),
    [sym_else_clause] = STATE(192),
    [aux_sym__expression_list_repeat1] = STATE(163),
    [aux_sym_conditional_expression_repeat1] = STATE(193),
    [anon_sym_end] = ACTIONS(527),
    [anon_sym_elseif] = ACTIONS(266),
    [anon_sym_else] = ACTIONS(268),
    [anon_sym_LF] = ACTIONS(531),
    [anon_sym_SEMI] = ACTIONS(533),
    [sym_comment] = ACTIONS(72),
  },
  [150] = {
    [sym_elseif_clause] = STATE(164),
    [sym_else_clause] = STATE(192),
    [aux_sym_conditional_expression_repeat1] = STATE(164),
    [anon_sym_end] = ACTIONS(529),
    [anon_sym_elseif] = ACTIONS(442),
    [anon_sym_else] = ACTIONS(268),
    [sym_comment] = ACTIONS(24),
  },
  [151] = {
    [anon_sym_module] = ACTIONS(450),
    [anon_sym_mutable] = ACTIONS(450),
    [anon_sym_struct] = ACTIONS(450),
    [anon_sym_COMMA] = ACTIONS(448),
    [anon_sym_function] = ACTIONS(450),
    [anon_sym_LPAREN] = ACTIONS(448),
    [anon_sym_RPAREN] = ACTIONS(448),
    [anon_sym_PIPE_PIPE] = ACTIONS(450),
    [anon_sym_AMP_AMP] = ACTIONS(448),
    [anon_sym_EQ_GT] = ACTIONS(448),
    [anon_sym_if] = ACTIONS(450),
    [sym_identifier] = ACTIONS(450),
    [sym_number] = ACTIONS(448),
    [sym_string] = ACTIONS(448),
    [sym__times_operator] = ACTIONS(450),
    [sym__plus_operator] = ACTIONS(450),
    [sym__arrow_operator] = ACTIONS(448),
    [sym__assign_operator] = ACTIONS(450),
    [sym_comment] = ACTIONS(24),
  },
  [152] = {
    [aux_sym_argument_list_repeat1] = STATE(170),
    [anon_sym_COMMA] = ACTIONS(282),
    [anon_sym_RPAREN] = ACTIONS(535),
    [sym_comment] = ACTIONS(24),
  },
  [153] = {
    [sym_argument_list] = STATE(29),
    [anon_sym_end] = ACTIONS(298),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_PIPE_PIPE] = ACTIONS(54),
    [anon_sym_AMP_AMP] = ACTIONS(56),
    [anon_sym_EQ_GT] = ACTIONS(264),
    [anon_sym_elseif] = ACTIONS(298),
    [anon_sym_else] = ACTIONS(298),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(62),
    [sym__arrow_operator] = ACTIONS(270),
    [sym__assign_operator] = ACTIONS(272),
    [anon_sym_LF] = ACTIONS(296),
    [anon_sym_SEMI] = ACTIONS(298),
    [sym_comment] = ACTIONS(72),
  },
  [154] = {
    [sym__expression] = STATE(196),
    [sym_module_expression] = STATE(196),
    [sym_struct_definition] = STATE(196),
    [sym_function_expression] = STATE(196),
    [sym_call_expression] = STATE(196),
    [sym_argument_list] = STATE(53),
    [sym_assignment_expression] = STATE(196),
    [sym_binary_expression] = STATE(196),
    [sym_pair_expression] = STATE(196),
    [sym_conditional_expression] = STATE(196),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_PIPE_PIPE] = ACTIONS(106),
    [anon_sym_AMP_AMP] = ACTIONS(108),
    [anon_sym_EQ_GT] = ACTIONS(110),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(537),
    [sym_number] = ACTIONS(539),
    [sym_string] = ACTIONS(539),
    [sym__times_operator] = ACTIONS(116),
    [sym__plus_operator] = ACTIONS(118),
    [sym__arrow_operator] = ACTIONS(120),
    [sym__assign_operator] = ACTIONS(122),
    [sym_comment] = ACTIONS(24),
  },
  [155] = {
    [sym_argument_list] = STATE(29),
    [aux_sym__expression_list_repeat1] = STATE(198),
    [anon_sym_end] = ACTIONS(541),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_PIPE_PIPE] = ACTIONS(54),
    [anon_sym_AMP_AMP] = ACTIONS(56),
    [anon_sym_EQ_GT] = ACTIONS(178),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(62),
    [sym__arrow_operator] = ACTIONS(180),
    [sym__assign_operator] = ACTIONS(182),
    [anon_sym_LF] = ACTIONS(543),
    [anon_sym_SEMI] = ACTIONS(545),
    [sym_comment] = ACTIONS(72),
  },
  [156] = {
    [sym_argument_list] = STATE(29),
    [anon_sym_end] = ACTIONS(294),
    [anon_sym_LPAREN] = ACTIONS(294),
    [anon_sym_PIPE_PIPE] = ACTIONS(54),
    [anon_sym_AMP_AMP] = ACTIONS(56),
    [anon_sym_EQ_GT] = ACTIONS(294),
    [anon_sym_elseif] = ACTIONS(294),
    [anon_sym_else] = ACTIONS(294),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(62),
    [sym__arrow_operator] = ACTIONS(270),
    [sym__assign_operator] = ACTIONS(294),
    [anon_sym_LF] = ACTIONS(292),
    [anon_sym_SEMI] = ACTIONS(294),
    [sym_comment] = ACTIONS(72),
  },
  [157] = {
    [sym_argument_list] = STATE(29),
    [anon_sym_end] = ACTIONS(302),
    [anon_sym_LPAREN] = ACTIONS(302),
    [anon_sym_PIPE_PIPE] = ACTIONS(54),
    [anon_sym_AMP_AMP] = ACTIONS(56),
    [anon_sym_EQ_GT] = ACTIONS(302),
    [anon_sym_elseif] = ACTIONS(302),
    [anon_sym_else] = ACTIONS(302),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(62),
    [sym__arrow_operator] = ACTIONS(270),
    [sym__assign_operator] = ACTIONS(272),
    [anon_sym_LF] = ACTIONS(300),
    [anon_sym_SEMI] = ACTIONS(302),
    [sym_comment] = ACTIONS(72),
  },
  [158] = {
    [ts_builtin_sym_end] = ACTIONS(547),
    [anon_sym_end] = ACTIONS(549),
    [anon_sym_LPAREN] = ACTIONS(549),
    [anon_sym_PIPE_PIPE] = ACTIONS(549),
    [anon_sym_AMP_AMP] = ACTIONS(549),
    [anon_sym_EQ_GT] = ACTIONS(549),
    [anon_sym_elseif] = ACTIONS(549),
    [anon_sym_else] = ACTIONS(549),
    [sym__times_operator] = ACTIONS(549),
    [sym__plus_operator] = ACTIONS(549),
    [sym__arrow_operator] = ACTIONS(549),
    [sym__assign_operator] = ACTIONS(549),
    [anon_sym_LF] = ACTIONS(547),
    [anon_sym_SEMI] = ACTIONS(549),
    [sym_comment] = ACTIONS(72),
  },
  [159] = {
    [sym_argument_list] = STATE(29),
    [anon_sym_end] = ACTIONS(306),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_PIPE_PIPE] = ACTIONS(54),
    [anon_sym_AMP_AMP] = ACTIONS(56),
    [anon_sym_EQ_GT] = ACTIONS(264),
    [anon_sym_elseif] = ACTIONS(306),
    [anon_sym_else] = ACTIONS(306),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(62),
    [sym__arrow_operator] = ACTIONS(270),
    [sym__assign_operator] = ACTIONS(272),
    [anon_sym_LF] = ACTIONS(304),
    [anon_sym_SEMI] = ACTIONS(306),
    [sym_comment] = ACTIONS(72),
  },
  [160] = {
    [anon_sym_end] = ACTIONS(551),
    [sym_comment] = ACTIONS(24),
  },
  [161] = {
    [sym_elseif_clause] = STATE(164),
    [sym_else_clause] = STATE(200),
    [aux_sym_conditional_expression_repeat1] = STATE(164),
    [anon_sym_end] = ACTIONS(551),
    [anon_sym_elseif] = ACTIONS(442),
    [anon_sym_else] = ACTIONS(268),
    [sym_comment] = ACTIONS(24),
  },
  [162] = {
    [sym__expression] = STATE(159),
    [sym_module_expression] = STATE(159),
    [sym_struct_definition] = STATE(159),
    [sym_function_expression] = STATE(159),
    [sym_call_expression] = STATE(159),
    [sym_assignment_expression] = STATE(159),
    [sym_binary_expression] = STATE(159),
    [sym_pair_expression] = STATE(159),
    [sym_conditional_expression] = STATE(159),
    [sym_elseif_clause] = STATE(201),
    [sym_else_clause] = STATE(200),
    [aux_sym_conditional_expression_repeat1] = STATE(201),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(553),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [anon_sym_elseif] = ACTIONS(266),
    [anon_sym_else] = ACTIONS(268),
    [sym_identifier] = ACTIONS(432),
    [sym_number] = ACTIONS(434),
    [sym_string] = ACTIONS(434),
    [sym_comment] = ACTIONS(24),
  },
  [163] = {
    [aux_sym__expression_list_repeat1] = STATE(163),
    [anon_sym_end] = ACTIONS(306),
    [anon_sym_elseif] = ACTIONS(306),
    [anon_sym_else] = ACTIONS(306),
    [anon_sym_LF] = ACTIONS(555),
    [anon_sym_SEMI] = ACTIONS(558),
    [sym_comment] = ACTIONS(72),
  },
  [164] = {
    [sym_elseif_clause] = STATE(164),
    [aux_sym_conditional_expression_repeat1] = STATE(164),
    [anon_sym_end] = ACTIONS(561),
    [anon_sym_elseif] = ACTIONS(563),
    [anon_sym_else] = ACTIONS(566),
    [sym_comment] = ACTIONS(24),
  },
  [165] = {
    [sym_argument_list] = STATE(53),
    [anon_sym_COMMA] = ACTIONS(568),
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_RPAREN] = ACTIONS(568),
    [anon_sym_PIPE_PIPE] = ACTIONS(106),
    [anon_sym_AMP_AMP] = ACTIONS(108),
    [anon_sym_EQ_GT] = ACTIONS(286),
    [sym__times_operator] = ACTIONS(116),
    [sym__plus_operator] = ACTIONS(118),
    [sym__arrow_operator] = ACTIONS(288),
    [sym__assign_operator] = ACTIONS(290),
    [sym_comment] = ACTIONS(24),
  },
  [166] = {
    [sym_argument_list] = STATE(53),
    [anon_sym_COMMA] = ACTIONS(296),
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_RPAREN] = ACTIONS(296),
    [anon_sym_PIPE_PIPE] = ACTIONS(106),
    [anon_sym_AMP_AMP] = ACTIONS(108),
    [anon_sym_EQ_GT] = ACTIONS(286),
    [sym__times_operator] = ACTIONS(116),
    [sym__plus_operator] = ACTIONS(118),
    [sym__arrow_operator] = ACTIONS(288),
    [sym__assign_operator] = ACTIONS(290),
    [sym_comment] = ACTIONS(24),
  },
  [167] = {
    [sym_argument_list] = STATE(53),
    [anon_sym_COMMA] = ACTIONS(292),
    [anon_sym_LPAREN] = ACTIONS(292),
    [anon_sym_RPAREN] = ACTIONS(292),
    [anon_sym_PIPE_PIPE] = ACTIONS(106),
    [anon_sym_AMP_AMP] = ACTIONS(108),
    [anon_sym_EQ_GT] = ACTIONS(292),
    [sym__times_operator] = ACTIONS(116),
    [sym__plus_operator] = ACTIONS(118),
    [sym__arrow_operator] = ACTIONS(288),
    [sym__assign_operator] = ACTIONS(294),
    [sym_comment] = ACTIONS(24),
  },
  [168] = {
    [sym_argument_list] = STATE(53),
    [anon_sym_COMMA] = ACTIONS(300),
    [anon_sym_LPAREN] = ACTIONS(300),
    [anon_sym_RPAREN] = ACTIONS(300),
    [anon_sym_PIPE_PIPE] = ACTIONS(106),
    [anon_sym_AMP_AMP] = ACTIONS(108),
    [anon_sym_EQ_GT] = ACTIONS(300),
    [sym__times_operator] = ACTIONS(116),
    [sym__plus_operator] = ACTIONS(118),
    [sym__arrow_operator] = ACTIONS(288),
    [sym__assign_operator] = ACTIONS(290),
    [sym_comment] = ACTIONS(24),
  },
  [169] = {
    [ts_builtin_sym_end] = ACTIONS(570),
    [anon_sym_end] = ACTIONS(572),
    [anon_sym_LPAREN] = ACTIONS(572),
    [anon_sym_PIPE_PIPE] = ACTIONS(572),
    [anon_sym_AMP_AMP] = ACTIONS(572),
    [anon_sym_EQ_GT] = ACTIONS(572),
    [anon_sym_elseif] = ACTIONS(572),
    [anon_sym_else] = ACTIONS(572),
    [sym__times_operator] = ACTIONS(572),
    [sym__plus_operator] = ACTIONS(572),
    [sym__arrow_operator] = ACTIONS(572),
    [sym__assign_operator] = ACTIONS(572),
    [anon_sym_LF] = ACTIONS(570),
    [anon_sym_SEMI] = ACTIONS(572),
    [sym_comment] = ACTIONS(72),
  },
  [170] = {
    [aux_sym_argument_list_repeat1] = STATE(170),
    [anon_sym_COMMA] = ACTIONS(574),
    [anon_sym_RPAREN] = ACTIONS(568),
    [sym_comment] = ACTIONS(24),
  },
  [171] = {
    [ts_builtin_sym_end] = ACTIONS(577),
    [anon_sym_end] = ACTIONS(579),
    [anon_sym_LPAREN] = ACTIONS(579),
    [anon_sym_PIPE_PIPE] = ACTIONS(579),
    [anon_sym_AMP_AMP] = ACTIONS(579),
    [anon_sym_EQ_GT] = ACTIONS(579),
    [anon_sym_elseif] = ACTIONS(579),
    [anon_sym_else] = ACTIONS(579),
    [sym__times_operator] = ACTIONS(579),
    [sym__plus_operator] = ACTIONS(579),
    [sym__arrow_operator] = ACTIONS(579),
    [sym__assign_operator] = ACTIONS(579),
    [anon_sym_LF] = ACTIONS(577),
    [anon_sym_SEMI] = ACTIONS(579),
    [sym_comment] = ACTIONS(72),
  },
  [172] = {
    [sym__expression] = STATE(120),
    [sym_module_expression] = STATE(120),
    [sym_struct_definition] = STATE(120),
    [sym_function_expression] = STATE(120),
    [sym_call_expression] = STATE(120),
    [sym_assignment_expression] = STATE(120),
    [sym_binary_expression] = STATE(120),
    [sym_pair_expression] = STATE(120),
    [sym_conditional_expression] = STATE(120),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(334),
    [sym_number] = ACTIONS(336),
    [sym_string] = ACTIONS(336),
    [sym_comment] = ACTIONS(24),
  },
  [173] = {
    [ts_builtin_sym_end] = ACTIONS(581),
    [anon_sym_end] = ACTIONS(583),
    [anon_sym_LPAREN] = ACTIONS(583),
    [anon_sym_PIPE_PIPE] = ACTIONS(583),
    [anon_sym_AMP_AMP] = ACTIONS(583),
    [anon_sym_EQ_GT] = ACTIONS(583),
    [anon_sym_elseif] = ACTIONS(583),
    [anon_sym_else] = ACTIONS(583),
    [sym__times_operator] = ACTIONS(583),
    [sym__plus_operator] = ACTIONS(583),
    [sym__arrow_operator] = ACTIONS(583),
    [sym__assign_operator] = ACTIONS(583),
    [anon_sym_LF] = ACTIONS(581),
    [anon_sym_SEMI] = ACTIONS(583),
    [sym_comment] = ACTIONS(72),
  },
  [174] = {
    [aux_sym_parameterized_identifier_repeat1] = STATE(204),
    [anon_sym_COMMA] = ACTIONS(350),
    [anon_sym_RBRACE] = ACTIONS(585),
    [sym_comment] = ACTIONS(24),
  },
  [175] = {
    [anon_sym_COMMA] = ACTIONS(587),
    [anon_sym_RBRACE] = ACTIONS(587),
    [sym_comment] = ACTIONS(24),
  },
  [176] = {
    [anon_sym_end] = ACTIONS(589),
    [anon_sym_LF] = ACTIONS(591),
    [anon_sym_SEMI] = ACTIONS(589),
    [sym_comment] = ACTIONS(72),
  },
  [177] = {
    [aux_sym_parameterized_identifier_repeat1] = STATE(177),
    [anon_sym_COMMA] = ACTIONS(593),
    [anon_sym_RBRACE] = ACTIONS(587),
    [sym_comment] = ACTIONS(24),
  },
  [178] = {
    [anon_sym_COMMA] = ACTIONS(596),
    [anon_sym_RBRACE] = ACTIONS(596),
    [sym_comment] = ACTIONS(24),
  },
  [179] = {
    [anon_sym_COMMA] = ACTIONS(598),
    [anon_sym_RPAREN] = ACTIONS(598),
    [sym_comment] = ACTIONS(24),
  },
  [180] = {
    [anon_sym_module] = ACTIONS(600),
    [anon_sym_end] = ACTIONS(600),
    [anon_sym_mutable] = ACTIONS(600),
    [anon_sym_struct] = ACTIONS(600),
    [anon_sym_function] = ACTIONS(600),
    [anon_sym_if] = ACTIONS(600),
    [sym_identifier] = ACTIONS(600),
    [sym_number] = ACTIONS(602),
    [sym_string] = ACTIONS(602),
    [sym_comment] = ACTIONS(24),
  },
  [181] = {
    [aux_sym_parameter_list_repeat1] = STATE(181),
    [anon_sym_COMMA] = ACTIONS(604),
    [anon_sym_RPAREN] = ACTIONS(598),
    [sym_comment] = ACTIONS(24),
  },
  [182] = {
    [ts_builtin_sym_end] = ACTIONS(607),
    [anon_sym_end] = ACTIONS(609),
    [anon_sym_LPAREN] = ACTIONS(609),
    [anon_sym_PIPE_PIPE] = ACTIONS(609),
    [anon_sym_AMP_AMP] = ACTIONS(609),
    [anon_sym_EQ_GT] = ACTIONS(609),
    [anon_sym_elseif] = ACTIONS(609),
    [anon_sym_else] = ACTIONS(609),
    [sym__times_operator] = ACTIONS(609),
    [sym__plus_operator] = ACTIONS(609),
    [sym__arrow_operator] = ACTIONS(609),
    [sym__assign_operator] = ACTIONS(609),
    [anon_sym_LF] = ACTIONS(607),
    [anon_sym_SEMI] = ACTIONS(609),
    [sym_comment] = ACTIONS(72),
  },
  [183] = {
    [sym__expression] = STATE(120),
    [sym_module_expression] = STATE(120),
    [sym_struct_definition] = STATE(120),
    [sym_function_expression] = STATE(120),
    [sym_call_expression] = STATE(120),
    [sym_assignment_expression] = STATE(120),
    [sym_binary_expression] = STATE(120),
    [sym_pair_expression] = STATE(120),
    [sym_conditional_expression] = STATE(120),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(611),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(334),
    [sym_number] = ACTIONS(336),
    [sym_string] = ACTIONS(336),
    [sym_comment] = ACTIONS(24),
  },
  [184] = {
    [anon_sym_module] = ACTIONS(468),
    [anon_sym_mutable] = ACTIONS(468),
    [anon_sym_struct] = ACTIONS(468),
    [anon_sym_COMMA] = ACTIONS(466),
    [anon_sym_function] = ACTIONS(468),
    [anon_sym_LPAREN] = ACTIONS(466),
    [anon_sym_RPAREN] = ACTIONS(466),
    [anon_sym_PIPE_PIPE] = ACTIONS(468),
    [anon_sym_AMP_AMP] = ACTIONS(466),
    [anon_sym_EQ_GT] = ACTIONS(466),
    [anon_sym_if] = ACTIONS(468),
    [sym_identifier] = ACTIONS(468),
    [sym_number] = ACTIONS(466),
    [sym_string] = ACTIONS(466),
    [sym__times_operator] = ACTIONS(468),
    [sym__plus_operator] = ACTIONS(468),
    [sym__arrow_operator] = ACTIONS(466),
    [sym__assign_operator] = ACTIONS(468),
    [sym_comment] = ACTIONS(24),
  },
  [185] = {
    [sym__expression] = STATE(120),
    [sym_module_expression] = STATE(120),
    [sym_struct_definition] = STATE(120),
    [sym_function_expression] = STATE(120),
    [sym_call_expression] = STATE(120),
    [sym_assignment_expression] = STATE(120),
    [sym_binary_expression] = STATE(120),
    [sym_pair_expression] = STATE(120),
    [sym_conditional_expression] = STATE(120),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(613),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(334),
    [sym_number] = ACTIONS(336),
    [sym_string] = ACTIONS(336),
    [sym_comment] = ACTIONS(24),
  },
  [186] = {
    [anon_sym_module] = ACTIONS(480),
    [anon_sym_mutable] = ACTIONS(480),
    [anon_sym_struct] = ACTIONS(480),
    [anon_sym_COMMA] = ACTIONS(478),
    [anon_sym_function] = ACTIONS(480),
    [anon_sym_LPAREN] = ACTIONS(478),
    [anon_sym_RPAREN] = ACTIONS(478),
    [anon_sym_PIPE_PIPE] = ACTIONS(480),
    [anon_sym_AMP_AMP] = ACTIONS(478),
    [anon_sym_EQ_GT] = ACTIONS(478),
    [anon_sym_if] = ACTIONS(480),
    [sym_identifier] = ACTIONS(480),
    [sym_number] = ACTIONS(478),
    [sym_string] = ACTIONS(478),
    [sym__times_operator] = ACTIONS(480),
    [sym__plus_operator] = ACTIONS(480),
    [sym__arrow_operator] = ACTIONS(478),
    [sym__assign_operator] = ACTIONS(480),
    [sym_comment] = ACTIONS(24),
  },
  [187] = {
    [sym_parameterized_identifier] = STATE(77),
    [aux_sym_struct_definition_repeat1] = STATE(131),
    [anon_sym_end] = ACTIONS(615),
    [sym_identifier] = ACTIONS(200),
    [sym_comment] = ACTIONS(24),
  },
  [188] = {
    [anon_sym_module] = ACTIONS(505),
    [anon_sym_mutable] = ACTIONS(505),
    [anon_sym_struct] = ACTIONS(505),
    [anon_sym_COMMA] = ACTIONS(503),
    [anon_sym_function] = ACTIONS(505),
    [anon_sym_LPAREN] = ACTIONS(503),
    [anon_sym_RPAREN] = ACTIONS(503),
    [anon_sym_PIPE_PIPE] = ACTIONS(505),
    [anon_sym_AMP_AMP] = ACTIONS(503),
    [anon_sym_EQ_GT] = ACTIONS(503),
    [anon_sym_if] = ACTIONS(505),
    [sym_identifier] = ACTIONS(505),
    [sym_number] = ACTIONS(503),
    [sym_string] = ACTIONS(503),
    [sym__times_operator] = ACTIONS(505),
    [sym__plus_operator] = ACTIONS(505),
    [sym__arrow_operator] = ACTIONS(503),
    [sym__assign_operator] = ACTIONS(505),
    [sym_comment] = ACTIONS(24),
  },
  [189] = {
    [sym__expression] = STATE(120),
    [sym_module_expression] = STATE(120),
    [sym_struct_definition] = STATE(120),
    [sym_function_expression] = STATE(120),
    [sym_call_expression] = STATE(120),
    [sym_assignment_expression] = STATE(120),
    [sym_binary_expression] = STATE(120),
    [sym_pair_expression] = STATE(120),
    [sym_conditional_expression] = STATE(120),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(617),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(334),
    [sym_number] = ACTIONS(336),
    [sym_string] = ACTIONS(336),
    [sym_comment] = ACTIONS(24),
  },
  [190] = {
    [aux_sym__expression_list_repeat1] = STATE(122),
    [anon_sym_end] = ACTIONS(617),
    [anon_sym_LF] = ACTIONS(619),
    [anon_sym_SEMI] = ACTIONS(621),
    [sym_comment] = ACTIONS(72),
  },
  [191] = {
    [anon_sym_module] = ACTIONS(549),
    [anon_sym_mutable] = ACTIONS(549),
    [anon_sym_struct] = ACTIONS(549),
    [anon_sym_COMMA] = ACTIONS(547),
    [anon_sym_function] = ACTIONS(549),
    [anon_sym_LPAREN] = ACTIONS(547),
    [anon_sym_RPAREN] = ACTIONS(547),
    [anon_sym_PIPE_PIPE] = ACTIONS(549),
    [anon_sym_AMP_AMP] = ACTIONS(547),
    [anon_sym_EQ_GT] = ACTIONS(547),
    [anon_sym_if] = ACTIONS(549),
    [sym_identifier] = ACTIONS(549),
    [sym_number] = ACTIONS(547),
    [sym_string] = ACTIONS(547),
    [sym__times_operator] = ACTIONS(549),
    [sym__plus_operator] = ACTIONS(549),
    [sym__arrow_operator] = ACTIONS(547),
    [sym__assign_operator] = ACTIONS(549),
    [sym_comment] = ACTIONS(24),
  },
  [192] = {
    [anon_sym_end] = ACTIONS(623),
    [sym_comment] = ACTIONS(24),
  },
  [193] = {
    [sym_elseif_clause] = STATE(164),
    [sym_else_clause] = STATE(211),
    [aux_sym_conditional_expression_repeat1] = STATE(164),
    [anon_sym_end] = ACTIONS(623),
    [anon_sym_elseif] = ACTIONS(442),
    [anon_sym_else] = ACTIONS(268),
    [sym_comment] = ACTIONS(24),
  },
  [194] = {
    [sym__expression] = STATE(159),
    [sym_module_expression] = STATE(159),
    [sym_struct_definition] = STATE(159),
    [sym_function_expression] = STATE(159),
    [sym_call_expression] = STATE(159),
    [sym_assignment_expression] = STATE(159),
    [sym_binary_expression] = STATE(159),
    [sym_pair_expression] = STATE(159),
    [sym_conditional_expression] = STATE(159),
    [sym_elseif_clause] = STATE(212),
    [sym_else_clause] = STATE(211),
    [aux_sym_conditional_expression_repeat1] = STATE(212),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(625),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [anon_sym_elseif] = ACTIONS(266),
    [anon_sym_else] = ACTIONS(268),
    [sym_identifier] = ACTIONS(432),
    [sym_number] = ACTIONS(434),
    [sym_string] = ACTIONS(434),
    [sym_comment] = ACTIONS(24),
  },
  [195] = {
    [anon_sym_module] = ACTIONS(572),
    [anon_sym_mutable] = ACTIONS(572),
    [anon_sym_struct] = ACTIONS(572),
    [anon_sym_COMMA] = ACTIONS(570),
    [anon_sym_function] = ACTIONS(572),
    [anon_sym_LPAREN] = ACTIONS(570),
    [anon_sym_RPAREN] = ACTIONS(570),
    [anon_sym_PIPE_PIPE] = ACTIONS(572),
    [anon_sym_AMP_AMP] = ACTIONS(570),
    [anon_sym_EQ_GT] = ACTIONS(570),
    [anon_sym_if] = ACTIONS(572),
    [sym_identifier] = ACTIONS(572),
    [sym_number] = ACTIONS(570),
    [sym_string] = ACTIONS(570),
    [sym__times_operator] = ACTIONS(572),
    [sym__plus_operator] = ACTIONS(572),
    [sym__arrow_operator] = ACTIONS(570),
    [sym__assign_operator] = ACTIONS(572),
    [sym_comment] = ACTIONS(24),
  },
  [196] = {
    [sym_argument_list] = STATE(29),
    [aux_sym__expression_list_repeat1] = STATE(214),
    [anon_sym_end] = ACTIONS(627),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_PIPE_PIPE] = ACTIONS(54),
    [anon_sym_AMP_AMP] = ACTIONS(56),
    [anon_sym_EQ_GT] = ACTIONS(264),
    [anon_sym_elseif] = ACTIONS(627),
    [anon_sym_else] = ACTIONS(627),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(62),
    [sym__arrow_operator] = ACTIONS(270),
    [sym__assign_operator] = ACTIONS(272),
    [anon_sym_LF] = ACTIONS(629),
    [anon_sym_SEMI] = ACTIONS(631),
    [sym_comment] = ACTIONS(72),
  },
  [197] = {
    [sym__expression] = STATE(120),
    [sym_module_expression] = STATE(120),
    [sym_struct_definition] = STATE(120),
    [sym_function_expression] = STATE(120),
    [sym_call_expression] = STATE(120),
    [sym_assignment_expression] = STATE(120),
    [sym_binary_expression] = STATE(120),
    [sym_pair_expression] = STATE(120),
    [sym_conditional_expression] = STATE(120),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(633),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(334),
    [sym_number] = ACTIONS(336),
    [sym_string] = ACTIONS(336),
    [sym_comment] = ACTIONS(24),
  },
  [198] = {
    [aux_sym__expression_list_repeat1] = STATE(122),
    [anon_sym_end] = ACTIONS(633),
    [anon_sym_LF] = ACTIONS(635),
    [anon_sym_SEMI] = ACTIONS(637),
    [sym_comment] = ACTIONS(72),
  },
  [199] = {
    [ts_builtin_sym_end] = ACTIONS(639),
    [anon_sym_end] = ACTIONS(641),
    [anon_sym_LPAREN] = ACTIONS(641),
    [anon_sym_PIPE_PIPE] = ACTIONS(641),
    [anon_sym_AMP_AMP] = ACTIONS(641),
    [anon_sym_EQ_GT] = ACTIONS(641),
    [anon_sym_elseif] = ACTIONS(641),
    [anon_sym_else] = ACTIONS(641),
    [sym__times_operator] = ACTIONS(641),
    [sym__plus_operator] = ACTIONS(641),
    [sym__arrow_operator] = ACTIONS(641),
    [sym__assign_operator] = ACTIONS(641),
    [anon_sym_LF] = ACTIONS(639),
    [anon_sym_SEMI] = ACTIONS(641),
    [sym_comment] = ACTIONS(72),
  },
  [200] = {
    [anon_sym_end] = ACTIONS(643),
    [sym_comment] = ACTIONS(24),
  },
  [201] = {
    [sym_elseif_clause] = STATE(164),
    [sym_else_clause] = STATE(217),
    [aux_sym_conditional_expression_repeat1] = STATE(164),
    [anon_sym_end] = ACTIONS(643),
    [anon_sym_elseif] = ACTIONS(442),
    [anon_sym_else] = ACTIONS(268),
    [sym_comment] = ACTIONS(24),
  },
  [202] = {
    [sym__expression] = STATE(159),
    [sym_module_expression] = STATE(159),
    [sym_struct_definition] = STATE(159),
    [sym_function_expression] = STATE(159),
    [sym_call_expression] = STATE(159),
    [sym_assignment_expression] = STATE(159),
    [sym_binary_expression] = STATE(159),
    [sym_pair_expression] = STATE(159),
    [sym_conditional_expression] = STATE(159),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(432),
    [sym_number] = ACTIONS(434),
    [sym_string] = ACTIONS(434),
    [sym_comment] = ACTIONS(24),
  },
  [203] = {
    [anon_sym_COLON_COLON] = ACTIONS(486),
    [anon_sym_LT_COLON] = ACTIONS(486),
    [anon_sym_COMMA] = ACTIONS(486),
    [anon_sym_RBRACE] = ACTIONS(486),
    [sym_comment] = ACTIONS(24),
  },
  [204] = {
    [aux_sym_parameterized_identifier_repeat1] = STATE(177),
    [anon_sym_COMMA] = ACTIONS(350),
    [anon_sym_RBRACE] = ACTIONS(645),
    [sym_comment] = ACTIONS(24),
  },
  [205] = {
    [ts_builtin_sym_end] = ACTIONS(647),
    [anon_sym_end] = ACTIONS(649),
    [anon_sym_LPAREN] = ACTIONS(649),
    [anon_sym_PIPE_PIPE] = ACTIONS(649),
    [anon_sym_AMP_AMP] = ACTIONS(649),
    [anon_sym_EQ_GT] = ACTIONS(649),
    [anon_sym_elseif] = ACTIONS(649),
    [anon_sym_else] = ACTIONS(649),
    [sym__times_operator] = ACTIONS(649),
    [sym__plus_operator] = ACTIONS(649),
    [sym__arrow_operator] = ACTIONS(649),
    [sym__assign_operator] = ACTIONS(649),
    [anon_sym_LF] = ACTIONS(647),
    [anon_sym_SEMI] = ACTIONS(649),
    [sym_comment] = ACTIONS(72),
  },
  [206] = {
    [anon_sym_module] = ACTIONS(579),
    [anon_sym_mutable] = ACTIONS(579),
    [anon_sym_struct] = ACTIONS(579),
    [anon_sym_COMMA] = ACTIONS(577),
    [anon_sym_function] = ACTIONS(579),
    [anon_sym_LPAREN] = ACTIONS(577),
    [anon_sym_RPAREN] = ACTIONS(577),
    [anon_sym_PIPE_PIPE] = ACTIONS(579),
    [anon_sym_AMP_AMP] = ACTIONS(577),
    [anon_sym_EQ_GT] = ACTIONS(577),
    [anon_sym_if] = ACTIONS(579),
    [sym_identifier] = ACTIONS(579),
    [sym_number] = ACTIONS(577),
    [sym_string] = ACTIONS(577),
    [sym__times_operator] = ACTIONS(579),
    [sym__plus_operator] = ACTIONS(579),
    [sym__arrow_operator] = ACTIONS(577),
    [sym__assign_operator] = ACTIONS(579),
    [sym_comment] = ACTIONS(24),
  },
  [207] = {
    [anon_sym_module] = ACTIONS(583),
    [anon_sym_mutable] = ACTIONS(583),
    [anon_sym_struct] = ACTIONS(583),
    [anon_sym_COMMA] = ACTIONS(581),
    [anon_sym_function] = ACTIONS(583),
    [anon_sym_LPAREN] = ACTIONS(581),
    [anon_sym_RPAREN] = ACTIONS(581),
    [anon_sym_PIPE_PIPE] = ACTIONS(583),
    [anon_sym_AMP_AMP] = ACTIONS(581),
    [anon_sym_EQ_GT] = ACTIONS(581),
    [anon_sym_if] = ACTIONS(583),
    [sym_identifier] = ACTIONS(583),
    [sym_number] = ACTIONS(581),
    [sym_string] = ACTIONS(581),
    [sym__times_operator] = ACTIONS(583),
    [sym__plus_operator] = ACTIONS(583),
    [sym__arrow_operator] = ACTIONS(581),
    [sym__assign_operator] = ACTIONS(583),
    [sym_comment] = ACTIONS(24),
  },
  [208] = {
    [anon_sym_module] = ACTIONS(609),
    [anon_sym_mutable] = ACTIONS(609),
    [anon_sym_struct] = ACTIONS(609),
    [anon_sym_COMMA] = ACTIONS(607),
    [anon_sym_function] = ACTIONS(609),
    [anon_sym_LPAREN] = ACTIONS(607),
    [anon_sym_RPAREN] = ACTIONS(607),
    [anon_sym_PIPE_PIPE] = ACTIONS(609),
    [anon_sym_AMP_AMP] = ACTIONS(607),
    [anon_sym_EQ_GT] = ACTIONS(607),
    [anon_sym_if] = ACTIONS(609),
    [sym_identifier] = ACTIONS(609),
    [sym_number] = ACTIONS(607),
    [sym_string] = ACTIONS(607),
    [sym__times_operator] = ACTIONS(609),
    [sym__plus_operator] = ACTIONS(609),
    [sym__arrow_operator] = ACTIONS(607),
    [sym__assign_operator] = ACTIONS(609),
    [sym_comment] = ACTIONS(24),
  },
  [209] = {
    [sym__expression] = STATE(120),
    [sym_module_expression] = STATE(120),
    [sym_struct_definition] = STATE(120),
    [sym_function_expression] = STATE(120),
    [sym_call_expression] = STATE(120),
    [sym_assignment_expression] = STATE(120),
    [sym_binary_expression] = STATE(120),
    [sym_pair_expression] = STATE(120),
    [sym_conditional_expression] = STATE(120),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(651),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(334),
    [sym_number] = ACTIONS(336),
    [sym_string] = ACTIONS(336),
    [sym_comment] = ACTIONS(24),
  },
  [210] = {
    [anon_sym_module] = ACTIONS(641),
    [anon_sym_mutable] = ACTIONS(641),
    [anon_sym_struct] = ACTIONS(641),
    [anon_sym_COMMA] = ACTIONS(639),
    [anon_sym_function] = ACTIONS(641),
    [anon_sym_LPAREN] = ACTIONS(639),
    [anon_sym_RPAREN] = ACTIONS(639),
    [anon_sym_PIPE_PIPE] = ACTIONS(641),
    [anon_sym_AMP_AMP] = ACTIONS(639),
    [anon_sym_EQ_GT] = ACTIONS(639),
    [anon_sym_if] = ACTIONS(641),
    [sym_identifier] = ACTIONS(641),
    [sym_number] = ACTIONS(639),
    [sym_string] = ACTIONS(639),
    [sym__times_operator] = ACTIONS(641),
    [sym__plus_operator] = ACTIONS(641),
    [sym__arrow_operator] = ACTIONS(639),
    [sym__assign_operator] = ACTIONS(641),
    [sym_comment] = ACTIONS(24),
  },
  [211] = {
    [anon_sym_end] = ACTIONS(653),
    [sym_comment] = ACTIONS(24),
  },
  [212] = {
    [sym_elseif_clause] = STATE(164),
    [sym_else_clause] = STATE(221),
    [aux_sym_conditional_expression_repeat1] = STATE(164),
    [anon_sym_end] = ACTIONS(653),
    [anon_sym_elseif] = ACTIONS(442),
    [anon_sym_else] = ACTIONS(268),
    [sym_comment] = ACTIONS(24),
  },
  [213] = {
    [sym__expression] = STATE(159),
    [sym_module_expression] = STATE(159),
    [sym_struct_definition] = STATE(159),
    [sym_function_expression] = STATE(159),
    [sym_call_expression] = STATE(159),
    [sym_assignment_expression] = STATE(159),
    [sym_binary_expression] = STATE(159),
    [sym_pair_expression] = STATE(159),
    [sym_conditional_expression] = STATE(159),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(655),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [anon_sym_elseif] = ACTIONS(655),
    [anon_sym_else] = ACTIONS(655),
    [sym_identifier] = ACTIONS(432),
    [sym_number] = ACTIONS(434),
    [sym_string] = ACTIONS(434),
    [sym_comment] = ACTIONS(24),
  },
  [214] = {
    [aux_sym__expression_list_repeat1] = STATE(163),
    [anon_sym_end] = ACTIONS(655),
    [anon_sym_elseif] = ACTIONS(655),
    [anon_sym_else] = ACTIONS(655),
    [anon_sym_LF] = ACTIONS(657),
    [anon_sym_SEMI] = ACTIONS(659),
    [sym_comment] = ACTIONS(72),
  },
  [215] = {
    [sym__expression] = STATE(120),
    [sym_module_expression] = STATE(120),
    [sym_struct_definition] = STATE(120),
    [sym_function_expression] = STATE(120),
    [sym_call_expression] = STATE(120),
    [sym_assignment_expression] = STATE(120),
    [sym_binary_expression] = STATE(120),
    [sym_pair_expression] = STATE(120),
    [sym_conditional_expression] = STATE(120),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(661),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(334),
    [sym_number] = ACTIONS(336),
    [sym_string] = ACTIONS(336),
    [sym_comment] = ACTIONS(24),
  },
  [216] = {
    [ts_builtin_sym_end] = ACTIONS(663),
    [anon_sym_end] = ACTIONS(665),
    [anon_sym_LPAREN] = ACTIONS(665),
    [anon_sym_PIPE_PIPE] = ACTIONS(665),
    [anon_sym_AMP_AMP] = ACTIONS(665),
    [anon_sym_EQ_GT] = ACTIONS(665),
    [anon_sym_elseif] = ACTIONS(665),
    [anon_sym_else] = ACTIONS(665),
    [sym__times_operator] = ACTIONS(665),
    [sym__plus_operator] = ACTIONS(665),
    [sym__arrow_operator] = ACTIONS(665),
    [sym__assign_operator] = ACTIONS(665),
    [anon_sym_LF] = ACTIONS(663),
    [anon_sym_SEMI] = ACTIONS(665),
    [sym_comment] = ACTIONS(72),
  },
  [217] = {
    [anon_sym_end] = ACTIONS(667),
    [sym_comment] = ACTIONS(24),
  },
  [218] = {
    [anon_sym_COLON_COLON] = ACTIONS(591),
    [anon_sym_LT_COLON] = ACTIONS(591),
    [anon_sym_COMMA] = ACTIONS(591),
    [anon_sym_RBRACE] = ACTIONS(591),
    [sym_comment] = ACTIONS(24),
  },
  [219] = {
    [anon_sym_module] = ACTIONS(649),
    [anon_sym_mutable] = ACTIONS(649),
    [anon_sym_struct] = ACTIONS(649),
    [anon_sym_COMMA] = ACTIONS(647),
    [anon_sym_function] = ACTIONS(649),
    [anon_sym_LPAREN] = ACTIONS(647),
    [anon_sym_RPAREN] = ACTIONS(647),
    [anon_sym_PIPE_PIPE] = ACTIONS(649),
    [anon_sym_AMP_AMP] = ACTIONS(647),
    [anon_sym_EQ_GT] = ACTIONS(647),
    [anon_sym_if] = ACTIONS(649),
    [sym_identifier] = ACTIONS(649),
    [sym_number] = ACTIONS(647),
    [sym_string] = ACTIONS(647),
    [sym__times_operator] = ACTIONS(649),
    [sym__plus_operator] = ACTIONS(649),
    [sym__arrow_operator] = ACTIONS(647),
    [sym__assign_operator] = ACTIONS(649),
    [sym_comment] = ACTIONS(24),
  },
  [220] = {
    [anon_sym_module] = ACTIONS(665),
    [anon_sym_mutable] = ACTIONS(665),
    [anon_sym_struct] = ACTIONS(665),
    [anon_sym_COMMA] = ACTIONS(663),
    [anon_sym_function] = ACTIONS(665),
    [anon_sym_LPAREN] = ACTIONS(663),
    [anon_sym_RPAREN] = ACTIONS(663),
    [anon_sym_PIPE_PIPE] = ACTIONS(665),
    [anon_sym_AMP_AMP] = ACTIONS(663),
    [anon_sym_EQ_GT] = ACTIONS(663),
    [anon_sym_if] = ACTIONS(665),
    [sym_identifier] = ACTIONS(665),
    [sym_number] = ACTIONS(663),
    [sym_string] = ACTIONS(663),
    [sym__times_operator] = ACTIONS(665),
    [sym__plus_operator] = ACTIONS(665),
    [sym__arrow_operator] = ACTIONS(663),
    [sym__assign_operator] = ACTIONS(665),
    [sym_comment] = ACTIONS(24),
  },
  [221] = {
    [anon_sym_end] = ACTIONS(669),
    [sym_comment] = ACTIONS(24),
  },
  [222] = {
    [sym__expression] = STATE(159),
    [sym_module_expression] = STATE(159),
    [sym_struct_definition] = STATE(159),
    [sym_function_expression] = STATE(159),
    [sym_call_expression] = STATE(159),
    [sym_assignment_expression] = STATE(159),
    [sym_binary_expression] = STATE(159),
    [sym_pair_expression] = STATE(159),
    [sym_conditional_expression] = STATE(159),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(671),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [anon_sym_elseif] = ACTIONS(671),
    [anon_sym_else] = ACTIONS(671),
    [sym_identifier] = ACTIONS(432),
    [sym_number] = ACTIONS(434),
    [sym_string] = ACTIONS(434),
    [sym_comment] = ACTIONS(24),
  },
  [223] = {
    [ts_builtin_sym_end] = ACTIONS(673),
    [anon_sym_end] = ACTIONS(675),
    [anon_sym_LPAREN] = ACTIONS(675),
    [anon_sym_PIPE_PIPE] = ACTIONS(675),
    [anon_sym_AMP_AMP] = ACTIONS(675),
    [anon_sym_EQ_GT] = ACTIONS(675),
    [anon_sym_elseif] = ACTIONS(675),
    [anon_sym_else] = ACTIONS(675),
    [sym__times_operator] = ACTIONS(675),
    [sym__plus_operator] = ACTIONS(675),
    [sym__arrow_operator] = ACTIONS(675),
    [sym__assign_operator] = ACTIONS(675),
    [anon_sym_LF] = ACTIONS(673),
    [anon_sym_SEMI] = ACTIONS(675),
    [sym_comment] = ACTIONS(72),
  },
  [224] = {
    [anon_sym_module] = ACTIONS(675),
    [anon_sym_mutable] = ACTIONS(675),
    [anon_sym_struct] = ACTIONS(675),
    [anon_sym_COMMA] = ACTIONS(673),
    [anon_sym_function] = ACTIONS(675),
    [anon_sym_LPAREN] = ACTIONS(673),
    [anon_sym_RPAREN] = ACTIONS(673),
    [anon_sym_PIPE_PIPE] = ACTIONS(675),
    [anon_sym_AMP_AMP] = ACTIONS(673),
    [anon_sym_EQ_GT] = ACTIONS(673),
    [anon_sym_if] = ACTIONS(675),
    [sym_identifier] = ACTIONS(675),
    [sym_number] = ACTIONS(673),
    [sym_string] = ACTIONS(673),
    [sym__times_operator] = ACTIONS(675),
    [sym__plus_operator] = ACTIONS(675),
    [sym__arrow_operator] = ACTIONS(673),
    [sym__assign_operator] = ACTIONS(675),
    [sym_comment] = ACTIONS(24),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 2, .reusable = true}, SHIFT_EXTRA(), RECOVER(),
  [8] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [10] = {.count = 1, .reusable = false}, SHIFT(2),
  [12] = {.count = 1, .reusable = false}, SHIFT(3),
  [14] = {.count = 1, .reusable = false}, SHIFT(4),
  [16] = {.count = 1, .reusable = false}, SHIFT(5),
  [18] = {.count = 1, .reusable = false}, SHIFT(6),
  [20] = {.count = 1, .reusable = false}, SHIFT(8),
  [22] = {.count = 1, .reusable = true}, SHIFT(8),
  [24] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [26] = {.count = 1, .reusable = true}, SHIFT(9),
  [28] = {.count = 1, .reusable = true}, SHIFT(10),
  [30] = {.count = 1, .reusable = true}, SHIFT(11),
  [32] = {.count = 1, .reusable = true}, SHIFT(13),
  [34] = {.count = 1, .reusable = false}, SHIFT(14),
  [36] = {.count = 1, .reusable = false}, SHIFT(15),
  [38] = {.count = 1, .reusable = false}, SHIFT(16),
  [40] = {.count = 1, .reusable = false}, SHIFT(17),
  [42] = {.count = 1, .reusable = false}, SHIFT(18),
  [44] = {.count = 1, .reusable = false}, SHIFT(19),
  [46] = {.count = 1, .reusable = true}, SHIFT(19),
  [48] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [50] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [52] = {.count = 1, .reusable = false}, SHIFT(20),
  [54] = {.count = 1, .reusable = false}, SHIFT(21),
  [56] = {.count = 1, .reusable = false}, SHIFT(22),
  [58] = {.count = 1, .reusable = false}, SHIFT(23),
  [60] = {.count = 1, .reusable = false}, SHIFT(24),
  [62] = {.count = 1, .reusable = false}, SHIFT(25),
  [64] = {.count = 1, .reusable = false}, SHIFT(26),
  [66] = {.count = 1, .reusable = false}, SHIFT(27),
  [68] = {.count = 1, .reusable = true}, SHIFT(28),
  [70] = {.count = 1, .reusable = false}, SHIFT(28),
  [72] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [74] = {.count = 1, .reusable = false}, SHIFT(31),
  [76] = {.count = 1, .reusable = false}, SHIFT(32),
  [78] = {.count = 1, .reusable = true}, SHIFT(32),
  [80] = {.count = 1, .reusable = false}, REDUCE(sym_parameterized_identifier, 1),
  [82] = {.count = 1, .reusable = false}, SHIFT(34),
  [84] = {.count = 1, .reusable = true}, REDUCE(sym_parameterized_identifier, 1),
  [86] = {.count = 1, .reusable = false}, SHIFT(35),
  [88] = {.count = 1, .reusable = true}, SHIFT(36),
  [90] = {.count = 1, .reusable = false}, SHIFT(36),
  [92] = {.count = 1, .reusable = true}, SHIFT(37),
  [94] = {.count = 1, .reusable = true}, SHIFT(39),
  [96] = {.count = 1, .reusable = true}, SHIFT(40),
  [98] = {.count = 1, .reusable = true}, SHIFT(42),
  [100] = {.count = 1, .reusable = false}, SHIFT(43),
  [102] = {.count = 1, .reusable = true}, SHIFT(43),
  [104] = {.count = 1, .reusable = true}, SHIFT(44),
  [106] = {.count = 1, .reusable = false}, SHIFT(45),
  [108] = {.count = 1, .reusable = true}, SHIFT(46),
  [110] = {.count = 1, .reusable = true}, SHIFT(47),
  [112] = {.count = 1, .reusable = false}, SHIFT(52),
  [114] = {.count = 1, .reusable = true}, SHIFT(52),
  [116] = {.count = 1, .reusable = false}, SHIFT(48),
  [118] = {.count = 1, .reusable = false}, SHIFT(49),
  [120] = {.count = 1, .reusable = true}, SHIFT(50),
  [122] = {.count = 1, .reusable = false}, SHIFT(51),
  [124] = {.count = 1, .reusable = true}, SHIFT(54),
  [126] = {.count = 1, .reusable = false}, SHIFT(55),
  [128] = {.count = 1, .reusable = true}, SHIFT(55),
  [130] = {.count = 1, .reusable = false}, SHIFT(56),
  [132] = {.count = 1, .reusable = true}, SHIFT(56),
  [134] = {.count = 1, .reusable = false}, SHIFT(57),
  [136] = {.count = 1, .reusable = true}, SHIFT(57),
  [138] = {.count = 1, .reusable = false}, SHIFT(58),
  [140] = {.count = 1, .reusable = true}, SHIFT(58),
  [142] = {.count = 1, .reusable = false}, SHIFT(59),
  [144] = {.count = 1, .reusable = true}, SHIFT(59),
  [146] = {.count = 1, .reusable = false}, SHIFT(60),
  [148] = {.count = 1, .reusable = true}, SHIFT(60),
  [150] = {.count = 1, .reusable = false}, SHIFT(61),
  [152] = {.count = 1, .reusable = true}, SHIFT(61),
  [154] = {.count = 1, .reusable = false}, SHIFT(62),
  [156] = {.count = 1, .reusable = true}, SHIFT(62),
  [158] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [160] = {.count = 1, .reusable = false}, SHIFT(63),
  [162] = {.count = 1, .reusable = true}, SHIFT(63),
  [164] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2),
  [166] = {.count = 1, .reusable = false}, REDUCE(sym_call_expression, 2),
  [168] = {.count = 1, .reusable = true}, SHIFT(64),
  [170] = {.count = 1, .reusable = false}, SHIFT(64),
  [172] = {.count = 1, .reusable = true}, REDUCE(sym_module_expression, 3),
  [174] = {.count = 1, .reusable = false}, REDUCE(sym_module_expression, 3),
  [176] = {.count = 1, .reusable = false}, SHIFT(66),
  [178] = {.count = 1, .reusable = false}, SHIFT(67),
  [180] = {.count = 1, .reusable = false}, SHIFT(68),
  [182] = {.count = 1, .reusable = false}, SHIFT(69),
  [184] = {.count = 1, .reusable = true}, SHIFT(70),
  [186] = {.count = 1, .reusable = false}, SHIFT(70),
  [188] = {.count = 1, .reusable = false}, SHIFT(72),
  [190] = {.count = 1, .reusable = true}, SHIFT(73),
  [192] = {.count = 1, .reusable = false}, SHIFT(73),
  [194] = {.count = 1, .reusable = true}, SHIFT(74),
  [196] = {.count = 1, .reusable = true}, REDUCE(sym_struct_definition, 3),
  [198] = {.count = 1, .reusable = false}, REDUCE(sym_struct_definition, 3),
  [200] = {.count = 1, .reusable = false}, SHIFT(11),
  [202] = {.count = 1, .reusable = true}, SHIFT(79),
  [204] = {.count = 1, .reusable = true}, SHIFT(80),
  [206] = {.count = 1, .reusable = false}, SHIFT(81),
  [208] = {.count = 1, .reusable = false}, SHIFT(82),
  [210] = {.count = 1, .reusable = true}, SHIFT(82),
  [212] = {.count = 1, .reusable = false}, SHIFT(83),
  [214] = {.count = 1, .reusable = false}, SHIFT(84),
  [216] = {.count = 1, .reusable = true}, SHIFT(84),
  [218] = {.count = 1, .reusable = false}, SHIFT(86),
  [220] = {.count = 1, .reusable = true}, SHIFT(87),
  [222] = {.count = 1, .reusable = false}, SHIFT(87),
  [224] = {.count = 1, .reusable = false}, SHIFT(89),
  [226] = {.count = 1, .reusable = true}, SHIFT(89),
  [228] = {.count = 1, .reusable = true}, SHIFT(90),
  [230] = {.count = 1, .reusable = false}, SHIFT(91),
  [232] = {.count = 1, .reusable = true}, SHIFT(91),
  [234] = {.count = 1, .reusable = false}, SHIFT(92),
  [236] = {.count = 1, .reusable = true}, SHIFT(92),
  [238] = {.count = 1, .reusable = false}, SHIFT(93),
  [240] = {.count = 1, .reusable = true}, SHIFT(93),
  [242] = {.count = 1, .reusable = false}, SHIFT(94),
  [244] = {.count = 1, .reusable = true}, SHIFT(94),
  [246] = {.count = 1, .reusable = false}, SHIFT(95),
  [248] = {.count = 1, .reusable = true}, SHIFT(95),
  [250] = {.count = 1, .reusable = false}, SHIFT(96),
  [252] = {.count = 1, .reusable = true}, SHIFT(96),
  [254] = {.count = 1, .reusable = false}, SHIFT(97),
  [256] = {.count = 1, .reusable = true}, SHIFT(97),
  [258] = {.count = 1, .reusable = false}, SHIFT(98),
  [260] = {.count = 1, .reusable = true}, SHIFT(98),
  [262] = {.count = 1, .reusable = false}, SHIFT(99),
  [264] = {.count = 1, .reusable = false}, SHIFT(100),
  [266] = {.count = 1, .reusable = false}, SHIFT(101),
  [268] = {.count = 1, .reusable = false}, SHIFT(102),
  [270] = {.count = 1, .reusable = false}, SHIFT(103),
  [272] = {.count = 1, .reusable = false}, SHIFT(104),
  [274] = {.count = 1, .reusable = true}, SHIFT(105),
  [276] = {.count = 1, .reusable = false}, SHIFT(105),
  [278] = {.count = 1, .reusable = true}, REDUCE(sym_argument_list, 2),
  [280] = {.count = 1, .reusable = false}, REDUCE(sym_argument_list, 2),
  [282] = {.count = 1, .reusable = true}, SHIFT(109),
  [284] = {.count = 1, .reusable = true}, SHIFT(110),
  [286] = {.count = 1, .reusable = true}, SHIFT(111),
  [288] = {.count = 1, .reusable = true}, SHIFT(112),
  [290] = {.count = 1, .reusable = false}, SHIFT(113),
  [292] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3),
  [294] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3),
  [296] = {.count = 1, .reusable = true}, REDUCE(sym_pair_expression, 3),
  [298] = {.count = 1, .reusable = false}, REDUCE(sym_pair_expression, 3),
  [300] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 3),
  [302] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_expression, 3),
  [304] = {.count = 1, .reusable = true}, REDUCE(aux_sym__expression_list_repeat1, 2),
  [306] = {.count = 1, .reusable = false}, REDUCE(aux_sym__expression_list_repeat1, 2),
  [308] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 3),
  [310] = {.count = 2, .reusable = true}, REDUCE(aux_sym__expression_list_repeat1, 2), SHIFT_REPEAT(115),
  [313] = {.count = 2, .reusable = false}, REDUCE(aux_sym__expression_list_repeat1, 2), SHIFT_REPEAT(115),
  [316] = {.count = 1, .reusable = true}, REDUCE(sym_module_expression, 4),
  [318] = {.count = 1, .reusable = false}, REDUCE(sym_module_expression, 4),
  [320] = {.count = 1, .reusable = false}, SHIFT(116),
  [322] = {.count = 1, .reusable = true}, SHIFT(116),
  [324] = {.count = 1, .reusable = false}, SHIFT(117),
  [326] = {.count = 1, .reusable = true}, SHIFT(117),
  [328] = {.count = 1, .reusable = false}, SHIFT(118),
  [330] = {.count = 1, .reusable = true}, SHIFT(118),
  [332] = {.count = 1, .reusable = false}, SHIFT(119),
  [334] = {.count = 1, .reusable = false}, SHIFT(120),
  [336] = {.count = 1, .reusable = true}, SHIFT(120),
  [338] = {.count = 1, .reusable = true}, SHIFT(121),
  [340] = {.count = 1, .reusable = false}, SHIFT(121),
  [342] = {.count = 1, .reusable = true}, REDUCE(sym_struct_definition, 4),
  [344] = {.count = 1, .reusable = false}, REDUCE(sym_struct_definition, 4),
  [346] = {.count = 1, .reusable = false}, SHIFT(123),
  [348] = {.count = 1, .reusable = true}, SHIFT(125),
  [350] = {.count = 1, .reusable = true}, SHIFT(126),
  [352] = {.count = 1, .reusable = true}, SHIFT(127),
  [354] = {.count = 1, .reusable = true}, SHIFT(129),
  [356] = {.count = 1, .reusable = true}, REDUCE(sym_typed_identifier, 1),
  [358] = {.count = 1, .reusable = true}, SHIFT(130),
  [360] = {.count = 1, .reusable = false}, SHIFT(130),
  [362] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_list, 2),
  [364] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 2),
  [366] = {.count = 1, .reusable = true}, SHIFT(132),
  [368] = {.count = 1, .reusable = true}, SHIFT(133),
  [370] = {.count = 1, .reusable = true}, REDUCE(sym_function_expression, 4),
  [372] = {.count = 1, .reusable = false}, REDUCE(sym_function_expression, 4),
  [374] = {.count = 1, .reusable = false}, SHIFT(135),
  [376] = {.count = 1, .reusable = true}, SHIFT(136),
  [378] = {.count = 1, .reusable = false}, SHIFT(136),
  [380] = {.count = 1, .reusable = false}, SHIFT(138),
  [382] = {.count = 1, .reusable = true}, SHIFT(139),
  [384] = {.count = 1, .reusable = false}, SHIFT(139),
  [386] = {.count = 1, .reusable = false}, SHIFT(141),
  [388] = {.count = 1, .reusable = true}, SHIFT(142),
  [390] = {.count = 1, .reusable = false}, SHIFT(142),
  [392] = {.count = 1, .reusable = false}, SHIFT(144),
  [394] = {.count = 1, .reusable = false}, SHIFT(145),
  [396] = {.count = 1, .reusable = true}, SHIFT(145),
  [398] = {.count = 1, .reusable = false}, SHIFT(146),
  [400] = {.count = 1, .reusable = true}, SHIFT(147),
  [402] = {.count = 1, .reusable = false}, SHIFT(147),
  [404] = {.count = 1, .reusable = true}, SHIFT(151),
  [406] = {.count = 1, .reusable = true}, REDUCE(sym_conditional_expression, 4),
  [408] = {.count = 1, .reusable = false}, REDUCE(sym_conditional_expression, 4),
  [410] = {.count = 1, .reusable = false}, SHIFT(153),
  [412] = {.count = 1, .reusable = true}, SHIFT(153),
  [414] = {.count = 1, .reusable = false}, SHIFT(154),
  [416] = {.count = 1, .reusable = true}, SHIFT(154),
  [418] = {.count = 1, .reusable = false}, SHIFT(155),
  [420] = {.count = 1, .reusable = true}, SHIFT(155),
  [422] = {.count = 1, .reusable = false}, SHIFT(156),
  [424] = {.count = 1, .reusable = true}, SHIFT(156),
  [426] = {.count = 1, .reusable = false}, SHIFT(157),
  [428] = {.count = 1, .reusable = true}, SHIFT(157),
  [430] = {.count = 1, .reusable = false}, SHIFT(158),
  [432] = {.count = 1, .reusable = false}, SHIFT(159),
  [434] = {.count = 1, .reusable = true}, SHIFT(159),
  [436] = {.count = 1, .reusable = true}, SHIFT(158),
  [438] = {.count = 1, .reusable = true}, SHIFT(162),
  [440] = {.count = 1, .reusable = false}, SHIFT(162),
  [442] = {.count = 1, .reusable = true}, SHIFT(101),
  [444] = {.count = 1, .reusable = false}, SHIFT(165),
  [446] = {.count = 1, .reusable = true}, SHIFT(165),
  [448] = {.count = 1, .reusable = true}, REDUCE(sym_argument_list, 3),
  [450] = {.count = 1, .reusable = false}, REDUCE(sym_argument_list, 3),
  [452] = {.count = 1, .reusable = false}, SHIFT(166),
  [454] = {.count = 1, .reusable = true}, SHIFT(166),
  [456] = {.count = 1, .reusable = false}, SHIFT(167),
  [458] = {.count = 1, .reusable = true}, SHIFT(167),
  [460] = {.count = 1, .reusable = false}, SHIFT(168),
  [462] = {.count = 1, .reusable = true}, SHIFT(168),
  [464] = {.count = 1, .reusable = true}, SHIFT(169),
  [466] = {.count = 1, .reusable = true}, REDUCE(sym_module_expression, 5),
  [468] = {.count = 1, .reusable = false}, REDUCE(sym_module_expression, 5),
  [470] = {.count = 1, .reusable = false}, SHIFT(171),
  [472] = {.count = 2, .reusable = true}, REDUCE(aux_sym__expression_list_repeat1, 2), SHIFT_REPEAT(172),
  [475] = {.count = 2, .reusable = false}, REDUCE(aux_sym__expression_list_repeat1, 2), SHIFT_REPEAT(172),
  [478] = {.count = 1, .reusable = true}, REDUCE(sym_struct_definition, 5),
  [480] = {.count = 1, .reusable = false}, REDUCE(sym_struct_definition, 5),
  [482] = {.count = 1, .reusable = false}, SHIFT(173),
  [484] = {.count = 1, .reusable = false}, REDUCE(sym_parameterized_identifier, 4),
  [486] = {.count = 1, .reusable = true}, REDUCE(sym_parameterized_identifier, 4),
  [488] = {.count = 1, .reusable = true}, SHIFT(176),
  [490] = {.count = 1, .reusable = false}, REDUCE(aux_sym_struct_definition_repeat1, 2),
  [492] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_definition_repeat1, 2), SHIFT_REPEAT(11),
  [495] = {.count = 1, .reusable = true}, SHIFT(179),
  [497] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_list, 3),
  [499] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 3),
  [501] = {.count = 1, .reusable = true}, SHIFT(180),
  [503] = {.count = 1, .reusable = true}, REDUCE(sym_function_expression, 5),
  [505] = {.count = 1, .reusable = false}, REDUCE(sym_function_expression, 5),
  [507] = {.count = 1, .reusable = false}, SHIFT(182),
  [509] = {.count = 1, .reusable = true}, SHIFT(183),
  [511] = {.count = 1, .reusable = false}, SHIFT(183),
  [513] = {.count = 1, .reusable = false}, SHIFT(184),
  [515] = {.count = 1, .reusable = true}, SHIFT(185),
  [517] = {.count = 1, .reusable = false}, SHIFT(185),
  [519] = {.count = 1, .reusable = false}, SHIFT(186),
  [521] = {.count = 1, .reusable = false}, SHIFT(188),
  [523] = {.count = 1, .reusable = true}, SHIFT(189),
  [525] = {.count = 1, .reusable = false}, SHIFT(189),
  [527] = {.count = 1, .reusable = false}, SHIFT(191),
  [529] = {.count = 1, .reusable = true}, SHIFT(191),
  [531] = {.count = 1, .reusable = true}, SHIFT(194),
  [533] = {.count = 1, .reusable = false}, SHIFT(194),
  [535] = {.count = 1, .reusable = true}, SHIFT(195),
  [537] = {.count = 1, .reusable = false}, SHIFT(196),
  [539] = {.count = 1, .reusable = true}, SHIFT(196),
  [541] = {.count = 1, .reusable = false}, REDUCE(sym_else_clause, 2),
  [543] = {.count = 1, .reusable = true}, SHIFT(197),
  [545] = {.count = 1, .reusable = false}, SHIFT(197),
  [547] = {.count = 1, .reusable = true}, REDUCE(sym_conditional_expression, 5),
  [549] = {.count = 1, .reusable = false}, REDUCE(sym_conditional_expression, 5),
  [551] = {.count = 1, .reusable = true}, SHIFT(199),
  [553] = {.count = 1, .reusable = false}, SHIFT(199),
  [555] = {.count = 2, .reusable = true}, REDUCE(aux_sym__expression_list_repeat1, 2), SHIFT_REPEAT(202),
  [558] = {.count = 2, .reusable = false}, REDUCE(aux_sym__expression_list_repeat1, 2), SHIFT_REPEAT(202),
  [561] = {.count = 1, .reusable = true}, REDUCE(aux_sym_conditional_expression_repeat1, 2),
  [563] = {.count = 2, .reusable = true}, REDUCE(aux_sym_conditional_expression_repeat1, 2), SHIFT_REPEAT(101),
  [566] = {.count = 1, .reusable = false}, REDUCE(aux_sym_conditional_expression_repeat1, 2),
  [568] = {.count = 1, .reusable = true}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [570] = {.count = 1, .reusable = true}, REDUCE(sym_argument_list, 4),
  [572] = {.count = 1, .reusable = false}, REDUCE(sym_argument_list, 4),
  [574] = {.count = 2, .reusable = true}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(109),
  [577] = {.count = 1, .reusable = true}, REDUCE(sym_module_expression, 6),
  [579] = {.count = 1, .reusable = false}, REDUCE(sym_module_expression, 6),
  [581] = {.count = 1, .reusable = true}, REDUCE(sym_struct_definition, 6),
  [583] = {.count = 1, .reusable = false}, REDUCE(sym_struct_definition, 6),
  [585] = {.count = 1, .reusable = true}, SHIFT(203),
  [587] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameterized_identifier_repeat1, 2),
  [589] = {.count = 1, .reusable = false}, REDUCE(sym_parameterized_identifier, 5),
  [591] = {.count = 1, .reusable = true}, REDUCE(sym_parameterized_identifier, 5),
  [593] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameterized_identifier_repeat1, 2), SHIFT_REPEAT(126),
  [596] = {.count = 1, .reusable = true}, REDUCE(sym_typed_identifier, 3),
  [598] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [600] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_list, 4),
  [602] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 4),
  [604] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(132),
  [607] = {.count = 1, .reusable = true}, REDUCE(sym_function_expression, 6),
  [609] = {.count = 1, .reusable = false}, REDUCE(sym_function_expression, 6),
  [611] = {.count = 1, .reusable = false}, SHIFT(205),
  [613] = {.count = 1, .reusable = false}, SHIFT(206),
  [615] = {.count = 1, .reusable = false}, SHIFT(207),
  [617] = {.count = 1, .reusable = false}, SHIFT(208),
  [619] = {.count = 1, .reusable = true}, SHIFT(209),
  [621] = {.count = 1, .reusable = false}, SHIFT(209),
  [623] = {.count = 1, .reusable = true}, SHIFT(210),
  [625] = {.count = 1, .reusable = false}, SHIFT(210),
  [627] = {.count = 1, .reusable = false}, REDUCE(sym_elseif_clause, 3),
  [629] = {.count = 1, .reusable = true}, SHIFT(213),
  [631] = {.count = 1, .reusable = false}, SHIFT(213),
  [633] = {.count = 1, .reusable = false}, REDUCE(sym_else_clause, 3),
  [635] = {.count = 1, .reusable = true}, SHIFT(215),
  [637] = {.count = 1, .reusable = false}, SHIFT(215),
  [639] = {.count = 1, .reusable = true}, REDUCE(sym_conditional_expression, 6),
  [641] = {.count = 1, .reusable = false}, REDUCE(sym_conditional_expression, 6),
  [643] = {.count = 1, .reusable = true}, SHIFT(216),
  [645] = {.count = 1, .reusable = true}, SHIFT(218),
  [647] = {.count = 1, .reusable = true}, REDUCE(sym_function_expression, 7),
  [649] = {.count = 1, .reusable = false}, REDUCE(sym_function_expression, 7),
  [651] = {.count = 1, .reusable = false}, SHIFT(219),
  [653] = {.count = 1, .reusable = true}, SHIFT(220),
  [655] = {.count = 1, .reusable = false}, REDUCE(sym_elseif_clause, 4),
  [657] = {.count = 1, .reusable = true}, SHIFT(222),
  [659] = {.count = 1, .reusable = false}, SHIFT(222),
  [661] = {.count = 1, .reusable = false}, REDUCE(sym_else_clause, 4),
  [663] = {.count = 1, .reusable = true}, REDUCE(sym_conditional_expression, 7),
  [665] = {.count = 1, .reusable = false}, REDUCE(sym_conditional_expression, 7),
  [667] = {.count = 1, .reusable = true}, SHIFT(223),
  [669] = {.count = 1, .reusable = true}, SHIFT(224),
  [671] = {.count = 1, .reusable = false}, REDUCE(sym_elseif_clause, 5),
  [673] = {.count = 1, .reusable = true}, REDUCE(sym_conditional_expression, 8),
  [675] = {.count = 1, .reusable = false}, REDUCE(sym_conditional_expression, 8),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_julia() {
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
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
