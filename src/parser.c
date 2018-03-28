#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 178
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_module = 1,
  anon_sym_end = 2,
  anon_sym_function = 3,
  anon_sym_LPAREN = 4,
  anon_sym_COMMA = 5,
  anon_sym_RPAREN = 6,
  anon_sym_PIPE_PIPE = 7,
  anon_sym_AMP_AMP = 8,
  anon_sym_EQ_GT = 9,
  anon_sym_if = 10,
  anon_sym_elseif = 11,
  anon_sym_else = 12,
  sym_identifier = 13,
  sym_number = 14,
  sym_string = 15,
  sym__times_operator = 16,
  sym__plus_operator = 17,
  sym__arrow_operator = 18,
  sym__assign_operator = 19,
  anon_sym_LF = 20,
  anon_sym_SEMI = 21,
  sym_comment = 22,
  sym_source_file = 23,
  sym__expression = 24,
  sym_module_expression = 25,
  sym_function_expression = 26,
  sym_parameter_list = 27,
  sym_call_expression = 28,
  sym_argument_list = 29,
  sym_assignment_expression = 30,
  sym_binary_expression = 31,
  sym_pair_expression = 32,
  sym_conditional_expression = 33,
  sym_elseif_clause = 34,
  sym_else_clause = 35,
  aux_sym__expression_list_repeat1 = 36,
  aux_sym_parameter_list_repeat1 = 37,
  aux_sym_argument_list_repeat1 = 38,
  aux_sym_conditional_expression_repeat1 = 39,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_module] = "module",
  [anon_sym_end] = "end",
  [anon_sym_function] = "function",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
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
  [anon_sym_function] = {
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
        ADVANCE(19);
      if (lookahead == ';')
        ADVANCE(30);
      if (lookahead == '<')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(31);
      if (lookahead == '>')
        ADVANCE(21);
      if (lookahead == '\\')
        ADVANCE(23);
      if (lookahead == '^')
        ADVANCE(19);
      if (lookahead == '|')
        ADVANCE(33);
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
        ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
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
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__assign_operator);
      if (lookahead == '>')
        ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 33:
      if (lookahead == '+')
        ADVANCE(25);
      if (lookahead == '=')
        ADVANCE(28);
      if (lookahead == '|')
        ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      if (lookahead == '=')
        ADVANCE(28);
      if (lookahead == '|')
        ADVANCE(27);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 37:
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
        ADVANCE(31);
      if (lookahead == '>')
        ADVANCE(21);
      if (lookahead == '\\')
        ADVANCE(23);
      if (lookahead == '^')
        ADVANCE(19);
      if (lookahead == '|')
        ADVANCE(33);
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
        SKIP(37);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(39);
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
        ADVANCE(30);
      if (lookahead == '<')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(31);
      if (lookahead == '>')
        ADVANCE(21);
      if (lookahead == '\\')
        ADVANCE(23);
      if (lookahead == '^')
        ADVANCE(19);
      if (lookahead == '|')
        ADVANCE(33);
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
        SKIP(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 40:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(39);
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
        ADVANCE(30);
      if (lookahead == '<')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(31);
      if (lookahead == '>')
        ADVANCE(21);
      if (lookahead == '\\')
        ADVANCE(23);
      if (lookahead == '^')
        ADVANCE(19);
      if (lookahead == '|')
        ADVANCE(33);
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
        SKIP(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 41:
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
        ADVANCE(31);
      if (lookahead == '>')
        ADVANCE(21);
      if (lookahead == '\\')
        ADVANCE(23);
      if (lookahead == '^')
        ADVANCE(19);
      if (lookahead == '|')
        ADVANCE(33);
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
        SKIP(41);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(36);
      END_STATE();
    case 42:
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
        ADVANCE(31);
      if (lookahead == '>')
        ADVANCE(21);
      if (lookahead == '\\')
        ADVANCE(23);
      if (lookahead == '^')
        ADVANCE(19);
      if (lookahead == '|')
        ADVANCE(33);
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
        SKIP(42);
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
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 37},
  [2] = {.lex_state = 37},
  [3] = {.lex_state = 37},
  [4] = {.lex_state = 37},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 38},
  [7] = {.lex_state = 37},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 37},
  [10] = {.lex_state = 37},
  [11] = {.lex_state = 37},
  [12] = {.lex_state = 37},
  [13] = {.lex_state = 37},
  [14] = {.lex_state = 37},
  [15] = {.lex_state = 37},
  [16] = {.lex_state = 37},
  [17] = {.lex_state = 37},
  [18] = {.lex_state = 37},
  [19] = {.lex_state = 37},
  [20] = {.lex_state = 37},
  [21] = {.lex_state = 37},
  [22] = {.lex_state = 40},
  [23] = {.lex_state = 38},
  [24] = {.lex_state = 40},
  [25] = {.lex_state = 40},
  [26] = {.lex_state = 37},
  [27] = {.lex_state = 37},
  [28] = {.lex_state = 37},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 37},
  [31] = {.lex_state = 37},
  [32] = {.lex_state = 37},
  [33] = {.lex_state = 37},
  [34] = {.lex_state = 37},
  [35] = {.lex_state = 37},
  [36] = {.lex_state = 37},
  [37] = {.lex_state = 37},
  [38] = {.lex_state = 37},
  [39] = {.lex_state = 40},
  [40] = {.lex_state = 41},
  [41] = {.lex_state = 40},
  [42] = {.lex_state = 42},
  [43] = {.lex_state = 40},
  [44] = {.lex_state = 40},
  [45] = {.lex_state = 38},
  [46] = {.lex_state = 40},
  [47] = {.lex_state = 40},
  [48] = {.lex_state = 38},
  [49] = {.lex_state = 38},
  [50] = {.lex_state = 38},
  [51] = {.lex_state = 37},
  [52] = {.lex_state = 38},
  [53] = {.lex_state = 40},
  [54] = {.lex_state = 37},
  [55] = {.lex_state = 37},
  [56] = {.lex_state = 37},
  [57] = {.lex_state = 37},
  [58] = {.lex_state = 40},
  [59] = {.lex_state = 37},
  [60] = {.lex_state = 42},
  [61] = {.lex_state = 40},
  [62] = {.lex_state = 40},
  [63] = {.lex_state = 41},
  [64] = {.lex_state = 40},
  [65] = {.lex_state = 37},
  [66] = {.lex_state = 40},
  [67] = {.lex_state = 41},
  [68] = {.lex_state = 42},
  [69] = {.lex_state = 41},
  [70] = {.lex_state = 41},
  [71] = {.lex_state = 37},
  [72] = {.lex_state = 41},
  [73] = {.lex_state = 41},
  [74] = {.lex_state = 37},
  [75] = {.lex_state = 37},
  [76] = {.lex_state = 40},
  [77] = {.lex_state = 37},
  [78] = {.lex_state = 37},
  [79] = {.lex_state = 37},
  [80] = {.lex_state = 37},
  [81] = {.lex_state = 37},
  [82] = {.lex_state = 37},
  [83] = {.lex_state = 37},
  [84] = {.lex_state = 40},
  [85] = {.lex_state = 37},
  [86] = {.lex_state = 37},
  [87] = {.lex_state = 40},
  [88] = {.lex_state = 37},
  [89] = {.lex_state = 37},
  [90] = {.lex_state = 37},
  [91] = {.lex_state = 42},
  [92] = {.lex_state = 37},
  [93] = {.lex_state = 40},
  [94] = {.lex_state = 40},
  [95] = {.lex_state = 40},
  [96] = {.lex_state = 40},
  [97] = {.lex_state = 40},
  [98] = {.lex_state = 37},
  [99] = {.lex_state = 40},
  [100] = {.lex_state = 37},
  [101] = {.lex_state = 37},
  [102] = {.lex_state = 42},
  [103] = {.lex_state = 40},
  [104] = {.lex_state = 37},
  [105] = {.lex_state = 40},
  [106] = {.lex_state = 41},
  [107] = {.lex_state = 37},
  [108] = {.lex_state = 40},
  [109] = {.lex_state = 41},
  [110] = {.lex_state = 40},
  [111] = {.lex_state = 41},
  [112] = {.lex_state = 37},
  [113] = {.lex_state = 37},
  [114] = {.lex_state = 40},
  [115] = {.lex_state = 37},
  [116] = {.lex_state = 41},
  [117] = {.lex_state = 42},
  [118] = {.lex_state = 40},
  [119] = {.lex_state = 37},
  [120] = {.lex_state = 40},
  [121] = {.lex_state = 40},
  [122] = {.lex_state = 40},
  [123] = {.lex_state = 40},
  [124] = {.lex_state = 40},
  [125] = {.lex_state = 37},
  [126] = {.lex_state = 37},
  [127] = {.lex_state = 37},
  [128] = {.lex_state = 40},
  [129] = {.lex_state = 37},
  [130] = {.lex_state = 42},
  [131] = {.lex_state = 42},
  [132] = {.lex_state = 42},
  [133] = {.lex_state = 42},
  [134] = {.lex_state = 40},
  [135] = {.lex_state = 42},
  [136] = {.lex_state = 40},
  [137] = {.lex_state = 37},
  [138] = {.lex_state = 42},
  [139] = {.lex_state = 37},
  [140] = {.lex_state = 42},
  [141] = {.lex_state = 40},
  [142] = {.lex_state = 37},
  [143] = {.lex_state = 41},
  [144] = {.lex_state = 37},
  [145] = {.lex_state = 41},
  [146] = {.lex_state = 37},
  [147] = {.lex_state = 40},
  [148] = {.lex_state = 41},
  [149] = {.lex_state = 37},
  [150] = {.lex_state = 37},
  [151] = {.lex_state = 37},
  [152] = {.lex_state = 41},
  [153] = {.lex_state = 40},
  [154] = {.lex_state = 37},
  [155] = {.lex_state = 40},
  [156] = {.lex_state = 40},
  [157] = {.lex_state = 37},
  [158] = {.lex_state = 37},
  [159] = {.lex_state = 37},
  [160] = {.lex_state = 40},
  [161] = {.lex_state = 41},
  [162] = {.lex_state = 41},
  [163] = {.lex_state = 37},
  [164] = {.lex_state = 41},
  [165] = {.lex_state = 37},
  [166] = {.lex_state = 37},
  [167] = {.lex_state = 37},
  [168] = {.lex_state = 40},
  [169] = {.lex_state = 37},
  [170] = {.lex_state = 40},
  [171] = {.lex_state = 37},
  [172] = {.lex_state = 41},
  [173] = {.lex_state = 41},
  [174] = {.lex_state = 37},
  [175] = {.lex_state = 37},
  [176] = {.lex_state = 40},
  [177] = {.lex_state = 41},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
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
    [sym_source_file] = STATE(5),
    [sym__expression] = STATE(6),
    [sym_module_expression] = STATE(6),
    [sym_function_expression] = STATE(6),
    [sym_call_expression] = STATE(6),
    [sym_assignment_expression] = STATE(6),
    [sym_binary_expression] = STATE(6),
    [sym_pair_expression] = STATE(6),
    [sym_conditional_expression] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(8),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_function] = ACTIONS(12),
    [anon_sym_if] = ACTIONS(14),
    [sym_identifier] = ACTIONS(16),
    [sym_number] = ACTIONS(18),
    [sym_string] = ACTIONS(18),
    [sym_comment] = ACTIONS(20),
  },
  [2] = {
    [sym_identifier] = ACTIONS(22),
    [sym_comment] = ACTIONS(20),
  },
  [3] = {
    [sym_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(20),
  },
  [4] = {
    [sym__expression] = STATE(12),
    [sym_module_expression] = STATE(12),
    [sym_function_expression] = STATE(12),
    [sym_call_expression] = STATE(12),
    [sym_assignment_expression] = STATE(12),
    [sym_binary_expression] = STATE(12),
    [sym_pair_expression] = STATE(12),
    [sym_conditional_expression] = STATE(12),
    [anon_sym_module] = ACTIONS(26),
    [anon_sym_function] = ACTIONS(28),
    [anon_sym_if] = ACTIONS(30),
    [sym_identifier] = ACTIONS(32),
    [sym_number] = ACTIONS(34),
    [sym_string] = ACTIONS(34),
    [sym_comment] = ACTIONS(20),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(36),
    [sym_comment] = ACTIONS(20),
  },
  [6] = {
    [sym_argument_list] = STATE(22),
    [aux_sym__expression_list_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(38),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_PIPE_PIPE] = ACTIONS(42),
    [anon_sym_AMP_AMP] = ACTIONS(44),
    [anon_sym_EQ_GT] = ACTIONS(46),
    [sym__times_operator] = ACTIONS(48),
    [sym__plus_operator] = ACTIONS(50),
    [sym__arrow_operator] = ACTIONS(52),
    [sym__assign_operator] = ACTIONS(54),
    [anon_sym_LF] = ACTIONS(56),
    [anon_sym_SEMI] = ACTIONS(58),
    [sym_comment] = ACTIONS(60),
  },
  [7] = {
    [sym__expression] = STATE(25),
    [sym_module_expression] = STATE(25),
    [sym_function_expression] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_assignment_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [sym_pair_expression] = STATE(25),
    [sym_conditional_expression] = STATE(25),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(62),
    [anon_sym_function] = ACTIONS(12),
    [anon_sym_if] = ACTIONS(14),
    [sym_identifier] = ACTIONS(64),
    [sym_number] = ACTIONS(66),
    [sym_string] = ACTIONS(66),
    [sym_comment] = ACTIONS(20),
  },
  [8] = {
    [sym_parameter_list] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(68),
    [sym_comment] = ACTIONS(20),
  },
  [9] = {
    [sym_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(20),
  },
  [10] = {
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(20),
  },
  [11] = {
    [sym__expression] = STATE(30),
    [sym_module_expression] = STATE(30),
    [sym_function_expression] = STATE(30),
    [sym_call_expression] = STATE(30),
    [sym_assignment_expression] = STATE(30),
    [sym_binary_expression] = STATE(30),
    [sym_pair_expression] = STATE(30),
    [sym_conditional_expression] = STATE(30),
    [anon_sym_module] = ACTIONS(26),
    [anon_sym_function] = ACTIONS(28),
    [anon_sym_if] = ACTIONS(30),
    [sym_identifier] = ACTIONS(74),
    [sym_number] = ACTIONS(76),
    [sym_string] = ACTIONS(76),
    [sym_comment] = ACTIONS(20),
  },
  [12] = {
    [sym__expression] = STATE(39),
    [sym_module_expression] = STATE(39),
    [sym_function_expression] = STATE(39),
    [sym_call_expression] = STATE(39),
    [sym_argument_list] = STATE(40),
    [sym_assignment_expression] = STATE(39),
    [sym_binary_expression] = STATE(39),
    [sym_pair_expression] = STATE(39),
    [sym_conditional_expression] = STATE(39),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_function] = ACTIONS(12),
    [anon_sym_LPAREN] = ACTIONS(78),
    [anon_sym_PIPE_PIPE] = ACTIONS(80),
    [anon_sym_AMP_AMP] = ACTIONS(82),
    [anon_sym_EQ_GT] = ACTIONS(84),
    [anon_sym_if] = ACTIONS(14),
    [sym_identifier] = ACTIONS(86),
    [sym_number] = ACTIONS(88),
    [sym_string] = ACTIONS(88),
    [sym__times_operator] = ACTIONS(90),
    [sym__plus_operator] = ACTIONS(92),
    [sym__arrow_operator] = ACTIONS(94),
    [sym__assign_operator] = ACTIONS(96),
    [sym_comment] = ACTIONS(20),
  },
  [13] = {
    [sym__expression] = STATE(42),
    [sym_module_expression] = STATE(42),
    [sym_function_expression] = STATE(42),
    [sym_call_expression] = STATE(42),
    [sym_assignment_expression] = STATE(42),
    [sym_binary_expression] = STATE(42),
    [sym_pair_expression] = STATE(42),
    [sym_conditional_expression] = STATE(42),
    [anon_sym_module] = ACTIONS(26),
    [anon_sym_function] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(98),
    [anon_sym_if] = ACTIONS(30),
    [sym_identifier] = ACTIONS(100),
    [sym_number] = ACTIONS(102),
    [sym_string] = ACTIONS(102),
    [sym_comment] = ACTIONS(20),
  },
  [14] = {
    [sym__expression] = STATE(43),
    [sym_module_expression] = STATE(43),
    [sym_function_expression] = STATE(43),
    [sym_call_expression] = STATE(43),
    [sym_assignment_expression] = STATE(43),
    [sym_binary_expression] = STATE(43),
    [sym_pair_expression] = STATE(43),
    [sym_conditional_expression] = STATE(43),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_function] = ACTIONS(12),
    [anon_sym_if] = ACTIONS(14),
    [sym_identifier] = ACTIONS(104),
    [sym_number] = ACTIONS(106),
    [sym_string] = ACTIONS(106),
    [sym_comment] = ACTIONS(20),
  },
  [15] = {
    [sym__expression] = STATE(44),
    [sym_module_expression] = STATE(44),
    [sym_function_expression] = STATE(44),
    [sym_call_expression] = STATE(44),
    [sym_assignment_expression] = STATE(44),
    [sym_binary_expression] = STATE(44),
    [sym_pair_expression] = STATE(44),
    [sym_conditional_expression] = STATE(44),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_function] = ACTIONS(12),
    [anon_sym_if] = ACTIONS(14),
    [sym_identifier] = ACTIONS(108),
    [sym_number] = ACTIONS(110),
    [sym_string] = ACTIONS(110),
    [sym_comment] = ACTIONS(20),
  },
  [16] = {
    [sym__expression] = STATE(45),
    [sym_module_expression] = STATE(45),
    [sym_function_expression] = STATE(45),
    [sym_call_expression] = STATE(45),
    [sym_assignment_expression] = STATE(45),
    [sym_binary_expression] = STATE(45),
    [sym_pair_expression] = STATE(45),
    [sym_conditional_expression] = STATE(45),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_function] = ACTIONS(12),
    [anon_sym_if] = ACTIONS(14),
    [sym_identifier] = ACTIONS(112),
    [sym_number] = ACTIONS(114),
    [sym_string] = ACTIONS(114),
    [sym_comment] = ACTIONS(20),
  },
  [17] = {
    [sym__expression] = STATE(46),
    [sym_module_expression] = STATE(46),
    [sym_function_expression] = STATE(46),
    [sym_call_expression] = STATE(46),
    [sym_assignment_expression] = STATE(46),
    [sym_binary_expression] = STATE(46),
    [sym_pair_expression] = STATE(46),
    [sym_conditional_expression] = STATE(46),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_function] = ACTIONS(12),
    [anon_sym_if] = ACTIONS(14),
    [sym_identifier] = ACTIONS(116),
    [sym_number] = ACTIONS(118),
    [sym_string] = ACTIONS(118),
    [sym_comment] = ACTIONS(20),
  },
  [18] = {
    [sym__expression] = STATE(47),
    [sym_module_expression] = STATE(47),
    [sym_function_expression] = STATE(47),
    [sym_call_expression] = STATE(47),
    [sym_assignment_expression] = STATE(47),
    [sym_binary_expression] = STATE(47),
    [sym_pair_expression] = STATE(47),
    [sym_conditional_expression] = STATE(47),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_function] = ACTIONS(12),
    [anon_sym_if] = ACTIONS(14),
    [sym_identifier] = ACTIONS(120),
    [sym_number] = ACTIONS(122),
    [sym_string] = ACTIONS(122),
    [sym_comment] = ACTIONS(20),
  },
  [19] = {
    [sym__expression] = STATE(48),
    [sym_module_expression] = STATE(48),
    [sym_function_expression] = STATE(48),
    [sym_call_expression] = STATE(48),
    [sym_assignment_expression] = STATE(48),
    [sym_binary_expression] = STATE(48),
    [sym_pair_expression] = STATE(48),
    [sym_conditional_expression] = STATE(48),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_function] = ACTIONS(12),
    [anon_sym_if] = ACTIONS(14),
    [sym_identifier] = ACTIONS(124),
    [sym_number] = ACTIONS(126),
    [sym_string] = ACTIONS(126),
    [sym_comment] = ACTIONS(20),
  },
  [20] = {
    [sym__expression] = STATE(49),
    [sym_module_expression] = STATE(49),
    [sym_function_expression] = STATE(49),
    [sym_call_expression] = STATE(49),
    [sym_assignment_expression] = STATE(49),
    [sym_binary_expression] = STATE(49),
    [sym_pair_expression] = STATE(49),
    [sym_conditional_expression] = STATE(49),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_function] = ACTIONS(12),
    [anon_sym_if] = ACTIONS(14),
    [sym_identifier] = ACTIONS(128),
    [sym_number] = ACTIONS(130),
    [sym_string] = ACTIONS(130),
    [sym_comment] = ACTIONS(20),
  },
  [21] = {
    [sym__expression] = STATE(50),
    [sym_module_expression] = STATE(50),
    [sym_function_expression] = STATE(50),
    [sym_call_expression] = STATE(50),
    [sym_assignment_expression] = STATE(50),
    [sym_binary_expression] = STATE(50),
    [sym_pair_expression] = STATE(50),
    [sym_conditional_expression] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(132),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_function] = ACTIONS(12),
    [anon_sym_if] = ACTIONS(14),
    [sym_identifier] = ACTIONS(134),
    [sym_number] = ACTIONS(136),
    [sym_string] = ACTIONS(136),
    [sym_comment] = ACTIONS(20),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(138),
    [anon_sym_end] = ACTIONS(140),
    [anon_sym_LPAREN] = ACTIONS(140),
    [anon_sym_PIPE_PIPE] = ACTIONS(140),
    [anon_sym_AMP_AMP] = ACTIONS(140),
    [anon_sym_EQ_GT] = ACTIONS(140),
    [anon_sym_elseif] = ACTIONS(140),
    [anon_sym_else] = ACTIONS(140),
    [sym__times_operator] = ACTIONS(140),
    [sym__plus_operator] = ACTIONS(140),
    [sym__arrow_operator] = ACTIONS(140),
    [sym__assign_operator] = ACTIONS(140),
    [anon_sym_LF] = ACTIONS(138),
    [anon_sym_SEMI] = ACTIONS(140),
    [sym_comment] = ACTIONS(60),
  },
  [23] = {
    [aux_sym__expression_list_repeat1] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(132),
    [anon_sym_LF] = ACTIONS(142),
    [anon_sym_SEMI] = ACTIONS(144),
    [sym_comment] = ACTIONS(60),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(146),
    [anon_sym_end] = ACTIONS(148),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_PIPE_PIPE] = ACTIONS(148),
    [anon_sym_AMP_AMP] = ACTIONS(148),
    [anon_sym_EQ_GT] = ACTIONS(148),
    [anon_sym_elseif] = ACTIONS(148),
    [anon_sym_else] = ACTIONS(148),
    [sym__times_operator] = ACTIONS(148),
    [sym__plus_operator] = ACTIONS(148),
    [sym__arrow_operator] = ACTIONS(148),
    [sym__assign_operator] = ACTIONS(148),
    [anon_sym_LF] = ACTIONS(146),
    [anon_sym_SEMI] = ACTIONS(148),
    [sym_comment] = ACTIONS(60),
  },
  [25] = {
    [sym_argument_list] = STATE(22),
    [aux_sym__expression_list_repeat1] = STATE(58),
    [anon_sym_end] = ACTIONS(150),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_PIPE_PIPE] = ACTIONS(42),
    [anon_sym_AMP_AMP] = ACTIONS(44),
    [anon_sym_EQ_GT] = ACTIONS(152),
    [sym__times_operator] = ACTIONS(48),
    [sym__plus_operator] = ACTIONS(50),
    [sym__arrow_operator] = ACTIONS(154),
    [sym__assign_operator] = ACTIONS(156),
    [anon_sym_LF] = ACTIONS(158),
    [anon_sym_SEMI] = ACTIONS(160),
    [sym_comment] = ACTIONS(60),
  },
  [26] = {
    [anon_sym_RPAREN] = ACTIONS(162),
    [sym_identifier] = ACTIONS(164),
    [sym_comment] = ACTIONS(20),
  },
  [27] = {
    [sym__expression] = STATE(62),
    [sym_module_expression] = STATE(62),
    [sym_function_expression] = STATE(62),
    [sym_call_expression] = STATE(62),
    [sym_assignment_expression] = STATE(62),
    [sym_binary_expression] = STATE(62),
    [sym_pair_expression] = STATE(62),
    [sym_conditional_expression] = STATE(62),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(166),
    [anon_sym_function] = ACTIONS(12),
    [anon_sym_if] = ACTIONS(14),
    [sym_identifier] = ACTIONS(168),
    [sym_number] = ACTIONS(170),
    [sym_string] = ACTIONS(170),
    [sym_comment] = ACTIONS(20),
  },
  [28] = {
    [sym__expression] = STATE(64),
    [sym_module_expression] = STATE(64),
    [sym_function_expression] = STATE(64),
    [sym_call_expression] = STATE(64),
    [sym_assignment_expression] = STATE(64),
    [sym_binary_expression] = STATE(64),
    [sym_pair_expression] = STATE(64),
    [sym_conditional_expression] = STATE(64),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(172),
    [anon_sym_function] = ACTIONS(12),
    [anon_sym_if] = ACTIONS(14),
    [sym_identifier] = ACTIONS(174),
    [sym_number] = ACTIONS(176),
    [sym_string] = ACTIONS(176),
    [sym_comment] = ACTIONS(20),
  },
  [29] = {
    [sym_parameter_list] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(68),
    [sym_comment] = ACTIONS(20),
  },
  [30] = {
    [sym__expression] = STATE(66),
    [sym_module_expression] = STATE(66),
    [sym_function_expression] = STATE(66),
    [sym_call_expression] = STATE(66),
    [sym_argument_list] = STATE(40),
    [sym_assignment_expression] = STATE(66),
    [sym_binary_expression] = STATE(66),
    [sym_pair_expression] = STATE(66),
    [sym_conditional_expression] = STATE(66),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_function] = ACTIONS(12),
    [anon_sym_LPAREN] = ACTIONS(78),
    [anon_sym_PIPE_PIPE] = ACTIONS(80),
    [anon_sym_AMP_AMP] = ACTIONS(82),
    [anon_sym_EQ_GT] = ACTIONS(84),
    [anon_sym_if] = ACTIONS(14),
    [sym_identifier] = ACTIONS(178),
    [sym_number] = ACTIONS(180),
    [sym_string] = ACTIONS(180),
    [sym__times_operator] = ACTIONS(90),
    [sym__plus_operator] = ACTIONS(92),
    [sym__arrow_operator] = ACTIONS(94),
    [sym__assign_operator] = ACTIONS(96),
    [sym_comment] = ACTIONS(20),
  },
  [31] = {
    [sym__expression] = STATE(68),
    [sym_module_expression] = STATE(68),
    [sym_function_expression] = STATE(68),
    [sym_call_expression] = STATE(68),
    [sym_assignment_expression] = STATE(68),
    [sym_binary_expression] = STATE(68),
    [sym_pair_expression] = STATE(68),
    [sym_conditional_expression] = STATE(68),
    [anon_sym_module] = ACTIONS(26),
    [anon_sym_function] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(182),
    [anon_sym_if] = ACTIONS(30),
    [sym_identifier] = ACTIONS(184),
    [sym_number] = ACTIONS(186),
    [sym_string] = ACTIONS(186),
    [sym_comment] = ACTIONS(20),
  },
  [32] = {
    [sym__expression] = STATE(69),
    [sym_module_expression] = STATE(69),
    [sym_function_expression] = STATE(69),
    [sym_call_expression] = STATE(69),
    [sym_assignment_expression] = STATE(69),
    [sym_binary_expression] = STATE(69),
    [sym_pair_expression] = STATE(69),
    [sym_conditional_expression] = STATE(69),
    [anon_sym_module] = ACTIONS(26),
    [anon_sym_function] = ACTIONS(28),
    [anon_sym_if] = ACTIONS(30),
    [sym_identifier] = ACTIONS(188),
    [sym_number] = ACTIONS(190),
    [sym_string] = ACTIONS(190),
    [sym_comment] = ACTIONS(20),
  },
  [33] = {
    [sym__expression] = STATE(70),
    [sym_module_expression] = STATE(70),
    [sym_function_expression] = STATE(70),
    [sym_call_expression] = STATE(70),
    [sym_assignment_expression] = STATE(70),
    [sym_binary_expression] = STATE(70),
    [sym_pair_expression] = STATE(70),
    [sym_conditional_expression] = STATE(70),
    [anon_sym_module] = ACTIONS(26),
    [anon_sym_function] = ACTIONS(28),
    [anon_sym_if] = ACTIONS(30),
    [sym_identifier] = ACTIONS(192),
    [sym_number] = ACTIONS(194),
    [sym_string] = ACTIONS(194),
    [sym_comment] = ACTIONS(20),
  },
  [34] = {
    [sym__expression] = STATE(71),
    [sym_module_expression] = STATE(71),
    [sym_function_expression] = STATE(71),
    [sym_call_expression] = STATE(71),
    [sym_assignment_expression] = STATE(71),
    [sym_binary_expression] = STATE(71),
    [sym_pair_expression] = STATE(71),
    [sym_conditional_expression] = STATE(71),
    [anon_sym_module] = ACTIONS(26),
    [anon_sym_function] = ACTIONS(28),
    [anon_sym_if] = ACTIONS(30),
    [sym_identifier] = ACTIONS(196),
    [sym_number] = ACTIONS(198),
    [sym_string] = ACTIONS(198),
    [sym_comment] = ACTIONS(20),
  },
  [35] = {
    [sym__expression] = STATE(72),
    [sym_module_expression] = STATE(72),
    [sym_function_expression] = STATE(72),
    [sym_call_expression] = STATE(72),
    [sym_assignment_expression] = STATE(72),
    [sym_binary_expression] = STATE(72),
    [sym_pair_expression] = STATE(72),
    [sym_conditional_expression] = STATE(72),
    [anon_sym_module] = ACTIONS(26),
    [anon_sym_function] = ACTIONS(28),
    [anon_sym_if] = ACTIONS(30),
    [sym_identifier] = ACTIONS(200),
    [sym_number] = ACTIONS(202),
    [sym_string] = ACTIONS(202),
    [sym_comment] = ACTIONS(20),
  },
  [36] = {
    [sym__expression] = STATE(73),
    [sym_module_expression] = STATE(73),
    [sym_function_expression] = STATE(73),
    [sym_call_expression] = STATE(73),
    [sym_assignment_expression] = STATE(73),
    [sym_binary_expression] = STATE(73),
    [sym_pair_expression] = STATE(73),
    [sym_conditional_expression] = STATE(73),
    [anon_sym_module] = ACTIONS(26),
    [anon_sym_function] = ACTIONS(28),
    [anon_sym_if] = ACTIONS(30),
    [sym_identifier] = ACTIONS(204),
    [sym_number] = ACTIONS(206),
    [sym_string] = ACTIONS(206),
    [sym_comment] = ACTIONS(20),
  },
  [37] = {
    [sym__expression] = STATE(74),
    [sym_module_expression] = STATE(74),
    [sym_function_expression] = STATE(74),
    [sym_call_expression] = STATE(74),
    [sym_assignment_expression] = STATE(74),
    [sym_binary_expression] = STATE(74),
    [sym_pair_expression] = STATE(74),
    [sym_conditional_expression] = STATE(74),
    [anon_sym_module] = ACTIONS(26),
    [anon_sym_function] = ACTIONS(28),
    [anon_sym_if] = ACTIONS(30),
    [sym_identifier] = ACTIONS(208),
    [sym_number] = ACTIONS(210),
    [sym_string] = ACTIONS(210),
    [sym_comment] = ACTIONS(20),
  },
  [38] = {
    [sym__expression] = STATE(75),
    [sym_module_expression] = STATE(75),
    [sym_function_expression] = STATE(75),
    [sym_call_expression] = STATE(75),
    [sym_assignment_expression] = STATE(75),
    [sym_binary_expression] = STATE(75),
    [sym_pair_expression] = STATE(75),
    [sym_conditional_expression] = STATE(75),
    [anon_sym_module] = ACTIONS(26),
    [anon_sym_function] = ACTIONS(28),
    [anon_sym_if] = ACTIONS(30),
    [sym_identifier] = ACTIONS(212),
    [sym_number] = ACTIONS(214),
    [sym_string] = ACTIONS(214),
    [sym_comment] = ACTIONS(20),
  },
  [39] = {
    [sym_argument_list] = STATE(22),
    [sym_elseif_clause] = STATE(85),
    [sym_else_clause] = STATE(83),
    [aux_sym__expression_list_repeat1] = STATE(84),
    [aux_sym_conditional_expression_repeat1] = STATE(85),
    [anon_sym_end] = ACTIONS(216),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_PIPE_PIPE] = ACTIONS(42),
    [anon_sym_AMP_AMP] = ACTIONS(44),
    [anon_sym_EQ_GT] = ACTIONS(218),
    [anon_sym_elseif] = ACTIONS(220),
    [anon_sym_else] = ACTIONS(222),
    [sym__times_operator] = ACTIONS(48),
    [sym__plus_operator] = ACTIONS(50),
    [sym__arrow_operator] = ACTIONS(224),
    [sym__assign_operator] = ACTIONS(226),
    [anon_sym_LF] = ACTIONS(228),
    [anon_sym_SEMI] = ACTIONS(230),
    [sym_comment] = ACTIONS(60),
  },
  [40] = {
    [anon_sym_module] = ACTIONS(140),
    [anon_sym_function] = ACTIONS(140),
    [anon_sym_LPAREN] = ACTIONS(138),
    [anon_sym_COMMA] = ACTIONS(138),
    [anon_sym_RPAREN] = ACTIONS(138),
    [anon_sym_PIPE_PIPE] = ACTIONS(140),
    [anon_sym_AMP_AMP] = ACTIONS(138),
    [anon_sym_EQ_GT] = ACTIONS(138),
    [anon_sym_if] = ACTIONS(140),
    [sym_identifier] = ACTIONS(140),
    [sym_number] = ACTIONS(138),
    [sym_string] = ACTIONS(138),
    [sym__times_operator] = ACTIONS(140),
    [sym__plus_operator] = ACTIONS(140),
    [sym__arrow_operator] = ACTIONS(138),
    [sym__assign_operator] = ACTIONS(140),
    [sym_comment] = ACTIONS(20),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(232),
    [anon_sym_end] = ACTIONS(234),
    [anon_sym_LPAREN] = ACTIONS(234),
    [anon_sym_PIPE_PIPE] = ACTIONS(234),
    [anon_sym_AMP_AMP] = ACTIONS(234),
    [anon_sym_EQ_GT] = ACTIONS(234),
    [anon_sym_elseif] = ACTIONS(234),
    [anon_sym_else] = ACTIONS(234),
    [sym__times_operator] = ACTIONS(234),
    [sym__plus_operator] = ACTIONS(234),
    [sym__arrow_operator] = ACTIONS(234),
    [sym__assign_operator] = ACTIONS(234),
    [anon_sym_LF] = ACTIONS(232),
    [anon_sym_SEMI] = ACTIONS(234),
    [sym_comment] = ACTIONS(60),
  },
  [42] = {
    [sym_argument_list] = STATE(40),
    [aux_sym_argument_list_repeat1] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(78),
    [anon_sym_COMMA] = ACTIONS(236),
    [anon_sym_RPAREN] = ACTIONS(238),
    [anon_sym_PIPE_PIPE] = ACTIONS(80),
    [anon_sym_AMP_AMP] = ACTIONS(82),
    [anon_sym_EQ_GT] = ACTIONS(240),
    [sym__times_operator] = ACTIONS(90),
    [sym__plus_operator] = ACTIONS(92),
    [sym__arrow_operator] = ACTIONS(242),
    [sym__assign_operator] = ACTIONS(244),
    [sym_comment] = ACTIONS(20),
  },
  [43] = {
    [sym_argument_list] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(246),
    [anon_sym_end] = ACTIONS(248),
    [anon_sym_LPAREN] = ACTIONS(248),
    [anon_sym_PIPE_PIPE] = ACTIONS(248),
    [anon_sym_AMP_AMP] = ACTIONS(248),
    [anon_sym_EQ_GT] = ACTIONS(248),
    [anon_sym_elseif] = ACTIONS(248),
    [anon_sym_else] = ACTIONS(248),
    [sym__times_operator] = ACTIONS(48),
    [sym__plus_operator] = ACTIONS(50),
    [sym__arrow_operator] = ACTIONS(248),
    [sym__assign_operator] = ACTIONS(248),
    [anon_sym_LF] = ACTIONS(246),
    [anon_sym_SEMI] = ACTIONS(248),
    [sym_comment] = ACTIONS(60),
  },
  [44] = {
    [sym_argument_list] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(246),
    [anon_sym_end] = ACTIONS(248),
    [anon_sym_LPAREN] = ACTIONS(248),
    [anon_sym_PIPE_PIPE] = ACTIONS(42),
    [anon_sym_AMP_AMP] = ACTIONS(248),
    [anon_sym_EQ_GT] = ACTIONS(248),
    [anon_sym_elseif] = ACTIONS(248),
    [anon_sym_else] = ACTIONS(248),
    [sym__times_operator] = ACTIONS(48),
    [sym__plus_operator] = ACTIONS(50),
    [sym__arrow_operator] = ACTIONS(248),
    [sym__assign_operator] = ACTIONS(248),
    [anon_sym_LF] = ACTIONS(246),
    [anon_sym_SEMI] = ACTIONS(248),
    [sym_comment] = ACTIONS(60),
  },
  [45] = {
    [sym_argument_list] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(250),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_PIPE_PIPE] = ACTIONS(42),
    [anon_sym_AMP_AMP] = ACTIONS(44),
    [anon_sym_EQ_GT] = ACTIONS(46),
    [sym__times_operator] = ACTIONS(48),
    [sym__plus_operator] = ACTIONS(50),
    [sym__arrow_operator] = ACTIONS(52),
    [sym__assign_operator] = ACTIONS(54),
    [anon_sym_LF] = ACTIONS(250),
    [anon_sym_SEMI] = ACTIONS(252),
    [sym_comment] = ACTIONS(60),
  },
  [46] = {
    [sym_argument_list] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(246),
    [anon_sym_end] = ACTIONS(248),
    [anon_sym_LPAREN] = ACTIONS(248),
    [anon_sym_PIPE_PIPE] = ACTIONS(248),
    [anon_sym_AMP_AMP] = ACTIONS(248),
    [anon_sym_EQ_GT] = ACTIONS(248),
    [anon_sym_elseif] = ACTIONS(248),
    [anon_sym_else] = ACTIONS(248),
    [sym__times_operator] = ACTIONS(248),
    [sym__plus_operator] = ACTIONS(248),
    [sym__arrow_operator] = ACTIONS(248),
    [sym__assign_operator] = ACTIONS(248),
    [anon_sym_LF] = ACTIONS(246),
    [anon_sym_SEMI] = ACTIONS(248),
    [sym_comment] = ACTIONS(60),
  },
  [47] = {
    [sym_argument_list] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(246),
    [anon_sym_end] = ACTIONS(248),
    [anon_sym_LPAREN] = ACTIONS(248),
    [anon_sym_PIPE_PIPE] = ACTIONS(248),
    [anon_sym_AMP_AMP] = ACTIONS(248),
    [anon_sym_EQ_GT] = ACTIONS(248),
    [anon_sym_elseif] = ACTIONS(248),
    [anon_sym_else] = ACTIONS(248),
    [sym__times_operator] = ACTIONS(48),
    [sym__plus_operator] = ACTIONS(248),
    [sym__arrow_operator] = ACTIONS(248),
    [sym__assign_operator] = ACTIONS(248),
    [anon_sym_LF] = ACTIONS(246),
    [anon_sym_SEMI] = ACTIONS(248),
    [sym_comment] = ACTIONS(60),
  },
  [48] = {
    [sym_argument_list] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(246),
    [anon_sym_LPAREN] = ACTIONS(248),
    [anon_sym_PIPE_PIPE] = ACTIONS(42),
    [anon_sym_AMP_AMP] = ACTIONS(44),
    [anon_sym_EQ_GT] = ACTIONS(248),
    [sym__times_operator] = ACTIONS(48),
    [sym__plus_operator] = ACTIONS(50),
    [sym__arrow_operator] = ACTIONS(52),
    [sym__assign_operator] = ACTIONS(248),
    [anon_sym_LF] = ACTIONS(246),
    [anon_sym_SEMI] = ACTIONS(248),
    [sym_comment] = ACTIONS(60),
  },
  [49] = {
    [sym_argument_list] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(254),
    [anon_sym_LPAREN] = ACTIONS(256),
    [anon_sym_PIPE_PIPE] = ACTIONS(42),
    [anon_sym_AMP_AMP] = ACTIONS(44),
    [anon_sym_EQ_GT] = ACTIONS(256),
    [sym__times_operator] = ACTIONS(48),
    [sym__plus_operator] = ACTIONS(50),
    [sym__arrow_operator] = ACTIONS(52),
    [sym__assign_operator] = ACTIONS(54),
    [anon_sym_LF] = ACTIONS(254),
    [anon_sym_SEMI] = ACTIONS(256),
    [sym_comment] = ACTIONS(60),
  },
  [50] = {
    [sym_argument_list] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(258),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_PIPE_PIPE] = ACTIONS(42),
    [anon_sym_AMP_AMP] = ACTIONS(44),
    [anon_sym_EQ_GT] = ACTIONS(46),
    [sym__times_operator] = ACTIONS(48),
    [sym__plus_operator] = ACTIONS(50),
    [sym__arrow_operator] = ACTIONS(52),
    [sym__assign_operator] = ACTIONS(54),
    [anon_sym_LF] = ACTIONS(258),
    [anon_sym_SEMI] = ACTIONS(260),
    [sym_comment] = ACTIONS(60),
  },
  [51] = {
    [sym__expression] = STATE(50),
    [sym_module_expression] = STATE(50),
    [sym_function_expression] = STATE(50),
    [sym_call_expression] = STATE(50),
    [sym_assignment_expression] = STATE(50),
    [sym_binary_expression] = STATE(50),
    [sym_pair_expression] = STATE(50),
    [sym_conditional_expression] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(262),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_function] = ACTIONS(12),
    [anon_sym_if] = ACTIONS(14),
    [sym_identifier] = ACTIONS(134),
    [sym_number] = ACTIONS(136),
    [sym_string] = ACTIONS(136),
    [sym_comment] = ACTIONS(20),
  },
  [52] = {
    [aux_sym__expression_list_repeat1] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(258),
    [anon_sym_LF] = ACTIONS(264),
    [anon_sym_SEMI] = ACTIONS(267),
    [sym_comment] = ACTIONS(60),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(270),
    [anon_sym_end] = ACTIONS(272),
    [anon_sym_LPAREN] = ACTIONS(272),
    [anon_sym_PIPE_PIPE] = ACTIONS(272),
    [anon_sym_AMP_AMP] = ACTIONS(272),
    [anon_sym_EQ_GT] = ACTIONS(272),
    [anon_sym_elseif] = ACTIONS(272),
    [anon_sym_else] = ACTIONS(272),
    [sym__times_operator] = ACTIONS(272),
    [sym__plus_operator] = ACTIONS(272),
    [sym__arrow_operator] = ACTIONS(272),
    [sym__assign_operator] = ACTIONS(272),
    [anon_sym_LF] = ACTIONS(270),
    [anon_sym_SEMI] = ACTIONS(272),
    [sym_comment] = ACTIONS(60),
  },
  [54] = {
    [sym__expression] = STATE(93),
    [sym_module_expression] = STATE(93),
    [sym_function_expression] = STATE(93),
    [sym_call_expression] = STATE(93),
    [sym_assignment_expression] = STATE(93),
    [sym_binary_expression] = STATE(93),
    [sym_pair_expression] = STATE(93),
    [sym_conditional_expression] = STATE(93),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_function] = ACTIONS(12),
    [anon_sym_if] = ACTIONS(14),
    [sym_identifier] = ACTIONS(274),
    [sym_number] = ACTIONS(276),
    [sym_string] = ACTIONS(276),
    [sym_comment] = ACTIONS(20),
  },
  [55] = {
    [sym__expression] = STATE(94),
    [sym_module_expression] = STATE(94),
    [sym_function_expression] = STATE(94),
    [sym_call_expression] = STATE(94),
    [sym_assignment_expression] = STATE(94),
    [sym_binary_expression] = STATE(94),
    [sym_pair_expression] = STATE(94),
    [sym_conditional_expression] = STATE(94),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_function] = ACTIONS(12),
    [anon_sym_if] = ACTIONS(14),
    [sym_identifier] = ACTIONS(278),
    [sym_number] = ACTIONS(280),
    [sym_string] = ACTIONS(280),
    [sym_comment] = ACTIONS(20),
  },
  [56] = {
    [sym__expression] = STATE(95),
    [sym_module_expression] = STATE(95),
    [sym_function_expression] = STATE(95),
    [sym_call_expression] = STATE(95),
    [sym_assignment_expression] = STATE(95),
    [sym_binary_expression] = STATE(95),
    [sym_pair_expression] = STATE(95),
    [sym_conditional_expression] = STATE(95),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_function] = ACTIONS(12),
    [anon_sym_if] = ACTIONS(14),
    [sym_identifier] = ACTIONS(282),
    [sym_number] = ACTIONS(284),
    [sym_string] = ACTIONS(284),
    [sym_comment] = ACTIONS(20),
  },
  [57] = {
    [sym__expression] = STATE(97),
    [sym_module_expression] = STATE(97),
    [sym_function_expression] = STATE(97),
    [sym_call_expression] = STATE(97),
    [sym_assignment_expression] = STATE(97),
    [sym_binary_expression] = STATE(97),
    [sym_pair_expression] = STATE(97),
    [sym_conditional_expression] = STATE(97),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(286),
    [anon_sym_function] = ACTIONS(12),
    [anon_sym_if] = ACTIONS(14),
    [sym_identifier] = ACTIONS(288),
    [sym_number] = ACTIONS(290),
    [sym_string] = ACTIONS(290),
    [sym_comment] = ACTIONS(20),
  },
  [58] = {
    [aux_sym__expression_list_repeat1] = STATE(99),
    [anon_sym_end] = ACTIONS(286),
    [anon_sym_LF] = ACTIONS(292),
    [anon_sym_SEMI] = ACTIONS(294),
    [sym_comment] = ACTIONS(60),
  },
  [59] = {
    [anon_sym_module] = ACTIONS(296),
    [anon_sym_end] = ACTIONS(296),
    [anon_sym_function] = ACTIONS(296),
    [anon_sym_if] = ACTIONS(296),
    [sym_identifier] = ACTIONS(296),
    [sym_number] = ACTIONS(298),
    [sym_string] = ACTIONS(298),
    [sym_comment] = ACTIONS(20),
  },
  [60] = {
    [aux_sym_parameter_list_repeat1] = STATE(102),
    [anon_sym_COMMA] = ACTIONS(300),
    [anon_sym_RPAREN] = ACTIONS(302),
    [sym_comment] = ACTIONS(20),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(304),
    [anon_sym_end] = ACTIONS(306),
    [anon_sym_LPAREN] = ACTIONS(306),
    [anon_sym_PIPE_PIPE] = ACTIONS(306),
    [anon_sym_AMP_AMP] = ACTIONS(306),
    [anon_sym_EQ_GT] = ACTIONS(306),
    [anon_sym_elseif] = ACTIONS(306),
    [anon_sym_else] = ACTIONS(306),
    [sym__times_operator] = ACTIONS(306),
    [sym__plus_operator] = ACTIONS(306),
    [sym__arrow_operator] = ACTIONS(306),
    [sym__assign_operator] = ACTIONS(306),
    [anon_sym_LF] = ACTIONS(304),
    [anon_sym_SEMI] = ACTIONS(306),
    [sym_comment] = ACTIONS(60),
  },
  [62] = {
    [sym_argument_list] = STATE(22),
    [aux_sym__expression_list_repeat1] = STATE(105),
    [anon_sym_end] = ACTIONS(308),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_PIPE_PIPE] = ACTIONS(42),
    [anon_sym_AMP_AMP] = ACTIONS(44),
    [anon_sym_EQ_GT] = ACTIONS(152),
    [sym__times_operator] = ACTIONS(48),
    [sym__plus_operator] = ACTIONS(50),
    [sym__arrow_operator] = ACTIONS(154),
    [sym__assign_operator] = ACTIONS(156),
    [anon_sym_LF] = ACTIONS(310),
    [anon_sym_SEMI] = ACTIONS(312),
    [sym_comment] = ACTIONS(60),
  },
  [63] = {
    [anon_sym_module] = ACTIONS(148),
    [anon_sym_function] = ACTIONS(148),
    [anon_sym_LPAREN] = ACTIONS(146),
    [anon_sym_COMMA] = ACTIONS(146),
    [anon_sym_RPAREN] = ACTIONS(146),
    [anon_sym_PIPE_PIPE] = ACTIONS(148),
    [anon_sym_AMP_AMP] = ACTIONS(146),
    [anon_sym_EQ_GT] = ACTIONS(146),
    [anon_sym_if] = ACTIONS(148),
    [sym_identifier] = ACTIONS(148),
    [sym_number] = ACTIONS(146),
    [sym_string] = ACTIONS(146),
    [sym__times_operator] = ACTIONS(148),
    [sym__plus_operator] = ACTIONS(148),
    [sym__arrow_operator] = ACTIONS(146),
    [sym__assign_operator] = ACTIONS(148),
    [sym_comment] = ACTIONS(20),
  },
  [64] = {
    [sym_argument_list] = STATE(22),
    [aux_sym__expression_list_repeat1] = STATE(108),
    [anon_sym_end] = ACTIONS(314),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_PIPE_PIPE] = ACTIONS(42),
    [anon_sym_AMP_AMP] = ACTIONS(44),
    [anon_sym_EQ_GT] = ACTIONS(152),
    [sym__times_operator] = ACTIONS(48),
    [sym__plus_operator] = ACTIONS(50),
    [sym__arrow_operator] = ACTIONS(154),
    [sym__assign_operator] = ACTIONS(156),
    [anon_sym_LF] = ACTIONS(316),
    [anon_sym_SEMI] = ACTIONS(318),
    [sym_comment] = ACTIONS(60),
  },
  [65] = {
    [sym__expression] = STATE(110),
    [sym_module_expression] = STATE(110),
    [sym_function_expression] = STATE(110),
    [sym_call_expression] = STATE(110),
    [sym_assignment_expression] = STATE(110),
    [sym_binary_expression] = STATE(110),
    [sym_pair_expression] = STATE(110),
    [sym_conditional_expression] = STATE(110),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(320),
    [anon_sym_function] = ACTIONS(12),
    [anon_sym_if] = ACTIONS(14),
    [sym_identifier] = ACTIONS(322),
    [sym_number] = ACTIONS(324),
    [sym_string] = ACTIONS(324),
    [sym_comment] = ACTIONS(20),
  },
  [66] = {
    [sym_argument_list] = STATE(22),
    [sym_elseif_clause] = STATE(115),
    [sym_else_clause] = STATE(113),
    [aux_sym__expression_list_repeat1] = STATE(114),
    [aux_sym_conditional_expression_repeat1] = STATE(115),
    [anon_sym_end] = ACTIONS(326),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_PIPE_PIPE] = ACTIONS(42),
    [anon_sym_AMP_AMP] = ACTIONS(44),
    [anon_sym_EQ_GT] = ACTIONS(218),
    [anon_sym_elseif] = ACTIONS(220),
    [anon_sym_else] = ACTIONS(222),
    [sym__times_operator] = ACTIONS(48),
    [sym__plus_operator] = ACTIONS(50),
    [sym__arrow_operator] = ACTIONS(224),
    [sym__assign_operator] = ACTIONS(226),
    [anon_sym_LF] = ACTIONS(328),
    [anon_sym_SEMI] = ACTIONS(330),
    [sym_comment] = ACTIONS(60),
  },
  [67] = {
    [anon_sym_module] = ACTIONS(234),
    [anon_sym_function] = ACTIONS(234),
    [anon_sym_LPAREN] = ACTIONS(232),
    [anon_sym_COMMA] = ACTIONS(232),
    [anon_sym_RPAREN] = ACTIONS(232),
    [anon_sym_PIPE_PIPE] = ACTIONS(234),
    [anon_sym_AMP_AMP] = ACTIONS(232),
    [anon_sym_EQ_GT] = ACTIONS(232),
    [anon_sym_if] = ACTIONS(234),
    [sym_identifier] = ACTIONS(234),
    [sym_number] = ACTIONS(232),
    [sym_string] = ACTIONS(232),
    [sym__times_operator] = ACTIONS(234),
    [sym__plus_operator] = ACTIONS(234),
    [sym__arrow_operator] = ACTIONS(232),
    [sym__assign_operator] = ACTIONS(234),
    [sym_comment] = ACTIONS(20),
  },
  [68] = {
    [sym_argument_list] = STATE(40),
    [aux_sym_argument_list_repeat1] = STATE(117),
    [anon_sym_LPAREN] = ACTIONS(78),
    [anon_sym_COMMA] = ACTIONS(236),
    [anon_sym_RPAREN] = ACTIONS(332),
    [anon_sym_PIPE_PIPE] = ACTIONS(80),
    [anon_sym_AMP_AMP] = ACTIONS(82),
    [anon_sym_EQ_GT] = ACTIONS(240),
    [sym__times_operator] = ACTIONS(90),
    [sym__plus_operator] = ACTIONS(92),
    [sym__arrow_operator] = ACTIONS(242),
    [sym__assign_operator] = ACTIONS(244),
    [sym_comment] = ACTIONS(20),
  },
  [69] = {
    [sym_argument_list] = STATE(40),
    [anon_sym_module] = ACTIONS(248),
    [anon_sym_function] = ACTIONS(248),
    [anon_sym_LPAREN] = ACTIONS(246),
    [anon_sym_COMMA] = ACTIONS(246),
    [anon_sym_RPAREN] = ACTIONS(246),
    [anon_sym_PIPE_PIPE] = ACTIONS(248),
    [anon_sym_AMP_AMP] = ACTIONS(246),
    [anon_sym_EQ_GT] = ACTIONS(246),
    [anon_sym_if] = ACTIONS(248),
    [sym_identifier] = ACTIONS(248),
    [sym_number] = ACTIONS(246),
    [sym_string] = ACTIONS(246),
    [sym__times_operator] = ACTIONS(90),
    [sym__plus_operator] = ACTIONS(92),
    [sym__arrow_operator] = ACTIONS(246),
    [sym__assign_operator] = ACTIONS(248),
    [sym_comment] = ACTIONS(20),
  },
  [70] = {
    [sym_argument_list] = STATE(40),
    [anon_sym_module] = ACTIONS(248),
    [anon_sym_function] = ACTIONS(248),
    [anon_sym_LPAREN] = ACTIONS(246),
    [anon_sym_COMMA] = ACTIONS(246),
    [anon_sym_RPAREN] = ACTIONS(246),
    [anon_sym_PIPE_PIPE] = ACTIONS(80),
    [anon_sym_AMP_AMP] = ACTIONS(246),
    [anon_sym_EQ_GT] = ACTIONS(246),
    [anon_sym_if] = ACTIONS(248),
    [sym_identifier] = ACTIONS(248),
    [sym_number] = ACTIONS(246),
    [sym_string] = ACTIONS(246),
    [sym__times_operator] = ACTIONS(90),
    [sym__plus_operator] = ACTIONS(92),
    [sym__arrow_operator] = ACTIONS(246),
    [sym__assign_operator] = ACTIONS(248),
    [sym_comment] = ACTIONS(20),
  },
  [71] = {
    [sym_argument_list] = STATE(40),
    [anon_sym_module] = ACTIONS(252),
    [anon_sym_function] = ACTIONS(252),
    [anon_sym_LPAREN] = ACTIONS(78),
    [anon_sym_PIPE_PIPE] = ACTIONS(80),
    [anon_sym_AMP_AMP] = ACTIONS(82),
    [anon_sym_EQ_GT] = ACTIONS(84),
    [anon_sym_if] = ACTIONS(252),
    [sym_identifier] = ACTIONS(252),
    [sym_number] = ACTIONS(250),
    [sym_string] = ACTIONS(250),
    [sym__times_operator] = ACTIONS(90),
    [sym__plus_operator] = ACTIONS(92),
    [sym__arrow_operator] = ACTIONS(94),
    [sym__assign_operator] = ACTIONS(96),
    [sym_comment] = ACTIONS(20),
  },
  [72] = {
    [sym_argument_list] = STATE(40),
    [anon_sym_module] = ACTIONS(248),
    [anon_sym_function] = ACTIONS(248),
    [anon_sym_LPAREN] = ACTIONS(246),
    [anon_sym_COMMA] = ACTIONS(246),
    [anon_sym_RPAREN] = ACTIONS(246),
    [anon_sym_PIPE_PIPE] = ACTIONS(248),
    [anon_sym_AMP_AMP] = ACTIONS(246),
    [anon_sym_EQ_GT] = ACTIONS(246),
    [anon_sym_if] = ACTIONS(248),
    [sym_identifier] = ACTIONS(248),
    [sym_number] = ACTIONS(246),
    [sym_string] = ACTIONS(246),
    [sym__times_operator] = ACTIONS(248),
    [sym__plus_operator] = ACTIONS(248),
    [sym__arrow_operator] = ACTIONS(246),
    [sym__assign_operator] = ACTIONS(248),
    [sym_comment] = ACTIONS(20),
  },
  [73] = {
    [sym_argument_list] = STATE(40),
    [anon_sym_module] = ACTIONS(248),
    [anon_sym_function] = ACTIONS(248),
    [anon_sym_LPAREN] = ACTIONS(246),
    [anon_sym_COMMA] = ACTIONS(246),
    [anon_sym_RPAREN] = ACTIONS(246),
    [anon_sym_PIPE_PIPE] = ACTIONS(248),
    [anon_sym_AMP_AMP] = ACTIONS(246),
    [anon_sym_EQ_GT] = ACTIONS(246),
    [anon_sym_if] = ACTIONS(248),
    [sym_identifier] = ACTIONS(248),
    [sym_number] = ACTIONS(246),
    [sym_string] = ACTIONS(246),
    [sym__times_operator] = ACTIONS(90),
    [sym__plus_operator] = ACTIONS(248),
    [sym__arrow_operator] = ACTIONS(246),
    [sym__assign_operator] = ACTIONS(248),
    [sym_comment] = ACTIONS(20),
  },
  [74] = {
    [sym_argument_list] = STATE(40),
    [anon_sym_module] = ACTIONS(248),
    [anon_sym_function] = ACTIONS(248),
    [anon_sym_LPAREN] = ACTIONS(246),
    [anon_sym_PIPE_PIPE] = ACTIONS(80),
    [anon_sym_AMP_AMP] = ACTIONS(82),
    [anon_sym_EQ_GT] = ACTIONS(246),
    [anon_sym_if] = ACTIONS(248),
    [sym_identifier] = ACTIONS(248),
    [sym_number] = ACTIONS(246),
    [sym_string] = ACTIONS(246),
    [sym__times_operator] = ACTIONS(90),
    [sym__plus_operator] = ACTIONS(92),
    [sym__arrow_operator] = ACTIONS(94),
    [sym__assign_operator] = ACTIONS(248),
    [sym_comment] = ACTIONS(20),
  },
  [75] = {
    [sym_argument_list] = STATE(40),
    [anon_sym_module] = ACTIONS(256),
    [anon_sym_function] = ACTIONS(256),
    [anon_sym_LPAREN] = ACTIONS(254),
    [anon_sym_PIPE_PIPE] = ACTIONS(80),
    [anon_sym_AMP_AMP] = ACTIONS(82),
    [anon_sym_EQ_GT] = ACTIONS(254),
    [anon_sym_if] = ACTIONS(256),
    [sym_identifier] = ACTIONS(256),
    [sym_number] = ACTIONS(254),
    [sym_string] = ACTIONS(254),
    [sym__times_operator] = ACTIONS(90),
    [sym__plus_operator] = ACTIONS(92),
    [sym__arrow_operator] = ACTIONS(94),
    [sym__assign_operator] = ACTIONS(96),
    [sym_comment] = ACTIONS(20),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(334),
    [anon_sym_end] = ACTIONS(336),
    [anon_sym_LPAREN] = ACTIONS(336),
    [anon_sym_PIPE_PIPE] = ACTIONS(336),
    [anon_sym_AMP_AMP] = ACTIONS(336),
    [anon_sym_EQ_GT] = ACTIONS(336),
    [anon_sym_elseif] = ACTIONS(336),
    [anon_sym_else] = ACTIONS(336),
    [sym__times_operator] = ACTIONS(336),
    [sym__plus_operator] = ACTIONS(336),
    [sym__arrow_operator] = ACTIONS(336),
    [sym__assign_operator] = ACTIONS(336),
    [anon_sym_LF] = ACTIONS(334),
    [anon_sym_SEMI] = ACTIONS(336),
    [sym_comment] = ACTIONS(60),
  },
  [77] = {
    [sym__expression] = STATE(118),
    [sym_module_expression] = STATE(118),
    [sym_function_expression] = STATE(118),
    [sym_call_expression] = STATE(118),
    [sym_assignment_expression] = STATE(118),
    [sym_binary_expression] = STATE(118),
    [sym_pair_expression] = STATE(118),
    [sym_conditional_expression] = STATE(118),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_function] = ACTIONS(12),
    [anon_sym_if] = ACTIONS(14),
    [sym_identifier] = ACTIONS(338),
    [sym_number] = ACTIONS(340),
    [sym_string] = ACTIONS(340),
    [sym_comment] = ACTIONS(20),
  },
  [78] = {
    [sym__expression] = STATE(119),
    [sym_module_expression] = STATE(119),
    [sym_function_expression] = STATE(119),
    [sym_call_expression] = STATE(119),
    [sym_assignment_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym_pair_expression] = STATE(119),
    [sym_conditional_expression] = STATE(119),
    [anon_sym_module] = ACTIONS(26),
    [anon_sym_function] = ACTIONS(28),
    [anon_sym_if] = ACTIONS(30),
    [sym_identifier] = ACTIONS(342),
    [sym_number] = ACTIONS(344),
    [sym_string] = ACTIONS(344),
    [sym_comment] = ACTIONS(20),
  },
  [79] = {
    [sym__expression] = STATE(120),
    [sym_module_expression] = STATE(120),
    [sym_function_expression] = STATE(120),
    [sym_call_expression] = STATE(120),
    [sym_assignment_expression] = STATE(120),
    [sym_binary_expression] = STATE(120),
    [sym_pair_expression] = STATE(120),
    [sym_conditional_expression] = STATE(120),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_function] = ACTIONS(12),
    [anon_sym_if] = ACTIONS(14),
    [sym_identifier] = ACTIONS(346),
    [sym_number] = ACTIONS(348),
    [sym_string] = ACTIONS(348),
    [sym_comment] = ACTIONS(20),
  },
  [80] = {
    [sym__expression] = STATE(121),
    [sym_module_expression] = STATE(121),
    [sym_function_expression] = STATE(121),
    [sym_call_expression] = STATE(121),
    [sym_assignment_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym_pair_expression] = STATE(121),
    [sym_conditional_expression] = STATE(121),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_function] = ACTIONS(12),
    [anon_sym_if] = ACTIONS(14),
    [sym_identifier] = ACTIONS(350),
    [sym_number] = ACTIONS(352),
    [sym_string] = ACTIONS(352),
    [sym_comment] = ACTIONS(20),
  },
  [81] = {
    [sym__expression] = STATE(122),
    [sym_module_expression] = STATE(122),
    [sym_function_expression] = STATE(122),
    [sym_call_expression] = STATE(122),
    [sym_assignment_expression] = STATE(122),
    [sym_binary_expression] = STATE(122),
    [sym_pair_expression] = STATE(122),
    [sym_conditional_expression] = STATE(122),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_function] = ACTIONS(12),
    [anon_sym_if] = ACTIONS(14),
    [sym_identifier] = ACTIONS(354),
    [sym_number] = ACTIONS(356),
    [sym_string] = ACTIONS(356),
    [sym_comment] = ACTIONS(20),
  },
  [82] = {
    [sym__expression] = STATE(124),
    [sym_module_expression] = STATE(124),
    [sym_function_expression] = STATE(124),
    [sym_call_expression] = STATE(124),
    [sym_assignment_expression] = STATE(124),
    [sym_binary_expression] = STATE(124),
    [sym_pair_expression] = STATE(124),
    [sym_conditional_expression] = STATE(124),
    [sym_elseif_clause] = STATE(126),
    [sym_else_clause] = STATE(125),
    [aux_sym_conditional_expression_repeat1] = STATE(126),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(358),
    [anon_sym_function] = ACTIONS(12),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_elseif] = ACTIONS(220),
    [anon_sym_else] = ACTIONS(222),
    [sym_identifier] = ACTIONS(360),
    [sym_number] = ACTIONS(362),
    [sym_string] = ACTIONS(362),
    [sym_comment] = ACTIONS(20),
  },
  [83] = {
    [anon_sym_end] = ACTIONS(364),
    [sym_comment] = ACTIONS(20),
  },
  [84] = {
    [sym_elseif_clause] = STATE(126),
    [sym_else_clause] = STATE(125),
    [aux_sym__expression_list_repeat1] = STATE(128),
    [aux_sym_conditional_expression_repeat1] = STATE(126),
    [anon_sym_end] = ACTIONS(358),
    [anon_sym_elseif] = ACTIONS(220),
    [anon_sym_else] = ACTIONS(222),
    [anon_sym_LF] = ACTIONS(366),
    [anon_sym_SEMI] = ACTIONS(368),
    [sym_comment] = ACTIONS(60),
  },
  [85] = {
    [sym_elseif_clause] = STATE(129),
    [sym_else_clause] = STATE(125),
    [aux_sym_conditional_expression_repeat1] = STATE(129),
    [anon_sym_end] = ACTIONS(364),
    [anon_sym_elseif] = ACTIONS(370),
    [anon_sym_else] = ACTIONS(222),
    [sym_comment] = ACTIONS(20),
  },
  [86] = {
    [sym__expression] = STATE(130),
    [sym_module_expression] = STATE(130),
    [sym_function_expression] = STATE(130),
    [sym_call_expression] = STATE(130),
    [sym_assignment_expression] = STATE(130),
    [sym_binary_expression] = STATE(130),
    [sym_pair_expression] = STATE(130),
    [sym_conditional_expression] = STATE(130),
    [anon_sym_module] = ACTIONS(26),
    [anon_sym_function] = ACTIONS(28),
    [anon_sym_if] = ACTIONS(30),
    [sym_identifier] = ACTIONS(372),
    [sym_number] = ACTIONS(374),
    [sym_string] = ACTIONS(374),
    [sym_comment] = ACTIONS(20),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(376),
    [anon_sym_end] = ACTIONS(378),
    [anon_sym_LPAREN] = ACTIONS(378),
    [anon_sym_PIPE_PIPE] = ACTIONS(378),
    [anon_sym_AMP_AMP] = ACTIONS(378),
    [anon_sym_EQ_GT] = ACTIONS(378),
    [anon_sym_elseif] = ACTIONS(378),
    [anon_sym_else] = ACTIONS(378),
    [sym__times_operator] = ACTIONS(378),
    [sym__plus_operator] = ACTIONS(378),
    [sym__arrow_operator] = ACTIONS(378),
    [sym__assign_operator] = ACTIONS(378),
    [anon_sym_LF] = ACTIONS(376),
    [anon_sym_SEMI] = ACTIONS(378),
    [sym_comment] = ACTIONS(60),
  },
  [88] = {
    [sym__expression] = STATE(131),
    [sym_module_expression] = STATE(131),
    [sym_function_expression] = STATE(131),
    [sym_call_expression] = STATE(131),
    [sym_assignment_expression] = STATE(131),
    [sym_binary_expression] = STATE(131),
    [sym_pair_expression] = STATE(131),
    [sym_conditional_expression] = STATE(131),
    [anon_sym_module] = ACTIONS(26),
    [anon_sym_function] = ACTIONS(28),
    [anon_sym_if] = ACTIONS(30),
    [sym_identifier] = ACTIONS(380),
    [sym_number] = ACTIONS(382),
    [sym_string] = ACTIONS(382),
    [sym_comment] = ACTIONS(20),
  },
  [89] = {
    [sym__expression] = STATE(132),
    [sym_module_expression] = STATE(132),
    [sym_function_expression] = STATE(132),
    [sym_call_expression] = STATE(132),
    [sym_assignment_expression] = STATE(132),
    [sym_binary_expression] = STATE(132),
    [sym_pair_expression] = STATE(132),
    [sym_conditional_expression] = STATE(132),
    [anon_sym_module] = ACTIONS(26),
    [anon_sym_function] = ACTIONS(28),
    [anon_sym_if] = ACTIONS(30),
    [sym_identifier] = ACTIONS(384),
    [sym_number] = ACTIONS(386),
    [sym_string] = ACTIONS(386),
    [sym_comment] = ACTIONS(20),
  },
  [90] = {
    [sym__expression] = STATE(133),
    [sym_module_expression] = STATE(133),
    [sym_function_expression] = STATE(133),
    [sym_call_expression] = STATE(133),
    [sym_assignment_expression] = STATE(133),
    [sym_binary_expression] = STATE(133),
    [sym_pair_expression] = STATE(133),
    [sym_conditional_expression] = STATE(133),
    [anon_sym_module] = ACTIONS(26),
    [anon_sym_function] = ACTIONS(28),
    [anon_sym_if] = ACTIONS(30),
    [sym_identifier] = ACTIONS(388),
    [sym_number] = ACTIONS(390),
    [sym_string] = ACTIONS(390),
    [sym_comment] = ACTIONS(20),
  },
  [91] = {
    [aux_sym_argument_list_repeat1] = STATE(135),
    [anon_sym_COMMA] = ACTIONS(236),
    [anon_sym_RPAREN] = ACTIONS(392),
    [sym_comment] = ACTIONS(20),
  },
  [92] = {
    [sym__expression] = STATE(50),
    [sym_module_expression] = STATE(50),
    [sym_function_expression] = STATE(50),
    [sym_call_expression] = STATE(50),
    [sym_assignment_expression] = STATE(50),
    [sym_binary_expression] = STATE(50),
    [sym_pair_expression] = STATE(50),
    [sym_conditional_expression] = STATE(50),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_function] = ACTIONS(12),
    [anon_sym_if] = ACTIONS(14),
    [sym_identifier] = ACTIONS(134),
    [sym_number] = ACTIONS(136),
    [sym_string] = ACTIONS(136),
    [sym_comment] = ACTIONS(20),
  },
  [93] = {
    [sym_argument_list] = STATE(22),
    [anon_sym_end] = ACTIONS(252),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_PIPE_PIPE] = ACTIONS(42),
    [anon_sym_AMP_AMP] = ACTIONS(44),
    [anon_sym_EQ_GT] = ACTIONS(152),
    [sym__times_operator] = ACTIONS(48),
    [sym__plus_operator] = ACTIONS(50),
    [sym__arrow_operator] = ACTIONS(154),
    [sym__assign_operator] = ACTIONS(156),
    [anon_sym_LF] = ACTIONS(250),
    [anon_sym_SEMI] = ACTIONS(252),
    [sym_comment] = ACTIONS(60),
  },
  [94] = {
    [sym_argument_list] = STATE(22),
    [anon_sym_end] = ACTIONS(248),
    [anon_sym_LPAREN] = ACTIONS(248),
    [anon_sym_PIPE_PIPE] = ACTIONS(42),
    [anon_sym_AMP_AMP] = ACTIONS(44),
    [anon_sym_EQ_GT] = ACTIONS(248),
    [sym__times_operator] = ACTIONS(48),
    [sym__plus_operator] = ACTIONS(50),
    [sym__arrow_operator] = ACTIONS(154),
    [sym__assign_operator] = ACTIONS(248),
    [anon_sym_LF] = ACTIONS(246),
    [anon_sym_SEMI] = ACTIONS(248),
    [sym_comment] = ACTIONS(60),
  },
  [95] = {
    [sym_argument_list] = STATE(22),
    [anon_sym_end] = ACTIONS(256),
    [anon_sym_LPAREN] = ACTIONS(256),
    [anon_sym_PIPE_PIPE] = ACTIONS(42),
    [anon_sym_AMP_AMP] = ACTIONS(44),
    [anon_sym_EQ_GT] = ACTIONS(256),
    [sym__times_operator] = ACTIONS(48),
    [sym__plus_operator] = ACTIONS(50),
    [sym__arrow_operator] = ACTIONS(154),
    [sym__assign_operator] = ACTIONS(156),
    [anon_sym_LF] = ACTIONS(254),
    [anon_sym_SEMI] = ACTIONS(256),
    [sym_comment] = ACTIONS(60),
  },
  [96] = {
    [ts_builtin_sym_end] = ACTIONS(394),
    [anon_sym_end] = ACTIONS(396),
    [anon_sym_LPAREN] = ACTIONS(396),
    [anon_sym_PIPE_PIPE] = ACTIONS(396),
    [anon_sym_AMP_AMP] = ACTIONS(396),
    [anon_sym_EQ_GT] = ACTIONS(396),
    [anon_sym_elseif] = ACTIONS(396),
    [anon_sym_else] = ACTIONS(396),
    [sym__times_operator] = ACTIONS(396),
    [sym__plus_operator] = ACTIONS(396),
    [sym__arrow_operator] = ACTIONS(396),
    [sym__assign_operator] = ACTIONS(396),
    [anon_sym_LF] = ACTIONS(394),
    [anon_sym_SEMI] = ACTIONS(396),
    [sym_comment] = ACTIONS(60),
  },
  [97] = {
    [sym_argument_list] = STATE(22),
    [anon_sym_end] = ACTIONS(260),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_PIPE_PIPE] = ACTIONS(42),
    [anon_sym_AMP_AMP] = ACTIONS(44),
    [anon_sym_EQ_GT] = ACTIONS(152),
    [sym__times_operator] = ACTIONS(48),
    [sym__plus_operator] = ACTIONS(50),
    [sym__arrow_operator] = ACTIONS(154),
    [sym__assign_operator] = ACTIONS(156),
    [anon_sym_LF] = ACTIONS(258),
    [anon_sym_SEMI] = ACTIONS(260),
    [sym_comment] = ACTIONS(60),
  },
  [98] = {
    [sym__expression] = STATE(97),
    [sym_module_expression] = STATE(97),
    [sym_function_expression] = STATE(97),
    [sym_call_expression] = STATE(97),
    [sym_assignment_expression] = STATE(97),
    [sym_binary_expression] = STATE(97),
    [sym_pair_expression] = STATE(97),
    [sym_conditional_expression] = STATE(97),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(398),
    [anon_sym_function] = ACTIONS(12),
    [anon_sym_if] = ACTIONS(14),
    [sym_identifier] = ACTIONS(288),
    [sym_number] = ACTIONS(290),
    [sym_string] = ACTIONS(290),
    [sym_comment] = ACTIONS(20),
  },
  [99] = {
    [aux_sym__expression_list_repeat1] = STATE(99),
    [anon_sym_end] = ACTIONS(260),
    [anon_sym_LF] = ACTIONS(400),
    [anon_sym_SEMI] = ACTIONS(403),
    [sym_comment] = ACTIONS(60),
  },
  [100] = {
    [sym_identifier] = ACTIONS(406),
    [sym_comment] = ACTIONS(20),
  },
  [101] = {
    [anon_sym_module] = ACTIONS(408),
    [anon_sym_end] = ACTIONS(408),
    [anon_sym_function] = ACTIONS(408),
    [anon_sym_if] = ACTIONS(408),
    [sym_identifier] = ACTIONS(408),
    [sym_number] = ACTIONS(410),
    [sym_string] = ACTIONS(410),
    [sym_comment] = ACTIONS(20),
  },
  [102] = {
    [aux_sym_parameter_list_repeat1] = STATE(140),
    [anon_sym_COMMA] = ACTIONS(300),
    [anon_sym_RPAREN] = ACTIONS(412),
    [sym_comment] = ACTIONS(20),
  },
  [103] = {
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
    [sym_comment] = ACTIONS(60),
  },
  [104] = {
    [sym__expression] = STATE(97),
    [sym_module_expression] = STATE(97),
    [sym_function_expression] = STATE(97),
    [sym_call_expression] = STATE(97),
    [sym_assignment_expression] = STATE(97),
    [sym_binary_expression] = STATE(97),
    [sym_pair_expression] = STATE(97),
    [sym_conditional_expression] = STATE(97),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(418),
    [anon_sym_function] = ACTIONS(12),
    [anon_sym_if] = ACTIONS(14),
    [sym_identifier] = ACTIONS(288),
    [sym_number] = ACTIONS(290),
    [sym_string] = ACTIONS(290),
    [sym_comment] = ACTIONS(20),
  },
  [105] = {
    [aux_sym__expression_list_repeat1] = STATE(99),
    [anon_sym_end] = ACTIONS(418),
    [anon_sym_LF] = ACTIONS(420),
    [anon_sym_SEMI] = ACTIONS(422),
    [sym_comment] = ACTIONS(60),
  },
  [106] = {
    [anon_sym_module] = ACTIONS(272),
    [anon_sym_function] = ACTIONS(272),
    [anon_sym_LPAREN] = ACTIONS(270),
    [anon_sym_COMMA] = ACTIONS(270),
    [anon_sym_RPAREN] = ACTIONS(270),
    [anon_sym_PIPE_PIPE] = ACTIONS(272),
    [anon_sym_AMP_AMP] = ACTIONS(270),
    [anon_sym_EQ_GT] = ACTIONS(270),
    [anon_sym_if] = ACTIONS(272),
    [sym_identifier] = ACTIONS(272),
    [sym_number] = ACTIONS(270),
    [sym_string] = ACTIONS(270),
    [sym__times_operator] = ACTIONS(272),
    [sym__plus_operator] = ACTIONS(272),
    [sym__arrow_operator] = ACTIONS(270),
    [sym__assign_operator] = ACTIONS(272),
    [sym_comment] = ACTIONS(20),
  },
  [107] = {
    [sym__expression] = STATE(97),
    [sym_module_expression] = STATE(97),
    [sym_function_expression] = STATE(97),
    [sym_call_expression] = STATE(97),
    [sym_assignment_expression] = STATE(97),
    [sym_binary_expression] = STATE(97),
    [sym_pair_expression] = STATE(97),
    [sym_conditional_expression] = STATE(97),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(424),
    [anon_sym_function] = ACTIONS(12),
    [anon_sym_if] = ACTIONS(14),
    [sym_identifier] = ACTIONS(288),
    [sym_number] = ACTIONS(290),
    [sym_string] = ACTIONS(290),
    [sym_comment] = ACTIONS(20),
  },
  [108] = {
    [aux_sym__expression_list_repeat1] = STATE(99),
    [anon_sym_end] = ACTIONS(424),
    [anon_sym_LF] = ACTIONS(426),
    [anon_sym_SEMI] = ACTIONS(428),
    [sym_comment] = ACTIONS(60),
  },
  [109] = {
    [anon_sym_module] = ACTIONS(306),
    [anon_sym_function] = ACTIONS(306),
    [anon_sym_LPAREN] = ACTIONS(304),
    [anon_sym_COMMA] = ACTIONS(304),
    [anon_sym_RPAREN] = ACTIONS(304),
    [anon_sym_PIPE_PIPE] = ACTIONS(306),
    [anon_sym_AMP_AMP] = ACTIONS(304),
    [anon_sym_EQ_GT] = ACTIONS(304),
    [anon_sym_if] = ACTIONS(306),
    [sym_identifier] = ACTIONS(306),
    [sym_number] = ACTIONS(304),
    [sym_string] = ACTIONS(304),
    [sym__times_operator] = ACTIONS(306),
    [sym__plus_operator] = ACTIONS(306),
    [sym__arrow_operator] = ACTIONS(304),
    [sym__assign_operator] = ACTIONS(306),
    [sym_comment] = ACTIONS(20),
  },
  [110] = {
    [sym_argument_list] = STATE(22),
    [aux_sym__expression_list_repeat1] = STATE(147),
    [anon_sym_end] = ACTIONS(430),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_PIPE_PIPE] = ACTIONS(42),
    [anon_sym_AMP_AMP] = ACTIONS(44),
    [anon_sym_EQ_GT] = ACTIONS(152),
    [sym__times_operator] = ACTIONS(48),
    [sym__plus_operator] = ACTIONS(50),
    [sym__arrow_operator] = ACTIONS(154),
    [sym__assign_operator] = ACTIONS(156),
    [anon_sym_LF] = ACTIONS(432),
    [anon_sym_SEMI] = ACTIONS(434),
    [sym_comment] = ACTIONS(60),
  },
  [111] = {
    [anon_sym_module] = ACTIONS(336),
    [anon_sym_function] = ACTIONS(336),
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_COMMA] = ACTIONS(334),
    [anon_sym_RPAREN] = ACTIONS(334),
    [anon_sym_PIPE_PIPE] = ACTIONS(336),
    [anon_sym_AMP_AMP] = ACTIONS(334),
    [anon_sym_EQ_GT] = ACTIONS(334),
    [anon_sym_if] = ACTIONS(336),
    [sym_identifier] = ACTIONS(336),
    [sym_number] = ACTIONS(334),
    [sym_string] = ACTIONS(334),
    [sym__times_operator] = ACTIONS(336),
    [sym__plus_operator] = ACTIONS(336),
    [sym__arrow_operator] = ACTIONS(334),
    [sym__assign_operator] = ACTIONS(336),
    [sym_comment] = ACTIONS(20),
  },
  [112] = {
    [sym__expression] = STATE(124),
    [sym_module_expression] = STATE(124),
    [sym_function_expression] = STATE(124),
    [sym_call_expression] = STATE(124),
    [sym_assignment_expression] = STATE(124),
    [sym_binary_expression] = STATE(124),
    [sym_pair_expression] = STATE(124),
    [sym_conditional_expression] = STATE(124),
    [sym_elseif_clause] = STATE(150),
    [sym_else_clause] = STATE(149),
    [aux_sym_conditional_expression_repeat1] = STATE(150),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(436),
    [anon_sym_function] = ACTIONS(12),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_elseif] = ACTIONS(220),
    [anon_sym_else] = ACTIONS(222),
    [sym_identifier] = ACTIONS(360),
    [sym_number] = ACTIONS(362),
    [sym_string] = ACTIONS(362),
    [sym_comment] = ACTIONS(20),
  },
  [113] = {
    [anon_sym_end] = ACTIONS(438),
    [sym_comment] = ACTIONS(20),
  },
  [114] = {
    [sym_elseif_clause] = STATE(150),
    [sym_else_clause] = STATE(149),
    [aux_sym__expression_list_repeat1] = STATE(128),
    [aux_sym_conditional_expression_repeat1] = STATE(150),
    [anon_sym_end] = ACTIONS(436),
    [anon_sym_elseif] = ACTIONS(220),
    [anon_sym_else] = ACTIONS(222),
    [anon_sym_LF] = ACTIONS(440),
    [anon_sym_SEMI] = ACTIONS(442),
    [sym_comment] = ACTIONS(60),
  },
  [115] = {
    [sym_elseif_clause] = STATE(129),
    [sym_else_clause] = STATE(149),
    [aux_sym_conditional_expression_repeat1] = STATE(129),
    [anon_sym_end] = ACTIONS(438),
    [anon_sym_elseif] = ACTIONS(370),
    [anon_sym_else] = ACTIONS(222),
    [sym_comment] = ACTIONS(20),
  },
  [116] = {
    [anon_sym_module] = ACTIONS(378),
    [anon_sym_function] = ACTIONS(378),
    [anon_sym_LPAREN] = ACTIONS(376),
    [anon_sym_COMMA] = ACTIONS(376),
    [anon_sym_RPAREN] = ACTIONS(376),
    [anon_sym_PIPE_PIPE] = ACTIONS(378),
    [anon_sym_AMP_AMP] = ACTIONS(376),
    [anon_sym_EQ_GT] = ACTIONS(376),
    [anon_sym_if] = ACTIONS(378),
    [sym_identifier] = ACTIONS(378),
    [sym_number] = ACTIONS(376),
    [sym_string] = ACTIONS(376),
    [sym__times_operator] = ACTIONS(378),
    [sym__plus_operator] = ACTIONS(378),
    [sym__arrow_operator] = ACTIONS(376),
    [sym__assign_operator] = ACTIONS(378),
    [sym_comment] = ACTIONS(20),
  },
  [117] = {
    [aux_sym_argument_list_repeat1] = STATE(135),
    [anon_sym_COMMA] = ACTIONS(236),
    [anon_sym_RPAREN] = ACTIONS(444),
    [sym_comment] = ACTIONS(20),
  },
  [118] = {
    [sym_argument_list] = STATE(22),
    [anon_sym_end] = ACTIONS(252),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_PIPE_PIPE] = ACTIONS(42),
    [anon_sym_AMP_AMP] = ACTIONS(44),
    [anon_sym_EQ_GT] = ACTIONS(218),
    [anon_sym_elseif] = ACTIONS(252),
    [anon_sym_else] = ACTIONS(252),
    [sym__times_operator] = ACTIONS(48),
    [sym__plus_operator] = ACTIONS(50),
    [sym__arrow_operator] = ACTIONS(224),
    [sym__assign_operator] = ACTIONS(226),
    [anon_sym_LF] = ACTIONS(250),
    [anon_sym_SEMI] = ACTIONS(252),
    [sym_comment] = ACTIONS(60),
  },
  [119] = {
    [sym__expression] = STATE(153),
    [sym_module_expression] = STATE(153),
    [sym_function_expression] = STATE(153),
    [sym_call_expression] = STATE(153),
    [sym_argument_list] = STATE(40),
    [sym_assignment_expression] = STATE(153),
    [sym_binary_expression] = STATE(153),
    [sym_pair_expression] = STATE(153),
    [sym_conditional_expression] = STATE(153),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_function] = ACTIONS(12),
    [anon_sym_LPAREN] = ACTIONS(78),
    [anon_sym_PIPE_PIPE] = ACTIONS(80),
    [anon_sym_AMP_AMP] = ACTIONS(82),
    [anon_sym_EQ_GT] = ACTIONS(84),
    [anon_sym_if] = ACTIONS(14),
    [sym_identifier] = ACTIONS(446),
    [sym_number] = ACTIONS(448),
    [sym_string] = ACTIONS(448),
    [sym__times_operator] = ACTIONS(90),
    [sym__plus_operator] = ACTIONS(92),
    [sym__arrow_operator] = ACTIONS(94),
    [sym__assign_operator] = ACTIONS(96),
    [sym_comment] = ACTIONS(20),
  },
  [120] = {
    [sym_argument_list] = STATE(22),
    [aux_sym__expression_list_repeat1] = STATE(155),
    [anon_sym_end] = ACTIONS(450),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_PIPE_PIPE] = ACTIONS(42),
    [anon_sym_AMP_AMP] = ACTIONS(44),
    [anon_sym_EQ_GT] = ACTIONS(152),
    [sym__times_operator] = ACTIONS(48),
    [sym__plus_operator] = ACTIONS(50),
    [sym__arrow_operator] = ACTIONS(154),
    [sym__assign_operator] = ACTIONS(156),
    [anon_sym_LF] = ACTIONS(452),
    [anon_sym_SEMI] = ACTIONS(454),
    [sym_comment] = ACTIONS(60),
  },
  [121] = {
    [sym_argument_list] = STATE(22),
    [anon_sym_end] = ACTIONS(248),
    [anon_sym_LPAREN] = ACTIONS(248),
    [anon_sym_PIPE_PIPE] = ACTIONS(42),
    [anon_sym_AMP_AMP] = ACTIONS(44),
    [anon_sym_EQ_GT] = ACTIONS(248),
    [anon_sym_elseif] = ACTIONS(248),
    [anon_sym_else] = ACTIONS(248),
    [sym__times_operator] = ACTIONS(48),
    [sym__plus_operator] = ACTIONS(50),
    [sym__arrow_operator] = ACTIONS(224),
    [sym__assign_operator] = ACTIONS(248),
    [anon_sym_LF] = ACTIONS(246),
    [anon_sym_SEMI] = ACTIONS(248),
    [sym_comment] = ACTIONS(60),
  },
  [122] = {
    [sym_argument_list] = STATE(22),
    [anon_sym_end] = ACTIONS(256),
    [anon_sym_LPAREN] = ACTIONS(256),
    [anon_sym_PIPE_PIPE] = ACTIONS(42),
    [anon_sym_AMP_AMP] = ACTIONS(44),
    [anon_sym_EQ_GT] = ACTIONS(256),
    [anon_sym_elseif] = ACTIONS(256),
    [anon_sym_else] = ACTIONS(256),
    [sym__times_operator] = ACTIONS(48),
    [sym__plus_operator] = ACTIONS(50),
    [sym__arrow_operator] = ACTIONS(224),
    [sym__assign_operator] = ACTIONS(226),
    [anon_sym_LF] = ACTIONS(254),
    [anon_sym_SEMI] = ACTIONS(256),
    [sym_comment] = ACTIONS(60),
  },
  [123] = {
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
    [sym_comment] = ACTIONS(60),
  },
  [124] = {
    [sym_argument_list] = STATE(22),
    [anon_sym_end] = ACTIONS(260),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_PIPE_PIPE] = ACTIONS(42),
    [anon_sym_AMP_AMP] = ACTIONS(44),
    [anon_sym_EQ_GT] = ACTIONS(218),
    [anon_sym_elseif] = ACTIONS(260),
    [anon_sym_else] = ACTIONS(260),
    [sym__times_operator] = ACTIONS(48),
    [sym__plus_operator] = ACTIONS(50),
    [sym__arrow_operator] = ACTIONS(224),
    [sym__assign_operator] = ACTIONS(226),
    [anon_sym_LF] = ACTIONS(258),
    [anon_sym_SEMI] = ACTIONS(260),
    [sym_comment] = ACTIONS(60),
  },
  [125] = {
    [anon_sym_end] = ACTIONS(460),
    [sym_comment] = ACTIONS(20),
  },
  [126] = {
    [sym_elseif_clause] = STATE(129),
    [sym_else_clause] = STATE(157),
    [aux_sym_conditional_expression_repeat1] = STATE(129),
    [anon_sym_end] = ACTIONS(460),
    [anon_sym_elseif] = ACTIONS(370),
    [anon_sym_else] = ACTIONS(222),
    [sym_comment] = ACTIONS(20),
  },
  [127] = {
    [sym__expression] = STATE(124),
    [sym_module_expression] = STATE(124),
    [sym_function_expression] = STATE(124),
    [sym_call_expression] = STATE(124),
    [sym_assignment_expression] = STATE(124),
    [sym_binary_expression] = STATE(124),
    [sym_pair_expression] = STATE(124),
    [sym_conditional_expression] = STATE(124),
    [sym_elseif_clause] = STATE(158),
    [sym_else_clause] = STATE(157),
    [aux_sym_conditional_expression_repeat1] = STATE(158),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(462),
    [anon_sym_function] = ACTIONS(12),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_elseif] = ACTIONS(220),
    [anon_sym_else] = ACTIONS(222),
    [sym_identifier] = ACTIONS(360),
    [sym_number] = ACTIONS(362),
    [sym_string] = ACTIONS(362),
    [sym_comment] = ACTIONS(20),
  },
  [128] = {
    [aux_sym__expression_list_repeat1] = STATE(128),
    [anon_sym_end] = ACTIONS(260),
    [anon_sym_elseif] = ACTIONS(260),
    [anon_sym_else] = ACTIONS(260),
    [anon_sym_LF] = ACTIONS(464),
    [anon_sym_SEMI] = ACTIONS(467),
    [sym_comment] = ACTIONS(60),
  },
  [129] = {
    [sym_elseif_clause] = STATE(129),
    [aux_sym_conditional_expression_repeat1] = STATE(129),
    [anon_sym_end] = ACTIONS(470),
    [anon_sym_elseif] = ACTIONS(472),
    [anon_sym_else] = ACTIONS(475),
    [sym_comment] = ACTIONS(20),
  },
  [130] = {
    [sym_argument_list] = STATE(40),
    [anon_sym_LPAREN] = ACTIONS(78),
    [anon_sym_COMMA] = ACTIONS(477),
    [anon_sym_RPAREN] = ACTIONS(477),
    [anon_sym_PIPE_PIPE] = ACTIONS(80),
    [anon_sym_AMP_AMP] = ACTIONS(82),
    [anon_sym_EQ_GT] = ACTIONS(240),
    [sym__times_operator] = ACTIONS(90),
    [sym__plus_operator] = ACTIONS(92),
    [sym__arrow_operator] = ACTIONS(242),
    [sym__assign_operator] = ACTIONS(244),
    [sym_comment] = ACTIONS(20),
  },
  [131] = {
    [sym_argument_list] = STATE(40),
    [anon_sym_LPAREN] = ACTIONS(78),
    [anon_sym_COMMA] = ACTIONS(250),
    [anon_sym_RPAREN] = ACTIONS(250),
    [anon_sym_PIPE_PIPE] = ACTIONS(80),
    [anon_sym_AMP_AMP] = ACTIONS(82),
    [anon_sym_EQ_GT] = ACTIONS(240),
    [sym__times_operator] = ACTIONS(90),
    [sym__plus_operator] = ACTIONS(92),
    [sym__arrow_operator] = ACTIONS(242),
    [sym__assign_operator] = ACTIONS(244),
    [sym_comment] = ACTIONS(20),
  },
  [132] = {
    [sym_argument_list] = STATE(40),
    [anon_sym_LPAREN] = ACTIONS(246),
    [anon_sym_COMMA] = ACTIONS(246),
    [anon_sym_RPAREN] = ACTIONS(246),
    [anon_sym_PIPE_PIPE] = ACTIONS(80),
    [anon_sym_AMP_AMP] = ACTIONS(82),
    [anon_sym_EQ_GT] = ACTIONS(246),
    [sym__times_operator] = ACTIONS(90),
    [sym__plus_operator] = ACTIONS(92),
    [sym__arrow_operator] = ACTIONS(242),
    [sym__assign_operator] = ACTIONS(248),
    [sym_comment] = ACTIONS(20),
  },
  [133] = {
    [sym_argument_list] = STATE(40),
    [anon_sym_LPAREN] = ACTIONS(254),
    [anon_sym_COMMA] = ACTIONS(254),
    [anon_sym_RPAREN] = ACTIONS(254),
    [anon_sym_PIPE_PIPE] = ACTIONS(80),
    [anon_sym_AMP_AMP] = ACTIONS(82),
    [anon_sym_EQ_GT] = ACTIONS(254),
    [sym__times_operator] = ACTIONS(90),
    [sym__plus_operator] = ACTIONS(92),
    [sym__arrow_operator] = ACTIONS(242),
    [sym__assign_operator] = ACTIONS(244),
    [sym_comment] = ACTIONS(20),
  },
  [134] = {
    [ts_builtin_sym_end] = ACTIONS(479),
    [anon_sym_end] = ACTIONS(481),
    [anon_sym_LPAREN] = ACTIONS(481),
    [anon_sym_PIPE_PIPE] = ACTIONS(481),
    [anon_sym_AMP_AMP] = ACTIONS(481),
    [anon_sym_EQ_GT] = ACTIONS(481),
    [anon_sym_elseif] = ACTIONS(481),
    [anon_sym_else] = ACTIONS(481),
    [sym__times_operator] = ACTIONS(481),
    [sym__plus_operator] = ACTIONS(481),
    [sym__arrow_operator] = ACTIONS(481),
    [sym__assign_operator] = ACTIONS(481),
    [anon_sym_LF] = ACTIONS(479),
    [anon_sym_SEMI] = ACTIONS(481),
    [sym_comment] = ACTIONS(60),
  },
  [135] = {
    [aux_sym_argument_list_repeat1] = STATE(135),
    [anon_sym_COMMA] = ACTIONS(483),
    [anon_sym_RPAREN] = ACTIONS(477),
    [sym_comment] = ACTIONS(20),
  },
  [136] = {
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
    [sym_comment] = ACTIONS(60),
  },
  [137] = {
    [sym__expression] = STATE(97),
    [sym_module_expression] = STATE(97),
    [sym_function_expression] = STATE(97),
    [sym_call_expression] = STATE(97),
    [sym_assignment_expression] = STATE(97),
    [sym_binary_expression] = STATE(97),
    [sym_pair_expression] = STATE(97),
    [sym_conditional_expression] = STATE(97),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_function] = ACTIONS(12),
    [anon_sym_if] = ACTIONS(14),
    [sym_identifier] = ACTIONS(288),
    [sym_number] = ACTIONS(290),
    [sym_string] = ACTIONS(290),
    [sym_comment] = ACTIONS(20),
  },
  [138] = {
    [anon_sym_COMMA] = ACTIONS(490),
    [anon_sym_RPAREN] = ACTIONS(490),
    [sym_comment] = ACTIONS(20),
  },
  [139] = {
    [anon_sym_module] = ACTIONS(492),
    [anon_sym_end] = ACTIONS(492),
    [anon_sym_function] = ACTIONS(492),
    [anon_sym_if] = ACTIONS(492),
    [sym_identifier] = ACTIONS(492),
    [sym_number] = ACTIONS(494),
    [sym_string] = ACTIONS(494),
    [sym_comment] = ACTIONS(20),
  },
  [140] = {
    [aux_sym_parameter_list_repeat1] = STATE(140),
    [anon_sym_COMMA] = ACTIONS(496),
    [anon_sym_RPAREN] = ACTIONS(490),
    [sym_comment] = ACTIONS(20),
  },
  [141] = {
    [ts_builtin_sym_end] = ACTIONS(499),
    [anon_sym_end] = ACTIONS(501),
    [anon_sym_LPAREN] = ACTIONS(501),
    [anon_sym_PIPE_PIPE] = ACTIONS(501),
    [anon_sym_AMP_AMP] = ACTIONS(501),
    [anon_sym_EQ_GT] = ACTIONS(501),
    [anon_sym_elseif] = ACTIONS(501),
    [anon_sym_else] = ACTIONS(501),
    [sym__times_operator] = ACTIONS(501),
    [sym__plus_operator] = ACTIONS(501),
    [sym__arrow_operator] = ACTIONS(501),
    [sym__assign_operator] = ACTIONS(501),
    [anon_sym_LF] = ACTIONS(499),
    [anon_sym_SEMI] = ACTIONS(501),
    [sym_comment] = ACTIONS(60),
  },
  [142] = {
    [sym__expression] = STATE(97),
    [sym_module_expression] = STATE(97),
    [sym_function_expression] = STATE(97),
    [sym_call_expression] = STATE(97),
    [sym_assignment_expression] = STATE(97),
    [sym_binary_expression] = STATE(97),
    [sym_pair_expression] = STATE(97),
    [sym_conditional_expression] = STATE(97),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(503),
    [anon_sym_function] = ACTIONS(12),
    [anon_sym_if] = ACTIONS(14),
    [sym_identifier] = ACTIONS(288),
    [sym_number] = ACTIONS(290),
    [sym_string] = ACTIONS(290),
    [sym_comment] = ACTIONS(20),
  },
  [143] = {
    [anon_sym_module] = ACTIONS(396),
    [anon_sym_function] = ACTIONS(396),
    [anon_sym_LPAREN] = ACTIONS(394),
    [anon_sym_COMMA] = ACTIONS(394),
    [anon_sym_RPAREN] = ACTIONS(394),
    [anon_sym_PIPE_PIPE] = ACTIONS(396),
    [anon_sym_AMP_AMP] = ACTIONS(394),
    [anon_sym_EQ_GT] = ACTIONS(394),
    [anon_sym_if] = ACTIONS(396),
    [sym_identifier] = ACTIONS(396),
    [sym_number] = ACTIONS(394),
    [sym_string] = ACTIONS(394),
    [sym__times_operator] = ACTIONS(396),
    [sym__plus_operator] = ACTIONS(396),
    [sym__arrow_operator] = ACTIONS(394),
    [sym__assign_operator] = ACTIONS(396),
    [sym_comment] = ACTIONS(20),
  },
  [144] = {
    [sym__expression] = STATE(97),
    [sym_module_expression] = STATE(97),
    [sym_function_expression] = STATE(97),
    [sym_call_expression] = STATE(97),
    [sym_assignment_expression] = STATE(97),
    [sym_binary_expression] = STATE(97),
    [sym_pair_expression] = STATE(97),
    [sym_conditional_expression] = STATE(97),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(505),
    [anon_sym_function] = ACTIONS(12),
    [anon_sym_if] = ACTIONS(14),
    [sym_identifier] = ACTIONS(288),
    [sym_number] = ACTIONS(290),
    [sym_string] = ACTIONS(290),
    [sym_comment] = ACTIONS(20),
  },
  [145] = {
    [anon_sym_module] = ACTIONS(416),
    [anon_sym_function] = ACTIONS(416),
    [anon_sym_LPAREN] = ACTIONS(414),
    [anon_sym_COMMA] = ACTIONS(414),
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
    [sym_comment] = ACTIONS(20),
  },
  [146] = {
    [sym__expression] = STATE(97),
    [sym_module_expression] = STATE(97),
    [sym_function_expression] = STATE(97),
    [sym_call_expression] = STATE(97),
    [sym_assignment_expression] = STATE(97),
    [sym_binary_expression] = STATE(97),
    [sym_pair_expression] = STATE(97),
    [sym_conditional_expression] = STATE(97),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(507),
    [anon_sym_function] = ACTIONS(12),
    [anon_sym_if] = ACTIONS(14),
    [sym_identifier] = ACTIONS(288),
    [sym_number] = ACTIONS(290),
    [sym_string] = ACTIONS(290),
    [sym_comment] = ACTIONS(20),
  },
  [147] = {
    [aux_sym__expression_list_repeat1] = STATE(99),
    [anon_sym_end] = ACTIONS(507),
    [anon_sym_LF] = ACTIONS(509),
    [anon_sym_SEMI] = ACTIONS(511),
    [sym_comment] = ACTIONS(60),
  },
  [148] = {
    [anon_sym_module] = ACTIONS(458),
    [anon_sym_function] = ACTIONS(458),
    [anon_sym_LPAREN] = ACTIONS(456),
    [anon_sym_COMMA] = ACTIONS(456),
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
    [sym_comment] = ACTIONS(20),
  },
  [149] = {
    [anon_sym_end] = ACTIONS(513),
    [sym_comment] = ACTIONS(20),
  },
  [150] = {
    [sym_elseif_clause] = STATE(129),
    [sym_else_clause] = STATE(165),
    [aux_sym_conditional_expression_repeat1] = STATE(129),
    [anon_sym_end] = ACTIONS(513),
    [anon_sym_elseif] = ACTIONS(370),
    [anon_sym_else] = ACTIONS(222),
    [sym_comment] = ACTIONS(20),
  },
  [151] = {
    [sym__expression] = STATE(124),
    [sym_module_expression] = STATE(124),
    [sym_function_expression] = STATE(124),
    [sym_call_expression] = STATE(124),
    [sym_assignment_expression] = STATE(124),
    [sym_binary_expression] = STATE(124),
    [sym_pair_expression] = STATE(124),
    [sym_conditional_expression] = STATE(124),
    [sym_elseif_clause] = STATE(166),
    [sym_else_clause] = STATE(165),
    [aux_sym_conditional_expression_repeat1] = STATE(166),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(515),
    [anon_sym_function] = ACTIONS(12),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_elseif] = ACTIONS(220),
    [anon_sym_else] = ACTIONS(222),
    [sym_identifier] = ACTIONS(360),
    [sym_number] = ACTIONS(362),
    [sym_string] = ACTIONS(362),
    [sym_comment] = ACTIONS(20),
  },
  [152] = {
    [anon_sym_module] = ACTIONS(481),
    [anon_sym_function] = ACTIONS(481),
    [anon_sym_LPAREN] = ACTIONS(479),
    [anon_sym_COMMA] = ACTIONS(479),
    [anon_sym_RPAREN] = ACTIONS(479),
    [anon_sym_PIPE_PIPE] = ACTIONS(481),
    [anon_sym_AMP_AMP] = ACTIONS(479),
    [anon_sym_EQ_GT] = ACTIONS(479),
    [anon_sym_if] = ACTIONS(481),
    [sym_identifier] = ACTIONS(481),
    [sym_number] = ACTIONS(479),
    [sym_string] = ACTIONS(479),
    [sym__times_operator] = ACTIONS(481),
    [sym__plus_operator] = ACTIONS(481),
    [sym__arrow_operator] = ACTIONS(479),
    [sym__assign_operator] = ACTIONS(481),
    [sym_comment] = ACTIONS(20),
  },
  [153] = {
    [sym_argument_list] = STATE(22),
    [aux_sym__expression_list_repeat1] = STATE(168),
    [anon_sym_end] = ACTIONS(517),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_PIPE_PIPE] = ACTIONS(42),
    [anon_sym_AMP_AMP] = ACTIONS(44),
    [anon_sym_EQ_GT] = ACTIONS(218),
    [anon_sym_elseif] = ACTIONS(517),
    [anon_sym_else] = ACTIONS(517),
    [sym__times_operator] = ACTIONS(48),
    [sym__plus_operator] = ACTIONS(50),
    [sym__arrow_operator] = ACTIONS(224),
    [sym__assign_operator] = ACTIONS(226),
    [anon_sym_LF] = ACTIONS(519),
    [anon_sym_SEMI] = ACTIONS(521),
    [sym_comment] = ACTIONS(60),
  },
  [154] = {
    [sym__expression] = STATE(97),
    [sym_module_expression] = STATE(97),
    [sym_function_expression] = STATE(97),
    [sym_call_expression] = STATE(97),
    [sym_assignment_expression] = STATE(97),
    [sym_binary_expression] = STATE(97),
    [sym_pair_expression] = STATE(97),
    [sym_conditional_expression] = STATE(97),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(523),
    [anon_sym_function] = ACTIONS(12),
    [anon_sym_if] = ACTIONS(14),
    [sym_identifier] = ACTIONS(288),
    [sym_number] = ACTIONS(290),
    [sym_string] = ACTIONS(290),
    [sym_comment] = ACTIONS(20),
  },
  [155] = {
    [aux_sym__expression_list_repeat1] = STATE(99),
    [anon_sym_end] = ACTIONS(523),
    [anon_sym_LF] = ACTIONS(525),
    [anon_sym_SEMI] = ACTIONS(527),
    [sym_comment] = ACTIONS(60),
  },
  [156] = {
    [ts_builtin_sym_end] = ACTIONS(529),
    [anon_sym_end] = ACTIONS(531),
    [anon_sym_LPAREN] = ACTIONS(531),
    [anon_sym_PIPE_PIPE] = ACTIONS(531),
    [anon_sym_AMP_AMP] = ACTIONS(531),
    [anon_sym_EQ_GT] = ACTIONS(531),
    [anon_sym_elseif] = ACTIONS(531),
    [anon_sym_else] = ACTIONS(531),
    [sym__times_operator] = ACTIONS(531),
    [sym__plus_operator] = ACTIONS(531),
    [sym__arrow_operator] = ACTIONS(531),
    [sym__assign_operator] = ACTIONS(531),
    [anon_sym_LF] = ACTIONS(529),
    [anon_sym_SEMI] = ACTIONS(531),
    [sym_comment] = ACTIONS(60),
  },
  [157] = {
    [anon_sym_end] = ACTIONS(533),
    [sym_comment] = ACTIONS(20),
  },
  [158] = {
    [sym_elseif_clause] = STATE(129),
    [sym_else_clause] = STATE(171),
    [aux_sym_conditional_expression_repeat1] = STATE(129),
    [anon_sym_end] = ACTIONS(533),
    [anon_sym_elseif] = ACTIONS(370),
    [anon_sym_else] = ACTIONS(222),
    [sym_comment] = ACTIONS(20),
  },
  [159] = {
    [sym__expression] = STATE(124),
    [sym_module_expression] = STATE(124),
    [sym_function_expression] = STATE(124),
    [sym_call_expression] = STATE(124),
    [sym_assignment_expression] = STATE(124),
    [sym_binary_expression] = STATE(124),
    [sym_pair_expression] = STATE(124),
    [sym_conditional_expression] = STATE(124),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_function] = ACTIONS(12),
    [anon_sym_if] = ACTIONS(14),
    [sym_identifier] = ACTIONS(360),
    [sym_number] = ACTIONS(362),
    [sym_string] = ACTIONS(362),
    [sym_comment] = ACTIONS(20),
  },
  [160] = {
    [ts_builtin_sym_end] = ACTIONS(535),
    [anon_sym_end] = ACTIONS(537),
    [anon_sym_LPAREN] = ACTIONS(537),
    [anon_sym_PIPE_PIPE] = ACTIONS(537),
    [anon_sym_AMP_AMP] = ACTIONS(537),
    [anon_sym_EQ_GT] = ACTIONS(537),
    [anon_sym_elseif] = ACTIONS(537),
    [anon_sym_else] = ACTIONS(537),
    [sym__times_operator] = ACTIONS(537),
    [sym__plus_operator] = ACTIONS(537),
    [sym__arrow_operator] = ACTIONS(537),
    [sym__assign_operator] = ACTIONS(537),
    [anon_sym_LF] = ACTIONS(535),
    [anon_sym_SEMI] = ACTIONS(537),
    [sym_comment] = ACTIONS(60),
  },
  [161] = {
    [anon_sym_module] = ACTIONS(488),
    [anon_sym_function] = ACTIONS(488),
    [anon_sym_LPAREN] = ACTIONS(486),
    [anon_sym_COMMA] = ACTIONS(486),
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
    [sym_comment] = ACTIONS(20),
  },
  [162] = {
    [anon_sym_module] = ACTIONS(501),
    [anon_sym_function] = ACTIONS(501),
    [anon_sym_LPAREN] = ACTIONS(499),
    [anon_sym_COMMA] = ACTIONS(499),
    [anon_sym_RPAREN] = ACTIONS(499),
    [anon_sym_PIPE_PIPE] = ACTIONS(501),
    [anon_sym_AMP_AMP] = ACTIONS(499),
    [anon_sym_EQ_GT] = ACTIONS(499),
    [anon_sym_if] = ACTIONS(501),
    [sym_identifier] = ACTIONS(501),
    [sym_number] = ACTIONS(499),
    [sym_string] = ACTIONS(499),
    [sym__times_operator] = ACTIONS(501),
    [sym__plus_operator] = ACTIONS(501),
    [sym__arrow_operator] = ACTIONS(499),
    [sym__assign_operator] = ACTIONS(501),
    [sym_comment] = ACTIONS(20),
  },
  [163] = {
    [sym__expression] = STATE(97),
    [sym_module_expression] = STATE(97),
    [sym_function_expression] = STATE(97),
    [sym_call_expression] = STATE(97),
    [sym_assignment_expression] = STATE(97),
    [sym_binary_expression] = STATE(97),
    [sym_pair_expression] = STATE(97),
    [sym_conditional_expression] = STATE(97),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(539),
    [anon_sym_function] = ACTIONS(12),
    [anon_sym_if] = ACTIONS(14),
    [sym_identifier] = ACTIONS(288),
    [sym_number] = ACTIONS(290),
    [sym_string] = ACTIONS(290),
    [sym_comment] = ACTIONS(20),
  },
  [164] = {
    [anon_sym_module] = ACTIONS(531),
    [anon_sym_function] = ACTIONS(531),
    [anon_sym_LPAREN] = ACTIONS(529),
    [anon_sym_COMMA] = ACTIONS(529),
    [anon_sym_RPAREN] = ACTIONS(529),
    [anon_sym_PIPE_PIPE] = ACTIONS(531),
    [anon_sym_AMP_AMP] = ACTIONS(529),
    [anon_sym_EQ_GT] = ACTIONS(529),
    [anon_sym_if] = ACTIONS(531),
    [sym_identifier] = ACTIONS(531),
    [sym_number] = ACTIONS(529),
    [sym_string] = ACTIONS(529),
    [sym__times_operator] = ACTIONS(531),
    [sym__plus_operator] = ACTIONS(531),
    [sym__arrow_operator] = ACTIONS(529),
    [sym__assign_operator] = ACTIONS(531),
    [sym_comment] = ACTIONS(20),
  },
  [165] = {
    [anon_sym_end] = ACTIONS(541),
    [sym_comment] = ACTIONS(20),
  },
  [166] = {
    [sym_elseif_clause] = STATE(129),
    [sym_else_clause] = STATE(174),
    [aux_sym_conditional_expression_repeat1] = STATE(129),
    [anon_sym_end] = ACTIONS(541),
    [anon_sym_elseif] = ACTIONS(370),
    [anon_sym_else] = ACTIONS(222),
    [sym_comment] = ACTIONS(20),
  },
  [167] = {
    [sym__expression] = STATE(124),
    [sym_module_expression] = STATE(124),
    [sym_function_expression] = STATE(124),
    [sym_call_expression] = STATE(124),
    [sym_assignment_expression] = STATE(124),
    [sym_binary_expression] = STATE(124),
    [sym_pair_expression] = STATE(124),
    [sym_conditional_expression] = STATE(124),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(543),
    [anon_sym_function] = ACTIONS(12),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_elseif] = ACTIONS(543),
    [anon_sym_else] = ACTIONS(543),
    [sym_identifier] = ACTIONS(360),
    [sym_number] = ACTIONS(362),
    [sym_string] = ACTIONS(362),
    [sym_comment] = ACTIONS(20),
  },
  [168] = {
    [aux_sym__expression_list_repeat1] = STATE(128),
    [anon_sym_end] = ACTIONS(543),
    [anon_sym_elseif] = ACTIONS(543),
    [anon_sym_else] = ACTIONS(543),
    [anon_sym_LF] = ACTIONS(545),
    [anon_sym_SEMI] = ACTIONS(547),
    [sym_comment] = ACTIONS(60),
  },
  [169] = {
    [sym__expression] = STATE(97),
    [sym_module_expression] = STATE(97),
    [sym_function_expression] = STATE(97),
    [sym_call_expression] = STATE(97),
    [sym_assignment_expression] = STATE(97),
    [sym_binary_expression] = STATE(97),
    [sym_pair_expression] = STATE(97),
    [sym_conditional_expression] = STATE(97),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(549),
    [anon_sym_function] = ACTIONS(12),
    [anon_sym_if] = ACTIONS(14),
    [sym_identifier] = ACTIONS(288),
    [sym_number] = ACTIONS(290),
    [sym_string] = ACTIONS(290),
    [sym_comment] = ACTIONS(20),
  },
  [170] = {
    [ts_builtin_sym_end] = ACTIONS(551),
    [anon_sym_end] = ACTIONS(553),
    [anon_sym_LPAREN] = ACTIONS(553),
    [anon_sym_PIPE_PIPE] = ACTIONS(553),
    [anon_sym_AMP_AMP] = ACTIONS(553),
    [anon_sym_EQ_GT] = ACTIONS(553),
    [anon_sym_elseif] = ACTIONS(553),
    [anon_sym_else] = ACTIONS(553),
    [sym__times_operator] = ACTIONS(553),
    [sym__plus_operator] = ACTIONS(553),
    [sym__arrow_operator] = ACTIONS(553),
    [sym__assign_operator] = ACTIONS(553),
    [anon_sym_LF] = ACTIONS(551),
    [anon_sym_SEMI] = ACTIONS(553),
    [sym_comment] = ACTIONS(60),
  },
  [171] = {
    [anon_sym_end] = ACTIONS(555),
    [sym_comment] = ACTIONS(20),
  },
  [172] = {
    [anon_sym_module] = ACTIONS(537),
    [anon_sym_function] = ACTIONS(537),
    [anon_sym_LPAREN] = ACTIONS(535),
    [anon_sym_COMMA] = ACTIONS(535),
    [anon_sym_RPAREN] = ACTIONS(535),
    [anon_sym_PIPE_PIPE] = ACTIONS(537),
    [anon_sym_AMP_AMP] = ACTIONS(535),
    [anon_sym_EQ_GT] = ACTIONS(535),
    [anon_sym_if] = ACTIONS(537),
    [sym_identifier] = ACTIONS(537),
    [sym_number] = ACTIONS(535),
    [sym_string] = ACTIONS(535),
    [sym__times_operator] = ACTIONS(537),
    [sym__plus_operator] = ACTIONS(537),
    [sym__arrow_operator] = ACTIONS(535),
    [sym__assign_operator] = ACTIONS(537),
    [sym_comment] = ACTIONS(20),
  },
  [173] = {
    [anon_sym_module] = ACTIONS(553),
    [anon_sym_function] = ACTIONS(553),
    [anon_sym_LPAREN] = ACTIONS(551),
    [anon_sym_COMMA] = ACTIONS(551),
    [anon_sym_RPAREN] = ACTIONS(551),
    [anon_sym_PIPE_PIPE] = ACTIONS(553),
    [anon_sym_AMP_AMP] = ACTIONS(551),
    [anon_sym_EQ_GT] = ACTIONS(551),
    [anon_sym_if] = ACTIONS(553),
    [sym_identifier] = ACTIONS(553),
    [sym_number] = ACTIONS(551),
    [sym_string] = ACTIONS(551),
    [sym__times_operator] = ACTIONS(553),
    [sym__plus_operator] = ACTIONS(553),
    [sym__arrow_operator] = ACTIONS(551),
    [sym__assign_operator] = ACTIONS(553),
    [sym_comment] = ACTIONS(20),
  },
  [174] = {
    [anon_sym_end] = ACTIONS(557),
    [sym_comment] = ACTIONS(20),
  },
  [175] = {
    [sym__expression] = STATE(124),
    [sym_module_expression] = STATE(124),
    [sym_function_expression] = STATE(124),
    [sym_call_expression] = STATE(124),
    [sym_assignment_expression] = STATE(124),
    [sym_binary_expression] = STATE(124),
    [sym_pair_expression] = STATE(124),
    [sym_conditional_expression] = STATE(124),
    [anon_sym_module] = ACTIONS(10),
    [anon_sym_end] = ACTIONS(559),
    [anon_sym_function] = ACTIONS(12),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_elseif] = ACTIONS(559),
    [anon_sym_else] = ACTIONS(559),
    [sym_identifier] = ACTIONS(360),
    [sym_number] = ACTIONS(362),
    [sym_string] = ACTIONS(362),
    [sym_comment] = ACTIONS(20),
  },
  [176] = {
    [ts_builtin_sym_end] = ACTIONS(561),
    [anon_sym_end] = ACTIONS(563),
    [anon_sym_LPAREN] = ACTIONS(563),
    [anon_sym_PIPE_PIPE] = ACTIONS(563),
    [anon_sym_AMP_AMP] = ACTIONS(563),
    [anon_sym_EQ_GT] = ACTIONS(563),
    [anon_sym_elseif] = ACTIONS(563),
    [anon_sym_else] = ACTIONS(563),
    [sym__times_operator] = ACTIONS(563),
    [sym__plus_operator] = ACTIONS(563),
    [sym__arrow_operator] = ACTIONS(563),
    [sym__assign_operator] = ACTIONS(563),
    [anon_sym_LF] = ACTIONS(561),
    [anon_sym_SEMI] = ACTIONS(563),
    [sym_comment] = ACTIONS(60),
  },
  [177] = {
    [anon_sym_module] = ACTIONS(563),
    [anon_sym_function] = ACTIONS(563),
    [anon_sym_LPAREN] = ACTIONS(561),
    [anon_sym_COMMA] = ACTIONS(561),
    [anon_sym_RPAREN] = ACTIONS(561),
    [anon_sym_PIPE_PIPE] = ACTIONS(563),
    [anon_sym_AMP_AMP] = ACTIONS(561),
    [anon_sym_EQ_GT] = ACTIONS(561),
    [anon_sym_if] = ACTIONS(563),
    [sym_identifier] = ACTIONS(563),
    [sym_number] = ACTIONS(561),
    [sym_string] = ACTIONS(561),
    [sym__times_operator] = ACTIONS(563),
    [sym__plus_operator] = ACTIONS(563),
    [sym__arrow_operator] = ACTIONS(561),
    [sym__assign_operator] = ACTIONS(563),
    [sym_comment] = ACTIONS(20),
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
  [16] = {.count = 1, .reusable = false}, SHIFT(6),
  [18] = {.count = 1, .reusable = true}, SHIFT(6),
  [20] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [22] = {.count = 1, .reusable = true}, SHIFT(7),
  [24] = {.count = 1, .reusable = true}, SHIFT(8),
  [26] = {.count = 1, .reusable = false}, SHIFT(9),
  [28] = {.count = 1, .reusable = false}, SHIFT(10),
  [30] = {.count = 1, .reusable = false}, SHIFT(11),
  [32] = {.count = 1, .reusable = false}, SHIFT(12),
  [34] = {.count = 1, .reusable = true}, SHIFT(12),
  [36] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [38] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [40] = {.count = 1, .reusable = false}, SHIFT(13),
  [42] = {.count = 1, .reusable = false}, SHIFT(14),
  [44] = {.count = 1, .reusable = false}, SHIFT(15),
  [46] = {.count = 1, .reusable = false}, SHIFT(16),
  [48] = {.count = 1, .reusable = false}, SHIFT(17),
  [50] = {.count = 1, .reusable = false}, SHIFT(18),
  [52] = {.count = 1, .reusable = false}, SHIFT(19),
  [54] = {.count = 1, .reusable = false}, SHIFT(20),
  [56] = {.count = 1, .reusable = true}, SHIFT(21),
  [58] = {.count = 1, .reusable = false}, SHIFT(21),
  [60] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [62] = {.count = 1, .reusable = false}, SHIFT(24),
  [64] = {.count = 1, .reusable = false}, SHIFT(25),
  [66] = {.count = 1, .reusable = true}, SHIFT(25),
  [68] = {.count = 1, .reusable = true}, SHIFT(26),
  [70] = {.count = 1, .reusable = true}, SHIFT(28),
  [72] = {.count = 1, .reusable = true}, SHIFT(29),
  [74] = {.count = 1, .reusable = false}, SHIFT(30),
  [76] = {.count = 1, .reusable = true}, SHIFT(30),
  [78] = {.count = 1, .reusable = true}, SHIFT(31),
  [80] = {.count = 1, .reusable = false}, SHIFT(32),
  [82] = {.count = 1, .reusable = true}, SHIFT(33),
  [84] = {.count = 1, .reusable = true}, SHIFT(34),
  [86] = {.count = 1, .reusable = false}, SHIFT(39),
  [88] = {.count = 1, .reusable = true}, SHIFT(39),
  [90] = {.count = 1, .reusable = false}, SHIFT(35),
  [92] = {.count = 1, .reusable = false}, SHIFT(36),
  [94] = {.count = 1, .reusable = true}, SHIFT(37),
  [96] = {.count = 1, .reusable = false}, SHIFT(38),
  [98] = {.count = 1, .reusable = true}, SHIFT(41),
  [100] = {.count = 1, .reusable = false}, SHIFT(42),
  [102] = {.count = 1, .reusable = true}, SHIFT(42),
  [104] = {.count = 1, .reusable = false}, SHIFT(43),
  [106] = {.count = 1, .reusable = true}, SHIFT(43),
  [108] = {.count = 1, .reusable = false}, SHIFT(44),
  [110] = {.count = 1, .reusable = true}, SHIFT(44),
  [112] = {.count = 1, .reusable = false}, SHIFT(45),
  [114] = {.count = 1, .reusable = true}, SHIFT(45),
  [116] = {.count = 1, .reusable = false}, SHIFT(46),
  [118] = {.count = 1, .reusable = true}, SHIFT(46),
  [120] = {.count = 1, .reusable = false}, SHIFT(47),
  [122] = {.count = 1, .reusable = true}, SHIFT(47),
  [124] = {.count = 1, .reusable = false}, SHIFT(48),
  [126] = {.count = 1, .reusable = true}, SHIFT(48),
  [128] = {.count = 1, .reusable = false}, SHIFT(49),
  [130] = {.count = 1, .reusable = true}, SHIFT(49),
  [132] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [134] = {.count = 1, .reusable = false}, SHIFT(50),
  [136] = {.count = 1, .reusable = true}, SHIFT(50),
  [138] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2),
  [140] = {.count = 1, .reusable = false}, REDUCE(sym_call_expression, 2),
  [142] = {.count = 1, .reusable = true}, SHIFT(51),
  [144] = {.count = 1, .reusable = false}, SHIFT(51),
  [146] = {.count = 1, .reusable = true}, REDUCE(sym_module_expression, 3),
  [148] = {.count = 1, .reusable = false}, REDUCE(sym_module_expression, 3),
  [150] = {.count = 1, .reusable = false}, SHIFT(53),
  [152] = {.count = 1, .reusable = false}, SHIFT(54),
  [154] = {.count = 1, .reusable = false}, SHIFT(55),
  [156] = {.count = 1, .reusable = false}, SHIFT(56),
  [158] = {.count = 1, .reusable = true}, SHIFT(57),
  [160] = {.count = 1, .reusable = false}, SHIFT(57),
  [162] = {.count = 1, .reusable = true}, SHIFT(59),
  [164] = {.count = 1, .reusable = true}, SHIFT(60),
  [166] = {.count = 1, .reusable = false}, SHIFT(61),
  [168] = {.count = 1, .reusable = false}, SHIFT(62),
  [170] = {.count = 1, .reusable = true}, SHIFT(62),
  [172] = {.count = 1, .reusable = false}, SHIFT(63),
  [174] = {.count = 1, .reusable = false}, SHIFT(64),
  [176] = {.count = 1, .reusable = true}, SHIFT(64),
  [178] = {.count = 1, .reusable = false}, SHIFT(66),
  [180] = {.count = 1, .reusable = true}, SHIFT(66),
  [182] = {.count = 1, .reusable = true}, SHIFT(67),
  [184] = {.count = 1, .reusable = false}, SHIFT(68),
  [186] = {.count = 1, .reusable = true}, SHIFT(68),
  [188] = {.count = 1, .reusable = false}, SHIFT(69),
  [190] = {.count = 1, .reusable = true}, SHIFT(69),
  [192] = {.count = 1, .reusable = false}, SHIFT(70),
  [194] = {.count = 1, .reusable = true}, SHIFT(70),
  [196] = {.count = 1, .reusable = false}, SHIFT(71),
  [198] = {.count = 1, .reusable = true}, SHIFT(71),
  [200] = {.count = 1, .reusable = false}, SHIFT(72),
  [202] = {.count = 1, .reusable = true}, SHIFT(72),
  [204] = {.count = 1, .reusable = false}, SHIFT(73),
  [206] = {.count = 1, .reusable = true}, SHIFT(73),
  [208] = {.count = 1, .reusable = false}, SHIFT(74),
  [210] = {.count = 1, .reusable = true}, SHIFT(74),
  [212] = {.count = 1, .reusable = false}, SHIFT(75),
  [214] = {.count = 1, .reusable = true}, SHIFT(75),
  [216] = {.count = 1, .reusable = false}, SHIFT(76),
  [218] = {.count = 1, .reusable = false}, SHIFT(77),
  [220] = {.count = 1, .reusable = false}, SHIFT(78),
  [222] = {.count = 1, .reusable = false}, SHIFT(79),
  [224] = {.count = 1, .reusable = false}, SHIFT(80),
  [226] = {.count = 1, .reusable = false}, SHIFT(81),
  [228] = {.count = 1, .reusable = true}, SHIFT(82),
  [230] = {.count = 1, .reusable = false}, SHIFT(82),
  [232] = {.count = 1, .reusable = true}, REDUCE(sym_argument_list, 2),
  [234] = {.count = 1, .reusable = false}, REDUCE(sym_argument_list, 2),
  [236] = {.count = 1, .reusable = true}, SHIFT(86),
  [238] = {.count = 1, .reusable = true}, SHIFT(87),
  [240] = {.count = 1, .reusable = true}, SHIFT(88),
  [242] = {.count = 1, .reusable = true}, SHIFT(89),
  [244] = {.count = 1, .reusable = false}, SHIFT(90),
  [246] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3),
  [248] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3),
  [250] = {.count = 1, .reusable = true}, REDUCE(sym_pair_expression, 3),
  [252] = {.count = 1, .reusable = false}, REDUCE(sym_pair_expression, 3),
  [254] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 3),
  [256] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_expression, 3),
  [258] = {.count = 1, .reusable = true}, REDUCE(aux_sym__expression_list_repeat1, 2),
  [260] = {.count = 1, .reusable = false}, REDUCE(aux_sym__expression_list_repeat1, 2),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 3),
  [264] = {.count = 2, .reusable = true}, REDUCE(aux_sym__expression_list_repeat1, 2), SHIFT_REPEAT(92),
  [267] = {.count = 2, .reusable = false}, REDUCE(aux_sym__expression_list_repeat1, 2), SHIFT_REPEAT(92),
  [270] = {.count = 1, .reusable = true}, REDUCE(sym_module_expression, 4),
  [272] = {.count = 1, .reusable = false}, REDUCE(sym_module_expression, 4),
  [274] = {.count = 1, .reusable = false}, SHIFT(93),
  [276] = {.count = 1, .reusable = true}, SHIFT(93),
  [278] = {.count = 1, .reusable = false}, SHIFT(94),
  [280] = {.count = 1, .reusable = true}, SHIFT(94),
  [282] = {.count = 1, .reusable = false}, SHIFT(95),
  [284] = {.count = 1, .reusable = true}, SHIFT(95),
  [286] = {.count = 1, .reusable = false}, SHIFT(96),
  [288] = {.count = 1, .reusable = false}, SHIFT(97),
  [290] = {.count = 1, .reusable = true}, SHIFT(97),
  [292] = {.count = 1, .reusable = true}, SHIFT(98),
  [294] = {.count = 1, .reusable = false}, SHIFT(98),
  [296] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_list, 2),
  [298] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 2),
  [300] = {.count = 1, .reusable = true}, SHIFT(100),
  [302] = {.count = 1, .reusable = true}, SHIFT(101),
  [304] = {.count = 1, .reusable = true}, REDUCE(sym_function_expression, 4),
  [306] = {.count = 1, .reusable = false}, REDUCE(sym_function_expression, 4),
  [308] = {.count = 1, .reusable = false}, SHIFT(103),
  [310] = {.count = 1, .reusable = true}, SHIFT(104),
  [312] = {.count = 1, .reusable = false}, SHIFT(104),
  [314] = {.count = 1, .reusable = false}, SHIFT(106),
  [316] = {.count = 1, .reusable = true}, SHIFT(107),
  [318] = {.count = 1, .reusable = false}, SHIFT(107),
  [320] = {.count = 1, .reusable = false}, SHIFT(109),
  [322] = {.count = 1, .reusable = false}, SHIFT(110),
  [324] = {.count = 1, .reusable = true}, SHIFT(110),
  [326] = {.count = 1, .reusable = false}, SHIFT(111),
  [328] = {.count = 1, .reusable = true}, SHIFT(112),
  [330] = {.count = 1, .reusable = false}, SHIFT(112),
  [332] = {.count = 1, .reusable = true}, SHIFT(116),
  [334] = {.count = 1, .reusable = true}, REDUCE(sym_conditional_expression, 4),
  [336] = {.count = 1, .reusable = false}, REDUCE(sym_conditional_expression, 4),
  [338] = {.count = 1, .reusable = false}, SHIFT(118),
  [340] = {.count = 1, .reusable = true}, SHIFT(118),
  [342] = {.count = 1, .reusable = false}, SHIFT(119),
  [344] = {.count = 1, .reusable = true}, SHIFT(119),
  [346] = {.count = 1, .reusable = false}, SHIFT(120),
  [348] = {.count = 1, .reusable = true}, SHIFT(120),
  [350] = {.count = 1, .reusable = false}, SHIFT(121),
  [352] = {.count = 1, .reusable = true}, SHIFT(121),
  [354] = {.count = 1, .reusable = false}, SHIFT(122),
  [356] = {.count = 1, .reusable = true}, SHIFT(122),
  [358] = {.count = 1, .reusable = false}, SHIFT(123),
  [360] = {.count = 1, .reusable = false}, SHIFT(124),
  [362] = {.count = 1, .reusable = true}, SHIFT(124),
  [364] = {.count = 1, .reusable = true}, SHIFT(123),
  [366] = {.count = 1, .reusable = true}, SHIFT(127),
  [368] = {.count = 1, .reusable = false}, SHIFT(127),
  [370] = {.count = 1, .reusable = true}, SHIFT(78),
  [372] = {.count = 1, .reusable = false}, SHIFT(130),
  [374] = {.count = 1, .reusable = true}, SHIFT(130),
  [376] = {.count = 1, .reusable = true}, REDUCE(sym_argument_list, 3),
  [378] = {.count = 1, .reusable = false}, REDUCE(sym_argument_list, 3),
  [380] = {.count = 1, .reusable = false}, SHIFT(131),
  [382] = {.count = 1, .reusable = true}, SHIFT(131),
  [384] = {.count = 1, .reusable = false}, SHIFT(132),
  [386] = {.count = 1, .reusable = true}, SHIFT(132),
  [388] = {.count = 1, .reusable = false}, SHIFT(133),
  [390] = {.count = 1, .reusable = true}, SHIFT(133),
  [392] = {.count = 1, .reusable = true}, SHIFT(134),
  [394] = {.count = 1, .reusable = true}, REDUCE(sym_module_expression, 5),
  [396] = {.count = 1, .reusable = false}, REDUCE(sym_module_expression, 5),
  [398] = {.count = 1, .reusable = false}, SHIFT(136),
  [400] = {.count = 2, .reusable = true}, REDUCE(aux_sym__expression_list_repeat1, 2), SHIFT_REPEAT(137),
  [403] = {.count = 2, .reusable = false}, REDUCE(aux_sym__expression_list_repeat1, 2), SHIFT_REPEAT(137),
  [406] = {.count = 1, .reusable = true}, SHIFT(138),
  [408] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_list, 3),
  [410] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 3),
  [412] = {.count = 1, .reusable = true}, SHIFT(139),
  [414] = {.count = 1, .reusable = true}, REDUCE(sym_function_expression, 5),
  [416] = {.count = 1, .reusable = false}, REDUCE(sym_function_expression, 5),
  [418] = {.count = 1, .reusable = false}, SHIFT(141),
  [420] = {.count = 1, .reusable = true}, SHIFT(142),
  [422] = {.count = 1, .reusable = false}, SHIFT(142),
  [424] = {.count = 1, .reusable = false}, SHIFT(143),
  [426] = {.count = 1, .reusable = true}, SHIFT(144),
  [428] = {.count = 1, .reusable = false}, SHIFT(144),
  [430] = {.count = 1, .reusable = false}, SHIFT(145),
  [432] = {.count = 1, .reusable = true}, SHIFT(146),
  [434] = {.count = 1, .reusable = false}, SHIFT(146),
  [436] = {.count = 1, .reusable = false}, SHIFT(148),
  [438] = {.count = 1, .reusable = true}, SHIFT(148),
  [440] = {.count = 1, .reusable = true}, SHIFT(151),
  [442] = {.count = 1, .reusable = false}, SHIFT(151),
  [444] = {.count = 1, .reusable = true}, SHIFT(152),
  [446] = {.count = 1, .reusable = false}, SHIFT(153),
  [448] = {.count = 1, .reusable = true}, SHIFT(153),
  [450] = {.count = 1, .reusable = false}, REDUCE(sym_else_clause, 2),
  [452] = {.count = 1, .reusable = true}, SHIFT(154),
  [454] = {.count = 1, .reusable = false}, SHIFT(154),
  [456] = {.count = 1, .reusable = true}, REDUCE(sym_conditional_expression, 5),
  [458] = {.count = 1, .reusable = false}, REDUCE(sym_conditional_expression, 5),
  [460] = {.count = 1, .reusable = true}, SHIFT(156),
  [462] = {.count = 1, .reusable = false}, SHIFT(156),
  [464] = {.count = 2, .reusable = true}, REDUCE(aux_sym__expression_list_repeat1, 2), SHIFT_REPEAT(159),
  [467] = {.count = 2, .reusable = false}, REDUCE(aux_sym__expression_list_repeat1, 2), SHIFT_REPEAT(159),
  [470] = {.count = 1, .reusable = true}, REDUCE(aux_sym_conditional_expression_repeat1, 2),
  [472] = {.count = 2, .reusable = true}, REDUCE(aux_sym_conditional_expression_repeat1, 2), SHIFT_REPEAT(78),
  [475] = {.count = 1, .reusable = false}, REDUCE(aux_sym_conditional_expression_repeat1, 2),
  [477] = {.count = 1, .reusable = true}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [479] = {.count = 1, .reusable = true}, REDUCE(sym_argument_list, 4),
  [481] = {.count = 1, .reusable = false}, REDUCE(sym_argument_list, 4),
  [483] = {.count = 2, .reusable = true}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(86),
  [486] = {.count = 1, .reusable = true}, REDUCE(sym_module_expression, 6),
  [488] = {.count = 1, .reusable = false}, REDUCE(sym_module_expression, 6),
  [490] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [492] = {.count = 1, .reusable = false}, REDUCE(sym_parameter_list, 4),
  [494] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 4),
  [496] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(100),
  [499] = {.count = 1, .reusable = true}, REDUCE(sym_function_expression, 6),
  [501] = {.count = 1, .reusable = false}, REDUCE(sym_function_expression, 6),
  [503] = {.count = 1, .reusable = false}, SHIFT(160),
  [505] = {.count = 1, .reusable = false}, SHIFT(161),
  [507] = {.count = 1, .reusable = false}, SHIFT(162),
  [509] = {.count = 1, .reusable = true}, SHIFT(163),
  [511] = {.count = 1, .reusable = false}, SHIFT(163),
  [513] = {.count = 1, .reusable = true}, SHIFT(164),
  [515] = {.count = 1, .reusable = false}, SHIFT(164),
  [517] = {.count = 1, .reusable = false}, REDUCE(sym_elseif_clause, 3),
  [519] = {.count = 1, .reusable = true}, SHIFT(167),
  [521] = {.count = 1, .reusable = false}, SHIFT(167),
  [523] = {.count = 1, .reusable = false}, REDUCE(sym_else_clause, 3),
  [525] = {.count = 1, .reusable = true}, SHIFT(169),
  [527] = {.count = 1, .reusable = false}, SHIFT(169),
  [529] = {.count = 1, .reusable = true}, REDUCE(sym_conditional_expression, 6),
  [531] = {.count = 1, .reusable = false}, REDUCE(sym_conditional_expression, 6),
  [533] = {.count = 1, .reusable = true}, SHIFT(170),
  [535] = {.count = 1, .reusable = true}, REDUCE(sym_function_expression, 7),
  [537] = {.count = 1, .reusable = false}, REDUCE(sym_function_expression, 7),
  [539] = {.count = 1, .reusable = false}, SHIFT(172),
  [541] = {.count = 1, .reusable = true}, SHIFT(173),
  [543] = {.count = 1, .reusable = false}, REDUCE(sym_elseif_clause, 4),
  [545] = {.count = 1, .reusable = true}, SHIFT(175),
  [547] = {.count = 1, .reusable = false}, SHIFT(175),
  [549] = {.count = 1, .reusable = false}, REDUCE(sym_else_clause, 4),
  [551] = {.count = 1, .reusable = true}, REDUCE(sym_conditional_expression, 7),
  [553] = {.count = 1, .reusable = false}, REDUCE(sym_conditional_expression, 7),
  [555] = {.count = 1, .reusable = true}, SHIFT(176),
  [557] = {.count = 1, .reusable = true}, SHIFT(177),
  [559] = {.count = 1, .reusable = false}, REDUCE(sym_elseif_clause, 5),
  [561] = {.count = 1, .reusable = true}, REDUCE(sym_conditional_expression, 8),
  [563] = {.count = 1, .reusable = false}, REDUCE(sym_conditional_expression, 8),
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
