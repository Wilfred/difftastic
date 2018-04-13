#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 228
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
      if (lookahead == ':')
        ADVANCE(47);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(48);
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
      if (lookahead == ':')
        ADVANCE(31);
      END_STATE();
    case 48:
      if (lookahead == ':')
        ADVANCE(34);
      END_STATE();
    case 49:
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
        SKIP(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(42);
      END_STATE();
    case 50:
      if (lookahead == '\n')
        ADVANCE(45);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == ':')
        ADVANCE(47);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '<')
        ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(42);
      END_STATE();
    case 51:
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
        SKIP(51);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(42);
      END_STATE();
    case 52:
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
        SKIP(52);
      END_STATE();
    case 53:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == ',')
        ADVANCE(13);
      if (lookahead == ':')
        ADVANCE(47);
      if (lookahead == '<')
        ADVANCE(48);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '}')
        ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(53);
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
  [12] = {.lex_state = 49},
  [13] = {.lex_state = 50},
  [14] = {.lex_state = 0},
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
  [29] = {.lex_state = 43},
  [30] = {.lex_state = 49},
  [31] = {.lex_state = 44},
  [32] = {.lex_state = 49},
  [33] = {.lex_state = 49},
  [34] = {.lex_state = 49},
  [35] = {.lex_state = 43},
  [36] = {.lex_state = 49},
  [37] = {.lex_state = 43},
  [38] = {.lex_state = 43},
  [39] = {.lex_state = 43},
  [40] = {.lex_state = 43},
  [41] = {.lex_state = 43},
  [42] = {.lex_state = 43},
  [43] = {.lex_state = 49},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 43},
  [46] = {.lex_state = 43},
  [47] = {.lex_state = 43},
  [48] = {.lex_state = 43},
  [49] = {.lex_state = 43},
  [50] = {.lex_state = 43},
  [51] = {.lex_state = 43},
  [52] = {.lex_state = 43},
  [53] = {.lex_state = 43},
  [54] = {.lex_state = 49},
  [55] = {.lex_state = 51},
  [56] = {.lex_state = 49},
  [57] = {.lex_state = 52},
  [58] = {.lex_state = 49},
  [59] = {.lex_state = 49},
  [60] = {.lex_state = 44},
  [61] = {.lex_state = 49},
  [62] = {.lex_state = 49},
  [63] = {.lex_state = 44},
  [64] = {.lex_state = 44},
  [65] = {.lex_state = 44},
  [66] = {.lex_state = 43},
  [67] = {.lex_state = 44},
  [68] = {.lex_state = 49},
  [69] = {.lex_state = 43},
  [70] = {.lex_state = 43},
  [71] = {.lex_state = 43},
  [72] = {.lex_state = 43},
  [73] = {.lex_state = 49},
  [74] = {.lex_state = 49},
  [75] = {.lex_state = 43},
  [76] = {.lex_state = 53},
  [77] = {.lex_state = 53},
  [78] = {.lex_state = 53},
  [79] = {.lex_state = 44},
  [80] = {.lex_state = 43},
  [81] = {.lex_state = 49},
  [82] = {.lex_state = 43},
  [83] = {.lex_state = 52},
  [84] = {.lex_state = 49},
  [85] = {.lex_state = 49},
  [86] = {.lex_state = 51},
  [87] = {.lex_state = 49},
  [88] = {.lex_state = 49},
  [89] = {.lex_state = 51},
  [90] = {.lex_state = 43},
  [91] = {.lex_state = 43},
  [92] = {.lex_state = 49},
  [93] = {.lex_state = 51},
  [94] = {.lex_state = 52},
  [95] = {.lex_state = 51},
  [96] = {.lex_state = 51},
  [97] = {.lex_state = 43},
  [98] = {.lex_state = 51},
  [99] = {.lex_state = 51},
  [100] = {.lex_state = 43},
  [101] = {.lex_state = 43},
  [102] = {.lex_state = 49},
  [103] = {.lex_state = 43},
  [104] = {.lex_state = 43},
  [105] = {.lex_state = 43},
  [106] = {.lex_state = 43},
  [107] = {.lex_state = 43},
  [108] = {.lex_state = 43},
  [109] = {.lex_state = 43},
  [110] = {.lex_state = 49},
  [111] = {.lex_state = 43},
  [112] = {.lex_state = 43},
  [113] = {.lex_state = 49},
  [114] = {.lex_state = 43},
  [115] = {.lex_state = 43},
  [116] = {.lex_state = 43},
  [117] = {.lex_state = 52},
  [118] = {.lex_state = 43},
  [119] = {.lex_state = 49},
  [120] = {.lex_state = 49},
  [121] = {.lex_state = 49},
  [122] = {.lex_state = 49},
  [123] = {.lex_state = 49},
  [124] = {.lex_state = 43},
  [125] = {.lex_state = 49},
  [126] = {.lex_state = 49},
  [127] = {.lex_state = 43},
  [128] = {.lex_state = 43},
  [129] = {.lex_state = 43},
  [130] = {.lex_state = 50},
  [131] = {.lex_state = 53},
  [132] = {.lex_state = 43},
  [133] = {.lex_state = 43},
  [134] = {.lex_state = 43},
  [135] = {.lex_state = 43},
  [136] = {.lex_state = 43},
  [137] = {.lex_state = 52},
  [138] = {.lex_state = 49},
  [139] = {.lex_state = 43},
  [140] = {.lex_state = 49},
  [141] = {.lex_state = 51},
  [142] = {.lex_state = 43},
  [143] = {.lex_state = 49},
  [144] = {.lex_state = 51},
  [145] = {.lex_state = 43},
  [146] = {.lex_state = 43},
  [147] = {.lex_state = 51},
  [148] = {.lex_state = 49},
  [149] = {.lex_state = 51},
  [150] = {.lex_state = 43},
  [151] = {.lex_state = 43},
  [152] = {.lex_state = 49},
  [153] = {.lex_state = 43},
  [154] = {.lex_state = 51},
  [155] = {.lex_state = 52},
  [156] = {.lex_state = 49},
  [157] = {.lex_state = 43},
  [158] = {.lex_state = 49},
  [159] = {.lex_state = 49},
  [160] = {.lex_state = 49},
  [161] = {.lex_state = 49},
  [162] = {.lex_state = 49},
  [163] = {.lex_state = 43},
  [164] = {.lex_state = 43},
  [165] = {.lex_state = 43},
  [166] = {.lex_state = 49},
  [167] = {.lex_state = 43},
  [168] = {.lex_state = 52},
  [169] = {.lex_state = 52},
  [170] = {.lex_state = 52},
  [171] = {.lex_state = 52},
  [172] = {.lex_state = 49},
  [173] = {.lex_state = 52},
  [174] = {.lex_state = 49},
  [175] = {.lex_state = 43},
  [176] = {.lex_state = 49},
  [177] = {.lex_state = 53},
  [178] = {.lex_state = 53},
  [179] = {.lex_state = 50},
  [180] = {.lex_state = 53},
  [181] = {.lex_state = 53},
  [182] = {.lex_state = 52},
  [183] = {.lex_state = 43},
  [184] = {.lex_state = 52},
  [185] = {.lex_state = 49},
  [186] = {.lex_state = 43},
  [187] = {.lex_state = 51},
  [188] = {.lex_state = 43},
  [189] = {.lex_state = 51},
  [190] = {.lex_state = 43},
  [191] = {.lex_state = 51},
  [192] = {.lex_state = 43},
  [193] = {.lex_state = 49},
  [194] = {.lex_state = 51},
  [195] = {.lex_state = 43},
  [196] = {.lex_state = 43},
  [197] = {.lex_state = 43},
  [198] = {.lex_state = 51},
  [199] = {.lex_state = 49},
  [200] = {.lex_state = 43},
  [201] = {.lex_state = 49},
  [202] = {.lex_state = 49},
  [203] = {.lex_state = 43},
  [204] = {.lex_state = 43},
  [205] = {.lex_state = 43},
  [206] = {.lex_state = 53},
  [207] = {.lex_state = 53},
  [208] = {.lex_state = 49},
  [209] = {.lex_state = 51},
  [210] = {.lex_state = 51},
  [211] = {.lex_state = 51},
  [212] = {.lex_state = 43},
  [213] = {.lex_state = 51},
  [214] = {.lex_state = 43},
  [215] = {.lex_state = 43},
  [216] = {.lex_state = 43},
  [217] = {.lex_state = 49},
  [218] = {.lex_state = 43},
  [219] = {.lex_state = 49},
  [220] = {.lex_state = 43},
  [221] = {.lex_state = 53},
  [222] = {.lex_state = 51},
  [223] = {.lex_state = 51},
  [224] = {.lex_state = 43},
  [225] = {.lex_state = 43},
  [226] = {.lex_state = 49},
  [227] = {.lex_state = 51},
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
    [sym_typed_identifier] = STATE(12),
    [sym_parameterized_identifier] = STATE(13),
    [sym_identifier] = ACTIONS(30),
    [sym_comment] = ACTIONS(24),
  },
  [5] = {
    [sym_identifier] = ACTIONS(32),
    [sym_comment] = ACTIONS(24),
  },
  [6] = {
    [sym__expression] = STATE(20),
    [sym_module_expression] = STATE(20),
    [sym_struct_definition] = STATE(20),
    [sym_function_expression] = STATE(20),
    [sym_call_expression] = STATE(20),
    [sym_assignment_expression] = STATE(20),
    [sym_binary_expression] = STATE(20),
    [sym_pair_expression] = STATE(20),
    [sym_conditional_expression] = STATE(20),
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
    [sym_argument_list] = STATE(30),
    [aux_sym__expression_list_repeat1] = STATE(31),
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
    [sym__expression] = STATE(33),
    [sym_module_expression] = STATE(33),
    [sym_struct_definition] = STATE(33),
    [sym_function_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_assignment_expression] = STATE(33),
    [sym_binary_expression] = STATE(33),
    [sym_pair_expression] = STATE(33),
    [sym_conditional_expression] = STATE(33),
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
    [sym_typed_identifier] = STATE(34),
    [sym_parameterized_identifier] = STATE(13),
    [sym_identifier] = ACTIONS(30),
    [sym_comment] = ACTIONS(24),
  },
  [11] = {
    [anon_sym_end] = ACTIONS(80),
    [anon_sym_COLON_COLON] = ACTIONS(80),
    [anon_sym_LT_COLON] = ACTIONS(80),
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
    [anon_sym_end] = ACTIONS(92),
    [anon_sym_COLON_COLON] = ACTIONS(94),
    [anon_sym_LT_COLON] = ACTIONS(94),
    [anon_sym_LF] = ACTIONS(96),
    [anon_sym_SEMI] = ACTIONS(92),
    [sym_comment] = ACTIONS(72),
  },
  [14] = {
    [sym_parameter_list] = STATE(40),
    [anon_sym_LPAREN] = ACTIONS(98),
    [sym_comment] = ACTIONS(24),
  },
  [15] = {
    [sym_identifier] = ACTIONS(100),
    [sym_comment] = ACTIONS(24),
  },
  [16] = {
    [anon_sym_struct] = ACTIONS(102),
    [sym_comment] = ACTIONS(24),
  },
  [17] = {
    [sym_typed_identifier] = STATE(43),
    [sym_parameterized_identifier] = STATE(13),
    [sym_identifier] = ACTIONS(30),
    [sym_comment] = ACTIONS(24),
  },
  [18] = {
    [sym_identifier] = ACTIONS(104),
    [sym_comment] = ACTIONS(24),
  },
  [19] = {
    [sym__expression] = STATE(45),
    [sym_module_expression] = STATE(45),
    [sym_struct_definition] = STATE(45),
    [sym_function_expression] = STATE(45),
    [sym_call_expression] = STATE(45),
    [sym_assignment_expression] = STATE(45),
    [sym_binary_expression] = STATE(45),
    [sym_pair_expression] = STATE(45),
    [sym_conditional_expression] = STATE(45),
    [anon_sym_module] = ACTIONS(34),
    [anon_sym_mutable] = ACTIONS(36),
    [anon_sym_struct] = ACTIONS(38),
    [anon_sym_function] = ACTIONS(40),
    [anon_sym_if] = ACTIONS(42),
    [sym_identifier] = ACTIONS(106),
    [sym_number] = ACTIONS(108),
    [sym_string] = ACTIONS(108),
    [sym_comment] = ACTIONS(24),
  },
  [20] = {
    [sym__expression] = STATE(54),
    [sym_module_expression] = STATE(54),
    [sym_struct_definition] = STATE(54),
    [sym_function_expression] = STATE(54),
    [sym_call_expression] = STATE(54),
    [sym_argument_list] = STATE(55),
    [sym_assignment_expression] = STATE(54),
    [sym_binary_expression] = STATE(54),
    [sym_pair_expression] = STATE(54),
    [sym_conditional_expression] = STATE(54),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_PIPE_PIPE] = ACTIONS(112),
    [anon_sym_AMP_AMP] = ACTIONS(114),
    [anon_sym_EQ_GT] = ACTIONS(116),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(118),
    [sym_number] = ACTIONS(120),
    [sym_string] = ACTIONS(120),
    [sym__times_operator] = ACTIONS(122),
    [sym__plus_operator] = ACTIONS(124),
    [sym__arrow_operator] = ACTIONS(126),
    [sym__assign_operator] = ACTIONS(128),
    [sym_comment] = ACTIONS(24),
  },
  [21] = {
    [sym__expression] = STATE(57),
    [sym_module_expression] = STATE(57),
    [sym_struct_definition] = STATE(57),
    [sym_function_expression] = STATE(57),
    [sym_call_expression] = STATE(57),
    [sym_assignment_expression] = STATE(57),
    [sym_binary_expression] = STATE(57),
    [sym_pair_expression] = STATE(57),
    [sym_conditional_expression] = STATE(57),
    [anon_sym_module] = ACTIONS(34),
    [anon_sym_mutable] = ACTIONS(36),
    [anon_sym_struct] = ACTIONS(38),
    [anon_sym_function] = ACTIONS(40),
    [anon_sym_RPAREN] = ACTIONS(130),
    [anon_sym_if] = ACTIONS(42),
    [sym_identifier] = ACTIONS(132),
    [sym_number] = ACTIONS(134),
    [sym_string] = ACTIONS(134),
    [sym_comment] = ACTIONS(24),
  },
  [22] = {
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
    [sym_identifier] = ACTIONS(136),
    [sym_number] = ACTIONS(138),
    [sym_string] = ACTIONS(138),
    [sym_comment] = ACTIONS(24),
  },
  [23] = {
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
    [sym_identifier] = ACTIONS(140),
    [sym_number] = ACTIONS(142),
    [sym_string] = ACTIONS(142),
    [sym_comment] = ACTIONS(24),
  },
  [24] = {
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
    [sym_identifier] = ACTIONS(144),
    [sym_number] = ACTIONS(146),
    [sym_string] = ACTIONS(146),
    [sym_comment] = ACTIONS(24),
  },
  [25] = {
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
    [sym_identifier] = ACTIONS(148),
    [sym_number] = ACTIONS(150),
    [sym_string] = ACTIONS(150),
    [sym_comment] = ACTIONS(24),
  },
  [26] = {
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
    [sym_identifier] = ACTIONS(152),
    [sym_number] = ACTIONS(154),
    [sym_string] = ACTIONS(154),
    [sym_comment] = ACTIONS(24),
  },
  [27] = {
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
    [sym_identifier] = ACTIONS(156),
    [sym_number] = ACTIONS(158),
    [sym_string] = ACTIONS(158),
    [sym_comment] = ACTIONS(24),
  },
  [28] = {
    [sym__expression] = STATE(64),
    [sym_module_expression] = STATE(64),
    [sym_struct_definition] = STATE(64),
    [sym_function_expression] = STATE(64),
    [sym_call_expression] = STATE(64),
    [sym_assignment_expression] = STATE(64),
    [sym_binary_expression] = STATE(64),
    [sym_pair_expression] = STATE(64),
    [sym_conditional_expression] = STATE(64),
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
    [sym__expression] = STATE(65),
    [sym_module_expression] = STATE(65),
    [sym_struct_definition] = STATE(65),
    [sym_function_expression] = STATE(65),
    [sym_call_expression] = STATE(65),
    [sym_assignment_expression] = STATE(65),
    [sym_binary_expression] = STATE(65),
    [sym_pair_expression] = STATE(65),
    [sym_conditional_expression] = STATE(65),
    [ts_builtin_sym_end] = ACTIONS(164),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(166),
    [sym_number] = ACTIONS(168),
    [sym_string] = ACTIONS(168),
    [sym_comment] = ACTIONS(24),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(170),
    [anon_sym_end] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_PIPE_PIPE] = ACTIONS(172),
    [anon_sym_AMP_AMP] = ACTIONS(172),
    [anon_sym_EQ_GT] = ACTIONS(172),
    [anon_sym_elseif] = ACTIONS(172),
    [anon_sym_else] = ACTIONS(172),
    [sym__times_operator] = ACTIONS(172),
    [sym__plus_operator] = ACTIONS(172),
    [sym__arrow_operator] = ACTIONS(172),
    [sym__assign_operator] = ACTIONS(172),
    [anon_sym_LF] = ACTIONS(170),
    [anon_sym_SEMI] = ACTIONS(172),
    [sym_comment] = ACTIONS(72),
  },
  [31] = {
    [aux_sym__expression_list_repeat1] = STATE(67),
    [ts_builtin_sym_end] = ACTIONS(164),
    [anon_sym_LF] = ACTIONS(174),
    [anon_sym_SEMI] = ACTIONS(176),
    [sym_comment] = ACTIONS(72),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(178),
    [anon_sym_end] = ACTIONS(180),
    [anon_sym_LPAREN] = ACTIONS(180),
    [anon_sym_PIPE_PIPE] = ACTIONS(180),
    [anon_sym_AMP_AMP] = ACTIONS(180),
    [anon_sym_EQ_GT] = ACTIONS(180),
    [anon_sym_elseif] = ACTIONS(180),
    [anon_sym_else] = ACTIONS(180),
    [sym__times_operator] = ACTIONS(180),
    [sym__plus_operator] = ACTIONS(180),
    [sym__arrow_operator] = ACTIONS(180),
    [sym__assign_operator] = ACTIONS(180),
    [anon_sym_LF] = ACTIONS(178),
    [anon_sym_SEMI] = ACTIONS(180),
    [sym_comment] = ACTIONS(72),
  },
  [33] = {
    [sym_argument_list] = STATE(30),
    [aux_sym__expression_list_repeat1] = STATE(73),
    [anon_sym_end] = ACTIONS(182),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_PIPE_PIPE] = ACTIONS(54),
    [anon_sym_AMP_AMP] = ACTIONS(56),
    [anon_sym_EQ_GT] = ACTIONS(184),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(62),
    [sym__arrow_operator] = ACTIONS(186),
    [sym__assign_operator] = ACTIONS(188),
    [anon_sym_LF] = ACTIONS(190),
    [anon_sym_SEMI] = ACTIONS(192),
    [sym_comment] = ACTIONS(72),
  },
  [34] = {
    [anon_sym_end] = ACTIONS(194),
    [anon_sym_LF] = ACTIONS(196),
    [anon_sym_SEMI] = ACTIONS(198),
    [sym_comment] = ACTIONS(72),
  },
  [35] = {
    [sym_typed_identifier] = STATE(77),
    [sym_parameterized_identifier] = STATE(78),
    [sym_identifier] = ACTIONS(200),
    [sym_comment] = ACTIONS(24),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(202),
    [anon_sym_end] = ACTIONS(204),
    [anon_sym_LPAREN] = ACTIONS(204),
    [anon_sym_PIPE_PIPE] = ACTIONS(204),
    [anon_sym_AMP_AMP] = ACTIONS(204),
    [anon_sym_EQ_GT] = ACTIONS(204),
    [anon_sym_elseif] = ACTIONS(204),
    [anon_sym_else] = ACTIONS(204),
    [sym__times_operator] = ACTIONS(204),
    [sym__plus_operator] = ACTIONS(204),
    [sym__arrow_operator] = ACTIONS(204),
    [sym__assign_operator] = ACTIONS(204),
    [anon_sym_LF] = ACTIONS(202),
    [anon_sym_SEMI] = ACTIONS(204),
    [sym_comment] = ACTIONS(72),
  },
  [37] = {
    [sym_typed_identifier] = STATE(79),
    [sym_parameterized_identifier] = STATE(13),
    [aux_sym_struct_definition_repeat1] = STATE(80),
    [anon_sym_end] = ACTIONS(194),
    [sym_identifier] = ACTIONS(206),
    [sym_comment] = ACTIONS(24),
  },
  [38] = {
    [sym_parameterized_identifier] = STATE(81),
    [sym_identifier] = ACTIONS(30),
    [sym_comment] = ACTIONS(24),
  },
  [39] = {
    [anon_sym_RPAREN] = ACTIONS(208),
    [sym_identifier] = ACTIONS(210),
    [sym_comment] = ACTIONS(24),
  },
  [40] = {
    [sym__expression] = STATE(85),
    [sym_module_expression] = STATE(85),
    [sym_struct_definition] = STATE(85),
    [sym_function_expression] = STATE(85),
    [sym_call_expression] = STATE(85),
    [sym_assignment_expression] = STATE(85),
    [sym_binary_expression] = STATE(85),
    [sym_pair_expression] = STATE(85),
    [sym_conditional_expression] = STATE(85),
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
  [41] = {
    [sym__expression] = STATE(87),
    [sym_module_expression] = STATE(87),
    [sym_struct_definition] = STATE(87),
    [sym_function_expression] = STATE(87),
    [sym_call_expression] = STATE(87),
    [sym_assignment_expression] = STATE(87),
    [sym_binary_expression] = STATE(87),
    [sym_pair_expression] = STATE(87),
    [sym_conditional_expression] = STATE(87),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(218),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(220),
    [sym_number] = ACTIONS(222),
    [sym_string] = ACTIONS(222),
    [sym_comment] = ACTIONS(24),
  },
  [42] = {
    [sym_typed_identifier] = STATE(88),
    [sym_parameterized_identifier] = STATE(13),
    [sym_identifier] = ACTIONS(30),
    [sym_comment] = ACTIONS(24),
  },
  [43] = {
    [anon_sym_end] = ACTIONS(224),
    [anon_sym_LF] = ACTIONS(226),
    [anon_sym_SEMI] = ACTIONS(228),
    [sym_comment] = ACTIONS(72),
  },
  [44] = {
    [sym_parameter_list] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(98),
    [sym_comment] = ACTIONS(24),
  },
  [45] = {
    [sym__expression] = STATE(92),
    [sym_module_expression] = STATE(92),
    [sym_struct_definition] = STATE(92),
    [sym_function_expression] = STATE(92),
    [sym_call_expression] = STATE(92),
    [sym_argument_list] = STATE(55),
    [sym_assignment_expression] = STATE(92),
    [sym_binary_expression] = STATE(92),
    [sym_pair_expression] = STATE(92),
    [sym_conditional_expression] = STATE(92),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_PIPE_PIPE] = ACTIONS(112),
    [anon_sym_AMP_AMP] = ACTIONS(114),
    [anon_sym_EQ_GT] = ACTIONS(116),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(230),
    [sym_number] = ACTIONS(232),
    [sym_string] = ACTIONS(232),
    [sym__times_operator] = ACTIONS(122),
    [sym__plus_operator] = ACTIONS(124),
    [sym__arrow_operator] = ACTIONS(126),
    [sym__assign_operator] = ACTIONS(128),
    [sym_comment] = ACTIONS(24),
  },
  [46] = {
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
    [anon_sym_RPAREN] = ACTIONS(234),
    [anon_sym_if] = ACTIONS(42),
    [sym_identifier] = ACTIONS(236),
    [sym_number] = ACTIONS(238),
    [sym_string] = ACTIONS(238),
    [sym_comment] = ACTIONS(24),
  },
  [47] = {
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
    [sym_identifier] = ACTIONS(240),
    [sym_number] = ACTIONS(242),
    [sym_string] = ACTIONS(242),
    [sym_comment] = ACTIONS(24),
  },
  [48] = {
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
    [sym_identifier] = ACTIONS(244),
    [sym_number] = ACTIONS(246),
    [sym_string] = ACTIONS(246),
    [sym_comment] = ACTIONS(24),
  },
  [49] = {
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
    [sym_identifier] = ACTIONS(248),
    [sym_number] = ACTIONS(250),
    [sym_string] = ACTIONS(250),
    [sym_comment] = ACTIONS(24),
  },
  [50] = {
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
    [sym_identifier] = ACTIONS(252),
    [sym_number] = ACTIONS(254),
    [sym_string] = ACTIONS(254),
    [sym_comment] = ACTIONS(24),
  },
  [51] = {
    [sym__expression] = STATE(99),
    [sym_module_expression] = STATE(99),
    [sym_struct_definition] = STATE(99),
    [sym_function_expression] = STATE(99),
    [sym_call_expression] = STATE(99),
    [sym_assignment_expression] = STATE(99),
    [sym_binary_expression] = STATE(99),
    [sym_pair_expression] = STATE(99),
    [sym_conditional_expression] = STATE(99),
    [anon_sym_module] = ACTIONS(34),
    [anon_sym_mutable] = ACTIONS(36),
    [anon_sym_struct] = ACTIONS(38),
    [anon_sym_function] = ACTIONS(40),
    [anon_sym_if] = ACTIONS(42),
    [sym_identifier] = ACTIONS(256),
    [sym_number] = ACTIONS(258),
    [sym_string] = ACTIONS(258),
    [sym_comment] = ACTIONS(24),
  },
  [52] = {
    [sym__expression] = STATE(100),
    [sym_module_expression] = STATE(100),
    [sym_struct_definition] = STATE(100),
    [sym_function_expression] = STATE(100),
    [sym_call_expression] = STATE(100),
    [sym_assignment_expression] = STATE(100),
    [sym_binary_expression] = STATE(100),
    [sym_pair_expression] = STATE(100),
    [sym_conditional_expression] = STATE(100),
    [anon_sym_module] = ACTIONS(34),
    [anon_sym_mutable] = ACTIONS(36),
    [anon_sym_struct] = ACTIONS(38),
    [anon_sym_function] = ACTIONS(40),
    [anon_sym_if] = ACTIONS(42),
    [sym_identifier] = ACTIONS(260),
    [sym_number] = ACTIONS(262),
    [sym_string] = ACTIONS(262),
    [sym_comment] = ACTIONS(24),
  },
  [53] = {
    [sym__expression] = STATE(101),
    [sym_module_expression] = STATE(101),
    [sym_struct_definition] = STATE(101),
    [sym_function_expression] = STATE(101),
    [sym_call_expression] = STATE(101),
    [sym_assignment_expression] = STATE(101),
    [sym_binary_expression] = STATE(101),
    [sym_pair_expression] = STATE(101),
    [sym_conditional_expression] = STATE(101),
    [anon_sym_module] = ACTIONS(34),
    [anon_sym_mutable] = ACTIONS(36),
    [anon_sym_struct] = ACTIONS(38),
    [anon_sym_function] = ACTIONS(40),
    [anon_sym_if] = ACTIONS(42),
    [sym_identifier] = ACTIONS(264),
    [sym_number] = ACTIONS(266),
    [sym_string] = ACTIONS(266),
    [sym_comment] = ACTIONS(24),
  },
  [54] = {
    [sym_argument_list] = STATE(30),
    [sym_elseif_clause] = STATE(111),
    [sym_else_clause] = STATE(109),
    [aux_sym__expression_list_repeat1] = STATE(110),
    [aux_sym_conditional_expression_repeat1] = STATE(111),
    [anon_sym_end] = ACTIONS(268),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_PIPE_PIPE] = ACTIONS(54),
    [anon_sym_AMP_AMP] = ACTIONS(56),
    [anon_sym_EQ_GT] = ACTIONS(270),
    [anon_sym_elseif] = ACTIONS(272),
    [anon_sym_else] = ACTIONS(274),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(62),
    [sym__arrow_operator] = ACTIONS(276),
    [sym__assign_operator] = ACTIONS(278),
    [anon_sym_LF] = ACTIONS(280),
    [anon_sym_SEMI] = ACTIONS(282),
    [sym_comment] = ACTIONS(72),
  },
  [55] = {
    [anon_sym_module] = ACTIONS(172),
    [anon_sym_mutable] = ACTIONS(172),
    [anon_sym_struct] = ACTIONS(172),
    [anon_sym_COMMA] = ACTIONS(170),
    [anon_sym_function] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_RPAREN] = ACTIONS(170),
    [anon_sym_PIPE_PIPE] = ACTIONS(172),
    [anon_sym_AMP_AMP] = ACTIONS(170),
    [anon_sym_EQ_GT] = ACTIONS(170),
    [anon_sym_if] = ACTIONS(172),
    [sym_identifier] = ACTIONS(172),
    [sym_number] = ACTIONS(170),
    [sym_string] = ACTIONS(170),
    [sym__times_operator] = ACTIONS(172),
    [sym__plus_operator] = ACTIONS(172),
    [sym__arrow_operator] = ACTIONS(170),
    [sym__assign_operator] = ACTIONS(172),
    [sym_comment] = ACTIONS(24),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(284),
    [anon_sym_end] = ACTIONS(286),
    [anon_sym_LPAREN] = ACTIONS(286),
    [anon_sym_PIPE_PIPE] = ACTIONS(286),
    [anon_sym_AMP_AMP] = ACTIONS(286),
    [anon_sym_EQ_GT] = ACTIONS(286),
    [anon_sym_elseif] = ACTIONS(286),
    [anon_sym_else] = ACTIONS(286),
    [sym__times_operator] = ACTIONS(286),
    [sym__plus_operator] = ACTIONS(286),
    [sym__arrow_operator] = ACTIONS(286),
    [sym__assign_operator] = ACTIONS(286),
    [anon_sym_LF] = ACTIONS(284),
    [anon_sym_SEMI] = ACTIONS(286),
    [sym_comment] = ACTIONS(72),
  },
  [57] = {
    [sym_argument_list] = STATE(55),
    [aux_sym_argument_list_repeat1] = STATE(117),
    [anon_sym_COMMA] = ACTIONS(288),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(290),
    [anon_sym_PIPE_PIPE] = ACTIONS(112),
    [anon_sym_AMP_AMP] = ACTIONS(114),
    [anon_sym_EQ_GT] = ACTIONS(292),
    [sym__times_operator] = ACTIONS(122),
    [sym__plus_operator] = ACTIONS(124),
    [sym__arrow_operator] = ACTIONS(294),
    [sym__assign_operator] = ACTIONS(296),
    [sym_comment] = ACTIONS(24),
  },
  [58] = {
    [sym_argument_list] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(298),
    [anon_sym_end] = ACTIONS(300),
    [anon_sym_LPAREN] = ACTIONS(300),
    [anon_sym_PIPE_PIPE] = ACTIONS(300),
    [anon_sym_AMP_AMP] = ACTIONS(300),
    [anon_sym_EQ_GT] = ACTIONS(300),
    [anon_sym_elseif] = ACTIONS(300),
    [anon_sym_else] = ACTIONS(300),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(62),
    [sym__arrow_operator] = ACTIONS(300),
    [sym__assign_operator] = ACTIONS(300),
    [anon_sym_LF] = ACTIONS(298),
    [anon_sym_SEMI] = ACTIONS(300),
    [sym_comment] = ACTIONS(72),
  },
  [59] = {
    [sym_argument_list] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(298),
    [anon_sym_end] = ACTIONS(300),
    [anon_sym_LPAREN] = ACTIONS(300),
    [anon_sym_PIPE_PIPE] = ACTIONS(54),
    [anon_sym_AMP_AMP] = ACTIONS(300),
    [anon_sym_EQ_GT] = ACTIONS(300),
    [anon_sym_elseif] = ACTIONS(300),
    [anon_sym_else] = ACTIONS(300),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(62),
    [sym__arrow_operator] = ACTIONS(300),
    [sym__assign_operator] = ACTIONS(300),
    [anon_sym_LF] = ACTIONS(298),
    [anon_sym_SEMI] = ACTIONS(300),
    [sym_comment] = ACTIONS(72),
  },
  [60] = {
    [sym_argument_list] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(302),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_PIPE_PIPE] = ACTIONS(54),
    [anon_sym_AMP_AMP] = ACTIONS(56),
    [anon_sym_EQ_GT] = ACTIONS(58),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(62),
    [sym__arrow_operator] = ACTIONS(64),
    [sym__assign_operator] = ACTIONS(66),
    [anon_sym_LF] = ACTIONS(302),
    [anon_sym_SEMI] = ACTIONS(304),
    [sym_comment] = ACTIONS(72),
  },
  [61] = {
    [sym_argument_list] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(298),
    [anon_sym_end] = ACTIONS(300),
    [anon_sym_LPAREN] = ACTIONS(300),
    [anon_sym_PIPE_PIPE] = ACTIONS(300),
    [anon_sym_AMP_AMP] = ACTIONS(300),
    [anon_sym_EQ_GT] = ACTIONS(300),
    [anon_sym_elseif] = ACTIONS(300),
    [anon_sym_else] = ACTIONS(300),
    [sym__times_operator] = ACTIONS(300),
    [sym__plus_operator] = ACTIONS(300),
    [sym__arrow_operator] = ACTIONS(300),
    [sym__assign_operator] = ACTIONS(300),
    [anon_sym_LF] = ACTIONS(298),
    [anon_sym_SEMI] = ACTIONS(300),
    [sym_comment] = ACTIONS(72),
  },
  [62] = {
    [sym_argument_list] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(298),
    [anon_sym_end] = ACTIONS(300),
    [anon_sym_LPAREN] = ACTIONS(300),
    [anon_sym_PIPE_PIPE] = ACTIONS(300),
    [anon_sym_AMP_AMP] = ACTIONS(300),
    [anon_sym_EQ_GT] = ACTIONS(300),
    [anon_sym_elseif] = ACTIONS(300),
    [anon_sym_else] = ACTIONS(300),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(300),
    [sym__arrow_operator] = ACTIONS(300),
    [sym__assign_operator] = ACTIONS(300),
    [anon_sym_LF] = ACTIONS(298),
    [anon_sym_SEMI] = ACTIONS(300),
    [sym_comment] = ACTIONS(72),
  },
  [63] = {
    [sym_argument_list] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(298),
    [anon_sym_LPAREN] = ACTIONS(300),
    [anon_sym_PIPE_PIPE] = ACTIONS(54),
    [anon_sym_AMP_AMP] = ACTIONS(56),
    [anon_sym_EQ_GT] = ACTIONS(300),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(62),
    [sym__arrow_operator] = ACTIONS(64),
    [sym__assign_operator] = ACTIONS(300),
    [anon_sym_LF] = ACTIONS(298),
    [anon_sym_SEMI] = ACTIONS(300),
    [sym_comment] = ACTIONS(72),
  },
  [64] = {
    [sym_argument_list] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(306),
    [anon_sym_LPAREN] = ACTIONS(308),
    [anon_sym_PIPE_PIPE] = ACTIONS(54),
    [anon_sym_AMP_AMP] = ACTIONS(56),
    [anon_sym_EQ_GT] = ACTIONS(308),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(62),
    [sym__arrow_operator] = ACTIONS(64),
    [sym__assign_operator] = ACTIONS(66),
    [anon_sym_LF] = ACTIONS(306),
    [anon_sym_SEMI] = ACTIONS(308),
    [sym_comment] = ACTIONS(72),
  },
  [65] = {
    [sym_argument_list] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(310),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_PIPE_PIPE] = ACTIONS(54),
    [anon_sym_AMP_AMP] = ACTIONS(56),
    [anon_sym_EQ_GT] = ACTIONS(58),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(62),
    [sym__arrow_operator] = ACTIONS(64),
    [sym__assign_operator] = ACTIONS(66),
    [anon_sym_LF] = ACTIONS(310),
    [anon_sym_SEMI] = ACTIONS(312),
    [sym_comment] = ACTIONS(72),
  },
  [66] = {
    [sym__expression] = STATE(65),
    [sym_module_expression] = STATE(65),
    [sym_struct_definition] = STATE(65),
    [sym_function_expression] = STATE(65),
    [sym_call_expression] = STATE(65),
    [sym_assignment_expression] = STATE(65),
    [sym_binary_expression] = STATE(65),
    [sym_pair_expression] = STATE(65),
    [sym_conditional_expression] = STATE(65),
    [ts_builtin_sym_end] = ACTIONS(314),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(166),
    [sym_number] = ACTIONS(168),
    [sym_string] = ACTIONS(168),
    [sym_comment] = ACTIONS(24),
  },
  [67] = {
    [aux_sym__expression_list_repeat1] = STATE(67),
    [ts_builtin_sym_end] = ACTIONS(310),
    [anon_sym_LF] = ACTIONS(316),
    [anon_sym_SEMI] = ACTIONS(319),
    [sym_comment] = ACTIONS(72),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(322),
    [anon_sym_end] = ACTIONS(324),
    [anon_sym_LPAREN] = ACTIONS(324),
    [anon_sym_PIPE_PIPE] = ACTIONS(324),
    [anon_sym_AMP_AMP] = ACTIONS(324),
    [anon_sym_EQ_GT] = ACTIONS(324),
    [anon_sym_elseif] = ACTIONS(324),
    [anon_sym_else] = ACTIONS(324),
    [sym__times_operator] = ACTIONS(324),
    [sym__plus_operator] = ACTIONS(324),
    [sym__arrow_operator] = ACTIONS(324),
    [sym__assign_operator] = ACTIONS(324),
    [anon_sym_LF] = ACTIONS(322),
    [anon_sym_SEMI] = ACTIONS(324),
    [sym_comment] = ACTIONS(72),
  },
  [69] = {
    [sym__expression] = STATE(119),
    [sym_module_expression] = STATE(119),
    [sym_struct_definition] = STATE(119),
    [sym_function_expression] = STATE(119),
    [sym_call_expression] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym_pair_expression] = STATE(119),
    [sym_conditional_expression] = STATE(119),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(326),
    [sym_number] = ACTIONS(328),
    [sym_string] = ACTIONS(328),
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
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(330),
    [sym_number] = ACTIONS(332),
    [sym_string] = ACTIONS(332),
    [sym_comment] = ACTIONS(24),
  },
  [71] = {
    [sym__expression] = STATE(121),
    [sym_module_expression] = STATE(121),
    [sym_struct_definition] = STATE(121),
    [sym_function_expression] = STATE(121),
    [sym_call_expression] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym_pair_expression] = STATE(121),
    [sym_conditional_expression] = STATE(121),
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
  [72] = {
    [sym__expression] = STATE(123),
    [sym_module_expression] = STATE(123),
    [sym_struct_definition] = STATE(123),
    [sym_function_expression] = STATE(123),
    [sym_call_expression] = STATE(123),
    [sym_assignment_expression] = STATE(123),
    [sym_binary_expression] = STATE(123),
    [sym_pair_expression] = STATE(123),
    [sym_conditional_expression] = STATE(123),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(338),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(340),
    [sym_number] = ACTIONS(342),
    [sym_string] = ACTIONS(342),
    [sym_comment] = ACTIONS(24),
  },
  [73] = {
    [aux_sym__expression_list_repeat1] = STATE(125),
    [anon_sym_end] = ACTIONS(338),
    [anon_sym_LF] = ACTIONS(344),
    [anon_sym_SEMI] = ACTIONS(346),
    [sym_comment] = ACTIONS(72),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(348),
    [anon_sym_end] = ACTIONS(350),
    [anon_sym_LPAREN] = ACTIONS(350),
    [anon_sym_PIPE_PIPE] = ACTIONS(350),
    [anon_sym_AMP_AMP] = ACTIONS(350),
    [anon_sym_EQ_GT] = ACTIONS(350),
    [anon_sym_elseif] = ACTIONS(350),
    [anon_sym_else] = ACTIONS(350),
    [sym__times_operator] = ACTIONS(350),
    [sym__plus_operator] = ACTIONS(350),
    [sym__arrow_operator] = ACTIONS(350),
    [sym__assign_operator] = ACTIONS(350),
    [anon_sym_LF] = ACTIONS(348),
    [anon_sym_SEMI] = ACTIONS(350),
    [sym_comment] = ACTIONS(72),
  },
  [75] = {
    [sym_typed_identifier] = STATE(79),
    [sym_parameterized_identifier] = STATE(13),
    [aux_sym_struct_definition_repeat1] = STATE(127),
    [anon_sym_end] = ACTIONS(352),
    [sym_identifier] = ACTIONS(206),
    [sym_comment] = ACTIONS(24),
  },
  [76] = {
    [anon_sym_COLON_COLON] = ACTIONS(84),
    [anon_sym_LT_COLON] = ACTIONS(84),
    [anon_sym_LBRACE] = ACTIONS(354),
    [anon_sym_COMMA] = ACTIONS(84),
    [anon_sym_RBRACE] = ACTIONS(84),
    [sym_comment] = ACTIONS(24),
  },
  [77] = {
    [aux_sym_parameterized_identifier_repeat1] = STATE(131),
    [anon_sym_COMMA] = ACTIONS(356),
    [anon_sym_RBRACE] = ACTIONS(358),
    [sym_comment] = ACTIONS(24),
  },
  [78] = {
    [anon_sym_COLON_COLON] = ACTIONS(360),
    [anon_sym_LT_COLON] = ACTIONS(360),
    [anon_sym_COMMA] = ACTIONS(96),
    [anon_sym_RBRACE] = ACTIONS(96),
    [sym_comment] = ACTIONS(24),
  },
  [79] = {
    [anon_sym_LF] = ACTIONS(362),
    [anon_sym_SEMI] = ACTIONS(364),
    [sym_comment] = ACTIONS(72),
  },
  [80] = {
    [sym_typed_identifier] = STATE(79),
    [sym_parameterized_identifier] = STATE(13),
    [aux_sym_struct_definition_repeat1] = STATE(134),
    [anon_sym_end] = ACTIONS(352),
    [sym_identifier] = ACTIONS(206),
    [sym_comment] = ACTIONS(24),
  },
  [81] = {
    [anon_sym_end] = ACTIONS(366),
    [anon_sym_LF] = ACTIONS(368),
    [anon_sym_SEMI] = ACTIONS(366),
    [sym_comment] = ACTIONS(72),
  },
  [82] = {
    [anon_sym_module] = ACTIONS(370),
    [anon_sym_end] = ACTIONS(370),
    [anon_sym_mutable] = ACTIONS(370),
    [anon_sym_struct] = ACTIONS(370),
    [anon_sym_function] = ACTIONS(370),
    [anon_sym_if] = ACTIONS(370),
    [sym_identifier] = ACTIONS(370),
    [sym_number] = ACTIONS(372),
    [sym_string] = ACTIONS(372),
    [sym_comment] = ACTIONS(24),
  },
  [83] = {
    [aux_sym_parameter_list_repeat1] = STATE(137),
    [anon_sym_COMMA] = ACTIONS(374),
    [anon_sym_RPAREN] = ACTIONS(376),
    [sym_comment] = ACTIONS(24),
  },
  [84] = {
    [ts_builtin_sym_end] = ACTIONS(378),
    [anon_sym_end] = ACTIONS(380),
    [anon_sym_LPAREN] = ACTIONS(380),
    [anon_sym_PIPE_PIPE] = ACTIONS(380),
    [anon_sym_AMP_AMP] = ACTIONS(380),
    [anon_sym_EQ_GT] = ACTIONS(380),
    [anon_sym_elseif] = ACTIONS(380),
    [anon_sym_else] = ACTIONS(380),
    [sym__times_operator] = ACTIONS(380),
    [sym__plus_operator] = ACTIONS(380),
    [sym__arrow_operator] = ACTIONS(380),
    [sym__assign_operator] = ACTIONS(380),
    [anon_sym_LF] = ACTIONS(378),
    [anon_sym_SEMI] = ACTIONS(380),
    [sym_comment] = ACTIONS(72),
  },
  [85] = {
    [sym_argument_list] = STATE(30),
    [aux_sym__expression_list_repeat1] = STATE(140),
    [anon_sym_end] = ACTIONS(382),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_PIPE_PIPE] = ACTIONS(54),
    [anon_sym_AMP_AMP] = ACTIONS(56),
    [anon_sym_EQ_GT] = ACTIONS(184),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(62),
    [sym__arrow_operator] = ACTIONS(186),
    [sym__assign_operator] = ACTIONS(188),
    [anon_sym_LF] = ACTIONS(384),
    [anon_sym_SEMI] = ACTIONS(386),
    [sym_comment] = ACTIONS(72),
  },
  [86] = {
    [anon_sym_module] = ACTIONS(180),
    [anon_sym_mutable] = ACTIONS(180),
    [anon_sym_struct] = ACTIONS(180),
    [anon_sym_COMMA] = ACTIONS(178),
    [anon_sym_function] = ACTIONS(180),
    [anon_sym_LPAREN] = ACTIONS(178),
    [anon_sym_RPAREN] = ACTIONS(178),
    [anon_sym_PIPE_PIPE] = ACTIONS(180),
    [anon_sym_AMP_AMP] = ACTIONS(178),
    [anon_sym_EQ_GT] = ACTIONS(178),
    [anon_sym_if] = ACTIONS(180),
    [sym_identifier] = ACTIONS(180),
    [sym_number] = ACTIONS(178),
    [sym_string] = ACTIONS(178),
    [sym__times_operator] = ACTIONS(180),
    [sym__plus_operator] = ACTIONS(180),
    [sym__arrow_operator] = ACTIONS(178),
    [sym__assign_operator] = ACTIONS(180),
    [sym_comment] = ACTIONS(24),
  },
  [87] = {
    [sym_argument_list] = STATE(30),
    [aux_sym__expression_list_repeat1] = STATE(143),
    [anon_sym_end] = ACTIONS(388),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_PIPE_PIPE] = ACTIONS(54),
    [anon_sym_AMP_AMP] = ACTIONS(56),
    [anon_sym_EQ_GT] = ACTIONS(184),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(62),
    [sym__arrow_operator] = ACTIONS(186),
    [sym__assign_operator] = ACTIONS(188),
    [anon_sym_LF] = ACTIONS(390),
    [anon_sym_SEMI] = ACTIONS(392),
    [sym_comment] = ACTIONS(72),
  },
  [88] = {
    [anon_sym_end] = ACTIONS(394),
    [anon_sym_LF] = ACTIONS(396),
    [anon_sym_SEMI] = ACTIONS(398),
    [sym_comment] = ACTIONS(72),
  },
  [89] = {
    [anon_sym_module] = ACTIONS(204),
    [anon_sym_mutable] = ACTIONS(204),
    [anon_sym_struct] = ACTIONS(204),
    [anon_sym_COMMA] = ACTIONS(202),
    [anon_sym_function] = ACTIONS(204),
    [anon_sym_LPAREN] = ACTIONS(202),
    [anon_sym_RPAREN] = ACTIONS(202),
    [anon_sym_PIPE_PIPE] = ACTIONS(204),
    [anon_sym_AMP_AMP] = ACTIONS(202),
    [anon_sym_EQ_GT] = ACTIONS(202),
    [anon_sym_if] = ACTIONS(204),
    [sym_identifier] = ACTIONS(204),
    [sym_number] = ACTIONS(202),
    [sym_string] = ACTIONS(202),
    [sym__times_operator] = ACTIONS(204),
    [sym__plus_operator] = ACTIONS(204),
    [sym__arrow_operator] = ACTIONS(202),
    [sym__assign_operator] = ACTIONS(204),
    [sym_comment] = ACTIONS(24),
  },
  [90] = {
    [sym_typed_identifier] = STATE(79),
    [sym_parameterized_identifier] = STATE(13),
    [aux_sym_struct_definition_repeat1] = STATE(146),
    [anon_sym_end] = ACTIONS(394),
    [sym_identifier] = ACTIONS(206),
    [sym_comment] = ACTIONS(24),
  },
  [91] = {
    [sym__expression] = STATE(148),
    [sym_module_expression] = STATE(148),
    [sym_struct_definition] = STATE(148),
    [sym_function_expression] = STATE(148),
    [sym_call_expression] = STATE(148),
    [sym_assignment_expression] = STATE(148),
    [sym_binary_expression] = STATE(148),
    [sym_pair_expression] = STATE(148),
    [sym_conditional_expression] = STATE(148),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(400),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(402),
    [sym_number] = ACTIONS(404),
    [sym_string] = ACTIONS(404),
    [sym_comment] = ACTIONS(24),
  },
  [92] = {
    [sym_argument_list] = STATE(30),
    [sym_elseif_clause] = STATE(153),
    [sym_else_clause] = STATE(151),
    [aux_sym__expression_list_repeat1] = STATE(152),
    [aux_sym_conditional_expression_repeat1] = STATE(153),
    [anon_sym_end] = ACTIONS(406),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_PIPE_PIPE] = ACTIONS(54),
    [anon_sym_AMP_AMP] = ACTIONS(56),
    [anon_sym_EQ_GT] = ACTIONS(270),
    [anon_sym_elseif] = ACTIONS(272),
    [anon_sym_else] = ACTIONS(274),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(62),
    [sym__arrow_operator] = ACTIONS(276),
    [sym__assign_operator] = ACTIONS(278),
    [anon_sym_LF] = ACTIONS(408),
    [anon_sym_SEMI] = ACTIONS(410),
    [sym_comment] = ACTIONS(72),
  },
  [93] = {
    [anon_sym_module] = ACTIONS(286),
    [anon_sym_mutable] = ACTIONS(286),
    [anon_sym_struct] = ACTIONS(286),
    [anon_sym_COMMA] = ACTIONS(284),
    [anon_sym_function] = ACTIONS(286),
    [anon_sym_LPAREN] = ACTIONS(284),
    [anon_sym_RPAREN] = ACTIONS(284),
    [anon_sym_PIPE_PIPE] = ACTIONS(286),
    [anon_sym_AMP_AMP] = ACTIONS(284),
    [anon_sym_EQ_GT] = ACTIONS(284),
    [anon_sym_if] = ACTIONS(286),
    [sym_identifier] = ACTIONS(286),
    [sym_number] = ACTIONS(284),
    [sym_string] = ACTIONS(284),
    [sym__times_operator] = ACTIONS(286),
    [sym__plus_operator] = ACTIONS(286),
    [sym__arrow_operator] = ACTIONS(284),
    [sym__assign_operator] = ACTIONS(286),
    [sym_comment] = ACTIONS(24),
  },
  [94] = {
    [sym_argument_list] = STATE(55),
    [aux_sym_argument_list_repeat1] = STATE(155),
    [anon_sym_COMMA] = ACTIONS(288),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(412),
    [anon_sym_PIPE_PIPE] = ACTIONS(112),
    [anon_sym_AMP_AMP] = ACTIONS(114),
    [anon_sym_EQ_GT] = ACTIONS(292),
    [sym__times_operator] = ACTIONS(122),
    [sym__plus_operator] = ACTIONS(124),
    [sym__arrow_operator] = ACTIONS(294),
    [sym__assign_operator] = ACTIONS(296),
    [sym_comment] = ACTIONS(24),
  },
  [95] = {
    [sym_argument_list] = STATE(55),
    [anon_sym_module] = ACTIONS(300),
    [anon_sym_mutable] = ACTIONS(300),
    [anon_sym_struct] = ACTIONS(300),
    [anon_sym_COMMA] = ACTIONS(298),
    [anon_sym_function] = ACTIONS(300),
    [anon_sym_LPAREN] = ACTIONS(298),
    [anon_sym_RPAREN] = ACTIONS(298),
    [anon_sym_PIPE_PIPE] = ACTIONS(300),
    [anon_sym_AMP_AMP] = ACTIONS(298),
    [anon_sym_EQ_GT] = ACTIONS(298),
    [anon_sym_if] = ACTIONS(300),
    [sym_identifier] = ACTIONS(300),
    [sym_number] = ACTIONS(298),
    [sym_string] = ACTIONS(298),
    [sym__times_operator] = ACTIONS(122),
    [sym__plus_operator] = ACTIONS(124),
    [sym__arrow_operator] = ACTIONS(298),
    [sym__assign_operator] = ACTIONS(300),
    [sym_comment] = ACTIONS(24),
  },
  [96] = {
    [sym_argument_list] = STATE(55),
    [anon_sym_module] = ACTIONS(300),
    [anon_sym_mutable] = ACTIONS(300),
    [anon_sym_struct] = ACTIONS(300),
    [anon_sym_COMMA] = ACTIONS(298),
    [anon_sym_function] = ACTIONS(300),
    [anon_sym_LPAREN] = ACTIONS(298),
    [anon_sym_RPAREN] = ACTIONS(298),
    [anon_sym_PIPE_PIPE] = ACTIONS(112),
    [anon_sym_AMP_AMP] = ACTIONS(298),
    [anon_sym_EQ_GT] = ACTIONS(298),
    [anon_sym_if] = ACTIONS(300),
    [sym_identifier] = ACTIONS(300),
    [sym_number] = ACTIONS(298),
    [sym_string] = ACTIONS(298),
    [sym__times_operator] = ACTIONS(122),
    [sym__plus_operator] = ACTIONS(124),
    [sym__arrow_operator] = ACTIONS(298),
    [sym__assign_operator] = ACTIONS(300),
    [sym_comment] = ACTIONS(24),
  },
  [97] = {
    [sym_argument_list] = STATE(55),
    [anon_sym_module] = ACTIONS(304),
    [anon_sym_mutable] = ACTIONS(304),
    [anon_sym_struct] = ACTIONS(304),
    [anon_sym_function] = ACTIONS(304),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_PIPE_PIPE] = ACTIONS(112),
    [anon_sym_AMP_AMP] = ACTIONS(114),
    [anon_sym_EQ_GT] = ACTIONS(116),
    [anon_sym_if] = ACTIONS(304),
    [sym_identifier] = ACTIONS(304),
    [sym_number] = ACTIONS(302),
    [sym_string] = ACTIONS(302),
    [sym__times_operator] = ACTIONS(122),
    [sym__plus_operator] = ACTIONS(124),
    [sym__arrow_operator] = ACTIONS(126),
    [sym__assign_operator] = ACTIONS(128),
    [sym_comment] = ACTIONS(24),
  },
  [98] = {
    [sym_argument_list] = STATE(55),
    [anon_sym_module] = ACTIONS(300),
    [anon_sym_mutable] = ACTIONS(300),
    [anon_sym_struct] = ACTIONS(300),
    [anon_sym_COMMA] = ACTIONS(298),
    [anon_sym_function] = ACTIONS(300),
    [anon_sym_LPAREN] = ACTIONS(298),
    [anon_sym_RPAREN] = ACTIONS(298),
    [anon_sym_PIPE_PIPE] = ACTIONS(300),
    [anon_sym_AMP_AMP] = ACTIONS(298),
    [anon_sym_EQ_GT] = ACTIONS(298),
    [anon_sym_if] = ACTIONS(300),
    [sym_identifier] = ACTIONS(300),
    [sym_number] = ACTIONS(298),
    [sym_string] = ACTIONS(298),
    [sym__times_operator] = ACTIONS(300),
    [sym__plus_operator] = ACTIONS(300),
    [sym__arrow_operator] = ACTIONS(298),
    [sym__assign_operator] = ACTIONS(300),
    [sym_comment] = ACTIONS(24),
  },
  [99] = {
    [sym_argument_list] = STATE(55),
    [anon_sym_module] = ACTIONS(300),
    [anon_sym_mutable] = ACTIONS(300),
    [anon_sym_struct] = ACTIONS(300),
    [anon_sym_COMMA] = ACTIONS(298),
    [anon_sym_function] = ACTIONS(300),
    [anon_sym_LPAREN] = ACTIONS(298),
    [anon_sym_RPAREN] = ACTIONS(298),
    [anon_sym_PIPE_PIPE] = ACTIONS(300),
    [anon_sym_AMP_AMP] = ACTIONS(298),
    [anon_sym_EQ_GT] = ACTIONS(298),
    [anon_sym_if] = ACTIONS(300),
    [sym_identifier] = ACTIONS(300),
    [sym_number] = ACTIONS(298),
    [sym_string] = ACTIONS(298),
    [sym__times_operator] = ACTIONS(122),
    [sym__plus_operator] = ACTIONS(300),
    [sym__arrow_operator] = ACTIONS(298),
    [sym__assign_operator] = ACTIONS(300),
    [sym_comment] = ACTIONS(24),
  },
  [100] = {
    [sym_argument_list] = STATE(55),
    [anon_sym_module] = ACTIONS(300),
    [anon_sym_mutable] = ACTIONS(300),
    [anon_sym_struct] = ACTIONS(300),
    [anon_sym_function] = ACTIONS(300),
    [anon_sym_LPAREN] = ACTIONS(298),
    [anon_sym_PIPE_PIPE] = ACTIONS(112),
    [anon_sym_AMP_AMP] = ACTIONS(114),
    [anon_sym_EQ_GT] = ACTIONS(298),
    [anon_sym_if] = ACTIONS(300),
    [sym_identifier] = ACTIONS(300),
    [sym_number] = ACTIONS(298),
    [sym_string] = ACTIONS(298),
    [sym__times_operator] = ACTIONS(122),
    [sym__plus_operator] = ACTIONS(124),
    [sym__arrow_operator] = ACTIONS(126),
    [sym__assign_operator] = ACTIONS(300),
    [sym_comment] = ACTIONS(24),
  },
  [101] = {
    [sym_argument_list] = STATE(55),
    [anon_sym_module] = ACTIONS(308),
    [anon_sym_mutable] = ACTIONS(308),
    [anon_sym_struct] = ACTIONS(308),
    [anon_sym_function] = ACTIONS(308),
    [anon_sym_LPAREN] = ACTIONS(306),
    [anon_sym_PIPE_PIPE] = ACTIONS(112),
    [anon_sym_AMP_AMP] = ACTIONS(114),
    [anon_sym_EQ_GT] = ACTIONS(306),
    [anon_sym_if] = ACTIONS(308),
    [sym_identifier] = ACTIONS(308),
    [sym_number] = ACTIONS(306),
    [sym_string] = ACTIONS(306),
    [sym__times_operator] = ACTIONS(122),
    [sym__plus_operator] = ACTIONS(124),
    [sym__arrow_operator] = ACTIONS(126),
    [sym__assign_operator] = ACTIONS(128),
    [sym_comment] = ACTIONS(24),
  },
  [102] = {
    [ts_builtin_sym_end] = ACTIONS(414),
    [anon_sym_end] = ACTIONS(416),
    [anon_sym_LPAREN] = ACTIONS(416),
    [anon_sym_PIPE_PIPE] = ACTIONS(416),
    [anon_sym_AMP_AMP] = ACTIONS(416),
    [anon_sym_EQ_GT] = ACTIONS(416),
    [anon_sym_elseif] = ACTIONS(416),
    [anon_sym_else] = ACTIONS(416),
    [sym__times_operator] = ACTIONS(416),
    [sym__plus_operator] = ACTIONS(416),
    [sym__arrow_operator] = ACTIONS(416),
    [sym__assign_operator] = ACTIONS(416),
    [anon_sym_LF] = ACTIONS(414),
    [anon_sym_SEMI] = ACTIONS(416),
    [sym_comment] = ACTIONS(72),
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
    [sym_identifier] = ACTIONS(418),
    [sym_number] = ACTIONS(420),
    [sym_string] = ACTIONS(420),
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
    [anon_sym_module] = ACTIONS(34),
    [anon_sym_mutable] = ACTIONS(36),
    [anon_sym_struct] = ACTIONS(38),
    [anon_sym_function] = ACTIONS(40),
    [anon_sym_if] = ACTIONS(42),
    [sym_identifier] = ACTIONS(422),
    [sym_number] = ACTIONS(424),
    [sym_string] = ACTIONS(424),
    [sym_comment] = ACTIONS(24),
  },
  [105] = {
    [sym__expression] = STATE(158),
    [sym_module_expression] = STATE(158),
    [sym_struct_definition] = STATE(158),
    [sym_function_expression] = STATE(158),
    [sym_call_expression] = STATE(158),
    [sym_assignment_expression] = STATE(158),
    [sym_binary_expression] = STATE(158),
    [sym_pair_expression] = STATE(158),
    [sym_conditional_expression] = STATE(158),
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
  [106] = {
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
    [sym_identifier] = ACTIONS(430),
    [sym_number] = ACTIONS(432),
    [sym_string] = ACTIONS(432),
    [sym_comment] = ACTIONS(24),
  },
  [107] = {
    [sym__expression] = STATE(160),
    [sym_module_expression] = STATE(160),
    [sym_struct_definition] = STATE(160),
    [sym_function_expression] = STATE(160),
    [sym_call_expression] = STATE(160),
    [sym_assignment_expression] = STATE(160),
    [sym_binary_expression] = STATE(160),
    [sym_pair_expression] = STATE(160),
    [sym_conditional_expression] = STATE(160),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(434),
    [sym_number] = ACTIONS(436),
    [sym_string] = ACTIONS(436),
    [sym_comment] = ACTIONS(24),
  },
  [108] = {
    [sym__expression] = STATE(162),
    [sym_module_expression] = STATE(162),
    [sym_struct_definition] = STATE(162),
    [sym_function_expression] = STATE(162),
    [sym_call_expression] = STATE(162),
    [sym_assignment_expression] = STATE(162),
    [sym_binary_expression] = STATE(162),
    [sym_pair_expression] = STATE(162),
    [sym_conditional_expression] = STATE(162),
    [sym_elseif_clause] = STATE(164),
    [sym_else_clause] = STATE(163),
    [aux_sym_conditional_expression_repeat1] = STATE(164),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(438),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [anon_sym_elseif] = ACTIONS(272),
    [anon_sym_else] = ACTIONS(274),
    [sym_identifier] = ACTIONS(440),
    [sym_number] = ACTIONS(442),
    [sym_string] = ACTIONS(442),
    [sym_comment] = ACTIONS(24),
  },
  [109] = {
    [anon_sym_end] = ACTIONS(444),
    [sym_comment] = ACTIONS(24),
  },
  [110] = {
    [sym_elseif_clause] = STATE(164),
    [sym_else_clause] = STATE(163),
    [aux_sym__expression_list_repeat1] = STATE(166),
    [aux_sym_conditional_expression_repeat1] = STATE(164),
    [anon_sym_end] = ACTIONS(438),
    [anon_sym_elseif] = ACTIONS(272),
    [anon_sym_else] = ACTIONS(274),
    [anon_sym_LF] = ACTIONS(446),
    [anon_sym_SEMI] = ACTIONS(448),
    [sym_comment] = ACTIONS(72),
  },
  [111] = {
    [sym_elseif_clause] = STATE(167),
    [sym_else_clause] = STATE(163),
    [aux_sym_conditional_expression_repeat1] = STATE(167),
    [anon_sym_end] = ACTIONS(444),
    [anon_sym_elseif] = ACTIONS(450),
    [anon_sym_else] = ACTIONS(274),
    [sym_comment] = ACTIONS(24),
  },
  [112] = {
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
    [sym_identifier] = ACTIONS(452),
    [sym_number] = ACTIONS(454),
    [sym_string] = ACTIONS(454),
    [sym_comment] = ACTIONS(24),
  },
  [113] = {
    [ts_builtin_sym_end] = ACTIONS(456),
    [anon_sym_end] = ACTIONS(458),
    [anon_sym_LPAREN] = ACTIONS(458),
    [anon_sym_PIPE_PIPE] = ACTIONS(458),
    [anon_sym_AMP_AMP] = ACTIONS(458),
    [anon_sym_EQ_GT] = ACTIONS(458),
    [anon_sym_elseif] = ACTIONS(458),
    [anon_sym_else] = ACTIONS(458),
    [sym__times_operator] = ACTIONS(458),
    [sym__plus_operator] = ACTIONS(458),
    [sym__arrow_operator] = ACTIONS(458),
    [sym__assign_operator] = ACTIONS(458),
    [anon_sym_LF] = ACTIONS(456),
    [anon_sym_SEMI] = ACTIONS(458),
    [sym_comment] = ACTIONS(72),
  },
  [114] = {
    [sym__expression] = STATE(169),
    [sym_module_expression] = STATE(169),
    [sym_struct_definition] = STATE(169),
    [sym_function_expression] = STATE(169),
    [sym_call_expression] = STATE(169),
    [sym_assignment_expression] = STATE(169),
    [sym_binary_expression] = STATE(169),
    [sym_pair_expression] = STATE(169),
    [sym_conditional_expression] = STATE(169),
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
  [115] = {
    [sym__expression] = STATE(170),
    [sym_module_expression] = STATE(170),
    [sym_struct_definition] = STATE(170),
    [sym_function_expression] = STATE(170),
    [sym_call_expression] = STATE(170),
    [sym_assignment_expression] = STATE(170),
    [sym_binary_expression] = STATE(170),
    [sym_pair_expression] = STATE(170),
    [sym_conditional_expression] = STATE(170),
    [anon_sym_module] = ACTIONS(34),
    [anon_sym_mutable] = ACTIONS(36),
    [anon_sym_struct] = ACTIONS(38),
    [anon_sym_function] = ACTIONS(40),
    [anon_sym_if] = ACTIONS(42),
    [sym_identifier] = ACTIONS(464),
    [sym_number] = ACTIONS(466),
    [sym_string] = ACTIONS(466),
    [sym_comment] = ACTIONS(24),
  },
  [116] = {
    [sym__expression] = STATE(171),
    [sym_module_expression] = STATE(171),
    [sym_struct_definition] = STATE(171),
    [sym_function_expression] = STATE(171),
    [sym_call_expression] = STATE(171),
    [sym_assignment_expression] = STATE(171),
    [sym_binary_expression] = STATE(171),
    [sym_pair_expression] = STATE(171),
    [sym_conditional_expression] = STATE(171),
    [anon_sym_module] = ACTIONS(34),
    [anon_sym_mutable] = ACTIONS(36),
    [anon_sym_struct] = ACTIONS(38),
    [anon_sym_function] = ACTIONS(40),
    [anon_sym_if] = ACTIONS(42),
    [sym_identifier] = ACTIONS(468),
    [sym_number] = ACTIONS(470),
    [sym_string] = ACTIONS(470),
    [sym_comment] = ACTIONS(24),
  },
  [117] = {
    [aux_sym_argument_list_repeat1] = STATE(173),
    [anon_sym_COMMA] = ACTIONS(288),
    [anon_sym_RPAREN] = ACTIONS(472),
    [sym_comment] = ACTIONS(24),
  },
  [118] = {
    [sym__expression] = STATE(65),
    [sym_module_expression] = STATE(65),
    [sym_struct_definition] = STATE(65),
    [sym_function_expression] = STATE(65),
    [sym_call_expression] = STATE(65),
    [sym_assignment_expression] = STATE(65),
    [sym_binary_expression] = STATE(65),
    [sym_pair_expression] = STATE(65),
    [sym_conditional_expression] = STATE(65),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(166),
    [sym_number] = ACTIONS(168),
    [sym_string] = ACTIONS(168),
    [sym_comment] = ACTIONS(24),
  },
  [119] = {
    [sym_argument_list] = STATE(30),
    [anon_sym_end] = ACTIONS(304),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_PIPE_PIPE] = ACTIONS(54),
    [anon_sym_AMP_AMP] = ACTIONS(56),
    [anon_sym_EQ_GT] = ACTIONS(184),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(62),
    [sym__arrow_operator] = ACTIONS(186),
    [sym__assign_operator] = ACTIONS(188),
    [anon_sym_LF] = ACTIONS(302),
    [anon_sym_SEMI] = ACTIONS(304),
    [sym_comment] = ACTIONS(72),
  },
  [120] = {
    [sym_argument_list] = STATE(30),
    [anon_sym_end] = ACTIONS(300),
    [anon_sym_LPAREN] = ACTIONS(300),
    [anon_sym_PIPE_PIPE] = ACTIONS(54),
    [anon_sym_AMP_AMP] = ACTIONS(56),
    [anon_sym_EQ_GT] = ACTIONS(300),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(62),
    [sym__arrow_operator] = ACTIONS(186),
    [sym__assign_operator] = ACTIONS(300),
    [anon_sym_LF] = ACTIONS(298),
    [anon_sym_SEMI] = ACTIONS(300),
    [sym_comment] = ACTIONS(72),
  },
  [121] = {
    [sym_argument_list] = STATE(30),
    [anon_sym_end] = ACTIONS(308),
    [anon_sym_LPAREN] = ACTIONS(308),
    [anon_sym_PIPE_PIPE] = ACTIONS(54),
    [anon_sym_AMP_AMP] = ACTIONS(56),
    [anon_sym_EQ_GT] = ACTIONS(308),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(62),
    [sym__arrow_operator] = ACTIONS(186),
    [sym__assign_operator] = ACTIONS(188),
    [anon_sym_LF] = ACTIONS(306),
    [anon_sym_SEMI] = ACTIONS(308),
    [sym_comment] = ACTIONS(72),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(474),
    [anon_sym_end] = ACTIONS(476),
    [anon_sym_LPAREN] = ACTIONS(476),
    [anon_sym_PIPE_PIPE] = ACTIONS(476),
    [anon_sym_AMP_AMP] = ACTIONS(476),
    [anon_sym_EQ_GT] = ACTIONS(476),
    [anon_sym_elseif] = ACTIONS(476),
    [anon_sym_else] = ACTIONS(476),
    [sym__times_operator] = ACTIONS(476),
    [sym__plus_operator] = ACTIONS(476),
    [sym__arrow_operator] = ACTIONS(476),
    [sym__assign_operator] = ACTIONS(476),
    [anon_sym_LF] = ACTIONS(474),
    [anon_sym_SEMI] = ACTIONS(476),
    [sym_comment] = ACTIONS(72),
  },
  [123] = {
    [sym_argument_list] = STATE(30),
    [anon_sym_end] = ACTIONS(312),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_PIPE_PIPE] = ACTIONS(54),
    [anon_sym_AMP_AMP] = ACTIONS(56),
    [anon_sym_EQ_GT] = ACTIONS(184),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(62),
    [sym__arrow_operator] = ACTIONS(186),
    [sym__assign_operator] = ACTIONS(188),
    [anon_sym_LF] = ACTIONS(310),
    [anon_sym_SEMI] = ACTIONS(312),
    [sym_comment] = ACTIONS(72),
  },
  [124] = {
    [sym__expression] = STATE(123),
    [sym_module_expression] = STATE(123),
    [sym_struct_definition] = STATE(123),
    [sym_function_expression] = STATE(123),
    [sym_call_expression] = STATE(123),
    [sym_assignment_expression] = STATE(123),
    [sym_binary_expression] = STATE(123),
    [sym_pair_expression] = STATE(123),
    [sym_conditional_expression] = STATE(123),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(478),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(340),
    [sym_number] = ACTIONS(342),
    [sym_string] = ACTIONS(342),
    [sym_comment] = ACTIONS(24),
  },
  [125] = {
    [aux_sym__expression_list_repeat1] = STATE(125),
    [anon_sym_end] = ACTIONS(312),
    [anon_sym_LF] = ACTIONS(480),
    [anon_sym_SEMI] = ACTIONS(483),
    [sym_comment] = ACTIONS(72),
  },
  [126] = {
    [ts_builtin_sym_end] = ACTIONS(486),
    [anon_sym_end] = ACTIONS(488),
    [anon_sym_LPAREN] = ACTIONS(488),
    [anon_sym_PIPE_PIPE] = ACTIONS(488),
    [anon_sym_AMP_AMP] = ACTIONS(488),
    [anon_sym_EQ_GT] = ACTIONS(488),
    [anon_sym_elseif] = ACTIONS(488),
    [anon_sym_else] = ACTIONS(488),
    [sym__times_operator] = ACTIONS(488),
    [sym__plus_operator] = ACTIONS(488),
    [sym__arrow_operator] = ACTIONS(488),
    [sym__assign_operator] = ACTIONS(488),
    [anon_sym_LF] = ACTIONS(486),
    [anon_sym_SEMI] = ACTIONS(488),
    [sym_comment] = ACTIONS(72),
  },
  [127] = {
    [sym_typed_identifier] = STATE(79),
    [sym_parameterized_identifier] = STATE(13),
    [aux_sym_struct_definition_repeat1] = STATE(134),
    [anon_sym_end] = ACTIONS(490),
    [sym_identifier] = ACTIONS(206),
    [sym_comment] = ACTIONS(24),
  },
  [128] = {
    [sym_typed_identifier] = STATE(177),
    [sym_parameterized_identifier] = STATE(78),
    [sym_identifier] = ACTIONS(200),
    [sym_comment] = ACTIONS(24),
  },
  [129] = {
    [sym_typed_identifier] = STATE(178),
    [sym_parameterized_identifier] = STATE(78),
    [sym_identifier] = ACTIONS(200),
    [sym_comment] = ACTIONS(24),
  },
  [130] = {
    [anon_sym_end] = ACTIONS(492),
    [anon_sym_COLON_COLON] = ACTIONS(492),
    [anon_sym_LT_COLON] = ACTIONS(492),
    [anon_sym_LF] = ACTIONS(494),
    [anon_sym_SEMI] = ACTIONS(492),
    [sym_comment] = ACTIONS(72),
  },
  [131] = {
    [aux_sym_parameterized_identifier_repeat1] = STATE(180),
    [anon_sym_COMMA] = ACTIONS(356),
    [anon_sym_RBRACE] = ACTIONS(496),
    [sym_comment] = ACTIONS(24),
  },
  [132] = {
    [sym_parameterized_identifier] = STATE(181),
    [sym_identifier] = ACTIONS(200),
    [sym_comment] = ACTIONS(24),
  },
  [133] = {
    [anon_sym_end] = ACTIONS(498),
    [sym_identifier] = ACTIONS(498),
    [sym_comment] = ACTIONS(24),
  },
  [134] = {
    [sym_typed_identifier] = STATE(79),
    [sym_parameterized_identifier] = STATE(13),
    [aux_sym_struct_definition_repeat1] = STATE(134),
    [anon_sym_end] = ACTIONS(498),
    [sym_identifier] = ACTIONS(500),
    [sym_comment] = ACTIONS(24),
  },
  [135] = {
    [sym_identifier] = ACTIONS(503),
    [sym_comment] = ACTIONS(24),
  },
  [136] = {
    [anon_sym_module] = ACTIONS(505),
    [anon_sym_end] = ACTIONS(505),
    [anon_sym_mutable] = ACTIONS(505),
    [anon_sym_struct] = ACTIONS(505),
    [anon_sym_function] = ACTIONS(505),
    [anon_sym_if] = ACTIONS(505),
    [sym_identifier] = ACTIONS(505),
    [sym_number] = ACTIONS(507),
    [sym_string] = ACTIONS(507),
    [sym_comment] = ACTIONS(24),
  },
  [137] = {
    [aux_sym_parameter_list_repeat1] = STATE(184),
    [anon_sym_COMMA] = ACTIONS(374),
    [anon_sym_RPAREN] = ACTIONS(509),
    [sym_comment] = ACTIONS(24),
  },
  [138] = {
    [ts_builtin_sym_end] = ACTIONS(511),
    [anon_sym_end] = ACTIONS(513),
    [anon_sym_LPAREN] = ACTIONS(513),
    [anon_sym_PIPE_PIPE] = ACTIONS(513),
    [anon_sym_AMP_AMP] = ACTIONS(513),
    [anon_sym_EQ_GT] = ACTIONS(513),
    [anon_sym_elseif] = ACTIONS(513),
    [anon_sym_else] = ACTIONS(513),
    [sym__times_operator] = ACTIONS(513),
    [sym__plus_operator] = ACTIONS(513),
    [sym__arrow_operator] = ACTIONS(513),
    [sym__assign_operator] = ACTIONS(513),
    [anon_sym_LF] = ACTIONS(511),
    [anon_sym_SEMI] = ACTIONS(513),
    [sym_comment] = ACTIONS(72),
  },
  [139] = {
    [sym__expression] = STATE(123),
    [sym_module_expression] = STATE(123),
    [sym_struct_definition] = STATE(123),
    [sym_function_expression] = STATE(123),
    [sym_call_expression] = STATE(123),
    [sym_assignment_expression] = STATE(123),
    [sym_binary_expression] = STATE(123),
    [sym_pair_expression] = STATE(123),
    [sym_conditional_expression] = STATE(123),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(515),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(340),
    [sym_number] = ACTIONS(342),
    [sym_string] = ACTIONS(342),
    [sym_comment] = ACTIONS(24),
  },
  [140] = {
    [aux_sym__expression_list_repeat1] = STATE(125),
    [anon_sym_end] = ACTIONS(515),
    [anon_sym_LF] = ACTIONS(517),
    [anon_sym_SEMI] = ACTIONS(519),
    [sym_comment] = ACTIONS(72),
  },
  [141] = {
    [anon_sym_module] = ACTIONS(324),
    [anon_sym_mutable] = ACTIONS(324),
    [anon_sym_struct] = ACTIONS(324),
    [anon_sym_COMMA] = ACTIONS(322),
    [anon_sym_function] = ACTIONS(324),
    [anon_sym_LPAREN] = ACTIONS(322),
    [anon_sym_RPAREN] = ACTIONS(322),
    [anon_sym_PIPE_PIPE] = ACTIONS(324),
    [anon_sym_AMP_AMP] = ACTIONS(322),
    [anon_sym_EQ_GT] = ACTIONS(322),
    [anon_sym_if] = ACTIONS(324),
    [sym_identifier] = ACTIONS(324),
    [sym_number] = ACTIONS(322),
    [sym_string] = ACTIONS(322),
    [sym__times_operator] = ACTIONS(324),
    [sym__plus_operator] = ACTIONS(324),
    [sym__arrow_operator] = ACTIONS(322),
    [sym__assign_operator] = ACTIONS(324),
    [sym_comment] = ACTIONS(24),
  },
  [142] = {
    [sym__expression] = STATE(123),
    [sym_module_expression] = STATE(123),
    [sym_struct_definition] = STATE(123),
    [sym_function_expression] = STATE(123),
    [sym_call_expression] = STATE(123),
    [sym_assignment_expression] = STATE(123),
    [sym_binary_expression] = STATE(123),
    [sym_pair_expression] = STATE(123),
    [sym_conditional_expression] = STATE(123),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(521),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(340),
    [sym_number] = ACTIONS(342),
    [sym_string] = ACTIONS(342),
    [sym_comment] = ACTIONS(24),
  },
  [143] = {
    [aux_sym__expression_list_repeat1] = STATE(125),
    [anon_sym_end] = ACTIONS(521),
    [anon_sym_LF] = ACTIONS(523),
    [anon_sym_SEMI] = ACTIONS(525),
    [sym_comment] = ACTIONS(72),
  },
  [144] = {
    [anon_sym_module] = ACTIONS(350),
    [anon_sym_mutable] = ACTIONS(350),
    [anon_sym_struct] = ACTIONS(350),
    [anon_sym_COMMA] = ACTIONS(348),
    [anon_sym_function] = ACTIONS(350),
    [anon_sym_LPAREN] = ACTIONS(348),
    [anon_sym_RPAREN] = ACTIONS(348),
    [anon_sym_PIPE_PIPE] = ACTIONS(350),
    [anon_sym_AMP_AMP] = ACTIONS(348),
    [anon_sym_EQ_GT] = ACTIONS(348),
    [anon_sym_if] = ACTIONS(350),
    [sym_identifier] = ACTIONS(350),
    [sym_number] = ACTIONS(348),
    [sym_string] = ACTIONS(348),
    [sym__times_operator] = ACTIONS(350),
    [sym__plus_operator] = ACTIONS(350),
    [sym__arrow_operator] = ACTIONS(348),
    [sym__assign_operator] = ACTIONS(350),
    [sym_comment] = ACTIONS(24),
  },
  [145] = {
    [sym_typed_identifier] = STATE(79),
    [sym_parameterized_identifier] = STATE(13),
    [aux_sym_struct_definition_repeat1] = STATE(190),
    [anon_sym_end] = ACTIONS(527),
    [sym_identifier] = ACTIONS(206),
    [sym_comment] = ACTIONS(24),
  },
  [146] = {
    [sym_typed_identifier] = STATE(79),
    [sym_parameterized_identifier] = STATE(13),
    [aux_sym_struct_definition_repeat1] = STATE(134),
    [anon_sym_end] = ACTIONS(527),
    [sym_identifier] = ACTIONS(206),
    [sym_comment] = ACTIONS(24),
  },
  [147] = {
    [anon_sym_module] = ACTIONS(380),
    [anon_sym_mutable] = ACTIONS(380),
    [anon_sym_struct] = ACTIONS(380),
    [anon_sym_COMMA] = ACTIONS(378),
    [anon_sym_function] = ACTIONS(380),
    [anon_sym_LPAREN] = ACTIONS(378),
    [anon_sym_RPAREN] = ACTIONS(378),
    [anon_sym_PIPE_PIPE] = ACTIONS(380),
    [anon_sym_AMP_AMP] = ACTIONS(378),
    [anon_sym_EQ_GT] = ACTIONS(378),
    [anon_sym_if] = ACTIONS(380),
    [sym_identifier] = ACTIONS(380),
    [sym_number] = ACTIONS(378),
    [sym_string] = ACTIONS(378),
    [sym__times_operator] = ACTIONS(380),
    [sym__plus_operator] = ACTIONS(380),
    [sym__arrow_operator] = ACTIONS(378),
    [sym__assign_operator] = ACTIONS(380),
    [sym_comment] = ACTIONS(24),
  },
  [148] = {
    [sym_argument_list] = STATE(30),
    [aux_sym__expression_list_repeat1] = STATE(193),
    [anon_sym_end] = ACTIONS(529),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_PIPE_PIPE] = ACTIONS(54),
    [anon_sym_AMP_AMP] = ACTIONS(56),
    [anon_sym_EQ_GT] = ACTIONS(184),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(62),
    [sym__arrow_operator] = ACTIONS(186),
    [sym__assign_operator] = ACTIONS(188),
    [anon_sym_LF] = ACTIONS(531),
    [anon_sym_SEMI] = ACTIONS(533),
    [sym_comment] = ACTIONS(72),
  },
  [149] = {
    [anon_sym_module] = ACTIONS(416),
    [anon_sym_mutable] = ACTIONS(416),
    [anon_sym_struct] = ACTIONS(416),
    [anon_sym_COMMA] = ACTIONS(414),
    [anon_sym_function] = ACTIONS(416),
    [anon_sym_LPAREN] = ACTIONS(414),
    [anon_sym_RPAREN] = ACTIONS(414),
    [anon_sym_PIPE_PIPE] = ACTIONS(416),
    [anon_sym_AMP_AMP] = ACTIONS(414),
    [anon_sym_EQ_GT] = ACTIONS(414),
    [anon_sym_if] = ACTIONS(416),
    [sym_identifier] = ACTIONS(416),
    [sym_number] = ACTIONS(414),
    [sym_string] = ACTIONS(414),
    [sym__times_operator] = ACTIONS(416),
    [sym__plus_operator] = ACTIONS(416),
    [sym__arrow_operator] = ACTIONS(414),
    [sym__assign_operator] = ACTIONS(416),
    [sym_comment] = ACTIONS(24),
  },
  [150] = {
    [sym__expression] = STATE(162),
    [sym_module_expression] = STATE(162),
    [sym_struct_definition] = STATE(162),
    [sym_function_expression] = STATE(162),
    [sym_call_expression] = STATE(162),
    [sym_assignment_expression] = STATE(162),
    [sym_binary_expression] = STATE(162),
    [sym_pair_expression] = STATE(162),
    [sym_conditional_expression] = STATE(162),
    [sym_elseif_clause] = STATE(196),
    [sym_else_clause] = STATE(195),
    [aux_sym_conditional_expression_repeat1] = STATE(196),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(535),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [anon_sym_elseif] = ACTIONS(272),
    [anon_sym_else] = ACTIONS(274),
    [sym_identifier] = ACTIONS(440),
    [sym_number] = ACTIONS(442),
    [sym_string] = ACTIONS(442),
    [sym_comment] = ACTIONS(24),
  },
  [151] = {
    [anon_sym_end] = ACTIONS(537),
    [sym_comment] = ACTIONS(24),
  },
  [152] = {
    [sym_elseif_clause] = STATE(196),
    [sym_else_clause] = STATE(195),
    [aux_sym__expression_list_repeat1] = STATE(166),
    [aux_sym_conditional_expression_repeat1] = STATE(196),
    [anon_sym_end] = ACTIONS(535),
    [anon_sym_elseif] = ACTIONS(272),
    [anon_sym_else] = ACTIONS(274),
    [anon_sym_LF] = ACTIONS(539),
    [anon_sym_SEMI] = ACTIONS(541),
    [sym_comment] = ACTIONS(72),
  },
  [153] = {
    [sym_elseif_clause] = STATE(167),
    [sym_else_clause] = STATE(195),
    [aux_sym_conditional_expression_repeat1] = STATE(167),
    [anon_sym_end] = ACTIONS(537),
    [anon_sym_elseif] = ACTIONS(450),
    [anon_sym_else] = ACTIONS(274),
    [sym_comment] = ACTIONS(24),
  },
  [154] = {
    [anon_sym_module] = ACTIONS(458),
    [anon_sym_mutable] = ACTIONS(458),
    [anon_sym_struct] = ACTIONS(458),
    [anon_sym_COMMA] = ACTIONS(456),
    [anon_sym_function] = ACTIONS(458),
    [anon_sym_LPAREN] = ACTIONS(456),
    [anon_sym_RPAREN] = ACTIONS(456),
    [anon_sym_PIPE_PIPE] = ACTIONS(458),
    [anon_sym_AMP_AMP] = ACTIONS(456),
    [anon_sym_EQ_GT] = ACTIONS(456),
    [anon_sym_if] = ACTIONS(458),
    [sym_identifier] = ACTIONS(458),
    [sym_number] = ACTIONS(456),
    [sym_string] = ACTIONS(456),
    [sym__times_operator] = ACTIONS(458),
    [sym__plus_operator] = ACTIONS(458),
    [sym__arrow_operator] = ACTIONS(456),
    [sym__assign_operator] = ACTIONS(458),
    [sym_comment] = ACTIONS(24),
  },
  [155] = {
    [aux_sym_argument_list_repeat1] = STATE(173),
    [anon_sym_COMMA] = ACTIONS(288),
    [anon_sym_RPAREN] = ACTIONS(543),
    [sym_comment] = ACTIONS(24),
  },
  [156] = {
    [sym_argument_list] = STATE(30),
    [anon_sym_end] = ACTIONS(304),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_PIPE_PIPE] = ACTIONS(54),
    [anon_sym_AMP_AMP] = ACTIONS(56),
    [anon_sym_EQ_GT] = ACTIONS(270),
    [anon_sym_elseif] = ACTIONS(304),
    [anon_sym_else] = ACTIONS(304),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(62),
    [sym__arrow_operator] = ACTIONS(276),
    [sym__assign_operator] = ACTIONS(278),
    [anon_sym_LF] = ACTIONS(302),
    [anon_sym_SEMI] = ACTIONS(304),
    [sym_comment] = ACTIONS(72),
  },
  [157] = {
    [sym__expression] = STATE(199),
    [sym_module_expression] = STATE(199),
    [sym_struct_definition] = STATE(199),
    [sym_function_expression] = STATE(199),
    [sym_call_expression] = STATE(199),
    [sym_argument_list] = STATE(55),
    [sym_assignment_expression] = STATE(199),
    [sym_binary_expression] = STATE(199),
    [sym_pair_expression] = STATE(199),
    [sym_conditional_expression] = STATE(199),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_PIPE_PIPE] = ACTIONS(112),
    [anon_sym_AMP_AMP] = ACTIONS(114),
    [anon_sym_EQ_GT] = ACTIONS(116),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(545),
    [sym_number] = ACTIONS(547),
    [sym_string] = ACTIONS(547),
    [sym__times_operator] = ACTIONS(122),
    [sym__plus_operator] = ACTIONS(124),
    [sym__arrow_operator] = ACTIONS(126),
    [sym__assign_operator] = ACTIONS(128),
    [sym_comment] = ACTIONS(24),
  },
  [158] = {
    [sym_argument_list] = STATE(30),
    [aux_sym__expression_list_repeat1] = STATE(201),
    [anon_sym_end] = ACTIONS(549),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_PIPE_PIPE] = ACTIONS(54),
    [anon_sym_AMP_AMP] = ACTIONS(56),
    [anon_sym_EQ_GT] = ACTIONS(184),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(62),
    [sym__arrow_operator] = ACTIONS(186),
    [sym__assign_operator] = ACTIONS(188),
    [anon_sym_LF] = ACTIONS(551),
    [anon_sym_SEMI] = ACTIONS(553),
    [sym_comment] = ACTIONS(72),
  },
  [159] = {
    [sym_argument_list] = STATE(30),
    [anon_sym_end] = ACTIONS(300),
    [anon_sym_LPAREN] = ACTIONS(300),
    [anon_sym_PIPE_PIPE] = ACTIONS(54),
    [anon_sym_AMP_AMP] = ACTIONS(56),
    [anon_sym_EQ_GT] = ACTIONS(300),
    [anon_sym_elseif] = ACTIONS(300),
    [anon_sym_else] = ACTIONS(300),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(62),
    [sym__arrow_operator] = ACTIONS(276),
    [sym__assign_operator] = ACTIONS(300),
    [anon_sym_LF] = ACTIONS(298),
    [anon_sym_SEMI] = ACTIONS(300),
    [sym_comment] = ACTIONS(72),
  },
  [160] = {
    [sym_argument_list] = STATE(30),
    [anon_sym_end] = ACTIONS(308),
    [anon_sym_LPAREN] = ACTIONS(308),
    [anon_sym_PIPE_PIPE] = ACTIONS(54),
    [anon_sym_AMP_AMP] = ACTIONS(56),
    [anon_sym_EQ_GT] = ACTIONS(308),
    [anon_sym_elseif] = ACTIONS(308),
    [anon_sym_else] = ACTIONS(308),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(62),
    [sym__arrow_operator] = ACTIONS(276),
    [sym__assign_operator] = ACTIONS(278),
    [anon_sym_LF] = ACTIONS(306),
    [anon_sym_SEMI] = ACTIONS(308),
    [sym_comment] = ACTIONS(72),
  },
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(555),
    [anon_sym_end] = ACTIONS(557),
    [anon_sym_LPAREN] = ACTIONS(557),
    [anon_sym_PIPE_PIPE] = ACTIONS(557),
    [anon_sym_AMP_AMP] = ACTIONS(557),
    [anon_sym_EQ_GT] = ACTIONS(557),
    [anon_sym_elseif] = ACTIONS(557),
    [anon_sym_else] = ACTIONS(557),
    [sym__times_operator] = ACTIONS(557),
    [sym__plus_operator] = ACTIONS(557),
    [sym__arrow_operator] = ACTIONS(557),
    [sym__assign_operator] = ACTIONS(557),
    [anon_sym_LF] = ACTIONS(555),
    [anon_sym_SEMI] = ACTIONS(557),
    [sym_comment] = ACTIONS(72),
  },
  [162] = {
    [sym_argument_list] = STATE(30),
    [anon_sym_end] = ACTIONS(312),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_PIPE_PIPE] = ACTIONS(54),
    [anon_sym_AMP_AMP] = ACTIONS(56),
    [anon_sym_EQ_GT] = ACTIONS(270),
    [anon_sym_elseif] = ACTIONS(312),
    [anon_sym_else] = ACTIONS(312),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(62),
    [sym__arrow_operator] = ACTIONS(276),
    [sym__assign_operator] = ACTIONS(278),
    [anon_sym_LF] = ACTIONS(310),
    [anon_sym_SEMI] = ACTIONS(312),
    [sym_comment] = ACTIONS(72),
  },
  [163] = {
    [anon_sym_end] = ACTIONS(559),
    [sym_comment] = ACTIONS(24),
  },
  [164] = {
    [sym_elseif_clause] = STATE(167),
    [sym_else_clause] = STATE(203),
    [aux_sym_conditional_expression_repeat1] = STATE(167),
    [anon_sym_end] = ACTIONS(559),
    [anon_sym_elseif] = ACTIONS(450),
    [anon_sym_else] = ACTIONS(274),
    [sym_comment] = ACTIONS(24),
  },
  [165] = {
    [sym__expression] = STATE(162),
    [sym_module_expression] = STATE(162),
    [sym_struct_definition] = STATE(162),
    [sym_function_expression] = STATE(162),
    [sym_call_expression] = STATE(162),
    [sym_assignment_expression] = STATE(162),
    [sym_binary_expression] = STATE(162),
    [sym_pair_expression] = STATE(162),
    [sym_conditional_expression] = STATE(162),
    [sym_elseif_clause] = STATE(204),
    [sym_else_clause] = STATE(203),
    [aux_sym_conditional_expression_repeat1] = STATE(204),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(561),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [anon_sym_elseif] = ACTIONS(272),
    [anon_sym_else] = ACTIONS(274),
    [sym_identifier] = ACTIONS(440),
    [sym_number] = ACTIONS(442),
    [sym_string] = ACTIONS(442),
    [sym_comment] = ACTIONS(24),
  },
  [166] = {
    [aux_sym__expression_list_repeat1] = STATE(166),
    [anon_sym_end] = ACTIONS(312),
    [anon_sym_elseif] = ACTIONS(312),
    [anon_sym_else] = ACTIONS(312),
    [anon_sym_LF] = ACTIONS(563),
    [anon_sym_SEMI] = ACTIONS(566),
    [sym_comment] = ACTIONS(72),
  },
  [167] = {
    [sym_elseif_clause] = STATE(167),
    [aux_sym_conditional_expression_repeat1] = STATE(167),
    [anon_sym_end] = ACTIONS(569),
    [anon_sym_elseif] = ACTIONS(571),
    [anon_sym_else] = ACTIONS(574),
    [sym_comment] = ACTIONS(24),
  },
  [168] = {
    [sym_argument_list] = STATE(55),
    [anon_sym_COMMA] = ACTIONS(576),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(576),
    [anon_sym_PIPE_PIPE] = ACTIONS(112),
    [anon_sym_AMP_AMP] = ACTIONS(114),
    [anon_sym_EQ_GT] = ACTIONS(292),
    [sym__times_operator] = ACTIONS(122),
    [sym__plus_operator] = ACTIONS(124),
    [sym__arrow_operator] = ACTIONS(294),
    [sym__assign_operator] = ACTIONS(296),
    [sym_comment] = ACTIONS(24),
  },
  [169] = {
    [sym_argument_list] = STATE(55),
    [anon_sym_COMMA] = ACTIONS(302),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(302),
    [anon_sym_PIPE_PIPE] = ACTIONS(112),
    [anon_sym_AMP_AMP] = ACTIONS(114),
    [anon_sym_EQ_GT] = ACTIONS(292),
    [sym__times_operator] = ACTIONS(122),
    [sym__plus_operator] = ACTIONS(124),
    [sym__arrow_operator] = ACTIONS(294),
    [sym__assign_operator] = ACTIONS(296),
    [sym_comment] = ACTIONS(24),
  },
  [170] = {
    [sym_argument_list] = STATE(55),
    [anon_sym_COMMA] = ACTIONS(298),
    [anon_sym_LPAREN] = ACTIONS(298),
    [anon_sym_RPAREN] = ACTIONS(298),
    [anon_sym_PIPE_PIPE] = ACTIONS(112),
    [anon_sym_AMP_AMP] = ACTIONS(114),
    [anon_sym_EQ_GT] = ACTIONS(298),
    [sym__times_operator] = ACTIONS(122),
    [sym__plus_operator] = ACTIONS(124),
    [sym__arrow_operator] = ACTIONS(294),
    [sym__assign_operator] = ACTIONS(300),
    [sym_comment] = ACTIONS(24),
  },
  [171] = {
    [sym_argument_list] = STATE(55),
    [anon_sym_COMMA] = ACTIONS(306),
    [anon_sym_LPAREN] = ACTIONS(306),
    [anon_sym_RPAREN] = ACTIONS(306),
    [anon_sym_PIPE_PIPE] = ACTIONS(112),
    [anon_sym_AMP_AMP] = ACTIONS(114),
    [anon_sym_EQ_GT] = ACTIONS(306),
    [sym__times_operator] = ACTIONS(122),
    [sym__plus_operator] = ACTIONS(124),
    [sym__arrow_operator] = ACTIONS(294),
    [sym__assign_operator] = ACTIONS(296),
    [sym_comment] = ACTIONS(24),
  },
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(578),
    [anon_sym_end] = ACTIONS(580),
    [anon_sym_LPAREN] = ACTIONS(580),
    [anon_sym_PIPE_PIPE] = ACTIONS(580),
    [anon_sym_AMP_AMP] = ACTIONS(580),
    [anon_sym_EQ_GT] = ACTIONS(580),
    [anon_sym_elseif] = ACTIONS(580),
    [anon_sym_else] = ACTIONS(580),
    [sym__times_operator] = ACTIONS(580),
    [sym__plus_operator] = ACTIONS(580),
    [sym__arrow_operator] = ACTIONS(580),
    [sym__assign_operator] = ACTIONS(580),
    [anon_sym_LF] = ACTIONS(578),
    [anon_sym_SEMI] = ACTIONS(580),
    [sym_comment] = ACTIONS(72),
  },
  [173] = {
    [aux_sym_argument_list_repeat1] = STATE(173),
    [anon_sym_COMMA] = ACTIONS(582),
    [anon_sym_RPAREN] = ACTIONS(576),
    [sym_comment] = ACTIONS(24),
  },
  [174] = {
    [ts_builtin_sym_end] = ACTIONS(585),
    [anon_sym_end] = ACTIONS(587),
    [anon_sym_LPAREN] = ACTIONS(587),
    [anon_sym_PIPE_PIPE] = ACTIONS(587),
    [anon_sym_AMP_AMP] = ACTIONS(587),
    [anon_sym_EQ_GT] = ACTIONS(587),
    [anon_sym_elseif] = ACTIONS(587),
    [anon_sym_else] = ACTIONS(587),
    [sym__times_operator] = ACTIONS(587),
    [sym__plus_operator] = ACTIONS(587),
    [sym__arrow_operator] = ACTIONS(587),
    [sym__assign_operator] = ACTIONS(587),
    [anon_sym_LF] = ACTIONS(585),
    [anon_sym_SEMI] = ACTIONS(587),
    [sym_comment] = ACTIONS(72),
  },
  [175] = {
    [sym__expression] = STATE(123),
    [sym_module_expression] = STATE(123),
    [sym_struct_definition] = STATE(123),
    [sym_function_expression] = STATE(123),
    [sym_call_expression] = STATE(123),
    [sym_assignment_expression] = STATE(123),
    [sym_binary_expression] = STATE(123),
    [sym_pair_expression] = STATE(123),
    [sym_conditional_expression] = STATE(123),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(340),
    [sym_number] = ACTIONS(342),
    [sym_string] = ACTIONS(342),
    [sym_comment] = ACTIONS(24),
  },
  [176] = {
    [ts_builtin_sym_end] = ACTIONS(589),
    [anon_sym_end] = ACTIONS(591),
    [anon_sym_LPAREN] = ACTIONS(591),
    [anon_sym_PIPE_PIPE] = ACTIONS(591),
    [anon_sym_AMP_AMP] = ACTIONS(591),
    [anon_sym_EQ_GT] = ACTIONS(591),
    [anon_sym_elseif] = ACTIONS(591),
    [anon_sym_else] = ACTIONS(591),
    [sym__times_operator] = ACTIONS(591),
    [sym__plus_operator] = ACTIONS(591),
    [sym__arrow_operator] = ACTIONS(591),
    [sym__assign_operator] = ACTIONS(591),
    [anon_sym_LF] = ACTIONS(589),
    [anon_sym_SEMI] = ACTIONS(591),
    [sym_comment] = ACTIONS(72),
  },
  [177] = {
    [aux_sym_parameterized_identifier_repeat1] = STATE(207),
    [anon_sym_COMMA] = ACTIONS(356),
    [anon_sym_RBRACE] = ACTIONS(593),
    [sym_comment] = ACTIONS(24),
  },
  [178] = {
    [anon_sym_COMMA] = ACTIONS(595),
    [anon_sym_RBRACE] = ACTIONS(595),
    [sym_comment] = ACTIONS(24),
  },
  [179] = {
    [anon_sym_end] = ACTIONS(597),
    [anon_sym_COLON_COLON] = ACTIONS(597),
    [anon_sym_LT_COLON] = ACTIONS(597),
    [anon_sym_LF] = ACTIONS(599),
    [anon_sym_SEMI] = ACTIONS(597),
    [sym_comment] = ACTIONS(72),
  },
  [180] = {
    [aux_sym_parameterized_identifier_repeat1] = STATE(180),
    [anon_sym_COMMA] = ACTIONS(601),
    [anon_sym_RBRACE] = ACTIONS(595),
    [sym_comment] = ACTIONS(24),
  },
  [181] = {
    [anon_sym_COMMA] = ACTIONS(368),
    [anon_sym_RBRACE] = ACTIONS(368),
    [sym_comment] = ACTIONS(24),
  },
  [182] = {
    [anon_sym_COMMA] = ACTIONS(604),
    [anon_sym_RPAREN] = ACTIONS(604),
    [sym_comment] = ACTIONS(24),
  },
  [183] = {
    [anon_sym_module] = ACTIONS(606),
    [anon_sym_end] = ACTIONS(606),
    [anon_sym_mutable] = ACTIONS(606),
    [anon_sym_struct] = ACTIONS(606),
    [anon_sym_function] = ACTIONS(606),
    [anon_sym_if] = ACTIONS(606),
    [sym_identifier] = ACTIONS(606),
    [sym_number] = ACTIONS(608),
    [sym_string] = ACTIONS(608),
    [sym_comment] = ACTIONS(24),
  },
  [184] = {
    [aux_sym_parameter_list_repeat1] = STATE(184),
    [anon_sym_COMMA] = ACTIONS(610),
    [anon_sym_RPAREN] = ACTIONS(604),
    [sym_comment] = ACTIONS(24),
  },
  [185] = {
    [ts_builtin_sym_end] = ACTIONS(613),
    [anon_sym_end] = ACTIONS(615),
    [anon_sym_LPAREN] = ACTIONS(615),
    [anon_sym_PIPE_PIPE] = ACTIONS(615),
    [anon_sym_AMP_AMP] = ACTIONS(615),
    [anon_sym_EQ_GT] = ACTIONS(615),
    [anon_sym_elseif] = ACTIONS(615),
    [anon_sym_else] = ACTIONS(615),
    [sym__times_operator] = ACTIONS(615),
    [sym__plus_operator] = ACTIONS(615),
    [sym__arrow_operator] = ACTIONS(615),
    [sym__assign_operator] = ACTIONS(615),
    [anon_sym_LF] = ACTIONS(613),
    [anon_sym_SEMI] = ACTIONS(615),
    [sym_comment] = ACTIONS(72),
  },
  [186] = {
    [sym__expression] = STATE(123),
    [sym_module_expression] = STATE(123),
    [sym_struct_definition] = STATE(123),
    [sym_function_expression] = STATE(123),
    [sym_call_expression] = STATE(123),
    [sym_assignment_expression] = STATE(123),
    [sym_binary_expression] = STATE(123),
    [sym_pair_expression] = STATE(123),
    [sym_conditional_expression] = STATE(123),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(617),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(340),
    [sym_number] = ACTIONS(342),
    [sym_string] = ACTIONS(342),
    [sym_comment] = ACTIONS(24),
  },
  [187] = {
    [anon_sym_module] = ACTIONS(476),
    [anon_sym_mutable] = ACTIONS(476),
    [anon_sym_struct] = ACTIONS(476),
    [anon_sym_COMMA] = ACTIONS(474),
    [anon_sym_function] = ACTIONS(476),
    [anon_sym_LPAREN] = ACTIONS(474),
    [anon_sym_RPAREN] = ACTIONS(474),
    [anon_sym_PIPE_PIPE] = ACTIONS(476),
    [anon_sym_AMP_AMP] = ACTIONS(474),
    [anon_sym_EQ_GT] = ACTIONS(474),
    [anon_sym_if] = ACTIONS(476),
    [sym_identifier] = ACTIONS(476),
    [sym_number] = ACTIONS(474),
    [sym_string] = ACTIONS(474),
    [sym__times_operator] = ACTIONS(476),
    [sym__plus_operator] = ACTIONS(476),
    [sym__arrow_operator] = ACTIONS(474),
    [sym__assign_operator] = ACTIONS(476),
    [sym_comment] = ACTIONS(24),
  },
  [188] = {
    [sym__expression] = STATE(123),
    [sym_module_expression] = STATE(123),
    [sym_struct_definition] = STATE(123),
    [sym_function_expression] = STATE(123),
    [sym_call_expression] = STATE(123),
    [sym_assignment_expression] = STATE(123),
    [sym_binary_expression] = STATE(123),
    [sym_pair_expression] = STATE(123),
    [sym_conditional_expression] = STATE(123),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(619),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(340),
    [sym_number] = ACTIONS(342),
    [sym_string] = ACTIONS(342),
    [sym_comment] = ACTIONS(24),
  },
  [189] = {
    [anon_sym_module] = ACTIONS(488),
    [anon_sym_mutable] = ACTIONS(488),
    [anon_sym_struct] = ACTIONS(488),
    [anon_sym_COMMA] = ACTIONS(486),
    [anon_sym_function] = ACTIONS(488),
    [anon_sym_LPAREN] = ACTIONS(486),
    [anon_sym_RPAREN] = ACTIONS(486),
    [anon_sym_PIPE_PIPE] = ACTIONS(488),
    [anon_sym_AMP_AMP] = ACTIONS(486),
    [anon_sym_EQ_GT] = ACTIONS(486),
    [anon_sym_if] = ACTIONS(488),
    [sym_identifier] = ACTIONS(488),
    [sym_number] = ACTIONS(486),
    [sym_string] = ACTIONS(486),
    [sym__times_operator] = ACTIONS(488),
    [sym__plus_operator] = ACTIONS(488),
    [sym__arrow_operator] = ACTIONS(486),
    [sym__assign_operator] = ACTIONS(488),
    [sym_comment] = ACTIONS(24),
  },
  [190] = {
    [sym_typed_identifier] = STATE(79),
    [sym_parameterized_identifier] = STATE(13),
    [aux_sym_struct_definition_repeat1] = STATE(134),
    [anon_sym_end] = ACTIONS(621),
    [sym_identifier] = ACTIONS(206),
    [sym_comment] = ACTIONS(24),
  },
  [191] = {
    [anon_sym_module] = ACTIONS(513),
    [anon_sym_mutable] = ACTIONS(513),
    [anon_sym_struct] = ACTIONS(513),
    [anon_sym_COMMA] = ACTIONS(511),
    [anon_sym_function] = ACTIONS(513),
    [anon_sym_LPAREN] = ACTIONS(511),
    [anon_sym_RPAREN] = ACTIONS(511),
    [anon_sym_PIPE_PIPE] = ACTIONS(513),
    [anon_sym_AMP_AMP] = ACTIONS(511),
    [anon_sym_EQ_GT] = ACTIONS(511),
    [anon_sym_if] = ACTIONS(513),
    [sym_identifier] = ACTIONS(513),
    [sym_number] = ACTIONS(511),
    [sym_string] = ACTIONS(511),
    [sym__times_operator] = ACTIONS(513),
    [sym__plus_operator] = ACTIONS(513),
    [sym__arrow_operator] = ACTIONS(511),
    [sym__assign_operator] = ACTIONS(513),
    [sym_comment] = ACTIONS(24),
  },
  [192] = {
    [sym__expression] = STATE(123),
    [sym_module_expression] = STATE(123),
    [sym_struct_definition] = STATE(123),
    [sym_function_expression] = STATE(123),
    [sym_call_expression] = STATE(123),
    [sym_assignment_expression] = STATE(123),
    [sym_binary_expression] = STATE(123),
    [sym_pair_expression] = STATE(123),
    [sym_conditional_expression] = STATE(123),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(623),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(340),
    [sym_number] = ACTIONS(342),
    [sym_string] = ACTIONS(342),
    [sym_comment] = ACTIONS(24),
  },
  [193] = {
    [aux_sym__expression_list_repeat1] = STATE(125),
    [anon_sym_end] = ACTIONS(623),
    [anon_sym_LF] = ACTIONS(625),
    [anon_sym_SEMI] = ACTIONS(627),
    [sym_comment] = ACTIONS(72),
  },
  [194] = {
    [anon_sym_module] = ACTIONS(557),
    [anon_sym_mutable] = ACTIONS(557),
    [anon_sym_struct] = ACTIONS(557),
    [anon_sym_COMMA] = ACTIONS(555),
    [anon_sym_function] = ACTIONS(557),
    [anon_sym_LPAREN] = ACTIONS(555),
    [anon_sym_RPAREN] = ACTIONS(555),
    [anon_sym_PIPE_PIPE] = ACTIONS(557),
    [anon_sym_AMP_AMP] = ACTIONS(555),
    [anon_sym_EQ_GT] = ACTIONS(555),
    [anon_sym_if] = ACTIONS(557),
    [sym_identifier] = ACTIONS(557),
    [sym_number] = ACTIONS(555),
    [sym_string] = ACTIONS(555),
    [sym__times_operator] = ACTIONS(557),
    [sym__plus_operator] = ACTIONS(557),
    [sym__arrow_operator] = ACTIONS(555),
    [sym__assign_operator] = ACTIONS(557),
    [sym_comment] = ACTIONS(24),
  },
  [195] = {
    [anon_sym_end] = ACTIONS(629),
    [sym_comment] = ACTIONS(24),
  },
  [196] = {
    [sym_elseif_clause] = STATE(167),
    [sym_else_clause] = STATE(214),
    [aux_sym_conditional_expression_repeat1] = STATE(167),
    [anon_sym_end] = ACTIONS(629),
    [anon_sym_elseif] = ACTIONS(450),
    [anon_sym_else] = ACTIONS(274),
    [sym_comment] = ACTIONS(24),
  },
  [197] = {
    [sym__expression] = STATE(162),
    [sym_module_expression] = STATE(162),
    [sym_struct_definition] = STATE(162),
    [sym_function_expression] = STATE(162),
    [sym_call_expression] = STATE(162),
    [sym_assignment_expression] = STATE(162),
    [sym_binary_expression] = STATE(162),
    [sym_pair_expression] = STATE(162),
    [sym_conditional_expression] = STATE(162),
    [sym_elseif_clause] = STATE(215),
    [sym_else_clause] = STATE(214),
    [aux_sym_conditional_expression_repeat1] = STATE(215),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(631),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [anon_sym_elseif] = ACTIONS(272),
    [anon_sym_else] = ACTIONS(274),
    [sym_identifier] = ACTIONS(440),
    [sym_number] = ACTIONS(442),
    [sym_string] = ACTIONS(442),
    [sym_comment] = ACTIONS(24),
  },
  [198] = {
    [anon_sym_module] = ACTIONS(580),
    [anon_sym_mutable] = ACTIONS(580),
    [anon_sym_struct] = ACTIONS(580),
    [anon_sym_COMMA] = ACTIONS(578),
    [anon_sym_function] = ACTIONS(580),
    [anon_sym_LPAREN] = ACTIONS(578),
    [anon_sym_RPAREN] = ACTIONS(578),
    [anon_sym_PIPE_PIPE] = ACTIONS(580),
    [anon_sym_AMP_AMP] = ACTIONS(578),
    [anon_sym_EQ_GT] = ACTIONS(578),
    [anon_sym_if] = ACTIONS(580),
    [sym_identifier] = ACTIONS(580),
    [sym_number] = ACTIONS(578),
    [sym_string] = ACTIONS(578),
    [sym__times_operator] = ACTIONS(580),
    [sym__plus_operator] = ACTIONS(580),
    [sym__arrow_operator] = ACTIONS(578),
    [sym__assign_operator] = ACTIONS(580),
    [sym_comment] = ACTIONS(24),
  },
  [199] = {
    [sym_argument_list] = STATE(30),
    [aux_sym__expression_list_repeat1] = STATE(217),
    [anon_sym_end] = ACTIONS(633),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_PIPE_PIPE] = ACTIONS(54),
    [anon_sym_AMP_AMP] = ACTIONS(56),
    [anon_sym_EQ_GT] = ACTIONS(270),
    [anon_sym_elseif] = ACTIONS(633),
    [anon_sym_else] = ACTIONS(633),
    [sym__times_operator] = ACTIONS(60),
    [sym__plus_operator] = ACTIONS(62),
    [sym__arrow_operator] = ACTIONS(276),
    [sym__assign_operator] = ACTIONS(278),
    [anon_sym_LF] = ACTIONS(635),
    [anon_sym_SEMI] = ACTIONS(637),
    [sym_comment] = ACTIONS(72),
  },
  [200] = {
    [sym__expression] = STATE(123),
    [sym_module_expression] = STATE(123),
    [sym_struct_definition] = STATE(123),
    [sym_function_expression] = STATE(123),
    [sym_call_expression] = STATE(123),
    [sym_assignment_expression] = STATE(123),
    [sym_binary_expression] = STATE(123),
    [sym_pair_expression] = STATE(123),
    [sym_conditional_expression] = STATE(123),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(639),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(340),
    [sym_number] = ACTIONS(342),
    [sym_string] = ACTIONS(342),
    [sym_comment] = ACTIONS(24),
  },
  [201] = {
    [aux_sym__expression_list_repeat1] = STATE(125),
    [anon_sym_end] = ACTIONS(639),
    [anon_sym_LF] = ACTIONS(641),
    [anon_sym_SEMI] = ACTIONS(643),
    [sym_comment] = ACTIONS(72),
  },
  [202] = {
    [ts_builtin_sym_end] = ACTIONS(645),
    [anon_sym_end] = ACTIONS(647),
    [anon_sym_LPAREN] = ACTIONS(647),
    [anon_sym_PIPE_PIPE] = ACTIONS(647),
    [anon_sym_AMP_AMP] = ACTIONS(647),
    [anon_sym_EQ_GT] = ACTIONS(647),
    [anon_sym_elseif] = ACTIONS(647),
    [anon_sym_else] = ACTIONS(647),
    [sym__times_operator] = ACTIONS(647),
    [sym__plus_operator] = ACTIONS(647),
    [sym__arrow_operator] = ACTIONS(647),
    [sym__assign_operator] = ACTIONS(647),
    [anon_sym_LF] = ACTIONS(645),
    [anon_sym_SEMI] = ACTIONS(647),
    [sym_comment] = ACTIONS(72),
  },
  [203] = {
    [anon_sym_end] = ACTIONS(649),
    [sym_comment] = ACTIONS(24),
  },
  [204] = {
    [sym_elseif_clause] = STATE(167),
    [sym_else_clause] = STATE(220),
    [aux_sym_conditional_expression_repeat1] = STATE(167),
    [anon_sym_end] = ACTIONS(649),
    [anon_sym_elseif] = ACTIONS(450),
    [anon_sym_else] = ACTIONS(274),
    [sym_comment] = ACTIONS(24),
  },
  [205] = {
    [sym__expression] = STATE(162),
    [sym_module_expression] = STATE(162),
    [sym_struct_definition] = STATE(162),
    [sym_function_expression] = STATE(162),
    [sym_call_expression] = STATE(162),
    [sym_assignment_expression] = STATE(162),
    [sym_binary_expression] = STATE(162),
    [sym_pair_expression] = STATE(162),
    [sym_conditional_expression] = STATE(162),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(440),
    [sym_number] = ACTIONS(442),
    [sym_string] = ACTIONS(442),
    [sym_comment] = ACTIONS(24),
  },
  [206] = {
    [anon_sym_COLON_COLON] = ACTIONS(494),
    [anon_sym_LT_COLON] = ACTIONS(494),
    [anon_sym_COMMA] = ACTIONS(494),
    [anon_sym_RBRACE] = ACTIONS(494),
    [sym_comment] = ACTIONS(24),
  },
  [207] = {
    [aux_sym_parameterized_identifier_repeat1] = STATE(180),
    [anon_sym_COMMA] = ACTIONS(356),
    [anon_sym_RBRACE] = ACTIONS(651),
    [sym_comment] = ACTIONS(24),
  },
  [208] = {
    [ts_builtin_sym_end] = ACTIONS(653),
    [anon_sym_end] = ACTIONS(655),
    [anon_sym_LPAREN] = ACTIONS(655),
    [anon_sym_PIPE_PIPE] = ACTIONS(655),
    [anon_sym_AMP_AMP] = ACTIONS(655),
    [anon_sym_EQ_GT] = ACTIONS(655),
    [anon_sym_elseif] = ACTIONS(655),
    [anon_sym_else] = ACTIONS(655),
    [sym__times_operator] = ACTIONS(655),
    [sym__plus_operator] = ACTIONS(655),
    [sym__arrow_operator] = ACTIONS(655),
    [sym__assign_operator] = ACTIONS(655),
    [anon_sym_LF] = ACTIONS(653),
    [anon_sym_SEMI] = ACTIONS(655),
    [sym_comment] = ACTIONS(72),
  },
  [209] = {
    [anon_sym_module] = ACTIONS(587),
    [anon_sym_mutable] = ACTIONS(587),
    [anon_sym_struct] = ACTIONS(587),
    [anon_sym_COMMA] = ACTIONS(585),
    [anon_sym_function] = ACTIONS(587),
    [anon_sym_LPAREN] = ACTIONS(585),
    [anon_sym_RPAREN] = ACTIONS(585),
    [anon_sym_PIPE_PIPE] = ACTIONS(587),
    [anon_sym_AMP_AMP] = ACTIONS(585),
    [anon_sym_EQ_GT] = ACTIONS(585),
    [anon_sym_if] = ACTIONS(587),
    [sym_identifier] = ACTIONS(587),
    [sym_number] = ACTIONS(585),
    [sym_string] = ACTIONS(585),
    [sym__times_operator] = ACTIONS(587),
    [sym__plus_operator] = ACTIONS(587),
    [sym__arrow_operator] = ACTIONS(585),
    [sym__assign_operator] = ACTIONS(587),
    [sym_comment] = ACTIONS(24),
  },
  [210] = {
    [anon_sym_module] = ACTIONS(591),
    [anon_sym_mutable] = ACTIONS(591),
    [anon_sym_struct] = ACTIONS(591),
    [anon_sym_COMMA] = ACTIONS(589),
    [anon_sym_function] = ACTIONS(591),
    [anon_sym_LPAREN] = ACTIONS(589),
    [anon_sym_RPAREN] = ACTIONS(589),
    [anon_sym_PIPE_PIPE] = ACTIONS(591),
    [anon_sym_AMP_AMP] = ACTIONS(589),
    [anon_sym_EQ_GT] = ACTIONS(589),
    [anon_sym_if] = ACTIONS(591),
    [sym_identifier] = ACTIONS(591),
    [sym_number] = ACTIONS(589),
    [sym_string] = ACTIONS(589),
    [sym__times_operator] = ACTIONS(591),
    [sym__plus_operator] = ACTIONS(591),
    [sym__arrow_operator] = ACTIONS(589),
    [sym__assign_operator] = ACTIONS(591),
    [sym_comment] = ACTIONS(24),
  },
  [211] = {
    [anon_sym_module] = ACTIONS(615),
    [anon_sym_mutable] = ACTIONS(615),
    [anon_sym_struct] = ACTIONS(615),
    [anon_sym_COMMA] = ACTIONS(613),
    [anon_sym_function] = ACTIONS(615),
    [anon_sym_LPAREN] = ACTIONS(613),
    [anon_sym_RPAREN] = ACTIONS(613),
    [anon_sym_PIPE_PIPE] = ACTIONS(615),
    [anon_sym_AMP_AMP] = ACTIONS(613),
    [anon_sym_EQ_GT] = ACTIONS(613),
    [anon_sym_if] = ACTIONS(615),
    [sym_identifier] = ACTIONS(615),
    [sym_number] = ACTIONS(613),
    [sym_string] = ACTIONS(613),
    [sym__times_operator] = ACTIONS(615),
    [sym__plus_operator] = ACTIONS(615),
    [sym__arrow_operator] = ACTIONS(613),
    [sym__assign_operator] = ACTIONS(615),
    [sym_comment] = ACTIONS(24),
  },
  [212] = {
    [sym__expression] = STATE(123),
    [sym_module_expression] = STATE(123),
    [sym_struct_definition] = STATE(123),
    [sym_function_expression] = STATE(123),
    [sym_call_expression] = STATE(123),
    [sym_assignment_expression] = STATE(123),
    [sym_binary_expression] = STATE(123),
    [sym_pair_expression] = STATE(123),
    [sym_conditional_expression] = STATE(123),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(657),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(340),
    [sym_number] = ACTIONS(342),
    [sym_string] = ACTIONS(342),
    [sym_comment] = ACTIONS(24),
  },
  [213] = {
    [anon_sym_module] = ACTIONS(647),
    [anon_sym_mutable] = ACTIONS(647),
    [anon_sym_struct] = ACTIONS(647),
    [anon_sym_COMMA] = ACTIONS(645),
    [anon_sym_function] = ACTIONS(647),
    [anon_sym_LPAREN] = ACTIONS(645),
    [anon_sym_RPAREN] = ACTIONS(645),
    [anon_sym_PIPE_PIPE] = ACTIONS(647),
    [anon_sym_AMP_AMP] = ACTIONS(645),
    [anon_sym_EQ_GT] = ACTIONS(645),
    [anon_sym_if] = ACTIONS(647),
    [sym_identifier] = ACTIONS(647),
    [sym_number] = ACTIONS(645),
    [sym_string] = ACTIONS(645),
    [sym__times_operator] = ACTIONS(647),
    [sym__plus_operator] = ACTIONS(647),
    [sym__arrow_operator] = ACTIONS(645),
    [sym__assign_operator] = ACTIONS(647),
    [sym_comment] = ACTIONS(24),
  },
  [214] = {
    [anon_sym_end] = ACTIONS(659),
    [sym_comment] = ACTIONS(24),
  },
  [215] = {
    [sym_elseif_clause] = STATE(167),
    [sym_else_clause] = STATE(224),
    [aux_sym_conditional_expression_repeat1] = STATE(167),
    [anon_sym_end] = ACTIONS(659),
    [anon_sym_elseif] = ACTIONS(450),
    [anon_sym_else] = ACTIONS(274),
    [sym_comment] = ACTIONS(24),
  },
  [216] = {
    [sym__expression] = STATE(162),
    [sym_module_expression] = STATE(162),
    [sym_struct_definition] = STATE(162),
    [sym_function_expression] = STATE(162),
    [sym_call_expression] = STATE(162),
    [sym_assignment_expression] = STATE(162),
    [sym_binary_expression] = STATE(162),
    [sym_pair_expression] = STATE(162),
    [sym_conditional_expression] = STATE(162),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(661),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [anon_sym_elseif] = ACTIONS(661),
    [anon_sym_else] = ACTIONS(661),
    [sym_identifier] = ACTIONS(440),
    [sym_number] = ACTIONS(442),
    [sym_string] = ACTIONS(442),
    [sym_comment] = ACTIONS(24),
  },
  [217] = {
    [aux_sym__expression_list_repeat1] = STATE(166),
    [anon_sym_end] = ACTIONS(661),
    [anon_sym_elseif] = ACTIONS(661),
    [anon_sym_else] = ACTIONS(661),
    [anon_sym_LF] = ACTIONS(663),
    [anon_sym_SEMI] = ACTIONS(665),
    [sym_comment] = ACTIONS(72),
  },
  [218] = {
    [sym__expression] = STATE(123),
    [sym_module_expression] = STATE(123),
    [sym_struct_definition] = STATE(123),
    [sym_function_expression] = STATE(123),
    [sym_call_expression] = STATE(123),
    [sym_assignment_expression] = STATE(123),
    [sym_binary_expression] = STATE(123),
    [sym_pair_expression] = STATE(123),
    [sym_conditional_expression] = STATE(123),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(667),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [sym_identifier] = ACTIONS(340),
    [sym_number] = ACTIONS(342),
    [sym_string] = ACTIONS(342),
    [sym_comment] = ACTIONS(24),
  },
  [219] = {
    [ts_builtin_sym_end] = ACTIONS(669),
    [anon_sym_end] = ACTIONS(671),
    [anon_sym_LPAREN] = ACTIONS(671),
    [anon_sym_PIPE_PIPE] = ACTIONS(671),
    [anon_sym_AMP_AMP] = ACTIONS(671),
    [anon_sym_EQ_GT] = ACTIONS(671),
    [anon_sym_elseif] = ACTIONS(671),
    [anon_sym_else] = ACTIONS(671),
    [sym__times_operator] = ACTIONS(671),
    [sym__plus_operator] = ACTIONS(671),
    [sym__arrow_operator] = ACTIONS(671),
    [sym__assign_operator] = ACTIONS(671),
    [anon_sym_LF] = ACTIONS(669),
    [anon_sym_SEMI] = ACTIONS(671),
    [sym_comment] = ACTIONS(72),
  },
  [220] = {
    [anon_sym_end] = ACTIONS(673),
    [sym_comment] = ACTIONS(24),
  },
  [221] = {
    [anon_sym_COLON_COLON] = ACTIONS(599),
    [anon_sym_LT_COLON] = ACTIONS(599),
    [anon_sym_COMMA] = ACTIONS(599),
    [anon_sym_RBRACE] = ACTIONS(599),
    [sym_comment] = ACTIONS(24),
  },
  [222] = {
    [anon_sym_module] = ACTIONS(655),
    [anon_sym_mutable] = ACTIONS(655),
    [anon_sym_struct] = ACTIONS(655),
    [anon_sym_COMMA] = ACTIONS(653),
    [anon_sym_function] = ACTIONS(655),
    [anon_sym_LPAREN] = ACTIONS(653),
    [anon_sym_RPAREN] = ACTIONS(653),
    [anon_sym_PIPE_PIPE] = ACTIONS(655),
    [anon_sym_AMP_AMP] = ACTIONS(653),
    [anon_sym_EQ_GT] = ACTIONS(653),
    [anon_sym_if] = ACTIONS(655),
    [sym_identifier] = ACTIONS(655),
    [sym_number] = ACTIONS(653),
    [sym_string] = ACTIONS(653),
    [sym__times_operator] = ACTIONS(655),
    [sym__plus_operator] = ACTIONS(655),
    [sym__arrow_operator] = ACTIONS(653),
    [sym__assign_operator] = ACTIONS(655),
    [sym_comment] = ACTIONS(24),
  },
  [223] = {
    [anon_sym_module] = ACTIONS(671),
    [anon_sym_mutable] = ACTIONS(671),
    [anon_sym_struct] = ACTIONS(671),
    [anon_sym_COMMA] = ACTIONS(669),
    [anon_sym_function] = ACTIONS(671),
    [anon_sym_LPAREN] = ACTIONS(669),
    [anon_sym_RPAREN] = ACTIONS(669),
    [anon_sym_PIPE_PIPE] = ACTIONS(671),
    [anon_sym_AMP_AMP] = ACTIONS(669),
    [anon_sym_EQ_GT] = ACTIONS(669),
    [anon_sym_if] = ACTIONS(671),
    [sym_identifier] = ACTIONS(671),
    [sym_number] = ACTIONS(669),
    [sym_string] = ACTIONS(669),
    [sym__times_operator] = ACTIONS(671),
    [sym__plus_operator] = ACTIONS(671),
    [sym__arrow_operator] = ACTIONS(669),
    [sym__assign_operator] = ACTIONS(671),
    [sym_comment] = ACTIONS(24),
  },
  [224] = {
    [anon_sym_end] = ACTIONS(675),
    [sym_comment] = ACTIONS(24),
  },
  [225] = {
    [sym__expression] = STATE(162),
    [sym_module_expression] = STATE(162),
    [sym_struct_definition] = STATE(162),
    [sym_function_expression] = STATE(162),
    [sym_call_expression] = STATE(162),
    [sym_assignment_expression] = STATE(162),
    [sym_binary_expression] = STATE(162),
    [sym_pair_expression] = STATE(162),
    [sym_conditional_expression] = STATE(162),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(677),
    [anon_sym_mutable] = ACTIONS(12),
    [anon_sym_struct] = ACTIONS(14),
    [anon_sym_function] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(18),
    [anon_sym_elseif] = ACTIONS(677),
    [anon_sym_else] = ACTIONS(677),
    [sym_identifier] = ACTIONS(440),
    [sym_number] = ACTIONS(442),
    [sym_string] = ACTIONS(442),
    [sym_comment] = ACTIONS(24),
  },
  [226] = {
    [ts_builtin_sym_end] = ACTIONS(679),
    [anon_sym_end] = ACTIONS(681),
    [anon_sym_LPAREN] = ACTIONS(681),
    [anon_sym_PIPE_PIPE] = ACTIONS(681),
    [anon_sym_AMP_AMP] = ACTIONS(681),
    [anon_sym_EQ_GT] = ACTIONS(681),
    [anon_sym_elseif] = ACTIONS(681),
    [anon_sym_else] = ACTIONS(681),
    [sym__times_operator] = ACTIONS(681),
    [sym__plus_operator] = ACTIONS(681),
    [sym__arrow_operator] = ACTIONS(681),
    [sym__assign_operator] = ACTIONS(681),
    [anon_sym_LF] = ACTIONS(679),
    [anon_sym_SEMI] = ACTIONS(681),
    [sym_comment] = ACTIONS(72),
  },
  [227] = {
    [anon_sym_module] = ACTIONS(681),
    [anon_sym_mutable] = ACTIONS(681),
    [anon_sym_struct] = ACTIONS(681),
    [anon_sym_COMMA] = ACTIONS(679),
    [anon_sym_function] = ACTIONS(681),
    [anon_sym_LPAREN] = ACTIONS(679),
    [anon_sym_RPAREN] = ACTIONS(679),
    [anon_sym_PIPE_PIPE] = ACTIONS(681),
    [anon_sym_AMP_AMP] = ACTIONS(679),
    [anon_sym_EQ_GT] = ACTIONS(679),
    [anon_sym_if] = ACTIONS(681),
    [sym_identifier] = ACTIONS(681),
    [sym_number] = ACTIONS(679),
    [sym_string] = ACTIONS(679),
    [sym__times_operator] = ACTIONS(681),
    [sym__plus_operator] = ACTIONS(681),
    [sym__arrow_operator] = ACTIONS(679),
    [sym__assign_operator] = ACTIONS(681),
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
  [32] = {.count = 1, .reusable = true}, SHIFT(14),
  [34] = {.count = 1, .reusable = false}, SHIFT(15),
  [36] = {.count = 1, .reusable = false}, SHIFT(16),
  [38] = {.count = 1, .reusable = false}, SHIFT(17),
  [40] = {.count = 1, .reusable = false}, SHIFT(18),
  [42] = {.count = 1, .reusable = false}, SHIFT(19),
  [44] = {.count = 1, .reusable = false}, SHIFT(20),
  [46] = {.count = 1, .reusable = true}, SHIFT(20),
  [48] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [50] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [52] = {.count = 1, .reusable = false}, SHIFT(21),
  [54] = {.count = 1, .reusable = false}, SHIFT(22),
  [56] = {.count = 1, .reusable = false}, SHIFT(23),
  [58] = {.count = 1, .reusable = false}, SHIFT(24),
  [60] = {.count = 1, .reusable = false}, SHIFT(25),
  [62] = {.count = 1, .reusable = false}, SHIFT(26),
  [64] = {.count = 1, .reusable = false}, SHIFT(27),
  [66] = {.count = 1, .reusable = false}, SHIFT(28),
  [68] = {.count = 1, .reusable = true}, SHIFT(29),
  [70] = {.count = 1, .reusable = false}, SHIFT(29),
  [72] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [74] = {.count = 1, .reusable = false}, SHIFT(32),
  [76] = {.count = 1, .reusable = false}, SHIFT(33),
  [78] = {.count = 1, .reusable = true}, SHIFT(33),
  [80] = {.count = 1, .reusable = false}, REDUCE(sym_parameterized_identifier, 1),
  [82] = {.count = 1, .reusable = false}, SHIFT(35),
  [84] = {.count = 1, .reusable = true}, REDUCE(sym_parameterized_identifier, 1),
  [86] = {.count = 1, .reusable = false}, SHIFT(36),
  [88] = {.count = 1, .reusable = true}, SHIFT(37),
  [90] = {.count = 1, .reusable = false}, SHIFT(37),
  [92] = {.count = 1, .reusable = false}, REDUCE(sym_typed_identifier, 1),
  [94] = {.count = 1, .reusable = false}, SHIFT(38),
  [96] = {.count = 1, .reusable = true}, REDUCE(sym_typed_identifier, 1),
  [98] = {.count = 1, .reusable = true}, SHIFT(39),
  [100] = {.count = 1, .reusable = true}, SHIFT(41),
  [102] = {.count = 1, .reusable = true}, SHIFT(42),
  [104] = {.count = 1, .reusable = true}, SHIFT(44),
  [106] = {.count = 1, .reusable = false}, SHIFT(45),
  [108] = {.count = 1, .reusable = true}, SHIFT(45),
  [110] = {.count = 1, .reusable = true}, SHIFT(46),
  [112] = {.count = 1, .reusable = false}, SHIFT(47),
  [114] = {.count = 1, .reusable = true}, SHIFT(48),
  [116] = {.count = 1, .reusable = true}, SHIFT(49),
  [118] = {.count = 1, .reusable = false}, SHIFT(54),
  [120] = {.count = 1, .reusable = true}, SHIFT(54),
  [122] = {.count = 1, .reusable = false}, SHIFT(50),
  [124] = {.count = 1, .reusable = false}, SHIFT(51),
  [126] = {.count = 1, .reusable = true}, SHIFT(52),
  [128] = {.count = 1, .reusable = false}, SHIFT(53),
  [130] = {.count = 1, .reusable = true}, SHIFT(56),
  [132] = {.count = 1, .reusable = false}, SHIFT(57),
  [134] = {.count = 1, .reusable = true}, SHIFT(57),
  [136] = {.count = 1, .reusable = false}, SHIFT(58),
  [138] = {.count = 1, .reusable = true}, SHIFT(58),
  [140] = {.count = 1, .reusable = false}, SHIFT(59),
  [142] = {.count = 1, .reusable = true}, SHIFT(59),
  [144] = {.count = 1, .reusable = false}, SHIFT(60),
  [146] = {.count = 1, .reusable = true}, SHIFT(60),
  [148] = {.count = 1, .reusable = false}, SHIFT(61),
  [150] = {.count = 1, .reusable = true}, SHIFT(61),
  [152] = {.count = 1, .reusable = false}, SHIFT(62),
  [154] = {.count = 1, .reusable = true}, SHIFT(62),
  [156] = {.count = 1, .reusable = false}, SHIFT(63),
  [158] = {.count = 1, .reusable = true}, SHIFT(63),
  [160] = {.count = 1, .reusable = false}, SHIFT(64),
  [162] = {.count = 1, .reusable = true}, SHIFT(64),
  [164] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [166] = {.count = 1, .reusable = false}, SHIFT(65),
  [168] = {.count = 1, .reusable = true}, SHIFT(65),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2),
  [172] = {.count = 1, .reusable = false}, REDUCE(sym_call_expression, 2),
  [174] = {.count = 1, .reusable = true}, SHIFT(66),
  [176] = {.count = 1, .reusable = false}, SHIFT(66),
  [178] = {.count = 1, .reusable = true}, REDUCE(sym_module_expression, 3),
  [180] = {.count = 1, .reusable = false}, REDUCE(sym_module_expression, 3),
  [182] = {.count = 1, .reusable = false}, SHIFT(68),
  [184] = {.count = 1, .reusable = false}, SHIFT(69),
  [186] = {.count = 1, .reusable = false}, SHIFT(70),
  [188] = {.count = 1, .reusable = false}, SHIFT(71),
  [190] = {.count = 1, .reusable = true}, SHIFT(72),
  [192] = {.count = 1, .reusable = false}, SHIFT(72),
  [194] = {.count = 1, .reusable = false}, SHIFT(74),
  [196] = {.count = 1, .reusable = true}, SHIFT(75),
  [198] = {.count = 1, .reusable = false}, SHIFT(75),
  [200] = {.count = 1, .reusable = true}, SHIFT(76),
  [202] = {.count = 1, .reusable = true}, REDUCE(sym_struct_definition, 3),
  [204] = {.count = 1, .reusable = false}, REDUCE(sym_struct_definition, 3),
  [206] = {.count = 1, .reusable = false}, SHIFT(11),
  [208] = {.count = 1, .reusable = true}, SHIFT(82),
  [210] = {.count = 1, .reusable = true}, SHIFT(83),
  [212] = {.count = 1, .reusable = false}, SHIFT(84),
  [214] = {.count = 1, .reusable = false}, SHIFT(85),
  [216] = {.count = 1, .reusable = true}, SHIFT(85),
  [218] = {.count = 1, .reusable = false}, SHIFT(86),
  [220] = {.count = 1, .reusable = false}, SHIFT(87),
  [222] = {.count = 1, .reusable = true}, SHIFT(87),
  [224] = {.count = 1, .reusable = false}, SHIFT(89),
  [226] = {.count = 1, .reusable = true}, SHIFT(90),
  [228] = {.count = 1, .reusable = false}, SHIFT(90),
  [230] = {.count = 1, .reusable = false}, SHIFT(92),
  [232] = {.count = 1, .reusable = true}, SHIFT(92),
  [234] = {.count = 1, .reusable = true}, SHIFT(93),
  [236] = {.count = 1, .reusable = false}, SHIFT(94),
  [238] = {.count = 1, .reusable = true}, SHIFT(94),
  [240] = {.count = 1, .reusable = false}, SHIFT(95),
  [242] = {.count = 1, .reusable = true}, SHIFT(95),
  [244] = {.count = 1, .reusable = false}, SHIFT(96),
  [246] = {.count = 1, .reusable = true}, SHIFT(96),
  [248] = {.count = 1, .reusable = false}, SHIFT(97),
  [250] = {.count = 1, .reusable = true}, SHIFT(97),
  [252] = {.count = 1, .reusable = false}, SHIFT(98),
  [254] = {.count = 1, .reusable = true}, SHIFT(98),
  [256] = {.count = 1, .reusable = false}, SHIFT(99),
  [258] = {.count = 1, .reusable = true}, SHIFT(99),
  [260] = {.count = 1, .reusable = false}, SHIFT(100),
  [262] = {.count = 1, .reusable = true}, SHIFT(100),
  [264] = {.count = 1, .reusable = false}, SHIFT(101),
  [266] = {.count = 1, .reusable = true}, SHIFT(101),
  [268] = {.count = 1, .reusable = false}, SHIFT(102),
  [270] = {.count = 1, .reusable = false}, SHIFT(103),
  [272] = {.count = 1, .reusable = false}, SHIFT(104),
  [274] = {.count = 1, .reusable = false}, SHIFT(105),
  [276] = {.count = 1, .reusable = false}, SHIFT(106),
  [278] = {.count = 1, .reusable = false}, SHIFT(107),
  [280] = {.count = 1, .reusable = true}, SHIFT(108),
  [282] = {.count = 1, .reusable = false}, SHIFT(108),
  [284] = {.count = 1, .reusable = true}, REDUCE(sym_argument_list, 2),
  [286] = {.count = 1, .reusable = false}, REDUCE(sym_argument_list, 2),
  [288] = {.count = 1, .reusable = true}, SHIFT(112),
  [290] = {.count = 1, .reusable = true}, SHIFT(113),
  [292] = {.count = 1, .reusable = true}, SHIFT(114),
  [294] = {.count = 1, .reusable = true}, SHIFT(115),
  [296] = {.count = 1, .reusable = false}, SHIFT(116),
  [298] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3),
  [300] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3),
  [302] = {.count = 1, .reusable = true}, REDUCE(sym_pair_expression, 3),
  [304] = {.count = 1, .reusable = false}, REDUCE(sym_pair_expression, 3),
  [306] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 3),
  [308] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_expression, 3),
  [310] = {.count = 1, .reusable = true}, REDUCE(aux_sym__expression_list_repeat1, 2),
  [312] = {.count = 1, .reusable = false}, REDUCE(aux_sym__expression_list_repeat1, 2),
  [314] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 3),
  [316] = {.count = 2, .reusable = true}, REDUCE(aux_sym__expression_list_repeat1, 2), SHIFT_REPEAT(118),
  [319] = {.count = 2, .reusable = false}, REDUCE(aux_sym__expression_list_repeat1, 2), SHIFT_REPEAT(118),
  [322] = {.count = 1, .reusable = true}, REDUCE(sym_module_expression, 4),
  [324] = {.count = 1, .reusable = false}, REDUCE(sym_module_expression, 4),
  [326] = {.count = 1, .reusable = false}, SHIFT(119),
  [328] = {.count = 1, .reusable = true}, SHIFT(119),
  [330] = {.count = 1, .reusable = false}, SHIFT(120),
  [332] = {.count = 1, .reusable = true}, SHIFT(120),
  [334] = {.count = 1, .reusable = false}, SHIFT(121),
  [336] = {.count = 1, .reusable = true}, SHIFT(121),
  [338] = {.count = 1, .reusable = false}, SHIFT(122),
  [340] = {.count = 1, .reusable = false}, SHIFT(123),
  [342] = {.count = 1, .reusable = true}, SHIFT(123),
  [344] = {.count = 1, .reusable = true}, SHIFT(124),
  [346] = {.count = 1, .reusable = false}, SHIFT(124),
  [348] = {.count = 1, .reusable = true}, REDUCE(sym_struct_definition, 4),
  [350] = {.count = 1, .reusable = false}, REDUCE(sym_struct_definition, 4),
  [352] = {.count = 1, .reusable = false}, SHIFT(126),
  [354] = {.count = 1, .reusable = true}, SHIFT(128),
  [356] = {.count = 1, .reusable = true}, SHIFT(129),
  [358] = {.count = 1, .reusable = true}, SHIFT(130),
  [360] = {.count = 1, .reusable = true}, SHIFT(132),
  [362] = {.count = 1, .reusable = true}, SHIFT(133),
  [364] = {.count = 1, .reusable = false}, SHIFT(133),
  [366] = {.count = 1, .reusable = false}, REDUCE(sym_typed_identifier, 3),
  [368] = {.count = 1, .reusable = true}, REDUCE(sym_typed_identifier, 3),
  [370] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_list, 2),
  [372] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 2),
  [374] = {.count = 1, .reusable = true}, SHIFT(135),
  [376] = {.count = 1, .reusable = true}, SHIFT(136),
  [378] = {.count = 1, .reusable = true}, REDUCE(sym_function_expression, 4),
  [380] = {.count = 1, .reusable = false}, REDUCE(sym_function_expression, 4),
  [382] = {.count = 1, .reusable = false}, SHIFT(138),
  [384] = {.count = 1, .reusable = true}, SHIFT(139),
  [386] = {.count = 1, .reusable = false}, SHIFT(139),
  [388] = {.count = 1, .reusable = false}, SHIFT(141),
  [390] = {.count = 1, .reusable = true}, SHIFT(142),
  [392] = {.count = 1, .reusable = false}, SHIFT(142),
  [394] = {.count = 1, .reusable = false}, SHIFT(144),
  [396] = {.count = 1, .reusable = true}, SHIFT(145),
  [398] = {.count = 1, .reusable = false}, SHIFT(145),
  [400] = {.count = 1, .reusable = false}, SHIFT(147),
  [402] = {.count = 1, .reusable = false}, SHIFT(148),
  [404] = {.count = 1, .reusable = true}, SHIFT(148),
  [406] = {.count = 1, .reusable = false}, SHIFT(149),
  [408] = {.count = 1, .reusable = true}, SHIFT(150),
  [410] = {.count = 1, .reusable = false}, SHIFT(150),
  [412] = {.count = 1, .reusable = true}, SHIFT(154),
  [414] = {.count = 1, .reusable = true}, REDUCE(sym_conditional_expression, 4),
  [416] = {.count = 1, .reusable = false}, REDUCE(sym_conditional_expression, 4),
  [418] = {.count = 1, .reusable = false}, SHIFT(156),
  [420] = {.count = 1, .reusable = true}, SHIFT(156),
  [422] = {.count = 1, .reusable = false}, SHIFT(157),
  [424] = {.count = 1, .reusable = true}, SHIFT(157),
  [426] = {.count = 1, .reusable = false}, SHIFT(158),
  [428] = {.count = 1, .reusable = true}, SHIFT(158),
  [430] = {.count = 1, .reusable = false}, SHIFT(159),
  [432] = {.count = 1, .reusable = true}, SHIFT(159),
  [434] = {.count = 1, .reusable = false}, SHIFT(160),
  [436] = {.count = 1, .reusable = true}, SHIFT(160),
  [438] = {.count = 1, .reusable = false}, SHIFT(161),
  [440] = {.count = 1, .reusable = false}, SHIFT(162),
  [442] = {.count = 1, .reusable = true}, SHIFT(162),
  [444] = {.count = 1, .reusable = true}, SHIFT(161),
  [446] = {.count = 1, .reusable = true}, SHIFT(165),
  [448] = {.count = 1, .reusable = false}, SHIFT(165),
  [450] = {.count = 1, .reusable = true}, SHIFT(104),
  [452] = {.count = 1, .reusable = false}, SHIFT(168),
  [454] = {.count = 1, .reusable = true}, SHIFT(168),
  [456] = {.count = 1, .reusable = true}, REDUCE(sym_argument_list, 3),
  [458] = {.count = 1, .reusable = false}, REDUCE(sym_argument_list, 3),
  [460] = {.count = 1, .reusable = false}, SHIFT(169),
  [462] = {.count = 1, .reusable = true}, SHIFT(169),
  [464] = {.count = 1, .reusable = false}, SHIFT(170),
  [466] = {.count = 1, .reusable = true}, SHIFT(170),
  [468] = {.count = 1, .reusable = false}, SHIFT(171),
  [470] = {.count = 1, .reusable = true}, SHIFT(171),
  [472] = {.count = 1, .reusable = true}, SHIFT(172),
  [474] = {.count = 1, .reusable = true}, REDUCE(sym_module_expression, 5),
  [476] = {.count = 1, .reusable = false}, REDUCE(sym_module_expression, 5),
  [478] = {.count = 1, .reusable = false}, SHIFT(174),
  [480] = {.count = 2, .reusable = true}, REDUCE(aux_sym__expression_list_repeat1, 2), SHIFT_REPEAT(175),
  [483] = {.count = 2, .reusable = false}, REDUCE(aux_sym__expression_list_repeat1, 2), SHIFT_REPEAT(175),
  [486] = {.count = 1, .reusable = true}, REDUCE(sym_struct_definition, 5),
  [488] = {.count = 1, .reusable = false}, REDUCE(sym_struct_definition, 5),
  [490] = {.count = 1, .reusable = false}, SHIFT(176),
  [492] = {.count = 1, .reusable = false}, REDUCE(sym_parameterized_identifier, 4),
  [494] = {.count = 1, .reusable = true}, REDUCE(sym_parameterized_identifier, 4),
  [496] = {.count = 1, .reusable = true}, SHIFT(179),
  [498] = {.count = 1, .reusable = false}, REDUCE(aux_sym_struct_definition_repeat1, 2),
  [500] = {.count = 2, .reusable = false}, REDUCE(aux_sym_struct_definition_repeat1, 2), SHIFT_REPEAT(11),
  [503] = {.count = 1, .reusable = true}, SHIFT(182),
  [505] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_list, 3),
  [507] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 3),
  [509] = {.count = 1, .reusable = true}, SHIFT(183),
  [511] = {.count = 1, .reusable = true}, REDUCE(sym_function_expression, 5),
  [513] = {.count = 1, .reusable = false}, REDUCE(sym_function_expression, 5),
  [515] = {.count = 1, .reusable = false}, SHIFT(185),
  [517] = {.count = 1, .reusable = true}, SHIFT(186),
  [519] = {.count = 1, .reusable = false}, SHIFT(186),
  [521] = {.count = 1, .reusable = false}, SHIFT(187),
  [523] = {.count = 1, .reusable = true}, SHIFT(188),
  [525] = {.count = 1, .reusable = false}, SHIFT(188),
  [527] = {.count = 1, .reusable = false}, SHIFT(189),
  [529] = {.count = 1, .reusable = false}, SHIFT(191),
  [531] = {.count = 1, .reusable = true}, SHIFT(192),
  [533] = {.count = 1, .reusable = false}, SHIFT(192),
  [535] = {.count = 1, .reusable = false}, SHIFT(194),
  [537] = {.count = 1, .reusable = true}, SHIFT(194),
  [539] = {.count = 1, .reusable = true}, SHIFT(197),
  [541] = {.count = 1, .reusable = false}, SHIFT(197),
  [543] = {.count = 1, .reusable = true}, SHIFT(198),
  [545] = {.count = 1, .reusable = false}, SHIFT(199),
  [547] = {.count = 1, .reusable = true}, SHIFT(199),
  [549] = {.count = 1, .reusable = false}, REDUCE(sym_else_clause, 2),
  [551] = {.count = 1, .reusable = true}, SHIFT(200),
  [553] = {.count = 1, .reusable = false}, SHIFT(200),
  [555] = {.count = 1, .reusable = true}, REDUCE(sym_conditional_expression, 5),
  [557] = {.count = 1, .reusable = false}, REDUCE(sym_conditional_expression, 5),
  [559] = {.count = 1, .reusable = true}, SHIFT(202),
  [561] = {.count = 1, .reusable = false}, SHIFT(202),
  [563] = {.count = 2, .reusable = true}, REDUCE(aux_sym__expression_list_repeat1, 2), SHIFT_REPEAT(205),
  [566] = {.count = 2, .reusable = false}, REDUCE(aux_sym__expression_list_repeat1, 2), SHIFT_REPEAT(205),
  [569] = {.count = 1, .reusable = true}, REDUCE(aux_sym_conditional_expression_repeat1, 2),
  [571] = {.count = 2, .reusable = true}, REDUCE(aux_sym_conditional_expression_repeat1, 2), SHIFT_REPEAT(104),
  [574] = {.count = 1, .reusable = false}, REDUCE(aux_sym_conditional_expression_repeat1, 2),
  [576] = {.count = 1, .reusable = true}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [578] = {.count = 1, .reusable = true}, REDUCE(sym_argument_list, 4),
  [580] = {.count = 1, .reusable = false}, REDUCE(sym_argument_list, 4),
  [582] = {.count = 2, .reusable = true}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(112),
  [585] = {.count = 1, .reusable = true}, REDUCE(sym_module_expression, 6),
  [587] = {.count = 1, .reusable = false}, REDUCE(sym_module_expression, 6),
  [589] = {.count = 1, .reusable = true}, REDUCE(sym_struct_definition, 6),
  [591] = {.count = 1, .reusable = false}, REDUCE(sym_struct_definition, 6),
  [593] = {.count = 1, .reusable = true}, SHIFT(206),
  [595] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameterized_identifier_repeat1, 2),
  [597] = {.count = 1, .reusable = false}, REDUCE(sym_parameterized_identifier, 5),
  [599] = {.count = 1, .reusable = true}, REDUCE(sym_parameterized_identifier, 5),
  [601] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameterized_identifier_repeat1, 2), SHIFT_REPEAT(129),
  [604] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [606] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_list, 4),
  [608] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 4),
  [610] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(135),
  [613] = {.count = 1, .reusable = true}, REDUCE(sym_function_expression, 6),
  [615] = {.count = 1, .reusable = false}, REDUCE(sym_function_expression, 6),
  [617] = {.count = 1, .reusable = false}, SHIFT(208),
  [619] = {.count = 1, .reusable = false}, SHIFT(209),
  [621] = {.count = 1, .reusable = false}, SHIFT(210),
  [623] = {.count = 1, .reusable = false}, SHIFT(211),
  [625] = {.count = 1, .reusable = true}, SHIFT(212),
  [627] = {.count = 1, .reusable = false}, SHIFT(212),
  [629] = {.count = 1, .reusable = true}, SHIFT(213),
  [631] = {.count = 1, .reusable = false}, SHIFT(213),
  [633] = {.count = 1, .reusable = false}, REDUCE(sym_elseif_clause, 3),
  [635] = {.count = 1, .reusable = true}, SHIFT(216),
  [637] = {.count = 1, .reusable = false}, SHIFT(216),
  [639] = {.count = 1, .reusable = false}, REDUCE(sym_else_clause, 3),
  [641] = {.count = 1, .reusable = true}, SHIFT(218),
  [643] = {.count = 1, .reusable = false}, SHIFT(218),
  [645] = {.count = 1, .reusable = true}, REDUCE(sym_conditional_expression, 6),
  [647] = {.count = 1, .reusable = false}, REDUCE(sym_conditional_expression, 6),
  [649] = {.count = 1, .reusable = true}, SHIFT(219),
  [651] = {.count = 1, .reusable = true}, SHIFT(221),
  [653] = {.count = 1, .reusable = true}, REDUCE(sym_function_expression, 7),
  [655] = {.count = 1, .reusable = false}, REDUCE(sym_function_expression, 7),
  [657] = {.count = 1, .reusable = false}, SHIFT(222),
  [659] = {.count = 1, .reusable = true}, SHIFT(223),
  [661] = {.count = 1, .reusable = false}, REDUCE(sym_elseif_clause, 4),
  [663] = {.count = 1, .reusable = true}, SHIFT(225),
  [665] = {.count = 1, .reusable = false}, SHIFT(225),
  [667] = {.count = 1, .reusable = false}, REDUCE(sym_else_clause, 4),
  [669] = {.count = 1, .reusable = true}, REDUCE(sym_conditional_expression, 7),
  [671] = {.count = 1, .reusable = false}, REDUCE(sym_conditional_expression, 7),
  [673] = {.count = 1, .reusable = true}, SHIFT(226),
  [675] = {.count = 1, .reusable = true}, SHIFT(227),
  [677] = {.count = 1, .reusable = false}, REDUCE(sym_elseif_clause, 5),
  [679] = {.count = 1, .reusable = true}, REDUCE(sym_conditional_expression, 8),
  [681] = {.count = 1, .reusable = false}, REDUCE(sym_conditional_expression, 8),
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
